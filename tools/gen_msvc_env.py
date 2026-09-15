#!/usr/bin/env python3
"""Regenerate the cached MSVC x64 environment used by the build wrappers.

`vcvars64.bat` costs ~1600 ms per invocation -- it probes the registry, walks
the Windows SDK, and rewrites a long PATH -- and every build script in this
project called it, so every iteration of the bring-up loop paid that cost even
when ninja had nothing to do (ninja itself starts in ~80 ms).

clang-cl cannot simply run without it: it needs INCLUDE/LIB to find the MSVC
standard library, and fails on `#include <vector>` otherwise. So the
environment is derived once and cached as a plain `set` script, which sources in
~30 ms.

Writes `build/msvc_env.bat`. Regenerate after installing or moving Visual
Studio, a Windows SDK, or the LLVM toolchain. The build wrappers detect a stale
cache by checking that `VCToolsInstallDir` still exists and fall back to
`vcvars64.bat` when it does not.
"""

import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
OUT = os.path.join(ROOT, "build", "msvc_env.bat")

# Known-good fallback for the layout this project was developed against.
VCVARS_FALLBACK = (r"C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools"
                   r"\VC\Auxiliary\Build\vcvars64.bat")


def find_vcvars() -> str:
    """Locate `vcvars64.bat`, for any Visual Studio edition and install path.

    The path is not fixed: a Build Tools install lands under
    `Program Files (x86)\\...\\2022\\BuildTools`, but the Community,
    Professional and Enterprise editions install under
    `Program Files\\...\\2022\\<Edition>`, and the drive and version can differ.
    Hardcoding one of those works only on the machine it was written on -- which
    is why this failed on a CI runner, where Visual Studio is an Enterprise
    install in the 64-bit Program Files.

    `vswhere` ships with every VS 2017+ installer and knows all of them, so ask
    it first and keep the historical path only as a last resort.
    """
    vswhere = os.path.join(os.environ.get("ProgramFiles(x86)", r"C:\Program Files (x86)"),
                           "Microsoft Visual Studio", "Installer", "vswhere.exe")
    if os.path.exists(vswhere):
        try:
            proc = subprocess.run(
                [vswhere, "-latest", "-products", "*",
                 "-requires", "Microsoft.VisualStudio.Component.VC.Tools.x86.x64",
                 "-property", "installationPath"],
                capture_output=True, text=True, timeout=60)
            for line in proc.stdout.splitlines():
                line = line.strip()
                if not line:
                    continue
                candidate = os.path.join(line, "VC", "Auxiliary", "Build", "vcvars64.bat")
                if os.path.exists(candidate):
                    return candidate
        except (OSError, subprocess.SubprocessError):
            pass        # fall through to the known path

    return VCVARS_FALLBACK


VCVARS = find_vcvars()

# Variables vcvars sets that are irrelevant to compiling: prompt decoration and
# the saved pre-init PATH it uses to restore the caller's environment.
IGNORED = {"PROMPT", "COMMANDPROMPTTYPE", "PLATFORM", "__VSCMD_PREINIT_PATH"}

# Only toolchain variables are written. Capturing the *whole* post-vcvars
# environment would also bake in whatever the invoking process happened to have
# -- shell plumbing, session tokens, temp paths -- which has no business in a
# checked-in project file.
TOOLCHAIN_PREFIXES = ("VSCMD_", "VS", "VC", "WINDOWS", "UCRT", "UNIVERSAL")
TOOLCHAIN_NAMES = {
    "INCLUDE",
    "LIB",
    "LIBPATH",
    "PATH",
    "EXTERNAL_INCLUDE",
    "FRAMEWORKDIR",
    "FRAMEWORKDIR64",
    "FRAMEWORKVERSION",
    "FRAMEWORKVERSION64",
    "FRAMEWORK40VERSION",
    "EXTENSIONSDKDIR",
    "DEVENVDIR",
    "NETFXSDKDIR",
}


def capture() -> dict:
    """Return the full environment after running `vcvars64.bat`.

    Deliberately not a before/after diff. Diffing is wrong here because this
    script is also invoked from the *fallback* path in `msvc_env_use.bat`, i.e.
    immediately after `vcvars64.bat` has already run in the parent process, so
    the spawned shell inherits an initialised environment, "before" equals
    "after", and the cache comes out with 5 variables instead of 35. Dumping the
    whole environment is also exactly what `vcvars64.bat` itself does.
    """
    if not os.path.exists(VCVARS):
        raise SystemExit(
            "Could not find vcvars64.bat.\n"
            "Install Visual Studio 2022 (any edition) with the "
            "'Desktop development with C++' workload, or the standalone "
            "Build Tools, then re-run this script.\n"
            "  looked for: " + VCVARS)

    bat = os.path.join(ROOT, "build", "_capture_msvc_env.bat")
    with open(bat, "w", newline="\r\n") as f:
        f.write("@echo off\n")
        f.write(f'call "{VCVARS}" >nul 2>&1\n')
        f.write("set\n")
    try:
        proc = subprocess.run([bat], cwd=ROOT, capture_output=True)
    finally:
        os.remove(bat)

    env = {}
    for line in proc.stdout.decode("utf-8", errors="ignore").splitlines():
        if "=" in line:
            name, value = line.split("=", 1)
            env[name.upper()] = value
    return env


def main() -> int:
    env = capture()
    changed = {
        n: v
        for n, v in env.items()
        if n not in IGNORED
        and (n in TOOLCHAIN_NAMES or n.startswith(TOOLCHAIN_PREFIXES))
    }

    # The compiler only needs the include/lib search paths, but the whole
    # toolchain set is cheap to carry and keeps tools that consult VCINSTALLDIR
    # working.
    essential = "INCLUDE" in changed and "LIB" in changed
    if not essential:
        raise SystemExit("vcvars64.bat did not set INCLUDE/LIB; refusing to "
                         "write a cache that cannot compile")

    names = sorted(changed)
    lines = [
        "@echo off",
        "rem GENERATED by tools/gen_msvc_env.py -- do not edit by hand.",
        "rem Cached MSVC x64 environment. Sourcing this costs ~30 ms; running",
        "rem vcvars64.bat costs ~1600 ms. Regenerate after changing the",
        "rem Visual Studio / Windows SDK / LLVM install.",
        "rem",
        "rem No setlocal on purpose: the variables must land in the caller's",
        "rem environment, and the callers that care already scope themselves.",
        "rem Re-exporting 35 variables (PATH alone is 3.5 KB) on a single",
        "rem `endlocal & set ...` line exceeds cmd's 8191-character limit.",
    ]
    for name in names:
        lines.append('set "{0}={1}"'.format(name, changed[name].replace("%", "%%")))

    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    with open(OUT, "w", newline="\r\n") as f:
        f.write("\n".join(lines) + "\n")

    print(f"wrote {OUT}")
    print(f"  {len(names)} variables")
    print(f"  VCToolsInstallDir = {changed.get('VCTOOLSINSTALLDIR', '(unset)')}")
    print(f"  WindowsSdkDir     = {changed.get('WINDOWSSDKDIR', '(unset)')}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
