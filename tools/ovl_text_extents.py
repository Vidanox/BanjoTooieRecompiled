"""Recover each overlay's true .text extent from the splat yaml.

Why this exists
---------------
gen_syms_toml.py used to size overlay sections as

    size = (vmax - base_vram) + 0x100   # pad for the last function

which gives the LAST function of every overlay exactly 0x100 bytes (64
instructions). Any final function longer than that was silently truncated, and
the truncation only showed up when the generated C failed to compile:
a `jal` as the last emitted instruction left `goto after_N` with no label, and
branches past the cut left `goto L_ADDR` with no label.

The real extent is available: in baserom.us.yaml each overlay is a `type: code`
segment whose subsegments list a `c` (text) start followed by `.rodata` / `data`
/ `bss`. Text runs from the `c` start to the first non-text subsegment start
(or to the next segment's start if there is none).

Parsed shape
------------
Returns {overlay_name: {"text_start": int, "text_end": int}} using ROM offsets.
"""
import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
YAML = os.path.join(ROOT, "decomp", "baserom.us.yaml")

# "  - [0x01FDD0F0, c, dingpot]" / "  - [0x01FDD590, .rodata, dingpot]"
# A handful of overlays (19) use `auto` instead of an explicit offset, e.g.
# "  - [auto, c, translate]". Those carry no address of their own, so the text
# run is bounded by the following top-level segment instead.
SUBSEG_RE = re.compile(
    r"^\s*-\s*\[\s*(0x[0-9A-Fa-f]+|auto)\s*,\s*([^,\]]+?)\s*[,\]]")
NAME_RE = re.compile(r"^  - name: (\S+)\s*$")
START_RE = re.compile(r"^    start: (0x[0-9A-Fa-f]+)\s*$")
TYPE_RE = re.compile(r"^    type: (\S+)\s*$")

# Subsegment kinds that still count as text.
TEXT_KINDS = {"c", "asm", "hasm", ".text"}


def parse_text_extents(yaml_path=YAML):
    lines = open(yaml_path, encoding="utf-8").read().splitlines()

    # Collect top-level segments with their start offsets, in file order, so we
    # can bound the last overlay by the following segment.
    segs = []  # (name, start, type, first_line, last_line)
    cur = None
    for i, line in enumerate(lines):
        m = NAME_RE.match(line)
        if m:
            if cur:
                cur["end_line"] = i
                segs.append(cur)
            cur = {"name": m.group(1), "start": None, "type": None,
                   "line": i, "end_line": None}
            continue
        if cur is None:
            continue
        ms = START_RE.match(line)
        if ms and cur["start"] is None:
            cur["start"] = int(ms.group(1), 16)
        mt = TYPE_RE.match(line)
        if mt and cur["type"] is None:
            cur["type"] = mt.group(1)
    if cur:
        cur["end_line"] = len(lines)
        segs.append(cur)

    out = {}
    for idx, seg in enumerate(segs):
        if seg["type"] != "code":
            continue

        # Gather this segment's subsegments.
        subs = []
        for line in lines[seg["line"]:seg["end_line"]]:
            m = SUBSEG_RE.match(line)
            if m:
                raw = m.group(1)
                addr = None if raw == "auto" else int(raw, 16)
                subs.append((addr, m.group(2).strip()))
        if not subs:
            continue

        text_start = None
        text_end = None
        for addr, kind in subs:
            if kind in TEXT_KINDS:
                if text_start is None:
                    # `auto` text inherits the segment's own start offset.
                    text_start = addr if addr is not None else seg["start"]
            elif text_start is not None and addr is not None:
                # First non-text subsegment terminates the text run.
                text_end = addr
                break

        if text_start is None:
            continue

        if text_end is None:
            # No trailing data subsegment; bound by the next top-level segment.
            nxt = None
            for later in segs[idx + 1:]:
                if later["start"] is not None:
                    nxt = later["start"]
                    break
            text_end = nxt if nxt is not None else text_start

        if text_end > text_start:
            out[seg["name"]] = {"text_start": text_start, "text_end": text_end}

    return out


if __name__ == "__main__":
    ext = parse_text_extents()
    print("overlay text extents parsed: %d" % len(ext))
    sizes = sorted((v["text_end"] - v["text_start"]) for v in ext.values())
    print("min 0x%X  median 0x%X  max 0x%X"
          % (sizes[0], sizes[len(sizes) // 2], sizes[-1]))
    for n in ("chdingpot", "cheggnormal", "chfactorygoblin"):
        if n in ext:
            v = ext[n]
            print("  %-18s 0x%08X..0x%08X  size 0x%X"
                  % (n, v["text_start"], v["text_end"],
                     v["text_end"] - v["text_start"]))
