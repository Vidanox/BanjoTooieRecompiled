"""Show source context around each distinct compile error, grouped by cause."""
import re
import sys
import collections


def read_text(path):
    raw = open(path, 'rb').read()
    enc = 'utf-16' if raw[:2] in (b'\xff\xfe', b'\xfe\xff') else 'utf-8'
    return raw.decode(enc, errors='ignore')


def enclosing_func(lines, n):
    for i in range(n - 1, -1, -1):
        if lines[i].startswith('RECOMP_FUNC'):
            m = re.search(r'(\w+)\(uint8_t', lines[i])
            return m.group(1) if m else lines[i][:60], i + 1
    return '?', 0


def main(log, code='C2106', count=4, before=10, after=4):
    text = read_text(log)
    errs = re.findall(r'^(.*?)\((\d+)\): error (%s): (.*)$' % code, text, re.M)
    print('%s: %d errors in %d files\n'
          % (code, len(errs), len({e[0].strip() for e in errs})))

    seen = collections.Counter()
    shown = 0
    for f, line, _, msg in errs:
        f = f.strip()
        if seen[f]:
            continue
        seen[f] += 1
        shown += 1
        if shown > int(count):
            break
        lines = open(f, encoding='utf-8', errors='ignore').read().split('\n')
        n = int(line)
        fn, fl = enclosing_func(lines, n)
        print('=== %s:%s  in %s (starts line %d)' % (f, line, fn, fl))
        for i in range(max(0, n - int(before)), min(len(lines), n + int(after))):
            mark = '>>' if i + 1 == n else '  '
            print('%s %5d: %s' % (mark, i + 1, lines[i]))
        print()


if __name__ == '__main__':
    main(*sys.argv[1:])
