"""Audit forced starts that detect_functions currently rejects.

For each unresolved jal target, look at what precedes it (skipping alignment
nops) and classify why the start-validation rejected it. This distinguishes
"my filter is too strict" from "this really is mid-function".
"""
import collections
import os
import re
import struct
import sys

import rabbitizer

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
ROM = os.path.join(ROOT, "build", "decompressed.us.z64")

SEGS = [
    ("boot", 0x1000, 0x80000400, 0x800050E0 - 0x400),
    ("core1", 0x1E29B60, 0x80012030, 0x800815C0),
    ("core2", 0x1E5AEB0, 0x800815C0, 0x80200000),
]


def seg_for(v):
    for name, rom, lo, hi in SEGS:
        if lo <= v < hi:
            return name, rom, lo
    return None, None, None


def read_log(path):
    raw = open(path, 'rb').read()
    enc = 'utf-16' if raw[:2] in (b'\xff\xfe', b'\xfe\xff') else 'utf-8'
    return raw.decode(enc, errors='ignore')


def main(log='build/verify7.log'):
    text = read_log(log)
    targets = sorted({int(x, 16) for x in re.findall(
        r'No function found for jal target: (0x[0-9A-F]+)', text)})
    data = open(ROM, 'rb').read()

    kinds = collections.Counter()
    examples = collections.defaultdict(list)

    for v in targets:
        name, segrom, seglo = seg_for(v)
        if name is None:
            kinds['outside known segments'] += 1
            examples['outside known segments'].append(v)
            continue
        r = segrom + (v - seglo)

        # Walk back over alignment padding.
        j = r - 4
        skipped = 0
        while j > segrom and struct.unpack_from('>I', data, j)[0] == 0:
            j -= 4
            skipped += 1

        prevs = [struct.unpack_from('>I', data, j - 4 * k)[0] for k in range(2)]
        kind = 'mid-function (falls through)'
        for w in prevs:
            if w == 0x03E00008:
                kind = 'after jr $ra'
                break
            op = w >> 26
            if op == 0x2 or w == 0x10000000:
                kind = 'after j / b'
                break
            if op == 0x3:
                kind = 'after jal'
                break
        if skipped:
            kind += ' (+%d pad)' % skipped
            kind = re.sub(r' \(\+\d+ pad\)', ' (after padding)', kind)
        kinds[kind] += 1
        if len(examples[kind]) < 4:
            examples[kind].append(v)

    print('unresolved jal targets: %d\n' % len(targets))
    for k, n in kinds.most_common():
        print('%5d  %s' % (n, k))
        for v in examples[k]:
            name, segrom, seglo = seg_for(v)
            if name is None:
                print('         0x%08X (no segment)' % v)
                continue
            r = segrom + (v - seglo)
            w = struct.unpack_from('>I', data, r)[0]
            ins = rabbitizer.Instruction(w, vram=v)
            pw = struct.unpack_from('>I', data, r - 4)[0]
            pins = rabbitizer.Instruction(pw, vram=v - 4)
            print('         0x%08X %-8s prev=%-28s cur=%s'
                  % (v, name, pins.disassemble(None, 0),
                     ins.disassemble(None, 0)))


if __name__ == '__main__':
    main(*sys.argv[1:])
