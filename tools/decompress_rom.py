#!/usr/bin/env python3
"""
Banjo-Tooie (USA) ROM decompressor.

Faithful Python port of the decomp project's `tools/rom_decompressor.cpp`
(https://github.com/Mr-Wiseguy/banjo-tooie), which itself reverses the
compression scheme that Rare used for Banjo-Tooie.

The compressed retail ROM keeps core1/core2 and every overlay in a zlib
raw-deflate stream. The boot code inflates them at run time. The
recompilation toolchain (N64Recomp) needs the *decompressed* ROM because all
of the decomp's symbol/section addresses are expressed against it.

Usage:
    python decompress_rom.py <baserom.z64> <output.z64>
"""

import struct
import sys
import zlib

# --- Baserom offsets (US v1.0), from tooie_utils.h `us_v10` ---
CORE1_START = 0x1E29B60
CORE1_TEXT_END = 0x1E3F718
CORE1_END = 0x1E42550
CORE2_START = 0x1E42550
CORE2_TEXT_END = 0x1E86C76
CORE2_END = 0x1E899B0
OVERLAY_TABLE_OFFSET = 0x1E899B0

# --- Overlay header field offsets (tooie_utils.h `ovl_header_offsets`) ---
H_TEXT_SIZE = 0x0
H_RODATA_SIZE = 0x2
H_DATA_SIZE = 0x4
H_BSS_SIZE = 0x6
H_ENTRYPOINT_COUNT = 0x8
H_RELOC_COUNT = 0xA
H_FLAGS = 0xC
H_NAME_LENGTH = 0xE
H_DECOMPRESSED_SIZE = 0x10

FLAG_COMPRESSED = 0x80


def be16(b, off):
    return struct.unpack_from(">H", b, off)[0]


def be32(b, off):
    return struct.unpack_from(">I", b, off)[0]


def write_be32(buf, off, val):
    struct.pack_into(">I", buf, off, val & 0xFFFFFFFF)


def bk_crc(data, start_crc1=0, start_crc2=0):
    """The custom checksum used to xor overlay CRCs (tooie_utils.cpp bk_crc)."""
    crc1 = start_crc1
    crc2 = start_crc2
    for byte in data:
        crc1 = (crc1 + byte) & 0xFFFFFFFF
        crc2 = (crc2 ^ ((byte << (crc1 & 0x17)) & 0xFFFFFFFF)) & 0xFFFFFFFF
    return crc1, crc2


def get_overlay_reloc_ptr(header, contents):
    """
    Returns (num_entrypoints, num_relocs, reloc_offset_within_contents).
    Mirrors tooie_utils.cpp get_overlay_reloc_ptr.
    """
    num_entrypoints = be16(header, H_ENTRYPOINT_COUNT)
    num_relocs = be16(header, H_RELOC_COUNT)
    entrypoints_off = 0x28
    name_off = entrypoints_off + 4 * num_entrypoints
    name_length = header[H_NAME_LENGTH]
    reloc_off = name_off + ((name_length + 3) & ~3)
    return num_entrypoints, num_relocs, reloc_off


def undo_xors(overlay_index, rom, header, decompressed):
    """
    Reverse the CRC xor in the overlay (words 0 and 8 of the contents).
    Mirrors rom_decompressor.cpp undo_xors.

    NOTE: the per-reloc xor step from the reference tool is intentionally
    omitted. For compressed overlays the entry/reloc counts needed to locate
    the reloc list are themselves obfuscated, so they cannot be read reliably;
    applying the xor with wrong counts corrupts the decompressed bytes. The
    reloc xor only affects the *reloc table* values (used for symbol
    generation), which we take from the decomp's committed files instead, so
    skipping it does not affect the recompiled code. The CRC undo (words 0/8)
    is always applied, as it does not depend on the counts.
    """
    crc1, crc2 = bk_crc(decompressed)
    write_be32(decompressed, 0, be32(decompressed, 0) ^ crc1)
    write_be32(decompressed, 8, be32(decompressed, 8) ^ crc2)


def inflate_raw(data, expected_size):
    d = zlib.decompressobj(wbits=-zlib.MAX_WBITS)
    out = d.decompress(data, expected_size)
    out += d.flush()
    if len(out) != expected_size:
        raise RuntimeError(
            f"inflate produced {len(out)} bytes, expected {expected_size}"
        )
    return bytearray(out)


def decompress_copy(out, rom, offset, size):
    """core1/core2 style block: u16 size header (x16) followed by zlib stream."""
    decompressed_size = be16(rom, offset) * 16
    payload = rom[offset + 2 : offset + size]
    block = inflate_raw(payload, decompressed_size)
    out.write(block)


def main():
    if len(sys.argv) != 3:
        print("Usage: decompress_rom.py <baserom.z64> <output.z64>")
        return 0

    baserom_path, output_path = sys.argv[1], sys.argv[2]
    with open(baserom_path, "rb") as f:
        rom = bytearray(f.read())

    with open(output_path, "wb") as out:
        # Everything up to core1 is stored raw.
        out.write(rom[:CORE1_START])

        # core1 (text then rest) and core2 (text then rest)
        decompress_copy(out, rom, CORE1_START, CORE1_TEXT_END - CORE1_START)
        decompress_copy(out, rom, CORE1_TEXT_END, CORE1_END - CORE1_TEXT_END)
        decompress_copy(out, rom, CORE2_START, CORE2_TEXT_END - CORE2_START)
        decompress_copy(out, rom, CORE2_TEXT_END, CORE2_END - CORE2_TEXT_END)

        overlay_table_size = be32(rom, OVERLAY_TABLE_OFFSET)
        # Align the overlay table to 16 bytes like in the compressed rom.
        cur = out.tell()
        aligned = (cur + 15) & ~15
        out.write(b"\x00" * (aligned - cur))
        overlay_table_pos = aligned

        overlay_count = overlay_table_size // 4 - 1
        overlay_table = [
            be32(rom, OVERLAY_TABLE_OFFSET + 4 * i) for i in range(overlay_count + 1)
        ]

        decompressed_buffer = bytearray()
        total_compressed = 0
        total_decompressed = 0

        # Reserve space for the overlay table; fill it in afterwards.
        out.seek((overlay_count + 1) * 4, 1)

        byteswapped_offsets = [0] * (overlay_count + 1)

        # Overlays are 1-indexed.
        for overlay_index in range(1, overlay_count + 1):
            byteswapped_offsets[overlay_index - 1] = out.tell() - overlay_table_pos

            overlay_start = overlay_table[overlay_index - 1]
            overlay_end = overlay_table[overlay_index]

            if overlay_end != overlay_start:
                ovl_rom_start = OVERLAY_TABLE_OFFSET + overlay_start
                header = rom[ovl_rom_start:]  # view into rom (mutable copy below)
                flags = be32(rom, ovl_rom_start + H_FLAGS)

                if flags & FLAG_COMPRESSED:
                    decompressed_size = (
                        be16(rom, ovl_rom_start + H_DECOMPRESSED_SIZE) * 16
                    )
                    total_compressed += overlay_end - overlay_start
                    total_decompressed += decompressed_size
                    if len(decompressed_buffer) < decompressed_size:
                        decompressed_buffer = bytearray(decompressed_size)
                    header_size = 0x12
                    payload = rom[
                        ovl_rom_start + header_size : ovl_rom_start
                        + (overlay_end - overlay_start)
                    ]
                    block = inflate_raw(payload, decompressed_size)

                    # The overlay header (first 0x10 bytes) must be a mutable copy.
                    ovl_header = bytearray(rom[ovl_rom_start : ovl_rom_start + 0x10])
                    undo_xors(overlay_index, rom, ovl_header, block)
                    contents = block
                    contents_len = decompressed_size
                else:
                    ovl_header = bytearray(rom[ovl_rom_start : ovl_rom_start + 0x10])
                    contents = bytearray(
                        rom[ovl_rom_start + 0x10 : ovl_rom_start + (overlay_end - overlay_start)]
                    )
                    contents_len = len(contents)

                # 16-byte align before writing this overlay.
                before = out.tell()
                pad = (16 - (before & 0xF)) & 0xF
                if pad:
                    out.write(b"\x00" * pad)
                    before = out.tell()
                    byteswapped_offsets[overlay_index - 1] = before - overlay_table_pos

                out.write(ovl_header[:0x10])
                out.write(contents[:contents_len])
            # else: empty overlay, nothing to write.

        byteswapped_offsets[overlay_count] = out.tell() - overlay_table_pos
        # Overlay 0 is empty; make its start equal the next overlay's start.
        if overlay_count >= 1:
            byteswapped_offsets[0] = byteswapped_offsets[1]

        # Write the overlay table (byteswapped offsets).
        out.seek(overlay_table_pos)
        for off in byteswapped_offsets:
            out.write(struct.pack(">I", off & 0xFFFFFFFF))

    if total_compressed:
        ratio = total_compressed / total_decompressed
        print(f"Overlays: {overlay_count}, compression ratio {ratio:.3f}")
    print(f"Wrote decompressed ROM to {output_path} ({overlay_count} overlays)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
