"""Audit forced starts that detect_functions currently rejects.

For each unresolved jal target, look at what precedes it (skipping alignment
nops) and classify why the start-validation rejected it. This distinguishes
"my filter is too strict" from "this really is mid-function".

The verdict comes from `detect_functions.preceding_terminator` -- the same rule
`is_plausible_function_start` applies -- so a target reported here as
"accepted" is one the generator would in fact turn into a function, and its
absence from force_keep has some other cause. This file used to classify with a
private copy of the rule, which had the old `b` offset bug and therefore
mislabelled every unconditional-branch-preceded target as mid-function.
"""
import collections
import os
import re
import sys

import rabbitizer

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from detect_functions import (core_section_for, core_section_words,
                             preceding_terminator, terminator_index)

ROOT = os.path.dirname(HERE)
ROM = os.path.join(ROOT, "build", "decompressed.us.z64")

# Display names for the shared segment table, keyed by its rom offset. Only the
# labels live here; the geometry comes from `CORE_SECTIONS`.
_SEG_NAMES = {
    0x00001000: ".entry+.boot",
    0x01E29B60: ".core1",
    0x01E5AEB0: ".core2",
}

_KIND_LABELS = {
    "jr": "after jr $reg (accepted)",
    "j": "after j (accepted)",
    "b": "after b (accepted)",
    "jal": "after jal (mid-function)",
    "branch": "after conditional branch (mid-function)",
    "fallthrough": "mid-function (falls through)",
}


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
        section = core_section_for(v)
        if section is None:
            kinds['outside known segments'] += 1
            examples['outside known segments'].append(v)
            continue
        rom, base, size = section
        words = core_section_words(data, rom, size)
        idx = (v - base) // 4

        # How much alignment padding sits immediately before the target. This
        # is reporting only -- the verdict below is the shared test's.
        skipped = 0
        k = idx - 1
        while k > 0 and words[k] == 0:
            k -= 1
            skipped += 1

        kind = _KIND_LABELS[preceding_terminator(words, idx)]
        if skipped:
            kind += ' (after %d pad)' % skipped
        kinds[kind] += 1
        if len(examples[kind]) < 4:
            examples[kind].append(v)

    print('unresolved jal targets: %d\n' % len(targets))
    for k, n in kinds.most_common():
        print('%5d  %s' % (n, k))
        for v in examples[k]:
            section = core_section_for(v)
            if section is None:
                print('         0x%08X (no segment)' % v)
                continue
            rom, base, size = section
            words = core_section_words(data, rom, size)
            idx = (v - base) // 4
            ins = rabbitizer.Instruction(words[idx], vram=v)
            ti = terminator_index(words, idx)
            if ti is None:
                print('         0x%08X %-12s term=<none> cur=%s'
                      % (v, _SEG_NAMES.get(rom, '?'),
                         ins.disassemble(None, 0)))
                continue
            term = rabbitizer.Instruction(words[ti], vram=base + 4 * ti)
            print('         0x%08X %-12s term=%-28s cur=%s'
                  % (v, _SEG_NAMES.get(rom, '?'), term.disassemble(None, 0),
                     ins.disassemble(None, 0)))


if __name__ == '__main__':
    main(*sys.argv[1:])
