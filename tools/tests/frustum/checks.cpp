#include <array>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <limits>
#include <random>
#include <vector>
#include "recomp.h"
#include "tooie_visibility.hpp"
extern "C" {
void tooie_expand_frustum(uint8_t*,recomp_context*);
void test_mode(int);
void func_800CAA24(uint8_t*,recomp_context*);
void func_800CAB70(uint8_t*,recomp_context*);
void func_800CACEC(uint8_t*,recomp_context*);
}
using V=std::array<float,3>;
using tooie::visibility::Plane;
std::vector<uint8_t> ram(0x800000);
uint8_t* rdram=ram.data();
constexpr gpr cam=static_cast<int32_t>(0x80010000), input=static_cast<int32_t>(0x80011000);
unsigned checks=0;
void check(bool ok,const char* why){++checks;if(!ok){std::fprintf(stderr,"FAIL: %s\n",why);std::exit(1);}}
void put(gpr base,int off,float f){uint32_t bits;std::memcpy(&bits,&f,4);MEM_W(off,base)=bits;}
float get(gpr base,int off){uint32_t bits=MEM_W(off,base);float f;std::memcpy(&f,&bits,4);return f;}
void planes(gpr base,Plane* p){for(int i=0;i<4;++i){for(int j=0;j<3;++j)put(base,0x24+16*i+4*j,p[i].normal[j]);put(base,0x30+16*i,p[i].distance);}}
bool visible(int kind,gpr camera,V p,float r){
    recomp_context c{};c.r29=static_cast<int32_t>(0x80070000);c.r4=camera;c.r5=input;c.r6=input+16;
    for(int a=0;a<3;++a){if(kind==0){put(input,a*4,p[a]-r);put(input,16+a*4,p[a]+r);}else if(kind==1){MEM_H(a*2,input)=static_cast<int16_t>(p[a]-r);MEM_H(16+a*2,input)=static_cast<int16_t>(p[a]+r);}else put(input,a*4,p[a]);}
    if(kind==0)func_800CAA24(rdram,&c);else if(kind==1)func_800CAB70(rdram,&c);else{uint32_t bits;std::memcpy(&bits,&r,4);c.r6=bits;func_800CACEC(rdram,&c);}
    check(c.r29==static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(0x80070000))),"guest stack restored");return c.r2!=0;
}
void hook(gpr camera,int mode,int width,int height){test_mode(mode);tooie::visibility::update_display_size(width,height);recomp_context c{};c.r16=camera;c.r2=123;tooie_expand_frustum(rdram,&c);check(c.r2==123 && c.r16==camera,"hook preserves registers");}
V world(V p,float yaw,float pitch,V origin){float cy=std::cos(yaw),sy=std::sin(yaw),cp=std::cos(pitch),sp=std::sin(pitch);V t{p[0],cp*p[1]-sp*p[2],sp*p[1]+cp*p[2]};return{origin[0]+cy*t[0]+sy*t[2],origin[1]+t[1],origin[2]-sy*t[0]+cy*t[2]};}
void camera(float fov,float yaw,float pitch,V origin,Plane* p){
    float v=fov*3.14159265358979323846f/360,h=v*(4.0f/3.0f);V local[4]={{-std::cos(h),0,std::sin(h)},{std::cos(h),0,std::sin(h)},{0,std::cos(v),std::sin(v)},{0,-std::cos(v),std::sin(v)}};
    for(int j=0;j<3;++j)put(cam,j*4,origin[j]);for(int i=0;i<4;++i){V n=world(local[i],yaw,pitch,{0,0,0});float d=0;for(int j=0;j<3;++j){p[i].normal[j]=n[j];d-=n[j]*origin[j];}p[i].distance=d;}planes(cam,p);
}
int main(int argc,char** argv){
    for(float fov:{4.0f,12.0f,40.0f,70.0f})for(float yaw:{0.0f,0.9f})for(float pitch:{0.0f,0.3f}){
        Plane original[4];V origin{100,-50,200};camera(fov,yaw,pitch,origin,original);
        float x=1000*std::tan(fov*3.14159265358979323846f/360*(4.0f/3.0f));V band=world({x*1.15f,0,-1000},yaw,pitch,origin);
        check(!visible(2,cam,band,.1f),"original rejects side band");std::array<uint8_t,64> saved;std::memcpy(saved.data(),rdram+0x10024,64);
        for(int mode:{0,2}){hook(cam,mode,1600,900);check(std::memcmp(saved.data(),rdram+0x10024,64)==0,"Original/Manual unchanged");}
        hook(cam,1,800,900);check(std::memcmp(saved.data(),rdram+0x10024,64)==0,"portrait keeps original frustum");
        hook(cam,1,1600,900);check(std::memcmp(saved.data()+32,rdram+0x10044,32)==0,"vertical planes unchanged");check(visible(2,cam,band,.1f),"widescreen side band visible");
        check(!visible(2,cam,world({x*1.6f,0,-1000},yaw,pitch,origin),.1f),"outside widescreen rejected");
        for(int kind:{0,1,2}){check(visible(kind,cam,world({0,0,-1000},yaw,pitch,origin),2),"front visible");check(!visible(kind,cam,world({0,0,1000},yaw,pitch,origin),2),"behind camera rejected");check(!visible(kind,cam,world({0,2000,-1000},yaw,pitch,origin),2),"above view rejected");check(!visible(kind,cam,world({20000,0,-1000},yaw,pitch,origin),2),"far side rejected");}
        for(int i=0;i<2;++i){float length=0;for(int a=0;a<3;++a){float n=get(cam,0x24+16*i+4*a);length+=n*n;}check(std::abs(length-1)<1e-5f,"sphere plane normalized");}
        std::array<uint8_t,32> once;std::memcpy(once.data(),rdram+0x10024,32);planes(cam,original);hook(cam,1,1600,900);check(std::memcmp(once.data(),rdram+0x10024,32)==0,"rebuild does not accumulate widening");
    }
    Plane original[4];camera(40,0,0,{0,0,0},original);hook(cam,1,2560,1080);std::mt19937 rng(20261013);std::uniform_real_distribution<float> dist(-1500,1500);
    double h=std::tan(40.0*3.14159265358979323846/360*(4.0/3.0))*(2560.0/1080)/(4.0/3.0),v=std::tan(40.0*3.14159265358979323846/360);unsigned hidden=0;
    for(int i=0;i<10000;++i){V p{dist(rng),dist(rng),dist(rng)};bool expected=p[2]<0 && std::abs(p[0])<(-p[2])*h && std::abs(p[1])<(-p[2])*v;bool actual=visible(2,cam,p,0);check(actual==expected,"point vs independent FOV");if(!actual)++hidden;}check(hidden>8000,"distinguishes old show-everything control");
    Plane invalid[2]={original[0],original[1]}, copy[2]={invalid[0],invalid[1]};check(!tooie::visibility::widen_side_planes(invalid,std::numeric_limits<float>::infinity()),"invalid input refused");check(std::memcmp(invalid,copy,sizeof(copy))==0,"invalid input unchanged");
    std::printf("PASS: %u checks against generated float-box, s16-box and sphere consumers\n",checks);
}
