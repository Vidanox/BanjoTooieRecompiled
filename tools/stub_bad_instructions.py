#!/usr/bin/env python3
"""
Find every function in the symbol map that uses an instruction the recompiler
can't decode (cop0 registers other than Status, the `cache` op, or RSP
coprocessor ops), and add them all to `stubs` in the recomp config in one shot.

This avoids the slow recompile-and-stub-one-at-a-time loop.
"""
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
ROM = os.path.join(ROOT, "build", "decompressed.us.z64")
SYMS = os.path.join(ROOT, "build", "banjotooie.us.syms.toml")
TOML = os.path.join(ROOT, "banjotooie.us.toml")

# Section rom/vram for vram->rom mapping.
SECTIONS = [
    (".entry", 0x1000, 0x80000400, 0x50),
    (".boot", 0x1050, 0x80000450, 0x50E0 - 0x1050),
    (".core1", 0x1E29B60, 0x80012030, 0x1E5AEB0 - 0x1E29B60),
    (".core2", 0x1E5AEB0, 0x800815C0, 0x1F00020 - 0x1E5AEB0),
]

COP0_PROBLEM_REGS = set(range(0, 32)) - {12}  # everything except Status(12)


def vram_to_rom(vram):
    for _, rom, v, size in SECTIONS:
        if v <= vram < v + size:
            return rom + (vram - v)
    return None


def func_uses_bad_instr(rom, vram, size):
    rom_off = vram_to_rom(vram)
    if rom_off is None:
        return False
    for i in range(0, size - 3, 4):
        w = struct.unpack_from(">I", rom, rom_off + i)[0]
        op = w >> 26
        if op == 0x10:  # COP0
            rs = (w >> 21) & 0x1F
            if rs in (0x0, 0x4):  # mfc0 / mtc0
                rd = (w >> 11) & 0x1F
                if rd in COP0_PROBLEM_REGS:
                    return True
        elif op == 0x2F:  # cache
            return True
        elif op == 0x12:  # COP2 (RSP vector ops shouldn't appear in main code)
            return True
    return False


def main():
    rom = open(ROM, "rb").read()
    txt = open(SYMS, encoding="utf-8").read()

    # Parse static-section functions (entry/boot/core1/core2).
    bad = []
    for name, _, _, _ in SECTIONS:
        i = txt.find(f'name = "{name}"')
        if i < 0:
            continue
        start = txt.rfind("[[section]]", 0, i)
        end = txt.find("[[section]]", i)
        sec = txt[start:end if end > 0 else len(txt)]
        for m in re.finditer(
            r'\{ name = "([^"]+)", vram = (0x[0-9A-Fa-f]+), size = (0x[0-9A-Fa-f]+) \}',
            sec,
        ):
            fname = m.group(1)
            vram = int(m.group(2), 16)
            size = int(m.group(3), 16)
            if func_uses_bad_instr(rom, vram, size):
                bad.append(fname)

    # Merge into config stubs.
    cfg = open(TOML, encoding="utf-8").read()
    existing = set(re.findall(r'"([^"]+)"', cfg))
    to_add = [f for f in bad if f not in existing]
    body = "".join(f'    "{f}",\n' for f in to_add)
    cfg = re.sub(
        r"(stubs = \[\n)(.*?)(\n\])",
        lambda m: m.group(1) + m.group(2) + body + m.group(3),
        cfg,
        flags=re.S,
    )
    open(TOML, "w", encoding="utf-8").write(cfg)
    print(f"added {len(to_add)} bad-instruction functions to stubs ({len(bad)} total found)")


if __name__ == "__main__":
    main()
