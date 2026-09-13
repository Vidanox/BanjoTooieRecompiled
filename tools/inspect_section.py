"""Print the symbol-map section containing a given overlay/function name."""
import re
import sys

SEC_RE = re.compile(
    r'name = "(?P<name>[^"]+)"\s*\nrom = (?P<rom>0x[0-9A-F]+)\s*\n'
    r'vram = (?P<vram>0x[0-9A-F]+)\s*\nsize = (?P<size>0x[0-9A-F]+)')
FUNC_RE = re.compile(
    r'\{ name = "(?P<n>[^"]+)", vram = (?P<v>0x[0-9A-F]+), '
    r'size = (?P<s>0x[0-9A-F]+) \}')


def main(needle, path='build/banjotooie.us.syms.toml'):
    text = open(path, encoding='utf-8').read()
    for block in text.split('[[section]]'):
        if needle not in block:
            continue
        m = SEC_RE.search(block)
        if not m:
            continue
        sec_vram = int(m.group('vram'), 16)
        sec_size = int(m.group('size'), 16)
        print('section %s  rom=%s vram=%s size=%s  end=0x%08X'
              % (m.group('name'), m.group('rom'), m.group('vram'),
                 m.group('size'), sec_vram + sec_size))
        funcs = FUNC_RE.findall(block)
        print('functions: %d' % len(funcs))
        for n, v, s in funcs[-8:]:
            print('   %-40s %s size=%-8s end=0x%08X'
                  % (n, v, s, int(v, 16) + int(s, 16)))
        return
    print('not found: %s' % needle)


if __name__ == '__main__':
    main(*sys.argv[1:])
