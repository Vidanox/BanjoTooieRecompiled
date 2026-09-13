import ctypes as C
from ctypes import wintypes
import sys, re, struct

k32 = C.WinDLL('kernel32', use_last_error=True)
ntdll = C.WinDLL('ntdll', use_last_error=True)

DEBUG_ONLY_THIS_PROCESS = 0x00000002
DBG_CONTINUE = 0x00010002
DBG_EXCEPTION_NOT_HANDLED = 0x80010001

EXCEPTION_DEBUG_EVENT = 1
EXIT_PROCESS_DEBUG_EVENT = 5

CONTEXT_ALL_AMD64 = 0x0010001F
TH32CS_SNAPMODULE = 0x00000008
TH32CS_SNAPMODULE32 = 0x00000010


class STARTUPINFOW(C.Structure):
    _fields_ = [
        ("cb", wintypes.DWORD), ("lpReserved", wintypes.LPWSTR),
        ("lpDesktop", wintypes.LPWSTR), ("lpTitle", wintypes.LPWSTR),
        ("dwX", wintypes.DWORD), ("dwY", wintypes.DWORD),
        ("dwXSize", wintypes.DWORD), ("dwYSize", wintypes.DWORD),
        ("dwXCountChars", wintypes.DWORD), ("dwYCountChars", wintypes.DWORD),
        ("dwFillAttribute", wintypes.DWORD), ("dwFlags", wintypes.DWORD),
        ("wShowWindow", wintypes.WORD), ("cbReserved2", wintypes.WORD),
        ("lpReserved2", C.c_void_p), ("hStdInput", wintypes.HANDLE),
        ("hStdOutput", wintypes.HANDLE), ("hStdError", wintypes.HANDLE),
    ]


class PROCESS_INFORMATION(C.Structure):
    _fields_ = [("hProcess", wintypes.HANDLE), ("hThread", wintypes.HANDLE),
                ("dwProcessId", wintypes.DWORD), ("dwThreadId", wintypes.DWORD)]


class EXCEPTION_RECORD(C.Structure):
    _fields_ = [
        ("ExceptionCode", wintypes.DWORD), ("ExceptionFlags", wintypes.DWORD),
        ("ExceptionRecord", C.c_void_p), ("ExceptionAddress", C.c_void_p),
        ("NumberParameters", wintypes.DWORD), ("__unusedAlignment", wintypes.DWORD),
        ("ExceptionInformation", C.c_void_p * 15),
    ]


class EXCEPTION_DEBUG_INFO(C.Structure):
    _fields_ = [("ExceptionRecord", EXCEPTION_RECORD), ("dwFirstChance", wintypes.DWORD)]


class DEBUG_EVENT_UNION(C.Union):
    _fields_ = [("Exception", EXCEPTION_DEBUG_INFO), ("_pad", C.c_byte * 160)]


class DEBUG_EVENT(C.Structure):
    _fields_ = [("dwDebugEventCode", wintypes.DWORD), ("dwProcessId", wintypes.DWORD),
                ("dwThreadId", wintypes.DWORD), ("u", DEBUG_EVENT_UNION)]


class MODULEENTRY32W(C.Structure):
    _fields_ = [
        ("dwSize", wintypes.DWORD), ("th32ModuleID", wintypes.DWORD),
        ("th32ProcessID", wintypes.DWORD), ("GlblcntUsage", wintypes.DWORD),
        ("ProccntUsage", wintypes.DWORD), ("modBaseAddr", C.c_void_p),
        ("modBaseSize", wintypes.DWORD), ("hModule", wintypes.HMODULE),
        ("szModule", wintypes.WCHAR * 256), ("szExePath", wintypes.WCHAR * 260),
    ]


class CLIENT_ID(C.Structure):
    _fields_ = [("UniqueProcess", C.c_void_p), ("UniqueThread", C.c_void_p)]


class THREAD_BASIC_INFORMATION(C.Structure):
    _fields_ = [("ExitStatus", C.c_long), ("_pad", C.c_long),
                ("TebBaseAddress", C.c_void_p), ("ClientId", CLIENT_ID),
                ("AffinityMask", C.c_void_p), ("Priority", C.c_long),
                ("BasePriority", C.c_long)]


class THREADENTRY32(C.Structure):
    _fields_ = [("dwSize", wintypes.DWORD), ("cntUsage", wintypes.DWORD),
                ("th32ThreadID", wintypes.DWORD), ("th32OwnerProcessID", wintypes.DWORD),
                ("tpBasePri", wintypes.LONG), ("tpDeltaPri", wintypes.LONG),
                ("dwFlags", wintypes.DWORD)]


k32.CreateProcessW.restype = wintypes.BOOL
k32.CreateProcessW.argtypes = [wintypes.LPCWSTR, wintypes.LPWSTR, C.c_void_p, C.c_void_p,
                               wintypes.BOOL, wintypes.DWORD, C.c_void_p, wintypes.LPCWSTR,
                               C.POINTER(STARTUPINFOW), C.POINTER(PROCESS_INFORMATION)]
k32.WaitForDebugEvent.argtypes = [C.POINTER(DEBUG_EVENT), wintypes.DWORD]
k32.ContinueDebugEvent.argtypes = [wintypes.DWORD, wintypes.DWORD, wintypes.DWORD]
k32.OpenThread.restype = wintypes.HANDLE
k32.OpenThread.argtypes = [wintypes.DWORD, wintypes.BOOL, wintypes.DWORD]
k32.GetThreadContext.argtypes = [wintypes.HANDLE, C.c_void_p]
k32.ReadProcessMemory.argtypes = [wintypes.HANDLE, C.c_void_p, C.c_void_p, C.c_size_t, C.POINTER(C.c_size_t)]
k32.CreateToolhelp32Snapshot.restype = wintypes.HANDLE
k32.CreateToolhelp32Snapshot.argtypes = [wintypes.DWORD, wintypes.DWORD]
k32.Module32FirstW.argtypes = [wintypes.HANDLE, C.POINTER(MODULEENTRY32W)]
k32.Module32NextW.argtypes = [wintypes.HANDLE, C.POINTER(MODULEENTRY32W)]
k32.Thread32First.argtypes = [wintypes.HANDLE, C.POINTER(THREADENTRY32)]
k32.Thread32Next.argtypes = [wintypes.HANDLE, C.POINTER(THREADENTRY32)]
k32.GetThreadDescription.argtypes = [wintypes.HANDLE, C.POINTER(wintypes.LPWSTR)]
ntdll.NtQueryInformationThread.argtypes = [wintypes.HANDLE, C.c_int, C.c_void_p, wintypes.ULONG, C.POINTER(wintypes.ULONG)]


class MEMORY_BASIC_INFORMATION(C.Structure):
    _fields_ = [("BaseAddress", C.c_void_p), ("AllocationBase", C.c_void_p),
                ("AllocationProtect", wintypes.DWORD), ("__pad1", wintypes.DWORD),
                ("RegionSize", C.c_size_t), ("State", wintypes.DWORD),
                ("Protect", wintypes.DWORD), ("Type", wintypes.DWORD),
                ("__pad2", wintypes.DWORD)]


k32.VirtualQueryEx.restype = C.c_size_t
k32.VirtualQueryEx.argtypes = [wintypes.HANDLE, C.c_void_p, C.POINTER(MEMORY_BASIC_INFORMATION), C.c_size_t]


def find_rdram(hproc):
    # rdram is one large MEM_COMMIT|MEM_RESERVE PAGE_READWRITE private alloc.
    #
    # Matching "largest committed private region" is wrong: the runtime reserves
    # 4 GiB and leaves the 3.5 GiB past its 512 MiB of RDRAM committed but
    # PAGE_NOACCESS, and that tail is the largest such region. Requiring the
    # region to be writable picks the real RDRAM (this is the bug AGENTS.md
    # warns about -- every guest-address printout was garbage before).
    addr = 0
    best = None
    mbi = MEMORY_BASIC_INFORMATION()
    while addr < 0x7FFFFFFFFFFF:
        r = k32.VirtualQueryEx(hproc, C.c_void_p(addr), C.byref(mbi), C.sizeof(mbi))
        if r == 0:
            break
        if (mbi.State == 0x1000 and mbi.Type == 0x20000
                and (mbi.Protect & 0x04) and mbi.RegionSize >= 0x800000):
            if best is None or mbi.RegionSize > best[1]:
                best = (mbi.BaseAddress or 0, mbi.RegionSize, mbi.Protect)
        addr = (mbi.BaseAddress or 0) + mbi.RegionSize
        if addr == 0:
            break
    return best


def load_map(path):
    syms = []
    pref = None
    pat = re.compile(r'^\s+[0-9a-f]{4}:[0-9a-f]{8}\s+(\S+)\s+([0-9a-f]{16})\s')
    prefpat = re.compile(r'Preferred load address is ([0-9a-fA-F]+)')
    with open(path, 'r', errors='ignore') as f:
        for line in f:
            m = prefpat.search(line)
            if m:
                pref = int(m.group(1), 16)
            m = pat.match(line)
            if m and pref is not None:
                syms.append((int(m.group(2), 16) - pref, m.group(1)))
    syms.sort()
    return syms


def resolve(syms, addr):
    lo, hi = 0, len(syms) - 1
    best = None
    while lo <= hi:
        mid = (lo + hi) // 2
        if syms[mid][0] <= addr:
            best = syms[mid]
            lo = mid + 1
        else:
            hi = mid - 1
    if best is None:
        return "?"
    return f"{best[1]}+0x{addr - best[0]:X}"


def read_mem(hproc, addr, size):
    buf = (C.c_byte * size)()
    n = C.c_size_t(0)
    ok = k32.ReadProcessMemory(hproc, C.c_void_p(addr), buf, size, C.byref(n))
    if not ok:
        return None
    return C.string_at(C.addressof(buf), n.value)


def enum_threads(pid):
    snap = k32.CreateToolhelp32Snapshot(0x00000004, pid)  # TH32CS_SNAPTHREAD
    out = []
    if snap == -1:
        return out
    te = THREADENTRY32()
    te.dwSize = C.sizeof(te)
    ok = k32.Thread32First(snap, C.byref(te))
    while ok:
        if te.th32OwnerProcessID == pid:
            out.append(te.th32ThreadID)
        ok = k32.Thread32Next(snap, C.byref(te))
    k32.CloseHandle(snap)
    return out


def enum_modules(pid):
    snap = k32.CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid)
    mods = []
    if snap == wintypes.HANDLE(-1).value or snap == -1:
        return mods
    me = MODULEENTRY32W()
    me.dwSize = C.sizeof(me)
    ok = k32.Module32FirstW(snap, C.byref(me))
    while ok:
        mods.append((me.modBaseAddr or 0, me.modBaseSize, me.szModule))
        ok = k32.Module32NextW(snap, C.byref(me))
    k32.CloseHandle(snap)
    return mods


def main():
    exe = sys.argv[1]
    cwd = sys.argv[2]
    map_path = sys.argv[3]
    extra_args = sys.argv[4:]
    syms = load_map(map_path)
    print(f"[dbg] loaded {len(syms)} symbols from map", flush=True)

    si = STARTUPINFOW()
    si.cb = C.sizeof(si)
    pi = PROCESS_INFORMATION()
    cmdline = C.create_unicode_buffer(" ".join(['"' + exe + '"'] + extra_args))
    ok = k32.CreateProcessW(exe, cmdline, None, None, False,
                            DEBUG_ONLY_THIS_PROCESS, None, cwd, C.byref(si), C.byref(pi))
    if not ok:
        print("CreateProcess failed", C.get_last_error())
        return
    print(f"[dbg] started pid={pi.dwProcessId}", flush=True)

    captured = False
    while True:
        de = DEBUG_EVENT()
        if not k32.WaitForDebugEvent(C.byref(de), 0xFFFFFFFF):
            print("[dbg] WaitForDebugEvent failed", C.get_last_error())
            break
        code = de.dwDebugEventCode
        if code == EXCEPTION_DEBUG_EVENT:
            er = de.u.Exception.ExceptionRecord
            exc = er.ExceptionCode
            first = de.u.Exception.dwFirstChance
            if exc not in (0x40010006, 0x4001000A, 0x406D1388):
                print(f"[dbg] exception code=0x{exc:08X} first={first} addr=0x{er.ExceptionAddress or 0:X} tid={de.dwThreadId}", flush=True)
            if exc == 0xC0000409 or exc == 0xC0000005:
                mods = enum_modules(pi.dwProcessId)
                print(f"[dbg] modules: {len(mods)}", flush=True)
                fault = er.ExceptionAddress or 0
                for b, sz, name in mods:
                    if b <= fault < b + sz:
                        print(f"[dbg] fault in {name} base=0x{b:X} off=0x{fault-b:X}", flush=True)
                print(f"[dbg] fastfail params n={er.NumberParameters} "
                      f"code=0x{er.ExceptionInformation[0] or 0:X}", flush=True)
                if er.NumberParameters >= 2:
                    print(f"[dbg] faulting address=0x{er.ExceptionInformation[1] or 0:X}", flush=True)
                rdram = find_rdram(pi.hProcess)
                if rdram:
                    print(f"[dbg] rdram base=0x{rdram[0]:X} size=0x{rdram[1]:X} prot=0x{rdram[2]:X}", flush=True)
                    fa = er.ExceptionInformation[1] or 0
                    if rdram[0] <= fa < rdram[0] + rdram[1]:
                        print(f"[dbg] faulting guest offset=0x{fa-rdram[0]:X} (KSEG0 0x{0x80000000+(fa-rdram[0]):08X})", flush=True)
                    else:
                        print(f"[dbg] faulting address OUTSIDE rdram (delta 0x{fa-rdram[0]:X})", flush=True)
                print("[dbg] --- threads ---", flush=True)
                for tid in enum_threads(pi.dwProcessId):
                    th = k32.OpenThread(0x0008 | 0x0040 | 0x0800, False, tid)
                    if not th:
                        continue
                    sa = C.c_void_p(0)
                    rr = wintypes.ULONG(0)
                    ntdll.NtQueryInformationThread(th, 9, C.byref(sa), C.sizeof(sa), C.byref(rr))
                    sav = sa.value or 0
                    desc = wintypes.LPWSTR()
                    k32.GetThreadDescription(th, C.byref(desc))
                    ds = desc.value if desc.value else ""
                    star = "  <<< FAULTING" if tid == de.dwThreadId else ""
                    loc = ""
                    for b, sz, name in mods:
                        if b <= sav < b + sz:
                            loc = f"{name}+0x{sav-b:X}" if not name.lower().startswith("banjotooie") else resolve(syms, sav - b)
                            break
                    print(f"[dbg]   tid={tid} start={loc} desc='{ds}'{star}", flush=True)
                h = k32.OpenThread(0x0008 | 0x0002 | 0x0040 | 0x0800, False, de.dwThreadId)
                # Win32StartAddress = ThreadQuerySetWin32StartAddress (9)
                sa = C.c_void_p(0)
                rr = wintypes.ULONG(0)
                ntdll.NtQueryInformationThread(h, 9, C.byref(sa), C.sizeof(sa), C.byref(rr))
                sa_val = sa.value or 0
                print(f"[dbg] thread start addr=0x{sa_val:X}", flush=True)
                for b, sz, name in mods:
                    if b <= sa_val < b + sz:
                        if name.lower().startswith("banjotooie"):
                            print(f"[dbg] thread start -> {resolve(syms, sa_val - b)}", flush=True)
                        else:
                            print(f"[dbg] thread start -> {name}+0x{sa_val-b:X}", flush=True)
                        break
                ctx = (C.c_byte * 1232)()
                struct.pack_into('<I', ctx, 0x30, CONTEXT_ALL_AMD64)
                if k32.GetThreadContext(h, C.byref(ctx)):
                    rip = struct.unpack_from('<Q', ctx, 0xF8)[0]
                    rsp = struct.unpack_from('<Q', ctx, 0x98)[0]
                    rbp = struct.unpack_from('<Q', ctx, 0xA0)[0]
                    print(f"[dbg] RIP=0x{rip:X} RSP=0x{rsp:X} RBP=0x{rbp:X}", flush=True)
                    # Full GPR set. The offset of the integer registers in
                    # CONTEXT is 0x78 (Rax), 16 pointers ending at R15.
                    names = ("Rax", "Rcx", "Rdx", "Rbx", "Rsp", "Rbp", "Rsi",
                             "Rdi", "R8", "R9", "R10", "R11", "R12", "R13",
                             "R14", "R15")
                    regs = [struct.unpack_from('<Q', ctx, 0x78 + 8 * i)[0]
                            for i in range(16)]
                    fault_ea = er.ExceptionInformation[1] or 0
                    for name, value in zip(names, regs):
                        hint = ""
                        if value == fault_ea:
                            hint = "  <== faulting address"
                        elif rdram and rdram[0] <= value < rdram[0] + rdram[1]:
                            hint = (f"  rdram+0x{value - rdram[0]:X}"
                                    f" guest 0x{0x80000000 + value - rdram[0]:08X}")
                        print(f"[dbg]   {name}=0x{value:016X}{hint}", flush=True)
                    # TEB stack bounds
                    tbi = THREAD_BASIC_INFORMATION()
                    ret = wintypes.ULONG(0)
                    ntdll.NtQueryInformationThread(h, 0, C.byref(tbi), C.sizeof(tbi), C.byref(ret))
                    stack_lo = rsp
                    stack_hi = rsp + 0x100000
                    if tbi.TebBaseAddress:
                        teb = read_mem(pi.hProcess, tbi.TebBaseAddress, 0x20)
                        if teb:
                            sb = struct.unpack_from('<Q', teb, 0x08)[0]
                            sl = struct.unpack_from('<Q', teb, 0x10)[0]
                            stack_lo, stack_hi = sl, sb
                            print(f"[dbg] TEB=0x{tbi.TebBaseAddress:X} stack=[0x{sl:X},0x{sb:X}]", flush=True)
                    else:
                        print(f"[dbg] TEB query failed ret=0x{ret.value:X}", flush=True)
                    # scan from page-aligned RSP upward to stack base
                    start = rsp & ~0xFFF
                    print(f"[dbg] --- stack scan 0x{start:X}..0x{stack_hi:X} ---", flush=True)
                    cur = start
                    seen = 0
                    err_shown = False
                    while cur < stack_hi and seen < 600:
                        want = min(0x1000, stack_hi - cur)
                        chunk = read_mem(pi.hProcess, cur, want)
                        if chunk is None:
                            if not err_shown:
                                print(f"[dbg]   unreadable at 0x{cur:X} err={C.get_last_error()}", flush=True)
                                err_shown = True
                            cur += 0x1000
                            continue
                        for i in range(0, len(chunk) - 8 + 1, 8):
                            v = struct.unpack_from('<Q', chunk, i)[0]
                            for b, sz, name in mods:
                                if b <= v < b + sz:
                                    if name.lower().startswith("banjotooie"):
                                        print(f"[dbg]   [0x{cur+i:X}] 0x{v:X} -> {resolve(syms, v - b)}", flush=True)
                                    else:
                                        print(f"[dbg]   [0x{cur+i:X}] 0x{v:X} -> {name}+0x{v-b:X}", flush=True)
                                    seen += 1
                                    break
                        cur += 0x1000
                    print(f"[dbg] --- {seen} code pointers on stack ---", flush=True)
                else:
                    print(f"[dbg] GetThreadContext failed err={C.get_last_error()}", flush=True)
                captured = True
            k32.ContinueDebugEvent(de.dwProcessId, de.dwThreadId, DBG_EXCEPTION_NOT_HANDLED)
        elif code == EXIT_PROCESS_DEBUG_EVENT:
            raw = bytes(bytearray(de))
            ec = struct.unpack_from('<I', raw, 12)[0]
            print(f"[dbg] process exit code=0x{ec:08X}", flush=True)
            k32.ContinueDebugEvent(de.dwProcessId, de.dwThreadId, DBG_CONTINUE)
            break
        else:
            k32.ContinueDebugEvent(de.dwProcessId, de.dwThreadId, DBG_CONTINUE)
        if captured:
            break


if __name__ == '__main__':
    main()
