"""Capture the game window so the rendered scene can be inspected.

The render path is known to *animate* (pixel diffs between captures differ), but
nothing has ever compared the output against the real game, so missing textures,
wrong colours and geometry errors are invisible to every numeric measurement
this project takes. This grabs the window as a PNG so it can be looked at.

`PW_RENDERFULLCONTENT` (flag 2) is required: a plain `BitBlt`, or `PrintWindow`
with flags 0, returns an empty buffer for a flip-model D3D swapchain.

Usage (from the project root):
    python -u tools/capture.py build-cmake/BanjoTooieRecompiled.exe \
        build-cmake --game bt --shots=90,150,210 --outdir=build/captures
"""

import ctypes as C
from ctypes import wintypes
import os
import subprocess
import sys
import time

from PIL import Image  # noqa: E402

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

CREATE_NO_WINDOW = 0x08000000
user32 = C.WinDLL("user32", use_last_error=True)
gdi32 = C.WinDLL("gdi32", use_last_error=True)
PW_RENDERFULLCONTENT = 0x00000002
SRCCOPY = 0x00CC0020
DIB_RGB_COLORS = 0


class BITMAPINFOHEADER(C.Structure):
    _fields_ = [("biSize", wintypes.DWORD), ("biWidth", wintypes.LONG),
                ("biHeight", wintypes.LONG), ("biPlanes", wintypes.WORD),
                ("biBitCount", wintypes.WORD), ("biCompression", wintypes.DWORD),
                ("biSizeImage", wintypes.DWORD),
                ("biXPelsPerMeter", wintypes.LONG),
                ("biYPelsPerMeter", wintypes.LONG),
                ("biClrUsed", wintypes.DWORD), ("biClrImportant", wintypes.DWORD)]


class BITMAPINFO(C.Structure):
    _fields_ = [("bmiHeader", BITMAPINFOHEADER),
                ("bmiColors", wintypes.DWORD * 3)]


def find_window(pid):
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


def capture(hwnd, path):
    rect = wintypes.RECT()
    user32.GetClientRect(hwnd, C.byref(rect))
    width, height = rect.right - rect.left, rect.bottom - rect.top
    if width <= 0 or height <= 0:
        return None
    wdc = user32.GetWindowDC(hwnd)
    mdc = gdi32.CreateCompatibleDC(wdc)
    bmp = gdi32.CreateCompatibleBitmap(wdc, width, height)
    gdi32.SelectObject(mdc, bmp)
    ok = user32.PrintWindow(hwnd, mdc, PW_RENDERFULLCONTENT)
    info = BITMAPINFO()
    info.bmiHeader.biSize = C.sizeof(BITMAPINFOHEADER)
    info.bmiHeader.biWidth = width
    info.bmiHeader.biHeight = -height          # negative => top-down rows
    info.bmiHeader.biPlanes = 1
    info.bmiHeader.biBitCount = 32
    info.bmiHeader.biCompression = 0           # BI_RGB
    buf = C.create_string_buffer(width * height * 4)
    gdi32.GetDIBits(mdc, bmp, 0, height, buf, C.byref(info), DIB_RGB_COLORS)
    gdi32.DeleteObject(bmp)
    gdi32.DeleteDC(mdc)
    user32.ReleaseDC(hwnd, wdc)
    image = Image.frombuffer("RGBA", (width, height), buf.raw,
                             "raw", "BGRA", 0, 1).convert("RGB")
    image.save(path)
    return ok, width, height, image


def main():
    if len(sys.argv) < 3:
        print(__doc__)
        return 1
    exe, cwd = sys.argv[1], sys.argv[2]
    shots = [90.0, 150.0, 210.0]
    outdir = os.path.join(cwd, "captures")
    args = []
    for a in sys.argv[3:]:
        if a.startswith("--shots="):
            shots = [float(x) for x in a.split("=", 1)[1].split(",")]
        elif a.startswith("--outdir="):
            outdir = a.split("=", 1)[1]
        else:
            args.append(a)
    os.makedirs(outdir, exist_ok=True)

    log = open(os.path.join(cwd, "capture_game.log"), "wb")
    proc = subprocess.Popen([exe] + args, stdout=log, stderr=subprocess.STDOUT,
                            cwd=cwd, creationflags=CREATE_NO_WINDOW)
    print(f"[cap] pid={proc.pid} shots={shots} outdir={outdir}", flush=True)

    started = time.time()
    hwnd = None
    for target in shots:
        while time.time() - started < target:
            time.sleep(0.5)
            if proc.poll() is not None:
                print(f"[cap] game exited rc={proc.returncode:#x}")
                log.close()
                return 1
        if hwnd is None:
            wins = find_window(proc.pid)
            print(f"[cap] windows: {[(hex(h), t) for h, t in wins]}", flush=True)
            if not wins:
                print("[cap] no window")
                proc.kill(); log.close()
                return 1
            hwnd = wins[0][0]
        path = os.path.join(outdir, f"t{int(target):03d}.png")
        got = capture(hwnd, path)
        if got is None:
            print(f"[cap] t={target:.0f}s: zero-size window")
            continue
        ok, w, h, img = got
        colours = img.getcolors(maxcolors=1 << 24) or []
        top = sorted(colours, reverse=True)[:3]
        print(f"[cap] t={target:.0f}s -> {path} {w}x{h} PrintWindow={ok} "
              f"distinct_colours={len(colours)} top={top}", flush=True)

    proc.kill()
    log.close()
    return 0


if __name__ == "__main__":
    sys.exit(main())
