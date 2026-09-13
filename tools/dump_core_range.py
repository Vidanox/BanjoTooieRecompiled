"""Disassemble a vram range out of core1/core2 in the decompressed ROM."""
import os
import sys

import rabbitizer

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
ROM = os.path.join(ROOT, "build", "decompressed.us.z64")

# From AGENTS.md "Segment layout".
SEGS = [
    ("core1", 0x1E29B60, 0x80012030, 0x800815C0),
    ("core2", 0x1E5AEB0, 0x800815C0, 0x80200000),
]


def rom_for(vram):
    for name, rom, lo, hi in SEGS:
        if lo <= vram < hi:
            return rom + (vram - lo)
    raise SystemExit("vram 0x%08X not in core1/core2" % vram)


def main(start, end):
    start = int(start, 16)
    end = int(end, 16)
    data = open(ROM, "rb").read()
    for v in range(start, end, 4):
        r = rom_for(v)
        w = int.from_bytes(data[r:r + 4], "big")
        ins = rabbitizer.Instruction(w, vram=v)
        print("0x%08X  %08X  %s" % (v, w, ins.disassemble(None, 0)))


if __name__ == "__main__":
    main(*sys.argv[1:])
