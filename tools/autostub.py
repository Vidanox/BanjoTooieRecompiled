#!/usr/bin/env python3
"""
Iteratively drive N64Recomp to a clean completion.

Two kinds of errors are handled differently:

* Decode errors (cop0 registers, cache ops, RSP microcode): the function is
  added to `stubs` in the recomp config so it isn't decoded. These are the
  low-level OS functions the runtime reimplements natively.

* Resolution errors ("No function found for jal target" / "Unhandled branch
  ... to 0xXXXXXXXX"): these mean the function-boundary detector missed a real
  function that some other function calls/branches to. We add the missing
  target as an extra forced function start and regenerate the symbol map.
"""
import re
import subprocess
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from detect_functions import is_core_function_start

N64RECOMP = r"C:\Users\bigups\Desktop\banjotooie\N64Recomp\build\N64Recomp.exe"
ROOT = r"C:\Users\bigups\Desktop\banjotooie\BanjoTooieRecomp"
TOML = os.path.join(ROOT, "banjotooie.us.toml")
GEN = os.path.join(ROOT, "tools", "gen_syms_toml.py")
KEEP_FILE = os.path.join(ROOT, "build", "force_keep.txt")

ERR_RE = re.compile(r"^RECOMP_FAILED (\S+)$", re.M)
STALE_STUB_RE = re.compile(
    r"Function (\S+) is stubbed out in the config file but does not exist!"
)
NOFUNC_RE = re.compile(r"No function found for jal target: (0x[0-9A-Fa-f]+)")
UNHANDLED_BRANCH_RE = re.compile(
    r"Unhandled branch in \S+ at 0x[0-9A-Fa-f]+ to (0x[0-9A-Fa-f]+)"
)


def get_stubs(text):
    m = re.search(r"stubs = \[(.*?)\]", text, re.S)
    return re.findall(r'"([^"]+)"', m.group(1)) if m else []


def add_stub(text, fn):
    m = re.search(r"(stubs = \[\n)(.*?)(\n\])", text, re.S)
    body = m.group(2) + f'    "{fn}",\n'
    return text[: m.start()] + m.group(1) + body + m.group(3) + text[m.end() :]


def remove_stub(text, fn):
    """Drop a stub entry that no longer corresponds to a real function.

    The old pattern here required the entry to sit alone on its line
    (`^\\s*"name",\\n`). The stub list is not formatted that way -- several
    entries share a line, e.g.

        "func_800343B0",    "func_80001F44",

    so removing such a name silently did nothing. N64Recomp then reported the
    same stale stub on the next pass, the driver "removed" it again, and the
    loop ran to the iteration cap making no progress. Match the entry wherever
    it appears and tidy up the leftover whitespace instead.
    """
    new = re.sub(rf'"{re.escape(fn)}",?[ \t]*', "", text)
    # Drop any line that became blank (or whitespace-only) inside the list.
    return re.sub(r'\n[ \t]+(?=\n)', "", new)


ROM_FILE = os.path.join(ROOT, "build", "decompressed.us.z64")

# Code regions of the decompressed ROM: (rom_lo, rom_hi). Overlay code is
# excluded on purpose -- see the comment in _real_call_targets.
CODE_REGIONS = ((0x1000, 0x50E0), (0x1E29B60, 0x1F00020))

_real_targets_cache = None
_rom_cache = None


def _rom_bytes():
    global _rom_cache
    if _rom_cache is None:
        _rom_cache = open(ROM_FILE, "rb").read()
    return _rom_cache


def _real_call_targets():
    """Every vram that is the target of a `jal` in real (non-overlay) code.

    An unresolved "No function found for jal target: 0xADDR" is only worth
    forcing as a function start if some genuine instruction actually calls it.

    Overlay `jal` fields are stored UNRELOCATED (raw 0x478 means 0x80800478,
    not 0x80000478), so decoding overlay words as absolute addresses invents
    core/boot targets that do not exist. Those phantoms can never resolve: the
    driver forces them, they split real functions mid-body, the recompile still
    fails, and the loop either runs to the iteration cap or mass-stubs
    thousands of otherwise-fine functions.

    N64Recomp reports the *decoded* target, so the same phantoms come back
    through this path even after harvest_targets.py stops emitting them. Gate
    on "is there a real caller" to break that cycle.
    """
    global _real_targets_cache
    if _real_targets_cache is not None:
        return _real_targets_cache

    import struct

    data = open(ROM_FILE, "rb").read()
    out = set()
    for lo, hi in CODE_REGIONS:
        for off in range(lo, hi - 4, 4):
            w = struct.unpack_from(">I", data, off)[0]
            if (w >> 26) in (0x2, 0x3):  # j / jal
                out.add(((w & 0x03FFFFFF) << 2) | 0x80000000)

    # Overlay code calls into core too. Those `jal`s are stored unrelocated, so
    # we cannot decode them as absolute addresses here (that is exactly what
    # produced the phantoms). But the decomp's overlay reloc table lists the
    # real targets by symbol, and the symbol name embeds the address.
    ovl_relocs = os.path.join(ROOT, "decomp", "ovl_reloc_addrs.us.txt")
    if os.path.exists(ovl_relocs):
        for line in open(ovl_relocs, encoding="utf-8"):
            m = re.search(r"_([0-9A-Fa-f]{8})_", line)
            if m:
                out.add(int(m.group(1), 16))

    _real_targets_cache = out
    return out


def read_keep():
    if not os.path.exists(KEEP_FILE):
        return set()
    out = set()
    for line in open(KEEP_FILE):
        line = line.strip()
        if line:
            out.add(int(line, 16))
    return out


def add_keep(vram):
    keep = read_keep()
    if vram not in keep:
        with open(KEEP_FILE, "a") as f:
            f.write(f"0x{vram:08X}\n")


def regen():
    subprocess.run([sys.executable, GEN], cwd=ROOT, check=True,
                   capture_output=True)


def run_recomp():
    return subprocess.run(
        [N64RECOMP, "banjotooie.us.toml"], cwd=ROOT,
        capture_output=True, text=True,
    )


def main():
    # Preserve whatever stubs already exist; only reset when asked.
    if "--reset" in sys.argv:
        text = open(TOML, encoding="utf-8").read()
        text = re.sub(r"(?s)stubs = \[.*?\]", "stubs = [\n]", text)
        text = re.sub(r"(?s)ignored = \[.*?\]", "ignored = [\n]", text)
        open(TOML, "w", encoding="utf-8").write(text)

    # Functions that must never be stubbed (see the stale-stub handling below).
    unstubbable = set()

    # N64Recomp now reports every failing function in one pass instead of
    # aborting on the first, so each iteration fixes the whole batch. This turns
    # what used to be one full recompile per failure (thousands of runs) into a
    # handful of runs total.
    for it in range(40):
        p = run_recomp()
        out = p.stdout + p.stderr

        # Stale stubs: a stub entry that no longer names a real function aborts
        # the run, so drop it before anything else.
        #
        # Statics are the common case and they cannot be stubbed at all: a
        # `static_<section>_<vram>` function only exists because some caller
        # referenced it, so stubbing it stops it being generated, which makes
        # the stub stale, which un-stubs it, which makes it fail again. Record
        # them as permanently un-stubbable so the batch below never re-adds one.
        stale = set(STALE_STUB_RE.findall(out))
        if stale:
            text = open(TOML, encoding="utf-8").read()
            for fn in stale:
                text = remove_stub(text, fn)
            open(TOML, "w", encoding="utf-8").write(text)
            unstubbable |= stale
            print(f"iter {it}: -{len(stale)} stale stubs", flush=True)
            continue

        # Missing function starts: collect every distinct target at once.
        targets = {int(t, 16) for t in NOFUNC_RE.findall(out)}
        targets |= {int(t, 16) for t in UNHANDLED_BRANCH_RE.findall(out)}
        # Only force targets that some real instruction actually calls;
        # otherwise we re-import the overlay phantom targets forever.
        real = _real_call_targets()
        # A target no real instruction calls is only worth forcing if a
        # function demonstrably ends right before it -- some real functions are
        # entered only through a relocated overlay call, so no statically
        # decodable `jal` to them exists anywhere. That verdict is the
        # generator's own test, so this pass and `gen_syms_toml.py` cannot
        # disagree about what a function start is.
        phantom = {t for t in targets
                   if t not in real
                   and not is_core_function_start(_rom_bytes(), t)}
        targets -= phantom
        new_targets = targets - read_keep()
        if phantom and not new_targets:
            print(f"iter {it}: {len(phantom)} unresolved targets have no real "
                  f"caller (phantoms); not forcing them", flush=True)
        if new_targets:
            for t in sorted(new_targets):
                add_keep(t)
            regen()
            print(f"iter {it}: +{len(new_targets)} function starts "
                  f"({len(targets)} seen)", flush=True)
            continue

        # Decode errors: stub every failing function at once.
        text = open(TOML, encoding="utf-8").read()
        already = set(get_stubs(text))
        failed = [f for f in dict.fromkeys(ERR_RE.findall(out))]
        if not failed:
            print(f"=== iter {it}: recompilation clean ===", flush=True)
            return 0
        fresh = [f for f in failed if f not in already and f not in unstubbable]
        if not fresh:
            print(f"=== iter {it}: {len(failed)} functions still fail "
                  f"after stubbing ===", flush=True)
            for f in failed[:20]:
                print(f"  {f}")
            return 1
        for f in fresh:
            text = add_stub(text, f)
        open(TOML, "w", encoding="utf-8").write(text)
        print(f"iter {it}: +{len(fresh)} stubs", flush=True)
    print("hit iteration cap")
    return 1


if __name__ == "__main__":
    sys.exit(main())
