import re
txt = open("build/banjotooie.us.syms.toml", encoding="utf-8").read()
blocks = re.split(r"(?=\[\[section\]\])", txt)
header = blocks[0]
static = [b for b in blocks if re.search(r'name = "\.(entry|boot|core1|core2)"', b)]
ovl = [b for b in blocks if re.search(r'name = "\.ovl_', b)]
open("build/syms_static.toml","w").write(header + "".join(static))
open("build/syms_ovl.toml","w").write(header + "".join(ovl))
print("static:", len(static), "ovl:", len(ovl))
