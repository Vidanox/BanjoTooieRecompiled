#ifndef __TOOIE_REGISTER_OVERLAYS_H__
#define __TOOIE_REGISTER_OVERLAYS_H__

#include <cstdint>

namespace tooie {
    // Register the generated section table and overlay index array with
    // librecomp. Must be called before `recomp::start`.
    void register_overlays();

    // Tooie's overlay ids are one-based (the first `overlays.us.toml` block is
    // "Overlay 1"), while `overlay_sections_by_index` is zero-based.
    bool load_overlay(std::uint32_t overlay_index, std::uint32_t ram_address);
    bool unload_overlay(std::uint32_t overlay_index);
}

#endif
