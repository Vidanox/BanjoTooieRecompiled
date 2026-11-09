# Banjo-Tooie: Recompiled — Engineering Notes

This file is the working memory for anyone — human or agent — changing this
project. It records **what the port is, how it was made to work, and which
findings were expensive to obtain**, so that work starts from what is known
rather than re-deriving it.

It is deliberately organized by *finding*, not by chronology. Every claim here
was measured; where something is inferred rather than verified, it says so.

---

## 1. What this is

A static recompilation of **Banjo-Tooie (USA)**. The game's MIPS code is
translated to C once, ahead of time, by [N64Recomp]; that C is compiled into a
normal native executable. **There is no emulator at runtime** — no interpreter,
no dynamic translation. The original game logic runs as compiled C, with the
runtime ([N64ModernRuntime]) supplying libultra, the OS, and the hardware.

[N64Recomp]: https://github.com/N64Recomp/N64Recomp
[N64ModernRuntime]: https://github.com/N64Recomp/N64ModernRuntime

The consequence that shapes everything else: **a bug in the recompiler's
understanding of the ROM is invisible until the game runs.** N64Recomp reporting
success says only that it emitted C. It does not mean the C is correct, that it
compiles, or that the boundaries it chose match the real functions.

---

## 2. The pipeline

```
Banjo-Tooie (USA).z64                  user-supplied, never committed
  └─ tools/decompress_rom.py           → build/decompressed.us.z64
      └─ tools/harvest_targets.py      → build/force_keep.txt
          └─ tools/gen_syms_toml.py    → build/banjotooie.us.syms.toml
              └─ N64Recomp             → RecompiledFuncs/*.c   (committed)
                  └─ CMake/clang-cl    → BanjoTooieRecompiled.exe
```

`RecompiledFuncs/` is **committed** (~83 files). It is generated, but only by the
*patched* N64Recomp, so it was never reproducible from a clean clone. Committing
it means building the game needs only a compiler — the recompiler is demoted to
an optional tool. `rsp/n_aspMain.cpp` is committed for the same reason.

Regenerating is only needed if you change the symbol map, the config's
stubs/hooks, or the recompiler patches. See §11.

---

## 3. Architecture: how the port is wired

| Piece | Where | What it does |
|---|---|---|
| Front-end | `src/main.cpp` | SDL2 + RT64 + RecompUI; launcher menu, ROM selection, config |
| Recompiled code | `RecompiledFuncs/*.c` | the game, one C function per MIPS function |
| Bridge header | `include/tooie_recomp.h` | included by *every* generated file |
| Syscall/overlay layer | `src/recomp_api.cpp` | `recomp_syscall_handler`, overlay registration, all hooks |
| Overlay tables | `src/register_overlays.cpp` | maps the generated section table into runtime order |
| ROM decompression | `src/rom_decompression.cpp` | C++ port of `tools/decompress_rom.py`, byte-identical |
| Test harness | `src/test_harness.cpp` | `BT_WARP` / `BT_POKE` / `BT_POS` / `BT_HARNESSLOG`, env-gated (section 9) |
| Audio microcode | `rsp/n_aspMain.cpp` | recompiled RSP program |
| Config | `banjotooie.us.toml` | entrypoint, stubs, instruction patches, hooks |

### Boot is not a normal entry

Tooie's boot inflates `core1` and `core2` **straight into their final RDRAM
ranges** using its own decompressor, so no PI DMA the runtime can observe ever
registers those sections. Two hooks supply what the runtime missed:

* `tooie_boot_register_core1` at `0x80000518` (just before the `jalr` into core1)
  — calls `load_overlays(0x1E29B60, 0x80012030, 0x31350)` and reproduces two IPL3
  boot words the CIC thread reads.
* `tooie_boot_register_core2` at `0x800122C4` (just after `func_80019EC0`
  returns, the core2 decompression) — `load_overlays(0x01E5AEB0, 0x800815C0, 0x000A5170)`.

Without these, `get_function` aborts on the first indirect call into core.

---

## 4. The overlay subsystem — the largest Tooie-specific piece

**Banjo-Kazooie has nothing like this**, so there was no upstream reference. It
had to be decoded from the ROM.

### The mechanism

Tooie ships ~851 named overlays that are **swapped into one shared vram window
at `0x80800000`**. An address like `0x808xxxxx` is therefore inherently
ambiguous — which overlay is resident is a *runtime* property. Consequences:

* a cross-overlay `jal` **cannot** be resolved statically. N64Recomp's
  `resolve_jal` must return `Ambiguous` (runtime lookup) rather than `NoMatch`
  when the only candidates live in other relocatable sections.
* every overlay section is pinned to `vram = 0x80800000`, and a function's
  `offset` is its offset from the *loaded* code base.

### Entry is via `syscall`, never `jal`

Each of 4234 tiny entry points in core2 is an 8-byte pair:

```
syscall <code>            # code identifies the overlay
addi $t0, $zero, <K>      # K identifies the entrypoint index
```

Verified over all 4204 `_entrypoint_*` symbols: `K == 4 * entrypoint_index` for
**4204/4204**, the syscall code is constant per overlay for **850/850**, and
`code → overlay` is **bijective** (range 2…882).

⚠ **The syscall code is not `overlays.us.toml` index + a constant.** The offset
varies (+2 for 1551 thunks, +11 for 1306, +6…+10 for most of the rest). Build the
map from `decomp/syscall_symbol_addrs.us.txt`; never assume an offset.

### `recomp_syscall_handler` is a two-branch dispatcher

The game's own handler (`syscall_handler` = `0x80081E74`) patches the thunk in
place, which a static recompilation cannot execute. So the handler is
reimplemented:

1. **First entry** — if `MEM_W(instruction_vram) & 0xFC00003F == 0x0000000C` the
   word is still the raw `syscall`. Set `ctx->r8 = instruction_vram` (the
   faulting thunk PC) and call the game's recompiled `syscall_handler`, which runs
   the real loader/relocator and patches word0 into `j overlay+0x10`.
2. **Subsequent** — word0 is now that `j`. Decode the trampoline, read the
   entrypoint offset from the **delay slot**, and dispatch natively via
   `LOOKUP_FUNC`. `auto_unload` (bit `0x1000` of `lhu 4`) runs `ovl_unload`
   afterwards, preserving `$v0/$v1/$f0/$f2/$ra`.

⚠ **The tail `jr $t0` cannot be left to the recompiled handler.** N64Recomp emits
`LOOKUP_FUNC(ctx->r8)` there, and on first entry `$r8` is a thunk address, not a
function, so `get_function` aborts. A hook at `0x80081F5C` replaces the tail.

### ⚠ Overlay ids must be remapped before use

`librecomp`'s `init_overlays()` **sorts `code_sections` in place by `rom_addr`**.
The generated `overlay_sections_by_index[]` is in *generation* order
(`overlays.us.toml` order), so handing those indices to `load_overlay` registers
the **wrong overlay**.

This was a real, expensive bug: game overlay 181 (`chbaddieDll`) was registered
as `chbanjocurrent`. Everything downstream looked healthy — the code base was
right, `ovl_load` copied and relocated fine, the thunk was patched — only the
*function map* was for the wrong overlay. It presented as a NULL-pointer crash
deep inside game logic and was misdiagnosed as a game-state bug for a long time.

`src/register_overlays.cpp` computes the permutation once and registers that.
Verified: for every non-`*` line of `build/sections.txt`, the remapped entry
names the same overlay — **851/851 match**.

**The lesson, which generalizes:** when an overlay's first frames misbehave,
verify the *mapping* before auditing game logic. The `[sys-reg] index=` trace line
is the cheap check.

---

## 5. Findings: recompilation

Most of the hard work was **function boundary detection** and **relocations** —
deciding what the ROM actually contains. Nearly every defect in this class was
invisible to `EXIT=0`, and several were only visible when the emitted C was
*compiled* or the game *ran*.

### 5.1 Compiling the output exposed four boundary bugs at once

The first attempt to compile the generated C failed in **89 of 1410 files**, in
exactly two flavours:

|Symptom|Meaning|
|---|---|
|`goto after_N` with no label|the function's last instruction is a `jal` whose delay slot was cut off — boundary too **short**|
|`0 = ...` (assign to `$zero`)|`.rodata` decoded as instructions — boundary too **long**|

Causes: overlay sections sized by a `+ 0x100` guess (the last function of every
overlay came out exactly 64 instructions); then that "safety net" clamping the
yaml extent *upward*, pulling `.rodata` into code. **The splat yaml extent is
authoritative in both directions.**

### 5.2 The `b` terminator test matched 5 of 4852 branches

Validating a forced start checks that the preceding instruction is a terminator.
The `b` arm was written as `word == 0x10000000`. But `b offset` assembles to
`beq $zero, $zero, offset` with the **offset in the low 16 bits**, so that test
only matches a `b` whose offset is 0. Measured: **4852 unconditional branches,
of which 5 have offset 0.** The test missed 99.9% of them and rejected every
forced start that followed one.

One rejected start (`0x800136E4`, following `b +6`) was alone responsible for
**123 of 253** failures.

The correct test masks the offset off:
```python
is_b = op == 0x4 and ((w >> 21) & 0x1F) == 0 and ((w >> 16) & 0x1F) == 0
```

### 5.3 A delay slot was accepted as a function start

`0x800011EC` is the delay slot of `j func_800011F8` inside `boot_huft_build`. The
"preceded by `j`" test accepted it, splitting the function. The result: the
Huffman-table builder was truncated, **both** boot inflate calls silently failed,
and the boot initializer called a null pointer.

Fix: if the word immediately before a candidate is a branch/jump, the candidate is
its **delay slot** — never a start. Still check `idx-2`, since a terminator there
with a non-`nop` delay slot is a legitimate boundary.

### 5.4 Any `jr $reg` ends a function, not just `jr $ra`

Tooie's software-FPU trampolines return through a scratch register
(`or $a3, $ra, $zero` … `jr $a3`). Without the relaxation, `func_80013A7C` is
never recognised and its code is swallowed by `func_80013A5C`. Exactly 4
accumulated `force_keep` entries depend on this.

### 5.5 There is exactly ONE start test

`tools/detect_functions.py::is_plausible_function_start`, imported by every
caller (`gen_syms_toml`, `keep_loop`, `autostub`, `rebuild_force_keep`,
`audit_rejected_starts`). Do not re-implement it.

Four private copies once existed with **three different bugs** between them —
the `b` offset test, the delay-slot guard, and the `jr $reg` relaxation.
`autostub.py`'s copy lacked the last, so the driver filtered real starts as
"phantoms" and fell through to mass-stubbing. Measured reach: **140**
non-`jal`-reachable starts in the core segments are preceded by a non-`$ra`
`jr`, every one of which that copy rejected — including `0x80013AA0`, an address
that had needed a *manual* `force_keep` addition precisely because the driver
could not accept it.

The module also owns the core segment table. ⚠ The boot segment ends at
`0x800044E0`, **not** `0x80004CE0` (confirmed by the ROM's own entry stub, which
clears memory to exactly that address), and core2 ends at `0x80126730`, not
`0x80200000`. The wrong bounds mapped addresses onto ROM that is not that
segment's code.

### 5.6 Overlay relocations come from the overlay's own ROM header

`decomp/ovl_reloc_addrs.us.txt` is an **incomplete** transcription. The complete
list is in each overlay's `<name>_header` blob (decoded by
`tools/ovl_rom_relocs.py`):

|Offset|Field|
|---|---|
|`+0x00`/`+0x02`/`+0x04`/`+0x06`|u16 code/data/bss sizes (16-byte blocks)|
|`+0x08`|u16 entrypoint count|
|`+0x0A`|u16 primary reloc count|
|`+0x0C`|u16 secondary reloc count (0 for every Tooie overlay)|
|`+0x0E`|u8 name length|
|`+0x10`/`+0x18`|u32 XOR keys for words 0 and 8 — the header carries its own keys|
|`+0x38`|entrypoint table (u32 offsets), then name, then reloc lists|

Entries are `value = raw ^ key`, `type = value & 3`, `offset = value & ~3`.
Type 0 = whole-word pointer, 1 = `j`/`jal`, 2/3 = the HI16/LO16 halves of one
address. Verified: the computed code base matches the splat yaml segment start
for **851/851** overlays, and the decoded list is a strict **superset** of the
decomp file (+62 entries, 31 HI16/LO16 pairs, in 16 overlays).

⚠ **Relocs must be sorted by address.** N64Recomp walks `section.relocs` in
order, so an unsorted list desyncs the walk and the reloc that reconstructs an
overlay-local `jal` is never matched. `ovl_reloc_addrs.us.txt` is grouped by
symbol, not address. Sorting alone fixed 20 of 24 remaining failures.

⚠ **Overlay jump-table entries are offsets from the link base**, not absolute
addresses, and are relocated at load time by a *secondary* list not present in
the decomp files. Guarded on `section->relocatable` and on the entry lying inside
the section.

⚠ **`lui` immediates in overlay code are unrelocated.** A relocated table base
reads as `lui $at, 0`, so the analysis computed `0x7E0` instead of `0x808007E0`,
read the table from the wrong ROM offset, and dropped every entry. Fixed by
consulting the section's reloc table for `lui` state.

### 5.7 Four authorities on "this offset is a function"

The decomp names only some functions. A function referenced only by a pointer in
overlay *data* is invisible to it, and sizing its predecessor by "next named
symbol" swallows it whole. Four sources of truth, in increasing authority:

1. **`code_pointers`** — offsets from the overlay's type-0 relocations.
2. **Export tables** — the `entrypoints` u32 array at header `+0x38`. This is the
   list the syscall thunk dispatches through, so every offset in it is an entry.
   The decomp's `_entrypoint_N` symbols are an *incomplete* transcription (e.g.
   `bsbflap`'s table is `[0, 0x37C, 0x68C, 0x6D4]` while the decomp names only 0
   and 0x6D4).
3. **Unnamed head code** — 154 overlays begin with code no symbol covers, up to
   `0xCC0` bytes (349 functions, 91 KB). Split at every `jr $ra` + delay slot,
   which is exact rather than a guess.
4. **Stub heads** — an overlay whose `entrypoint_0` sits on a frameless
   DLL-style stub (getter + `jr $ra`) swallows the real function behind it, so
   the game's pointer to `code_base + 0xC` aborts. Accepted when the head is
   already whole `jr $ra` runs.

Guards that matter, because a jump table's case bodies look exactly like
functions: resolve the table a dispatcher's `jr $reg` loads and reject pointers
to its arms; otherwise require the pointer to lie at or after the host's first
epilogue end; and bound the arm scan by "first word that is not a valid in-section
code offset" rather than a fixed count.

⚠ That last bound matters. `chalienkids`' table holds **73** entries (the code
bounds the index with `sltiu $at, $t6, 0x49`) and the scan was a fixed 64, so
arms 64–72 were split out as functions, the dispatcher ended early, and N64Recomp
truncated the table to two cases → `switch_error`. Reading the table to its real
end removed **42 phantom functions**.

⚠ **The table lives in the overlay's data, past the code** — bounding the ROM
read by the code size aborts the scan immediately and disables arm protection
everywhere, which *added* 1547 phantom functions.

### 5.8 Phantoms: data decoded as code

`harvest_targets.py` once decoded overlay `jal` fields as **absolute** addresses,
but Tooie stores them **unrelocated** (raw `0x478` means `0x80800478`). Evidence
it was garbage: of 619 unresolved targets, **610 had no caller anywhere**, and
every sampled call site sat above `0x1F00020` — i.e. in overlay *data*. Forcing
those split real functions mid-body.

A related phantom: `0x800C3408` was harvested as a `jal` target from a **data
table** at ROM `0x1E59328` (word `0x0C030D02` among halfwords). It was the shared
epilogue of `func_800C33DC`, so the function was emitted **with no epilogue at
all** — it fell off the end of the C function, never restored `$sp`, and leaked
`0x18` on every call until a wild pointer crashed the actor dispatch.

Fix (`drop_stolen_successors`): a function whose declared extent ends *without* a
terminator, and which branches to the start of the function beginning exactly at
that boundary, is one body. Widening the test from `b_idx < target` to
`b_idx <= target` added exactly one case across core1 and core2 — this one.

### 5.9 The stub list is not append-only

A stubbed function is emitted as an **empty body**, so a wrong stub silently
deletes game logic. `autostub.py` only ever *adds*, so a function stubbed early
stays stubbed after later iterations make it recompile fine.

Re-deriving from scratch (`banjotooie_probe.toml`, `stubs = []`): **462 stubs →
64**, with 214 stale. Of those, **33 were named gameplay overlay functions**
(`sujiggy_*`, `chlakemonster_*`, …) — not libultra, not anything a runtime would
implement. They had been reduced to empty stubs.

Concretely: `func_80800484_chintrochar` was stubbed, and it was the **only**
creator of the actor's slot-1 resource. Its absence produced a NULL handle
several call frames later, which looked like an unpopulated handle table.

**Re-derive the stub list after any boundary change. Never extend it.**

⚠ Un-stubbing a `boot_*` entry is **not** safe just because it recompiles — the
boot segment's own libultra copies are load-bearing for boot. The distinction is
found by testing: un-stubbing those crashes boot *before* the first overlay load.

### 5.10 Stubs cannot name a `static_*` function

A `static_<section>_<vram>` function exists only because some caller referenced
it. Stubbing it stops it being generated → the stub becomes stale → N64Recomp
aborts with "is stubbed out but does not exist" → the driver un-stubs it → it
fails again. Infinite cycle. Promote it to a real `func_XXXXXXXX` via
`force_keep.txt` instead. `ignored` has the same must-exist validation.

### 5.11 The driver could loop forever on a stale stub

`autostub.py`'s `remove_stub` matched only `^\s*"name",\n` — a stub alone on its
line. The list is not formatted that way:

```toml
    "func_800343B0",    "func_80001F44",
```

Removing such a name silently did nothing, the same stale stub came back next
pass, and the loop ran to the iteration cap making zero progress.

⚠ **Flat driver output means unfixable targets, not slow convergence.** Repeated
`+1 function starts (N seen)` with `N` constant means targets are being re-added
that can never resolve. Diagnose; do not raise the iteration cap.

### 5.12 RSP microcode: `n_aspMain` has an overlay; BK's does not

The text blob is `0x17D0` bytes, but `0x17A8` **cannot** be a flat image: loaded
at IMEM `0x1080` it would end at `0x2828`, past the 4 KB IMEM top of `0x2000`.
The diagnostic that settled it: every `j`/`jal` *target* lands below file offset
`0xF80`, while jump *sources* exist well past it — the signature of a base image
plus overlays. The descriptor table at ROM `0x1E59B40` gives base `0xF80` at
`0x1080` (exactly filling IMEM) plus one overlay at `0x1238`, tiling to `0x17C8`
against a region of `0x17D0`.

Dispatch is an indirect jump through a **DMEM** halfword table at `0x10`, 16
entries; entry 16 is `0xF000`, not an IMEM address, which is where it ends. All
16 go in `extra_indirect_branch_targets` (BK's equivalent has 14).

---

## 6. Findings: the runtime

The runtime carries a local patch that is **required** — without it the game
aborts at boot or wedges with every thread parked. Three of the four are genuine
upstream bugs, not Tooie workarounds.

### 6.1 `cop0_status_write` aborted on CU1

Tooie's boot sets SR bit 29 (`CU1`, enable the FPU). The runtime treated **any**
changed status bit other than `FR` as fatal, and the fail-fast path called
`exit()` — which ran static destructors including a still-joinable global thread,
turning the run into `0xC0000409`. Other bits (interrupt mask, kernel mode,
CU0–CU3) have no effect on recompiled execution, so they are now stored without
further handling.

### 6.2 `thread_queue_remove` never advanced

It re-derived the head every iteration instead of walking with a
pointer-to-pointer, so it only ever tested the first element: it returned `false`
when the head was not the target and the list had one element, and **looped
forever** when it had more. `osSetThreadPri` calls remove-then-insert to re-sort,
so the failure mode there was a hang.

### 6.3 A thread was linked into a queue twice

`thread_queue_insert` did not refuse a duplicate. `do_send` unblocking a thread
still in the running queue linked it to **itself** (`7 → 7 → 7 …`), and every
later priority walk spun forever. Caught by instrumenting the insert to report
duplicates and dump the list.

⚠ A related invariant violation still occurs **once per run**: a thread in the
running queue while also linked in a message queue's blocked list. It is now
harmless (the duplicate is refused) but it is a real inconsistency in the
blocking path.

### 6.4 The black screen was a no-op SI DMA

`__osSiRawStartDma` was a silent no-op. Tooie's section loader builds a PIF block,
submits it, then **blocks in `osRecvMesg`** waiting for the SI completion message
that a no-op never sends. Nothing was ever posted, so the main thread waited
forever: no frames, no audio, a black window.

It now answers the CIC-NUS-6105 challenge (RT64 vendors the algorithm, which
encodes the 267 challenge/response pairs specific to Banjo-Tooie) and calls
`ultramodern::send_si_message()`.

**This is the archetype of the project's nastiest bug class: a stub that returns
success while doing nothing.** The registration count went 79 → 100 and the hang
became a crash.

### 6.5 `mfc0 $v0, Count` failed the whole function

The recompiler only modelled cop0 `Status`. `func_8001DDC0` starts with
`mfc0 $v0, Count`, so N64Recomp reported `Unhandled cop0 register in mfc0: 9` and
**cleared the entire output file** — losing every other function generated into
it. Count is now a first-class register, supplied by the host from `osGetCount()`
(the same 46.875 MHz clock ultramodern models).

⚠ The build resolves `recomp.h` to the copy **nested inside N64ModernRuntime**,
which is unpatched, so `cop0_count_read` compiles via
`-Wno-implicit-function-declaration`. Harmless here (`ADD32`/`SUB32` truncate to
32 bits) but fragile: if you need it, declare it in `include/tooie_recomp.h`.
Do **not** point the include path at `lib/N64Recomp` — that would make the
patched recompiler a *build* dependency.

### 6.6 Cooperative scheduling has no preemption point

The level-transition cleanup sweep retries while any entry is refused, and the
refusal is cleared by a sound-object release delivered as an **external runtime
message**. On hardware that loop is preemptible. The runtime is cooperative and
has no preemption point inside generated code, so the spin never delivers the
message and the sweep retries forever — a **livelock**, 96.8 million iterations
with the frame counter frozen.

Fix: `yield_self_1ms` at the sweep's retry back-edge (`0x800C2B50`) when the pass
still reports pending work.

⚠ This is a *scheduling* artefact, not a game-state bug and not a boundary bug.
The record was not leaked; the destructor ran and cleared the slot.

### 6.7 The RDP freeze bit was never cleared

Tooie's gfx manager runs the frame off the RDP freeze bit. `func_800142F0` sets
the freeze and only posts the frame barrier while a status bit is set; on
hardware the VI-retrace handler clears it. With emulated retraces the ordering
inverts, so the third frame signal was never sent and the main thread waited
forever. Fixed by clearing the freeze where the game signals the barrier
(`func_80015190`), equivalent to `DPC_CLR_FREEZE`.

### 6.8 Symptom → cause cheat sheet

|Symptom|Cause|
|---|---|
|`0xC0000409` with no message|`abort()`/`exit()` from a fail-fast path — the preceding `printf` is usually lost|
|`0xC0000005` at ~4 GiB past RDRAM|KSEG1 MMIO executed on the host|
|`0xC0000005` inside RDRAM|bad guest pointer (e.g. a zero source from a failed inflate)|
|`Failed to find function at 0x...`|missing boundary, overlay base delta, or a jump-table artefact|
|`Failed to find function at 0x00000000`|a `jr $reg` tail call whose register was clobbered|
|`Switch-case out of bounds`|jump table detected with too few entries|
|Runs, no crash, no frames|a blocked guest queue|
|Just stops, no error|missing `--game bt` (the thread blocks in `wait_for_game_started`)|

### 6.9 The intro's music-cue wait starved the audio thread

Reported as "long pauses between scene transitions" and "the music is not
synced" in the new-game intro. One cause for both, and it is the same shape as
§6.6: a loop that hardware preempts and the cooperative runtime does not.

**How the intro keeps time (native).** `glintrosyncDll` keeps the intro on the
score's schedule. Its clock (float seconds at `0x801275D8`) advances by each
frame's time step while a scene plays; the map-change routine `func_800A76F4`
stamps `osGetCount` (`entrypoint_0`) before loading the next map and, after the
load, `entrypoint_1` **busy-polls `osGetCount`** until the clock reaches that
scene's cue (a per-map table in the overlay), then adds the wait to the clock.
So each transition lasts load + wait = a fixed budget, the next scene starts on
its cue, and on hardware the load simply eats part of the wait. Measured with
`BT_PACELOG`: the clock runs at wall rate inside scenes and jumps by exactly the
gap at each transition; scene starts are identical to the frame in every run
and at every refresh mode.

**What was ours.** The poll loop (`0x808002BC`) makes no OS call, so nothing
else ran while it spun -- including the audio thread, which on hardware
preempts it. The music stopped dead for every wait and the device queue ran
dry. Measured over the whole intro (144 Hz, identical at `Original` with
interpolation off and at 50 Hz): 11 transitions holding the picture 1.85-6.46 s
(43.9 s in all), ~0.1 s of audio generated during a wait that was not also in
the §6.6 sound-release sweep (that one yields, so ~1.7 s of audio got through
in those), and the audio clock **34.3 s behind wall time** by Spiral Mountain,
while the pictures stayed on their cues. A silent frozen frame is what read as
a "long pause"; the hardware plays the score across it.

Fix: `tooie_yield_intro_sync` (`yield_self_1ms`) hooked at the loop head, so it
runs only while the cue has not been reached; the loop condition and the
bookkeeping are untouched. After: audio generated during every wait equals the
wait (3.37 s for a 3.37 s gap, ...), no empty-queue events, and the audio clock
ends the intro 0.09 s from wall time. The gaps keep their length -- that part is
native: the cue table sets it, and the hardware differs only by its slower VI
(59.83 Hz, so its scenes run ~0.3% longer and its waits are that much shorter,
<0.4 s per transition). No longplay with per-scene timings was found to check
against; a Rare developer calls it "the 10-minute intro", and ours runs 11:09
from the first scene to Spiral Mountain. `BT_INTROSYNC_YIELD=off` restores the
starving spin for A/B. The hook is in `banjotooie.us.toml` and was also inserted
by hand into `RecompiledFuncs/funcs_76.c` exactly where N64Recomp emits a
`before_vram` hook (after the label, before the instruction), so a regeneration
reproduces it.

⚠ **Any wall-clock busy-wait in Tooie needs a scheduling point.** The symptom
is a stall with the audio clock (`au=` in `BT_PACELOG`) frozen while VIs still
advance; `tools/stack_sample.py` during the stall names the loop (here Game
Thread 6 inside `func_808000BC_glintrosyncDll`, everything else parked in
`osRecvMesg`).

---

## 7. Findings: rendering

Four defects were found and three fixed; each was settings-gated, so none was a
regression in the default configuration.

### 7.1 `Expand` culls geometry at the frame edges

`Expand` widens only RT64's *rendering* viewport. Tooie's own CPU-side visibility
test still builds a **4:3 frustum**, so anything outside the original view is
discarded by the game before RT64 sees a display list. The three consumers are in
**core2**, not in the `bainvisible` overlay:

|Consumer|Kind|
|---|---|
|`func_800E3D0C`|float AABB|
|`func_800E3DC0`|s16 AABB|
|`func_800E3E8C`|sphere|

Their verdicts are **not** overridden any more: turning every rejection visible
defeated selective culling and could exhaust model allocation space. Instead
`func_800CAF34` — the routine that rebuilds the camera's four planes — is hooked
before it restores `s0`, and `tooie_expand_frustum` widens and renormalizes only
the two horizontal planes by `window aspect / (4:3)`. The vertical planes, the
zoomed FOV and every box/sphere consumer keep their original behaviour; the game
rebuilds the planes from its cached normals, so widening never accumulates. The
window size is published from the SDL thread through an atomic. Original, Manual
and portrait views keep the original planes.

Two further Expand-only defects in the added side regions are fixed separately:
RT64 tracks framebuffer write bounds against the full viewport/scissor
intersection for world triangles (`patches/rt64.patch`), and the shared composite
pickup bowl draw uses the complete model radius so its larger contents are not
skipped when the bowl alone is culled. Each has a ROM-free regression check under
`tools/tests/` (`frustum`, `bounds`, `pickups`, `blaster`).

### 7.2 `Display`/`Manual` refresh distorted the player model

RT64's high-refresh support renders interpolated frames by matching each
transform against the previous frame and blending them. That needs the game to
say *which* transforms correspond, via transform groups with stable ids. Tooie
emitted none, so RT64 treated every transform as new and blended matrices that do
not correspond — shearing limbs.

The port now emits the extended-GBI enable, the live VI rate, and stable ids for
the player's root and animated bones (with decomposed position/rotation/scale so
the quaternion takes the short arc), plus the skybox layers. Verified against
RT64's own parser counters: one enable per frame, exactly 26/37 groups decoded,
transforms matched by id every frame, 0 failures across 4081 frames.

⚠ **Identity is the stable player-state slot**, found by scanning
`0x80135490..0x801354B0`; root ids are `0x10000000 + slot * 0x100`, leaving
`0x100` ids for bones. Bone identity is the model's own bone index — stable per
model but not globally unique across Tooie's 25- and 36-bone variants, which is
why it is a sub-id *under* the root group.

⚠ **The enable word must be derived, not copied.** `recomp_api.cpp` includes
`rt64_extended_gbi.h` with `F3DEX_GBI_2` defined so `RT64_HOOK_OPCODE` is Tooie's
F3DEX2 `SPNOOP` (`0xE0`). Using the F3D opcode `0x00` instead means the hooks run,
RT64 decodes **zero** enables, and nothing reports an error.

⚠ **A "success" from an append does not mean the command survived.** Several of
Tooie's render helpers load their display-list cursor *before* the instruction
that writes a command, so a hook at that write appends past the game's command,
which the game then overwrites. The append returns true and nothing is emitted.
Every metadata site had to be verified against RT64's decode counters, not
against the append's return value.

### 7.3 Skybox flicker

The sky layers are drawn through the shared model renderer with no transform id,
so RT64 paired them to the previous frame by heuristic (draw-call hash, then
smallest matrix difference) — and the layers are the same mesh at different
scales and rotation speeds, the case that heuristic gets wrong. Each layer now
carries its own id.

### 7.4 The first-person black skybox: an F3D depth-clip quirk

**Cause: RT64 emulates an F3D depth-clip defect in the fragment shader**,
discarding every fragment deeper than 1022/1024 of the depth range. That limit is
*fixed*, but the depth a projection assigns to a distance depends on its near
plane — it bites beyond roughly `647 * near`. Tooie's sky uses near 2.5…3.0, so
the threshold is ~1600 world units and the dome is bigger. The margin is
razor-thin and its sign depends on the far plane:

|sky far plane|z at d = 1600|vs 0.998047|
|---|---|---|
|finite 4592|0.99796|renders (just inside)|
|infinite (the first-person form)|0.99844|**discarded → black**|

The world camera's near is 35…42, putting its threshold ~25000, which is why
terrain is never affected. Fixed by `simulateDepthClipF3D = false`.

⚠ **This fix has a plausible downside**: the emulation exists to hide geometry
that should be invisible, so disabling it could reveal distant geometry somewhere.
It needs broad area coverage, not just the sky.

### 7.5 The skybox cannot both cover and track at `Expand`

Tooie's sky ends at the 4:3 frustum edge. With projection x-scale `s`, the dome's
edge lands at NDC `s` and the frame edge is `1`, so covering needs `s ≥ 1` while
aligning with the world needs `s = 0.75`. Every mechanism that reaches `s ≥ 1`
moves the dome's features outward by the same factor as its edge.

**Coverage and alignment are one constraint.** `BT_RT64_SKY_STRETCH` buys
coverage by drawing the sky 1.333× zoomed versus the world (RT64's `[fbdiv]`
metric: 400 records with it on, 0 with it off), which makes the sky **slide
against the world whenever the camera turns** — worse than the edge band it
removes. The default is aligned; this is a content limitation of a 4:3-authored
sky, not a port defect.

⚠ Three fix attempts for this defect were falsified by measurement (projection
identity, aspect forcing, sky tagging) before the real cause was found. **Do not
add another without a lever that can distinguish it.**

### 7.6 Cutscene glitches at `Display`/`Manual` refresh: camera cuts

Fine at the game's own rate, broken at 144 Hz: on every shot change RT64 blended
the previous shot's camera with the new one, so the frames presented across a cut
showed the camera halfway between two unrelated shots, often inside a wall.
Captured in the attract loop's cave scene as a smeared green close-up on the cut
frame, absent with the fix.

Tooie's own cut flag is not mapped, so `evaluate_camera_cut` reads the camera at
the first perspective projection of each frame: position from `0x38($sp)` of
`func_800E44FC`, direction from the last column of the projection `Mtx` it is
about to load (view × perspective; that column is the view axis whatever the
scale or FOV). On a cut frame the projection groups keep their ids and only drop
pos/rot to SKIP (`kCutProjectionMask`), and one AUTO-id group with every
component SKIP is pushed for the actors (`kCutActorGroupFlags`), so RT64 draws
that frame as submitted and interpolates normally from the next.

⚠ **A cut is a change in the camera's velocity, not a large step.** The title
flyover pans a steady 114 units a frame and the intro has still-to-still cuts of
75, so no position threshold separates them. The rule compares each step with the
previous step (60 units / 15° by default, `BT_RT64_CUT_DIST` /
`BT_RT64_CUT_ANGLE`), also requires the step itself to exceed the limit (a
±50-unit camera shake near the end of the intro would otherwise cut every frame),
and right after a cut falls back to 400 units / 40°, because the step that *was*
the cut is not a velocity. Measured on the whole new-game intro: frame-to-frame
deviation p99 = 14.7, 40 shot changes flagged, no false positives; first version
(absolute 400 / 40) missed six cuts. ⚠ **The projection id 0x1000 must not change
on a cut** — the Expand bounds fix in `rt64.patch` keys on it.

**"The camera jumps when a cinematic starts" measured clean, i.e. native** (recipe
(e), Jamjars, teleported and walked in, plus the alive-King throne-room scene).
Every dialogue start and end is flagged on exactly the frame the camera changes
shot (5224 / 4494 / 1481 units, 116-140°), nothing else in those scenes steps
more than 40 units, game frames arrive every 33.3 ms ±1 across the cut, and the
sky and world projections of the cut frame carry the same camera (checked per
projection). Captured display frames at 50 and 144 Hz show old shot, then new
shot, then a smooth pan, with no blended frame in between. That is the
same hard cut the N64 makes. The other camera-change cases the report could
mean (a cut that is undetected because it is small, or a cinematic that sets
its FOV a frame late) did not occur in these scenes.

**Re-measured for the three Mayahem Temple NPCs (2026-11-08), walked up to the
way a player would** (recipes in §9): Mumbo (enter the skull, walk up, scripted
walk, talk; then a second talk started with B), Humba Wumba (enter the wigwam,
scripted walk, talk) and Jamjars (walked into his trigger from 420 units away,
not teleported). Every dialogue start and end is one CUT frame with zero camera
motion on the three frames either side (442/22°, 272/8°, 671/15°, 440/22°,
1040/12°, 1006/4°, 326/15°, 4489/142°, 1523/110°); the walk-up dolly into
Mumbo (0 → 15 → 7 units a frame) and Jamjars' 140-frame dialogue flyover
(20-27 units a frame, stopping dead) are never flagged. Burst captures across
Mumbo's start and his mid-dialogue cut at 50 Hz and at Original refresh show the
same two pictures, old shot then new shot. Not reproduced. ⚠ The one false
positive in all the logs is outside MT: a new-game intro shot whose camera goes
from rest to a steady 114 units a frame (frame ~103 of the first scene, vi 3) is
flagged, so that one frame is held instead of interpolated. A velocity rule
cannot tell that from a cut without looking ahead; left as is.

### 7.6b Entering a scene at 144: the cuts are clean, the frame timing is not

"A weird shake jump, brief, when the scene with Klungo starts, and when you talk to
Cheato after the intro" (144 Hz only). Re-measured at a TRUE 144 (`BT_RT64_UNCAP`,
`display=143.9/s`) with the user's settings:

* **The cut machinery is not it.** The throne room (recipe (c)) has four dialogue
  cuts; each is flagged on exactly the frame the camera changes, and
  `BT_RT64_FRAMEDUMP` shows the new shot on index 0 of the new game frame, that
  frame's in-betweens identical (held), then smooth motion: no blended frame, no
  late or early flag, no roll cut. The intro's Klungo-at-the-rock scene (`0x0A1`)
  is one long smooth descent with one cut. After a cut the camera rests ~2 frames
  (0.4-1.5 units) and then moves; native.
* **The frame timing at a scene start is.** Right after entering a map the game
  delivers irregular frames in threes: a late frame (48 ms for a 2-VI step), a
  catch-up (step 1, 6 ms later, elapsed 0 or 1), then a 3-VI frame (`BT_PACELOG`).
  Throne room, one run each: 13 such frames at 144, 9 at `Original`, 1 at Manual 60;
  with a loaded game thread (`BT_RT64_ACTORLOG` as a stressor) up to 73. RT64 was
  told the DIVISOR's rate for every frame, so all three got the same display time:
  the motion halved, then ran 1.5x, and the in-betweens that did not fit before the
  next frame arrived were dropped (presented 0/4, 1/4, 2/4, then the next frame's
  0/4; the image change on that frame 3-5x its neighbours'). That is a brief
  stutter that `Original` presents as plain VI timing.
* **Fix:** the refresh rate reported per frame is `60 / step` when the step is a
  real frame length (1 to 2x the divisor, at most 6, and elapsed agrees or is 0);
  load stalls and recorded demo steps keep the divisor. Verified that RT64 receives
  it (display frames per game frame 2-3 for step 1 and 7-8 for step 3 in a loaded
  run, 4-5 otherwise), the intro and gameplay still present 144/s, and smooth
  scenes are unchanged. ⚠ The visual benefit is NOT cleanly A/B'd: the irregular
  frames depend on machine load and did not recur on demand (paired runs gave 0/0,
  0/0 and, under an external load spike, 183/245). `BT_RT64_STEPRATE=off` restores
  the divisor.
* **The same irregular frames tripped the §7.8 pacing latch** (once, measured):
  step 3, then step 1 with elapsed 0, latched "recorded timing" and locked the rest
  of the throne-room scene at 20 Hz. Fixed in §7.8 (a latch needs elapsed > 0).
* **Found later (§7.6d):** the "jump" at a conversation start was a field-of-view snap
  interpolated across one game frame, not frame timing.
* **Not reproduced:** the Klungo and Cheato scenes themselves. Klungo's actor
  overlay (`chklungo`, game overlay 316) never loaded in Spiral Mountain from the
  user's save, nor from a fresh post-intro state with Banjo placed at the digger
  tunnel mouth (`0,1784,-3100`, `BT_WARP=AF:2` is that tunnel) or near the intro's
  rock site; the user's save (Game 1, 0:02:02) may already have played it. The
  Cheato page actor (`chcheatopage`, 223) loads in `0x0AF` but was not located.
  The follow camera during a fall steps irregularly and the velocity rule
  flagged some of those steps as cuts, holding that game frame: fixed, §7.6c.

### 7.6c FIXED: the follow camera catching up after a fall was flagged as a cut

§7.6b's open note. `BT_WARP=AF:0@40` + stick up walks Banjo off the top of
Spiral Mountain; he lands ~1500 units below while the follow camera stays up
top, then swoops down after him in irregular steps -- measured 28, 88, 86, 155,
143, 172, 160, 168 ... units a frame, each step within 37° of the one before,
the view turning a smooth 3-6° a frame. The velocity rule compares a step with
the previous one, so 28 -> 88 (deviation 60.7) and 86 -> 155 (100) were both
CUTs and those two game frames were held: the camera stood still for a frame
and then jumped, the brief "jump" the user reports.

**A camera that keeps moving the same way has changed speed, not shot.** The
position test now stands down when the camera was already moving (previous step
>= 20 units), the new step points within acos(0.7) = 45.6° of it, and it is at
most 3x the previous step + the cut distance. Turns (`BT_RT64_CUT_ANGLE`) and
roll (§7.11) still cut exactly as before -- the coherence test gates only the
position term. `[cam]` lines print `coherent` where it overrode the old rule;
`BT_RT64_CUT_COHERENT=off` restores the plain rule for A/B.

**Measured by replaying the rule on logged cameras** (a script re-running
`evaluate_camera_cut` over the `[cam]` lines reproduces the logged verdicts on
1568/1568 and 5405/5405 frames): the fall's two false cuts go; the new-game
intro's 30 flagged shot changes (one 290 s run) are all still flagged.
Live, at a true 144 (`display=143.9/s`): the same fall prints `coherent` on
those frames and flags none of them; the full natural intro (685 s, 12836
camera frames) flags the same 88 cuts under both rules -- the coherence test
never fired there. The roll term is untouched (it is OR'ed after the gate); no
roll flip occurred in these runs.

### 7.6d A field-of-view snap was not a cut: the picture "compressed" for one game frame

"The screen tears when the conversation starts, everything compresses quickly" --
talking to Jiggywiggy (his temple is map `0x151`, `BT_WARP=142:1@40,151:1@m142+5`;
the greeting plays on arrival, B in front of him starts another), and "the same
when you enter the King Jingaling cutscene". Not a literal tear (vsync presents carry
no tearing flag; the same shows with vsync on at 60 Hz), not a pipeline hitch
(`BT_RT64_FRAMEDUMP` timings even, `BT_PACELOG` regular), not the shadow pass
(`BT_RT64_SHADOWS=off` unchanged). The conversation camera keeps its place (15
units, 0.8°) and changes its field of view by 32% in one game frame; the throne
room does the same 14 frames after its wipe opens (+28%). The cut rule tested only
position, direction and roll, so neither was a cut, and RT64 interpolated the
projection across that frame's in-betweens (`TOOIE_TRACE_PROJ`: `interp=1`, fov
1.258 -> 1.221 -> 1.162 -> 1.108 -> 1.004). Measured by the height of the
corridor's white arch per presented frame: 56, 44, 47, 50, 53, 56 px across one
game frame, identically at 4:3; one in-between at 60 Hz; nothing at `Original`.
⚠ The 4.8 in-betweens of that game frame are the whole event (33 ms): comparing
with `Original` at fixed offsets missed it, and so did per-shot geometry checks.

Fix (`evaluate_camera_cut`): the camera sample carries `zoom` = |clip-y column| /
|clip-w column| of the loaded matrix (cot of half the vertical FOV), and a frame
whose ln(zoom) changes by more than `BT_RT64_CUT_ZOOM` (0.1) AND unlike last frame's
change (the same velocity rule as position) is a cut; right after a cut it needs
twice that. A deliberate zoom changes ~2% a frame. Verified: the temple's
conversation start and entry and the throne room's frame 14 now cut, the cut
frame's in-betweens are identical (diffs 0.0) and the arch stays 56 px; the
new-game intro's first 230 s gains no cut (20 before and after), the throne-room
dialogue no other. `BT_RT64_CUT_ZOOM=0` restores the old rule; `[cam]` prints `zoom=`.

### 7.7 Every model through the shared renderer carries an id

Untagged, RT64 pairs each *bone* with the previous frame's by draw-call hash and
smallest matrix difference, so similar parts get swapped: the cuckoo-clock bird
in the intro came apart (beak and a wing detached from the body, then jumped onto
the clock face), the Rare sign dipped for a frame mid-turn (top edge 132 → 139 →
131 px), the N logo blipped the same way. The root/bone hooks in
`func_800DE498`/`func_800DCF48` already ran for every model; only the C++ filtered
to the player and the sky. Non-player draws now get an id from
`actor_transform_id`: the renderer copies the position by value and reuses the
register that held its pointer, so there is no actor handle at the hook, and a
draw instead keeps the id of the previous frame's nearest draw of the same model
(within 400 units), bones nesting under it as the player's do. Measured over the
intro: 99.5% of draws keep their id, 0 append failures and 0 scope imbalances
across 3703 traced frames. `BT_RT64_ACTORS=off` restores the old pairing for A/B.

⚠ **Non-player models must not wear the player's flags** (`kActorGroupFlags`).
The first version did, which forced texcoord and tile interpolation onto the whole
world: CPU-scrolled texcoords that wrap get blended the long way round, and
`INTERPOLATE` tiles skip the TMEM-hash check (`doTileMatching`) that stops a scroll
being blended against a different texture. Reported as the screen edge
"wrapping" while turning the camera with the right stick, gone with this change.
Actor groups keep RT64's untagged defaults for those (texcoord SKIP, tile AUTO).

⚠ **But the transform components must stay INTERPOLATE, not AUTO.** AUTO
position is RT64's teleport guard and it judges each *bone* separately: a wing
snapping out of a flap trips it, that bone is drawn unblended among blended
neighbours, and it comes loose. Tried and measured on the clock bird -- AUTO
brought back the floating beak and wing fragments. Teleports are the tracker's
job: a draw more than `kActorMatchDistance` from last frame's gets a new id.

### 7.7b CPU-animated models need vertex interpolation

Some models are animated **on the CPU**: an animation list is set
(`kAnimationMatrixList` non-zero) but the root scope emits **zero** `G_MTX` —
the game bends the vertices itself every frame. Measured with `BT_RT64_ACTORLOG`
(per draw: tagged bones, matrix loads, vertex loads, DL calls): the attract
demo's big dinosaur (`0x80231890`, 18 DL calls, 0 matrices) and the N-logo stages
(`0x80200CF0`, `0x801FDDA0`, `0x801F76C0`). Transform ids cannot help those —
the body stepped at the game's 20 Hz while everything around it ran at 144,
reported as the dinosaur being "super laggy". ⚠ An earlier note here said the
logos were bone-animated and vertex interpolation could not help them; that was
an inference, and the measurement contradicts it.

Every animated root now gets vertex interpolation (`kVertexInterpolateBits`, on
the player too, which should also cover the CPU-skinned transformations —
untested). It is safe to give broadly: RT64 interpolates a transform's vertices
only when their count matches and their positions changed, so rigid and
bone-skinned models are untouched. Verified with RT64's own count
(`vertex_interpolated` in `BT_RT64_FRAMESTATS`): 0/s with `BT_RT64_VERTS=off`,
19–42/s during the logos and ~20/s (one model a frame) in the dinosaur scene with
it on, a few per second in Spiral Mountain gameplay with no visible artefacts.
The cut mask clears it too (`kCutModelMask` now covers bits 3–14).

### 7.7c A bone whose geometry is far from its origin is blended as a plain matrix

Kazooie's crest stretched into a long stalk in the Talon Trot (absent in an
emulator), present with all the port's metadata off too. **The cause is RT64's
decomposed blend, not a pairing fault.** Measured with a per-pairing log in
`GameFrame::matchTransform`: every pairing is id-for-id, but one Kazooie bone
(`0x1000011E`, 5 vertices) has its matrix ORIGIN jump 100–346 units a frame
while the body moves ~12 — it is scaled (det 0.00..4.6) and turned about a pivot
far from the origin, so the geometry stays at the head while the origin swings.
Decomposition blends origin, rotation and scale separately, and the mid-pose
carries those vertices off their path; the triangles they share with the head
become the stalk. Note what did NOT detect it: comparing the blended basis with
its endpoints (never larger), and screenshots at 50–60 Hz (too few in-betweens —
reproduce at the user's 144).

The fix is in the RT64 patch, `guardDecomposedLerp`: per mapped transform, on
its own vertices, it compares the decomposed midpoint with the plain
(component-wise) matrix blend, which keeps every vertex on the straight line
between its two real positions. A genuine rotation bows off that line by at most
`tan(θ/4)/2` of the vertex's travel (0.29 at 120°), so when the decomposed blend
strays more than `0.35 × travel + 0.5` that transform is blended plainly for the
frame (`lerpDecompose = false`). Rigid limbs never trip it; trips during the
trot are that bone and its neighbours (~30/s), 7 in the whole new-game intro.
`BT_RT64_LERPGUARD=off` disables it (the stalks come back — A/B'd);
`BT_RT64_LERPGUARD=log` prints each trip with its deviation and travel.

⚠ An earlier attempt here was wrong and is removed: it SKIPped rotation/scale on
"flicking" bones while keeping position blended. For a pivot-offset bone that is
the worst case — the full-size part is carried along the origin's 346-unit swing
— and the stalk got longer. A flick about a real joint is fine to blend; the
check above is what distinguishes the two.

Unrelated but measured at the same time: two particle models in the cave
(~35 instances a frame, ~12-frame lives) churn ids constantly. That is the
particles spawning and dying, not a tracker fault.

### 7.7d The player's id table ran out, untagging the player for good

Reported after a long session: Banjo, Talon-Trot Kazooie and the
transformations all started distorting at once and stayed that way. The
player's ids come from `player_model_transform_id`, keyed on (player slot,
model **address**) — and that address does not stay put. Every room load
reloads the model, and the heap compactor (`defrag`, `baanim_defrag`) moves it
during play. Measured with `[player-slot]` (`BT_RT64_CAMLOG`): 4 new addresses
in 60 s near Bottles' dialogue, 8 in 230 s with two trips through Banjo's
house, 2 in 64 s of open exploration. The table was append-only with 256 slots,
so after ~254 reloads/moves every new address got id 0, the root and bone
groups were no longer emitted, and the player went back to RT64's heuristic
pairing (§7.2's shearing) for the rest of the session, whatever model it wore.

Fix: a slot not drawn in this frame or the previous one is reused (oldest
first). RT64 pairs a transform only with the previous frame's, so an id idle for
a whole frame cannot be blended with its old owner. A/B with the table shrunk to
3 slots (`BT_RT64_SLOTCAP=3`), same input: with the old behaviour
(`BT_RT64_SLOTRECLAIM=off`) the player draws with id 0 from the third move on,
RT64's id-matched transforms drop from 64 to 44 a frame, and the lerp guard
trips 125 times on AUTO-paired transforms (the player blended against whatever
the heuristic chose); with reuse the stale slot is reclaimed on that frame,
matching stays at ~60 a frame and AUTO trips are 8.

⚠ A move still costs the player one uninterpolated frame (new address, new id).
Carrying the id across is not safe: a miss can equally be a model *swap* (a
transformation), and handing the old id to a different skeleton blends bones by
index across two rigs. ⚠ **Actor ids are keyed on the model address too**
(`actor_transform_id`), so a heap move gives an NPC or a cutscene character one
unpaired frame as well. Tested for Grunty (§7.7e) and it was not her cause: through
the whole new-game intro no character's model address changed mid-scene, and her
id changed only when she left the frame.

### 7.7e A blink dropped vertex interpolation for the whole of a CPU-animated body

"Grunty lags in all cutscenes." She is CPU-animated (§7.7b: anim set, 0 `G_MTX`,
66–68 DL calls; the model address differs from run to run, `0x801F4470` in one),
and so is Mingella. Her whole body is therefore ONE transform and is
interpolated only through its vertices — and RT64 does that only when the
transform's vertex count matches the previous frame's. Her eyelids and mouth
swap one part's geometry: measured with `BT_RT64_VTXLOG`, a blink runs
1174 → 1181 → 1186 → 1168 → 1168 → 1186 → 1181 → 1174 vertices. Every one of
those frames lost vertex interpolation for the entire body, which then stepped
at the cutscene's 20 Hz: 205 of her 1067 frames in the rock scene (19%), in
bursts of three. Bone-animated characters are untouched by this — their eyes are
under a bone transform with no vertex interpolation.

Fix (RT64 patch): RT64 now records where every vertex load starts
(`DrawData::vertexLoadStarts`), and when a vertex-interpolated transform's count
changed, `alignVertexLoads` pairs its loads from the front and from the back
while their lengths agree. The loads in between (the swapped eye or mouth) have
no previous shape, so each of their vertices borrows the velocity of the nearest
paired vertex: the part travels with the skin around it and only its shape
snaps. Left still instead, a part whose rim is stitched to the face would split
from it by up to a frame's motion. It gives up if fewer than half the vertices
pair. Measured on the same scene: 165 count-changing frames for Grunty, all 165
paired (1151–1158 of ~1174 vertices), 805/805 across every model in the intro; a
burst of captures through her dialogue shows no torn geometry.
`BT_RT64_VTXALIGN=off` restores the old behaviour, `=noborrow` leaves the
swapped part still. Equal-length loads that are genuinely different shapes are
paired by index, which is what RT64 already did whenever the total happened to
match.

⚠ The borrow is defensive and Grunty does not exercise it: across her blink
frames, all ~15k vertex pairs that share a position in different loads have
identical velocities with and without it (mid-blend gap 0.00 both ways). Her
eyelid geometry is not stitched to her skull. A talking face whose mouth part
*is* stitched would be where it matters. **King Jingaling is not that case**:
measured in his alive scene (recipe (c)), he is BONE-animated (`801E47F0`,
23 tagged bones, 41 `G_MTX`; the throne is a separate 8-bone model at the same
spot). His bone transforms carry no vertex interpolation, and up to 4 of them
have CPU-modified vertices (the beak) on a frame. `BT_RT64_SEAMLOG` found 297
vertex pairs on different transforms that coincide at both keyframes (373 with
the throne included), and the blend RT64 draws keeps them together: a
midpoint gap of 0.00 (0.49 at most, on the throne, the same as a plain blend
and inside the 0.5 coincidence tolerance) over ~600 frames, with no lerp-guard
trips and no re-pairing on his ids. Close-ups captured at Original refresh and at
50 Hz look the same. The "opening" is his beak parting on a red mouth as he talks,
plus a few hairline cracks that are there at Original too. It is native.

**The texture side, checked 2026-11-08 ("black lines in his face as he talks").**
Four-way A/B on the same moment of the greeting (interpolation on/off × Auto
900p/Original 240p), plus 116 captures through the whole dialogue at 50 Hz (most
of them in-between frames), cropped to his head. The only dark line on his face
is the closed beak's seam: a 1-2 px sliver of the red mouth interior
(RGB ≈ 165,47,32, not black) between the upper and lower beak, present in all
four configurations and no thicker with interpolation (red pixels inside the
yellow head: 141 on / 159 off at 900p, 43 / 48 at 240p). His head and beak are
untextured (vertex colour), so tile-edge bleed, clamp/wrap and LOD have nothing
to act on, and no dark fringe appears at any UV edge of the eye textures at 900p.
No black pixel was found inside his head in any close-up. Native; the seam simply
reads darker the higher the resolution.

**Mingella's face "vibrating like a PS1 game" is in the game's own vertex data.**
She is CPU-animated like Grunty (934 vertices, a constant count in all 2179
frames dumped, so §7.7e never touches her). The game writes every skinned vertex
as an s16, i.e. snapped to a whole model unit each frame, and her head spans
~200 units. Each vertex rounds independently as it moves, so in a close-up the
surface shimmers by ±0.5 unit (about a pixel at 900p). That is the PS1 look
exactly, and the N64 draws the same snapped vertices. The data has no
frame-to-frame reversals beyond rounding: 0.135% of axis steps reverse by ≥3
units, all of them in the feet at animation changes, and none in the head.
Interpolation blends between the snapped positions rather than adding to them.
Recovering the lost precision would mean changing the game's skinning output
format. It is now smoothed on the drawing side instead, as an enhancement
(§7.7h).

### 7.7f Transforms sharing one id were paired by submission order

"In Bottles' house, the lamps' fake light card sometimes bounces out of place
when you turn the view." The cards are one actor (`8035B630` in that run) drawing
one `G_MTX` per visible card under a single root id (no bone groups, so every
card shares it). RT64 matches transforms that share an id with
`G_EX_ORDER_LINEAR` **by their position in submission order**. So when the camera
turned and a card was culled, or a new one came into view, every later card was
blended against its neighbour's matrix and flew across the room for a game frame
before landing. Measured with `BT_RT64_PAIRLOG=1000` over 10 s of C-left turning:
55 card pairings whose origin jumped 2900-9200 units (a correct pair moves about
100), each on a frame where the visible count changed. Captured at 50 Hz, it shows
as a large, blurred, translucent card over the top-left of the room for
about 50 ms as a lamp leaves the view. There is no such card at Original refresh.

Fix (RT64 patch, `pairSharedIdRange` in `rt64_game_frame.cpp`): when several
transforms share an id, submission order is still used whenever it is plausible.
That is, every order pair is within `4 × (nearest previous origin) + 50` of
its partner, or the whole set moved alike (a rigid shift). A stable set, such as
rigid parts or blades sharing an origin, therefore pairs exactly as before.
Otherwise each transform takes the nearest previous one, by origin, with the basis
to separate coincident origins. A pairing longer than `4 × median + 50` is dropped,
so a card that has just appeared is drawn as submitted instead of flying in from
another lamp. Verified: 55 → 0 such pairings at 50 Hz and 57 → 0 at 144 Hz on the
same input, and captures through the same turn show the lamp leaving cleanly.
Re-pairing is rare elsewhere: 5 times through the first 100 s of a new game, and
a handful in Jinjo Village and the throne room, all count changes.
`BT_RT64_IDNEAREST=off` restores order pairing; `=log` prints each re-paired range.
⚠ Bone-animated actors are unaffected, since each bone has its own id. This
matters for actors whose inner matrices carry no ids: props and effects drawn as
several matrices under one root, and several instances of one model at the same
root position (which the actor tracker gives one id).

### 7.7g Untagged particles were paired with whatever was left over

"When swimming there is a decal on the water but sometimes it flashes." Banjo's
swim effects (the wake rings on the water and the bubbles off his tail, one call
hash, `D1B357712C9D8A9F` in that run) carry no ids, so RT64 pairs them with the
previous frame greedily, smallest difference first -- **with no limit on
distance**. Each time one ring dies behind Banjo and a new one is born at him, the
two leftovers are paired and blended for a game frame (two, in fact: the bad pair
also seeds the next frame's velocity prediction). Measured with `BT_RT64_PAIRLOG=150`
in recipe (a) with stick input: the rest of the group sits still (predicted
difference ~0) while one pairing per change jumps 300-500 units (1350-1610 in the
drop into the pool), 56 of them in ~20 s of swimming. Captured at 50 Hz, each
shows as a large translucent white disc flying across Banjo for 2-3 captures;
absent at `Original`, where nothing is blended.

Fix (RT64 patch, `autoPairGate` in `rt64_game_frame.cpp`): before AUTO pairings
are applied, the greedy pass is simulated, and within each call hash a pairing
whose velocity-predicted origin difference exceeds `4 x (the group's lower median)
+ 100` is removed from the candidates; the greedy pass then runs again, so the new
particle is drawn as submitted (as on the N64) and anything the bad pair displaced
can still find its real partner. A group of one fast mover is its own median and
is never gated. Perspective scenes only: the file select's sliding panels move
170-280 units a frame next to static siblings of the same hash, and gating them
would step a correct slide. Verified: 56 -> 0 such pairings on the same input, 22
gates, all that one hash; captures through the same swim show no disc. Quiet
elsewhere: 0 gates through the new-game intro (100 s) and ~90 s of random play in
Jinjo Village and Bottles' house. `BT_RT64_AUTOGATE=off` restores RT64's pairing;
`=log` prints each gated pairing.

⚠ This monitor caps RT64's target at 60 (`[rt64fps] ... target=60` with
`rr_manual_value` 144), so "144 Hz" runs on it are 60 Hz runs unless
`BT_RT64_UNCAP=1` is set (§9, §10). The pairing is per game frame and does not
depend on the display rate.

**Measured clean, not fixed (2026-11-08):** the lamp and window glows in Bottles'
house and the window lights in Jinjo Village are constant to the last bit with a
still camera (std 0.00 over 250+ captures while Banjo idles in the same shot),
and the glow area changes smoothly through a C-button turn (no oscillation); no
tracked model in the house is drawn on alternate frames. No one-frame black flash
was caught at 50 Hz across 7 warp transitions (all smooth 0.4-2 s fades), a door,
4 pause-menu opens, 8 first-person toggles, the Jamjars dialogue cut and ~10 min of
scripted random play; the only dark one-capture dips were the camera pressed into
a wall or into Banjo. Re-tried 2026-11-08: Banjo walked back into the Mayahem
Temple entrance walls with C-down, the camera scraping along them for ~16 s,
220 captures each at 50 Hz and at Original refresh: no single-capture dip in
either (frame mean luminance never under 60% of both neighbours). Still no lead. (Found later, in Mumbo's Skull: §7.11 and §7.12.)

### 7.7h Smoothing the whole-unit snapping of CPU-animated vertices (enhancement)

Asked for by the user, and native (§7.7e): Mingella's face shimmers because the
game writes every skinned vertex as an s16, so each one snaps to a whole unit on
its own and neighbouring vertices step at different times: the triangles change
shape (the PS1 look). RT64 smooths CPU-animated vertex positions while it pairs
them (`smoothVertexRange` in `rt64_game_frame.cpp`), with no state of its own:
the previous workload already holds what was DRAWN there.

* **The neighbourhood carries the motion.** Each vertex moves by the mean
  innovation (game value minus previous drawn position) of the vertices within
  `radius` (12 units) of it whose innovation agrees with its own to within `sim`
  (1.5) per axis. The rounding is independent per vertex and the real motion is
  shared, so over a few dozen vertices the rounding cancels and a patch of skin
  moves as one. The `sim` test keeps a moving lip from dragging the cheek next to
  it. Neighbours come from a grid of cell `radius` over the previous drawn
  positions (sorted keys, 27 cells), so the cost is linear in the vertex count.
* **Pull and clamp.** The result is pulled toward the vertex's own game value by
  `k` (0.1) and clamped to within `band` (0.75) of it, so nothing lags or drifts
  further than that, and a component that jumps 64 units or more is drawn exactly.
* **Count changes (§7.7e).** The paired loads are gathered and smoothed together,
  so neighbourhoods span loads; a swapped part takes its nearest paired vertex's
  offset as before (or morphs, §7.7i).
* **Upload / switch.** Unchanged: the rewritten range is re-uploaded through
  `ModifiedBuffers::notePositions`; "Smooth Animated Faces" (`bt_smooth_faces`)
  and `BT_RT64_VTXSMOOTH=off` switch it; matching only runs above the original
  rate, so at Original refresh nothing changes. Retune with
  `BT_RT64_VTXSMOOTH=<k>,<band>,<radius>,<sim>`.

⚠ **Measure the SURFACE, not the vertex.** The first version of this filter
(per-axis predict/blend/clamp on each vertex alone, `band` 0.5) was scored by
each vertex's second difference and reported -26%, and the user could not see it.
That metric is dominated by motion every vertex of the head SHARES: Mingella's
idle animation changes velocity by ~45% from one game frame to the next (head
cluster mean |a| 0.81 against per-vertex 1.00, repeating exactly every loop, so
it is the animation curve, not timing), which no filter should remove. The
shimmer is relative: the second difference of the vector between two vertices
less than 6 units apart (`filt.spatial` in the offline replay). A temporal-only
filter cannot do much about it -- the non-causal ideal clamped to 0.5 is only
~40% below raw -- and the user's suggested deadband was measured too: holding a
vertex until the game moves it 1 unit made it WORSE (+23%), a drag at 1.5 units
-40%.

**Measured** at a genuine 144 Hz (`BT_RT64_UNCAP`, §9), the intro to 292 s, from
`BT_RT64_VTXDUMP` (game and drawn positions of the same frames):

* **Mingella (934 vertices), head (y ≥ 400):** surface shimmer 0.395 → 0.124
  (-69%; the old filter replayed on the same input: -34%). Estimating the real
  deformation floor by temporally smoothing the game's data (σ 1-2 frames,
  floor 0.027-0.086), that is 74-88% of the rounding shimmer removed. Whole body
  -68%. Per-vertex second difference -10% (the shared animation, above); large
  motion 3.88 → 3.79. Drawn vertex within 0.75 of the game's value (mean 0.20).
* **Blobbelda (1219):** surface shimmer -91% (she barely shimmers: 0.010 raw).
* **Synthetic** (Mingella's motion smoothed, then re-rounded, so the truth is
  known): the filter removes 87% of the rounding shimmer; the old one 46%.
* **Other causes checked:** her root position is constant through the close-up
  (249 frames at one draw position) and the camera barely moves (mean 1.6 units
  a frame, cuts excepted), so there is no matrix or projection wobble feeding it.
  Texture coordinates were not checked.

### 7.7i Talking mouths stepped at 20 Hz: bones carry no vertex interpolation

"The mouths of Kazooie and Blobbelda are laggy when they talk, and the same goes
for everyone." Two kinds of character, two answers, measured with
`BT_RT64_VTXLOG=2` (which also reports `[vtx2]`: transforms WITHOUT vertex
interpolation whose vertices changed):

* **Bone-animated characters** (the Banjo-Kazooie model, Bottles, Mumbo, Klungo:
  20-45 bones). Their mouths, beaks and eyelids are CPU-modified vertices -- 2-72
  vertices moving up to 8 units a frame -- and part SWAPS (a bone's vertex count
  going 70 ↔ 66, 145/137/128/120, 24/20/12) UNDER a bone transform. §7.7b gave
  vertex interpolation to the animated ROOT only, so all of that stepped at the
  cutscene's 20 Hz while the bones around it glided at the display rate. Over the
  intro to 292 s: 6330 bone-transform frames with moving vertices, every one
  stepping. **Fix:** the bones of an animated model get vertex interpolation
  too (`push_player_root`, `scope.bone_flags`; as AUTO since §7.7j, so they are
  blended but never smoothed). Static bone geometry is untouched
  -- RT64 only blends vertices that changed. After: 5920 bone-frames blended
  same-count, 682 count changes paired, 1 left stepping; RT64's
  `vertex_interpolated` count per second rose 47 → 98 in the card game, 45 → 128
  in the next scene, 4 → 26 at Klungo's rock. `BT_RT64_BONEVERTS=off` for A/B.
* **CPU-animated characters** (Blobbelda 1219 vertices, Mingella 934, Grunty).
  Their whole body, mouth included, is one vertex-interpolated transform, and the
  sisters' vertex counts are constant, so their mouths were already blended at
  the display rate before this change; the smoothing (§7.7h) adds no lag (drawn
  within 0.75 units of the game, mouth-sized jumps of 64+ exact). What remains is
  the animation's own shape: the jaw keys are 20 Hz poses and a straight line
  between two of them is all an interpolator can draw. Not further addressed.

**Swapped parts now MORPH instead of snapping** (`alignVertexLoads`). §7.7e kept a
swapped part travelling with the skin but snapped its shape. Each vertex of the
new part now starts from the nearest vertex of the part it replaces (with the
skin's motion taken out first, within 16 units), so a mouth or eyelid shape
changes over the frame. A transform whose WHOLE geometry was swapped (a jaw bone
carrying only a mouth shape: fewer than half its vertices pair) used to step;
it now morphs when every new vertex has an old one within 16 units (≤ 512
vertices). `BT_RT64_VTXALIGN=nomorph` restores the snap.

### 7.7j Smoothing bone vertices cracked King Jingaling's face

"A thin black line on his face as he talks, below the mouth slit, and in other
places too" (user screenshot at 144 Hz). It was ours, and it is the §7.7h smoothing
running where it was never meant to: §7.7i gave the BONES of animated models vertex
interpolation, and every vertex-interpolated transform whose vertices changed was
also smoothed. Smoothing moves vertices off the game's positions by up to `band`
(0.75) -- on game frames too, not just in-betweens -- and a bone's seam partners sit
on other bones that are not moved with them. Measured with `BT_RT64_SEAMLOG=20002D`
(his bones, `keycracks`/`keygap` = vertex pairs the GAME put together that are DRAWN
apart on the game frame itself) through ~1000 frames of his close-up dialogue: with
bone smoothing, 490 frames had such cracks (11633 pairs, up to 1.20 units apart);
with it off, 0. `BT_RT64_VTXSMOOTHLOG` showed his head and jaw bones (`20002D03`,
140 vertices; `20002D04`, 24/8/6) drawn up to 0.75 off in 45% of frames. The line
in the screenshot is the seam between the lower beak and the head opening from the
mouth corner; step-1 crops (`BT_RT64_FRAMEDUMP` with a crop) show it in the old
build and not in the same mouth pose after the fix. ⚠ Neither interpolation nor
pairing was involved: the cracks were present on game frames as often as on
in-betweens (seam pixels per frame 4.0 vs 3.8), which is what a look at in-between
frames alone would have missed. ⚠ **Look at the LATER part of the scene** (the user
watched a test window and said so): the line is rare in the greeting and common in
the close-ups from ~95 s on (recipe (c) with A every 4 s from 78 s, to ~130 s).
Measured over 120.5-128 s with step-2 crops, counting dark pixels with his red
mouth interior directly above and below them (the dashed black line along the
mouth): bone smoothing 43.8 per game frame (61 of 162 frames), fixed 0.85 (16 of
207; in-betweens 0.91), `Original` refresh 0.97. `BT_RT64_SEAMLOG` over the whole
dialogue (~2600 frames) finds no keyframe crack and no midpoint gap after the fix.
What remains is native and identical at `Original`: in the low side shot (~101 s)
the open beak shows the dark gap under the red interior.

Fix: bones now carry vertex interpolation as `G_EX_COMPONENT_AUTO`
(`kBoneVertexInterpolateBits`), roots keep INTERPOLATE, and the RT64 patch smooths
only INTERPOLATE (`vertexSmoothingFor`, both in `matchTransform` and in
`alignVertexLoads`). AUTO and INTERPOLATE blend vertices identically; only the
smoothing tells them apart. Every bone-animated talker benefits (Kazooie, Bottles,
Mumbo, Klungo). `BT_RT64_VTXSMOOTH=bones` restores bone smoothing for A/B.

### 7.7k A part swapped inside a transform no longer morphs: it cracked King Jingaling's chin

"A brief moment when he talks where his chin cracks with black lines" (user video at
144, the greeting shot ~3.3 s after the "YO, WASSUP" cut). His transform `20002D03`
carries a mouth part that swaps 59 -> 67 -> 66 -> 59 vertices on consecutive game
frames in bursts while he talks (`BT_RT64_VTXLOG`), with 40 vertices in front/back
loads that pair. §7.7i's morph started each new vertex of the swapped loads from the
nearest vertex of the old part, independently, and the part folded: a yellow tab with
a black bar across the lower beak for two game frames (~9 presented frames) of every
burst. Lined up game frame for game frame against `Original` refresh (cut-relative
groups), the native frames are clean, so it was ours. ⚠ Seam measurements did not
see it: the rim seals against PAIRED loads of the SAME transform, which the seam
logs skipped, and the fold is a crack with no coincident vertex pair across it (the
new `[seam2]` line now includes same-transform pairs; still 0 -- the fault is a
fold, not an opened seam). ⚠ Keeping rim vertices on the borrow and morphing only
the interior was tried first: still 5.6% of frames cracked against 1.9% unmorphed.

Fix (RT64 patch, `alignVertexLoads`): a part swapped inside a transform whose other
loads pair travels with the skin (borrowed velocity, §7.7e) and changes shape on the
game frame, as on the N64; a transform whose WHOLE geometry swapped still morphs.
Measured over his greeting shot (step-1 crops of the beak, frames with a dark crack
inside the face): morphing 6.4%, fixed 1.1%, `Original` refresh 2.6% (the native
hairline cracks along the jaw edge). `BT_RT64_VTXALIGN=morphpart` restores the
partial morph for A/B.

**Same video (2026-11-09):** the "compression" during the Jiggy-wipe into the
throne-room corridor was first called native here, wrongly: the user's capture did
match a true-144 render frame for frame, but that render had the same fault, and
`Original` was compared only at sparse offsets, which a one-game-frame event slips
between. It is the FOV snap of §7.6d. Banjo's shadow there IS native: it goes faint and large on the lower floor, vanishes for a frame
and comes back hard at his feet as he crosses the gold step, identically at
`Original`: it is the §7.13 decal changing the plane it lands on.

### 7.8 The attract demo played 1.5x too fast

Not interpolation (it happens at `Original` refresh too). Rare's demos replay
recorded input **and each frame's recorded time step**, and the recording was
made on an N64 that ran Terrydactyland at ~20 Hz: the step byte reads 3 VIs on
almost every frame (some 2, 4, 5). The port never lags, so it presented those
frames at the scene's own divisor of 2 and advanced the world 3 VIs in every 2.
Measured: Banjo 25.7 units/frame in the demo vs 17.8 in normal play at the same
divisor (534 vs 771 units/s).

The two bytes were found by elimination (a scan for bytes equal to the divisor
through the title *and* through gameplay, then watched in the demo):
`kFrameStepVis` 0x8012C767 is the step the world advances by, `kFrameElapsedVis`
0x80078F65 the VIs that really passed. In normal play they are always equal.
`pace_recorded_frame` (start of `tooie_rt64_begin_frame`, before the RT64 gate)
latches "recorded timing" the first time step > elapsed, then raises the frame
divisor to each frame's step for the next wait and restores it after; the
divisor also feeds `G_EX_SETREFRESHRATE`, so RT64 interpolates at the delivered
rate. ⚠ **It must latch** — once paced, a demo frame really lasts its step and a
per-frame test switches off every other frame (3,2,3,2 = still 1.2x). It
unlatches on a scene change (frame counter reset), when the game sets its own
divisor, or after ~3 s with no step above the divisor. Verified: the demo
sections now last 1.37–1.46x as long; Spiral Mountain from a save stays at
divisor 2 for all 1085 frames; the title returns at divisor 3.
`BT_DEMO_PACING=off` restores the old behaviour.

⚠ **Nor a frame with elapsed 0 (fixed 2026-11-09):** the catch-up frame after an
overrun can start inside the same VI, so the game advances it by step 1 against
elapsed 0, and that latched recorded timing in the throne room and held normal play
at 20 Hz for the rest of the scene (§7.6b). The latch now needs elapsed > 0.

⚠ **Only a recordable step may latch (fixed 2026-11-08).** The first frame
after a map load carries the load stall in the step byte (14-15) while the
elapsed byte can read less: entering the intro's map `0x0A5` one run read step
15, elapsed 5. That latched recorded timing in normal play, and the latch then
held itself: once paced, every frame really lasts the capped 6 VIs, so the step
stays above the divisor and the ~3 s quiet release never fires. The whole scene
ran at divisor 6 (10 Hz, 113 frames instead of 196) and, because the intro
waits on its music cues (§6.9), the following transition shortened by the 1.45 s
the scene had overrun. Timing-dependent -- the previous run had read step 14,
elapsed 14 on the same frame and stayed at divisor 3. Steps above the cap of 6
no longer latch; `BT_PACELOG` prints `[pacing] latch` and `[pacing] load-stall
frame ignored` lines. Re-verified on the attract loop: each of the three demo
maps (`0x116`, `0x13A`, `0x14F`) still latches on its frame 3 (step 4-5 against
elapsed 1-2) and plays at divisors 2-6, and the load frames (step 15, 11, 7)
are ignored.

⚠ **Pacing a demo frame by frame changes the reported refresh rate almost
every frame, and RT64 used to drop frames on every change**
(`rt64_workload_queue.cpp`, `patches/rt64.patch`). Its tick counters were in
units of 1/(target × original) s, so a change of the *original* rate forced a
reset that threw away the carried fraction of a display frame: each logical
frame got floor(target/original) display frames (4 instead of 4.8 at 30 Hz into
144). Reported as enemies in the demo "lagging" (the bat, the dinosaur). The
ticks are now in a rate-independent unit (`kDisplayFrameTicks` = 3600 per display
frame), so the fraction survives and blend weights use the current logical
frame's own length. Measured with `BT_RT64_FRAMESTATS` (display frames generated
per second) at a 50 Hz target, which does not divide 30 or 20: old 38–46/s
through the demo, new 49–50.5/s; constant-rate scenes identical either way.
⚠ **Test it at a target that does not divide the game's rates** — at 60 Hz
(the second monitor's cap) the old and new code are indistinguishable.
`BT_RT64_TICKRESET=on` restores the old reset for A/B.

Measured while chasing the remaining logo roughness: game-frame pacing is clean
-- 50.0 ms ±0.6 at the 20 Hz boot/title, 33.3 ms ±0.6 at the 30 Hz demo (`t=`
and `vi=` in the `[cam]` line) -- so uneven frame delivery is not the cause.

### 7.9 Sky seams: clamped tiles with nothing to blend across (enhancement)

"Is it possible to make the seams of the sky less noticeable?" **Native, not
ours, and not an upscaling artefact**: a vertical step through Spiral Mountain's
clouds measured 112 -> 119 (row 640, x 815 at 1600x900) identically at 50 Hz
interpolated, at `Original` refresh, and at `Original` resolution.

**Cause, read from the data** (RDRAM dumped mid sky draw, model parsed
offline). Every sky checked is a panorama cut into tiles with clamp in both
axes, each mapped edge to edge across [-0.5, N-0.5] texels: Spiral Mountain
three 64x64 IA8 tiles in a 9-quad ring (A B C A B C ..., plus one quad
cross-fading C into A to fit 8 segments), Jinjo Village 32x32 RGBA32, Mayahem
Temple 32x32 RGBA16 in both directions. The art IS continuous -- adjacent tiles'
edge columns differ by 12-14 (0-255), the same as any two neighbouring columns
inside a tile (11), against 44-78 for tiles that are not neighbours -- but the
tiles do not overlap, so the filter cannot blend tile A's last texel with tile
B's first: each side holds its own edge flat for half a texel and the picture
steps by one texel's difference. A real N64 clamps the same way.

**Enhancement** (`sky_seams` in `recomp_api.cpp`, graphics option "Blend Sky
Seams" / `bt_sky_seams`, default on). At the sky draw's exit, the display list it
emitted is walked (following `G_DL`, tracking segments, tiles, loads and
vertices); every textured triangle edge lying on a clamped tile border is
collected, and edges two tiles share are paired. Both borders are then rewritten
in RDRAM to their common average, so the two sides meet at the same value.
Guards: same model (one segment-1 base); the triangles on OPPOSITE sides of the
edge (Spiral Mountain's cross-faded pair are coincident, not neighbours); and the
borders must already agree, mean |diff| <= 2 x (mean |edge - next texel|) + 3 --
real seams measure 0.1-1.3x that gradient, mismatched art 2.9-14x (the attract
and intro skies have some; they are rejected). IA8, I8, IA16, RGBA16, RGBA32 only;
CI and 4-bit are left alone. Averaging is idempotent, so re-processing is harmless.
It re-runs only when the emitted segment and `G_DL` set changes -- the model
renderer emits only the segments in view, and a seam can only be paired while
both sides are drawn -- or a written texel no longer holds (reload in place).

**Measured.** The Spiral Mountain step is gone: row 640 now runs
111 112 114 116 116 ... through the seam, row 760 111 111 111 110 109 (was
111 -> 107). Close-ups show no seam even contrast-enhanced, and no new artefact.
Mayahem Temple: every pair blended, 0 rejected; Jinjo Village: 10 pairs, 0
rejected. Cost: 22-41 us per processing in Spiral Mountain, 150-290 us for the
largest (attract/intro) sky, about once every two seconds while that camera
moves; nothing per frame beyond scanning the ~30 commands the sky emitted.
Turning the option off takes effect at the next map load (the texels already
rewritten are not restored). `BT_SKY_SEAMS=off|log|log2|log3` (§9).

**The intro's sky (2026-11-08): one partner per edge, and a cache of skies.**
"The seam blending doesn't seem to work in the intro cinematic sky." The intro's
storm sky (maps `0x0A1`, `0x0A2`, `0x0A3`) is one panorama of 18 32x32 RGBA16
tiles (`0x80315830`, `0x80316850`-`0x8031E850`), and during lightning the sky
draw alternates every 2-3 frames between a 231-command and a 579-command segment
set that lays more dome segments over the same lines (98 coincident edge pairs
in the larger set). Two faults followed, both read from `log2`:

* **An edge was blended with two partners.** It faced its true neighbour and a
  border of the other set across the same line, and every accepted pair was
  averaged in, so a foreign border entered the average and the two sides of the
  real seam never met: `80319050/01`-`80319850/00` still differed by 7.4 after
  being "blended" 20 times. Each edge now keeps only its best-matching candidate
  (lowest diff/(grad+1)) and a pair is blended only when it is the best for both
  of its edges; the rest are logged as `displaced` (26-46 per scene).
* **The alternating segment sets re-processed the sky every switch** -- 63, 37
  and 61 times in the three scenes, 0.3-1.5 ms on the game thread each, re-
  averaging texels already averaged. The last four skies are now cached (key +
  intact samples): 5, 3 and 3 processings.

⚠ **Not every line in that sky is a texture seam.** The opening full-screen sky
(~38 s of a clean-save run) still shows straight and diagonal lines, and they are
there identically with every geometric pair force-blended (a temporary switch
that ignored the diff guard), so they are not tile borders -- they run along the
dome's triangle edges. Not investigated further; whether they are native (shading
creases) has not been checked against `Original` resolution.

### 7.10 FIXED (§7.12): the intro's outside shot loses its world for a few frames at Expand

"After the poker scene there's a brief outside shot, and at some point the
environment flashes while the camera still looks at the house." Captured: map
`0x0A2`, ~2.3 s after it starts (pace clock ~154.4-154.9 s of a clean-save run),
3-4 consecutive game frames show only the stormy sky -- no cliffs, no house -- and
one of them only the middle (house and back cliff) missing. Mean frame luminance
24.5 → 38. Reproduces on every run whose capture window covers it.

* **The trigger is native lightning.** At that moment the sky draw switches from
  a 231-command to a 579-command segment set every 2-3 frames (the lightning
  bursts are at ~154.6, 166.8 and 179.1 s), and the later bursts just brighten the
  sky, which is the game's own effect.
* **Ours, Expand only.** Present at Original refresh (so not interpolation), at
  60 and at a true 144; absent with `"ar_option": "Original"` (the house stays
  through the same frames).
* **Ruled out, each by a capture of the same moment:** sky tagging
  (`BT_RT64_SKY=off`), projection ids (`BT_RT64_PROJ=off`), the sky projection id
  and the sky layer groups separately (temporary switches), the Expand frustum
  widening (`BT_EXPAND_FRUSTUM=off`), sky seam blending (`BT_SKY_SEAMS=off`), and
  extending `rt64.patch`'s Expand write-bounds rule to the sky projection. The
  committed build ef4c080 shows it too. Not a camera cut (none flagged, the camera
  dollies smoothly), no fog change (`BT_RT64_FOGLOG`), the same RDP images,
  clears, scissors and viewports every frame (`BT_RT64_RDPLOG`), the same
  projections (`BT_RT64_CAMLOG=2`) and the same three actor draws.
* **Cause found (2026-11-08): RT64's view/projection split, §7.12.** The
  lightning was a coincidence of timing. With `BT_RT64_SPLITFIX=off` the same
  harness shows only the sky at ~153.1-153.4 s on the BT_AUTOPAD clock (about 1 s
  after `-> 0x0A2`); with the fix the cliffs and the house stay in every frame.

⚠ **A dozen runs here first reported it "gone" and were wrong**: their capture
windows were anchored on the `-> 0x0A2` log line, which reaches the log ~1.8 s
late (stdout is block-buffered), so they started after the frames in question.
See §10.

### 7.11 A camera looking straight down flips its roll in one frame

"A black flash" in Mumbo's Skull (map `0x0B7`): in its lower room a fixed camera
hangs above Banjo looking straight down, and as he walks under it the game's
look-at passes its singularity. Measured with `BT_RT64_CAMLOG=1`: the view
direction turns 3.8° while the screen-up vector turns **156.9°** (115.5° on an
earlier pass) in one game frame. At `Original` refresh that is the native picture
rotating in one step. Projections blend as plain matrices
(`G_EX_INTERPOLATE_SIMPLE`), and a blend of two views 157° apart is a degenerate
matrix, so the in-between frames at 144 Hz smeared through the walls and showed
void (black). Same at 4:3; absent at `Original`.

Fix: `evaluate_camera_cut` also reads the projection's clip-y column (the
camera's up vector) and treats a turn of more than `BT_RT64_CUT_ROLL` degrees
(45; 0 = off) that the view direction does not account for as a cut, so that
frame is drawn as submitted, like the N64. `[cam]` lines now print `roll=`.
Verified with `BT_RT64_FRAMEDUMP`: the smeared frames are gone and the frame snaps
as at `Original`. The whole new-game intro (200 s) and ~60 s of Mayahem Temple
play flag no other roll cut (largest roll on any other cut: 31°, on a real shot
change).

### 7.12 RT64's view/projection split lost distant geometry when the camera faced along Z

The second "black flash": walking from Mumbo's Skull door (`BT_WARP=B8:1@40,B7:1@mB8+4`,
stick up from 50 s) into the green beam, for 4 game frames the room and Banjo
vanished and only the beam and its base were drawn: black side bands at
`Expand`, a dark-green beam at 4:3 (where the beam fills the view). Measured:

* `BT_RT64_CALLLOG`: the same four framebuffer passes, triangles, clip-space
  extents, other modes, combiners, vertex colours and texture hashes as the
  frames either side. The room is submitted.
* `BT_RT64_FBLIMIT=1` at `Original` refresh: the room is missing from the first
  pass itself at `Expand`, present at 4:3. Turning off the depth test or forcing
  depth clipping (temporary switches) changed nothing.
* `TOOIE_TRACE_PROJ=1`: in exactly those frames RT64's split of the game's merged
  matrix succeeded (elsewhere it fell back on a NaN) and produced an
  infinite-far projection with `splitErr0` 0.009. Rendering with the game's own
  matrix (a temporary switch) removed the dropout.

**Cause:** `matrixDecomposeViewProj` (`common/rt64_math.cpp`) took the
projection's depth scale from one ratio, `vp[0][2] / vp[0][3]`. Row 0 is the view
axis' x component, ~0 whenever the camera faces along Z. The 16.16 matrix held
-0.0007 / -0.0007 there, giving -1.0 against the true -1.016, which pushed
distant geometry out of the clip volume. With the yaw exactly 0 the ratio was 0/0
and the split fell back to the merged matrix, which is why only frames with a
slight yaw broke. The split's product is what RT64 renders whenever projections
are processed (any aspect ratio or refresh rate other than Original). The §7.10
intro shot is the same fault.

**Fix (rt64.patch):** the depth scale is solved by least squares over all three
rotation rows, and a split whose product does not reproduce the loaded matrix
(rotation rows within 1e-3, translation within 1e-4, relative) is kept whole, as a
NaN split already was. `BT_RT64_SPLITFIX=off` restores the old split for A/B;
`BT_RT64_SPLITLOG=1` prints each split kept whole. Verified at a true 144 with the
user's settings: the beam crossing is smooth (mean luminance 74 -> 118, no dip),
and the intro shot keeps its world. No split was kept whole across the 200 s
intro or the Mayahem Temple runs.

### 7.13 Character shadows: native cut-offs and snaps, and "Improved Shadows" (enhancement)

**How the game draws them (measured).** Each frame a pass draws the room into the
main framebuffer; then the colour image moves to an offscreen 304x228 buffer
(`0x3AB540`), is filled white, and every caster's model is drawn black through
`VP_s = F x VP_m` as a `ZMODE_DEC` decal against the room's depth (other mode
`...:0C192E10`, depth read, no write). `F` is affine (logged at `guMtxF2L`, matrix
stack base `0x8007B4F0`): rows 0/2 the model's horizontal axes (its facing, sometimes
stretched by the light), row 1 the light's shear per unit of height (0 = straight
down, -2.29 for a tunnel lamp), row 3 `(x, plane_y, z)`. A rectangle pass then
composites strips of that buffer over a box the game computes separately:
alpha = `(1 - TEXEL0) x PRIM_ALPHA`, `CLR_MEM x (1 - A)` (combiner
`FCFFE7FF:FFCF9FCF`; `PRIM_ALPHA` 0.5 overhead, 0.2 for a lamp).

**Why it cuts and snaps, natively** (same at `Original` and 4:3): the decal passes
only where the ground is coplanar with `plane_y`, so the shadow ends at every step,
ledge and floor-triangle seam (the user's prison-compound ledge and swim cases); the
game switches the light (shear 0 <-> a lamp's, darkness 0.5 <-> 0.2) and `plane_y`
(a step height, 41-50 units) in one frame (the tunnel, Mumbo's beam); and the box
follows on its own schedule, so a silhouette outside it is cut or gone for a frame.

**The enhancement (RT64 patch; graphics option "Improved Shadows",
`bt_improved_shadows`, default on).** Per workload, `State::btImproveShadows`
(`rt64_state.cpp`) finds the shadow pass (a pair that reads but does not write the
main depth, every call a decal), the main pair before it and the composite pair
after it, and:

* **Depth window.** The shadow pass's decal calls also pass wherever the surface
  lies from 200 units behind to 50 in front of the shadow's plane in linear view
  depth (`RasterPS`; the params ride the unused chroma-key fields, marked by
  `keyScale.x < 0`). Complete across steps, seams and uneven floors; never drawn
  where there is no surface (sky/void reads as far depth); bounded up walls.
* **Easing.** `F = VP_s x inv(VP_m)` per caster (matched by position, kept 0.5 s
  across gaps): the shear, the plane's height and tilt, and the light's stretch
  (the polar factor of the horizontal axes, so the caster's own turning never lags)
  follow the game's with a 0.12 s time constant, and the caster is drawn through
  `F' x VP_m`. The composite's darkness eases the same way.
* **Composite.** The game's strips are skipped (`GameCall::btSkip`) and the whole
  buffer is composited with the same formula by one full-screen pass
  (`ShadowCompositePS`, recorded before the composite pair), so an eased silhouette
  can never leave the game's box.

Measured at a true 144 (`BT_RT64_UNCAP=1`, `display=143-144/s` either way) with the
user's settings: walking from Mumbo's door into the green beam the game's shear jumps
2.34 -> 0.77 -> 1.86 and its plane 50 units in four frames; eased, the shadow slides
(2.29, 1.93, 1.62, 1.37, 1.49 ...), and where the original vanishes as Banjo steps
onto the platform (the decal loses the floor) the improved one stays on the floor.
The tunnel's lamp-to-overhead switch (shear -2.29 -> 0, darkness 0.2 -> 0.5) eases
over ~0.3 s. `BT_RT64_SHADOWS=ab` (coverage drawn magenta, window on every other
frame) measured the window adding ~40% coverage on the frames a swim shadow crossed
the pool's grass bank. Cost: one full-screen pass and one resolve of the shadow
buffer per display frame, and a few matrix products per caster per game frame.
`BT_RT64_SHADOWS=off` (or the option) restores the game's shadow exactly.
⚠ Not covered yet: the exact user swim spot was not reproduced (the tested swim
shadows were complete in both), and remote players' and enemies' shadows go through
the same pass but were not separately checked.

### 7.14 World and model seams: "Blend Texture Seams" (enhancement)

"If it's not too complicated maybe we can add [seam blending] for the rest of the
environment." Surveyed instead of built (`BT_WORLD_SEAMS=log`, §9): the §7.9
walker run over the whole frame's display list, minus the sky and every 2D
(orthographic) draw, writing nothing, at a true 144 with the user's settings.
Per frame:

|Area|textured tris|clamped|tile-border edges|edges two tiles share (blendable)|walk|
|---|---|---|---|---|---|
|Spiral Mountain `0x0AF`|800-2540|30-65%|0-32|0-8 (RGBA32, IA8)|80-260 us|
|Jinjo Village `0x142`|~2020|~43%|101-113|7-11 (IA8 64x64)|150-175 us|
|Mayahem Temple `0x0B8`|~575|~33%|33-52|6-10 (RGBA16, IA8)|117-224 us|
|Mumbo's Skull `0x0B7`|330-550|~35%|0-20|0-4 (IA8)|75-120 us|

(The sky, by comparison, has every one of its borders paired.) **Clamping is
everywhere in the world, but almost none of it is a picture cut into tiles**: a
clamped triangle's edges rarely lie on its texture's border, and those that do
rarely meet another tile across a shared edge. The handful that do are genuine
one-texel seams (their borders agree, as the sky's do).

**Not built, for three measured reasons.** (1) A few seams per area, against
the sky's dozens. (2) Cost: the world's lists change with every camera move
(the model renderer emits what is in view), so the sky's cache would miss most
frames and the walk would run each one -- 75-260 us on the game thread. (3)
Risk: the blending rewrites texels in RDRAM, and world tiles are shared --
`log2` shows the same IA8 pair `802E8350`/`802E9350` drawn from seven
different display lists -- so averaging a border for one surface changes every
other use of that texture, where the sky's tiles belong to the sky alone.
Before the 2D draws were excluded the survey also counted the level-title cards
(an 18-tile RGBA32 image) and the file-select scene (119 CI8 pairs, CI being a
format §7.9 cannot average at all); neither is world geometry.

**Built after all (2026-11-09, the user's call): graphics option "Blend Texture
Seams" (`bt_tex_seams`, default on), `texseam` in `recomp_api.cpp`,
`BT_TEX_SEAMS=off|log|log2|dry`.** The cost problem above is solved by doing
the work once per piece of geometry instead of per frame:

* **Per frame** only the lists the frame itself emitted are scanned (no
  recursion into static model lists): each static list a model group calls is
  identified by its address and segment 1, and a group is walked (§7.9's walker,
  restricted to that group) only when it calls a list never walked before.
  Measured at a true 144 across the logos, file select, intro, Spiral Mountain,
  Jinjo Village, the throne room and Mayahem Temple: the scan is **13 us a frame
  median** (window averages up to 22 us, worst single frame 156 us). Keying on
  more segments made every frame look new (they carry matrices).
* **One-time** per map: 70-400 us of walking in its first 2 s; afterwards new
  geometry coming into view costs walks of 13-360 us each, ~8 us a frame on
  average while exploring, nothing standing still.
* **Pairing** is §7.9's (shared endpoints, opposite sides, best match for both
  edges) through an endpoint hash, with a borders-agree test tightened to
  `diff <= min(grad + 3, 24)` -- the sky's `2 x grad + 3` passed a 111-vs-78
  pair in the logos that was not a seam -- and identical borders are not written.
  Borders may sit half a texel in (the sky) or on the texel edge.
* **Shared tiles.** Each pairing is recorded per BORDER; a border that later
  meets a different partner is a texture shared by surfaces that disagree, and
  every pairing involved is undone and left native for good (1 such case, in the
  intro). Render targets the frame sets (`G_SETCIMG`/`G_SETZIMG`) are never
  written.
* **Reloads and animated textures.** Eight written texels a frame are re-read;
  one the game changed means the texture was reloaded or moved (forget it, walk
  again) and a texture changed twice is never touched again.
  ⚠ **Nothing is ever written back to an address not read this frame.** The
  first build restored a forgotten texture's PARTNERS from their saved bytes,
  guarded by "still holds what we wrote" -- with one-byte IA8 texels that test
  passes by chance on memory the heap compactor has reused, and it crashed the
  game intermittently (3 of ~20 runs, never with `=off` or `=dry`). Since: 0 of
  11 under the same stress.

**Measured result.** Per area 0-12 pairs blend (IA8 64x64 and RGBA16/RGBA32 32x32
tiles); in Mayahem Temple the off/on crops show a vertical one-texel step in the
wall gone and the rest of the frame identical (959 px of 370k changed, all on
seam lines). **Characters: none.** Banjo (tagged through the player's root
draws), King Jingaling and the Mayahem Temple NPCs yielded no pair: their
clamped borders do not meet another tile on a shared edge in model space. ⚠
Edges are matched on RAW vertex positions, so a seam across two BONES (vertices
loaded under different matrices) cannot be found; that would need each vertex
transformed by its `G_MTX` before matching -- not done.

### 7.15 Hold Start to skip a cutscene (feature)

"If you hold Start you can skip a cutscene; use the game's own graphic to show
the hold indicator." General option **Hold Start to Skip Cutscenes**
(`bt_hold_skip`, default on); `src/cutscene_skip.cpp`.

**The game already has the skip; it just hides it.** Every cutscene sequence --
the new-game intro, the "Meanwhile..." scenes, the boot logos and two more --
is run by one actor, `chintroticker`, placed in each map of the sequence. Its
update (`func_808005AC_chintroticker`) walks a chain table (overlay offset
0x8C4, `(map, next)` pairs) and advances when the scene sets flag 0:

|Sequence|Maps|End|
|---|---|---|
|boot logos|`0x18B`|-1|
|new-game intro|`0x0A1 0x0A8 0x0A2 0x0A9 0x0A3 0x0AA 0x0A4 0x0AB 0x0A5 0x0AC 0x0A6 0x0A7`|-2 (Spiral Mountain `0x0AF` exit 4)|
|"Meanwhile..." (the King zapped)|`0x18E 0x18C 0x18F 0x190 0x17E 0x18D`|-3 (back to the map it was queued from)|
|(unidentified)|`0x194 0x197 0x198 0x199 0x195 0x193 0x192`|-4|
|(unidentified)|`0x191 0x196`|-5|

The same update holds two native skips, chosen by the ticker's state nibble
(byte `0x79` >> 4): in **state 1** (the boot logos) Start, gated by flag
`0xD56`, calls `_gcfrontend_entrypoint_10`; in **state 2** (the intro, ...)
**B** calls `func_80800530_chintroticker`, which walks the chain from the
current map to the end marker and hands it to `func_808004A8` -- exactly the
call the ticker makes when the last scene ends by itself, so the end handler
(`func_808003C4`) runs either way. The hold performs the state's native call
from inside the ticker's own update (a hook at its entry), once a load is not
already pending. The "Meanwhile..." scenes run in **state 3**, which polls no
button; they take the same jump to the end.

⚠ **Jumping to the end skips what the scenes in between do.** Measured by
playing each sequence through with every flag write logged (a hook on
`func_800DA3B8`, `[flagset]`) and diffing the flag blocks where the played and
skipped runs meet (`[flags]`): the boot logos and the intro set no lasting flag
in any scene (their blocks are identical from the first scene to the last), but
"Meanwhile..." sets **flag 0x67A in scene `0x190`** -- the flag King
Jingaling's throne room (`chkingjinjobits`) tests to know he has been zapped.
The first skip left it clear. The sequences are therefore a measured table
(`kSequences`/`kSceneFlags`): a skip sets, through the game's own set-flag
(`func_800DA544`), the lasting flags of every scene from the current one to the
end, and the two unmeasured chains (`0x194`.., `0x191`..) are not skippable
until someone measures them the same way.

**Verified** at a true 144 with the user's settings (`display=143.8-144.0/s`):
* intro, held in its first scene (`0x0A1`): Spiral Mountain (`0x0AF` exit 4),
  the scripted walk out of the house (state `0x98`), then control (stick up
  walks Banjo ~950 units); its song (50) plays. Its flags equal those the
  played intro holds at its last scene (the played intro is ~11 min and its
  last scene, `0x0A7`, did not end within 685 s of a run, so the two were not
  compared at `0x0AF` itself);
* "Meanwhile..." (King Jingaling's dialogue, A every 2 s, then held 6 s into
  `0x18E`): back in Jinjo Village at Banjo's spot (106.8, 0, 2071.7), idle,
  stick walks him ~1480 units; all five flag blocks identical to the played
  run's at the same return (at 193 s against its 412 s); Jinjo Village's song
  (89) plays in both, and each keeps its last cutscene song's id in another
  player slot (135 skipped, 140 played) -- the played run does the same.

**The hold.** It counts only in a sequence listed in the table. Start's held-frame counter is the game's own (`func_8001608C`
keeps one per button; Start of controller 1 at `0x80079A14`, read by
`func_80015F84`). Time is wall time from the first held frame; 1.0 s skips.
A tap is not touched -- the game sees the button as before -- and one hold
skips one sequence (Start has to be let go before the next).

**The indicator is the game's honeycomb** (the energy meter's unit, the pause
screen's 32x32 CI4 icon), filling from the bottom while held, fading in over
0.12 s and out over 0.3 s once let go or skipped. Its asset is read from the
ROM at 0xB9E1A4 -- a u16 size (x16) and a raw-deflate stream, the core1/core2
block format, inflating to 808 bytes: a one-frame sprite header (32x32 at
+8/+10), the 16-colour palette at +40, the texels at +72. Found by dumping the
textures the pause screen loads (`BT_HUDLOG`/`BT_HUDDUMP`) and inflating the
ROM until those texels appeared; checked by size and header on load, and a ROM
that does not match draws no indicator (the skip still works). It is drawn as
two RT64 texture rectangles appended at the end of the frame's display list
(`tooie_frame_end`, a hook at `0x800A7518`, just before `func_800E7EF4` closes
the list): the comb dark and see-through, then the bottom part at full colour.
The 544 bytes of palette and texels travel inside the list behind a G_DL branch,
so nothing outside the game's own frame buffer is written (~0.8 KB in all; the
two list buffers are 0x76D0 bytes apart and the largest list measured 0x2D50).
⚠ **A cutscene's letterbox is a scissor**, so the comb (bottom right, in the
lower bar) drew nothing until the indicator set a full-screen scissor
(`gEXSetScissor` left-to-right in Expand). It also uses `gEXSetRectAlign` so
it sits at the right edge of a widened frame.

**Not covered: conversations outside a sequence.** Talking to an NPC
(Jingaling, Jamjars, ...) is not a ticker sequence, and the game has no skip
for a first conversation: `gcdialogexec` only lets B close one when its
`0x15A` bit 0 is set, and pressing B through King Jingaling's first dialogue
did nothing (measured). The hold therefore leaves them alone. Fast-forwarding
them would mean injecting A presses, which also answers any question prompt
with its default.

### 7.16 Any button straight to the file select (feature)

"It takes a while when the game starts before you can go to the file select."
General option **Skip Straight to File Select** (`bt_boot_skip`, default on),
in `src/cutscene_skip.cpp`. Measured with no input: the first frame is 1.2-1.5 s
after process start; the logos and title (map `0x18B`) run to 52 s, then the
attract demo (`0x14F`, `0x116` at 88 s). Only **Start** leaves any of it: on
the title from ~20 s (Start every second from 1 s reached the file select at
21.0 s; A presses never did), and in the demo (Start at 60 s -> file select at
61 s).

**Both exits are the game's own, and both end at the file select (`0x158`).**
On the logos/title the ticker is in state 1, whose Start calls
`_gcfrontend_entrypoint_10`; the ~20 s wait is the game's input enable gating
that press (`func_80015FA0`), not a different path. In the attract demo (game
mode byte `0x80127760` == 2, `gsattract` running) Start calls `func_800A9C50`,
which loads the map saved before the demo (`0x8012776A` = `0x158`) and restores
the game mode. Any button now takes the matching call at once -- the logo one
from the ticker hook, the demo one from `tooie_frame_end` -- when no load is
pending.

⚠ **The game's button counters cannot say "the player pressed".** A demo
replays its recording INTO the raw pad buffer (`_glrecord_entrypoint_0` is
handed `0x80079B40`), so the counters at `0x800799E0` report the recording's
presses: the first build left the demo by itself at 62 s. Presses come from the
host instead -- `get_input_tracked` (`main.cpp`) ORs controller 1's rising edges
into `g_bt_pad1_pressed` -- and anything pressed outside the logos and the demo
is dropped, so a press made in play cannot fire later.

**Verified** at a true 144 (`display=142.9-144.0/s`): a press at 2-3 s on the
pad clock reaches the file select ~1.0 s later (4.1-5.3 s after process start,
against 22 s with Start natively); a press in the demo, 1.1 s; the file select's
song (103) is the same as after the native Start; a new game then starts the
intro (`0x0A1`) and a copy of the user's save continues into Spiral Mountain
with control; with no press the logos and both demos play at the old times;
with the option off a press does nothing. A file saved before the intro ends
continues into the intro again -- native (a warp out of the intro does the
same).

---

## 8. Traps

Operational hazards, each of which has cost real time.

### Build

* ⚠ **`build_bt.bat` returns exit code 0 even when ninja fails.** Grep its output
  for `error`; the exit status is not a signal. This silently produced a stale
  binary twice in one session.
* **A new `funcs_*.c` is invisible until CMake re-runs.** `CMakeLists.txt` uses
  `file(GLOB)`, so an existing build directory never notices new files. Run
  `cmake_configure.bat` whenever the *set* of generated files changes, or the
  link fails with `undefined symbol: static_N_...`.
* ⚠ **A shader edit needs `cmake_configure.bat` before `build_bt.bat`.** HLSL
  variants are generated at CMake *configure* time and only then compiled to
  DXIL/SPIR-V, so editing a `.hlsl` alone gives a "successful" build that still
  contains the old shader. Check the artifact mtime
  (`build-cmake/src/shaders/RasterPSDynamic.hlsl.dxil`) against the source.
* **`cmd /c` mangles nested quotes.** Use the `.bat` wrappers rather than
  inlining `vcvars64.bat ... && ninja ...`.
* **`.bat` files must have CRLF line endings**, or cmd mis-parses multi-line
  `if (...)` blocks and exits 255 with no output.
* **`%VAR%` inside a parenthesised block expands when the block is *parsed*.**
  Use `goto` labels, not blocks, for environment staleness guards.
* **cmd's line limit is 8191 characters** — relevant when re-exporting a large
  environment.
* **`tools/keep_loop.py` is the only CRLF file in `tools/`.** A multi-line edit
  written with LF silently fails to match it; splice with `open(..., newline='')`.

### Diagnostics

* ⚠ **`printf` before an abort is lost.** stdout is block-buffered when
  redirected and the process dies through the `exit()`-then-abort path. If a run
  ends with no message, get the stack — do not assume there was none.
* **Symbolizing a host address: the map's second field is section-relative.**
  `RVA = field2 + 0x1000`. Acting on field 2 as the RVA mislocates every symbol by
  `0x1000`, enough to name the wrong function. Re-read and re-parse the map after
  every rebuild.
* **PowerShell writes UTF-16LE.** Reading a redirected log as UTF-8 yields zero
  regex matches and looks like a clean run. Sniff the BOM.
* **`/tmp` does not exist and `C:\tmp` is not writable.** Redirect into the repo.
* **Hook placement: N64Recomp inlines a branch's delay slot into the branch
  body**, so a hook at the delay-slot address lands in dead code and never fires.
  Hook the branch, or the instruction before it.
* **`MEM_W`/`MEM_BU` need the sign-extended gpr.** `ctx->r4` already holds
  `0xFFFFFFFF80xxxxxx`; truncating it to `uint32_t` underflows the address
  computation and reads host memory *before* RDRAM — which silently produced a
  `slot_ptr = 0` reading that sent an investigation the wrong way.
* **Guest byte reads apply `addr ^ 3`.** Reading RDRAM with plain host loads
  gives bytes off by three. Every "byte field" reading in early notes was an
  artefact of this.
* **The pad's fields are not at their struct offsets** for the same reason: the
  button halfword is at `P ^ 2`, the bytes at `(P + n) ^ 3`.

### Measuring

* ⚠ **Do not judge a frame by a sparse pixel sample.** Sampling every 16th pixel
  gave byte-identical "top colours" for two captures and looked like a frozen
  window, while a full-image diff showed 60% of it changing.
* **`PW_RENDERFULLCONTENT` (flag 2) is required** to capture the window; a plain
  `BitBlt` or `PrintWindow` with flags 0 returns an empty buffer for a flip-model
  D3D swapchain.
* **Computed style values read during an init callback are pre-layout** and show
  document defaults for everything — which looks exactly like "the style did not
  apply". Read them from an update callback after a frame.
* ⚠ **Gate probes on a predicate, not a counter.** Every count-based probe cap hit
  its limit long before the failure and hid it. Gate on the game's frame counter
  or a state change, so the log tail is always the failure.
* **A shared `static` counter across two probes of the same host function makes
  the second look dead.** Use one counter per id.
* **Check the probe's own argument order.** One probe printed `gen`/`tgt`/`cons`
  rotated by one position because a `vis` argument was inserted into the format
  string in the wrong slot, which sent an investigation after a non-existent
  counter reset.

### UI / recompui

* ⚠ **recompui never reads image files.** `RenderInterface::LoadTexture` looks the
  source up in `image_from_bytes_map` — populated only by
  `queue_image_from_bytes_file` / `queue_image_from_bytes_rgba32` — and for an
  unknown source returns a **1×1 transparent texture and reports success**. So
  `<img src="assets/x.png">` and `decorator: image( assets/x.png )` both draw
  *nothing*, silently. Register the bytes first, under a name starting with `?`
  (which makes `RenderManager::LoadTexture` skip `JoinPath`).
* **An element's `id` cannot be used for a project stylesheet rule.**
  `ContextId::add_resource_impl` overwrites it with `<type name>-<slot>` *after*
  the constructor. `class` works.
* **RmlUi returns `nullptr` for an unknown font family and logs nothing** — a
  missing font is a silent fallback. Prove a family is honoured with an A/B
  against a bogus name, not by the absence of a log.
* ⚠ **Changing `font_size` alone does nothing visible.** recompui's typography
  presets set `line_height = font_size` as a *fixed dp value*, so the line box
  stays put while the glyphs grow. Set the line height too.
* **`GameOption`'s `Update` handler reassigns `focus_style`'s colour every
  frame** from `get_pulse_color` (an orange pulse), so anything set there is
  overwritten before it is seen. Its disabled styles also reset the background to
  transparent, dropping any custom plate.
* **RmlUi asset failures go to `OutputDebugStringA`, not stdout** — use
  `tools/dbgview.py`. Only one DBWIN listener can exist at a time, so it returns
  nothing while Visual Studio or DebugView is attached.
* **The icons load lazily** (`ElementSVG::LoadSource` runs from
  `GetIntrinsicDimensions`, i.e. at layout), so "no warnings" is only meaningful
  next to a control that *does* warn.

---

## 9. Instruments

Different failures need different tools. Choosing the wrong one wastes a session.

|Failure|Instrument|Why|
|---|---|---|
|**Fault** (exception)|`tools/minidbg.py`|self-contained Win32 debugger; no cdb/WinDbg on this box. Reports the faulting module, the `ExceptionInformation` (access type + address), the guest address, and a symbolised stack against the linker map.|
|**Hang** (no fault, no CPU)|`tools/stack_sample.py`|suspends every thread and walks each stack. A hang raises no exception, so minidbg says nothing about one.|
|**Spin** (~1.0 core, no fault)|`tools/rip_poll.py`|suspends every thread and reads each RIP repeatedly; the thread whose RIP keeps changing is the one executing. One run is enough.|
|**Runs, then stops**|`tools/stall_probe.py`|waits for Tooie's *own* frame counter to stop, then dumps guest message queues, the gate entries/slots, and every thread's stack.|
|**Stall, state-dependent**|`tools/soak.py`|`stall_probe.py` caps at 240 s (~850 game frames), too short for deep gameplay.|
|**UI asset failure**|`tools/dbgview.py`|captures `OutputDebugStringA`, where RmlUi logs.|
|**Look at the picture**|`tools/capture.py`|saves the window to PNG.|
|**Input-gated state**|`tools/trace_play.py`|the attract loop cannot reach first person; this launches with tracing and drives input.|
|**Unattended input**|`BT_AUTOPAD`|scripted presses ORed into player 1's pad, `seconds:button,...` from the first input poll; `from-to:button` holds, and `up/down/left/right` drive the stick. From a clean save, `26:start,32:a` reaches the new-game intro; with a save, the same loads it.|
|**Interpolation cuts / ids / timing**|`BT_RT64_CAMLOG=1`|per frame: `[cam]` (wall time `t=`, divisor `vi=`, camera step/turn, CUT), `[actors]` (draws that kept their id vs new), `[player]` (Banjo's root translation), `[player-slot]` (each player id (re)assignment, §7.7d).|
|**What a model emits**|`BT_RT64_ACTORLOG=1`|per non-player draw: id, position, tagged bones, `G_MTX`/`G_VTX`/`G_DL` counts. Animation set + 0 matrices = CPU-animated.|
|**Is RT64 keeping up**|`BT_RT64_FRAMESTATS=1`|once a second from RT64: logical and generated display frames/s, and how many transforms had their vertices interpolated.|
|**Do the clocks agree / where did a stall go**|`BT_PACELOG=1`|one `[pace]` line per game frame: wall time `t=`, frame counter, map, divisor, step and elapsed bytes, `wvi=` (VIs the world advanced, sum of the step byte), `vi=` (the runtime's VI count), `au=` (audio frames the game generated; `/rate=` is the audio clock), `q=` device queue in us, `drop=` frames the queue skip-logic threw away, `empty=` buffers queued onto an empty device (underruns), `yld=`/`isy=` scheduling points spent in the §6.6 sweep / the §6.9 intro wait, `ic=` the intro's schedule clock. A transition is a jump in `t=` with `f=` +2; compare `au=` across it. Also `[pacing]` latch lines (§7.8).|
|**Intro music-cue wait, A/B**|`BT_INTROSYNC_YIELD=off`|removes the §6.9 scheduling point: the music stops for every intro transition again.|
|**Which bones blend plainly**|`BT_RT64_LERPGUARD=log`|one line per transform whose decomposed blend strayed off its vertices' paths (§7.7c): id, vertex count, deviation, travel. `=off` disables the check.|
|**Player id table exhaustion**|`BT_RT64_SLOTCAP=n`|shrinks the player id table so running out (§7.7d) happens in seconds; `BT_RT64_SLOTRECLAIM=off` restores the old never-reuse table for A/B.|
|**Which pairings jumped**|`BT_RT64_PAIRLOG=<units>`|one line per id-paired transform whose origin moved further than that in one frame: id, both transform indices, distance, both origins, transform counts. A wrong pairing shows as thousands of units where its neighbours move tens (§7.7f).|
|**Transforms sharing an id**|`BT_RT64_IDNEAREST=log`|one line per id range that was re-paired by nearest origin instead of submission order (§7.7f): counts, pairs, dropped. `=off` restores order pairing.|
|**Which particles were re-paired**|`BT_RT64_AUTOGATE=log`|one line per untagged pairing removed by the gate (§7.7g): call hash, both transform indices, predicted distance, the group's limit and size, both origins. `=off` disables the gate.|
|**Sky seam blending, A/B and what it did**|`BT_SKY_SEAMS=off`, `=log`, `=log2`|`off` disables the §7.9 blending, overriding the graphics option. `log` prints one `[skyseam]` line per processed sky: display-list range, commands walked, models, border edges, pairs blended/rejected, coincident (`same-side`) pairs skipped, texels written, and `us=` the time it took. `log2` adds one line per pair with its `diff`/`grad`, verdict (`blend`, `REJECT`, or `displaced` = a valid seam that is not the best match for one of its edges, §7.9), the display lists of both triangles and their combiner/other-mode state. `log3` also dumps every command the walker visits (`[skydl]`) and one `[skydraw]` line per sky draw.|
|**Does the blend open a seam**|`BT_RT64_SEAMLOG=<hex id>>8>[-<last>]`|per frame, for that model's transforms (root id without its bone byte, e.g. `20002D`): vertex pairs on different transforms that coincide at both keyframes, and the largest gap the drawn blend opens between them at the midpoint, against a plain blend. Also `rawpairs`/`keycracks`/`keygap`: pairs the game's own (pre-smoothing) positions put together this frame, how many are drawn more than 0.1 apart on the game frame itself, and the largest such gap (§7.7j). Also `[seam2]`: the in-betweens exactly as `RSPWorldCS` draws them (`M(w) * (pos - vel*(1-w))`) for every mapped transform, count changes and same-transform pairs included: `together`/`gap` = pairs together at w=0 and w=1 and the largest separation at w=0.25/0.5/0.75; `open`/`openswapped` = together at w=1 but apart at w=0 (§7.7k). O(n²) in vertices, so it is a diagnostic only (§7.7e, King Jingaling).|
|**Does a CPU-animated model blend**|`BT_RT64_VTXLOG=1` (`=2`)|one line per vertex-interpolated transform per frame from RT64: id, current and previous vertex count, whether it changed, and how many vertices `alignVertexLoads` paired when the counts differ (§7.7e; 0 = it stepped). `=2` adds `[vtx2]` for transforms WITHOUT vertex interpolation whose vertices changed (count, how many moved, the largest move) -- CPU-modified geometry that steps at the game's rate (§7.7i). Verbose — grep by id (ids from `BT_RT64_ACTORLOG`). `BT_RT64_VTXALIGN=off` disables the pairing, `=noborrow` leaves the swapped part still, `=nomorph` snaps a swapped part instead of morphing it (§7.7i), `=morphpart` morphs a part swapped inside a transform again (the pre-§7.7k behaviour that cracked his chin).|
|**Bone vertex interpolation, A/B**|`BT_RT64_BONEVERTS=off`|gives the bones of animated models their old flags (no vertex interpolation), so CPU-modified mouths and part swaps step at the game's rate again (§7.7i).|
|**Render 144 Hz on a 60 Hz test monitor**|`BT_RT64_UNCAP=1`|testing only: presents without vsync and lifts RT64's cap of a Manual target to the monitor's refresh, so `rr_manual_value: 144` really generates 144 frames a second (the compositor drops the excess on screen). Verify with `BT_RT64_FRAMESTATS=1`: `[rt64fps] ... display=143.8/s ... target=144`. Without it this box's monitor caps every "144 Hz" run at 60 (§7.7g).|
|**Every projection, sky and world**|`BT_RT64_CAMLOG=2`|adds a `[proj]` line per perspective projection: game frame, whether it is the sky's, the camera position and the view-projection's diagonal and depth terms (the `[cam]` line samples only the first, which is the sky's).|
|**Expand frustum widening, A/B**|`BT_EXPAND_FRUSTUM=off`, `=log`|`off` leaves the game's 4:3 culling planes alone in Expand (§7.1); `log` prints the four planes of each camera it widens. `func_800CAF34` runs only when a camera's planes are rebuilt, not every frame.|
|**What the RDP is told, A/B the ubershader**|`BT_RT64_RDPLOG=1`, `BT_RT64_FOGLOG=1`, `BT_RT64_UBERONLY=1`|`RDPLOG` prints every color/depth image, fill rect, scissor and viewport RT64 receives; `FOGLOG` every fog colour and fog range change; `UBERONLY` draws everything through RT64's ubershader (rules out specialised-shader compilation).|
|**Is vertex smoothing on, and what does it cost**|`BT_RT64_VTXSMOOTH=off`, `BT_RT64_VTXSMOOTHLOG=1`|`=off` disables the CPU-animated vertex smoothing (§7.7h) for A/B, overriding the graphics option; `=bones` also smooths bone transforms (the pre-§7.7j behaviour that cracked faces); `=<k>,<band>,<radius>,<sim>` retunes it (defaults `0.1,0.75,12,1.5`). `VTXSMOOTHLOG` prints `[vsmooth]` per vertex-interpolated transform per frame, on or off: `rough` = mean \|second difference\| of the drawn positions per component (real acceleration as well as shimmer, so it barely moves -- use `BT_RT64_VTXDUMP` and measure the surface instead, §7.7h), `off`/`max` = mean/max distance from the game's value (never above `band`). Group by `n=` (vertex count): Mingella is 934, Blobbelda 1219.|
|**Per-vertex trajectories**|`BT_RT64_VTXDUMP=<path>:<n>[,<n>...]`|appends, for every vertex-interpolated transform with one of those vertex counts, a record `u32 id, u32 n, n×3 f32 game positions, n×3 f32 drawn positions` (binary, flushed per frame). For offline A/B of a filter on the identical input: dump with `BT_RT64_VTXSMOOTH=off` and replay.|
|**Unattended runs that stay out of the way**|`BT_WINDOW_POS=x,y`|creates the window at that position (physical pixels) without activating it, e.g. on a second monitor. Launch with `--game bt` to skip the launcher menu (it ignores `BT_AUTOPAD` and posted clicks), and set `"background_input_mode": "Off"` in a portable `general.json` so a controller in use elsewhere does not drive the test.|
|**Every presented frame, to disk**|`BT_RT64_FRAMEDUMP=<path>[,<step>[,<t0>[,<t1>[,<x>,<y>,<w>,<h>]]]]`|appends every presented frame (game and interpolated, so a true 144 Hz run gives 144 a second), point-sampled every `step` pixels of RT64's presented colour target, between `t0` and `t1` on the BT_AUTOPAD clock, optionally cropped to a `w`x`h` rectangle at (`x`,`y`) (a face close-up at step 1 for seconds instead of a full frame; the full-frame step-1 dump costs ~600 MB/s and itself drops presented frames). Record: `FDMP`, u32 seq, u32 index in its game frame, u32 frames in it, f64 t, u32 w, u32 h, w*h*3 RGB. D3D12 only (plume has no texture-to-buffer copy; under Vulkan it would crash). ~25 MB/s at step 5 on the 1600x900 window, so keep the window short. Use it instead of window captures, which the compositor caps at the monitor rate (§7.11, §7.12).|
|**Improved Shadows, A/B and what it did**|`BT_RT64_SHADOWS=off`, `=log`, `=ab`|`off` restores the game's shadow (overrides the option, §7.13). `log` prints one `[shadow]` line per caster per game frame: position, the game's shear and plane height and the eased ones, the eased stretch, the composite's darkness. `ab` draws the shadow's coverage in solid magenta and applies the depth window on every other game frame without easing, so consecutive frames of one run differ by the window alone; count magenta pixels to measure what it recovers.|
|**Matrices in the call log**|`BT_RT64_CALLLOG_MTX=1`|with `BT_RT64_CALLLOG`, adds `[vp]` (each projection's merged matrix) and `[mtx]` (each perspective call's world matrix and id) -- how §7.13's `F = VP_s x inv(VP_m)` was found.|
|**What RT64 drew, per pass and per call**|`BT_RT64_CALLLOG=<t0>,<t1>`|once per workload in that window: `[calls]` per framebuffer pair (colour/depth image, write and scissor bounds, depth read/write), `[proj]` per projection (type, transform id, aspect mode, calls, triangles), `[clip]` where its triangles land in clip space, `[call]` per rectangle or framebuffer-sampling call, `[cc]` per call of passes 1-2 (clip counts, w range, prim/env, other mode, combiner, mean vertex colour, first texture hash), and `[fbrec]` per pass record (RDRAM reloads, format changes). Heavy; keep the window to a second (§7.12).|
|**Draw only the first passes**|`BT_RT64_FBLIMIT=<n>`|renders only framebuffer pairs 0..n of every workload. Meaningful at `Original` refresh only (interpolated frames show stale targets).|
|**View/projection split, A/B and failures**|`BT_RT64_SPLITFIX=off`, `BT_RT64_SPLITLOG=1`|`off` restores RT64's row-0 split (§7.12); `SPLITLOG` prints each merged matrix the split could not reproduce and kept whole.|
|**Per-frame refresh rate, A/B**|`BT_RT64_STEPRATE=off`|reports the frame divisor's rate to RT64 for every frame again, instead of the frame's own step on irregular frames (§7.6b).|
|**Camera FOV-snap cut threshold**|`BT_RT64_CUT_ZOOM=<ln>`|per-frame change of ln(cot(fovy/2)) that counts as a cut when it is also unlike last frame's (§7.6d), default 0.1, 0 = off. `[cam]` lines print `zoom=`.|
|**Camera roll cut threshold**|`BT_RT64_CUT_ROLL=<deg>`|screen-up turn per frame that counts as a cut (§7.11), default 45, 0 = off. `[cam]` lines print `roll=`.|
|**Hold-to-skip, A/B and what it did**|`BT_HOLDSKIP=off`, `=log`|`off` disables §7.15's hold-Start skip, overriding the option. `log` prints `[skip]` lines (the ticker's state per sequence, each hold, each skip and where it went, the frame-list buffers and the largest list) and `[flags]` lines -- the game's progress flag blocks and the five music players' song ids -- at every map change and again 5 s later, so a skipped run can be diffed against a played one where they meet, and `[flagset]`, every flag write (`func_800DA3B8`) with its map -- how a sequence's lasting flags are found (§7.15).|
|**World seam survey**|`BT_WORLD_SEAMS=log`, `=log2`|every 2 s, walks the whole frame's display list (minus the sky and every 2D draw) and prints `[worldseam]`: textured and clamped triangles, clamped tile-border edges, the edges two different tiles share by format, and how many of those §7.9's blending could read and would accept. `log2` adds one line per pair. Writes nothing (§7.14).|
|**What the frame draws in 2D**|`BT_HUDLOG=1`, `BT_HUDDUMP=<dir>`|once a second, every texture drawn by a texture rectangle or by a triangle after an orthographic projection: address, format, size, screen rectangle, palette. `BT_HUDDUMP` writes each one's texels (then palette) to `<dir>/hud_<addr>_<fmt>-<siz>_<w>x<h>_<line>.bin` -- how the pause screen's honeycomb was found (§7.15).|
|**Coherent camera motion, A/B**|`BT_RT64_CUT_COHERENT=off`|restores the plain velocity rule, which flags the follow camera's swoop after a fall as cuts (§7.6c). `[cam]` lines print `coherent` where the coherence test overrode it.|
|**Any button to the file select, A/B**|`BT_BOOTSKIP=off`|disables §7.16, overriding the option. With `BT_HOLDSKIP=log`, `[boot]` lines give each map's arrival in seconds since process start and on the pad clock, and each press that skipped.|
|**Texture seams (world/models), A/B and cost**|`BT_TEX_SEAMS=off`, `=log`, `=log2`, `=dry`|`off` disables §7.14's blending, overriding the option; `log` prints a `[texseam]` line every 2 s (scan cost per frame, walks and their cost, pairs blended/rejected/conflicts, lists seen, borders, rewrites, volatile textures); `log2` adds each walk and each pair, tagged `PLAYER`/`MODEL`/`world` by the draw it came from; `dry` does everything except write.|
|**Start somewhere specific (debug only)**|`BT_WARP`, `BT_POKE`, `BT_POS`|`src/test_harness.cpp`, run once per game frame from the `func_800A73F4` hook; unset = one null check. Syntax and verified recipes below.|
|**Where am I, what is Banjo doing**|`BT_HARNESSLOG=1` (`=2`)|map id, Banjo's position and movement state once a second (`=2`: 4x a second plus every state change). Map changes are logged whenever any harness variable is set. States: `0x1` idle, `0x4` walk, `0x5` jump, `0x2D`/`0x2E` swimming/paddling, `0x73` locked in dialogue, `0x98` scripted walk, `0xA6`-`0xAA` Grip Grab.|

### Starting a run anywhere: `BT_WARP` / `BT_POKE` / `BT_POS`

A clean portable save plus `BT_AUTOPAD=26:start,32:a` reaches the new-game intro
(map `0x0A1`) at ~34.5 s; a warp at 40 s lands in the target map by ~42 s. Times
are seconds on the `BT_AUTOPAD` clock (first input poll). The game **autosaves**:
after the first run the same autopad loads file 1 straight into the saved map at
~34.5 s, and `@40` warps still work. Delete `build-cmake/saves` for a clean start.

* `BT_WARP=map[:exit][@when][,...]` calls the game's own go-to-map request,
  `func_800A791C(map, exit, 1)` (the call warp pads make), so the map loads
  through the real transition. One request per frame, deferred while a load is
  pending (`0x80127642` nonzero). Map ids are ScriptHawk's (`games/bt.lua`).
* `BT_POKE=target op value[:bits][@when][,...]`: `target` is a hex address or
  `*PTR+OFF` (the word at PTR, plus OFF); `op` is `=`, `|=` or `&=`; bits default
  from the digit count (2/4/8). Each item logs `was / wrote / read back` on its
  first write, and when the game had changed it back. Quote it in cmd
  (`set "BT_POKE=..."`) because of `|`.
* `BT_POS=x,y,z[@when][;...]` sets Banjo's position (all three copies the game
  keeps). Retries until a player exists.
* `when`: none = every frame (a constant GameShark code; for warps and positions,
  none = once at 0 s); `@S` once at S s; `@mMAP` once on entering MAP;
  `@mMAP+S` once, S s after entering it; a trailing `~` repeats every frame from
  then on (for `@m`, while in that map).

Addresses (USA 1.0), each observed in game: current map `0x80132DC2` (u16; boot
`0x18B`, file select `0x158`); flag block = `*0x8012C770` (heap, moves between
runs, hence `*`); moves are flag-block bytes `0x18`-`0x1F` (new game reads
`E0 FF FF 01`: the Banjo-Kazooie moves) and **Grip Grab is byte `0x1B` bit 1**
(ScriptHawk); player = `*(0x80135490 + 4 * byte 0x801354DF)`, position block at
player `+0xE4`, movement block at `+0x120`. Byte order checked: the 32-bit word
at flag `+0x18` read `0xE0FFFF01` and the byte at `+0x1B` read `0x01`.

Verified recipes (clean save, halved screenshots taken; add `BT_WINDOW_POS`):

|Target|Recipe|Observed|
|---|---|---|
|(a) Spiral Mountain, Banjo swimming|`BT_AUTOPAD=26:start,32:a BT_WARP=AF:1@40`|exit 1 is the waterfall cave: Banjo drops into the pool and treads water from ~49 s, state `0x2D`, y 630.|
|(b) Jinjo Village|`BT_AUTOPAD=26:start,32:a,44-47:up BT_WARP=142:1@40`|"Isle O' Hags (Jinjo Village)" title by 48 s, walking out of the tunnel from Spiral Mountain.|
|(b) Bottles' house|`BT_AUTOPAD=26:start,32:a BT_WARP=142:1@40,143:1@m142+8`|inside the front door, Bottles' family in view, by ~53 s.|
|(c) King Jingaling, alive and talking|`BT_AUTOPAD=26:start,32:a,62:a,64:a,...,110:a BT_WARP=142:1@40,144:1@m142+12`|Banjo walks in (state `0x98`), "YO, WASSUP! I'M KING JINGALING" by ~62 s; the A presses (every 2 s) run the dialogue to the Jiggy hand-over (~118 s).|
|(c) the zap cutscene|`BT_AUTOPAD=26:start,32:a BT_WARP=142:1@40,18E:0@m142+9`|"Meanwhile..." at Cauldron Keep, B.O.B. firing (map `0x18E`).|
|(e) NPC dialogue that cuts the camera|`BT_AUTOPAD=26:start,32:a BT_WARP=B8:1@40 BT_POS=3246,1201,-3601@mB8+3`|Mayahem Temple: Jamjars' first-visit "HEY! GET YOUR SORRY HIDE..." fires the moment Banjo lands (state `0x73`); `BT_RT64_CAMLOG` logs a CUT at its start (5224 units, 116 deg) and another when it ends ~5.5 s later.|
|(e) Jamjars, walked up to|`BT_AUTOPAD=26:start,32:a,48-52:up BT_WARP=B8:1@40 BT_POS=2946,1201,-3901@mB8+3`|Banjo walks ~420 units into the trigger (stick up runs +x+z there) and the first-visit dialogue starts at ~49 s, state `0x73`; the dialogue camera is a 140-frame flyover.|
|(e) Mumbo, walked up to, then talked to again|`BT_AUTOPAD=26:start,32:a,49-51:up,52:b,53:b,54:b,56:a,...,71:a,74:b,75:b BT_WARP=B8:1@40,B7:0@mB8+4`|map `0x0B7` is Mumbo's Skull (exit 0 = its door). Walking up starts a scripted walk (`0x98`) and his intro (`0x74`, ~50 s); A every second ends it at ~72 s and the B presses at 74 s start a second talk.|
|(e) Humba Wumba|`BT_AUTOPAD=26:start,32:a BT_WARP=B8:1@40,B6:1@mB8+4`|map `0x0B6` is Wumba's Wigwam; use exit **1** (exit 0 leaves Banjo stuck at the origin in `0x98`). Entering walks him in and her intro starts at ~50 s.|
|Mingella / Grunty / the sisters (new-game intro)|`BT_AUTOPAD=26:start,32:a`|maps `0x0A1` (Klungo at the rock, 34-99 s) → `0x0A8` (card game) → `0x0A2` (the sisters' drill, ~152 s) → `0x0A9` → `0x0A3` (~214 s); Mingella (934 vertices) is on screen at ~250-275 s of launch time.|
|(d) Grip Grab learned (still open 2026-11-08)|`BT_POKE=*8012C770+1B\|=02@mB8~` (all moves: `*8012C770+18=FFFFFFFF@mB8~,*8012C770+1C=FFFFFFFF@mB8~`)|**OPEN.** The bit is written and read back, but no ledge state (`0xA6`-`0xAA`) has been observed yet, so the grant is not proven in play and no ledge recipe exists. Leads: the Cheato-page ledge at the top of Mayahem Temple's pyramid (`BT_POS=-1200,4400,-900@mB8+3` stands Banjo on its top strip, y 4250); the pyramid tiers are 500 units apart, too tall to reach by jumping. Pin health while probing (`BT_POKE=8011B644=05`); falls out of the level respawn at the MT entrance.|

**What triggers the alive-King scene:** entering the throne room (`0x144`) on a
file that has not met him yet (observed: it plays on arrival from a fresh file).
In normal play that is your first walk into his palace in Jinjo Village after the
intro; the intro itself is other maps (observed `0x0A1` -> `0x0A8` in its first
65 s). Read from the code, not traced: the throne-room actor
`func_80800014_chkingjinjobits` is a state machine that tests flag `0x367` before
the greeting dialogue, and a later state queues the zap cutscene with
`_glcutDll_entrypoint_7(0x18E)`.

**Distinguish spin from idle block by CPU first**: a spin holds ~1.0 core, an idle
block ~0.0 — and measure it over a window against the frame counter, because a
*running* game also holds ~1.0 core.

⚠ **Do not try to drive the game with synthetic keystrokes.** `SendInput` with
scancodes into the flip-model D3D window does not register even after
`SetForegroundWindow`. A real controller works, and so does `BT_AUTOPAD`, which
injects below the input layer. To test the pad, read `OSContPad` while a human
plays.

---

## 10. Verification discipline

This project's most expensive mistakes were **accepting a signal that did not
mean what it appeared to mean.** The rules that follow from that:

1. **"Recompiles clean" and "compiles" are different bars, and neither means the
   game runs.** `EXIT=0` says only that C was emitted. For a long time it emitted
   C that could not compile at all.

2. **A missing log line is not evidence of success.** RmlUi logs nothing for an
   unknown font; `LoadTexture` returns success for a texture it did not load;
   `ElementSVG::LoadSource` succeeds only if *both* the file open and the parse
   succeed, so silence there *is* meaningful — but that has to be established per
   API, not assumed.

3. **Pair every "no failures" claim with a control that does fail.** A negative
   control (a deliberately missing file, a bogus family name) is what turns
   silence into evidence.

4. **Verify against the consumer, not the producer.** An append returning true
   proved nothing; RT64's own decode counters did. A hook being present in the
   generated C proved nothing; the game's behaviour did.

5. **Prefer a measurement that can distinguish the hypothesis from its opposite.**
   Before shipping a fix, ask what result would falsify it. Three skybox fixes
   were falsified this way, cheaply, instead of being shipped.

6. **Make the metric match the requirement.** A lever was shipped as a default
   because a counter said it helped; the counter measured something adjacent to
   the requirement. "The sky now uses the game's real camera" (camDelta → 0) is
   not the same as "the sky uses the same interpolated camera as the world".

7. **When a reading contradicts a second reading of the same address, suspect the
   print before the game.**

8. **Test at the user's rate for real.** The user plays at 144 and timing-
   dependent bugs may only appear there; this box's monitor is 60 Hz and RT64
   caps a Manual target to it. `BT_RT64_UNCAP=1` presents without vsync and
   lifts the cap: with `rr_manual_value` 144, `BT_RT64_FRAMESTATS=1` must show
   `display=143.8-144.0/s target=144` -- check that line, not the setting.

9. **Never time a capture off a log line.** The game's stdout/stderr is
   block-buffered when redirected, so a line such as `[harness] ... -> 0x0A2`
   reaches the file ~1.8 s after it happened. Capture windows anchored on it
   started after the event and a dozen runs "showed" a bug fixed that was not
   (§7.10). Use fixed windows on the launch clock (the new-game intro is
   repeatable to ±0.5 s) and check the window covered the event.

10. **Commit large changes.** Uncommitted work is the one thing that cannot be
   recovered, and this project has lost an A/B to a stale build once.

---

## 11. Working on this repository

### Dependencies are submodules, and three carry required patches

See `README.md` "Dependencies". After cloning:

```bash
python tools/setup_deps.py        # fetch submodules and apply patches
python tools/setup_deps.py --check
```

⚠ **`git status` always shows the three patched submodules as modified.** The
gitlink pins the upstream commit while the working tree holds the patch
uncommitted. `git submodule update` therefore **reverts the patches** — re-run
`setup_deps.py` afterwards.

⚠ **Editing a submodule file does not publish the change.** A fix that matters
must be regenerated into its `patches/*.patch`:

```bash
# after editing lib/<dep>, regenerate against its pinned commit
git -C lib/<dep> diff <pinned-commit> > patches/<dep>.patch
```

A file the patch ADDS must be marked first (`git -C lib/<dep> add -N <file>`), or `git diff` leaves it out (rt64.patch adds `src/shaders/ShadowCompositePS.hlsl`, §7.13). This is the single way this repository can silently regress. Check with
`git ls-files -s lib/` for the pinned commits.

### Regenerating the recompiled code

Only needed if you change the symbol map, the config's stubs/hooks, or the
recompiler patches.

```bash
cd lib/N64Recomp && build_n64recomp.bat     # build the patched recompiler
cd ../..
python tools/decompress_rom.py              # needs your ROM
python tools/autostub.py                    # recompile to a clean build
cmake_configure.bat                         # the file set changed
```

The normal bring-up loop when the game reports a missing function:

```bash
python tools/keep_loop.py            # run → validate → add → regen → rebuild
```

It validates each address against the generator's own test before touching
`force_keep.txt`, and **stops with the evidence printed** if it cannot justify an
address. That is the signal to look by hand, not to add another entry.

⚠ **Before adding a boundary, rule out the four non-boundary causes**: an overlay
base delta, an unnamed overlay head, a jump-table artefact, or a core hole. None
is fixed by `force_keep`. Only then append to `build/force_keep.txt` — and check
it is a real function start, because adding a mid-function address silently splits
a function in half.

### `force_keep.txt` is accumulated state

It cannot be regenerated. Deleting it loses work. `tools/rebuild_force_keep.py`
can repair it approximately (union of a fresh harvest and the previous entries
that still validate), but entries the driver discovered which are neither harvest
targets nor structurally valid are lost.

### Boundary detection is heuristic for core1/core2

Overlay boundaries are derived from the decomp and from the ROM's own tables;
**core1/core2 boundaries are heuristic**. Coverage is good and it recompiles
cleanly, but clean output is not proof of correct boundaries. ~929 functions /
69 KB of core code were originally unnamed and recovered by gap-filling; treat
this as the most likely source of a latent bug.

### Releases are published by CI, and the version is stamped into the binary

`.github/workflows/build.yml`. Every push to `main` publishes a release; a `v*`
tag publishes one for that tag; pull requests only build and upload an artifact.
Both Windows x64 and Linux x64 are built, and **one** `release` job publishes
them together, so the two builds cannot race to create the release and a release
is never published missing one of its assets.

* **The tag** for a `main` push is the next patch version: the highest plain
  `vX.Y.Z` tag with its patch incremented (`v1.0.1`, `v1.0.2`, …). It is read
  with `git ls-remote --tags` rather than `git tag`, because the checkout is
  `fetch-depth: 1` — a shallow clone has no tags in it at all. A human tag push
  moves the base (after `v1.1.0`, branch builds are `v1.1.1`). (The step is
  Python, run with `shell: python`, so the same code runs on both runners.)
* **The version is stamped into the executable**, so the launcher's label — and
  any bug report that quotes it — identifies the build. The workflow sets
  `BT_VERSION`; `CMakeLists.txt` turns it into the `BT_VERSION` define; and
  `src/main.cpp` uses that as `version_string`. A local build has no such
  variable and reports `1.0.0`.
* ⚠ **The string must be `MAJOR.MINOR.PATCH`**, optionally with a `+suffix` or
  `-suffix`. `recomp::Version::from_string` accepts nothing else and `main`
  exits with `Invalid version string` on anything else, so the workflow rejects
  a non-conforming tag *before* building rather than shipping an executable that
  cannot start. `1.0.0` is what the workflow emits now; a manual tag may carry
  a suffix, and `1.0.0-build.7` is accepted because the suffix is explicitly
  allowed. Verified end to end with `1.0.0-build.99`.
* ⚠ **It is an environment variable rather than a `-D` cache entry on purpose.**
  A cache entry persists in `build-cmake/`, so it would keep stamping a stale
  version into local builds long after the workflow that set it had gone.
* The build steps **assert** the stamp is in the binary (a substring search over
  the executable), because a release whose binary reports a different version
  sends every bug report to the wrong build. That check is verified to fail when
  the stamp is absent, not just to pass when it is present.
* `cancel-in-progress` is deliberately **off**: a run that has started is about
  to create a tag and a release, and killing it mid-flight can leave a tag with
  no asset behind it. GitHub keeps only the newest pending run per group, so a
  burst of pushes collapses instead of queueing.
* Tags the workflow creates with its own `GITHUB_TOKEN` do not trigger further
  workflow runs, so the auto-tag cannot loop back into the `tags: ['v*']`
  trigger.

**Linux build.** The port's own code is platform-neutral — `src/main.cpp` guards
every Win32 call behind `#ifdef _WIN32`, and `CMakeLists.txt` has had the Linux
branch (`find_package(SDL2)`, Freetype, `PLUME_SDL_VULKAN_ENABLED`) since it was
written; only the CI job was missing. What the Linux job needs, and why:

|Package|For|
|---|---|
|`clang`|rt64 and N64ModernRuntime pass GCC-style flags and are clang-only by construction. Ubuntu 24.04's clang is 18, which is enough — the LLVM 19 floor is MSVC's STL check, not the code.|
|`libsdl2-dev`|SDL2, and transitively the X11/Wayland/ALSA headers `SDL_syswm.h` includes.|
|`libfreetype-dev`|RmlUi's font engine (`Freetype::Freetype`).|
|`libdbus-1-dev`|nativefiledialog-extended's xdg-desktop-portal backend (`NFD_PORTAL`, forced on for Linux — see below).|

⚠ **The first Linux run failed twice, and both causes were ours.** Neither was
visible from Windows, which is the point of building both:

1. **`-spirv: not found`.** `CMakeLists.txt` set `DXC` inside `if (${WIN32})`, so
   on Linux it was empty and the generated command line began with its first
   option. `RecompFrontend` compiles its own shaders through rt64's
   `build_shader`, which always emits SPIR-V (plus DXIL on Windows, MSL on
   macOS), so the shader compiler is needed on every platform. ⚠ **rt64 sets
   `DXC` in its own directory scope, and a CMake function resolves variables
   from its *call site*** — so RecompFrontend's calls never saw rt64's copy and
   the top-level one is the one they use. It now mirrors rt64's selection:
   `dxc.exe`, `dxc-macos` under `DYLD_LIBRARY_PATH`, `dxc-linux` under
   `LD_LIBRARY_PATH`, per-architecture. The leading `VAR=value` element is
   load-bearing on Linux (libdxcompiler.so is not on the system library path)
   and CMake emits it unquoted, which the shell reads as an environment
   assignment.
2. **`undefined reference to RtlCaptureStackBackTrace` / `__ImageBase`.**
   `recomp_api.cpp` called both unconditionally. Six diagnostics print the
   *host* call stack (the generated C calls the guest's callees as plain C
   functions, so the host stack names the recompiled callers where the guest
   `$ra` cannot), and all six went through those symbols directly. They now go
   through `host_backtrace()` / `host_image_base()` — the Windows pair on
   Windows, `backtrace(3)` with no image base elsewhere. On Windows the
   substitution is a pure rename, so the output is unchanged; on ELF the frames
   are absolute for `addr2line` rather than map-relative RVAs. The rest of the
   port's own sources were audited for the same problem and have none.

**Verified by CI, not locally.** Run 6 (commit `ed44f6b`) went green end to end
and published `v1.0.0-build.6` with both assets. The Linux job's checks all
passed on the real artifact:

```
build-cmake/BanjoTooieRecompiled: ELF 64-bit LSB pie executable, x86-64, ... dynamically linked
all shared libraries resolve
runtime assets present
version stamp present: 1.0.0-build.6
```

and both published archives were downloaded and inspected: the Windows zip has
the 21.3 MB GUI-subsystem exe (subsystem 2), SDL2/dxcompiler/dxil, 23 assets and
the docs; the Linux tar.gz has a 27.9 MB ELF64 x86-64 exe, `run.sh` and the exe
both mode 0755, and 25 assets. Both binaries carry the version string.

⚠ **What that does not establish: that the game runs on Linux.** The runner has
no GPU, so the Linux job verifies that it links, that every shared library
resolves, that the assets are present and that the version stamp is in the
binary — nothing more. "Builds" and "runs" are different bars here as everywhere
else in this file.

⚠ **The GTK file dialog segfaulted on "Select ROM"; Linux uses the portal.**
`NFD_Init` (→ `gtk_init`) runs on the main thread, but recompui opens the
dialog from its UI thread, and GTK is single-threaded. Three coredumps on the
first real Linux run all died in `gtk_box_get_content_size` under
`gtk_file_chooser_dialog_new` ← `NFD_OpenDialogU8`, on a thread that was not
the main one. `CMakeLists.txt` now sets `NFD_PORTAL=ON` for Linux before
`add_subdirectory(rt64)` (which owns nfd): the xdg-desktop-portal backend
talks D-Bus with no thread affinity, and GTK drops out of the binary entirely.
`DT_NEEDED` is now `libSDL2-2.0.so.0`, `libfreetype.so.6`, `libdbus-1.so.3`
plus libc/libm/libgcc_s/libatomic. The cost is a running portal service at
runtime (standard on GNOME/KDE, absent on a bare window manager).
⚠ It is a non-`FORCE` cache entry, so an *existing* `build-cmake/` configured
before the change keeps `NFD_PORTAL=OFF` — reconfigure with `-U NFD_PORTAL`.

⚠ **The Linux package ships a `run.sh` for a reason.** `recompui`'s
`file::get_program_path()` returns `""` on Linux as well as on Windows (the
`/app/bin` case is Flatpak-only), so `assets/` resolves against the *working
directory*. On Windows that is invisible — Explorer sets the working directory
to the executable's own folder — but on Linux it is not, and the failure is
`Failed to load font face from assets/LatoLatin-Regular.ttf` followed by a
throw. `run.sh` `cd`s to its own directory first. Anything that launches the
Linux binary must do the same.

**Flatpak packaging (`flatpak/`).** App ID `io.github.Vidanox.BanjoTooieRecompiled`.
Built with `-DRECOMP_FLATPAK=ON` and `-DNFD_PORTAL=ON`. This defines
`RECOMP_FLATPAK` so `recompui::file::get_program_path()` resolves assets directly
from `/app/bin/assets/`, and configures nativefiledialog-extended to use
`xdg-desktop-portal` over DBus for the ROM selection dialog. CI builds the
standalone `.flatpak` bundle after the native Windows and Linux builds succeed.

---

## 12. Build configuration, status, and what remains

### Release ships as a GUI subsystem binary

**Release is linked `/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup`**, so launching it
creates no console window. Both flags are required together — the entry point is
`main`, not `WinMain`. Debug deliberately keeps `/SUBSYSTEM:CONSOLE`.

This does not lose the diagnostics:

* `--show-console` calls `AllocConsole` and rebinds `stdin`/`stdout`/`stderr` to
  it, so a release build can still be run with a console when needed.
* output is captured normally when a parent supplies pipes, which is how every
  tool in `tools/` runs it.

⚠ If you add a build type or touch the link flags, check the PE subsystem field
afterwards — it must be `2`, not `3`. `/SUBSYSTEM:CONSOLE` silently reintroduces
the console window for every user who launches the game from Explorer.

### What remains

Working and verified: boot, attract loop, intro cutscene, gameplay, repeated scene
transitions, audio, controller input, overlay load/unload/heap-shift, save/load
(EEPROM). Multi-minute soaks run clean. **All of that is Windows x64.**

Known limitations are in `README.md` — chiefly the `Expand` skybox coverage
trade-off.

Open work, roughly in priority order:

1. **Play the Linux build.** CI builds it green and checks that it links, that
   every shared library resolves, that the assets are present and that the
   version stamp is in the binary — but the runner has no GPU, so the game has
   never been launched on Linux. The two defects the first Linux run did expose
   were both build-time and are fixed (see §11: the shader compiler was only
   selected on Windows, and `recomp_api.cpp` used `RtlCaptureStackBackTrace`
   unconditionally). The first thing to check is that `run.sh` is what the
   tester uses, because the assets are resolved against the working directory.
   The first run crashed on **Select ROM** (GTK called off its thread); that is
   fixed by the portal backend (§11) but has not yet been re-tested by hand.
2. **Licensing on shipped assets.** `assets/Suplexmentary Comic NC.ttf` carries
   "All rights reserved" with no license, and the 11 icons in `assets/icons/`
   came from the same source. This blocks a public release.
3. **Audit the `_recomp` shims in `src/recomp_api.cpp`** — 60 macro-generated plus
   hand-written ones, of which the runtime supplies only some. They are
   approximations, and the most likely remaining source of silently wrong
   behaviour. The PI/EPi DMA family is the top suspect: a no-op DMA returns
   success having transferred nothing, which is the `__osSiRawStartDma` bug's
   exact shape. Method that worked for the stub audit: one-shot fire counters,
   one normal session, see which actually execute.
4. **Review the `boot_*` stubs** against what the runtime provides. Do not
   un-stub without testing — they are load-bearing for boot.
5. **Strip the development instrumentation** before a release: probe hooks in
   `banjotooie.us.toml`, the `LOOKUP_FUNC` override in `include/tooie_recomp.h`,
   `[probe]` prints inside the runtime patch, and the rt64 diagnostics commit.
   ⚠ Removing the `LOOKUP_FUNC` override changes dispatch for *every* generated
   file, so do it **after** the audits above and soak afterwards, or a failure
   gets misattributed.
6. **Scene correctness has never been diffed against original hardware.** Every
   check in this project proves the frame *changes*, not that it is *right*.
7. **Broad coverage for the depth-clip fix** (see §7.4).
8. **CPU-skinned alternate character forms** (`dbanim_entrypoint_0/1`) are not
   covered by the interpolation metadata; they would need `G_EX_VERTEX_POSITION`.
