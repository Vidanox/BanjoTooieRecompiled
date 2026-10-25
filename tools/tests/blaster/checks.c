#define EXPECTED_BROKEN 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "recomp.h"
static int32_t bases[900];
int32_t* section_addresses = bases;
static unsigned state, lookup_count, switch_count, count;
static int32_t failed_address;
static const char* trace[128];
static void record(const char* name) { if(count>=128) abort(); trace[count++]=name; }
static void bad_lookup(uint8_t* rdram, recomp_context* ctx) { (void)rdram;(void)ctx; }
recomp_func_t* get_function(int32_t address) { ++lookup_count;failed_address=address;return bad_lookup; }
void switch_error(const char* fn,uint32_t pc,uint32_t table) { (void)fn;(void)pc;(void)table;++switch_count; }
void _badeathmatch_entrypoint_5(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("_badeathmatch_entrypoint_5");ctx->r2=0;}
void _baduo_entrypoint_14(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("_baduo_entrypoint_14");ctx->r2=0;}
void _gcegg_entrypoint_7(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("_gcegg_entrypoint_7");ctx->r2=0;}
void _suegg_entrypoint_6(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("_suegg_entrypoint_6");ctx->r2=0;}
void _sueggmisc_entrypoint_2(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("_sueggmisc_entrypoint_2");ctx->r2=0;}
void func_80099A34(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80099A34");ctx->r2=0;}
void func_80099A4C(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80099A4C");ctx->r2=0;}
void func_80099A58(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80099A58");ctx->r2=0;}
void func_80099A70(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80099A70");ctx->r2=0;}
void func_80099A7C(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80099A7C");ctx->r2=0;}
void func_80099B94(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80099B94");ctx->r2=0;}
void func_8009C15C(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_8009C15C");ctx->r2=0;}
void func_8009E5C8(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_8009E5C8");ctx->r2=0;}
void func_8009E6EC(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_8009E6EC");ctx->r2=state;}
void func_8009E6F8(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_8009E6F8");ctx->r2=0;}
void func_8009E830(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_8009E830");ctx->r2=0;}
void func_800A3404(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_800A3404");ctx->r2=0;}
void func_800A3544(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_800A3544");ctx->r2=0;}
void func_800EFD24(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_800EFD24");ctx->r2=0;}
void func_800F5A00(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_800F5A00");ctx->r2=0;}
void func_800F7E64(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_800F7E64");ctx->r2=0;}
void func_808019EC_bsfirstp(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_808019EC_bsfirstp");ctx->r2=0;}
void func_80801A5C_bsfirstp(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80801A5C_bsfirstp");ctx->r2=0;}
void func_80802BE8_bsfirstp(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80802BE8_bsfirstp");ctx->r2=0;}
void func_80803760_bsfirstp(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80803760_bsfirstp");ctx->r2=0;}
void func_80803CD4_bsfirstp(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80803CD4_bsfirstp");ctx->r2=0;}
void func_80807EEC_bsfirstp(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80807EEC_bsfirstp");ctx->r2=0;}
void func_80807F24_bsfirstp(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80807F24_bsfirstp");ctx->r2=0;}
void func_80808678_bsfirstp(uint8_t* rdram,recomp_context* ctx) {(void)rdram;record("func_80808678_bsfirstp");ctx->r2=0;}

/* PRODUCTION_FUNCTION */
static int has(const char* name) { for(unsigned i=0;i<count;i++) if(!strcmp(trace[i],name)) return 1; return 0; }
static int check(uint8_t* rdram,unsigned action) {
 recomp_context ctx={0}; state=action;lookup_count=switch_count=count=0;failed_address=0;
 ctx.r4=0xFFFFFFFF80020000ULL;ctx.r29=0xFFFFFFFF80010000ULL;ctx.r16=0xFFFFFFFF80030000ULL;ctx.r31=0xFFFFFFFF80001234ULL;
 bsfirstp_entrypoint_26(rdram,&ctx);
 int restored=ctx.r29==0xFFFFFFFF80010000ULL && ctx.r16==0xFFFFFFFF80030000ULL && ctx.r31==0xFFFFFFFF80001234ULL;
 {
  if(lookup_count || switch_count || !restored) return 0;
  if(action==0x73 && (count!=5 || strcmp(trace[0],"func_8009E6EC") || strcmp(trace[1],"func_80807EEC_bsfirstp") || strcmp(trace[2],"func_80801A5C_bsfirstp") || strcmp(trace[3],"func_8009E830") || strcmp(trace[4],"func_8009E5C8") || has("func_80099B94"))) return 0;
  if(action==0x46 && (count!=2 || !has("func_80099B94"))) return 0;
  if(action==0x99 && !has("func_808019EC_bsfirstp")) return 0;
 }
 printf("variant=%s state=0x%02X lookup_count=%u target=0x%08X stack_restored=%d helpers=%u PASS\n",EXPECTED_BROKEN?"before":"after",action,lookup_count,(uint32_t)failed_address,restored,count);
 return 1;
}
int main(void) {
 uint8_t* rdram=(uint8_t*)calloc(8*1024*1024,1);if(!rdram)return 2;
 bases[108]=(int32_t)0x801F6D30u;
 for(unsigned i=0;i<47;i++) MEM_W(0xA494+i*4,(gpr)(int64_t)bases[108])=(int32_t)(0x801F6D30u+i*4);
 int ok=check(rdram,0x73) && check(rdram,0x46) && check(rdram,0x99);
 free(rdram);return ok?0:1;
}
