#ifndef __TOOIE_RECOMP_H__
#define __TOOIE_RECOMP_H__

// Host-side bridge functions referenced from the recompiler config's
// `[[patches.hook]]` entries. Every generated `funcs_*.c` includes this header
// via the config's `recomp_include`, so these declarations must be valid C.

#include <stdint.h>

#include "recomp.h"

#ifdef __cplusplus
extern "C" {
#endif

// Boot-stage bridges. Tooie's boot loader places core1 and core2 directly into
// their final RDRAM ranges without a PI DMA the runtime can observe, so both
// sections are registered explicitly; the boot's own PI DMA is routed through
// the runtime's ROM image.
void tooie_boot_pi_raw_start_dma(uint8_t* rdram, recomp_context* ctx);
void tooie_boot_register_core1(uint8_t* rdram, recomp_context* ctx);
void tooie_boot_register_core2(uint8_t* rdram, recomp_context* ctx);

// Supplied for the boot-prefixed copies of libultra whose hardware-facing
// implementations cannot run on the host.
void tooie_rom_read_word(uint8_t* rdram, recomp_context* ctx);

// Supplies the per-overlay relocation XOR key that func_80082088 would
// otherwise read from the cartridge via PI MMIO.
void tooie_overlay_read_relocation_key(uint8_t* rdram, recomp_context* ctx);

// Keep N64ModernRuntime's loaded-function map in sync with Tooie's own overlay
// loader / unloader / heap-defragmentation paths.
void tooie_register_loaded_overlay(uint8_t* rdram, recomp_context* ctx);
void tooie_unregister_loaded_overlay(uint8_t* rdram, recomp_context* ctx);
void tooie_reregister_shifted_overlay(uint8_t* rdram, recomp_context* ctx);

// Bounded diagnostic hook points in the overlay loader path. Currently inert.
void tooie_trace_overlay_loader(uint8_t* rdram, recomp_context* ctx,
                                uint32_t stage);

// TEMPORARY diagnostics (see AGENTS.md "Instrumentation to remove before
// shipping").
void tooie_probe(uint8_t* rdram, recomp_context* ctx, uint32_t id);
void tooie_probe_slot(uint8_t* rdram, recomp_context* ctx, uint32_t id);
void tooie_probe_ret(uint8_t* rdram, recomp_context* ctx, uint32_t id);
void tooie_probe_ptr(uint8_t* rdram, recomp_context* ctx, uint32_t id);
void tooie_probe_ea(uint8_t* rdram, recomp_context* ctx, uint32_t offset);
void tooie_probe_slot_table(uint8_t* rdram, recomp_context* ctx);
void tooie_probe_create(uint8_t* rdram, recomp_context* ctx);
void tooie_probe_actor_setup(uint8_t* rdram, recomp_context* ctx);
void tooie_probe_dispatch(uint8_t* rdram, recomp_context* ctx);
void tooie_probe_kseg1_entry(uint8_t* rdram, recomp_context* ctx);
void tooie_probe_record_free(uint8_t* rdram, recomp_context* ctx);
void tooie_probe_task_dispatch(uint8_t* rdram, recomp_context* ctx,
                               uint32_t id);
void tooie_probe_gate(uint8_t* rdram, recomp_context* ctx);

// Gives the cooperative scheduler a preemption point inside Tooie's
// level-transition cleanup sweep, which otherwise spins forever waiting for a
// sound-object release delivered as an external runtime message.
void tooie_yield_pending_sound(uint8_t* rdram, recomp_context* ctx);

// Clears the runtime's RDP freeze bit when Tooie signals the frame barrier.
void tooie_clear_dp_freeze(uint8_t* rdram, recomp_context* ctx);

// Turns a "culled" verdict from Tooie's float-AABB, s16-AABB and sphere
// visibility wrappers into "visible" while the applied aspect ratio is Expand,
// whose projection is wider than the planes those tests build.
void tooie_expand_visibility(uint8_t* rdram, recomp_context* ctx);

// RT64 interpolation metadata. The game emits none of its own, so every
// transform looks new to RT64 and it blends matrices that do not correspond,
// which distorts the player model above the game's own frame rate. These add
// transform-group identities around the player's root and bone matrices
// without touching a single game matrix; see src/recomp_api.cpp.
void tooie_rt64_begin_frame(uint8_t* rdram, recomp_context* ctx);
void tooie_rt64_player_scope(uint8_t* rdram, recomp_context* ctx,
                             uint32_t stage);
void tooie_rt64_push_player_root(uint8_t* rdram, recomp_context* ctx);
void tooie_rt64_pop_player_root(uint8_t* rdram, recomp_context* ctx);
void tooie_rt64_push_player_bone(uint8_t* rdram, recomp_context* ctx);
void tooie_rt64_pop_player_bone(uint8_t* rdram, recomp_context* ctx);
void tooie_rt64_sky_scope(uint8_t* rdram, recomp_context* ctx, uint32_t stage);
void tooie_rt64_sky_layer(uint8_t* rdram, recomp_context* ctx);
void tooie_rt64_tag_projection(uint8_t* rdram, recomp_context* ctx,
                               uint32_t kind, uint32_t cursor_address);
void tooie_dump(uint8_t* rdram, uint32_t addr);

// TEMPORARY: report every indirect dispatch with the host caller, so a
// `Failed to find function at <vram>` can be attributed to the generated
// function that made the call. Callers are symbolized against the linker map.
recomp_func_t* tooie_lookup_func(int32_t vram);

#ifdef __cplusplus
}
#endif

#undef LOOKUP_FUNC
#define LOOKUP_FUNC(val) tooie_lookup_func((int32_t)(val))

#endif
