# Banjo-Tooie: Recompiled

A native PC port of **Banjo-Tooie (USA)** produced by statically recompiling the
original N64 ROM with [N64Recomp](https://github.com/N64Recomp/N64Recomp), and
rendering through [RT64](https://github.com/rt64/rt64).

The recompiler translates the game's MIPS code into C once, ahead of time; there
is no emulator at runtime. The result is a normal Windows executable that plays
the original game logic, with the enhancements a native port makes possible:
widescreen, high refresh rates, and an in-game settings menu.

> ### This repository does not contain game assets, and never will.
>
> **You must own a copy of Banjo-Tooie (USA) to build or run this.** The ROM is
> supplied by you at runtime through the launcher's **Select ROM** option; it is
> never downloaded, bundled, or committed here. Nothing in this repository is
> derived from the ROM's data — it contains code, not game content.

## Table of Contents

* [Status](#status)
* [System Requirements](#system-requirements)
* [Dependencies](#dependencies)
* [Building](#building)
* [Running](#running)
* [Releases](#releases)
* [Repository Layout](#repository-layout)
* [What Is Committed, and Why](#what-is-committed-and-why)
* [Regenerating the Recompiled Code](#regenerating-the-recompiled-code)
* [Known Limitations](#known-limitations)
* [Licensing](#licensing)
* [Credits](#credits)

## Status

Playable end to end. Verified working: boot, attract loop, the intro cutscene,
gameplay, repeated scene transitions, audio, controller input, overlay
load/unload, and save/load. Multi-minute soaks run without crashes, stalls, or
missing-function lookups. That verification is on Windows x64; the Linux x64
build is newer — see [Known Limitations](#known-limitations).

The one known visual limitation is described under
[Known Limitations](#known-limitations).

## System Requirements

A GPU supporting **Direct3D 12 (Shader Model 6)** or **Vulkan 1.2**:

* GeForce GT 630 or newer
* Radeon HD 7750 (2012) or newer
* Intel HD 510 (Skylake) or newer

On x86-64, an **SSE4.1**-capable CPU (Intel Core 2 Penryn / AMD Bulldozer or
newer).

## Dependencies

Four upstream projects are used as **git submodules** under `lib/`. They are not
vendored, and they are not forks — `.gitmodules` points at the upstream
repositories.

| Submodule | Upstream | License | Patched? |
|---|---|---|---|
| `lib/N64ModernRuntime` | [N64Recomp/N64ModernRuntime](https://github.com/N64Recomp/N64ModernRuntime) | GPL-3.0 | **Yes** |
| `lib/rt64` | [rt64/rt64](https://github.com/rt64/rt64) | MIT | **Yes** |
| `lib/N64Recomp` | [N64Recomp/N64Recomp](https://github.com/N64Recomp/N64Recomp) | MIT | **Yes** |
| `lib/RecompFrontend` | [N64Recomp/RecompFrontend](https://github.com/N64Recomp/RecompFrontend) | see note below | No |

### ⚠ The patches are required

Three of the four dependencies are patched, and **the game does not work
without them**:

* **`N64ModernRuntime`** — a thread-queue corruption bug (a queue walk that
  never advanced, and duplicate inserts that made a thread point at itself) and
  a fail-fast path in `cop0_status_write` that aborted during Tooie's boot.
  Without these the game either aborts at boot or wedges with every guest thread
  parked.
* **`rt64`** — its emulation of an F3D far-plane depth clip discarded the
  skybox in first person. Also carries env-gated diagnostics used to find that.
* **`N64Recomp`** — four fixes needed to recompile Tooie's overlay code at all
  (jump-table relocation, overlay link-base handling, `R_MIPS_26`
  reconstruction, and `cop0 Count` support), plus batched failure reporting and
  content-skip output writing.

They live in [`patches/`](patches/) as ordinary `.patch` files, generated against
the exact submodule commits this repository pins. `tools/setup_deps.py` applies
them:

```bash
python tools/setup_deps.py          # fetch submodules and apply patches
python tools/setup_deps.py --check  # report state, change nothing
```

It is idempotent and reports a conflict rather than forcing a patch that does
not apply.

⚠ **`git status` will always show the three patched submodules as modified.**
That is expected and correct: the gitlink points at the pinned upstream commit
while the working tree carries the patch as uncommitted changes. It also means
`git submodule update` reverts the patches — run `tools/setup_deps.py` again
afterwards. Nothing else in the repository is affected by this.

### A note on `RecompFrontend`

`lib/RecompFrontend` is the menus, input handling and settings UI. It is
included as a submodule **because it ships no license file**, which means it
cannot be redistributed here in any form — a submodule is a reference to
upstream, not a copy. If you are reusing this project's structure for another
port, resolve that yourself.

## Building

### Prerequisites

Common: **CMake** 3.20+, **Ninja**, and **Python 3.8+** (tools only).

**clang is not optional on either platform.** `rt64` and `N64ModernRuntime` pass
GCC-style flags through `target_compile_options`, which MSVC's `cl` rejects
outright with `D8021: invalid numeric argument '/Wno-unused-parameter'`.

**Windows:**

* **clang-cl** (LLVM) **19 or newer**. MSVC 14.44's standard library rejects
  older clang with `STL1000: Unexpected compiler version`.
* **Visual Studio Build Tools 2022** for the Windows SDK and libraries.

**Linux (x64):**

* **clang** — Ubuntu 24.04's 18 is fine. The LLVM 19 floor above is a Windows
  one: it is MSVC's standard library that refuses older clang, not the code.
* **libsdl2-dev**, **libfreetype-dev** (RmlUi's font engine) and
  **libgtk-3-dev** (nativefiledialog-extended's Linux backend). `libsdl2-dev`
  pulls in the X11/Wayland/ALSA headers that `SDL_syswm.h` includes.

```bash
sudo apt-get install -y clang ninja-build pkg-config \
    libsdl2-dev libfreetype-dev libgtk-3-dev
```

### Steps

```bash
git clone --recursive <this repository>
cd BanjoTooieRecomp
python tools/setup_deps.py
```

Then configure and build. On Windows, the wrappers do this for you:

```bat
cmake_configure.bat
build_bt.bat
```

On Linux, or by hand on either platform:

```bash
# Windows: use clang-cl for both compilers.
cmake -S . -B build-cmake -G Ninja -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_C_COMPILER=clang-cl -DCMAKE_CXX_COMPILER=clang-cl

# Linux: use clang.
cmake -S . -B build-cmake -G Ninja -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++

cmake --build build-cmake --target BanjoTooieRecompiled
```

The executable is `build-cmake/BanjoTooieRecompiled.exe` on Windows and
`build-cmake/BanjoTooieRecompiled` on Linux.

**The ROM is not needed to build.** The recompiled game code is committed (see
below), so building requires only a compiler and the dependencies. You will be
asked for the ROM the first time you run the game.

### Rebuild notes

* `build_bt.bat` sources a cached MSVC environment (~30 ms) rather than
  re-running `vcvars64.bat` (~1600 ms) on every invocation.
* `cmake_configure.bat` (or re-running the `cmake -S . -B build-cmake` line) is
  only needed when the *set* of files in `RecompiledFuncs/` changes —
  `CMakeLists.txt` uses `file(GLOB)`, so new files are otherwise invisible to an
  existing build directory.
* ⚠ `build_bt.bat` returns exit code 0 even when ninja fails. Check its output
  for `error`, not its exit status.

## Running

```
build-cmake\BanjoTooieRecompiled.exe          # Windows
build-cmake/BanjoTooieRecompiled              # Linux
```

⚠ **Run it from the directory containing `assets/`** — the launcher resolves its
fonts, icons and wallpaper against the *working directory*, not against the
executable's location. On Windows, launching from Explorer or from
`build-cmake/` does this for you; on Linux, `cd` into the directory first. The
release archive's `run.sh` does it for you:

```bash
tar xzf BanjoTooieRecompiled-linux-x64.tar.gz
cd BanjoTooieRecompiled
./run.sh
```

Running the executable from elsewhere without doing this fails on startup with
`Failed to load font face from assets\LatoLatin-Regular.ttf`.

On first launch, choose **Select ROM** and point it at your Banjo-Tooie (USA)
ROM. The supported dump is:

| | |
|---|---|
| Format | `.z64` (big-endian, unbyteswapped) |
| SHA-1 | `AF1A89E12B638B8D82CC4C085C8E01D4CBA03FB3` |
| Size | 33,554,432 bytes (32 MiB) |
| Internal name | `BANJO TOOIE` |
| Cartridge ID | `NB7E` |

The ROM is read directly — there is no separate extraction step. Settings are
stored in `%LOCALAPPDATA%\BanjoTooieRecompiled\` on Windows and
`~/.config/BanjoTooieRecompiled/` on Linux.

`--game bt` skips the launcher and starts the game immediately; it still needs a
ROM to have been selected once.

### Runtime dependencies

**Windows:** nothing to install. The release archive carries the SDL2 and DXC
DLLs the executable loads.

**Linux:** the release archive carries no shared libraries, so the SDL2 runtime
is required — `libsdl2-2.0-0` on Debian/Ubuntu, `sdl2-compat` or `SDL2` on Arch,
`SDL2` on Fedora. It is present on essentially every desktop install. A working
Vulkan driver is required as well, since RT64 has no OpenGL backend on Linux.

## Releases

Releases are built and published by
[`.github/workflows/build.yml`](.github/workflows/build.yml); there is no manual
release step. Every release carries both packages, built from the same commit:

|Archive|Platform|
|---|---|
|`BanjoTooieRecompiled-windows-x64.zip`|the executable, the SDL2/DXC DLLs it loads, and `assets/`|
|`BanjoTooieRecompiled-linux-x64.tar.gz`|the executable, `assets/`, and `run.sh`|

|You push|You get|
|---|---|
|a commit to `main`|a release tagged `v<base>-build.<run number>`, created at that commit|
|a `v*` tag|a release for that tag, versioned exactly as the tag says|

`<base>` is the highest plain `vX.Y.Z` tag in the repository, so tagging `v1.1.0`
moves the base and later builds become `v1.1.0-build.<n>`. Releases from `main`
are ordinary releases, not pre-releases, so **`releases/latest` is always the
newest build**. Pull requests build and upload a workflow artifact but publish
nothing.

The version a release is built as is stamped into the executable, and the
launcher shows it in the bottom-left corner (`v1.0.0-build.12`). A local build,
which has no stamp, reports `1.0.0`. The workflow passes it in as the
`BT_VERSION` environment variable, which `CMakeLists.txt` turns into a define;
a tag that is not `vMAJOR.MINOR.PATCH` is rejected before anything is built,
because the game refuses to start on a version string it cannot parse.

## Repository Layout

```
BanjoTooieRecomp/
├── README.md               this file
├── AGENTS.md               engineering notes: findings, decisions, traps
├── COPYING                 GPL-3.0
├── CMakeLists.txt          build definition (clang-cl on Windows, clang on Linux)
├── .github/workflows/      CI: builds both platforms, publishes the release
├── banjotooie.us.toml      N64Recomp config: entrypoint, stubs, patches, hooks
├── n_aspMain.us.toml       RSPRecomp config for the audio microcode
├── build_bt.bat            ninja wrapper using a cached MSVC environment
├── cmake_configure.bat     re-run CMake configure (file(GLOB))
├── msvc_env_use.bat        sources the cached environment
│
├── src/                    the port: front-end, overlay subsystem, hooks
│   ├── main.cpp            SDL2/RT64 front-end and the launcher menu
│   ├── recomp_api.cpp      syscall dispatch, overlay registration, RT64 metadata
│   ├── register_overlays.cpp
│   └── rom_decompression.cpp
├── include/tooie_recomp.h  C bridge included by every generated file
├── rsp/n_aspMain.cpp       recompiled RSP audio microcode
├── RecompiledFuncs/        the recompiled game code (83 files, committed)
│
├── assets/                 fonts, menu icons, wallpaper, stylesheet
│   ├── icon.png / .ico / .rc   executable icon (see AGENTS.md)
│   └── menu.png            launcher wallpaper
├── decomp/                 symbol/relocation tables from the WIP decompilation
├── patches/                the three dependency patches
├── lib/                    dependencies as git submodules
└── tools/                  build and diagnostics scripts (see below)
```

**Before changing anything, read [`AGENTS.md`](AGENTS.md).** It records why the
code is shaped the way it is — the overlay subsystem, the boundary-detection
rules, the three dependency patches, and the traps that cost real time to find.

Useful `tools/` scripts:

| Script | Purpose |
|---|---|
| `setup_deps.py` | fetch submodules and apply the patches |
| `decompress_rom.py` | ROM → decompressed image (recompiling only) |
| `gen_syms_toml.py` | build the N64Recomp symbol map (recompiling only) |
| `autostub.py` | driver: recompile to a clean build |
| `keep_loop.py` | run → find a missing function → add it → rebuild |
| `detect_functions.py` | MIPS boundary detection; owns the shared start test |
| `capture.py` | screenshot the game window |
| `dbgview.py` | capture RmlUi's log (UI asset failures are not on stdout) |
| `soak.py`, `stall_probe.py` | long-run and stall instruments |

## What Is Committed, and Why

`RecompiledFuncs/` — **83 C files, ~85 MB of generated code — is committed.**

This is unusual, and deliberate. The output is generated, but it is only
reproducible by the *patched* N64Recomp, which is itself a dependency. Committing
it means:

* a user needs only a compiler and the dependencies to build — no recompiler
  build, no MSVC-only submodule dance;
* the committed output is exactly what the working executable was built from,
  so a clone reproduces the tested binary rather than something "equivalent";
* the recompiler is demoted to an optional tool, needed only to regenerate.

`rsp/n_aspMain.cpp` is committed for the same reason. `build/force_keep.txt` is
committed because it is *accumulated state* that cannot be regenerated.

Not committed: `build/`, `build-cmake/`, `package/`, and the ROM (which you
supply).

## Regenerating the Recompiled Code

Only needed if you change the symbol map, the config's stubs/hooks, or the
recompiler patches. Requires building the patched N64Recomp:

```bash
cd lib/N64Recomp
build_n64recomp.bat
```

Then, from the project root:

```bash
python tools/decompress_rom.py         # needs your ROM
python tools/autostub.py               # recompile to a clean build
```

The recompiler is driven by `banjotooie.us.toml`, which names the entrypoint,
the functions to stub, and the instruction patches and hooks the port needs.
Adding an entry to `build/force_keep.txt` promotes a function the boundary
detector missed; `tools/keep_loop.py` automates that cycle.

After regenerating, re-run `cmake_configure.bat` — the set of generated files
changes, and `file(GLOB)` will not notice otherwise.

## Known Limitations

**The skybox does not reach the sides of a 16:9 frame at `Aspect Ratio:
Expand`.** Tooie's sky dome was authored for a 4:3 frustum, so at 16:9 the
outermost columns can show through to the sky draw's own black fill. The only
way to make the dome cover is to draw it at a different horizontal scale than
the world, which makes the sky scroll against the world whenever the camera
turns — a worse artefact. The default is therefore the aligned behaviour, and
`Aspect Ratio: Original` avoids the issue entirely. This is a content
limitation of the original game, not a port defect.

Also worth knowing:

* **The Linux build is newer and less exercised than the Windows one.** CI
  builds it and checks that it links, that every shared library resolves, and
  that it carries the version stamp, but it has not been played through. The
  port's own code is platform-neutral (`src/main.cpp` guards every Win32 call
  behind `#ifdef _WIN32`), and RT64 has no OpenGL backend on Linux — Vulkan is
  required.
* Scene correctness has not been diffed against the original hardware.
* The alternate CPU-skinned character forms are not covered by the high-refresh
  interpolation metadata (the ordinary Banjo/Kazooie form is).

## Licensing

The port's own code is **GPL-3.0** (see [`COPYING`](COPYING)), the same license
as [BanjoRecomp](https://github.com/BanjoRecomp/BanjoRecomp).

Dependencies keep their own licenses: N64Recomp and RT64 are MIT;
N64ModernRuntime is GPL-3.0; RecompFrontend ships no license file and is
referenced as a submodule rather than redistributed.

The fonts under `assets/` are third-party works: Lato and Noto Emoji are under
the SIL Open Font License, and PromptFont ships its own terms in
`assets/promptfont/LICENSE.txt`. **`Suplexmentary Comic NC.ttf` is used for the
menu text and carries no license** — its embedded copyright notice reads
"All rights reserved", and it was taken from BanjoRecomp, which also ships no
terms for it. If you intend to redistribute this project, replace that font.

## Credits

* [N64Recomp](https://github.com/N64Recomp/N64Recomp) by Wiseguy — the static
  recompiler.
* [N64ModernRuntime](https://github.com/N64Recomp/N64ModernRuntime) — the
  recompilation runtime (librecomp, ultramodern).
* [RT64](https://github.com/rt64/rt64) by Wiseguy — the N64 rendering engine.
* [RecompFrontend](https://github.com/N64Recomp/RecompFrontend) — menus, input
  and settings UI.
* [BanjoRecomp](https://github.com/BanjoRecomp/BanjoRecomp) — the Banjo-Kazooie
  port, whose structure this project follows and whose asset set it borrows.
* The [Banjo-Tooie decompilation](https://github.com/Mr-Wiseguy/banjo-tooie)
  project, whose committed symbol and relocation tables are used to drive the
  recompiler.
* PromptFont by Yukari "Shinmera" Hafner.
