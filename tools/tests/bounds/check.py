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

rt=DEPS/'lib/rt64'
h=(rt/'src/common/rt64_common.h').read_text();decl=h[h.index('    struct FixedRect {'):h.index('    struct FixedMatrix {')]
c=(rt/'src/common/rt64_common.cpp').read_text();impl=c[c.index('    FixedRect::FixedRect()'):c.index('    // FixedMatrix')]
gbi=(rt/'include/rt64_extended_gbi.h').read_text()
constants='\n'.join('constexpr int '+name+'='+re.search(r'#define '+name+r'\s+(0x[0-9a-fA-F]+)',gbi)[1]+';' for name in ['G_EX_ASPECT_AUTO','G_EX_ASPECT_ADJUST','G_EX_ASPECT_STRETCH','G_EX_ORIGIN_NONE'])
with tempfile.TemporaryDirectory(prefix='tooie-bounds-') as tmp:
    d=Path(tmp);target=d/'src/hle/rt64_rsp.cpp';target.parent.mkdir(parents=True)
    target.write_bytes(subprocess.check_output(['git','-C',str(rt),'show','HEAD:src/hle/rt64_rsp.cpp']))
    patch=d/'rt64.patch';patch.write_bytes((ROOT/'patches/rt64.patch').read_text().encode('utf-8'))
    subprocess.run(['git','apply','--include=src/hle/rt64_rsp.cpp',str(patch)],cwd=d,check=True)
    s=target.read_text();a=s.index('            const uint32_t groupIndex = workload.drawData.viewProjTransformGroups[curViewProjIndex];');b=s.index('            if (!drawRect.isNull()) {',a)
    code='#include <algorithm>\n#include <cassert>\n#include <cmath>\n#include <cstdint>\n#include <cstdio>\n#include <vector>\n'+decl+impl+constants+'\n'+(Path(__file__).parent/'wrapper.cpp.txt').read_text()+s[a:b]+'\nreturn drawRect;\n}\n'+(Path(__file__).parent/'main.cpp.txt').read_text()
    build_and_run(d,[('cpp',code)])
