"""Rebuild build/force_keep.txt from scratch, validated.

Background
----------
force_keep.txt is accumulated state: it grew across many autostub runs and
cannot be fully regenerated from harvest_targets.py alone, because the driver
also discovers starts that no `jal` points at (functions only entered by a
tail-call `j`, e.g. 0x80002208 in boot).

The old file was also poisoned: harvest_targets.py used to decode OVERLAY code
and treat the raw `jal` field as an absolute address. Overlay call targets are
stored unrelocated, so raw 0x478 became "0x80000478" (boot) instead of
0x80800478. ~2590 such phantom entries existed; forcing them split real core
functions mid-body and drove the recompiler into mass-stubbing.

This script rebuilds the file deterministically as the union of:

  1. harvest_targets.py output  -- every j/jal target inside boot/core1/core2
     that is decoded from real (non-overlay) code.

  2. Validated survivors of the previous file -- addresses that are NOT
     harvest targets but still look like genuine function starts, i.e. the
     preceding instruction (skipping alignment nops) is `jr $ra`, `j`, or `b`.
     This recovers tail-call-only entry points without re-importing phantoms.

Every candidate must additionally live inside a known code segment.
"""
import os
import struct
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
ROM = os.path.join(ROOT, "build", "decompressed.us.z64")
KEEP = os.path.join(ROOT, "build", "force_keep.txt")

# (rom_lo, vram_lo, vram_hi)
SEGS = [
    (0x1000, 0x80000400, 0x800050E0 - 0x400),
    (0x1E29B60, 0x80012030, 0x800815C0),
    (0x1E5AEB0, 0x800815C0, 0x80200000),
]


def rom_for(vram):
    for rom, lo, hi in SEGS:
        if lo <= vram < hi:
            return rom + (vram - lo)
    return None


def looks_like_start(data, vram):
    """True if the word before `vram` (skipping nops) ends a function."""
    r = rom_for(vram)
    if r is None or r < 8:
        return False
    j = r - 4
    while j > 0 and struct.unpack_from(">I", data, j)[0] == 0:
        j -= 4
    for back in range(0, 2):
        k = j - 4 * back
        if k < 0:
            break
        w = struct.unpack_from(">I", data, k)[0]
        if w == 0x03E00008:          # jr $ra
            return True
        op = w >> 26
        if op == 0x2 or w == 0x10000000:  # j / b
            return True
    return False


def main():
    prev = set()
    if os.path.exists(KEEP):
        prev = {int(l.strip(), 16) for l in open(KEEP) if l.strip()}

    # 1. Fresh harvest (overwrites KEEP).
    subprocess.run([sys.executable, os.path.join(HERE, "harvest_targets.py")],
                   cwd=ROOT, check=True, capture_output=True)
    harvested = {int(l.strip(), 16) for l in open(KEEP) if l.strip()}

    # 2. Validated survivors from the previous file.
    data = open(ROM, "rb").read()
    recovered = set()
    for v in sorted(prev - harvested):
        if rom_for(v) is None:
            continue
        if looks_like_start(data, v):
            recovered.add(v)

    final = sorted(harvested | recovered)
    with open(KEEP, "w") as f:
        for v in final:
            f.write("0x%08X\n" % v)

    print("previous entries : %d" % len(prev))
    print("harvested        : %d" % len(harvested))
    print("recovered (valid): %d" % len(recovered))
    print("dropped          : %d" % len(prev - harvested - recovered))
    print("final            : %d -> %s" % (len(final), KEEP))


if __name__ == "__main__":
    main()
