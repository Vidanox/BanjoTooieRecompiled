// Banjo-Tooie (USA) ROM decompressor.
//
// Faithful C++ port of `tools/decompress_rom.py` (itself a port of the decomp
// project's `tools/rom_decompressor.cpp`). The compressed retail ROM keeps
// core1/core2 and every overlay in raw-deflate streams that the boot code
// inflates at run time. The recompilation addresses everything against the
// decompressed image, so the runtime must expand it before PI/overlay reads.

#include "rom_decompression.hpp"

#include <cstdio>
#include <cstring>

#include "miniz.h"

namespace {

// Baserom offsets (US v1.0), from tooie_utils.h `us_v10`.
constexpr uint32_t kCore1Start = 0x1E29B60;
constexpr uint32_t kCore1TextEnd = 0x1E3F718;
constexpr uint32_t kCore1End = 0x1E42550;
constexpr uint32_t kCore2Start = 0x1E42550;
constexpr uint32_t kCore2TextEnd = 0x1E86C76;
constexpr uint32_t kCore2End = 0x1E899B0;
constexpr uint32_t kOverlayTableOffset = 0x1E899B0;

// Overlay header field offsets (tooie_utils.h `ovl_header_offsets`).
constexpr uint32_t kHFlags = 0xC;
constexpr uint32_t kHNameLength = 0xE;
constexpr uint32_t kHDecompressedSize = 0x10;
constexpr uint32_t kHeaderSizeCompressed = 0x12;

constexpr uint32_t kFlagCompressed = 0x80;

uint16_t be16(std::span<const uint8_t> b, size_t off) {
    return static_cast<uint16_t>(
        (static_cast<uint16_t>(b[off]) << 8) | b[off + 1]);
}

uint32_t be32(std::span<const uint8_t> b, size_t off) {
    return (static_cast<uint32_t>(b[off]) << 24) |
           (static_cast<uint32_t>(b[off + 1]) << 16) |
           (static_cast<uint32_t>(b[off + 2]) << 8) |
           static_cast<uint32_t>(b[off + 3]);
}

void write_be32(std::vector<uint8_t>& b, size_t off, uint32_t value) {
    b[off] = static_cast<uint8_t>(value >> 24);
    b[off + 1] = static_cast<uint8_t>(value >> 16);
    b[off + 2] = static_cast<uint8_t>(value >> 8);
    b[off + 3] = static_cast<uint8_t>(value);
}

// The custom checksum used to XOR the overlay CRC words (tooie_utils.cpp
// bk_crc).
void bk_crc(std::span<const uint8_t> data, uint32_t& crc1, uint32_t& crc2) {
    crc1 = 0;
    crc2 = 0;
    for (uint8_t byte : data) {
        crc1 = crc1 + byte;
        crc2 = crc2 ^ (static_cast<uint32_t>(byte) << (crc1 & 0x17));
    }
}

std::vector<uint8_t> inflate_raw(std::span<const uint8_t> data,
                                 size_t expected_size) {
    std::vector<uint8_t> out(expected_size);

    mz_stream stream{};
    if (mz_inflateInit2(&stream, -MAX_WBITS) != MZ_OK) {
        std::fprintf(stderr, "[Tooie] mz_inflateInit2 failed\n");
        return {};
    }

    stream.next_in = data.data();
    stream.avail_in = static_cast<mz_uint32>(data.size());
    stream.next_out = out.data();
    stream.avail_out = static_cast<mz_uint32>(expected_size);

    const int status = mz_inflate(&stream, Z_FINISH);
    const size_t produced = stream.total_out;
    mz_inflateEnd(&stream);

    if (produced != expected_size) {
        std::fprintf(stderr,
            "[Tooie] inflate produced 0x%zX bytes, expected 0x%zX "
            "(status %d)\n",
            produced, expected_size, status);
        return {};
    }

    return out;
}

// core1/core2 style block: u16 size header (x16) followed by a raw-deflate
// stream.
void decompress_copy(std::vector<uint8_t>& out, std::span<const uint8_t> rom,
                     uint32_t offset, uint32_t size) {
    const uint32_t decompressed_size = be16(rom, offset) * 16;
    const auto payload = rom.subspan(offset + 2, size - 2);
    const std::vector<uint8_t> block = inflate_raw(payload, decompressed_size);
    out.insert(out.end(), block.begin(), block.end());
}

// Reverse the CRC XOR in the overlay contents (words 0 and 8).
//
// NOTE: the per-reloc XOR step from the reference tool is intentionally
// omitted, matching `tools/decompress_rom.py`. For compressed overlays the
// entry/reloc counts needed to locate the reloc list are themselves
// obfuscated, so they cannot be read reliably; the XOR only affects the reloc
// table values, which the pipeline takes from the decomp's committed files.
void undo_xors(std::vector<uint8_t>& contents) {
    uint32_t crc1 = 0;
    uint32_t crc2 = 0;
    bk_crc(contents, crc1, crc2);
    write_be32(contents, 0, be32(contents, 0) ^ crc1);
    write_be32(contents, 8, be32(contents, 8) ^ crc2);
}

} // namespace

std::vector<uint8_t> tooie::decompress_tooie(
    std::span<const uint8_t> rom) {
    std::vector<uint8_t> out;
    out.reserve(0x2200000);

    // Everything up to core1 is stored raw.
    out.insert(out.end(), rom.begin(), rom.begin() + kCore1Start);

    // core1 (text then rest) and core2 (text then rest).
    decompress_copy(out, rom, kCore1Start, kCore1TextEnd - kCore1Start);
    decompress_copy(out, rom, kCore1TextEnd, kCore1End - kCore1TextEnd);
    decompress_copy(out, rom, kCore2Start, kCore2TextEnd - kCore2Start);
    decompress_copy(out, rom, kCore2TextEnd, kCore2End - kCore2TextEnd);

    const uint32_t overlay_table_size = be32(rom, kOverlayTableOffset);

    // Align the decompressed overlay table to 16 bytes.
    size_t aligned = (out.size() + 15) & ~static_cast<size_t>(15);
    out.resize(aligned, 0);
    const size_t overlay_table_pos = aligned;

    const uint32_t overlay_count = overlay_table_size / 4 - 1;
    std::vector<uint32_t> overlay_table(overlay_count + 1);
    for (uint32_t i = 0; i <= overlay_count; i++) {
        overlay_table[i] = be32(rom, kOverlayTableOffset + 4 * i);
    }

    // Reserve space for the rewritten overlay table; it is filled in after the
    // overlays have been laid out.
    out.resize(overlay_table_pos + (overlay_count + 1) * 4, 0);

    std::vector<uint32_t> byteswapped_offsets(overlay_count + 1, 0);

    for (uint32_t overlay_index = 1; overlay_index <= overlay_count;
         overlay_index++) {
        byteswapped_offsets[overlay_index - 1] =
            static_cast<uint32_t>(out.size() - overlay_table_pos);

        const uint32_t overlay_start = overlay_table[overlay_index - 1];
        const uint32_t overlay_end = overlay_table[overlay_index];

        if (overlay_end != overlay_start) {
            const uint32_t ovl_rom_start = kOverlayTableOffset + overlay_start;
            const uint32_t flags = be32(rom, ovl_rom_start + kHFlags);

            std::vector<uint8_t> ovl_header(
                rom.begin() + ovl_rom_start, rom.begin() + ovl_rom_start + 0x10);
            std::vector<uint8_t> contents;

            if (flags & kFlagCompressed) {
                const uint32_t decompressed_size =
                    be16(rom, ovl_rom_start + kHDecompressedSize) * 16;
                const auto payload = rom.subspan(
                    ovl_rom_start + kHeaderSizeCompressed,
                    (overlay_end - overlay_start) - kHeaderSizeCompressed);
                contents = inflate_raw(payload, decompressed_size);
                undo_xors(contents);
            } else {
                contents.assign(
                    rom.begin() + ovl_rom_start + 0x10,
                    rom.begin() + ovl_rom_start +
                        (overlay_end - overlay_start));
            }

            // 16-byte align before writing this overlay.
            const size_t before = out.size();
            const size_t pad = (16 - (before & 0xF)) & 0xF;
            if (pad != 0) {
                out.resize(before + pad, 0);
                byteswapped_offsets[overlay_index - 1] =
                    static_cast<uint32_t>(out.size() - overlay_table_pos);
            }

            out.insert(out.end(), ovl_header.begin(), ovl_header.end());
            out.insert(out.end(), contents.begin(), contents.end());
        }
    }

    byteswapped_offsets[overlay_count] =
        static_cast<uint32_t>(out.size() - overlay_table_pos);
    // Overlay 0 is empty; make its start equal the next overlay's start.
    if (overlay_count >= 1) {
        byteswapped_offsets[0] = byteswapped_offsets[1];
    }

    for (uint32_t i = 0; i <= overlay_count; i++) {
        write_be32(out, overlay_table_pos + 4 * i, byteswapped_offsets[i]);
    }

    return out;
}
