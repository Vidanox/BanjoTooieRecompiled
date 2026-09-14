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

#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <span>
#include <thread>

#include "funcs.h"
#include "recomp.h"
#include "register_overlays.hpp"
#include "tooie_recomp.h"

// CIC-NUS-6105 challenge/response, vendored by RT64's mupen64plus-core copy.
extern "C" {
#include "mupen64plus-core/src/device/pif/n64_cic_nus_6105.h"
}

#include "librecomp/addresses.hpp"
#include "librecomp/game.hpp"
#include "librecomp/overlays.hpp"
#include "ultramodern/config.hpp"
#include "ultramodern/ultramodern.hpp"

// The linker-provided image base, used to turn a host return address into
// an image RVA that `build-cmake/BanjoTooieRecompiled.map` can symbolize.
extern "C" const char __ImageBase;

// ntdll, linked by the CRT's default libraries.
extern "C" __declspec(dllimport) unsigned short __stdcall
RtlCaptureStackBackTrace(unsigned long frames_to_skip,
                         unsigned long frames_to_capture,
                         void** back_trace, unsigned long* back_trace_hash);

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
            const uintptr_t base = reinterpret_cast<uintptr_t>(&__ImageBase);
            void* frames[10]{};
            const unsigned short n =
                RtlCaptureStackBackTrace(0, 10, frames, nullptr);
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

extern "C" void tooie_yield_pending_sound(uint8_t* rdram, recomp_context* ctx) {
    // `s3` counts the entries this pass refused, i.e. the work still pending.
    // When it is zero the sweep is about to return, so there is nothing to wait
    // for and yielding would only slow the normal path down.
    if (ctx->r19 == 0) {
        return;
    }
    static uint32_t yields = 0;
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
    const unsigned short n = RtlCaptureStackBackTrace(0, 16, frames, nullptr);
    const uintptr_t base = reinterpret_cast<uintptr_t>(&__ImageBase);
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
    const unsigned short n = RtlCaptureStackBackTrace(0, 20, frames, nullptr);
    const uintptr_t base = reinterpret_cast<uintptr_t>(&__ImageBase);
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
    const unsigned short frame_count = RtlCaptureStackBackTrace(0, 24, frames, nullptr);
    const uintptr_t base = reinterpret_cast<uintptr_t>(&__ImageBase);
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
        static const uintptr_t image_base =
            reinterpret_cast<uintptr_t>(&__ImageBase);
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

// `Aspect Ratio: Expand` widens only the projection RT64 is handed. Tooie's
// visibility tests build their planes from the original 4:3 camera, so anything
// in the extra side regions is rejected by the game before a display list ever
// reaches RT64, and those regions render as bare background. func_800E3D0C,
// func_800E3DC0 and func_800E3E8C are the float-AABB, s16-AABB and sphere
// wrappers that produce those verdicts; each leaves 0 in $v0 for "culled" and
// non-zero for "visible".
//
// Every original result is preserved unless Expand is the applied setting, so
// Original and Manual keep the game's exact behaviour. In Expand a rejection
// becomes "visible", which is the whole fix: the geometry exists, it was only
// being culled by a camera narrower than the one being rendered.
extern "C" void tooie_expand_visibility(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    if (ctx->r2 != 0) {
        return;
    }
    if (ultramodern::renderer::get_graphics_config().ar_option !=
        ultramodern::renderer::AspectRatio::Expand) {
        return;
    }
    ctx->r2 = 1;
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
// Deliberately not tagged: camera and projection transforms (blending two
// unrelated views across a cut is worse than not interpolating, and Tooie's
// camera-cut detection is not mapped), billboards, other actors, and the
// CPU-skinned alternate forms, which need vertex segments rather than ids.

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
static_assert(kProjectionGroupFlags == 0x02008AAAU, "projection group flags");

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
};

struct PlayerModelKey {
    uint32_t player;
    uint32_t model;
};

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

uint32_t player_model_transform_id(uint32_t player, uint32_t model) {
    for (uint32_t slot = 0; slot < g_player_model_count; ++slot) {
        if (g_player_models[slot].player == player &&
            g_player_models[slot].model == model) {
            return kPlayerTransformIdBase + slot * kPlayerTransformIdStride;
        }
    }

    if (g_player_model_count >= kPlayerModelCount) {
        return 0;
    }

    const uint32_t slot = g_player_model_count++;
    g_player_models[slot] = {player, model};
    return kPlayerTransformIdBase + slot * kPlayerTransformIdStride;
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
// projection, 8 orthographic projection.
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

} // namespace

// RT64 counts what it decoded, so "the hooks ran" can be told apart from "RT64
// saw them". Defined in rt64/src/gbi/rt64_gbi_extended.cpp and
// rt64/src/hle/rt64_game_frame.cpp.
extern "C" {
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
extern "C" void tooie_rt64_begin_frame(uint8_t* rdram, recomp_context* ctx) {
    (void)ctx;
    if (rt64_disabled()) {
        return;
    }

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

    if (!append_command(rdram, kRenderBufferState, kEnableWord0,
                        kEnableWord1)) {
        note_append_failure(0U);
        return;
    }
    ++g_frame_enables;

    // Tooie's VI manager keeps its current frame divisor at 0x8007913C: 2 for
    // the usual 30 Hz, 3 for the 20 Hz some overlays select. Report the rate
    // the game is actually running at, which is what RT64 interpolates from.
    const uint32_t divisor = read_word(rdram, kViRetraceInterval);
    const uint32_t refresh_rate =
        (divisor > 0U && divisor <= 60U) ? 60U / divisor : 30U;
    if (!append_command(rdram, kRenderBufferState, kSetRefreshRateWord0,
                        refresh_rate)) {
        note_append_failure(1U);
    }
}

// func_80098BA8 is the player draw wrapper, so its entry and its exit bracket
// exactly the draws that belong to one player.
extern "C" void tooie_rt64_player_scope(uint8_t* rdram, recomp_context* ctx,
                                        uint32_t stage) {
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
// The same site serves the skybox: it reaches the shared renderer through
// func_800DE448 as well, so whichever scope is active decides the identity --
// the player's model, or the sky layer the draw loop is on.
extern "C" void tooie_rt64_push_player_root(uint8_t* rdram,
                                            recomp_context* ctx) {
    if (rt64_disabled()) {
        return;
    }

    const bool in_player = g_player_scope_depth != 0U;
    const bool in_sky = g_sky_draw_depth != 0U;
    if (!in_player && !in_sky) {
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
        scope.pushed = append_matrix_group(rdram, cursor, scope.transform_id,
                                           kRootGroupFlags);
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

    scope.transform_id = player_model_transform_id(g_player_key, model);
    if (scope.transform_id == 0U) {
        return;
    }

    scope.pushed =
        append_matrix_group(rdram, cursor, scope.transform_id, kRootGroupFlags);
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
    if (g_player_scope_depth == 0U || g_root_scope_depth == 0U) {
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
        kBoneGroupFlags);
    if (g_bone_scopes[depth]) {
        ++g_frame_bone_groups;
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

// func_800BFD6C is Tooie's sky draw (`sky_draw`'s analogue: it sets near/far to
// 5..15000, fills the screen, loads its own projection via func_800E44FC, then
// draws up to three sky layers through the shared model renderer). Stage 1 runs
// on entry; stage 2 runs at `L_800BFEF8`, the single exit both the early-out
// and the normal path reach, so the flag can never be left set.
extern "C" void tooie_rt64_sky_scope(uint8_t* rdram, recomp_context* ctx,
                                     uint32_t stage) {
    (void)rdram;
    (void)ctx;
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
extern "C" void tooie_rt64_tag_projection(uint8_t* rdram, recomp_context* ctx,
                                          uint32_t kind,
                                          uint32_t cursor_address) {
    (void)ctx;
    if (rt64_disabled() || rt64_proj_off()) {
        return;
    }

    uint32_t transform_id = kOrthoProjectionId;
    uint32_t flags = kProjectionGroupFlags;
    if (kind == 0U) {
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
