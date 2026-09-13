"""Find the thread that is *spinning* in a running BanjoTooieRecompiled.exe.

`minidbg.py` reports on a **fault** and `stack_sample.py` on a **hang**; a spin is
neither. A spinning guest thread burns about one core and never raises an
exception, and its stack is often unremarkable because it is looping rather than
nested -- so a stack walk can show nothing while the game is clearly stuck.

This suspends every thread and reads its RIP repeatedly. The thread whose RIP
keeps changing is the one executing, and the symbol it lands in names the stuck
function. One run is usually enough.

Usage (from the project root):
    python -u tools/rip_poll.py build-cmake/BanjoTooieRecompiled.exe \\
        build-cmake build-cmake/BanjoTooieRecompiled.map --game bt [--delay=58] \\
        [--samples=150] [--interval=0.25]

`--delay` must be long enough for the game to reach the stall (the level-load
gate is at about 55 s). Check with the `[watchdog]` heartbeat in the run log: the
frame counter stops advancing at the stall.

Cross-check with CPU before trusting a result: measure the process's CPU time over
a window against the frame counter. A spin holds ~1.0 core with the frame counter
frozen; an idle block holds ~0.0. A *running* game also holds ~1.0 core, so the
frozen frame counter is what distinguishes the two.
"""

import ctypes as C
import collections
import os
import struct
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from minidbg import (  # noqa: E402
    k32, PROCESS_INFORMATION, STARTUPINFOW,
    enum_threads, enum_modules, load_map, resolve,
)

CONTEXT_ALL_AMD64 = 0x0010001F
THREAD_GET_CONTEXT = 0x0008
THREAD_SUSPEND_RESUME = 0x0002
THREAD_QUERY_INFORMATION = 0x0040
THREAD_QUERY_LIMITED_INFORMATION = 0x0800


def thread_description(tid):
    handle = k32.OpenThread(THREAD_QUERY_LIMITED_INFORMATION, False, tid)
    if not handle:
        return ""
    try:
        desc = C.c_wchar_p()
        k32.GetThreadDescription(handle, C.byref(desc))
        return desc.value or ""
    finally:
        k32.CloseHandle(handle)


def thread_rip(tid):
    """Current instruction pointer of `tid`, or None."""
    handle = k32.OpenThread(
        THREAD_GET_CONTEXT | THREAD_SUSPEND_RESUME | THREAD_QUERY_INFORMATION,
        False, tid)
    if not handle:
        return None
    k32.SuspendThread(handle)
    try:
        context = (C.c_byte * 1232)()
        struct.pack_into("<I", context, 0x30, CONTEXT_ALL_AMD64)
        if not k32.GetThreadContext(handle, C.byref(context)):
            return None
        return struct.unpack_from("<Q", context, 0xF8)[0]
    finally:
        k32.ResumeThread(handle)
        k32.CloseHandle(handle)


def symbolise(modules, syms, address):
    for base, size, name in modules:
        if base <= address < base + size:
            if name.lower().startswith("banjotooie"):
                return resolve(syms, address - base)
            return f"{name}+0x{address - base:X}"
    return hex(address)


def main():
    if len(sys.argv) < 4:
        print(__doc__)
        return 1
    exe, cwd, map_path = sys.argv[1], sys.argv[2], sys.argv[3]

    delay, samples, interval = 58.0, 150, 0.25
    options = []
    for argument in sys.argv[4:]:
        if argument.startswith("--delay="):
            delay = float(argument.split("=", 1)[1])
        elif argument.startswith("--samples="):
            samples = int(argument.split("=", 1)[1])
        elif argument.startswith("--interval="):
            interval = float(argument.split("=", 1)[1])
        else:
            options.append(argument)

    syms = load_map(map_path)
    print(f"[poll] loaded {len(syms)} symbols from map", flush=True)

    startup = STARTUPINFOW()
    startup.cb = C.sizeof(startup)
    info = PROCESS_INFORMATION()
    command_line = C.create_unicode_buffer(
        " ".join(['"' + exe + '"'] + options))
    if not k32.CreateProcessW(exe, command_line, None, None, False, 0, None,
                              cwd, C.byref(startup), C.byref(info)):
        print("CreateProcess failed", C.get_last_error())
        return 1

    pid = info.dwProcessId
    print(f"[poll] started pid={pid}, waiting {delay:.0f}s", flush=True)
    time.sleep(delay)

    modules = enum_modules(pid)
    history = collections.defaultdict(list)
    descriptions = {}
    for _ in range(samples):
        for tid in enum_threads(pid):
            rip = thread_rip(tid)
            if rip is None:
                continue
            descriptions[tid] = thread_description(tid)
            history[tid].append(symbolise(modules, syms, rip))
        time.sleep(interval)

    k32.TerminateProcess(info.hProcess, 0)
    k32.CloseHandle(info.hThread)
    k32.CloseHandle(info.hProcess)

    print(f"\n[poll] {samples} samples per thread; "
          f"distinct RIPs = how much that thread is executing\n", flush=True)
    ranked = sorted(history.items(), key=lambda kv: -len(set(kv[1])))
    for tid, rips in ranked:
        distinct = set(rips)
        name = descriptions.get(tid) or f"tid{tid}"
        marker = "  <<< SPINNING" if len(distinct) > 1 else ""
        print(f"[poll] {name:24} tid={tid:6} distinct={len(distinct):3}{marker}")
        for symbol in sorted(distinct, key=lambda s: -rips.count(s))[:8]:
            print(f"[poll]     {rips.count(symbol):4}x  {symbol}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
