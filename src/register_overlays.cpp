#include "register_overlays.hpp"

#include <algorithm>
#include <array>
#include <numeric>

#include "funcs.h"
#include "librecomp/overlays.hpp"
#include "recomp_overlays.inl"

extern "C" void load_overlay_by_id(uint32_t id, uint32_t ram_addr);
extern "C" void unload_overlay_by_id(uint32_t id);

namespace {

// `recomp::overlays::init_overlays` sorts `section_table` in place by `rom_addr`,
// and every lookup afterwards indexes that sorted order: `load_overlay` takes a
// `section_table_index` straight into `code_sections`, and `load_overlays`
// passes it a `std::distance` over the sorted array.
//
// N64Recomp, however, emits `overlay_sections_by_index` entries as indices into
// the *generation* order of the section table. For Tooie that order is
// `overlays.us.toml` order, not rom order, so handing the generated values to
// `load_overlay_by_id` registers a different overlay's code than the one the
// game asked for. Measured: game overlay 181 (`chbaddieDll`) resolved to
// `ovl_chbanjocurrent`, whose entrypoint then executed against chbaddieDll's
// loaded image and walked off into a NULL argument.
//
// Remap every entry to its position in the rom-sorted table so the two agree.
// `rom_addr` is unique across all 855 sections, so the permutation is total.
class SortedOverlayIndices {
public:
    std::array<int, ARRLEN(overlay_sections_by_index)> values;

    SortedOverlayIndices() {
        constexpr size_t num_sections = ARRLEN(section_table);

        std::array<size_t, num_sections> sorted_position;
        std::array<size_t, num_sections> order;
        std::iota(order.begin(), order.end(), size_t{0});
        std::stable_sort(order.begin(), order.end(), [](size_t a, size_t b) {
            return section_table[a].rom_addr < section_table[b].rom_addr;
        });
        for (size_t position = 0; position < num_sections; ++position) {
            sorted_position[order[position]] = position;
        }

        for (size_t i = 0; i < values.size(); ++i) {
            const int generated_index = overlay_sections_by_index[i];
            values[i] = generated_index < 0
                ? -1
                : static_cast<int>(sorted_position[generated_index]);
        }
    }
};

} // namespace

void tooie::register_overlays() {
    // Function-local static: the registered table must outlive `recomp::start`,
    // and `section_table` is constant-initialized so the constructor can read it
    // without static-initialization-order concerns.
    static SortedOverlayIndices sorted_overlay_indices;

    recomp::overlays::overlay_section_table_data_t sections{
        .code_sections = section_table,
        .num_code_sections = ARRLEN(section_table),
        .total_num_sections = num_sections,
    };

    recomp::overlays::overlays_by_index_t overlays{
        .table = sorted_overlay_indices.values.data(),
        .len = sorted_overlay_indices.values.size(),
    };

    recomp::overlays::register_overlays(sections, overlays);
}

bool tooie::load_overlay(std::uint32_t overlay_index,
                         std::uint32_t ram_address) {
    // `overlay_sections_by_index` is only read here for its -1 sentinel that
    // marks the empty `overlays.us.toml` blocks; the remap preserves those.
    if (overlay_index == 0 ||
        overlay_index > ARRLEN(overlay_sections_by_index) ||
        overlay_sections_by_index[overlay_index - 1U] < 0) {
        return false;
    }

    load_overlay_by_id(overlay_index - 1U, ram_address);
    return true;
}

bool tooie::unload_overlay(std::uint32_t overlay_index) {
    if (overlay_index == 0 ||
        overlay_index > ARRLEN(overlay_sections_by_index) ||
        overlay_sections_by_index[overlay_index - 1U] < 0) {
        return false;
    }

    unload_overlay_by_id(overlay_index - 1U);
    return true;
}
