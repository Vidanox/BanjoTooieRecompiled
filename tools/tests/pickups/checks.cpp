#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <cstdio>
#include <vector>
#include <string>
#include "recomp.h"
extern "C" {
void tooie_expand_pickup_scope(uint8_t*,recomp_context*,uint32_t);
void tooie_expand_pickup_radius(uint8_t*,recomp_context*);
void func_800CACEC(uint8_t*,recomp_context*);
void test_mode(int);
}
struct Entry{uint32_t thunk;float radius;};
constexpr Entry expected[]={{0x80085A70U,107.0f},
{0x80085A78U,107.0f},
{0x80085A80U,107.0f},
{0x80085A88U,107.0f},
{0x80085A90U,107.0f},
{0x80085A98U,107.0f},
{0x80085AA0U,107.0f},
{0x80085AA8U,160.0f},
{0x80085AB0U,160.0f},
{0x80085AB8U,101.0f},
{0x80085AC0U,177.0f},
{0x80085AC8U,107.0f},
{0x80085AD0U,160.0f}};
int main(int argc,char**argv){
 unsigned checks=0,oldRejected=0,newAccepted=0;
 for(int shot:{5,6,7,8,9,10,11,12,13}){
  std::vector<uint8_t>ram(0x800000);auto*rdram=ram.data();char n[16];snprintf(n,sizeof(n),"shot-%02d",shot);
  gpr actor=int32_t(0x80020000),cam=int32_t(0x80010000);
  auto put=[&](gpr base,int off,float value){uint32_t bits;memcpy(&bits,&value,4);MEM_W(off,base)=bits;};
  for(int p=0;p<4;p++)for(int axis=0;axis<3;axis++)put(cam,0x24+16*p+4*axis,axis==1?1.0f:0.0f);
  put(actor,4,0);put(actor,8,(shot==6?93.217f:shot==9?70.812f:shot==12?70.073f:20.0f));put(actor,12,0);
  auto visible=[&](float radius){recomp_context c{};c.r29=int32_t(0x80070000);c.r4=cam;c.r5=actor+4;uint32_t bits;memcpy(&bits,&radius,4);c.r6=bits;func_800CACEC(rdram,&c);assert(c.r29==uint64_t(int64_t(int32_t(0x80070000))));return c.r2!=0;};
  auto independentlyVisible=[&](float radius){
   auto f=[&](gpr p,int o){uint32_t bits=MEM_W(o,p);float v;memcpy(&v,&bits,4);return v;};
   for(int plane=0;plane<4;plane++){float dot=0;for(int axis=0;axis<3;axis++)dot+=f(cam,0x24+16*plane+4*axis)*(f(actor,4+4*axis)-f(cam,4*axis));if(radius<=dot)return false;}return true;
  };
  for(auto entry:expected)for(float cached:{0.0f,1.0f,entry.radius,entry.radius+40.0f}){
   MEM_W(0x10,actor)=entry.thunk;MEM_H(0x6A,actor)=uint16_t(cached);
   for(int mode:{0,1,2}){
    test_mode(mode);recomp_context hook{};hook.r16=actor;hook.r2=123;hook.f14.fl=70;
    auto before=ram;tooie_expand_pickup_scope(rdram,&hook,1);tooie_expand_pickup_radius(rdram,&hook);tooie_expand_pickup_scope(rdram,&hook,2);
    assert(hook.r16==uint64_t(int64_t(int32_t(actor)))&&hook.r2==123&&ram==before);
    float expectedRadius=mode==1?std::max(entry.radius,cached):70;
    assert(hook.f14.fl==expectedRadius);checks++;
    for(float scale:{0.25f,0.5f,1.0f,2.0f}){
     hook.f18.fl=scale;auto*ctx=&hook;
     ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
     assert(visible(hook.f4.fl)==independentlyVisible(expectedRadius*scale));checks++;
    }
   }
   test_mode(1);recomp_context c{};c.r16=actor;c.f14.fl=70;
   tooie_expand_pickup_scope(rdram,&c,1);tooie_expand_pickup_scope(rdram,&c,2);tooie_expand_pickup_radius(rdram,&c);assert(c.f14.fl==70);checks++;
   tooie_expand_pickup_scope(rdram,&c,1);tooie_expand_pickup_radius(rdram,&c);assert(c.f14.fl==std::max(entry.radius,cached));c.f14.fl=70;tooie_expand_pickup_radius(rdram,&c);assert(c.f14.fl==70);checks++;
   tooie_expand_pickup_scope(rdram,&c,1);test_mode(0);tooie_expand_pickup_radius(rdram,&c);assert(c.f14.fl==70);test_mode(1);tooie_expand_pickup_radius(rdram,&c);assert(c.f14.fl==70);checks++;
   c.f14.fl=400;tooie_expand_pickup_scope(rdram,&c,1);tooie_expand_pickup_radius(rdram,&c);assert(c.f14.fl==400);checks++;
  }
  for(uint32_t unknown:{0U,0x80085A68U,0x80085AD8U,0x80085A71U,0x80085AB9U}){
   test_mode(1);MEM_W(0x10,actor)=unknown;MEM_H(0x6A,actor)=9999;recomp_context c{};c.r16=actor;c.f14.fl=70;tooie_expand_pickup_scope(rdram,&c,1);tooie_expand_pickup_radius(rdram,&c);assert(c.f14.fl==70);checks++;
  }
  if(!visible(70)){oldRejected++;for(auto e:expected){assert(visible(e.radius));newAccepted++;}}
 }
 printf("PASS: %u checks; 13 descriptors x 9 synthetic views, Original/Manual, cached=0/1/full/larger, original scale multiplication, independent plane reference, guest-memory equality, scope cleanup, nonshrinking radius and unrelated thunks. %u old rejected views become accepted for %u combined-pickup cases.\n",checks,oldRejected,newAccepted);
}
