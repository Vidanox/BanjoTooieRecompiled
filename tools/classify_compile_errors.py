"""Classify MSVC errors from compiling the recompiled C output.

Reads a cl.exe log (handles PowerShell's UTF-16LE output, see AGENTS.md traps)
and buckets errors by root cause so we fix causes, not symptoms.
"""
import re
import sys
import collections


def read_text(path):
    raw = open(path, 'rb').read()
    enc = 'utf-16' if raw[:2] in (b'\xff\xfe', b'\xfe\xff') else 'utf-8'
    return raw.decode(enc, errors='ignore')


def main(path):
    text = read_text(path)
    errs = re.findall(r'^(.*?)\((\d+)\): error (C\d+): (.*)$', text, re.M)

    buckets = collections.Counter()
    missing_labels = set()
    files_by_bucket = collections.defaultdict(set)

    for f, line, code, msg in errs:
        f = f.strip()
        if code == 'C2106':
            b = 'C2106 assignment to $zero (data decoded as code)'
        elif 'after_' in msg:
            b = 'C2094 missing after_N label (jal in branch delay slot)'
        else:
            b = 'C2094 missing L_ADDR label (branch target outside function)'
            m = re.search(r"label 'L_([0-9A-Fa-f]{8})'", msg)
            if m:
                missing_labels.add(int(m.group(1), 16))
        buckets[b] += 1
        files_by_bucket[b].add(f)

    print('total errors: %d across %d files\n' % (errs.__len__(), len({e[0].strip() for e in errs})))
    for b, n in buckets.most_common():
        print('%5d errors / %3d files  %s' % (n, len(files_by_bucket[b]), b))

    if missing_labels:
        print('\ndistinct missing L_ branch targets: %d' % len(missing_labels))
        for a in sorted(missing_labels):
            print('  0x%08X' % a)


if __name__ == '__main__':
    main(sys.argv[1] if len(sys.argv) > 1 else 'build/fail_errors.log')
