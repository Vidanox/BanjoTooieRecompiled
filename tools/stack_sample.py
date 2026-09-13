"""Sample the call stacks of a running BanjoTooieRecompiled.exe.

`minidbg.py` only reports state when the process *faults*. A hang or a stall
never produces an exception, so it says nothing about a run that stays alive
but makes no visible progress. This launches the game, waits, then suspends
every thread and walks each stack, symbolising every code pointer against the
linker map. The result is the exact recompiled-function call chain per thread.

Usage (from the project root):
    python -u tools/stack_sample.py build-cmake/BanjoTooieRecompiled.exe \
        build-cmake build-cmake/BanjoTooieRecompiled.map --game bt [delay_seconds]
"""

import ctypes as C
from ctypes import wintypes
import os
import struct
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from minidbg import (  # noqa: E402
    k32, ntdll, MODULEENTRY32W, THREADENTRY32, THREAD_BASIC_INFORMATION,
    STARTUPINFOW, PROCESS_INFORMATION,
    enum_threads, enum_modules, load_map, read_mem, resolve,
)

THREAD_GET_CONTEXT = 0x0008
THREAD_SUSPEND_RESUME = 0x0002
THREAD_QUERY_INFORMATION = 0x0040
THREAD_QUERY_LIMITED_INFORMATION = 0x0800
CONTEXT_ALL_AMD64 = 0x0010001F
CREATE_NEW_CONSOLE = 0x00000010

# Only stack slots inside these guest ranges are worth reporting; a stray host
# pointer that happens to land in the exe image is not a call frame.
MAX_FRAMES = 80


def thread_stacks(hproc, pid, mods, syms):
    """Yield (tid, description, rip_sym, [frame symbols]) for every thread."""
    for tid in enum_threads(pid):
        th = k32.OpenThread(THREAD_GET_CONTEXT | THREAD_SUSPEND_RESUME |
                            THREAD_QUERY_INFORMATION |
                            THREAD_QUERY_LIMITED_INFORMATION, False, tid)
        if not th:
            print(f"[sample] tid={tid}: OpenThread failed err={C.get_last_error()}", flush=True)
            continue
        k32.SuspendThread(th)
        try:
            desc = wintypes.LPWSTR()
            k32.GetThreadDescription(th, C.byref(desc))
            ds = desc.value if desc.value else ""

            ctx = (C.c_byte * 1232)()
            struct.pack_into('<I', ctx, 0x30, CONTEXT_ALL_AMD64)
            if not k32.GetThreadContext(th, C.byref(ctx)):
                print(f"[sample] tid={tid} desc='{ds}': GetThreadContext failed", flush=True)
                continue
            rip = struct.unpack_from('<Q', ctx, 0xF8)[0]
            rsp = struct.unpack_from('<Q', ctx, 0x98)[0]
            rbp = struct.unpack_from('<Q', ctx, 0xA0)[0]

            tbi = THREAD_BASIC_INFORMATION()
            ret = wintypes.ULONG(0)
            ntdll.NtQueryInformationThread(th, 0, C.byref(tbi), C.sizeof(tbi),
                                           C.byref(ret))
            stack_lo, stack_hi = rsp, rsp + 0x200000
            if tbi.TebBaseAddress:
                teb = read_mem(hproc, tbi.TebBaseAddress, 0x20)
                if teb:
                    stack_hi = struct.unpack_from('<Q', teb, 0x08)[0]
                    stack_lo = struct.unpack_from('<Q', teb, 0x10)[0]

            frames = []
            cur = rsp & ~0xFFF
            while cur < stack_hi and len(frames) < MAX_FRAMES:
                chunk = read_mem(hproc, cur, min(0x1000, stack_hi - cur))
                if chunk is not None:
                    for i in range(0, len(chunk) - 8 + 1, 8):
                        v = struct.unpack_from('<Q', chunk, i)[0]
                        for b, sz, name in mods:
                            if b <= v < b + sz:
                                frames.append(
                                    (cur + i,
                                     resolve(syms, v - b) if name.lower().startswith("banjotooie")
                                     else f"{name}+0x{v - b:X}"))
                                break
                        if len(frames) >= MAX_FRAMES:
                            break
                cur += 0x1000

            yield tid, ds, rip, rsp, rbp, stack_lo, stack_hi, frames
        finally:
            k32.ResumeThread(th)
            k32.CloseHandle(th)


def main():
    exe = sys.argv[1]
    cwd = sys.argv[2]
    map_path = sys.argv[3]
    rest = sys.argv[4:]
    delay = 30.0
    samples = 1
    interval = 30.0
    opts = []
    for a in rest:
        if a.startswith('--delay='):
            delay = float(a.split('=', 1)[1])
        elif a.startswith('--samples='):
            samples = int(a.split('=', 1)[1])
        elif a.startswith('--interval='):
            interval = float(a.split('=', 1)[1])
        else:
            opts.append(a)
    rest = opts

    syms = load_map(map_path)
    print(f"[sample] loaded {len(syms)} symbols from map", flush=True)

    si = STARTUPINFOW()
    si.cb = C.sizeof(si)
    pi = PROCESS_INFORMATION()
    cmdline = C.create_unicode_buffer(" ".join(['"' + exe + '"'] + rest))
    ok = k32.CreateProcessW(exe, cmdline, None, None, False, 0, None, cwd,
                            C.byref(si), C.byref(pi))
    if not ok:
        print("CreateProcess failed", C.get_last_error())
        return 1
    print(f"[sample] started pid={pi.dwProcessId}, waiting {delay:.0f}s", flush=True)

    time.sleep(delay)

    mods = enum_modules(pi.dwProcessId)
    exe_base = exe_size = 0
    for b, sz, name in mods:
        if name.lower().startswith("banjotooie"):
            exe_base, exe_size = b, sz
    print(f"[sample] exe base=0x{exe_base:X} size=0x{exe_size:X}", flush=True)

    for round_index in range(samples):
        if round_index:
            time.sleep(interval)
        stamp = delay + round_index * interval
        print(f"\n########## SAMPLE at t={stamp:.0f}s ##########", flush=True)
        for tid, ds, rip, rsp, rbp, lo, hi, frames in thread_stacks(pi.hProcess, pi.dwProcessId, mods, syms):
            rip_sym = None
            for b, sz, name in mods:
                if b <= rip < b + sz:
                    rip_sym = (resolve(syms, rip - b) if name.lower().startswith("banjotooie")
                               else f"{name}+0x{rip - b:X}")
                    break
            print(f"\n[sample] tid={tid} desc='{ds}'", flush=True)
            print(f"[sample]   RIP={rip_sym} RSP=0x{rsp:X} RBP=0x{rbp:X} "
                  f"stack=[0x{lo:X},0x{hi:X}]", flush=True)
            for addr, s in frames:
                print(f"[sample]     [0x{addr:X}] {s}", flush=True)

    k32.TerminateProcess(pi.hProcess, 0)
    k32.CloseHandle(pi.hThread)
    k32.CloseHandle(pi.hProcess)
    return 0


if __name__ == '__main__':
    sys.exit(main())
