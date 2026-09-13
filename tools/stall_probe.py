"""Wait for the game to freeze, then dump the guest state that froze it.

`stack_sample.py` samples a fixed delay; this samples *the stall*. It polls
Tooie's own frame counter in RDRAM, and once that counter has advanced and then
stopped for a few seconds, it dumps:

* every guest thread's stack (via `stack_sample.thread_stacks`), so the blocked
  call chain is visible, and
* the game's own message queues and the state of its effect-slot tables, so the
  empty queue / held slot can be named.

Usage (from the project root):
    python -u tools/stall_probe.py build-cmake/BanjoTooieRecompiled.exe \
        build-cmake build-cmake/BanjoTooieRecompiled.map --game bt
"""

import ctypes as C
import os
import struct
import subprocess
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from minidbg import (  # noqa: E402
    k32, enum_modules, enum_threads, load_map, find_rdram, read_mem,
)
from stack_sample import thread_stacks  # noqa: E402

CREATE_NO_WINDOW = 0x08000000

# Tooie globals (the ones the `[watchdog]` heartbeat reads).
FRAME_COUNT = 0x800459C8
GAME_MODE = 0x80043380
UPDATE_STATE = 0x80127630

# The game's own message queues, as identified in AGENTS.md.
QUEUES = {
    "VI event": 0x80078FD0,
    "frame barrier": 0x80079010,
    "retrace": 0x80079030,
    "RDP completion": 0x800783D0,
}

# `func_800C1414(index)` = ENTRY_ARRAY + (index & 0xFF) * 0x80: the effect
# entries the level-load gate (`func_800C2AB8`) sweeps.
ENTRY_ARRAY = 0x80128B90
ENTRY_STRIDE = 0x80
ENTRY_COUNT = 60
# `func_800C1448(index)` = SLOT_TABLE + index * 8; word 0 is the slot's value,
# word 1 a flag (`func_800C1568` clears the value).
SLOT_TABLE = 0x80128B08
SLOT_COUNT = 24


def guest_u32(hproc, rdram, addr):
    data = read_mem(hproc, rdram + (addr - 0x80000000), 4)
    return None if data is None else struct.unpack("<I", data)[0]


def guest_u8(hproc, rdram, addr):
    """Guest byte at `addr`.

    RDRAM is stored as host words, and the recompiler's `MEM_BU(offset, reg)`
    reads `*(uint8_t*)(rdram + ((addr ^ 3) - base))` -- the low two address bits
    are XORed with 3. Reading the byte at the host address directly therefore
    returns a *different* guest byte, which is how the first pass at this
    mis-identified the entry field as `0x6C` instead of `0x02`.
    """
    data = read_mem(hproc, rdram + ((addr ^ 3) - 0x80000000), 1)
    return None if data is None else data[0]


def dump_queues(hproc, rdram):
    print("[probe] --- guest message queues ---", flush=True)
    for name, addr in QUEUES.items():
        full = guest_u32(hproc, rdram, addr + 0x00)
        empty = guest_u32(hproc, rdram, addr + 0x04)
        count = guest_u32(hproc, rdram, addr + 0x08)
        print(f"[probe]   {name:16} @ {addr:#010x} count={count} "
              f"full={full:#010x} empty={empty:#010x}", flush=True)


def dump_words(hproc, rdram, addr, count, label):
    print(f"[probe]   {label} @ {addr:#010x}:", flush=True)
    for row in range(0, count, 4):
        vals = [guest_u32(hproc, rdram, addr + 4 * (row + i))
                for i in range(4)]
        if any(v is None for v in vals):
            print("[probe]     <unreadable>", flush=True)
            return
        cells = " ".join(f"{v:#010x}" for v in vals)
        print(f"[probe]     +{4 * row:#04x}: {cells}", flush=True)


def dump_gate(hproc, rdram):
    print("[probe] --- effect entries (func_800C1414) ---", flush=True)
    active = []
    for i in range(ENTRY_COUNT):
        base = ENTRY_ARRAY + i * ENTRY_STRIDE
        word78 = guest_u32(hproc, rdram, base + 0x78)
        b78 = guest_u8(hproc, rdram, base + 0x78)
        b79 = guest_u8(hproc, rdram, base + 0x79)
        if word78 == 0:
            continue
        state = ((word78 << 19) & 0xFFFFFFFF) >> 29
        print(f"[probe]   entry {i:2} @ {base:#010x} w78={word78:#010x} "
              f"b78={b78:#04x} b79={b79:#04x} state={state}", flush=True)
        if b78:
            active.append((i, base, b79))
    print("[probe] --- effect slots (func_800C1448) ---", flush=True)
    for i in range(SLOT_COUNT):
        addr = SLOT_TABLE + i * 8
        value = guest_u32(hproc, rdram, addr)
        flag = guest_u32(hproc, rdram, addr + 4)
        if value or flag:
            print(f"[probe]   slot {i:2} @ {addr:#010x} value={value:#010x} "
                  f"flag={flag:#010x}", flush=True)
    for i, base, slot in active:
        dump_words(hproc, rdram, base, ENTRY_STRIDE,
                   f"entry {i} body (slot {slot})", )
        if slot:
            value = guest_u32(hproc, rdram, SLOT_TABLE + slot * 8)
            if value:
                dump_words(hproc, rdram, value, 0x40,
                           f"slot {slot} target")


def main():
    if len(sys.argv) < 4:
        print(__doc__)
        return 1
    exe, cwd, map_path = sys.argv[1], sys.argv[2], sys.argv[3]
    args = [a for a in sys.argv[4:]]

    syms = load_map(map_path)
    print(f"[probe] loaded {len(syms)} symbols from map", flush=True)

    # Launch with the game's own streams redirected into files. The guest's
    # `[[patches.hook]]` probes write to stderr, so without this the run's
    # evidence goes to a separate console window and the probe's log shows
    # nothing -- and every launch pops up another window.
    log_path = os.path.join(cwd, "stall_game.log")
    game_log = open(log_path, "wb")
    env = dict(os.environ)
    proc = subprocess.Popen([exe] + args, stdout=game_log,
                            stderr=subprocess.STDOUT, cwd=cwd, env=env,
                            creationflags=CREATE_NO_WINDOW)
    pid = proc.pid
    hproc = k32.OpenProcess(0x0400 | 0x0010 | 0x0020 | 0x0008, False, pid)
    print(f"[probe] started pid={pid} game log={log_path}", flush=True)

    rdram = None
    frozen = 0
    last = None
    started = time.time()
    deadline = started + 240
    while time.time() < deadline:
        time.sleep(2)
        if proc.poll() is not None:
            print(f"[probe] game exited rc={proc.returncode:#x} "
                  f"after {int(time.time() - started)}s", flush=True)
            break
        if rdram is None:
            found = find_rdram(hproc)
            if not found:
                continue
            rdram = found[0]
            print(f"[probe] rdram base={rdram:#x}", flush=True)
        frame = guest_u32(hproc, rdram, FRAME_COUNT)
        mode = guest_u32(hproc, rdram, GAME_MODE)
        state = guest_u32(hproc, rdram, UPDATE_STATE)
        show = (lambda v: "?" if v is None else f"{v:#010x}")
        print(f"[probe] t={int(time.time() - started)}s frame={frame} "
              f"mode={mode} update={show(state)}", flush=True)
        if last is not None and frame == last:
            frozen += 1
        else:
            frozen = 0
        last = frame
        if frozen >= 3 and frame:
            break

    # Enumerate the modules only now: right after launch the loader has not
    # finished mapping them, and every stack frame then symbolises to nothing.
    mods = enum_modules(pid)
    print(f"[probe] {len(mods)} modules mapped", flush=True)

    exit_code = C.c_ulong(0)
    k32.GetExitCodeProcess(hproc, C.byref(exit_code))
    alive = exit_code.value == 259
    print(f"[probe] frozen at frame={last} alive={alive} "
          f"exit={exit_code.value:#x}", flush=True)
    if rdram is not None and alive:
        dump_queues(hproc, rdram)
        dump_gate(hproc, rdram)
    if not alive:
        game_log.close()
        return 0

    print("[probe] --- guest thread stacks ---", flush=True)
    tids = enum_threads(pid)
    print(f"[probe] {len(tids)} threads", flush=True)
    for tid, desc, rip, rsp, rbp, lo, hi, frames in thread_stacks(
            hproc, pid, mods, syms):
        print(f"[probe] tid={tid} desc='{desc}' RIP={rip:#x}", flush=True)
        for addr, sym in frames[:50]:
            print(f"[probe]     {sym}", flush=True)

    proc.kill()
    game_log.close()
    return 0

if __name__ == "__main__":
    sys.exit(main())
