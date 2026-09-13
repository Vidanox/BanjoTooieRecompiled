"""Print symbol-map entries for the named functions."""
import re
import sys

PAT = ('{ name = "%s", vram = (0x[0-9A-F]+), size = (0x[0-9A-F]+) }')


def main(*names):
    text = open('build/banjotooie.us.syms.toml', encoding='utf-8').read()
    for n in names:
        m = re.search(PAT % re.escape(n), text)
        if m:
            v = int(m.group(1), 16)
            s = int(m.group(2), 16)
            print('%-24s vram=0x%08X size=0x%-6X end=0x%08X' % (n, v, s, v + s))
        else:
            print('%-24s NOT FOUND' % n)


if __name__ == '__main__':
    main(*sys.argv[1:])
