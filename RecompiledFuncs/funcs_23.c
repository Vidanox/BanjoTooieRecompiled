#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8009E8D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E8D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E8D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E8DC: jal         0x800C6E60
    // 0x8009E8E0: nop

    func_800C6E60(rdram, ctx);
        goto after_0;
    // 0x8009E8E0: nop

    after_0:
    // 0x8009E8E4: jal         0x800D3B60
    // 0x8009E8E8: nop

    func_800D3B60(rdram, ctx);
        goto after_1;
    // 0x8009E8E8: nop

    after_1:
    // 0x8009E8EC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8009E8F0: addiu       $v1, $v1, 0x7068
    ctx->r3 = ADD32(ctx->r3, 0X7068);
    // 0x8009E8F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8009E8F8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8009E8FC: addiu       $a1, $a1, 0x7040
    ctx->r5 = ADD32(ctx->r5, 0X7040);
    // 0x8009E900: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009E904: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8009E908: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x8009E90C: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x8009E910: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x8009E914: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    // 0x8009E918: sb          $zero, 0xF($v1)
    MEM_B(0XF, ctx->r3) = 0;
    // 0x8009E91C: sb          $t6, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r14;
    // 0x8009E920: addiu       $a0, $zero, 0x3EC
    ctx->r4 = ADD32(0, 0X3EC);
    // 0x8009E924: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x8009E928: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x8009E92C: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x8009E930: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8009E934: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x8009E938: jal         0x800DA524
    // 0x8009E93C: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    func_800DA524(rdram, ctx);
        goto after_2;
    // 0x8009E93C: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    after_2:
    // 0x8009E940: jal         0x8009EAE8
    // 0x8009E944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8009EAE8(rdram, ctx);
        goto after_3;
    // 0x8009E944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8009E948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E950: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E958: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009E95C: jr          $ra
    // 0x8009E960: lbu         $v0, 0x704C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X704C);
    return;
    // 0x8009E960: lbu         $v0, 0x704C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X704C);
;}
RECOMP_FUNC void func_8009E964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E964: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009E968: jr          $ra
    // 0x8009E96C: lbu         $v0, 0x7078($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7078);
    return;
    // 0x8009E96C: lbu         $v0, 0x7078($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7078);
;}
RECOMP_FUNC void func_8009E970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E970: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009E974: jr          $ra
    // 0x8009E978: lwc1        $f0, 0x7048($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7048);
    return;
    // 0x8009E978: lwc1        $f0, 0x7048($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7048);
;}
RECOMP_FUNC void func_8009E97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E97C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009E980: jr          $ra
    // 0x8009E984: lwc1        $f0, 0x7040($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7040);
    return;
    // 0x8009E984: lwc1        $f0, 0x7040($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7040);
;}
RECOMP_FUNC void func_8009E988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E988: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009E98C: jr          $ra
    // 0x8009E990: lwc1        $f0, 0x7044($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7044);
    return;
    // 0x8009E990: lwc1        $f0, 0x7044($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7044);
;}
RECOMP_FUNC void func_8009E994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E994: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009E998: jr          $ra
    // 0x8009E99C: lbu         $v0, 0x7075($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7075);
    return;
    // 0x8009E99C: lbu         $v0, 0x7075($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7075);
;}
RECOMP_FUNC void func_8009E9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E9A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E9A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E9A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E9AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E9B0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8009E9B4: jal         0x8009E9FC
    // 0x8009E9B8: nop

    func_8009E9FC(rdram, ctx);
        goto after_0;
    // 0x8009E9B8: nop

    after_0:
    // 0x8009E9BC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8009E9C0: jal         0x8009EB0C
    // 0x8009E9C4: nop

    func_8009EB0C(rdram, ctx);
        goto after_1;
    // 0x8009E9C4: nop

    after_1:
    // 0x8009E9C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E9D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E9D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009E9DC: jr          $ra
    // 0x8009E9E0: sb          $a0, 0x704C($at)
    MEM_B(0X704C, ctx->r1) = ctx->r4;
    return;
    // 0x8009E9E0: sb          $a0, 0x704C($at)
    MEM_B(0X704C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8009E9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E9E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009E9E8: jr          $ra
    // 0x8009E9EC: sb          $a0, 0x7078($at)
    MEM_B(0X7078, ctx->r1) = ctx->r4;
    return;
    // 0x8009E9EC: sb          $a0, 0x7078($at)
    MEM_B(0X7078, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8009E9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E9F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009E9F4: jr          $ra
    // 0x8009E9F8: swc1        $f12, 0x7048($at)
    MEM_W(0X7048, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x8009E9F8: swc1        $f12, 0x7048($at)
    MEM_W(0X7048, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009E9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E9FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EA00: jr          $ra
    // 0x8009EA04: swc1        $f12, 0x7040($at)
    MEM_W(0X7040, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x8009EA04: swc1        $f12, 0x7040($at)
    MEM_W(0X7040, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009EA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA08: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EA0C: jr          $ra
    // 0x8009EA10: swc1        $f12, 0x7070($at)
    MEM_W(0X7070, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x8009EA10: swc1        $f12, 0x7070($at)
    MEM_W(0X7070, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009EA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA14: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EA18: jr          $ra
    // 0x8009EA1C: lwc1        $f0, 0x706C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X706C);
    return;
    // 0x8009EA1C: lwc1        $f0, 0x706C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X706C);
;}
RECOMP_FUNC void func_8009EA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA20: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EA24: jr          $ra
    // 0x8009EA28: lbu         $v0, 0x7077($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7077);
    return;
    // 0x8009EA28: lbu         $v0, 0x7077($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7077);
;}
RECOMP_FUNC void func_8009EA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009EA30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009EA34: jal         0x800DA298
    // 0x8009EA38: addiu       $a0, $zero, 0x3EC
    ctx->r4 = ADD32(0, 0X3EC);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x8009EA38: addiu       $a0, $zero, 0x3EC
    ctx->r4 = ADD32(0, 0X3EC);
    after_0:
    // 0x8009EA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009EA40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009EA44: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009EA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA4C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EA50: jr          $ra
    // 0x8009EA54: lbu         $v0, 0x7074($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7074);
    return;
    // 0x8009EA54: lbu         $v0, 0x7074($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7074);
;}
RECOMP_FUNC void func_8009EA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA58: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EA5C: jr          $ra
    // 0x8009EA60: lw          $v0, 0x7080($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7080);
    return;
    // 0x8009EA60: lw          $v0, 0x7080($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7080);
;}
RECOMP_FUNC void func_8009EA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA64: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EA68: jr          $ra
    // 0x8009EA6C: lh          $v0, 0x707C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X707C);
    return;
    // 0x8009EA6C: lh          $v0, 0x707C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X707C);
;}
RECOMP_FUNC void func_8009EA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA70: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EA74: jr          $ra
    // 0x8009EA78: lbu         $v0, 0x7076($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7076);
    return;
    // 0x8009EA78: lbu         $v0, 0x7076($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7076);
;}
RECOMP_FUNC void func_8009EA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA7C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EA80: jr          $ra
    // 0x8009EA84: lwc1        $f0, 0x7068($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7068);
    return;
    // 0x8009EA84: lwc1        $f0, 0x7068($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7068);
;}
RECOMP_FUNC void func_8009EA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA88: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EA8C: jr          $ra
    // 0x8009EA90: lwc1        $f0, 0x7070($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7070);
    return;
    // 0x8009EA90: lwc1        $f0, 0x7070($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7070);
;}
RECOMP_FUNC void func_8009EA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EA98: jr          $ra
    // 0x8009EA9C: swc1        $f12, 0x706C($at)
    MEM_W(0X706C, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x8009EA9C: swc1        $f12, 0x706C($at)
    MEM_W(0X706C, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009EAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EAA0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EAA4: jr          $ra
    // 0x8009EAA8: sb          $a0, 0x7077($at)
    MEM_B(0X7077, ctx->r1) = ctx->r4;
    return;
    // 0x8009EAA8: sb          $a0, 0x7077($at)
    MEM_B(0X7077, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8009EAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EAAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009EAB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009EAB4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8009EAB8: jal         0x800DA3B8
    // 0x8009EABC: addiu       $a0, $zero, 0x3EC
    ctx->r4 = ADD32(0, 0X3EC);
    func_800DA3B8(rdram, ctx);
        goto after_0;
    // 0x8009EABC: addiu       $a0, $zero, 0x3EC
    ctx->r4 = ADD32(0, 0X3EC);
    after_0:
    // 0x8009EAC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009EAC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009EAC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009EAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EAD0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EAD4: jr          $ra
    // 0x8009EAD8: sb          $a0, 0x7074($at)
    MEM_B(0X7074, ctx->r1) = ctx->r4;
    return;
    // 0x8009EAD8: sb          $a0, 0x7074($at)
    MEM_B(0X7074, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8009EADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EADC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EAE0: jr          $ra
    // 0x8009EAE4: sw          $a0, 0x7080($at)
    MEM_W(0X7080, ctx->r1) = ctx->r4;
    return;
    // 0x8009EAE4: sw          $a0, 0x7080($at)
    MEM_W(0X7080, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8009EAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EAE8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EAEC: jr          $ra
    // 0x8009EAF0: sh          $a0, 0x707C($at)
    MEM_H(0X707C, ctx->r1) = ctx->r4;
    return;
    // 0x8009EAF0: sh          $a0, 0x707C($at)
    MEM_H(0X707C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8009EAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EAF4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EAF8: jr          $ra
    // 0x8009EAFC: sb          $a0, 0x7076($at)
    MEM_B(0X7076, ctx->r1) = ctx->r4;
    return;
    // 0x8009EAFC: sb          $a0, 0x7076($at)
    MEM_B(0X7076, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8009EB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EB00: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EB04: jr          $ra
    // 0x8009EB08: swc1        $f12, 0x7068($at)
    MEM_W(0X7068, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x8009EB08: swc1        $f12, 0x7068($at)
    MEM_W(0X7068, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009EB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EB0C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EB10: jr          $ra
    // 0x8009EB14: swc1        $f12, 0x7044($at)
    MEM_W(0X7044, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x8009EB14: swc1        $f12, 0x7044($at)
    MEM_W(0X7044, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009EB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EB18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EB1C: jr          $ra
    // 0x8009EB20: sb          $a0, 0x7075($at)
    MEM_B(0X7075, ctx->r1) = ctx->r4;
    return;
    // 0x8009EB20: sb          $a0, 0x7075($at)
    MEM_B(0X7075, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8009EB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EB24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009EB28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009EB2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8009EB30: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8009EB34: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8009EB38: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EB3C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8009EB40: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8009EB44: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8009EB48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009EB4C: addiu       $v1, $v1, 0x7040
    ctx->r3 = ADD32(ctx->r3, 0X7040);
    // 0x8009EB50: addiu       $v0, $v0, 0x704C
    ctx->r2 = ADD32(ctx->r2, 0X704C);
L_8009EB54:
    // 0x8009EB54: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x8009EB58: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8009EB5C: bne         $v0, $v1, L_8009EB54
    if (ctx->r2 != ctx->r3) {
        // 0x8009EB60: sw          $t0, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r8;
            goto L_8009EB54;
    }
    // 0x8009EB60: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
    // 0x8009EB64: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EB68: addiu       $v0, $v0, 0x7040
    ctx->r2 = ADD32(ctx->r2, 0X7040);
    // 0x8009EB6C: lbu         $t1, 0x20($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X20);
    // 0x8009EB70: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8009EB74: jal         0x8009EC60
    // 0x8009EB78: sb          $t2, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r10;
    func_8009EC60(rdram, ctx);
        goto after_0;
    // 0x8009EB78: sb          $t2, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r10;
    after_0:
    // 0x8009EB7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009EB80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009EB84: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009EB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EB8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009EB90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009EB94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009EB98: jal         0x8009EC3C
    // 0x8009EB9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8009EC3C(rdram, ctx);
        goto after_0;
    // 0x8009EB9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009EBA0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EBA4: addiu       $v0, $v0, 0x7040
    ctx->r2 = ADD32(ctx->r2, 0X7040);
    // 0x8009EBA8: lbu         $t6, 0x20($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20);
    // 0x8009EBAC: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8009EBB0: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x8009EBB4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8009EBB8: jal         0x8009EC60
    // 0x8009EBBC: sb          $t7, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r15;
    func_8009EC60(rdram, ctx);
        goto after_1;
    // 0x8009EBBC: sb          $t7, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r15;
    after_1:
    // 0x8009EBC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009EBC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009EBC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009EBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EBD0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8009EBD4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EBD8: addiu       $v0, $v0, 0x704C
    ctx->r2 = ADD32(ctx->r2, 0X704C);
    // 0x8009EBDC: addiu       $v1, $v1, 0x7040
    ctx->r3 = ADD32(ctx->r3, 0X7040);
L_8009EBE0:
    // 0x8009EBE0: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x8009EBE4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8009EBE8: bne         $v1, $v0, L_8009EBE0
    if (ctx->r3 != ctx->r2) {
        // 0x8009EBEC: sw          $t6, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r14;
            goto L_8009EBE0;
    }
    // 0x8009EBEC: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x8009EBF0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EBF4: addiu       $v0, $v0, 0x7040
    ctx->r2 = ADD32(ctx->r2, 0X7040);
    // 0x8009EBF8: lbu         $t7, 0x20($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X20);
    // 0x8009EBFC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8009EC00: jr          $ra
    // 0x8009EC04: sb          $t8, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r24;
    return;
    // 0x8009EC04: sb          $t8, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_8009EC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EC08: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8009EC0C: addiu       $a2, $a2, 0x7040
    ctx->r6 = ADD32(ctx->r6, 0X7040);
    // 0x8009EC10: lh          $v1, 0x10($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X10);
    // 0x8009EC14: beql        $v1, $zero, L_8009EC34
    if (ctx->r3 == 0) {
            // 0x8009EC18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    static_3_8009EC34(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x8009EC18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8009EC1C: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8009EC20: lh          $t6, 0x12($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X12);
    // 0x8009EC24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009EC28: jr          $ra
    // 0x8009EC2C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    return;
    // 0x8009EC2C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_8009EC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EC30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009EC34: jr          $ra
    // 0x8009EC38: nop

    return;
    // 0x8009EC38: nop

;}
RECOMP_FUNC void func_8009EC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EC3C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EC40: sw          $zero, 0x7054($at)
    MEM_W(0X7054, ctx->r1) = 0;
    // 0x8009EC44: sw          $zero, 0x7050($at)
    MEM_W(0X7050, ctx->r1) = 0;
    // 0x8009EC48: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EC4C: sw          $zero, 0x7058($at)
    MEM_W(0X7058, ctx->r1) = 0;
    // 0x8009EC50: sw          $zero, 0x705C($at)
    MEM_W(0X705C, ctx->r1) = 0;
    // 0x8009EC54: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009EC58: jr          $ra
    // 0x8009EC5C: sb          $zero, 0x7060($at)
    MEM_B(0X7060, ctx->r1) = 0;
    return;
    // 0x8009EC5C: sb          $zero, 0x7060($at)
    MEM_B(0X7060, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8009EC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EC60: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EC64: addiu       $v0, $v0, 0x7040
    ctx->r2 = ADD32(ctx->r2, 0X7040);
    // 0x8009EC68: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8009EC6C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8009EC70: sh          $a0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r4;
    // 0x8009EC74: jr          $ra
    // 0x8009EC78: sh          $a1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r5;
    return;
    // 0x8009EC78: sh          $a1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_8009EC7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EC7C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009EC80: jr          $ra
    // 0x8009EC84: lbu         $v0, 0x7060($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7060);
    return;
    // 0x8009EC84: lbu         $v0, 0x7060($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7060);
;}
RECOMP_FUNC void func_8009EC88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EC88: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8009EC8C: lbu         $v1, 0x7060($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7060);
    // 0x8009EC90: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8009EC94: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x8009EC98: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8009EC9C: blez        $v1, L_8009ECE4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8009ECA0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8009ECE4;
    }
    // 0x8009ECA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009ECA4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8009ECA8: addiu       $a1, $a1, 0x7040
    ctx->r5 = ADD32(ctx->r5, 0X7040);
L_8009ECAC:
    // 0x8009ECAC: lh          $t6, 0x10($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X10);
    // 0x8009ECB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8009ECB4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8009ECB8: bne         $a0, $t6, L_8009ECDC
    if (ctx->r4 != ctx->r14) {
        // 0x8009ECBC: nop
    
            goto L_8009ECDC;
    }
    // 0x8009ECBC: nop

    // 0x8009ECC0: lh          $t7, 0x12($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X12);
    // 0x8009ECC4: bne         $s0, $t7, L_8009ECDC
    if (ctx->r16 != ctx->r15) {
        // 0x8009ECC8: nop
    
            goto L_8009ECDC;
    }
    // 0x8009ECC8: nop

    // 0x8009ECCC: sh          $a2, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r6;
    // 0x8009ECD0: sh          $a3, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r7;
    // 0x8009ECD4: b           L_8009ECE8
    // 0x8009ECD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8009ECE8;
    // 0x8009ECD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8009ECDC:
    // 0x8009ECDC: bne         $at, $zero, L_8009ECAC
    if (ctx->r1 != 0) {
        // 0x8009ECE0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8009ECAC;
    }
    // 0x8009ECE0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8009ECE4:
    // 0x8009ECE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009ECE8:
    // 0x8009ECE8: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x8009ECEC: jr          $ra
    // 0x8009ECF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8009ECF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8009ED00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009ED00: jr          $ra
    // 0x8009ED04: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    return;
    // 0x8009ED04: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
;}
RECOMP_FUNC void func_8009ED08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009ED08: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8009ED0C: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8009ED10: sub.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8009ED14: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8009ED18: jr          $ra
    // 0x8009ED1C: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    return;
    // 0x8009ED1C: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
;}
RECOMP_FUNC void func_8009ED20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009ED20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009ED24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009ED28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009ED2C: lw          $v0, 0x128($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X128);
    // 0x8009ED30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009ED34: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x8009ED38: lwc1        $f0, 0x60($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8009ED3C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x8009ED40: nop

    // 0x8009ED44: bc1fl       L_8009ED64
    if (!c1cs) {
        // 0x8009ED48: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_8009ED64;
    }
    goto skip_0;
    // 0x8009ED48: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_0:
    // 0x8009ED4C: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x8009ED50: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009ED54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009ED58: b           L_8009EE98
    // 0x8009ED5C: swc1        $f4, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->f4.u32l;
        goto L_8009EE98;
    // 0x8009ED5C: swc1        $f4, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->f4.u32l;
    // 0x8009ED60: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_8009ED64:
    // 0x8009ED64: nop

    // 0x8009ED68: bc1fl       L_8009EDB0
    if (!c1cs) {
        // 0x8009ED6C: lwc1        $f8, 0x44($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
            goto L_8009EDB0;
    }
    goto skip_1;
    // 0x8009ED6C: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    skip_1:
    // 0x8009ED70: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8009ED74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8009ED78: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x8009ED7C: nop

    // 0x8009ED80: bc1fl       L_8009EDB0
    if (!c1cs) {
        // 0x8009ED84: lwc1        $f8, 0x44($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
            goto L_8009EDB0;
    }
    goto skip_2;
    // 0x8009ED84: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    skip_2:
    // 0x8009ED88: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x8009ED8C: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x8009ED90: lwc1        $f12, 0x60($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8009ED94: lwc1        $f14, 0x40($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X40);
    // 0x8009ED98: jal         0x8009ED08
    // 0x8009ED9C: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    func_8009ED08(rdram, ctx);
        goto after_0;
    // 0x8009ED9C: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    after_0:
    // 0x8009EDA0: lw          $t8, 0x128($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X128);
    // 0x8009EDA4: b           L_8009EE98
    // 0x8009EDA8: swc1        $f0, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->f0.u32l;
        goto L_8009EE98;
    // 0x8009EDA8: swc1        $f0, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->f0.u32l;
    // 0x8009EDAC: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
L_8009EDB0:
    // 0x8009EDB0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8009EDB4: nop

    // 0x8009EDB8: bc1fl       L_8009EE00
    if (!c1cs) {
        // 0x8009EDBC: lwc1        $f16, 0x48($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
            goto L_8009EE00;
    }
    goto skip_3;
    // 0x8009EDBC: lwc1        $f16, 0x48($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
    skip_3:
    // 0x8009EDC0: lwc1        $f10, 0x48($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8009EDC4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8009EDC8: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x8009EDCC: nop

    // 0x8009EDD0: bc1fl       L_8009EE00
    if (!c1cs) {
        // 0x8009EDD4: lwc1        $f16, 0x48($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
            goto L_8009EE00;
    }
    goto skip_4;
    // 0x8009EDD4: lwc1        $f16, 0x48($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
    skip_4:
    // 0x8009EDD8: sw          $t9, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r25;
    // 0x8009EDDC: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x8009EDE0: lwc1        $f12, 0x60($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8009EDE4: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8009EDE8: jal         0x8009ED08
    // 0x8009EDEC: lw          $a2, 0x48($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X48);
    func_8009ED08(rdram, ctx);
        goto after_1;
    // 0x8009EDEC: lw          $a2, 0x48($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X48);
    after_1:
    // 0x8009EDF0: lw          $t0, 0x128($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X128);
    // 0x8009EDF4: b           L_8009EE98
    // 0x8009EDF8: swc1        $f0, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->f0.u32l;
        goto L_8009EE98;
    // 0x8009EDF8: swc1        $f0, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->f0.u32l;
    // 0x8009EDFC: lwc1        $f16, 0x48($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
L_8009EE00:
    // 0x8009EE00: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8009EE04: nop

    // 0x8009EE08: bc1fl       L_8009EE50
    if (!c1cs) {
        // 0x8009EE0C: lwc1        $f4, 0x4C($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
            goto L_8009EE50;
    }
    goto skip_5;
    // 0x8009EE0C: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    skip_5:
    // 0x8009EE10: lwc1        $f18, 0x4C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8009EE14: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8009EE18: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x8009EE1C: nop

    // 0x8009EE20: bc1fl       L_8009EE50
    if (!c1cs) {
        // 0x8009EE24: lwc1        $f4, 0x4C($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
            goto L_8009EE50;
    }
    goto skip_6;
    // 0x8009EE24: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    skip_6:
    // 0x8009EE28: sw          $t1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r9;
    // 0x8009EE2C: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x8009EE30: lwc1        $f12, 0x60($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8009EE34: lwc1        $f14, 0x48($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8009EE38: jal         0x8009ED08
    // 0x8009EE3C: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    func_8009ED08(rdram, ctx);
        goto after_2;
    // 0x8009EE3C: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    after_2:
    // 0x8009EE40: lw          $t2, 0x128($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X128);
    // 0x8009EE44: b           L_8009EE98
    // 0x8009EE48: swc1        $f0, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->f0.u32l;
        goto L_8009EE98;
    // 0x8009EE48: swc1        $f0, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->f0.u32l;
    // 0x8009EE4C: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
L_8009EE50:
    // 0x8009EE50: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8009EE54: nop

    // 0x8009EE58: bc1fl       L_8009EE9C
    if (!c1cs) {
        // 0x8009EE5C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8009EE9C;
    }
    goto skip_7;
    // 0x8009EE5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x8009EE60: lwc1        $f6, 0x50($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X50);
    // 0x8009EE64: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8009EE68: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x8009EE6C: nop

    // 0x8009EE70: bc1fl       L_8009EE9C
    if (!c1cs) {
        // 0x8009EE74: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8009EE9C;
    }
    goto skip_8;
    // 0x8009EE74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x8009EE78: sw          $t3, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r11;
    // 0x8009EE7C: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x8009EE80: lwc1        $f12, 0x60($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8009EE84: lwc1        $f14, 0x4C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8009EE88: jal         0x8009ED08
    // 0x8009EE8C: lw          $a2, 0x50($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X50);
    func_8009ED08(rdram, ctx);
        goto after_3;
    // 0x8009EE8C: lw          $a2, 0x50($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X50);
    after_3:
    // 0x8009EE90: lw          $t4, 0x128($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X128);
    // 0x8009EE94: swc1        $f0, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->f0.u32l;
L_8009EE98:
    // 0x8009EE98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009EE9C:
    // 0x8009EE9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009EEA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009EEA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009EEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EEAC: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009EEB0: jr          $ra
    // 0x8009EEB4: lwc1        $f0, 0x5C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X5C);
    return;
    // 0x8009EEB4: lwc1        $f0, 0x5C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X5C);
;}
RECOMP_FUNC void func_8009EEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EEB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009EEBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009EEC0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009EEC4: jal         0x8009C128
    // 0x8009EEC8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009EEC8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8009EECC: jal         0x800A4C48
    // 0x8009EED0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800A4C48(rdram, ctx);
        goto after_1;
    // 0x8009EED0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8009EED4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009EED8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009EEDC: lw          $t7, 0x128($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X128);
    // 0x8009EEE0: jal         0x800CAF00
    // 0x8009EEE4: lw          $a1, 0x5C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X5C);
    func_800CAF00(rdram, ctx);
        goto after_2;
    // 0x8009EEE4: lw          $a1, 0x5C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X5C);
    after_2:
    // 0x8009EEE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009EEEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009EEF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009EEF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EEF8: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009EEFC: jr          $ra
    // 0x8009EF00: lbu         $v0, 0x65($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X65);
    return;
    // 0x8009EF00: lbu         $v0, 0x65($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X65);
;}
RECOMP_FUNC void func_8009EF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EF04: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009EF08: jr          $ra
    // 0x8009EF0C: lwc1        $f0, 0x60($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X60);
    return;
    // 0x8009EF0C: lwc1        $f0, 0x60($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X60);
;}
RECOMP_FUNC void func_8009EF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EF10: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009EF14: jr          $ra
    // 0x8009EF18: lw          $v0, 0x3C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X3C);
    return;
    // 0x8009EF18: lw          $v0, 0x3C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X3C);
;}
RECOMP_FUNC void func_8009EF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EF1C: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009EF20: jr          $ra
    // 0x8009EF24: lwc1        $f0, 0x38($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X38);
    return;
    // 0x8009EF24: lwc1        $f0, 0x38($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X38);
;}
RECOMP_FUNC void func_8009EF28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EF28: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009EF2C: jr          $ra
    // 0x8009EF30: lwc1        $f0, 0x54($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X54);
    return;
    // 0x8009EF30: lwc1        $f0, 0x54($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X54);
;}
RECOMP_FUNC void func_8009EF34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EF34: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009EF38: jr          $ra
    // 0x8009EF3C: lwc1        $f0, 0x58($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X58);
    return;
    // 0x8009EF3C: lwc1        $f0, 0x58($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X58);
;}
RECOMP_FUNC void func_8009EF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009EF44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009EF48: jal         0x8001BBC8
    // 0x8009EF4C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    aligned4_memcpy(rdram, ctx);
        goto after_0;
    // 0x8009EF4C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_0:
    // 0x8009EF50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009EF54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009EF58: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009EF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EF60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009EF64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009EF68: lw          $v0, 0x128($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X128);
    // 0x8009EF6C: lbu         $t6, 0x66($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X66);
    // 0x8009EF70: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8009EF74: sb          $t7, 0x66($v0)
    MEM_B(0X66, ctx->r2) = ctx->r15;
    // 0x8009EF78: lw          $v0, 0x128($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X128);
    // 0x8009EF7C: lbu         $t8, 0x66($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X66);
    // 0x8009EF80: addiu       $a0, $v0, 0x38
    ctx->r4 = ADD32(ctx->r2, 0X38);
    // 0x8009EF84: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8009EF88: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8009EF8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009EF90: jal         0x8009EF40
    // 0x8009EF94: addu        $a1, $v0, $t9
    ctx->r5 = ADD32(ctx->r2, ctx->r25);
    func_8009EF40(rdram, ctx);
        goto after_0;
    // 0x8009EF94: addu        $a1, $v0, $t9
    ctx->r5 = ADD32(ctx->r2, ctx->r25);
    after_0:
    // 0x8009EF98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009EF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009EFA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009EFA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EFA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009EFAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009EFB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009EFB4: lw          $v0, 0x128($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X128);
    // 0x8009EFB8: lbu         $t7, 0x66($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X66);
    // 0x8009EFBC: addiu       $a1, $v0, 0x38
    ctx->r5 = ADD32(ctx->r2, 0X38);
    // 0x8009EFC0: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8009EFC4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8009EFC8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009EFCC: jal         0x8009EF40
    // 0x8009EFD0: addu        $a0, $v0, $t8
    ctx->r4 = ADD32(ctx->r2, ctx->r24);
    func_8009EF40(rdram, ctx);
        goto after_0;
    // 0x8009EFD0: addu        $a0, $v0, $t8
    ctx->r4 = ADD32(ctx->r2, ctx->r24);
    after_0:
    // 0x8009EFD4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8009EFD8: lw          $v0, 0x128($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X128);
    // 0x8009EFDC: lbu         $t0, 0x66($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X66);
    // 0x8009EFE0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8009EFE4: sb          $t1, 0x66($v0)
    MEM_B(0X66, ctx->r2) = ctx->r9;
    // 0x8009EFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009EFEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009EFF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009EFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EFF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009EFFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009F000: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009F004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009F008: lw          $a1, 0x128($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X128);
    // 0x8009F00C: jal         0x800919D0
    // 0x8009F010: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    func_800919D0(rdram, ctx);
        goto after_0;
    // 0x8009F010: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    after_0:
    // 0x8009F014: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x8009F018: lbu         $t6, 0x64($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X64);
    // 0x8009F01C: bnel        $t6, $zero, L_8009F058
    if (ctx->r14 != 0) {
        // 0x8009F020: sb          $zero, 0x67($v0)
        MEM_B(0X67, ctx->r2) = 0;
            goto L_8009F058;
    }
    goto skip_0;
    // 0x8009F020: sb          $zero, 0x67($v0)
    MEM_B(0X67, ctx->r2) = 0;
    skip_0:
    // 0x8009F024: lbu         $t7, 0x65($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X65);
    // 0x8009F028: bnel        $t7, $zero, L_8009F058
    if (ctx->r15 != 0) {
        // 0x8009F02C: sb          $zero, 0x67($v0)
        MEM_B(0X67, ctx->r2) = 0;
            goto L_8009F058;
    }
    goto skip_1;
    // 0x8009F02C: sb          $zero, 0x67($v0)
    MEM_B(0X67, ctx->r2) = 0;
    skip_1:
    // 0x8009F030: lbu         $t8, 0x67($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X67);
    // 0x8009F034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009F038: bnel        $t8, $zero, L_8009F058
    if (ctx->r24 != 0) {
        // 0x8009F03C: sb          $zero, 0x67($v0)
        MEM_B(0X67, ctx->r2) = 0;
            goto L_8009F058;
    }
    goto skip_2;
    // 0x8009F03C: sb          $zero, 0x67($v0)
    MEM_B(0X67, ctx->r2) = 0;
    skip_2:
    // 0x8009F040: jal         0x80091E80
    // 0x8009F044: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80091E80(rdram, ctx);
        goto after_1;
    // 0x8009F044: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x8009F048: bnel        $v0, $zero, L_8009F078
    if (ctx->r2 != 0) {
        // 0x8009F04C: lw          $v0, 0x128($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X128);
            goto L_8009F078;
    }
    goto skip_3;
    // 0x8009F04C: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    skip_3:
    // 0x8009F050: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x8009F054: sb          $zero, 0x67($v0)
    MEM_B(0X67, ctx->r2) = 0;
L_8009F058:
    // 0x8009F058: lw          $t9, 0x128($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X128);
    // 0x8009F05C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F060: nop

    // 0x8009F064: swc1        $f4, 0x58($t9)
    MEM_W(0X58, ctx->r25) = ctx->f4.u32l;
    // 0x8009F068: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x8009F06C: lwc1        $f6, 0x58($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X58);
    // 0x8009F070: swc1        $f6, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f6.u32l;
    // 0x8009F074: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
L_8009F078:
    // 0x8009F078: lwc1        $f0, 0x58($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X58);
    // 0x8009F07C: lwc1        $f2, 0x54($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X54);
    // 0x8009F080: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8009F084: nop

    // 0x8009F088: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8009F08C: jal         0x8002DCA0
    // 0x8009F090: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x8009F090: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x8009F094: lw          $t0, 0x128($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X128);
    // 0x8009F098: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F09C: swc1        $f0, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->f0.u32l;
    // 0x8009F0A0: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x8009F0A4: lwc1        $f2, 0x60($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8009F0A8: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x8009F0AC: nop

    // 0x8009F0B0: bc1tl       L_8009F0DC
    if (c1cs) {
        // 0x8009F0B4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8009F0DC;
    }
    goto skip_4;
    // 0x8009F0B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_4:
    // 0x8009F0B8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8009F0BC: lwc1        $f12, 0x58($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X58);
    // 0x8009F0C0: jal         0x80013B70
    // 0x8009F0C4: lwc1        $f14, 0x54($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X54);
    func_80013B70(rdram, ctx);
        goto after_3;
    // 0x8009F0C4: lwc1        $f14, 0x54($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X54);
    after_3:
    // 0x8009F0C8: lw          $t1, 0x128($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X128);
    // 0x8009F0CC: swc1        $f0, 0x5C($t1)
    MEM_W(0X5C, ctx->r9) = ctx->f0.u32l;
    // 0x8009F0D0: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x8009F0D4: lwc1        $f2, 0x60($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8009F0D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8009F0DC:
    // 0x8009F0DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8009F0E0: nop

    // 0x8009F0E4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8009F0E8: nop

    // 0x8009F0EC: bc1f        L_8009F0F8
    if (!c1cs) {
        // 0x8009F0F0: nop
    
            goto L_8009F0F8;
    }
    // 0x8009F0F0: nop

    // 0x8009F0F4: swc1        $f0, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f0.u32l;
L_8009F0F8:
    // 0x8009F0F8: jal         0x8009ED20
    // 0x8009F0FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009ED20(rdram, ctx);
        goto after_4;
    // 0x8009F0FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8009F100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F104: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009F108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009F10C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009F114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009F118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F11C: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009F120: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F124: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009F128: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x8009F12C: lw          $t7, 0x128($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X128);
    // 0x8009F130: sb          $zero, 0x65($t7)
    MEM_B(0X65, ctx->r15) = 0;
    // 0x8009F134: lw          $t8, 0x128($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X128);
    // 0x8009F138: swc1        $f4, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->f4.u32l;
    // 0x8009F13C: lw          $v0, 0x128($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X128);
    // 0x8009F140: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8009F144: swc1        $f0, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f0.u32l;
    // 0x8009F148: lw          $t9, 0x128($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X128);
    // 0x8009F14C: swc1        $f0, 0x60($t9)
    MEM_W(0X60, ctx->r25) = ctx->f0.u32l;
    // 0x8009F150: lw          $t0, 0x128($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X128);
    // 0x8009F154: swc1        $f0, 0x58($t0)
    MEM_W(0X58, ctx->r8) = ctx->f0.u32l;
    // 0x8009F158: lw          $t1, 0x128($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X128);
    // 0x8009F15C: swc1        $f0, 0x54($t1)
    MEM_W(0X54, ctx->r9) = ctx->f0.u32l;
    // 0x8009F160: lw          $t3, 0x128($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X128);
    // 0x8009F164: sb          $t2, 0x67($t3)
    MEM_B(0X67, ctx->r11) = ctx->r10;
    // 0x8009F168: lw          $t4, 0x128($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X128);
    // 0x8009F16C: sw          $zero, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = 0;
    // 0x8009F170: lw          $t5, 0x128($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X128);
    // 0x8009F174: jal         0x8009F1E0
    // 0x8009F178: sb          $zero, 0x66($t5)
    MEM_B(0X66, ctx->r13) = 0;
    func_8009F1E0(rdram, ctx);
        goto after_0;
    // 0x8009F178: sb          $zero, 0x66($t5)
    MEM_B(0X66, ctx->r13) = 0;
    after_0:
    // 0x8009F17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009F184: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009F18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F18C: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009F190: jr          $ra
    // 0x8009F194: sb          $a1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r5;
    return;
    // 0x8009F194: sb          $a1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009F198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F198: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009F19C: jr          $ra
    // 0x8009F1A0: sb          $a1, 0x65($t6)
    MEM_B(0X65, ctx->r14) = ctx->r5;
    return;
    // 0x8009F1A0: sb          $a1, 0x65($t6)
    MEM_B(0X65, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009F1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F1A4: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009F1A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8009F1AC: lbu         $t7, 0x64($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X64);
    // 0x8009F1B0: beq         $t7, $zero, L_8009F1C0
    if (ctx->r15 == 0) {
            // 0x8009F1B4: nop

    func_8009F1C0(rdram, ctx);
    return;
    }
    // 0x8009F1B4: nop

    // 0x8009F1B8: jr          $ra
    // 0x8009F1BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8009F1BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8009F1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F1C0: jr          $ra
    // 0x8009F1C4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8009F1C4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8009F1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F1C8: lw          $t6, 0x128($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X128);
    // 0x8009F1CC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009F1D0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8009F1D4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8009F1D8: jr          $ra
    // 0x8009F1DC: swc1        $f12, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f12.u32l;
    return;
    // 0x8009F1DC: swc1        $f12, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009F1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F1E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009F1E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009F1E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009F1EC: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x8009F1F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009F1F4: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8009F1F8: jal         0x8009F1C8
    // 0x8009F1FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_0;
    // 0x8009F1FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8009F200: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x8009F204: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8009F208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009F20C: jal         0x8009F1C8
    // 0x8009F210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009F1C8(rdram, ctx);
        goto after_1;
    // 0x8009F210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8009F214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009F218: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009F21C: jal         0x8009F1C8
    // 0x8009F220: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_2;
    // 0x8009F220: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_2:
    // 0x8009F224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009F228: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009F22C: jal         0x8009F1C8
    // 0x8009F230: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_3;
    // 0x8009F230: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    after_3:
    // 0x8009F234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009F238: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8009F23C: jal         0x8009F1C8
    // 0x8009F240: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x8009F240: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x8009F244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F248: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009F24C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009F250: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009F258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009F25C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F260: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x8009F264: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009F268: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8009F26C: jal         0x8009F1C8
    // 0x8009F270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_0;
    // 0x8009F270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8009F274: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009F278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009F27C: jal         0x8009F1C8
    // 0x8009F280: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_1;
    // 0x8009F280: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_1:
    // 0x8009F284: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009F288: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009F28C: jal         0x8009F1C8
    // 0x8009F290: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_2;
    // 0x8009F290: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
    // 0x8009F294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009F29C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009F2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F2A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009F2A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F2AC: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x8009F2B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009F2B4: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8009F2B8: jal         0x8009F1C8
    // 0x8009F2BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_0;
    // 0x8009F2BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8009F2C0: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x8009F2C4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8009F2C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009F2CC: jal         0x8009F1C8
    // 0x8009F2D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009F1C8(rdram, ctx);
        goto after_1;
    // 0x8009F2D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8009F2D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009F2D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009F2DC: jal         0x8009F1C8
    // 0x8009F2E0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_2;
    // 0x8009F2E0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
    // 0x8009F2E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009F2EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009F300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F300: jr          $ra
    // 0x8009F304: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x8009F304: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_8009F308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F308: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009F30C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F310: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8009F314: jal         0x8009C128
    // 0x8009F318: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009F318: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8009F31C: jal         0x800A4C48
    // 0x8009F320: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800A4C48(rdram, ctx);
        goto after_1;
    // 0x8009F320: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x8009F324: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009F328: jal         0x800CA7E4
    // 0x8009F32C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800CA7E4(rdram, ctx);
        goto after_2;
    // 0x8009F32C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x8009F330: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8009F334: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8009F338: jal         0x800F1E6C
    // 0x8009F33C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800F1E6C(rdram, ctx);
        goto after_3;
    // 0x8009F33C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x8009F340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F344: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009F348: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8009F34C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009F354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F354: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009F358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F35C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8009F360: jal         0x80095738
    // 0x8009F364: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x8009F364: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x8009F368: beq         $v0, $zero, L_8009F378
    if (ctx->r2 == 0) {
        // 0x8009F36C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8009F378;
    }
    // 0x8009F36C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009F370: b           L_8009F3AC
    // 0x8009F374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009F3AC;
    // 0x8009F374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009F378:
    // 0x8009F378: jal         0x80095760
    // 0x8009F37C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095760(rdram, ctx);
        goto after_1;
    // 0x8009F37C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x8009F380: jal         0x80084700
    // 0x8009F384: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _badata_entrypoint_24(rdram, ctx);
        goto after_2;
    // 0x8009F384: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8009F388: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009F38C: jal         0x8009E6F8
    // 0x8009F390: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8009E6F8(rdram, ctx);
        goto after_3;
    // 0x8009F390: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8009F394: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F398: beql        $v0, $v1, L_8009F3AC
    if (ctx->r2 == ctx->r3) {
        // 0x8009F39C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8009F3AC;
    }
    goto skip_0;
    // 0x8009F39C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8009F3A0: b           L_8009F3AC
    // 0x8009F3A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8009F3AC;
    // 0x8009F3A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8009F3A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009F3AC:
    // 0x8009F3AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F3B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009F3B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009F3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F3BC: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x8009F3C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F3C4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8009F3C8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8009F3CC: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8009F3D0: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x8009F3D4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8009F3D8: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8009F3DC: bc1t        L_8009F3F0
    if (c1cs) {
        // 0x8009F3E0: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_8009F3F0;
    }
    // 0x8009F3E0: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x8009F3E4: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8009F3E8: nop

    // 0x8009F3EC: bc1f        L_8009F430
    if (!c1cs) {
        // 0x8009F3F0: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8009F430;
    }
L_8009F3F0:
    // 0x8009F3F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009F3F4: lwc1        $f18, 0x53A0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X53A0);
    // 0x8009F3F8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8009F3FC: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8009F400: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x8009F404: mul.s       $f6, $f12, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x8009F408: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x8009F40C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x8009F410: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8009F414: nop

    // 0x8009F418: bc1t        L_8009F3F0
    if (c1cs) {
        // 0x8009F41C: nop
    
            goto L_8009F3F0;
    }
    // 0x8009F41C: nop

    // 0x8009F420: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8009F424: nop

    // 0x8009F428: bc1t        L_8009F3F0
    if (c1cs) {
        // 0x8009F42C: nop
    
            goto L_8009F3F0;
    }
    // 0x8009F42C: nop

L_8009F430:
    // 0x8009F430: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8009F434: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8009F438: jr          $ra
    // 0x8009F43C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8009F43C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_8009F440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F440: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8009F444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F448: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8009F44C: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8009F450: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8009F454: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x8009F458: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x8009F45C: jal         0x800A30B4
    // 0x8009F460: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800A30B4(rdram, ctx);
        goto after_0;
    // 0x8009F460: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x8009F464: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8009F468: jal         0x800F4200
    // 0x8009F46C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_800F4200(rdram, ctx);
        goto after_1;
    // 0x8009F46C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x8009F470: jal         0x80019CD4
    // 0x8009F474: nop

    func_80019CD4(rdram, ctx);
        goto after_2;
    // 0x8009F474: nop

    after_2:
    // 0x8009F478: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8009F47C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x8009F480: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8009F484: jal         0x8001980C
    // 0x8009F488: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8001980C(rdram, ctx);
        goto after_3;
    // 0x8009F488: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x8009F48C: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x8009F490: jal         0x800193C4
    // 0x8009F494: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_800193C4(rdram, ctx);
        goto after_4;
    // 0x8009F494: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x8009F498: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8009F49C: jal         0x800EF04C
    // 0x8009F4A0: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800EF04C(rdram, ctx);
        goto after_5;
    // 0x8009F4A0: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_5:
    // 0x8009F4A4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8009F4A8: jal         0x800EF04C
    // 0x8009F4AC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800EF04C(rdram, ctx);
        goto after_6;
    // 0x8009F4AC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_6:
    // 0x8009F4B0: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x8009F4B4: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8009F4B8: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x8009F4BC: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8009F4C0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8009F4C4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8009F4C8: nop

    // 0x8009F4CC: bc1t        L_8009F4E8
    if (c1cs) {
        // 0x8009F4D0: nop
    
            goto L_8009F4E8;
    }
    // 0x8009F4D0: nop

    // 0x8009F4D4: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009F4D8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8009F4DC: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8009F4E0: bc1fl       L_8009F4F4
    if (!c1cs) {
        // 0x8009F4E4: lwc1        $f6, 0x0($v1)
        ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
            goto L_8009F4F4;
    }
    goto skip_0;
    // 0x8009F4E4: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    skip_0:
L_8009F4E8:
    // 0x8009F4E8: b           L_8009F668
    // 0x8009F4EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009F668;
    // 0x8009F4EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009F4F0: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
L_8009F4F4:
    // 0x8009F4F4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F4F8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8009F4FC: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8009F500: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009F504: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x8009F508: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8009F50C: bc1t        L_8009F524
    if (c1cs) {
        // 0x8009F510: nop
    
            goto L_8009F524;
    }
    // 0x8009F510: nop

    // 0x8009F514: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x8009F518: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8009F51C: bc1fl       L_8009F530
    if (!c1cs) {
        // 0x8009F520: neg.s       $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
            goto L_8009F530;
    }
    goto skip_1;
    // 0x8009F520: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    skip_1:
L_8009F524:
    // 0x8009F524: b           L_8009F668
    // 0x8009F528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009F668;
    // 0x8009F528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009F52C: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
L_8009F530:
    // 0x8009F530: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8009F534: nop

    // 0x8009F538: bc1fl       L_8009F54C
    if (!c1cs) {
        // 0x8009F53C: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_8009F54C;
    }
    goto skip_2;
    // 0x8009F53C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_2:
    // 0x8009F540: b           L_8009F54C
    // 0x8009F544: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_8009F54C;
    // 0x8009F544: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8009F548: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_8009F54C:
    // 0x8009F54C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8009F550: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8009F554: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8009F558: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8009F55C: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8009F560: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x8009F564: nop

    // 0x8009F568: bc1t        L_8009F580
    if (c1cs) {
        // 0x8009F56C: nop
    
            goto L_8009F580;
    }
    // 0x8009F56C: nop

    // 0x8009F570: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x8009F574: nop

    // 0x8009F578: bc1fl       L_8009F58C
    if (!c1cs) {
        // 0x8009F57C: neg.s       $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
            goto L_8009F58C;
    }
    goto skip_3;
    // 0x8009F57C: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    skip_3:
L_8009F580:
    // 0x8009F580: b           L_8009F668
    // 0x8009F584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009F668;
    // 0x8009F584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009F588: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
L_8009F58C:
    // 0x8009F58C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8009F590: nop

    // 0x8009F594: bc1fl       L_8009F5A8
    if (!c1cs) {
        // 0x8009F598: swc1        $f2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
            goto L_8009F5A8;
    }
    goto skip_4;
    // 0x8009F598: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    skip_4:
    // 0x8009F59C: b           L_8009F5A8
    // 0x8009F5A0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
        goto L_8009F5A8;
    // 0x8009F5A0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8009F5A4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_8009F5A8:
    // 0x8009F5A8: jal         0x800D8FF8
    // 0x8009F5AC: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_7;
    // 0x8009F5AC: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_7:
    // 0x8009F5B0: lwc1        $f18, 0x84($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8009F5B4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009F5B8: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8009F5BC: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8009F5C0: jal         0x800F1660
    // 0x8009F5C4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_800F1660(rdram, ctx);
        goto after_8;
    // 0x8009F5C4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x8009F5C8: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009F5CC: beq         $v0, $zero, L_8009F600
    if (ctx->r2 == 0) {
        // 0x8009F5D0: lwc1        $f14, 0x28($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
            goto L_8009F600;
    }
    // 0x8009F5D0: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009F5D4: jal         0x800F0DC0
    // 0x8009F5D8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    func_800F0DC0(rdram, ctx);
        goto after_9;
    // 0x8009F5D8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x8009F5DC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F5E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8009F5E4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8009F5E8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8009F5EC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8009F5F0: jal         0x800EFA4C
    // 0x8009F5F4: nop

    func_800EFA4C(rdram, ctx);
        goto after_10;
    // 0x8009F5F4: nop

    after_10:
    // 0x8009F5F8: b           L_8009F628
    // 0x8009F5FC: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
        goto L_8009F628;
    // 0x8009F5FC: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
L_8009F600:
    // 0x8009F600: jal         0x800F0DC0
    // 0x8009F604: nop

    func_800F0DC0(rdram, ctx);
        goto after_11;
    // 0x8009F604: nop

    after_11:
    // 0x8009F608: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F60C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009F610: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8009F614: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8009F618: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8009F61C: jal         0x800EFA4C
    // 0x8009F620: nop

    func_800EFA4C(rdram, ctx);
        goto after_12;
    // 0x8009F620: nop

    after_12:
    // 0x8009F624: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
L_8009F628:
    // 0x8009F628: jal         0x800EF04C
    // 0x8009F62C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EF04C(rdram, ctx);
        goto after_13;
    // 0x8009F62C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_13:
    // 0x8009F630: jal         0x80019CD4
    // 0x8009F634: nop

    func_80019CD4(rdram, ctx);
        goto after_14;
    // 0x8009F634: nop

    after_14:
    // 0x8009F638: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8009F63C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x8009F640: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8009F644: jal         0x80019750
    // 0x8009F648: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019750(rdram, ctx);
        goto after_15;
    // 0x8009F648: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x8009F64C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8009F650: jal         0x800193C4
    // 0x8009F654: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800193C4(rdram, ctx);
        goto after_16;
    // 0x8009F654: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_16:
    // 0x8009F658: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8009F65C: jal         0x800F4648
    // 0x8009F660: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_800F4648(rdram, ctx);
        goto after_17;
    // 0x8009F660: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_17:
    // 0x8009F664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8009F668:
    // 0x8009F668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F66C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8009F670: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009F678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F678: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8009F67C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F680: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8009F684: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8009F688: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8009F68C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8009F690: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x8009F694: jal         0x800A30B4
    // 0x8009F698: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800A30B4(rdram, ctx);
        goto after_0;
    // 0x8009F698: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x8009F69C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8009F6A0: jal         0x800F4200
    // 0x8009F6A4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800F4200(rdram, ctx);
        goto after_1;
    // 0x8009F6A4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_1:
    // 0x8009F6A8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8009F6AC: jal         0x800EF04C
    // 0x8009F6B0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x8009F6B0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_2:
    // 0x8009F6B4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8009F6B8: jal         0x800EF04C
    // 0x8009F6BC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x8009F6BC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_3:
    // 0x8009F6C0: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x8009F6C4: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8009F6C8: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x8009F6CC: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009F6D0: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009F6D4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8009F6D8: nop

    // 0x8009F6DC: bc1t        L_8009F6F8
    if (c1cs) {
        // 0x8009F6E0: nop
    
            goto L_8009F6F8;
    }
    // 0x8009F6E0: nop

    // 0x8009F6E4: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8009F6E8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8009F6EC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8009F6F0: bc1fl       L_8009F704
    if (!c1cs) {
        // 0x8009F6F4: lwc1        $f6, 0x0($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8009F704;
    }
    goto skip_0;
    // 0x8009F6F4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    skip_0:
L_8009F6F8:
    // 0x8009F6F8: b           L_8009F850
    // 0x8009F6FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009F850;
    // 0x8009F6FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009F700: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
L_8009F704:
    // 0x8009F704: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F708: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8009F70C: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8009F710: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009F714: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x8009F718: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8009F71C: bc1t        L_8009F734
    if (c1cs) {
        // 0x8009F720: nop
    
            goto L_8009F734;
    }
    // 0x8009F720: nop

    // 0x8009F724: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x8009F728: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8009F72C: bc1fl       L_8009F740
    if (!c1cs) {
        // 0x8009F730: neg.s       $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
            goto L_8009F740;
    }
    goto skip_1;
    // 0x8009F730: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    skip_1:
L_8009F734:
    // 0x8009F734: b           L_8009F850
    // 0x8009F738: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009F850;
    // 0x8009F738: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009F73C: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
L_8009F740:
    // 0x8009F740: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8009F744: nop

    // 0x8009F748: bc1fl       L_8009F75C
    if (!c1cs) {
        // 0x8009F74C: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_8009F75C;
    }
    goto skip_2;
    // 0x8009F74C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_2:
    // 0x8009F750: b           L_8009F75C
    // 0x8009F754: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_8009F75C;
    // 0x8009F754: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8009F758: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_8009F75C:
    // 0x8009F75C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8009F760: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8009F764: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8009F768: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8009F76C: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8009F770: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x8009F774: nop

    // 0x8009F778: bc1t        L_8009F790
    if (c1cs) {
        // 0x8009F77C: nop
    
            goto L_8009F790;
    }
    // 0x8009F77C: nop

    // 0x8009F780: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x8009F784: nop

    // 0x8009F788: bc1fl       L_8009F79C
    if (!c1cs) {
        // 0x8009F78C: neg.s       $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
            goto L_8009F79C;
    }
    goto skip_3;
    // 0x8009F78C: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    skip_3:
L_8009F790:
    // 0x8009F790: b           L_8009F850
    // 0x8009F794: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009F850;
    // 0x8009F794: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009F798: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
L_8009F79C:
    // 0x8009F79C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8009F7A0: nop

    // 0x8009F7A4: bc1fl       L_8009F7B8
    if (!c1cs) {
        // 0x8009F7A8: swc1        $f2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
            goto L_8009F7B8;
    }
    goto skip_4;
    // 0x8009F7A8: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    skip_4:
    // 0x8009F7AC: b           L_8009F7B8
    // 0x8009F7B0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_8009F7B8;
    // 0x8009F7B0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8009F7B4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
L_8009F7B8:
    // 0x8009F7B8: jal         0x800D8FF8
    // 0x8009F7BC: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x8009F7BC: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x8009F7C0: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8009F7C4: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8009F7C8: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009F7CC: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8009F7D0: jal         0x800F1660
    // 0x8009F7D4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_800F1660(rdram, ctx);
        goto after_5;
    // 0x8009F7D4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x8009F7D8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8009F7DC: beq         $v0, $zero, L_8009F810
    if (ctx->r2 == 0) {
        // 0x8009F7E0: lwc1        $f14, 0x24($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
            goto L_8009F810;
    }
    // 0x8009F7E0: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009F7E4: jal         0x800F0DC0
    // 0x8009F7E8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    func_800F0DC0(rdram, ctx);
        goto after_6;
    // 0x8009F7E8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    after_6:
    // 0x8009F7EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F7F0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8009F7F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8009F7F8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8009F7FC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8009F800: jal         0x800EFA4C
    // 0x8009F804: nop

    func_800EFA4C(rdram, ctx);
        goto after_7;
    // 0x8009F804: nop

    after_7:
    // 0x8009F808: b           L_8009F838
    // 0x8009F80C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
        goto L_8009F838;
    // 0x8009F80C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
L_8009F810:
    // 0x8009F810: jal         0x800F0DC0
    // 0x8009F814: nop

    func_800F0DC0(rdram, ctx);
        goto after_8;
    // 0x8009F814: nop

    after_8:
    // 0x8009F818: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F81C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009F820: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8009F824: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8009F828: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8009F82C: jal         0x800EFA4C
    // 0x8009F830: nop

    func_800EFA4C(rdram, ctx);
        goto after_9;
    // 0x8009F830: nop

    after_9:
    // 0x8009F834: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
L_8009F838:
    // 0x8009F838: jal         0x800EF04C
    // 0x8009F83C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800EF04C(rdram, ctx);
        goto after_10;
    // 0x8009F83C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_10:
    // 0x8009F840: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8009F844: jal         0x800F4648
    // 0x8009F848: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800F4648(rdram, ctx);
        goto after_11;
    // 0x8009F848: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_11:
    // 0x8009F84C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8009F850:
    // 0x8009F850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F854: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8009F858: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009F860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F860: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8009F864: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8009F868: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8009F86C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009F870: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8009F874: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8009F878: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8009F87C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x8009F880: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x8009F884: jal         0x800A3148
    // 0x8009F888: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_800A3148(rdram, ctx);
        goto after_0;
    // 0x8009F888: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x8009F88C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8009F890: jal         0x800F4200
    // 0x8009F894: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800F4200(rdram, ctx);
        goto after_1;
    // 0x8009F894: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x8009F898: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8009F89C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009F8A0: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8009F8A4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8009F8A8: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8009F8AC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8009F8B0: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8009F8B4: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8009F8B8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8009F8BC: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8009F8C0: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009F8C4: add.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8009F8C8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8009F8CC: add.s       $f4, $f2, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f20.fl;
    // 0x8009F8D0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8009F8D4: nop

    // 0x8009F8D8: bc1fl       L_8009F8EC
    if (!c1cs) {
        // 0x8009F8DC: add.s       $f10, $f2, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
            goto L_8009F8EC;
    }
    goto skip_0;
    // 0x8009F8DC: add.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
    skip_0:
    // 0x8009F8E0: b           L_8009FA0C
    // 0x8009F8E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009FA0C;
    // 0x8009F8E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009F8E8: add.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
L_8009F8EC:
    // 0x8009F8EC: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009F8F0: sub.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x8009F8F4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8009F8F8: nop

    // 0x8009F8FC: bc1fl       L_8009F910
    if (!c1cs) {
        // 0x8009F900: lwc1        $f4, 0x0($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8009F910;
    }
    goto skip_1;
    // 0x8009F900: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    skip_1:
    // 0x8009F904: b           L_8009FA0C
    // 0x8009F908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009FA0C;
    // 0x8009F908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009F90C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
L_8009F910:
    // 0x8009F910: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8009F914: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8009F918: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8009F91C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8009F920: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8009F924: sub.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8009F928: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8009F92C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8009F930: jal         0x800EFA4C
    // 0x8009F934: nop

    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x8009F934: nop

    after_2:
    // 0x8009F938: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8009F93C: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8009F940: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009F944: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8009F948: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8009F94C: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8009F950: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8009F954: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8009F958: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8009F95C: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x8009F960: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8009F964: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8009F968: add.s       $f20, $f16, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8009F96C: c.lt.s      $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl < ctx->f20.fl;
    // 0x8009F970: nop

    // 0x8009F974: bc1f        L_8009F984
    if (!c1cs) {
        // 0x8009F978: nop
    
            goto L_8009F984;
    }
    // 0x8009F978: nop

    // 0x8009F97C: b           L_8009FA0C
    // 0x8009F980: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009FA0C;
    // 0x8009F980: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009F984:
    // 0x8009F984: jal         0x8002DCA0
    // 0x8009F988: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x8009F988: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x8009F98C: jal         0x800D8FF8
    // 0x8009F990: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x8009F990: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x8009F994: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8009F998: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8009F99C: mul.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8009F9A0: jal         0x800F13F0
    // 0x8009F9A4: sub.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f20.fl;
    func_800F13F0(rdram, ctx);
        goto after_5;
    // 0x8009F9A4: sub.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f20.fl;
    after_5:
    // 0x8009F9A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F9AC: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x8009F9B0: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x8009F9B4: nop

    // 0x8009F9B8: bc1fl       L_8009F9E8
    if (!c1cs) {
        // 0x8009F9BC: addiu       $a0, $sp, 0x34
        ctx->r4 = ADD32(ctx->r29, 0X34);
            goto L_8009F9E8;
    }
    goto skip_2;
    // 0x8009F9BC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    skip_2:
    // 0x8009F9C0: jal         0x800DC0C0
    // 0x8009F9C4: nop

    func_800DC0C0(rdram, ctx);
        goto after_6;
    // 0x8009F9C4: nop

    after_6:
    // 0x8009F9C8: jal         0x800DC0C0
    // 0x8009F9CC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800DC0C0(rdram, ctx);
        goto after_7;
    // 0x8009F9CC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_7:
    // 0x8009F9D0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8009F9D4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8009F9D8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8009F9DC: jal         0x800EFA4C
    // 0x8009F9E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800EFA4C(rdram, ctx);
        goto after_8;
    // 0x8009F9E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_8:
    // 0x8009F9E4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
L_8009F9E8:
    // 0x8009F9E8: jal         0x800EF368
    // 0x8009F9EC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_800EF368(rdram, ctx);
        goto after_9;
    // 0x8009F9EC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_9:
    // 0x8009F9F0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8009F9F4: jal         0x800EF04C
    // 0x8009F9F8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EF04C(rdram, ctx);
        goto after_10;
    // 0x8009F9F8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_10:
    // 0x8009F9FC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8009FA00: jal         0x800F4648
    // 0x8009FA04: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800F4648(rdram, ctx);
        goto after_11;
    // 0x8009FA04: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_11:
    // 0x8009FA08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8009FA0C:
    // 0x8009FA0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FA10: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8009FA14: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8009FA18: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FA20: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8009FA24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009FA28: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8009FA2C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8009FA30: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8009FA34: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x8009FA38: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x8009FA3C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009FA40: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8009FA44: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x8009FA48: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8009FA4C: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8009FA50: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8009FA54: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8009FA58: jal         0x800EFA4C
    // 0x8009FA5C: nop

    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x8009FA5C: nop

    after_0:
    // 0x8009FA60: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8009FA64: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8009FA68: jal         0x800A3200
    // 0x8009FA6C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_800A3200(rdram, ctx);
        goto after_1;
    // 0x8009FA6C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x8009FA70: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8009FA74: jal         0x800F4200
    // 0x8009FA78: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800F4200(rdram, ctx);
        goto after_2;
    // 0x8009FA78: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_2:
    // 0x8009FA7C: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8009FA80: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8009FA84: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8009FA88: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8009FA8C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8009FA90: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8009FA94: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8009FA98: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8009FA9C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8009FAA0: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8009FAA4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009FAA8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8009FAAC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8009FAB0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8009FAB4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8009FAB8: jal         0x800EFA4C
    // 0x8009FABC: nop

    func_800EFA4C(rdram, ctx);
        goto after_3;
    // 0x8009FABC: nop

    after_3:
    // 0x8009FAC0: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009FAC4: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8009FAC8: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8009FACC: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8009FAD0: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8009FAD4: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8009FAD8: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8009FADC: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8009FAE0: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8009FAE4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x8009FAE8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8009FAEC: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8009FAF0: add.s       $f20, $f16, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8009FAF4: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x8009FAF8: nop

    // 0x8009FAFC: bc1f        L_8009FB0C
    if (!c1cs) {
        // 0x8009FB00: nop
    
            goto L_8009FB0C;
    }
    // 0x8009FB00: nop

    // 0x8009FB04: b           L_8009FB9C
    // 0x8009FB08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009FB9C;
    // 0x8009FB08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009FB0C:
    // 0x8009FB0C: jal         0x8002DCA0
    // 0x8009FB10: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_4;
    // 0x8009FB10: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x8009FB14: jal         0x800D8FF8
    // 0x8009FB18: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800D8FF8(rdram, ctx);
        goto after_5;
    // 0x8009FB18: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x8009FB1C: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8009FB20: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8009FB24: mul.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8009FB28: jal         0x800F13F0
    // 0x8009FB2C: sub.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f20.fl;
    func_800F13F0(rdram, ctx);
        goto after_6;
    // 0x8009FB2C: sub.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f20.fl;
    after_6:
    // 0x8009FB30: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009FB34: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x8009FB38: c.eq.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl == ctx->f10.fl;
    // 0x8009FB3C: nop

    // 0x8009FB40: bc1fl       L_8009FB78
    if (!c1cs) {
        // 0x8009FB44: addiu       $a0, $sp, 0x40
        ctx->r4 = ADD32(ctx->r29, 0X40);
            goto L_8009FB78;
    }
    goto skip_0;
    // 0x8009FB44: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    skip_0:
    // 0x8009FB48: jal         0x800DC0C0
    // 0x8009FB4C: nop

    func_800DC0C0(rdram, ctx);
        goto after_7;
    // 0x8009FB4C: nop

    after_7:
    // 0x8009FB50: jal         0x800DC0C0
    // 0x8009FB54: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800DC0C0(rdram, ctx);
        goto after_8;
    // 0x8009FB54: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_8:
    // 0x8009FB58: jal         0x800DC0C0
    // 0x8009FB5C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_800DC0C0(rdram, ctx);
        goto after_9;
    // 0x8009FB5C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x8009FB60: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8009FB64: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8009FB68: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8009FB6C: jal         0x800EFA4C
    // 0x8009FB70: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800EFA4C(rdram, ctx);
        goto after_10;
    // 0x8009FB70: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_10:
    // 0x8009FB74: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
L_8009FB78:
    // 0x8009FB78: jal         0x800EF368
    // 0x8009FB7C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    func_800EF368(rdram, ctx);
        goto after_11;
    // 0x8009FB7C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_11:
    // 0x8009FB80: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8009FB84: jal         0x800EF04C
    // 0x8009FB88: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800EF04C(rdram, ctx);
        goto after_12;
    // 0x8009FB88: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_12:
    // 0x8009FB8C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8009FB90: jal         0x800F4648
    // 0x8009FB94: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800F4648(rdram, ctx);
        goto after_13;
    // 0x8009FB94: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_13:
    // 0x8009FB98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8009FB9C:
    // 0x8009FB9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FBA0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8009FBA4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8009FBA8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009FBB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009FBB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8009FBBC: jal         0x800964DC
    // 0x8009FBC0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800964DC(rdram, ctx);
        goto after_0;
    // 0x8009FBC0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8009FBC4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009FBC8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FBCC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8009FBD0: jal         0x800889D0
    // 0x8009FBD4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    _fxairbub_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x8009FBD4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x8009FBD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009FBDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009FBE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FBE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FBE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009FBEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009FBF0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8009FBF4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8009FBF8: jal         0x8009C128
    // 0x8009FBFC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009FBFC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8009FC00: jal         0x800A4C48
    // 0x8009FC04: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800A4C48(rdram, ctx);
        goto after_1;
    // 0x8009FC04: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x8009FC08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009FC0C: jal         0x800CA7E4
    // 0x8009FC10: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800CA7E4(rdram, ctx);
        goto after_2;
    // 0x8009FC10: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x8009FC14: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8009FC18: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8009FC1C: jal         0x800EFB24
    // 0x8009FC20: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x8009FC20: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x8009FC24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009FC28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8009FC2C: jr          $ra
    // 0x8009FC30: nop

    return;
    // 0x8009FC30: nop

;}
RECOMP_FUNC void func_8009FC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FC34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009FC38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009FC3C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8009FC40: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009FC44: jal         0x8009C128
    // 0x8009FC48: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009FC48: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8009FC4C: jal         0x800964DC
    // 0x8009FC50: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800964DC(rdram, ctx);
        goto after_1;
    // 0x8009FC50: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8009FC54: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8009FC58: jal         0x800966E0
    // 0x8009FC5C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800966E0(rdram, ctx);
        goto after_2;
    // 0x8009FC5C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x8009FC60: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FC64: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8009FC68: jal         0x800889A8
    // 0x8009FC6C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    _fxripple_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x8009FC6C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_3:
    // 0x8009FC70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009FC74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009FC78: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FC80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009FC84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009FC88: jal         0x8009C128
    // 0x8009FC8C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009FC8C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x8009FC90: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x8009FC94: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8009FC98: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8009FC9C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009FCA0: jal         0x800DC178
    // 0x8009FCA4: nop

    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x8009FCA4: nop

    after_1:
    // 0x8009FCA8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009FCAC: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x8009FCB0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8009FCB4: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8009FCB8: lui         $at, 0x42D2
    ctx->r1 = S32(0X42D2 << 16);
    // 0x8009FCBC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009FCC0: jal         0x800DC178
    // 0x8009FCC4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_800DC178(rdram, ctx);
        goto after_2;
    // 0x8009FCC4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8009FCC8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009FCCC: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x8009FCD0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8009FCD4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8009FCD8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8009FCDC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009FCE0: jal         0x800DC178
    // 0x8009FCE4: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x8009FCE4: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x8009FCE8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009FCEC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8009FCF0: addiu       $t6, $t6, -0x6DE0
    ctx->r14 = ADD32(ctx->r14, -0X6DE0);
    // 0x8009FCF4: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8009FCF8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8009FCFC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8009FD00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009FD04: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x8009FD08: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8009FD0C: jal         0x800BBCB8
    // 0x8009FD10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_4;
    // 0x8009FD10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x8009FD14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FD18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009FD1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FD24: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8009FD28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009FD2C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8009FD30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009FD34: jal         0x80096544
    // 0x8009FD38: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    func_80096544(rdram, ctx);
        goto after_0;
    // 0x8009FD38: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009FD3C: beq         $v0, $zero, L_8009FE44
    if (ctx->r2 == 0) {
        // 0x8009FD40: lw          $t6, 0x54($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X54);
            goto L_8009FE44;
    }
    // 0x8009FD40: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8009FD44: beq         $t6, $zero, L_8009FD60
    if (ctx->r14 == 0) {
        // 0x8009FD48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009FD60;
    }
    // 0x8009FD48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009FD4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009FD50: jal         0x80092C24
    // 0x8009FD54: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80092C24(rdram, ctx);
        goto after_1;
    // 0x8009FD54: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x8009FD58: b           L_8009FD68
    // 0x8009FD5C: nop

        goto L_8009FD68;
    // 0x8009FD5C: nop

L_8009FD60:
    // 0x8009FD60: jal         0x80092C00
    // 0x8009FD64: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80092C00(rdram, ctx);
        goto after_2;
    // 0x8009FD64: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_2:
L_8009FD68:
    // 0x8009FD68: jal         0x800964DC
    // 0x8009FD6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800964DC(rdram, ctx);
        goto after_3;
    // 0x8009FD6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8009FD70: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x8009FD74: jal         0x8009C984
    // 0x8009FD78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_4;
    // 0x8009FD78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8009FD7C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8009FD80: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x8009FD84: jal         0x80088AE8
    // 0x8009FD88: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    _fxsplash_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x8009FD88: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8009FD8C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x8009FD90: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8009FD94: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009FD98: addiu       $t1, $zero, -0x78
    ctx->r9 = ADD32(0, -0X78);
    // 0x8009FD9C: addiu       $t5, $zero, 0xFA
    ctx->r13 = ADD32(0, 0XFA);
    // 0x8009FDA0: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8009FDA4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8009FDA8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8009FDAC: add.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8009FDB0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8009FDB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009FDB8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8009FDBC: addiu       $a1, $zero, -0x8C
    ctx->r5 = ADD32(0, -0X8C);
    // 0x8009FDC0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x8009FDC4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8009FDC8: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x8009FDCC: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8009FDD0: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x8009FDD4: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8009FDD8: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x8009FDDC: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x8009FDE0: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8009FDE4: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8009FDE8: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8009FDEC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x8009FDF0: jal         0x800BA994
    // 0x8009FDF4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_800BA994(rdram, ctx);
        goto after_6;
    // 0x8009FDF4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_6:
    // 0x8009FDF8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8009FDFC: jal         0x800BA22C
    // 0x8009FE00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800BA22C(rdram, ctx);
        goto after_7;
    // 0x8009FE00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x8009FE04: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8009FE08: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x8009FE0C: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8009FE10: addiu       $t7, $zero, -0x5A
    ctx->r15 = ADD32(0, -0X5A);
    // 0x8009FE14: addiu       $t9, $zero, 0x190
    ctx->r25 = ADD32(0, 0X190);
    // 0x8009FE18: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8009FE1C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8009FE20: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8009FE24: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8009FE28: addiu       $a1, $zero, -0x64
    ctx->r5 = ADD32(0, -0X64);
    // 0x8009FE2C: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x8009FE30: jal         0x800BA994
    // 0x8009FE34: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800BA994(rdram, ctx);
        goto after_8;
    // 0x8009FE34: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_8:
    // 0x8009FE38: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8009FE3C: jal         0x800BA22C
    // 0x8009FE40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800BA22C(rdram, ctx);
        goto after_9;
    // 0x8009FE40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
L_8009FE44:
    // 0x8009FE44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FE48: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8009FE4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8009FE50: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FE58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FE58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009FE5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009FE60: jal         0x800A2E18
    // 0x8009FE64: nop

    func_800A2E18(rdram, ctx);
        goto after_0;
    // 0x8009FE64: nop

    after_0:
    // 0x8009FE68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009FE6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009FE70: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FE78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FE78: lw          $t6, 0x12C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X12C);
    // 0x8009FE7C: jr          $ra
    // 0x8009FE80: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    return;
    // 0x8009FE80: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
;}
RECOMP_FUNC void func_8009FE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FE84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009FE88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009FE8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009FE90: jal         0x800919F4
    // 0x8009FE94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_0;
    // 0x8009FE94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8009FE98: beql        $v0, $zero, L_8009FEBC
    if (ctx->r2 == 0) {
        // 0x8009FE9C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8009FEBC;
    }
    goto skip_0;
    // 0x8009FE9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x8009FEA0: jal         0x8008D370
    // 0x8009FEA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D370(rdram, ctx);
        goto after_1;
    // 0x8009FEA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8009FEA8: beql        $v0, $zero, L_8009FEBC
    if (ctx->r2 == 0) {
        // 0x8009FEAC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8009FEBC;
    }
    goto skip_1;
    // 0x8009FEAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x8009FEB0: b           L_8009FEF0
    // 0x8009FEB4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_8009FEF0;
    // 0x8009FEB4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8009FEB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_8009FEBC:
    // 0x8009FEBC: jal         0x80095738
    // 0x8009FEC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x8009FEC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8009FEC4: beq         $v0, $zero, L_8009FED4
    if (ctx->r2 == 0) {
        // 0x8009FEC8: nop
    
            goto L_8009FED4;
    }
    // 0x8009FEC8: nop

    // 0x8009FECC: b           L_8009FEF0
    // 0x8009FED0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8009FEF0;
    // 0x8009FED0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8009FED4:
    // 0x8009FED4: jal         0x8008D3B0
    // 0x8009FED8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D3B0(rdram, ctx);
        goto after_3;
    // 0x8009FED8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8009FEDC: beql        $v0, $zero, L_8009FEF0
    if (ctx->r2 == 0) {
        // 0x8009FEE0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8009FEF0;
    }
    goto skip_2;
    // 0x8009FEE0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    skip_2:
    // 0x8009FEE4: b           L_8009FEF0
    // 0x8009FEE8: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
        goto L_8009FEF0;
    // 0x8009FEE8: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8009FEEC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8009FEF0:
    // 0x8009FEF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009FEF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009FEF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FF00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009FF04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009FF08: jal         0x80084720
    // 0x8009FF0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _badata_entrypoint_28(rdram, ctx);
        goto after_0;
    // 0x8009FF0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009FF10: beq         $v0, $zero, L_8009FF34
    if (ctx->r2 == 0) {
        // 0x8009FF14: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8009FF34;
    }
    // 0x8009FF14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009FF18: jal         0x8009BB5C
    // 0x8009FF1C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8009BB5C(rdram, ctx);
        goto after_1;
    // 0x8009FF1C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8009FF20: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FF24: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009FF28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009FF2C: jalr        $v1
    // 0x8009FF30: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x8009FF30: nop

    after_2:
L_8009FF34:
    // 0x8009FF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009FF38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009FF3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FF44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FF44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009FF48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009FF4C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009FF50: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8009FF54: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8009FF58: jal         0x8008CABC
    // 0x8009FF5C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8009FF5C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x8009FF60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009FF64: jal         0x8008B264
    // 0x8009FF68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B264(rdram, ctx);
        goto after_1;
    // 0x8009FF68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8009FF6C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FF70: beql        $v0, $a1, L_8009FF8C
    if (ctx->r2 == ctx->r5) {
        // 0x8009FF74: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_8009FF8C;
    }
    goto skip_0;
    // 0x8009FF74: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x8009FF78: jal         0x8008AED4
    // 0x8009FF7C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x8009FF7C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x8009FF80: jal         0x8008B064
    // 0x8009FF84: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B064(rdram, ctx);
        goto after_3;
    // 0x8009FF84: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x8009FF88: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_8009FF8C:
    // 0x8009FF8C: jal         0x8008CA4C
    // 0x8009FF90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008CA4C(rdram, ctx);
        goto after_4;
    // 0x8009FF90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x8009FF94: lui         $a1, 0x3E70
    ctx->r5 = S32(0X3E70 << 16);
    // 0x8009FF98: lui         $a2, 0x407F
    ctx->r6 = S32(0X407F << 16);
    // 0x8009FF9C: ori         $a2, $a2, 0x34D7
    ctx->r6 = ctx->r6 | 0X34D7;
    // 0x8009FFA0: ori         $a1, $a1, 0x20C5
    ctx->r5 = ctx->r5 | 0X20C5;
    // 0x8009FFA4: jal         0x8008C9BC
    // 0x8009FFA8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008C9BC(rdram, ctx);
        goto after_5;
    // 0x8009FFA8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x8009FFAC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009FFB0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8009FFB4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8009FFB8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8009FFBC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8009FFC0: jal         0x8008C9F0
    // 0x8009FFC4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_6;
    // 0x8009FFC4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x8009FFC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FFCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009FFD0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009FFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FFD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009FFDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009FFE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009FFE4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8009FFE8: jal         0x8008CA4C
    // 0x8009FFEC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8008CA4C(rdram, ctx);
        goto after_0;
    // 0x8009FFEC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8009FFF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009FFF4: jal         0x8009C908
    // 0x8009FFF8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009C908(rdram, ctx);
        goto after_1;
    // 0x8009FFF8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8009FFFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A0000: jal         0x8009D2D8
    // 0x800A0004: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009D2D8(rdram, ctx);
        goto after_2;
    // 0x800A0004: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x800A0008: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A000C: jal         0x8009B800
    // 0x800A0010: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009B800(rdram, ctx);
        goto after_3;
    // 0x800A0010: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x800A0014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A001C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0024: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A0028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A002C: jal         0x8009CC68
    // 0x800A0030: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8009CC68(rdram, ctx);
        goto after_0;
    // 0x800A0030: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A0034: beq         $v0, $zero, L_800A0054
    if (ctx->r2 == 0) {
        // 0x800A0038: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_800A0054;
    }
    // 0x800A0038: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800A003C: jal         0x8009CC18
    // 0x800A0040: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009CC18(rdram, ctx);
        goto after_1;
    // 0x800A0040: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x800A0044: beq         $v0, $zero, L_800A0054
    if (ctx->r2 == 0) {
        // 0x800A0048: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_800A0054;
    }
    // 0x800A0048: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800A004C: jal         0x800A0064
    // 0x800A0050: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800A0064(rdram, ctx);
        goto after_2;
    // 0x800A0050: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
L_800A0054:
    // 0x800A0054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A005C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0064: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A0068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A006C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800A0070: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800A0074: jal         0x8009C128
    // 0x800A0078: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800A0078: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x800A007C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800A0080: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800A0084: jal         0x800F18FC
    // 0x800A0088: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_800F18FC(rdram, ctx);
        goto after_1;
    // 0x800A0088: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x800A008C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800A0090: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A0094: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800A0098: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800A009C: jal         0x8009BF5C
    // 0x800A00A0: nop

    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x800A00A0: nop

    after_2:
    // 0x800A00A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A00A8: jal         0x8009C914
    // 0x800A00AC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009C914(rdram, ctx);
        goto after_3;
    // 0x800A00AC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x800A00B0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A00B4: jal         0x8009C4CC
    // 0x800A00B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_4;
    // 0x800A00B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x800A00BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A00C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800A00C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A00CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A00CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A00D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A00D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800A00D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800A00DC: jal         0x8009C128
    // 0x800A00E0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800A00E0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x800A00E4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800A00E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800A00EC: jal         0x800F18FC
    // 0x800A00F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_800F18FC(rdram, ctx);
        goto after_1;
    // 0x800A00F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x800A00F4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A00F8: jal         0x8009C914
    // 0x800A00FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009C914(rdram, ctx);
        goto after_2;
    // 0x800A00FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800A0100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0104: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800A0108: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0110: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A0114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0118: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A011C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800A0120: jal         0x80084658
    // 0x800A0124: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    _badata_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800A0124: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800A0128: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A012C: jal         0x8008AED4
    // 0x800A0130: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_8008AED4(rdram, ctx);
        goto after_1;
    // 0x800A0130: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A0134: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A0138: jal         0x8008B1BC
    // 0x800A013C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x800A013C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800A0140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A0148: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0158: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A015C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A0160: jal         0x800FC240
    // 0x800A0164: addiu       $a1, $zero, 0xFA0
    ctx->r5 = ADD32(0, 0XFA0);
    func_800FC240(rdram, ctx);
        goto after_0;
    // 0x800A0164: addiu       $a1, $zero, 0xFA0
    ctx->r5 = ADD32(0, 0XFA0);
    after_0:
    // 0x800A0168: jal         0x800FC660
    // 0x800A016C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800FC660(rdram, ctx);
        goto after_1;
    // 0x800A016C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A0170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A0178: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0180: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A0184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0188: jal         0x800846C0
    // 0x800A018C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _badata_entrypoint_16(rdram, ctx);
        goto after_0;
    // 0x800A018C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A0190: jal         0x800D395C
    // 0x800A0194: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800D395C(rdram, ctx);
        goto after_1;
    // 0x800A0194: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800A0198: beq         $v0, $zero, L_800A01C0
    if (ctx->r2 == 0) {
        // 0x800A019C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800A01C0;
    }
    // 0x800A019C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A01A0: jal         0x800FCCD4
    // 0x800A01A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800FCCD4(rdram, ctx);
        goto after_2;
    // 0x800A01A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800A01A8: bnel        $v0, $zero, L_800A01EC
    if (ctx->r2 != 0) {
        // 0x800A01AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A01EC;
    }
    goto skip_0;
    // 0x800A01AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A01B0: jal         0x800A0150
    // 0x800A01B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800A0150(rdram, ctx);
        goto after_3;
    // 0x800A01B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x800A01B8: b           L_800A01EC
    // 0x800A01BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A01EC;
    // 0x800A01BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A01C0:
    // 0x800A01C0: jal         0x80095738
    // 0x800A01C4: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    func_80095738(rdram, ctx);
        goto after_4;
    // 0x800A01C4: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    after_4:
    // 0x800A01C8: bne         $v0, $zero, L_800A01E8
    if (ctx->r2 != 0) {
        // 0x800A01CC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800A01E8;
    }
    // 0x800A01CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A01D0: jal         0x80095760
    // 0x800A01D4: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    func_80095760(rdram, ctx);
        goto after_5;
    // 0x800A01D4: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    after_5:
    // 0x800A01D8: jal         0x800A0150
    // 0x800A01DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800A0150(rdram, ctx);
        goto after_6;
    // 0x800A01DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_6:
    // 0x800A01E0: jal         0x800FE4E4
    // 0x800A01E4: nop

    func_800FE4E4(rdram, ctx);
        goto after_7;
    // 0x800A01E4: nop

    after_7:
L_800A01E8:
    // 0x800A01E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A01EC:
    // 0x800A01EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A01F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A01F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A01F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A01FC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A0200: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800A0204: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A0208: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A020C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A0210: jal         0x80095738
    // 0x800A0214: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x800A0214: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x800A0218: beq         $v0, $zero, L_800A0228
    if (ctx->r2 == 0) {
        // 0x800A021C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A0228;
    }
    // 0x800A021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0220: b           L_800A02C8
    // 0x800A0224: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_800A02C8;
    // 0x800A0224: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_800A0228:
    // 0x800A0228: jal         0x80091A58
    // 0x800A022C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_1;
    // 0x800A022C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x800A0230: beql        $v0, $zero, L_800A0248
    if (ctx->r2 == 0) {
        // 0x800A0234: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A0248;
    }
    goto skip_0;
    // 0x800A0234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800A0238: jal         0x8009FE84
    // 0x800A023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_2;
    // 0x800A023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A0240: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800A0244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A0248:
    // 0x800A0248: jal         0x80091A58
    // 0x800A024C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_3;
    // 0x800A024C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x800A0250: beq         $v0, $zero, L_800A0264
    if (ctx->r2 == 0) {
        // 0x800A0254: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A0264;
    }
    // 0x800A0254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0258: jal         0x800A055C
    // 0x800A025C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A055C(rdram, ctx);
        goto after_4;
    // 0x800A025C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x800A0260: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_800A0264:
    // 0x800A0264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0268: jal         0x800919F4
    // 0x800A026C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_5;
    // 0x800A026C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800A0270: beq         $v0, $zero, L_800A028C
    if (ctx->r2 == 0) {
        // 0x800A0274: nop
    
            goto L_800A028C;
    }
    // 0x800A0274: nop

    // 0x800A0278: jal         0x80097A50
    // 0x800A027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097A50(rdram, ctx);
        goto after_6;
    // 0x800A027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800A0280: beq         $v0, $zero, L_800A028C
    if (ctx->r2 == 0) {
        // 0x800A0284: nop
    
            goto L_800A028C;
    }
    // 0x800A0284: nop

    // 0x800A0288: addiu       $s1, $zero, 0x13
    ctx->r17 = ADD32(0, 0X13);
L_800A028C:
    // 0x800A028C: jal         0x80097AD0
    // 0x800A0290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_7;
    // 0x800A0290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800A0294: beq         $v0, $zero, L_800A02A8
    if (ctx->r2 == 0) {
        // 0x800A0298: nop
    
            goto L_800A02A8;
    }
    // 0x800A0298: nop

    // 0x800A029C: jal         0x800848A8
    // 0x800A02A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_8;
    // 0x800A02A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x800A02A4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_800A02A8:
    // 0x800A02A8: jal         0x8008E148
    // 0x800A02AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_9;
    // 0x800A02AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x800A02B0: beql        $v0, $zero, L_800A02C8
    if (ctx->r2 == 0) {
        // 0x800A02B4: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_800A02C8;
    }
    goto skip_1;
    // 0x800A02B4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_1:
    // 0x800A02B8: jal         0x800848B0
    // 0x800A02BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_10;
    // 0x800A02BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800A02C0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800A02C4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_800A02C8:
    // 0x800A02C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A02CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A02D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A02D4: jr          $ra
    // 0x800A02D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A02D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A02DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A02DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A02E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A02E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A02E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A02EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A02F0: jal         0x800A3274
    // 0x800A02F4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x800A02F4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x800A02F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800A02FC: jal         0x8008E078
    // 0x800A0300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x800A0300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A0304: bne         $v0, $zero, L_800A0314
    if (ctx->r2 != 0) {
        // 0x800A0308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A0314;
    }
    // 0x800A0308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A030C: b           L_800A0418
    // 0x800A0310: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_800A0418;
    // 0x800A0310: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_800A0314:
    // 0x800A0314: jal         0x80095738
    // 0x800A0318: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x800A0318: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_2:
    // 0x800A031C: beql        $v0, $zero, L_800A0334
    if (ctx->r2 == 0) {
        // 0x800A0320: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A0334;
    }
    goto skip_0;
    // 0x800A0320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800A0324: jal         0x800848C8
    // 0x800A0328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_28(rdram, ctx);
        goto after_3;
    // 0x800A0328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A032C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800A0330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A0334:
    // 0x800A0334: jal         0x80095738
    // 0x800A0338: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_80095738(rdram, ctx);
        goto after_4;
    // 0x800A0338: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_4:
    // 0x800A033C: beq         $v0, $zero, L_800A0348
    if (ctx->r2 == 0) {
        // 0x800A0340: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A0348;
    }
    // 0x800A0340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0344: addiu       $s1, $zero, 0x34
    ctx->r17 = ADD32(0, 0X34);
L_800A0348:
    // 0x800A0348: jal         0x80095738
    // 0x800A034C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80095738(rdram, ctx);
        goto after_5;
    // 0x800A034C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_5:
    // 0x800A0350: beq         $v0, $zero, L_800A0374
    if (ctx->r2 == 0) {
        // 0x800A0354: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A0374;
    }
    // 0x800A0354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0358: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A035C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800A0360: addiu       $s1, $zero, 0x25
    ctx->r17 = ADD32(0, 0X25);
    // 0x800A0364: bne         $t6, $at, L_800A0374
    if (ctx->r14 != ctx->r1) {
        // 0x800A0368: nop
    
            goto L_800A0374;
    }
    // 0x800A0368: nop

    // 0x800A036C: b           L_800A0374
    // 0x800A0370: addiu       $s1, $zero, 0x47
    ctx->r17 = ADD32(0, 0X47);
        goto L_800A0374;
    // 0x800A0370: addiu       $s1, $zero, 0x47
    ctx->r17 = ADD32(0, 0X47);
L_800A0374:
    // 0x800A0374: jal         0x80095738
    // 0x800A0378: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80095738(rdram, ctx);
        goto after_6;
    // 0x800A0378: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_6:
    // 0x800A037C: bne         $v0, $zero, L_800A03A4
    if (ctx->r2 != 0) {
        // 0x800A0380: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A03A4;
    }
    // 0x800A0380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0384: jal         0x80095738
    // 0x800A0388: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_80095738(rdram, ctx);
        goto after_7;
    // 0x800A0388: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_7:
    // 0x800A038C: bne         $v0, $zero, L_800A03A4
    if (ctx->r2 != 0) {
        // 0x800A0390: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A03A4;
    }
    // 0x800A0390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0394: jal         0x80095738
    // 0x800A0398: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_80095738(rdram, ctx);
        goto after_8;
    // 0x800A0398: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_8:
    // 0x800A039C: beql        $v0, $zero, L_800A03D0
    if (ctx->r2 == 0) {
        // 0x800A03A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A03D0;
    }
    goto skip_1;
    // 0x800A03A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_800A03A4:
    // 0x800A03A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A03A8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800A03AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A03B0: beql        $t7, $at, L_800A03D0
    if (ctx->r15 == ctx->r1) {
        // 0x800A03B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A03D0;
    }
    goto skip_2;
    // 0x800A03B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x800A03B8: jal         0x8009E674
    // 0x800A03BC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8009E674(rdram, ctx);
        goto after_9;
    // 0x800A03BC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_9:
    // 0x800A03C0: bnel        $v0, $zero, L_800A03D0
    if (ctx->r2 != 0) {
        // 0x800A03C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A03D0;
    }
    goto skip_3;
    // 0x800A03C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x800A03C8: addiu       $s1, $zero, 0x14
    ctx->r17 = ADD32(0, 0X14);
    // 0x800A03CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A03D0:
    // 0x800A03D0: jal         0x80095738
    // 0x800A03D4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80095738(rdram, ctx);
        goto after_10;
    // 0x800A03D4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_10:
    // 0x800A03D8: beq         $v0, $zero, L_800A03E4
    if (ctx->r2 == 0) {
        // 0x800A03DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A03E4;
    }
    // 0x800A03DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A03E0: addiu       $s1, $zero, 0x53
    ctx->r17 = ADD32(0, 0X53);
L_800A03E4:
    // 0x800A03E4: jal         0x80095738
    // 0x800A03E8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80095738(rdram, ctx);
        goto after_11;
    // 0x800A03E8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_11:
    // 0x800A03EC: beq         $v0, $zero, L_800A03F8
    if (ctx->r2 == 0) {
        // 0x800A03F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A03F8;
    }
    // 0x800A03F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A03F4: addiu       $s1, $zero, 0x44
    ctx->r17 = ADD32(0, 0X44);
L_800A03F8:
    // 0x800A03F8: jal         0x80095738
    // 0x800A03FC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80095738(rdram, ctx);
        goto after_12;
    // 0x800A03FC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_12:
    // 0x800A0400: beq         $v0, $zero, L_800A040C
    if (ctx->r2 == 0) {
        // 0x800A0404: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A040C;
    }
    // 0x800A0404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0408: addiu       $s1, $zero, 0x53
    ctx->r17 = ADD32(0, 0X53);
L_800A040C:
    // 0x800A040C: jal         0x80095774
    // 0x800A0410: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095774(rdram, ctx);
        goto after_13;
    // 0x800A0410: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_13:
    // 0x800A0414: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_800A0418:
    // 0x800A0418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A041C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A0420: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A0424: jr          $ra
    // 0x800A0428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A0428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A042C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A042C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0434: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A0438: jal         0x8009BF5C
    // 0x800A043C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x800A043C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x800A0440: jal         0x8009BFBC
    // 0x800A0444: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BFBC(rdram, ctx);
        goto after_1;
    // 0x800A0444: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A0448: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A044C: jal         0x8009C4CC
    // 0x800A0450: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x800A0450: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x800A0454: jal         0x8009C52C
    // 0x800A0458: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009C52C(rdram, ctx);
        goto after_3;
    // 0x800A0458: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x800A045C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A0464: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A046C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A046C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A0470: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A0474: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A0478: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A047C: jal         0x80095748
    // 0x800A0480: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80095748(rdram, ctx);
        goto after_0;
    // 0x800A0480: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x800A0484: bne         $v0, $zero, L_800A04E0
    if (ctx->r2 != 0) {
        // 0x800A0488: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A04E0;
    }
    // 0x800A0488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A048C: jal         0x80095738
    // 0x800A0490: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x800A0490: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x800A0494: beq         $v0, $zero, L_800A04C4
    if (ctx->r2 == 0) {
        // 0x800A0498: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A04C4;
    }
    // 0x800A0498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A049C: jal         0x80095748
    // 0x800A04A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80095748(rdram, ctx);
        goto after_2;
    // 0x800A04A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x800A04A4: beq         $v0, $zero, L_800A04C4
    if (ctx->r2 == 0) {
        // 0x800A04A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A04C4;
    }
    // 0x800A04A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A04AC: jal         0x80095748
    // 0x800A04B0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80095748(rdram, ctx);
        goto after_3;
    // 0x800A04B0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_3:
    // 0x800A04B4: beq         $v0, $zero, L_800A04C4
    if (ctx->r2 == 0) {
        // 0x800A04B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A04C4;
    }
    // 0x800A04B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A04BC: jal         0x80095774
    // 0x800A04C0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095774(rdram, ctx);
        goto after_4;
    // 0x800A04C0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_4:
L_800A04C4:
    // 0x800A04C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A04C8: jal         0x80095774
    // 0x800A04CC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80095774(rdram, ctx);
        goto after_5;
    // 0x800A04CC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_5:
    // 0x800A04D0: jal         0x800831F0
    // 0x800A04D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsjig_entrypoint_4(rdram, ctx);
        goto after_6;
    // 0x800A04D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800A04D8: jal         0x800FC660
    // 0x800A04DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_800FC660(rdram, ctx);
        goto after_7;
    // 0x800A04DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_7:
L_800A04E0:
    // 0x800A04E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A04E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A04E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A04EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A04F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A04F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A04F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A04FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A0500: jal         0x8008E23C
    // 0x800A0504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E23C(rdram, ctx);
        goto after_0;
    // 0x800A0504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A0508: beq         $v0, $zero, L_800A0530
    if (ctx->r2 == 0) {
        // 0x800A050C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800A0530;
    }
    // 0x800A050C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A0510: jal         0x8008D568
    // 0x800A0514: nop

    func_8008D568(rdram, ctx);
        goto after_1;
    // 0x800A0514: nop

    after_1:
    // 0x800A0518: beq         $v0, $zero, L_800A0528
    if (ctx->r2 == 0) {
        // 0x800A051C: nop
    
            goto L_800A0528;
    }
    // 0x800A051C: nop

    // 0x800A0520: b           L_800A054C
    // 0x800A0524: addiu       $v0, $zero, 0xE4
    ctx->r2 = ADD32(0, 0XE4);
        goto L_800A054C;
    // 0x800A0524: addiu       $v0, $zero, 0xE4
    ctx->r2 = ADD32(0, 0XE4);
L_800A0528:
    // 0x800A0528: b           L_800A054C
    // 0x800A052C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_800A054C;
    // 0x800A052C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_800A0530:
    // 0x800A0530: jal         0x8008D694
    // 0x800A0534: nop

    func_8008D694(rdram, ctx);
        goto after_2;
    // 0x800A0534: nop

    after_2:
    // 0x800A0538: beql        $v0, $zero, L_800A054C
    if (ctx->r2 == 0) {
        // 0x800A053C: lw          $v0, 0x1C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X1C);
            goto L_800A054C;
    }
    goto skip_0;
    // 0x800A053C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800A0540: b           L_800A054C
    // 0x800A0544: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
        goto L_800A054C;
    // 0x800A0544: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x800A0548: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_800A054C:
    // 0x800A054C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A0554: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A055C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A055C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0564: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A0568: jal         0x8008E23C
    // 0x800A056C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E23C(rdram, ctx);
        goto after_0;
    // 0x800A056C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A0570: beq         $v0, $zero, L_800A0598
    if (ctx->r2 == 0) {
        // 0x800A0574: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800A0598;
    }
    // 0x800A0574: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A0578: jal         0x8008D568
    // 0x800A057C: nop

    func_8008D568(rdram, ctx);
        goto after_1;
    // 0x800A057C: nop

    after_1:
    // 0x800A0580: beq         $v0, $zero, L_800A0590
    if (ctx->r2 == 0) {
        // 0x800A0584: nop
    
            goto L_800A0590;
    }
    // 0x800A0584: nop

    // 0x800A0588: b           L_800A05CC
    // 0x800A058C: addiu       $v0, $zero, 0xE4
    ctx->r2 = ADD32(0, 0XE4);
        goto L_800A05CC;
    // 0x800A058C: addiu       $v0, $zero, 0xE4
    ctx->r2 = ADD32(0, 0XE4);
L_800A0590:
    // 0x800A0590: b           L_800A05CC
    // 0x800A0594: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_800A05CC;
    // 0x800A0594: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_800A0598:
    // 0x800A0598: jal         0x8008D1B0
    // 0x800A059C: nop

    func_8008D1B0(rdram, ctx);
        goto after_2;
    // 0x800A059C: nop

    after_2:
    // 0x800A05A0: beql        $v0, $zero, L_800A05CC
    if (ctx->r2 == 0) {
        // 0x800A05A4: lw          $v0, 0x1C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X1C);
            goto L_800A05CC;
    }
    goto skip_0;
    // 0x800A05A4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800A05A8: jal         0x8009EA2C
    // 0x800A05AC: nop

    func_8009EA2C(rdram, ctx);
        goto after_3;
    // 0x800A05AC: nop

    after_3:
    // 0x800A05B0: beq         $v0, $zero, L_800A05C0
    if (ctx->r2 == 0) {
        // 0x800A05B4: nop
    
            goto L_800A05C0;
    }
    // 0x800A05B4: nop

    // 0x800A05B8: b           L_800A05CC
    // 0x800A05BC: addiu       $v0, $zero, 0x18A
    ctx->r2 = ADD32(0, 0X18A);
        goto L_800A05CC;
    // 0x800A05BC: addiu       $v0, $zero, 0x18A
    ctx->r2 = ADD32(0, 0X18A);
L_800A05C0:
    // 0x800A05C0: b           L_800A05CC
    // 0x800A05C4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_800A05CC;
    // 0x800A05C4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x800A05C8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_800A05CC:
    // 0x800A05CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A05D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A05D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A05DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A05DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A05E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A05E4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800A05E8: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x800A05EC: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    // 0x800A05F0: jal         0x800F9110
    // 0x800A05F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9110(rdram, ctx);
        goto after_0;
    // 0x800A05F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800A05F8: jal         0x800A9C98
    // 0x800A05FC: nop

    func_800A9C98(rdram, ctx);
        goto after_1;
    // 0x800A05FC: nop

    after_1:
    // 0x800A0600: beq         $v0, $zero, L_800A0618
    if (ctx->r2 == 0) {
        // 0x800A0604: nop
    
            goto L_800A0618;
    }
    // 0x800A0604: nop

    // 0x800A0608: jal         0x800A9CDC
    // 0x800A060C: nop

    func_800A9CDC(rdram, ctx);
        goto after_2;
    // 0x800A060C: nop

    after_2:
    // 0x800A0610: b           L_800A06D0
    // 0x800A0614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A06D0;
    // 0x800A0614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A0618:
    // 0x800A0618: jal         0x8008E23C
    // 0x800A061C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008E23C(rdram, ctx);
        goto after_3;
    // 0x800A061C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x800A0620: beql        $v0, $zero, L_800A068C
    if (ctx->r2 == 0) {
        // 0x800A0624: lh          $t7, 0x2E($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X2E);
            goto L_800A068C;
    }
    goto skip_0;
    // 0x800A0624: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    skip_0:
    // 0x800A0628: jal         0x800F8F3C
    // 0x800A062C: nop

    func_800F8F3C(rdram, ctx);
        goto after_4;
    // 0x800A062C: nop

    after_4:
    // 0x800A0630: jal         0x800F8DA8
    // 0x800A0634: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800F8DA8(rdram, ctx);
        goto after_5;
    // 0x800A0634: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_5:
    // 0x800A0638: beq         $v0, $zero, L_800A0648
    if (ctx->r2 == 0) {
        // 0x800A063C: addiu       $a1, $sp, 0x1C
        ctx->r5 = ADD32(ctx->r29, 0X1C);
            goto L_800A0648;
    }
    // 0x800A063C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800A0640: b           L_800A064C
    // 0x800A0644: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
        goto L_800A064C;
    // 0x800A0644: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_800A0648:
    // 0x800A0648: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_800A064C:
    // 0x800A064C: jal         0x800F89E4
    // 0x800A0650: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F89E4(rdram, ctx);
        goto after_6;
    // 0x800A0650: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_6:
    // 0x800A0654: jal         0x800EA05C
    // 0x800A0658: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_7;
    // 0x800A0658: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    after_7:
    // 0x800A065C: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x800A0660: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A0664: beq         $v0, $t6, L_800A067C
    if (ctx->r2 == ctx->r14) {
        // 0x800A0668: nop
    
            goto L_800A067C;
    }
    // 0x800A0668: nop

    // 0x800A066C: jal         0x800F8A80
    // 0x800A0670: nop

    func_800F8A80(rdram, ctx);
        goto after_8;
    // 0x800A0670: nop

    after_8:
    // 0x800A0674: b           L_800A0688
    // 0x800A0678: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
        goto L_800A0688;
    // 0x800A0678: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
L_800A067C:
    // 0x800A067C: jal         0x800EA090
    // 0x800A0680: nop

    func_800EA090(rdram, ctx);
        goto after_9;
    // 0x800A0680: nop

    after_9:
    // 0x800A0684: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
L_800A0688:
    // 0x800A0688: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
L_800A068C:
    // 0x800A068C: beq         $t7, $zero, L_800A069C
    if (ctx->r15 == 0) {
        // 0x800A0690: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_800A069C;
    }
    // 0x800A0690: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800A0694: jal         0x8009EB24
    // 0x800A0698: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    func_8009EB24(rdram, ctx);
        goto after_10;
    // 0x800A0698: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    after_10:
L_800A069C:
    // 0x800A069C: addiu       $a0, $sp, 0x2A
    ctx->r4 = ADD32(ctx->r29, 0X2A);
    // 0x800A06A0: jal         0x8009EC08
    // 0x800A06A4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009EC08(rdram, ctx);
        goto after_11;
    // 0x800A06A4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_11:
    // 0x800A06A8: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x800A06AC: beql        $t8, $zero, L_800A06C0
    if (ctx->r24 == 0) {
        // 0x800A06B0: lh          $a0, 0x2A($sp)
        ctx->r4 = MEM_H(ctx->r29, 0X2A);
            goto L_800A06C0;
    }
    goto skip_1;
    // 0x800A06B0: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    skip_1:
    // 0x800A06B4: jal         0x8009EBD0
    // 0x800A06B8: nop

    func_8009EBD0(rdram, ctx);
        goto after_12;
    // 0x800A06B8: nop

    after_12:
    // 0x800A06BC: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
L_800A06C0:
    // 0x800A06C0: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x800A06C4: jal         0x800A794C
    // 0x800A06C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A794C(rdram, ctx);
        goto after_13;
    // 0x800A06C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x800A06CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A06D0:
    // 0x800A06D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800A06D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A06E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A06E0: jr          $ra
    // 0x800A06E4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x800A06E4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
;}
RECOMP_FUNC void func_800A06E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A06E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A06EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A06F0: jal         0x80092B80
    // 0x800A06F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80092B80(rdram, ctx);
        goto after_0;
    // 0x800A06F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A06F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A06FC: jal         0x800A0714
    // 0x800A0700: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A0714(rdram, ctx);
        goto after_1;
    // 0x800A0700: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800A0704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A070C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0714: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A0718: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A071C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A0720: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A0724: jal         0x800DF3E0
    // 0x800A0728: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800DF3E0(rdram, ctx);
        goto after_0;
    // 0x800A0728: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A072C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800A0730: slti        $at, $a1, 0x666
    ctx->r1 = SIGNED(ctx->r5) < 0X666 ? 1 : 0;
    // 0x800A0734: bne         $at, $zero, L_800A0778
    if (ctx->r1 != 0) {
        // 0x800A0738: slti        $at, $a1, 0x83B
        ctx->r1 = SIGNED(ctx->r5) < 0X83B ? 1 : 0;
            goto L_800A0778;
    }
    // 0x800A0738: slti        $at, $a1, 0x83B
    ctx->r1 = SIGNED(ctx->r5) < 0X83B ? 1 : 0;
    // 0x800A073C: bne         $at, $zero, L_800A0764
    if (ctx->r1 != 0) {
        // 0x800A0740: addiu       $t6, $a1, -0x984
        ctx->r14 = ADD32(ctx->r5, -0X984);
            goto L_800A0764;
    }
    // 0x800A0740: addiu       $t6, $a1, -0x984
    ctx->r14 = ADD32(ctx->r5, -0X984);
    // 0x800A0744: sltiu       $at, $t6, 0x15
    ctx->r1 = ctx->r14 < 0X15 ? 1 : 0;
    // 0x800A0748: beq         $at, $zero, L_800A0C0C
    if (ctx->r1 == 0) {
        // 0x800A074C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800A0C0C;
    }
    // 0x800A074C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A0750: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A0754: addu        $at, $at, $t6
    gpr jr_addend_800A075C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A0758: lw          $t6, 0x53B0($at)
    ctx->r14 = ADD32(ctx->r1, 0X53B0);
    // 0x800A075C: jr          $t6
    // 0x800A0760: nop

    switch (jr_addend_800A075C >> 2) {
        case 0: goto L_800A0BFC; break;
        case 1: goto L_800A0C0C; break;
        case 2: goto L_800A0BFC; break;
        case 3: goto L_800A0C0C; break;
        case 4: goto L_800A0B94; break;
        case 5: goto L_800A0C0C; break;
        case 6: goto L_800A0C0C; break;
        case 7: goto L_800A0C0C; break;
        case 8: goto L_800A0C0C; break;
        case 9: goto L_800A0BD8; break;
        case 10: goto L_800A0C0C; break;
        case 11: goto L_800A0C0C; break;
        case 12: goto L_800A0C0C; break;
        case 13: goto L_800A0C0C; break;
        case 14: goto L_800A07B8; break;
        case 15: goto L_800A094C; break;
        case 16: goto L_800A0C0C; break;
        case 17: goto L_800A0C0C; break;
        case 18: goto L_800A0C0C; break;
        case 19: goto L_800A0C0C; break;
        case 20: goto L_800A0B34; break;
        default: switch_error(__func__, 0x800A075C, 0x801253B0);
    }
    // 0x800A0760: nop

L_800A0764:
    // 0x800A0764: addiu       $at, $zero, 0x83A
    ctx->r1 = ADD32(0, 0X83A);
    // 0x800A0768: beql        $a1, $at, L_800A0950
    if (ctx->r5 == ctx->r1) {
        // 0x800A076C: lw          $t3, 0x138($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X138);
            goto L_800A0950;
    }
    goto skip_0;
    // 0x800A076C: lw          $t3, 0x138($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X138);
    skip_0:
    // 0x800A0770: b           L_800A0C10
    // 0x800A0774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A0778:
    // 0x800A0778: slti        $at, $a1, 0x627
    ctx->r1 = SIGNED(ctx->r5) < 0X627 ? 1 : 0;
    // 0x800A077C: bne         $at, $zero, L_800A0798
    if (ctx->r1 != 0) {
        // 0x800A0780: addiu       $t7, $a1, -0x607
        ctx->r15 = ADD32(ctx->r5, -0X607);
            goto L_800A0798;
    }
    // 0x800A0780: addiu       $t7, $a1, -0x607
    ctx->r15 = ADD32(ctx->r5, -0X607);
    // 0x800A0784: addiu       $at, $zero, 0x665
    ctx->r1 = ADD32(0, 0X665);
    // 0x800A0788: beql        $a1, $at, L_800A0A24
    if (ctx->r5 == ctx->r1) {
        // 0x800A078C: lw          $t1, 0x138($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X138);
            goto L_800A0A24;
    }
    goto skip_1;
    // 0x800A078C: lw          $t1, 0x138($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X138);
    skip_1:
    // 0x800A0790: b           L_800A0C10
    // 0x800A0794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A0798:
    // 0x800A0798: sltiu       $at, $t7, 0x20
    ctx->r1 = ctx->r15 < 0X20 ? 1 : 0;
    // 0x800A079C: beq         $at, $zero, L_800A0C0C
    if (ctx->r1 == 0) {
        // 0x800A07A0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800A0C0C;
    }
    // 0x800A07A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A07A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A07A8: addu        $at, $at, $t7
    gpr jr_addend_800A07B0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A07AC: lw          $t7, 0x5404($at)
    ctx->r15 = ADD32(ctx->r1, 0X5404);
    // 0x800A07B0: jr          $t7
    // 0x800A07B4: nop

    switch (jr_addend_800A07B0 >> 2) {
        case 0: goto L_800A07B8; break;
        case 1: goto L_800A07B8; break;
        case 2: goto L_800A0AD4; break;
        case 3: goto L_800A0C0C; break;
        case 4: goto L_800A0B34; break;
        case 5: goto L_800A0B34; break;
        case 6: goto L_800A0A74; break;
        case 7: goto L_800A0C0C; break;
        case 8: goto L_800A0C0C; break;
        case 9: goto L_800A0C0C; break;
        case 10: goto L_800A0C0C; break;
        case 11: goto L_800A0C0C; break;
        case 12: goto L_800A0C0C; break;
        case 13: goto L_800A0C0C; break;
        case 14: goto L_800A0C0C; break;
        case 15: goto L_800A0C0C; break;
        case 16: goto L_800A0C0C; break;
        case 17: goto L_800A0C0C; break;
        case 18: goto L_800A0C0C; break;
        case 19: goto L_800A0C0C; break;
        case 20: goto L_800A0C0C; break;
        case 21: goto L_800A094C; break;
        case 22: goto L_800A0C0C; break;
        case 23: goto L_800A0C0C; break;
        case 24: goto L_800A07B8; break;
        case 25: goto L_800A0C0C; break;
        case 26: goto L_800A0C0C; break;
        case 27: goto L_800A0C0C; break;
        case 28: goto L_800A0B34; break;
        case 29: goto L_800A0B34; break;
        case 30: goto L_800A0C0C; break;
        case 31: goto L_800A0B34; break;
        default: switch_error(__func__, 0x800A07B0, 0x80125404);
    }
    // 0x800A07B4: nop

L_800A07B8:
    // 0x800A07B8: lw          $v0, 0x138($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X138);
    // 0x800A07BC: lbu         $t8, 0x17($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X17);
    // 0x800A07C0: bne         $t8, $zero, L_800A0898
    if (ctx->r24 != 0) {
        // 0x800A07C4: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_800A0898;
    }
    // 0x800A07C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x800A07C8: jal         0x800DF744
    // 0x800A07CC: lbu         $a1, 0x10($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X10);
    func_800DF744(rdram, ctx);
        goto after_1;
    // 0x800A07CC: lbu         $a1, 0x10($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X10);
    after_1:
    // 0x800A07D0: lw          $t9, 0x138($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X138);
    // 0x800A07D4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x800A07D8: jal         0x800DF744
    // 0x800A07DC: lbu         $a1, 0x10($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X10);
    func_800DF744(rdram, ctx);
        goto after_2;
    // 0x800A07DC: lbu         $a1, 0x10($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X10);
    after_2:
    // 0x800A07E0: lw          $t0, 0x138($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X138);
    // 0x800A07E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x800A07E8: jal         0x800DF744
    // 0x800A07EC: lbu         $a1, 0xE($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0XE);
    func_800DF744(rdram, ctx);
        goto after_3;
    // 0x800A07EC: lbu         $a1, 0xE($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0XE);
    after_3:
    // 0x800A07F0: lw          $t1, 0x138($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X138);
    // 0x800A07F4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x800A07F8: jal         0x800DF744
    // 0x800A07FC: lbu         $a1, 0xE($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0XE);
    func_800DF744(rdram, ctx);
        goto after_4;
    // 0x800A07FC: lbu         $a1, 0xE($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0XE);
    after_4:
    // 0x800A0800: lw          $t2, 0x138($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X138);
    // 0x800A0804: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x800A0808: jal         0x800DF744
    // 0x800A080C: lbu         $a1, 0xD($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0XD);
    func_800DF744(rdram, ctx);
        goto after_5;
    // 0x800A080C: lbu         $a1, 0xD($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0XD);
    after_5:
    // 0x800A0810: lw          $t3, 0x138($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X138);
    // 0x800A0814: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x800A0818: jal         0x800DF744
    // 0x800A081C: lbu         $a1, 0xD($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0XD);
    func_800DF744(rdram, ctx);
        goto after_6;
    // 0x800A081C: lbu         $a1, 0xD($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0XD);
    after_6:
    // 0x800A0820: lw          $t4, 0x138($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X138);
    // 0x800A0824: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x800A0828: lbu         $a1, 0xF($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0XF);
    // 0x800A082C: jal         0x800DF744
    // 0x800A0830: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800DF744(rdram, ctx);
        goto after_7;
    // 0x800A0830: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_7:
    // 0x800A0834: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x800A0838: jal         0x800DF744
    // 0x800A083C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_8;
    // 0x800A083C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x800A0840: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x800A0844: jal         0x800DF744
    // 0x800A0848: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_9;
    // 0x800A0848: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x800A084C: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x800A0850: jal         0x800DF744
    // 0x800A0854: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_10;
    // 0x800A0854: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x800A0858: lw          $t5, 0x138($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X138);
    // 0x800A085C: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x800A0860: lbu         $a1, 0x11($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X11);
    // 0x800A0864: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A0868: jal         0x800DF744
    // 0x800A086C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800DF744(rdram, ctx);
        goto after_11;
    // 0x800A086C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_11:
    // 0x800A0870: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x800A0874: jal         0x800DF744
    // 0x800A0878: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_12;
    // 0x800A0878: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_12:
    // 0x800A087C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x800A0880: jal         0x800DF744
    // 0x800A0884: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_13;
    // 0x800A0884: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x800A0888: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x800A088C: jal         0x800DF744
    // 0x800A0890: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_14;
    // 0x800A0890: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x800A0894: lw          $v0, 0x138($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X138);
L_800A0898:
    // 0x800A0898: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800A089C: jal         0x800DF744
    // 0x800A08A0: lbu         $a1, 0x12($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X12);
    func_800DF744(rdram, ctx);
        goto after_15;
    // 0x800A08A0: lbu         $a1, 0x12($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X12);
    after_15:
    // 0x800A08A4: lw          $t6, 0x138($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X138);
    // 0x800A08A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A08AC: jal         0x800DF744
    // 0x800A08B0: lbu         $a1, 0x12($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X12);
    func_800DF744(rdram, ctx);
        goto after_16;
    // 0x800A08B0: lbu         $a1, 0x12($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X12);
    after_16:
    // 0x800A08B4: lw          $t7, 0x138($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X138);
    // 0x800A08B8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x800A08BC: jal         0x800DF744
    // 0x800A08C0: lbu         $a1, 0x12($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X12);
    func_800DF744(rdram, ctx);
        goto after_17;
    // 0x800A08C0: lbu         $a1, 0x12($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X12);
    after_17:
    // 0x800A08C4: lw          $t8, 0x138($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X138);
    // 0x800A08C8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x800A08CC: jal         0x800DF744
    // 0x800A08D0: lbu         $a1, 0x12($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X12);
    func_800DF744(rdram, ctx);
        goto after_18;
    // 0x800A08D0: lbu         $a1, 0x12($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X12);
    after_18:
    // 0x800A08D4: lw          $t9, 0x138($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X138);
    // 0x800A08D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A08DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A08E0: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x800A08E4: jal         0x800F1214
    // 0x800A08E8: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    func_800F1214(rdram, ctx);
        goto after_19;
    // 0x800A08E8: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    after_19:
    // 0x800A08EC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A08F0: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x800A08F4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800A08F8: jal         0x800DF744
    // 0x800A08FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800DF744(rdram, ctx);
        goto after_20;
    // 0x800A08FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_20:
    // 0x800A0900: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    // 0x800A0904: jal         0x800DF744
    // 0x800A0908: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_21;
    // 0x800A0908: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_21:
    // 0x800A090C: lw          $t1, 0x138($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X138);
    // 0x800A0910: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A0914: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0918: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x800A091C: jal         0x800F1214
    // 0x800A0920: lwc1        $f12, 0x4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X4);
    func_800F1214(rdram, ctx);
        goto after_22;
    // 0x800A0920: lwc1        $f12, 0x4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X4);
    after_22:
    // 0x800A0924: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A0928: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    // 0x800A092C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800A0930: jal         0x800DF744
    // 0x800A0934: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800DF744(rdram, ctx);
        goto after_23;
    // 0x800A0934: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_23:
    // 0x800A0938: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    // 0x800A093C: jal         0x800DF744
    // 0x800A0940: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_24;
    // 0x800A0940: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_24:
    // 0x800A0944: b           L_800A0C10
    // 0x800A0948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A094C:
    // 0x800A094C: lw          $t3, 0x138($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X138);
L_800A0950:
    // 0x800A0950: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800A0954: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800A0958: lbu         $t4, 0x15($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X15);
    // 0x800A095C: beq         $t4, $zero, L_800A0974
    if (ctx->r12 == 0) {
        // 0x800A0960: nop
    
            goto L_800A0974;
    }
    // 0x800A0960: nop

    // 0x800A0964: jal         0x800DF744
    // 0x800A0968: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800DF744(rdram, ctx);
        goto after_25;
    // 0x800A0968: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_25:
    // 0x800A096C: b           L_800A0980
    // 0x800A0970: lw          $t5, 0x138($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X138);
        goto L_800A0980;
    // 0x800A0970: lw          $t5, 0x138($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X138);
L_800A0974:
    // 0x800A0974: jal         0x800DF744
    // 0x800A0978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800DF744(rdram, ctx);
        goto after_26;
    // 0x800A0978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x800A097C: lw          $t5, 0x138($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X138);
L_800A0980:
    // 0x800A0980: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800A0984: lbu         $a1, 0xF($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0XF);
    // 0x800A0988: jal         0x800DF744
    // 0x800A098C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800DF744(rdram, ctx);
        goto after_27;
    // 0x800A098C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_27:
    // 0x800A0990: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x800A0994: jal         0x800DF744
    // 0x800A0998: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_28;
    // 0x800A0998: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_28:
    // 0x800A099C: lw          $t6, 0x138($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X138);
    // 0x800A09A0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A09A4: lbu         $a1, 0x11($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X11);
    // 0x800A09A8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A09AC: jal         0x800DF744
    // 0x800A09B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800DF744(rdram, ctx);
        goto after_29;
    // 0x800A09B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_29:
    // 0x800A09B4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800A09B8: jal         0x800DF744
    // 0x800A09BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_30;
    // 0x800A09BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_30:
    // 0x800A09C0: lw          $t7, 0x138($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X138);
    // 0x800A09C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A09C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A09CC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x800A09D0: jal         0x800F1214
    // 0x800A09D4: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    func_800F1214(rdram, ctx);
        goto after_31;
    // 0x800A09D4: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    after_31:
    // 0x800A09D8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A09DC: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x800A09E0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800A09E4: jal         0x800DF744
    // 0x800A09E8: nop

    func_800DF744(rdram, ctx);
        goto after_32;
    // 0x800A09E8: nop

    after_32:
    // 0x800A09EC: lw          $t9, 0x138($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X138);
    // 0x800A09F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A09F4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A09F8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x800A09FC: jal         0x800F1214
    // 0x800A0A00: lwc1        $f12, 0x4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X4);
    func_800F1214(rdram, ctx);
        goto after_33;
    // 0x800A0A00: lwc1        $f12, 0x4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X4);
    after_33:
    // 0x800A0A04: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A0A08: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x800A0A0C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800A0A10: jal         0x800DF744
    // 0x800A0A14: nop

    func_800DF744(rdram, ctx);
        goto after_34;
    // 0x800A0A14: nop

    after_34:
    // 0x800A0A18: b           L_800A0C10
    // 0x800A0A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0A20: lw          $t1, 0x138($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X138);
L_800A0A24:
    // 0x800A0A24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A0A28: jal         0x800DF744
    // 0x800A0A2C: lbu         $a1, 0x13($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X13);
    func_800DF744(rdram, ctx);
        goto after_35;
    // 0x800A0A2C: lbu         $a1, 0x13($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X13);
    after_35:
    // 0x800A0A30: lw          $t2, 0x138($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X138);
    // 0x800A0A34: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800A0A38: jal         0x800DF744
    // 0x800A0A3C: lbu         $a1, 0x14($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X14);
    func_800DF744(rdram, ctx);
        goto after_36;
    // 0x800A0A3C: lbu         $a1, 0x14($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X14);
    after_36:
    // 0x800A0A40: lw          $t3, 0x138($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X138);
    // 0x800A0A44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A0A48: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0A4C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x800A0A50: jal         0x800F1214
    // 0x800A0A54: lwc1        $f12, 0x4($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X4);
    func_800F1214(rdram, ctx);
        goto after_37;
    // 0x800A0A54: lwc1        $f12, 0x4($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X4);
    after_37:
    // 0x800A0A58: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A0A5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A0A60: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800A0A64: jal         0x800DF744
    // 0x800A0A68: nop

    func_800DF744(rdram, ctx);
        goto after_38;
    // 0x800A0A68: nop

    after_38:
    // 0x800A0A6C: b           L_800A0C10
    // 0x800A0A70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0A70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A0A74:
    // 0x800A0A74: lw          $t5, 0x138($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X138);
    // 0x800A0A78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A0A7C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0A80: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x800A0A84: jal         0x800F1214
    // 0x800A0A88: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    func_800F1214(rdram, ctx);
        goto after_39;
    // 0x800A0A88: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    after_39:
    // 0x800A0A8C: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A0A90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A0A94: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x800A0A98: jal         0x800DF744
    // 0x800A0A9C: nop

    func_800DF744(rdram, ctx);
        goto after_40;
    // 0x800A0A9C: nop

    after_40:
    // 0x800A0AA0: lw          $t7, 0x138($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X138);
    // 0x800A0AA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A0AA8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0AAC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x800A0AB0: jal         0x800F1214
    // 0x800A0AB4: lwc1        $f12, 0x4($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X4);
    func_800F1214(rdram, ctx);
        goto after_41;
    // 0x800A0AB4: lwc1        $f12, 0x4($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X4);
    after_41:
    // 0x800A0AB8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A0ABC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800A0AC0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800A0AC4: jal         0x800DF744
    // 0x800A0AC8: nop

    func_800DF744(rdram, ctx);
        goto after_42;
    // 0x800A0AC8: nop

    after_42:
    // 0x800A0ACC: b           L_800A0C10
    // 0x800A0AD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0AD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A0AD4:
    // 0x800A0AD4: lw          $t9, 0x138($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X138);
    // 0x800A0AD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A0ADC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0AE0: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x800A0AE4: jal         0x800F1214
    // 0x800A0AE8: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    func_800F1214(rdram, ctx);
        goto after_43;
    // 0x800A0AE8: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    after_43:
    // 0x800A0AEC: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A0AF0: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x800A0AF4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800A0AF8: jal         0x800DF744
    // 0x800A0AFC: nop

    func_800DF744(rdram, ctx);
        goto after_44;
    // 0x800A0AFC: nop

    after_44:
    // 0x800A0B00: lw          $t1, 0x138($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X138);
    // 0x800A0B04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A0B08: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0B0C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x800A0B10: jal         0x800F1214
    // 0x800A0B14: lwc1        $f12, 0x4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X4);
    func_800F1214(rdram, ctx);
        goto after_45;
    // 0x800A0B14: lwc1        $f12, 0x4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X4);
    after_45:
    // 0x800A0B18: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A0B1C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x800A0B20: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800A0B24: jal         0x800DF744
    // 0x800A0B28: nop

    func_800DF744(rdram, ctx);
        goto after_46;
    // 0x800A0B28: nop

    after_46:
    // 0x800A0B2C: b           L_800A0C10
    // 0x800A0B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A0B34:
    // 0x800A0B34: lw          $t3, 0x138($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X138);
    // 0x800A0B38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A0B3C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0B40: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x800A0B44: jal         0x800F1214
    // 0x800A0B48: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    func_800F1214(rdram, ctx);
        goto after_47;
    // 0x800A0B48: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    after_47:
    // 0x800A0B4C: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A0B50: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x800A0B54: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800A0B58: jal         0x800DF744
    // 0x800A0B5C: nop

    func_800DF744(rdram, ctx);
        goto after_48;
    // 0x800A0B5C: nop

    after_48:
    // 0x800A0B60: lw          $t5, 0x138($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X138);
    // 0x800A0B64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A0B68: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0B6C: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x800A0B70: jal         0x800F1214
    // 0x800A0B74: lwc1        $f12, 0x4($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X4);
    func_800F1214(rdram, ctx);
        goto after_49;
    // 0x800A0B74: lwc1        $f12, 0x4($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X4);
    after_49:
    // 0x800A0B78: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A0B7C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x800A0B80: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800A0B84: jal         0x800DF744
    // 0x800A0B88: nop

    func_800DF744(rdram, ctx);
        goto after_50;
    // 0x800A0B88: nop

    after_50:
    // 0x800A0B8C: b           L_800A0C10
    // 0x800A0B90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0B90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A0B94:
    // 0x800A0B94: jal         0x800A940C
    // 0x800A0B98: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800A940C(rdram, ctx);
        goto after_51;
    // 0x800A0B98: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_51:
    // 0x800A0B9C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800A0BA0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800A0BA4: lbu         $a1, -0x6DB0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X6DB0);
    // 0x800A0BA8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800A0BAC: jal         0x800DF744
    // 0x800A0BB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800DF744(rdram, ctx);
        goto after_52;
    // 0x800A0BB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_52:
    // 0x800A0BB4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A0BB8: jal         0x800DF744
    // 0x800A0BBC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800DF744(rdram, ctx);
        goto after_53;
    // 0x800A0BBC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_53:
    // 0x800A0BC0: lw          $t7, 0x138($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X138);
    // 0x800A0BC4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800A0BC8: jal         0x800DF744
    // 0x800A0BCC: lbu         $a1, 0x16($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X16);
    func_800DF744(rdram, ctx);
        goto after_54;
    // 0x800A0BCC: lbu         $a1, 0x16($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X16);
    after_54:
    // 0x800A0BD0: b           L_800A0C10
    // 0x800A0BD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0BD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A0BD8:
    // 0x800A0BD8: jal         0x800A940C
    // 0x800A0BDC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800A940C(rdram, ctx);
        goto after_55;
    // 0x800A0BDC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_55:
    // 0x800A0BE0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800A0BE4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800A0BE8: lbu         $a1, -0x6DAC($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X6DAC);
    // 0x800A0BEC: jal         0x800DF744
    // 0x800A0BF0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800DF744(rdram, ctx);
        goto after_56;
    // 0x800A0BF0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_56:
    // 0x800A0BF4: b           L_800A0C10
    // 0x800A0BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A0C10;
    // 0x800A0BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A0BFC:
    // 0x800A0BFC: lw          $t8, 0x138($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X138);
    // 0x800A0C00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A0C04: jal         0x800DF744
    // 0x800A0C08: lbu         $a1, 0x16($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X16);
    func_800DF744(rdram, ctx);
        goto after_57;
    // 0x800A0C08: lbu         $a1, 0x16($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X16);
    after_57:
L_800A0C0C:
    // 0x800A0C0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A0C10:
    // 0x800A0C10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A0C14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A0C18: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0C20: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0C24: jr          $ra
    // 0x800A0C28: lbu         $v0, 0x10($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X10);
    return;
    // 0x800A0C28: lbu         $v0, 0x10($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X10);
;}
RECOMP_FUNC void func_800A0C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0C2C: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0C30: jr          $ra
    // 0x800A0C34: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    return;
    // 0x800A0C34: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_800A0C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0C38: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0C3C: jr          $ra
    // 0x800A0C40: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    return;
    // 0x800A0C40: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_800A0C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0C44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A0C48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A0C4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A0C50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A0C54: jal         0x800A0CF4
    // 0x800A0C58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_0;
    // 0x800A0C58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800A0C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0C60: jal         0x800A0CE8
    // 0x800A0C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CE8(rdram, ctx);
        goto after_1;
    // 0x800A0C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800A0C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0C6C: jal         0x800A0CDC
    // 0x800A0C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CDC(rdram, ctx);
        goto after_2;
    // 0x800A0C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800A0C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0C78: jal         0x800A0D74
    // 0x800A0C7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800A0D74(rdram, ctx);
        goto after_3;
    // 0x800A0C7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x800A0C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0C84: jal         0x800A0D84
    // 0x800A0C88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800A0D84(rdram, ctx);
        goto after_4;
    // 0x800A0C88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x800A0C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0C90: jal         0x800A0DB8
    // 0x800A0C94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DB8(rdram, ctx);
        goto after_5;
    // 0x800A0C94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800A0C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0C9C: jal         0x800A0DD0
    // 0x800A0CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0DD0(rdram, ctx);
        goto after_6;
    // 0x800A0CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800A0CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0CA8: jal         0x800A0CD0
    // 0x800A0CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_7;
    // 0x800A0CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x800A0CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0CB4: jal         0x800A0DC4
    // 0x800A0CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0DC4(rdram, ctx);
        goto after_8;
    // 0x800A0CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800A0CBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0CC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A0CC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A0CC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0CD0: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0CD4: jr          $ra
    // 0x800A0CD8: sb          $a1, 0x12($t6)
    MEM_B(0X12, ctx->r14) = ctx->r5;
    return;
    // 0x800A0CD8: sb          $a1, 0x12($t6)
    MEM_B(0X12, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0CDC: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0CE0: jr          $ra
    // 0x800A0CE4: sb          $a1, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r5;
    return;
    // 0x800A0CE4: sb          $a1, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0CE8: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0CEC: jr          $ra
    // 0x800A0CF0: sb          $a1, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r5;
    return;
    // 0x800A0CF0: sb          $a1, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0CF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0CFC: jal         0x800A0D14
    // 0x800A0D00: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800A0D14(rdram, ctx);
        goto after_0;
    // 0x800A0D00: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x800A0D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A0D0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0D14: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800A0D18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A0D1C: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0D20: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x800A0D24: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    // 0x800A0D28: lw          $t7, 0x138($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X138);
    // 0x800A0D2C: bc1f        L_800A0D3C
    if (!c1cs) {
        // 0x800A0D30: sb          $a1, 0xC($t7)
        MEM_B(0XC, ctx->r15) = ctx->r5;
            goto L_800A0D3C;
    }
    // 0x800A0D30: sb          $a1, 0xC($t7)
    MEM_B(0XC, ctx->r15) = ctx->r5;
    // 0x800A0D34: lw          $t8, 0x138($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X138);
    // 0x800A0D38: sb          $a1, 0x10($t8)
    MEM_B(0X10, ctx->r24) = ctx->r5;
L_800A0D3C:
    // 0x800A0D3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0D44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0D4C: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x800A0D50: jal         0x800A0D14
    // 0x800A0D54: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    func_800A0D14(rdram, ctx);
        goto after_0;
    // 0x800A0D54: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    after_0:
    // 0x800A0D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A0D60: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0D68: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0D6C: jr          $ra
    // 0x800A0D70: sb          $a1, 0x17($t6)
    MEM_B(0X17, ctx->r14) = ctx->r5;
    return;
    // 0x800A0D70: sb          $a1, 0x17($t6)
    MEM_B(0X17, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0D74: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A0D78: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0D7C: jr          $ra
    // 0x800A0D80: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x800A0D80: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800A0D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0D84: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A0D88: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0D8C: jr          $ra
    // 0x800A0D90: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x800A0D90: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800A0D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0D94: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0D98: jr          $ra
    // 0x800A0D9C: sb          $a1, 0x16($t6)
    MEM_B(0X16, ctx->r14) = ctx->r5;
    return;
    // 0x800A0D9C: sb          $a1, 0x16($t6)
    MEM_B(0X16, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0DA0: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0DA4: jr          $ra
    // 0x800A0DA8: sb          $a1, 0x14($t6)
    MEM_B(0X14, ctx->r14) = ctx->r5;
    return;
    // 0x800A0DA8: sb          $a1, 0x14($t6)
    MEM_B(0X14, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0DAC: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0DB0: jr          $ra
    // 0x800A0DB4: sb          $a1, 0x13($t6)
    MEM_B(0X13, ctx->r14) = ctx->r5;
    return;
    // 0x800A0DB4: sb          $a1, 0x13($t6)
    MEM_B(0X13, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0DB8: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0DBC: jr          $ra
    // 0x800A0DC0: sb          $a1, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r5;
    return;
    // 0x800A0DC0: sb          $a1, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0DC4: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0DC8: jr          $ra
    // 0x800A0DCC: sb          $a1, 0x15($t6)
    MEM_B(0X15, ctx->r14) = ctx->r5;
    return;
    // 0x800A0DCC: sb          $a1, 0x15($t6)
    MEM_B(0X15, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0DD0: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0DD4: jr          $ra
    // 0x800A0DD8: sb          $a1, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r5;
    return;
    // 0x800A0DD8: sb          $a1, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A0DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0DDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0DE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0DE4: lw          $t6, 0x138($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X138);
    // 0x800A0DE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A0DEC: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800A0DF0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800A0DF4: nop

    // 0x800A0DF8: bc1tl       L_800A0E44
    if (c1cs) {
        // 0x800A0DFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A0E44;
    }
    goto skip_0;
    // 0x800A0DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A0E00: jal         0x800D8FF8
    // 0x800A0E04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800A0E04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A0E08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A0E0C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A0E10: lw          $v0, 0x138($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X138);
    // 0x800A0E14: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800A0E18: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x800A0E1C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x800A0E20: lw          $v0, 0x138($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X138);
    // 0x800A0E24: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800A0E28: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x800A0E2C: nop

    // 0x800A0E30: bc1fl       L_800A0E44
    if (!c1cs) {
        // 0x800A0E34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A0E44;
    }
    goto skip_1;
    // 0x800A0E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800A0E38: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    // 0x800A0E3C: sb          $t7, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r15;
    // 0x800A0E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A0E44:
    // 0x800A0E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A0E48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0E50: jr          $ra
    // 0x800A0E54: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    return;
    // 0x800A0E54: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
;}
RECOMP_FUNC void func_800A0E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0E58: lw          $t6, 0x150($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X150);
    // 0x800A0E5C: jr          $ra
    // 0x800A0E60: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    return;
    // 0x800A0E60: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
;}
RECOMP_FUNC void func_800A0E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0E64: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800A0E68: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800A0E6C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800A0E70: jal         0x80096544
    // 0x800A0E74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80096544(rdram, ctx);
        goto after_0;
    // 0x800A0E74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A0E78: beq         $v0, $zero, L_800A0FB8
    if (ctx->r2 == 0) {
        // 0x800A0E7C: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800A0FB8;
    }
    // 0x800A0E7C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A0E80: lwc1        $f12, 0x5490($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5490);
    // 0x800A0E84: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x800A0E88: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0E8C: jal         0x800DC178
    // 0x800A0E90: nop

    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x800A0E90: nop

    after_1:
    // 0x800A0E94: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800A0E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0E9C: jal         0x8009DBF0
    // 0x800A0EA0: addiu       $a1, $zero, 0x409
    ctx->r5 = ADD32(0, 0X409);
    func_8009DBF0(rdram, ctx);
        goto after_2;
    // 0x800A0EA0: addiu       $a1, $zero, 0x409
    ctx->r5 = ADD32(0, 0X409);
    after_2:
    // 0x800A0EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0EA8: jal         0x8009C128
    // 0x800A0EAC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x800A0EAC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x800A0EB0: jal         0x800964DC
    // 0x800A0EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800964DC(rdram, ctx);
        goto after_4;
    // 0x800A0EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800A0EB8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800A0EBC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x800A0EC0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800A0EC4: jal         0x80088AE8
    // 0x800A0EC8: lui         $a1, 0x420C
    ctx->r5 = S32(0X420C << 16);
    _fxsplash_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x800A0EC8: lui         $a1, 0x420C
    ctx->r5 = S32(0X420C << 16);
    after_5:
    // 0x800A0ECC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A0ED0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800A0ED4: jal         0x800889A0
    // 0x800A0ED8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    _fxripple_entrypoint_0(rdram, ctx);
        goto after_6;
    // 0x800A0ED8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_6:
    // 0x800A0EDC: addiu       $t6, $zero, 0x15E
    ctx->r14 = ADD32(0, 0X15E);
    // 0x800A0EE0: addiu       $t7, $zero, 0x1F4
    ctx->r15 = ADD32(0, 0X1F4);
    // 0x800A0EE4: addiu       $t8, $zero, 0x15E
    ctx->r24 = ADD32(0, 0X15E);
    // 0x800A0EE8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800A0EEC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800A0EF0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A0EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0EF8: addiu       $a1, $zero, -0x15E
    ctx->r5 = ADD32(0, -0X15E);
    // 0x800A0EFC: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x800A0F00: jal         0x800BA930
    // 0x800A0F04: addiu       $a3, $zero, -0x15E
    ctx->r7 = ADD32(0, -0X15E);
    func_800BA930(rdram, ctx);
        goto after_7;
    // 0x800A0F04: addiu       $a3, $zero, -0x15E
    ctx->r7 = ADD32(0, -0X15E);
    after_7:
    // 0x800A0F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0F0C: jal         0x800BA22C
    // 0x800A0F10: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800BA22C(rdram, ctx);
        goto after_8;
    // 0x800A0F10: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_8:
    // 0x800A0F14: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x800A0F18: addiu       $t0, $zero, 0x320
    ctx->r8 = ADD32(0, 0X320);
    // 0x800A0F1C: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x800A0F20: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800A0F24: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800A0F28: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A0F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0F30: addiu       $a1, $zero, -0x96
    ctx->r5 = ADD32(0, -0X96);
    // 0x800A0F34: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x800A0F38: jal         0x800BA930
    // 0x800A0F3C: addiu       $a3, $zero, -0x96
    ctx->r7 = ADD32(0, -0X96);
    func_800BA930(rdram, ctx);
        goto after_9;
    // 0x800A0F3C: addiu       $a3, $zero, -0x96
    ctx->r7 = ADD32(0, -0X96);
    after_9:
    // 0x800A0F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0F44: jal         0x800BA22C
    // 0x800A0F48: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800BA22C(rdram, ctx);
        goto after_10;
    // 0x800A0F48: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_10:
    // 0x800A0F4C: jal         0x800889D8
    // 0x800A0F50: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    _fxsplash25d_entrypoint_0(rdram, ctx);
        goto after_11;
    // 0x800A0F50: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_11:
    // 0x800A0F54: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800A0F58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A0F5C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800A0F60: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800A0F64: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x800A0F68: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800A0F6C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800A0F70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800A0F74: jal         0x800889D0
    // 0x800A0F78: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    _fxairbub_entrypoint_1(rdram, ctx);
        goto after_12;
    // 0x800A0F78: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x800A0F7C: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x800A0F80: addiu       $t3, $zero, -0x96
    ctx->r11 = ADD32(0, -0X96);
    // 0x800A0F84: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x800A0F88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A0F8C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A0F90: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800A0F94: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A0F98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A0F9C: addiu       $a1, $zero, -0x3C
    ctx->r5 = ADD32(0, -0X3C);
    // 0x800A0FA0: addiu       $a2, $zero, -0xFA
    ctx->r6 = ADD32(0, -0XFA);
    // 0x800A0FA4: jal         0x800BA930
    // 0x800A0FA8: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    func_800BA930(rdram, ctx);
        goto after_13;
    // 0x800A0FA8: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    after_13:
    // 0x800A0FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A0FB0: jal         0x800BA22C
    // 0x800A0FB4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800BA22C(rdram, ctx);
        goto after_14;
    // 0x800A0FB4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_14:
L_800A0FB8:
    // 0x800A0FB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800A0FBC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800A0FC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800A0FC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A0FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0FCC: lw          $t6, 0x150($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X150);
    // 0x800A0FD0: jr          $ra
    // 0x800A0FD4: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
    return;
    // 0x800A0FD4: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
;}
RECOMP_FUNC void func_800A0FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0FD8: lw          $t6, 0x150($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X150);
    // 0x800A0FDC: jr          $ra
    // 0x800A0FE0: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    return;
    // 0x800A0FE0: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_800A0FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0FE4: lw          $t6, 0x150($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X150);
    // 0x800A0FE8: jr          $ra
    // 0x800A0FEC: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
    return;
    // 0x800A0FEC: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
;}
RECOMP_FUNC void func_800A0FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0FF0: lw          $t7, 0x150($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X150);
    // 0x800A0FF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A0FF8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800A0FFC: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
    // 0x800A1000: lw          $t8, 0x150($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X150);
    // 0x800A1004: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A1008: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x800A100C: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x800A1010: lw          $t9, 0x150($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X150);
    // 0x800A1014: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A1018: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800A101C: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    // 0x800A1020: lw          $t0, 0x150($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X150);
    // 0x800A1024: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A1028: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x800A102C: lw          $t1, 0x150($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X150);
    // 0x800A1030: swc1        $f6, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f6.u32l;
    // 0x800A1034: lw          $t2, 0x150($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X150);
    // 0x800A1038: jr          $ra
    // 0x800A103C: swc1        $f8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f8.u32l;
    return;
    // 0x800A103C: swc1        $f8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800A1040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1040: lw          $v0, 0x150($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X150);
    // 0x800A1044: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800A1048: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A104C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800A1050: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x800A1054: lw          $v0, 0x150($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X150);
    // 0x800A1058: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800A105C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x800A1060: lw          $t6, 0x150($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X150);
    // 0x800A1064: jr          $ra
    // 0x800A1068: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    return;
    // 0x800A1068: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800A106C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A106C: lw          $v0, 0x150($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X150);
    // 0x800A1070: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A1074: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800A1078: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A107C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x800A1080: lw          $v0, 0x150($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X150);
    // 0x800A1084: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800A1088: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x800A108C: lw          $t6, 0x150($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X150);
    // 0x800A1090: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    // 0x800A1094: lw          $t7, 0x150($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X150);
    // 0x800A1098: jr          $ra
    // 0x800A109C: swc1        $f14, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x800A109C: swc1        $f14, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800A10A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A10A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A10A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A10A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A10AC: lw          $t6, 0x150($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X150);
    // 0x800A10B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A10B4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800A10B8: jal         0x800964DC
    // 0x800A10BC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_800964DC(rdram, ctx);
        goto after_0;
    // 0x800A10BC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_0:
    // 0x800A10C0: lw          $t8, 0x150($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X150);
    // 0x800A10C4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800A10C8: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800A10CC: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800A10D0: beq         $t9, $zero, L_800A1128
    if (ctx->r25 == 0) {
        // 0x800A10D4: swc1        $f6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
            goto L_800A1128;
    }
    // 0x800A10D4: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x800A10D8: jal         0x80096524
    // 0x800A10DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096524(rdram, ctx);
        goto after_1;
    // 0x800A10DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A10E0: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A10E4: beql        $a0, $zero, L_800A1120
    if (ctx->r4 == 0) {
        // 0x800A10E8: lw          $t0, 0x150($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X150);
            goto L_800A1120;
    }
    goto skip_0;
    // 0x800A10E8: lw          $t0, 0x150($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X150);
    skip_0:
    // 0x800A10EC: jal         0x8009C150
    // 0x800A10F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_2;
    // 0x800A10F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A10F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A10F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A10FC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800A1100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A1104: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A1108: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x800A110C: nop

    // 0x800A1110: bc1fl       L_800A1120
    if (!c1cs) {
        // 0x800A1114: lw          $t0, 0x150($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X150);
            goto L_800A1120;
    }
    goto skip_1;
    // 0x800A1114: lw          $t0, 0x150($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X150);
    skip_1:
    // 0x800A1118: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A111C: lw          $t0, 0x150($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X150);
L_800A1120:
    // 0x800A1120: b           L_800A1174
    // 0x800A1124: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
        goto L_800A1174;
    // 0x800A1124: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
L_800A1128:
    // 0x800A1128: jal         0x80096524
    // 0x800A112C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096524(rdram, ctx);
        goto after_3;
    // 0x800A112C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A1130: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A1134: beql        $a0, $zero, L_800A1170
    if (ctx->r4 == 0) {
        // 0x800A1138: lw          $t1, 0x150($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X150);
            goto L_800A1170;
    }
    goto skip_2;
    // 0x800A1138: lw          $t1, 0x150($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X150);
    skip_2:
    // 0x800A113C: jal         0x8009C150
    // 0x800A1140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_4;
    // 0x800A1140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800A1144: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A1148: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A114C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800A1150: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A1154: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800A1158: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800A115C: nop

    // 0x800A1160: bc1fl       L_800A1170
    if (!c1cs) {
        // 0x800A1164: lw          $t1, 0x150($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X150);
            goto L_800A1170;
    }
    goto skip_3;
    // 0x800A1164: lw          $t1, 0x150($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X150);
    skip_3:
    // 0x800A1168: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A116C: lw          $t1, 0x150($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X150);
L_800A1170:
    // 0x800A1170: sb          $a0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r4;
L_800A1174:
    // 0x800A1174: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800A1178: bne         $t2, $zero, L_800A11BC
    if (ctx->r10 != 0) {
        // 0x800A117C: nop
    
            goto L_800A11BC;
    }
    // 0x800A117C: nop

    // 0x800A1180: lw          $t3, 0x150($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X150);
    // 0x800A1184: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x800A1188: beq         $t4, $zero, L_800A11BC
    if (ctx->r12 == 0) {
        // 0x800A118C: nop
    
            goto L_800A11BC;
    }
    // 0x800A118C: nop

    // 0x800A1190: jal         0x8009BB50
    // 0x800A1194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_5;
    // 0x800A1194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800A1198: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x800A119C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A11A0: nop

    // 0x800A11A4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800A11A8: nop

    // 0x800A11AC: bc1f        L_800A11BC
    if (!c1cs) {
        // 0x800A11B0: nop
    
            goto L_800A11BC;
    }
    // 0x800A11B0: nop

    // 0x800A11B4: jal         0x800A0E64
    // 0x800A11B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0E64(rdram, ctx);
        goto after_6;
    // 0x800A11B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_800A11BC:
    // 0x800A11BC: jal         0x800F3ED0
    // 0x800A11C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F3ED0(rdram, ctx);
        goto after_7;
    // 0x800A11C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800A11C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800A11C8: jal         0x800A0FD8
    // 0x800A11CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0FD8(rdram, ctx);
        goto after_8;
    // 0x800A11CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x800A11D0: beq         $v0, $zero, L_800A11E8
    if (ctx->r2 == 0) {
        // 0x800A11D4: nop
    
            goto L_800A11E8;
    }
    // 0x800A11D4: nop

    // 0x800A11D8: lw          $t6, 0x150($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X150);
    // 0x800A11DC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800A11E0: b           L_800A1218
    // 0x800A11E4: sb          $t5, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r13;
        goto L_800A1218;
    // 0x800A11E4: sb          $t5, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r13;
L_800A11E8:
    // 0x800A11E8: jal         0x8008E078
    // 0x800A11EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_9;
    // 0x800A11EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x800A11F0: bnel        $v0, $zero, L_800A1214
    if (ctx->r2 != 0) {
        // 0x800A11F4: lw          $t7, 0x150($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X150);
            goto L_800A1214;
    }
    goto skip_4;
    // 0x800A11F4: lw          $t7, 0x150($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X150);
    skip_4:
    // 0x800A11F8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800A11FC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A1200: beq         $v0, $at, L_800A1210
    if (ctx->r2 == ctx->r1) {
        // 0x800A1204: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_800A1210;
    }
    // 0x800A1204: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A1208: bne         $v0, $at, L_800A1218
    if (ctx->r2 != ctx->r1) {
        // 0x800A120C: nop
    
            goto L_800A1218;
    }
    // 0x800A120C: nop

L_800A1210:
    // 0x800A1210: lw          $t7, 0x150($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X150);
L_800A1214:
    // 0x800A1214: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
L_800A1218:
    // 0x800A1218: jal         0x80096518
    // 0x800A121C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096518(rdram, ctx);
        goto after_10;
    // 0x800A121C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800A1220: lw          $t8, 0x150($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X150);
    // 0x800A1224: sb          $v0, 0x2($t8)
    MEM_B(0X2, ctx->r24) = ctx->r2;
    // 0x800A1228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A122C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A1230: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800A1234: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A1244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1248: jal         0x800D5210
    // 0x800A124C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D5210(rdram, ctx);
        goto after_0;
    // 0x800A124C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A1250: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A1254: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A1258: addiu       $v1, $v1, 0x7090
    ctx->r3 = ADD32(ctx->r3, 0X7090);
    // 0x800A125C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x800A1260: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    // 0x800A1264: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x800A1268: jal         0x800D2748
    // 0x800A126C: sb          $t6, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r14;
    func_800D2748(rdram, ctx);
        goto after_1;
    // 0x800A126C: sb          $t6, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r14;
    after_1:
    // 0x800A1270: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A1274: addiu       $v1, $v1, 0x7090
    ctx->r3 = ADD32(ctx->r3, 0X7090);
    // 0x800A1278: lbu         $a1, 0x9($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X9);
    // 0x800A127C: jal         0x800D2748
    // 0x800A1280: addiu       $a0, $zero, 0xCD
    ctx->r4 = ADD32(0, 0XCD);
    func_800D2748(rdram, ctx);
        goto after_2;
    // 0x800A1280: addiu       $a0, $zero, 0xCD
    ctx->r4 = ADD32(0, 0XCD);
    after_2:
    // 0x800A1284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A128C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1294: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A1298: lbu         $t6, 0x7094($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7094);
    // 0x800A129C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A12A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A12A4: bne         $t6, $zero, L_800A1354
    if (ctx->r14 != 0) {
        // 0x800A12A8: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_800A1354;
    }
    // 0x800A12A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A12AC: jal         0x800D3948
    // 0x800A12B0: nop

    func_800D3948(rdram, ctx);
        goto after_0;
    // 0x800A12B0: nop

    after_0:
    // 0x800A12B4: bnel        $v0, $zero, L_800A1358
    if (ctx->r2 != 0) {
        // 0x800A12B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A1358;
    }
    goto skip_0;
    // 0x800A12B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A12BC: jal         0x800DA298
    // 0x800A12C0: addiu       $a0, $zero, 0x6B6
    ctx->r4 = ADD32(0, 0X6B6);
    func_800DA298(rdram, ctx);
        goto after_1;
    // 0x800A12C0: addiu       $a0, $zero, 0x6B6
    ctx->r4 = ADD32(0, 0X6B6);
    after_1:
    // 0x800A12C4: bnel        $v0, $zero, L_800A1358
    if (ctx->r2 != 0) {
        // 0x800A12C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A1358;
    }
    goto skip_1;
    // 0x800A12C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800A12CC: jal         0x800D3E40
    // 0x800A12D0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_800D3E40(rdram, ctx);
        goto after_2;
    // 0x800A12D0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_2:
    // 0x800A12D4: bne         $v0, $zero, L_800A1354
    if (ctx->r2 != 0) {
        // 0x800A12D8: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_800A1354;
    }
    // 0x800A12D8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A12DC: lbu         $t7, 0x7097($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7097);
    // 0x800A12E0: bnel        $t7, $zero, L_800A1358
    if (ctx->r15 != 0) {
        // 0x800A12E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A1358;
    }
    goto skip_2;
    // 0x800A12E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800A12E8: jal         0x8008FD48
    // 0x800A12EC: nop

    func_8008FD48(rdram, ctx);
        goto after_3;
    // 0x800A12EC: nop

    after_3:
    // 0x800A12F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A12F4: jal         0x800D4EB8
    // 0x800A12F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800D4EB8(rdram, ctx);
        goto after_4;
    // 0x800A12F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_4:
    // 0x800A12FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1300: beq         $v0, $zero, L_800A1354
    if (ctx->r2 == 0) {
        // 0x800A1304: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800A1354;
    }
    // 0x800A1304: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800A1308: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800A130C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A1310: beq         $t8, $zero, L_800A133C
    if (ctx->r24 == 0) {
        // 0x800A1314: nop
    
            goto L_800A133C;
    }
    // 0x800A1314: nop

    // 0x800A1318: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A131C: jal         0x800D4E7C
    // 0x800A1320: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800D4E7C(rdram, ctx);
        goto after_5;
    // 0x800A1320: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x800A1324: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A1328: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    // 0x800A132C: jal         0x800D2498
    // 0x800A1330: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800D2498(rdram, ctx);
        goto after_6;
    // 0x800A1330: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x800A1334: b           L_800A1358
    // 0x800A1338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A1358;
    // 0x800A1338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A133C:
    // 0x800A133C: jal         0x800D4E7C
    // 0x800A1340: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800D4E7C(rdram, ctx);
        goto after_7;
    // 0x800A1340: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_7:
    // 0x800A1344: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A1348: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    // 0x800A134C: jal         0x800D24E8
    // 0x800A1350: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800D24E8(rdram, ctx);
        goto after_8;
    // 0x800A1350: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
L_800A1354:
    // 0x800A1354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A1358:
    // 0x800A1358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A135C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A1368: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A136C: addiu       $v0, $v0, 0x7090
    ctx->r2 = ADD32(ctx->r2, 0X7090);
    // 0x800A1370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1374: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x800A1378: jal         0x800D517C
    // 0x800A137C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    func_800D517C(rdram, ctx);
        goto after_0;
    // 0x800A137C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    after_0:
    // 0x800A1380: jal         0x8009E958
    // 0x800A1384: nop

    func_8009E958(rdram, ctx);
        goto after_1;
    // 0x800A1384: nop

    after_1:
    // 0x800A1388: jal         0x800A1240
    // 0x800A138C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800A1240(rdram, ctx);
        goto after_2;
    // 0x800A138C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800A1390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A1398: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A13A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A13A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A13A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A13A8: jr          $ra
    // 0x800A13AC: sb          $t6, 0x7090($at)
    MEM_B(0X7090, ctx->r1) = ctx->r14;
    return;
    // 0x800A13AC: sb          $t6, 0x7090($at)
    MEM_B(0X7090, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A13B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A13B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A13B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A13B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A13BC: jal         0x80088258
    // 0x800A13C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _gcsectionDll_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800A13C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A13C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A13C8: jal         0x80088260
    // 0x800A13CC: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    _gcsectionDll_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800A13CC: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_1:
    // 0x800A13D0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A13D4: addiu       $s0, $s0, 0x7090
    ctx->r16 = ADD32(ctx->r16, 0X7090);
    // 0x800A13D8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x800A13DC: jal         0x800F8B64
    // 0x800A13E0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    func_800F8B64(rdram, ctx);
        goto after_2;
    // 0x800A13E0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    after_2:
    // 0x800A13E4: beq         $v0, $zero, L_800A13F8
    if (ctx->r2 == 0) {
        // 0x800A13E8: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_800A13F8;
    }
    // 0x800A13E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A13EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A13F0: sb          $t6, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r14;
    // 0x800A13F4: sb          $t7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r15;
L_800A13F8:
    // 0x800A13F8: jal         0x800F99E8
    // 0x800A13FC: nop

    func_800F99E8(rdram, ctx);
        goto after_3;
    // 0x800A13FC: nop

    after_3:
    // 0x800A1400: beq         $v0, $zero, L_800A1410
    if (ctx->r2 == 0) {
        // 0x800A1404: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_800A1410;
    }
    // 0x800A1404: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800A1408: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A140C: sb          $t8, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r24;
L_800A1410:
    // 0x800A1410: sb          $t9, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r25;
    // 0x800A1414: jal         0x80088258
    // 0x800A1418: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _gcsectionDll_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x800A1418: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x800A141C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A1420: jal         0x80088260
    // 0x800A1424: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    _gcsectionDll_entrypoint_3(rdram, ctx);
        goto after_5;
    // 0x800A1424: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_5:
    // 0x800A1428: beq         $v0, $zero, L_800A1438
    if (ctx->r2 == 0) {
        // 0x800A142C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_800A1438;
    }
    // 0x800A142C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800A1430: b           L_800A143C
    // 0x800A1434: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
        goto L_800A143C;
    // 0x800A1434: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
L_800A1438:
    // 0x800A1438: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_800A143C:
    // 0x800A143C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1440: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A1444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A1448: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1450: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A1454: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A1458: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800A145C: addiu       $s0, $s0, 0x7090
    ctx->r16 = ADD32(ctx->r16, 0X7090);
    // 0x800A1460: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
    // 0x800A1464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A1468: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800A146C: beql        $t6, $zero, L_800A1490
    if (ctx->r14 == 0) {
        // 0x800A1470: lbu         $t7, 0x0($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X0);
            goto L_800A1490;
    }
    goto skip_0;
    // 0x800A1470: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    skip_0:
    // 0x800A1474: jal         0x8008FD48
    // 0x800A1478: nop

    func_8008FD48(rdram, ctx);
        goto after_0;
    // 0x800A1478: nop

    after_0:
    // 0x800A147C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A1480: jal         0x800D5034
    // 0x800A1484: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800D5034(rdram, ctx);
        goto after_1;
    // 0x800A1484: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800A1488: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x800A148C: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
L_800A1490:
    // 0x800A1490: beql        $t7, $zero, L_800A14C4
    if (ctx->r15 == 0) {
        // 0x800A1494: lbu         $t0, 0x4($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X4);
            goto L_800A14C4;
    }
    goto skip_1;
    // 0x800A1494: lbu         $t0, 0x4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4);
    skip_1:
    // 0x800A1498: jal         0x80090128
    // 0x800A149C: nop

    func_80090128(rdram, ctx);
        goto after_2;
    // 0x800A149C: nop

    after_2:
    // 0x800A14A0: beql        $v0, $zero, L_800A14C0
    if (ctx->r2 == 0) {
        // 0x800A14A4: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_800A14C0;
    }
    goto skip_2;
    // 0x800A14A4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_2:
    // 0x800A14A8: lbu         $t8, 0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2);
    // 0x800A14AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800A14B0: bnel        $t8, $zero, L_800A14C0
    if (ctx->r24 != 0) {
        // 0x800A14B4: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_800A14C0;
    }
    goto skip_3;
    // 0x800A14B4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_3:
    // 0x800A14B8: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
    // 0x800A14BC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_800A14C0:
    // 0x800A14C0: lbu         $t0, 0x4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4);
L_800A14C4:
    // 0x800A14C4: beql        $t0, $zero, L_800A14E4
    if (ctx->r8 == 0) {
        // 0x800A14C8: lbu         $t1, 0x1($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X1);
            goto L_800A14E4;
    }
    goto skip_4;
    // 0x800A14C8: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
    skip_4:
    // 0x800A14CC: jal         0x8008FD48
    // 0x800A14D0: nop

    func_8008FD48(rdram, ctx);
        goto after_3;
    // 0x800A14D0: nop

    after_3:
    // 0x800A14D4: jal         0x800A1240
    // 0x800A14D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800A1240(rdram, ctx);
        goto after_4;
    // 0x800A14D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800A14DC: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x800A14E0: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
L_800A14E4:
    // 0x800A14E4: beq         $t1, $zero, L_800A1508
    if (ctx->r9 == 0) {
        // 0x800A14E8: nop
    
            goto L_800A1508;
    }
    // 0x800A14E8: nop

    // 0x800A14EC: jal         0x800C95D4
    // 0x800A14F0: nop

    func_800C95D4(rdram, ctx);
        goto after_5;
    // 0x800A14F0: nop

    after_5:
    // 0x800A14F4: beq         $v0, $zero, L_800A152C
    if (ctx->r2 == 0) {
        // 0x800A14F8: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_800A152C;
    }
    // 0x800A14F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A14FC: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x800A1500: b           L_800A152C
    // 0x800A1504: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
        goto L_800A152C;
    // 0x800A1504: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_800A1508:
    // 0x800A1508: jal         0x8008FD48
    // 0x800A150C: nop

    func_8008FD48(rdram, ctx);
        goto after_6;
    // 0x800A150C: nop

    after_6:
    // 0x800A1510: jal         0x800D4E7C
    // 0x800A1514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D4E7C(rdram, ctx);
        goto after_7;
    // 0x800A1514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x800A1518: beq         $v0, $zero, L_800A152C
    if (ctx->r2 == 0) {
        // 0x800A151C: slti        $at, $v0, 0x3
        ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_800A152C;
    }
    // 0x800A151C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x800A1520: beq         $at, $zero, L_800A152C
    if (ctx->r1 == 0) {
        // 0x800A1524: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_800A152C;
    }
    // 0x800A1524: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800A1528: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_800A152C:
    // 0x800A152C: lbu         $t4, 0x7($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X7);
    // 0x800A1530: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A1534: beq         $t4, $zero, L_800A15D8
    if (ctx->r12 == 0) {
        // 0x800A1538: nop
    
            goto L_800A15D8;
    }
    // 0x800A1538: nop

    // 0x800A153C: jal         0x800A1624
    // 0x800A1540: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_800A1624(rdram, ctx);
        goto after_8;
    // 0x800A1540: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_8:
    // 0x800A1544: jal         0x800CE864
    // 0x800A1548: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CE864(rdram, ctx);
        goto after_9;
    // 0x800A1548: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x800A154C: jal         0x800CF7F4
    // 0x800A1550: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CF7F4(rdram, ctx);
        goto after_10;
    // 0x800A1550: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x800A1554: jal         0x800D2820
    // 0x800A1558: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    func_800D2820(rdram, ctx);
        goto after_11;
    // 0x800A1558: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    after_11:
    // 0x800A155C: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A1560: bnel        $v1, $zero, L_800A1578
    if (ctx->r3 != 0) {
        // 0x800A1564: lbu         $t5, 0x8($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X8);
            goto L_800A1578;
    }
    goto skip_5;
    // 0x800A1564: lbu         $t5, 0x8($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X8);
    skip_5:
    // 0x800A1568: jal         0x800D2820
    // 0x800A156C: addiu       $a0, $zero, 0xCD
    ctx->r4 = ADD32(0, 0XCD);
    func_800D2820(rdram, ctx);
        goto after_12;
    // 0x800A156C: addiu       $a0, $zero, 0xCD
    ctx->r4 = ADD32(0, 0XCD);
    after_12:
    // 0x800A1570: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A1574: lbu         $t5, 0x8($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X8);
L_800A1578:
    // 0x800A1578: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x800A157C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800A1580: beq         $t5, $at, L_800A15A0
    if (ctx->r13 == ctx->r1) {
        // 0x800A1584: addiu       $a0, $zero, 0xC9
        ctx->r4 = ADD32(0, 0XC9);
            goto L_800A15A0;
    }
    // 0x800A1584: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    // 0x800A1588: jal         0x800D284C
    // 0x800A158C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800D284C(rdram, ctx);
        goto after_13;
    // 0x800A158C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_13:
    // 0x800A1590: jal         0x800D2820
    // 0x800A1594: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    func_800D2820(rdram, ctx);
        goto after_14;
    // 0x800A1594: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    after_14:
    // 0x800A1598: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A159C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
L_800A15A0:
    // 0x800A15A0: bne         $a1, $zero, L_800A15D8
    if (ctx->r5 != 0) {
        // 0x800A15A4: nop
    
            goto L_800A15D8;
    }
    // 0x800A15A4: nop

    // 0x800A15A8: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x800A15AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A15B0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x800A15B4: bnel        $v0, $at, L_800A15D8
    if (ctx->r2 != ctx->r1) {
        // 0x800A15B8: sb          $zero, 0x6($s0)
        MEM_B(0X6, ctx->r16) = 0;
            goto L_800A15D8;
    }
    goto skip_6;
    // 0x800A15B8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    skip_6:
    // 0x800A15BC: jal         0x800A1240
    // 0x800A15C0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    func_800A1240(rdram, ctx);
        goto after_15;
    // 0x800A15C0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    after_15:
    // 0x800A15C4: jal         0x800A1294
    // 0x800A15C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A1294(rdram, ctx);
        goto after_16;
    // 0x800A15C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x800A15CC: b           L_800A15D8
    // 0x800A15D0: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
        goto L_800A15D8;
    // 0x800A15D0: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x800A15D4: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
L_800A15D8:
    // 0x800A15D8: jal         0x80090128
    // 0x800A15DC: nop

    func_80090128(rdram, ctx);
        goto after_17;
    // 0x800A15DC: nop

    after_17:
    // 0x800A15E0: beq         $v0, $zero, L_800A1604
    if (ctx->r2 == 0) {
        // 0x800A15E4: lw          $t6, 0x2C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X2C);
            goto L_800A1604;
    }
    // 0x800A15E4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A15E8: beql        $t6, $zero, L_800A1608
    if (ctx->r14 == 0) {
        // 0x800A15EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A1608;
    }
    goto skip_7;
    // 0x800A15EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x800A15F0: lbu         $t7, 0x5($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5);
    // 0x800A15F4: bnel        $t7, $zero, L_800A1608
    if (ctx->r15 != 0) {
        // 0x800A15F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A1608;
    }
    goto skip_8;
    // 0x800A15F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x800A15FC: jal         0x800A1294
    // 0x800A1600: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A1294(rdram, ctx);
        goto after_18;
    // 0x800A1600: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
L_800A1604:
    // 0x800A1604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A1608:
    // 0x800A1608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A160C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800A1610: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1618: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A161C: jr          $ra
    // 0x800A1620: sb          $a0, 0x7092($at)
    MEM_B(0X7092, ctx->r1) = ctx->r4;
    return;
    // 0x800A1620: sb          $a0, 0x7092($at)
    MEM_B(0X7092, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800A1624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A1628: beq         $a0, $zero, L_800A1640
    if (ctx->r4 == 0) {
        // 0x800A162C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800A1640;
    }
    // 0x800A162C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1630: jal         0x800A1294
    // 0x800A1634: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A1294(rdram, ctx);
        goto after_0;
    // 0x800A1634: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800A1638: b           L_800A164C
    // 0x800A163C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A164C;
    // 0x800A163C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A1640:
    // 0x800A1640: jal         0x800D284C
    // 0x800A1644: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    func_800D284C(rdram, ctx);
        goto after_1;
    // 0x800A1644: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    after_1:
    // 0x800A1648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A164C:
    // 0x800A164C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A1650: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1658: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800A165C: addiu       $v1, $v1, 0x7090
    ctx->r3 = ADD32(ctx->r3, 0X7090);
    // 0x800A1660: lbu         $t6, 0x6($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X6);
    // 0x800A1664: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A1668: bnel        $a0, $t6, L_800A1688
    if (ctx->r4 != ctx->r14) {
        // 0x800A166C: sb          $t7, 0x7($v1)
        MEM_B(0X7, ctx->r3) = ctx->r15;
            goto L_800A1688;
    }
    goto skip_0;
    // 0x800A166C: sb          $t7, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r15;
    skip_0:
    // 0x800A1670: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x800A1674: beq         $v0, $zero, L_800A168C
    if (ctx->r2 == 0) {
        // 0x800A1678: nop
    
            goto L_800A168C;
    }
    // 0x800A1678: nop

    // 0x800A167C: beq         $a0, $v0, L_800A168C
    if (ctx->r4 == ctx->r2) {
        // 0x800A1680: nop
    
            goto L_800A168C;
    }
    // 0x800A1680: nop

    // 0x800A1684: sb          $t7, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r15;
L_800A1688:
    // 0x800A1688: sb          $a0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r4;
L_800A168C:
    // 0x800A168C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1694: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A1698: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A169C: jr          $ra
    // 0x800A16A0: sb          $t6, 0x7097($at)
    MEM_B(0X7097, ctx->r1) = ctx->r14;
    return;
    // 0x800A16A0: sb          $t6, 0x7097($at)
    MEM_B(0X7097, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A16A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A16A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A16A8: jr          $ra
    // 0x800A16AC: lbu         $v0, 0x7097($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7097);
    return;
    // 0x800A16AC: lbu         $v0, 0x7097($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7097);
;}
RECOMP_FUNC void func_800A16B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A16B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A16B4: jr          $ra
    // 0x800A16B8: lbu         $v0, 0x7099($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7099);
    return;
    // 0x800A16B8: lbu         $v0, 0x7099($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7099);
;}
RECOMP_FUNC void func_800A16BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A16BC: beq         $a0, $zero, L_800A16DC
    if (ctx->r4 == 0) {
            // 0x800A16C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    func_800A16DC(rdram, ctx);
    return;
    }
    // 0x800A16C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A16C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A16C8: addiu       $v0, $v0, 0x7090
    ctx->r2 = ADD32(ctx->r2, 0X7090);
    // 0x800A16CC: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x800A16D0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800A16D4: jr          $ra
    // 0x800A16D8: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    return;
    // 0x800A16D8: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_800A16DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A16DC: addiu       $v0, $v0, 0x7090
    ctx->r2 = ADD32(ctx->r2, 0X7090);
    // 0x800A16E0: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x800A16E4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800A16E8: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
    // 0x800A16EC: jr          $ra
    // 0x800A16F0: nop

    return;
    // 0x800A16F0: nop

;}
RECOMP_FUNC void func_800A16F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A16F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A16F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A16FC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x800A1700: jal         0x80085338
    // 0x800A1704: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    _batimer_set(rdram, ctx);
        goto after_0;
    // 0x800A1704: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_0:
    // 0x800A1708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A170C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A1710: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A171C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1720: lw          $t6, 0x158($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X158);
    // 0x800A1724: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A1728: beq         $t6, $zero, L_800A1740
    if (ctx->r14 == 0) {
        // 0x800A172C: nop
    
            goto L_800A1740;
    }
    // 0x800A172C: nop

    // 0x800A1730: jal         0x800F9F04
    // 0x800A1734: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F9F04(rdram, ctx);
        goto after_0;
    // 0x800A1734: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x800A1738: b           L_800A1754
    // 0x800A173C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A1754;
    // 0x800A173C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A1740:
    // 0x800A1740: jal         0x800A3274
    // 0x800A1744: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x800A1744: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x800A1748: jal         0x800D4E7C
    // 0x800A174C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D4E7C(rdram, ctx);
        goto after_2;
    // 0x800A174C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800A1750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A1754:
    // 0x800A1754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A1758: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A1764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1768: lw          $t6, 0x158($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X158);
    // 0x800A176C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A1770: beq         $t6, $zero, L_800A1788
    if (ctx->r14 == 0) {
        // 0x800A1774: nop
    
            goto L_800A1788;
    }
    // 0x800A1774: nop

    // 0x800A1778: jal         0x800F9F18
    // 0x800A177C: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F9F18(rdram, ctx);
        goto after_0;
    // 0x800A177C: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x800A1780: b           L_800A179C
    // 0x800A1784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A179C;
    // 0x800A1784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A1788:
    // 0x800A1788: jal         0x800A3274
    // 0x800A178C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x800A178C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x800A1790: jal         0x800D4EB8
    // 0x800A1794: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D4EB8(rdram, ctx);
        goto after_2;
    // 0x800A1794: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800A1798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A179C:
    // 0x800A179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A17A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A17A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A17A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A17AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A17B0: lw          $t6, 0x158($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X158);
    // 0x800A17B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A17B8: beql        $t6, $zero, L_800A17D4
    if (ctx->r14 == 0) {
        // 0x800A17BC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_800A17D4;
    }
    goto skip_0;
    // 0x800A17BC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_0:
    // 0x800A17C0: jal         0x800F9EC0
    // 0x800A17C4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F9EC0(rdram, ctx);
        goto after_0;
    // 0x800A17C4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x800A17C8: b           L_800A1864
    // 0x800A17CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A1864;
    // 0x800A17CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A17D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_800A17D4:
    // 0x800A17D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A17D8: jal         0x800A3274
    // 0x800A17DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x800A17DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x800A17E0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A17E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A17E8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A17EC: bgezl       $a1, L_800A1804
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800A17F0: sw          $a0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r4;
            goto L_800A1804;
    }
    goto skip_1;
    // 0x800A17F0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    skip_1:
    // 0x800A17F4: lbu         $t7, 0x7092($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7092);
    // 0x800A17F8: bnel        $t7, $zero, L_800A1864
    if (ctx->r15 != 0) {
        // 0x800A17FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A1864;
    }
    goto skip_2;
    // 0x800A17FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800A1800: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
L_800A1804:
    // 0x800A1804: jal         0x800D4EB8
    // 0x800A1808: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800D4EB8(rdram, ctx);
        goto after_2;
    // 0x800A1808: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_2:
    // 0x800A180C: beq         $v0, $zero, L_800A1860
    if (ctx->r2 == 0) {
        // 0x800A1810: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_800A1860;
    }
    // 0x800A1810: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A1814: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x800A1818: jal         0x800D3E40
    // 0x800A181C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800D3E40(rdram, ctx);
        goto after_3;
    // 0x800A181C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_3:
    // 0x800A1820: beq         $v0, $zero, L_800A1834
    if (ctx->r2 == 0) {
        // 0x800A1824: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_800A1834;
    }
    // 0x800A1824: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A1828: jal         0x800D4EB8
    // 0x800A182C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800D4EB8(rdram, ctx);
        goto after_4;
    // 0x800A182C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x800A1830: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_800A1834:
    // 0x800A1834: jal         0x800D4E18
    // 0x800A1838: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800D4E18(rdram, ctx);
        goto after_5;
    // 0x800A1838: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_5:
    // 0x800A183C: jal         0x800A1294
    // 0x800A1840: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A1294(rdram, ctx);
        goto after_6;
    // 0x800A1840: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x800A1844: jal         0x800D3E40
    // 0x800A1848: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800D3E40(rdram, ctx);
        goto after_7;
    // 0x800A1848: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x800A184C: beq         $v0, $zero, L_800A1860
    if (ctx->r2 == 0) {
        // 0x800A1850: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800A1860;
    }
    // 0x800A1850: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A1854: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x800A1858: jal         0x80085338
    // 0x800A185C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    _batimer_set(rdram, ctx);
        goto after_8;
    // 0x800A185C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_8:
L_800A1860:
    // 0x800A1860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A1864:
    // 0x800A1864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A1868: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A1874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1878: lw          $t6, 0x158($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X158);
    // 0x800A187C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A1880: beql        $t6, $zero, L_800A189C
    if (ctx->r14 == 0) {
        // 0x800A1884: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_800A189C;
    }
    goto skip_0;
    // 0x800A1884: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_0:
    // 0x800A1888: jal         0x800F9F2C
    // 0x800A188C: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F9F2C(rdram, ctx);
        goto after_0;
    // 0x800A188C: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x800A1890: b           L_800A18BC
    // 0x800A1894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A18BC;
    // 0x800A1894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1898: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_800A189C:
    // 0x800A189C: jal         0x800A3274
    // 0x800A18A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x800A18A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x800A18A4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800A18A8: jal         0x800D4FB8
    // 0x800A18AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D4FB8(rdram, ctx);
        goto after_2;
    // 0x800A18AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800A18B0: jal         0x800A1294
    // 0x800A18B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A1294(rdram, ctx);
        goto after_3;
    // 0x800A18B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800A18B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A18BC:
    // 0x800A18BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A18C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A18C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A18C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A18CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A18D0: jal         0x800F9F74
    // 0x800A18D4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F9F74(rdram, ctx);
        goto after_0;
    // 0x800A18D4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x800A18D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A18DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A18E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A18E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A18E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A18EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A18F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A18F4: jal         0x800852F0
    // 0x800A18F8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x800A18F8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x800A18FC: beql        $v0, $zero, L_800A1950
    if (ctx->r2 == 0) {
        // 0x800A1900: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A1950;
    }
    goto skip_0;
    // 0x800A1900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A1904: jal         0x800A3274
    // 0x800A1908: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x800A1908: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800A190C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800A1910: jal         0x800D4E7C
    // 0x800A1914: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D4E7C(rdram, ctx);
        goto after_2;
    // 0x800A1914: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800A1918: beq         $v0, $zero, L_800A194C
    if (ctx->r2 == 0) {
        // 0x800A191C: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800A194C;
    }
    // 0x800A191C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1920: jal         0x800D4EB8
    // 0x800A1924: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800D4EB8(rdram, ctx);
        goto after_3;
    // 0x800A1924: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x800A1928: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800A192C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A1930: beql        $at, $zero, L_800A1950
    if (ctx->r1 == 0) {
        // 0x800A1934: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A1950;
    }
    goto skip_1;
    // 0x800A1934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800A1938: jal         0x800FC660
    // 0x800A193C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800FC660(rdram, ctx);
        goto after_4;
    // 0x800A193C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_4:
    // 0x800A1940: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A1944: jal         0x800A17A8
    // 0x800A1948: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A17A8(rdram, ctx);
        goto after_5;
    // 0x800A1948: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_800A194C:
    // 0x800A194C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A1950:
    // 0x800A1950: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A1954: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1960: jr          $ra
    // 0x800A1964: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x800A1964: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void func_800A1968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1968: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x800A196C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x800A1970: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1974: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800A1978: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800A197C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800A1980: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800A1984: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800A1988: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800A198C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800A1990: sw          $a0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r4;
    // 0x800A1994: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800A1998: swc1        $f24, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f24.u32l;
    // 0x800A199C: swc1        $f24, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f24.u32l;
    // 0x800A19A0: swc1        $f24, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f24.u32l;
    // 0x800A19A4: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x800A19A8: jal         0x80091E80
    // 0x800A19AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80091E80(rdram, ctx);
        goto after_0;
    // 0x800A19AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x800A19B0: beq         $v0, $zero, L_800A1EE8
    if (ctx->r2 == 0) {
        // 0x800A19B4: lw          $a0, 0x128($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X128);
            goto L_800A1EE8;
    }
    // 0x800A19B4: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x800A19B8: jal         0x8009C128
    // 0x800A19BC: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x800A19BC: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    after_1:
    // 0x800A19C0: jal         0x80096364
    // 0x800A19C4: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    func_80096364(rdram, ctx);
        goto after_2;
    // 0x800A19C4: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    after_2:
    // 0x800A19C8: lwc1        $f6, 0x120($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X120);
    // 0x800A19CC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x800A19D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A19D4: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x800A19D8: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x800A19DC: nop

    // 0x800A19E0: bc1tl       L_800A1EEC
    if (c1cs) {
        // 0x800A19E4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800A1EEC;
    }
    goto skip_0;
    // 0x800A19E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x800A19E8: jal         0x80096628
    // 0x800A19EC: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    func_80096628(rdram, ctx);
        goto after_3;
    // 0x800A19EC: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    after_3:
    // 0x800A19F0: sll         $t6, $v0, 10
    ctx->r14 = S32(ctx->r2 << 10);
    // 0x800A19F4: bltz        $t6, L_800A1EE8
    if (SIGNED(ctx->r14) < 0) {
        // 0x800A19F8: sw          $v0, 0xF4($sp)
        MEM_W(0XF4, ctx->r29) = ctx->r2;
            goto L_800A1EE8;
    }
    // 0x800A19F8: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    // 0x800A19FC: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
    // 0x800A1A00: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800A1A04: jal         0x80096604
    // 0x800A1A08: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    func_80096604(rdram, ctx);
        goto after_4;
    // 0x800A1A08: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    after_4:
    // 0x800A1A0C: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x800A1A10: jal         0x800965E0
    // 0x800A1A14: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    func_800965E0(rdram, ctx);
        goto after_5;
    // 0x800A1A14: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    after_5:
    // 0x800A1A18: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800A1A1C: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    // 0x800A1A20: addiu       $t0, $sp, 0x9C
    ctx->r8 = ADD32(ctx->r29, 0X9C);
    // 0x800A1A24: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    // 0x800A1A28: addiu       $t1, $sp, 0xCC
    ctx->r9 = ADD32(ctx->r29, 0XCC);
    // 0x800A1A2C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_800A1A30:
    // 0x800A1A30: swc1        $f22, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f22.u32l;
    // 0x800A1A34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A1A38: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x800A1A3C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_800A1A40:
    // 0x800A1A40: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x800A1A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800A1A48: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A1A4C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A1A50: bne         $v0, $a1, L_800A1A40
    if (ctx->r2 != ctx->r5) {
        // 0x800A1A54: sw          $t7, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r15;
            goto L_800A1A40;
    }
    // 0x800A1A54: sw          $t7, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r15;
    // 0x800A1A58: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800A1A5C: sltu        $at, $a2, $t1
    ctx->r1 = ctx->r6 < ctx->r9 ? 1 : 0;
    // 0x800A1A60: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x800A1A64: bne         $at, $zero, L_800A1A30
    if (ctx->r1 != 0) {
        // 0x800A1A68: addiu       $t0, $t0, 0xC
        ctx->r8 = ADD32(ctx->r8, 0XC);
            goto L_800A1A30;
    }
    // 0x800A1A68: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x800A1A6C: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x800A1A70: jal         0x800F36D4
    // 0x800A1A74: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    func_800F36D4(rdram, ctx);
        goto after_6;
    // 0x800A1A74: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    after_6:
    // 0x800A1A78: beq         $v0, $zero, L_800A1AA4
    if (ctx->r2 == 0) {
        // 0x800A1A7C: addiu       $s0, $sp, 0x9C
        ctx->r16 = ADD32(ctx->r29, 0X9C);
            goto L_800A1AA4;
    }
    // 0x800A1A7C: addiu       $s0, $sp, 0x9C
    ctx->r16 = ADD32(ctx->r29, 0X9C);
    // 0x800A1A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A1A84: jal         0x800F36D4
    // 0x800A1A88: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    func_800F36D4(rdram, ctx);
        goto after_7;
    // 0x800A1A88: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    after_7:
    // 0x800A1A8C: beq         $v0, $zero, L_800A1AA4
    if (ctx->r2 == 0) {
        // 0x800A1A90: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800A1AA4;
    }
    // 0x800A1A90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A1A94: jal         0x800EE84C
    // 0x800A1A98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE84C(rdram, ctx);
        goto after_8;
    // 0x800A1A98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800A1A9C: b           L_800A1CC4
    // 0x800A1AA0: nop

        goto L_800A1CC4;
    // 0x800A1AA0: nop

L_800A1AA4:
    // 0x800A1AA4: swc1        $f22, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f22.u32l;
    // 0x800A1AA8: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
    // 0x800A1AAC: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x800A1AB0: jal         0x800EFB24
    // 0x800A1AB4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EFB24(rdram, ctx);
        goto after_9;
    // 0x800A1AB4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x800A1AB8: swc1        $f22, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f22.u32l;
    // 0x800A1ABC: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x800A1AC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800A1AC4: jal         0x800EFB24
    // 0x800A1AC8: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    func_800EFB24(rdram, ctx);
        goto after_10;
    // 0x800A1AC8: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_10:
    // 0x800A1ACC: addiu       $s0, $sp, 0xE4
    ctx->r16 = ADD32(ctx->r29, 0XE4);
    // 0x800A1AD0: swc1        $f22, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f22.u32l;
    // 0x800A1AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A1AD8: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x800A1ADC: jal         0x800EFB24
    // 0x800A1AE0: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    func_800EFB24(rdram, ctx);
        goto after_11;
    // 0x800A1AE0: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_11:
    // 0x800A1AE4: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x800A1AE8: lwc1        $f0, 0xE4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800A1AEC: swc1        $f22, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f22.u32l;
    // 0x800A1AF0: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x800A1AF4: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
    // 0x800A1AF8: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    // 0x800A1AFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A1B00: jal         0x800EEAA4
    // 0x800A1B04: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    func_800EEAA4(rdram, ctx);
        goto after_12;
    // 0x800A1B04: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x800A1B08: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x800A1B0C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800A1B10: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x800A1B14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A1B18: bc1f        L_800A1B24
    if (!c1cs) {
        // 0x800A1B1C: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800A1B24;
    }
    // 0x800A1B1C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A1B20: lwc1        $f12, 0x54A0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X54A0);
L_800A1B24:
    // 0x800A1B24: jal         0x800EEAA4
    // 0x800A1B28: swc1        $f12, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f12.u32l;
    func_800EEAA4(rdram, ctx);
        goto after_13;
    // 0x800A1B28: swc1        $f12, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f12.u32l;
    after_13:
    // 0x800A1B2C: lwc1        $f12, 0x100($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X100);
    // 0x800A1B30: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x800A1B34: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x800A1B38: div.s       $f2, $f18, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800A1B3C: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800A1B40: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800A1B44: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x800A1B48: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A1B4C: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800A1B50: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800A1B54: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x800A1B58: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800A1B5C: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800A1B60: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800A1B64: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800A1B68: jal         0x800EFA4C
    // 0x800A1B6C: nop

    func_800EFA4C(rdram, ctx);
        goto after_14;
    // 0x800A1B6C: nop

    after_14:
    // 0x800A1B70: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    // 0x800A1B74: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x800A1B78: jal         0x800EFB24
    // 0x800A1B7C: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    func_800EFB24(rdram, ctx);
        goto after_15;
    // 0x800A1B7C: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_15:
    // 0x800A1B80: jal         0x800EEF94
    // 0x800A1B84: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    func_800EEF94(rdram, ctx);
        goto after_16;
    // 0x800A1B84: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    after_16:
    // 0x800A1B88: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800A1B8C: jal         0x800EEF94
    // 0x800A1B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EEF94(rdram, ctx);
        goto after_17;
    // 0x800A1B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x800A1B94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A1B98: lwc1        $f8, 0x54A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X54A4);
    // 0x800A1B9C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A1BA0: addiu       $v0, $sp, 0x9C
    ctx->r2 = ADD32(ctx->r29, 0X9C);
    // 0x800A1BA4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x800A1BA8: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x800A1BAC: div.s       $f2, $f20, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f10.fl);
    // 0x800A1BB0: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x800A1BB4: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x800A1BB8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A1BBC: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800A1BC0: beq         $at, $zero, L_800A1C00
    if (ctx->r1 == 0) {
        // 0x800A1BC4: subu        $t9, $t8, $a0
        ctx->r25 = SUB32(ctx->r24, ctx->r4);
            goto L_800A1C00;
    }
    // 0x800A1BC4: subu        $t9, $t8, $a0
    ctx->r25 = SUB32(ctx->r24, ctx->r4);
L_800A1BC8:
    // 0x800A1BC8: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x800A1BCC: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x800A1BD0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A1BD4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x800A1BD8: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800A1BDC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A1BE0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800A1BE4: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x800A1BE8: add.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x800A1BEC: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x800A1BF0: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x800A1BF4: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x800A1BF8: bne         $at, $zero, L_800A1BC8
    if (ctx->r1 != 0) {
        // 0x800A1BFC: subu        $t9, $t8, $a0
        ctx->r25 = SUB32(ctx->r24, ctx->r4);
            goto L_800A1BC8;
    }
    // 0x800A1BFC: subu        $t9, $t8, $a0
    ctx->r25 = SUB32(ctx->r24, ctx->r4);
L_800A1C00:
    // 0x800A1C00: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x800A1C04: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x800A1C08: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A1C0C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x800A1C10: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800A1C14: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x800A1C18: add.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x800A1C1C: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x800A1C20: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    // 0x800A1C24: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x800A1C28: jal         0x800EFB24
    // 0x800A1C2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EFB24(rdram, ctx);
        goto after_18;
    // 0x800A1C2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_18:
    // 0x800A1C30: jal         0x800EEF94
    // 0x800A1C34: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
    func_800EEF94(rdram, ctx);
        goto after_19;
    // 0x800A1C34: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
    after_19:
    // 0x800A1C38: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800A1C3C: jal         0x800EEF94
    // 0x800A1C40: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    func_800EEF94(rdram, ctx);
        goto after_20;
    // 0x800A1C40: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    after_20:
    // 0x800A1C44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A1C48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A1C4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A1C50: lwc1        $f18, 0x54A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X54A8);
    // 0x800A1C54: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A1C58: addiu       $v0, $sp, 0x9C
    ctx->r2 = ADD32(ctx->r29, 0X9C);
    // 0x800A1C5C: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x800A1C60: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x800A1C64: div.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f4.fl);
    // 0x800A1C68: sub.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x800A1C6C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A1C70: beq         $v0, $a0, L_800A1CA4
    if (ctx->r2 == ctx->r4) {
        // 0x800A1C74: lw          $t2, -0x4($v0)
        ctx->r10 = MEM_W(ctx->r2, -0X4);
            goto L_800A1CA4;
    }
    // 0x800A1C74: lw          $t2, -0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, -0X4);
L_800A1C78:
    // 0x800A1C78: mtc1        $t2, $f20
    ctx->f20.u32l = ctx->r10;
    // 0x800A1C7C: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A1C80: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A1C84: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x800A1C88: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A1C8C: sub.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f18.fl;
    // 0x800A1C90: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x800A1C94: add.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x800A1C98: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x800A1C9C: bne         $v0, $a0, L_800A1C78
    if (ctx->r2 != ctx->r4) {
        // 0x800A1CA0: lw          $t2, -0x4($v0)
        ctx->r10 = MEM_W(ctx->r2, -0X4);
            goto L_800A1C78;
    }
    // 0x800A1CA0: lw          $t2, -0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, -0X4);
L_800A1CA4:
    // 0x800A1CA4: mtc1        $t2, $f20
    ctx->f20.u32l = ctx->r10;
    // 0x800A1CA8: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A1CAC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A1CB0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x800A1CB4: sub.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f18.fl;
    // 0x800A1CB8: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x800A1CBC: add.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x800A1CC0: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
L_800A1CC4:
    // 0x800A1CC4: jal         0x800962D4
    // 0x800A1CC8: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    func_800962D4(rdram, ctx);
        goto after_21;
    // 0x800A1CC8: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    after_21:
    // 0x800A1CCC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x800A1CD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A1CD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A1CD8: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A1CDC: div.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
L_800A1CE0:
    // 0x800A1CE0: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A1CE4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A1CE8: slti        $at, $a0, 0x3
    ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x800A1CEC: sub.s       $f8, $f24, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x800A1CF0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A1CF4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800A1CF8: add.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x800A1CFC: bne         $at, $zero, L_800A1CE0
    if (ctx->r1 != 0) {
        // 0x800A1D00: swc1        $f18, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
            goto L_800A1CE0;
    }
    // 0x800A1D00: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x800A1D04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A1D08: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
L_800A1D0C:
    // 0x800A1D0C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A1D10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A1D14: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x800A1D18: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x800A1D1C: nop

    // 0x800A1D20: bc1fl       L_800A1D34
    if (!c1cs) {
        // 0x800A1D24: c.lt.s      $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
            goto L_800A1D34;
    }
    goto skip_1;
    // 0x800A1D24: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    skip_1:
    // 0x800A1D28: swc1        $f24, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f24.u32l;
    // 0x800A1D2C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A1D30: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
L_800A1D34:
    // 0x800A1D34: nop

    // 0x800A1D38: bc1f        L_800A1D44
    if (!c1cs) {
        // 0x800A1D3C: nop
    
            goto L_800A1D44;
    }
    // 0x800A1D3C: nop

    // 0x800A1D40: swc1        $f22, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f22.u32l;
L_800A1D44:
    // 0x800A1D44: bne         $at, $zero, L_800A1D0C
    if (ctx->r1 != 0) {
        // 0x800A1D48: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800A1D0C;
    }
    // 0x800A1D48: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A1D4C: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x800A1D50: jal         0x80091E80
    // 0x800A1D54: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80091E80(rdram, ctx);
        goto after_22;
    // 0x800A1D54: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_22:
    // 0x800A1D58: beql        $v0, $zero, L_800A1DFC
    if (ctx->r2 == 0) {
        // 0x800A1D5C: lw          $t8, 0x128($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X128);
            goto L_800A1DFC;
    }
    goto skip_2;
    // 0x800A1D5C: lw          $t8, 0x128($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X128);
    skip_2:
    // 0x800A1D60: jal         0x800965D4
    // 0x800A1D64: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    func_800965D4(rdram, ctx);
        goto after_23;
    // 0x800A1D64: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    after_23:
    // 0x800A1D68: beq         $v0, $zero, L_800A1DF8
    if (ctx->r2 == 0) {
        // 0x800A1D6C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800A1DF8;
    }
    // 0x800A1D6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A1D70: jal         0x80106790
    // 0x800A1D74: nop

    func_80106790(rdram, ctx);
        goto after_24;
    // 0x800A1D74: nop

    after_24:
    // 0x800A1D78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A1D7C: jal         0x80089CD8
    // 0x800A1D80: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    _subaddiefade_entrypoint_9(rdram, ctx);
        goto after_25;
    // 0x800A1D80: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_25:
    // 0x800A1D84: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A1D88: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
    // 0x800A1D8C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x800A1D90: lwc1        $f22, 0x0($v1)
    ctx->f22.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A1D94: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800A1D98: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A1D9C: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x800A1DA0: mfc1        $t5, $f22
    ctx->r13 = (int32_t)ctx->f22.u32l;
    // 0x800A1DA4: beq         $v0, $a0, L_800A1DE0
    if (ctx->r2 == ctx->r4) {
        // 0x800A1DA8: multu       $t3, $t5
        result = U64(U32(ctx->r11)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
            goto L_800A1DE0;
    }
    // 0x800A1DA8: multu       $t3, $t5
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
L_800A1DAC:
    // 0x800A1DAC: mflo        $t6
    ctx->r14 = lo;
    // 0x800A1DB0: lwc1        $f22, 0x4($v1)
    ctx->f22.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800A1DB4: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800A1DB8: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x800A1DBC: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x800A1DC0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A1DC4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A1DC8: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x800A1DCC: mfc1        $t5, $f22
    ctx->r13 = (int32_t)ctx->f22.u32l;
    // 0x800A1DD0: swc1        $f20, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f20.u32l;
    // 0x800A1DD4: lw          $t3, -0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, -0X4);
    // 0x800A1DD8: bne         $v0, $a0, L_800A1DAC
    if (ctx->r2 != ctx->r4) {
        // 0x800A1DDC: multu       $t3, $t5
        result = U64(U32(ctx->r11)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
            goto L_800A1DAC;
    }
    // 0x800A1DDC: multu       $t3, $t5
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
L_800A1DE0:
    // 0x800A1DE0: mflo        $t6
    ctx->r14 = lo;
    // 0x800A1DE4: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800A1DE8: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x800A1DEC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A1DF0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x800A1DF4: swc1        $f20, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f20.u32l;
L_800A1DF8:
    // 0x800A1DF8: lw          $t8, 0x128($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X128);
L_800A1DFC:
    // 0x800A1DFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A1E00: lw          $t9, 0x108($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X108);
    // 0x800A1E04: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x800A1E08: bne         $t2, $at, L_800A1E18
    if (ctx->r10 != ctx->r1) {
        // 0x800A1E0C: nop
    
            goto L_800A1E18;
    }
    // 0x800A1E0C: nop

    // 0x800A1E10: b           L_800A1E34
    // 0x800A1E14: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
        goto L_800A1E34;
    // 0x800A1E14: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_800A1E18:
    // 0x800A1E18: jal         0x800F40EC
    // 0x800A1E1C: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    func_800F40EC(rdram, ctx);
        goto after_26;
    // 0x800A1E1C: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    after_26:
    // 0x800A1E20: bnel        $v0, $zero, L_800A1E34
    if (ctx->r2 != 0) {
        // 0x800A1E24: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_800A1E34;
    }
    goto skip_3;
    // 0x800A1E24: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    skip_3:
    // 0x800A1E28: b           L_800A1E34
    // 0x800A1E2C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
        goto L_800A1E34;
    // 0x800A1E2C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x800A1E30: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
L_800A1E34:
    // 0x800A1E34: lw          $t4, 0xF4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF4);
    // 0x800A1E38: sll         $t3, $t4, 5
    ctx->r11 = S32(ctx->r12 << 5);
    // 0x800A1E3C: bgezl       $t3, L_800A1E94
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800A1E40: mtc1        $v0, $f8
        ctx->f8.u32l = ctx->r2;
            goto L_800A1E94;
    }
    goto skip_4;
    // 0x800A1E40: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    skip_4:
    // 0x800A1E44: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800A1E48: lwc1        $f18, 0x0($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X0);
    // 0x800A1E4C: lwc1        $f4, 0x4($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X4);
    // 0x800A1E50: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800A1E54: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x800A1E58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A1E5C: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800A1E60: lwc1        $f4, 0x54AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X54AC);
    // 0x800A1E64: sub.s       $f10, $f24, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x800A1E68: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800A1E6C: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A1E70: nop

    // 0x800A1E74: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800A1E78: add.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x800A1E7C: swc1        $f16, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f16.u32l;
    // 0x800A1E80: lwc1        $f2, 0x0($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X0);
    // 0x800A1E84: swc1        $f2, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f2.u32l;
    // 0x800A1E88: b           L_800A1EE8
    // 0x800A1E8C: swc1        $f2, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f2.u32l;
        goto L_800A1EE8;
    // 0x800A1E8C: swc1        $f2, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f2.u32l;
    // 0x800A1E90: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
L_800A1E94:
    // 0x800A1E94: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x800A1E98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A1E9C: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A1EA0: lwc1        $f12, 0x54B0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X54B0);
    // 0x800A1EA4: lwc1        $f16, 0x4($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X4);
    // 0x800A1EA8: sub.s       $f2, $f24, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x800A1EAC: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800A1EB0: nop

    // 0x800A1EB4: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800A1EB8: nop

    // 0x800A1EBC: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x800A1EC0: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800A1EC4: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x800A1EC8: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800A1ECC: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    // 0x800A1ED0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800A1ED4: add.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x800A1ED8: mul.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800A1EDC: swc1        $f18, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f18.u32l;
    // 0x800A1EE0: add.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x800A1EE4: swc1        $f8, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f8.u32l;
L_800A1EE8:
    // 0x800A1EE8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800A1EEC:
    // 0x800A1EEC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800A1EF0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800A1EF4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x800A1EF8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A1EFC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x800A1F00: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x800A1F04: jr          $ra
    // 0x800A1F08: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x800A1F08: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_800A1F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1F0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A1F10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A1F14: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A1F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1F1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A1F20: lw          $v0, 0x108($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X108);
    // 0x800A1F24: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800A1F28: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A1F2C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A1F30: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800A1F34: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A1F38: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800A1F3C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800A1F40: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x800A1F44: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800A1F48: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800A1F4C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800A1F50: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800A1F54: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800A1F58: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800A1F5C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800A1F60: jal         0x800EFA88
    // 0x800A1F64: nop

    func_800EFA88(rdram, ctx);
        goto after_0;
    // 0x800A1F64: nop

    after_0:
    // 0x800A1F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A1F70: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A1F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1F78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A1F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1F80: jal         0x800EA05C
    // 0x800A1F84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800A1F84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A1F88: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800A1F8C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1F90: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A1F94: lw          $t6, 0x108($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X108);
    // 0x800A1F98: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800A1F9C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800A1FA0: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x800A1FA4: lw          $t7, 0x108($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X108);
    // 0x800A1FA8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800A1FAC: addiu       $v1, $t2, -0x6DA0
    ctx->r3 = ADD32(ctx->r10, -0X6DA0);
    // 0x800A1FB0: swc1        $f0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f0.u32l;
    // 0x800A1FB4: lw          $t8, 0x108($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X108);
    // 0x800A1FB8: swc1        $f0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f0.u32l;
    // 0x800A1FBC: lw          $t0, 0x108($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X108);
    // 0x800A1FC0: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x800A1FC4: lh          $t1, -0x6DA0($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X6DA0);
    // 0x800A1FC8: beql        $t1, $zero, L_800A2000
    if (ctx->r9 == 0) {
        // 0x800A1FCC: lw          $v0, 0x108($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X108);
            goto L_800A2000;
    }
    goto skip_0;
    // 0x800A1FCC: lw          $v0, 0x108($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X108);
    skip_0:
    // 0x800A1FD0: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
L_800A1FD4:
    // 0x800A1FD4: bnel        $v0, $a0, L_800A1FF0
    if (ctx->r2 != ctx->r4) {
        // 0x800A1FD8: lh          $a0, 0x2($v1)
        ctx->r4 = MEM_H(ctx->r3, 0X2);
            goto L_800A1FF0;
    }
    goto skip_1;
    // 0x800A1FD8: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
    skip_1:
    // 0x800A1FDC: lw          $t4, 0x108($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X108);
    // 0x800A1FE0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800A1FE4: b           L_800A1FFC
    // 0x800A1FE8: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
        goto L_800A1FFC;
    // 0x800A1FE8: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x800A1FEC: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
L_800A1FF0:
    // 0x800A1FF0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800A1FF4: bne         $a0, $zero, L_800A1FD4
    if (ctx->r4 != 0) {
        // 0x800A1FF8: nop
    
            goto L_800A1FD4;
    }
    // 0x800A1FF8: nop

L_800A1FFC:
    // 0x800A1FFC: lw          $v0, 0x108($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X108);
L_800A2000:
    // 0x800A2000: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x800A2004: sb          $t5, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r13;
    // 0x800A2008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A200C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A2010: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2018: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A201C: bnel        $a1, $at, L_800A2038
    if (ctx->r5 != ctx->r1) {
            // 0x800A2020: lw          $v0, 0x108($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X108);
    static_3_800A2038(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A2020: lw          $v0, 0x108($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X108);
    skip_0:
    // 0x800A2024: lw          $v0, 0x108($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X108);
    // 0x800A2028: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x800A202C: jr          $ra
    // 0x800A2030: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    return;
    // 0x800A2030: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_800A2034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2034: lw          $v0, 0x108($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X108);
    // 0x800A2038: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x800A203C: beq         $a1, $v1, L_800A2050
    if (ctx->r5 == ctx->r3) {
        // 0x800A2040: nop
    
            goto L_800A2050;
    }
    // 0x800A2040: nop

    // 0x800A2044: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    // 0x800A2048: lw          $t7, 0x108($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X108);
    // 0x800A204C: sb          $a1, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r5;
L_800A2050:
    // 0x800A2050: jr          $ra
    // 0x800A2054: nop

    return;
    // 0x800A2054: nop

;}
RECOMP_FUNC void func_800A2058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2058: jr          $ra
    // 0x800A205C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800A205C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800A2060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2060: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800A2064: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A2068: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A206C: lw          $v1, 0x108($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X108);
    // 0x800A2070: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A2074: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A2078: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x800A207C: beql        $v0, $zero, L_800A209C
    if (ctx->r2 == 0) {
        // 0x800A2080: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_800A209C;
    }
    goto skip_0;
    // 0x800A2080: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x800A2084: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A2088: beq         $v0, $at, L_800A20BC
    if (ctx->r2 == ctx->r1) {
        // 0x800A208C: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_800A20BC;
    }
    // 0x800A208C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800A2090: b           L_800A20CC
    // 0x800A2094: nop

        goto L_800A20CC;
    // 0x800A2094: nop

    // 0x800A2098: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_800A209C:
    // 0x800A209C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800A20A0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800A20A4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800A20A8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800A20AC: jal         0x800EFA4C
    // 0x800A20B0: nop

    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800A20B0: nop

    after_0:
    // 0x800A20B4: b           L_800A2100
    // 0x800A20B8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
        goto L_800A2100;
    // 0x800A20B8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_800A20BC:
    // 0x800A20BC: jal         0x800EE7F8
    // 0x800A20C0: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800A20C0: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    after_1:
    // 0x800A20C4: b           L_800A2100
    // 0x800A20C8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
        goto L_800A2100;
    // 0x800A20C8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_800A20CC:
    // 0x800A20CC: jal         0x800965C8
    // 0x800A20D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800965C8(rdram, ctx);
        goto after_2;
    // 0x800A20D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A20D4: beq         $v0, $zero, L_800A20EC
    if (ctx->r2 == 0) {
        // 0x800A20D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A20EC;
    }
    // 0x800A20D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A20DC: jal         0x800A1968
    // 0x800A20E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800A1968(rdram, ctx);
        goto after_3;
    // 0x800A20E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x800A20E4: b           L_800A2100
    // 0x800A20E8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
        goto L_800A2100;
    // 0x800A20E8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_800A20EC:
    // 0x800A20EC: lw          $a1, 0x108($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X108);
    // 0x800A20F0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800A20F4: jal         0x800EE7F8
    // 0x800A20F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x800A20F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_4:
    // 0x800A20FC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_800A2100:
    // 0x800A2100: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A2104: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A2108: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x800A210C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
L_800A2110:
    // 0x800A2110: lw          $t6, 0x108($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X108);
    // 0x800A2114: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A2118: addu        $v0, $t6, $a0
    ctx->r2 = ADD32(ctx->r14, ctx->r4);
    // 0x800A211C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A2120: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800A2124: nop

    // 0x800A2128: bc1fl       L_800A2164
    if (!c1cs) {
        // 0x800A212C: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_800A2164;
    }
    goto skip_1;
    // 0x800A212C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_1:
    // 0x800A2130: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x800A2134: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x800A2138: lw          $t7, 0x108($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X108);
    // 0x800A213C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A2140: addu        $v0, $t7, $a0
    ctx->r2 = ADD32(ctx->r15, ctx->r4);
    // 0x800A2144: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A2148: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800A214C: nop

    // 0x800A2150: bc1fl       L_800A21A0
    if (!c1cs) {
        // 0x800A2154: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800A21A0;
    }
    goto skip_2;
    // 0x800A2154: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_2:
    // 0x800A2158: b           L_800A219C
    // 0x800A215C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_800A219C;
    // 0x800A215C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x800A2160: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_800A2164:
    // 0x800A2164: nop

    // 0x800A2168: bc1fl       L_800A21A0
    if (!c1cs) {
        // 0x800A216C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800A21A0;
    }
    goto skip_3;
    // 0x800A216C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_3:
    // 0x800A2170: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800A2174: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x800A2178: lw          $t8, 0x108($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X108);
    // 0x800A217C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A2180: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    // 0x800A2184: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A2188: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x800A218C: nop

    // 0x800A2190: bc1fl       L_800A21A0
    if (!c1cs) {
        // 0x800A2194: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800A21A0;
    }
    goto skip_4;
    // 0x800A2194: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_4:
    // 0x800A2198: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_800A219C:
    // 0x800A219C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_800A21A0:
    // 0x800A21A0: bne         $v1, $a1, L_800A2110
    if (ctx->r3 != ctx->r5) {
        // 0x800A21A4: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_800A2110;
    }
    // 0x800A21A4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A21A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A21AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A21B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800A21B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A21C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A21C0: jr          $ra
    // 0x800A21C4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    return;
    // 0x800A21C4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
;}
RECOMP_FUNC void func_800A21C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A21C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A21CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A21D0: jal         0x800EA05C
    // 0x800A21D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800A21D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A21D8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800A21DC: addiu       $t0, $t0, -0x6D90
    ctx->r8 = ADD32(ctx->r8, -0X6D90);
    // 0x800A21E0: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
    // 0x800A21E4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x800A21E8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800A21EC: beq         $a2, $t6, L_800A221C
    if (ctx->r6 == ctx->r14) {
        // 0x800A21F0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800A221C;
    }
    // 0x800A21F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A21F4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A21F8: addiu       $v1, $t7, -0x6D90
    ctx->r3 = ADD32(ctx->r15, -0X6D90);
    // 0x800A21FC: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
L_800A2200:
    // 0x800A2200: beql        $v0, $a0, L_800A2220
    if (ctx->r2 == ctx->r4) {
        // 0x800A2204: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_800A2220;
    }
    goto skip_0;
    // 0x800A2204: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    skip_0:
    // 0x800A2208: lh          $a0, 0x4($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X4);
    // 0x800A220C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A2210: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A2214: bne         $a2, $a0, L_800A2200
    if (ctx->r6 != ctx->r4) {
        // 0x800A2218: nop
    
            goto L_800A2200;
    }
    // 0x800A2218: nop

L_800A221C:
    // 0x800A221C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
L_800A2220:
    // 0x800A2220: addu        $v1, $t0, $t8
    ctx->r3 = ADD32(ctx->r8, ctx->r24);
    // 0x800A2224: lbu         $t9, 0x2($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2);
    // 0x800A2228: lw          $t1, 0xB4($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XB4);
    // 0x800A222C: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
    // 0x800A2230: lw          $t3, 0xB4($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XB4);
    // 0x800A2234: lbu         $t2, 0x3($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X3);
    // 0x800A2238: sb          $t2, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r10;
    // 0x800A223C: lh          $t4, 0x0($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X0);
    // 0x800A2240: bnel        $a2, $t4, L_800A2270
    if (ctx->r6 != ctx->r12) {
        // 0x800A2244: lw          $v0, 0xB4($a3)
        ctx->r2 = MEM_W(ctx->r7, 0XB4);
            goto L_800A2270;
    }
    goto skip_1;
    // 0x800A2244: lw          $v0, 0xB4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB4);
    skip_1:
    // 0x800A2248: jal         0x800C8C18
    // 0x800A224C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800C8C18(rdram, ctx);
        goto after_1;
    // 0x800A224C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x800A2250: blez        $v0, L_800A226C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800A2254: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_800A226C;
    }
    // 0x800A2254: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800A2258: lw          $t6, 0xB4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XB4);
    // 0x800A225C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800A2260: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x800A2264: lw          $t7, 0xB4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XB4);
    // 0x800A2268: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
L_800A226C:
    // 0x800A226C: lw          $v0, 0xB4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB4);
L_800A2270:
    // 0x800A2270: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800A2274: lb          $a1, 0x0($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X0);
    // 0x800A2278: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x800A227C: bne         $at, $zero, L_800A2290
    if (ctx->r1 != 0) {
        // 0x800A2280: nop
    
            goto L_800A2290;
    }
    // 0x800A2280: nop

    // 0x800A2284: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x800A2288: lw          $t9, 0xB4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XB4);
    // 0x800A228C: lb          $a1, 0x0($t9)
    ctx->r5 = MEM_B(ctx->r25, 0X0);
L_800A2290:
    // 0x800A2290: jal         0x800A25DC
    // 0x800A2294: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800A25DC(rdram, ctx);
        goto after_2;
    // 0x800A2294: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x800A2298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A229C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A22A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A22A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A22A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A22AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A22B0: jal         0x800A25DC
    // 0x800A22B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A25DC(rdram, ctx);
        goto after_0;
    // 0x800A22B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800A22B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A22BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A22C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A22C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A22C8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800A22CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800A22D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A22D4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_800A22D8:
    // 0x800A22D8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800A22DC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800A22E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800A22E4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A22E8: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A22EC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800A22F0: mflo        $t8
    ctx->r24 = lo;
    // 0x800A22F4: bgez        $t8, L_800A2304
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800A22F8: sra         $t9, $t8, 8
        ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
            goto L_800A2304;
    }
    // 0x800A22F8: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x800A22FC: addiu       $at, $t8, 0xFF
    ctx->r1 = ADD32(ctx->r24, 0XFF);
    // 0x800A2300: sra         $t9, $at, 8
    ctx->r25 = S32(SIGNED(ctx->r1) >> 8);
L_800A2304:
    // 0x800A2304: bne         $v0, $a0, L_800A22D8
    if (ctx->r2 != ctx->r4) {
        // 0x800A2308: sw          $t9, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r25;
            goto L_800A22D8;
    }
    // 0x800A2308: sw          $t9, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r25;
    // 0x800A230C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2314: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A2318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A231C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800A2320: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800A2324: jal         0x800C87B8
    // 0x800A2328: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800C87B8(rdram, ctx);
        goto after_0;
    // 0x800A2328: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800A232C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800A2330: jal         0x800A22C8
    // 0x800A2334: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800A22C8(rdram, ctx);
        goto after_1;
    // 0x800A2334: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x800A2338: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800A233C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800A2340: lw          $t7, 0xB4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB4);
    // 0x800A2344: jal         0x800B38A8
    // 0x800A2348: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    func_800B38A8(rdram, ctx);
        goto after_2;
    // 0x800A2348: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    after_2:
    // 0x800A234C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A2350: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A2354: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A235C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A235C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800A2360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A2364: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A2368: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A236C: jal         0x800A1F0C
    // 0x800A2370: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800A1F0C(rdram, ctx);
        goto after_0;
    // 0x800A2370: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_0:
    // 0x800A2374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2378: jal         0x800A2314
    // 0x800A237C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800A2314(rdram, ctx);
        goto after_1;
    // 0x800A237C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_1:
    // 0x800A2380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2384: jal         0x80092B8C
    // 0x800A2388: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_80092B8C(rdram, ctx);
        goto after_2;
    // 0x800A2388: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_2:
    // 0x800A238C: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x800A2390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2394: jal         0x8009C128
    // 0x800A2398: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x800A2398: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_3:
    // 0x800A239C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x800A23A0: jal         0x800EF04C
    // 0x800A23A4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_800EF04C(rdram, ctx);
        goto after_4;
    // 0x800A23A4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_4:
    // 0x800A23A8: lw          $t6, 0xB4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XB4);
    // 0x800A23AC: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x800A23B0: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x800A23B4: jal         0x800B3494
    // 0x800A23B8: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    func_800B3494(rdram, ctx);
        goto after_5;
    // 0x800A23B8: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    after_5:
    // 0x800A23BC: lw          $t7, 0xB4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XB4);
    // 0x800A23C0: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x800A23C4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x800A23C8: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x800A23CC: jal         0x800B37A4
    // 0x800A23D0: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    func_800B37A4(rdram, ctx);
        goto after_6;
    // 0x800A23D0: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    after_6:
    // 0x800A23D4: lw          $v0, 0xB4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB4);
    // 0x800A23D8: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    // 0x800A23DC: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    // 0x800A23E0: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800A23E4: beq         $at, $zero, L_800A2458
    if (ctx->r1 == 0) {
        // 0x800A23E8: nop
    
            goto L_800A2458;
    }
    // 0x800A23E8: nop

    // 0x800A23EC: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x800A23F0: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x800A23F4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x800A23F8: beq         $t9, $zero, L_800A2458
    if (ctx->r25 == 0) {
        // 0x800A23FC: nop
    
            goto L_800A2458;
    }
    // 0x800A23FC: nop

    // 0x800A2400: jal         0x800C8960
    // 0x800A2404: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    func_800C8960(rdram, ctx);
        goto after_7;
    // 0x800A2404: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    after_7:
    // 0x800A2408: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x800A240C: jal         0x800A22C8
    // 0x800A2410: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800A22C8(rdram, ctx);
        goto after_8;
    // 0x800A2410: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_8:
    // 0x800A2414: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    // 0x800A2418: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x800A241C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800A2420: beq         $v1, $zero, L_800A2430
    if (ctx->r3 == 0) {
        // 0x800A2424: lw          $t0, 0x68($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X68);
            goto L_800A2430;
    }
    // 0x800A2424: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x800A2428: b           L_800A2438
    // 0x800A242C: lwc1        $f0, 0x18($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X18);
        goto L_800A2438;
    // 0x800A242C: lwc1        $f0, 0x18($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X18);
L_800A2430:
    // 0x800A2430: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A2434: nop

L_800A2438:
    // 0x800A2438: lw          $t1, 0xB4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XB4);
    // 0x800A243C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800A2440: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x800A2444: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x800A2448: jal         0x800B36C0
    // 0x800A244C: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    func_800B36C0(rdram, ctx);
        goto after_9;
    // 0x800A244C: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    after_9:
    // 0x800A2450: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    // 0x800A2454: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_800A2458:
    // 0x800A2458: beq         $v1, $zero, L_800A2520
    if (ctx->r3 == 0) {
        // 0x800A245C: lw          $a1, 0x68($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X68);
            goto L_800A2520;
    }
    // 0x800A245C: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x800A2460: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800A2464: jal         0x800EE830
    // 0x800A2468: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE830(rdram, ctx);
        goto after_10;
    // 0x800A2468: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_10:
    // 0x800A246C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x800A2470: lw          $a1, 0xB4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB4);
    // 0x800A2474: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x800A2478: jal         0x800EE830
    // 0x800A247C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_800EE830(rdram, ctx);
        goto after_11;
    // 0x800A247C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_11:
    // 0x800A2480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A2484: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800A2488: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
L_800A248C:
    // 0x800A248C: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x800A2490: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800A2494: addu        $v0, $t2, $a2
    ctx->r2 = ADD32(ctx->r10, ctx->r6);
    // 0x800A2498: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x800A249C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800A24A0: beq         $at, $zero, L_800A24D0
    if (ctx->r1 == 0) {
        // 0x800A24A4: addiu       $t3, $a0, 0x28
        ctx->r11 = ADD32(ctx->r4, 0X28);
            goto L_800A24D0;
    }
    // 0x800A24A4: addiu       $t3, $a0, 0x28
    ctx->r11 = ADD32(ctx->r4, 0X28);
    // 0x800A24A8: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x800A24AC: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x800A24B0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800A24B4: addu        $v0, $t4, $a2
    ctx->r2 = ADD32(ctx->r12, ctx->r6);
    // 0x800A24B8: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    // 0x800A24BC: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800A24C0: beql        $at, $zero, L_800A2504
    if (ctx->r1 == 0) {
        // 0x800A24C4: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_800A2504;
    }
    goto skip_0;
    // 0x800A24C4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    skip_0:
    // 0x800A24C8: b           L_800A2500
    // 0x800A24CC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
        goto L_800A2500;
    // 0x800A24CC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
L_800A24D0:
    // 0x800A24D0: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800A24D4: beq         $at, $zero, L_800A2500
    if (ctx->r1 == 0) {
        // 0x800A24D8: addiu       $t6, $a0, -0x28
        ctx->r14 = ADD32(ctx->r4, -0X28);
            goto L_800A2500;
    }
    // 0x800A24D8: addiu       $t6, $a0, -0x28
    ctx->r14 = ADD32(ctx->r4, -0X28);
    // 0x800A24DC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x800A24E0: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x800A24E4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800A24E8: addu        $v0, $t7, $a2
    ctx->r2 = ADD32(ctx->r15, ctx->r6);
    // 0x800A24EC: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x800A24F0: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800A24F4: beql        $at, $zero, L_800A2504
    if (ctx->r1 == 0) {
        // 0x800A24F8: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_800A2504;
    }
    goto skip_1;
    // 0x800A24F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    skip_1:
    // 0x800A24FC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
L_800A2500:
    // 0x800A2500: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_800A2504:
    // 0x800A2504: bne         $a1, $a3, L_800A248C
    if (ctx->r5 != ctx->r7) {
        // 0x800A2508: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_800A248C;
    }
    // 0x800A2508: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800A250C: lw          $a0, 0xB4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB4);
    // 0x800A2510: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x800A2514: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A2518: jal         0x800EE830
    // 0x800A251C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE830(rdram, ctx);
        goto after_12;
    // 0x800A251C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_12:
L_800A2520:
    // 0x800A2520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2524: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A2528: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x800A252C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2534: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x800A2538: jr          $ra
    // 0x800A253C: sb          $zero, 0x3($t6)
    MEM_B(0X3, ctx->r14) = 0;
    return;
    // 0x800A253C: sb          $zero, 0x3($t6)
    MEM_B(0X3, ctx->r14) = 0;
;}
RECOMP_FUNC void func_800A2540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A2544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2548: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800A254C: jal         0x800A25D0
    // 0x800A2550: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800A25D0(rdram, ctx);
        goto after_0;
    // 0x800A2550: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A2554: bne         $v0, $zero, L_800A2580
    if (ctx->r2 != 0) {
        // 0x800A2558: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_800A2580;
    }
    // 0x800A2558: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800A255C: jal         0x800A1F0C
    // 0x800A2560: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800A1F0C(rdram, ctx);
        goto after_1;
    // 0x800A2560: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x800A2564: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2568: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800A256C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800A2570: jal         0x800DF5D8
    // 0x800A2574: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_800DF5D8(rdram, ctx);
        goto after_2;
    // 0x800A2574: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x800A2578: b           L_800A25C4
    // 0x800A257C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A25C4;
    // 0x800A257C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A2580:
    // 0x800A2580: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x800A2584: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x800A2588: bnel        $t6, $zero, L_800A25B0
    if (ctx->r14 != 0) {
        // 0x800A258C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800A25B0;
    }
    goto skip_0;
    // 0x800A258C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x800A2590: jal         0x800A235C
    // 0x800A2594: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800A235C(rdram, ctx);
        goto after_3;
    // 0x800A2594: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_3:
    // 0x800A2598: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800A259C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A25A0: lw          $t8, 0xB4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XB4);
    // 0x800A25A4: sb          $t7, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r15;
    // 0x800A25A8: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x800A25AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800A25B0:
    // 0x800A25B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A25B4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x800A25B8: jal         0x800DF660
    // 0x800A25BC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_800DF660(rdram, ctx);
        goto after_4;
    // 0x800A25BC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x800A25C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A25C4:
    // 0x800A25C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A25C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A25D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A25D0: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x800A25D4: jr          $ra
    // 0x800A25D8: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
    return;
    // 0x800A25D8: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
;}
RECOMP_FUNC void func_800A25DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A25DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A25E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A25E4: beq         $a1, $zero, L_800A25FC
    if (ctx->r5 == 0) {
        // 0x800A25E8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800A25FC;
    }
    // 0x800A25E8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A25EC: lw          $t7, 0xB4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB4);
    // 0x800A25F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A25F4: b           L_800A2604
    // 0x800A25F8: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
        goto L_800A2604;
    // 0x800A25F8: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
L_800A25FC:
    // 0x800A25FC: lw          $t8, 0xB4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0XB4);
    // 0x800A2600: sb          $zero, 0x2($t8)
    MEM_B(0X2, ctx->r24) = 0;
L_800A2604:
    // 0x800A2604: lw          $v0, 0xB4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB4);
    // 0x800A2608: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x800A260C: beql        $t9, $zero, L_800A2640
    if (ctx->r25 == 0) {
        // 0x800A2610: lw          $a0, 0x4($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X4);
            goto L_800A2640;
    }
    goto skip_0;
    // 0x800A2610: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x800A2614: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x800A2618: bnel        $t0, $zero, L_800A2660
    if (ctx->r8 != 0) {
        // 0x800A261C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A2660;
    }
    goto skip_1;
    // 0x800A261C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800A2620: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x800A2624: jal         0x800B3310
    // 0x800A2628: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B3310(rdram, ctx);
        goto after_0;
    // 0x800A2628: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A262C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A2630: lw          $t1, 0xB4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XB4);
    // 0x800A2634: b           L_800A265C
    // 0x800A2638: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
        goto L_800A265C;
    // 0x800A2638: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x800A263C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
L_800A2640:
    // 0x800A2640: beql        $a0, $zero, L_800A2660
    if (ctx->r4 == 0) {
        // 0x800A2644: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A2660;
    }
    goto skip_2;
    // 0x800A2644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800A2648: jal         0x800B3370
    // 0x800A264C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B3370(rdram, ctx);
        goto after_1;
    // 0x800A264C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x800A2650: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A2654: lw          $t2, 0xB4($a2)
    ctx->r10 = MEM_W(ctx->r6, 0XB4);
    // 0x800A2658: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
L_800A265C:
    // 0x800A265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A2660:
    // 0x800A2660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A2664: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A266C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A266C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A2670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2674: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x800A2678: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A267C: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x800A2680: beq         $a1, $zero, L_800A269C
    if (ctx->r5 == 0) {
        // 0x800A2684: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_800A269C;
    }
    // 0x800A2684: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A2688: jal         0x800B38E8
    // 0x800A268C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B38E8(rdram, ctx);
        goto after_0;
    // 0x800A268C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A2690: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A2694: lw          $t7, 0xB4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0XB4);
    // 0x800A2698: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
L_800A269C:
    // 0x800A269C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A26A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A26A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A26B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A26B0: jr          $ra
    // 0x800A26B4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x800A26B4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
;}
RECOMP_FUNC void func_800A26B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A26B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A26BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A26C0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800A26C4: jal         0x8009C128
    // 0x800A26C8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800A26C8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x800A26CC: jal         0x800964DC
    // 0x800A26D0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800964DC(rdram, ctx);
        goto after_1;
    // 0x800A26D0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x800A26D4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A26D8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800A26DC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x800A26E0: jal         0x80095870
    // 0x800A26E4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_80095870(rdram, ctx);
        goto after_2;
    // 0x800A26E4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x800A26E8: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800A26EC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800A26F0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800A26F4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A26F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A26FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800A2700: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x800A2704: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x800A2708: nop

    // 0x800A270C: bc1tl       L_800A2750
    if (c1cs) {
        // 0x800A2710: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A2750;
    }
    goto skip_0;
    // 0x800A2710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800A2714: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x800A2718: jal         0x8009FC34
    // 0x800A271C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8009FC34(rdram, ctx);
        goto after_3;
    // 0x800A271C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x800A2720: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800A2724: jal         0x80088AE8
    // 0x800A2728: lui         $a1, 0x41C8
    ctx->r5 = S32(0X41C8 << 16);
    _fxsplash_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x800A2728: lui         $a1, 0x41C8
    ctx->r5 = S32(0X41C8 << 16);
    after_4:
    // 0x800A272C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800A2730: addiu       $t6, $t6, -0x6CE0
    ctx->r14 = ADD32(ctx->r14, -0X6CE0);
    // 0x800A2734: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A2738: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A273C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A2740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A2744: jal         0x800BABB8
    // 0x800A2748: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_5;
    // 0x800A2748: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_5:
    // 0x800A274C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A2750:
    // 0x800A2750: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800A2754: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A275C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A275C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A2760: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A2764: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800A2768: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800A276C: jal         0x8009FC34
    // 0x800A2770: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009FC34(rdram, ctx);
        goto after_0;
    // 0x800A2770: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x800A2774: jal         0x8009BB5C
    // 0x800A2778: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8009BB5C(rdram, ctx);
        goto after_1;
    // 0x800A2778: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x800A277C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x800A2780: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A2784: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800A2788: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800A278C: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x800A2790: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    // 0x800A2794: jal         0x800F10B4
    // 0x800A2798: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x800A2798: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x800A279C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800A27A0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800A27A4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800A27A8: lw          $t7, 0x124($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X124);
    // 0x800A27AC: jal         0x8008FE94
    // 0x800A27B0: lbu         $a0, 0x4($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X4);
    func_8008FE94(rdram, ctx);
        goto after_3;
    // 0x800A27B0: lbu         $a0, 0x4($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X4);
    after_3:
    // 0x800A27B4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800A27B8: bnel        $t8, $zero, L_800A27D0
    if (ctx->r24 != 0) {
        // 0x800A27BC: addiu       $a0, $sp, 0x34
        ctx->r4 = ADD32(ctx->r29, 0X34);
            goto L_800A27D0;
    }
    goto skip_0;
    // 0x800A27BC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    skip_0:
    // 0x800A27C0: jal         0x800964DC
    // 0x800A27C4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800964DC(rdram, ctx);
        goto after_4;
    // 0x800A27C4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x800A27C8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x800A27CC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
L_800A27D0:
    // 0x800A27D0: jal         0x80088AE8
    // 0x800A27D4: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    _fxsplash_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x800A27D4: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_5:
    // 0x800A27D8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800A27DC: addiu       $t6, $zero, 0x15E
    ctx->r14 = ADD32(0, 0X15E);
    // 0x800A27E0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800A27E4: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800A27E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A27EC: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x800A27F0: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x800A27F4: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x800A27F8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800A27FC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800A2800: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x800A2804: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800A2808: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x800A280C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x800A2810: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x800A2814: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x800A2818: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800A281C: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x800A2820: sra         $t2, $a3, 16
    ctx->r10 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800A2824: jal         0x800BA930
    // 0x800A2828: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    func_800BA930(rdram, ctx);
        goto after_6;
    // 0x800A2828: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    after_6:
    // 0x800A282C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800A2830: jal         0x800BA22C
    // 0x800A2834: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800BA22C(rdram, ctx);
        goto after_7;
    // 0x800A2834: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_7:
    // 0x800A2838: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A283C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800A2840: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2848: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A284C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2850: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800A2854: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800A2858: jal         0x800F53D0
    // 0x800A285C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x800A285C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800A2860: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800A2864: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A2868: xori        $v1, $a1, 0x4
    ctx->r3 = ctx->r5 ^ 0X4;
    // 0x800A286C: sltiu       $a2, $v1, 0x1
    ctx->r6 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A2870: bne         $a2, $zero, L_800A2894
    if (ctx->r6 != 0) {
        // 0x800A2874: xori        $v0, $a1, 0xB
        ctx->r2 = ctx->r5 ^ 0XB;
            goto L_800A2894;
    }
    // 0x800A2874: xori        $v0, $a1, 0xB
    ctx->r2 = ctx->r5 ^ 0XB;
    // 0x800A2878: sltiu       $a2, $v0, 0x1
    ctx->r6 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A287C: bnel        $a2, $zero, L_800A2898
    if (ctx->r6 != 0) {
        // 0x800A2880: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_800A2898;
    }
    goto skip_0;
    // 0x800A2880: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    skip_0:
    // 0x800A2884: xori        $a2, $a1, 0x15
    ctx->r6 = ctx->r5 ^ 0X15;
    // 0x800A2888: sltiu       $a2, $a2, 0x1
    ctx->r6 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x800A288C: sltu        $t6, $zero, $a2
    ctx->r14 = 0 < ctx->r6 ? 1 : 0;
    // 0x800A2890: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
L_800A2894:
    // 0x800A2894: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
L_800A2898:
    // 0x800A2898: jal         0x8008E35C
    // 0x800A289C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8008E35C(rdram, ctx);
        goto after_1;
    // 0x800A289C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x800A28A0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800A28A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A28A8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800A28AC: beq         $a2, $zero, L_800A28D0
    if (ctx->r6 == 0) {
        // 0x800A28B0: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_800A28D0;
    }
    // 0x800A28B0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800A28B4: xori        $t7, $a1, 0x15
    ctx->r15 = ctx->r5 ^ 0X15;
    // 0x800A28B8: sltiu       $a1, $t7, 0x1
    ctx->r5 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800A28BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A28C0: jal         0x800A275C
    // 0x800A28C4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_800A275C(rdram, ctx);
        goto after_2;
    // 0x800A28C4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_2:
    // 0x800A28C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A28CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
L_800A28D0:
    // 0x800A28D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A28D4: jal         0x8008FD48
    // 0x800A28D8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8008FD48(rdram, ctx);
        goto after_3;
    // 0x800A28D8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_3:
    // 0x800A28DC: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x800A28E0: sltiu       $at, $t8, 0x13
    ctx->r1 = ctx->r24 < 0X13 ? 1 : 0;
    // 0x800A28E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A28E8: beq         $at, $zero, L_800A29F0
    if (ctx->r1 == 0) {
        // 0x800A28EC: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_800A29F0;
    }
    // 0x800A28EC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800A28F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A28F4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A28F8: addu        $at, $at, $t8
    gpr jr_addend_800A2900 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A28FC: lw          $t8, 0x54C0($at)
    ctx->r24 = ADD32(ctx->r1, 0X54C0);
    // 0x800A2900: jr          $t8
    // 0x800A2904: nop

    switch (jr_addend_800A2900 >> 2) {
        case 0: goto L_800A299C; break;
        case 1: goto L_800A29F0; break;
        case 2: goto L_800A29F0; break;
        case 3: goto L_800A29F0; break;
        case 4: goto L_800A29F0; break;
        case 5: goto L_800A29F0; break;
        case 6: goto L_800A29F0; break;
        case 7: goto L_800A29F0; break;
        case 8: goto L_800A29F0; break;
        case 9: goto L_800A29F0; break;
        case 10: goto L_800A299C; break;
        case 11: goto L_800A29F0; break;
        case 12: goto L_800A29F0; break;
        case 13: goto L_800A2940; break;
        case 14: goto L_800A2908; break;
        case 15: goto L_800A29F0; break;
        case 16: goto L_800A29F0; break;
        case 17: goto L_800A29F0; break;
        case 18: goto L_800A297C; break;
        default: switch_error(__func__, 0x800A2900, 0x801254C0);
    }
    // 0x800A2904: nop

L_800A2908:
    // 0x800A2908: bne         $a2, $zero, L_800A2918
    if (ctx->r6 != 0) {
        // 0x800A290C: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_800A2918;
    }
    // 0x800A290C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800A2910: beq         $t9, $zero, L_800A292C
    if (ctx->r25 == 0) {
        // 0x800A2914: addiu       $a1, $zero, 0x448
        ctx->r5 = ADD32(0, 0X448);
            goto L_800A292C;
    }
    // 0x800A2914: addiu       $a1, $zero, 0x448
    ctx->r5 = ADD32(0, 0X448);
L_800A2918:
    // 0x800A2918: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A291C: jal         0x80088A48
    // 0x800A2920: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    _fxstep_entrypoint_13(rdram, ctx);
        goto after_4;
    // 0x800A2920: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_4:
    // 0x800A2924: b           L_800A29F4
    // 0x800A2928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A29F4;
    // 0x800A2928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A292C:
    // 0x800A292C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800A2930: jal         0x8009DB04
    // 0x800A2934: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    func_8009DB04(rdram, ctx);
        goto after_5;
    // 0x800A2934: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_5:
    // 0x800A2938: b           L_800A29F4
    // 0x800A293C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A29F4;
    // 0x800A293C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A2940:
    // 0x800A2940: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A2944: jal         0x80084FC8
    // 0x800A2948: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _bashake_entrypoint_0(rdram, ctx);
        goto after_6;
    // 0x800A2948: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800A294C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A2950: jal         0x80088A48
    // 0x800A2954: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    _fxstep_entrypoint_13(rdram, ctx);
        goto after_7;
    // 0x800A2954: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_7:
    // 0x800A2958: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A295C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800A2960: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A2964: bnel        $t0, $at, L_800A29F4
    if (ctx->r8 != ctx->r1) {
        // 0x800A2968: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A29F4;
    }
    goto skip_1;
    // 0x800A2968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800A296C: jal         0x80088A48
    // 0x800A2970: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    _fxstep_entrypoint_13(rdram, ctx);
        goto after_8;
    // 0x800A2970: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_8:
    // 0x800A2974: b           L_800A29F4
    // 0x800A2978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A29F4;
    // 0x800A2978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A297C:
    // 0x800A297C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A2980: jal         0x80084FC8
    // 0x800A2984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _bashake_entrypoint_0(rdram, ctx);
        goto after_9;
    // 0x800A2984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800A2988: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A298C: jal         0x80088A48
    // 0x800A2990: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    _fxstep_entrypoint_13(rdram, ctx);
        goto after_10;
    // 0x800A2990: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_10:
    // 0x800A2994: b           L_800A29F4
    // 0x800A2998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A29F4;
    // 0x800A2998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A299C:
    // 0x800A299C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x800A29A0: jal         0x8009E674
    // 0x800A29A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009E674(rdram, ctx);
        goto after_11;
    // 0x800A29A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_11:
    // 0x800A29A8: beq         $v0, $zero, L_800A29F0
    if (ctx->r2 == 0) {
        // 0x800A29AC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800A29F0;
    }
    // 0x800A29AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800A29B0: jal         0x80084FE0
    // 0x800A29B4: nop

    _bashoes_entrypoint_1(rdram, ctx);
        goto after_12;
    // 0x800A29B4: nop

    after_12:
    // 0x800A29B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A29BC: beq         $v0, $at, L_800A29D8
    if (ctx->r2 == ctx->r1) {
        // 0x800A29C0: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_800A29D8;
    }
    // 0x800A29C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A29C4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A29C8: beq         $v0, $at, L_800A29E8
    if (ctx->r2 == ctx->r1) {
        // 0x800A29CC: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_800A29E8;
    }
    // 0x800A29CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A29D0: b           L_800A29F4
    // 0x800A29D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A29F4;
    // 0x800A29D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A29D8:
    // 0x800A29D8: jal         0x80088A48
    // 0x800A29DC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    _fxstep_entrypoint_13(rdram, ctx);
        goto after_13;
    // 0x800A29DC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_13:
    // 0x800A29E0: b           L_800A29F4
    // 0x800A29E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A29F4;
    // 0x800A29E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A29E8:
    // 0x800A29E8: jal         0x80088A48
    // 0x800A29EC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    _fxstep_entrypoint_13(rdram, ctx);
        goto after_14;
    // 0x800A29EC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_14:
L_800A29F0:
    // 0x800A29F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A29F4:
    // 0x800A29F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800A29F8: jr          $ra
    // 0x800A29FC: nop

    return;
    // 0x800A29FC: nop

;}
RECOMP_FUNC void func_800A2A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2A00: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A2A04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A2A08: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800A2A0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A2A10: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800A2A14: jal         0x800F53D0
    // 0x800A2A18: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x800A2A18: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800A2A1C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800A2A20: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A2A24: xori        $v1, $t6, 0x4
    ctx->r3 = ctx->r14 ^ 0X4;
    // 0x800A2A28: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A2A2C: bne         $a0, $zero, L_800A2A4C
    if (ctx->r4 != 0) {
        // 0x800A2A30: xori        $v0, $t6, 0xB
        ctx->r2 = ctx->r14 ^ 0XB;
            goto L_800A2A4C;
    }
    // 0x800A2A30: xori        $v0, $t6, 0xB
    ctx->r2 = ctx->r14 ^ 0XB;
    // 0x800A2A34: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A2A38: bne         $a0, $zero, L_800A2A4C
    if (ctx->r4 != 0) {
        // 0x800A2A3C: nop
    
            goto L_800A2A4C;
    }
    // 0x800A2A3C: nop

    // 0x800A2A40: jal         0x8008E35C
    // 0x800A2A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_1;
    // 0x800A2A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A2A48: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
L_800A2A4C:
    // 0x800A2A4C: beq         $a0, $zero, L_800A2A5C
    if (ctx->r4 == 0) {
        // 0x800A2A50: nop
    
            goto L_800A2A5C;
    }
    // 0x800A2A50: nop

    // 0x800A2A54: jal         0x800A26B8
    // 0x800A2A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A26B8(rdram, ctx);
        goto after_2;
    // 0x800A2A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_800A2A5C:
    // 0x800A2A5C: jal         0x8008FD48
    // 0x800A2A60: nop

    func_8008FD48(rdram, ctx);
        goto after_3;
    // 0x800A2A60: nop

    after_3:
    // 0x800A2A64: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x800A2A68: sltiu       $at, $t7, 0x13
    ctx->r1 = ctx->r15 < 0X13 ? 1 : 0;
    // 0x800A2A6C: beq         $at, $zero, L_800A2C70
    if (ctx->r1 == 0) {
        // 0x800A2A70: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800A2C70;
    }
    // 0x800A2A70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A2A74: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A2A78: addu        $at, $at, $t7
    gpr jr_addend_800A2A80 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A2A7C: lw          $t7, 0x550C($at)
    ctx->r15 = ADD32(ctx->r1, 0X550C);
    // 0x800A2A80: jr          $t7
    // 0x800A2A84: nop

    switch (jr_addend_800A2A80 >> 2) {
        case 0: goto L_800A2C1C; break;
        case 1: goto L_800A2A88; break;
        case 2: goto L_800A2C70; break;
        case 3: goto L_800A2C70; break;
        case 4: goto L_800A2C70; break;
        case 5: goto L_800A2C70; break;
        case 6: goto L_800A2BE0; break;
        case 7: goto L_800A2C70; break;
        case 8: goto L_800A2C70; break;
        case 9: goto L_800A2C70; break;
        case 10: goto L_800A2C1C; break;
        case 11: goto L_800A2C70; break;
        case 12: goto L_800A2C70; break;
        case 13: goto L_800A2B30; break;
        case 14: goto L_800A2C70; break;
        case 15: goto L_800A2BAC; break;
        case 16: goto L_800A2C70; break;
        case 17: goto L_800A2B94; break;
        case 18: goto L_800A2B70; break;
        default: switch_error(__func__, 0x800A2A80, 0x8012550C);
    }
    // 0x800A2A84: nop

L_800A2A88:
    // 0x800A2A88: jal         0x80085100
    // 0x800A2A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basnowball_entrypoint_5(rdram, ctx);
        goto after_4;
    // 0x800A2A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800A2A90: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800A2A94: jal         0x80085128
    // 0x800A2A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basnowball_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x800A2A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800A2A9C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A2AA0: lwc1        $f4, 0x5558($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5558);
    // 0x800A2AA4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800A2AA8: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800A2AAC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800A2AB0: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x800A2AB4: jal         0x800F10B4
    // 0x800A2AB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x800A2AB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x800A2ABC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A2AC0: lwc1        $f6, 0x555C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X555C);
    // 0x800A2AC4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800A2AC8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x800A2ACC: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800A2AD0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800A2AD4: lui         $a3, 0x45FA
    ctx->r7 = S32(0X45FA << 16);
    // 0x800A2AD8: jal         0x800F10B4
    // 0x800A2ADC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_7;
    // 0x800A2ADC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x800A2AE0: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800A2AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2AE8: addiu       $a1, $zero, 0x56E
    ctx->r5 = ADD32(0, 0X56E);
    // 0x800A2AEC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800A2AF0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800A2AF4: jal         0x8009DB04
    // 0x800A2AF8: nop

    func_8009DB04(rdram, ctx);
        goto after_8;
    // 0x800A2AF8: nop

    after_8:
    // 0x800A2AFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A2B00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A2B04: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800A2B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2B0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A2B10: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800A2B14: nop

    // 0x800A2B18: bc1fl       L_800A2C74
    if (!c1cs) {
        // 0x800A2B1C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800A2C74;
    }
    goto skip_0;
    // 0x800A2B1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800A2B20: jal         0x80084FC8
    // 0x800A2B24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_9;
    // 0x800A2B24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x800A2B28: b           L_800A2C74
    // 0x800A2B2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800A2C74;
    // 0x800A2B2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A2B30:
    // 0x800A2B30: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A2B34: jal         0x80088A30
    // 0x800A2B38: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    _fxstep_entrypoint_10(rdram, ctx);
        goto after_10;
    // 0x800A2B38: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_10:
    // 0x800A2B3C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800A2B40: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800A2B44: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A2B48: bnel        $t9, $at, L_800A2B5C
    if (ctx->r25 != ctx->r1) {
        // 0x800A2B4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A2B5C;
    }
    goto skip_1;
    // 0x800A2B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x800A2B50: jal         0x80088A48
    // 0x800A2B54: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    _fxstep_entrypoint_13(rdram, ctx);
        goto after_11;
    // 0x800A2B54: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_11:
    // 0x800A2B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A2B5C:
    // 0x800A2B5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A2B60: jal         0x80084FC8
    // 0x800A2B64: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_12;
    // 0x800A2B64: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_12:
    // 0x800A2B68: b           L_800A2C74
    // 0x800A2B6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800A2C74;
    // 0x800A2B6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A2B70:
    // 0x800A2B70: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A2B74: jal         0x80088A30
    // 0x800A2B78: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    _fxstep_entrypoint_10(rdram, ctx);
        goto after_13;
    // 0x800A2B78: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_13:
    // 0x800A2B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2B80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A2B84: jal         0x80084FC8
    // 0x800A2B88: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_14;
    // 0x800A2B88: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_14:
    // 0x800A2B8C: b           L_800A2C74
    // 0x800A2B90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800A2C74;
    // 0x800A2B90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A2B94:
    // 0x800A2B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A2B9C: jal         0x80084FC8
    // 0x800A2BA0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_15;
    // 0x800A2BA0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_15:
    // 0x800A2BA4: b           L_800A2C74
    // 0x800A2BA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800A2C74;
    // 0x800A2BA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A2BAC:
    // 0x800A2BAC: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x800A2BB0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x800A2BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2BB8: jal         0x8009DBF0
    // 0x800A2BBC: addiu       $a1, $zero, 0x4C7
    ctx->r5 = ADD32(0, 0X4C7);
    func_8009DBF0(rdram, ctx);
        goto after_16;
    // 0x800A2BBC: addiu       $a1, $zero, 0x4C7
    ctx->r5 = ADD32(0, 0X4C7);
    after_16:
    // 0x800A2BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2BC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A2BC8: jal         0x80084FC8
    // 0x800A2BCC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_17;
    // 0x800A2BCC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_17:
    // 0x800A2BD0: jal         0x80084130
    // 0x800A2BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsvan_entrypoint_2(rdram, ctx);
        goto after_18;
    // 0x800A2BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x800A2BD8: b           L_800A2C74
    // 0x800A2BDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800A2C74;
    // 0x800A2BDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A2BE0:
    // 0x800A2BE0: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x800A2BE4: lui         $a3, 0x3F6B
    ctx->r7 = S32(0X3F6B << 16);
    // 0x800A2BE8: ori         $a3, $a3, 0x851F
    ctx->r7 = ctx->r7 | 0X851F;
    // 0x800A2BEC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x800A2BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2BF4: jal         0x8009DC98
    // 0x800A2BF8: addiu       $a1, $zero, 0x4C1
    ctx->r5 = ADD32(0, 0X4C1);
    func_8009DC98(rdram, ctx);
        goto after_19;
    // 0x800A2BF8: addiu       $a1, $zero, 0x4C1
    ctx->r5 = ADD32(0, 0X4C1);
    after_19:
    // 0x800A2BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A2C04: jal         0x80084FC8
    // 0x800A2C08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_20;
    // 0x800A2C08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_20:
    // 0x800A2C0C: jal         0x800843B8
    // 0x800A2C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswasher_entrypoint_0(rdram, ctx);
        goto after_21;
    // 0x800A2C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x800A2C14: b           L_800A2C74
    // 0x800A2C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800A2C74;
    // 0x800A2C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A2C1C:
    // 0x800A2C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2C20: jal         0x8009E674
    // 0x800A2C24: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8009E674(rdram, ctx);
        goto after_22;
    // 0x800A2C24: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_22:
    // 0x800A2C28: beql        $v0, $zero, L_800A2C74
    if (ctx->r2 == 0) {
        // 0x800A2C2C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800A2C74;
    }
    goto skip_2;
    // 0x800A2C2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x800A2C30: jal         0x80084FE0
    // 0x800A2C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_23;
    // 0x800A2C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x800A2C38: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A2C3C: beq         $v0, $at, L_800A2C58
    if (ctx->r2 == ctx->r1) {
        // 0x800A2C40: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_800A2C58;
    }
    // 0x800A2C40: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A2C44: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A2C48: beq         $v0, $at, L_800A2C68
    if (ctx->r2 == ctx->r1) {
        // 0x800A2C4C: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_800A2C68;
    }
    // 0x800A2C4C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A2C50: b           L_800A2C74
    // 0x800A2C54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800A2C74;
    // 0x800A2C54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A2C58:
    // 0x800A2C58: jal         0x80088A30
    // 0x800A2C5C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    _fxstep_entrypoint_10(rdram, ctx);
        goto after_24;
    // 0x800A2C5C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_24:
    // 0x800A2C60: b           L_800A2C74
    // 0x800A2C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800A2C74;
    // 0x800A2C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A2C68:
    // 0x800A2C68: jal         0x80088A30
    // 0x800A2C6C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    _fxstep_entrypoint_10(rdram, ctx);
        goto after_25;
    // 0x800A2C6C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_25:
L_800A2C70:
    // 0x800A2C70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A2C74:
    // 0x800A2C74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A2C78: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800A2C7C: jr          $ra
    // 0x800A2C80: nop

    return;
    // 0x800A2C80: nop

;}
RECOMP_FUNC void func_800A2C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2C84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A2C88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A2C8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A2C90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A2C94: jal         0x8009C128
    // 0x800A2C98: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800A2C98: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x800A2C9C: lw          $t6, 0x124($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X124);
    // 0x800A2CA0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800A2CA4: jal         0x80088A10
    // 0x800A2CA8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    _fxstep_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x800A2CA8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_1:
    // 0x800A2CAC: jal         0x80096628
    // 0x800A2CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096628(rdram, ctx);
        goto after_2;
    // 0x800A2CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A2CB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800A2CB8: jal         0x800964DC
    // 0x800A2CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800964DC(rdram, ctx);
        goto after_3;
    // 0x800A2CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A2CC0: lw          $t7, 0x124($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X124);
    // 0x800A2CC4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800A2CC8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A2CCC: jal         0x80088A08
    // 0x800A2CD0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    _fxstep_entrypoint_5(rdram, ctx);
        goto after_4;
    // 0x800A2CD0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_4:
    // 0x800A2CD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2CD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A2CDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800A2CE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A2CEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A2CF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A2CF8: jal         0x8008CABC
    // 0x800A2CFC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x800A2CFC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A2D00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A2D04: jal         0x8008B348
    // 0x800A2D08: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x800A2D08: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A2D0C: beq         $v0, $zero, L_800A2D1C
    if (ctx->r2 == 0) {
        // 0x800A2D10: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800A2D1C;
    }
    // 0x800A2D10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A2D14: jal         0x800A2EEC
    // 0x800A2D18: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800A2EEC(rdram, ctx);
        goto after_2;
    // 0x800A2D18: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
L_800A2D1C:
    // 0x800A2D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A2D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A2D24: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A2D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2D34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A2D38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A2D3C: jal         0x8008CABC
    // 0x800A2D40: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x800A2D40: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A2D44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A2D48: jal         0x8008B348
    // 0x800A2D4C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x800A2D4C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A2D50: beq         $v0, $zero, L_800A2D60
    if (ctx->r2 == 0) {
        // 0x800A2D54: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800A2D60;
    }
    // 0x800A2D54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A2D58: jal         0x800A2FCC
    // 0x800A2D5C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800A2FCC(rdram, ctx);
        goto after_2;
    // 0x800A2D5C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
L_800A2D60:
    // 0x800A2D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A2D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A2D68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A2D74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2D78: lw          $t6, 0x124($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X124);
    // 0x800A2D7C: jal         0x800889E0
    // 0x800A2D80: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    _fxstep_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800A2D80: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800A2D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A2D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A2D8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2D94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A2D98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A2D9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A2DA0: jal         0x800889E8
    // 0x800A2DA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _fxstep_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800A2DA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A2DA8: lw          $t6, 0x124($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X124);
    // 0x800A2DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2DB0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x800A2DB4: jal         0x800A2EDC
    // 0x800A2DB8: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    func_800A2EDC(rdram, ctx);
        goto after_1;
    // 0x800A2DB8: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    after_1:
    // 0x800A2DBC: jal         0x800D3948
    // 0x800A2DC0: nop

    func_800D3948(rdram, ctx);
        goto after_2;
    // 0x800A2DC0: nop

    after_2:
    // 0x800A2DC4: lw          $t7, 0x124($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X124);
    // 0x800A2DC8: sltiu       $a1, $v0, 0x1
    ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A2DCC: jal         0x800889F8
    // 0x800A2DD0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    _fxstep_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x800A2DD0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_3:
    // 0x800A2DD4: lw          $t8, 0x124($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X124);
    // 0x800A2DD8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800A2DDC: addiu       $a1, $a1, 0x2A00
    ctx->r5 = ADD32(ctx->r5, 0X2A00);
    // 0x800A2DE0: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    // 0x800A2DE4: jal         0x80088A00
    // 0x800A2DE8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    _fxstep_entrypoint_4(rdram, ctx);
        goto after_4;
    // 0x800A2DE8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_4:
    // 0x800A2DEC: lw          $t9, 0x124($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X124);
    // 0x800A2DF0: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800A2DF4: addiu       $a1, $a1, 0x2848
    ctx->r5 = ADD32(ctx->r5, 0X2848);
    // 0x800A2DF8: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    // 0x800A2DFC: jal         0x80088A18
    // 0x800A2E00: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    _fxstep_entrypoint_7(rdram, ctx);
        goto after_5;
    // 0x800A2E00: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_5:
    // 0x800A2E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2E08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A2E0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A2E10: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2E18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A2E1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A2E20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A2E24: jal         0x8009E6F8
    // 0x800A2E28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800A2E28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A2E2C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800A2E30: jal         0x800A2C84
    // 0x800A2E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2C84(rdram, ctx);
        goto after_1;
    // 0x800A2E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A2E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2E3C: jal         0x8009CBDC
    // 0x800A2E40: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009CBDC(rdram, ctx);
        goto after_2;
    // 0x800A2E40: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x800A2E44: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800A2E48: beq         $v0, $at, L_800A2E64
    if (ctx->r2 == ctx->r1) {
        // 0x800A2E4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A2E64;
    }
    // 0x800A2E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2E50: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A2E54: jal         0x8009CA70
    // 0x800A2E58: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_3;
    // 0x800A2E58: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_3:
    // 0x800A2E5C: beql        $v0, $zero, L_800A2E88
    if (ctx->r2 == 0) {
        // 0x800A2E60: lw          $v0, 0x124($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X124);
            goto L_800A2E88;
    }
    goto skip_0;
    // 0x800A2E60: lw          $v0, 0x124($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X124);
    skip_0:
L_800A2E64:
    // 0x800A2E64: lw          $v0, 0x124($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X124);
    // 0x800A2E68: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x800A2E6C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x800A2E70: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800A2E74: jal         0x80088A20
    // 0x800A2E78: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    _fxstep_entrypoint_8(rdram, ctx);
        goto after_4;
    // 0x800A2E78: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    after_4:
    // 0x800A2E7C: b           L_800A2E9C
    // 0x800A2E80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A2E9C;
    // 0x800A2E80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2E84: lw          $v0, 0x124($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X124);
L_800A2E88:
    // 0x800A2E88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A2E8C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800A2E90: jal         0x80088A20
    // 0x800A2E94: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    _fxstep_entrypoint_8(rdram, ctx);
        goto after_5;
    // 0x800A2E94: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    after_5:
    // 0x800A2E98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A2E9C:
    // 0x800A2E9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A2EA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A2EA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2EAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A2EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2EB4: jal         0x800A2C84
    // 0x800A2EB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A2C84(rdram, ctx);
        goto after_0;
    // 0x800A2EB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A2EBC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A2EC0: lw          $t7, 0x124($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X124);
    // 0x800A2EC4: jal         0x80088A28
    // 0x800A2EC8: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    _fxstep_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x800A2EC8: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x800A2ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A2ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A2ED4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2EDC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A2EE0: lw          $t6, 0x124($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X124);
    // 0x800A2EE4: jr          $ra
    // 0x800A2EE8: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x800A2EE8: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800A2EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2EEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A2EF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A2EF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A2EF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A2EFC: jal         0x8009E6F8
    // 0x800A2F00: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800A2F00: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A2F04: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800A2F08: jal         0x800A2C84
    // 0x800A2F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2C84(rdram, ctx);
        goto after_1;
    // 0x800A2F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A2F10: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A2F14: lw          $t7, 0x124($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X124);
    // 0x800A2F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2F1C: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
    // 0x800A2F20: jal         0x8009CBDC
    // 0x800A2F24: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009CBDC(rdram, ctx);
        goto after_2;
    // 0x800A2F24: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x800A2F28: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800A2F2C: beq         $v0, $at, L_800A2F48
    if (ctx->r2 == ctx->r1) {
        // 0x800A2F30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A2F48;
    }
    // 0x800A2F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A2F34: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A2F38: jal         0x8009CA70
    // 0x800A2F3C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_3;
    // 0x800A2F3C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_3:
    // 0x800A2F40: beql        $v0, $zero, L_800A2F6C
    if (ctx->r2 == 0) {
        // 0x800A2F44: lw          $v0, 0x124($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X124);
            goto L_800A2F6C;
    }
    goto skip_0;
    // 0x800A2F44: lw          $v0, 0x124($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X124);
    skip_0:
L_800A2F48:
    // 0x800A2F48: lw          $v0, 0x124($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X124);
    // 0x800A2F4C: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x800A2F50: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x800A2F54: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800A2F58: jal         0x80088A38
    // 0x800A2F5C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    _fxstep_entrypoint_11(rdram, ctx);
        goto after_4;
    // 0x800A2F5C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    after_4:
    // 0x800A2F60: b           L_800A2F80
    // 0x800A2F64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A2F80;
    // 0x800A2F64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2F68: lw          $v0, 0x124($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X124);
L_800A2F6C:
    // 0x800A2F6C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A2F70: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800A2F74: jal         0x80088A38
    // 0x800A2F78: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    _fxstep_entrypoint_11(rdram, ctx);
        goto after_5;
    // 0x800A2F78: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    after_5:
    // 0x800A2F7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A2F80:
    // 0x800A2F80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A2F84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A2F88: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A2F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A2F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2F98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A2F9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A2FA0: lw          $t7, 0x124($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X124);
    // 0x800A2FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A2FA8: jal         0x800889F0
    // 0x800A2FAC: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    _fxstep_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800A2FAC: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_0:
    // 0x800A2FB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A2FB4: jal         0x800A2EEC
    // 0x800A2FB8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800A2EEC(rdram, ctx);
        goto after_1;
    // 0x800A2FB8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A2FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A2FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A2FC4: jr          $ra
    // 0x800A2FC8: nop

    return;
    // 0x800A2FC8: nop

;}
RECOMP_FUNC void func_800A2FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A2FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2FD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A2FD8: jal         0x800A2C84
    // 0x800A2FDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A2C84(rdram, ctx);
        goto after_0;
    // 0x800A2FDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A2FE0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A2FE4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2FE8: lw          $t7, 0x124($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X124);
    // 0x800A2FEC: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
    // 0x800A2FF0: lw          $t8, 0x124($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X124);
    // 0x800A2FF4: jal         0x80088A40
    // 0x800A2FF8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    _fxstep_entrypoint_12(rdram, ctx);
        goto after_1;
    // 0x800A2FF8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_1:
    // 0x800A2FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3004: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A300C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A300C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A3018: lw          $t7, 0x124($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X124);
    // 0x800A301C: jal         0x800BC3F0
    // 0x800A3020: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_800BC3F0(rdram, ctx);
        goto after_0;
    // 0x800A3020: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_0:
    // 0x800A3024: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800A3028: lw          $t9, 0x124($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X124);
    // 0x800A302C: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x800A3030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3038: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3040: jr          $ra
    // 0x800A3044: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    return;
    // 0x800A3044: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
;}
RECOMP_FUNC void func_800A3048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A304C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3050: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A3054: jal         0x800D3E40
    // 0x800A3058: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_800D3E40(rdram, ctx);
        goto after_0;
    // 0x800A3058: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x800A305C: bne         $v0, $zero, L_800A3070
    if (ctx->r2 != 0) {
        // 0x800A3060: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800A3070;
    }
    // 0x800A3060: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A3064: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A3068: b           L_800A30A8
    // 0x800A306C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A30A8;
    // 0x800A306C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A3070:
    // 0x800A3070: jal         0x8008E40C
    // 0x800A3074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E40C(rdram, ctx);
        goto after_1;
    // 0x800A3074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A3078: beq         $v0, $zero, L_800A308C
    if (ctx->r2 == 0) {
        // 0x800A307C: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_800A308C;
    }
    // 0x800A307C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A3080: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A3084: b           L_800A30A4
    // 0x800A3088: lwc1        $f0, 0x5560($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5560);
        goto L_800A30A4;
    // 0x800A3088: lwc1        $f0, 0x5560($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5560);
L_800A308C:
    // 0x800A308C: lw          $t7, 0xA0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XA0);
    // 0x800A3090: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A3094: lbu         $t8, 0x29($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X29);
    // 0x800A3098: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A309C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A30A0: lwc1        $f0, -0x6B30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6B30);
L_800A30A4:
    // 0x800A30A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A30A8:
    // 0x800A30A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A30AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A30B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A30B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A30B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A30BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800A30C0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800A30C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800A30C8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800A30CC: jal         0x800A3148
    // 0x800A30D0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    func_800A3148(rdram, ctx);
        goto after_0;
    // 0x800A30D0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800A30D4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800A30D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A30DC: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A30E0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800A30E4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A30E8: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A30EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800A30F0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x800A30F4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x800A30F8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x800A30FC: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x800A3100: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x800A3104: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800A3108: jal         0x800EFA4C
    // 0x800A310C: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x800A310C: nop

    after_1:
    // 0x800A3110: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800A3114: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800A3118: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A311C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A3120: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800A3124: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800A3128: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800A312C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A3130: jal         0x800EFA4C
    // 0x800A3134: nop

    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x800A3134: nop

    after_2:
    // 0x800A3138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A313C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A3140: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A314C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3150: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3154: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A3158: addiu       $t8, $t8, -0x6CC0
    ctx->r24 = ADD32(ctx->r24, -0X6CC0);
    // 0x800A315C: lbu         $v1, 0x29($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X29);
    // 0x800A3160: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A3164: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800A3168: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x800A316C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A3170: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800A3174: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800A3178: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800A317C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A3180: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x800A3184: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800A3188: beq         $v1, $at, L_800A31A4
    if (ctx->r3 == ctx->r1) {
        // 0x800A318C: swc1        $f8, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
            goto L_800A31A4;
    }
    // 0x800A318C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x800A3190: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800A3194: beq         $v1, $at, L_800A31E8
    if (ctx->r3 == ctx->r1) {
        // 0x800A3198: nop
    
            goto L_800A31E8;
    }
    // 0x800A3198: nop

    // 0x800A319C: b           L_800A31F4
    // 0x800A31A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A31F4;
    // 0x800A31A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A31A4:
    // 0x800A31A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A31A8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800A31AC: jal         0x800850F8
    // 0x800A31B0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    _basnowball_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800A31B0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x800A31B4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800A31B8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800A31BC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x800A31C0: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A31C4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800A31C8: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x800A31CC: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800A31D0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800A31D4: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x800A31D8: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800A31DC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800A31E0: b           L_800A31F0
    // 0x800A31E4: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
        goto L_800A31F0;
    // 0x800A31E4: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
L_800A31E8:
    // 0x800A31E8: jal         0x800842B8
    // 0x800A31EC: nop

    _bsfirstp_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x800A31EC: nop

    after_1:
L_800A31F0:
    // 0x800A31F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A31F4:
    // 0x800A31F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A31F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3208: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A320C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800A3210: addiu       $t8, $t8, -0x6BD0
    ctx->r24 = ADD32(ctx->r24, -0X6BD0);
    // 0x800A3214: lbu         $v0, 0x29($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X29);
    // 0x800A3218: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A321C: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x800A3220: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x800A3224: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A3228: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800A322C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800A3230: bne         $v0, $at, L_800A3264
    if (ctx->r2 != ctx->r1) {
        // 0x800A3234: swc1        $f6, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
            goto L_800A3264;
    }
    // 0x800A3234: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x800A3238: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A323C: jal         0x800850F8
    // 0x800A3240: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    _basnowball_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800A3240: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A3244: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800A3248: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800A324C: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A3250: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A3254: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x800A3258: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800A325C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A3260: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_800A3264:
    // 0x800A3264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A326C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3274: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3278: jr          $ra
    // 0x800A327C: lbu         $v0, 0x29($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X29);
    return;
    // 0x800A327C: lbu         $v0, 0x29($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X29);
;}
RECOMP_FUNC void func_800A3280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3280: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3284: jr          $ra
    // 0x800A3288: lbu         $v0, 0x2A($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2A);
    return;
    // 0x800A3288: lbu         $v0, 0x2A($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2A);
;}
RECOMP_FUNC void func_800A328C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A328C: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3290: jr          $ra
    // 0x800A3294: lwc1        $f0, 0x48($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X48);
    return;
    // 0x800A3294: lwc1        $f0, 0x48($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X48);
;}
RECOMP_FUNC void func_800A3298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A329C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A32A0: jal         0x800964DC
    // 0x800A32A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800964DC(rdram, ctx);
        goto after_0;
    // 0x800A32A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A32A8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A32AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A32B0: lw          $t7, 0xA0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XA0);
    // 0x800A32B4: lwc1        $f4, 0x48($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X48);
    // 0x800A32B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A32BC: jr          $ra
    // 0x800A32C0: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    return;
    // 0x800A32C0: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
;}
RECOMP_FUNC void func_800A32C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A32C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A32C8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800A32CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A32D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A32D4: jal         0x800EE7F8
    // 0x800A32D8: lw          $a1, 0xA0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA0);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800A32D8: lw          $a1, 0xA0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA0);
    after_0:
    // 0x800A32DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A32E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A32E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A32EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A32EC: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A32F0: jr          $ra
    // 0x800A32F4: lbu         $v0, 0x2B($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2B);
    return;
    // 0x800A32F4: lbu         $v0, 0x2B($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2B);
;}
RECOMP_FUNC void func_800A32F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A32F8: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A32FC: jr          $ra
    // 0x800A3300: lw          $v0, 0x44($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X44);
    return;
    // 0x800A3300: lw          $v0, 0x44($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X44);
;}
RECOMP_FUNC void func_800A3304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A330C: jal         0x800F8B88
    // 0x800A3310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F8B88(rdram, ctx);
        goto after_0;
    // 0x800A3310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A3314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3318: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x800A331C: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x800A3320: jr          $ra
    // 0x800A3324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800A3324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A3328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A332C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800A3330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3334: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A3338: lw          $a1, 0xA0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA0);
    // 0x800A333C: jal         0x800EE7F8
    // 0x800A3340: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800A3340: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_0:
    // 0x800A3344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A334C: jr          $ra
    // 0x800A3350: nop

    return;
    // 0x800A3350: nop

;}
RECOMP_FUNC void func_800A3354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3354: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3358: jr          $ra
    // 0x800A335C: lbu         $v0, 0x54($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X54);
    return;
    // 0x800A335C: lbu         $v0, 0x54($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X54);
;}
RECOMP_FUNC void func_800A3360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3360: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3364: jr          $ra
    // 0x800A3368: lbu         $v0, 0x55($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X55);
    return;
    // 0x800A3368: lbu         $v0, 0x55($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X55);
;}
RECOMP_FUNC void func_800A336C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A336C: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3370: jr          $ra
    // 0x800A3374: lbu         $v0, 0x3C($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X3C);
    return;
    // 0x800A3374: lbu         $v0, 0x3C($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X3C);
;}
RECOMP_FUNC void func_800A3378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3378: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A337C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A3380: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A3384: lwc1        $f4, 0x38($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X38);
    // 0x800A3388: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A338C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3394: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3398: jr          $ra
    // 0x800A339C: lwc1        $f0, 0x24($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X24);
    return;
    // 0x800A339C: lwc1        $f0, 0x24($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X24);
;}
RECOMP_FUNC void func_800A33A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A33A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A33A4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800A33A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A33AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A33B0: lw          $a1, 0xA0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA0);
    // 0x800A33B4: jal         0x800EE7F8
    // 0x800A33B8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800A33B8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_0:
    // 0x800A33BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A33C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A33C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A33CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A33CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A33D0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800A33D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A33D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A33DC: lw          $a1, 0xA0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA0);
    // 0x800A33E0: jal         0x800EE7F8
    // 0x800A33E4: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800A33E4: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_0:
    // 0x800A33E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A33EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A33F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A33F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A33F8: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A33FC: jr          $ra
    // 0x800A3400: lbu         $v0, 0x28($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X28);
    return;
    // 0x800A3400: lbu         $v0, 0x28($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X28);
;}
RECOMP_FUNC void func_800A3404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3404: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3408: jr          $ra
    // 0x800A340C: lbu         $v0, 0x3F($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X3F);
    return;
    // 0x800A340C: lbu         $v0, 0x3F($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X3F);
;}
RECOMP_FUNC void func_800A3410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3410: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A3414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A3418: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A341C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A3420: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3424: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A3428: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A342C: lbu         $t6, 0x29($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X29);
    // 0x800A3430: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A3434: bnel        $t6, $at, L_800A3458
    if (ctx->r14 != ctx->r1) {
        // 0x800A3438: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_800A3458;
    }
    goto skip_0;
    // 0x800A3438: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800A343C: jal         0x800947EC
    // 0x800A3440: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_0;
    // 0x800A3440: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800A3444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3448: jal         0x800A0D68
    // 0x800A344C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0D68(rdram, ctx);
        goto after_1;
    // 0x800A344C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800A3450: lw          $v0, 0xA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3454: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_800A3458:
    // 0x800A3458: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A345C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3460: sb          $t7, 0x29($v0)
    MEM_B(0X29, ctx->r2) = ctx->r15;
    // 0x800A3464: lw          $t8, 0xA0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A346C: lbu         $t9, 0x29($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X29);
    // 0x800A3470: bnel        $t9, $at, L_800A3490
    if (ctx->r25 != ctx->r1) {
        // 0x800A3474: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A3490;
    }
    goto skip_1;
    // 0x800A3474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800A3478: jal         0x800947EC
    // 0x800A347C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_2;
    // 0x800A347C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x800A3480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3484: jal         0x800A0D68
    // 0x800A3488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0D68(rdram, ctx);
        goto after_3;
    // 0x800A3488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800A348C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A3490:
    // 0x800A3490: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A3494: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A3498: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A34A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A34A0: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A34A4: jr          $ra
    // 0x800A34A8: sb          $a1, 0x2A($t6)
    MEM_B(0X2A, ctx->r14) = ctx->r5;
    return;
    // 0x800A34A8: sb          $a1, 0x2A($t6)
    MEM_B(0X2A, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A34AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A34AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A34B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A34B4: jal         0x800EE7F8
    // 0x800A34B8: lw          $a0, 0xA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA0);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800A34B8: lw          $a0, 0xA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA0);
    after_0:
    // 0x800A34BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A34C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A34C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A34CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A34CC: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A34D0: jr          $ra
    // 0x800A34D4: sb          $a1, 0x2B($t6)
    MEM_B(0X2B, ctx->r14) = ctx->r5;
    return;
    // 0x800A34D4: sb          $a1, 0x2B($t6)
    MEM_B(0X2B, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A34D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A34D8: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A34DC: jr          $ra
    // 0x800A34E0: sw          $a1, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->r5;
    return;
    // 0x800A34E0: sw          $a1, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A34E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A34E4: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A34E8: jr          $ra
    // 0x800A34EC: sb          $a1, 0x3C($t6)
    MEM_B(0X3C, ctx->r14) = ctx->r5;
    return;
    // 0x800A34EC: sb          $a1, 0x3C($t6)
    MEM_B(0X3C, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A34F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A34F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A34F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A34F8: lw          $a0, 0xA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA0);
    // 0x800A34FC: jal         0x800EE7F8
    // 0x800A3500: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800A3500: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x800A3504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A350C: jr          $ra
    // 0x800A3510: nop

    return;
    // 0x800A3510: nop

;}
RECOMP_FUNC void func_800A3514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A351C: lw          $a0, 0xA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3520: jal         0x800EE7F8
    // 0x800A3524: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800A3524: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x800A3528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A352C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3530: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3538: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A353C: jr          $ra
    // 0x800A3540: sb          $a1, 0x28($t6)
    MEM_B(0X28, ctx->r14) = ctx->r5;
    return;
    // 0x800A3540: sb          $a1, 0x28($t6)
    MEM_B(0X28, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A3544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3544: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3548: jr          $ra
    // 0x800A354C: sb          $a1, 0x3F($t6)
    MEM_B(0X3F, ctx->r14) = ctx->r5;
    return;
    // 0x800A354C: sb          $a1, 0x3F($t6)
    MEM_B(0X3F, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A3550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3550: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3554: jr          $ra
    // 0x800A3558: sb          $a1, 0x50($t6)
    MEM_B(0X50, ctx->r14) = ctx->r5;
    return;
    // 0x800A3558: sb          $a1, 0x50($t6)
    MEM_B(0X50, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A355C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A355C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A3560: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A3564: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A3568: jal         0x8009C150
    // 0x800A356C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009C150(rdram, ctx);
        goto after_0;
    // 0x800A356C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A3570: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x800A3574: jal         0x800F3ED0
    // 0x800A3578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F3ED0(rdram, ctx);
        goto after_1;
    // 0x800A3578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A357C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800A3580: jal         0x8008E078
    // 0x800A3584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_2;
    // 0x800A3584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A3588: bnel        $v0, $zero, L_800A35D8
    if (ctx->r2 != 0) {
        // 0x800A358C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A35D8;
    }
    goto skip_0;
    // 0x800A358C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800A3590: jal         0x8008E35C
    // 0x800A3594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_3;
    // 0x800A3594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A3598: bne         $v0, $zero, L_800A35D4
    if (ctx->r2 != 0) {
        // 0x800A359C: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_800A35D4;
    }
    // 0x800A359C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800A35A0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A35A4: bne         $t6, $at, L_800A35C0
    if (ctx->r14 != ctx->r1) {
        // 0x800A35A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A35C0;
    }
    // 0x800A35A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A35AC: jal         0x8008EF3C
    // 0x800A35B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008EF3C(rdram, ctx);
        goto after_4;
    // 0x800A35B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800A35B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A35B8: bnel        $v0, $at, L_800A35D8
    if (ctx->r2 != ctx->r1) {
        // 0x800A35BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A35D8;
    }
    goto skip_1;
    // 0x800A35BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_800A35C0:
    // 0x800A35C0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800A35C4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A35C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A35CC: bne         $t7, $at, L_800A35E8
    if (ctx->r15 != ctx->r1) {
        // 0x800A35D0: nop
    
            goto L_800A35E8;
    }
    // 0x800A35D0: nop

L_800A35D4:
    // 0x800A35D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A35D8:
    // 0x800A35D8: jal         0x800A3550
    // 0x800A35DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A3550(rdram, ctx);
        goto after_5;
    // 0x800A35DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800A35E0: b           L_800A35F4
    // 0x800A35E4: lw          $v0, 0xA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA0);
        goto L_800A35F4;
    // 0x800A35E4: lw          $v0, 0xA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA0);
L_800A35E8:
    // 0x800A35E8: jal         0x800A3550
    // 0x800A35EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A3550(rdram, ctx);
        goto after_6;
    // 0x800A35EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x800A35F0: lw          $v0, 0xA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA0);
L_800A35F4:
    // 0x800A35F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A35F8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A35FC: lbu         $t8, 0x50($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X50);
    // 0x800A3600: bnel        $t8, $at, L_800A3620
    if (ctx->r24 != ctx->r1) {
        // 0x800A3604: lwc1        $f8, 0x4C($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
            goto L_800A3620;
    }
    goto skip_2;
    // 0x800A3604: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
    skip_2:
    // 0x800A3608: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x800A360C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800A3610: nop

    // 0x800A3614: bc1tl       L_800A3634
    if (c1cs) {
        // 0x800A3618: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A3634;
    }
    goto skip_3;
    // 0x800A3618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x800A361C: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
L_800A3620:
    // 0x800A3620: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
    // 0x800A3624: lw          $t9, 0xA0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3628: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A362C: swc1        $f10, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->f10.u32l;
    // 0x800A3630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A3634:
    // 0x800A3634: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A3638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A363C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3644: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A3648: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A364C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A3650: jal         0x800D8FF8
    // 0x800A3654: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800A3654: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A3658: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800A365C: jal         0x800963E4
    // 0x800A3660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800963E4(rdram, ctx);
        goto after_1;
    // 0x800A3660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A3664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3668: jal         0x80096628
    // 0x800A366C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_80096628(rdram, ctx);
        goto after_2;
    // 0x800A366C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x800A3670: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800A3674: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3678: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A367C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800A3680: lbu         $t6, 0x3D($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3D);
    // 0x800A3684: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800A3688: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x800A368C: beql        $t6, $zero, L_800A36D4
    if (ctx->r14 == 0) {
        // 0x800A3690: mtc1        $at, $f14
        ctx->f14.u32l = ctx->r1;
            goto L_800A36D4;
    }
    goto skip_0;
    // 0x800A3690: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    skip_0:
    // 0x800A3694: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x800A3698: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A369C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A36A0: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x800A36A4: nop

    // 0x800A36A8: bc1fl       L_800A36C0
    if (!c1cs) {
        // 0x800A36AC: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_800A36C0;
    }
    goto skip_1;
    // 0x800A36AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_1:
    // 0x800A36B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A36B4: b           L_800A36C8
    // 0x800A36B8: swc1        $f6, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f6.u32l;
        goto L_800A36C8;
    // 0x800A36B8: swc1        $f6, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f6.u32l;
    // 0x800A36BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_800A36C0:
    // 0x800A36C0: nop

    // 0x800A36C4: swc1        $f8, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f8.u32l;
L_800A36C8:
    // 0x800A36C8: b           L_800A37F4
    // 0x800A36CC: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
        goto L_800A37F4;
    // 0x800A36CC: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x800A36D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
L_800A36D4:
    // 0x800A36D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A36D8: lwc1        $f10, 0x5564($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5564);
    // 0x800A36DC: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x800A36E0: jal         0x800F10B4
    // 0x800A36E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x800A36E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x800A36E8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x800A36EC: jal         0x80096518
    // 0x800A36F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096518(rdram, ctx);
        goto after_4;
    // 0x800A36F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800A36F4: bne         $v0, $zero, L_800A3734
    if (ctx->r2 != 0) {
        // 0x800A36F8: lw          $t7, 0x30($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X30);
            goto L_800A3734;
    }
    // 0x800A36F8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800A36FC: andi        $t8, $t7, 0x50
    ctx->r24 = ctx->r15 & 0X50;
    // 0x800A3700: bnel        $t8, $zero, L_800A3738
    if (ctx->r24 != 0) {
        // 0x800A3704: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_800A3738;
    }
    goto skip_2;
    // 0x800A3704: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x800A3708: jal         0x80096434
    // 0x800A370C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096434(rdram, ctx);
        goto after_5;
    // 0x800A370C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800A3710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3714: jal         0x8009650C
    // 0x800A3718: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8009650C(rdram, ctx);
        goto after_6;
    // 0x800A3718: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_6:
    // 0x800A371C: beq         $v0, $zero, L_800A3734
    if (ctx->r2 == 0) {
        // 0x800A3720: lw          $v1, 0x2C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X2C);
            goto L_800A3734;
    }
    // 0x800A3720: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800A3724: andi        $t9, $v1, 0x50
    ctx->r25 = ctx->r3 & 0X50;
    // 0x800A3728: beql        $t9, $zero, L_800A3738
    if (ctx->r25 == 0) {
        // 0x800A372C: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_800A3738;
    }
    goto skip_3;
    // 0x800A372C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    skip_3:
    // 0x800A3730: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
L_800A3734:
    // 0x800A3734: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
L_800A3738:
    // 0x800A3738: andi        $t1, $t0, 0x50
    ctx->r9 = ctx->r8 & 0X50;
    // 0x800A373C: beql        $t1, $zero, L_800A3784
    if (ctx->r9 == 0) {
        // 0x800A3740: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_800A3784;
    }
    goto skip_4;
    // 0x800A3740: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_4:
    // 0x800A3744: jal         0x8008E35C
    // 0x800A3748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_7;
    // 0x800A3748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800A374C: bne         $v0, $zero, L_800A3780
    if (ctx->r2 != 0) {
        // 0x800A3750: lwc1        $f16, 0x34($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
            goto L_800A3780;
    }
    // 0x800A3750: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800A3754: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800A3758: lw          $t2, 0xA0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XA0);
    // 0x800A375C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A3760: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A3764: lwc1        $f6, 0x38($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X38);
    // 0x800A3768: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A376C: jal         0x800F13F0
    // 0x800A3770: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    func_800F13F0(rdram, ctx);
        goto after_8;
    // 0x800A3770: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_8:
    // 0x800A3774: lw          $t3, 0xA0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3778: b           L_800A378C
    // 0x800A377C: swc1        $f0, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->f0.u32l;
        goto L_800A378C;
    // 0x800A377C: swc1        $f0, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->f0.u32l;
L_800A3780:
    // 0x800A3780: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_800A3784:
    // 0x800A3784: lw          $t4, 0xA0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3788: swc1        $f8, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->f8.u32l;
L_800A378C:
    // 0x800A378C: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3790: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A3794: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A3798: lwc1        $f16, 0x38($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X38);
    // 0x800A379C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800A37A0: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800A37A4: andi        $t6, $t5, 0x10
    ctx->r14 = ctx->r13 & 0X10;
    // 0x800A37A8: bc1fl       L_800A37F8
    if (!c1cs) {
        // 0x800A37AC: sb          $zero, 0x3D($v1)
        MEM_B(0X3D, ctx->r3) = 0;
            goto L_800A37F8;
    }
    goto skip_5;
    // 0x800A37AC: sb          $zero, 0x3D($v1)
    MEM_B(0X3D, ctx->r3) = 0;
    skip_5:
    // 0x800A37B0: beq         $t6, $zero, L_800A37D4
    if (ctx->r14 == 0) {
        // 0x800A37B4: lw          $t7, 0x30($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X30);
            goto L_800A37D4;
    }
    // 0x800A37B4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800A37B8: lui         $a2, 0x3E38
    ctx->r6 = S32(0X3E38 << 16);
    // 0x800A37BC: ori         $a2, $a2, 0x51EC
    ctx->r6 = ctx->r6 | 0X51EC;
    // 0x800A37C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A37C4: jal         0x800917A8
    // 0x800A37C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800917A8(rdram, ctx);
        goto after_9;
    // 0x800A37C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_9:
    // 0x800A37CC: b           L_800A37F4
    // 0x800A37D0: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
        goto L_800A37F4;
    // 0x800A37D0: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
L_800A37D4:
    // 0x800A37D4: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x800A37D8: beq         $t8, $zero, L_800A37F4
    if (ctx->r24 == 0) {
        // 0x800A37DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A37F4;
    }
    // 0x800A37DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A37E0: lui         $a2, 0x3E38
    ctx->r6 = S32(0X3E38 << 16);
    // 0x800A37E4: ori         $a2, $a2, 0x51EC
    ctx->r6 = ctx->r6 | 0X51EC;
    // 0x800A37E8: jal         0x800917A8
    // 0x800A37EC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800917A8(rdram, ctx);
        goto after_10;
    // 0x800A37EC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_10:
    // 0x800A37F0: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
L_800A37F4:
    // 0x800A37F4: sb          $zero, 0x3D($v1)
    MEM_B(0X3D, ctx->r3) = 0;
L_800A37F8:
    // 0x800A37F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A37FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A3800: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800A3804: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A380C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A380C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A3810: lwc1        $f4, 0x5568($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5568);
    // 0x800A3814: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3818: jr          $ra
    // 0x800A381C: swc1        $f4, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->f4.u32l;
    return;
    // 0x800A381C: swc1        $f4, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800A3820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3820: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A3824: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A3828: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A382C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A3830: jal         0x800EFD24
    // 0x800A3834: lw          $a0, 0xA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA0);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x800A3834: lw          $a0, 0xA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA0);
    after_0:
    // 0x800A3838: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x800A383C: jal         0x800EFD24
    // 0x800A3840: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x800A3840: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
    // 0x800A3844: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A384C: jal         0x8009C128
    // 0x800A3850: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x800A3850: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_2:
    // 0x800A3854: lw          $t6, 0xA0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3858: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A385C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3860: sb          $zero, 0x3D($t6)
    MEM_B(0X3D, ctx->r14) = 0;
    // 0x800A3864: lw          $t7, 0xA0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3868: jal         0x800A380C
    // 0x800A386C: swc1        $f4, 0x38($t7)
    MEM_W(0X38, ctx->r15) = ctx->f4.u32l;
    func_800A380C(rdram, ctx);
        goto after_3;
    // 0x800A386C: swc1        $f4, 0x38($t7)
    MEM_W(0X38, ctx->r15) = ctx->f4.u32l;
    after_3:
    // 0x800A3870: lw          $t9, 0xA0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3874: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A3878: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A387C: sb          $t8, 0x3C($t9)
    MEM_B(0X3C, ctx->r25) = ctx->r24;
    // 0x800A3880: lw          $t0, 0xA0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3888: swc1        $f6, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f6.u32l;
    // 0x800A388C: lw          $t1, 0xA0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3890: jal         0x8009C150
    // 0x800A3894: sb          $zero, 0x50($t1)
    MEM_B(0X50, ctx->r9) = 0;
    func_8009C150(rdram, ctx);
        goto after_4;
    // 0x800A3894: sb          $zero, 0x50($t1)
    MEM_B(0X50, ctx->r9) = 0;
    after_4:
    // 0x800A3898: lw          $t2, 0xA0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XA0);
    // 0x800A389C: swc1        $f0, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f0.u32l;
    // 0x800A38A0: lw          $t3, 0xA0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XA0);
    // 0x800A38A4: swc1        $f0, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->f0.u32l;
    // 0x800A38A8: lw          $t4, 0xA0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XA0);
    // 0x800A38AC: jal         0x8009E958
    // 0x800A38B0: sb          $zero, 0x29($t4)
    MEM_B(0X29, ctx->r12) = 0;
    func_8009E958(rdram, ctx);
        goto after_5;
    // 0x800A38B0: sb          $zero, 0x29($t4)
    MEM_B(0X29, ctx->r12) = 0;
    after_5:
    // 0x800A38B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A38B8: jal         0x800A3410
    // 0x800A38BC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A3410(rdram, ctx);
        goto after_6;
    // 0x800A38BC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x800A38C0: lw          $t5, 0xA0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XA0);
    // 0x800A38C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A38C8: sb          $v0, 0x54($t5)
    MEM_B(0X54, ctx->r13) = ctx->r2;
    // 0x800A38CC: lw          $t6, 0xA0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XA0);
    // 0x800A38D0: sb          $v0, 0x55($t6)
    MEM_B(0X55, ctx->r14) = ctx->r2;
    // 0x800A38D4: lw          $t7, 0xA0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA0);
    // 0x800A38D8: sb          $v0, 0x3E($t7)
    MEM_B(0X3E, ctx->r15) = ctx->r2;
    // 0x800A38DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A38E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A38E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A38E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A38F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A38F0: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A38F4: sb          $a1, 0x54($t6)
    MEM_B(0X54, ctx->r14) = ctx->r5;
    // 0x800A38F8: lw          $t7, 0xA0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA0);
    // 0x800A38FC: jr          $ra
    // 0x800A3900: sb          $a2, 0x55($t7)
    MEM_B(0X55, ctx->r15) = ctx->r6;
    return;
    // 0x800A3900: sb          $a2, 0x55($t7)
    MEM_B(0X55, ctx->r15) = ctx->r6;
;}
RECOMP_FUNC void func_800A3904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3904: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3908: jr          $ra
    // 0x800A390C: sb          $a1, 0x3E($t6)
    MEM_B(0X3E, ctx->r14) = ctx->r5;
    return;
    // 0x800A390C: sb          $a1, 0x3E($t6)
    MEM_B(0X3E, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A3910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3910: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3914: jr          $ra
    // 0x800A3918: sb          $a1, 0x3D($t6)
    MEM_B(0X3D, ctx->r14) = ctx->r5;
    return;
    // 0x800A3918: sb          $a1, 0x3D($t6)
    MEM_B(0X3D, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800A391C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A391C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A3920: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3924: jr          $ra
    // 0x800A3928: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x800A3928: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800A392C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A392C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A3930: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A3934: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800A3938: jal         0x8009C128
    // 0x800A393C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800A393C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x800A3940: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800A3944: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800A3948: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800A394C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800A3950: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800A3954: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800A3958: jal         0x800C05B8
    // 0x800A395C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800C05B8(rdram, ctx);
        goto after_1;
    // 0x800A395C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x800A3960: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A3964: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800A3968: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3978: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A397C: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3980: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A3984: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800A3988: lwc1        $f6, 0x40($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X40);
    // 0x800A398C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800A3990: nop

    // 0x800A3994: bc1tl       L_800A39A8
    if (c1cs) {
        // 0x800A3998: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_800A39A8;
    }
    goto skip_0;
    // 0x800A3998: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x800A399C: b           L_800A3A70
    // 0x800A39A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A3A70;
    // 0x800A39A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A39A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_800A39A8:
    // 0x800A39A8: nop

    // 0x800A39AC: swc1        $f8, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f8.u32l;
    // 0x800A39B0: jal         0x800A3274
    // 0x800A39B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x800A39B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A39B8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x800A39BC: bne         $v0, $at, L_800A39D4
    if (ctx->r2 != ctx->r1) {
        // 0x800A39C0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800A39D4;
    }
    // 0x800A39C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A39C4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x800A39C8: jal         0x8009E7C8
    // 0x800A39CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E7C8(rdram, ctx);
        goto after_1;
    // 0x800A39CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x800A39D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_800A39D4:
    // 0x800A39D4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800A39D8: beq         $a1, $zero, L_800A39F0
    if (ctx->r5 == 0) {
        // 0x800A39DC: nop
    
            goto L_800A39F0;
    }
    // 0x800A39DC: nop

    // 0x800A39E0: jal         0x800A392C
    // 0x800A39E4: nop

    func_800A392C(rdram, ctx);
        goto after_2;
    // 0x800A39E4: nop

    after_2:
    // 0x800A39E8: b           L_800A3A74
    // 0x800A39EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A3A74;
    // 0x800A39EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A39F0:
    // 0x800A39F0: jal         0x800A3274
    // 0x800A39F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A3274(rdram, ctx);
        goto after_3;
    // 0x800A39F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x800A39F8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A39FC: beq         $v0, $at, L_800A3A28
    if (ctx->r2 == ctx->r1) {
        // 0x800A3A00: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800A3A28;
    }
    // 0x800A3A00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A3A04: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800A3A08: beq         $v0, $at, L_800A3A38
    if (ctx->r2 == ctx->r1) {
        // 0x800A3A0C: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_800A3A38;
    }
    // 0x800A3A0C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x800A3A10: beq         $v0, $at, L_800A3A48
    if (ctx->r2 == ctx->r1) {
        // 0x800A3A14: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_800A3A48;
    }
    // 0x800A3A14: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x800A3A18: beq         $v0, $at, L_800A3A58
    if (ctx->r2 == ctx->r1) {
        // 0x800A3A1C: nop
    
            goto L_800A3A58;
    }
    // 0x800A3A1C: nop

    // 0x800A3A20: b           L_800A3A68
    // 0x800A3A24: nop

        goto L_800A3A68;
    // 0x800A3A24: nop

L_800A3A28:
    // 0x800A3A28: jal         0x800A392C
    // 0x800A3A2C: addiu       $a1, $zero, 0x1212
    ctx->r5 = ADD32(0, 0X1212);
    func_800A392C(rdram, ctx);
        goto after_4;
    // 0x800A3A2C: addiu       $a1, $zero, 0x1212
    ctx->r5 = ADD32(0, 0X1212);
    after_4:
    // 0x800A3A30: b           L_800A3A74
    // 0x800A3A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A3A74;
    // 0x800A3A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A3A38:
    // 0x800A3A38: jal         0x800A392C
    // 0x800A3A3C: addiu       $a1, $zero, 0x1213
    ctx->r5 = ADD32(0, 0X1213);
    func_800A392C(rdram, ctx);
        goto after_5;
    // 0x800A3A3C: addiu       $a1, $zero, 0x1213
    ctx->r5 = ADD32(0, 0X1213);
    after_5:
    // 0x800A3A40: b           L_800A3A74
    // 0x800A3A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A3A74;
    // 0x800A3A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A3A48:
    // 0x800A3A48: jal         0x800A392C
    // 0x800A3A4C: addiu       $a1, $zero, 0x1214
    ctx->r5 = ADD32(0, 0X1214);
    func_800A392C(rdram, ctx);
        goto after_6;
    // 0x800A3A4C: addiu       $a1, $zero, 0x1214
    ctx->r5 = ADD32(0, 0X1214);
    after_6:
    // 0x800A3A50: b           L_800A3A74
    // 0x800A3A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A3A74;
    // 0x800A3A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A3A58:
    // 0x800A3A58: jal         0x800A392C
    // 0x800A3A5C: addiu       $a1, $zero, 0x1216
    ctx->r5 = ADD32(0, 0X1216);
    func_800A392C(rdram, ctx);
        goto after_7;
    // 0x800A3A5C: addiu       $a1, $zero, 0x1216
    ctx->r5 = ADD32(0, 0X1216);
    after_7:
    // 0x800A3A60: b           L_800A3A74
    // 0x800A3A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A3A74;
    // 0x800A3A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A3A68:
    // 0x800A3A68: jal         0x800A392C
    // 0x800A3A6C: addiu       $a1, $zero, 0x1217
    ctx->r5 = ADD32(0, 0X1217);
    func_800A392C(rdram, ctx);
        goto after_8;
    // 0x800A3A6C: addiu       $a1, $zero, 0x1217
    ctx->r5 = ADD32(0, 0X1217);
    after_8:
L_800A3A70:
    // 0x800A3A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A3A74:
    // 0x800A3A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3A78: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3A80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A3A84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A3A88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A3A8C: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x800A3A90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A3A94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A3A98: lwc1        $f6, 0x40($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X40);
    // 0x800A3A9C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800A3AA0: nop

    // 0x800A3AA4: bc1t        L_800A3AB4
    if (c1cs) {
        // 0x800A3AA8: nop
    
            goto L_800A3AB4;
    }
    // 0x800A3AA8: nop

    // 0x800A3AAC: jal         0x800D9078
    // 0x800A3AB0: addiu       $a0, $v0, 0x40
    ctx->r4 = ADD32(ctx->r2, 0X40);
    func_800D9078(rdram, ctx);
        goto after_0;
    // 0x800A3AB0: addiu       $a0, $v0, 0x40
    ctx->r4 = ADD32(ctx->r2, 0X40);
    after_0:
L_800A3AB4:
    // 0x800A3AB4: jal         0x8008E078
    // 0x800A3AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x800A3AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A3ABC: beq         $v0, $zero, L_800A3AD4
    if (ctx->r2 == 0) {
        // 0x800A3AC0: nop
    
            goto L_800A3AD4;
    }
    // 0x800A3AC0: nop

    // 0x800A3AC4: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    // 0x800A3AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3ACC: jal         0x8009C128
    // 0x800A3AD0: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x800A3AD0: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_2:
L_800A3AD4:
    // 0x800A3AD4: jal         0x8008E078
    // 0x800A3AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x800A3AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A3ADC: bne         $v0, $zero, L_800A3AF0
    if (ctx->r2 != 0) {
        // 0x800A3AE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A3AF0;
    }
    // 0x800A3AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3AE4: jal         0x8009E71C
    // 0x800A3AE8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8009E71C(rdram, ctx);
        goto after_4;
    // 0x800A3AE8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_4:
    // 0x800A3AEC: beq         $v0, $zero, L_800A3B08
    if (ctx->r2 == 0) {
        // 0x800A3AF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A3B08;
    }
L_800A3AF0:
    // 0x800A3AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3AF4: jal         0x80095774
    // 0x800A3AF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80095774(rdram, ctx);
        goto after_5;
    // 0x800A3AF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x800A3AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3B00: jal         0x80095774
    // 0x800A3B04: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_80095774(rdram, ctx);
        goto after_6;
    // 0x800A3B04: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_6:
L_800A3B08:
    // 0x800A3B08: jal         0x8008E35C
    // 0x800A3B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_7;
    // 0x800A3B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800A3B10: beq         $v0, $zero, L_800A3B2C
    if (ctx->r2 == 0) {
        // 0x800A3B14: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A3B2C;
    }
    // 0x800A3B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3B18: jal         0x80095774
    // 0x800A3B1C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80095774(rdram, ctx);
        goto after_8;
    // 0x800A3B1C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_8:
    // 0x800A3B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3B24: jal         0x80095774
    // 0x800A3B28: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_80095774(rdram, ctx);
        goto after_9;
    // 0x800A3B28: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_9:
L_800A3B2C:
    // 0x800A3B2C: jal         0x800A3644
    // 0x800A3B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3644(rdram, ctx);
        goto after_10;
    // 0x800A3B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800A3B34: jal         0x800A355C
    // 0x800A3B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A355C(rdram, ctx);
        goto after_11;
    // 0x800A3B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x800A3B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3B40: jal         0x80096568
    // 0x800A3B44: addiu       $a1, $zero, 0x600
    ctx->r5 = ADD32(0, 0X600);
    func_80096568(rdram, ctx);
        goto after_12;
    // 0x800A3B44: addiu       $a1, $zero, 0x600
    ctx->r5 = ADD32(0, 0X600);
    after_12:
    // 0x800A3B48: beq         $v0, $zero, L_800A3B58
    if (ctx->r2 == 0) {
        // 0x800A3B4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A3B58;
    }
    // 0x800A3B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3B50: jal         0x8009BD18
    // 0x800A3B54: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    func_8009BD18(rdram, ctx);
        goto after_13;
    // 0x800A3B54: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    after_13:
L_800A3B58:
    // 0x800A3B58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A3B5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A3B60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A3B64: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3B70: jr          $ra
    // 0x800A3B74: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    return;
    // 0x800A3B74: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
;}
RECOMP_FUNC void func_800A3B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3B78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3B80: jal         0x800A4CA8
    // 0x800A3B84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x800A3B84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A3B88: beq         $v0, $zero, L_800A3B98
    if (ctx->r2 == 0) {
        // 0x800A3B8C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800A3B98;
    }
    // 0x800A3B8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A3B90: jal         0x801106A8
    // 0x800A3B94: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801106A8(rdram, ctx);
        goto after_1;
    // 0x800A3B94: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_800A3B98:
    // 0x800A3B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3BA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3BA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A3BAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A3BB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A3BB4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800A3BB8: jal         0x800A4CA8
    // 0x800A3BBC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x800A3BBC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A3BC0: beq         $v0, $zero, L_800A3D64
    if (ctx->r2 == 0) {
        // 0x800A3BC4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800A3D64;
    }
    // 0x800A3BC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A3BC8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800A3BCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A3BD0: lw          $v0, 0x38($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X38);
    // 0x800A3BD4: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x800A3BD8: beq         $v1, $at, L_800A3C00
    if (ctx->r3 == ctx->r1) {
        // 0x800A3BDC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800A3C00;
    }
    // 0x800A3BDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A3BE0: beq         $v1, $at, L_800A3C64
    if (ctx->r3 == ctx->r1) {
        // 0x800A3BE4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800A3C64;
    }
    // 0x800A3BE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A3BE8: beq         $v1, $at, L_800A3CC8
    if (ctx->r3 == ctx->r1) {
        // 0x800A3BEC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800A3CC8;
    }
    // 0x800A3BEC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A3BF0: beql        $v1, $at, L_800A3D30
    if (ctx->r3 == ctx->r1) {
        // 0x800A3BF4: lh          $t9, 0x34($v0)
        ctx->r25 = MEM_H(ctx->r2, 0X34);
            goto L_800A3D30;
    }
    goto skip_0;
    // 0x800A3BF4: lh          $t9, 0x34($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X34);
    skip_0:
    // 0x800A3BF8: b           L_800A3D54
    // 0x800A3BFC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_800A3D54;
    // 0x800A3BFC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_800A3C00:
    // 0x800A3C00: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x800A3C04: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x800A3C08: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x800A3C0C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A3C10: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800A3C14: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x800A3C18: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3C1C: lh          $t0, 0x34($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X34);
    // 0x800A3C20: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800A3C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3C28: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800A3C2C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800A3C30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3C34: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A3C38: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800A3C3C: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800A3C40: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A3C44: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800A3C48: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800A3C4C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A3C50: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800A3C54: jal         0x80110CC0
    // 0x800A3C58: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80110CC0(rdram, ctx);
        goto after_1;
    // 0x800A3C58: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x800A3C5C: b           L_800A3D54
    // 0x800A3C60: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_800A3D54;
    // 0x800A3C60: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_800A3C64:
    // 0x800A3C64: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x800A3C68: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x800A3C6C: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x800A3C70: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800A3C74: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800A3C78: lw          $t3, 0x1C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X1C);
    // 0x800A3C7C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3C80: lh          $t4, 0x34($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X34);
    // 0x800A3C84: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800A3C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3C8C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800A3C90: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800A3C94: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3C98: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A3C9C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800A3CA0: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800A3CA4: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800A3CA8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800A3CAC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800A3CB0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A3CB4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800A3CB8: jal         0x80110CC0
    // 0x800A3CBC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80110CC0(rdram, ctx);
        goto after_2;
    // 0x800A3CBC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x800A3CC0: b           L_800A3D54
    // 0x800A3CC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_800A3D54;
    // 0x800A3CC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_800A3CC8:
    // 0x800A3CC8: lw          $t5, 0x20($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X20);
    // 0x800A3CCC: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x800A3CD0: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x800A3CD4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800A3CD8: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800A3CDC: lw          $t7, 0x28($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X28);
    // 0x800A3CE0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3CE4: lh          $t8, 0x34($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X34);
    // 0x800A3CE8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A3CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3CF0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800A3CF4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800A3CF8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3CFC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A3D00: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800A3D04: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800A3D08: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800A3D0C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800A3D10: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800A3D14: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A3D18: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800A3D1C: jal         0x80110CC0
    // 0x800A3D20: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80110CC0(rdram, ctx);
        goto after_3;
    // 0x800A3D20: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x800A3D24: b           L_800A3D54
    // 0x800A3D28: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_800A3D54;
    // 0x800A3D28: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A3D2C: lh          $t9, 0x34($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X34);
L_800A3D30:
    // 0x800A3D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3D34: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x800A3D38: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800A3D3C: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x800A3D40: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x800A3D44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3D48: jal         0x80110CC0
    // 0x800A3D4C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80110CC0(rdram, ctx);
        goto after_4;
    // 0x800A3D4C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800A3D50: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_800A3D54:
    // 0x800A3D54: beql        $t0, $zero, L_800A3D68
    if (ctx->r8 == 0) {
        // 0x800A3D58: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800A3D68;
    }
    goto skip_1;
    // 0x800A3D58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800A3D5C: jal         0x80115564
    // 0x800A3D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115564(rdram, ctx);
        goto after_5;
    // 0x800A3D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_800A3D64:
    // 0x800A3D64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A3D68:
    // 0x800A3D68: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A3D6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A3D70: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3D80: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x800A3D84: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x800A3D88: beql        $a1, $t6, L_800A3DA0
    if (ctx->r5 == ctx->r14) {
        // 0x800A3D8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A3DA0;
    }
    goto skip_0;
    // 0x800A3D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A3D90: sb          $a1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r5;
    // 0x800A3D94: jal         0x800A3BA8
    // 0x800A3D98: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800A3BA8(rdram, ctx);
        goto after_0;
    // 0x800A3D98: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800A3D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A3DA0:
    // 0x800A3DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3DA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3DAC: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x800A3DB0: jr          $ra
    // 0x800A3DB4: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
    return;
    // 0x800A3DB4: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
;}
RECOMP_FUNC void func_800A3DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3DB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A3DBC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A3DC0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800A3DC4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800A3DC8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800A3DCC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800A3DD0: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x800A3DD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A3DD8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800A3DDC: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x800A3DE0: bnel        $a1, $t7, L_800A3E04
    if (ctx->r5 != ctx->r15) {
        // 0x800A3DE4: sb          $t2, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r10;
            goto L_800A3E04;
    }
    goto skip_0;
    // 0x800A3DE4: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
    skip_0:
    // 0x800A3DE8: lh          $t9, 0x34($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X34);
    // 0x800A3DEC: bnel        $a2, $t9, L_800A3E04
    if (ctx->r6 != ctx->r25) {
        // 0x800A3DF0: sb          $t2, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r10;
            goto L_800A3E04;
    }
    goto skip_1;
    // 0x800A3DF0: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
    skip_1:
    // 0x800A3DF4: lbu         $t1, 0x39($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X39);
    // 0x800A3DF8: beql        $a3, $t1, L_800A3EB8
    if (ctx->r7 == ctx->r9) {
        // 0x800A3DFC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_800A3EB8;
    }
    goto skip_2;
    // 0x800A3DFC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x800A3E00: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
L_800A3E04:
    // 0x800A3E04: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x800A3E08: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x800A3E0C: addiu       $t3, $v0, 0x14
    ctx->r11 = ADD32(ctx->r2, 0X14);
    // 0x800A3E10: addiu       $t4, $v0, 0x18
    ctx->r12 = ADD32(ctx->r2, 0X18);
    // 0x800A3E14: addiu       $t5, $v0, 0x1C
    ctx->r13 = ADD32(ctx->r2, 0X1C);
    // 0x800A3E18: addiu       $t6, $v0, 0x20
    ctx->r14 = ADD32(ctx->r2, 0X20);
    // 0x800A3E1C: addiu       $t7, $v0, 0x24
    ctx->r15 = ADD32(ctx->r2, 0X24);
    // 0x800A3E20: addiu       $t8, $v0, 0x28
    ctx->r24 = ADD32(ctx->r2, 0X28);
    // 0x800A3E24: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800A3E28: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x800A3E2C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800A3E30: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800A3E34: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800A3E38: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800A3E3C: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x800A3E40: addiu       $a2, $v0, 0xC
    ctx->r6 = ADD32(ctx->r2, 0XC);
    // 0x800A3E44: jal         0x800A59B8
    // 0x800A3E48: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    func_800A59B8(rdram, ctx);
        goto after_0;
    // 0x800A3E48: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    after_0:
    // 0x800A3E4C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800A3E50: lw          $t0, 0x38($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X38);
    // 0x800A3E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3E58: sh          $t9, 0x34($t0)
    MEM_H(0X34, ctx->r8) = ctx->r25;
    // 0x800A3E5C: lw          $t2, 0x38($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X38);
    // 0x800A3E60: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800A3E64: jal         0x800A3DAC
    // 0x800A3E68: sb          $t1, 0x39($t2)
    MEM_B(0X39, ctx->r10) = ctx->r9;
    func_800A3DAC(rdram, ctx);
        goto after_1;
    // 0x800A3E68: sb          $t1, 0x39($t2)
    MEM_B(0X39, ctx->r10) = ctx->r9;
    after_1:
    // 0x800A3E6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A3E70: bne         $v0, $at, L_800A3EAC
    if (ctx->r2 != ctx->r1) {
        // 0x800A3E74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A3EAC;
    }
    // 0x800A3E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3E78: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x800A3E7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800A3E80: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800A3E84: lw          $t3, 0x20($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X20);
    // 0x800A3E88: beq         $t3, $zero, L_800A3E9C
    if (ctx->r11 == 0) {
        // 0x800A3E8C: nop
    
            goto L_800A3E9C;
    }
    // 0x800A3E8C: nop

    // 0x800A3E90: lbu         $t4, 0x39($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X39);
    // 0x800A3E94: beq         $t4, $zero, L_800A3EAC
    if (ctx->r12 == 0) {
        // 0x800A3E98: nop
    
            goto L_800A3EAC;
    }
    // 0x800A3E98: nop

L_800A3E9C:
    // 0x800A3E9C: jal         0x800A3D78
    // 0x800A3EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3D78(rdram, ctx);
        goto after_2;
    // 0x800A3EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A3EA4: b           L_800A3EB8
    // 0x800A3EA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_800A3EB8;
    // 0x800A3EA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800A3EAC:
    // 0x800A3EAC: jal         0x800A3BA8
    // 0x800A3EB0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_800A3BA8(rdram, ctx);
        goto after_3;
    // 0x800A3EB0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_3:
    // 0x800A3EB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800A3EB8:
    // 0x800A3EB8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A3EBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800A3EC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3ED0: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x800A3ED4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A3ED8: lbu         $t6, 0x7($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7);
    // 0x800A3EDC: beql        $a1, $t6, L_800A3F08
    if (ctx->r5 == ctx->r14) {
        // 0x800A3EE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A3F08;
    }
    goto skip_0;
    // 0x800A3EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A3EE4: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
    // 0x800A3EE8: jal         0x800A4CA8
    // 0x800A3EEC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x800A3EEC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A3EF0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A3EF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A3EF8: lw          $t7, 0x38($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X38);
    // 0x800A3EFC: jal         0x80110D08
    // 0x800A3F00: lbu         $a1, 0x7($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X7);
    func_80110D08(rdram, ctx);
        goto after_1;
    // 0x800A3F00: lbu         $a1, 0x7($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X7);
    after_1:
    // 0x800A3F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A3F08:
    // 0x800A3F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3F0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A3F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A3F18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A3F1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A3F20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A3F24: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x800A3F28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A3F2C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A3F30: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x800A3F34: beql        $a1, $v1, L_800A4020
    if (ctx->r5 == ctx->r3) {
        // 0x800A3F38: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4020;
    }
    goto skip_0;
    // 0x800A3F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800A3F3C: beq         $v1, $at, L_800A3F58
    if (ctx->r3 == ctx->r1) {
        // 0x800A3F40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A3F58;
    }
    // 0x800A3F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3F44: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800A3F48: beq         $v1, $at, L_800A3F68
    if (ctx->r3 == ctx->r1) {
        // 0x800A3F4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A3F68;
    }
    // 0x800A3F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3F50: b           L_800A3F80
    // 0x800A3F54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
        goto L_800A3F80;
    // 0x800A3F54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_800A3F58:
    // 0x800A3F58: jal         0x80090C28
    // 0x800A3F5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80090C28(rdram, ctx);
        goto after_0;
    // 0x800A3F5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800A3F60: b           L_800A3F80
    // 0x800A3F64: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
        goto L_800A3F80;
    // 0x800A3F64: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_800A3F68:
    // 0x800A3F68: lbu         $a1, 0x3A($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3A);
    // 0x800A3F6C: jal         0x800A3D78
    // 0x800A3F70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A3D78(rdram, ctx);
        goto after_1;
    // 0x800A3F70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800A3F74: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x800A3F78: sb          $zero, 0x3A($t7)
    MEM_B(0X3A, ctx->r15) = 0;
    // 0x800A3F7C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_800A3F80:
    // 0x800A3F80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A3F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3F88: beq         $t8, $at, L_800A3FB8
    if (ctx->r24 == ctx->r1) {
        // 0x800A3F8C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_800A3FB8;
    }
    // 0x800A3F8C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800A3F90: beq         $t8, $at, L_800A4008
    if (ctx->r24 == ctx->r1) {
        // 0x800A3F94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A4008;
    }
    // 0x800A3F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3F98: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800A3F9C: beq         $t8, $at, L_800A3FC8
    if (ctx->r24 == ctx->r1) {
        // 0x800A3FA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A3FC8;
    }
    // 0x800A3FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3FA4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800A3FA8: beq         $t8, $at, L_800A3FF8
    if (ctx->r24 == ctx->r1) {
        // 0x800A3FAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A3FF8;
    }
    // 0x800A3FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3FB0: b           L_800A4014
    // 0x800A3FB4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
        goto L_800A4014;
    // 0x800A3FB4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A3FB8:
    // 0x800A3FB8: jal         0x800A3B78
    // 0x800A3FBC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800A3B78(rdram, ctx);
        goto after_2;
    // 0x800A3FBC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_2:
    // 0x800A3FC0: b           L_800A4014
    // 0x800A3FC4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
        goto L_800A4014;
    // 0x800A3FC4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A3FC8:
    // 0x800A3FC8: jal         0x800A3B78
    // 0x800A3FCC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_800A3B78(rdram, ctx);
        goto after_3;
    // 0x800A3FCC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_3:
    // 0x800A3FD0: jal         0x800A3DAC
    // 0x800A3FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3DAC(rdram, ctx);
        goto after_4;
    // 0x800A3FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800A3FD8: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x800A3FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A3FE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800A3FE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A3FE8: jal         0x800A3D78
    // 0x800A3FEC: sb          $v0, 0x3A($t9)
    MEM_B(0X3A, ctx->r25) = ctx->r2;
    func_800A3D78(rdram, ctx);
        goto after_5;
    // 0x800A3FEC: sb          $v0, 0x3A($t9)
    MEM_B(0X3A, ctx->r25) = ctx->r2;
    after_5:
    // 0x800A3FF0: b           L_800A4014
    // 0x800A3FF4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
        goto L_800A4014;
    // 0x800A3FF4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A3FF8:
    // 0x800A3FF8: jal         0x800A3B78
    // 0x800A3FFC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_800A3B78(rdram, ctx);
        goto after_6;
    // 0x800A3FFC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_6:
    // 0x800A4000: b           L_800A4014
    // 0x800A4004: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
        goto L_800A4014;
    // 0x800A4004: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A4008:
    // 0x800A4008: jal         0x800A3B78
    // 0x800A400C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A3B78(rdram, ctx);
        goto after_7;
    // 0x800A400C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x800A4010: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A4014:
    // 0x800A4014: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A4018: sb          $t0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r8;
    // 0x800A401C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A4020:
    // 0x800A4020: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A4024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A4028: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4038: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x800A403C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800A4040: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x800A4044: bne         $t7, $at, L_800A405C
    if (ctx->r15 != ctx->r1) {
        // 0x800A4048: nop
    
            goto L_800A405C;
    }
    // 0x800A4048: nop

    // 0x800A404C: jal         0x800A4074
    // 0x800A4050: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800A4074(rdram, ctx);
        goto after_0;
    // 0x800A4050: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x800A4054: b           L_800A4068
    // 0x800A4058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A4068;
    // 0x800A4058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A405C:
    // 0x800A405C: jal         0x800A4074
    // 0x800A4060: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A4074(rdram, ctx);
        goto after_1;
    // 0x800A4060: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x800A4064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A4068:
    // 0x800A4068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A406C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4074: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A4078: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A407C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A4080: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A4084: jal         0x800A5A4C
    // 0x800A4088: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800A5A4C(rdram, ctx);
        goto after_0;
    // 0x800A4088: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A408C: jal         0x80090B98
    // 0x800A4090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090B98(rdram, ctx);
        goto after_1;
    // 0x800A4090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A4094: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x800A4098: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A409C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A40A0: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x800A40A4: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x800A40A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A40AC: sb          $zero, 0x6($t7)
    MEM_B(0X6, ctx->r15) = 0;
    // 0x800A40B0: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x800A40B4: sb          $zero, 0x3($t8)
    MEM_B(0X3, ctx->r24) = 0;
    // 0x800A40B8: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x800A40BC: sb          $zero, 0x4($t9)
    MEM_B(0X4, ctx->r25) = 0;
    // 0x800A40C0: lw          $t0, 0x38($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X38);
    // 0x800A40C4: sb          $zero, 0x5($t0)
    MEM_B(0X5, ctx->r8) = 0;
    // 0x800A40C8: lw          $t1, 0x38($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X38);
    // 0x800A40CC: swc1        $f4, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f4.u32l;
    // 0x800A40D0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x800A40D4: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800A40D8: swc1        $f6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
    // 0x800A40DC: jal         0x800A3F14
    // 0x800A40E0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800A3F14(rdram, ctx);
        goto after_2;
    // 0x800A40E0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x800A40E4: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x800A40E8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800A40EC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A40F0: sb          $t2, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r10;
    // 0x800A40F4: lw          $t5, 0x38($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X38);
    // 0x800A40F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A40FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4100: sb          $t4, 0x1($t5)
    MEM_B(0X1, ctx->r13) = ctx->r12;
    // 0x800A4104: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A4108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A410C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A4110: jal         0x800A3DB8
    // 0x800A4114: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800A3DB8(rdram, ctx);
        goto after_3;
    // 0x800A4114: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x800A4118: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x800A411C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A4120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A4128: jal         0x800A3EC8
    // 0x800A412C: sb          $t7, 0x7($t8)
    MEM_B(0X7, ctx->r24) = ctx->r15;
    func_800A3EC8(rdram, ctx);
        goto after_4;
    // 0x800A412C: sb          $t7, 0x7($t8)
    MEM_B(0X7, ctx->r24) = ctx->r15;
    after_4:
    // 0x800A4130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4134: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x800A4138: jal         0x80085338
    // 0x800A413C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    _batimer_set(rdram, ctx);
        goto after_5;
    // 0x800A413C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_5:
    // 0x800A4140: lw          $t0, 0x38($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X38);
    // 0x800A4144: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800A4148: sh          $t9, 0x36($t0)
    MEM_H(0X36, ctx->r8) = ctx->r25;
    // 0x800A414C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A4150: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A4154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A4158: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4160: jr          $ra
    // 0x800A4164: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800A4164: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800A4168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A416C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4170: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x800A4174: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800A4178: jal         0x800A4074
    // 0x800A417C: sw          $zero, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = 0;
    func_800A4074(rdram, ctx);
        goto after_0;
    // 0x800A417C: sw          $zero, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = 0;
    after_0:
    // 0x800A4180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4188: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4190: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A4194: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A4198: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A419C: jal         0x800A4D40
    // 0x800A41A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A4D40(rdram, ctx);
        goto after_0;
    // 0x800A41A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A41A4: beql        $v0, $zero, L_800A4328
    if (ctx->r2 == 0) {
        // 0x800A41A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4328;
    }
    goto skip_0;
    // 0x800A41A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800A41AC: jal         0x800F65D0
    // 0x800A41B0: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F65D0(rdram, ctx);
        goto after_1;
    // 0x800A41B0: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_1:
    // 0x800A41B4: beql        $v0, $zero, L_800A4328
    if (ctx->r2 == 0) {
        // 0x800A41B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4328;
    }
    goto skip_1;
    // 0x800A41B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800A41BC: jal         0x8009CC68
    // 0x800A41C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC68(rdram, ctx);
        goto after_2;
    // 0x800A41C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A41C4: bnel        $v0, $zero, L_800A4328
    if (ctx->r2 != 0) {
        // 0x800A41C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4328;
    }
    goto skip_2;
    // 0x800A41C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x800A41CC: jal         0x800F3ED0
    // 0x800A41D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F3ED0(rdram, ctx);
        goto after_3;
    // 0x800A41D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A41D4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A41D8: beq         $v0, $at, L_800A4324
    if (ctx->r2 == ctx->r1) {
        // 0x800A41DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A4324;
    }
    // 0x800A41DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A41E0: jal         0x80085300
    // 0x800A41E4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    _batimer_get(rdram, ctx);
        goto after_4;
    // 0x800A41E4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_4:
    // 0x800A41E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A41EC: nop

    // 0x800A41F0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800A41F4: nop

    // 0x800A41F8: bc1fl       L_800A4328
    if (!c1cs) {
        // 0x800A41FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4328;
    }
    goto skip_3;
    // 0x800A41FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x800A4200: jal         0x80097BB8
    // 0x800A4204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097BB8(rdram, ctx);
        goto after_5;
    // 0x800A4204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800A4208: beql        $v0, $zero, L_800A4328
    if (ctx->r2 == 0) {
        // 0x800A420C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4328;
    }
    goto skip_4;
    // 0x800A420C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x800A4210: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x800A4214: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x800A4218: bnel        $t6, $zero, L_800A4328
    if (ctx->r14 != 0) {
        // 0x800A421C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4328;
    }
    goto skip_5;
    // 0x800A421C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x800A4220: lbu         $t7, 0x3B($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3B);
    // 0x800A4224: bnel        $t7, $zero, L_800A4328
    if (ctx->r15 != 0) {
        // 0x800A4228: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4328;
    }
    goto skip_6;
    // 0x800A4228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x800A422C: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x800A4230: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A4234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4238: beq         $v1, $at, L_800A425C
    if (ctx->r3 == ctx->r1) {
        // 0x800A423C: addiu       $a1, $zero, 0x488
        ctx->r5 = ADD32(0, 0X488);
            goto L_800A425C;
    }
    // 0x800A423C: addiu       $a1, $zero, 0x488
    ctx->r5 = ADD32(0, 0X488);
    // 0x800A4240: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A4244: beq         $v1, $at, L_800A4280
    if (ctx->r3 == ctx->r1) {
        // 0x800A4248: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800A4280;
    }
    // 0x800A4248: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A424C: beq         $v1, $at, L_800A42F0
    if (ctx->r3 == ctx->r1) {
        // 0x800A4250: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A42F0;
    }
    // 0x800A4250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4254: b           L_800A4314
    // 0x800A4258: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
        goto L_800A4314;
    // 0x800A4258: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
L_800A425C:
    // 0x800A425C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800A4260: jal         0x8009DB04
    // 0x800A4264: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    func_8009DB04(rdram, ctx);
        goto after_6;
    // 0x800A4264: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    after_6:
    // 0x800A4268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A426C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800A4270: jal         0x800A3D78
    // 0x800A4274: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A3D78(rdram, ctx);
        goto after_7;
    // 0x800A4274: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x800A4278: b           L_800A4314
    // 0x800A427C: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
        goto L_800A4314;
    // 0x800A427C: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
L_800A4280:
    // 0x800A4280: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x800A4284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4288: addiu       $a1, $zero, 0x487
    ctx->r5 = ADD32(0, 0X487);
    // 0x800A428C: beq         $t8, $zero, L_800A42D0
    if (ctx->r24 == 0) {
        // 0x800A4290: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_800A42D0;
    }
    // 0x800A4290: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800A4294: lbu         $t9, 0x39($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X39);
    // 0x800A4298: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    // 0x800A429C: bne         $t9, $zero, L_800A42D0
    if (ctx->r25 != 0) {
        // 0x800A42A0: nop
    
            goto L_800A42D0;
    }
    // 0x800A42A0: nop

    // 0x800A42A4: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x800A42A8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x800A42AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A42B0: jal         0x8009DB04
    // 0x800A42B4: addiu       $a1, $zero, 0x488
    ctx->r5 = ADD32(0, 0X488);
    func_8009DB04(rdram, ctx);
        goto after_8;
    // 0x800A42B4: addiu       $a1, $zero, 0x488
    ctx->r5 = ADD32(0, 0X488);
    after_8:
    // 0x800A42B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A42BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A42C0: jal         0x800A3D78
    // 0x800A42C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A3D78(rdram, ctx);
        goto after_9;
    // 0x800A42C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x800A42C8: b           L_800A4314
    // 0x800A42CC: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
        goto L_800A4314;
    // 0x800A42CC: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
L_800A42D0:
    // 0x800A42D0: jal         0x8009DB04
    // 0x800A42D4: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    func_8009DB04(rdram, ctx);
        goto after_10;
    // 0x800A42D4: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    after_10:
    // 0x800A42D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A42DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A42E0: jal         0x800A3D78
    // 0x800A42E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A3D78(rdram, ctx);
        goto after_11;
    // 0x800A42E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x800A42E8: b           L_800A4314
    // 0x800A42EC: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
        goto L_800A4314;
    // 0x800A42EC: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
L_800A42F0:
    // 0x800A42F0: addiu       $a1, $zero, 0x487
    ctx->r5 = ADD32(0, 0X487);
    // 0x800A42F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800A42F8: jal         0x8009DB04
    // 0x800A42FC: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    func_8009DB04(rdram, ctx);
        goto after_12;
    // 0x800A42FC: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    after_12:
    // 0x800A4300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4304: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A4308: jal         0x800A3D78
    // 0x800A430C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A3D78(rdram, ctx);
        goto after_13;
    // 0x800A430C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x800A4310: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
L_800A4314:
    // 0x800A4314: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x800A4318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A431C: jal         0x80085338
    // 0x800A4320: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    _batimer_set(rdram, ctx);
        goto after_14;
    // 0x800A4320: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_14:
L_800A4324:
    // 0x800A4324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A4328:
    // 0x800A4328: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A432C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A4330: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4338: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800A433C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A4340: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A4344: jal         0x80090E24
    // 0x800A4348: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80090E24(rdram, ctx);
        goto after_0;
    // 0x800A4348: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A434C: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x800A4350: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x800A4354: jal         0x80090E30
    // 0x800A4358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090E30(rdram, ctx);
        goto after_1;
    // 0x800A4358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A435C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x800A4360: jal         0x800A5854
    // 0x800A4364: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    func_800A5854(rdram, ctx);
        goto after_2;
    // 0x800A4364: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    after_2:
    // 0x800A4368: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x800A436C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A4370: beq         $a0, $at, L_800A43A8
    if (ctx->r4 == ctx->r1) {
        // 0x800A4374: nop
    
            goto L_800A43A8;
    }
    // 0x800A4374: nop

    // 0x800A4378: jal         0x800A5904
    // 0x800A437C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    func_800A5904(rdram, ctx);
        goto after_3;
    // 0x800A437C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_3:
    // 0x800A4380: beq         $v0, $zero, L_800A43A8
    if (ctx->r2 == 0) {
        // 0x800A4384: lw          $v1, 0x60($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X60);
            goto L_800A43A8;
    }
    // 0x800A4384: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x800A4388: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x800A438C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A4390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4394: lbu         $t7, 0x38($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X38);
    // 0x800A4398: beq         $t7, $zero, L_800A44E0
    if (ctx->r15 == 0) {
        // 0x800A439C: nop
    
            goto L_800A44E0;
    }
    // 0x800A439C: nop

    // 0x800A43A0: beq         $v1, $at, L_800A44E0
    if (ctx->r3 == ctx->r1) {
        // 0x800A43A4: nop
    
            goto L_800A44E0;
    }
    // 0x800A43A4: nop

L_800A43A8:
    // 0x800A43A8: jal         0x800A5B9C
    // 0x800A43AC: nop

    func_800A5B9C(rdram, ctx);
        goto after_4;
    // 0x800A43AC: nop

    after_4:
    // 0x800A43B0: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x800A43B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A43B8: sb          $v0, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r2;
    // 0x800A43BC: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x800A43C0: lbu         $t9, 0x4($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X4);
    // 0x800A43C4: bne         $t9, $at, L_800A43D4
    if (ctx->r25 != ctx->r1) {
        // 0x800A43C8: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_800A43D4;
    }
    // 0x800A43C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800A43CC: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x800A43D0: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
L_800A43D4:
    // 0x800A43D4: jal         0x800A5B7C
    // 0x800A43D8: nop

    func_800A5B7C(rdram, ctx);
        goto after_5;
    // 0x800A43D8: nop

    after_5:
    // 0x800A43DC: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x800A43E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A43E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A43E8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800A43EC: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x800A43F0: jal         0x800A3DB8
    // 0x800A43F4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_800A3DB8(rdram, ctx);
        goto after_6;
    // 0x800A43F4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_6:
    // 0x800A43F8: jal         0x800A5BBC
    // 0x800A43FC: nop

    func_800A5BBC(rdram, ctx);
        goto after_7;
    // 0x800A43FC: nop

    after_7:
    // 0x800A4400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4404: jal         0x800A3EC8
    // 0x800A4408: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A3EC8(rdram, ctx);
        goto after_8;
    // 0x800A4408: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
    // 0x800A440C: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x800A4410: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x800A4414: beq         $v0, $zero, L_800A4430
    if (ctx->r2 == 0) {
        // 0x800A4418: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A4430;
    }
    // 0x800A4418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A441C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800A4420: jal         0x800A3D78
    // 0x800A4424: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    func_800A3D78(rdram, ctx);
        goto after_9;
    // 0x800A4424: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    after_9:
    // 0x800A4428: b           L_800A446C
    // 0x800A442C: nop

        goto L_800A446C;
    // 0x800A442C: nop

L_800A4430:
    // 0x800A4430: lbu         $t2, 0x38($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X38);
    // 0x800A4434: beq         $t2, $zero, L_800A446C
    if (ctx->r10 == 0) {
        // 0x800A4438: nop
    
            goto L_800A446C;
    }
    // 0x800A4438: nop

    // 0x800A443C: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x800A4440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4444: beq         $v0, $zero, L_800A445C
    if (ctx->r2 == 0) {
        // 0x800A4448: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800A445C;
    }
    // 0x800A4448: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800A444C: jal         0x800A3D78
    // 0x800A4450: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    func_800A3D78(rdram, ctx);
        goto after_10;
    // 0x800A4450: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    after_10:
    // 0x800A4454: b           L_800A446C
    // 0x800A4458: nop

        goto L_800A446C;
    // 0x800A4458: nop

L_800A445C:
    // 0x800A445C: jal         0x800A4CA8
    // 0x800A4460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_11;
    // 0x800A4460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x800A4464: jal         0x80110F44
    // 0x800A4468: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110F44(rdram, ctx);
        goto after_12;
    // 0x800A4468: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_12:
L_800A446C:
    // 0x800A446C: jal         0x800A5BAC
    // 0x800A4470: nop

    func_800A5BAC(rdram, ctx);
        goto after_13;
    // 0x800A4470: nop

    after_13:
    // 0x800A4474: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x800A4478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A447C: jal         0x800A4CA8
    // 0x800A4480: sb          $v0, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r2;
    func_800A4CA8(rdram, ctx);
        goto after_14;
    // 0x800A4480: sb          $v0, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r2;
    after_14:
    // 0x800A4484: jal         0x800A5BCC
    // 0x800A4488: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_800A5BCC(rdram, ctx);
        goto after_15;
    // 0x800A4488: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_15:
    // 0x800A448C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800A4490: jal         0x80110D80
    // 0x800A4494: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80110D80(rdram, ctx);
        goto after_16;
    // 0x800A4494: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_16:
    // 0x800A4498: jal         0x800A4CA8
    // 0x800A449C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_17;
    // 0x800A449C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x800A44A0: jal         0x800A5B6C
    // 0x800A44A4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_800A5B6C(rdram, ctx);
        goto after_18;
    // 0x800A44A4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_18:
    // 0x800A44A8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800A44AC: jal         0x80110D28
    // 0x800A44B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80110D28(rdram, ctx);
        goto after_19;
    // 0x800A44B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_19:
    // 0x800A44B4: jal         0x800A4CA8
    // 0x800A44B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_20;
    // 0x800A44B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x800A44BC: jal         0x800A5B8C
    // 0x800A44C0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_800A5B8C(rdram, ctx);
        goto after_21;
    // 0x800A44C0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_21:
    // 0x800A44C4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800A44C8: jal         0x80110D58
    // 0x800A44CC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_80110D58(rdram, ctx);
        goto after_22;
    // 0x800A44CC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_22:
    // 0x800A44D0: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x800A44D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A44D8: b           L_800A4864
    // 0x800A44DC: sb          $zero, 0x38($t4)
    MEM_B(0X38, ctx->r12) = 0;
        goto L_800A4864;
    // 0x800A44DC: sb          $zero, 0x38($t4)
    MEM_B(0X38, ctx->r12) = 0;
L_800A44E0:
    // 0x800A44E0: jal         0x8009E6F8
    // 0x800A44E4: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    func_8009E6F8(rdram, ctx);
        goto after_23;
    // 0x800A44E4: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    after_23:
    // 0x800A44E8: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x800A44EC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800A44F0: addiu       $t5, $v1, -0x1
    ctx->r13 = ADD32(ctx->r3, -0X1);
    // 0x800A44F4: sltiu       $at, $t5, 0x7
    ctx->r1 = ctx->r13 < 0X7 ? 1 : 0;
    // 0x800A44F8: beq         $at, $zero, L_800A4860
    if (ctx->r1 == 0) {
        // 0x800A44FC: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_800A4860;
    }
    // 0x800A44FC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A4500: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A4504: addu        $at, $at, $t5
    gpr jr_addend_800A450C = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800A4508: lw          $t5, 0x5570($at)
    ctx->r13 = ADD32(ctx->r1, 0X5570);
    // 0x800A450C: jr          $t5
    // 0x800A4510: nop

    switch (jr_addend_800A450C >> 2) {
        case 0: goto L_800A4748; break;
        case 1: goto L_800A47BC; break;
        case 2: goto L_800A46D4; break;
        case 3: goto L_800A4514; break;
        case 4: goto L_800A4860; break;
        case 5: goto L_800A4860; break;
        case 6: goto L_800A4824; break;
        default: switch_error(__func__, 0x800A450C, 0x80125570);
    }
    // 0x800A4510: nop

L_800A4514:
    // 0x800A4514: jal         0x800A5800
    // 0x800A4518: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    func_800A5800(rdram, ctx);
        goto after_24;
    // 0x800A4518: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    after_24:
    // 0x800A451C: jal         0x80085650
    // 0x800A4520: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    _cadbfunc_entrypoint_26(rdram, ctx);
        goto after_25;
    // 0x800A4520: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    after_25:
    // 0x800A4524: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x800A4528: bnel        $t6, $zero, L_800A4564
    if (ctx->r14 != 0) {
        // 0x800A452C: lw          $t9, 0x84($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X84);
            goto L_800A4564;
    }
    goto skip_0;
    // 0x800A452C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x800A4530: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x800A4534: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x800A4538: lbu         $v0, 0x38($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X38);
    // 0x800A453C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800A4540: beql        $v0, $zero, L_800A4564
    if (ctx->r2 == 0) {
        // 0x800A4544: lw          $t9, 0x84($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X84);
            goto L_800A4564;
    }
    goto skip_1;
    // 0x800A4544: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    skip_1:
    // 0x800A4548: beql        $t8, $v0, L_800A4564
    if (ctx->r24 == ctx->r2) {
        // 0x800A454C: lw          $t9, 0x84($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X84);
            goto L_800A4564;
    }
    goto skip_2;
    // 0x800A454C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    skip_2:
    // 0x800A4550: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x800A4554: beql        $v0, $zero, L_800A4564
    if (ctx->r2 == 0) {
        // 0x800A4558: lw          $t9, 0x84($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X84);
            goto L_800A4564;
    }
    goto skip_3;
    // 0x800A4558: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    skip_3:
    // 0x800A455C: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x800A4560: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
L_800A4564:
    // 0x800A4564: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x800A4568: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A456C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800A4570: bne         $t1, $at, L_800A4584
    if (ctx->r9 != ctx->r1) {
        // 0x800A4574: sw          $t0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r8;
            goto L_800A4584;
    }
    // 0x800A4574: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x800A4578: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A457C: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    // 0x800A4580: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
L_800A4584:
    // 0x800A4584: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x800A4588: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x800A458C: bnel        $t3, $zero, L_800A45B4
    if (ctx->r11 != 0) {
        // 0x800A4590: lbu         $t6, 0x38($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X38);
            goto L_800A45B4;
    }
    goto skip_4;
    // 0x800A4590: lbu         $t6, 0x38($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X38);
    skip_4:
    // 0x800A4594: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x800A4598: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A459C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800A45A0: bnel        $t4, $at, L_800A45B4
    if (ctx->r12 != ctx->r1) {
        // 0x800A45A4: lbu         $t6, 0x38($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X38);
            goto L_800A45B4;
    }
    goto skip_5;
    // 0x800A45A4: lbu         $t6, 0x38($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X38);
    skip_5:
    // 0x800A45A8: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x800A45AC: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x800A45B0: lbu         $t6, 0x38($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X38);
L_800A45B4:
    // 0x800A45B4: bne         $t6, $zero, L_800A45EC
    if (ctx->r14 != 0) {
        // 0x800A45B8: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_800A45EC;
    }
    // 0x800A45B8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x800A45BC: jal         0x80085668
    // 0x800A45C0: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    _cadbfunc_entrypoint_29(rdram, ctx);
        goto after_26;
    // 0x800A45C0: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    after_26:
    // 0x800A45C4: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x800A45C8: beql        $t7, $zero, L_800A45E8
    if (ctx->r15 == 0) {
        // 0x800A45CC: lw          $t9, 0x38($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X38);
            goto L_800A45E8;
    }
    goto skip_6;
    // 0x800A45CC: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    skip_6:
    // 0x800A45D0: jal         0x800A3DAC
    // 0x800A45D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3DAC(rdram, ctx);
        goto after_27;
    // 0x800A45D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x800A45D8: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x800A45DC: b           L_800A45EC
    // 0x800A45E0: sb          $v0, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r2;
        goto L_800A45EC;
    // 0x800A45E0: sb          $v0, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r2;
    // 0x800A45E4: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
L_800A45E8:
    // 0x800A45E8: sb          $zero, 0x3($t9)
    MEM_B(0X3, ctx->r25) = 0;
L_800A45EC:
    // 0x800A45EC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x800A45F0: beq         $t0, $zero, L_800A4604
    if (ctx->r8 == 0) {
        // 0x800A45F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A4604;
    }
    // 0x800A45F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A45F8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x800A45FC: jal         0x800A3D78
    // 0x800A4600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A3D78(rdram, ctx);
        goto after_28;
    // 0x800A4600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_28:
L_800A4604:
    // 0x800A4604: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x800A4608: lw          $t2, 0x38($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X38);
    // 0x800A460C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x800A4610: jal         0x80085630
    // 0x800A4614: sb          $t1, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r9;
    _cadbfunc_entrypoint_22(rdram, ctx);
        goto after_29;
    // 0x800A4614: sb          $t1, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r9;
    after_29:
    // 0x800A4618: jal         0x80085640
    // 0x800A461C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    _cadbfunc_entrypoint_24(rdram, ctx);
        goto after_30;
    // 0x800A461C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_30:
    // 0x800A4620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4624: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x800A4628: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x800A462C: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x800A4630: jal         0x800A3DB8
    // 0x800A4634: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800A3DB8(rdram, ctx);
        goto after_31;
    // 0x800A4634: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_31:
    // 0x800A4638: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x800A463C: jal         0x80085668
    // 0x800A4640: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    _cadbfunc_entrypoint_29(rdram, ctx);
        goto after_32;
    // 0x800A4640: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    after_32:
    // 0x800A4644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4648: jal         0x800A3EC8
    // 0x800A464C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    func_800A3EC8(rdram, ctx);
        goto after_33;
    // 0x800A464C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    after_33:
    // 0x800A4650: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800A4654: jal         0x80085668
    // 0x800A4658: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    _cadbfunc_entrypoint_29(rdram, ctx);
        goto after_34;
    // 0x800A4658: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    after_34:
    // 0x800A465C: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x800A4660: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x800A4664: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x800A4668: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x800A466C: jal         0x80085668
    // 0x800A4670: sb          $t3, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r11;
    _cadbfunc_entrypoint_29(rdram, ctx);
        goto after_35;
    // 0x800A4670: sb          $t3, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r11;
    after_35:
    // 0x800A4674: jal         0x800A4CA8
    // 0x800A4678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_36;
    // 0x800A4678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x800A467C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A4680: jal         0x80110D80
    // 0x800A4684: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    func_80110D80(rdram, ctx);
        goto after_37;
    // 0x800A4684: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    after_37:
    // 0x800A4688: jal         0x80085690
    // 0x800A468C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    _cadbfunc_entrypoint_34(rdram, ctx);
        goto after_38;
    // 0x800A468C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    after_38:
    // 0x800A4690: jal         0x800A4CA8
    // 0x800A4694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_39;
    // 0x800A4694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x800A4698: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A469C: jal         0x80110D28
    // 0x800A46A0: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    func_80110D28(rdram, ctx);
        goto after_40;
    // 0x800A46A0: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    after_40:
    // 0x800A46A4: jal         0x80085680
    // 0x800A46A8: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    _cadbfunc_entrypoint_32(rdram, ctx);
        goto after_41;
    // 0x800A46A8: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    after_41:
    // 0x800A46AC: jal         0x800A4CA8
    // 0x800A46B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_42;
    // 0x800A46B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x800A46B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A46B8: jal         0x80110D58
    // 0x800A46BC: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    func_80110D58(rdram, ctx);
        goto after_43;
    // 0x800A46BC: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_43:
    // 0x800A46C0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A46C4: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x800A46C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A46CC: b           L_800A4864
    // 0x800A46D0: sb          $t5, 0x38($t6)
    MEM_B(0X38, ctx->r14) = ctx->r13;
        goto L_800A4864;
    // 0x800A46D0: sb          $t5, 0x38($t6)
    MEM_B(0X38, ctx->r14) = ctx->r13;
L_800A46D4:
    // 0x800A46D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A46D8: jal         0x8009CA70
    // 0x800A46DC: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    func_8009CA70(rdram, ctx);
        goto after_44;
    // 0x800A46DC: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    after_44:
    // 0x800A46E0: beql        $v0, $zero, L_800A4718
    if (ctx->r2 == 0) {
        // 0x800A46E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A4718;
    }
    goto skip_7;
    // 0x800A46E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_7:
    // 0x800A46E8: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x800A46EC: jal         0x800A5800
    // 0x800A46F0: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    func_800A5800(rdram, ctx);
        goto after_45;
    // 0x800A46F0: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    after_45:
    // 0x800A46F4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A46F8: jal         0x80085668
    // 0x800A46FC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    _cadbfunc_entrypoint_29(rdram, ctx);
        goto after_46;
    // 0x800A46FC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_46:
    // 0x800A4700: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800A4704: bnel        $t7, $zero, L_800A4718
    if (ctx->r15 != 0) {
        // 0x800A4708: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A4718;
    }
    goto skip_8;
    // 0x800A4708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_8:
    // 0x800A470C: b           L_800A4864
    // 0x800A4710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A4864;
    // 0x800A4710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A4714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A4718:
    // 0x800A4718: jal         0x800A3B78
    // 0x800A471C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_800A3B78(rdram, ctx);
        goto after_47;
    // 0x800A471C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_47:
    // 0x800A4720: jal         0x800A4CA8
    // 0x800A4724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_48;
    // 0x800A4724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x800A4728: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A472C: jal         0x80089378
    // 0x800A4730: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    _ncbadolly_entrypoint_4(rdram, ctx);
        goto after_49;
    // 0x800A4730: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    after_49:
    // 0x800A4734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4738: jal         0x800A3F14
    // 0x800A473C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800A3F14(rdram, ctx);
        goto after_50;
    // 0x800A473C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_50:
    // 0x800A4740: b           L_800A4864
    // 0x800A4744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800A4864;
    // 0x800A4744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A4748:
    // 0x800A4748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A474C: jal         0x8009CA70
    // 0x800A4750: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    func_8009CA70(rdram, ctx);
        goto after_51;
    // 0x800A4750: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    after_51:
    // 0x800A4754: beql        $v0, $zero, L_800A478C
    if (ctx->r2 == 0) {
        // 0x800A4758: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A478C;
    }
    goto skip_9;
    // 0x800A4758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_9:
    // 0x800A475C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x800A4760: jal         0x800A5800
    // 0x800A4764: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    func_800A5800(rdram, ctx);
        goto after_52;
    // 0x800A4764: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    after_52:
    // 0x800A4768: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A476C: jal         0x80085668
    // 0x800A4770: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    _cadbfunc_entrypoint_29(rdram, ctx);
        goto after_53;
    // 0x800A4770: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_53:
    // 0x800A4774: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x800A4778: bnel        $t8, $zero, L_800A478C
    if (ctx->r24 != 0) {
        // 0x800A477C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A478C;
    }
    goto skip_10;
    // 0x800A477C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_10:
    // 0x800A4780: b           L_800A4864
    // 0x800A4784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A4864;
    // 0x800A4784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A4788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A478C:
    // 0x800A478C: jal         0x800A3B78
    // 0x800A4790: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800A3B78(rdram, ctx);
        goto after_54;
    // 0x800A4790: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_54:
    // 0x800A4794: jal         0x800A4CA8
    // 0x800A4798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_55;
    // 0x800A4798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x800A479C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A47A0: jal         0x80089350
    // 0x800A47A4: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    _ncbafixpos_entrypoint_4(rdram, ctx);
        goto after_56;
    // 0x800A47A4: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    after_56:
    // 0x800A47A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A47AC: jal         0x800A3F14
    // 0x800A47B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800A3F14(rdram, ctx);
        goto after_57;
    // 0x800A47B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_57:
    // 0x800A47B4: b           L_800A4864
    // 0x800A47B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800A4864;
    // 0x800A47B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A47BC:
    // 0x800A47BC: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x800A47C0: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x800A47C4: lh          $t0, 0x36($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X36);
    // 0x800A47C8: beq         $a0, $t0, L_800A481C
    if (ctx->r4 == ctx->r8) {
        // 0x800A47CC: nop
    
            goto L_800A481C;
    }
    // 0x800A47CC: nop

    // 0x800A47D0: jal         0x800A5800
    // 0x800A47D4: nop

    func_800A5800(rdram, ctx);
        goto after_58;
    // 0x800A47D4: nop

    after_58:
    // 0x800A47D8: jal         0x80085580
    // 0x800A47DC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    _cadbfunc_entrypoint_0(rdram, ctx);
        goto after_59;
    // 0x800A47DC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_59:
    // 0x800A47E0: jal         0x80085590
    // 0x800A47E4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    _cadbfunc_entrypoint_2(rdram, ctx);
        goto after_60;
    // 0x800A47E4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_60:
    // 0x800A47E8: jal         0x800A4C48
    // 0x800A47EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C48(rdram, ctx);
        goto after_61;
    // 0x800A47EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_61:
    // 0x800A47F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A47F4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800A47F8: jal         0x800CA628
    // 0x800A47FC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_800CA628(rdram, ctx);
        goto after_62;
    // 0x800A47FC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_62:
    // 0x800A4800: jal         0x800A4CA8
    // 0x800A4804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_63;
    // 0x800A4804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_63:
    // 0x800A4808: jal         0x801108A0
    // 0x800A480C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801108A0(rdram, ctx);
        goto after_64;
    // 0x800A480C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_64:
    // 0x800A4810: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x800A4814: lw          $t2, 0x38($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X38);
    // 0x800A4818: sh          $t1, 0x36($t2)
    MEM_H(0X36, ctx->r10) = ctx->r9;
L_800A481C:
    // 0x800A481C: b           L_800A4864
    // 0x800A4820: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A4864;
    // 0x800A4820: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A4824:
    // 0x800A4824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4828: jal         0x800A3B78
    // 0x800A482C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_800A3B78(rdram, ctx);
        goto after_65;
    // 0x800A482C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_65:
    // 0x800A4830: jal         0x800A4CA8
    // 0x800A4834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_66;
    // 0x800A4834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_66:
    // 0x800A4838: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A483C: jal         0x80089198
    // 0x800A4840: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    _ncbaspiral_entrypoint_5(rdram, ctx);
        goto after_67;
    // 0x800A4840: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    after_67:
    // 0x800A4844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4848: jal         0x800A3F14
    // 0x800A484C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800A3F14(rdram, ctx);
        goto after_68;
    // 0x800A484C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_68:
    // 0x800A4850: jal         0x800A4190
    // 0x800A4854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4190(rdram, ctx);
        goto after_69;
    // 0x800A4854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_69:
    // 0x800A4858: b           L_800A4864
    // 0x800A485C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800A4864;
    // 0x800A485C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A4860:
    // 0x800A4860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A4864:
    // 0x800A4864: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A4868: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A486C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x800A4870: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4878: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A487C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A4880: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A4884: jal         0x800A4CA8
    // 0x800A4888: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x800A4888: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A488C: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x800A4890: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800A4894: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800A4898: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x800A489C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A48A0: beq         $t7, $zero, L_800A48B8
    if (ctx->r15 == 0) {
        // 0x800A48A4: nop
    
            goto L_800A48B8;
    }
    // 0x800A48A4: nop

    // 0x800A48A8: jal         0x80110EFC
    // 0x800A48AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110EFC(rdram, ctx);
        goto after_1;
    // 0x800A48AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A48B0: b           L_800A4968
    // 0x800A48B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A4968;
    // 0x800A48B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A48B8:
    // 0x800A48B8: jal         0x800A4D40
    // 0x800A48BC: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_800A4D40(rdram, ctx);
        goto after_2;
    // 0x800A48BC: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_2:
    // 0x800A48C0: beq         $v0, $zero, L_800A48F8
    if (ctx->r2 == 0) {
        // 0x800A48C4: nop
    
            goto L_800A48F8;
    }
    // 0x800A48C4: nop

    // 0x800A48C8: jal         0x8009CC68
    // 0x800A48CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC68(rdram, ctx);
        goto after_3;
    // 0x800A48CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A48D0: bne         $v0, $zero, L_800A48F8
    if (ctx->r2 != 0) {
        // 0x800A48D4: nop
    
            goto L_800A48F8;
    }
    // 0x800A48D4: nop

    // 0x800A48D8: jal         0x800F65D0
    // 0x800A48DC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F65D0(rdram, ctx);
        goto after_4;
    // 0x800A48DC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_4:
    // 0x800A48E0: beq         $v0, $zero, L_800A48F8
    if (ctx->r2 == 0) {
        // 0x800A48E4: nop
    
            goto L_800A48F8;
    }
    // 0x800A48E4: nop

    // 0x800A48E8: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x800A48EC: lbu         $t9, 0x3B($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3B);
    // 0x800A48F0: beq         $t9, $zero, L_800A4900
    if (ctx->r25 == 0) {
        // 0x800A48F4: nop
    
            goto L_800A4900;
    }
    // 0x800A48F4: nop

L_800A48F8:
    // 0x800A48F8: b           L_800A4964
    // 0x800A48FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A4964;
    // 0x800A48FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A4900:
    // 0x800A4900: jal         0x80097B4C
    // 0x800A4904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097B4C(rdram, ctx);
        goto after_5;
    // 0x800A4904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800A4908: beq         $v0, $zero, L_800A4920
    if (ctx->r2 == 0) {
        // 0x800A490C: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_800A4920;
    }
    // 0x800A490C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A4910: jal         0x80110EFC
    // 0x800A4914: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80110EFC(rdram, ctx);
        goto after_6;
    // 0x800A4914: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x800A4918: b           L_800A4968
    // 0x800A491C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A4968;
    // 0x800A491C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A4920:
    // 0x800A4920: jal         0x80097B70
    // 0x800A4924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097B70(rdram, ctx);
        goto after_7;
    // 0x800A4924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800A4928: beq         $v0, $zero, L_800A4940
    if (ctx->r2 == 0) {
        // 0x800A492C: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_800A4940;
    }
    // 0x800A492C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A4930: jal         0x80110EFC
    // 0x800A4934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80110EFC(rdram, ctx);
        goto after_8;
    // 0x800A4934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800A4938: b           L_800A4968
    // 0x800A493C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A4968;
    // 0x800A493C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A4940:
    // 0x800A4940: jal         0x80097B94
    // 0x800A4944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097B94(rdram, ctx);
        goto after_9;
    // 0x800A4944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x800A4948: beq         $v0, $zero, L_800A4960
    if (ctx->r2 == 0) {
        // 0x800A494C: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_800A4960;
    }
    // 0x800A494C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A4950: jal         0x80110EFC
    // 0x800A4954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80110EFC(rdram, ctx);
        goto after_10;
    // 0x800A4954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x800A4958: b           L_800A4968
    // 0x800A495C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800A4968;
    // 0x800A495C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A4960:
    // 0x800A4960: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A4964:
    // 0x800A4964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A4968:
    // 0x800A4968: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A496C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A4970: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4978: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A497C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A4980: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A4984: jal         0x800F40EC
    // 0x800A4988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800F40EC(rdram, ctx);
        goto after_0;
    // 0x800A4988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A498C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A4990: beq         $v0, $at, L_800A49A0
    if (ctx->r2 == ctx->r1) {
        // 0x800A4994: nop
    
            goto L_800A49A0;
    }
    // 0x800A4994: nop

    // 0x800A4998: b           L_800A4A00
    // 0x800A499C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A4A00;
    // 0x800A499C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A49A0:
    // 0x800A49A0: jal         0x800A3274
    // 0x800A49A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x800A49A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A49A8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800A49AC: beq         $v0, $at, L_800A49C4
    if (ctx->r2 == ctx->r1) {
        // 0x800A49B0: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_800A49C4;
    }
    // 0x800A49B0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800A49B4: beq         $v0, $at, L_800A49E4
    if (ctx->r2 == ctx->r1) {
        // 0x800A49B8: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_800A49E4;
    }
    // 0x800A49B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800A49BC: b           L_800A49E4
    // 0x800A49C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
        goto L_800A49E4;
    // 0x800A49C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_800A49C4:
    // 0x800A49C4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x800A49C8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x800A49CC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800A49D0: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x800A49D4: beq         $t6, $zero, L_800A49E4
    if (ctx->r14 == 0) {
        // 0x800A49D8: nop
    
            goto L_800A49E4;
    }
    // 0x800A49D8: nop

    // 0x800A49DC: b           L_800A49E4
    // 0x800A49E0: sb          $t7, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r15;
        goto L_800A49E4;
    // 0x800A49E0: sb          $t7, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r15;
L_800A49E4:
    // 0x800A49E4: jal         0x800A3F14
    // 0x800A49E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3F14(rdram, ctx);
        goto after_2;
    // 0x800A49E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A49EC: jal         0x800A4878
    // 0x800A49F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4878(rdram, ctx);
        goto after_3;
    // 0x800A49F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A49F4: jal         0x800A4190
    // 0x800A49F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4190(rdram, ctx);
        goto after_4;
    // 0x800A49F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800A49FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A4A00:
    // 0x800A4A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4A04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A4A08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A4A0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4A14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4A1C: jal         0x800A4338
    // 0x800A4A20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A4338(rdram, ctx);
        goto after_0;
    // 0x800A4A20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A4A24: bnel        $v0, $zero, L_800A4A40
    if (ctx->r2 != 0) {
        // 0x800A4A28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A4A40;
    }
    goto skip_0;
    // 0x800A4A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A4A2C: jal         0x800A4190
    // 0x800A4A30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4190(rdram, ctx);
        goto after_1;
    // 0x800A4A30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A4A34: jal         0x800A4878
    // 0x800A4A38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4878(rdram, ctx);
        goto after_2;
    // 0x800A4A38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800A4A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A4A40:
    // 0x800A4A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4A44: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4A50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4A54: jal         0x800A4190
    // 0x800A4A58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A4190(rdram, ctx);
        goto after_0;
    // 0x800A4A58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A4A5C: jal         0x800A4878
    // 0x800A4A60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4878(rdram, ctx);
        goto after_1;
    // 0x800A4A60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A4A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4A6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4A74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A4A78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A4A7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A4A80: jal         0x800A4338
    // 0x800A4A84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A4338(rdram, ctx);
        goto after_0;
    // 0x800A4A84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800A4A88: bnel        $v0, $zero, L_800A4AC0
    if (ctx->r2 != 0) {
        // 0x800A4A8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4AC0;
    }
    goto skip_0;
    // 0x800A4A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800A4A90: jal         0x800A4978
    // 0x800A4A94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4978(rdram, ctx);
        goto after_1;
    // 0x800A4A94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A4A98: bnel        $v0, $zero, L_800A4AC0
    if (ctx->r2 != 0) {
        // 0x800A4A9C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4AC0;
    }
    goto skip_1;
    // 0x800A4A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800A4AA0: jal         0x800A4190
    // 0x800A4AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4190(rdram, ctx);
        goto after_2;
    // 0x800A4AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A4AA8: jal         0x800A4878
    // 0x800A4AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4878(rdram, ctx);
        goto after_3;
    // 0x800A4AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800A4AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4AB4: jal         0x800A3F14
    // 0x800A4AB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A3F14(rdram, ctx);
        goto after_4;
    // 0x800A4AB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x800A4ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A4AC0:
    // 0x800A4AC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A4AC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A4AC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4AD8: jal         0x800A4CA8
    // 0x800A4ADC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x800A4ADC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A4AE0: jal         0x800893C0
    // 0x800A4AE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncbaspline_entrypoint_8(rdram, ctx);
        goto after_1;
    // 0x800A4AE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800A4AE8: beq         $v0, $zero, L_800A4AF8
    if (ctx->r2 == 0) {
        // 0x800A4AEC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800A4AF8;
    }
    // 0x800A4AEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A4AF0: jal         0x800A3F14
    // 0x800A4AF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A3F14(rdram, ctx);
        goto after_2;
    // 0x800A4AF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_800A4AF8:
    // 0x800A4AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4B00: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4B08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A4B0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A4B10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A4B14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A4B18: jal         0x800852F0
    // 0x800A4B1C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x800A4B1C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x800A4B20: jal         0x800F65D0
    // 0x800A4B24: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F65D0(rdram, ctx);
        goto after_1;
    // 0x800A4B24: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_1:
    // 0x800A4B28: beql        $v0, $zero, L_800A4B3C
    if (ctx->r2 == 0) {
        // 0x800A4B2C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A4B3C;
    }
    goto skip_0;
    // 0x800A4B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800A4B30: jal         0x80090C34
    // 0x800A4B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090C34(rdram, ctx);
        goto after_2;
    // 0x800A4B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A4B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A4B3C:
    // 0x800A4B3C: jal         0x80090C28
    // 0x800A4B40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80090C28(rdram, ctx);
        goto after_3;
    // 0x800A4B40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800A4B44: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x800A4B48: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x800A4B4C: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x800A4B50: beq         $at, $zero, L_800A4BF4
    if (ctx->r1 == 0) {
        // 0x800A4B54: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800A4BF4;
    }
    // 0x800A4B54: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A4B58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A4B5C: addu        $at, $at, $t6
    gpr jr_addend_800A4B64 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A4B60: lw          $t6, 0x558C($at)
    ctx->r14 = ADD32(ctx->r1, 0X558C);
    // 0x800A4B64: jr          $t6
    // 0x800A4B68: nop

    switch (jr_addend_800A4B64 >> 2) {
        case 0: goto L_800A4C30; break;
        case 1: goto L_800A4BC4; break;
        case 2: goto L_800A4BF4; break;
        case 3: goto L_800A4BD4; break;
        case 4: goto L_800A4B6C; break;
        case 5: goto L_800A4BE4; break;
        case 6: goto L_800A4BF4; break;
        case 7: goto L_800A4BF4; break;
        case 8: goto L_800A4BF4; break;
        case 9: goto L_800A4C30; break;
        default: switch_error(__func__, 0x800A4B64, 0x8012558C);
    }
    // 0x800A4B68: nop

L_800A4B6C:
    // 0x800A4B6C: jal         0x800A4338
    // 0x800A4B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4338(rdram, ctx);
        goto after_4;
    // 0x800A4B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800A4B74: bnel        $v0, $zero, L_800A4C38
    if (ctx->r2 != 0) {
        // 0x800A4B78: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A4C38;
    }
    goto skip_1;
    // 0x800A4B78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800A4B7C: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x800A4B80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A4B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4B88: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x800A4B8C: beq         $t8, $zero, L_800A4BB4
    if (ctx->r24 == 0) {
        // 0x800A4B90: nop
    
            goto L_800A4BB4;
    }
    // 0x800A4B90: nop

    // 0x800A4B94: jal         0x800A3F14
    // 0x800A4B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3F14(rdram, ctx);
        goto after_5;
    // 0x800A4B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800A4B9C: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x800A4BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4BA4: jal         0x800A3B78
    // 0x800A4BA8: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    func_800A3B78(rdram, ctx);
        goto after_6;
    // 0x800A4BA8: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    after_6:
    // 0x800A4BAC: b           L_800A4BBC
    // 0x800A4BB0: nop

        goto L_800A4BBC;
    // 0x800A4BB0: nop

L_800A4BB4:
    // 0x800A4BB4: jal         0x800A3F14
    // 0x800A4BB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A3F14(rdram, ctx);
        goto after_7;
    // 0x800A4BB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
L_800A4BBC:
    // 0x800A4BBC: b           L_800A4C30
    // 0x800A4BC0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
        goto L_800A4C30;
    // 0x800A4BC0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A4BC4:
    // 0x800A4BC4: jal         0x800A4A14
    // 0x800A4BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4A14(rdram, ctx);
        goto after_8;
    // 0x800A4BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x800A4BCC: b           L_800A4C30
    // 0x800A4BD0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
        goto L_800A4C30;
    // 0x800A4BD0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A4BD4:
    // 0x800A4BD4: jal         0x800A4A4C
    // 0x800A4BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4A4C(rdram, ctx);
        goto after_9;
    // 0x800A4BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x800A4BDC: b           L_800A4C30
    // 0x800A4BE0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
        goto L_800A4C30;
    // 0x800A4BE0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A4BE4:
    // 0x800A4BE4: jal         0x800A4AD0
    // 0x800A4BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4AD0(rdram, ctx);
        goto after_10;
    // 0x800A4BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800A4BEC: b           L_800A4C30
    // 0x800A4BF0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
        goto L_800A4C30;
    // 0x800A4BF0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A4BF4:
    // 0x800A4BF4: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x800A4BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4BFC: beq         $t0, $zero, L_800A4C24
    if (ctx->r8 == 0) {
        // 0x800A4C00: nop
    
            goto L_800A4C24;
    }
    // 0x800A4C00: nop

    // 0x800A4C04: jal         0x800A3F14
    // 0x800A4C08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A3F14(rdram, ctx);
        goto after_11;
    // 0x800A4C08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x800A4C0C: lw          $t1, 0x38($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X38);
    // 0x800A4C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A4C14: jal         0x800A3B78
    // 0x800A4C18: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    func_800A3B78(rdram, ctx);
        goto after_12;
    // 0x800A4C18: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    after_12:
    // 0x800A4C1C: b           L_800A4C30
    // 0x800A4C20: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
        goto L_800A4C30;
    // 0x800A4C20: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A4C24:
    // 0x800A4C24: jal         0x800A4A74
    // 0x800A4C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4A74(rdram, ctx);
        goto after_13;
    // 0x800A4C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x800A4C2C: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_800A4C30:
    // 0x800A4C30: sb          $zero, 0x3B($v0)
    MEM_B(0X3B, ctx->r2) = 0;
    // 0x800A4C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A4C38:
    // 0x800A4C38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A4C3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A4C40: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4C4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4C50: jal         0x800A93F8
    // 0x800A4C54: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800A93F8(rdram, ctx);
        goto after_0;
    // 0x800A4C54: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x800A4C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4C60: jr          $ra
    return;
;}
RECOMP_FUNC void func_800A4C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4C70: jal         0x800A940C
    // 0x800A4C74: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800A940C(rdram, ctx);
        goto after_0;
    // 0x800A4C74: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x800A4C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A4C80: jr          $ra
    return;
;}
