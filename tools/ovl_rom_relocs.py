"""Decode each overlay's relocation list from its own ROM header.

Why this exists
---------------
`gen_syms_toml.py` used to take overlay relocations from the decomp's
`ovl_reloc_addrs.us.txt`. That file is a *subset* of what the game applies.
Measured against the ROM over the 851 named overlays it is missing 62 entries
(31 HI16/LO16 pairs) in 16 overlays, and an omission is silent the whole way
down the pipeline: N64Recomp still emits C, the C still compiles, and the only
symptom is a runtime fault when the native code dereferences a value the game's
loader would have relocated.

`gemarkersDll` is the canonical failure. Its `gemarkersDll_entrypoint_0` returns

    0x8080001C  lui  $v0, 0x0          <- relocated by the loader, absent from
    0x80800020  addu $v0, $v0, $t6        ovl_reloc_addrs.us.txt
    0x80800024  lw   $v0, -0x248($v0)

a pointer into the overlay's own data segment (the marker table that starts
immediately after the 0x90 bytes of code). Without the reloc the compiled code
uses address 0x00000000 + a0*4 - 0x248 and faults.

The authoritative list is the one the game itself reads: it lives in the
overlay's ROM header, and the loader applies it at load time
(`syscall_handler` -> `ovl_load` (0x80081798) -> `func_80082088`, which walks
the list through `func_800821FC`).

Header layout
-------------
Every overlay is a header blob at `baserom.us.yaml`'s `<name>_header` segment
(`type: bin`), immediately followed by the code segment, which is the file the
runtime links at 0x80800000:

    +0x00 u16  h0        code size in 16-byte blocks
    +0x02 u16  h2        data size in 16-byte blocks
    +0x04 u16  h4        further size in 16-byte blocks
    +0x06 u16  h6        bss size in 16-byte blocks (`func_80082380` zeroes it)
    +0x08 u16  entrypoints
    +0x0A u16  primary reloc count
    +0x0C u16  secondary reloc count (0 for every Tooie overlay)
    +0x0E u8   name length
    +0x0F u8   0x82 for every overlay; purpose unknown, not read here
    +0x10 u32  XOR key for word 0        <- the header carries its own keys
    +0x18 u32  XOR key for word 8
    +0x2C u16  overlay id (written at load time)
    +0x38 ..   entrypoint table: `entrypoints` u32 offsets from the code base
               then the name string (name length bytes)
               then the primary reloc list: `countA` u16 entries
               then the secondary reloc list: `countC` u32 entries
               code base = align16(end of the secondary list)

`+0x10`/`+0x18` holding the keys is what makes the format decodable: word 0 and
word 8 are XORed with them, so `h0`, the entrypoint count and the reloc count
are recoverable without running anything. (The separate per-overlay key used on
the reloc *entries* is read through `lw $s5, 0x40($s5)` and only its low 16 bits
are kept, i.e. the u16 at `0x42 + overlay_id*4`.)

Entry encoding (primary list): `value = raw ^ entry_key`, `type = value & 3`,
`offset = value & ~3`, both offsets from the code base.

    0  the 32-bit word at `offset` has the code base added to it (data pointers;
       never observed inside the code region)
    1  a `j`/`jal`: the 26-bit field has the code base >> 2 added, so the target
       is `code_base + (instr & 0x3FFFFFF) * 4`
    2  HI16: record this offset; the next entry (always type 3) completes it
    3  LO16: `func_800821FC` adds the base to the sign-extended immediate and
       carries into the recorded HI16's immediate, i.e. the pair together holds
       the unrelocated 32-bit value `(hi_imm << 16) + sign_extend(lo_imm)`

Verified
--------
Over all 851 named overlays, three independent invariants hold with zero
mismatches:

* `align16(align4(reloc_start + 2*countA) + 4*countC) == code_off`, where
  `reloc_start = align4(0x38 + 4*entrypoints + namelen)` and `code_off` is the
  code segment's ROM offset relative to the header;
* `h0 * 16` equals the splat yaml's text extent for the overlay;
* `(h0 + h2 + h4) * 16` equals the distance from the code start to the bss.

The decoded entries are also a strict superset of `ovl_reloc_addrs.us.txt`'s
code-range entries: all 21,143 of them are present, with the same types, and
the 62 extras are the 31 missing HI16/LO16 pairs. `python tools/ovl_rom_relocs.py`
re-checks all of that.
"""
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
YAML = os.path.join(ROOT, "decomp", "baserom.us.yaml")
DECOMP = os.path.join(ROOT, "decomp")

# The overlays are all linked at (and relocated to) this base.
OVERLAY_VRAM = 0x80800000

# ROM offset of the per-overlay entry keys: the loader reads the word at
# 0x40 + id*4 and masks it to 16 bits, so the key is the u16 at +0x42.
ENTRY_KEY_OFFSET = 0x40

TYPE_NAMES = {1: "R_MIPS_26", 2: "R_MIPS_HI16", 3: "R_MIPS_LO16"}

NAME_RE = re.compile(r"^  - name: (\S+)\s*$")
START_RE = re.compile(r"^    start: (0x[0-9A-Fa-f]+)\s*$")
TYPE_RE = re.compile(r"^    type: (\S+)\s*$")


def align(value, alignment):
    return (value + alignment - 1) & ~(alignment - 1)


def parse_overlay_headers(yaml_path=YAML):
    """Returns {overlay_name: header_rom_offset} for the `<name>_header` blobs."""
    out = {}
    cur = {"name": None, "start": None, "type": None}

    def finish():
        if (cur["type"] == "bin" and cur["start"] is not None
                and cur["name"] is not None
                and cur["name"].endswith("_header")):
            out[cur["name"][:-len("_header")]] = cur["start"]

    for line in open(yaml_path, encoding="utf-8"):
        m = NAME_RE.match(line)
        if m:
            finish()
            cur = {"name": m.group(1), "start": None, "type": None}
            continue
        if cur["name"] is None:
            continue
        ms = START_RE.match(line)
        if ms and cur["start"] is None:
            cur["start"] = int(ms.group(1), 16)
            continue
        mt = TYPE_RE.match(line)
        if mt and cur["type"] is None:
            cur["type"] = mt.group(1)
    finish()
    return out


def _u16(rom, offset):
    return struct.unpack_from(">H", rom, offset)[0]


def _u32(rom, offset):
    return struct.unpack_from(">I", rom, offset)[0]


def _s16(value):
    return value - 0x10000 if value >= 0x8000 else value


def decode_header(rom, header_rom, code_start, overlay_id):
    """Returns (reloc_entries, info) for one overlay.

    `reloc_entries` are dicts with a code-relative `offset`, an absolute
    `target_vram` (both computed the way the loader computes them) and a `type`
    name N64Recomp understands. Entries that patch the data that follows the
    code are dropped -- the recompiler only emits the code -- but their targets
    are collected into `info["code_pointers"]`, because a whole-word pointer
    into the code region is a function pointer the game calls.

    "The code" means `h0 * 16` bytes: that is the loader's own ICache-flush
    length in `func_80082088`, and it is 0x10..0x90 bytes *shorter* than the
    splat yaml's text extent for 15 overlays. Those 15 are the ones whose yaml
    segment uses `- [auto, c, ...]` and lists no `.rodata`/`data`/`bss`
    subsegment, so `ovl_text_extents` bounds their text by the next top-level
    segment and swallows the data. Measured over that overshoot in all 15: it
    holds `R_`/`D_` symbols (never a `func_`/`_entrypoint_` one) and float
    constants such as 0x3F19999A, i.e. rodata -- and it is the region the type-0
    entries below point into.
    """
    key0 = _u32(rom, header_rom + 0x10)
    key8 = _u32(rom, header_rom + 0x18)
    word0 = _u32(rom, header_rom + 0x00) ^ key0
    word8 = _u32(rom, header_rom + 0x08) ^ key8
    word4 = _u32(rom, header_rom + 0x04)
    word12 = _u32(rom, header_rom + 0x0C)

    info = {
        "h0": word0 >> 16,
        "h2": word0 & 0xFFFF,
        "h4": word4 >> 16,
        "entrypoints": word8 >> 16,
        "count_primary": word8 & 0xFFFF,
        "count_secondary": word12 >> 16,
        "namelen": (word12 >> 8) & 0xFF,
    }
    info["code_size"] = info["h0"] * 16
    # The overlay's export table: `entrypoints` u32 code offsets at +0x38, and
    # the one-based entry the game's syscall thunk names (`K / 4`) indexes it.
    # This is the authority on which offsets are callable functions -- the
    # decomp's `_entrypoint_N` symbols are *not* complete (see
    # `gen_syms_toml.overlay_pointer_function_starts`).
    info["entrypoint_offsets"] = list(struct.unpack_from(
        ">%dI" % info["entrypoints"], rom, header_rom + 0x38))
    for offset in info["entrypoint_offsets"]:
        # Measured over all 851 overlays: 4,232 entries, every one 4-aligned
        # and inside the code region. Anything else is a header mis-decode.
        if offset % 4 != 0 or offset >= info["code_size"]:
            raise ValueError(
                "overlay id %d: entrypoint offset 0x%X is not a 4-aligned "
                "code offset (code size 0x%X)"
                % (overlay_id, offset, info["code_size"]))
    info["reloc_start"] = align(0x38 + info["entrypoints"] * 4 + info["namelen"], 4)
    info["secondary_start"] = align(
        info["reloc_start"] + info["count_primary"] * 2, 4)
    info["code_offset"] = align(
        info["secondary_start"] + info["count_secondary"] * 4, 16)

    entry_key = _u16(rom, ENTRY_KEY_OFFSET + overlay_id * 4 + 2)
    raw = [_u16(rom, header_rom + info["reloc_start"] + 2 * i)
           for i in range(info["count_primary"])]
    entries = [((value ^ entry_key) & ~3, (value ^ entry_key) & 3)
               for value in raw]

    relocs = []
    code_pointers = set()
    pending_hi = None
    for offset, entry_type in entries:
        in_code = offset + 4 <= info["code_size"]
        if not in_code:
            # Data that follows the code. The game loads and relocates it from
            # the ROM image; the recompiler never emits it -- but the *target*
            # still matters, because a whole-word pointer whose target lands in
            # the code region is a function pointer the game will call.
            #
            # The two halves of the header are cleanly separated: measured over
            # all 851 overlays, every entry outside the code region is type 0
            # (14,724 of them) and every entry inside is type 1/2/3, zero
            # exceptions. Assert that rather than silently mis-decode.
            if entry_type != 0:
                raise ValueError(
                    "overlay id %d: reloc of type %d at data offset 0x%X "
                    "(only whole-word pointers occur outside the code)"
                    % (overlay_id, entry_type, offset))
            target = (OVERLAY_VRAM + _u32(rom, code_start + offset)) & 0xFFFFFFFF
            if OVERLAY_VRAM <= target < OVERLAY_VRAM + info["code_size"]:
                code_pointers.add(target - OVERLAY_VRAM)
            continue

        word = _u32(rom, code_start + offset)
        if entry_type == 1:
            target = OVERLAY_VRAM + (word & 0x3FFFFFF) * 4
            relocs.append({
                "offset": offset,
                "target_vram": target & 0xFFFFFFFF,
                "type": TYPE_NAMES[entry_type],
            })
        elif entry_type == 2:
            # The HI16 half of a pair. N64Recomp must see a reloc at the `lui`
            # *and* at the entry that consumes its low half, so hold this
            # offset until the next entry (always a type 3) supplies the pair's
            # low half and the shared target address.
            pending_hi = offset
        elif entry_type == 3:
            if pending_hi is None:
                target = OVERLAY_VRAM + _s16(word & 0xFFFF)
            else:
                hi = _u32(rom, code_start + pending_hi) & 0xFFFF
                target = OVERLAY_VRAM + (hi << 16) + _s16(word & 0xFFFF)
                relocs.append({
                    "offset": pending_hi,
                    "target_vram": target & 0xFFFFFFFF,
                    "type": TYPE_NAMES[2],
                })
                pending_hi = None
            relocs.append({
                "offset": offset,
                "target_vram": target & 0xFFFFFFFF,
                "type": TYPE_NAMES[3],
            })
        else:
            # Type 0 is a whole-word data pointer; no entry of that kind has
            # been observed inside a code region (it is what relocates the
            # rodata/pointer blocks that follow the code), and N64Recomp has no
            # way to express one inside an instruction stream. Fail loudly
            # rather than silently emit nothing.
            raise ValueError(
                "overlay id %d: type-0 reloc at code offset 0x%X is inside the "
                "code region" % (overlay_id, offset))

    info["code_pointers"] = sorted(code_pointers)
    return relocs, info


def overlay_relocs(rom, text_extents, overlay_ids):
    """Decode every overlay's relocs.

    `text_extents` is `ovl_text_extents.parse_text_extents`'s output and
    `overlay_ids` maps overlay name -> the game's one-based overlay id (its
    position in the generated `sections.txt`, i.e. its block order in
    `overlays.us.toml`). Returns {name: {"relocs": [...], "code_pointers":
    [...]}}, and raises for an overlay whose header does not parse.

    `code_pointers` are code-relative offsets that the overlay's own data
    relocations point at: its function-pointer tables. They are the authority on
    which offsets the game calls, so `gen_syms_toml` uses them to recover
    function starts the decomp never named.

    `entrypoint_offsets` are the offsets in the overlay's *export table* -- the
    list the game's syscall thunk dispatches through. Same use, but a stronger
    authority: every one of them is called as a function, so they are recovered
    with fewer guards.
    """
    headers = parse_overlay_headers()
    out = {}
    for name, extent in text_extents.items():
        if name not in headers or name not in overlay_ids:
            continue
        header_rom = headers[name]
        code_start = extent["text_start"]
        code_size = extent["text_end"] - code_start
        overlay_id = overlay_ids[name]

        relocs, info = decode_header(rom, header_rom, code_start, overlay_id)
        if info["code_offset"] != code_start - header_rom:
            raise ValueError(
                "overlay %s: header lays the code out at +0x%X but the splat "
                "yaml puts it at +0x%X"
                % (name, info["code_offset"], code_start - header_rom))
        if info["code_size"] > code_size:
            raise ValueError(
                "overlay %s: header code size 0x%X exceeds the yaml text "
                "extent 0x%X" % (name, info["code_size"], code_size))
        out[name] = {
            "relocs": relocs,
            "code_pointers": info["code_pointers"],
            "entrypoint_offsets": info["entrypoint_offsets"],
        }
    return out


# ---------------------------------------------------------------------------
# Self-check.
# ---------------------------------------------------------------------------

def _main():
    from ovl_text_extents import parse_text_extents

    rom = open(os.path.join(ROOT, "build", "decompressed.us.z64"), "rb").read()
    extents = parse_text_extents()
    headers = parse_overlay_headers()

    # The overlay id is its one-based position in the generated sections.txt
    # (`overlays.us.toml` order), which is also the order N64Recomp assigns
    # section indices in and therefore the id the game passes to the loader.
    sections = [l.strip() for l in
                open(os.path.join(ROOT, "build", "sections.txt"),
                     encoding="utf-8")]
    ids = {name[len(".ovl_"):]: i + 1
           for i, name in enumerate(sections) if name.startswith(".ovl_")}

    total = 0
    bad = []
    for name, extent in sorted(extents.items()):
        if name not in headers or name not in ids:
            continue
        relocs, info = decode_header(rom, headers[name], extent["text_start"],
                                     ids[name])
        total += len(relocs)
        header_off = extent["text_start"] - headers[name]
        checks = [
            ("layout", info["code_offset"] == header_off),
            ("code size <= yaml extent",
             info["code_size"] <= extent["text_end"] - extent["text_start"]),
        ]
        for label, ok in checks:
            if not ok:
                bad.append((name, label))
        for reloc in relocs:
            if reloc["type"] == "R_MIPS_26":
                word = _u32(rom, extent["text_start"] + reloc["offset"])
                if (word >> 26) not in (2, 3):
                    bad.append((name, "j/jal opcode at 0x%X" % reloc["offset"]))
    print("overlays decoded: %d  reloc entries: %d  invariant failures: %d"
          % (len(extents), total, len(bad)))
    for name, label in bad[:10]:
        print("  %s: %s" % (name, label))

    # Cross-check against the decomp's reloc file. Every code-range entry it
    # lists must appear in the ROM-derived set *with the same type*; the ROM is
    # allowed to (and does) carry more. A decoder that silently drops the HI16
    # half of a pair, or mismatches types, shows up here.
    decoded = {}
    for name, extent in sorted(extents.items()):
        if name not in headers or name not in ids:
            continue
        relocs, _ = decode_header(rom, headers[name], extent["text_start"],
                                  ids[name])
        decoded[name] = {(r["offset"], r["type"]) for r in relocs}

    owner = {}
    for name, extent in sorted(extents.items()):
        if name not in decoded:
            continue
        for rom_offset in range(extent["text_start"], extent["text_end"], 4):
            owner[rom_offset] = name

    compared = 0
    missing = []
    for line in open(os.path.join(DECOMP, "ovl_reloc_addrs.us.txt"),
                     encoding="utf-8"):
        m = re.match(r"rom:0x([0-9A-Fa-f]+) symbol:(\S+) reloc:(\S+)", line)
        if not m:
            continue
        entry_type = "R_MIPS_" + m.group(3).replace("MIPS_", "")
        if entry_type not in TYPE_NAMES.values():
            continue
        rom_offset = int(m.group(1), 16)
        name = owner.get(rom_offset)
        if name is None:
            continue
        compared += 1
        key = (rom_offset - extents[name]["text_start"], entry_type)
        if key not in decoded[name]:
            missing.append((name, key))

    print("decomp relocs checked: %d  absent from the ROM decode: %d"
          % (compared, len(missing)))
    for name, key in missing[:10]:
        print("  MISSING %s offset 0x%X %s" % (name, key[0], key[1]))

    # Code pointers found in the overlays' data, and whether each is a function
    # start in the generated symbol map. `gen_syms_toml` splits over-long
    # functions at the ones that are not.
    import tomllib
    symbols = tomllib.load(open(os.path.join(ROOT, "build",
                                             "banjotooie.us.syms.toml"), "rb"))
    by_name = {s["name"]: s for s in symbols["section"]}

    pointers = 0
    covered = 0
    for name, extent in sorted(extents.items()):
        if name not in headers or name not in ids:
            continue
        _, info = decode_header(rom, headers[name], extent["text_start"],
                                ids[name])
        section = by_name.get(".ovl_" + name)
        if section is None:
            continue
        starts = {f["vram"] - OVERLAY_VRAM for f in section["functions"]}
        for offset in info["code_pointers"]:
            pointers += 1
            covered += offset in starts
    print("code pointers in overlay data: %d  already function starts: %d"
          % (pointers, covered))

    # The overlays' export tables. Every offset here is a function the game
    # calls through a syscall thunk, so a missing start is a guaranteed runtime
    # `Failed to find function at <code_base + offset>`.
    entries = 0
    entry_covered = 0
    entry_missing = []
    for name, extent in sorted(extents.items()):
        if name not in headers or name not in ids:
            continue
        _, info = decode_header(rom, headers[name], extent["text_start"],
                                ids[name])
        section = by_name.get(".ovl_" + name)
        if section is None:
            continue
        starts = {f["vram"] - OVERLAY_VRAM for f in section["functions"]}
        for offset in info["entrypoint_offsets"]:
            entries += 1
            if offset in starts:
                entry_covered += 1
            else:
                entry_missing.append((name, offset))
    print("overlay export-table offsets: %d  already function starts: %d"
          % (entries, entry_covered))
    for name, offset in entry_missing[:10]:
        print("  MISSING %s entrypoint 0x%X" % (name, offset))
    return 0 if not bad and not missing and not entry_missing else 1


if __name__ == "__main__":
    sys.exit(_main())
