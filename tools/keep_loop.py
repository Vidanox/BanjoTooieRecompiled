#!/usr/bin/env python3
"""Bring-up loop for the Banjo-Tooie recompilation.

    run the exe -> read the last missing-function error -> validate the address
    -> append it to build/force_keep.txt -> regenerate -> recompile -> rebuild
    -> repeat

This is the loop described in AGENTS.md ("Resuming work: the `continue`
protocol"). It is deliberately conservative about what it adds:

  * the address must fall inside a core code section,
  * it must NOT already be inside a generated function (adding one there would
    split that function in half -- see the `force_keep` traps in AGENTS.md),
  * the word before it must be a function terminator (`jr $reg` / `j` /
    unconditional `b`), skipping alignment nops, and must not itself be a
    branch (that would make the candidate the branch's delay slot).

Anything that fails validation stops the loop and prints the evidence, because
the answer is then "look at this by hand", not "add another address".

Usage:
    python -u tools/keep_loop.py [max_iterations]

Note the build goes through build_bt.bat and re-runs the CMake configure step
whenever the set of generated RecompiledFuncs/*.c changes: CMakeLists.txt uses
file(GLOB), so new files are otherwise invisible and the link fails with
`undefined symbol: static_N_...`.
"""
import os
import re
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from detect_functions import (core_section_for, core_section_words,
                              is_plausible_function_start)

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
KEEP = os.path.join(ROOT, "build", "force_keep.txt")
EXE = os.path.join(ROOT, "build-cmake", "BanjoTooieRecompiled.exe")
# The recompiler CLI lives in the lib/ submodule (see README "Dependencies").
RECOMP = os.path.join(ROOT, "lib", "N64Recomp", "build", "N64Recomp.exe")
ROM = os.path.join(ROOT, "build", "decompressed.us.z64")
SYMS = os.path.join(ROOT, "build", "banjotooie.us.syms.toml")
FUNCS_DIR = os.path.join(ROOT, "RecompiledFuncs")


def run(cmd, cwd=ROOT, timeout=600):
    return subprocess.run(cmd, cwd=cwd, shell=True, capture_output=True,
                          text=True, timeout=timeout, errors="ignore")


def read_keep():
    if not os.path.exists(KEEP):
        return []
    out = []
    for line in open(KEEP):
        line = line.strip()
        if line:
            out.append(int(line, 16))
    return out


def generated_core_funcs():
    """[(vram, size)] for every function in the generated core sections."""
    text = open(SYMS, encoding="utf-8").read()
    funcs = []
    for block in text.split("[[section]]"):
        m = re.search(r'name = "(\S+)"', block)
        if not m or not m.group(1).startswith((".boot", ".core")):
            continue
        for fm in re.finditer(
                r'\{ name = "(\w+)", vram = 0x([0-9A-F]+), size = 0x([0-9A-F]+) \}',
                block):
            funcs.append((int(fm.group(2), 16), int(fm.group(3), 16)))
    return funcs


def validate(vram, rom_bytes, funcs):
    """Returns (ok, explanation).

    The start test is the generator's own (`is_plausible_function_start`), so an
    address this accepts is an address `detect_functions` will actually turn
    into a function rather than silently drop.
    """
    section = core_section_for(vram)
    if section is None:
        return False, "address is not inside any core code section"
    if vram % 4:
        return False, "not word-aligned"
    for start, size in funcs:
        if start == vram:
            return False, "already a generated function"
        if start < vram < start + size:
            return False, ("inside generated function 0x%08X (+0x%X)"
                           % (start, vram - start))

    rom, base, size = section
    words = core_section_words(rom_bytes, rom, size)
    idx = (vram - base) // 4
    if not is_plausible_function_start(words, idx):
        prev = words[idx - 1] if idx else None
        return False, ("not preceded by a function terminator (word before is "
                       "0x%08X)" % prev if prev is not None else
                       "no predecessor")
    return True, "preceded by a function terminator"


def c_files():
    return {f for f in os.listdir(FUNCS_DIR) if f.endswith(".c")}


def main():
    max_iters = int(sys.argv[1]) if len(sys.argv) > 1 else 8
    rom_bytes = open(ROM, "rb").read()
    keep = read_keep()
    print("force_keep: %d entries" % len(keep), flush=True)

    for iteration in range(max_iters):
        print("=== iteration %d ===" % iteration, flush=True)
        p = run('"%s" --game bt' % EXE, cwd=ROOT, timeout=180)
        text = (p.stdout or "") + (p.stderr or "")
        errors = re.findall(r"Failed to find function at 0x([0-9A-Fa-f]+)", text)
        if not errors:
            print("no missing-function error; last lines:", flush=True)
            print("\n".join(text.splitlines()[-12:]), flush=True)
            return 0
        vram = int(errors[-1], 16)
        print("missing function 0x%08X" % vram, flush=True)

        ok, why = validate(vram, rom_bytes, generated_core_funcs())
        print("  validation: %s (%s)" % ("ok" if ok else "REJECTED", why), flush=True)
        if not ok:
            print("  stopping; inspect this address by hand", flush=True)
            return 1
        if vram in keep:
            print("  already in force_keep; cannot progress", flush=True)
            return 1

        with open(KEEP, "a") as f:
            f.write("%08X\n" % vram)
        keep.append(vram)

        before = c_files()
        r = run("python -u tools/gen_syms_toml.py", timeout=300)
        print("  gen: " + (r.stdout.strip().splitlines() or [""])[-1], flush=True)
        r = run('"%s" banjotooie.us.toml' % RECOMP, timeout=600)
        if r.returncode != 0:
            print("  recompile FAILED\n" + (r.stderr or "")[-2000:], flush=True)
            return 1
        if r.stderr.strip():
            print("  recompiler stderr:\n" + r.stderr.strip()[-2000:], flush=True)
        if c_files() != before:
            r = run("cmd /c cmake_configure.bat", timeout=600)
            if r.returncode != 0:
                print("  cmake configure FAILED\n" + (r.stdout or "")[-2000:], flush=True)
                return 1
        r = run("cmd /c build_bt.bat", timeout=1800)
        if r.returncode != 0:
            print("  build FAILED\n" + (r.stdout or "")[-3000:], flush=True)
            return 1
        print("  rebuilt ok", flush=True)

    print("iteration cap reached", flush=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
