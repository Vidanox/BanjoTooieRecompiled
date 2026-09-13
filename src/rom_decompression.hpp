#ifndef __TOOIE_ROM_DECOMPRESSION_HPP__
#define __TOOIE_ROM_DECOMPRESSION_HPP__

#include <cstdint>
#include <span>
#include <vector>

namespace tooie {
    // Expands the retail (compressed) Banjo-Tooie ROM into the layout the
    // recompilation was built against. Faithful port of
    // `tools/decompress_rom.py`, which in turn mirrors the decomp project's
    // `tools/rom_decompressor.cpp`.
    std::vector<uint8_t> decompress_tooie(std::span<const uint8_t> compressed_rom);
}

#endif
