"""Run the game for a fixed wall-clock window and report whether it kept going.

`stall_probe.py` samples *the stall* but stops after 240 s, which is not long
enough to reach deep gameplay states (a run only covers a few hundred game
frames in that window, and the frame counter resets on every scene change).
This is the long-run instrument: it watches Tooie's own frame counter for the
whole window and reports every point at which it stopped advancing, so a
"stalls after N minutes in state X" claim can be compared between two builds or
two settings.

Usage (from the project root):
    python -u tools/soak.py build-cmake/BanjoTooieRecompiled.exe build-cmake \
        build-cmake/BanjoTooieRecompiled.map --game bt --seconds=420
"""

import ctypes as C
import os
import subprocess
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from minidbg import k32, find_rdram  # noqa: E402
# `guest_u32` applies the `addr ^ 3` / little-endian convention the recompiler's
# MEM_* accessors use. Reading host words directly returns a *different* guest
# value, which is how an earlier pass mis-read the level-load gate's slot index.
from stall_probe import guest_u32  # noqa: E402

CREATE_NO_WINDOW = 0x08000000

FRAME_COUNT = 0x800459C8
GAME_MODE = 0x80043380
UPDATE_STATE = 0x80127630
LOADED_OVERLAYS = 0x80117C60

# A stall is a frame counter that has not moved across this many samples. Each
# sample is `INTERVAL` seconds, so 6 samples is ~12 s of no progress.
STALL_SAMPLES = 6
INTERVAL = 2.0


def main():
    if len(sys.argv) < 4:
        print(__doc__)
        return 1
    exe, cwd, _map_path = sys.argv[1], sys.argv[2], sys.argv[3]
    seconds = 420.0
    args = []
    for a in sys.argv[4:]:
        if a.startswith("--seconds="):
            seconds = float(a.split("=", 1)[1])
        else:
            args.append(a)

    log = open(os.path.join(cwd, "soak_game.log"), "wb")
    proc = subprocess.Popen([exe] + args, stdout=log, stderr=subprocess.STDOUT,
                            cwd=cwd, creationflags=CREATE_NO_WINDOW)
    pid = proc.pid
    hproc = k32.OpenProcess(0x0410, False, pid)
    print(f"[soak] pid={pid} seconds={seconds:.0f} log={cwd}/soak_game.log",
          flush=True)

    rdram = None
    last = None
    stalled_for = 0
    stalls = []
    transitions = 0
    started = time.time()
    while time.time() - started < seconds:
        time.sleep(INTERVAL)
        if proc.poll() is not None:
            print(f"[soak] exited rc={proc.returncode:#x} after "
                  f"{int(time.time() - started)}s", flush=True)
            break
        if rdram is None:
            found = find_rdram(hproc)
            if not found:
                continue
            rdram = found[0]
            print(f"[soak] rdram base={rdram:#x}", flush=True)
        frame = guest_u32(hproc, rdram, FRAME_COUNT)
        mode = guest_u32(hproc, rdram, GAME_MODE)
        state = guest_u32(hproc, rdram, UPDATE_STATE)
        overlays = guest_u32(hproc, rdram, LOADED_OVERLAYS)
        elapsed = int(time.time() - started)
        print(f"[soak] t={elapsed}s frame={frame} mode={mode} "
              f"update={state:#010x} overlays={overlays}", flush=True)
        if last is not None and frame is not None and frame < last:
            transitions += 1
        if last is not None and frame == last:
            stalled_for += 1
            if stalled_for == STALL_SAMPLES:
                stalls.append((elapsed, frame, state, overlays))
                print(f"[soak] STALL t={elapsed}s frame={frame} "
                      f"update={state:#010x} overlays={overlays}", flush=True)
        else:
            stalled_for = 0
        last = frame

    exit_code = C.c_ulong(0)
    k32.GetExitCodeProcess(hproc, C.byref(exit_code))
    print(f"[soak] done: alive={exit_code.value == 259} "
          f"transitions={transitions} stalls={len(stalls)} last_frame={last}",
          flush=True)
    proc.kill()
    log.close()
    return 0


if __name__ == "__main__":
    sys.exit(main())
