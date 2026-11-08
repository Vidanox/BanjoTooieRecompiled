// Debug-only test harness: start a run at a chosen place with chosen abilities,
// without creating saves (AGENTS.md section 9). Every facility is gated on an
// environment variable and costs one null check per frame when none is set.
//
//   BT_POKE=item[,item...]        GameShark-style RDRAM writes
//     item   = target op value[:bits][@when]
//     target = hex address (80xxxxxx; 00xxxxxx and A0xxxxxx are folded to K0)
//              or *PTR+OFF: the word at PTR, plus OFF (the flag block is
//              *8012C770, so Grip Grab is *8012C770+1B|=02)
//     op     = '=' set, '|=' OR bits in, '&=' AND mask
//     bits   = 8, 16 or 32; default from the value's digit count (2/4/8)
//   BT_WARP=map[:exit][@when][,...]
//     calls the game's own go-to-map request, func_800A791C(map, exit, 1),
//     exactly as a warp pad or load zone does
//   BT_POS=x,y,z[@when][;...]     sets Banjo's position (floats)
//   BT_HARNESSLOG=1               logs map, position and movement state once a
//                                 second; =2 four times a second plus every
//                                 movement-state change (map changes are always
//                                 logged when any BT_POKE/BT_WARP/BT_POS is set)
//
//   when   = (none)   every frame, from the first frame (a constant GS code);
//                     for BT_WARP and BT_POS, (none) means @0
//            @S       once, at S seconds on the BT_AUTOPAD clock
//            @mMAP    once, on the first frame the current map is MAP
//            @mMAP+S  once, S seconds after entering MAP
//            trailing ~ (BT_POKE only): repeat every frame from then on, or
//                     for @m, every frame while in that map
//
// All addresses are guest virtual (K0) and every access goes through the
// recompiler's MEM_* macros, so the `addr ^ 3` / `^ 2` byte order of RDRAM on a
// little-endian host is applied exactly as the game's own code sees it.

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

#include "funcs.h"
#include "recomp.h"
#include "tooie_recomp.h"

// Seconds since the first input poll: the BT_AUTOPAD clock (main.cpp). -1 until
// input has been polled once.
extern "C" double tooie_harness_seconds();

namespace {

constexpr uint32_t kRdramBase = 0x80000000U;
constexpr uint32_t kRdramLimit = 0x80800000U;

// USA 1.0 addresses, each confirmed in game (AGENTS.md section 9).
constexpr uint32_t kCurrentMap = 0x80132DC2U;     // u16
constexpr uint32_t kMapTrigger = 0x80127642U;     // u8, nonzero = load pending
constexpr uint32_t kPlayerPointers = 0x80135490U; // u32[8]
constexpr uint32_t kPlayerIndex = 0x801354DFU;    // u8
constexpr uint32_t kPlayerPosition = 0xE4U;       // -> float x, y, z (+3 copies)
constexpr uint32_t kPlayerMovement = 0x120U;      // -> u32 prev, u32 current

enum class Op { Set, Or, And };

struct When {
    bool every_frame = false;   // no '@' at all
    bool on_map = false;
    double seconds = 0.0;       // @S, or the delay after entering @mMAP
    uint32_t map = 0;
    bool repeat = false;        // trailing '~'
};

struct Poke {
    std::string text;
    bool deref = false;
    uint32_t address = 0;
    uint32_t offset = 0;
    Op op = Op::Set;
    uint32_t value = 0;
    int bits = 8;
    When when;
    bool done = false;
    uint32_t writes = 0;
    uint32_t fights = 0;        // frames on which the game had changed it back
};

struct Warp {
    std::string text;
    uint32_t map = 0;
    uint32_t exit = 0;
    When when;
    bool done = false;
};

struct Position {
    std::string text;
    float xyz[3] = {0.0f, 0.0f, 0.0f};
    When when;
    bool done = false;
};

struct Harness {
    std::vector<Poke> pokes;
    std::vector<Warp> warps;
    std::vector<Position> positions;
    int log_level = 0;
    uint32_t last_state = 0xFFFFFFFFU;
    bool active = false;
    uint32_t last_map = 0xFFFFFFFFU;
    double map_since = 0.0;
    double next_log = 0.0;
};

std::string trim(const std::string& s) {
    size_t a = s.find_first_not_of(" \t");
    size_t b = s.find_last_not_of(" \t");
    return a == std::string::npos ? std::string{} : s.substr(a, b - a + 1);
}

std::vector<std::string> split(const std::string& s, const char* seps) {
    std::vector<std::string> out;
    size_t start = 0;
    while (start <= s.size()) {
        size_t end = s.find_first_of(seps, start);
        if (end == std::string::npos) {
            end = s.size();
        }
        std::string item = trim(s.substr(start, end - start));
        if (!item.empty()) {
            out.push_back(item);
        }
        start = end + 1;
    }
    return out;
}

bool parse_hex(const std::string& s, uint32_t* out) {
    if (s.empty()) {
        return false;
    }
    char* end = nullptr;
    const unsigned long v = std::strtoul(s.c_str(), &end, 16);
    if (end == s.c_str() || *end != '\0') {
        return false;
    }
    *out = static_cast<uint32_t>(v);
    return true;
}

uint32_t fold_k0(uint32_t address) {
    return (address & 0x1FFFFFFFU) | kRdramBase;
}

// Splits "body@when" and parses the condition.
bool parse_when(const std::string& item, std::string* body, When* when,
                bool default_every_frame) {
    const size_t at = item.find('@');
    *body = trim(item.substr(0, at));
    *when = When{};
    if (at == std::string::npos) {
        when->every_frame = default_every_frame;
        return true;
    }
    std::string cond = trim(item.substr(at + 1));
    if (!cond.empty() && cond.back() == '~') {
        when->repeat = true;
        cond.pop_back();
    }
    if (!cond.empty() && (cond[0] == 'm' || cond[0] == 'M')) {
        when->on_map = true;
        const size_t plus = cond.find('+');
        if (!parse_hex(cond.substr(1, plus == std::string::npos
                                            ? std::string::npos : plus - 1),
                       &when->map)) {
            return false;
        }
        when->seconds = plus == std::string::npos
            ? 0.0 : std::atof(cond.c_str() + plus + 1);
        return true;
    }
    when->seconds = std::atof(cond.c_str());
    return !cond.empty();
}

bool parse_poke(const std::string& item, Poke* poke) {
    std::string body;
    if (!parse_when(item, &body, &poke->when, true)) {
        return false;
    }
    poke->text = item;
    size_t op_at = body.find("|=");
    if (op_at != std::string::npos) {
        poke->op = Op::Or;
    }
    else if ((op_at = body.find("&=")) != std::string::npos) {
        poke->op = Op::And;
    }
    else if ((op_at = body.find('=')) != std::string::npos) {
        poke->op = Op::Set;
    }
    else {
        return false;
    }
    std::string target = trim(body.substr(0, op_at));
    std::string rhs = trim(body.substr(op_at + (poke->op == Op::Set ? 1 : 2)));
    const size_t colon = rhs.find(':');
    std::string value = trim(rhs.substr(0, colon));
    if (value.size() > 2 && value[0] == '0' && (value[1] == 'x' || value[1] == 'X')) {
        value = value.substr(2);
    }
    if (!parse_hex(value, &poke->value)) {
        return false;
    }
    if (colon != std::string::npos) {
        poke->bits = std::atoi(rhs.c_str() + colon + 1);
    }
    else {
        poke->bits = value.size() <= 2 ? 8 : (value.size() <= 4 ? 16 : 32);
    }
    if (poke->bits != 8 && poke->bits != 16 && poke->bits != 32) {
        return false;
    }
    if (!target.empty() && target[0] == '*') {
        poke->deref = true;
        const size_t plus = target.find('+');
        if (!parse_hex(target.substr(1, plus == std::string::npos
                                            ? std::string::npos : plus - 1),
                       &poke->address)) {
            return false;
        }
        if (plus != std::string::npos &&
            !parse_hex(target.substr(plus + 1), &poke->offset)) {
            return false;
        }
    }
    else if (!parse_hex(target, &poke->address)) {
        return false;
    }
    poke->address = fold_k0(poke->address);
    return true;
}

Harness* load_harness() {
    const char* poke_env = std::getenv("BT_POKE");
    const char* warp_env = std::getenv("BT_WARP");
    const char* pos_env = std::getenv("BT_POS");
    const char* log_env = std::getenv("BT_HARNESSLOG");
    if (poke_env == nullptr && warp_env == nullptr && pos_env == nullptr &&
        log_env == nullptr) {
        return nullptr;
    }
    auto* h = new Harness{};
    h->log_level = log_env != nullptr ? std::atoi(log_env) : 0;
    if (poke_env != nullptr) {
        for (const std::string& item : split(poke_env, ",;")) {
            Poke poke;
            if (parse_poke(item, &poke)) {
                h->pokes.push_back(poke);
            }
            else {
                std::fprintf(stderr, "[poke] cannot parse '%s'\n", item.c_str());
            }
        }
    }
    if (warp_env != nullptr) {
        for (const std::string& item : split(warp_env, ",;")) {
            Warp warp;
            std::string body;
            bool ok = parse_when(item, &body, &warp.when, false);
            const size_t colon = body.find(':');
            ok = ok && parse_hex(body.substr(0, colon), &warp.map);
            if (ok && colon != std::string::npos) {
                ok = parse_hex(body.substr(colon + 1), &warp.exit);
            }
            if (ok) {
                warp.text = item;
                h->warps.push_back(warp);
            }
            else {
                std::fprintf(stderr, "[warp] cannot parse '%s'\n", item.c_str());
            }
        }
    }
    if (pos_env != nullptr) {
        for (const std::string& item : split(pos_env, ";")) {
            Position pos;
            std::string body;
            const bool ok = parse_when(item, &body, &pos.when, false) &&
                std::sscanf(body.c_str(), "%f,%f,%f", &pos.xyz[0], &pos.xyz[1],
                            &pos.xyz[2]) == 3;
            if (ok) {
                pos.text = item;
                h->positions.push_back(pos);
            }
            else {
                std::fprintf(stderr, "[pos] cannot parse '%s'\n", item.c_str());
            }
        }
    }
    std::fprintf(stderr, "[harness] %zu pokes, %zu warps, %zu positions%s\n",
                 h->pokes.size(), h->warps.size(), h->positions.size(),
                 h->log_level > 0 ? ", periodic log" : "");
    h->active = true;
    return h;
}

gpr guest(uint32_t address) {
    return static_cast<gpr>(static_cast<int32_t>(address));
}

bool in_rdram(uint32_t address, uint32_t size) {
    return address >= kRdramBase && address <= kRdramLimit - size;
}

uint32_t read_value(uint8_t* rdram, uint32_t address, int bits) {
    switch (bits) {
        case 8: return static_cast<uint32_t>(MEM_BU(0, guest(address)));
        case 16: return static_cast<uint32_t>(MEM_HU(0, guest(address)));
        default: return static_cast<uint32_t>(MEM_W(0, guest(address)));
    }
}

void write_value(uint8_t* rdram, uint32_t address, int bits, uint32_t value) {
    switch (bits) {
        case 8: MEM_B(0, guest(address)) = static_cast<int8_t>(value); break;
        case 16: MEM_H(0, guest(address)) = static_cast<int16_t>(value); break;
        default: MEM_W(0, guest(address)) = static_cast<int32_t>(value); break;
    }
}

// The player's position block, or 0 while there is no player.
uint32_t player_sub_object(uint8_t* rdram, uint32_t field) {
    const uint32_t index = read_value(rdram, kPlayerIndex, 8) & 7U;
    const uint32_t player = read_value(rdram, kPlayerPointers + index * 4U, 32);
    if (!in_rdram(player, 0x200)) {
        return 0;
    }
    const uint32_t sub = read_value(rdram, player + field, 32);
    return in_rdram(sub, 0x30) ? sub : 0;
}

float read_float(uint8_t* rdram, uint32_t address) {
    const uint32_t bits = read_value(rdram, address, 32);
    float f;
    std::memcpy(&f, &bits, sizeof(f));
    return f;
}

// Is this condition due on this frame? `fired` is whether a once-only item has
// already been applied.
bool due(const When& when, bool fired, double now, uint32_t map,
         double in_map) {
    if (when.every_frame) {
        return true;
    }
    if (fired && !when.repeat) {
        return false;
    }
    if (when.on_map) {
        return map == when.map && in_map >= when.seconds;
    }
    return now >= when.seconds;
}

void apply_poke(uint8_t* rdram, Poke& poke, double now) {
    uint32_t address = poke.address;
    if (poke.deref) {
        const uint32_t base = read_value(rdram, poke.address, 32);
        if (!in_rdram(base, 4)) {
            return;   // pointer not set up yet: retry next frame
        }
        address = base + poke.offset;
    }
    const uint32_t size = static_cast<uint32_t>(poke.bits / 8);
    if (!in_rdram(address, size) || (address & (size - 1U)) != 0U) {
        if (!poke.done) {
            std::fprintf(stderr, "[poke] '%s': bad address 0x%08X\n",
                         poke.text.c_str(), address);
            poke.done = true;
        }
        return;
    }
    const uint32_t mask = poke.bits == 32 ? 0xFFFFFFFFU : ((1U << poke.bits) - 1U);
    const uint32_t was = read_value(rdram, address, poke.bits);
    uint32_t want = poke.value & mask;
    if (poke.op == Op::Or) {
        want = was | want;
    }
    else if (poke.op == Op::And) {
        want = was & want;
    }
    if (was != want) {
        write_value(rdram, address, poke.bits, want);
        if (poke.writes > 0U) {
            ++poke.fights;
        }
    }
    const uint32_t now_value = read_value(rdram, address, poke.bits);
    if (poke.writes == 0U || (poke.fights > 0U && poke.fights <= 3U && was != want)) {
        std::fprintf(stderr,
                     "[poke] t=%.2f '%s' 0x%08X:%d was 0x%0*X wrote 0x%0*X "
                     "read back 0x%0*X%s\n",
                     now, poke.text.c_str(), address, poke.bits, poke.bits / 4,
                     was, poke.bits / 4, want, poke.bits / 4, now_value,
                     poke.fights > 0U ? " (game had changed it)" : "");
    }
    ++poke.writes;
    poke.done = true;
}

// The game's own go-to-map request (func_800A791C(map, exit, transition)),
// as called by warp pads and load zones. The hook runs at the entry of
// func_800A73F4, before its prologue, so the caller's stack pointer is live
// and the callee's frame lands below it; every register is restored after.
bool apply_warp(uint8_t* rdram, recomp_context* ctx, Warp& warp, double now,
                uint32_t map) {
    if (read_value(rdram, kMapTrigger, 8) != 0U) {
        return false;   // a load is already pending; ask again next frame
    }
    const recomp_context saved = *ctx;
    ctx->r4 = static_cast<gpr>(warp.map);
    ctx->r5 = static_cast<gpr>(warp.exit);
    ctx->r6 = 1;
    func_800A791C(rdram, ctx);
    *ctx = saved;
    std::fprintf(stderr,
                 "[warp] t=%.2f '%s' requested map 0x%03X exit %u from map "
                 "0x%03X (trigger now %u)\n",
                 now, warp.text.c_str(), warp.map, warp.exit, map,
                 read_value(rdram, kMapTrigger, 8));
    return true;
}

bool apply_position(uint8_t* rdram, Position& pos, double now) {
    const uint32_t block = player_sub_object(rdram, kPlayerPosition);
    if (block == 0U) {
        return false;
    }
    // The block holds the position three times (current and two histories);
    // writing only the first lets the game restore the old one.
    for (uint32_t copy = 0; copy < 3U; ++copy) {
        for (uint32_t axis = 0; axis < 3U; ++axis) {
            uint32_t bits;
            std::memcpy(&bits, &pos.xyz[axis], sizeof(bits));
            write_value(rdram, block + copy * 12U + axis * 4U, 32, bits);
        }
    }
    std::fprintf(stderr, "[pos] t=%.2f '%s' block 0x%08X read back (%.1f, %.1f, %.1f)\n",
                 now, pos.text.c_str(), block, read_float(rdram, block),
                 read_float(rdram, block + 4U), read_float(rdram, block + 8U));
    return true;
}

} // namespace

namespace tooie::harness {

void on_frame(uint8_t* rdram, recomp_context* ctx) {
    static Harness* const h = load_harness();
    if (h == nullptr) {
        return;
    }
    const double now = tooie_harness_seconds();
    const uint32_t map = read_value(rdram, kCurrentMap, 16);
    if (map != h->last_map) {
        std::fprintf(stderr, "[harness] t=%.2f map 0x%03X -> 0x%03X\n", now,
                     h->last_map == 0xFFFFFFFFU ? 0U : h->last_map, map);
        h->last_map = map;
        h->map_since = now;
    }
    const double in_map = now - h->map_since;

    if (h->log_level >= 2) {
        const uint32_t move = player_sub_object(rdram, kPlayerMovement);
        const uint32_t pos = player_sub_object(rdram, kPlayerPosition);
        const uint32_t state = move != 0U ? read_value(rdram, move + 4U, 32) : 0U;
        if (state != h->last_state && pos != 0U) {
            std::fprintf(stderr,
                         "[harness] t=%.2f state 0x%X -> 0x%X at (%.1f, %.1f, %.1f)\n",
                         now, h->last_state, state, read_float(rdram, pos),
                         read_float(rdram, pos + 4U), read_float(rdram, pos + 8U));
            h->last_state = state;
        }
    }
    if (h->log_level > 0 && now >= h->next_log) {
        h->next_log = now + (h->log_level >= 2 ? 0.25 : 1.0);
        const uint32_t pos = player_sub_object(rdram, kPlayerPosition);
        const uint32_t move = player_sub_object(rdram, kPlayerMovement);
        if (pos != 0U) {
            std::fprintf(stderr,
                         "[harness] t=%.2f map 0x%03X pos (%.1f, %.1f, %.1f) "
                         "state 0x%X\n",
                         now, map, read_float(rdram, pos), read_float(rdram, pos + 4U),
                         read_float(rdram, pos + 8U),
                         move != 0U ? read_value(rdram, move + 4U, 32) : 0U);
        }
        else {
            std::fprintf(stderr, "[harness] t=%.2f map 0x%03X no player\n", now, map);
        }
    }
    if (now < 0.0) {
        return;   // nothing is timed before the first input poll
    }

    for (Poke& poke : h->pokes) {
        if (due(poke.when, poke.done, now, map, in_map)) {
            apply_poke(rdram, poke, now);
        }
    }
    for (Position& pos : h->positions) {
        if (due(pos.when, pos.done, now, map, in_map)) {
            pos.done = apply_position(rdram, pos, now);
        }
    }
    for (Warp& warp : h->warps) {
        if (due(warp.when, warp.done, now, map, in_map)) {
            warp.done = apply_warp(rdram, ctx, warp, now, map);
            if (warp.done) {
                break;   // one request per frame
            }
        }
    }
}

} // namespace tooie::harness
