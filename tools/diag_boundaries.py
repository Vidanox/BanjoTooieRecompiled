"""Diagnose whether compile failures come from truncated function boundaries.

Two symptoms seen when compiling the recompiled C:
  * `goto after_N` with no `after_N:` label  -> function's last instruction is a
    jal/branch whose delay slot lies past the recorded function end.
  * `goto L_ADDR` with no `L_ADDR:` label    -> a branch targets an address past
    the recorded function end (still inside the section).

Both mean the function boundary is too short, i.e. detect_functions cut early.
This script confirms the pattern directly from the generated C.
"""
import re
import glob
import os
import collections

FUNC_RE = re.compile(r'^RECOMP_FUNC\s+\w+\s+(\w+)\s*\(', re.M)


def functions_in(path):
    """Yield (name, start_line, end_line, body_lines)."""
    lines = open(path, encoding='utf-8', errors='ignore').read().split('\n')
    starts = [i for i, l in enumerate(lines) if l.startswith('RECOMP_FUNC')]
    for idx, s in enumerate(starts):
        e = starts[idx + 1] if idx + 1 < len(starts) else len(lines)
        m = FUNC_RE.match(lines[s])
        name = m.group(1) if m else '?'
        yield name, s, e, lines[s:e]


def main():
    failed = [l.strip() for l in open('build/failed_list.txt') if l.strip()]
    stats = collections.Counter()
    examples = []

    for path in failed:
        path = path.replace('/', os.sep)
        for name, s, e, body in functions_in(path):
            text = '\n'.join(body)
            gotos = set(re.findall(r'goto (after_\d+|L_[0-9A-F]{8});', text))
            labels = set(re.findall(r'^\s*(after_\d+|L_[0-9A-F]{8}):', text, re.M))
            missing = gotos - labels
            if not missing:
                continue

            # Find last real instruction comment in the body.
            instr_comments = [l for l in body if re.search(r'// 0x[0-9A-F]{8}: ', l)]
            last = instr_comments[-1] if instr_comments else ''
            m = re.search(r'// (0x[0-9A-F]{8}): (\S+)', last)
            last_op = m.group(2) if m else '?'
            last_addr = m.group(1) if m else '?'

            ends_on_jal = last_op in ('jal', 'j', 'b', 'beq', 'bne', 'bgtz',
                                      'blez', 'bltz', 'bgez', 'jr')
            stats['ends_on_%s' % last_op] += 1
            stats['TOTAL_broken_funcs'] += 1
            if ends_on_jal:
                stats['ends_on_branch_or_jump'] += 1
            if len(examples) < 8:
                examples.append((os.path.basename(path), name, last_addr,
                                 last_op, sorted(missing)[:3]))

    print('broken functions: %d' % stats['TOTAL_broken_funcs'])
    print('of which last instruction is a branch/jump: %d'
          % stats['ends_on_branch_or_jump'])
    print()
    print('last-instruction opcode histogram:')
    for k, v in sorted(stats.items(), key=lambda x: -x[1]):
        if k.startswith('ends_on_') and k != 'ends_on_branch_or_jump':
            print('  %5d  %s' % (v, k[len('ends_on_'):]))
    print()
    print('examples:')
    for f, n, a, op, miss in examples:
        print('  %-16s %-28s last=%s %-4s missing=%s' % (f, n, a, op, miss))


if __name__ == '__main__':
    main()
