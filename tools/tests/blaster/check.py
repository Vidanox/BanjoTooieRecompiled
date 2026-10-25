"""Run ROM-free checks with the repository's real generated consumers/hooks.
Run from a compiler developer shell; dependencies must already be initialized.
--deps may point to another checkout containing the same pinned dependencies.
"""
from pathlib import Path
import argparse, os, re, shutil, subprocess, tempfile
ROOT=Path(__file__).resolve().parents[3]
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--deps',type=Path,default=ROOT)
p.add_argument('--cxx',default=os.environ.get('CXX','clang-cl' if os.name=='nt' else 'clang++'))
args=p.parse_args()
DEPS=args.deps
compiler=shutil.which(args.cxx) or args.cxx
headers=DEPS/'lib/N64ModernRuntime/N64Recomp/include'
if not (headers/'recomp.h').exists():
    headers=DEPS/'lib/N64Recomp/include'
def function(name):
    for f in (ROOT/'RecompiledFuncs').glob('*.c'):
        text=f.read_text()
        m=re.search(r'^RECOMP_FUNC void '+re.escape(name)+r'\(',text,re.M)
        if m:
            end=re.search(r'^RECOMP_FUNC void ',text[m.end():],re.M)
            return text[m.start():m.end()+end.start() if end else len(text)]
    raise RuntimeError('Missing generated function: '+name)
def build_and_run(directory,sources):
    objs=[];windows=Path(compiler).stem.lower() in ('clang-cl','cl')
    for i,(language,code) in enumerate(sources):
        f=directory/(str(i)+('.c' if language=='c' else '.cpp'));f.write_text(code)
        obj=directory/(str(i)+('.obj' if windows else '.o'));objs.append(str(obj))
        if windows:
            cmd=[compiler,'/nologo','/Od','/W0','/I'+str(headers),'/I'+str(ROOT/'include'),'/c',str(f),'/Fo'+str(obj)]
            cmd+=['/TC'] if language=='c' else ['/EHsc','/std:c++20']
        else:
            cmd=[compiler,'-O0','-Wno-everything','-I'+str(headers),'-I'+str(ROOT/'include'),'-c',str(f),'-o',str(obj),'-x', 'c' if language=='c' else 'c++']
            cmd+=['-std=c17'] if language=='c' else ['-std=c++20']
        subprocess.run(cmd,check=True)
    exe=directory/('check.exe' if windows else 'check')
    cmd=[compiler,'/nologo',*objs,'/Fe'+str(exe)] if windows else [compiler,*objs,'-o',str(exe)]
    subprocess.run(cmd,check=True,cwd=directory);subprocess.run([str(exe)],check=True)
config="""#include <atomic>
#include <cstring>
#include "recomp.h"
namespace ultramodern::renderer {
enum class AspectRatio {Original,Expand,Manual};
struct Config {AspectRatio ar_option;};
Config config{AspectRatio::Original};
const Config& get_graphics_config(){return config;}
}
extern "C" void test_mode(int m){ultramodern::renderer::config.ar_option=static_cast<ultramodern::renderer::AspectRatio>(m);}
"""

patch=(ROOT/'patches/N64Recomp.patch').read_text()
assert '(*target + 0x8000U) & 0xFFFF0000U' in patch
for target in (0x808007E0,0x80807FFF,0x80808000,0x8080A494,0x8080FFFF):
    high=(target+0x8000)&0xFFFF0000
    low=(target&0xFFFF);low=low-0x10000 if low&0x8000 else low
    assert (high+low)&0xFFFFFFFF==target
fixture=(Path(__file__).parent/'checks.c').read_text().replace('/* PRODUCTION_FUNCTION */',function('bsfirstp_entrypoint_26'))
with tempfile.TemporaryDirectory(prefix='tooie-blaster-') as tmp:
    build_and_run(Path(tmp),[('c',fixture)])
