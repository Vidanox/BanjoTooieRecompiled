#!/usr/bin/env python3
"""Capture OutputDebugStringA output from any process -- RmlUi's log on Windows.

Why this exists
---------------
recompui's UI failures are invisible from the outside. RmlUi reports them
through `Rml::Log::Message`, which reaches `SystemInterface::LogMessage` and on
Windows ends in `LogDefault::LogMessage` -> **`OutputDebugStringA`**
(RecompFrontend/recompui/lib/RmlUi/Source/Core/LogDefault.cpp). It never touches
stdout, so the game's own captured output contains none of it; the messages only
show up in the RmlUi debugger's Event Log panel (F8 in the launcher).

That makes missing-asset bugs (`Failed to load font face from ...`, `Could not
load SVG file ...`) unobservable to a script. This tool makes them observable:
it registers the standard Win32 DBWIN listener -- a 4 KiB shared section plus
the `DBWIN_BUFFER_READY` / `DBWIN_DATA_READY` events -- which the OS broadcasts
every `OutputDebugStringA` in the session to. Lines are timestamped and written
to a log, and asset-related ones are summarised.

Only one DBWIN listener can exist at a time; if another debugger (Visual Studio,
DebugView) is attached, this returns no output.

Usage
-----
    python -u tools/dbgview.py [--seconds N] [--out PATH] [--launch EXE] [-- ARGS...]

With no `--launch`, it just listens for the given window and prints what arrives
-- useful when the game is already running. `--launch` starts the given exe (its
working directory defaults to the repo root, which is where `assets/` lives)
and stops it when the window expires.

Examples
--------
    python -u tools/dbgview.py --seconds 20
    python -u tools/dbgview.py --seconds 25 --out build-cmake/dbg_ui.log \
        --launch build-cmake/BanjoTooieRecompiled.exe -- --game bt
"""
import argparse
import ctypes
import ctypes.wintypes as wintypes
import os
import re
import subprocess
import sys
import time

DBWIN_BUFFER_SIZE = 4096
PAGE_READWRITE = 0x04
INVALID_HANDLE_VALUE = ctypes.c_void_p(-1).value
WAIT_OBJECT_0 = 0x0
WAIT_TIMEOUT = 0x102

k32 = ctypes.WinDLL("kernel32", use_last_error=True)
k32.CreateFileMappingA.restype = wintypes.HANDLE
k32.CreateFileMappingA.argtypes = [wintypes.HANDLE, ctypes.c_void_p,
                                   wintypes.DWORD, wintypes.DWORD,
                                   wintypes.DWORD, ctypes.c_char_p]
k32.MapViewOfFile.restype = ctypes.c_void_p
k32.MapViewOfFile.argtypes = [wintypes.HANDLE, wintypes.DWORD, wintypes.DWORD,
                              wintypes.DWORD, ctypes.c_size_t]
k32.CreateEventA.restype = wintypes.HANDLE
k32.CreateEventA.argtypes = [ctypes.c_void_p, wintypes.BOOL, wintypes.BOOL,
                             ctypes.c_char_p]
k32.WaitForSingleObject.argtypes = [wintypes.HANDLE, wintypes.DWORD]
k32.SetEvent.argtypes = [wintypes.HANDLE]

# Asset loaders report in these two shapes; both name the file that failed.
ASSET_RE = re.compile(
    r"Failed to load font face from (?P<font>.+?), could not open file"
    r"|Could not load SVG file (?P<svg>.+?)\s*$"
    r"|Could not load texture file (?P<tex>.+?)\s*$"
    r"|Failed to open file (?P<open>.+?)\s*$")


def open_shared():
    """Register the DBWIN listener. Returns (buffer_ptr, ready_event, data_event)."""
    mapping = k32.CreateFileMappingA(INVALID_HANDLE_VALUE, None, PAGE_READWRITE,
                                     0, DBWIN_BUFFER_SIZE, b"DBWIN_BUFFER")
    if not mapping:
        raise OSError(ctypes.get_last_error(), "CreateFileMapping(DBWIN_BUFFER)")
    buf = k32.MapViewOfFile(mapping, 0x0004, 0, 0, DBWIN_BUFFER_SIZE)
    if not buf:
        raise OSError(ctypes.get_last_error(), "MapViewOfFile")
    # Auto-reset events, exactly as a debugger creates them.
    ready = k32.CreateEventA(None, False, False, b"DBWIN_BUFFER_READY")
    data = k32.CreateEventA(None, False, False, b"DBWIN_DATA_READY")
    if not ready or not data:
        raise OSError(ctypes.get_last_error(), "CreateEvent(DBWIN_*)")
    return buf, ready, data


def listen(seconds, out_path, launch=None, launch_args=(), cwd=None):
    buf, ready, data = open_shared()
    pid_field = ctypes.cast(buf, ctypes.POINTER(wintypes.DWORD))
    text_field = ctypes.cast(buf + 4, ctypes.c_char_p)

    proc = None
    if launch:
        cmd = [launch, *launch_args]
        proc = subprocess.Popen(cmd, cwd=cwd,
                                stdout=subprocess.DEVNULL,
                                stderr=subprocess.DEVNULL)

    deadline = time.time() + seconds
    lines = []
    try:
        while time.time() < deadline:
            k32.SetEvent(ready)
            remaining = max(1, int((deadline - time.time()) * 1000))
            if k32.WaitForSingleObject(data, min(remaining, 500)) != WAIT_OBJECT_0:
                if proc is not None and proc.poll() is not None:
                    break       # launched process died; nothing more will come
                continue
            msg = text_field.value.decode("utf-8", "replace") if text_field.value else ""
            lines.append((int(pid_field[0]), msg))
    finally:
        if proc is not None and proc.poll() is None:
            proc.terminate()
            try:
                proc.wait(timeout=10)
            except subprocess.TimeoutExpired:
                proc.kill()

    stamp = time.strftime("%Y-%m-%d %H:%M:%S")
    with open(out_path, "w", encoding="utf-8") as f:
        for pid, msg in lines:
            f.write("[%s pid=%d] %s\n" % (stamp, pid, msg))
    return lines


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--seconds", type=float, default=20.0,
                    help="how long to listen (default 20)")
    ap.add_argument("--out", default=os.path.join("build-cmake", "dbgview.log"),
                    help="log to write (default build-cmake/dbgview.log)")
    ap.add_argument("--launch", help="exe to start before listening")
    ap.add_argument("--cwd", help="working directory for --launch (default: repo root)")
    ap.add_argument("args", nargs=argparse.REMAINDER,
                    help="arguments for --launch, after `--`")
    opts = ap.parse_args(argv)

    launch_args = [a for a in opts.args if a != "--"]
    cwd = opts.cwd
    if opts.launch and not cwd:
        cwd = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    os.makedirs(os.path.dirname(opts.out) or ".", exist_ok=True)

    lines = listen(opts.seconds, opts.out, opts.launch, launch_args, cwd)

    print("captured %d OutputDebugString lines -> %s" % (len(lines), opts.out))
    missing = {}
    for _, msg in lines:
        m = ASSET_RE.search(msg)
        if not m:
            continue
        name = next(v for v in m.groupdict().values() if v)
        missing.setdefault(name.strip(), 0)
        missing[name.strip()] += 1
    if missing:
        print("\nasset failures (%d distinct):" % len(missing))
        for name, n in sorted(missing.items()):
            print("  %4d  %s" % (n, name))
    else:
        print("no asset-load failures")
    return 0


if __name__ == "__main__":
    sys.exit(main())
