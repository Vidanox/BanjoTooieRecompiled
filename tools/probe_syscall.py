#!/usr/bin/env python3
"""Diagnostic: decode Banjo-Tooie's overlay syscall thunk mechanism.

Not part of the build pipeline. Documents how `syscall_handler` (0x80081E74)
turns a `syscall <code>; addi $t0, $zero, K` pair into an overlay entrypoint
call, which is what the runtime's `recomp_syscall_handler` has to reproduce.
"""
import re
import struct
import collections

ROM = "build/decompressed.us.z64"
CORE2_ROM, CORE2_VRAM = 0x1E5AEB0, 0x800815C0
CORE1_ROM, CORE1_VRAM = 0x1E29B60, 0x80012030


def rom_off(v):
    if CORE1_VRAM <= v < CORE2_VRAM:
        return CORE1_ROM + (v - CORE1_VRAM)
    if CORE2_VRAM <= v < 0x80200000:
        return CORE2_ROM + (v - CORE2_VRAM)
    return None


def main():
    d = open(ROM, "rb").read()

    def w32(v):
        return struct.unpack_from(">I", d, rom_off(v))[0]

    print("=== overlay_syscalls table @ 0x80082540 (first 6 thunks) ===")
    for i in range(6):
        v = 0x80082540 + i * 8
        a, b = struct.unpack_from(">II", d, rom_off(v))
        code = (a >> 6) & 0xFFFFF
        print(f"  0x{v:08X}: {a:08X} {b:08X}   syscall_code={code:<4} K={b & 0xFFFF}")

    print()
    print("=== templates used by func_80081F64 to patch the loaded overlay ===")
    for v in (0x80081E00, 0x80081E04, 0x80081E08, 0x80081E0C, 0x80081E10,
              0x80081E18):
        print(f"  0x{v:08X}: {w32(v):08X}")

    # Relationship between the thunk address and its index.
    syms = {}
    for line in open("decomp/syscall_symbol_addrs.us.txt"):
        m = re.match(r"\s*(\S+)\s*=\s*(0x[0-9A-Fa-f]+)", line)
        if m:
            syms[m.group(1)] = int(m.group(2), 16)

    base = syms["overlay_syscalls"]
    print()
    print(f"=== thunk address arithmetic (base overlay_syscalls=0x{base:08X}) ===")
    ok = 0
    tot = 0
    for n, v in syms.items():
        if not re.match(r"_(.+)_entrypoint_(\d+)$", n):
            continue
        tot += 1
        ok += (v - base) % 8 == 0
    print(f"  thunks 8-byte aligned from base: {ok}/{tot}")

    # syscall_handler reads halfwords at $t0+4 and $t0+6, i.e. the low half of
    # the *second* word (the addi immediate) and beyond. Confirm the layout the
    # handler assumes.
    print()
    print("=== what syscall_handler reads ===")
    print("  lw   $t1, 0x0($t0)   -> first word of thunk (the syscall itself)")
    print("  lh   $t1, 0x6($t0)   -> low half of second word = K")
    print("  lh   $t1, 0x4($t0)   -> high half of second word = opcode/rt field")
    print("  a0 = (word0 << 7) >> 13   = bits 12..25 of the syscall word")
    print("  a1 = (word0 << 6) >> 31   = bit 25 of the syscall word")
    print("  a3 = ($t0 - 2*K - overlay_syscalls) >> 3   = thunk index")

    # Verify a0/a1/a3 decode against known thunks.
    print()
    print("=== decoded fields for sample thunks ===")
    inv = {v: n for n, v in syms.items()}
    shown = 0
    for n, v in sorted(syms.items(), key=lambda kv: kv[1]):
        if not re.match(r"_(.+)_entrypoint_(\d+)$", n):
            continue
        w0, w1 = struct.unpack_from(">II", d, rom_off(v))
        a0 = ((w0 << 7) & 0xFFFFFFFF) >> 13
        a1 = ((w0 << 6) & 0xFFFFFFFF) >> 31
        K = w1 & 0xFFFF
        a3 = (v - 2 * K - base) >> 3
        print(f"  {n:34} a0={a0:<5} a1={a1} K={K:<5} idx={a3}")
        shown += 1
        if shown >= 8:
            break

    # Does a0 equal the syscall code, and a3 the overlay index?
    print()
    agree_a0 = 0
    tot2 = 0
    a3_by_ovl = collections.defaultdict(set)
    for n, v in syms.items():
        m = re.match(r"_(.+)_entrypoint_(\d+)$", n)
        if not m:
            continue
        w0, w1 = struct.unpack_from(">II", d, rom_off(v))
        code = (w0 >> 6) & 0xFFFFF
        a0 = ((w0 << 7) & 0xFFFFFFFF) >> 13
        K = w1 & 0xFFFF
        tot2 += 1
        agree_a0 += a0 == code
        a3_by_ovl[m.group(1)].add((v - 2 * K - base) >> 3)
    print(f"a0 == syscall code            : {agree_a0}/{tot2}")
    same = sum(1 for s in a3_by_ovl.values() if len(s) == 1)
    print(f"a3 constant per overlay       : {same}/{len(a3_by_ovl)}")


if __name__ == "__main__":
    main()
