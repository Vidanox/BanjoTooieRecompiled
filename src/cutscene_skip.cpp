// Hold Start to skip a cutscene (AGENTS.md §7.15).
//
// Tooie's cutscene sequences -- the new-game intro, the "Meanwhile..." scenes,
// the boot logos and the others in chintroticker's chain table -- are run by one
// actor, `chintroticker`, present in every map of a sequence. Its update
// (func_808005AC_chintroticker) already carries the game's own skip paths:
//
//   * ticker state 1 (the new-game intro): Start, gated by flag 0xD56, calls
//     _gcfrontend_entrypoint_10, which leaves the intro for its frontend
//     destination;
//   * ticker state 2: B calls func_80800530_chintroticker, which walks the
//     chain table forward from the current map to the sequence's end and
//     hands that to func_808004A8 -- the same call the ticker makes when the
//     last scene of the sequence finishes by itself.
//
// Holding Start for kHoldSeconds performs the matching one of those calls, from
// inside the ticker's own update, so the game's state afterwards is what its
// own skip leaves. Nothing is written to game memory. A tap of Start is not
// touched: the game sees the button exactly as before.

#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <span>
#include <vector>

#include "funcs.h"
#include "recomp.h"
#include "tooie_recomp.h"
#include "librecomp/game.hpp"
#include "miniz.h"

// Seconds since the first input poll (main.cpp), -1 before it.
extern "C" double tooie_harness_seconds();

namespace tooie::cutscene_skip {

std::atomic<uint32_t> g_enabled{1};
// "Skip Straight to File Select" (AGENTS.md 7.16).
std::atomic<uint32_t> g_boot_skip{1};
} // namespace tooie::cutscene_skip
extern "C" std::atomic<uint32_t> g_bt_pad1_pressed{0};
namespace tooie::cutscene_skip {

namespace {

// USA 1.0 addresses (each read from the code and observed in game).
constexpr uint32_t kCurrentMap = 0x80132DC2U;      // u16
constexpr uint32_t kMapTrigger = 0x80127642U;      // u8, nonzero = load pending
constexpr uint32_t kGameFrameCount = 0x800459C8U;  // u32
// func_8001608C counts, per controller, how many game frames each button has
// been held; func_80015F84(pad) returns Start's. 0x38 bytes per controller.
constexpr uint32_t kStartHeldFrames = 0x80079A14U;  // u32, controller 1
// chintroticker's per-actor state nibble (high four bits of byte 0x79).
constexpr uint32_t kTickerStateByte = 0x79U;
// The frame's display-list cursor (func_800A73F4's $s1; +0 is the gfx pointer).
constexpr uint32_t kRenderBufferState = 0x80127658U;

constexpr double kHoldSeconds = 1.0;

uint32_t rd8(uint8_t* rdram, uint32_t a) {
    return static_cast<uint8_t>(MEM_BU(0, static_cast<gpr>(static_cast<int32_t>(a))));
}
uint32_t rd16(uint8_t* rdram, uint32_t a) {
    return static_cast<uint16_t>(MEM_HU(0, static_cast<gpr>(static_cast<int32_t>(a))));
}
uint32_t rd32(uint8_t* rdram, uint32_t a) {
    return static_cast<uint32_t>(MEM_W(0, static_cast<gpr>(static_cast<int32_t>(a))));
}

// BT_HOLDSKIP=off disables the feature (overriding the option); =log prints
// one [skip] line per ticker state change and per hold/skip event.
int env_mode() {
    static const int mode = [] {
        const char* v = std::getenv("BT_HOLDSKIP");
        if (v == nullptr) return 0;
        if (std::strcmp(v, "off") == 0 || std::strcmp(v, "0") == 0) return -1;
        if (std::strcmp(v, "log") == 0) return 1;
        return 0;
    }();
    return mode;
}

} // namespace
int env_mode_public() { return env_mode(); }
namespace {

bool enabled() {
    return env_mode() >= 0 && g_enabled.load(std::memory_order_relaxed) != 0;
}

// ---------------------------------------------------------------------------
// Any button straight to the file select (AGENTS.md 7.16). From power-on the
// game holds the boot logos (map 0x18B, chintroticker state 1) for ~20 s before
// it reads Start at all, then its title, then the attract demo; only Start ever
// leaves them, and through two paths of its own, both of which end at the file
// select (0x158):
//   * the logos/title: ticker state 1, Start -> _gcfrontend_entrypoint_10
//     (func_808005AC_chintroticker; the press is gated by the game's input
//     enable, which is what holds it off for the first ~20 s);
//   * the attract demo (game mode byte 0x80127760 == 2, gsattract running):
//     Start -> func_800A9C50, which loads the map saved before the demo (0x158)
//     and restores the game mode.
// A press of any button takes the matching path at once.

// BT_BOOTSKIP=off disables it, overriding the option.
bool boot_skip_enabled() {
    static const bool off = [] {
        const char* v = std::getenv("BT_BOOTSKIP");
        return v != nullptr && (std::strcmp(v, "off") == 0 || std::strcmp(v, "0") == 0);
    }();
    return !off && g_boot_skip.load(std::memory_order_relaxed) != 0;
}

constexpr uint32_t kGameModeByte = 0x80127760U;      // 2 = attract demo (func_800A9A14)
constexpr uint32_t kLogoMap = 0x18BU;

// A button of controller 1 went down since the last call (main.cpp records the
// controller's rising edges as it is polled). Not the game's button counters:
// during the attract demo those count the recording it replays into the pad.
bool button_pressed_now() {
    return g_bt_pad1_pressed.exchange(0U, std::memory_order_relaxed) != 0U;
}

using Clock = std::chrono::steady_clock;
// Captured during static initialisation, i.e. as the process starts.
const Clock::time_point g_process_start = Clock::now();

// The ticker seen this game frame (its actor, its state), refreshed by every
// call of its update.
uint32_t g_ticker_self = 0;
uint32_t g_ticker_frame = 0xFFFFFFFFU;
uint32_t g_ticker_state = 0;
uint32_t g_last_logged_state = 0xFFFFFFFFU;

// The hold. `g_hold_start` is set on the first frame Start is seen held in a
// skippable scene; `g_latched` stays set after a skip until Start is let go, so
// one hold skips one sequence.
bool g_holding = false;
Clock::time_point g_hold_start{};
bool g_latched = false;
bool g_request = false;
// 0..1, what the indicator draws; eased toward the hold's progress.
float g_progress = 0.0f;
float g_visible = 0.0f;
Clock::time_point g_last_frame{};
// BT_HOLDSKIP=log only: the display-list buffers seen and the largest list.
uint32_t g_heads[2] = {};
uint32_t g_largest_list = 0;

// ---------------------------------------------------------------------------
// The indicator: the game's own honeycomb (its energy meter's unit), filling
// from the bottom while Start is held.
//
// The honeycomb is the pause screen's energy icon, a 32x32 CI4 sprite. Its
// asset is read from the ROM: a u16 size (x16 bytes) and a raw-deflate stream
// at 0xB9E1A4, the same block format as core1/core2, inflating to 808 bytes:
// a sprite header (frame count, then width and height 32 at +8/+10), the
// 16-colour RGBA16 palette at +40 and the texels at +72. Located by inflating
// the ROM and searching for the texels the pause screen loads into RDRAM;
// verified by those header fields and the size on every load. A ROM that does
// not match simply draws no indicator -- the skip still works.
constexpr uint32_t kHoneycombRom = 0xB9E1A4U;
constexpr uint32_t kHoneycombSize = 808U;
constexpr uint32_t kHoneycombTlut = 40U;
constexpr uint32_t kHoneycombTexels = 72U;
constexpr uint32_t kHoneycombDataBytes = 32U + 512U;  // palette + texels

const std::vector<uint8_t>& honeycomb() {
    static const std::vector<uint8_t> data = [] {
        std::vector<uint8_t> out;
        const std::span<const uint8_t> rom = recomp::get_rom();
        if (rom.size() < kHoneycombRom + 0x400U) return out;
        const uint32_t units = (uint32_t(rom[kHoneycombRom]) << 8) | rom[kHoneycombRom + 1];
        if (units * 16U < kHoneycombSize || units * 16U >= kHoneycombSize + 16U) return out;
        std::vector<uint8_t> inflated(kHoneycombSize);
        mz_stream s{};
        if (mz_inflateInit2(&s, -MZ_DEFAULT_WINDOW_BITS) != MZ_OK) return out;
        s.next_in = rom.data() + kHoneycombRom + 2U;
        s.avail_in = 0x400U;
        s.next_out = inflated.data();
        s.avail_out = kHoneycombSize;
        const int status = mz_inflate(&s, MZ_FINISH);
        const size_t produced = s.total_out;
        mz_inflateEnd(&s);
        // One frame, 32 x 32.
        if (status != MZ_STREAM_END || produced != kHoneycombSize || inflated[1] != 1 ||
            inflated[8] != 0 || inflated[9] != 32 || inflated[10] != 0 || inflated[11] != 32) {
            std::fprintf(stderr, "[skip] honeycomb asset not found (status %d, %zu bytes); no indicator\n",
                         status, produced);
            return out;
        }
        out.assign(inflated.begin() + kHoneycombTlut, inflated.begin() + kHoneycombTlut + 32);
        out.insert(out.end(), inflated.begin() + kHoneycombTexels, inflated.begin() + kHoneycombTexels + 512);
        return out;
    }();
    return data;
}

void wr32(uint8_t* rdram, uint32_t a, uint32_t v) {
    MEM_W(0, static_cast<gpr>(static_cast<int32_t>(a))) = static_cast<int32_t>(v);
}

struct Emitter {
    uint8_t* rdram;
    uint32_t pc;
    void cmd(uint32_t w0, uint32_t w1) { wr32(rdram, pc, w0); wr32(rdram, pc + 4U, w1); pc += 8U; }
};

constexpr uint32_t kExtendedOpcode = 0x64U << 24;   // RT64_EXTENDED_OPCODE
constexpr uint32_t kExSetRectAlign = 0x000006U;     // G_EX_SETRECTALIGN_V1
constexpr uint32_t kExOriginNone = 0x800U, kExOriginRight = 0x400U;

void rect_align(Emitter& e, uint32_t origin, int32_t x_offset) {
    const uint32_t off = static_cast<uint32_t>(x_offset) & 0xFFFFU;
    e.cmd(kExtendedOpcode | kExSetRectAlign, origin | (origin << 12));
    e.cmd(off << 16, off << 16);
}

// One G_TEXRECT of the 32x32 render tile, rows [row0, 32) of the texture onto
// screen rows [y0, y1) of the square at x0 (10.2 fixed point for the screen,
// S10.5 for the texture, S5.10 for the step).
void texrect(Emitter& e, float x0, float y0, float size, float row0) {
    const float scale = 32.0f / size;
    const uint32_t xl = uint32_t(x0 * 4.0f), xh = uint32_t((x0 + size) * 4.0f);
    const uint32_t yl = uint32_t((y0 + row0 / scale) * 4.0f), yh = uint32_t((y0 + size) * 4.0f);
    if (yh <= yl) return;
    const uint32_t t = uint32_t(row0 * 32.0f) & 0xFFFFU;
    const uint32_t step = uint32_t(scale * 1024.0f) & 0xFFFFU;
    e.cmd(0xE4000000U | (xh << 12) | yh, (xl << 12) | yl);
    e.cmd(0xE1000000U, t);
    e.cmd(0xF1000000U, (step << 16) | step);
}

// Appends the indicator at the end of the frame's display list. The texels
// travel inside the list, jumped over by a G_DL branch, so nothing outside the
// game's own frame buffer is written. `progress` 0..1 is the filled fraction,
// `alpha` 0..1 the fade. Returns false if the list cursor is unusable.
bool draw_indicator(uint8_t* rdram, uint32_t cursor_addr, bool extended, float progress, float alpha) {
    const std::vector<uint8_t>& tex = honeycomb();
    if (tex.size() != kHoneycombDataBytes) return false;
    const uint32_t gfx = rd32(rdram, cursor_addr);
    if ((gfx >> 24) != 0x80U || (gfx & 7U) != 0U || (gfx & 0x7FFFFFU) > 0x7F0000U) return false;
    Emitter e{rdram, gfx};
    const uint32_t data = gfx + 8U;
    const uint32_t after = data + kHoneycombDataBytes;
    e.cmd(0xDE010000U, after);   // gSPBranchList over the texels
    for (uint32_t i = 0; i < kHoneycombDataBytes; i += 4U) {
        wr32(rdram, data + i, (uint32_t(tex[i]) << 24) | (uint32_t(tex[i + 1]) << 16) |
                              (uint32_t(tex[i + 2]) << 8) | tex[i + 3]);
    }
    e.pc = after;
    const uint32_t tlut = data, texels = data + 32U;

    e.cmd(0xE7000000U, 0);                         // gDPPipeSync
    // 1-cycle, no perspective, bilinear, RGBA16 palette, no dither; render
    // mode XLU_SURF (alpha blended, no depth).
    e.cmd(0xEF000000U | 0xACF0U, 0x00504240U);
    e.cmd(0xFC119623U, 0xFF2FFFFFU);               // G_CC_MODULATEIA_PRIM, both cycles
    // gDPLoadTLUT_pal16(0, tlut)
    e.cmd(0xFD100000U, tlut);
    e.cmd(0xE8000000U, 0);
    e.cmd(0xF5000100U, 0x07000000U);
    e.cmd(0xE6000000U, 0);
    e.cmd(0xF0000000U, 0x0703C000U);
    e.cmd(0xE7000000U, 0);
    // gDPLoadTextureBlock_4b(texels, G_IM_FMT_CI, 32, 32, 0, clamp, clamp, 0, 0, 0, 0)
    e.cmd(0xFD500000U, texels);
    e.cmd(0xF5500000U, 0x07080200U);
    e.cmd(0xE6000000U, 0);
    e.cmd(0xF3000000U, 0x070FF400U);
    e.cmd(0xE7000000U, 0);
    e.cmd(0xF5400400U, 0x00080200U);
    e.cmd(0xF2000000U, 0x0007C07CU);

    // Bottom right of the 4:3 frame; with RT64's rect alignment it follows
    // the right edge of a widened (Expand) frame instead.
    constexpr float kSize = 26.0f, kX = 282.0f, kY = 196.0f;
    // The whole screen: a cutscene's letterbox is a scissor, and the comb sits
    // in the bottom bar. Extended form: from the left edge to the right edge of
    // a widened frame.
    if (extended) {
        e.cmd(kExtendedOpcode | 0x000005U /* G_EX_SETSCISSOR_V1 */, (0U << 2) | (kExOriginRight << 14));
        e.cmd(0U, 240U * 4U);
        rect_align(e, kExOriginRight, -320 * 4);
    }
    else {
        e.cmd(0xED000000U, ((320U * 4U) << 12) | (240U * 4U));
    }
    const uint32_t a = uint32_t(std::lround(std::fmin(std::fmax(alpha, 0.0f), 1.0f) * 255.0f));
    // The empty comb: dark and see-through.
    e.cmd(0xFA000000U, 0x50505000U | (a * 150U / 255U));
    texrect(e, kX, kY, kSize, 0.0f);
    // The honey: the comb at full colour, from the bottom up.
    const float p = std::fmin(std::fmax(progress, 0.0f), 1.0f);
    if (p > 0.0f) {
        e.cmd(0xFA000000U, 0xFFFFFF00U | a);
        texrect(e, kX, kY, kSize, 32.0f * (1.0f - p));
    }
    if (extended) rect_align(e, kExOriginNone, 0);
    e.cmd(0xE7000000U, 0);
    wr32(rdram, cursor_addr, e.pc);
    return true;
}

bool ticker_active(uint8_t* rdram) {
    if (g_ticker_self == 0) return false;
    const uint32_t frame = rd32(rdram, kGameFrameCount);
    // The update runs before the frame's draw, in the same game frame.
    return frame - g_ticker_frame <= 1U;
}

// The sequences a hold may skip, from chintroticker's chain table (overlay
// offset 0x8C4), and what their scenes do to the game's flags. Skipping jumps to
// the sequence's end, so a scene that sets a lasting flag on its own would
// leave it unset; those flags are set here instead, through the game's own
// set-flag function, for every scene from the current one to the end. Measured
// by playing each sequence through with BT_HOLDSKIP=log ([flagset] is every
// flag write) and diffing the [flags] blocks against a skipped run where the
// two meet (AGENTS.md 7.15):
//   * the boot logos and the new-game intro set no lasting flag in any scene
//     (their blocks are identical from the first scene to the last; the end
//     handler, shared by both paths, does the rest);
//   * "Meanwhile..." sets 0x67A in scene 0x190 -- the flag King Jingaling's
//     throne room (chkingjinjobits) tests to know he has been zapped. Its other
//     writes are per-scene cutscene flags (0x641, 0x644, ...), set and cleared
//     again by every scene, or flags the return sets anyway (0x360).
// The two other chains (0x194..0x192, 0x191..0x196) are not measured and are
// left unskippable rather than guessed at.
struct Sequence { const char* name; uint16_t maps[12]; uint32_t count; };
constexpr Sequence kSequences[] = {
    {"boot logos", {0x18B}, 1},
    {"new-game intro", {0x0A1, 0x0A8, 0x0A2, 0x0A9, 0x0A3, 0x0AA, 0x0A4, 0x0AB, 0x0A5, 0x0AC, 0x0A6, 0x0A7}, 12},
    {"Meanwhile (the King zapped)", {0x18E, 0x18C, 0x18F, 0x190, 0x17E, 0x18D}, 6},
};
struct SceneFlag { uint16_t map; uint16_t flag; };
constexpr SceneFlag kSceneFlags[] = {
    {0x190, 0x67A},
};

// The sequence `map` belongs to and its index in it, or nullptr.
const Sequence* sequence_of(uint32_t map, uint32_t& index) {
    for (const Sequence& seq : kSequences) {
        for (uint32_t i = 0; i < seq.count; ++i) {
            if (seq.maps[i] == map) { index = i; return &seq; }
        }
    }
    return nullptr;
}

// Which of the game's own skip paths to take. State 1 (the boot logos) has
// Start -> _gcfrontend_entrypoint_10; every other sequence state takes
// func_80800530_chintroticker, the jump to the chain's end that B performs in
// state 2 (the intro) -- the "Meanwhile..." scenes run in state 3, which
// polls no button, and the jump ends them through the same end handler their
// last scene would reach. 0 = no ticker state (not a sequence).
int skip_kind(uint32_t state) {
    if (state == 1U) return 1;
    if (state >= 2U) return 2;
    return 0;
}

bool skippable_here(uint8_t* rdram) {
    uint32_t index = 0;
    return skip_kind(g_ticker_state) != 0 && sequence_of(rd16(rdram, kCurrentMap), index) != nullptr;
}

void perform_skip(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t map = rd16(rdram, kCurrentMap);
    const int kind = skip_kind(g_ticker_state);
    uint32_t index = 0;
    const Sequence* seq = sequence_of(map, index);
    if (seq == nullptr || kind == 0) return;
    const recomp_context saved = *ctx;
    uint32_t replayed = 0;
    for (uint32_t i = index; i < seq->count; ++i) {
        for (const SceneFlag& sf : kSceneFlags) {
            if (sf.map != seq->maps[i]) continue;
            ctx->r4 = static_cast<gpr>(sf.flag);
            func_800DA544(rdram, ctx);   // the game's set-flag
            *ctx = saved;
            ++replayed;
        }
    }
    if (kind == 1) {
        _gcfrontend_entrypoint_10(rdram, ctx);
    }
    else {
        ctx->r4 = static_cast<gpr>(static_cast<int32_t>(g_ticker_self));
        ctx->r5 = static_cast<gpr>(map);
        func_80800530_chintroticker(rdram, ctx);
    }
    *ctx = saved;
    if (env_mode() == 1) {
        std::fprintf(stderr, "[skip] skipped %s at map 0x%03X (scene %u of %u): ticker %08X state %u kind %d, "
                     "%u scene flags set -> trigger %u\n", seq->name, map, index + 1, seq->count, g_ticker_self,
                     g_ticker_state, kind, replayed, rd8(rdram, kMapTrigger));
        std::fflush(stderr);
    }
}

} // namespace

// chintroticker's update, on entry: a0 = the ticker actor.
void on_ticker(uint8_t* rdram, recomp_context* ctx) {
    g_ticker_self = static_cast<uint32_t>(ctx->r4);
    g_ticker_frame = rd32(rdram, kGameFrameCount);
    g_ticker_state = rd8(rdram, g_ticker_self + kTickerStateByte) >> 4;
    if (env_mode() == 1 && g_ticker_state != g_last_logged_state) {
        g_last_logged_state = g_ticker_state;
        std::fprintf(stderr, "[skip] ticker %08X map 0x%03X state %u (byte79=%02X) flag64=%08X frame %u\n",
                     g_ticker_self, rd16(rdram, kCurrentMap), g_ticker_state,
                     rd8(rdram, g_ticker_self + kTickerStateByte), rd32(rdram, g_ticker_self + 0x64U),
                     g_ticker_frame);
        std::fflush(stderr);
    }
    if (boot_skip_enabled() && g_ticker_state == 1U && rd16(rdram, kCurrentMap) == kLogoMap &&
        rd8(rdram, kMapTrigger) == 0U && button_pressed_now()) {
        const recomp_context saved = *ctx;
        _gcfrontend_entrypoint_10(rdram, ctx);   // the title's own Start
        *ctx = saved;
        if (env_mode() == 1) {
            std::fprintf(stderr, "[boot] press on the logos at %.2f s after process start -> trigger %u\n",
                         std::chrono::duration<double>(Clock::now() - g_process_start).count(),
                         rd8(rdram, kMapTrigger));
        }
        g_request = false;
        return;
    }
    if (!g_request) return;
    g_request = false;
    // A load already requested (the scene ending by itself, or a skip already
    // made) is left alone; the game's own skip paths refuse it the same way.
    if (rd8(rdram, kMapTrigger) != 0U || !enabled()) return;
    perform_skip(rdram, ctx);
}

// BT_HOLDSKIP=log: the game's progress flags, one [flags] line per map change,
// so a skipped run and a played one can be compared where they meet. The
// blocks func_800DA298 reads: flags 0x29-0x5A4 at *0x8012C770, 0x641-0x6EC at
// *0x8012C774, 0x9C5-0xAC3 at *0x8012C778, 0xBB9-0xC15 at 0x8012C780 and
// 0xD49-0xD74 at 0x8012C78C (one bit each), and flags 0-0x1F in the word at
// 0x8011B990.
void log_flags(uint8_t* rdram, uint32_t map) {
    struct Block { uint32_t base; bool deref; uint32_t bytes; };
    static constexpr Block kBlocks[] = {
        {0x8012C770U, true, 0xB0U}, {0x8012C774U, true, 0x16U}, {0x8012C778U, true, 0x20U},
        {0x8012C780U, false, 0x0CU}, {0x8012C78CU, false, 0x06U}, {0x8011B990U, false, 0x04U},
    };
    std::fprintf(stderr, "[flags] map 0x%03X", map);
    for (const Block& b : kBlocks) {
        const uint32_t base = b.deref ? rd32(rdram, b.base) : b.base;
        std::fprintf(stderr, " |");
        if ((base >> 24) != 0x80U) { std::fprintf(stderr, "?"); continue; }
        for (uint32_t i = 0; i < b.bytes; ++i) std::fprintf(stderr, "%02X", rd8(rdram, base + i));
    }
    // The music players func_800FC1CC walks: five 0x50-byte slots from
    // 0x801357D0, the song id an s16 at +0x28 (-1 = idle).
    std::fprintf(stderr, " | songs");
    for (uint32_t k = 0; k < 5U; ++k) {
        std::fprintf(stderr, " %d", static_cast<int16_t>(rd16(rdram, 0x801357D0U + k * 0x50U + 0x28U)));
    }
    std::fprintf(stderr, "\n");
    std::fflush(stderr);
}

// Once per game frame, after everything else is drawn (tooie_frame_end).
// `extended`: RT64's extended GBI is enabled for this frame's list.
void on_frame_end(uint8_t* rdram, recomp_context* ctx, uint32_t dl_head, bool extended) {
    (void)ctx;
    const Clock::time_point now = Clock::now();
    if (env_mode() == 1) {
        // The frame lists' buffers (they alternate) and the largest list, to
        // check the indicator's ~0.8 KB fits in the room left after a frame.
        const uint32_t end = rd32(rdram, kRenderBufferState);
        if (dl_head != g_heads[0] && dl_head != g_heads[1]) g_heads[g_heads[0] == 0 ? 0 : 1] = dl_head;
        if (end > dl_head && end - dl_head > g_largest_list && end - dl_head < 0x100000U) {
            g_largest_list = end - dl_head;
        }
        // At the change, and again once the new map has run for 5 s.
        static uint32_t last_map = 0xFFFFFFFFU;
        static Clock::time_point since{};
        static bool again = false;
        const uint32_t map = rd16(rdram, kCurrentMap);
        if (map != last_map) {
            // Boot timing: since the process started, and on the BT_AUTOPAD clock.
            std::fprintf(stderr, "[boot] map 0x%03X at %.2f s after process start (pad clock %.2f, frame %u)\n",
                         map, std::chrono::duration<double>(now - g_process_start).count(),
                         tooie_harness_seconds(), rd32(rdram, kGameFrameCount));
            last_map = map;
            since = now;
            again = true;
            log_flags(rdram, map);
        }
        else if (again && now - since >= std::chrono::seconds(5)) {
            again = false;
            log_flags(rdram, map);
        }
    }
    // Presses outside the logos and the attract demo are dropped, so one made
    // in play cannot fire later.
    const bool logos = ticker_active(rdram) && g_ticker_state == 1U && rd16(rdram, kCurrentMap) == kLogoMap;
    const bool attract = rd8(rdram, kGameModeByte) == 2U;
    if (!logos && !attract) g_bt_pad1_pressed.store(0U, std::memory_order_relaxed);
    if (boot_skip_enabled() && attract && rd8(rdram, kMapTrigger) == 0U && button_pressed_now()) {
        const recomp_context saved = *ctx;
        func_800A9C50(rdram, ctx);   // the attract demo's own Start
        *ctx = saved;
        if (env_mode() == 1) {
            std::fprintf(stderr, "[boot] press in the attract demo at %.2f s after process start -> trigger %u\n",
                         std::chrono::duration<double>(now - g_process_start).count(), rd8(rdram, kMapTrigger));
        }
    }
    const float dt = g_last_frame.time_since_epoch().count() == 0
        ? 0.0f
        : std::fmin(std::chrono::duration<float>(now - g_last_frame).count(), 0.1f);
    g_last_frame = now;

    const bool held = rd32(rdram, kStartHeldFrames) != 0U;
    if (!held) g_latched = false;
    const bool skippable = enabled() && ticker_active(rdram) && skippable_here(rdram) &&
                           rd8(rdram, kMapTrigger) == 0U;
    bool showing = false;
    if (held && skippable && !g_latched) {
        if (!g_holding) {
            g_holding = true;
            g_hold_start = now;
            if (env_mode() == 1) {
                std::fprintf(stderr, "[skip] hold started: map 0x%03X state %u dl %08X-%08X (heads seen %08X %08X, "
                             "largest list 0x%X bytes)\n", rd16(rdram, kCurrentMap), g_ticker_state, dl_head,
                             rd32(rdram, kRenderBufferState), g_heads[0], g_heads[1], g_largest_list);
            }
        }
        const double held_for = std::chrono::duration<double>(now - g_hold_start).count();
        g_progress = static_cast<float>(held_for / kHoldSeconds);
        showing = true;
        if (held_for >= kHoldSeconds) {
            g_request = true;   // performed by the ticker's next update
            g_latched = true;
            g_holding = false;
            g_progress = 1.0f;
        }
    }
    else if (g_holding) {
        g_holding = false;
        if (env_mode() == 1) {
            std::fprintf(stderr, "[skip] hold released after %.2f s\n",
                         std::chrono::duration<double>(now - g_hold_start).count());
        }
    }
    // Fades: in over kFadeIn, out over kFadeOut once the hold ends (released,
    // or the skip made), so the comb never pops.
    constexpr float kFadeIn = 0.12f, kFadeOut = 0.3f;
    g_visible = showing ? std::fmin(1.0f, g_visible + dt / kFadeIn) : std::fmax(0.0f, g_visible - dt / kFadeOut);
    if (g_visible > 0.0f && !draw_indicator(rdram, kRenderBufferState, extended, g_progress, g_visible) &&
        env_mode() == 1) {
        std::fprintf(stderr, "[skip] indicator not drawn\n");
    }
}

} // namespace tooie::cutscene_skip

extern "C" std::atomic<uint32_t>* tooie_hold_skip_flag() { return &tooie::cutscene_skip::g_enabled; }
extern "C" std::atomic<uint32_t>* tooie_boot_skip_flag() { return &tooie::cutscene_skip::g_boot_skip; }

extern "C" void tooie_cutscene_ticker(uint8_t* rdram, recomp_context* ctx) {
    tooie::cutscene_skip::on_ticker(rdram, ctx);
}

// func_800DA3B8(flag, value) on entry: every game flag write. BT_HOLDSKIP=log
// prints each one with the map and the caller.
extern "C" void tooie_flag_write(uint8_t* rdram, recomp_context* ctx) {
    if (tooie::cutscene_skip::env_mode_public() != 1) return;
    std::fprintf(stderr, "[flagset] map 0x%03X flag 0x%X = %u ra %08X\n",
                 static_cast<uint16_t>(MEM_HU(0, static_cast<gpr>(static_cast<int32_t>(0x80132DC2U)))),
                 static_cast<uint32_t>(ctx->r4), static_cast<uint32_t>(ctx->r5),
                 static_cast<uint32_t>(ctx->r31));
}
