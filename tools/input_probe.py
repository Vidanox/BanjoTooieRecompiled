"""Drive BanjoTooieRecompiled.exe with real keystrokes and report what changed.

The port has only ever been observed in attract mode; nothing has exercised the
input path. This focuses the game window, sends a key, and reports the guest
state before and after, so a keypress that reaches the game shows up as a change
in the frame counter, game mode or section.

Usage (from the project root):
    python -u tools/input_probe.py build-cmake/BanjoTooieRecompiled.exe \
        build-cmake build-cmake/BanjoTooieRecompiled.map --game bt \
        [--key=RETURN] [--wait=90] [--hold=0.2]
"""

import ctypes as C
from ctypes import wintypes
import os
import struct
import subprocess
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from minidbg import k32, find_rdram, read_mem  # noqa: E402

CREATE_NO_WINDOW = 0x08000000
user32 = C.WinDLL("user32", use_last_error=True)

# Guest globals (the ones the `[watchdog]` heartbeat reads).
FRAME_COUNT = 0x800459C8
GAME_MODE = 0x80043380
UPDATE_STATE = 0x80127630
SECTION = 0x800459CC
LOADED_OVERLAYS = 0x80117C60

# The OSContPad array the game hands to `osContGetReadData` (`func_800165F0`
# passes `0x80080000 - 0x64C0`). Each pad is 6 bytes: u16 buttons, s8 stick_x,
# s8 stick_y, u8 err_no. Reading it shows whether a keypress reaches the guest
# at all, independently of what the game does with it.
CONT_PAD = 0x80079B40
CONT_PAD_SIZE = 6
N64_BUTTONS = {
    0x8000: "A", 0x4000: "B", 0x2000: "Z", 0x1000: "START",
    0x0800: "DU", 0x0400: "DD", 0x0200: "DL", 0x0100: "DR",
    0x0020: "L", 0x0010: "R", 0x0002: "C-U", 0x0001: "C-D",
    0x0008: "C-L", 0x0004: "C-R",
}

VK = {
    "RETURN": 0x0D,
    "SPACE": 0x20,
    "A": 0x41,
    "B": 0x42,
    "W": 0x57,
    "UP": 0x26,
    "DOWN": 0x28,
    "LEFT": 0x25,
    "RIGHT": 0x27,
}


def guest_u32(hproc, rdram, addr):
    data = read_mem(hproc, rdram + (addr - 0x80000000), 4)
    return None if data is None else struct.unpack("<I", data)[0]


def read_pad(hproc, rdram, controller=0):
    """Return the raw bytes of `controller`'s pad entry, or None.

    ⚠ The fields are **not** at their struct offsets. `osContGetReadData_recomp`
    writes them with N64Recomp's accessors, which fold the N64's big-endian byte
    order into the address: `MEM_H(off, reg)` uses `(reg + off) ^ 2` and
    `MEM_B(off, reg)` uses `(reg + off) ^ 3`. So for a pad at `P`:

        button  (u16)  is at guest P ^ 2
        stick_x (s8)   is at guest (P + 2) ^ 3
        stick_y (s8)   is at guest (P + 3) ^ 3
        err_no  (u8)   is at guest (P + 4) ^ 3

    Reading the struct offsets directly returns stick_y/err_no where the buttons
    should be, which looks like a controller mashing every button at once.
    """
    base = CONT_PAD + controller * CONT_PAD_SIZE
    button = read_mem(hproc, rdram + ((base ^ 2) - 0x80000000), 2)
    stick_x = read_mem(hproc, rdram + (((base + 2) ^ 3) - 0x80000000), 1)
    stick_y = read_mem(hproc, rdram + (((base + 3) ^ 3) - 0x80000000), 1)
    err_no = read_mem(hproc, rdram + (((base + 4) ^ 3) - 0x80000000), 1)
    if None in (button, stick_x, stick_y, err_no):
        return None
    return (struct.unpack("<H", button)[0], stick_x[0], stick_y[0], err_no[0])


def describe_pad(pad):
    if pad is None:
        return "unreadable"
    buttons, sx, sy, err = pad
    signed = lambda v: v - 256 if v >= 128 else v
    names = [n for bit, n in N64_BUTTONS.items() if buttons & bit]
    return (f"buttons={buttons:#06x} stick=({signed(sx)},{signed(sy)}) "
            f"err={err} pressed={'|'.join(names) if names else '-'}")


def find_window(pid):
    """Return the main window handle owned by `pid`, if any."""
    result = []

    @C.WINFUNCTYPE(wintypes.BOOL, wintypes.HWND, wintypes.LPARAM)
    def cb(hwnd, _):
        owner = wintypes.DWORD()
        user32.GetWindowThreadProcessId(hwnd, C.byref(owner))
        if owner.value == pid and user32.IsWindowVisible(hwnd):
            length = user32.GetWindowTextLengthW(hwnd)
            if length:
                buf = C.create_unicode_buffer(length + 1)
                user32.GetWindowTextW(hwnd, buf, length + 1)
                result.append((hwnd, buf.value))
        return True

    user32.EnumWindows(cb, 0)
    return result


KEYEVENTF_KEYUP = 0x0002


class KEYBDINPUT(C.Structure):
    _fields_ = [("wVk", wintypes.WORD), ("wScan", wintypes.WORD),
                ("dwFlags", wintypes.DWORD), ("time", wintypes.DWORD),
                ("dwExtraInfo", C.POINTER(wintypes.ULONG))]


class INPUT(C.Structure):
    class _U(C.Union):
        _fields_ = [("ki", KEYBDINPUT), ("padding", C.c_byte * 24)]
    _anonymous_ = ("u",)
    _fields_ = [("type", wintypes.DWORD), ("u", _U)]


def _send(scan, flags):
    event = INPUT(type=1, ki=KEYBDINPUT(0, scan, flags, 0, None))
    user32.SendInput(1, C.byref(event), C.sizeof(INPUT))


def press_key_down(scan):
    _send(scan, 0)


def press_key_up(scan):
    _send(scan, KEYEVENTF_KEYUP)


def send_key(vk, hold):
    """Press and release `vk` through SendInput (scan-code based)."""
    scan = user32.MapVirtualKeyW(vk, 0)  # MAPVK_VK_TO_VSC
    press_key_down(scan)
    time.sleep(hold)
    press_key_up(scan)


def main():
    if len(sys.argv) < 4:
        print(__doc__)
        return 1
    exe, cwd, map_path = sys.argv[1], sys.argv[2], sys.argv[3]
    key = "RETURN"
    wait = 90.0
    hold = 0.2
    args = []
    for a in sys.argv[4:]:
        if a.startswith("--key="):
            key = a.split("=", 1)[1].upper()
        elif a.startswith("--wait="):
            wait = float(a.split("=", 1)[1])
        elif a.startswith("--hold="):
            hold = float(a.split("=", 1)[1])
        else:
            args.append(a)
    if key not in VK:
        print(f"[in] unknown key {key}; known: {sorted(VK)}")
        return 1

    log_path = os.path.join(cwd, "input_game.log")
    game_log = open(log_path, "wb")
    proc = subprocess.Popen([exe] + args, stdout=game_log,
                            stderr=subprocess.STDOUT, cwd=cwd,
                            creationflags=CREATE_NO_WINDOW)
    pid = proc.pid
    hproc = k32.OpenProcess(0x0400 | 0x0010 | 0x0020 | 0x0008, False, pid)
    print(f"[in] pid={pid} key={key} wait={wait}s hold={hold}s", flush=True)

    rdram = None
    started = time.time()
    while time.time() - started < wait:
        time.sleep(1)
        if proc.poll() is not None:
            print(f"[in] game exited rc={proc.returncode:#x}")
            game_log.close()
            return 1
        if rdram is None:
            found = find_rdram(hproc)
            if found:
                rdram = found[0]
                print(f"[in] rdram {rdram:#x}", flush=True)

    wins = find_window(pid)
    print(f"[in] windows: {[(hex(h), t) for h, t in wins]}", flush=True)
    if not wins:
        print("[in] no window found; cannot deliver input")
        proc.kill(); game_log.close()
        return 1
    hwnd = wins[0][0]

    def snap(tag):
        frame = guest_u32(hproc, rdram, FRAME_COUNT)
        mode = guest_u32(hproc, rdram, GAME_MODE)
        upd = guest_u32(hproc, rdram, UPDATE_STATE)
        sec = guest_u32(hproc, rdram, SECTION)
        ovl = guest_u32(hproc, rdram, LOADED_OVERLAYS)
        show = lambda v: "?" if v is None else f"{v:#010x}"
        print(f"[in] {tag}: frame={frame} mode={mode} update={show(upd)} "
              f"section={sec} overlays={ovl}", flush=True)
        return (frame, mode, upd, sec, ovl)

    before = snap("before")
    print(f"[in] pad before: {describe_pad(read_pad(hproc, rdram))}", flush=True)
    print(f"[in] focusing {hex(hwnd)}", flush=True)
    user32.SetForegroundWindow(hwnd)
    time.sleep(0.5)

    print(f"[in] sending {key}", flush=True)
    # Hold the key down across several samples so a pad update cannot be missed
    # between polls.
    scan = user32.MapVirtualKeyW(VK[key], 0)
    press_key_down(scan)
    seen = []
    for _ in range(10):
        time.sleep(0.1)
        seen.append(describe_pad(read_pad(hproc, rdram)))
    press_key_up(scan)
    for desc in seen[:3] + seen[-2:]:
        print(f"[in]   while held: {desc}", flush=True)
    time.sleep(1.0)
    print(f"[in] pad after: {describe_pad(read_pad(hproc, rdram))}", flush=True)

    for _ in range(2):
        send_key(VK[key], hold)
        time.sleep(0.6)
    time.sleep(4)
    after = snap("after")
    changed = [n for n, a, b in zip(
        ("frame", "mode", "update", "section", "overlays"), before, after) if a != b]
    print(f"[in] changed fields: {changed if changed else 'NONE'}", flush=True)

    proc.kill()
    game_log.close()
    return 0


if __name__ == "__main__":
    sys.exit(main())
