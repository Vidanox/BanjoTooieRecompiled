"""Launch the game with the RT64 trace on so a human can reproduce a state the
attract loop never reaches (first person, a specific area, a specific menu).

`capture.py` takes screenshots at fixed times and `soak.py` watches the frame
counter, but neither can drive input, so anything that needs a controller is
unreachable from an automated run. This starts the game with `TOOIE_TRACE_RT64=1`
and `TOOIE_TRACE_PROJ=1`, tees the trace to a log, screenshots the window every
few seconds, and waits for the player to quit.

The screenshots are the point. The trace cannot say when a defect was visible on
screen, so analysing it means guessing which frames matter; each shot is named
with the game frame it corresponds to (`cap_frame012345_t040.png`), which turns
"the sky was black around 40 seconds in" into an exact frame range.

Usage (from the project root):
    python -u tools/trace_play.py build-cmake/BanjoTooieRecompiled.exe build-cmake --game bt

Play until the defect appears, then close the window. Shots go to
build-cmake/captures/play, the trace to build-cmake/trace_play.log.

`--sky-view-nointerp` additionally sets BT_RT64_SKY_VIEW_NOINTERP=on, which tags
the skybox *projection* so RT64 renders it with the current frame's view instead
of blending it with the previous frame's camera. ⚠ This one is a lever, not a
default: the dome is anchored to the camera, so freezing its view to one camera
while the world interpolates makes the sky slide against the world when the
camera moves. It exists to reproduce that behaviour, not to fix anything.

`--sky-stretch` additionally sets BT_RT64_SKY_STRETCH=on, which stops RT64
widening the skybox projection so the dome covers the whole frame. ⚠ It is a
trade, not a fix, and it is off by default: covering costs alignment, because the
sky is then drawn 1.333x zoomed in horizontally relative to the world and slides
when the camera turns. Use it to demonstrate the trade; see `rt64_sky_stretch`.

`--sky-no-stretch` is gone -- not stretching is the default now.

`--sky-infinite` additionally sets BT_RT64_SKY_INFINITE=on, which rewrites the
skybox projection into the infinite-far-plane form Tooie uses in first person.
That form is what the F3D depth-clip defect discarded, so this reproduces the
triggering projection from the attract loop -- the skybox fix is regression-
testable without a controller. Check the captured sky is lit: the black bars at
the top and bottom of a capture are cinematic letterbox, not the defect.

⚠ These are the levers for `BT_RT64_*` env vars; the exe itself parses none of
them. `src/main.cpp` reads only `--show-console` and `librecomp`'s `parse_cli`
reads only `--game`/`--game-mode`, so passing any of the above to the exe
directly is silently ignored -- they have to go through this script.
"""

import os
import re
import subprocess
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from capture import capture, find_window  # noqa: E402

CREATE_NO_WINDOW = 0x08000000

def read_guest_frame(log_path):
    """The last game frame number the watchdog printed, or None.

    Read back out of the log so a screenshot can be named with the frame the
    trace recorded for it. The window has to be generous: the projection trace
    emits hundreds of KB per second, so the last 64 KB may not contain a single
    watchdog line.
    """
    try:
        size = os.path.getsize(log_path)
    except OSError:
        return None
    window = 8 << 20
    with open(log_path, "rb") as f:
        f.seek(max(0, size - window))
        tail = f.read().decode("utf-8", errors="ignore")
    frames = re.findall(r"\[watchdog\][^\n]*?frame=(\d+)", tail)
    return int(frames[-1]) if frames else None

def main():
    if len(sys.argv) < 3:
        print(__doc__)
        return 1
    exe, cwd = sys.argv[1], sys.argv[2]
    args = [a for a in sys.argv[3:]]
    log_path = os.path.join(cwd, "trace_play.log")
    # One directory per run, so a later run cannot overwrite the screenshots a
    # report refers to. The frame is in the file name, the run in the directory.
    shot_dir = os.path.join(cwd, "captures", "play",
                            time.strftime("run_%Y%m%d_%H%M%S", time.localtime()))
    every = 4.0
    sky_view_nointerp = False
    sky_stretch = False
    sky_infinite = False
    for a in list(args):
        if a.startswith("--every="):
            every = float(a.split("=", 1)[1])
            args.remove(a)
        elif a == "--sky-view-nointerp":
            sky_view_nointerp = True
            args.remove(a)
        elif a == "--sky-stretch":
            sky_stretch = True
            args.remove(a)
        elif a == "--sky-infinite":
            sky_infinite = True
            args.remove(a)

    env = dict(os.environ)
    env["TOOIE_TRACE_RT64"] = "1"
    env["TOOIE_TRACE_PROJ"] = "1"
    env["TOOIE_TRACE_SKY"] = "1"
    if sky_view_nointerp:
        env["BT_RT64_SKY_VIEW_NOINTERP"] = "on"
    if sky_stretch:
        env["BT_RT64_SKY_STRETCH"] = "on"
    if sky_infinite:
        env["BT_RT64_SKY_INFINITE"] = "on"
    log = open(log_path, "wb")
    proc = subprocess.Popen([exe] + args, stdout=log, stderr=subprocess.STDOUT,
                            cwd=cwd, env=env, creationflags=CREATE_NO_WINDOW)
    print(f"[trace] pid={proc.pid}", flush=True)
    print("[trace] play until the defect appears, then close the game window.",
          flush=True)
    print(f"[trace] trace -> {log_path}", flush=True)
    print(f"[trace] screenshot every {every:g}s -> {shot_dir}", flush=True)

    started = time.time()
    hwnd = None
    shots = []
    reported_no_window = False
    reported_no_frame = False
    try:
        next_shot = every
        while proc.poll() is None:
            time.sleep(0.5)
            if time.time() - started < next_shot:
                continue
            next_shot += every
            if hwnd is None:
                wins = find_window(proc.pid)
                if not wins:
                    if not reported_no_window:
                        reported_no_window = True
                        print("[trace] no visible window for pid yet", flush=True)
                    continue
                hwnd = wins[0][0]
                print(f"[trace] window: {wins[0][1]!r}", flush=True)
            frame = read_guest_frame(log_path)
            if frame is None:
                if not reported_no_frame:
                    reported_no_frame = True
                    print("[trace] no watchdog frame in the log yet", flush=True)
                continue
            os.makedirs(shot_dir, exist_ok=True)
            name = f"cap_frame{frame:06d}_t{int(time.time() - started):03d}.png"
            path = os.path.join(shot_dir, name)
            try:
                if capture(hwnd, path):
                    shots.append((frame, path))
                    print(f"[trace] shot frame={frame} -> {name}", flush=True)
            except Exception as exc:  # a failed capture must not end the session
                print(f"[trace] shot failed at frame={frame}: {exc}", flush=True)
    except KeyboardInterrupt:
        proc.kill()
    log.close()

    size = os.path.getsize(log_path)
    lines = 0
    with open(log_path, "rb") as f:
        for _ in f:
            lines += 1
    print(f"[trace] ran {int(time.time() - started)}s, "
          f"{lines} lines / {size} bytes -> {log_path}", flush=True)
    if shots:
        print(f"[trace] {len(shots)} screenshots, frames "
              f"{shots[0][0]}..{shots[-1][0]} -> {shot_dir}", flush=True)

    # Summarise the projection trace here as well, so a report is useful even
    # without the file. Two things matter: `[fbdiv]` means two perspective
    # projections in one frame were given different horizontal scales (the
    # skybox and the world disagreeing about the widescreen adjustment), and
    # `inf=1` marks a projection using Tooie's infinite-far-plane form, which
    # `farPlaneFromProj` cannot express and reports as "f=0.000".
    proj_lines, fbdiv_lines, inf_lines = [], [], []
    sequences = {}
    with open(log_path, "r", encoding="utf-8", errors="ignore") as f:
        for line in f:
            if line.startswith("[fbdiv]"):
                fbdiv_lines.append(line.rstrip())
            elif line.startswith("[proj]"):
                proj_lines.append(line)
            elif "infRaw=1" in line or "infMod=1" in line:
                inf_lines.append(line.rstrip())
    for line in proj_lines:
        # "[proj] f=<frame> scene=<n> p=<n> ti=<n> id=0x... type ..."
        parts = line.split()
        if len(parts) > 5:
            sequences.setdefault(parts[1].split("=")[1], []).append(
                parts[5].split("=")[1])
    distinct = {}
    for seq in sequences.values():
        key = " ".join(seq)
        distinct[key] = distinct.get(key, 0) + 1

    print(f"[trace] projections traced: {len(proj_lines)} records over "
          f"{len(sequences)} frames", flush=True)
    if sky_stretch:
        print(f"[trace] sky/world horizontal-scale differences: {len(fbdiv_lines)} "
              f"(expected with --sky-stretch: the sky is deliberately stretched to "
              f"fill the view, which draws it at a different horizontal scale than "
              f"the world and makes it slide)", flush=True)
    else:
        print(f"[trace] [fbdiv] divergence records: {len(fbdiv_lines)}", flush=True)
    for line in fbdiv_lines[:8]:
        print(f"[trace]   {line}", flush=True)
    print(f"[trace] infinite-far-plane projections: {len(inf_lines)}", flush=True)
    for line in inf_lines[:6]:
        print(f"[trace]   {line.strip()}", flush=True)
    print("[trace] projection id sequences seen (id list -> frames):", flush=True)
    for key, count in sorted(distinct.items(), key=lambda kv: -kv[1])[:8]:
        print(f"[trace]   {key}  -> {count} frames", flush=True)
    print("[trace] send that file back; the interesting lines are the "
          "`[proj]`, `[fbdiv]`, `infRaw=1` and `[rt64] frame=` ones.", flush=True)
    return 0

if __name__ == "__main__":
    sys.exit(main())
