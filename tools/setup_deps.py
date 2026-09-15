#!/usr/bin/env python3
"""Fetch the runtime dependencies and apply the patches the port needs.

Three of the four submodules under `lib/` carry local patches that the game
requires: without them it either fails to boot or renders the skybox black.
Upstream does not accept them (see README "Dependencies"), so they live in
`patches/` and are applied to the submodule working trees here.

    python tools/setup_deps.py            # fetch + patch
    python tools/setup_deps.py --check    # report state, change nothing

Idempotent: a patch that is already applied is left alone, and a patch that
neither applies nor reverse-applies is reported as a conflict rather than
forced. Run this after cloning, and again after any `git submodule update`
that moves a dependency off its pinned commit.
"""
import argparse
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PATCHES = os.path.join(ROOT, "patches")

# (submodule path, patch file). `None` means the dependency is used unmodified.
DEPS = [
    ("lib/N64ModernRuntime", "N64ModernRuntime.patch"),
    ("lib/rt64", "rt64.patch"),
    ("lib/N64Recomp", "N64Recomp.patch"),
    ("lib/RecompFrontend", None),
]


def git(args, cwd=ROOT, check=True):
    p = subprocess.run(["git", *args], cwd=cwd, capture_output=True, text=True,
                       errors="ignore")
    if check and p.returncode != 0:
        raise RuntimeError("git %s failed in %s:\n%s%s"
                           % (" ".join(args), cwd, p.stdout, p.stderr))
    return p


def patch_state(dep_dir, patch):
    """'applied', 'not-applied' or 'conflict' for one patch."""
    reverse = git(["apply", "--check", "--reverse", patch], cwd=dep_dir, check=False)
    if reverse.returncode == 0:
        return "applied"
    forward = git(["apply", "--check", patch], cwd=dep_dir, check=False)
    if forward.returncode == 0:
        return "not-applied"
    return "conflict"


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--check", action="store_true",
                    help="report the state of each dependency and exit")
    opts = ap.parse_args()

    if not opts.check:
        print("Fetching submodules (this clones ~1 GB on a fresh checkout)...")
        try:
            git(["submodule", "update", "--init", "--recursive"])
        except RuntimeError as e:
            print(e, file=sys.stderr)
            return 1

    failed = False
    for dep, patch in DEPS:
        dep_dir = os.path.join(ROOT, dep)
        if not os.path.isdir(os.path.join(dep_dir, ".git")) and \
           not os.path.isfile(os.path.join(dep_dir, ".git")):
            print("%-24s MISSING -- run without --check to fetch" % dep)
            failed = True
            continue

        if patch is None:
            print("%-24s ok (used unmodified)" % dep)
            continue

        patch_path = os.path.join(PATCHES, patch)
        state = patch_state(dep_dir, patch_path)

        if state == "applied":
            print("%-24s ok (%s already applied)" % (dep, patch))
            continue

        if state == "conflict":
            print("%-24s CONFLICT -- %s neither applies nor reverse-applies.\n"
                  "%sThe submodule is probably not at the commit the patch was "
                  "generated against; check `git submodule status`."
                  % (dep, patch, " " * 26), file=sys.stderr)
            failed = True
            continue

        if opts.check:
            print("%-24s PATCH NOT APPLIED (%s)" % (dep, patch))
            failed = True
            continue

        git(["apply", patch_path], cwd=dep_dir)
        print("%-24s patched with %s" % (dep, patch))

    if failed:
        print("\nDependencies are not in the required state.", file=sys.stderr)
        return 1
    print("\nAll dependencies ready. Build with:\n"
          "    cmake -S . -B build-cmake -G Ninja -DCMAKE_BUILD_TYPE=Release \\\n"
          "        -DCMAKE_C_COMPILER=clang-cl -DCMAKE_CXX_COMPILER=clang-cl\n"
          "    cmake --build build-cmake --target BanjoTooieRecompiled\n"
          "or on Windows, `cmake_configure.bat` then `build_bt.bat`.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
