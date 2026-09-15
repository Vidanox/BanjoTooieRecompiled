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
     harvest targets but still look like genuine function starts. This
     recovers tail-call-only entry points without re-importing phantoms. The
     test is the generator's own (`detect_functions.is_core_function_start`),
     so a survivor is an address `gen_syms_toml.py` will actually turn into a
     function; a local copy of that test is how this tool and the generator
     drifted apart before. It also enforces "inside a known code segment",
     since a vram outside every core segment has no address to check.
"""
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from detect_functions import is_core_function_start

ROOT = os.path.dirname(HERE)
ROM = os.path.join(ROOT, "build", "decompressed.us.z64")
KEEP = os.path.join(ROOT, "build", "force_keep.txt")

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
        if is_core_function_start(data, v):
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
