#!/usr/bin/env python3
"""
Generate the N64Recomp function-symbol file (banjotooie.us.syms.toml) for
Banjo-Tooie (USA) from the WIP decomp's committed splat outputs.

Inputs (all under decomp/):
  - baserom.us.yaml          splat segment layout (core/boot/buffers + overlays)
                             and each overlay's `<name>_header` blob, which is
                             where its relocation list is decoded from
  - symbol_addrs.us.txt      core/boot symbols (type:func for named functions)
  - ovl_symbol_addrs.us.txt  per-overlay function symbols (segment + rom offset)
  - overlays.us.toml         overlay entrypoint lists

Output:
  build/banjotooie.us.syms.toml  in the N64Recomp `symbols_file_path` schema:
      [[section]] name/rom/vram/size/functions[]/relocs[]

Overlay functions are all relocated to vram base 0x80800000; their low vram
offsets are unique per overlay, so `vram = 0x80800000 | offset` is a stable,
unique identifier for each function. Overlay relocs come from the overlay's own
ROM header (`ovl_rom_relocs`), which is the list the game's loader applies; the
decomp's `ovl_reloc_addrs.us.txt` is a strict subset of it.
"""

import os
import re
import struct
import sys

import rabbitizer

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
DECOMP = os.path.join(ROOT, "decomp")
OUT = os.path.join(ROOT, "build", "banjotooie.us.syms.toml")
ROM = os.path.join(ROOT, "build", "decompressed.us.z64")

OVERLAY_VRAM = 0x80800000

# Functions the symbol files do not name, recovered from what the ROM says the
# game actually calls. Counted so the figures quoted in AGENTS.md are
# reproducible from a run rather than hand-counted: `overlay_heads` and
# `core_gaps` come from `detect_gap_functions`, `pointer_tables` from
# `overlay_pointer_function_starts` (data pointers and export tables together).
RECOVERED = {"overlay_heads": 0, "core_gaps": 0, "pointer_tables": 0,
              "export_tables": 0}

# Safety bound on how far a jump table may be scanned when collecting its arms.
# The scan stops at the table's real end (the first word that is not a valid
# in-section code offset); this only prevents a runaway read if that never
# happens. Tooie's largest observed dispatch table has 73 entries.
ARM_SCAN_LIMIT = 1024

# How far back from a dispatch's index load its `sltiu`/`slti` bound may sit.
# Measured over Tooie's dispatchers: `bsbbarge`'s two are 8 and 5 words before
# the load, `bsbbuster`'s 5 and 6. A window this wide costs nothing and the
# branch-on-`$at` requirement keeps a match precise.
ARM_GUARD_WINDOW = 16

sys.path.insert(0, HERE)
from detect_functions import detect_functions, is_plausible_function_start
from ovl_rom_relocs import overlay_relocs
from ovl_text_extents import parse_text_extents

# RSP microcode text labels that N64Recomp's symbol lists mention but that are
# data, not functions; naming them as functions would be wrong.
_NON_FUNCTION_BUILTINS = {
    "rspbootTextStart",
    "gspF3DEX2_fifoTextStart",
    "gspL3DEX2_fifoTextStart",
}


def parse_builtin_func_names():
    """
    Names N64Recomp has built-in handling for (reimplemented / ignored /
    renamed). Core1/core2 contain copies of these libultra functions; if they
    are left unnamed they are recompiled verbatim and execute raw MMIO, which
    the host has no mapping for. Naming them routes calls to the runtime's
    handlers (or to the ignored-function path) instead.
    """
    path = os.path.join(ROOT, "..", "N64Recomp", "src", "symbol_lists.cpp")
    if not os.path.exists(path):
        return set()
    text = open(path, encoding="utf-8").read()
    names = set()
    for setname in ("reimplemented_funcs", "ignored_funcs", "renamed_funcs"):
        m = re.search(r"N64Recomp::" + setname + r"\s*\{(.*?)\n\};", text, re.S)
        if m:
            names.update(re.findall(r'"([^"]+)"', m.group(1)))
    return names - _NON_FUNCTION_BUILTINS

# Low-level functions that must always be present in the symbol map (they are
# stubbed in the recomp config). These are the OS/CPU functions that use cop0
# registers, cache ops, or RSP microcode that the recompiler doesn't model, and
# that the jal-target detector may prune because they aren't `jal` targets.
FORCE_KEEP = set()

# ---------------------------------------------------------------------------
# Parse splat YAML for the statically-placed (non-overlay) code segments.
# We only need name/start/vram/section for boot, buffers, core1, core2.
# ---------------------------------------------------------------------------

def parse_static_segments(yaml_path):
    """
    Returns dict name -> {rom, vram, size} for boot, core1, core2.
    `size` is derived from the next segment's start (or a sensible bound).
    """
    text = open(yaml_path, encoding="utf-8").read()
    # Find top-level named segments: "  - name: X" followed by vram:/start:
    segs = []
    cur = None
    for line in text.splitlines():
        m = re.match(r"^  - name: (\S+)\s*$", line)
        if m:
            if cur:
                segs.append(cur)
            cur = {"name": m.group(1), "rom": None, "vram": None}
            continue
        if cur is not None:
            ms = re.match(r"^    start: (0x[0-9A-Fa-f]+)\s*$", line)
            if ms:
                cur["rom"] = int(ms.group(1), 16)
            mv = re.match(r"^    vram: (0x[0-9A-Fa-f]+)\s*$", line)
            if mv and cur["vram"] is None:
                cur["vram"] = int(mv.group(1), 16)
            # stop at next top-level segment (handled by next '- name:' or '  - [0x')
    if cur:
        segs.append(cur)

    by_name = {s["name"]: s for s in segs}
    return by_name


# ---------------------------------------------------------------------------
# Overlay head-region function recovery.
# ---------------------------------------------------------------------------

def overlay_pointer_function_starts(rom_data, code_rom, code_size,
                                    code_pointers, funcs, relocs,
                                    entrypoint_offsets=()):
    """Function starts the overlay's *own pointer tables* refer to.

    The decomp names most overlay functions, but not all of them: a function
    whose only reference is a pointer in the overlay's data is invisible to it,
    and `gen_syms_toml` then sizes its predecessor by "next named symbol", so
    the nameless function is swallowed whole. `chintrochar` is the case that
    surfaced this: its actor table at data 0x5360 holds five code offsets
    (0x540, 0x648, 0x34C4, 0x3A78, 0x3D0C) that the loader relocates to
    `code_base + offset` and the game then calls, but `func_80800484_chintrochar`
    was emitted as 0x484..0x71C with 0x540 in the middle -- so the dispatch
    aborted with `Failed to find function at 0x801E2020`.

    `code_pointers` is the authority here: it is decoded from the overlay's own
    header (`ovl_rom_relocs`), i.e. the very list the game's loader applies.
    Three guards keep the split from breaking functions that legitimately
    contain these addresses:

    * the host must contain no `jr $reg` (register other than `$ra`) and no
      `jalr` -- *unless* the pointer lands at or after the host's final
      `jr` + delay slot, which nothing inside the host can reach. A jump
      table's entries are the case bodies of the function that dispatches on
      them, and a trampoline block's entries belong to the function that calls
      through them; both look exactly like function starts, and splitting them
      would take the arms away from their `switch`. This is what separates
      `anseq`'s six table entries (0x64..0xE8, dispatched by `jr $t9` at 0x5C,
      all inside `func_80800000_anseq`) from `chintrochar`'s. Measured: it
      rejects 10,966 of the 13,443 in-function pointers.
    * the start must pass `is_plausible_function_start` -- the same test the
      core-section detector uses, so an address that is really the middle of a
      function is rejected instead of splitting it.
    * the new function's run must reach a `jr` before the host ends, i.e. the
      split leaves two well-formed bodies rather than orphaning a tail.

    Survivors: 1,976 across 361 of the 851 overlays.

    `entrypoint_offsets` is a second, stronger authority: the overlay's export
    table, which the game's syscall thunk dispatches through. Every offset in
    it *is* a function entry -- the game calls `code_base + offset` directly --
    so a missing start is a guaranteed `Failed to find function at ...`. It
    needs fewer guards than `code_pointers` because it cannot name a switch
    arm: only the jump-table and the two structural tests apply. The
    `first_epilogue_end` test must *not* apply, and `bsbflip` is why -- the
    arms of `func_80800064_bsbflip`'s dispatcher share an epilogue at 0x3C4,
    which is also the tail of the real function at 0x3B4, so that heuristic
    reads 0x3B4 as an arm of the dispatcher and rejects it.

    Measured: 4,232 export-table offsets across the 851 overlays, 10 of them
    not already function starts (`bsbanbflip` 3, `bsbflap` 2, `bsbflip` 3,
    `babackpack` 2). All 10 are recovered here; all 10 are genuine prologues
    preceded by a `jr $ra` + delay slot.
    """
    words = [
        struct.unpack_from(">I", rom_data, code_rom + i)[0]
        for i in range(0, code_size, 4)
    ]

    # Reloc offset -> the section offset the reloc's target names. A relocated
    # `lw` is how a dispatch loads its table base, so this maps the load to the
    # table. Built once: both `jump_table_arms` and `dispatches_resolved` need
    # it, and the latter must agree with the former about what "resolved" means.
    table_of = {}
    for r in relocs:
        table_of[r["offset"]] = r["target_vram"] - OVERLAY_VRAM

    def has_indirect_transfer(lo, hi):
        for i in range(lo, min(hi, len(words))):
            word = words[i]
            if (word >> 26) == 0:
                funct = word & 0x3F
                if funct == 9:  # jalr
                    return True
                if funct == 8 and ((word >> 21) & 0x1F) not in (0, 31):
                    return True  # jr through anything but $ra/$zero
        return False

    def run_terminates(lo, hi):
        for i in range(lo, min(hi, len(words))):
            word = words[i]
            if (word >> 26) == 0 and (word & 0x3F) == 8:
                return i + 2 <= hi
        return False

    def first_epilogue_end(lo, hi):
        """Index just past the host's first stack-restoring return.

        `lw $ra, N($sp)` + `addiu $sp, $sp, +M` + `jr $ra` (allowing a couple of
        register restores in between) is a function's own exit. A pointer past
        it cannot be one of the host's case bodies -- a switch's arms all
        precede the shared epilogue they branch to -- so it names a separate
        function. Returns None when the host has no such epilogue.
        """
        for i in range(lo, min(hi, len(words))):
            word = words[i]
            if (word >> 26) != 0 or (word & 0x3F) != 8 or ((word >> 21) & 0x1F) != 31:
                continue
            restores = False
            saves_ra = False
            for j in range(max(lo, i - 4), i):
                w = words[j]
                if (w >> 26) == 0x09 and ((w >> 21) & 0x1F) == 29 and ((w >> 16) & 0x1F) == 29:
                    restores = (w & 0xFFFF) != 0
                if (w >> 26) == 0x23 and ((w >> 21) & 0x1F) == 29 and ((w >> 16) & 0x1F) == 31:
                    saves_ra = True
            if restores and saves_ra:
                return i + 2
        return None

    def jump_table_arms(lo, hi, relocs):
        """Offsets the host dispatches on through a relocated jump table.

        A `jr $reg` in the host is a switch; the arm offsets it can reach live
        in the table the `lw` before it loads, and that table's entries are
        relocated by the loader, so the entry values are exactly the section
        offsets the switch can jump to. Those offsets are the arms of *this*
        function -- a data pointer to one of them is not a function start --
        whereas a pointer to a function that merely *follows* a switch is.
        `chintroticker`'s actor table points at 0x2DC, the function after the
        six-arm dispatcher at 0x254, and the dispatcher's table (0x804) does
        not contain it, so the split is real; `anseq`'s six table entries
        (0x64..0xE8) are in the table at 0x470 and stay with their dispatcher.
        """
        arms = set()
        for i in range(lo, min(hi, len(words))):
            word = words[i]
            if (word >> 26) != 0 or (word & 0x3F) != 8:
                continue
            reg = (word >> 21) & 0x1F
            if reg in (0, 31):
                continue
            base = None
            lw_index = None
            for j in range(i - 1, max(lo - 1, i - 9), -1):
                if (words[j] >> 26) == 0x23:  # lw
                    base = table_of.get(j * 4)
                    lw_index = j
                    break
            if base is None:
                continue
            # The dispatcher's own index guard bounds the table exactly, and it
            # has to be used before the scan below: that scan finds the table's
            # end by "first word that is not a valid code offset", and a table
            # immediately followed by *another* table of code offsets reads past
            # its own end. `bsbbarge` is the case -- its switch table at 0x61C
            # has 5 entries (`sltiu $at, $t7, 0x5` at 0x384 bounds the index) and
            # the overlay's end/init/update pointer table at 0x630 follows it
            # with three more valid code offsets (0x180, 0x1CC, 0x344). Those
            # were read as arms 5..7, so the splitter below rejected all three
            # real functions as "switch arms" and never split them out, while
            # `bsbbarge_entrypoint_0` returns exactly those three for the game to
            # call -- so performing Beak Barge aborted with `Failed to find
            # function at <code_base + 0x180>`. Same shape in `bsbbuster`
            # (table 0x71C, pointer table 0x730).
            #
            # `sltiu $at, $reg, N` (or `slti`) on the register this `jr` jumps
            # through means the table has N entries. Requiring a branch on `$at`
            # before the index load keeps the match to a real dispatch bound
            # rather than any comparison that happens to name the register.
            limit = ARM_SCAN_LIMIT
            if lw_index is not None:
                for j in range(lw_index - 1, max(lo - 1, lw_index - 1 - ARM_GUARD_WINDOW), -1):
                    guard = words[j]
                    if (guard >> 26) not in (0x0A, 0x0B):  # slti, sltiu
                        continue
                    if ((guard >> 21) & 0x1F) != reg or (guard & 0xFFFF) == 0:
                        continue
                    for k in range(j + 1, lw_index):
                        branch = words[k]
                        if (branch >> 26) in (0x4, 0x5, 0x6, 0x7) and ((branch >> 21) & 0x1F) == 1:
                            limit = min(limit, guard & 0xFFFF)
                            break
                    break
            # Read the table to its real end, not a fixed number of entries.
            # An arm is a code offset, so the first word that is not a valid
            # in-section code offset terminates the table -- the same rule
            # N64Recomp's analysis uses. A 64-entry cap silently misses the
            # later arms of a longer table, and those arms are then split out
            # as functions of their own: `chalienkids`' dispatch table holds 73
            # entries (the code bounds the index with `sltiu $at,$t6,0x49`) and
            # its arms at indices 64..72 became phantom functions at 0xAA4,
            # 0xBA0, 0xBF4, 0xC08 and 0xD20. The dispatcher's own function then
            # ended at 0xAA4, so N64Recomp truncated the switch to the two arms
            # that happened to remain inside it and the game aborted in
            # `switch_error` on the third dispatch.
            for k in range(limit):
                # The table itself lives in the overlay's *data*, past the code
                # (chalienkids' five tables sit at 0x1C50..0x1E30 with a code
                # size of 0x1C50), so only the ROM read is bounded here -- the
                # table's own end is found from the entries, below.
                entry_rom = code_rom + base + 4 * k
                if entry_rom + 4 > len(rom_data):
                    break
                entry = struct.unpack_from(">I", rom_data, entry_rom)[0]
                if entry >= code_size:
                    break
                arms.add(entry)
        return arms

    def first_indirect_transfer(lo, hi):
        """Index of the host's first `jr $reg` / `jalr`, or None."""
        for i in range(lo, min(hi, len(words))):
            word = words[i]
            if (word >> 26) == 0:
                funct = word & 0x3F
                if funct == 9:
                    return i
                if funct == 8 and ((word >> 21) & 0x1F) not in (0, 31):
                    return i
        return None

    def dispatches_resolved(lo, hi):
        """True when every `jr $reg` in the host has a resolvable table base.

        The positional test below (`past the host's first epilogue`) is a proxy
        for "this pointer might be a case body whose table we could not
        resolve". When every dispatch in the host resolves, the arm set is
        complete, the proxy is unnecessary -- and it is wrong for a host whose
        declared extent holds several whole functions, because then the "first
        epilogue" it finds belongs to a function that is not the dispatcher.

        `bskazhatch` is the case that made this necessary: `func_80800000_bskazhatch`
        is declared 0..0x1E4, but the ROM holds a complete function ending at
        0xD0, another at 0xA8..0xD4, and only then the dispatcher at 0x154. The
        overlay's accessor at 0x470 returns `{ 0xA8, 0xD4, 0x220, 0x108 }`, so
        the game calls `code_base + 0xA8` -- which the epilogue bound (0xD4)
        rejected. The host's only dispatch resolves (its table is relocated and
        guarded by `sltiu $at, $t6, 0x11`), so 0xA8 cannot be a case body.
        """
        for i in range(lo, min(hi, len(words))):
            word = words[i]
            if (word >> 26) != 0 or (word & 0x3F) != 8:
                continue
            if ((word >> 21) & 0x1F) in (0, 31):
                continue
            for j in range(i - 1, max(lo - 1, i - 9), -1):
                if (words[j] >> 26) == 0x23:  # lw
                    if table_of.get(j * 4) is None:
                        return False
                    break
            else:
                return False
        return True

    def head_is_stub_runs(lo, ptr):
        """True when `[lo, ptr)` is whole `jr $ra` + delay-slot runs, no frame.

        The host's declared start is then itself wrong: those words are already
        complete functions, so `ptr` begins a new one rather than sitting inside
        the host. `chkingjinjobits` is the case that made this necessary -- the
        decomp puts `chkingjinjobits_entrypoint_0` at the segment base, but the
        ROM holds a 0xC-byte getter (`lui $v0, hi` / `jr $ra` / `addiu $v0, $v0,
        lo`, returning `D_80800A80`), then a `jr $ra` stub at 0xC, and only then
        the real entrypoint at 0x14. The overlay's own data points at 0xC, so
        the game called `code_base + 0xC` and aborted with
        `Failed to find function at 0x801CE84C` -- while the map declared one
        0x29C-byte function starting at 0 that swallowed both stubs.

        A real function is excluded by requiring no stack-frame allocation
        (`addiu $sp, $sp, -N`) and no `sw $ra` anywhere in the head, and no
        `jal`/`jalr`/`jr $reg`; a stub is straight-line and frameless.
        """
        i = lo
        runs = 0
        while i < ptr:
            word = words[i]
            op = word >> 26
            if op == 3:  # jal
                return False
            if op == 0 and (word & 0x3F) == 9:  # jalr
                return False
            if op == 9 and ((word >> 21) & 0x1F) == 29 and ((word >> 16) & 0x1F) == 29:
                if (word & 0xFFFF) != 0:
                    return False  # allocates a frame: a real function
            if op == 43 and ((word >> 21) & 0x1F) == 29 and ((word >> 16) & 0x1F) == 31:
                return False  # saves $ra: a real function
            if op == 0 and (word & 0x3F) == 8 and ((word >> 21) & 0x1F) == 31:
                i += 2  # jr $ra: the run ends after its delay slot
                runs += 1
                continue
            i += 1
        return i == ptr and runs > 0

    starts = {f["vram"] - OVERLAY_VRAM for f in funcs}
    found = []
    # `entrypoint_offsets` are exported functions; `code_pointers` are merely
    # data pointers that *may* name one. Same loop, two guard sets.
    authoritative = set(entrypoint_offsets)
    arms_cache = {}
    for offset in list(code_pointers) + list(entrypoint_offsets):
        if offset in starts or offset % 4 != 0 or offset // 4 == 0:
            continue
        host = None
        for f in funcs:
            lo = f["vram"] - OVERLAY_VRAM
            if lo < offset < lo + f["size"]:
                host = f
                break
        if host is None:
            continue
        lo = (host["vram"] - OVERLAY_VRAM) // 4
        hi = lo + host["size"] // 4
        if has_indirect_transfer(lo, hi):
            if (lo, hi) not in arms_cache:
                arms_cache[(lo, hi)] = jump_table_arms(lo, hi, relocs)
            arms = arms_cache[(lo, hi)]
            if offset in arms:
                continue
            if offset not in authoritative:
                # A pointer into the host's *head*, before the host's own first
                # indirect transfer, is accepted only when that head is already
                # whole frameless stub runs (`head_is_stub_runs`): the host's
                # declared start is then wrong and the pointer begins a real
                # function. Otherwise the original rule stands -- past the host's
                # first epilogue is the only place a switch's arms cannot be.
                indirect = first_indirect_transfer(lo, hi)
                head_is_stub = (
                    indirect is not None
                    and offset // 4 < indirect
                    and head_is_stub_runs(lo, offset // 4)
                )
                if not head_is_stub and not dispatches_resolved(lo, hi):
                    epilogue = first_epilogue_end(lo, hi)
                    if epilogue is None or offset // 4 < epilogue:
                        # `first_epilogue_end` assumes the host's arms all
                        # branch to one shared exit, so that exit precedes them
                        # all. A dispatcher whose arms are *leaf* functions
                        # breaks that: `chbadbeehive`'s dispatcher at 0xC has 12
                        # `jr $ra` arms (0x38..0xDC) and then a separate framed
                        # function at 0xEC, whose own epilogue at 0x150 is the
                        # first one the scan finds -- so the bound lands *after*
                        # the pointer it exists to admit and 0xEC is rejected.
                        # The game calls 0xEC directly (the actor definition's
                        # table names it), so it aborts with `Failed to find
                        # function at <code_base + 0xEC>`.
                        #
                        # Past the host's last resolved arm is a place no arm can
                        # be, so admit the pointer there. The two structural
                        # guards below still apply.
                        if not (arms and offset > max(arms)):
                            continue
        if not is_plausible_function_start(words, offset // 4):
            continue
        if not run_terminates(offset // 4, hi):
            continue
        starts.add(offset)
        found.append(offset)
    return found


def detect_gap_functions(rom_data, start, end):
    """Split an uncovered overlay code region into functions.

    The decomp's overlay symbol files do not name every function. 154 overlays
    begin their code segment with functions that no symbol covers -- real code
    the game reaches through relocated pointer tables (e.g. `glgamedata`'s two
    DLL stubs at 0x80800000 / 0x80800008). Because they are never `jal`
    targets, nothing at recompile time complains; the runtime only aborts later
    with `Failed to find function at <code_base + offset>`.

    Each unnamed run in these regions is a straight-line function terminated by
    `jr $ra` with the return in the delay slot, so splitting at every `jr $ra` +
    delay slot is exact rather than a guess: measured over all 154 regions
    (91,108 bytes) every word decodes as a valid instruction and every run ends
    that way, and each region's first function starts exactly at the segment
    start.

    Alignment padding is skipped before each run: a function never begins with a
    `nop`, and a gap between two functions is normally padded to a 16-byte
    boundary. `0x80115EA0` in .core2 is the case that made this necessary --
    three padding nops, then a two-instruction `return 0x5C` thunk -- and without
    the skip the recovered function would have started at the first nop and the
    table entry would still not have resolved. Measured over the 151 overlay head
    regions: none begins with a zero word, so this changes nothing for overlays.

    Returns a list of (rom_offset, size), or None if the region does not parse
    (in which case nothing is recovered and the region stays unrecompiled).
    """
    funcs = []
    cursor = start
    while cursor < end:
        # Skip alignment padding (nops) before the run.
        while cursor < end and struct.unpack_from(">I", rom_data, cursor)[0] == 0:
            cursor += 4
        if cursor >= end:
            break
        terminator = None
        for offset in range(cursor, end, 4):
            if struct.unpack_from(">I", rom_data, offset)[0] == 0x03E00008:
                terminator = offset
                break
        if terminator is None or terminator + 8 > end:
            return None
        for offset in range(cursor, terminator + 8, 4):
            word = struct.unpack_from(">I", rom_data, offset)[0]
            if not rabbitizer.Instruction(word).isValid():
                return None
        funcs.append((cursor, terminator + 8 - cursor))
        cursor = terminator + 8
    return funcs


# ---------------------------------------------------------------------------
# Parse symbol files.
# ---------------------------------------------------------------------------

SYM_RE = re.compile(
    r"^(?P<name>\S+)\s*=\s*(?P<vram>0x[0-9A-Fa-f]+)\s*;\s*(?://(?P<comment>.*))?$"
)


def parse_kv(comment):
    """Parse ' key:value key:value ... ' splat comment into a dict."""
    out = {}
    for m in re.finditer(r"(\w+):(\S+)", comment):
        out[m.group(1)] = m.group(2)
    return out


def parse_symbols(path):
    """
    Returns list of dicts: name, vram(int), segment(str|None), rom(int|None),
    is_func(bool), size(int|None).
    """
    entries = []
    if not os.path.exists(path):
        return entries
    for line in open(path, encoding="utf-8"):
        line = line.rstrip("\n")
        m = SYM_RE.match(line.strip())
        if not m:
            continue
        kv = parse_kv(m.group("comment") or "")
        if kv.get("ignore") == "true":
            continue
        ent = {
            "name": m.group("name"),
            "vram": int(m.group("vram"), 16),
            "segment": kv.get("segment"),
            "rom": int(kv["rom"], 16) if "rom" in kv else None,
            "is_func": kv.get("type") == "func",
            "size": int(kv["size"], 16) if "size" in kv else None,
        }
        entries.append(ent)
    return entries


# ---------------------------------------------------------------------------
# Parse overlays.us.toml for entrypoint counts / names per overlay.
# ---------------------------------------------------------------------------

def parse_overlays_toml(path):
    """Returns list of overlays: {'name':str|None, 'entrypoints':[...], 'empty':bool}."""
    overlays = []
    cur = None
    for line in open(path, encoding="utf-8"):
        s = line.strip()
        if s.startswith("[[overlay]]"):
            if cur is not None:
                overlays.append(cur)
            cur = {"name": None, "entrypoints": [], "empty": False}
        elif cur is not None:
            if s.startswith("empty"):
                cur["empty"] = s.split("=")[1].strip().lower() == "true"
            elif s.startswith("name"):
                cur["name"] = s.split("=", 1)[1].strip().strip('"')
            elif s.startswith('"') and s.endswith(("]", ",")) is False:
                pass
            elif s.startswith('"'):
                cur["entrypoints"].append(s.strip(',').strip('"'))
    if cur is not None:
        overlays.append(cur)
    return overlays


# ---------------------------------------------------------------------------
# Build sections.
# ---------------------------------------------------------------------------


def unique_names(funcs):
    """Ensure function names are unique within a section (append suffix)."""
    seen = {}
    for f in funcs:
        n = f["name"]
        if n in seen:
            seen[n] += 1
            f["name"] = f"{n}__{seen[n]}"
        else:
            seen[n] = 0
    return funcs


def fill_gap_functions(rom_data, sec_rom, sec_vram, sec_size, funcs):
    """Recover the functions sitting in the holes between generated functions.

    `detect_functions` only proposes a start for a `jal` target, the segment
    start, or an accumulated `force_keep` entry. Core code reached only through
    a pointer table -- an object's method table, an overlay's export list -- is
    never a `jal` target, so it gets no boundary at all: it sits in the gap
    between two consecutive functions and the runtime aborts with `Failed to
    find function at 0x...` the first time that table is used. `0x80115EA0` was
    the first one the game reached: a two-instruction `return 0x5C` thunk.

    All-or-nothing per gap: `detect_gap_functions` returns None unless every
    word in the gap decodes as a valid instruction and the gap ends on `jr $ra`
    + delay slot, so a gap that is really data (or holds anything undecodable)
    is left alone. Gaps of 4 bytes are alignment padding, not code.
    """
    out = list(funcs)
    sec_end = sec_vram + sec_size
    for i, f in enumerate(funcs):
        gap_start = f["vram"] + f["size"]
        gap_end = funcs[i + 1]["vram"] if i + 1 < len(funcs) else sec_end
        if gap_end - gap_start < 8:
            continue
        found = detect_gap_functions(
            rom_data,
            sec_rom + (gap_start - sec_vram),
            sec_rom + (gap_end - sec_vram),
        )
        if not found:
            continue
        for start_rom, length in found:
            vram = sec_vram + (start_rom - sec_rom)
            out.append({"name": f"func_{vram:08X}", "vram": vram, "size": length})
            RECOVERED["core_gaps"] += 1
    out.sort(key=lambda f: f["vram"])
    return out

def build_static_section(name, rom, vram, size, funcs):
    funcs = sorted(funcs, key=lambda f: f["vram"])
    # infer sizes from next function vram where missing
    for i, f in enumerate(funcs):
        if f["size"] is None:
            if i + 1 < len(funcs):
                f["size"] = funcs[i + 1]["vram"] - f["vram"]
            else:
                f["size"] = max(4, (vram + size) - f["vram"])
    unique_names(funcs)
    return {
        "name": name,
        "rom": rom,
        "vram": vram,
        "size": size,
        "functions": funcs,
        "relocs": [],
    }


def build_detected_section(name, rom_data, rom, vram, size, named_funcs, extra_starts=(),
                           fill_gaps=False):
    """
    Build a section by detecting function boundaries from the ROM bytes, then
    overlaying any known named functions on top (so decomp'd functions keep
    their real names). named_funcs: list of {name, vram, size(optional)}.
    extra_starts: extra forced function starts (vram ints).
    fill_gaps: recover pointer-table-reached functions in the holes between
    generated functions (see fill_gap_functions).

    A named function with an explicit `size` is authoritative: its boundary
    comes from the decomp symbol table, so any detected start strictly inside
    its range is a spurious split (e.g. the delay slot of an intra-function
    `j`, which the detector's terminator test mistakes for a function start)
    and is dropped. Without this, functions such as boot_huft_build get cut in
    half and silently decode with missing code.
    """
    detected = detect_functions(rom_data, rom, vram, size, extra_starts)
    funcs = []
    named_by_vram = {nf["vram"]: nf for nf in named_funcs}
    authoritative = [(nf["vram"], nf["size"]) for nf in named_funcs
                     if nf.get("size")]

    def inside_named(addr):
        return any(av < addr < av + asize for av, asize in authoritative)

    for d in detected:
        if inside_named(d["vram"]):
            continue
        nf = named_by_vram.get(d["vram"])
        if nf is not None:
            funcs.append({"name": nf["name"], "vram": d["vram"],
                          "size": nf.get("size") or d["size"]})
        else:
            funcs.append(
                {"name": f"func_{d['vram']:08X}", "vram": d["vram"], "size": d["size"]}
            )
    # Add any named funcs that the detector missed (e.g. OS/low-level functions
    # reached only via jalr/cop0, which the jal-target detector pruned). Give
    # them a size from the nearest detected boundary.
    present = {f["vram"] for f in funcs}
    for nf in named_funcs:
        if nf["vram"] not in present:
            # Leave the size unset so the fix-up pass below derives it from the
            # next function; a hard-coded 4 would truncate an undetected
            # libultra function to a single instruction.
            funcs.append(
                {"name": nf["name"], "vram": nf["vram"], "size": nf.get("size")}
            )
            present.add(nf["vram"])
    funcs.sort(key=lambda f: f["vram"])
    # Fix up missing sizes (the gap fill below needs every function's extent).
    for i, f in enumerate(funcs):
        if f["size"] is None or f["size"] < 4:
            if i + 1 < len(funcs):
                f["size"] = funcs[i + 1]["vram"] - f["vram"]
            else:
                f["size"] = max(4, (vram + size) - f["vram"])
    if fill_gaps:
        funcs = fill_gap_functions(rom_data, rom, vram, size, funcs)
    unique_names(funcs)
    return {
        "name": name,
        "rom": rom,
        "vram": vram,
        "size": size,
        "functions": funcs,
        "relocs": [],
    }


def main():
    yaml_path = os.path.join(DECOMP, "baserom.us.yaml")
    static_segs = parse_static_segments(yaml_path)

    # --- Core/boot symbols (named functions). ---
    core_syms = parse_symbols(os.path.join(DECOMP, "symbol_addrs.us.txt"))
    func_syms = [s for s in core_syms if s["is_func"]]

    # Split into boot (segment:boot) and core (no segment, vram in core ranges).
    #
    # Boot symbols are mostly libultra duplicates that the WIP decomp does not
    # annotate with `type:func`. They must still be named: the boot copies are
    # prefixed `boot_`, so N64Recomp's built-in reimplemented/ignored lists (bare
    # names) never match them, and their raw bodies read PI/SI/SP MMIO that the
    # host has no mapping for. The shipping Banjo-Tooie recompilation names these
    # from its decomp ELF and stubs the hardware-facing ones; we recover the same
    # names from symbol_addrs. The boot data region starts at 0x80004250
    # (boot_osClockRate, type:u64), so everything below it in `.boot` is code.
    boot_funcs = [
        s for s in core_syms
        if s["segment"] == "boot" and 0x80000450 <= s["vram"] < 0x80004250
    ]
    # core funcs: no segment, and not an overlay (vram < 0x80800000).
    #
    # Core1/core2 also contain copies of libultra functions that N64Recomp has
    # built-in handling for. They must be named too, otherwise they recompile
    # verbatim and their raw MMIO bodies (SI/PI/AI registers) fault on the host.
    # symbol_addrs marks only 19 core symbols `type:func`, so membership in
    # N64Recomp's built-in lists is what identifies these as functions.
    builtin_names = parse_builtin_func_names()
    core_funcs = [
        s for s in core_syms
        if s["segment"] is None and s["vram"] < OVERLAY_VRAM
        and (s["is_func"] or s["name"] in builtin_names)
    ]

    # Segment boundaries from the YAML.
    boot = static_segs.get("boot", {})
    core1 = static_segs.get("core1", {})
    core2 = static_segs.get("core2", {})

    core1_rom = core1.get("rom", 0x1E29B60)
    core1_vram = core1.get("vram", 0x80012030)
    core2_rom = core2.get("rom", 0x1E5AEB0)
    core2_vram = core2.get("vram", 0x800815C0)

    # Derive sizes: core1 ends where core2 begins; core2 ends at overlay_table (0x1F00020).
    core1_size = core2_rom - core1_rom
    core2_size = 0x1F00020 - core2_rom

    # Entry + boot segment: boot is at rom 0x1000 (vram 0x80000400). The actual
    # recompiled boot functions live in the boot segment; we model a tiny
    # .entry section (0x1000..0x1050) plus the boot body.
    entry_rom = 0x1000
    entry_vram = 0x80000400
    entry_size = 0x50

    # boot body follows the entry stub. The boot segment's rom text/data spans
    # 0x1000..0x50E0 (per the splat yaml); the recompiled boot functions start
    # after the entry stub at rom 0x1050.
    boot_rom = 0x1050
    boot_vram = 0x80000450
    boot_size = 0x50E0 - boot_rom  # actual boot text/data span

    # Split core funcs into core1 vs core2 by vram.
    core1_funcs = [s for s in core_funcs if core1_vram <= s["vram"] < core2_vram]
    core2_funcs = [s for s in core_funcs if s["vram"] >= core2_vram]

    sections = []

    # Read the decompressed ROM for function-boundary detection.
    rom_data = open(ROM, "rb").read()

    # Extra forced function starts recovered from previous recompilation passes.
    keep_file = os.path.join(ROOT, "build", "force_keep.txt")
    extra_starts = set()
    if os.path.exists(keep_file):
        for line in open(keep_file):
            line = line.strip()
            if line:
                extra_starts.add(int(line, 16))

    # .entry section
    sections.append(
        build_static_section(
            ".entry",
            entry_rom,
            entry_vram,
            entry_size,
            [{"name": "recomp_entrypoint", "vram": entry_vram, "size": 0x34}],
        )
    )

    # .boot section (detect functions; boot funcs from symbol_addrs are named)
    #
    # Boot symbols are exact (they come from the decomp's linker symbols), so
    # give every boot function its true size from the next symbol. This stops
    # the boundary detector from splitting them at intra-function labels -- it
    # already mis-cut boot_huft_build at the delay slot of a `j`, which
    # truncated the Huffman-table builder and made every boot inflate fail.
    #
    # boot___createSpeedParam has no symbol in symbol_addrs; it fills the gap
    # between boot_osInitialize (0x800016F0) and boot___osPiRawStartDma
    # (0x80001A40). Without it, boot_osInitialize's next-symbol size would
    # swallow it and run its raw PI MMIO reads (the shipping recompilation
    # stubs it for the same reason).
    boot_named = [
        {"name": s["name"], "vram": s["vram"], "size": s["size"]} for s in boot_funcs
    ]
    boot_named.append(
        {"name": "boot___createSpeedParam", "vram": 0x80001998, "size": 0x9C}
    )
    boot_named.sort(key=lambda f: f["vram"])
    for i, nf in enumerate(boot_named):
        if not nf.get("size"):
            nxt = boot_named[i + 1]["vram"] if i + 1 < len(boot_named) else 0x80004250
            nf["size"] = nxt - nf["vram"]
    sections.append(
        build_detected_section(".boot", rom_data, boot_rom, boot_vram, boot_size, boot_named, extra_starts)
    )

    # Syscall thunks.
    #
    # decomp/syscall_symbol_addrs.us.txt names 4234 tiny entry points that live
    # in core2, each an 8-byte `syscall N; addi $t0, $zero, K` pair used to
    # enter an overlay. They are NOT reached by `jal` from ordinary code, so the
    # boundary detector never proposes them, and N64Recomp then reports them as
    # "No function found for jal target" (601 of 641 unresolved targets in one
    # run). Feeding them in as named functions resolves those directly.
    syscall_named = []
    sc_path = os.path.join(DECOMP, "syscall_symbol_addrs.us.txt")
    if os.path.exists(sc_path):
        sc = []
        for line in open(sc_path, encoding="utf-8"):
            m = re.match(r"^(\S+)\s*=\s*(0x[0-9A-Fa-f]+)\s*;", line.strip())
            if m:
                sc.append((int(m.group(2), 16), m.group(1)))
        sc.sort()
        for i, (vram, name) in enumerate(sc):
            # Size runs to the next thunk, but never past the 8-byte pair.
            nxt = sc[i + 1][0] if i + 1 < len(sc) else vram + 8
            syscall_named.append(
                {"name": name, "vram": vram, "size": min(8, max(4, nxt - vram))}
            )

    # .core1 / .core2 (detect functions; overlay the ~13 named core funcs)
    core1_named = [
        {"name": s["name"], "vram": s["vram"], "size": s["size"]} for s in core1_funcs
    ]
    core2_named = [
        {"name": s["name"], "vram": s["vram"], "size": s["size"]} for s in core2_funcs
    ]

    # syscall_handler (0x80081E74, size 0xF0) is the exception-vector entry that
    # loads/relocates an overlay and rewrites the syscall thunk. It is never a
    # `jal` target (it is reached only from the exception vector), and
    # symbol_addrs.us.txt lists it without `type:func`, so neither the boundary
    # detector nor the named-symbol path surfaces it. It must be recompiled
    # because the runtime's `recomp_syscall_handler` invokes the game's own
    # loader/relocator rather than reimplementing it. Size comes from the decomp
    # symbol; 0x80081E74 + 0xF0 == 0x80081F64 (func_80081F64), so it abuts.
    core2_named.append(
        {"name": "syscall_handler", "vram": 0x80081E74, "size": 0xF0}
    )

    # Name the overlay lifecycle helpers the way the decomp does, so the
    # recompiler config can hook them (the runtime keeps its loaded-function
    # map in sync with Tooie's own unload / heap-defragmentation paths).
    # The boundary detector already finds these addresses, and
    # build_detected_section keeps the detected size, so only the name changes.
    core2_named += [
        {"name": "ovl_load",   "vram": 0x80081798, "size": 0x21C},
        {"name": "ovl_unload", "vram": 0x800819E4, "size": 0xA8},
        {"name": "ovl_shift",  "vram": 0x80082494, "size": 0xA0},
    ]
    core1_named += [f for f in syscall_named
                    if core1_vram <= f["vram"] < core2_vram]
    core2_named += [f for f in syscall_named if f["vram"] >= core2_vram]
    sections.append(
        build_detected_section(".core1", rom_data, core1_rom, core1_vram, core1_size, core1_named, extra_starts,
                               fill_gaps=True)
    )
    sections.append(
        build_detected_section(".core2", rom_data, core2_rom, core2_vram, core2_size, core2_named, extra_starts,
                               fill_gaps=True)
    )

    # --- Overlays. ---
    ovl_syms = parse_symbols(os.path.join(DECOMP, "ovl_symbol_addrs.us.txt"))

    # An overlay's recompilable functions are its `type:func` symbols PLUS its
    # `_entrypoint_N` symbols. The decomp marks only 358 of 4204 entrypoints as
    # `type:func`, so selecting on `is_func` alone silently dropped whole
    # overlays: 246 of 851 named overlays had no section at all (e.g.
    # `seqdefine`, `bsbee`, `bsbeggass`), because none of their entrypoints
    # carried the annotation. Overlays are entered via `syscall`, never a direct
    # `jal`, so this never raised an unresolved target -- clean output hid the
    # missing code. It would break LOOKUP_FUNC dispatch at runtime.
    #
    # Every non-first entrypoint in every overlay was verified to be a genuine
    # function start (preceded by `jr $ra` / `j` / `b`); zero were interior
    # labels. Entrypoints without a `rom:` annotation cannot be validated and
    # are skipped.
    entrypoint_re = re.compile(r"_entrypoint_\d+$")

    def is_overlay_func(s):
        if not s["segment"]:
            return False
        if s["is_func"]:
            return True
        return bool(entrypoint_re.search(s["name"])) and s["rom"] is not None

    ovl_funcs = [s for s in ovl_syms if is_overlay_func(s)]

    # True .text extent per overlay, from the splat yaml. Used below to size
    # overlay sections so the last function in each isn't truncated.
    text_extents = parse_text_extents(os.path.join(DECOMP, "baserom.us.yaml"))

    # Group overlay funcs by segment (overlay name).
    by_seg = {}
    for s in ovl_funcs:
        by_seg.setdefault(s["segment"], []).append(s)

    # A few overlays name their functions without either annotation, e.g.
    # `batimer` (`batimer_get`, `batimer_set`, ...) has 12 `rom:`-bearing
    # symbols but none is `type:func` and none is an `_entrypoint_`. Such an
    # overlay would get no section at all. For a segment that has no functions
    # yet, fall back to its rom-bearing symbols that don't look like data.
    by_seg_any = {}
    for s in ovl_syms:
        if s["segment"] and s["rom"] is not None:
            by_seg_any.setdefault(s["segment"], []).append(s)
    for seg, lst in by_seg_any.items():
        if seg in by_seg:
            continue
        cand = [s for s in lst
                if not re.match(r"^(D_|R_|B_|jtbl_|__)", s["name"])]
        if cand:
            by_seg[seg] = cand

    # Decode every overlay's relocation list from its own ROM header. This is
    # the list the game's loader applies at load time; `ovl_reloc_addrs.us.txt`
    # is a subset of it (missing 62 entries, 31 HI16/LO16 pairs, in 16
    # overlays), and a missing reloc is silent all the way down -- see
    # `ovl_rom_relocs` for the format and the evidence.
    #
    # The overlay id is the game's, i.e. the overlay's one-based position in
    # `overlays.us.toml`, which is the order `sections.txt` and therefore
    # N64Recomp's section indices are emitted in.
    ovl_defs = parse_overlays_toml(os.path.join(DECOMP, "overlays.us.toml"))
    overlay_ids = {}
    for i, o in enumerate(ovl_defs):
        if o["empty"] or not o["name"]:
            continue
        overlay_ids[o["name"]] = i + 1
    ovl_relocs = overlay_relocs(rom_data, text_extents, overlay_ids)

    # Build overlay sections: vram base is the overlay *link* base 0x80800000,
    # rom base is the code segment's start in the splat yaml.
    for name in sorted(by_seg):
        funcs = by_seg[name]
        roms = [f["rom"] for f in funcs if f["rom"] is not None]
        if not roms:
            continue
        ext = text_extents.get(name)
        # The section's `vram` is the address the overlay's code was *linked*
        # at, and `rom` is the matching ROM address. The runtime registers
        # `func_map[code_base + (func.vram - section.vram)]` (`load_overlay`),
        # and the game's own relocator resolves every overlay pointer to
        # `code_base + (target_vram - 0x80800000)`. The two agree only when the
        # section base is exactly 0x80800000.
        #
        # This used to be derived per overlay from the lowest-ROM function
        # (`base_vram = f0.vram`), which is wrong whenever the overlay's first
        # function is not at link offset 0: the emitted offsets were then short
        # by that delta, so the entrypoint table entry the relocator produced
        # (`code_base + 0x14` for `glgamedata`) had no function registered at it
        # and `get_function` aborted with "Failed to find function".
        #
        # Verified over all 851 overlays: for every function symbol,
        # `vram - 0x80800000 == rom - text_start` (850/851 exact; the one
        # exception is gsmaker, whose decomp `rom:` annotations are 0xC early --
        # see AGENTS.md -- and which this base corrects, since 0x1F00EF0 holds a
        # real prologue while the annotated 0x1F00EE4 holds a `j` + two zero
        # words).
        base_vram = OVERLAY_VRAM
        code_rom = min(roms)
        if ext is not None and ext["text_start"] > 0:
            code_rom = ext["text_start"]
        # Section size.
        #
        # The overlay's true .text extent comes from the splat yaml (the `c`
        # subsegment start up to the following .rodata/data/bss). Using it is
        # what makes the LAST function of each overlay correctly sized.
        #
        # The previous heuristic here was `(vmax - base_vram) + 0x100`, which
        # capped every trailing function at 0x100 bytes (64 instructions). Any
        # final function longer than that was silently truncated; the damage
        # only surfaced as uncompilable C (`goto after_N` / `goto L_ADDR` with
        # no matching label).
        #
        # The yaml extent is authoritative in BOTH directions: it must not be
        # clamped up to the old 0x100 pad either. Overshooting pulls trailing
        # .rodata into the section, which then gets decoded as instructions --
        # float constants such as 0x3F99999A (1.2f) turn into `sll $zero, ...`
        # and emit `0 = ...`, i.e. a write to $zero, which is also uncompilable.
        vmax = max(f["vram"] for f in funcs)
        fallback_size = (vmax - base_vram) + 0x100

        if ext is not None and ext["text_end"] > code_rom:
            size = ext["text_end"] - code_rom
        else:
            size = fallback_size

        # Section relocs, decoded from this overlay's ROM header. Each entry
        # carries a code-relative offset (which is what the loader relocates)
        # and the absolute target vram the loader computes, so the two agree by
        # construction; the recompiler derives its addend as
        # `target_vram - section.ram_addr` (config.cpp).
        out_relocs = [
            {"vram": base_vram + r["offset"],
             "target_vram": r["target_vram"],
             "type": r["type"]}
            for r in ovl_relocs.get(name, {}).get("relocs", ())
        ]
        # N64Recomp matches a reloc to an instruction by walking `section.relocs`
        # in order (`while (relocs[i].address < instr_vram) i++`), so the list
        # MUST be sorted by address. The header stores entries grouped by the
        # order the loader applied them in (HI16 next to its LO16 partner, not
        # by address), so sort them here or that walk desyncs and the R_MIPS_26
        # that reconstructs an overlay-local `jal` is never matched -- N64Recomp
        # then reports the raw unrelocated target (`0x800006AC` instead of
        # `0x808006AC`) as "No function found".
        out_relocs.sort(key=lambda r: r["vram"])

        # Normalize function vram to be relative to base_vram. Dedupe by vram
        # so a symbol that is both `type:func` and an `_entrypoint_N` alias does
        # not produce two functions at the same address.
        out_funcs = []
        seen_vram = set()
        for f in sorted(funcs, key=lambda x: (x["vram"], x["name"])):
            if f["vram"] in seen_vram:
                continue
            seen_vram.add(f["vram"])
            out_funcs.append(
                {"name": f["name"], "vram": f["vram"], "size": f["size"]}
            )
        # Recover the unnamed functions at the head of the code segment.
        #
        # The section base is the overlay's link base, so the section now spans
        # the bytes before the first *named* function. In 154 overlays those
        # bytes are code (up to 0xCC0 of it) that no symbol covers; the runtime
        # reaches it through relocated pointer tables, so without an entry in
        # the function list `get_function` aborts on the first such call.
        if out_funcs:
            head_end = code_rom + min(out_funcs[0]["vram"] - base_vram, size)
            for index, (start_rom, length) in enumerate(
                    detect_gap_functions(rom_data, code_rom, head_end) or ()):
                vram = base_vram + (start_rom - code_rom)
                out_funcs.insert(index, {
                    "name": f"func_{vram:08X}_{name}",
                    "vram": vram,
                    "size": length,
                })
                RECOVERED["overlay_heads"] += 1
        # infer sizes
        sec_end = base_vram + size
        for i, f in enumerate(out_funcs):
            if f["size"] is None:
                if i + 1 < len(out_funcs):
                    f["size"] = out_funcs[i + 1]["vram"] - f["vram"]
                else:
                    f["size"] = sec_end - f["vram"]
        # No function may extend past the section end, or N64Recomp would
        # decode trailing .rodata as instructions.
        out_funcs = [f for f in out_funcs if f["vram"] < sec_end]
        for i, f in enumerate(out_funcs):
            limit = (out_funcs[i + 1]["vram"] if i + 1 < len(out_funcs)
                     else sec_end)
            if f["vram"] + f["size"] > limit:
                f["size"] = limit - f["vram"]

        # Split the functions the overlay's own pointer tables point into.
        #
        # A function whose only reference is a pointer in the overlay's data is
        # invisible to the decomp, and sizing its predecessor by "next named
        # symbol" swallows it. The pointer list decoded from the overlay header
        # says exactly which offsets the game calls, and the guards in
        # `overlay_pointer_function_starts` keep a jump table's case bodies --
        # which look identical -- from being split out of their dispatcher.
        #
        # The overlay's export table is passed alongside it: the decomp's
        # `_entrypoint_N` symbols are incomplete, so an exported function the
        # decomp never named is reachable only from that table.
        exported = set(ovl_relocs.get(name, {}).get("entrypoint_offsets", ()))
        extra_starts = overlay_pointer_function_starts(
            rom_data, code_rom, size,
            ovl_relocs.get(name, {}).get("code_pointers", ()), out_funcs,
            ovl_relocs.get(name, {}).get("relocs", ()),
            ovl_relocs.get(name, {}).get("entrypoint_offsets", ()))
        if extra_starts:
            for offset in extra_starts:
                vram = base_vram + offset
                out_funcs.append({
                    "name": f"func_{vram:08X}_{name}",
                    "vram": vram,
                    "size": None,
                })
                RECOVERED["export_tables" if offset in exported else
                          "pointer_tables"] += 1
            out_funcs.sort(key=lambda f: f["vram"])
            # New starts cut the functions that contained them short.
            for i, f in enumerate(out_funcs):
                limit = (out_funcs[i + 1]["vram"] if i + 1 < len(out_funcs)
                         else sec_end)
                if f["size"] is None or f["vram"] + f["size"] > limit:
                    f["size"] = limit - f["vram"]

        # Sizing by "next function start" swallows any data sitting in the gap
        # between two functions. Overlays commonly place jump tables there: the
        # table is referenced by one function (via HI16/LO16 relocs) but lives
        # inside a *different* function's address range. N64Recomp only detects
        # jump tables it can resolve to a constant base, so a reloc-based table
        # is not recognised and its words get decoded linearly. Most decode to
        # harmless dead instructions after the function's `jr $ra`, but some
        # (e.g. 0x000000E8) are INVALID and fail the whole function.
        #
        # The table is ROM data that the overlay loader copies into RDRAM at
        # runtime, so the recompiler does not need to emit it -- it only must
        # not decode it. If the words after the function's last `jr $ra` delay
        # slot contain an undecodable instruction, trim the function back to
        # that terminator.
        for f in out_funcs:
            start_off = code_rom + (f["vram"] - base_vram)
            n_words = f["size"] // 4
            if n_words < 3:
                continue
            words = [
                struct.unpack_from(">I", rom_data, start_off + i * 4)[0]
                for i in range(n_words)
            ]
            last_jr = -1
            for i, w in enumerate(words):
                if w == 0x03E00008:  # jr $ra
                    last_jr = i
            if last_jr < 0 or last_jr + 2 >= len(words):
                continue
            has_invalid = False
            for i in range(last_jr + 2, len(words)):
                if not rabbitizer.Instruction(words[i]).isValid():
                    has_invalid = True
                    break
            if has_invalid:
                f["size"] = (last_jr + 2) * 4

        unique_names(out_funcs)

        sections.append(
            {
                "name": f".ovl_{name}",
                "rom": code_rom,
                "vram": base_vram,
                "size": size,
                "functions": out_funcs,
                "relocs": out_relocs,
            }
        )

    # --- Emit TOML. ---
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    with open(OUT, "w", encoding="utf-8") as out:
        out.write("# Autogenerated for Banjo-Tooie (USA) via gen_syms_toml.py\n")
        for sec in sections:
            out.write("[[section]]\n")
            out.write(f'name = "{sec["name"]}"\n')
            out.write(f'rom = 0x{sec["rom"]:08X}\n')
            out.write(f'vram = 0x{sec["vram"]:08X}\n')
            out.write(f'size = 0x{sec["size"]:08X}\n')
            out.write("functions = [\n")
            for f in sec["functions"]:
                out.write(
                    f'    {{ name = "{f["name"]}", vram = 0x{f["vram"]:08X}, size = 0x{f["size"]:X} }},\n'
                )
            out.write("]\n")
            if sec["relocs"]:
                out.write("relocs = [\n")
                for r in sec["relocs"]:
                    out.write(
                        f'    {{ vram = 0x{r["vram"]:08X}, target_vram = 0x{r["target_vram"]:08X}, type = "{r["type"]}" }},\n'
                    )
                out.write("]\n")
            elif sec["name"].startswith(".ovl_"):
                # N64Recomp marks a section relocatable only when a `relocs`
                # array is present (config.cpp: `relocs_value.is_array()`), and
                # only relocatable sections are registered in
                # `relocatable_section_indices`. An overlay with no relocs still
                # needs a section-index entry for `overlay_sections_by_index`,
                # so emit an empty array to keep it relocatable.
                out.write("relocs = [\n]\n")
            out.write("\n")

    total_funcs = sum(len(s["functions"]) for s in sections)
    total_relocs = sum(len(s["relocs"]) for s in sections)
    print(f"Wrote {OUT}")
    print(f"  sections: {len(sections)}  functions: {total_funcs}  relocs: {total_relocs}")
    print(
        f"  core1 funcs: {len(core1_funcs)}  core2 funcs: {len(core2_funcs)}  boot funcs: {len(boot_funcs)}  overlay sections: {len(by_seg)}"
    )
    print(
        "  recovered (unnamed in the decomp): "
        f"{RECOVERED['pointer_tables']} from data pointer tables, "
        f"{RECOVERED['export_tables']} from export tables, "
        f"{RECOVERED['overlay_heads']} at overlay heads, "
        f"{RECOVERED['core_gaps']} in core gaps"
    )

    # Emit the relocatable-sections list in `overlays.us.toml` order. N64Recomp
    # reads this via `relocatable_sections_path` and turns it into
    # `overlay_sections_by_index`, which the runtime indexes by (overlay_id - 1).
    # Empty overlay blocks become `*` (mapped to -1). Order is critical: it must
    # match the game's overlay ids, i.e. the block order in overlays.us.toml.
    section_names = {s["name"] for s in sections}
    lines = []
    missing_sections = []
    for o in ovl_defs:
        if o["empty"] or not o["name"]:
            lines.append("*")
        else:
            nm = f".ovl_{o['name']}"
            lines.append(nm)
            if nm not in section_names:
                missing_sections.append(o["name"])
    sections_out = os.path.join(ROOT, "build", "sections.txt")
    with open(sections_out, "w", encoding="utf-8") as f:
        f.write("\n".join(lines) + "\n")
    print(f"Wrote {sections_out}  ({len(lines)} entries, "
          f"{sum(1 for x in lines if x == '*')} empty)")
    if missing_sections:
        print(f"  WARNING: named overlays with no section: {missing_sections}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
