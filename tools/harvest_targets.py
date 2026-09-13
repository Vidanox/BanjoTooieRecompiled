#!/usr/bin/env python3
"""
Statically harvest every function start that the core/boot segments need.

The jal-target detector misses functions that are only reached via computed
jumps (jump tables), tail branches, or calls from overlays. This walks all
core1/core2/boot text plus all overlay text, collecting:
  - every `jal` target (direct calls)
  - every `j`/`b` (unconditional branch) target
  - every conditional-branch target

and adds the ones that fall inside the core1/core2/boot segments to
build/force_keep.txt so the symbol generator creates functions there.

Overlay text is located via the decomp's committed ovl_symbol rom offsets, so we
don't need section info here.
"""
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
DECOMP = os.path.join(ROOT, "decomp")
ROM = os.path.join(ROOT, "build", "decompressed.us.z64")
KEEP = os.path.join(ROOT, "build", "force_keep.txt")

# Static segments (decompressed rom ranges).
BOOT = (0x1050, 0x50E0, 0x80000450)
CORE1 = (0x1E29B60, 0x1E5AEB0, 0x80012030)
CORE2 = (0x1E5AEB0, 0x1F00020, 0x800815C0)

OVERLAY_VRAM = 0x80800000


def be32(b, o):
    return struct.unpack_from(">I", b, o)[0]


def targets_in_region(rom, rom_lo, rom_hi, vram_lo):
    """Yield direct `jal`/`j` targets in [rom_lo, rom_hi).

    `jal` targets are genuine function starts. `j` (unconditional) targets catch
    tail-called functions. Conditional branches are excluded (they frequently
    target data or mid-function tails, producing bogus functions)."""
    out = set()
    for off in range(rom_lo, rom_hi - 4, 4):
        w = be32(rom, off)
        op = w >> 26
        if op == 0x2 or op == 0x3:  # j / jal
            cur_vram = vram_lo + (off - rom_lo)
            t = ((w & 0x03FFFFFF) << 2) | (cur_vram & 0xF0000000)
            out.add(t)
    return out


def overlay_ranges():
    """Return list of (code_rom, code_vram) for every overlay, from ovl_symbol."""
    rng = []
    seen = set()
    sym_re = re.compile(r"^\S+\s*=\s*(0x[0-9A-Fa-f]+);.*segment:(\S+)\s+rom:(0x[0-9A-Fa-f]+)")
    for line in open(os.path.join(DECOMP, "ovl_symbol_addrs.us.txt"), encoding="utf-8"):
        m = sym_re.match(line.strip())
        if not m:
            continue
        vram = int(m.group(1), 16)
        rom = int(m.group(3), 16)
        if rom in seen:
            continue
        seen.add(rom)
        rng.append((rom, vram))
    return rng


def main():
    rom = open(ROM, "rb").read()
    targets = set()

    # Static segments.
    for rom_lo, rom_hi, vram_lo in (BOOT, CORE1, CORE2):
        targets |= targets_in_region(rom, rom_lo, rom_hi, vram_lo)

    # Overlay code is deliberately NOT scanned for jal targets.
    #
    # Overlay `jal`/`j` fields are NOT absolute core/boot addresses.
    #
    # Tooie stores overlay call targets UNRELOCATED -- a raw field of 0x478
    # means 0x80800478 (this overlay), not 0x80000478 (boot). See the R_MIPS_26
    # handling in the N64Recomp patch notes in AGENTS.md.
    #
    # Harvesting them as absolute produced phantom function starts all over
    # boot/core1: 610 of 619 unresolved jal targets in one run had no caller in
    # any code region at all. Forcing those addresses split real core functions
    # mid-body, and because they can never resolve, the driver looped and then
    # mass-stubbed ~1900 functions.
    #
    # Cross-overlay/overlay->core calls are resolved from the decomp's reloc
    # files instead (ovl_reloc_addrs.us.txt), which carry the real targets, so
    # nothing is lost by skipping them here.

    # Keep only targets that land inside the static core/boot segments.
    keep = set()
    for t in targets:
        if 0x80000450 <= t < 0x800815C0 + (0x1F00020 - 0x1E5AEB0):
            # within boot/core1/core2 vram window
            if (0x80000450 <= t < 0x80000450 + (0x50E0 - 0x1050)) or \
               (0x80012030 <= t < 0x800815C0) or \
               (0x800815C0 <= t < 0x800815C0 + (0x1F00020 - 0x1E5AEB0)):
                keep.add(t)

    with open(KEEP, "w") as f:
        for t in sorted(keep):
            f.write(f"0x{t:08X}\n")
    print(f"harvested {len(keep)} forced function starts -> {KEEP}")


if __name__ == "__main__":
    main()
