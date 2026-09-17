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

---

## 7. Findings: rendering

Four defects were found and three fixed; each was settings-gated, so none was a
regression in the default configuration.

### 7.1 `Expand` culls geometry at the frame edges

`Expand` widens only RT64's *rendering* viewport. Tooie's own CPU-side visibility
test still builds a **4:3 frustum**, so anything outside the original view is
discarded by the game before RT64 sees a display list. The three wrappers are in
**core2**, not in the `bainvisible` overlay:

|Wrapper|Kind|
|---|---|
|`func_800E3D0C`|float AABB|
|`func_800E3DC0`|s16 AABB|
|`func_800E3E8C`|sphere|

Each sets `$v0 = $v1` immediately before `jr $ra`; `$v0 == 0` means culled, and
callers branch straight on it. `tooie_expand_visibility` flips that verdict **only
when `ar_option == Expand`**, reading the applied graphics config directly rather
than mirroring the frontend's option callback.

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

**Distinguish spin from idle block by CPU first**: a spin holds ~1.0 core, an idle
block ~0.0 — and measure it over a window against the frame counter, because a
*running* game also holds ~1.0 core.

⚠ **Do not try to drive the game with synthetic keystrokes.** `SendInput` with
scancodes into the flip-model D3D window does not register even after
`SetForegroundWindow`. A real controller works. To test the pad, read `OSContPad`
while a human plays.

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

8. **Commit large changes.** Uncommitted work is the one thing that cannot be
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

This is the single way this repository can silently regress. Check with
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

* **The tag** for a `main` push is `v<base>-build.<run number>`, where `<base>`
  is the highest plain `vX.Y.Z` tag. It is read with `git ls-remote --tags`
  rather than `git tag`, because the checkout is `fetch-depth: 1` — a shallow
  clone has no tags in it at all. (The step is Python, run with `shell: python`,
  so the same code runs on both runners.)
* **The version is stamped into the executable**, so the launcher's label — and
  any bug report that quotes it — identifies the build. The workflow sets
  `BT_VERSION`; `CMakeLists.txt` turns it into the `BT_VERSION` define; and
  `src/main.cpp` uses that as `version_string`. A local build has no such
  variable and reports `1.0.0`.
* ⚠ **The string must be `MAJOR.MINOR.PATCH`**, optionally with a `+suffix` or
  `-suffix`. `recomp::Version::from_string` accepts nothing else and `main`
  exits with `Invalid version string` on anything else, so the workflow rejects
  a non-conforming tag *before* building rather than shipping an executable that
  cannot start. `1.0.0-build.7` is fine — the suffix is explicitly allowed.
  Verified end to end: a build stamped `1.0.0-build.99` boots past
  `[tooie] step version` with no error.
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
|`libgtk-3-dev`|nativefiledialog-extended's Linux backend, GTK3 unless `NFD_PORTAL` is set.|

The Linux job verifies what it can without a GPU (the runner has none, so the
game cannot be launched): the file is an x86-64 ELF, **every shared library
resolves** under `ldd` — the check that catches a link which quietly picked up a
build-time-only library — the runtime assets are present, and the version stamp
is in the binary. It does **not** prove the game runs; that needs a real GPU and
has not been done.

⚠ **The Linux package ships a `run.sh` for a reason.** `recompui`'s
`file::get_program_path()` returns `""` on Linux as well as on Windows (the
`/app/bin` case is Flatpak-only), so `assets/` resolves against the *working
directory*. On Windows that is invisible — Explorer sets the working directory
to the executable's own folder — but on Linux it is not, and the failure is
`Failed to load font face from assets/LatoLatin-Regular.ttf` followed by a
throw. `run.sh` `cd`s to its own directory first. Anything that launches the
Linux binary must do the same.

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

1. **Play the Linux build.** CI builds it and checks that it links, that every
   shared library resolves, and that the version stamp is present — but the
   runner has no GPU, so the game has never been launched on Linux. Nothing
   platform-specific is known to be missing (`src/main.cpp` guards every Win32
   call; `CMakeLists.txt` has had the Linux branch since it was written), but
   "builds" and "runs" are different bars here as everywhere else in this file.
   The first thing to check is that `run.sh` is what the tester uses, because
   the assets are resolved against the working directory.
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
