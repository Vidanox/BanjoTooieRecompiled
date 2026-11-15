// Host-side implementation of Tooie's overlay syscall subsystem.
//
// Tooie enters a relocatable overlay through a MIPS `syscall` instruction in
// the `overlay_syscalls` table (0x80082540). N64Recomp emits every such
// instruction as `recomp_syscall_handler(rdram, ctx, <thunk vram>)`, and
// nothing in N64ModernRuntime defines that function (Banjo-Kazooie has no
// syscalls, so BanjoRecomp never links it).
//
// The design mirrors the retail `syscall_handler` (0x80081E74):
//
//   1. First entry: the thunk word is still the raw `syscall`. Restore the
//      exception path's `$t0` contract (the faulting thunk address) and run the
//      game's own recompiled `syscall_handler`. That performs the real overlay
//      load (`ovl_load`), relocation, and then patches the thunk into
//      `j overlay+0x10` via `func_80081F64`.
//
//   2. Re-entry: the thunk word is now that `j`. Decode the trampoline, read
//      the requested entrypoint offset from the delay slot, and dispatch
//      natively through librecomp's loaded-function map.
//
// The `jr $t0` tail of `syscall_handler` cannot be left to the recompiled
// handler: N64Recomp emits `LOOKUP_FUNC(ctx->r8)` there, and on first entry
// `$t0` is the thunk address rather than a function. A `[[patches.hook]]` at
// 0x80081F5C replaces that tail with a call back into this function.

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <span>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "funcs.h"
#include "recomp.h"
#include "register_overlays.hpp"
#include "tooie_recomp.h"
#include "tooie_visibility.hpp"

// CIC-NUS-6105 challenge/response, vendored by RT64's mupen64plus-core copy.
extern "C" {
#include "mupen64plus-core/src/device/pif/n64_cic_nus_6105.h"
}

#include "librecomp/addresses.hpp"
#include "librecomp/game.hpp"
#include "librecomp/overlays.hpp"
#include "ultramodern/config.hpp"
#include "ultramodern/ultramodern.hpp"

// --- Host backtraces, for the diagnostics below -----------------------------
//
// Several probes print the *host* call stack, because the generated C calls the
// guest's callees as plain C functions: the host stack names the recompiled
// functions that led to a call, where the guest `$ra` cannot (see the note in
// `tooie_probe_slot_table`).
//
// The two platforms need different primitives, so the probes go through these
// two helpers rather than calling either directly. On Windows the frames are
// made image-relative with the linker's `__ImageBase`, so they symbolize
// against `build-cmake/BanjoTooieRecompiled.map`; on ELF there is no image base
// and the values are absolute, for `addr2line`.
#if defined(_WIN32)
// The linker-provided image base, used to turn a host return address into
// an image RVA that `build-cmake/BanjoTooieRecompiled.map` can symbolize.
extern "C" const char __ImageBase;

// ntdll, linked by the CRT's default libraries.
extern "C" __declspec(dllimport) unsigned short __stdcall
RtlCaptureStackBackTrace(unsigned long frames_to_skip,
                         unsigned long frames_to_capture,
                         void** back_trace, unsigned long* back_trace_hash);

inline unsigned short host_backtrace(void** frames, unsigned count) {
    return RtlCaptureStackBackTrace(0, count, frames, nullptr);
}

inline uintptr_t host_image_base() {
    return reinterpret_cast<uintptr_t>(&__ImageBase);
}
#else
#include <execinfo.h>

inline unsigned short host_backtrace(void** frames, unsigned count) {
    const int captured = ::backtrace(frames, static_cast<int>(count));
    return captured > 0 ? static_cast<unsigned short>(captured) : 0;
}

inline uintptr_t host_image_base() { return 0; }
#endif

namespace {

constexpr uint32_t kSyscallInstructionMask = 0xFC00003FU;
constexpr uint32_t kSyscallInstruction = 0x0000000CU;

constexpr uint32_t kJumpInstructionMask = 0xFC000000U;
constexpr uint32_t kJumpInstruction = 0x08000000U;
constexpr uint32_t kJumpTargetMask = 0x03FFFFFFU;

constexpr uint32_t kOverlayTrampolineOffset = 0x10U;
constexpr uint32_t kOverlayEntrypointTableOffset = 0x38U;
constexpr uint32_t kOverlayEntrypointCountOffset = 0x08U;
constexpr uint32_t kOverlayRelocationCountOffset = 0x0AU;
constexpr uint32_t kOverlaySecondaryRelocationCountOffset = 0x0CU;
constexpr uint32_t kOverlayNameLengthOffset = 0x0EU;
constexpr uint32_t kOverlayIndexOffset = 0x2CU;
constexpr uint32_t kOverlayRuntimeStateOffset = 0x32U;
constexpr uint32_t kOverlayRomRelocationKeyTableOffset = 0x40U;
constexpr uint16_t kOverlayAutoUnloadInstructionBit = 0x1000U;

constexpr uint32_t kCartridgeRomAddressMask = 0x0FFFFFFFU;
constexpr uint32_t kRdramStart = 0x80000000U;
constexpr uint32_t kRdramEnd = 0x80800000U;

// Boot-time constants. core1 and core2 are both inflated directly into their
// final RDRAM ranges by Tooie's own boot loader (core1 by the inflated image's
// entry point, core2 by the generic decompressor `func_80019EC0`), so the
// runtime's PI layer never observes a DMA and both sections must be registered
// explicitly or every indirect call into them fails in `LOOKUP_FUNC`.
constexpr gpr kOsRead = 0;
constexpr gpr kOsWrite = 1;

// PIF request block layout, as used by Tooie's SI submission helper at
// 0x8007D850 (func_8001E048 zeroes 0x40 bytes and sets status 0x02 to request
// a CIC challenge).
constexpr uint32_t kPifStatusOffset = 0x3FU;
constexpr uint32_t kCicChallengeOffset = 0x30U;
constexpr uint32_t kCicChallengeBytes = 0x0FU;
constexpr uint32_t kCicChallengeNibbles = kCicChallengeBytes * 2U;
constexpr uint8_t kPifCicChallenge = 0x02U;
constexpr uint32_t kCore1RomStart = 0x01E29B60U;
constexpr int32_t kCore1Vram = static_cast<int32_t>(0x80012030U);
constexpr uint32_t kCore1Size = 0x00031350U;
constexpr uint32_t kCore2RomStart = 0x01E5AEB0U;
constexpr int32_t kCore2Vram = static_cast<int32_t>(0x800815C0U);
constexpr uint32_t kCore2Size = 0x000A5170U;
constexpr gpr kCicBootWord1 = 0xFFFFFFFF802FB1F4ULL;
constexpr gpr kCicBootWord2 = 0xFFFFFFFF802FE1C0ULL;
constexpr uint32_t kCicBootValue1 = 0xAD090010U;
constexpr uint32_t kCicBootValue2 = 0xAD170014U;

// core1's `__osViCurr` (decomp/symbol_addrs.us.txt), the guest-side VI context
// pointer libultra's `__osViGetCurrentContext` returns.
constexpr uint32_t kOsViCurrAddress = 0x80041540U;

uint32_t align_up(uint32_t value, uint32_t alignment) {
    return (value + alignment - 1U) & ~(alignment - 1U);
}

// TEMPORARY diagnostics: the overlay traces below fire on every dispatch. A
// game that enters a dispatch loop turns them into a flood that buries every
// other message, so cap each site and say once that it stopped reporting.
constexpr uint32_t kTracePrintLimit = 2000U;

bool should_trace(uint32_t& counter) {
    const uint32_t index = counter++;
    if (index < kTracePrintLimit) {
        return true;
    }
    if (index == kTracePrintLimit) {
        std::fprintf(stderr,
                     "  ... this trace site is now suppressed (further "
                     "occurrences are not printed)\n");
        std::fflush(stderr);
    }
    return false;
}

// Mirrors the field walk the retail loader uses to find the relocated code
// block inside a loaded overlay struct.
uint32_t get_overlay_code_base(uint8_t* rdram, const gpr overlay_address) {
    uint32_t cursor = static_cast<uint32_t>(overlay_address) +
        kOverlayEntrypointTableOffset;
    cursor += static_cast<uint32_t>(
        MEM_HU(kOverlayEntrypointCountOffset, overlay_address)) * sizeof(uint32_t);
    cursor += MEM_BU(kOverlayNameLengthOffset, overlay_address);
    cursor = align_up(cursor, alignof(uint32_t));
    cursor += static_cast<uint32_t>(
        MEM_HU(kOverlayRelocationCountOffset, overlay_address)) * sizeof(uint16_t);
    cursor = align_up(cursor, alignof(uint32_t));
    cursor += static_cast<uint32_t>(
        MEM_HU(kOverlaySecondaryRelocationCountOffset, overlay_address)) * sizeof(uint32_t);
    return align_up(cursor, 0x10U);
}

} // namespace

extern "C" void tooie_rom_read_word(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t rom_address = static_cast<uint32_t>(ctx->r4);
    const bool is_kseg1_cartridge_address =
        (rom_address & 0xF0000000U) == 0xB0000000U;
    const uint32_t rom_offset = is_kseg1_cartridge_address
        ? rom_address & kCartridgeRomAddressMask
        : rom_address;
    const gpr destination = ctx->r5;
    const std::span<const uint8_t> rom = recomp::get_rom();

    if (rom_offset > rom.size() ||
        sizeof(uint32_t) > rom.size() - rom_offset) {
        std::fprintf(stderr,
            "[Tooie] ROM PIO exceeds ROM: offset=0x%08X ROM=0x%zX\n",
            rom_offset, rom.size());
        ctx->r2 = static_cast<gpr>(-1);
        return;
    }

    recomp::do_rom_pio(rdram, destination, recomp::rom_base | rom_offset);
    ctx->r2 = 0;
}

// Tooie's boot-local __osPiRawStartDma receives a ROM offset rather than a
// physical cartridge address; the original libultra routine ORs that offset
// with osRomBase before programming the PI registers. N64ModernRuntime owns the
// selected ROM bytes, so perform the equivalent synchronous copy directly.
extern "C" void tooie_boot_pi_raw_start_dma(uint8_t* rdram,
                                            recomp_context* ctx) {
    const gpr direction = ctx->r4;
    const uint32_t device_address = static_cast<uint32_t>(ctx->r5);
    const gpr dram_address = ctx->r6;
    const uint32_t size = static_cast<uint32_t>(ctx->r7);
    const std::span<const uint8_t> rom = recomp::get_rom();

    if (direction != kOsRead) {
        std::fprintf(stderr,
            "[Tooie] Unsupported boot PI DMA direction %lld\n",
            static_cast<long long>(direction));
        ctx->r2 = static_cast<gpr>(-1);
        return;
    }

    if (device_address > rom.size() || size > rom.size() - device_address) {
        std::fprintf(stderr,
            "[Tooie] Boot PI DMA exceeds ROM: offset=0x%08X size=0x%08X "
            "ROM=0x%zX\n",
            device_address, size, rom.size());
        ctx->r2 = static_cast<gpr>(-1);
        return;
    }

    recomp::do_rom_read(rdram, dram_address,
                        recomp::rom_base | device_address, size);
    std::fprintf(stderr,
        "[probe-dma] dir=%d dev=0x%08X dram=0x%08X size=0x%X\n",
        (int)direction, device_address, (uint32_t)dram_address, size);
    std::fflush(stderr);
    ctx->r2 = 0;
}

extern "C" void tooie_probe(uint8_t* rdram, recomp_context* ctx, uint32_t id) {
    (void)rdram;
    std::fprintf(stderr,
        "[probe%u] a0=0x%08X a1=0x%08X a2=0x%08X a3=0x%08X s6=0x%08X s7=0x%08X "
        "sp=0x%08X ra=0x%08X\n",
        id, (uint32_t)ctx->r4, (uint32_t)ctx->r5, (uint32_t)ctx->r6,
        (uint32_t)ctx->r7, (uint32_t)ctx->r22, (uint32_t)ctx->r23,
        (uint32_t)ctx->r29, (uint32_t)ctx->r31);
    std::fflush(stderr);
}

extern "C" void tooie_probe_slot(uint8_t* rdram, recomp_context* ctx,
                                 uint32_t id) {
    (void)rdram;
    std::fprintf(stderr,
        "[slot%u] sp=0x%08X *(sp+0x1C)=0x%08X *(sp+0x18)=0x%08X\n",
        id, (uint32_t)ctx->r29, (uint32_t)MEM_W(0x1C, ctx->r29),
        (uint32_t)MEM_W(0x18, ctx->r29));
    std::fflush(stderr);
}

extern "C" void tooie_probe_ret(uint8_t* rdram, recomp_context* ctx,
                                uint32_t id) {
    (void)rdram;
    std::fprintf(stderr,
        "[ret%u] v0=0x%08X flag=0x%08X s7=0x%08X fp=0x%08X gp=0x%08X\n",
        id, (uint32_t)ctx->r2, (uint32_t)MEM_W(0xA70, ctx->r29),
        (uint32_t)ctx->r23, (uint32_t)ctx->r30, (uint32_t)ctx->r28);
    std::fflush(stderr);
}

// TEMPORARY diagnostic: print a leaf function's a0/ra.
extern "C" void tooie_probe_ptr(uint8_t* rdram, recomp_context* ctx,
                                uint32_t id) {
    (void)rdram;
    static int count = 0;
    if (count++ < 80) {
        std::fprintf(stderr,
            "[ptr%u] a0=0x%08X a1=0x%08X ra=0x%08X sp=0x%08X\n",
            id, (uint32_t)ctx->r4, (uint32_t)ctx->r5, (uint32_t)ctx->r31,
            (uint32_t)ctx->r29);
        std::fflush(stderr);
    }
}

// TEMPORARY diagnostic: print the effective address of `lw reg, offset(a0)`.
extern "C" void tooie_probe_ea(uint8_t* rdram, recomp_context* ctx,
                               uint32_t offset) {
    (void)rdram;
    static int count = 0;
    if (count++ < 60) {
        const uint64_t sum = static_cast<uint64_t>(ctx->r4) + offset;
        const uint64_t ea = sum - 0xFFFFFFFF80000000ULL;
        std::fprintf(stderr,
            "[ea] a0=0x%016llX off=0x%X sum=0x%016llX rdram_off=0x%llX "
            "guest=0x%08X\n",
            static_cast<unsigned long long>(ctx->r4), offset,
            static_cast<unsigned long long>(sum),
            static_cast<unsigned long long>(ea),
            static_cast<uint32_t>(ea + 0x80000000ULL));
        std::fflush(stderr);
    }
}

// TEMPORARY diagnostic: the record destructor's slot unlink.
//
// `func_800205D0(record)` is the only writer that clears a slot's *value* word:
// it reads `record + 0x30` (the slot address the creator stored there) and, if
// the slot still points back at this record, zeroes it. The level-load gate
// (`func_800C2AB8` -> `func_800C269C`) refuses an entry while its slot's value
// is non-zero, so if this never runs for the stuck records, the gate spins
// forever. Logging every call answers that directly.
extern "C" void tooie_probe_record_free(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    static uint32_t calls = 0;
    // `ctx->r4` is already sign-extended to a 64-bit gpr, which is what
    // `MEM_W` needs; truncating it to 32 bits and passing that back in
    // underflows the address computation and reads host memory before RDRAM.
    const gpr record = ctx->r4;
    const gpr slot_ptr = record ? MEM_W(0x30, record) : 0;
    const gpr slot_value = slot_ptr ? MEM_W(0x0, slot_ptr) : 0;
    const gpr frame = MEM_W(0, 0xFFFFFFFF800459C8ULL);
    if (calls < 400U) {
        std::fprintf(stderr,
            "[rec-free] #%u frame=%u record=0x%08X slot_ptr=0x%08X "
            "slot_value=0x%08X\n",
            calls, static_cast<uint32_t>(frame), static_cast<uint32_t>(record),
            static_cast<uint32_t>(slot_ptr),
            static_cast<uint32_t>(slot_value));
        std::fflush(stderr);
    }
    ++calls;
}

// TEMPORARY diagnostic: the gfx-task callback chain that retires records.
//
// `func_8001ED68(task)` is a task callback with no static caller -- it is
// reached through the task machinery. For a non-audio task it calls
// `func_8001EE34(task + 0x28)`, the gfx-record manager, whose only path to the
// record destructor (`func_800200B8` -> `func_800205D0`, the sole writer that
// clears an effect slot's value word) is inside it. If neither runs, records
// are created and never retired, so the level-load gate never sees a free slot.
extern "C" void tooie_probe_task_dispatch(uint8_t* rdram, recomp_context* ctx,
                                          uint32_t id) {
    (void)rdram;
    // One counter per probe id: sharing a single static across both hooks made
    // the first hook consume the whole print budget and the second look dead.
    static uint32_t calls[4] = {0, 0, 0, 0};
    static uint32_t seen[4] = {0, 0, 0, 0};
    if (id >= 4U) {
        return;
    }
    ++seen[id];
    const gpr frame = MEM_W(0, 0xFFFFFFFF800459C8ULL);
    // Print the first few calls and then once per frame change, so the log
    // shows whether the callback is still being driven *after* the game stops
    // advancing frames (a frozen frame counter with no further prints means the
    // task pipeline itself has stopped).
    static uint32_t last_frame[4] = {0xFFFFFFFFU, 0xFFFFFFFFU, 0xFFFFFFFFU,
                                     0xFFFFFFFFU};
    const bool frame_changed =
        static_cast<uint32_t>(frame) != last_frame[id];
    if (calls[id] < 12U || frame_changed) {
        std::fprintf(stderr, "[task%u] #%u frame=%u a0=0x%08X\n", id,
                     seen[id], static_cast<uint32_t>(frame),
                     static_cast<uint32_t>(ctx->r4));
        if (id == 1U && calls[id] < 12U) {
            const uintptr_t base = host_image_base();
            void* frames[10]{};
            const unsigned short n = host_backtrace(frames, 10);
            std::fprintf(stderr, "[task%u] host frames=%u:", id, n);
            for (unsigned i = 0; i < n; ++i) {
                std::fprintf(stderr, " 0x%zX",
                             reinterpret_cast<uintptr_t>(frames[i]) - base);
            }
            std::fprintf(stderr, "\n");
        }
        std::fflush(stderr);
    }
    last_frame[id] = static_cast<uint32_t>(frame);
    ++calls[id];
}

// Gives the cooperative scheduler a preemption point inside a pure-MIPS spin.
//
// `func_800C2AB8` is Tooie's level-transition cleanup: it sweeps object IDs
// 1..59 and retries the whole sweep while any type-3 entry is still pending.
// An entry is pending while its object-sound result slot is non-null, and that
// slot is released by the synthesizer player's event callback
// (`func_8001ED68` -> `func_8001EE34` -> `func_800200B8` -> `func_800205D0`),
// which is delivered to this thread as an external runtime message.
//
// On hardware that loop is preemptible, so the callback gets to run and the
// sweep terminates. The pinned N64ModernRuntime is cooperative and has no
// preemption point inside generated code, so the spin never delivers the
// message and the sweep retries forever -- measured: >1e9 iterations with game
// frame 1022 frozen, sound slot 2 still holding record 0x8005C0D8.
//
// Give the runtime one bounded scheduling point per sweep pass that still
// reports pending work. This changes neither the loop condition nor the object
// lifetimes; it only lets the message that releases the sound be delivered.
// `yield_self_1ms` is the runtime's own timed external-message drain followed
// by its priority check.
extern "C" void yield_self_1ms(uint8_t* rdram);
// Read by BT_PACELOG: every scheduling point the sweep has spent waiting.
std::atomic<uint32_t> g_sound_release_yields{0};
// src/main.cpp (audio clock) and ultramodern's VI thread, for BT_PACELOG.
extern "C" void tooie_audio_stats(uint64_t* in_frames, uint64_t* dropped_out,
                                  uint32_t* empty_queues, uint32_t* buffers,
                                  uint32_t* queued_us, uint32_t* in_rate,
                                  uint32_t* out_rate);
extern uint64_t total_vis;

extern "C" void tooie_yield_pending_sound(uint8_t* rdram, recomp_context* ctx) {
    // `s3` counts the entries this pass refused, i.e. the work still pending.
    // When it is zero the sweep is about to return, so there is nothing to wait
    // for and yielding would only slow the normal path down.
    if (ctx->r19 == 0) {
        return;
    }
    static uint32_t yields = 0;
    g_sound_release_yields.fetch_add(1, std::memory_order_relaxed);
    if (yields == 64U) {
        std::fprintf(stderr,
            "[Tooie] sound-release spin: 64 scheduling points at frame %u "
            "(still converging)\n",
            static_cast<uint32_t>(MEM_W(0, 0xFFFFFFFF800459C8ULL)));
        std::fflush(stderr);
    }
    ++yields;
    yield_self_1ms(rdram);
}

// The new-game intro keeps its scenes on the music's schedule with a wall-clock
// busy-wait: at the end of each scene `glintrosyncDll_entrypoint_1` polls
// `osGetCount` until the scene's cue time (a per-scene table in the overlay)
// has passed, then the next map loads. That loop makes no OS call, so in the
// cooperative runtime nothing else runs while it spins -- in particular the
// audio thread, which on hardware preempts it. Measured over the whole intro:
// 11 waits of 1.9-6.5 s, ~0.1 s of audio generated during each, and the score
// 34 s behind the pictures by Spiral Mountain (AGENTS.md 6.9).
//
// Hooked at the loop head (0x808002BC), so it runs only while the wait has
// not been met; the loop condition and the cue bookkeeping are untouched.
// BT_INTROSYNC_YIELD=off restores the starving spin for A/B.
std::atomic<uint32_t> g_intro_sync_yields{0};

extern "C" void tooie_yield_intro_sync(uint8_t* rdram, recomp_context* ctx) {
    (void)ctx;
    static const bool off = [] {
        const char* v = std::getenv("BT_INTROSYNC_YIELD");
        return v != nullptr && std::strcmp(v, "off") == 0;
    }();
    if (off) {
        return;
    }
    g_intro_sync_yields.fetch_add(1, std::memory_order_relaxed);
    yield_self_1ms(rdram);
}

// TEMPORARY diagnostic: the level-load gate's accept/refuse decision.
//
// Hooked at `0x800C2B28` in `func_800C2AB8`, i.e. immediately before
// `beql $v0, $zero, L_800C2B44`. At that point `r2` holds
// `func_800C269C(s2)`'s result and `r18` the entry index being swept, so this
// prints exactly which entries the gate accepts and which it refuses, and how
// many times each is retried. That distinguishes "the sweep is retrying one
// stuck entry forever" from "the sweep is progressing".
extern "C" void tooie_probe_gate(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    static uint32_t calls = 0;
    static uint32_t last_index = 0xFFFFFFFFU;
    static uint32_t last_result = 0xFFFFFFFFU;
    const uint32_t index = static_cast<uint32_t>(ctx->r18) & 0xFFU;
    const uint32_t result = static_cast<uint32_t>(ctx->r2);
    const gpr frame = MEM_W(0, 0xFFFFFFFF800459C8ULL);
    const bool changed = index != last_index || result != last_result;
    const bool periodic = calls != 0U && (calls % 200000U) == 0U;
    if (changed || calls < 40U || periodic) {
        std::fprintf(stderr,
            "[gate] #%u frame=%u index=%u result=%u%s\n", calls,
            static_cast<uint32_t>(frame), index, result,
            changed ? "" : " (repeat)");
        std::fflush(stderr);
    }
    last_index = index;
    last_result = result;
    ++calls;
}

// TEMPORARY diagnostic: entry probe for suexpression_entrypoint_10. Prints the
// entry arguments and the host call stack, which names the recompiled functions
// that led here.
extern "C" void tooie_probe_kseg1_entry(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    std::fprintf(stderr,
        "[entry-probe] a0=0x%016llX a1=0x%016llX a2=0x%016llX a3=0x%016llX "
        "sp=0x%016llX ra=0x%08X\n",
        (unsigned long long)ctx->r4, (unsigned long long)ctx->r5,
        (unsigned long long)ctx->r6, (unsigned long long)ctx->r7,
        (unsigned long long)ctx->r29, (uint32_t)ctx->r31);
    void* frames[16]{};
    const unsigned short n = host_backtrace(frames, 16);
    const uintptr_t base = host_image_base();
    std::fprintf(stderr, "[entry-probe] host frames=%u:", n);
    for (unsigned i = 0; i < n; ++i) {
        std::fprintf(stderr, " 0x%zX",
                     reinterpret_cast<uintptr_t>(frames[i]) - base);
    }
    std::fprintf(stderr, "\n");
    std::fflush(stderr);
}

// TEMPORARY diagnostic.
//
// func_80100094(object, index) returns
//
//     slot_table[*(int16_t*)(object + 0x82 + 2 * index)]
//
// where `slot_table` is the 8-byte-entry array at 0x8007BF10 (`func_8001B798`
// is its getter, `func_8001B754` frees an entry through `heap_free`). It
// returns 0 when *either* the object's own slot holds 0 *or* the table entry is
// 0, and `func_808034C4_chintrochar` hands that 0 straight to
// suexpression_entrypoint_10 as `a0`, which dereferences it. Report both sides
// of the lookup plus enough of the table to tell "this slot is empty" from
// "the table was never populated".
namespace {
// The MEM_* macros subtract 0xFFFFFFFF80000000, which is only the KSEG0 ->
// host offset for a 64-bit value whose high half is all ones; a computed
// 32-bit guest address has to be sign extended first.
gpr guest_address(uint32_t address) {
    return static_cast<gpr>(static_cast<int64_t>(static_cast<int32_t>(address)));
}

constexpr uint32_t kSlotTableBase = 0x8007BF10U;
constexpr uint32_t kSlotTableStride = 8U;
constexpr uint32_t kSlotTableSlots = 0xFAU;
}

// TEMPORARY diagnostic: `func_80100074(actor, index, size)` is the actor
// resource allocator (`func_800FFECC`): it creates/zeroes `size` bytes for
// `actor->slots[index]` and returns the pointer, and **frees** the slot when
// `size == 0`. Nothing else in the game can make `slots[index]` non-zero.
extern "C" void tooie_probe_create(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    static int count = 0;
    if (count++ >= 400) {
        return;
    }
    std::fprintf(stderr, "[create] obj=0x%08X index=%u size=0x%X\n",
                 static_cast<uint32_t>(ctx->r4), static_cast<uint32_t>(ctx->r5),
                 static_cast<uint32_t>(ctx->r6));
    std::fflush(stderr);
}

// TEMPORARY diagnostic: `func_80800000_chintrochar` is the chintrochar code
// segment's first function. It is the only place that creates the actor's
// slot-1 (spline/expression) resource, via `suexpression_entrypoint_7(actor, 1,
// size)` with `size` read out of a per-actor-type table indexed by
// `*(u16*)(actor + 0x76) >> 7`. Report whether it runs, on which actor, and
// from where.
extern "C" void tooie_probe_actor_setup(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    static int count = 0;
    if (count++ >= 40) {
        return;
    }
    void* frames[20]{};
    const unsigned short n = host_backtrace(frames, 20);
    const uintptr_t base = host_image_base();
    std::fprintf(stderr, "[setup] a0=0x%08X type=0x%04X host frames=%u:",
                 static_cast<uint32_t>(ctx->r4),
                 static_cast<uint32_t>(MEM_HU(0x76, ctx->r4)), n);
    for (unsigned i = 0; i < n; ++i) {
        std::fprintf(stderr, " 0x%zX",
                     reinterpret_cast<uintptr_t>(frames[i]) - base);
    }
    std::fprintf(stderr, "\n");
    std::fflush(stderr);
}

// TEMPORARY diagnostic: the actor update calls `*(def + 0x34)` as a function
// pointer, where `def` is the actor's definition block (returned by
// `func_80100368`). Log every dispatch so a `Failed to find function at ...`
// can be attributed to the actor and def that produced the pointer.
extern "C" void tooie_probe_dispatch(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    static int count = 0;
    if (count++ >= 400) {
        return;
    }
    std::fprintf(stderr,
        "[dispatch] actor=0x%08X def=0x%08X target=0x%08X def[0]=0x%08X "
        "def[0x34]=0x%08X\n",
        static_cast<uint32_t>(ctx->r16), static_cast<uint32_t>(ctx->r2),
        static_cast<uint32_t>(ctx->r3),
        static_cast<uint32_t>(MEM_W(0, ctx->r2)),
        static_cast<uint32_t>(MEM_W(0x34, ctx->r2)));
    std::fflush(stderr);
}

extern "C" void tooie_probe_slot_table(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    static int count = 0;
    if (count++ >= 64) {
        return;
    }
    const uint32_t object = static_cast<uint32_t>(ctx->r4);
    const uint32_t index = static_cast<uint32_t>(ctx->r5);
    const uint32_t slot_address = object + 0x82U + index * 2U;
    const int32_t slot = MEM_H(0, guest_address(slot_address));
    const uint32_t entry_address =
        kSlotTableBase + static_cast<uint32_t>(slot) * kSlotTableStride;
    const uint32_t entry = MEM_W(0, guest_address(entry_address));

    std::fprintf(stderr,
        "[slot] obj=0x%08X idx=%u slot_addr=0x%08X slot=%d entry_addr=0x%08X "
        "entry=0x%08X\n",
        object, index, slot_address, static_cast<int>(slot), entry_address,
        entry);
    std::fprintf(stderr,
        "[slot] obj+0x80=0x%08X +0x84=0x%08X +0x88=0x%08X +0x8C=0x%08X\n",
        static_cast<uint32_t>(MEM_W(0x80, ctx->r4)),
        static_cast<uint32_t>(MEM_W(0x84, ctx->r4)),
        static_cast<uint32_t>(MEM_W(0x88, ctx->r4)),
        static_cast<uint32_t>(MEM_W(0x8C, ctx->r4)));

    // Is the slot table populated at all? A table that is entirely zero says
    // the allocator never ran, which is a different bug from one empty slot.
    uint32_t populated = 0;
    for (uint32_t i = 1; i < kSlotTableSlots; ++i) {
        const uint32_t address = kSlotTableBase + i * kSlotTableStride;
        if (MEM_W(0, guest_address(address)) != 0) {
            ++populated;
        }
    }
    std::fprintf(stderr, "[slot] slot_table populated=%u/%u:", populated,
                 kSlotTableSlots - 1U);
    for (int32_t delta = -2; delta <= 2; ++delta) {
        if (slot + delta < 0) {
            continue;
        }
        const uint32_t address =
            kSlotTableBase + static_cast<uint32_t>(slot + delta) * kSlotTableStride;
        std::fprintf(stderr, " %d:0x%08X", static_cast<int>(slot + delta),
                     static_cast<uint32_t>(MEM_W(0, guest_address(address))));
    }
    std::fprintf(stderr, "\n");

    // The generated C calls the callee as a plain C function, so the *host*
    // call stack identifies the recompiled functions involved exactly. The
    // guest `$ra` cannot: N64Recomp does not maintain it across calls. Nor can
    // the guest stack, because it can be left unbalanced by a mis-detected
    // boundary (see AGENTS.md "core boundaries are heuristic").
    void* frames[24]{};
    const unsigned short frame_count = host_backtrace(frames, 24);
    const uintptr_t base = host_image_base();
    std::fprintf(stderr, "[slot] host frames=%u:", frame_count);
    for (unsigned i = 0; i < frame_count; ++i) {
        std::fprintf(stderr, " 0x%zX",
                     reinterpret_cast<uintptr_t>(frames[i]) - base);
    }
    std::fprintf(stderr, "\n");
    std::fflush(stderr);
}

extern "C" void tooie_dump(uint8_t* rdram, uint32_t addr) {
    const gpr base = static_cast<gpr>(static_cast<int32_t>(addr));
    std::fprintf(stderr, "[dump 0x%08X]", addr);
    for (uint32_t i = 0; i < 24; i++) {
        std::fprintf(stderr, " %02X", MEM_BU(i, base));
    }
    std::fprintf(stderr, "\n");
    std::fflush(stderr);
}

// TEMPORARY diagnostic: every indirect dispatch, with the host caller's
// image-relative address so the call site can be symbolized against the linker
// map (`build-cmake/BanjoTooieRecompiled.map`).
//
// Off by default and enabled with TOOIE_TRACE_LOOKUP=1. This fires on *every*
// indirect dispatch -- tens of thousands per second in the render loop -- and
// each line is an fprintf plus an fflush, so leaving it on throttles the game
// to a small fraction of real speed and makes a stalled run indistinguishable
// from a slow one. Only turn it on for a short targeted capture.

namespace {
bool lookup_trace_enabled() {
    static const bool enabled = [] {
        const char* value = std::getenv("TOOIE_TRACE_LOOKUP");
        return value != nullptr && value[0] != '\0' && value[0] != '0';
    }();
    return enabled;
}
}

extern "C" recomp_func_t* tooie_lookup_func(int32_t vram) {
    if (lookup_trace_enabled()) {
        static const uintptr_t image_base = host_image_base();
        const uintptr_t caller =
            reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        std::fprintf(stderr, "[lookup] 0x%08X from rva 0x%zX\n",
            static_cast<uint32_t>(vram), caller - image_base);
        std::fflush(stderr);
    }
    return get_function(vram);
}

// TEMPORARY diagnostic: periodic frame-pipeline heartbeat.
//
// The game can stall with every guest thread parked in `osRecvMesg` and no
// crash and no message, which is invisible in the trace because nothing is
// printing. This reports, once every two seconds, the runtime's VI framebuffer
// pointers and Tooie's own VI-worker bookkeeping, so a stall can be localised
// to the frame pipeline instead of guessed at.
//
// The guest addresses are Tooie's VI manager globals, which are unnamed in the
// decomp's symbol file (they sit in core1 BSS); they are the same ones the
// shipping reference port reads for its watchdog.
extern "C" PTR(void) osViGetCurrentFramebuffer();
extern "C" PTR(void) osViGetNextFramebuffer();

namespace {

constexpr uint32_t kViEventQueueCount = 0x80078FD0U + 0x08U;
constexpr uint32_t kFrameBarrierQueueCount = 0x80079010U + 0x08U;
constexpr uint32_t kViRetraceQueueCount = 0x80079030U + 0x08U;
constexpr uint32_t kViListenerTable = 0x80078F90U;
constexpr uint32_t kViListenerCount = 8U;
constexpr uint32_t kViTargetRetraces = 0x80079138U;
constexpr uint32_t kViRetraceInterval = 0x8007913CU;
constexpr uint32_t kViConsumedRetraces = 0x80079704U;
// Bytes, found by elimination (AGENTS.md 7.8): the VIs the game advances its
// world by this frame, and the VIs that actually elapsed. Equal in normal play;
// a recorded demo sets the first from its recording.
constexpr uint32_t kFrameStepVis = 0x8012C767U;
constexpr uint32_t kFrameElapsedVis = 0x80078F65U;
constexpr uint32_t kGameMode = 0x80043380U;
constexpr uint32_t kPendingGameMode = 0x80043384U;
constexpr uint32_t kGameFrameCount = 0x800459C8U;
constexpr uint32_t kInitialSection = 0x800459CCU;
constexpr uint32_t kLoadedOverlayCount = 0x80117C60U;
constexpr uint32_t kGameUpdateState = 0x80127630U;
constexpr uint32_t kRenderBufferState = 0x80127658U;
// func_800149BC is a one-shot VI initialiser (it calls osViSetMode and sets
// this flag so it never runs twice). func_80014A54 gates it on CP0 Cause bit
// 12, and our config replaces func_80014A54 with a bare `return`.
constexpr uint32_t kViInitDoneFlag = 0x80078F5CU;
constexpr uint32_t kOsViCurr = 0x80041540U;
constexpr uint32_t kWatchdogIntervalMs = 2000U;
constexpr uint32_t kWatchdogReportCount = 30U;

uint8_t* g_watchdog_rdram = nullptr;

uint32_t watchdog_read(uint32_t address) {
    return *reinterpret_cast<const uint32_t*>(
        g_watchdog_rdram + (address - kRdramStart));
}

void watchdog_thread_func() {
    for (uint32_t report = 0; report < kWatchdogReportCount; ++report) {
        std::this_thread::sleep_for(
            std::chrono::milliseconds(kWatchdogIntervalMs));

        std::fprintf(stderr,
            "[watchdog] %u ms fb=0x%08X/0x%08X frame=%u mode=%u/%u "
            "section=%u overlays=%u update=0x%08X render=0x%08X "
            "vi_init=%u vi_curr=0x%08X "
            "vi_event=%u barrier=%u retrace=%u generated=%u interval=%u "
            "consumed=%u\n",
            (report + 1U) * kWatchdogIntervalMs,
            static_cast<uint32_t>(osViGetCurrentFramebuffer()),
            static_cast<uint32_t>(osViGetNextFramebuffer()),
            watchdog_read(kGameFrameCount),
            watchdog_read(kGameMode),
            watchdog_read(kPendingGameMode),
            watchdog_read(kInitialSection),
            watchdog_read(kLoadedOverlayCount),
            watchdog_read(kGameUpdateState),
            watchdog_read(kRenderBufferState),
            watchdog_read(kViInitDoneFlag),
            watchdog_read(kOsViCurr),
            watchdog_read(kViEventQueueCount),
            watchdog_read(kFrameBarrierQueueCount),
            watchdog_read(kViRetraceQueueCount),
            watchdog_read(kViTargetRetraces),
            watchdog_read(kViRetraceInterval),
            watchdog_read(kViConsumedRetraces));
        std::fflush(stderr);
    }
}

}

// The DP status shadow `librecomp/src/dp.cpp` keeps; the game reads it through
// osDpGetStatus.
extern uint32_t rdp_state;

constexpr uint32_t kDpStatusFreeze = 1U << 1;

// `func_80015190` signals the frame barrier. Tooie's gfx manager pairs that
// signal with the freeze `func_800142F0` sets on the RDP (`osDpSetStatus(8)`,
// i.e. DPC_SET_FREEZE). On hardware the VI-retrace handler clears the freeze
// once the swapped framebuffer is on screen, and the task submission that runs
// in between then re-arms the flag the next DP completion tests. Emulated
// retraces can arrive after the next DP completion instead, which leaves
// `D_80078484` stale at 2 and stops `func_800142F0` sending the third frame
// signal. Clear the freeze here, exactly as DPC_CLR_FREEZE (0x4) would: this is
// the same operation both shipping ports apply to this engine's gfx manager.
extern "C" void tooie_clear_dp_freeze(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    (void)ctx;
    rdp_state &= ~kDpStatusFreeze;
}

// RT64 Expand derives its target aspect from the window, with a 4:3 floor.
// Publish dimensions on the SDL thread instead of querying SDL from guest code.
namespace tooie::visibility {
namespace {
std::atomic<float> current_display_aspect{4.0f / 3.0f};
}

void update_display_size(int width, int height) {
    if (width > 0 && height > 0) {
        current_display_aspect.store(static_cast<float>(width) / height,
                                     std::memory_order_relaxed);
    }
}

float display_aspect_ratio() {
    return current_display_aspect.load(std::memory_order_relaxed);
}
} // namespace tooie::visibility

// Hook the completed camera-plane rebuild, before s0 is restored. The game
// rebuilds these from its original cached normals each time, so widening never
// accumulates. Only the two horizontal planes change; all original visibility
// consumers retain their own box/sphere tests, including the zoomed FOV.
extern "C" void tooie_expand_frustum(uint8_t* rdram, recomp_context* ctx) {
    if (ultramodern::renderer::get_graphics_config().ar_option !=
        ultramodern::renderer::AspectRatio::Expand) {
        return;
    }
    // BT_EXPAND_FRUSTUM=off leaves the game's 4:3 planes alone (A/B); =log prints the planes it widens.
    static const char* frustum_env = std::getenv("BT_EXPAND_FRUSTUM");
    if (frustum_env != nullptr && frustum_env[0] == 'o') {
        return;
    }
    const float expansion = tooie::visibility::display_aspect_ratio() /
                            (4.0f / 3.0f);
    if (expansion <= 1.0f) {
        return;
    }
    const gpr camera = ctx->r16;
    if (frustum_env != nullptr && frustum_env[0] == 'l') {
        float v[16];
        for (int i = 0; i < 16; ++i) {
            const uint32_t bits = MEM_W(0x24 + i * 4, camera);
            std::memcpy(&v[i], &bits, sizeof(bits));
        }
        std::fprintf(stderr, "[frustum] cam=%08X L=(%.3f %.3f %.3f %.0f) R=(%.3f %.3f %.3f %.0f) "
                     "T=(%.3f %.3f %.3f %.0f) B=(%.3f %.3f %.3f %.0f)\n",
                     static_cast<uint32_t>(camera), v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7],
                     v[8], v[9], v[10], v[11], v[12], v[13], v[14], v[15]);
    }
    tooie::visibility::Plane planes[2]{};
    for (int side = 0; side < 2; ++side) {
        const int offset = 0x24 + side * 0x10;
        for (int axis = 0; axis < 3; ++axis) {
            const uint32_t bits = MEM_W(offset + axis * 4, camera);
            std::memcpy(&planes[side].normal[axis], &bits, sizeof(bits));
        }
        const uint32_t bits = MEM_W(offset + 0xC, camera);
        std::memcpy(&planes[side].distance, &bits, sizeof(bits));
    }
    if (!tooie::visibility::widen_side_planes(planes, expansion)) {
        return;
    }
    for (int side = 0; side < 2; ++side) {
        const int offset = 0x24 + side * 0x10;
        for (int axis = 0; axis < 3; ++axis) {
            uint32_t bits;
            std::memcpy(&bits, &planes[side].normal[axis], sizeof(bits));
            MEM_W(offset + axis * 4, camera) = bits;
        }
        uint32_t bits;
        std::memcpy(&bits, &planes[side].distance, sizeof(bits));
        MEM_W(offset + 0xC, camera) = bits;
    }
}

// Composite pickups draw a radius-70 bowl before their larger contents.
// Only Expand gives that prerequisite draw the complete pickup's bounds.
// The whitelist is limited to the 13 audited chnests descriptors. Model radii
// are unscaled; func_800DE498 still applies the original actor draw scale.
namespace {
struct PickupVisualBounds {
    uint32_t descriptor_thunk;
    float model_radius;
};
constexpr PickupVisualBounds kCompositePickupBounds[] = {
    {0x80085A70U, 107.0f}, // chnests export 0, model 0x06EA
    {0x80085A78U, 107.0f}, // chnests export 1, model 0x06EA
    {0x80085A80U, 107.0f}, // chnests export 2, model 0x06EA
    {0x80085A88U, 107.0f}, // chnests export 3, model 0x06EA
    {0x80085A90U, 107.0f}, // chnests export 4, model 0x06EA
    {0x80085A98U, 107.0f}, // chnests export 5, model 0x06EA
    {0x80085AA0U, 107.0f}, // chnests export 6, model 0x06EA
    {0x80085AA8U, 160.0f}, // chnests export 7, model 0x06EF
    {0x80085AB0U, 160.0f}, // chnests export 8, model 0x06EF
    {0x80085AB8U, 101.0f}, // chnests export 9, model 0x06EC
    {0x80085AC0U, 177.0f}, // chnests export 10, model 0x06ED
    {0x80085AC8U, 107.0f}, // chnests export 11, model 0x06EA
    {0x80085AD0U, 160.0f}, // chnests export 12, model 0x06EF
};
thread_local float expand_pickup_radius = 0.0f;
}
extern "C" void tooie_expand_pickup_scope(uint8_t* rdram, recomp_context* ctx, uint32_t stage) {
    expand_pickup_radius = 0.0f;
    if (stage != 1 || ultramodern::renderer::get_graphics_config().ar_option !=
        ultramodern::renderer::AspectRatio::Expand) {
        return;
    }
    const gpr actor = ctx->r16;
    const uint32_t descriptor = static_cast<uint32_t>(MEM_W(0x10, actor));
    for (const PickupVisualBounds& bounds : kCompositePickupBounds) {
        if (descriptor == bounds.descriptor_thunk) {
            // Captures include unpopulated cached radii. The authored model
            // radius also covers the first draw, before contents are loaded.
            const float cached_radius = static_cast<float>(MEM_HU(0x6A, actor));
            expand_pickup_radius = cached_radius > bounds.model_radius ? cached_radius : bounds.model_radius;
            break;
        }
    }
}
extern "C" void tooie_expand_pickup_radius(uint8_t*, recomp_context* ctx) {
    if (ultramodern::renderer::get_graphics_config().ar_option ==
        ultramodern::renderer::AspectRatio::Expand && expand_pickup_radius > ctx->f14.fl) {
        ctx->f14.fl = expand_pickup_radius;
    }
    // Consume only this model's test; the return hook clears early-return paths.
    expand_pickup_radius = 0.0f;
}

// ---------------------------------------------------------------------------
// RT64 transform groups: interpolation metadata for the player model
// ---------------------------------------------------------------------------
//
// RT64's `Display` and `Manual` refresh-rate modes present interpolated frames
// between the game's own 20/30 Hz frames. Blending a transform requires knowing
// which transform in the current frame is the same object as which in the
// previous one, and Tooie never says: every frame is a fresh `gSPMatrix`.
// BanjoRecomp supplies that identity through RT64's extended GBI; Tooie emits
// none, so RT64 treats every transform as new, blends matrices that do not
// correspond, and shears Banjo's snout and feet above the game's own rate.
//
// This section emits the metadata and changes no game matrix:
//
//   * `tooie_rt64_begin_frame` enables the extended GBI at the head of Tooie's
//     real scene display list and reports the live VI rate. RT64 resets the
//     enable on every display list, so it is re-emitted every frame;
//   * `tooie_rt64_push_player_root` / `pop_player_root` bracket the root model
//     matrix with a group whose id is the stable player slot;
//   * `tooie_rt64_push_player_bone` / `pop_player_bone` do the same for each
//     animated bone, keyed by the model's own bone index.
//
// Projections are tagged too (see kGameplayProjectionId), and camera cuts are
// detected from the camera itself so the frame that cuts is drawn as submitted
// instead of blended with the previous shot (see kCutProjectionMask).
//
// Every other model through the shared renderer is tagged as well, by tracked
// identity (see kActorTransformIdBase). Deliberately not tagged: geometry drawn
// outside that renderer, and the CPU-skinned alternate forms, which need vertex
// segments rather than ids.

// Tooie submits `gspF3DEX2_NoN`. The extended-GBI hook is that microcode's
// SPNOOP, opcode 0xE0; the header defaults RT64_HOOK_OPCODE to F3D's 0x00, and
// a 0x00 word is not a command the F3DEX2 parser dispatches to the hook
// handler, so with the default the hooks below run, RT64 decodes zero enables,
// and nothing reports an error. Selecting the F3DEX2 opcode is therefore what
// makes the rest of this section do anything at all.
#define F3DEX_GBI_2 1
#include "rt64_extended_gbi.h"
#undef F3DEX_GBI_2

namespace {

// The `gEXMatrixGroup` field layout, written out so the flags are derived
// rather than copied: push and proj are the first two bits, then the
// interpolation modes for each component.
constexpr uint32_t matrix_group_flags(
    uint32_t push, uint32_t proj, uint32_t mode, uint32_t pos, uint32_t rot,
    uint32_t scale, uint32_t skew, uint32_t persp, uint32_t vert,
    uint32_t tile, uint32_t order, uint32_t aspect, uint32_t tc,
    uint32_t lookat) {
    return (push & 1U)
        | ((proj & 1U) << 1)
        | ((mode & 1U) << 2)
        | ((pos & 3U) << 3)
        | ((rot & 3U) << 5)
        | ((scale & 3U) << 7)
        | ((skew & 3U) << 9)
        | ((persp & 3U) << 11)
        | ((vert & 3U) << 13)
        | ((tile & 3U) << 15)
        | ((order & 3U) << 17)
        | ((aspect & 3U) << 20)
        | ((tc & 3U) << 22)
        | ((lookat & 3U) << 24);
}

constexpr uint32_t kExtendedOpcodeWord =
    static_cast<uint32_t>(RT64_EXTENDED_OPCODE) << 24;
constexpr uint32_t kEnableWord0 =
    (static_cast<uint32_t>(RT64_HOOK_OPCODE) << 24) | RT64_HOOK_MAGIC_NUMBER;
constexpr uint32_t kEnableWord1 =
    (static_cast<uint32_t>(RT64_HOOK_OP_ENABLE) << 28) | RT64_EXTENDED_OPCODE;
constexpr uint32_t kSetRefreshRateWord0 =
    kExtendedOpcodeWord | G_EX_SETREFRESHRATE_V1;
constexpr uint32_t kMatrixGroupWord0 =
    kExtendedOpcodeWord | G_EX_MATRIXGROUP_V1;
constexpr uint32_t kPopMatrixGroupWord0 =
    kExtendedOpcodeWord | G_EX_POPMATRIXGROUP_V1;
// gEXPopMatrixGroup's second word: pop one group, and it is not a projection.
constexpr uint32_t kPopMatrixGroupWord1 = 1U;

// Decomposed interpolation: position, rotation, scale and skew are blended
// separately instead of the raw matrix entries, and RT64's quaternion slerp
// takes the short arc across +/-180 degrees, so a rotation that crosses that
// boundary follows it instead of snapping. `order = LINEAR` is what makes RT64
// match these groups by id (`buildTransformIdMap`) rather than by draw order,
// and `lookat = AUTO` leaves the lighting vector alone. Vertex interpolation is
// skipped: the ordinary player's vertices are static in the model buffer, so
// there is no CPU-side motion to carry.
constexpr uint32_t kRootGroupFlags = matrix_group_flags(
    1U, 0U, G_EX_INTERPOLATE_DECOMPOSE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_INTERPOLATE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_INTERPOLATE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_SKIP,
    G_EX_COMPONENT_INTERPOLATE, G_EX_ORDER_LINEAR,
    G_EX_ASPECT_AUTO, G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_AUTO);
// The bones differ from the root only in texcoords, which the player's geometry
// does not animate.
constexpr uint32_t kBoneGroupFlags = matrix_group_flags(
    1U, 0U, G_EX_INTERPOLATE_DECOMPOSE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_INTERPOLATE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_INTERPOLATE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_SKIP,
    G_EX_COMPONENT_INTERPOLATE, G_EX_ORDER_LINEAR,
    G_EX_ASPECT_AUTO, G_EX_COMPONENT_SKIP, G_EX_COMPONENT_AUTO);
// Projections are tagged with push = 0: a projection id stack entry *is* the
// current projection, so each load overwrites rather than nests and no matching
// pop is needed. Simple (whole-matrix) interpolation, because RT64 itself notes
// that cameras look better without decomposition.
constexpr uint32_t kProjectionGroupFlags = matrix_group_flags(
    0U, 1U, G_EX_INTERPOLATE_SIMPLE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_INTERPOLATE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_INTERPOLATE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_SKIP,
    G_EX_COMPONENT_INTERPOLATE, G_EX_ORDER_LINEAR,
    G_EX_ASPECT_AUTO, G_EX_COMPONENT_SKIP, G_EX_COMPONENT_AUTO);

static_assert(kEnableWord0 == 0xE0525464U,
              "extended-GBI enable must use the F3DEX2 SPNOOP hook opcode");
static_assert(kEnableWord1 == 0x10000064U, "extended-GBI enable second word");
static_assert(kSetRefreshRateWord0 == 0x64000009U, "G_EX_SETREFRESHRATE_V1");
static_assert(kMatrixGroupWord0 == 0x6400000CU, "G_EX_MATRIXGROUP_V1");
static_assert(kPopMatrixGroupWord0 == 0x6400000DU, "G_EX_POPMATRIXGROUP_V1");
static_assert(kRootGroupFlags == 0x02408AADU, "root matrix group flags");
static_assert(kBoneGroupFlags == 0x02008AADU, "bone matrix group flags");

// Every other model (root and bones): an id and decomposed transforms, and
// otherwise exactly what an untagged draw gets (TransformGroup's defaults).
// The player's flags force texcoord and tile interpolation, which is right for
// Banjo and wrong for the world: texcoords CPU-scrolled across a wrap are blended
// the long way round, and INTERPOLATE tiles skip the TMEM-hash check that stops a
// scroll being blended against a different texture -- reported as the lair's
// graphics "wrapping" in the attract loop. tile AUTO and texcoord SKIP keep both.
// ⚠ The transform components must be INTERPOLATE, not AUTO. AUTO position is
// RT64's teleport guard (no blend when a transform moves >5 units at >10x last
// frame's speed), and it judges every BONE on its own: a wing snapping out of a
// flap trips it, that one bone is drawn unblended while its neighbours blend, and
// the part comes loose. Measured on the clock bird: AUTO brought back a floating
// beak and wing fragments that INTERPOLATE removes. Teleports are handled by the
// tracker instead -- a draw further than kActorMatchDistance from last frame's
// gets a new id and is not blended at all.
constexpr uint32_t kActorGroupFlags = matrix_group_flags(
    1U, 0U, G_EX_INTERPOLATE_DECOMPOSE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_INTERPOLATE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_INTERPOLATE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_SKIP,
    G_EX_COMPONENT_AUTO, G_EX_ORDER_LINEAR,
    G_EX_ASPECT_AUTO, G_EX_COMPONENT_SKIP, G_EX_COMPONENT_AUTO);

// Skybox segments are frustum-culled ("only emits the segments in view"), so
// adjacent camera frames frequently present different sky panels at matching
// vertex counts. Keep tile AUTO and texcoord SKIP (matching actors) so new
// sky panels never cross-blend UVs or TMEM state with departing panels while
// still interpolating the sky transform cleanly.
constexpr uint32_t kSkyModelGroupFlags = kActorGroupFlags;
static_assert(kProjectionGroupFlags == 0x02008AAAU, "projection group flags");

// Vertex interpolation (bits 13-14) for a root drawn with an animation. Some
// models are animated on the CPU: they emit NO bone matrices at all -- the game
// bends the vertices itself every frame (the attract demo's big dinosaur
// 0x80231890, the N-logo stages; measured: animation list set, zero G_MTX inside
// the root scope). Transform interpolation cannot touch that, so the body moved
// at the game's 20 Hz while everything around it ran at 144. RT64 interpolates
// a transform's vertices only when the count matches and the positions changed,
// so for a rigid or bone-skinned model -- whose vertices are static -- this is a
// no-op, and it is safe to give every animated root rather than a list.
constexpr uint32_t kVertexInterpolateBits =
    static_cast<uint32_t>(G_EX_COMPONENT_INTERPOLATE) << 13;
// The same for the BONES of an animated model (AGENTS.md 7.7i), as AUTO: RT64 blends their CPU-modified vertices
// exactly as INTERPOLATE's, but smooths only INTERPOLATE (the patched GameFrame::vertexSmoothingFor). Smoothing a
// bone's vertices moved them off the game's positions while their seam partners on the neighbouring bones stayed
// put, which opened thin dark cracks in King Jingaling's face (AGENTS.md 7.7j).
constexpr uint32_t kBoneVertexInterpolateBits =
    static_cast<uint32_t>(G_EX_COMPONENT_AUTO) << 13;
static_assert((kActorGroupFlags & (3U << 13)) == 0U &&
                  (kRootGroupFlags & (3U << 13)) == 0U,
              "vertex interpolation is off in the base flags");

// The skybox is a dome anchored to the camera, so its view matrix is the
// *current* camera's; RT64 interpolating that view blends the dome with the
// previous frame's camera position. The projection processor lerps the view
// (`rigidBody->lerp`) and then interpolates the projection with it, and the amount
// of the shift is the camera's per-frame movement -- which is why the artifact
// appears while moving and changes size with the movement, and why it is confined
// to the sky: every other projection belongs to geometry that really is in the
// world.
//
// This is the same flag layout as kProjectionGroupFlags with position and
// rotation set to SKIP, which makes RigidBody::updateLinear/updateAngular clear
// lerpTranslation/lerpRotation, so `interpolateProjection` is false and the view
// and projection are used exactly as the game submitted them. Scale, skew,
// perspective, tile, order and lookat are unchanged.
constexpr uint32_t kSkyProjectionGroupFlags = matrix_group_flags(
    0U, 1U, G_EX_INTERPOLATE_SIMPLE,
    G_EX_COMPONENT_SKIP, G_EX_COMPONENT_SKIP,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_INTERPOLATE,
    G_EX_COMPONENT_INTERPOLATE, G_EX_COMPONENT_SKIP,
    G_EX_COMPONENT_INTERPOLATE, G_EX_ORDER_LINEAR,
    G_EX_ASPECT_AUTO, G_EX_COMPONENT_SKIP, G_EX_COMPONENT_AUTO);
// pos and rot occupy bits 3-4 and 5-6 of the flags word (see matrix_group_flags).
static_assert(kSkyProjectionGroupFlags == (kProjectionGroupFlags & ~0x78U),
              "sky projection flags must differ from the projection flags only in pos/rot");

// Camera cuts. On the frame the camera cuts, every interpolated frame RT64
// presents before it blends two unrelated shots: the view swings through the
// space between them, and every actor the heuristic pairs across the cut slides
// from where it stood in the old shot to where it stands in the new one. That is
// the cutscene glitch at Display/Manual refresh, invisible at the game's own rate.
//
// A cut frame keeps every id -- the Expand bounds fix in rt64.patch keys on the
// gameplay projection's 0x1000 -- and changes only the components: SKIP makes
// RigidBody::updateLinear/updateAngular clear their lerp, so RT64 draws that
// frame's transforms exactly as submitted (the mechanism kSkyProjectionGroupFlags
// documents). Because the ids still match, the frame after a cut interpolates
// normally again. SKIP is 0, so masking a component's bits out is SKIP.
//
// Projections: pos + rot (bits 3-6); RT64 interpolates a projection only when its
// view was, so that holds the whole projection, field of view included. Model
// groups: pos, rot, scale, skew, perspective and vertices (3-14).
constexpr uint32_t kCutProjectionMask = 0x78U;
constexpr uint32_t kCutModelMask = 0x7FF8U;
// Pushed once, at the cut frame's first perspective projection, so every
// untagged model matrix drawn after it -- all actors but the player -- falls in a
// group RT64 still pairs as AUTO but does not blend. The player's and the sky
// layers' own groups push above it and are masked where they are emitted.
constexpr uint32_t kCutActorGroupFlags = matrix_group_flags(
    1U, 0U, G_EX_INTERPOLATE_SIMPLE,
    G_EX_COMPONENT_SKIP, G_EX_COMPONENT_SKIP,
    G_EX_COMPONENT_SKIP, G_EX_COMPONENT_SKIP,
    G_EX_COMPONENT_SKIP, G_EX_COMPONENT_SKIP,
    G_EX_COMPONENT_SKIP, G_EX_ORDER_AUTO,
    G_EX_ASPECT_AUTO, G_EX_COMPONENT_SKIP, G_EX_COMPONENT_AUTO);
static_assert((kProjectionGroupFlags & ~kCutProjectionMask) ==
                  kSkyProjectionGroupFlags,
              "the cut projection mask must be exactly pos + rot");

// ⚠ A deliberate trade, not a fix -- see rt64_sky_stretch. `G_EX_ASPECT_STRETCH`
// tells RT64 not to widen this projection at all: the sky is drawn with the field
// of view the game built it for and the result is stretched across the wider
// viewport, so it always covers. But Tooie's dome ends at the 4:3 frustum edge, so
// the only way to cover is to draw the sky 1.333x zoomed in horizontally relative
// to the world -- which slides. The vertical field of view is identical either
// way, so the horizon still lines up with the terrain. Aspect is bits 20-21.
constexpr uint32_t kSkyProjectionStretchFlags =
    (kProjectionGroupFlags & ~(3U << 20)) |
    (static_cast<uint32_t>(G_EX_ASPECT_STRETCH) << 20);
static_assert(kSkyProjectionStretchFlags == 0x02108AAAU,
              "sky stretch flags must differ from the projection flags only in aspect");
// Projection ids. RT64 pairs a projection with the previous frame's projection
// *at the same index in the scene's projection list* (rt64_game_frame.cpp,
// matchScene), and whether to blend is gated on the id there:
//
//   explicit id   -> mapped = (curId == prevId)
//   G_EX_ID_AUTO  -> mapped = true, unconditionally
//
// Tooie's projection list is not the same every frame: the sky draw loads one of
// its own, and in first person `func_80093E18` loads two. An explicit id makes
// the pairing exact instead of positional.
//
// NOTE: this was measured to be *inert* in every state reachable without input
// (the sky's projection is always index 0 and matches sky-to-sky, so the
// sequence's common prefix always matches), and it did NOT fix the first-person
// skybox black box. It is retained because it removes a real wrong-blend class
// that first person's extra projections could trigger, not because it fixed
// anything observed. See "First-person skybox black box" in AGENTS.md.
constexpr uint32_t kGameplayProjectionId = 0x00001000U;
constexpr uint32_t kSkyboxProjectionId = 0x00001001U;
constexpr uint32_t kOrthoProjectionId = 0x00001002U;

// Tooie globals, each confirmed against the generated code that reads it:
// func_800DCF48 loads the animation matrix list as its second argument, and
// func_800F5008 iterates the eight player-state slots.
constexpr uint32_t kAnimationMatrixList = 0x8012C968U;
constexpr uint32_t kPlayerStateSlotTable = 0x80135490U;
constexpr uint32_t kPlayerStateSlotCount = 8U;

// Transform ids are 0x10000000 + model_slot * 0x100, leaving 0x100 ids per
// model for its bones. Ids only have to be stable between one frame and the
// next, so they are assigned in order of first sight.
constexpr uint32_t kPlayerTransformIdBase = 0x10000000U;
constexpr uint32_t kPlayerTransformIdStride = 0x100U;
constexpr uint32_t kPlayerModelCount = 256U;
constexpr uint32_t kRootScopeCount = 16U;
constexpr uint32_t kBoneScopeCount = 64U;

// The skybox draws up to three layers through the *same* shared model renderer
// as everything else (`func_800DE448` -> `func_800DE498`), so without an id each
// layer is matched to the previous frame by RT64's heuristic: the draw-call hash
// first, then the smallest matrix difference. The layers are typically the same
// mesh at different scales and rotation speeds, which is exactly the case that
// heuristic can get wrong -- layer 0 paired with last frame's layer 1, and the
// two then blended into each other. Giving each layer its own id makes the
// pairing exact. The id namespace is well clear of the projection ids and the
// player's.
constexpr uint32_t kSkyboxTransformIdBase = 0x00F20000U;
constexpr uint32_t kSkyboxTransformIdStride = 0x100U;
constexpr uint32_t kSkyboxLayerCount = 4U;

// Every other model through the shared renderer -- NPCs, cutscene characters,
// props, the boot logos. Untagged, RT64 pairs each *bone* with last frame's by
// the draw-call hash and the smallest matrix difference, so the limbs of one
// character, or the identical segments of a spinning logo, get paired with each
// other and blended across: the jerky turning and odd limb motion that shows only
// above the game's own rate. The renderer copies the position by value and
// reuses the register that held its pointer, so there is no actor handle at the
// hook; identity is instead tracked here -- a draw keeps the id of last frame's
// draw of the same model nearest to it -- and the bones nest under it with the
// player's sub-id scheme. Ids leave 0x100 per model for bones; 0x800000 slots
// keep the highest id clear of G_EX_ID_AUTO.
constexpr uint32_t kActorTransformIdBase = 0x20000000U;
constexpr uint32_t kActorTransformIdStride = 0x100U;
constexpr uint32_t kActorSlotCount = 0x00800000U;
// A draw further than this from every same-model draw last frame is a new
// object, not a moved one. Ordinary motion is tens of units a frame.
constexpr float kActorMatchDistance = 400.0f;

uint32_t read_word(uint8_t* rdram, uint32_t address) {
    return static_cast<uint32_t>(
        MEM_W(0, static_cast<gpr>(static_cast<int32_t>(address))));
}

void write_word(uint8_t* rdram, uint32_t address, uint32_t value) {
    MEM_W(0, static_cast<gpr>(static_cast<int32_t>(address))) =
        static_cast<int32_t>(value);
}

bool in_rdram(uint32_t address, uint32_t size) {
    return address >= kRdramStart && address <= kRdramEnd - size;
}

// The game builds its display list through a cursor: `cursor` is the guest
// address of the word holding the next free command, which is how every append
// site in Tooie's renderer advances it. Both the cursor and the command it
// points at are range-checked, so a bad stack slot cannot scribble on the host.
bool append_command(uint8_t* rdram, uint32_t cursor, uint32_t word0,
                    uint32_t word1) {
    if (!in_rdram(cursor, sizeof(uint32_t))) {
        return false;
    }
    const uint32_t gfx = read_word(rdram, cursor);
    if (!in_rdram(gfx, 2U * sizeof(uint32_t))) {
        return false;
    }
    write_word(rdram, gfx + 0U, word0);
    write_word(rdram, gfx + 4U, word1);
    write_word(rdram, cursor, gfx + 2U * sizeof(uint32_t));
    return true;
}

bool append_matrix_group(uint8_t* rdram, uint32_t cursor, uint32_t transform_id,
                         uint32_t flags) {
    if (!in_rdram(cursor, sizeof(uint32_t))) {
        return false;
    }
    const uint32_t gfx = read_word(rdram, cursor);
    if (!in_rdram(gfx, 4U * sizeof(uint32_t))) {
        return false;
    }
    write_word(rdram, gfx + 0U, kMatrixGroupWord0);
    write_word(rdram, gfx + 4U, transform_id);
    write_word(rdram, gfx + 8U, flags);
    write_word(rdram, gfx + 12U, 0U);
    write_word(rdram, cursor, gfx + 4U * sizeof(uint32_t));
    return true;
}

struct RootScope {
    uint32_t transform_id;
    bool pushed;
    uint32_t bone_flags;  // what this model's bones are grouped with
    // BT_RT64_ACTORLOG only.
    uint32_t model;
    float pos[3];
    uint32_t gfx_start;
    uint32_t bones;
    uint32_t anim;
};

struct PlayerModelKey {
    uint32_t player;
    uint32_t model;
    uint32_t last_frame;  // g_rt64_frame_serial of the last draw that used it
};

// Counts tooie_rt64_begin_frame calls, i.e. the frames RT64 pairs with each
// other. Only differences are used, so wrapping is harmless.
uint32_t g_rt64_frame_serial = 0;

// The player draw runs on one guest thread, and the ids only have to be stable
// between adjacent frames, so this state is thread-local and never shared.
thread_local uint32_t g_player_scope_depth = 0;
thread_local uint32_t g_player_key = 0;
thread_local PlayerModelKey g_player_models[kPlayerModelCount] = {};
thread_local uint32_t g_player_model_count = 0;
thread_local RootScope g_root_scopes[kRootScopeCount] = {};
thread_local uint32_t g_root_scope_depth = 0;
thread_local bool g_bone_scopes[kBoneScopeCount] = {};
thread_local uint32_t g_bone_scope_depth = 0;

// Zero is reserved for "no active player", so the eight slots map to 1..8.
uint32_t stable_player_key(uint8_t* rdram, uint32_t player_state) {
    for (uint32_t slot = 0; slot < kPlayerStateSlotCount; ++slot) {
        if (read_word(rdram, kPlayerStateSlotTable + slot * sizeof(uint32_t)) ==
            player_state) {
            return slot + 1U;
        }
    }

    // Some special draw paths use a state that is not installed in the table.
    // Its address is still stable across adjacent frames, so fold it into the
    // same range rather than blending it with a known slot.
    return kPlayerStateSlotCount + 1U + ((player_state >> 4U) % 240U);
}

// BT_RT64_SLOTCAP=n shrinks the table so exhaustion can be reached in seconds
// (test aid); BT_RT64_SLOTRECLAIM=off restores the old never-reuse behaviour.
uint32_t player_slot_capacity() {
    static const uint32_t capacity = [] {
        const char* value = std::getenv("BT_RT64_SLOTCAP");
        const long parsed = (value != nullptr) ? std::strtol(value, nullptr, 10) : 0;
        return (parsed > 0 && parsed < static_cast<long>(kPlayerModelCount))
            ? static_cast<uint32_t>(parsed) : kPlayerModelCount;
    }();
    return capacity;
}

bool player_slot_reclaim_off() {
    static const bool off = [] {
        const char* value = std::getenv("BT_RT64_SLOTRECLAIM");
        return value != nullptr && (std::strcmp(value, "off") == 0 ||
                                    std::strcmp(value, "0") == 0);
    }();
    return off;
}

// The model key is a guest ADDRESS, and the player's model does not stay put:
// every room load reloads it, and the heap compactor moves it during play
// (measured: 4 new addresses in 60 s of walking around Spiral Mountain, 8 in
// 230 s with two trips through Banjo's house). Slots used to be append-only, so
// after ~256 moves every new address got id 0 -- the player and everything it
// draws went untagged for the rest of the session and RT64's heuristic pairing
// sheared them (AGENTS.md §7.7d). Ids only have to be stable between adjacent
// frames, so a slot nobody drew in this frame or the previous one is reused:
// RT64 pairs a transform only with the previous frame's, so an id that was idle
// for a whole frame cannot be blended with its old owner.
uint32_t player_model_transform_id(uint32_t player, uint32_t model,
                                   bool* assigned) {
    for (uint32_t slot = 0; slot < g_player_model_count; ++slot) {
        if (g_player_models[slot].player == player &&
            g_player_models[slot].model == model) {
            g_player_models[slot].last_frame = g_rt64_frame_serial;
            return kPlayerTransformIdBase + slot * kPlayerTransformIdStride;
        }
    }

    uint32_t slot = g_player_model_count;
    if (slot < player_slot_capacity()) {
        ++g_player_model_count;
    }
    else {
        if (player_slot_reclaim_off()) {
            return 0;
        }
        uint32_t best_idle = 1U;  // must have missed at least one whole frame
        for (uint32_t i = 0; i < g_player_model_count; ++i) {
            const uint32_t idle = g_rt64_frame_serial - g_player_models[i].last_frame;
            if (idle > best_idle) {
                best_idle = idle;
                slot = i;
            }
        }
        if (slot >= g_player_model_count) {
            return 0;
        }
    }

    g_player_models[slot] = {player, model, g_rt64_frame_serial};
    *assigned = true;
    return kPlayerTransformIdBase + slot * kPlayerTransformIdStride;
}

float read_float(uint8_t* rdram, uint32_t address) {
    const uint32_t bits = read_word(rdram, address);
    float value;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

// One element of an N64 fixed-point `Mtx`: the integer halves of all sixteen
// s15.16 values come first, then the fractional halves, two to a word.
float read_mtx_element(uint8_t* rdram, uint32_t mtx, uint32_t row,
                       uint32_t col) {
    const uint32_t word = row * 2U + col / 2U;
    const uint32_t shift = (col & 1U) ? 0U : 16U;
    const uint32_t whole = (read_word(rdram, mtx + word * 4U) >> shift) & 0xFFFFU;
    const uint32_t frac =
        (read_word(rdram, mtx + 32U + word * 4U) >> shift) & 0xFFFFU;
    return static_cast<float>(static_cast<int32_t>((whole << 16) | frac)) /
           65536.0f;
}

struct ActorDraw {
    uint32_t model;
    float pos[3];
    uint32_t transform_id;
    bool claimed;
};

// Last frame's draws and this frame's, swapped at the frame boundary. Draws run
// on the same guest thread as tooie_rt64_begin_frame.
std::vector<ActorDraw> g_prev_actor_draws;
std::vector<ActorDraw> g_cur_actor_draws;

uint32_t g_next_actor_slot = 0;
uint32_t g_frame_actor_matched = 0;
uint32_t g_frame_actor_new = 0;

// Greedy nearest match against last frame's unclaimed draws of the same model.
// Linear in the frame's draw count per draw; a few hundred draws is a few tens
// of thousands of compares a frame.
uint32_t actor_transform_id(uint32_t model, const float pos[3]) {
    ActorDraw* best = nullptr;
    float best_d2 = kActorMatchDistance * kActorMatchDistance;
    for (ActorDraw& prev : g_prev_actor_draws) {
        if (prev.claimed || prev.model != model) {
            continue;
        }
        const float dx = pos[0] - prev.pos[0];
        const float dy = pos[1] - prev.pos[1];
        const float dz = pos[2] - prev.pos[2];
        const float d2 = dx * dx + dy * dy + dz * dz;
        if (d2 < best_d2) {
            best_d2 = d2;
            best = &prev;
        }
    }

    uint32_t transform_id;
    if (best != nullptr) {
        best->claimed = true;
        transform_id = best->transform_id;
        ++g_frame_actor_matched;
    }
    else {
        transform_id = kActorTransformIdBase +
            (g_next_actor_slot++ % kActorSlotCount) * kActorTransformIdStride;
        ++g_frame_actor_new;
    }
    g_cur_actor_draws.push_back({model, {pos[0], pos[1], pos[2]}, transform_id,
                                 false});
    return transform_id;
}

// Opt-in counters, in the same style as TOOIE_TRACE_LOOKUP. They report both
// the metadata this file emits and what RT64 decoded from it, because the
// failure mode here is silent: hooks that emit into a display list RT64 does
// not parse look exactly like hooks that work.
bool rt64_trace_enabled() {
    static const bool enabled = [] {
        const char* value = std::getenv("TOOIE_TRACE_RT64");
        return value != nullptr && value[0] != '0';
    }();
    return enabled;
}

// TEMPORARY A/B: BT_RT64_GROUPS=off suppresses the metadata from the same
// binary, so a stall can be attributed to this metadata or excluded from it
// without rebuilding.
bool rt64_disabled() {
    static const bool disabled = [] {
        const char* value = std::getenv("BT_RT64_GROUPS");
        return value != nullptr && value[0] == 'o';
    }();
    return disabled;
}

// Fine-grained A/B levers, so a regression can be attributed to one addition
// without a rebuild. `BT_RT64_GROUPS=off` is the coarse one (everything off);
// these isolate the skybox tagging from the projection tagging.
bool rt64_env_off(const char* name) {
    const char* value = std::getenv(name);
    return value != nullptr && value[0] == 'o';
}

// BT_RT64_SKY=off: no sky scope and no sky layer ids, so the skybox is left to
// RT64's own heuristics exactly as it was before this tagging existed.
bool rt64_sky_off() {
    static const bool off = rt64_env_off("BT_RT64_SKY");
    return off;
}

// BT_RT64_SKY_STRETCH=on: do not widen the skybox projection's field of view.
//
// ⚠ NOT the default, and it must not become one. It is the only way to make the
// dome cover a 16:9 frame -- Tooie's sky ends at the 4:3 frustum edge, so widening
// leaves the sky draw's own black fill showing at the sides -- but it buys that
// coverage by drawing the sky 1.333x zoomed in horizontally relative to the world.
// Measured with RT64's own divergence metric: with it on, RT64 reports 400
// `[fbdiv]` records in 3 minutes, sky `net=1.00` against world `net=0.75`; with it
// off, 0 records and both agree. A sky at a different horizontal scale than the
// world slides against the world whenever the camera turns -- and the amount is
// large (1.333x, i.e. ~30 degrees of drift over a 90 degree turn), which is far
// more objectionable than the edge band it removes.
//
// So this is a deliberate trade, not a fix: coverage at the cost of alignment.
// `--sky-stretch` in tools/trace_play.py turns it on to demonstrate the trade.
bool rt64_sky_stretch() {
    static const bool on = [] {
        const char* value = std::getenv("BT_RT64_SKY_STRETCH");
        return (value != nullptr) && ((value[0] == 'o') || (value[0] == '1'));
    }();
    return on;
}

// BT_RT64_SKY_VIEW_NOINTERP=on: render the skybox projection with the current
// frame's view instead of RT64's blend of it with the previous frame's.
//
// ⚠ NOT the default, and it must not become one. `lerpTransforms` falls back to
// the *current* transform when lerpTranslation/lerpRotation are false, so this
// freezes the dome to one camera while the world keeps interpolating -- and RT64
// renders each displayed frame at a weight between the previous and current
// camera. The dome is anchored to the camera, so freezing it makes the sky slide
// against the world whenever the camera moves. Measured: it does drive the sky's
// camDelta to exactly 0, which is why it looked like a fix, but camDelta is not
// the quantity that matters here -- matching the world's interpolation is.
bool rt64_sky_view_nointerp() {
    static const bool on = [] {
        const char* value = std::getenv("BT_RT64_SKY_VIEW_NOINTERP");
        return (value != nullptr) && ((value[0] == 'o') || (value[0] == '1'));
    }();
    return on;
}

// BT_RT64_PROJ=off: no projection ids.
bool rt64_proj_off() {
    static const bool off = rt64_env_off("BT_RT64_PROJ");
    return off;
}

// BT_RT64_CUTS=off: detect camera cuts (and log them) but still interpolate
// across them, i.e. the behaviour before cut handling existed.
bool rt64_cuts_off() {
    static const bool off = rt64_env_off("BT_RT64_CUTS");
    return off;
}

// BT_RT64_ACTORS=off: leave every model but the player and the sky untagged,
// i.e. paired by RT64's own heuristic as before actor ids existed.
bool rt64_actors_off() {
    static const bool off = rt64_env_off("BT_RT64_ACTORS");
    return off;
}

// BT_RT64_VERTS=off: no vertex interpolation on animated models (see
// kVertexInterpolateBits), so CPU-animated ones step at the game's own rate.
bool rt64_verts_off() {
    static const bool off = rt64_env_off("BT_RT64_VERTS");
    return off;
}

// BT_RT64_ACTORLOG=1: one line per non-player model draw -- id, position, and
// what it emitted (tagged bones, matrix loads, vertex loads, display-list calls).
bool rt64_actorlog_enabled() {
    static const bool enabled = std::getenv("BT_RT64_ACTORLOG") != nullptr;
    return enabled;
}

// BT_RT64_CAMLOG=1: one line per frame with the camera, the jump since the
// previous frame, and whether it was treated as a cut; plus one line with how
// many model draws kept last frame's id and how many started a new one.
bool rt64_camlog_enabled() {
    static const bool enabled = [] {
        const char* value = std::getenv("BT_RT64_CAMLOG");
        return value != nullptr && value[0] != '0';
    }();
    return enabled;
}

float env_float(const char* name, float fallback) {
    const char* value = std::getenv(name);
    if (value == nullptr || value[0] == '\0') {
        return fallback;
    }
    return static_cast<float>(std::atof(value));
}

// How far one game frame's camera step may differ from the last one before it
// counts as a cut, in world units and degrees (see evaluate_camera_cut).
// BT_RT64_CUT_DIST / BT_RT64_CUT_ANGLE override them.
float cut_distance(bool) {
    static const float normal = env_float("BT_RT64_CUT_DIST", 60.0f);
    return normal;
}

float cut_angle(bool) {
    static const float normal = env_float("BT_RT64_CUT_ANGLE", 15.0f);
    return normal;
}

// How far the camera's screen-up vector may turn in one game frame before the
// frame counts as a cut, in degrees. BT_RT64_CUT_ROLL overrides it (0 = off).
// A camera that looks at Banjo from straight above flips its roll by ~150
// degrees in one frame as he passes under it (its look-at singularity), while
// its view direction turns only ~4; projections blend as plain matrices, and a
// blend of two views that far apart is a degenerate matrix (AGENTS.md 7.11).
float cut_roll() {
    static const float value = env_float("BT_RT64_CUT_ROLL", 45.0f);
    return value;
}

// How far the field of view may change in one game frame before the frame
// counts as a cut, as |ln(zoom / previous zoom)| (0.1 = about 10%). BT_RT64_CUT_ZOOM
// overrides it (0 = off). Starting a conversation with Jiggywiggy keeps the camera
// where it is (15 units, 0.8 degrees) and changes the FOV by 32% in one frame; with
// only position and direction tested that frame was not a cut, and RT64 blended
// the projection from the old FOV to the new one across its in-betweens -- the
// whole picture zooming in one game frame, "everything compresses quickly"
// (AGENTS.md 7.6d). A deliberate zoom changes it by ~2% a frame.
float cut_zoom() {
    static const float value = env_float("BT_RT64_CUT_ZOOM", 0.1f);
    return value;
}

// The limits right after a cut, when there is no previous step to compare with.
constexpr float kCutUnknownDistance = 400.0f;
constexpr float kCutUnknownAngle = 40.0f;

// Coherent motion (evaluate_camera_cut, AGENTS.md 7.6c): a step at most this
// many times the previous one (plus the cut distance), within acos(0.7) = 45.6
// degrees of it, from a camera that was moving at least this fast, is a speed
// change. BT_RT64_CUT_COHERENT=off restores the plain velocity rule.
constexpr float kCutCoherentMinStep = 20.0f;
constexpr float kCutCoherentCos = 0.7f;
constexpr float kCutCoherentRatio = 3.0f;

bool rt64_cut_coherent_off() {
    static const bool off = [] {
        const char* v = std::getenv("BT_RT64_CUT_COHERENT");
        return v != nullptr && (std::strcmp(v, "off") == 0 || std::strcmp(v, "0") == 0);
    }();
    return off;
}

uint32_t g_frame_enables = 0;
uint32_t g_frame_root_groups = 0;
uint32_t g_frame_bone_groups = 0;
uint32_t g_frame_projections = 0;
// The projection-id sequence for this frame and the previous one. RT64 matches
// projections positionally, so a change in this sequence between frames is
// exactly the condition under which a projection would be blended with a
// different one. Printing it only when it changes keeps the log small while
// still showing the moment a reproduction depends on.
constexpr uint32_t kProjectionIdLogCount = 8U;
uint32_t g_frame_proj_ids[kProjectionIdLogCount] = {};
uint32_t g_frame_proj_count = 0;
uint32_t g_prev_proj_ids[kProjectionIdLogCount] = {};
uint32_t g_prev_proj_count = 0;
uint32_t g_frame_sky_groups = 0;
uint32_t g_frame_failures = 0;
// Which append site refused, as a bitmask, so a non-zero failure count names
// itself instead of needing a bisect. Bits: 0 enable, 1 refresh rate, 2 player
// root, 3 sky root, 4 root pop, 5 bone push, 6 bone pop, 7 perspective
// projection, 8 orthographic projection, 9 camera-cut actor group.
uint32_t g_frame_failure_mask = 0;

void note_append_failure(uint32_t site) {
    ++g_frame_failures;
    g_frame_failure_mask |= (1U << site);
}

// Set for the duration of func_800BFD6C, Tooie's sky draw. That function has a
// single exit (`L_800BFEF8`), reached both by its early-out and by the normal
// path, so the flag is set on entry and cleared there without needing a
// push/pop pair.
thread_local uint32_t g_sky_draw_depth = 0;
// Which sky layer the draw loop is on, set at the loop head where the counter
// lives, and read by the root-group hook that tags the layer's model matrix.
thread_local uint32_t g_sky_layer = 0;

// Camera-cut detection, evaluated once per frame at the first perspective
// projection (the sky draws first) so the sky, the world and the player agree.
// Tooie's own cut flag is not mapped, so a cut is read off the camera itself
// (see evaluate_camera_cut for where position and direction come from).
struct CameraSample {
    float pos[3];
    float rot[3];  // unit view direction
    float up[3];   // unit screen-up direction (clip y axis in world space)
    float zoom;    // |clip y column| / |clip w column|: the vertical field of view's cot(fovy/2)
};
bool g_cam_sampled = false;
bool g_frame_cut = false;
bool g_have_prev_cam = false;
bool g_prev_cam_has_dir = false;
CameraSample g_prev_cam = {};
// Last frame's step and turn, valid only when last frame was not itself a cut.
bool g_prev_cam_motion_known = false;
float g_prev_cam_zoom_step = 0.0f;  // ln(zoom / previous zoom), valid with g_prev_cam_motion_known
float g_prev_cam_step[3] = {};
float g_prev_cam_turn = 0.0f;

uint32_t cut_mask(uint32_t flags, uint32_t mask) {
    return g_frame_cut ? (flags & ~mask) : flags;
}

std::mutex g_repro_mutex;
TooieReproSnapshot g_latest_repro = {};
TooieReproSnapshot g_frame_repro = {};

void update_repro_player_and_map(uint8_t* rdram) {
    g_frame_repro = {};
    g_frame_repro.map = MEM_HU(0, static_cast<gpr>(static_cast<int32_t>(0x80132DC2U)));
    g_frame_repro.frame = read_word(rdram, kGameFrameCount);

    const uint32_t p_idx = static_cast<uint8_t>(MEM_BU(0, static_cast<gpr>(static_cast<int32_t>(0x801354DFU)))) & 7U;
    const uint32_t player = read_word(rdram, 0x80135490U + p_idx * 4U);
    if (in_rdram(player, 0x200)) {
        const uint32_t pos_block = read_word(rdram, player + 0xE4U);
        if (in_rdram(pos_block, 0x30)) {
            g_frame_repro.player_x = read_float(rdram, pos_block);
            g_frame_repro.player_y = read_float(rdram, pos_block + 4U);
            g_frame_repro.player_z = read_float(rdram, pos_block + 8U);
            g_frame_repro.has_player = 1;
        }
        const uint32_t yaw_block = read_word(rdram, player + 0xF8U);
        if (in_rdram(yaw_block, 0x10)) {
            float yaw = read_float(rdram, yaw_block);
            if (yaw < 0.0f) {
                yaw += 360.0f;
            }
            g_frame_repro.player_yaw = yaw;
        }
    }

    std::lock_guard<std::mutex> lock(g_repro_mutex);
    if (!g_frame_repro.has_player || g_latest_repro.map != g_frame_repro.map) {
        g_latest_repro = {};
    }
}

} // namespace

// RT64 counts what it decoded, so "the hooks ran" can be told apart from "RT64
// saw them". Defined in rt64/src/gbi/rt64_gbi_extended.cpp and
// rt64/src/hle/rt64_game_frame.cpp.
extern "C" {
// The current map id, for RT64's model-specific fixes (rt64_state.cpp, State::btFixKingFace).
extern std::atomic<uint32_t> g_bt_rt64_map;
extern std::atomic<uint32_t> g_bt_rt64_decoded_enables;
extern std::atomic<uint32_t> g_bt_rt64_decoded_groups;
extern std::atomic<uint32_t> g_bt_rt64_matched_transforms;
extern std::atomic<uint32_t> g_bt_rt64_matched_sky;
extern std::atomic<uint32_t> g_bt_rt64_projection_mismatches;
// What RT64 actually received. A zero here while the game reports sky tags means
// the tags were emitted into the display list but never reached RT64's parser.
extern std::atomic<uint32_t> g_bt_rt64_proj_id_auto;
extern std::atomic<uint32_t> g_bt_rt64_proj_id_gameplay;
extern std::atomic<uint32_t> g_bt_rt64_proj_id_sky;
extern std::atomic<uint32_t> g_bt_rt64_proj_id_ortho;
extern std::atomic<uint32_t> g_bt_rt64_proj_adjusted_sky;
extern std::atomic<uint32_t> g_bt_rt64_proj_adjusted_other;
extern std::atomic<uint32_t> g_bt_rt64_proj_skipped_sky;
extern std::atomic<uint32_t> g_bt_rt64_proj_skipped_other;
}

// func_800A73F4 builds and submits Tooie's real scene display list, and RT64
// resets the extended-GBI enable whenever a display list starts, so the enable
// is re-emitted at the head of every frame's list.
namespace {

uint32_t read_byte(uint8_t* rdram, uint32_t address) {
    return (read_word(rdram, address & ~3U) >> (24U - (address & 3U) * 8U)) & 0xFFU;
}

// BT_DEMO_PACING=off: let a recorded demo run at the game's own divisor, i.e.
// 1.5x too fast, as before this existed.
bool demo_pacing_off() {
    static const bool off = rt64_env_off("BT_DEMO_PACING");
    return off;
}

// The attract demo plays 1.5x too fast. Rare's demos replay recorded input
// *and* each frame's recorded time step, and the recording was made on an N64
// that ran Terrydactyland at ~20 Hz: the step is 3 VIs (sometimes 2, 4, 5). The
// port never lags, so it shows those frames at the scene's own divisor of 2 and
// advances the world 3 VIs in every 2. Measured: Banjo runs 25.7 units a frame
// in the demo against 17.8 in normal play at the same divisor.
//
// A frame whose step exceeds the VIs that really elapsed is the signature of
// recorded timing -- in normal play both bytes come from the same VI count. From
// then until the scene changes, each frame's divisor is raised to its step for
// the next wait and put back after. It has to LATCH: once paced, a demo frame
// really does last its step, the two bytes agree, and a per-frame test would
// switch itself off every other frame (3, 2, 3, 2 -- still 1.2x). The divisor
// also feeds G_EX_SETREFRESHRATE, so RT64 interpolates at the delivered rate.
// Capped at 6 so a recorded load stall (15) does not freeze the screen.
bool pace_log_enabled() {
    static const bool on = [] {
        const char* v = std::getenv("BT_PACELOG");
        return v != nullptr && v[0] != '\0' && v[0] != '0';
    }();
    return on;
}

uint32_t g_pacing_override = 0;
uint32_t g_pacing_saved_divisor = 0;
bool g_recorded_timing = false;
uint32_t g_pacing_last_frame = 0;
uint32_t g_pacing_quiet_frames = 0;

void pace_recorded_frame(uint8_t* rdram) {
    // A scene load resets the frame counter, and with it the game sets its own
    // divisor -- possibly to the very value overriding with -- so a reset ends
    // recorded timing and the game's divisor is left exactly as it is.
    const uint32_t frame = read_word(rdram, kGameFrameCount);
    const bool new_scene = frame < g_pacing_last_frame;
    g_pacing_last_frame = frame;
    if (new_scene) {
        g_recorded_timing = false;
        g_pacing_override = 0;
    }

    uint32_t divisor = read_word(rdram, kViRetraceInterval);
    if (g_pacing_override != 0U) {
        if (divisor == g_pacing_override) {
            divisor = g_pacing_saved_divisor;
            write_word(rdram, kViRetraceInterval, divisor);
        }
        else {
            // The game set a divisor of its own: it wins.
            g_recorded_timing = false;
            g_pacing_quiet_frames = 0;
        }
        g_pacing_override = 0;
    }
    if (demo_pacing_off() || divisor == 0U) {
        return;
    }

    // Only a recordable step may latch. The first frame after a map load
    // carries the load stall in the step byte (14-15) while the elapsed byte
    // can read less (measured: step 15, elapsed 5 entering the intro's map
    // 0x0A5). Latching on that frame locked a normal-play scene at the capped
    // divisor of 6 -- 10 Hz for the whole scene -- because once paced every
    // frame really lasts 6 VIs, so step stays above the divisor and the quiet
    // release below can never fire (AGENTS.md 7.8).
    // Nor may a frame that started within the same VI as the last one: after an
    // overrun the catch-up frame can read elapsed 0, and the game still advances
    // it by step 1. Measured in the throne room (steps 3, then 1 with elapsed 0,
    // 3.4 ms apart) that latched recorded timing and locked normal play at 20 Hz
    // for the rest of the scene, by the same self-holding mechanism (AGENTS.md
    // 7.6b). A recorded demo step always has at least one real VI behind it.
    const uint32_t raw_step = read_byte(rdram, kFrameStepVis);
    const uint32_t step = std::min(raw_step, 6U);
    const uint32_t elapsed = read_byte(rdram, kFrameElapsedVis);
    if (raw_step <= 6U && elapsed > 0U && step > elapsed) {
        if (!g_recorded_timing && pace_log_enabled()) {
            std::fprintf(stderr, "[pacing] latch: frame %u step %u elapsed %u divisor %u\n",
                         frame, raw_step, elapsed, divisor);
        }
        g_recorded_timing = true;
        g_pacing_quiet_frames = 0;
    }
    else if (raw_step > 6U && raw_step > elapsed && pace_log_enabled()) {
        std::fprintf(stderr, "[pacing] load-stall frame ignored: frame %u step %u elapsed %u\n",
                     frame, raw_step, elapsed);
    }
    // Belt and braces for normal play: if the latch ever trips without a demo,
    // ~3 s of steps no longer than the divisor releases it. The demo's own runs
    // of 2-VI steps are a handful of frames long.
    if (g_recorded_timing && step <= divisor && ++g_pacing_quiet_frames > 90U) {
        g_recorded_timing = false;
    }
    if (g_recorded_timing && step > divisor) {
        g_pacing_quiet_frames = 0;
        g_pacing_saved_divisor = divisor;
        g_pacing_override = step;
        write_word(rdram, kViRetraceInterval, step);
    }
}

// BT_PACELOG=1: one line per game frame comparing the clocks -- wall time,
// the VI clock, the VIs the world advanced by (sum of the step byte), and the
// audio frames the game generated -- so drift and transition gaps can be
// measured silently (AGENTS.md 9).
void pace_log(uint8_t* rdram) {
    if (!pace_log_enabled()) {
        return;
    }
    static uint64_t world_vis = 0;
    static uint32_t frames = 0;
    static const auto origin = std::chrono::steady_clock::now();
    const uint32_t step = read_byte(rdram, kFrameStepVis);
    world_vis += step;
    ++frames;
    uint64_t in_frames = 0;
    uint64_t dropped = 0;
    uint32_t empty = 0;
    uint32_t buffers = 0;
    uint32_t queued_us = 0;
    uint32_t in_rate = 0;
    uint32_t out_rate = 0;
    tooie_audio_stats(&in_frames, &dropped, &empty, &buffers, &queued_us, &in_rate,
                      &out_rate);
    const double t = std::chrono::duration<double>(
        std::chrono::steady_clock::now() - origin).count();
    // The intro's own schedule clock, seconds (glintrosyncDll: 0x801275D8,
    // advanced per frame and padded to each scene's cue by the wait).
    const uint32_t clock_bits = read_word(rdram, 0x801275D8U);
    float intro_clock = 0.0f;
    std::memcpy(&intro_clock, &clock_bits, sizeof(intro_clock));
    std::fprintf(stderr,
                 "[pace] t=%.4f n=%u f=%u map=%03X div=%u step=%u el=%u wvi=%llu "
                 "vi=%llu au=%llu rate=%u q=%u drop=%llu empty=%u buf=%u yld=%u isy=%u ic=%.3f\n",
                 t, frames, read_word(rdram, kGameFrameCount),
                 read_word(rdram, 0x80132DC0U) & 0xFFFFU,
                 read_word(rdram, kViRetraceInterval), step,
                 read_byte(rdram, kFrameElapsedVis),
                 static_cast<unsigned long long>(world_vis),
                 static_cast<unsigned long long>(total_vis),
                 static_cast<unsigned long long>(in_frames), in_rate, queued_us,
                 static_cast<unsigned long long>(dropped), empty, buffers,
                 g_sound_release_yields.load(std::memory_order_relaxed),
                 g_intro_sync_yields.load(std::memory_order_relaxed), intro_clock);
}

} // namespace

namespace tooie::harness {
void on_frame(uint8_t* rdram, recomp_context* ctx);
}

namespace {
// Where this frame's display list starts (the cursor at func_800A73F4's entry),
// for the walks run at its end (tooie_frame_end).
uint32_t g_frame_dl_head = 0;
// Whether this frame's list carries RT64's extended-GBI enable.
bool g_frame_extended = false;
// The gfx positions of this frame's orthographic (2D) and perspective
// projection loads, in order, for BT_HUDLOG.
struct ProjMark { uint32_t gfx; bool ortho; };
// The player's draw (func_80098BA8) in this frame's list.
uint32_t g_frame_player_lo = 0, g_frame_player_hi = 0;
// Every model the shared renderer (func_800DE498) drew this frame: where in the
// frame's list it starts and ends, and whether it is the player's.
struct ModelRange { uint32_t lo, hi; bool player; };
std::vector<ModelRange> g_frame_models;
std::vector<ProjMark> g_frame_proj_marks;
} // namespace

extern "C" void tooie_rt64_begin_frame(uint8_t* rdram, recomp_context* ctx) {
    g_frame_dl_head = read_word(rdram, kRenderBufferState);
    g_frame_extended = false;
    g_frame_proj_marks.clear();
    g_frame_player_lo = g_frame_player_hi = 0;
    g_frame_models.clear();
    // BT_POKE / BT_WARP / BT_POS (src/test_harness.cpp): once per game frame, on
    // the game thread. A single null check when none of them is set.
    tooie::harness::on_frame(rdram, ctx);
    update_repro_player_and_map(rdram);
    g_bt_rt64_map.store(g_frame_repro.map, std::memory_order_relaxed);
    // Runs before the RT64 gate on purpose: pacing is game timing, not metadata.
    pace_recorded_frame(rdram);
    pace_log(rdram);
    if (rt64_disabled()) {
        return;
    }
    ++g_rt64_frame_serial;

    const uint32_t frame = read_word(rdram, kGameFrameCount);
    if (rt64_trace_enabled()) {
        std::fprintf(stderr,
                     "[rt64] frame=%u enables=%u roots=%u bones=%u "
                     "sky=%u projs=%u failures=%u(0x%X) | rt64 decoded: enables=%u "
                     "groups=%u matched=%u matched_sky=%u proj_mismatch=%u "
                     "| proj ids: auto=%u game=%u sky=%u ortho=%u | widened: sky=%u other=%u | not-widened: sky=%u other=%u\n",
                     frame,
                     g_frame_enables,
                     g_frame_root_groups,
                     g_frame_bone_groups,
                     g_frame_sky_groups,
                     g_frame_projections,
                     g_frame_failures,
                     g_frame_failure_mask,
                     g_bt_rt64_decoded_enables.load(std::memory_order_relaxed),
                     g_bt_rt64_decoded_groups.load(std::memory_order_relaxed),
                     g_bt_rt64_matched_transforms.load(std::memory_order_relaxed),
                     g_bt_rt64_matched_sky.load(std::memory_order_relaxed),
                     g_bt_rt64_projection_mismatches.load(std::memory_order_relaxed),
                     g_bt_rt64_proj_id_auto.load(std::memory_order_relaxed),
                     g_bt_rt64_proj_id_gameplay.load(std::memory_order_relaxed),
                     g_bt_rt64_proj_id_sky.load(std::memory_order_relaxed),
                     g_bt_rt64_proj_id_ortho.load(std::memory_order_relaxed),
                     g_bt_rt64_proj_adjusted_sky.load(std::memory_order_relaxed),
                     g_bt_rt64_proj_adjusted_other.load(std::memory_order_relaxed),
                     g_bt_rt64_proj_skipped_sky.load(std::memory_order_relaxed),
                     g_bt_rt64_proj_skipped_other.load(std::memory_order_relaxed));
        std::fflush(stderr);
    }
    g_frame_enables = 0;
    g_frame_root_groups = 0;
    g_frame_bone_groups = 0;
    g_frame_sky_groups = 0;
    g_frame_projections = 0;
    g_frame_failures = 0;
    g_frame_failure_mask = 0;

    // Report the projection sequence whenever it differs from last frame, which
    // is the condition RT64's positional matching cannot express.
    bool proj_sequence_changed = g_frame_proj_count != g_prev_proj_count;
    if (!proj_sequence_changed) {
        for (uint32_t i = 0; i < g_frame_proj_count && i < kProjectionIdLogCount; ++i) {
            if (g_frame_proj_ids[i] != g_prev_proj_ids[i]) {
                proj_sequence_changed = true;
                break;
            }
        }
    }
    if (proj_sequence_changed && rt64_trace_enabled()) {
        std::fprintf(stderr, "[rt64] frame=%u projection sequence ->", frame);
        for (uint32_t i = 0; i < g_frame_proj_count && i < kProjectionIdLogCount; ++i) {
            std::fprintf(stderr, " 0x%08X", g_frame_proj_ids[i]);
        }
        std::fprintf(stderr, "\n");
        std::fflush(stderr);
    }
    for (uint32_t i = 0; i < kProjectionIdLogCount; ++i) {
        g_prev_proj_ids[i] = g_frame_proj_ids[i];
        g_frame_proj_ids[i] = 0;
    }
    g_prev_proj_count = g_frame_proj_count;
    g_frame_proj_count = 0;

    // A draw interrupted by a state change would otherwise leave a scope open
    // and mis-pair every later group, so drop them at the frame boundary.
    if (g_root_scope_depth != 0U || g_bone_scope_depth != 0U) {
        if (rt64_trace_enabled()) {
            std::fprintf(stderr,
                         "[rt64] scope imbalance at frame boundary: roots=%u "
                         "bones=%u\n",
                         g_root_scope_depth,
                         g_bone_scope_depth);
            std::fflush(stderr);
        }
        g_root_scope_depth = 0;
        g_bone_scope_depth = 0;
    }
    g_player_scope_depth = 0;
    g_player_key = 0;
    g_cam_sampled = false;
    g_frame_cut = false;

    if (rt64_camlog_enabled()) {
        std::fprintf(stderr, "[actors] frame=%u drawn=%zu kept=%u new=%u\n",
                     frame, g_cur_actor_draws.size(), g_frame_actor_matched,
                     g_frame_actor_new);
        std::fflush(stderr);
    }
    g_prev_actor_draws.swap(g_cur_actor_draws);
    g_cur_actor_draws.clear();
    for (ActorDraw& draw : g_prev_actor_draws) {
        draw.claimed = false;
    }
    g_frame_actor_matched = 0;
    g_frame_actor_new = 0;

    if (!append_command(rdram, kRenderBufferState, kEnableWord0,
                        kEnableWord1)) {
        note_append_failure(0U);
        return;
    }
    ++g_frame_enables;
    g_frame_extended = true;

    // Tooie's VI manager keeps its current frame divisor at 0x8007913C: 2 for
    // the usual 30 Hz, 3 for the 20 Hz some overlays select. Report the rate
    // the game is actually running at, which is what RT64 interpolates from.
    const uint32_t divisor = read_word(rdram, kViRetraceInterval);
    uint32_t rate_divisor = divisor;
    // A frame that overran is followed by a short catch-up frame (measured in the
    // throne room: steps 2, 1, 3 against a divisor of 2, arriving 48, 6 and 46 ms
    // apart), and the world advances by the STEP, not by the divisor. Reported at
    // the divisor's rate, RT64 gave all three frames the same display time, so the
    // motion halved and then ran 1.5x, and the frames it could not fit before the
    // next one arrived were dropped (AGENTS.md 7.6b). The step is reported instead
    // when it is a plausible frame length that really passed (elapsed agrees, or
    // is 0 on a catch-up frame); a load stall (step 7-15) and a recorded demo step
    // (step > elapsed, §7.8) keep the divisor. BT_RT64_STEPRATE=off restores the
    // divisor alone for A/B.
    static const bool step_rate_off = rt64_env_off("BT_RT64_STEPRATE");
    const uint32_t step = read_byte(rdram, kFrameStepVis);
    const uint32_t step_elapsed = read_byte(rdram, kFrameElapsedVis);
    if (!step_rate_off && divisor > 0U && divisor <= 6U && step >= 1U &&
        step <= std::min(divisor * 2U, 6U) &&
        (step_elapsed == step || step_elapsed == 0U)) {
        rate_divisor = step;
    }
    const uint32_t refresh_rate =
        (rate_divisor > 0U && rate_divisor <= 60U) ? 60U / rate_divisor : 30U;
    if (!append_command(rdram, kRenderBufferState, kSetRefreshRateWord0,
                        refresh_rate)) {
        note_append_failure(1U);
    }
}

// func_80098BA8 is the player draw wrapper, so its entry and its exit bracket
// exactly the draws that belong to one player.
extern "C" void tooie_rt64_player_scope(uint8_t* rdram, recomp_context* ctx,
                                        uint32_t stage) {
    // Where in the frame's list the player is drawn, for BT_TEX_SEAMS=log2.
    if (g_frame_player_lo == 0 && stage == 1U) g_frame_player_lo = read_word(rdram, kRenderBufferState);
    if (g_frame_player_hi == 0 && stage != 1U) g_frame_player_hi = read_word(rdram, kRenderBufferState);
    if (rt64_disabled()) {
        return;
    }
    if (stage == 1U) {
        if (g_player_scope_depth++ == 0U) {
            g_player_key =
                stable_player_key(rdram, static_cast<uint32_t>(ctx->r4));
            g_root_scope_depth = 0;
            g_bone_scope_depth = 0;
        }
        return;
    }

    if (g_player_scope_depth == 0U) {
        return;
    }

    if (--g_player_scope_depth == 0U) {
        g_player_key = 0;
        g_root_scope_depth = 0;
        g_bone_scope_depth = 0;
    }
}

// 0x800DF12C is where func_800DE498 has just written the root display-list
// pointer back to the graphics buffers, i.e. immediately after its own
// gSPMatrix and before CPU animation and the geometry walker. 0xF8($sp) holds
// the address of the display-list cursor and 0x10C($sp) the model's geometry
// list, both read from the same stack slots the function itself uses.
//
// The same site serves the skybox and every other model: they reach the shared
// renderer through func_800DE448 as well, so whichever scope is active decides
// the identity -- the player's model, the sky layer the draw loop is on, or
// otherwise the tracked draw (actor_transform_id).
extern "C" void tooie_rt64_push_player_root(uint8_t* rdram,
                                            recomp_context* ctx) {
    {
        const uint32_t c = static_cast<uint32_t>(MEM_W(0xF8U, ctx->r29));
        if (in_rdram(c, 4U) && g_frame_models.size() < 512) {
            g_frame_models.push_back({read_word(rdram, c), 0U, g_player_scope_depth != 0U});
        }
    }
    if (rt64_disabled()) {
        return;
    }

    const bool in_player = g_player_scope_depth != 0U;
    const bool in_sky = g_sky_draw_depth != 0U;
    if (!in_player && !in_sky && rt64_actors_off()) {
        return;
    }

    const uint32_t depth = g_root_scope_depth++;
    if (depth >= kRootScopeCount) {
        return;
    }

    RootScope& scope = g_root_scopes[depth];
    scope = {};

    const uint32_t cursor = static_cast<uint32_t>(MEM_W(0xF8U, ctx->r29));
    if (!in_rdram(cursor, sizeof(uint32_t))) {
        return;
    }

    if (in_sky) {
        if (g_sky_layer >= kSkyboxLayerCount) {
            return;
        }
        scope.transform_id = kSkyboxTransformIdBase +
            g_sky_layer * kSkyboxTransformIdStride;
        scope.bone_flags = cut_mask(kSkyModelGroupFlags, kCutModelMask);
        scope.pushed = append_matrix_group(
            rdram, cursor, scope.transform_id,
            cut_mask(kSkyModelGroupFlags, kCutModelMask));
        if (scope.pushed) {
            ++g_frame_sky_groups;
        }
        else {
            note_append_failure(3U);
        }
        return;
    }

    const uint32_t model = static_cast<uint32_t>(MEM_W(0x10CU, ctx->r29));
    if (!in_rdram(model, sizeof(uint32_t))) {
        return;
    }

    uint32_t root_flags = kRootGroupFlags;
    scope.bone_flags = kBoneGroupFlags;
    const bool animated = read_word(rdram, kAnimationMatrixList) != 0U;
    if (in_player) {
        bool assigned = false;
        scope.transform_id =
            player_model_transform_id(g_player_key, model, &assigned);
        // BT_RT64_CAMLOG: every (re)assignment of a player slot, and every draw
        // left without an id (only possible with BT_RT64_SLOTRECLAIM=off).
        if (rt64_camlog_enabled() && (assigned || scope.transform_id == 0U)) {
            std::fprintf(stderr,
                         "[player-slot] frame=%u key=%u model=%08X id=%08X slots=%u\n",
                         read_word(rdram, kGameFrameCount), g_player_key, model,
                         scope.transform_id, g_player_model_count);
        }
    }
    else {
        root_flags = kActorGroupFlags;
        scope.bone_flags = kActorGroupFlags;
        // 0xE0($sp) is the renderer's own copy of the draw position.
        const uint32_t sp = static_cast<uint32_t>(ctx->r29);
        float pos[3];
        for (uint32_t i = 0; i < 3U; ++i) {
            pos[i] = read_float(rdram, sp + 0xE0U + i * 4U);
        }
        if (!std::isfinite(pos[0]) || !std::isfinite(pos[1]) ||
            !std::isfinite(pos[2])) {
            return;
        }
        scope.transform_id = actor_transform_id(model, pos);
        if (rt64_actorlog_enabled()) {
            scope.model = model;
            scope.pos[0] = pos[0];
            scope.pos[1] = pos[1];
            scope.pos[2] = pos[2];
            scope.anim = read_word(rdram, kAnimationMatrixList);
        }
    }
    if (scope.transform_id == 0U) {
        return;
    }

    // BT_RT64_CAMLOG: the player root's translation, read from the gSPMatrix
    // the renderer has just emitted (the command before the cursor).
    if (in_player && rt64_camlog_enabled()) {
        const uint32_t gfx = read_word(rdram, cursor);
        if (in_rdram(gfx - 8U, 8U) && (read_word(rdram, gfx - 8U) >> 24) == 0xDAU) {
            const uint32_t mtx =
                (read_word(rdram, gfx - 4U) & 0x00FFFFFFU) | 0x80000000U;
            if (in_rdram(mtx, 64U)) {
                std::fprintf(stderr, "[player] frame=%u id=0x%08X pos=(%.1f %.1f %.1f)\n",
                             read_word(rdram, kGameFrameCount), scope.transform_id,
                             read_mtx_element(rdram, mtx, 3U, 0U),
                             read_mtx_element(rdram, mtx, 3U, 1U),
                             read_mtx_element(rdram, mtx, 3U, 2U));
            }
        }
    }

    if (animated && !rt64_verts_off()) {
        root_flags |= kVertexInterpolateBits;
        // The bones too (AGENTS.md 7.7i): a bone-animated character's mouth, beak and eyelids are CPU-modified
        // vertices (and part swaps) UNDER a bone transform, so without this they stepped at the cutscene's
        // 20 Hz while the bones around them glided. Static bone geometry is untouched (RT64 only blends
        // vertices that changed). BT_RT64_BONEVERTS=off restores the old flags for A/B.
        static const bool bone_verts_off = rt64_env_off("BT_RT64_BONEVERTS");
        if (!bone_verts_off) {
            scope.bone_flags |= kBoneVertexInterpolateBits;
        }
    }
    // Where this model's commands start (BT_RT64_ACTORLOG counts from here).
    scope.gfx_start = read_word(rdram, cursor);
    scope.pushed = append_matrix_group(rdram, cursor, scope.transform_id,
                                       cut_mask(root_flags, kCutModelMask));
    if (scope.pushed) {
        ++g_frame_root_groups;
    }
    else {
        note_append_failure(2U);
    }
}

// 0x800DF238 is the first instruction after Tooie restores or pops its root
// model matrix, so the N64 scope and the RT64 group close together.
extern "C" void tooie_rt64_pop_player_root(uint8_t* rdram,
                                           recomp_context* ctx) {
    {
        const uint32_t c = static_cast<uint32_t>(MEM_W(0xF8U, ctx->r29));
        for (size_t i = g_frame_models.size(); i-- > 0;) {
            if (g_frame_models[i].hi == 0U) {
                if (in_rdram(c, 4U)) g_frame_models[i].hi = read_word(rdram, c);
                break;
            }
        }
    }
    if (rt64_disabled()) {
        return;
    }
    if (g_root_scope_depth == 0U) {
        return;
    }

    const uint32_t depth = --g_root_scope_depth;
    if (depth >= kRootScopeCount) {
        return;
    }

    RootScope& scope = g_root_scopes[depth];
    if (scope.pushed) {
        const uint32_t cursor = static_cast<uint32_t>(MEM_W(0xF8U, ctx->r29));
        if (rt64_actorlog_enabled() && scope.model != 0U) {
            // What this model emitted between its root group and here: matrix
            // loads (G_MTX), vertex loads (G_VTX) and display-list calls (G_DL).
            uint32_t matrices = 0, vertices = 0, calls = 0, first_vtx = 0;
            const uint32_t end = read_word(rdram, cursor);
            if (in_rdram(scope.gfx_start, 8U) && end > scope.gfx_start &&
                end - scope.gfx_start < 0x40000U) {
                for (uint32_t a = scope.gfx_start; a + 8U <= end; a += 8U) {
                    const uint32_t op = read_word(rdram, a) >> 24;
                    if (op == 0xDAU) ++matrices;
                    else if (op == 0x01U) { if (vertices++ == 0U) first_vtx = read_word(rdram, a + 4U); }
                    else if (op == 0xDEU) ++calls;
                }
            }
            std::fprintf(stderr,
                         "[actor] frame=%u model=%08X id=%08X pos=(%.0f %.0f %.0f) "
                         "bones=%u mtx=%u vtx=%u dl=%u vtx0=%08X anim=%08X\n",
                         read_word(rdram, kGameFrameCount), scope.model,
                         scope.transform_id, scope.pos[0], scope.pos[1],
                         scope.pos[2], scope.bones, matrices, vertices, calls,
                         first_vtx, scope.anim);
        }
        if (!append_command(rdram, cursor, kPopMatrixGroupWord0,
                            kPopMatrixGroupWord1)) {
            note_append_failure(4U);
        }
    }
    scope = {};
}

// Table-0 command 2 has emitted its bone gSPMatrix by 0x800DCFC0. The bone
// index is the command's own signed byte at +9, which the trace showed to be
// unique within a model, so it is a stable sub-id under the root group.
extern "C" void tooie_rt64_push_player_bone(uint8_t* rdram,
                                            recomp_context* ctx) {
    if (rt64_disabled()) {
        return;
    }
    if (g_root_scope_depth == 0U) {
        return;
    }

    const uint32_t depth = g_bone_scope_depth++;
    if (depth >= kBoneScopeCount) {
        return;
    }
    g_bone_scopes[depth] = false;

    const uint32_t root_depth = g_root_scope_depth - 1U;
    if (root_depth >= kRootScopeCount) {
        return;
    }

    RootScope& root_scope = g_root_scopes[root_depth];

    // Same path taken by the game's own `beq $a2, $zero, 0x800DCFC0`: with no
    // animation matrix list there is no bone matrix, so there is no group
    // either, and the matching pop must not run.
    if (!root_scope.pushed ||
        read_word(rdram, kAnimationMatrixList) == 0U) {
        return;
    }

    const int32_t bone = static_cast<int32_t>(MEM_B(9, ctx->r7));
    if (bone < 0 || bone >= static_cast<int32_t>(kPlayerTransformIdStride - 1U)) {
        return;
    }

    // func_800DCF48 keeps the graphics buffers in s0, and its bone pop runs
    // before s0 is restored, so the same register is valid at both sites.
    const uint32_t cursor = static_cast<uint32_t>(ctx->r16);
    g_bone_scopes[depth] = append_matrix_group(
        rdram, cursor, root_scope.transform_id + 1U + static_cast<uint32_t>(bone),
        cut_mask(root_scope.bone_flags, kCutModelMask));
    if (g_bone_scopes[depth]) {
        ++g_frame_bone_groups;
        ++root_scope.bones;
    }
    else {
        note_append_failure(5U);
    }
}

// 0x800DD014 follows Tooie's own conditional gSPPopMatrix. Only pop when the
// matching bone invocation emitted a group, so recursive nesting stays paired.
extern "C" void tooie_rt64_pop_player_bone(uint8_t* rdram,
                                           recomp_context* ctx) {
    if (rt64_disabled()) {
        return;
    }
    if (g_bone_scope_depth == 0U) {
        return;
    }

    const uint32_t depth = --g_bone_scope_depth;
    if (depth >= kBoneScopeCount) {
        return;
    }

    if (g_bone_scopes[depth]) {
        const uint32_t cursor = static_cast<uint32_t>(ctx->r16);
        if (!append_command(rdram, cursor, kPopMatrixGroupWord0,
                            kPopMatrixGroupWord1)) {
            note_append_failure(6U);
        }
    }
    g_bone_scopes[depth] = false;
}

// Sky seam blending (enhancement, AGENTS.md Â§7.9).
//
// Every Tooie sky measured (Spiral Mountain, Jinjo Village, Mayahem Temple) is a
// panorama cut into clamped tiles (64x64 IA8, 32x32 RGBA32, 32x32 RGBA16) and
// mapped edge to edge, each tile across [-0.5, N - 0.5]. The tiles do not
// overlap, so at every tile border the filter has nothing to blend the last
// texel with: each side holds its own edge texel flat for half a texel and the
// image steps by one texel's difference. That step is the seam, and it is
// NATIVE -- identical with interpolation off and at the original resolution
// (measured, Â§7.9); a hardware N64 clamps the same way.
//
// The fix is to the DATA: after the sky has been drawn, the display list it
// emitted is walked, every textured triangle edge lying on a clamped tile border
// is collected, and edges two tiles share are paired. Each pair's border texels
// are then replaced by their common average, so both sides of the seam meet at
// the same value and the step is gone. Three guards keep it from touching
// anything that is not a continuation of one image:
//   * the two triangles must lie on opposite sides of the shared edge (two
//     coincident layers, e.g. Spiral Mountain's cross-faded cloud quads, are not
//     neighbours);
//   * both must come from the same model (one vertex segment);
//   * the borders must already agree to within the texture's own texel-to-texel
//     variation: mean |difference| <= 2 x (mean |edge - next texel|) + 3, on a
//     0-255 scale. Measured, real seams sit at 0.1-1.3x and mismatched art at
//     2.9-14x, so the band is wide on both sides.
// Averaging is idempotent, so a texture that is processed twice is unchanged.
// The work runs once per sky (keyed on the emitted display list and a sample of
// what was written), not per frame.
namespace sky_seams {

std::atomic<uint32_t> g_enabled{1};

// BT_SKY_SEAMS=off disables the blending for A/B, overriding the graphics
// option; =log prints one summary per processed sky, =log2 adds each pair's
// verdict.
int env_mode() {
    static const int mode = [] {
        const char* v = std::getenv("BT_SKY_SEAMS");
        if (v == nullptr) return 0;
        if (std::strcmp(v, "off") == 0 || std::strcmp(v, "0") == 0) return -1;
        if (std::strcmp(v, "log") == 0) return 2;
        if (std::strcmp(v, "log2") == 0) return 3;
        if (std::strcmp(v, "log3") == 0) return 4;
        return 0;
    }();
    return mode;
}

uint32_t phys(uint32_t a) { return a & 0x007FFFFFU; }
uint8_t rd8(const uint8_t* rdram, uint32_t a) { return rdram[phys(a) ^ 3U]; }
void wr8(uint8_t* rdram, uint32_t a, uint8_t v) { rdram[phys(a) ^ 3U] = v; }
uint32_t rd32(const uint8_t* rdram, uint32_t a) {
    return *reinterpret_cast<const uint32_t*>(rdram + (phys(a) & ~3U));
}

struct Vert { int16_t p[3]; float st[2]; };
struct Tex {
    uint32_t addr = 0;   // RDRAM address of texel (0,0)
    uint32_t stride = 0; // bytes per row
    uint8_t fmt = 0, siz = 0;
    uint16_t w = 0, h = 0;
    bool clamp[2] = {false, false};
    float s0 = 0.0f, t0 = 0.0f;
    uint32_t source_image = 0; // G_SETTIMG base, known for G_LOADTILE/G_LOADBLOCK
    uint32_t tlut = 0;         // RDRAM palette address when fmt == 2 (CI)
    uint8_t palette = 0;
    bool tlut_ia16 = false;
};
struct Edge {
    int16_t p[2][3];
    int16_t opp[3];      // the triangle's third vertex
    float along[2];      // the other texcoord at p[0], p[1]
    uint32_t group;
    Tex tex;
    uint8_t axis, side;  // axis 0: an s border (column), 1: a t border (row)
    bool half_texel;
    uint32_t dl;         // the display list the triangle was drawn from
    uint32_t state[4];   // combiner (2 words), other mode high/low as last set
};

bool supported(uint8_t fmt, uint8_t siz) {
    return (fmt == 3 && siz == 1) || (fmt == 4 && siz == 1) || (fmt == 3 && siz == 2) ||
           (fmt == 0 && siz == 2) || (fmt == 0 && siz == 3);
}
bool texseam_supported(uint8_t fmt, uint8_t siz) {
    return supported(fmt, siz) || (fmt == 2 && (siz == 0 || siz == 1)) || ((fmt == 3 || fmt == 4) && siz == 0);
}
uint32_t texel_bits(uint8_t siz) { return 4U << siz; }
uint32_t bytes_per_texel(uint8_t siz) { return siz == 3 ? 4U : (siz == 2 ? 2U : 1U); }
uint32_t row_bytes_for(uint16_t w, uint8_t siz) { return (uint32_t(w) * texel_bits(siz) + 7U) / 8U; }

// A texel as up to four 0-255 channels.
void read_texel(const uint8_t* rdram, uint32_t a, const Tex& t, float out[4]) {
    if (t.siz == 1) {
        const uint8_t b = rd8(rdram, a);
        if (t.fmt == 3) { out[0] = out[1] = out[2] = (b >> 4) * 17.0f; out[3] = (b & 15) * 17.0f; }
        else { out[0] = out[1] = out[2] = out[3] = b; }
    }
    else if (t.siz == 2) {
        const uint16_t v = uint16_t(rd8(rdram, a) << 8 | rd8(rdram, a + 1));
        if (t.fmt == 3) { out[0] = out[1] = out[2] = float(v >> 8); out[3] = float(v & 0xFF); }
        else {
            out[0] = ((v >> 11) & 31) * (255.0f / 31.0f); out[1] = ((v >> 6) & 31) * (255.0f / 31.0f);
            out[2] = ((v >> 1) & 31) * (255.0f / 31.0f); out[3] = (v & 1) ? 255.0f : 0.0f;
        }
    }
    else {
        for (int c = 0; c < 4; ++c) out[c] = rd8(rdram, a + c);
    }
}

void write_texel(uint8_t* rdram, uint32_t a, const Tex& t, const float in[4]) {
    auto q = [](float v, float scale) { return int(std::lround(std::clamp(v, 0.0f, 255.0f) * scale / 255.0f)); };
    if (t.siz == 1) {
        if (t.fmt == 3) wr8(rdram, a, uint8_t(q(in[0], 15) << 4 | q(in[3], 15)));
        else wr8(rdram, a, uint8_t(q(in[0], 255)));
    }
    else if (t.siz == 2) {
        uint16_t v;
        if (t.fmt == 3) v = uint16_t(q(in[0], 255) << 8 | q(in[3], 255));
        else v = uint16_t(q(in[0], 31) << 11 | q(in[1], 31) << 6 | q(in[2], 31) << 1 | (in[3] >= 127.5f ? 1 : 0));
        wr8(rdram, a, uint8_t(v >> 8));
        wr8(rdram, a + 1, uint8_t(v));
    }
    else {
        for (int c = 0; c < 4; ++c) wr8(rdram, a + c, uint8_t(q(in[c], 255)));
    }
}

uint32_t texel_addr(const Tex& t, int s, int tt) {
    return t.addr + uint32_t(tt) * t.stride + ((uint32_t(s) * texel_bits(t.siz)) >> 3);
}
void border_coords(const Edge& e, int i, int inward, int& s, int& tt) {
    if (e.axis == 0) { s = e.side ? e.tex.w - 1 - inward : inward; tt = i; }
    else { s = i; tt = e.side ? e.tex.h - 1 - inward : inward; }
}
// The address of texel `i` along an edge's border.
uint32_t border_addr(const Edge& e, int i, int inward) {
    int s, tt;
    border_coords(e, i, inward, s, tt);
    return texel_addr(e.tex, s, tt);
}
int border_len(const Edge& e) { return e.axis == 0 ? e.tex.h : e.tex.w; }

void decode_tlut_entry(const uint8_t* rdram, uint32_t tlut, uint32_t idx, bool ia16, float out[4]) {
    if (tlut == 0 || phys(tlut) + idx * 2U + 2U > 0x00800000U) {
        out[0] = out[1] = out[2] = out[3] = 0.0f;
        return;
    }
    const uint32_t a = tlut + idx * 2U;
    const uint16_t v = uint16_t((rd8(rdram, a) << 8) | rd8(rdram, a + 1));
    if (ia16) {
        out[0] = out[1] = out[2] = float(v >> 8);
        out[3] = float(v & 0xFF);
    }
    else {
        out[0] = ((v >> 11) & 31) * (255.0f / 31.0f);
        out[1] = ((v >> 6) & 31) * (255.0f / 31.0f);
        out[2] = ((v >> 1) & 31) * (255.0f / 31.0f);
        out[3] = (v & 1) ? 255.0f : 0.0f;
    }
}

void read_texseam_texel(const uint8_t* rdram, const Tex& t, int s, int tt, float out[4]) {
    const uint32_t a = texel_addr(t, s, tt);
    if (t.siz == 0) {
        const uint8_t v = (rd8(rdram, a) >> ((s & 1) ? 0U : 4U)) & 0xFU;
        if (t.fmt == 2) decode_tlut_entry(rdram, t.tlut, uint32_t(t.palette) * 16U + v, t.tlut_ia16, out);
        else if (t.fmt == 3) { out[0] = out[1] = out[2] = (v >> 1) * (255.0f / 7.0f); out[3] = (v & 1) ? 255.0f : 0.0f; }
        else { out[0] = out[1] = out[2] = out[3] = v * 17.0f; }
        return;
    }
    if (t.fmt == 2 && t.siz == 1) {
        decode_tlut_entry(rdram, t.tlut, rd8(rdram, a), t.tlut_ia16, out);
        return;
    }
    read_texel(rdram, a, t, out);
}

struct Walker {
    const uint8_t* rdram = nullptr;
    uint32_t seg[16] = {};
    bool seg_known[16] = {};
    Vert verts[64] = {};
    float scale[2] = {1.0f, 1.0f};
    bool tex_on = false;
    uint8_t render_tile = 0;
    struct Tile { uint8_t fmt, siz, cms, cmt, palette; uint16_t line, tmem; uint16_t uls, ult, lrs, lrt; bool sized; };
    Tile tiles[8] = {};
    uint32_t img_addr = 0, img_width = 0, tlut_addr = 0;
    uint8_t img_siz = 0;
    // TMEM address -> where its texels came from.
    struct Load { uint16_t tmem; uint32_t addr, stride, source_image, loaded_bytes; bool valid, is_tile, exact_block; };
    Load loads[4] = {};
    uint32_t group = 0;
    uint32_t commands = 0;
    uint32_t cur_dl = 0;
    uint32_t state[4] = {};
    bool dump = false;
    // World seam survey (BT_WORLD_SEAMS=log): collect border edges of every
    // format, not only the ones whose texels can be read and blended, and count
    // what the textured triangles use.
    bool any_format = false;
    uint32_t skip_start = 0, skip_end = 0;  // a top-level range not to walk (the sky's)
    uint32_t tex_tris = 0, clamp_tris = 0, offset_tile_tris = 0;
    // Survey only: skip 2D (orthographic) draws -- level title cards, the HUD,
    // the pause screen -- so what is counted is the 3D world.
    bool world_only = false;
    size_t mark = 0;
    bool in_ortho = false;
    uint32_t ortho_tris = 0;
    // Texture seams (tex_seams, AGENTS.md 7.14): borders may also sit on the
    // texel EDGE (st 0 / N) as well as half a texel in; groups are counted only
    // where segment 1 is set from a list the frame emitted (dyn_lo..dyn_hi), and
    // edges are kept only for the groups in `want`; textures in `skip_tex` are
    // left out.
    bool exact_edges = false;
    uint32_t dyn_lo = 0, dyn_hi = 0;
    const std::vector<uint8_t>* want = nullptr;
    const std::vector<uint32_t>* skip_tex = nullptr;
    bool group_wanted() const { return want == nullptr || (group < want->size() && (*want)[group] != 0); }
    std::vector<Edge> edges;

    bool resolve(uint32_t a, uint32_t& out) const {
        const uint32_t s = (a >> 24) & 0x0F;
        if ((a >> 24) == 0x80 || (a >> 24) == 0x00) { out = 0x80000000U | phys(a); return true; }
        if ((a >> 24) > 0x0F || !seg_known[s]) return false;
        out = 0x80000000U | phys(seg[s] + (a & 0x00FFFFFFU));
        return true;
    }

    bool texture_of(Tex& t) const {
        const Tile& tile = tiles[render_tile];
        const bool fmt_ok = any_format || (exact_edges ? texseam_supported(tile.fmt, tile.siz) : supported(tile.fmt, tile.siz));
        if (!tile.sized || !fmt_ok) return false;
        if (tile.lrs < tile.uls || tile.lrt < tile.ult) return false;
        for (const Load& l : loads) {
            if (!l.valid || l.tmem != tile.tmem) continue;
            if (!l.is_tile && (!l.exact_block || tile.line == 0 || (tile.siz == 0 && (tile.uls & 1) != 0))) continue;
            t.fmt = tile.fmt; t.siz = tile.siz;
            t.w = uint16_t(tile.lrs - tile.uls + 1);
            t.h = uint16_t(tile.lrt - tile.ult + 1);
            t.s0 = float(tile.uls);
            t.t0 = float(tile.ult);
            t.clamp[0] = (tile.cms & 2) != 0; t.clamp[1] = (tile.cmt & 2) != 0;
            t.palette = tile.palette;
            t.tlut = (tile.fmt == 2) ? tlut_addr : 0U;
            t.tlut_ia16 = ((state[2] >> 14) & 3U) == 3U;
            const uint32_t row_bytes = row_bytes_for(t.w, t.siz);
            if (t.w < 2 || t.h < 2 || t.w > 256 || t.h > 256) return false;
            if (l.is_tile) {
                t.addr = l.addr;
                t.source_image = l.source_image;
                t.stride = l.stride ? l.stride : uint32_t(tile.line) * (tile.siz == 3 ? 16U : 8U);
            }
            else {
                t.stride = uint32_t(tile.line) * (tile.siz == 3 ? 16U : 8U);
                const uint32_t s_byte = (uint32_t(tile.uls) * texel_bits(t.siz)) >> 3;
                const uint32_t end_bytes = uint32_t(tile.ult) * t.stride + s_byte + uint32_t(t.h - 1) * t.stride + row_bytes;
                if (end_bytes > l.loaded_bytes) return false;
                t.addr = l.addr + uint32_t(tile.ult) * t.stride + s_byte;
                t.source_image = l.addr;
            }
            return t.stride < 16384 && t.addr < 0x80800000U && t.stride >= row_bytes &&
                   phys(t.addr) + uint32_t(t.h - 1) * t.stride + row_bytes <= 0x00800000U;
        }
        return false;
    }

    void triangle(int a, int b, int c) {
        if (!tex_on || a >= 64 || b >= 64 || c >= 64) return;
        if (world_only && in_ortho) { ++ortho_tris; return; }
        ++tex_tris;
        {
            const Tile& tile = tiles[render_tile];
            if ((tile.cms & 2) || (tile.cmt & 2)) {
                ++clamp_tris;
                if (tile.sized && (tile.uls != 0 || tile.ult != 0)) ++offset_tile_tris;
            }
        }
        if (!group_wanted()) return;
        Tex t;
        if (!texture_of(t)) return;
        if (skip_tex != nullptr && std::find(skip_tex->begin(), skip_tex->end(), t.addr) != skip_tex->end()) return;
        const int idx[3] = {a, b, c};
        for (int e = 0; e < 3; ++e) {
            const Vert& p = verts[idx[e]];
            const Vert& q = verts[idx[(e + 1) % 3]];
            const Vert& o = verts[idx[(e + 2) % 3]];
            for (uint8_t axis = 0; axis < 2; ++axis) {
                if (!t.clamp[axis]) continue;
                const float orig = axis == 0 ? t.s0 : t.t0;
                const float pst = p.st[axis] - orig;
                const float qst = q.st[axis] - orig;
                const float lo = -0.5f;
                const float hi = (axis == 0 ? t.w : t.h) - 0.5f;
                for (uint8_t side = 0; side < 2; ++side) {
                    const float v = side ? hi : lo;
                    const float v2 = exact_edges ? (side ? hi + 0.5f : lo + 0.5f) : v;
                    const bool on_half_texel = std::fabs(pst - v) <= 0.1f && std::fabs(qst - v) <= 0.1f;
                    if (!on_half_texel && (std::fabs(pst - v2) > 0.1f || std::fabs(qst - v2) > 0.1f)) continue;
                    Edge ed;
                    std::memcpy(ed.p[0], p.p, sizeof(p.p));
                    std::memcpy(ed.p[1], q.p, sizeof(q.p));
                    std::memcpy(ed.opp, o.p, sizeof(o.p));
                    ed.along[0] = p.st[axis ^ 1];
                    ed.along[1] = q.st[axis ^ 1];
                    ed.group = group;
                    ed.tex = t;
                    ed.axis = axis;
                    ed.side = side;
                    ed.half_texel = on_half_texel;
                    ed.dl = cur_dl;
                    std::memcpy(ed.state, state, sizeof(state));
                    if (edges.size() < 4096) edges.push_back(ed);
                }
            }
        }
    }

    void walk(uint32_t start, uint32_t end, int depth) {
        const uint32_t saved_dl = cur_dl;
        cur_dl = start;
        struct Restore { uint32_t& r; uint32_t v; ~Restore() { r = v; } } restore{cur_dl, saved_dl};
        for (uint32_t pc = start; pc < end && commands < (any_format ? 400000U : 20000U); pc += 8) {
            if (depth == 0 && pc >= skip_start && pc < skip_end) { pc = skip_end - 8; continue; }
            if (depth == 0 && world_only) {
                while (mark < g_frame_proj_marks.size() && g_frame_proj_marks[mark].gfx <= pc) {
                    in_ortho = g_frame_proj_marks[mark++].ortho;
                }
            }
            ++commands;
            const uint32_t w0 = rd32(rdram, pc);
            const uint32_t w1 = rd32(rdram, pc + 4);
            if (dump) std::fprintf(stderr, "[skydl] %d %08X: %08X %08X\n", depth, pc, w0, w1);
            switch (w0 >> 24) {
            case 0x01: {
                const uint32_t n = (w0 >> 12) & 0xFF;
                const uint32_t last = (w0 & 0xFF) >> 1;
                uint32_t a;
                if (n == 0 || last > 64 || n > last || !resolve(w1, a)) break;
                for (uint32_t k = 0; k < n; ++k) {
                    Vert& v = verts[last - n + k];
                    const uint32_t va = a + k * 16;
                    const uint32_t xy = rd32(rdram, va), zf = rd32(rdram, va + 4), st = rd32(rdram, va + 8);
                    v.p[0] = int16_t(xy >> 16); v.p[1] = int16_t(xy); v.p[2] = int16_t(zf >> 16);
                    v.st[0] = int16_t(st >> 16) * scale[0] / 32.0f;
                    v.st[1] = int16_t(st) * scale[1] / 32.0f;
                }
                break;
            }
            case 0x05:
                triangle(((w0 >> 16) & 0xFF) / 2, ((w0 >> 8) & 0xFF) / 2, (w0 & 0xFF) / 2);
                break;
            case 0x06: case 0x07:
                triangle(((w0 >> 16) & 0xFF) / 2, ((w0 >> 8) & 0xFF) / 2, (w0 & 0xFF) / 2);
                triangle(((w1 >> 16) & 0xFF) / 2, ((w1 >> 8) & 0xFF) / 2, (w1 & 0xFF) / 2);
                break;
            case 0xFC: state[0] = w0; state[1] = w1; break;
            case 0xE2: case 0xE3: {
                // G_SETOTHERMODE_L/H: len = (w0 & 0xFF) + 1, shift = 32 - ((w0 >> 8) & 0xFF) - len.
                const uint32_t len = (w0 & 0xFF) + 1;
                const int shift = 32 - int((w0 >> 8) & 0xFF) - int(len);
                if (shift >= 0) {
                    const uint32_t mask = uint32_t(((1ULL << len) - 1ULL) << shift);
                    uint32_t& word = state[(w0 >> 24) == 0xE3 ? 2 : 3];
                    word = (word & ~mask) | (w1 & mask);
                }
                break;
            }
            case 0xEF: state[2] = w0 & 0x00FFFFFFU; state[3] = w1; break;
            case 0xD7:
                tex_on = ((w0 >> 1) & 0x7F) != 0;
                render_tile = (w0 >> 8) & 7;
                scale[0] = ((w1 >> 16) & 0xFFFF) / 65536.0f;
                scale[1] = (w1 & 0xFFFF) / 65536.0f;
                break;
            case 0xDB:
                if (((w0 >> 16) & 0xFF) == 0x06) {
                    const uint32_t s = ((w0 & 0xFFFF) / 4) & 0x0F;
                    seg[s] = w1; seg_known[s] = true;
                    // each model points segment 1 at its vertices
                    if (s == 1 && (dyn_hi == 0 || (cur_dl >= dyn_lo && cur_dl < dyn_hi))) ++group;
                }
                break;
            case 0xDE: {
                uint32_t a;
                if (depth < 8 && resolve(w1, a) && (group_wanted() || (a >= dyn_lo && a < dyn_hi))) {
                    walk(a, a + 8 * 4096, depth + 1);
                }
                if (((w0 >> 16) & 0xFF) == 0x01) return; // branch: no return here
                break;
            }
            case 0xDF:
                if (depth > 0) return;
                break;
            case 0xFD:
                if (!resolve(w1, img_addr)) img_addr = 0;
                img_siz = (w0 >> 19) & 3;
                img_width = (w0 & 0xFFF) + 1;
                break;
            case 0xF0:
                tlut_addr = img_addr;
                break;
            case 0xF5: {
                Tile& t = tiles[(w1 >> 24) & 7];
                t.fmt = (w0 >> 21) & 7; t.siz = (w0 >> 19) & 3;
                t.line = (w0 >> 9) & 0x1FF; t.tmem = w0 & 0x1FF;
                t.palette = (w1 >> 20) & 0xF;
                t.cmt = (w1 >> 18) & 3; t.cms = (w1 >> 8) & 3;
                break;
            }
            case 0xF2: {
                Tile& t = tiles[(w1 >> 24) & 7];
                t.uls = ((w0 >> 12) & 0xFFF) >> 2; t.ult = (w0 & 0xFFF) >> 2;
                t.lrs = ((w1 >> 12) & 0xFFF) >> 2; t.lrt = (w1 & 0xFFF) >> 2;
                t.sized = true;
                break;
            }
            case 0xF3: case 0xF4: {
                const Tile& t = tiles[(w1 >> 24) & 7];
                const bool is_loadtile = (w0 >> 24) == 0xF4;
                const uint32_t uls_raw = (w0 >> 12) & 0xFFFU;
                const uint32_t ult_raw = w0 & 0xFFFU;
                const uint32_t lrs_raw = (w1 >> 12) & 0xFFFU;
                const uint32_t loaded_bytes = is_loadtile ? 0U : (((lrs_raw >> (4U - t.siz)) + 1U) * 8U);
                Load nl{t.tmem, img_addr, 0, is_loadtile ? img_addr : 0U, loaded_bytes, img_addr != 0, is_loadtile, uls_raw == 0 && ult_raw == 0};
                if (is_loadtile) {
                    const uint32_t img_bits = texel_bits(img_siz);
                    nl.stride = (img_width * img_bits) >> 3;
                    nl.addr += ((ult_raw >> 2) * nl.stride) + (((uls_raw >> 2) * img_bits) >> 3);
                }
                // One record per TMEM address, newest wins.
                bool placed = false;
                for (Load& c : loads) {
                    if (c.valid && c.tmem == nl.tmem) { c = nl; placed = true; break; }
                }
                if (!placed) {
                    std::memmove(&loads[1], &loads[0], sizeof(Load) * 3);
                    loads[0] = nl;
                }
                break;
            }
            default:
                break;
            }
        }
    }
};

bool same_point(const int16_t a[3], const int16_t b[3]) { return a[0] == b[0] && a[1] == b[1] && a[2] == b[2]; }

// Opposite sides of the shared edge p0-p1: the components of each third vertex
// perpendicular to the edge point away from each other.
bool opposite_sides(const Edge& a, const Edge& b) {
    float e[3], na[3], nb[3];
    for (int i = 0; i < 3; ++i) e[i] = float(a.p[1][i] - a.p[0][i]);
    const float ee = e[0] * e[0] + e[1] * e[1] + e[2] * e[2];
    if (ee <= 0.0f) return false;
    float da = 0, db = 0;
    for (int i = 0; i < 3; ++i) { na[i] = float(a.opp[i] - a.p[0][i]); nb[i] = float(b.opp[i] - a.p[0][i]); da += na[i] * e[i]; db += nb[i] * e[i]; }
    float dot = 0;
    for (int i = 0; i < 3; ++i) { na[i] -= e[i] * da / ee; nb[i] -= e[i] * db / ee; dot += na[i] * nb[i]; }
    return dot < 0.0f;
}

struct State {
    uint32_t sample_addr[4] = {};
    uint8_t sample_value[4] = {};
    uint32_t key = 0;
    bool have = false;
};
// The last few skies processed. A storm sky alternates between two segment sets at the lightning's pace
// (the intro: 231 and 579 commands, every 2-3 frames), and with a single entry each switch re-processed
// the sky (0.3-1.5 ms on the game thread) and re-blended texels that were already blended.
constexpr int kStateCount = 4;
State g_states[kStateCount];
int g_state_next = 0;
State g_state;  // the entry being filled by process()

// `survey` (the world seam survey, BT_WORLD_SEAMS=log) walks the whole frame
// except the sky, collects border edges of every format and writes nothing.
struct Survey { uint32_t skip_start, skip_end; uint32_t fmt_pairs[32]; uint32_t unsupported; };
void process(uint8_t* rdram, uint32_t dl_start, uint32_t dl_end, int log, Survey* survey = nullptr) {
    const auto t0 = std::chrono::steady_clock::now();
    Walker w;
    w.rdram = rdram;
    w.dump = log >= 3;
    w.edges.reserve(512);
    if (survey != nullptr) {
        w.any_format = true;
        w.skip_start = survey->skip_start;
        w.skip_end = survey->skip_end;
        w.world_only = true;
    }
    w.walk(dl_start, dl_end, 0);
    const std::vector<Edge>& edges = w.edges;

    // Pair edges that share both endpoints.
    // One slot per border texel touched; a flat open-addressed table keeps
    // this allocation-free after the first sky (it runs on the game thread).
    struct Slot { uint32_t addr; Tex tex; float own[4]; float sum[4]; uint32_t n; uint32_t seen[6]; };
    static std::vector<Slot> slots;
    static std::vector<uint32_t> table_key;
    static std::vector<uint32_t> table_val;
    constexpr uint32_t kTable = 1U << 14;
    slots.clear();
    table_key.assign(kTable, 0U);
    table_val.resize(kTable);
    auto slot_for = [&](uint32_t addr, const Tex& t) -> size_t {
        uint32_t h = (addr * 2654435761U) >> 18;
        for (;; h = (h + 1U) & (kTable - 1U)) {
            if (table_key[h] == addr) return table_val[h];
            if (table_key[h] == 0U) break;
        }
        if (slots.size() >= kTable / 2) return SIZE_MAX;
        Slot s{addr, t, {}, {}, 0, {}};
        read_texel(rdram, addr, t, s.own);
        slots.push_back(s);
        table_key[h] = addr;
        table_val[h] = uint32_t(slots.size() - 1);
        return slots.size() - 1;
    };
    uint32_t accepted = 0, rejected = 0, skipped = 0, displaced = 0;
    // Measures a candidate pair: maps A's border texels onto B's and returns the mean difference across
    // the seam and the texture's own gradient next to it. False when the two do not form a seam.
    struct Candidate { uint32_t i, j; float diff, grad; bool forward, ok; };
    auto measure = [&](const Edge& a, const Edge& b, bool forward, std::pair<int, int>* map, size_t& mapped,
                       float& diff, float& grad) {
        const float a_orig = (a.axis ^ 1) == 0 ? a.tex.s0 : a.tex.t0;
        const float b_orig = (b.axis ^ 1) == 0 ? b.tex.s0 : b.tex.t0;
        const float a0 = a.along[0] - a_orig, a1 = a.along[1] - a_orig;
        const float b0 = (forward ? b.along[0] : b.along[1]) - b_orig;
        const float b1 = (forward ? b.along[1] : b.along[0]) - b_orig;
        mapped = 0; diff = 0; grad = 0;
        // A stitched gutter needs one source texel per destination texel.
    const float offset = b0 - (((a1 - a0) * (b1 - b0) < 0.0f) ? -a0 : a0);
    if (std::fabs(a1 - a0) < 1.0f || std::fabs(std::fabs(a1 - a0) - std::fabs(b1 - b0)) > 0.1f ||
        std::fabs(offset - std::round(offset)) > 0.1f) return false;
        const int la = border_len(a), lb = border_len(b);
        for (int k = 0; k < la; ++k) {
            if (k < std::min(a0, a1) - 0.01f || k > std::max(a0, a1) + 0.01f) continue;
            const float u = (k - a0) / (a1 - a0);
            const int m = std::clamp(int(std::lround(b0 + u * (b1 - b0))), 0, lb - 1);
            float va[4], vb[4], ia[4], ib[4];
            read_texel(rdram, border_addr(a, k, 0), a.tex, va);
            read_texel(rdram, border_addr(b, m, 0), b.tex, vb);
            read_texel(rdram, border_addr(a, k, 1), a.tex, ia);
            read_texel(rdram, border_addr(b, m, 1), b.tex, ib);
            for (int c = 0; c < 3; ++c) {
                diff += std::fabs(va[c] - vb[c]) / 3.0f;
                grad += (std::fabs(va[c] - ia[c]) + std::fabs(vb[c] - ib[c])) / 6.0f;
            }
            if (mapped < 256) map[mapped++] = {k, m};
        }
        if (mapped < 2) return false;
        diff /= float(mapped);
        grad /= float(mapped);
        return true;
    };
    std::vector<Candidate> candidates;
    std::pair<int, int> map[256];
    for (size_t i = 0; i < edges.size(); ++i) {
        for (size_t j = i + 1; j < edges.size(); ++j) {
            const Edge& a = edges[i];
            const Edge& b = edges[j];
            if (a.group != b.group) continue;
            bool forward;
            if (same_point(a.p[0], b.p[0]) && same_point(a.p[1], b.p[1])) forward = true;
            else if (same_point(a.p[0], b.p[1]) && same_point(a.p[1], b.p[0])) forward = false;
            else continue;
            if (a.tex.addr == b.tex.addr && a.axis == b.axis && a.side == b.side) continue;
            if (!opposite_sides(a, b)) { ++skipped; continue; }
            if (survey != nullptr &&
                (!supported(a.tex.fmt, a.tex.siz) || !supported(b.tex.fmt, b.tex.siz))) {
                ++survey->unsupported;
                ++survey->fmt_pairs[(a.tex.fmt & 7) * 4 + (a.tex.siz & 3)];
                continue;
            }
            size_t mapped; float diff, grad;
            if (!measure(a, b, forward, map, mapped, diff, grad)) continue;
            if (survey != nullptr) ++survey->fmt_pairs[(a.tex.fmt & 7) * 4 + (a.tex.siz & 3)];
            candidates.push_back({uint32_t(i), uint32_t(j), diff, grad, forward, diff <= 2.0f * grad + 3.0f});
        }
    }
    // One partner per edge. Some skies draw two layers on the same dome (the intro's storm sky lays a
    // second panorama over the first during lightning), so an edge can face a border of the OTHER layer
    // across the same line. Blending with both put a foreign image's border into the average, and each
    // re-processing compounded it. Each edge keeps only its best-matching candidate, and a pair is blended
    // only when it is the best for both of its edges.
    std::vector<int32_t> best(edges.size(), -1);
    auto score = [](const Candidate& c) { return c.diff / (c.grad + 1.0f); };
    for (size_t c = 0; c < candidates.size(); ++c) {
        if (!candidates[c].ok) continue;
        for (uint32_t e : {candidates[c].i, candidates[c].j}) {
            if (best[e] < 0 || score(candidates[c]) < score(candidates[size_t(best[e])])) best[e] = int32_t(c);
        }
    }
    for (size_t c = 0; c < candidates.size(); ++c) {
        const Candidate& cand = candidates[c];
        const Edge& a = edges[cand.i];
        const Edge& b = edges[cand.j];
        const bool mutual = cand.ok && best[cand.i] == int32_t(c) && best[cand.j] == int32_t(c);
        if (log >= 2) {
            std::fprintf(stderr, "[%s] pair %08X/%d%d %08X/%d%d fmt=%d/%d %dx%d diff=%.1f grad=%.1f %s"
                         " dl=%08X/%08X cc=%08X%08X/%08X%08X om=%08X%08X/%08X%08X\n",
                         survey ? "worldseam" : "skyseam", a.tex.addr, a.axis, a.side, b.tex.addr, b.axis, b.side,
                         a.tex.fmt, a.tex.siz, a.tex.w, a.tex.h, cand.diff, cand.grad,
                         !cand.ok ? "REJECT" : (mutual ? "blend" : "displaced"), a.dl, b.dl, a.state[0], a.state[1],
                         b.state[0], b.state[1], a.state[2], a.state[3], b.state[2], b.state[3]);
        }
        if (!cand.ok) { ++rejected; continue; }
        if (!mutual) { ++displaced; continue; }
        size_t mapped; float diff, grad;
        measure(a, b, cand.forward, map, mapped, diff, grad);
        ++accepted;
        for (size_t q = 0; q < mapped; ++q) {
            const auto [k, m] = map[q];
            const uint32_t aa = border_addr(a, k, 0), ba = border_addr(b, m, 0);
            const size_t ia = slot_for(aa, a.tex);
            const size_t ib = slot_for(ba, b.tex);
            if (ia == SIZE_MAX || ib == SIZE_MAX) continue;
            // Each distinct partner counts once, however many seams name it.
            for (int dir = 0; dir < 2; ++dir) {
                Slot& self = slots[dir ? ib : ia];
                const Slot& other = slots[dir ? ia : ib];
                if (std::find(self.seen, self.seen + std::min<uint32_t>(self.n, 6U), other.addr) !=
                    self.seen + std::min<uint32_t>(self.n, 6U) || self.n >= 6U) continue;
                self.seen[self.n] = other.addr;
                for (int c2 = 0; c2 < 4; ++c2) self.sum[c2] += other.own[c2];
                ++self.n;
            }
        }
    }
    uint32_t written = 0;
    for (Slot& s : slots) {
        if (s.n == 0 || survey != nullptr) continue;
        float v[4];
        for (int c = 0; c < 4; ++c) v[c] = (s.own[c] + s.sum[c]) / float(1 + s.n);
        write_texel(rdram, s.addr, s.tex, v);
        ++written;
    }
    g_state.have = written != 0;
    for (int k = 0; k < 4 && written != 0; ++k) {
        g_state.sample_addr[k] = slots[(slots.size() - 1) * size_t(k) / 3].addr;
        g_state.sample_value[k] = rd8(rdram, g_state.sample_addr[k]);
    }
    if (survey != nullptr) {
        std::fprintf(stderr, "[worldseam] dl=%08X-%08X cmds=%u models=%u 2d-tris=%u textured-tris=%u clamped-tris=%u "
                     "offset-tile-tris=%u border-edges=%zu blendable=%u rejected=%u displaced=%u same-side=%u "
                     "unreadable-pairs=%u by fmt/siz:", dl_start, dl_end, w.commands, w.group, w.ortho_tris, w.tex_tris,
                     w.clamp_tris, w.offset_tile_tris, edges.size(), accepted, rejected, displaced, skipped,
                     survey->unsupported);
        for (int k = 0; k < 32; ++k) {
            if (survey->fmt_pairs[k] != 0) std::fprintf(stderr, " %d/%d=%u", k / 4, k % 4, survey->fmt_pairs[k]);
        }
        std::fprintf(stderr, " us=%.0f\n",
                     std::chrono::duration<double, std::micro>(std::chrono::steady_clock::now() - t0).count());
        std::fflush(stderr);
        return;
    }
    if (log) {
        std::fprintf(stderr, "[skyseam] dl=%08X-%08X cmds=%u models=%u border-edges=%zu pairs blended=%u rejected=%u "
                     "displaced=%u same-side=%u texels=%u us=%.0f\n", dl_start, dl_end, w.commands, w.group, edges.size(), accepted,
                     rejected, displaced, skipped, written,
                     std::chrono::duration<double, std::micro>(std::chrono::steady_clock::now() - t0).count());
        std::fflush(stderr);
    }
}

uint32_t g_dl_cursor_ptr = 0;
uint32_t g_dl_start = 0;

void on_sky_entry(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    g_dl_cursor_ptr = static_cast<uint32_t>(ctx->r4);
    g_dl_start = 0;
    if ((g_dl_cursor_ptr >> 24) == 0x80) g_dl_start = static_cast<uint32_t>(MEM_W(0, ctx->r4));
}

// The sky's part of this frame's display list, for the world seam survey.
uint32_t g_frame_sky_start = 0, g_frame_sky_end = 0;

void on_sky_exit(uint8_t* rdram, recomp_context* ctx) {
    (void)ctx;
    if (g_dl_start != 0) {
        g_frame_sky_start = g_dl_start;
        g_frame_sky_end = rd32(rdram, g_dl_cursor_ptr);
    }
    const int mode = env_mode();
    if (mode < 0 || g_enabled.load(std::memory_order_relaxed) == 0 || g_dl_start == 0) return;
    const uint32_t end = rd32(rdram, g_dl_cursor_ptr);
    if (mode >= 4) {
        std::fprintf(stderr, "[skydraw] dl=%08X-%08X\n", g_dl_start, end);
    }
    if ((end >> 24) != 0x80 || end <= g_dl_start || end - g_dl_start > 0x10000) return;
    // Key: the model and texture addresses the sky draw emitted (its segment
    // commands) and the parts of the model it called. A new sky, or the same one
    // reloaded elsewhere, is redone -- and so is a new view of the same one, since
    // the model renderer only emits the segments in view, and a seam can only be
    // paired while both of its sides are drawn. Re-blending a blended seam
    // changes nothing (both sides already hold the average).
    uint32_t key = 2166136261U;
    for (uint32_t pc = g_dl_start; pc < end; pc += 8) {
        const uint32_t w0 = rd32(rdram, pc);
        if ((w0 >> 24) == 0xDB || (w0 >> 24) == 0xDE) key = (key ^ rd32(rdram, pc + 4)) * 16777619U;
    }
    int slot = -1;
    for (int k = 0; k < kStateCount; ++k) {
        if (g_states[k].key == key) slot = k;
    }
    if (slot >= 0) {
        // Reloaded in place: what was written is gone, so do it again.
        const State& st = g_states[slot];
        bool intact = true;
        for (int k = 0; k < 4 && st.have; ++k) {
            intact = intact && rd8(rdram, st.sample_addr[k]) == st.sample_value[k];
        }
        if (intact) return;
    }
    else {
        slot = g_state_next;
        g_state_next = (g_state_next + 1) % kStateCount;
    }
    g_state = State{};
    g_state.key = key;
    process(rdram, g_dl_start, end, mode >= 2 ? mode - 1 : 0);
    g_states[slot] = g_state;
}

// BT_WORLD_SEAMS=log / log2: the world seam survey (AGENTS.md §7.14). Walks
// the whole frame's display list except the sky, at most every two seconds,
// and reports what a world version of the sky blending would find: textured
// and clamped triangles, clamped tile-border edges, and the edges two
// different tiles share, by format. Writes nothing.
int world_survey_mode() {
    static const int mode = [] {
        const char* v = std::getenv("BT_WORLD_SEAMS");
        if (v == nullptr) return 0;
        if (std::strcmp(v, "log") == 0) return 1;
        if (std::strcmp(v, "log2") == 0) return 2;
        return 0;
    }();
    return mode;
}

void survey_frame(uint8_t* rdram, uint32_t start, uint32_t end) {
    const int mode = world_survey_mode();
    if (mode == 0 || (start >> 24) != 0x80 || end <= start || end - start > 0x40000) return;
    static auto next = std::chrono::steady_clock::now();
    const auto now = std::chrono::steady_clock::now();
    if (now < next) return;
    next = now + std::chrono::seconds(2);
    Survey survey{};
    survey.skip_start = g_frame_sky_start;
    survey.skip_end = g_frame_sky_end > g_frame_sky_start ? g_frame_sky_end : 0;
    process(rdram, start, end, mode, &survey);
}

// ---------------------------------------------------------------------------
// Texture seams everywhere (AGENTS.md 7.14): the sky's blending (§7.9) for the
// world and for character models, as a one-time job per piece of geometry.
//
// Per frame only the lists the frame itself emitted are scanned (`Scan`, no
// recursion into static model lists): every static display list a model group
// calls is identified by its address and segments, and a group is walked only
// when it calls one never walked before. A walk collects the group's clamped
// tile-border edges and pairs them exactly as the sky does (shared endpoints,
// opposite sides, borders that already agree, the best match for both edges).
// A border that later meets a different neighbor stays clamped. Source
// samples identify textures reloaded in place or animated by the CPU.
namespace texseam {

std::atomic<uint32_t> g_enabled{1};
std::atomic<uint32_t> g_char_enabled{1};

extern "C" std::atomic<uint32_t>* tooie_char_seam_bleed_flag() { return &g_char_enabled; }

bool enabled(bool character) {
    return (character ? g_char_enabled : g_enabled).load(std::memory_order_relaxed) != 0;
}

// BT_TEX_SEAMS=off disables it (overriding the option); =log prints a
// [texseam] summary every 2 s; =log2 adds one line per walk and per pair.
int env_mode() {
    static const int mode = [] {
        const char* v = std::getenv("BT_TEX_SEAMS");
        if (v == nullptr) return 0;
        if (std::strcmp(v, "off") == 0 || std::strcmp(v, "0") == 0) return -1;
        if (std::strcmp(v, "log") == 0) return 1;
        if (std::strcmp(v, "log2") == 0) return 2;
        if (std::strcmp(v, "dry") == 0) return 3;   // everything but the writes
        return 0;
    }();
    return mode;
}

// The renderer samples a one-texel gutter around each tile. Each gutter texel
// is copied from a matching tile in the source image; game memory stays native.
struct GutterTexel {
    int index;
    uint32_t source;
    uint32_t own;
    uint32_t neighbor;
    uint8_t shift;
    uint8_t is_4b;
};
struct Rec {
    uint64_t partner = 0;
    bool conflicted = false;
    std::vector<GutterTexel> gutter;
};
std::mutex g_stitch_mutex;
std::unordered_map<uint64_t, Rec> g_reg;   // tile border -> its pairing
std::unordered_set<uint64_t> g_seen;       // static lists already walked
std::vector<uint32_t> g_volatile;          // textures the CPU rewrites
std::vector<uint32_t> g_buffers;           // colour/depth images seen this map
std::unordered_map<uint32_t, uint32_t> g_rewrites;
struct Sample { uint32_t addr, value, bytes, tex; uint8_t shift, is_4b; };
std::vector<Sample> g_samples;
size_t g_sample_next = 0;
uint32_t g_map = 0xFFFFFFFFU;
struct Stats {
    uint32_t frames = 0, walks = 0, blended = 0, conflicts = 0, rejected = 0, reloads = 0, edges_max = 0;
    double steady_us = 0, steady_max = 0, walk_us = 0, walk_max = 0;
} g_st;
std::chrono::steady_clock::time_point g_next_log{};

uint32_t tex_of(uint64_t key) { return uint32_t(key >> 40) | 0x80000000U; }
uint64_t tile_key(const Tex& t, bool character) {
    return (uint64_t(phys(t.addr)) << 40) | (uint64_t(t.stride) << 26) |
           (uint64_t(t.w) << 17) | (uint64_t(t.h) << 8) |
           (uint64_t(t.fmt) << 5) | (uint64_t(t.siz) << 3) | (uint64_t(character) << 2);
}
uint64_t border_key(const Edge& e, bool character) {
    return tile_key(e.tex, character) | (uint64_t(e.axis) << 1) | e.side;
}
uint32_t raw_texel(const uint8_t* rdram, uint32_t a, uint32_t n) {
    uint32_t v = 0;
    for (uint32_t i = 0; i < n; ++i) v = (v << 8) | rd8(rdram, a + i);
    return v;
}
uint32_t raw_texel_coord(const uint8_t* rdram, const Tex& t, int s, int tt, uint32_t& out_addr, uint8_t& out_shift) {
    out_addr = texel_addr(t, s, tt);
    if (t.siz == 0) {
        out_shift = (s & 1) ? 0U : 4U;
        return (rd8(rdram, out_addr) >> out_shift) & 0xFU;
    }
    out_shift = 0;
    return raw_texel(rdram, out_addr, bytes_per_texel(t.siz));
}
uint32_t read_raw_sample(const uint8_t* rdram, uint32_t addr, uint32_t bytes, uint8_t shift, uint8_t is_4b) {
    if (is_4b) return (rd8(rdram, addr) >> shift) & 0xFU;
    return raw_texel(rdram, addr, bytes);
}

extern "C" bool tooie_stitch_texture(const uint8_t* rdram, uint32_t addr, uint32_t stride,
                                     uint16_t width, uint16_t height, uint8_t fmt, uint8_t siz,
                                     bool character, uint8_t* pixels, size_t capacity) {
    if (env_mode() < 0 || env_mode() == 3 || !enabled(character) || !texseam_supported(fmt, siz) ||
        width < 2 || width > 256 || height < 2 || height > 256 || stride >= 16384) return false;

    Tex tex;
    tex.addr = addr;
    tex.stride = stride;
    tex.w = width;
    tex.h = height;
    tex.fmt = fmt;
    tex.siz = siz;
    const uint32_t bits = texel_bits(siz);
    const uint32_t bytes = bytes_per_texel(siz);
    const uint32_t row_bytes = row_bytes_for(width, siz);
    const size_t padded_width = size_t(width) + 2;
    const size_t padded_size = (padded_width * (size_t(height) + 2) * bits + 7U) / 8U;
    // A CI tile's palette sits at 0x800 of the renderer's stitched buffer (TextureManager::uploadStitched
    // passes that as the capacity), so padded CI texels must end below it.
    constexpr size_t kCiTexelLimit = 0x800U;
    if (padded_size > capacity || (fmt == 2 && padded_size > kCiTexelLimit) || stride < row_bytes ||
        phys(addr) + uint32_t(height - 1) * stride + row_bytes > 0x00800000U) return false;

    std::lock_guard lock(g_stitch_mutex);
    if (g_map != (rd32(rdram, 0x80132DC0U) & 0xFFFFU)) return false;
    const uint64_t key = tile_key(tex, character);
    const Rec* gutters[4] = {};
    bool any = false;
    for (int edge = 0; edge < 4; ++edge) {
        const auto it = g_reg.find(key | uint64_t(edge));
        if (it == g_reg.end() || it->second.conflicted || it->second.gutter.empty()) continue;
        const Rec& rec = it->second;
        const bool valid = std::all_of(rec.gutter.begin(), rec.gutter.end(), [&](const GutterTexel& sample) {
            return read_raw_sample(rdram, sample.source, bytes, sample.shift, sample.is_4b) == sample.own;
        });
        if (valid) {
            gutters[edge] = &rec;
            any = true;
        }
    }
    if (!any) return false;

    if (siz == 0) {
        std::memset(pixels, 0, padded_size);
        auto put4 = [&](int x, int y, uint32_t value) {
            const size_t idx = size_t(y) * padded_width + size_t(x);
            uint8_t& dst = pixels[idx >> 1];
            const uint8_t nib = uint8_t(value & 0xFU);
            if (idx & 1U) dst = (dst & 0xF0U) | nib;
            else dst = (dst & 0x0FU) | uint8_t(nib << 4);
        };
        uint32_t dummy_addr = 0;
        uint8_t dummy_shift = 0;
        for (int y = -1; y <= int(height); ++y) {
            for (int x = -1; x <= int(width); ++x) {
                const uint32_t v = raw_texel_coord(rdram, tex, std::clamp(x, 0, int(width) - 1),
                                                   std::clamp(y, 0, int(height) - 1), dummy_addr, dummy_shift);
                put4(x + 1, y + 1, v);
            }
        }
        for (int edge = 0; edge < 4; ++edge) {
            if (gutters[edge] == nullptr) continue;
            for (const GutterTexel& texel : gutters[edge]->gutter) {
                if (edge < 2) put4(edge == 0 ? 0 : width + 1, texel.index + 1, texel.neighbor);
                else put4(texel.index + 1, edge == 2 ? 0 : height + 1, texel.neighbor);
            }
        }
        return true;
    }

    auto put = [&](int x, int y, uint32_t value) {
        const size_t dst = (size_t(y) * padded_width + size_t(x)) * bytes;
        for (uint32_t i = 0; i < bytes; ++i) pixels[dst + i] = uint8_t(value >> (8 * (bytes - 1 - i)));
    };
    for (int y = -1; y <= height; ++y) {
        for (int x = -1; x <= width; ++x) {
            const uint32_t src = texel_addr(tex, std::clamp(x, 0, int(width) - 1),
                                           std::clamp(y, 0, int(height) - 1));
            put(x + 1, y + 1, raw_texel(rdram, src, bytes));
        }
    }
    for (int edge = 0; edge < 4; ++edge) {
        if (gutters[edge] == nullptr) continue;
        for (const GutterTexel& texel : gutters[edge]->gutter) {
            if (edge < 2) put(edge == 0 ? 0 : width + 1, texel.index + 1, texel.neighbor);
            else put(texel.index + 1, edge == 2 ? 0 : height + 1, texel.neighbor);
        }
    }
    return true;
}

// Pass 1: the frame's own lists. Marks the model groups (counted as the
// Walker counts them) that call a static list not walked yet.
struct Scan {
    const uint8_t* rdram;
    uint32_t head, end, sky_lo, sky_hi;
    uint32_t seg[16] = {};
    bool known[16] = {};
    uint32_t group = 0, cmds = 0;
    size_t mark = 0;
    bool ortho = false;
    std::vector<uint8_t> want;
    std::vector<uint64_t> pending;
    std::vector<uint32_t> player_groups, actor_groups;
    bool resolve(uint32_t a, uint32_t& out) const {
        const uint32_t s = (a >> 24) & 0x0F;
        if ((a >> 24) == 0x80 || (a >> 24) == 0x00) { out = 0x80000000U | phys(a); return true; }
        if ((a >> 24) > 0x0F || !known[s]) return false;
        out = 0x80000000U | phys(seg[s] + (a & 0x00FFFFFFU));
        return true;
    }
    void walk(uint32_t start, uint32_t stop, int depth) {
        const bool dyn = start >= head && start < end;
        for (uint32_t pc = start; pc < stop && cmds < 200000U; pc += 8) {
            if (depth == 0 && pc >= sky_lo && pc < sky_hi) { pc = sky_hi - 8; continue; }
            if (depth == 0) {
                while (mark < g_frame_proj_marks.size() && g_frame_proj_marks[mark].gfx <= pc) {
                    ortho = g_frame_proj_marks[mark++].ortho;
                }
            }
            ++cmds;
            const uint32_t w0 = rd32(rdram, pc), w1 = rd32(rdram, pc + 4);
            const uint32_t op = w0 >> 24;
            if (op == 0xDB && ((w0 >> 16) & 0xFF) == 0x06) {
                const uint32_t s = ((w0 & 0xFFFF) / 4) & 0x0F;
                seg[s] = w1; known[s] = true;
                if (s == 1 && dyn) ++group;
            }
            else if (op == 0xDE) {
                uint32_t a;
                if (resolve(w1, a)) {
                    if (a >= head && a < end) {
                        if (depth < 8) walk(a, a + 8 * 4096, depth + 1);
                    }
                    else if (!ortho) {
                        // Track whether this group belongs to a character.
                        for (const ModelRange& m : g_frame_models) {
                            if (pc >= m.lo && pc < m.hi) {
                                std::vector<uint32_t>& v = m.player ? player_groups : actor_groups;
                                if (v.empty() || v.back() != group) v.push_back(group);
                                break;
                            }
                        }
                        // The list and the model's vertices (segment 1). Other
                        // segments carry per-frame state (matrices) and would
                        // make every frame's lists look new.
                        const uint64_t id = (uint64_t(a) << 32) ^ (uint64_t(seg[1]) * 0x9E3779B1ULL);
                        if (g_seen.find(id) == g_seen.end()) {
                            if (want.size() <= group) want.resize(group + 1, 0);
                            want[group] = 1;
                            pending.push_back(id);
                        }
                    }
                }
                if (((w0 >> 16) & 0xFF) == 0x01) return;
            }
            else if (op == 0xDF && depth > 0) {
                return;
            }
            else if (op == 0xFF || op == 0xFE) {
                // G_SETCIMG / G_SETZIMG: do not sample active render targets as source images.
                uint32_t a;
                if (resolve(w1, a) && g_buffers.size() < 32 &&
                    std::find(g_buffers.begin(), g_buffers.end(), a) == g_buffers.end()) {
                    g_buffers.push_back(a);
                }
            }
        }
    }
};

// Within 320 x 240 x 32 bits of a render target the frame set.
bool in_buffers(uint32_t addr) {
    for (uint32_t b : g_buffers) {
        if (addr >= b && addr < b + 320U * 240U * 4U) return true;
    }
    return false;
}

bool measure(const uint8_t* rdram, const Edge& a, const Edge& b, bool forward,
             std::vector<std::pair<int, int>>& map, float& diff, float& grad) {
    const float a_orig = (a.axis ^ 1) == 0 ? a.tex.s0 : a.tex.t0;
    const float b_orig = (b.axis ^ 1) == 0 ? b.tex.s0 : b.tex.t0;
    const float a0 = a.along[0] - a_orig, a1 = a.along[1] - a_orig;
    const float b0 = (forward ? b.along[0] : b.along[1]) - b_orig;
    const float b1 = (forward ? b.along[1] : b.along[0]) - b_orig;
    map.clear(); diff = 0; grad = 0;
    // A stitched gutter needs one source texel per destination texel.
    const float offset = b0 - (((a1 - a0) * (b1 - b0) < 0.0f) ? -a0 : a0);
    if (std::fabs(a1 - a0) < 1.0f || std::fabs(std::fabs(a1 - a0) - std::fabs(b1 - b0)) > 0.1f ||
        std::fabs(offset - std::round(offset)) > 0.1f) return false;
    const int la = border_len(a), lb = border_len(b);
    for (int k = 0; k < la; ++k) {
        if (k < std::min(a0, a1) - 0.01f || k > std::max(a0, a1) + 0.01f) continue;
        const float u = (k - a0) / (a1 - a0);
        const int m = int(std::lround(b0 + u * (b1 - b0)));
        if (m < 0 || m >= lb) continue;
        int sa, ta, sb, tb, sia, tia, sib, tib;
        border_coords(a, k, 0, sa, ta);
        border_coords(b, m, 0, sb, tb);
        border_coords(a, k, 1, sia, tia);
        border_coords(b, m, 1, sib, tib);
        float va[4], vb[4], ia[4], ib[4];
        read_texseam_texel(rdram, a.tex, sa, ta, va);
        read_texseam_texel(rdram, b.tex, sb, tb, vb);
        read_texseam_texel(rdram, a.tex, sia, tia, ia);
        read_texseam_texel(rdram, b.tex, sib, tib, ib);
        for (int c = 0; c < 3; ++c) {
            diff += std::fabs(va[c] - vb[c]) / 3.0f;
            grad += (std::fabs(va[c] - ia[c]) + std::fabs(vb[c] - ib[c])) / 6.0f;
        }
        map.push_back({k, m});
    }
    if (map.size() < 2) return false;
    diff /= float(map.size());
    grad /= float(map.size());
    return true;
}

bool adjacent_source_tiles(const Edge& a, const Edge& b, const std::vector<std::pair<int, int>>& map) {
    if (a.tex.source_image == 0 || a.tex.source_image != b.tex.source_image ||
        a.tex.stride == 0 || a.tex.stride != b.tex.stride || a.axis != b.axis || a.side == b.side ||
        a.tex.addr < a.tex.source_image || b.tex.addr < b.tex.source_image) return false;
    const uint32_t bits = texel_bits(a.tex.siz);
    const uint32_t texels_per_row = (a.tex.stride * 8U) / bits;
    auto pos_of = [&](const Edge& e, int i, uint32_t& row, uint32_t& col) {
        int s, tt;
        border_coords(e, i, 0, s, tt);
        const uint32_t rel = texel_addr(e.tex, s, tt) - e.tex.source_image;
        row = rel / e.tex.stride;
        const uint32_t col_bytes = rel % e.tex.stride;
        col = (col_bytes * 8U) / bits + ((bits == 4U) ? uint32_t(s & 1) : 0U);
    };
    return std::all_of(map.begin(), map.end(), [&](const std::pair<int, int>& indices) {
        uint32_t ra, ca, rb, cb;
        pos_of(a, indices.first, ra, ca);
        pos_of(b, indices.second, rb, cb);
        if (a.axis == 0) {
            if (ra != rb) return false;
            return a.side ? (ca + 1U == cb && cb < texels_per_row) : (cb + 1U == ca && ca < texels_per_row);
        }
        return ca == cb && (a.side ? ra + 1U == rb : rb + 1U == ra);
    });
}

void stitch_pair(const uint8_t* rdram, const Edge& a, const Edge& b,
                 const std::vector<std::pair<int, int>>& map, bool character, int log) {
    if (env_mode() == 3) { ++g_st.blended; return; }
    const uint64_t ka = border_key(a, character), kb = border_key(b, character);
    Rec& ra = g_reg[ka];
    Rec& rb = g_reg[kb];
    if (ra.conflicted || rb.conflicted) return;
    if ((ra.partner != 0 && ra.partner != kb) || (rb.partner != 0 && rb.partner != ka)) {
        // Shared art that meets a different neighbor stays clamped in both uses.
        const uint64_t involved[4] = {ka, kb, ra.partner, rb.partner};
        for (uint64_t key : involved) {
            const auto it = g_reg.find(key);
            if (it != g_reg.end()) {
                it->second.gutter.clear();
                it->second.conflicted = true;
            }
        }
        ++g_st.conflicts;
        if (log >= 2) {
            std::fprintf(stderr, "[texseam] conflicting neighbors at %08X/%u%u and %08X/%u%u\n",
                         a.tex.addr, a.axis, a.side, b.tex.addr, b.axis, b.side);
        }
        return;
    }
    ra.partner = kb;
    rb.partner = ka;
    const uint8_t is_4b = a.tex.siz == 0 ? 1U : 0U;
    const uint32_t bytes = bytes_per_texel(a.tex.siz);
    for (const auto& [k, m] : map) {
        int sa, ta, sb, tb;
        border_coords(a, k, 0, sa, ta);
        border_coords(b, m, 0, sb, tb);
        uint32_t aa = 0, ba = 0;
        uint8_t ashift = 0, bshift = 0;
        const uint32_t av = raw_texel_coord(rdram, a.tex, sa, ta, aa, ashift);
        const uint32_t bv = raw_texel_coord(rdram, b.tex, sb, tb, ba, bshift);
        auto insert = [](Rec& record, int index, uint32_t addr, uint32_t own, uint32_t neighbor, uint8_t shift, uint8_t fourb) {
            const auto prev = std::find_if(record.gutter.begin(), record.gutter.end(),
                                           [&](const GutterTexel& texel) { return texel.index == index; });
            if (prev == record.gutter.end()) record.gutter.push_back({index, addr, own, neighbor, shift, fourb});
            else if (prev->own != own || prev->neighbor != neighbor || prev->shift != shift) record.conflicted = true;
        };
        insert(ra, k, aa, av, bv, ashift, is_4b);
        insert(rb, m, ba, bv, av, bshift, is_4b);
    }
    if (ra.conflicted || rb.conflicted) {
        ra.conflicted = rb.conflicted = true;
        ra.gutter.clear();
        rb.gutter.clear();
        ++g_st.conflicts;
        return;
    }
    if (!map.empty() && g_samples.size() < 16384) {
        const auto mid_pair = map[map.size() / 2];
        int sa, ta, sb, tb;
        border_coords(a, mid_pair.first, 0, sa, ta);
        border_coords(b, mid_pair.second, 0, sb, tb);
        uint32_t aa = 0, ba = 0;
        uint8_t ashift = 0, bshift = 0;
        const uint32_t av = raw_texel_coord(rdram, a.tex, sa, ta, aa, ashift);
        const uint32_t bv = raw_texel_coord(rdram, b.tex, sb, tb, ba, bshift);
        g_samples.push_back({aa, av, bytes, a.tex.addr, ashift, is_4b});
        g_samples.push_back({ba, bv, bytes, b.tex.addr, bshift, is_4b});
    }
    ++g_st.blended;
}

void forget_texture(uint32_t tex) {
    std::unordered_set<uint32_t> forgotten{tex};
    for (auto it = g_reg.begin(); it != g_reg.end();) {
        if (tex_of(it->first) == tex || (it->second.partner != 0 && tex_of(it->second.partner) == tex)) {
            forgotten.insert(tex_of(it->first));
            it = g_reg.erase(it);
        }
        else ++it;
    }
    std::erase_if(g_samples, [&](const Sample& sample) { return forgotten.count(sample.tex) != 0; });
    g_sample_next = 0;
}

void walk_and_blend(uint8_t* rdram, uint32_t head, uint32_t end, Scan& scan, int log) {
    const auto t0 = std::chrono::steady_clock::now();
    Walker w;
    w.rdram = rdram;
    w.world_only = true;
    w.exact_edges = true;
    w.dyn_lo = head;
    w.dyn_hi = end;
    w.want = &scan.want;
    w.skip_tex = &g_volatile;
    w.skip_start = scan.sky_lo;
    w.skip_end = scan.sky_hi;
    w.edges.reserve(512);
    w.walk(head, end, 0);
    const std::vector<Edge>& edges = w.edges;
    // Candidates: edges of one group with the same two endpoints, found through
    // a hash of the endpoint pair rather than by testing every pair of edges.
    auto pkey = [](const int16_t p[3]) {
        return (uint64_t(uint16_t(p[0])) << 32) | (uint64_t(uint16_t(p[1])) << 16) | uint16_t(p[2]);
    };
    std::unordered_map<uint64_t, std::vector<uint32_t>> by_edge;
    by_edge.reserve(edges.size() * 2 + 1);
    for (uint32_t i = 0; i < edges.size(); ++i) {
        uint64_t x = pkey(edges[i].p[0]), y = pkey(edges[i].p[1]);
        if (x > y) std::swap(x, y);
        by_edge[(x * 0x9E3779B97F4A7C15ULL) ^ y ^ (uint64_t(edges[i].group) << 56)].push_back(i);
    }
    struct Pairing { uint32_t i, j; float diff, grad; bool forward, adjacent_source; };
    std::vector<Pairing> cands;
    std::vector<std::pair<int, int>> map;
    std::unordered_set<uint32_t> char_groups(scan.player_groups.begin(), scan.player_groups.end());
    char_groups.insert(scan.actor_groups.begin(), scan.actor_groups.end());
    for (const auto& entry : by_edge) {
        const std::vector<uint32_t>& list = entry.second;
        for (size_t x = 0; x < list.size(); ++x) {
            for (size_t y = x + 1; y < list.size(); ++y) {
                const Edge& a = edges[list[x]];
                const Edge& b = edges[list[y]];
                if (a.group != b.group) continue;
                bool forward;
                if (same_point(a.p[0], b.p[0]) && same_point(a.p[1], b.p[1])) forward = true;
                else if (same_point(a.p[0], b.p[1]) && same_point(a.p[1], b.p[0])) forward = false;
                else continue;
                if (a.tex.addr == b.tex.addr && a.axis == b.axis && a.side == b.side) continue;
                if (!opposite_sides(a, b) || a.tex.fmt != b.tex.fmt || a.tex.siz != b.tex.siz ||
                    a.half_texel != b.half_texel || (!a.half_texel && a.side == b.side) ||
                    !a.tex.clamp[0] || !a.tex.clamp[1] || !b.tex.clamp[0] || !b.tex.clamp[1]) continue;
                if (a.tex.fmt == 2 && (a.tex.tlut != b.tex.tlut || a.tex.tlut_ia16 != b.tex.tlut_ia16 ||
                    (a.tex.siz == 0 && a.tex.palette != b.tex.palette))) continue;
                float diff, grad;
                if (!measure(rdram, a, b, forward, map, diff, grad)) continue;
                // Tighter than the sky's 2 x grad + 3: real world and model
                // seams measured 0.9-6 (0-255), and anything far past that is
                // two textures that only happen to share an edge.
                const bool adjacent_source = adjacent_source_tiles(a, b, map);
                if (a.tex.fmt == 2 && a.tex.tlut == 0 && !adjacent_source) { ++g_st.rejected; continue; }
                if (!adjacent_source && diff > std::min(grad + 3.0f, 24.0f)) { ++g_st.rejected; continue; }
                // Never a texture that is a frame or depth buffer this frame.
                if (in_buffers(a.tex.addr) || in_buffers(b.tex.addr)) continue;
                cands.push_back({list[x], list[y], diff, grad, forward, adjacent_source});
            }
        }
    }
    std::vector<int32_t> best(edges.size(), -1);
    auto score = [](const Pairing& c) { return c.adjacent_source ? -1.0f : c.diff / (c.grad + 1.0f); };
    for (size_t c = 0; c < cands.size(); ++c) {
        for (uint32_t e : {cands[c].i, cands[c].j}) {
            if (best[e] < 0 || score(cands[c]) < score(cands[size_t(best[e])])) best[e] = int32_t(c);
        }
    }
    uint32_t pairs = 0;
    for (size_t c = 0; c < cands.size(); ++c) {
        const Pairing& p = cands[c];
        if (best[p.i] != int32_t(c) || best[p.j] != int32_t(c)) continue;
        const Edge& a = edges[p.i];
        const Edge& b = edges[p.j];
        float diff, grad;
        measure(rdram, a, b, p.forward, map, diff, grad);
        if (log >= 2) {
            std::fprintf(stderr, "[texseam] pair %08X/%u%u %08X/%u%u fmt=%u/%u %ux%u diff=%.1f grad=%.1f group=%u%s dl=%08X/%08X\n",
                         a.tex.addr, a.axis, a.side, b.tex.addr, b.axis, b.side, a.tex.fmt, a.tex.siz, a.tex.w,
                         a.tex.h, p.diff, p.grad, a.group,
                         std::find(scan.player_groups.begin(), scan.player_groups.end(), a.group) !=
                             scan.player_groups.end() ? " PLAYER" :
                         (std::find(scan.actor_groups.begin(), scan.actor_groups.end(), a.group) !=
                             scan.actor_groups.end() ? " MODEL" : " world"), a.dl, b.dl);
        }
        stitch_pair(rdram, a, b, map, char_groups.count(a.group) != 0, log);
        ++pairs;
    }
    for (uint64_t id : scan.pending) g_seen.insert(id);
    const double us = std::chrono::duration<double, std::micro>(std::chrono::steady_clock::now() - t0).count();
    ++g_st.walks;
    g_st.walk_us += us;
    g_st.walk_max = std::max(g_st.walk_max, us);
    g_st.edges_max = std::max<uint32_t>(g_st.edges_max, uint32_t(edges.size()));
    if (log >= 2) {
        std::fprintf(stderr, "[texseam] walk: %zu new lists, %u cmds, %zu border edges, %zu candidates, %u pairs, %.0f us\n",
                     scan.pending.size(), w.commands, edges.size(), cands.size(), pairs, us);
    }
}

void on_frame(uint8_t* rdram, uint32_t head, uint32_t end, uint32_t sky_lo, uint32_t sky_hi) {
    const int log = env_mode();
    if (log < 0 || (!enabled(false) && !enabled(true))) return;
    if ((head >> 24) != 0x80 || end <= head || end - head > 0x40000) return;
    const auto t0 = std::chrono::steady_clock::now();
    const uint32_t map = rd32(rdram, 0x80132DC0U) & 0xFFFFU;
    std::lock_guard lock(g_stitch_mutex);
    if (map != g_map) {
        // Pairings are scoped to the source textures in this map.
        g_map = map;
        g_reg.clear(); g_seen.clear(); g_volatile.clear(); g_rewrites.clear(); g_buffers.clear();
        g_samples.clear(); g_sample_next = 0;
    }
    // A few source texels a frame detect reloads and animated textures.
    for (int n = 0; n < 8 && !g_samples.empty(); ++n) {
        if (g_sample_next >= g_samples.size()) g_sample_next = 0;
        const Sample s = g_samples[g_sample_next++];
        if (read_raw_sample(rdram, s.addr, s.bytes, s.shift, s.is_4b) == s.value) continue;
        ++g_st.reloads;
        if (++g_rewrites[s.tex] >= 2) g_volatile.push_back(s.tex);
        forget_texture(s.tex);
        g_seen.clear();   // walk what is drawn again
        break;
    }
    Scan scan{rdram, head, end, sky_lo, sky_hi};
    scan.walk(head, end, 0);
    const double steady = std::chrono::duration<double, std::micro>(std::chrono::steady_clock::now() - t0).count();
    ++g_st.frames;
    g_st.steady_us += steady;
    g_st.steady_max = std::max(g_st.steady_max, steady);
    if (!scan.pending.empty()) walk_and_blend(rdram, head, end, scan, log);
    if (log >= 1 && std::chrono::steady_clock::now() >= g_next_log) {
        g_next_log = std::chrono::steady_clock::now() + std::chrono::seconds(2);
        std::fprintf(stderr, "[texseam] map 0x%03X frames=%u steady avg=%.1f max=%.1f us | walks=%u total=%.0f max=%.0f us "
                     "(edges max %u) | pairs blended=%u rejected=%u conflicts=%u | lists seen=%zu borders=%zu "
                     "rewritten=%u volatile=%zu frame cmds=%u\n", map, g_st.frames,
                     g_st.steady_us / double(std::max(1U, g_st.frames)), g_st.steady_max, g_st.walks, g_st.walk_us,
                     g_st.walk_max, g_st.edges_max, g_st.blended, g_st.rejected, g_st.conflicts, g_seen.size(),
                     g_reg.size(), g_st.reloads, g_volatile.size(), scan.cmds);
        std::fflush(stderr);
        g_st = Stats{};
    }
}

} // namespace texseam

} // namespace sky_seams

extern "C" std::atomic<uint32_t>* tooie_sky_seams_flag() { return &sky_seams::g_enabled; }
// "Blend Texture Seams" (texseam, AGENTS.md 7.14).
extern "C" std::atomic<uint32_t>* tooie_tex_seams_flag() { return &sky_seams::texseam::g_enabled; }


// func_800BFD6C is Tooie's sky draw (`sky_draw`'s analogue: it sets near/far to
// 5..15000, fills the screen, loads its own projection via func_800E44FC, then
// draws up to three sky layers through the shared model renderer). Stage 1 runs
// on entry; stage 2 runs at `L_800BFEF8`, the single exit both the early-out
// and the normal path reach, so the flag can never be left set.
extern "C" void tooie_rt64_sky_scope(uint8_t* rdram, recomp_context* ctx,
                                     uint32_t stage) {
    // Seam blending is independent of RT64 tagging (BT_RT64_SKY=off etc.).
    if (stage == 1U) {
        sky_seams::on_sky_entry(rdram, ctx);
    }
    else {
        sky_seams::on_sky_exit(rdram, ctx);
    }
    if (rt64_disabled() || rt64_sky_off()) {
        return;
    }
    if (stage == 1U) {
        ++g_sky_draw_depth;
    }
    else {
        g_sky_draw_depth = 0;
    }
}

// The sky draw loop head carries the layer index in `$s2`, so record it there;
// the root-group hook reads it when the layer's model matrix is tagged. The
// loop's layers can be skipped (`model_bins[i] == 0`), so the index has to come
// from the game rather than from a count of layers seen.
extern "C" void tooie_rt64_sky_layer(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    if (rt64_disabled() || rt64_sky_off()) {
        return;
    }
    g_sky_layer = static_cast<uint32_t>(ctx->r18);

    // TEMPORARY diagnostic (Banjo-Tooie port). This hook sits at the sky draw
    // loop head, immediately before the test that skips a layer whose model bin
    // is null, so it can report both the layer index and whether that layer will
    // actually be drawn. A frame where every layer is skipped leaves the sky
    // draw's own black fill on screen, which is exactly the reported symptom.
    static const bool trace_sky = [] {
        const char* value = std::getenv("TOOIE_TRACE_SKY");
        return (value != nullptr) && (value[0] == '1');
    }();
    if (trace_sky) {
        const uint32_t bin = static_cast<uint32_t>(MEM_W(0x10U, ctx->r17));
        std::fprintf(stderr, "[sky-layer] layer=%u bin=0x%08X %s\n",
                     g_sky_layer, bin, (bin == 0U) ? "SKIPPED" : "drawn");
        std::fflush(stderr);
    }
}

// Tag a projection at the point the game is about to load it.
//
// The hook must run *before* the instruction that loads the display-list cursor.
// Both of Tooie's projection builders read the cursor, write the DA38 matrix
// command at that value, then store back `value + 8`; appending at the write
// itself would emit past the game's command, which the game then overwrites --
// the append reports success and nothing survives. Verified failure mode, not a
// theoretical one: see "Skybox flicker" in AGENTS.md.
//
// `cursor_address` is the guest address of the cursor word: `$s0` for
// func_800E44FC, the stack slot `0x34($sp)` for func_800E42F0.
namespace {

bool normalize3(float v[3]) {
    const float length = std::sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    if (!(length > 1e-6f) || !std::isfinite(length)) {
        return false;
    }
    for (uint32_t i = 0; i < 3U; ++i) {
        v[i] /= length;
    }
    return true;
}

// Samples this frame's camera and decides whether it cut. Only the first
// perspective projection of a frame is sampled.
//
// Position: func_800E44FC's own copy at 0x38($sp). Direction: the projection
// it is about to load is view x perspective in N64 row-vector form, and its
// last column is the world-space vector whose dot product gives clip w, i.e. the
// view axis -- the camera's direction, whatever scale or FOV the matrix carries.
// The matrix is at 0x4($s0), written by func_80018C28 just before the hook.
void evaluate_camera_cut(uint8_t* rdram, recomp_context* ctx,
                         uint32_t gfx_state) {
    if (g_cam_sampled) {
        return;
    }
    g_cam_sampled = true;

    const uint32_t sp = static_cast<uint32_t>(ctx->r29);
    CameraSample cam = {};
    bool finite = true;
    for (uint32_t i = 0; i < 3U; ++i) {
        cam.pos[i] = read_float(rdram, sp + 0x38U + i * 4U);
        finite = finite && std::isfinite(cam.pos[i]);
    }
    const uint32_t mtx = read_word(rdram, gfx_state + 4U);
    bool have_dir = in_rdram(mtx, 64U);
    if (have_dir) {
        for (uint32_t i = 0; i < 3U; ++i) {
            cam.rot[i] = read_mtx_element(rdram, mtx, i, 3U);
            cam.up[i] = read_mtx_element(rdram, mtx, i, 1U);
        }
        const float w_len = std::sqrt(cam.rot[0] * cam.rot[0] + cam.rot[1] * cam.rot[1] + cam.rot[2] * cam.rot[2]);
        const float y_len = std::sqrt(cam.up[0] * cam.up[0] + cam.up[1] * cam.up[1] + cam.up[2] * cam.up[2]);
        cam.zoom = (w_len > 0.0f) ? (y_len / w_len) : 0.0f;
        have_dir = normalize3(cam.rot) && normalize3(cam.up);
    }

    // A cut is a change in the camera's *velocity*, not a large step: the title
    // flyover pans a steady 114 units a frame, the intro has still-to-still cuts
    // of 75. So a step is compared against last frame's step, and it must also
    // be bigger than the limit itself, or a camera shake -- +50, -50, +50 -- would
    // read as a cut on every frame. Right after a cut the velocity is unknown,
    // and only a step bigger than the fallback limits counts.
    // Measured on the new-game intro: frame-to-frame deviation p99 = 14.7 units;
    // all 40 shot changes deviate by 75 or more or turn by 17 degrees or more.
    float move = 0.0f;
    float turn = 0.0f;
    float roll = 0.0f;
    float step[3] = {};
    bool cut = false;
    bool coherent_held = false;  // the velocity rule fired, coherent motion overrode it
    float zoom_step = 0.0f;
    if (finite && g_have_prev_cam) {
        float deviation = 0.0f;
        for (uint32_t i = 0; i < 3U; ++i) {
            step[i] = cam.pos[i] - g_prev_cam.pos[i];
            move += step[i] * step[i];
            const float error = step[i] - g_prev_cam_step[i];
            deviation += error * error;
        }
        move = std::sqrt(move);
        deviation = g_prev_cam_motion_known ? std::sqrt(deviation) : move;
        if (have_dir && g_prev_cam_has_dir) {
            const float dot = cam.rot[0] * g_prev_cam.rot[0] +
                              cam.rot[1] * g_prev_cam.rot[1] +
                              cam.rot[2] * g_prev_cam.rot[2];
            turn = std::acos(std::fmin(1.0f, std::fmax(-1.0f, dot))) *
                   57.29578f;
            const float up_dot = cam.up[0] * g_prev_cam.up[0] +
                                 cam.up[1] * g_prev_cam.up[1] +
                                 cam.up[2] * g_prev_cam.up[2];
            roll = std::acos(std::fmin(1.0f, std::fmax(-1.0f, up_dot))) *
                   57.29578f;
        }
        const float turn_change = g_prev_cam_motion_known
            ? std::fabs(turn - g_prev_cam_turn) : turn;
        const float cut_dist = cut_distance(false);
        const float cut_turn = cut_angle(false);
        const float move_limit = g_prev_cam_motion_known ? cut_dist : kCutUnknownDistance;
        const float turn_limit = g_prev_cam_motion_known ? cut_turn : kCutUnknownAngle;
        // The up vector also turns with any pitch, so only the part of its turn
        // the view direction does not account for counts as roll.
        const bool roll_cut = cut_roll() > 0.0f && roll > cut_roll() &&
                              roll > turn + cut_roll() * 0.5f;
        // A camera already moving that keeps going the same way has changed
        // speed, not shot. The follow camera catching up with Banjo after a fall
        // swoops down in irregular steps along one line -- measured 28, 88, 86,
        // 155, 143, 172 units a frame, consecutive steps within 37 degrees -- and
        // the velocity rule flagged two of them, holding those frames (the brief
        // "jump"). A shot change that lands further along the camera's own path,
        // with no turn, is the one case this lets through; it is drawn as a
        // short slide instead of a hold. Turns and roll still cut.
        bool coherent = false;
        if (g_prev_cam_motion_known && !rt64_cut_coherent_off()) {
            const float prev_len = std::sqrt(g_prev_cam_step[0] * g_prev_cam_step[0] +
                                             g_prev_cam_step[1] * g_prev_cam_step[1] +
                                             g_prev_cam_step[2] * g_prev_cam_step[2]);
            if (prev_len >= kCutCoherentMinStep && move > 0.0f) {
                const float along = (step[0] * g_prev_cam_step[0] + step[1] * g_prev_cam_step[1] +
                                     step[2] * g_prev_cam_step[2]) / (move * prev_len);
                coherent = along >= kCutCoherentCos &&
                           move <= kCutCoherentRatio * prev_len + cut_dist;
            }
        }
        coherent_held = coherent && move > cut_dist && deviation > move_limit;
        // A field-of-view snap is a cut too, by the same velocity rule: the change
        // must be large and unlike last frame's, so a steady zoom is never one.
        if (have_dir && g_prev_cam_has_dir && cam.zoom > 0.0f && g_prev_cam.zoom > 0.0f) {
            zoom_step = std::log(cam.zoom / g_prev_cam.zoom);
        }
        const float zoom_change = g_prev_cam_motion_known
            ? std::fabs(zoom_step - g_prev_cam_zoom_step) : std::fabs(zoom_step);
        const float zoom_limit = g_prev_cam_motion_known ? cut_zoom() : cut_zoom() * 2.0f;
        const bool zoom_cut = cut_zoom() > 0.0f && std::fabs(zoom_step) > cut_zoom() &&
                              zoom_change > zoom_limit;
        cut = (!coherent && move > cut_dist && deviation > move_limit) ||
              (turn > cut_turn && turn_change > turn_limit) || roll_cut || zoom_cut;
    }
    g_frame_cut = cut && !rt64_cuts_off();

    if (rt64_camlog_enabled()) {
        const uint32_t frame = read_word(rdram, kGameFrameCount);
        const double ms = std::chrono::duration<double, std::milli>(
            std::chrono::steady_clock::now().time_since_epoch()).count();
        std::fprintf(stderr,
                     "[cam] frame=%u t=%.2f vi=%u pos=(%.1f %.1f %.1f) "
                     "dir=(%.3f %.3f %.3f) move=%.1f turn=%.1f roll=%.1f zoom=%.4f%s%s\n",
                     frame, ms, read_word(rdram, kViRetraceInterval),
                     cam.pos[0], cam.pos[1], cam.pos[2], cam.rot[0],
                     cam.rot[1], cam.rot[2], move, turn, roll, cam.zoom,
                     cut ? (g_frame_cut ? " CUT" : " CUT(not applied)") : "",
                     coherent_held && !cut ? " coherent" : "");
        std::fflush(stderr);
    }
    g_prev_cam_has_dir = have_dir;

    if (finite) {
        g_prev_cam_motion_known = g_have_prev_cam && !cut;
        for (uint32_t i = 0; i < 3U; ++i) {
            g_prev_cam_step[i] = step[i];
        }
        g_prev_cam_turn = turn;
        g_prev_cam_zoom_step = zoom_step;
        g_prev_cam = cam;
        g_have_prev_cam = true;

        g_frame_repro.cam_x = cam.pos[0];
        g_frame_repro.cam_y = cam.pos[1];
        g_frame_repro.cam_z = cam.pos[2];
        g_frame_repro.has_camera = have_dir;
        if (have_dir) {
            float cyaw = std::atan2(-cam.rot[0], -cam.rot[2]) * 57.2957795f;
            if (cyaw < 0.0f) {
                cyaw += 360.0f;
            }
            g_frame_repro.cam_yaw = cyaw;
            g_frame_repro.cam_pitch = std::asin(std::clamp(cam.rot[1], -1.0f, 1.0f)) * 57.2957795f;
            g_frame_repro.cam_fov = (cam.zoom > 0.0f)
                ? (2.0f * std::atan(1.0f / cam.zoom) * 57.2957795f) : 0.0f;
        }
        std::lock_guard<std::mutex> lock(g_repro_mutex);
        g_latest_repro = g_frame_repro;
    }
}

} // namespace

extern "C" int tooie_get_latest_repro(TooieReproSnapshot* out) {
    if (out == nullptr) {
        return 0;
    }
    std::lock_guard<std::mutex> lock(g_repro_mutex);
    *out = g_latest_repro;
    return (g_latest_repro.has_camera || g_latest_repro.has_player) ? 1 : 0;
}

extern "C" void tooie_rt64_tag_projection(uint8_t* rdram, recomp_context* ctx,
                                          uint32_t kind,
                                          uint32_t cursor_address) {
    if (rt64_disabled() || rt64_proj_off()) {
        return;
    }

    if (g_frame_proj_marks.size() < 64) {
        g_frame_proj_marks.push_back({read_word(rdram, cursor_address), kind != 0U});
    }
    uint32_t transform_id = kOrthoProjectionId;
    uint32_t flags = kProjectionGroupFlags;
    if (kind == 0U) {
        const bool first_of_frame = !g_cam_sampled;
        evaluate_camera_cut(rdram, ctx, cursor_address);
        // BT_RT64_CAMLOG=2: every perspective projection, sky or world, with its camera position and the
        // projection's diagonal and depth terms.
        static const char* camlog_env = std::getenv("BT_RT64_CAMLOG");
        if (camlog_env != nullptr && camlog_env[0] == '2') {
            const uint32_t sp = static_cast<uint32_t>(ctx->r29);
            const uint32_t mtx = read_word(rdram, cursor_address + 4U);
            if (in_rdram(mtx, 64U)) {
                std::fprintf(stderr, "[proj] frame=%u sky=%u pos=(%.1f %.1f %.1f) m00=%.4f m11=%.4f m22=%.5f m32=%.2f m23=%.4f dir=(%.3f %.3f %.3f)\n",
                             read_word(rdram, kGameFrameCount), g_sky_draw_depth,
                             read_float(rdram, sp + 0x38U), read_float(rdram, sp + 0x3CU), read_float(rdram, sp + 0x40U),
                             read_mtx_element(rdram, mtx, 0U, 0U), read_mtx_element(rdram, mtx, 1U, 1U),
                             read_mtx_element(rdram, mtx, 2U, 2U), read_mtx_element(rdram, mtx, 3U, 2U),
                             read_mtx_element(rdram, mtx, 2U, 3U), read_mtx_element(rdram, mtx, 0U, 3U),
                             read_mtx_element(rdram, mtx, 1U, 3U), read_mtx_element(rdram, mtx, 2U, 3U));
            }
        }
        if (first_of_frame && g_frame_cut &&
            !append_matrix_group(rdram, cursor_address, G_EX_ID_AUTO,
                                 kCutActorGroupFlags)) {
            note_append_failure(9U);
        }

        if (g_sky_draw_depth != 0U) {
            transform_id = kSkyboxProjectionId;
            // Off by default: the stretch makes the dome cover the widened frame,
            // but it does so by zooming the sky 1.333x horizontally relative to
            // the world, which makes the sky slide when the camera turns. See
            // rt64_sky_stretch.
            if (rt64_sky_stretch()) {
                flags = kSkyProjectionStretchFlags;
            }
            // Also off by default; see rt64_sky_view_nointerp.
            if (rt64_sky_view_nointerp()) {
                flags = (flags & ~0x78U) | (kSkyProjectionGroupFlags & 0x78U);
            }
        }
        else {
            transform_id = kGameplayProjectionId;
        }
        flags = cut_mask(flags, kCutProjectionMask);
    }

    if (append_matrix_group(rdram, cursor_address, transform_id, flags)) {
        ++g_frame_projections;
        if (g_frame_proj_count < kProjectionIdLogCount) {
            g_frame_proj_ids[g_frame_proj_count] = transform_id;
        }
        ++g_frame_proj_count;
    }
    else {
        // The site mask distinguishes the two builders; both append the same
        // shape, so a plain count could not tell which one refused.
        note_append_failure(kind == 0U ? 7U : 8U);
    }
}

namespace {

// BT_HUDLOG=1 (+ BT_HUDDUMP=<dir>): once a second, every texture the frame draws
// in 2D -- texture rectangles, and textured triangles after an orthographic
// projection -- with its RDRAM address, format, size and screen rectangle.
// BT_HUDDUMP writes each new one's texels (then its palette, if any) to
// <dir>/hud_<addr>_<fmt>-<siz>_<w>x<h>_<line>.bin, for finding a HUD graphic.
struct HudScan {
    uint8_t* rdram = nullptr;
    uint32_t seg[16] = {};
    bool seg_known[16] = {};
    uint32_t img = 0, img_w = 0;
    uint8_t img_siz = 0;
    struct Tile { uint8_t fmt, siz, pal; uint16_t line, tmem, uls, ult, lrs, lrt; };
    Tile tiles[8] = {};
    struct Load { uint16_t tmem; uint32_t addr; uint32_t row; };
    Load loads[8] = {};
    uint32_t tlut = 0, tlut_n = 0;
    bool tex_on = false;
    uint8_t render_tile = 0;
    size_t mark = 0;
    bool ortho = false;
    uint32_t commands = 0;
    std::vector<uint32_t> seen;
    const char* dump_dir = nullptr;

    bool resolve(uint32_t a, uint32_t& out) const {
        const uint32_t s = (a >> 24) & 0x0F;
        if ((a >> 24) == 0x80 || (a >> 24) == 0x00) { out = 0x80000000U | (a & 0x7FFFFFU); return true; }
        if ((a >> 24) > 0x0F || !seg_known[s]) return false;
        out = 0x80000000U | ((seg[s] + (a & 0x00FFFFFFU)) & 0x7FFFFFU);
        return true;
    }
    uint32_t addr_of(uint8_t tile) const {
        for (const Load& l : loads) if (l.addr != 0 && l.tmem == tiles[tile].tmem) return l.addr;
        return 0;
    }
    void report(const char* what, uint8_t tile, int x0, int y0, int x1, int y1) {
        const uint32_t a = addr_of(tile);
        if (a == 0 || std::find(seen.begin(), seen.end(), a) != seen.end() || seen.size() > 64) return;
        seen.push_back(a);
        const Tile& t = tiles[tile];
        const int w = (t.lrs - t.uls) / 4 + 1, h = (t.lrt - t.ult) / 4 + 1;
        std::fprintf(stderr, "[hudtex] %s addr=%08X fmt=%u siz=%u pal=%u line=%u tmem=%u size=%dx%d rect=(%d,%d)-(%d,%d) "
                     "tlut=%08X/%u\n", what, a, t.fmt, t.siz, t.pal, t.line, t.tmem, w, h, x0, y0, x1, y1,
                     t.fmt == 2 ? tlut : 0U, t.fmt == 2 ? tlut_n : 0U);
        if (dump_dir == nullptr || w <= 0 || h <= 0 || w > 256 || h > 256) return;
        char path[512];
        std::snprintf(path, sizeof(path), "%s/hud_%08X_%u-%u_%dx%d_%u.bin", dump_dir, a, t.fmt, t.siz, w, h, t.line);
        FILE* f = std::fopen(path, "wb");
        if (f == nullptr) return;
        const uint32_t bytes = uint32_t(h) * t.line * 8U;
        for (uint32_t i = 0; i < bytes; ++i) std::fputc(rdram[((a + i) & 0x7FFFFFU) ^ 3U], f);
        if (t.fmt == 2 && tlut != 0) {
            for (uint32_t i = 0; i < tlut_n * 2U; ++i) std::fputc(rdram[((tlut + i) & 0x7FFFFFU) ^ 3U], f);
        }
        std::fclose(f);
    }
    uint32_t rd32(uint32_t a) const { return *reinterpret_cast<const uint32_t*>(rdram + (a & 0x7FFFFCU)); }
    void walk(uint32_t start, uint32_t end, int depth) {
        for (uint32_t pc = start; pc < end && commands < 400000U; pc += 8) {
            ++commands;
            if (depth == 0) {
                while (mark < g_frame_proj_marks.size() && g_frame_proj_marks[mark].gfx <= pc) {
                    ortho = g_frame_proj_marks[mark++].ortho;
                }
            }
            const uint32_t w0 = rd32(pc), w1 = rd32(pc + 4);
            switch (w0 >> 24) {
            case 0xDB:
                if (((w0 >> 16) & 0xFF) == 0x06) {
                    const uint32_t s = ((w0 & 0xFFFF) / 4) & 0x0F;
                    seg[s] = w1; seg_known[s] = true;
                }
                break;
            case 0xDE: {
                uint32_t a;
                if (depth < 8 && resolve(w1, a)) walk(a, a + 8 * 4096, depth + 1);
                if (((w0 >> 16) & 0xFF) == 0x01) return;
                break;
            }
            case 0xDF:
                if (depth > 0) return;
                break;
            case 0xD7:
                tex_on = ((w0 >> 1) & 0x7F) != 0;
                render_tile = (w0 >> 8) & 7;
                break;
            case 0xFD:
                if (!resolve(w1, img)) img = 0;
                img_siz = (w0 >> 19) & 3;
                img_w = (w0 & 0xFFF) + 1;
                break;
            case 0xF5: {
                Tile& t = tiles[(w1 >> 24) & 7];
                t.fmt = (w0 >> 21) & 7; t.siz = (w0 >> 19) & 3;
                t.line = (w0 >> 9) & 0x1FF; t.tmem = w0 & 0x1FF; t.pal = (w1 >> 20) & 0xF;
                break;
            }
            case 0xF2: {
                Tile& t = tiles[(w1 >> 24) & 7];
                t.uls = (w0 >> 12) & 0xFFF; t.ult = w0 & 0xFFF;
                t.lrs = (w1 >> 12) & 0xFFF; t.lrt = w1 & 0xFFF;
                break;
            }
            case 0xF0:
                tlut = img;
                tlut_n = ((w1 >> 14) & 0x3FF) + 1;
                break;
            case 0xF3: case 0xF4: {
                const uint16_t tmem = tiles[(w1 >> 24) & 7].tmem;
                Load nl{tmem, img, img_w};
                bool placed = false;
                for (Load& l : loads) if (l.addr != 0 && l.tmem == tmem) { l = nl; placed = true; break; }
                if (!placed) { std::memmove(&loads[1], &loads[0], sizeof(Load) * 7); loads[0] = nl; }
                break;
            }
            case 0xE4: case 0xE5:
                report("rect", (w1 >> 24) & 7, int((w1 >> 12) & 0xFFF) / 4, int(w1 & 0xFFF) / 4,
                       int((w0 >> 12) & 0xFFF) / 4, int(w0 & 0xFFF) / 4);
                break;
            case 0x05: case 0x06: case 0x07:
                if (ortho && tex_on) report("tri", render_tile, 0, 0, 0, 0);
                break;
            default:
                break;
            }
        }
    }
};

void hud_log(uint8_t* rdram, uint32_t start, uint32_t end) {
    static const bool on = std::getenv("BT_HUDLOG") != nullptr;
    if (!on || (start >> 24) != 0x80 || end <= start || end - start > 0x40000) return;
    static auto next = std::chrono::steady_clock::now();
    const auto now = std::chrono::steady_clock::now();
    if (now < next) return;
    next = now + std::chrono::seconds(1);
    HudScan scan;
    scan.rdram = rdram;
    scan.dump_dir = std::getenv("BT_HUDDUMP");
    std::fprintf(stderr, "[hudtex] frame=%u map=0x%03X\n", read_word(rdram, kGameFrameCount),
                 (read_word(rdram, 0x80132DC0U) & 0xFFFFU));
    scan.walk(start, end, 0);
    std::fflush(stderr);
}

} // namespace

namespace tooie::cutscene_skip {
void on_frame_end(uint8_t* rdram, recomp_context* ctx, uint32_t dl_head, bool extended);
}

// Runs at 0x800A7518 in func_800A73F4, just before func_800E7EF4 closes the
// frame's display list (G_RDPFULLSYNC + G_ENDDL) and submits it: everything the
// game draws this frame, the 2D HUD and screen transitions included, is
// already in the list, so whatever is appended here is drawn on top of it.
extern "C" void tooie_frame_end(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t end = read_word(rdram, kRenderBufferState);
    sky_seams::survey_frame(rdram, g_frame_dl_head, end);
    sky_seams::texseam::on_frame(rdram, g_frame_dl_head, end, sky_seams::g_frame_sky_start,
                                 sky_seams::g_frame_sky_end > sky_seams::g_frame_sky_start ? sky_seams::g_frame_sky_end : 0U);
    sky_seams::g_frame_sky_start = sky_seams::g_frame_sky_end = 0;
    hud_log(rdram, g_frame_dl_head, end);
    tooie::cutscene_skip::on_frame_end(rdram, ctx, g_frame_dl_head, g_frame_extended);
}

// The original boot inflater places core1 in its final RDRAM range without an
// ordinary PI DMA the runtime can observe, so register the section explicitly
// once the boot loader has finished. The NUS-CIC-6105 IPL3 leaves two
// instruction words in RDRAM that Tooie's CIC thread checks before its first
// challenge; N64ModernRuntime starts after IPL3, so reproduce that state.
extern "C" void tooie_boot_register_core1(uint8_t* rdram,
                                          recomp_context* ctx) {
    (void)ctx;
    MEM_W(0, kCicBootWord1) = static_cast<int32_t>(kCicBootValue1);
    MEM_W(0, kCicBootWord2) = static_cast<int32_t>(kCicBootValue2);

    load_overlays(kCore1RomStart, kCore1Vram, kCore1Size);

    // TEMPORARY diagnostic: start the frame-pipeline heartbeat (see above).
    static std::atomic_bool watchdog_started{false};
    bool expected = false;
    if (watchdog_started.compare_exchange_strong(expected, true)) {
        g_watchdog_rdram = rdram;
        std::fprintf(stderr, "[watchdog] starting heartbeat\n");
        std::fflush(stderr);
        std::thread{watchdog_thread_func}.detach();
    }
}

// Tooie's generic decompressor (`func_80019EC0`, called from `func_80012214`
// at 0x800122BC with 0x1E5AEB0/0x800815C0 in its argument list) expands core2
// straight into its final RDRAM range. No PI DMA for that mapping reaches the
// runtime, so register the section once the decompression has returned —
// otherwise core2 function pointers resolved through `LOOKUP_FUNC` abort in
// `get_function`.
extern "C" void tooie_boot_register_core2(uint8_t* rdram,
                                         recomp_context* ctx) {
    (void)rdram;
    (void)ctx;

    load_overlays(kCore2RomStart, kCore2Vram, kCore2Size);
}

extern "C" void tooie_overlay_read_relocation_key(uint8_t* rdram,
                                                  recomp_context* ctx) {
    const uint32_t cartridge_address = static_cast<uint32_t>(ctx->r21);
    const uint32_t rom_offset =
        (cartridge_address & kCartridgeRomAddressMask) +
        kOverlayRomRelocationKeyTableOffset;
    const std::span<const uint8_t> rom = recomp::get_rom();

    if (rom_offset > rom.size() ||
        sizeof(uint32_t) > rom.size() - rom_offset) {
        std::fprintf(stderr,
            "[Tooie] Overlay relocation-key PIO exceeds ROM: offset=0x%08X "
            "ROM=0x%zX\n",
            rom_offset, rom.size());
        ctx->r21 = 0;
        return;
    }

    ctx->r21 =
        (static_cast<uint32_t>(rom[rom_offset + 0U]) << 24U) |
        (static_cast<uint32_t>(rom[rom_offset + 1U]) << 16U) |
        (static_cast<uint32_t>(rom[rom_offset + 2U]) << 8U) |
        static_cast<uint32_t>(rom[rom_offset + 3U]);
}

extern "C" void tooie_register_loaded_overlay(uint8_t* rdram,
                                              recomp_context* ctx) {
    const gpr overlay_address = ctx->r4;
    const uint32_t overlay_index =
        MEM_HU(kOverlayIndexOffset, overlay_address);
    const uint32_t code_base = get_overlay_code_base(rdram, overlay_address);

    static uint32_t register_trace_count = 0;
    if (should_trace(register_trace_count)) {
        std::fprintf(stderr,
            "[sys-reg] overlay_addr=0x%08X index=%u code_base=0x%08X\n",
            static_cast<uint32_t>(overlay_address), overlay_index, code_base);
        std::fflush(stderr);
    }

    if (code_base < kRdramStart || code_base >= kRdramEnd ||
        !tooie::load_overlay(overlay_index, code_base)) {
        std::fprintf(stderr,
            "[Tooie] Cannot load overlay %u at 0x%08X\n",
            overlay_index, code_base);
        std::abort();
    }
}

extern "C" void tooie_unregister_loaded_overlay(uint8_t* rdram,
                                                recomp_context* ctx) {
    (void)rdram;
    const gpr overlay_address = ctx->r4;
    const uint32_t overlay_index =
        MEM_HU(kOverlayIndexOffset, overlay_address);

    if (!tooie::unload_overlay(overlay_index)) {
        std::fprintf(stderr,
            "[Tooie] Cannot unload overlay %u at 0x%08X\n",
            overlay_index, static_cast<uint32_t>(overlay_address));
        std::abort();
    }
}

extern "C" void tooie_reregister_shifted_overlay(uint8_t* rdram,
                                                 recomp_context* ctx) {
    (void)rdram;
    const gpr overlay_address = ctx->r4;
    const uint32_t overlay_index =
        MEM_HU(kOverlayIndexOffset, overlay_address);
    // `ovl_shift(a0 = overlay, a1 = delta)` passes a **byte delta**, not a
    // destination address: it does `sra $t3, $a1, 2` to convert bytes to words
    // before adding the delta to each entry of the pointer table at 0x80082540.
    // `load_overlay_by_id` expects exactly that -- when the section is not at
    // its default address it computes `new_address = prev_address + ram_addr`
    // -- so the delta is forwarded unchanged.
    const uint32_t shift = MEM_W(0x18, ctx->r29);

    if (!tooie::load_overlay(overlay_index, shift)) {
        std::fprintf(stderr,
            "[Tooie] Cannot shift overlay %u by 0x%08X\n",
            overlay_index, shift);
        std::abort();
    }
}

extern "C" void tooie_trace_overlay_loader(uint8_t* rdram,
                                           recomp_context* ctx,
                                           uint32_t stage) {
    (void)rdram;
    (void)ctx;
    (void)stage;
}

// N64Recomp's built-in symbol list renames `boot___osDispatchThread` to this.
// Thread scheduling is owned by N64ModernRuntime, so the recompiled boot
// dispatcher is a no-op (matching other N64 recompilation ports).
extern "C" void __osDispatchThread_recomp(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    (void)ctx;
}

// `mfc0 $x, Count` (cop0 register 9) has no host register to read, so N64Recomp
// emits a call to cop0_count_read instead of a raw register access.
//
// ultramodern already models Count at the real 46.875 MHz rate
// (ultramodern/src/timer.cpp: counter_per_ms = 46'875, i.e. the VR4300's 93.75
// MHz clock divided by two) and exposes it as osGetCount(), which is also what
// the runtime's own osGetCount_recomp returns. Reusing it keeps `mfc0 Count`
// and `osGetCount()` on the same clock, so callers that mix the two see
// consistent deltas.
//
// Tooie's only Count reader is func_8001DDC0, which adds and subtracts two
// game-maintained offsets around the read. Those stay in the recompiled body;
// only the counter itself comes from the host.
extern "C" uint32_t osGetCount();
extern "C" gpr cop0_count_read(recomp_context* ctx) {
    (void)ctx;
    return static_cast<gpr>(static_cast<int32_t>(osGetCount()));
}

// --- Core libultra functions with built-in recompiler handling that
//     N64ModernRuntime does not provide. -------------------------------------
//
// Naming core1/core2's copies of these (which is what stops them recompiling
// verbatim and executing raw SI/PI/SP/AI/VI MMIO on the host) makes N64Recomp
// emit calls to `<name>_recomp`. The runtime defines most of them, but these
// are missing from this checkout. They are hardware or OS internals that
// cannot execute natively, so they are no-ops or return benign values.
// (The shipping Banjo-Tooie recompilation supplies the same handful it needs
// in its own recomp_api.cpp and relies on a newer runtime for the rest.)

#define TOOIE_NOOP_RECOMP(name) \
    extern "C" void name##_recomp(uint8_t*, recomp_context*) {}

#define TOOIE_ZERO_RECOMP(name) \
    extern "C" void name##_recomp(uint8_t*, recomp_context* ctx) { ctx->r2 = 0; }

#define TOOIE_MINUS1_RECOMP(name) \
    extern "C" void name##_recomp(uint8_t*, recomp_context* ctx) { \
        ctx->r2 = static_cast<gpr>(-1); \
    }

// Thread/exception internals: the runtime owns scheduling and exceptions.
TOOIE_NOOP_RECOMP(__osExceptionPreamble)
TOOIE_NOOP_RECOMP(__osException)
TOOIE_NOOP_RECOMP(__osDequeueThread)
TOOIE_NOOP_RECOMP(__osEnqueueAndYield)
TOOIE_NOOP_RECOMP(__osEnqueueThread)
TOOIE_NOOP_RECOMP(__osPopThread)
TOOIE_NOOP_RECOMP(__osCleanupThread)
TOOIE_NOOP_RECOMP(osMapTLBRdb)
TOOIE_NOOP_RECOMP(__osDevMgrMain)

// Device-busy probes and access queues.
TOOIE_ZERO_RECOMP(__osSiDeviceBusy)
TOOIE_ZERO_RECOMP(__osAiDeviceBusy)
TOOIE_ZERO_RECOMP(__osSpDeviceBusy)
TOOIE_ZERO_RECOMP(__osSiCreateAccessQueue)
TOOIE_ZERO_RECOMP(__osPiCreateAccessQueue)
TOOIE_NOOP_RECOMP(__osSiGetAccess)
TOOIE_NOOP_RECOMP(__osSiRelAccess)
TOOIE_ZERO_RECOMP(osPiGetCmdQueue)

// Raw DMA/IO entry points; games should reach hardware through the runtime.
//
// `__osSiRawStartDma` is the exception: it must not be a silent no-op. Tooie
// submits a PIF request block (0x8007D850) and then blocks in `osRecvMesg` on
// its SI queue (0x80079B78) waiting for the transfer-complete message. The
// runtime's SI message is only queued by `ultramodern::send_si_message()`, so
// returning 0 without sending it leaves the caller blocked forever -- observed
// as the game stalling inside gldbDll during section load with no frames
// rendered.
//
// Tooie is a CIC-NUS-6105 cartridge, so the PIF block may carry a challenge
// request in its status byte. Answer it with the same algorithm RT64's
// vendored mupen64plus-core uses (it encodes the 267 challenge/response pairs
// specific to Banjo-Tooie), then let the runtime deliver the completion.
extern "C" void __osSiRawStartDma_recomp(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    const gpr direction = ctx->r4;
    const gpr pif_ram = ctx->r5;

    if (direction == kOsWrite &&
        (MEM_BU(kPifStatusOffset, pif_ram) & kPifCicChallenge) != 0) {
        char challenge[kCicChallengeNibbles]{};
        char response[kCicChallengeNibbles]{};

        for (uint32_t i = 0; i < kCicChallengeBytes; ++i) {
            const uint8_t byte = MEM_BU(kCicChallengeOffset + i, pif_ram);
            challenge[i * 2U] = static_cast<char>((byte >> 4U) & 0x0FU);
            challenge[i * 2U + 1U] = static_cast<char>(byte & 0x0FU);
        }

        n64_cic_nus_6105(challenge, response,
                         static_cast<int>(kCicChallengeNibbles));

        MEM_B(0x2E, pif_ram) = 0;
        MEM_B(0x2F, pif_ram) = 0;
        for (uint32_t i = 0; i < kCicChallengeBytes; ++i) {
            MEM_B(kCicChallengeOffset + i, pif_ram) = static_cast<uint8_t>(
                (static_cast<uint8_t>(response[i * 2U]) << 4U) |
                static_cast<uint8_t>(response[i * 2U + 1U]));
        }

        MEM_B(kPifStatusOffset, pif_ram) =
            static_cast<uint8_t>(MEM_BU(kPifStatusOffset, pif_ram) &
                                 ~kPifCicChallenge);
    }

    ultramodern::send_si_message();
    ctx->r2 = 0;
}

TOOIE_ZERO_RECOMP(__osPiRawStartDma)
TOOIE_ZERO_RECOMP(__osEPiRawStartDma)
TOOIE_ZERO_RECOMP(__osSpRawStartDma)
TOOIE_ZERO_RECOMP(__osSiRawReadIo)
TOOIE_ZERO_RECOMP(__osSiRawWriteIo)
TOOIE_ZERO_RECOMP(__osEPiRawReadIo)
TOOIE_ZERO_RECOMP(__osEPiRawWriteIo)
TOOIE_ZERO_RECOMP(__osSpGetStatus)
TOOIE_NOOP_RECOMP(__osSpSetStatus)

// Interrupt-mask and timer state; owned by the runtime.
TOOIE_NOOP_RECOMP(__osResetGlobalIntMask)
TOOIE_NOOP_RECOMP(__osSetGlobalIntMask)
TOOIE_NOOP_RECOMP(__osTimerServicesInit)
TOOIE_NOOP_RECOMP(__osTimerInterrupt)
TOOIE_NOOP_RECOMP(__osSetTimerIntr)
TOOIE_NOOP_RECOMP(__osInsertTimer)
TOOIE_NOOP_RECOMP(__osSetCompare)

// CP0 / TLB.
TOOIE_ZERO_RECOMP(__osGetCause)
TOOIE_MINUS1_RECOMP(__osProbeTLB)

// VI internals; the runtime owns VI.
TOOIE_NOOP_RECOMP(__osViInit)
TOOIE_NOOP_RECOMP(__osViSwapContext)

// The ROM's `__osViGetCurrentContext` (0x800340A0) is three instructions --
// `lui $v0, 0x8004; jr $ra; lw $v0, 0x1540($v0)` -- i.e. `return __osViCurr;`.
// The runtime owns the VI hardware, but this is a guest global, so read it
// straight out of RDRAM rather than substituting a host value.
extern "C" void __osViGetCurrentContext_recomp(uint8_t* rdram, recomp_context* ctx) {
    ctx->r2 = MEM_W(0, kOsViCurrAddress);
}

TOOIE_ZERO_RECOMP(osViGetCurrentLine)

// Controller / Controller Pak. The runtime reimplements the high-level
// controller interface and the game's save type is EEPROM, so the low-level
// PIF and pak routines are inert.
TOOIE_NOOP_RECOMP(__osContGetInitData)
TOOIE_NOOP_RECOMP(__osPackRequestData)
TOOIE_NOOP_RECOMP(__osContAddressCrc)
TOOIE_NOOP_RECOMP(__osContDataCrc)
TOOIE_NOOP_RECOMP(__osContRamRead)
TOOIE_NOOP_RECOMP(__osContRamWrite)
TOOIE_NOOP_RECOMP(__osEepStatus)
TOOIE_NOOP_RECOMP(__osPfsSelectBank)
TOOIE_NOOP_RECOMP(__osPfsGetStatus)
TOOIE_NOOP_RECOMP(__osPfsRequestOneChannel)
TOOIE_NOOP_RECOMP(__osPfsGetOneChannelData)
TOOIE_NOOP_RECOMP(__osPfsRequestData)
TOOIE_NOOP_RECOMP(__osPfsGetInitData)
TOOIE_NOOP_RECOMP(__osPfsRWInode)
TOOIE_NOOP_RECOMP(__osRepairPackId)
TOOIE_NOOP_RECOMP(__osCheckPackId)
TOOIE_NOOP_RECOMP(__osGetId)
TOOIE_NOOP_RECOMP(__osCheckId)
TOOIE_NOOP_RECOMP(corrupted_init)
TOOIE_NOOP_RECOMP(corrupted)
// PFS_ERR_DEVICE: no Controller Pak present.
TOOIE_ZERO_RECOMP(osPfsInit)
TOOIE_ZERO_RECOMP(osPfsIsPlug)

// CP0 Status access, mirroring cop0_status_read/write.
extern "C" void __osGetSR_recomp(uint8_t*, recomp_context* ctx) {
    ctx->r2 = cop0_status_read(ctx);
}

extern "C" void __osSetSR_recomp(uint8_t*, recomp_context* ctx) {
    cop0_status_write(ctx, ctx->r4);
}

// 64-bit integer helpers. N64Recomp normally inlines these, but if a call is
// emitted it must be correct rather than a no-op.
extern "C" void __ll_rshift_recomp(uint8_t*, recomp_context* ctx) {
    const int64_t value = static_cast<int64_t>(
        (static_cast<uint64_t>(ctx->r5) << 32) | (uint32_t)ctx->r4);
    const int64_t shift = static_cast<int64_t>(
        (static_cast<uint64_t>(ctx->r7) << 32) | (uint32_t)ctx->r6);
    ctx->r2 = static_cast<gpr>(value >> (shift & 63));
}

extern "C" void __ll_rem_recomp(uint8_t*, recomp_context* ctx) {
    const int64_t lhs = static_cast<int64_t>(
        (static_cast<uint64_t>(ctx->r5) << 32) | (uint32_t)ctx->r4);
    const int64_t rhs = static_cast<int64_t>(
        (static_cast<uint64_t>(ctx->r7) << 32) | (uint32_t)ctx->r6);
    const int64_t result = (rhs == 0) ? 0 : (lhs % rhs);
    ctx->r2 = static_cast<gpr>(static_cast<uint64_t>(result));
    ctx->r3 = static_cast<gpr>(static_cast<uint64_t>(result) >> 32);
}

extern "C" void __ll_mod_recomp(uint8_t*, recomp_context* ctx) {
    __ll_rem_recomp(nullptr, ctx);
}

extern "C" void __ull_divremi_recomp(uint8_t*, recomp_context* ctx) {
    // Not emitted by any observed call path; leave a benign zero result.
    ctx->r2 = 0;
    ctx->r3 = 0;
}

extern "C" void recomp_syscall_handler(uint8_t* rdram, recomp_context* ctx,
                                       int32_t instruction_vram) {
    const uint32_t instruction = MEM_W(instruction_vram, 0);

    // First entry: the thunk still holds the raw `syscall`. Restore the
    // exception path's `$t0` (the faulting thunk address) and let the game's own
    // handler load and relocate the overlay. It rewrites the thunk into
    // `j overlay+0x10` and tail-jumps; the 0x80081F5C hook feeds that rewritten
    // instruction back here.
    if ((instruction & kSyscallInstructionMask) == kSyscallInstruction) {
        static uint32_t first_trace_count = 0;
        if (should_trace(first_trace_count)) {
            std::fprintf(stderr,
                "[sys-first] thunk=0x%08X code=%u a0=0x%08X a1=0x%08X "
                "a2=0x%08X a3=0x%08X sp=0x%08X\n",
                static_cast<uint32_t>(instruction_vram),
                (instruction >> 6) & 0xFFFFFU, static_cast<uint32_t>(ctx->r4),
                static_cast<uint32_t>(ctx->r5), static_cast<uint32_t>(ctx->r6),
                static_cast<uint32_t>(ctx->r7), static_cast<uint32_t>(ctx->r29));
            std::fflush(stderr);
        }
        ctx->r8 = static_cast<gpr>(instruction_vram);
        syscall_handler(rdram, ctx);
        return;
    }

    if ((instruction & kJumpInstructionMask) != kJumpInstruction) {
        std::fprintf(stderr,
            "[Tooie] Overlay entry 0x%08X has unsupported instruction "
            "0x%08X\n",
            static_cast<uint32_t>(instruction_vram), instruction);
        std::abort();
    }

    const uint32_t trampoline_address =
        ((static_cast<uint32_t>(instruction_vram) + 4U) & 0xF0000000U) |
        ((instruction & kJumpTargetMask) << 2U);
    if (trampoline_address < kRdramStart + kOverlayTrampolineOffset ||
        trampoline_address >= kRdramEnd) {
        std::fprintf(stderr,
            "[Tooie] Overlay entry 0x%08X jumps outside RDRAM: 0x%08X\n",
            static_cast<uint32_t>(instruction_vram), trampoline_address);
        std::abort();
    }

    // MIPS KSEG0 pointers are sign-extended in 64-bit GPRs. Preserve that
    // representation before using the MEM_* macros; a zero-extended 0x80xxxxxx
    // address would index 4 GiB beyond the host RDRAM allocation.
    const gpr overlay_address = static_cast<gpr>(static_cast<int32_t>(
        trampoline_address - kOverlayTrampolineOffset));
    const uint32_t entrypoint_count =
        MEM_HU(kOverlayEntrypointCountOffset, overlay_address);
    const uint32_t syscall_entry_offset =
        MEM_HU(6, static_cast<gpr>(instruction_vram));
    const bool auto_unload =
        (MEM_HU(4, static_cast<gpr>(instruction_vram)) &
            kOverlayAutoUnloadInstructionBit) != 0;

    if ((syscall_entry_offset & 3U) != 0U ||
        syscall_entry_offset >= entrypoint_count * sizeof(uint32_t)) {
        std::fprintf(stderr,
            "[Tooie] Invalid overlay entry offset 0x%X (count %u, table "
            "0x%08X)\n",
            syscall_entry_offset, entrypoint_count,
            static_cast<uint32_t>(instruction_vram));
        std::abort();
    }

    const gpr entrypoint_table =
        overlay_address + kOverlayEntrypointTableOffset;
    const uint32_t target_address =
        MEM_W(syscall_entry_offset, entrypoint_table);

    static uint32_t dispatch_trace_count = 0;
    if (should_trace(dispatch_trace_count)) {
        std::fprintf(stderr,
            "[sys-disp] thunk=0x%08X overlay=0x%08X entry_off=0x%X target=0x%08X "
            "count=%u a0=0x%08X sp=0x%08X\n",
            static_cast<uint32_t>(instruction_vram),
            static_cast<uint32_t>(overlay_address), syscall_entry_offset,
            target_address, entrypoint_count, static_cast<uint32_t>(ctx->r4),
            static_cast<uint32_t>(ctx->r29));
        std::fflush(stderr);
    }

    // TEMPORARY diagnostic: an entrypoint entered with a KSEG1 (`0xA0000000`-
    // `0xBFFFFFFF`) argument. N64ModernRuntime's MEM_* macros map KSEG0 only, so
    // such a pointer faults when the callee dereferences it.
    {
        const uint32_t a0 = static_cast<uint32_t>(ctx->r4);
        if (a0 >= 0xA0000000U && a0 < 0xC0000000U) {
            std::fprintf(stderr,
                "[kseg1-arg] thunk=0x%08X target=0x%08X entry_off=0x%X "
                "a0=0x%08X a1=0x%08X a2=0x%08X a3=0x%08X sp=0x%08X\n",
                static_cast<uint32_t>(instruction_vram), target_address,
                syscall_entry_offset, a0, static_cast<uint32_t>(ctx->r5),
                static_cast<uint32_t>(ctx->r6), static_cast<uint32_t>(ctx->r7),
                static_cast<uint32_t>(ctx->r29));
            std::fflush(stderr);
        }
    }

    ctx->r8 = syscall_entry_offset;
    if (!auto_unload) {
        ctx->r9 = entrypoint_table;
        ctx->r10 = entrypoint_table + syscall_entry_offset;
        ctx->r11 = static_cast<gpr>(static_cast<int32_t>(target_address));
        MEM_H(kOverlayRuntimeStateOffset, overlay_address) = 0;
    }

    LOOKUP_FUNC(target_address)(rdram, ctx);

    if (auto_unload) {
        const gpr return_v0 = ctx->r2;
        const gpr return_v1 = ctx->r3;
        const uint64_t return_f0 = ctx->f0.u64;
        const uint64_t return_f2 = ctx->f2.u64;
        const gpr return_ra = ctx->r31;

        ctx->r4 = overlay_address;
        ctx->r5 = 1;
        ovl_unload(rdram, ctx);

        ctx->r2 = return_v0;
        ctx->r3 = return_v1;
        ctx->f0.u64 = return_f0;
        ctx->f2.u64 = return_f2;
        ctx->r31 = return_ra;
    }
}

namespace {
std::atomic<uint32_t> g_bt_note_chime{1};
std::atomic<uint32_t> g_bt_all_moves_msg{1};

extern "C" void func_800C3FC0(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_800C6E38(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_800D035C(uint8_t* rdram, recomp_context* ctx);

extern "C" void func_800CF87C(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_800CFC8C(uint8_t* rdram, recomp_context* ctx);

// Notes collected in the current level (0..100), computed on a copy of the
// context so the caller's registers (notably r2) are untouched.
int32_t current_level_notes(uint8_t* rdram, const recomp_context* ctx) {
    recomp_context local = *ctx;
    func_800CF87C(rdram, &local);
    const uint32_t level_id = uint32_t(local.r2);
    local = *ctx;
    local.r4 = 6;
    local.r5 = level_id;
    func_800CFC8C(rdram, &local);
    return static_cast<int32_t>(local.r2);
}

int32_t g_level_notes_before = -1;

void play_completion_chime(uint8_t* rdram, const recomp_context* ctx) {
    recomp_context audio = *ctx;
    audio.r4 = 0x66C;
    audio.r5 = 0x3F800000; // 1.0f volume
    audio.r6 = 0x3E80;     // 16000 pitch
    func_800C3FC0(rdram, &audio);
}

bool move_is_learned(uint8_t* rdram, const recomp_context* ctx, uint32_t ability) {
    recomp_context lookup = *ctx;
    lookup.r4 = ability;
    func_800C6E38(rdram, &lookup);
    return lookup.r2 != 0;
}
} // namespace

extern "C" std::atomic<uint32_t>* tooie_note_chime_flag() {
    return &g_bt_note_chime;
}

extern "C" int32_t tooie_note_total_before_pickup(uint8_t* rdram, recomp_context* ctx) {
    if (g_bt_note_chime.load(std::memory_order_relaxed) == 0) {
        return -1;
    }
    recomp_context count = *ctx;
    count.r4 = 6;
    func_800D035C(rdram, &count);
    g_level_notes_before = current_level_notes(rdram, ctx);
    return static_cast<int32_t>(count.r2);
}

// Banjo-Kazooie style: chime once when THIS level's notes reach 100.
extern "C" void tooie_on_note_collected(uint8_t* rdram, recomp_context* ctx, int32_t previous_notes) {
    (void)previous_notes;
    const int32_t before = g_level_notes_before;
    g_level_notes_before = -1;
    if (before < 0 || before >= 100 || g_bt_note_chime.load(std::memory_order_relaxed) == 0) {
        return;
    }
    if (current_level_notes(rdram, ctx) >= 100) {
        play_completion_chime(rdram, ctx);
    }
}

extern "C" std::atomic<uint32_t>* tooie_all_moves_msg_flag() {
    return &g_bt_all_moves_msg;
}

extern "C" void tooie_show_jamjars_completion();

// US 1.0 chmole_* table lengths, identified by the first ability. The records
// end at the next data object, so they cannot be scanned for a sentinel.
extern "C" int32_t tooie_final_jamjars_move(uint8_t* rdram, recomp_context* ctx,
                                         uint32_t table, uint32_t index) {
    const gpr table_ptr = guest_address(table);
    if (g_bt_all_moves_msg.load(std::memory_order_relaxed) == 0 ||
        !in_rdram(table, 16U) || MEM_BU(0xB, table_ptr) != 0xFF) {
        return -1;
    }

    uint32_t count = 0;
    switch (MEM_BU(0xA, table_ptr)) {
        case 0x14: // Mayahem Temple
        case 0x1B: // Witchyworld
        case 0x1E: // Jolly Roger's Lagoon
        case 0x25: // Grunty Industries
        case 0x26: // Terrydactyland
            count = 3;
            break;
        case 0x19: // Glitter Gulch Mine
        case 0x21: // Hailfire Peaks
            count = 2;
            break;
        case 0x2A: // Cloud Cuckooland
            count = 1;
            break;
        case 0x2C: // Isle o' Hags
            count = 5;
            break;
        default:
            return -1;
    }
    if (index >= count || !in_rdram(table, count * 16U)) {
        return -1;
    }

    int32_t final_move = -1;
    for (uint32_t i = 0; i < count; ++i) {
        const gpr entry_ptr = guest_address(table + i * 16U);
        const uint32_t ability = MEM_BU(0xA, entry_ptr);
        if (ability == 0 || ability == 0xFF || MEM_BU(0xB, entry_ptr) != 0xFF) {
            return -1;
        }
        if (move_is_learned(rdram, ctx, ability) == (i == index)) {
            return -1;
        }
        if (i == index) {
            final_move = static_cast<int32_t>(ability);
        }
    }
    return final_move;
}

extern "C" void tooie_on_jamjars_move_learned(uint8_t* rdram, recomp_context* ctx,
                                            int32_t final_move) {
    if (final_move >= 0 && move_is_learned(rdram, ctx, static_cast<uint32_t>(final_move)) &&
        g_bt_all_moves_msg.load(std::memory_order_relaxed) != 0) {
        // The game already plays its own learn jingle (0x66C); only add the message.
        tooie_show_jamjars_completion();
    }
}
