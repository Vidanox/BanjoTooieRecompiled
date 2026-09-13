#!/usr/bin/env python3
"""
Detect MIPS function boundaries in a code segment of a big-endian MIPS ROM.

This mirrors the approach splat/spimdisasm uses to find functions:
  1. Seed function starts with every `jal` (jump-and-link) target inside the
     segment, plus the segment start.
  2. Sort the candidate starts and walk forward from each one, scanning for a
     function end (`jr $ra` followed by its delay slot), to find the function's
     extent.
  3. Any start that falls inside a previous function's extent is discarded.
  4. Trailing zero padding at the end of a function is trimmed.

The result is a list of (vram, size) covering the executable text of the
segment. Data embedded between functions (jump tables) is left attached to the
preceding function's tail, which is harmless for recompilation (N64Recomp only
decodes the instructions; trailing words that are data simply decode to
unreached no-ops / are trimmed by the all-zero rule).
"""

import struct


def be32(b, off):
    return struct.unpack_from(">I", b, off)[0]


def is_plausible_function_start(words, idx):
    """True if `words[idx]` looks like a function start rather than the middle
    of a larger function.

    A real start is normally reached by control flow, so the word before it --
    skipping alignment `nop`s and allowing one delay slot -- is a function
    terminator (`jr $ra`, `j`, or an unconditional `b`). If instead the
    preceding bytes are ordinary fall-through instructions, this candidate is
    really the middle of a larger function, and forcing it would split that
    function in half.

    Shared by `detect_functions`, `autostub.py` and `keep_loop.py` so the
    address a bring-up pass validates is exactly the one the generator accepts.
    """
    if idx <= 0:
        return False
    j = idx - 1
    # Functions are frequently padded to a 16-byte boundary, so the word before
    # a start is often an alignment `nop`; a fixed 2-word lookback would stop on
    # it and wrongly reject the start (this regressed 1934 functions once).
    while j >= 0 and words[j] == 0:
        j -= 1

    for back in range(0, 2):
        k = j - back
        if k < 0:
            break
        # A branch/jump immediately before the candidate makes the candidate its
        # delay slot -- part of the current function, never a start. This split
        # boot_huft_build at 0x800011EC, the delay slot of `j func_800011F8`.
        # Still check idx-2: a terminator there with a non-nop delay slot is a
        # legitimate boundary.
        if k == idx - 1:
            continue
        pw = words[k]
        # Any `jr $reg` ends a function's straight-line flow. `jr $ra` is the
        # normal return, but Tooie's software-FPU trampolines return through a
        # scratch register (`or $a3, $ra, $zero` ... `jr $a3`), and without this
        # the function after one (0x80013A7C, reached from an FPU op table) is
        # never recognised and its code is swallowed by the previous function.
        if (pw >> 26) == 0 and (pw & 0x3F) == 8 and ((pw >> 21) & 0x1F) != 0:
            return True
        op = pw >> 26
        # `j`, or an unconditional `b` (= `beq $zero, $zero, offset`).
        #
        # This used to test `pw == 0x10000000`, which only matches a `b` whose
        # branch offset happens to be 0. Of the 4852 unconditional branches in
        # boot/core1/core2, exactly 5 have offset 0, so the test missed 99.9% of
        # them and rejected every forced start that followed one. The offset is
        # the low 16 bits and must be ignored; what identifies the instruction
        # is opcode BEQ with both register fields == $zero.
        is_b = op == 0x4 and ((pw >> 21) & 0x1F) == 0 and ((pw >> 16) & 0x1F) == 0
        if op == 0x2 or is_b:
            return True
    return False


def branch_target_index(word, idx):
    """Word index a conditional branch at `idx` targets, or None.

    Covers the MIPS conditional branches: REGIMM (`bltz`/`bgez`/`bltzal`/
    `bgezal`, including the likely and link forms), `beq`/`bne`/`blez`/`bgtz`,
    and the COP1 branches (`bc1f`/`bc1t`/`bc1fl`/`bc1tl`). Unconditional `j` and
    `jal` are deliberately excluded -- a `j` can be a tail call into a different
    function, so following it would merge two functions into one.
    """
    op = word >> 26
    rt = (word >> 16) & 0x1F
    if op == 0x1:
        # REGIMM: only the branch encodings; rt 8..15 are traps.
        if rt not in (0x0, 0x1, 0x2, 0x3, 0x10, 0x11, 0x12, 0x13):
            return None
    elif op in (0x4, 0x5, 0x6, 0x7):
        pass
    elif op == 0x11 and ((word >> 21) & 0x1F) == 8:
        pass  # bc1*
    else:
        return None
    offset = word & 0xFFFF
    if offset & 0x8000:
        offset -= 0x10000
    return idx + 1 + offset

def grow_over_branch_targets(words, next_end, s_idx, end_idx, limit_idx):
    """Grow a function's extent to cover the targets of its own branches.

    A function's straight-line extent ends at its first `jr $ra`, but IDO emits
    a switch's case bodies *after* the `jr $reg` that dispatches them, so that
    first `jr $ra` is the first case body's return, not the function's. The
    bounds check preceding the dispatch (`sltiu $at, $a0, N` / `beqz $at,
    <default>`) targets the code after the last case body, so the real end is
    recoverable from the function's own control flow: cover any branch target
    that lies past the extent, then repeat, since the newly covered code may
    branch further.

    `func_800D0820` is the case that made this necessary: a 9-entry switch whose
    case bodies run 0x800D0844..0x800D088C. Cut at the first case body's `jr
    $ra` (0x800D084C), the function was 0x2C bytes, every jump table entry but
    the first fell outside it, and the emitted switch had a single case -- so
    the game aborted with `Switch-case out of bounds`.

    Bounded by `limit_idx` (the next detected function start), so a function can
    never swallow its neighbour. Measured over .core1 and .core2: 100 functions
    grow (9,104 bytes), every grown region decodes as valid instructions, and no
    grown region contains a detected function start.
    """
    changed = True
    while changed:
        changed = False
        for k in range(s_idx, end_idx):
            target_idx = branch_target_index(words[k], k)
            if target_idx is None or not (end_idx < target_idx < limit_idx):
                continue
            # The target is a label inside the function: cover its whole
            # straight-line run, not just the first word.
            new_end = min(next_end[target_idx], limit_idx)
            if new_end > end_idx:
                end_idx = new_end
                changed = True
    return end_idx

def ends_on_terminator(words, s_idx, end_idx):
    """True if the straight-line flow of `words[s_idx:end_idx]` actually ends.

    The last two words are examined because a terminator may be followed by its
    delay slot (`b L; nop`), in which case the terminator is the second-to-last
    word. A conditional branch as the final instruction does *not* count: its
    delay slot is followed by the fall-through path, so the function continues
    past its declared end.
    """
    for i in range(max(s_idx, end_idx - 2), end_idx):
        w = words[i]
        op = w >> 26
        if op == 0 and (w & 0x3F) == 8 and ((w >> 21) & 0x1F) != 0:
            return True  # jr $reg
        if op == 2:
            return True  # j
        if op == 4 and ((w >> 21) & 0x1F) == 0 and ((w >> 16) & 0x1F) == 0:
            return True  # b (beq $zero, $zero)
    return False


def drop_stolen_successors(words, funcs, seg_vram):
    """Start addresses of functions that are really the tail of their predecessor.

    A function whose declared extent ends without a terminator cannot end there:
    its flow continues past the boundary. When it also branches into the
    *interior* of the function that starts exactly at that boundary, the
    boundary is provably not a function start -- the two are one body, cut in
    half because something forced the second address as a start.

    A branch to the successor's *entry* counts too: the successor of an
    unterminated extent is reached by that fall-through as well, so its entry is
    shared code, not a separate entry point. `func_800C33DC` is the case that
    made this necessary. The ROM holds one function 0x800C33DC..0x800C3410 --
    prologue `addiu $sp, $sp, -0x18`, shared epilogue `lw $ra, 0x14($sp);
    addiu $sp, $sp, 0x18; jr $ra` at 0x800C3408 -- and its body ends at
    0x800C3404 on an `sb`, falling into that epilogue. 0x800C3408 was in
    `force_keep` anyway, harvested as a `jal` target from a *data* table at
    ROM 0x1E59328 (word 0x0C030D02 among halfwords 0x0C03/0x0D02/0x0E01), which
    is the same phantom-start pathology `harvest_targets.py` stopped producing
    for overlay code. Because a forced start that doubles as a `jal` target is
    trusted unconditionally, nothing else could reject it; N64Recomp then
    emitted `func_800C33DC` with no epilogue at all, so it returned without
    restoring `$sp` and leaked 0x18 on every call. That eventually put a float
    constant into a caller's frame slot and crashed the intro cutscene.

    `func_800FFECC` is the other case, the one that made this necessary in the
    first place. The ROM holds one function 0x800FFECC..0x80100074 -- prologue
    `addiu $sp, $sp, -0x38`, shared epilogue `addiu $sp, $sp, 0x38; jr $ra` at
    0x80100068 -- but a `jal 0x80100000` decoded out of a float table at
    0x8012419C (`0x0C040000` among words like `0x00660066`) had forced
    0x80100000 as a start. That split the function, and N64Recomp turned the
    branch targets at 0x8010001C / 0x80100024 / 0x8010004C into *static*
    functions; the early-exit path through `static_3_80100024` never restores
    `$sp`, so the caller (`chanim_entrypoint_7`, via `func_80100074`) then read
    `$a0` from the wrong stack slot, got 0, and dereferenced a null object
    table.

    A `jal` target is otherwise trusted, and this deliberately overrides that:
    the measurement is that of 86 adjacent cases where a function branches into
    its successor's interior, exactly one leaves its own extent unterminated,
    and in that one the successor is not callable (its body requires the
    caller's 0x38-byte frame, so no call site can legitimately enter it). The
    other 85 end on a terminator -- a tail jump into a shared snippet of a
    function that is itself called -- and are left alone. Widening the test from
    `b_idx < target < b_end` to `b_idx <= target < b_end` adds exactly one case
    across core1 and core2: this one.
    """
    drops = []
    for i in range(len(funcs) - 1):
        a, b = funcs[i], funcs[i + 1]
        if a["vram"] + a["size"] != b["vram"]:
            continue
        s_idx = (a["vram"] - seg_vram) // 4
        end_idx = s_idx + a["size"] // 4
        if ends_on_terminator(words, s_idx, end_idx):
            continue
        b_idx = (b["vram"] - seg_vram) // 4
        b_end = b_idx + b["size"] // 4
        for k in range(s_idx, end_idx):
            target_idx = branch_target_index(words[k], k)
            if target_idx is not None and b_idx <= target_idx < b_end:
                drops.append(b["vram"])
                break
    return drops


def _build_functions(words, starts, seg_vram, extra_set, n_words, next_end):
    funcs = []
    n_starts = len(starts)
    for k, s in enumerate(starts):
        s_idx = (s - seg_vram) // 4
        next_start_idx = (
            (starts[k + 1] - seg_vram) // 4 if k + 1 < n_starts else n_words
        )
        end_idx = min(next_end[s_idx], next_start_idx)
        # trim trailing zeros
        while end_idx > s_idx and words[end_idx - 1] == 0:
            end_idx -= 1
        if end_idx <= s_idx:
            continue
        # Reject candidates that start on padding/data rather than code. The
        # zero-fill regions between segments would otherwise become bogus
        # functions full of invalid instructions.
        #
        # A leading zero word alone isn't proof of padding: some real call
        # targets sit just after an alignment word. Only reject when the run of
        # zeros looks like actual fill, i.e. there's no real instruction within
        # the first few words. If code appears shortly after, advance the start
        # past the padding and keep the function.
        if words[s_idx] == 0:
            # An explicitly forced start comes from a real jal/branch target, so
            # the function does begin here -- a leading 0x00000000 is simply a
            # `nop`. Keep it at this exact address; moving the start would leave
            # the call unresolved. Only unforced candidates are treated as fill.
            if s not in extra_set:
                continue
            probe = s_idx
            limit = min(s_idx + 4, end_idx)
            while probe < limit and words[probe] == 0:
                probe += 1
            if probe >= limit:
                continue  # genuine zero fill, no code follows
        end_idx = grow_over_branch_targets(
            words, next_end, s_idx, end_idx, next_start_idx
        )
        funcs.append({"vram": s, "size": (end_idx - s_idx) * 4})
    return funcs


def detect_functions(rom, seg_rom, seg_vram, seg_size, extra_starts=()):
    """
    rom: bytes of the whole ROM.
    seg_rom: rom offset of the segment.
    seg_vram: vram of the segment.
    seg_size: byte size of the segment.
    extra_starts: iterable of additional vram addresses forced as function
        starts (recovers functions the jal-target heuristic misses).
    Returns a list of dicts {vram, size} sorted by vram.
    """
    n_words = seg_size // 4
    words = [struct.unpack_from(">I", rom, seg_rom + i * 4)[0] for i in range(n_words)]

    lo = seg_vram
    hi = seg_vram + seg_size

    # Pass 1: candidate function starts (jal targets + segment start).
    starts = {seg_vram}
    jal_targets = set()
    for i, w in enumerate(words):
        if (w >> 26) == 0x3:  # JAL
            target = ((w & 0x03FFFFFF) << 2) | (seg_vram & 0xF0000000)
            if lo <= target < hi:
                starts.add(target)
                jal_targets.add(target)

    # Forced extra starts (from a previous recompilation pass).
    for s in extra_starts:
        if lo <= s < hi:
            starts.add(s)

    starts = sorted(starts)

    # Pass 1b: drop candidate starts that are clearly the fall-through of the
    # preceding candidate function. A real function start is normally reached by
    # control flow, so the word right before it (skipping alignment nops and
    # allowing one delay slot) is a `jr $ra`, a `j`, or an unconditional `b`. If
    # instead the preceding bytes are ordinary fall-through instructions, this
    # "function start" is really the middle of a larger function.
    #
    # Forced starts are trusted, EXCEPT when they are merely the target of an
    # intra-function `j`. harvest_targets.py seeds force_keep from both `jal`
    # and `j`, because `j` catches tail-called functions -- but `j` is equally
    # used for plain intra-function jumps (e.g. two arms of an if/else jumping
    # to a shared epilogue). Such a target is NOT a function start, and forcing
    # one splits a real function in half: the first half then ends on a `jal`
    # whose delay slot was cut away, emitting `goto after_N` with no label.
    #
    # So a forced start still has to pass the "preceded by jr $ra / j / b"
    # check unless it is independently confirmed by being a `jal` target.
    extra_set = {s for s in extra_starts if lo <= s < hi}
    trusted = extra_set & jal_targets
    good_starts = []
    for s in starts:
        idx = (s - seg_vram) // 4
        if idx == 0 or s in trusted:
            good_starts.append(s)
            continue
        if is_plausible_function_start(words, idx):
            good_starts.append(s)
    # NB: union with `trusted`, not `extra_set` -- re-adding every forced start
    # here would undo the mid-function filtering done just above.
    starts = sorted(set(good_starts) | {seg_vram} | trusted)

    # Precompute, for every word index, the index just past the next
    # `jr $ra`(+delay slot). Built in one reverse sweep -> O(n).
    next_end = [n_words] * (n_words + 1)
    last = n_words
    for i in range(n_words - 1, -1, -1):
        if words[i] == 0x03E00008:  # jr $ra
            last = min(i + 2, n_words)
        next_end[i] = last

    # Pass 2: emit functions, capping each function's extent at the next
    # function start so we never run into a neighbouring function. Repeated
    # because dropping a boundary can expose another (a chain of cuts).
    while True:
        funcs = _build_functions(words, starts, seg_vram, extra_set, n_words,
                                 next_end)
        drops = set(drop_stolen_successors(words, funcs, seg_vram))
        if not drops:
            return funcs
        starts = [s for s in starts if s not in drops]


    return funcs
