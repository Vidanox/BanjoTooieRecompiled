# High-Refresh Interpolation, Rendering, QoL, and Debug Fixes

This document summarizes all bugs investigated and fixed across the `fix/high-refresh-interpolation` branch (commits `d2cd4b1`, `ef4c080`, `28235c1`, `df326ba`, `5a8c8d8`, plus subsequent uncommitted fixes currently in the working tree and `patches/`).

---

## 1. High-Refresh Pacing, Timing, and Audio Synchronization

### 1.1 Attract Demo 1.5× Playback Speed & Enemy Hitching
* **Problem:** Rare's attract demos replay recorded frame time steps recorded at 3-VI intervals against a divisor of 2, causing demos to run ~1.5× too fast. Separately, RT64's workload queue reset tick counters whenever the reported original refresh rate changed, dropping interpolated frames and making demo enemies hitch.
* **Fix:**
  * In `src/recomp_api.cpp` (`pace_recorded_frame`), latched the divisor to the recorded step while a demo recording is active, and prevented the pacing latch from sticking after returning to normal gameplay.
  * In `lib/rt64/src/hle/rt64_workload_queue.cpp`, stopped resetting tick counters on rate changes and passed each frame's own step duration as its refresh rate (`BT_RT64_STEPRATE=off` for A/B).

### 1.2 Intro / Map-Transition Audio Starvation & Freezes
* **Problem:** Waiting on render frame completion without yielding starved the audio thread during transitions (2–6.5 s freezes across 11 transitions, leaving music ~34 s behind by Spiral Mountain).
* **Fix:** Added a 1 ms yield hook in `src/recomp_api.cpp` (`BT_INTROSYNC_YIELD=off` for A/B).

### 1.3 RSP / RDRAM Synchronization Race
* **Problem:** `N64ModernRuntime` signaled `sp_complete()` as soon as a graphics task was enqueued, before RT64 had read the task's display lists, matrices and vertex buffers out of RDRAM. A game that reuses those buffers on SP done could overwrite them while RT64 was still reading them.
* **Fix:** In `patches/N64ModernRuntime.patch` (`ultramodern/src/events.cpp`), `gfx_thread_func` now reports SP and DP done only after `renderer_context->send_dl()` returns, which is when real hardware would report it. `submit_rsp_task` does not wait, so the game thread never blocks on the renderer. An earlier version made it block; that was removed after review because it serialized the CPU behind the GPU.

---

## 2. Camera Interpolation, Scene Matching, and Camera Glitches

### 2.1 Cutscene Camera Cuts, Roll Cuts, Zoom Snaps, and Fall Camera Motion
* **Problem:** At high refresh rates (e.g., 144 Hz), RT64 blended across cutscene camera cuts, sharp 90°+ overhead camera rolls (Mumbo's hut), and single-frame conversation FOV zooms (~30% zoom on Jiggywiggy / King Jingaling), squashing or smearing frames. Conversely, flagging absolute step sizes broke steady flyover pans, camera shake, and the follow camera swooping down after a fall.
* **Fix:** In `src/recomp_api.cpp` (`evaluate_camera_cut`):
  * Detects cuts from frame-to-frame *velocity change* rather than raw step size (`BT_RT64_CUT_DIST=60`, `BT_RT64_CUT_ANGLE=15`).
  * Flags screen-up roll turns above 45° (`BT_RT64_CUT_ROLL=45`).
  * Flags one-frame FOV/zoom velocity snaps (`BT_RT64_CUT_ZOOM=0.1` in `ln(zoom)`).
  * Keeps coherent follow-camera motion along the same path interpolating smoothly (`BT_RT64_CUT_COHERENT=off` for A/B).

### 2.2 Gloomy Caverns Prison Bars & Aztec Sky Camera Shake / Snaps
* **Problem:** Running back and forth past the prison cell bars in Gloomy Caverns (`0x0D2`) or moving the camera back and forth in first-person above the temple in Mayahem Temple (`0x0B8`) caused sporadic single-frame camera snaps / shaking.
* **Root Cause:** In RT64's `matchScenes`, scenes from consecutive frames were paired strictly by raw L1 `matrixDifference`. During fast camera turns at large world coordinates, shifting `view[3]` caused a small offset sub-pass (e.g., a ~6-call overlay) to appear closer in `matrixDifference` than the previous ~250-call world scene, mis-pairing scenes and snapping the camera for one frame. Separately, empty scissor projections (`scissorRect.isNull()`) and interpolated UVs across frustum-culled skybox panels contributed to sky instability.
* **Fix:**
  * In `lib/rt64/src/hle/rt64_game_frame.cpp`, skipped projections with `fbPairProj.scissorRect.isNull()`, and updated `matchScenes` (`SceneMatchCandidate`) to rank scene pairs by structural compatibility—`matrixId` tier (`idMismatchTier`), `viewIdentityMismatch`, and draw-call scale (`callScaleMismatch`)—before `matrixDifference`, while skipping identity mismatches and explicit `matrixId` mismatches.
  * In `src/recomp_api.cpp`, introduced `kSkyModelGroupFlags = kActorGroupFlags` for skybox groups so frustum-culled sky panels keep tile `AUTO` and texcoord `SKIP` (preventing cross-blending between incoming/outgoing sky panels while still interpolating the sky transform).

### 2.3 Aztec First-Person Sky Flicker Near the Sun & Expand Dropouts
* **Problem:**
  * Looking slightly above the sun in Mayahem Temple (`0x0B8`) produced a flickering cutout where infinite-perspective sky dome triangles interpolated slightly past `Z/W = 1.0`.
  * In `Expand` aspect mode, crossing the green beam in Mumbo's hut or lightning flashes during the intro caused entire rooms/cliffs to drop out.
* **Fix:**
  * In `lib/rt64/src/shaders/RasterPS.hlsl`, added numerical tolerance to the far plane check when `MaxDepth == 1.0f`: `farDepthLimit = MaxDepth + ((MaxDepth == 1.0f) ? 1e-3f : 0.0f)`.
  * In `lib/rt64/src/render/rt64_projection_processor.cpp`, computed depth scale via least-squares solve during view/projection splitting and fell back to the game's matrix when the reconstructed product diverged (`BT_RT64_SPLITFIX=off` for A/B).

---

## 3. Character Rendering, Interpolation, Eyelids, and King Jingaling

### 3.1 Model Identity, File-Select Hand Clench, Swim Wakes, and Talon Trot Crest
* **Problem:**
  * Shared-renderer models swapped identities across frames (breaking the cuckoo-clock bird and spinning N/Rare logos).
  * Address-keyed player transform ID slots leaked over long sessions, leaving the player un-interpolated.
  * Banjo's 17-part file-select hand reordered draws on every clench, blending fingers across each other; swim wake rings paired across hundreds of units.
  * Kazooie's Talon Trot crest bone pivots far from its geometry origin (~346 units/frame), causing decomposed matrix interpolation to swing her crest into a long stalk.
* **Fix:**
  * In `src/recomp_api.cpp`, added nearest-match model transform ID tracking with ordered bone sub-IDs and reusable player transform ID slots.
  * In `lib/rt64/src/hle/rt64_game_frame.cpp`, added position- and geometry-based pairing for shared transform IDs (`BT_RT64_IDGEOM=off` for A/B) and distance-gated auto-pairing.
  * Added `guardDecomposedLerp` (`BT_RT64_LERPGUARD=off|log`) and `propagatePlainLerpToModelRoots` (`BT_RT64_SEAMLERPGUARD=off` for A/B) so if any bone trips the decomposed-lerp distance guard or diverges at shared seam vertices between connected transforms (`decompGap > plainGap + 0.1f`), every transform of that character root (`0x10000000U <= id < 0x30000000U`) falls back to plain matrix interpolation so bone seams and attached parts stay airtight.

### 3.2 Eyelid Clipping, Swapped Mouths, and CPU-Animated Models
* **Problem:**
  * CPU-animated models emitting no bone matrices (boot logos, attract dinosaur, Grunty, Mingella) stepped at 20 Hz, and a blink or mouth-shape vertex count change caused Grunty's whole body to lag/step.
  * Morphing swapped eyelid or mouth parts chords eyelids through convex eyeballs (Banjo, Old King Coal) and folded King Jingaling's chin into black cracks.
  * Face vertex smoothing opened seams on bone-skinned characters and caused shimmer on Mingella.
* **Fix:**
  * Enabled RT64 vertex interpolation on CPU-animated and bone-animated characters, restricted face smoothing to CPU-animated vertices, and added a neighborhood temporal filter for Mingella.
  * In `lib/rt64/src/hle/rt64_game_frame.cpp` (`alignVertexLoads`), matched unchanged vertex loads (front, back, and equal-layout middle loads) across frames while borrowing surrounding skin velocities for swapped parts (`bone` / partial swaps) so eyelids and mouths snap cleanly on the game frame rather than chording through eyeballs. Whole-part morphing is now off by default for that reason, which means a swapped mouth shape also snaps on the game frame (`BT_RT64_VTXALIGN=morphpart` restores both morphs for A/B).

### 3.3 King Jingaling Face Holes, Sporadic Cuts, and Welded Mouth Geometry
* **Problem:** During King Jingaling's throne room cutscene (`0x144`), sporadic cracks/holes appeared across his face and jaw; earlier vertex welding and morphing also distorted his mouth movement or welded mouth-opening vertices that needed to stay open.
* **Fix:**
  * In `lib/rt64/src/hle/rt64_state.cpp`, disabled back-face culling on both opaque and blended character draws (`BT_RT64_TWOSIDED=off` for A/B) so thin seams do not reveal the background.
  * Added `State::btFixKingFace` in `lib/rt64/src/hle/rt64_state.cpp`, targeting King Jingaling's 3-pass head/jaw draw sequence within each framebuffer pair. It runs only on map `0x144` (published by the game side each frame as `g_bt_rt64_map`) and only on draws that match his head's vertex signature. `BT_RT64_KINGFACE=off` disables it, and `BT_RT64_VTXLOG` logs a `[kingface]` line for each pass that welds:
    1. **Pass 1 (56-triangle upper head):** Validates signature brick-red cheek/mouth vertices and welds only split duplicate vertices (`dx <= 1.2f`, `dy <= 3.5f`, `dz <= 2.2f`), keeping distinct mouth-opening vertices separate (`>= 4.69` units apart).
    2. **Pass 2 (10-triangle jaw/mouth-floor bridge):** Validates cheek/mouth-corner signature, welds duplicate lower-jaw vertices into disjoint side/region buckets (`btKingJawSlot`: chin corner, jaw back bottom, mouth corner), and caches the welded coordinates.
    3. **Pass 3 (8-triangle textured lower-jaw skin):** Welds internal lower-lip splits (`slot < 0`) and snaps shared jaw vertices to Pass 2's cached coordinates so all jaw calls and bridge triangles remain watertight while the mouth opens and animates naturally.

---

## 4. Improved Shadows (`bt_improve_shadows` / `bt_shadow_blur`)

### 4.1 Grass Canopy Projection, Slope Flicker, and Directional Squashing
* **Problem:**
  * In Mayahem Temple's Prison Compound (`0x0B8`), Banjo's shadow projected onto the tall grass canopy (~30–45 units above the ground).
  * On steep slopes far from the origin (Jinjo Village's ice-key sand hill `0x142`, ~15,000 units out), shadows distorted as Banjo turned, flickered/dropped out when moving uphill, and squashed to a thin line when reversing direction.
* **Fix:** In `lib/rt64/src/hle/rt64_state.cpp` (`btImproveShadows`) and `lib/rt64/src/shaders/RasterPS.hlsl`:
  * Replaced the game's clipped composite strips with a full-screen composite pass and wrote the decal depth window before uploading RT64 constants (`applyShadowWindow`), using a receiver-plane height test (`BtShadowFrontDepth`, `BtShadowReceiverHeight`) that excludes tall grass canopies while accommodating slopes and uphill steps.
  * Normalized `F = shadowViewProj * inverse(mainViewProj)` before checking affinity (eliminating floating-point residue far from the origin at Ice Key hill).
  * Unrotated `slopeX`/`slopeZ` into world space and polar-split `A = R * P` so easing facing angle (`BtShadowTurnTime`), light stretch, height, and darkness never twists or squashes the shadow (`BT_RT64_SHADOWS=off|log|ab`, `BT_RT64_SHADOW_EASE`).

### 4.2 Smooth Low-Res "Soft Shadows" Filter
* **Problem:** High-resolution shadow edges appeared overly blocky/pixelated compared to the blurred aesthetic needed to sit naturally on low-res world textures.
* **Fix:** Added `lib/rt64/src/shaders/ShadowCompositePS.hlsl` and option `"bt_shadow_blur"` (**Soft Shadows**, Graphics tab, default `true`, `BT_RT64_SHADOW_BLUR=off` for A/B). In `rt64_workload_queue.cpp`, computes `blurRadius = max(1.0f, (height / 228.0f) * 2.6f)`, and `ShadowCompositePS.hlsl` evaluates a 29-sample golden-angle Vogel disk with Gaussian falloff (`exp(-2.25f * rho^2)`) using a clamped bilinear sampler (`ShadowCompositeDescriptorSet`) so edges blur smoothly without stamp artifacts while remaining compact.

---

## 5. Texture Seams and 2D UI Upscaling

### 5.1 Sky Seams, Sub-Tile Atlases, World/Character Seams via Non-Destructive Stitched Gutter
* **Problem:** Bilinear filtering across clamped multi-tile textures created visible dotted seams on the skybox, world geometry (e.g., Old Lair exit, Grunty's rock), sub-tile `G_LOADTILE` atlases, and character joints—and directly mutating source texels in RDRAM risked stale writes after reloads or heap compaction.
* **Fix:**
  * Added **Blend Sky Seams** and **Blend Texture Seams** (`bt_tex_seams`, Graphics tab, default `true`; `BT_TEX_SEAMS=off|log|log2|dry`) plus **Blend Character Seams** (`bt_char_seam_bleed`, Graphics tab, default `true`) in `src/main.cpp` and `src/recomp_api.cpp`.
  * Added `G_LOADTILE` (`uls/ult != 0`) sub-tile tracking and expanded format support (`texseam_supported`: RGBA16/32, IA, and CI4/CI8 with TLUT validation).
  * Replaced in-place RDRAM texel mutation with `tooie_stitch_texture` in `src/recomp_api.cpp`, `TextureManager::uploadStitched` in `lib/rt64/src/hle/rt64_rdp_tmem.cpp`, and `gpuTileFlagStitched` in `lib/rt64/src/shaders/TextureSampler.hlsli`. Matching clamped tile borders are copied into a temporary 1-texel padded gutter verified against TMEM (never modifying RDRAM).

### 5.2 Smooth 2D UI (`bt_upscale_2d`)
* **Problem:** 2D HUD icons, fonts, and rectangles rendered blocky or half-texel shifted when scaled to modern resolutions.
* **Fix:** Registered `"bt_upscale_2d"` (**Smooth 2D UI**, Graphics tab, default `false`; it smooths the existing sprites when scaling and adds no detail, so it was renamed from "Upscale 2D UI") in `src/main.cpp`. When enabled, `lib/rt64/src/hle/rt64_state.cpp` marks 2D draws with `is2DUI` / `gpuTileFlagUpscale2D` and `linearFiltering`, and `lib/rt64/src/shaders/TextureSampler.hlsli` re-centers point-sampled tiles by `-0.5 * tcScale` and applies 4×4 clamped Catmull-Rom bicubic interpolation with cutout alpha reconstruction and luminance edge tightening.

---

## 6. Gameplay Quality-of-Life Features

* **100 Notes Chime (`bt_note_chime`):** Hooked `func_800D0BD4` in `RecompiledFuncs/funcs_29.c` via `banjotooie.us.toml` (`tooie_note_total_before_pickup` / `tooie_on_note_collected` in `src/recomp_api.cpp`). Plays Banjo-Kazooie's completion fanfare (`0x66C`) when a level's collected notes cross from `< 100` to `>= 100`.
* **Jamjars All-Moves Learned Message (`bt_all_moves_msg`):** Hooked `sumole_entrypoint_16` in `RecompiledFuncs/funcs_81.c` via `banjotooie.us.toml` (`tooie_final_jamjars_move` / `tooie_on_jamjars_move_learned` in `src/recomp_api.cpp` + non-blocking `recompui` banner in `src/main.cpp`). Displays `"Jamjars: You've learned all the moves in this area!"` when the final Jamjars move of a world is learned.
* **Hold Start to Skip Cutscenes (`src/cutscene_skip.cpp`):** Uses the game's native `chintroticker` skips with an on-screen honeycomb fill gauge from the pause screen assets (`BT_HOLDSKIP=off|log`).
* **Skip Straight to File Select:** Pressing any button on the boot logos, title screen, or attract demo advances straight to file select (`BT_BOOTSKIP=off`).

---

## 7. Debug Tooling, Test Harness, and Screenshot Capture

* **Automated Repro Harness (`src/test_harness.cpp`):** Env-driven per-frame harness supporting `BT_WARP`, `BT_POKE`, `BT_POS` (XYZ + yaw), `BT_CAM` (XYZ + yaw/pitch, rebuilding camera view/frustum matrices via `func_800CAF34`), `BT_AUTOPAD`, and `BT_HARNESSLOG`.
* **Live Debug Coordinates & F9 Repro Capture (`src/main.cpp`, `src/recomp_api.cpp`):** The F8 (toggle coordinates) and F9 (capture) hotkeys only work with `BT_DEBUG_HOTKEYS=1` or developer mode on, so they do nothing in a normal player's game. Added **"Show Debug Coordinates"** (`BT_SHOW_DEBUG_COORDS`, default off) displaying Map ID, Player Pos/Yaw, Camera Pos/Rot, and FOV in both the window title and a top-left `recompui` HUD overlay. Pressing **F9** copies an exact `BT_WARP=... BT_POS=... BT_CAM=...` repro line to the clipboard and appends it to `bt_repro.txt`.
* **DPI-Aware Capture (`tools/capture.py`):** Enabled `PER_MONITOR_AWARE_V2` (`SetProcessDpiAwarenessContext(-4)`) and switched `GetClientRect` to `GetWindowRect` so screenshots on DPI-scaled Windows displays are no longer cropped to the top-left corner.
