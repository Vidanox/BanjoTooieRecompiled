#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800DF35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF35C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF364: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800DF368: jal         0x800ADF5C
    // 0x800DF36C: lw          $a0, -0x37C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X37C0);
    func_800ADF5C(rdram, ctx);
        goto after_0;
    // 0x800DF36C: lw          $a0, -0x37C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X37C0);
    after_0:
    // 0x800DF370: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF374: jal         0x8010E390
    // 0x800DF378: sw          $zero, -0x37C0($at)
    MEM_W(-0X37C0, ctx->r1) = 0;
    func_8010E390(rdram, ctx);
        goto after_1;
    // 0x800DF378: sw          $zero, -0x37C0($at)
    MEM_W(-0X37C0, ctx->r1) = 0;
    after_1:
    // 0x800DF37C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF384: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF38C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF394: jal         0x800DE318
    // 0x800DF398: nop

    func_800DE318(rdram, ctx);
        goto after_0;
    // 0x800DF398: nop

    after_0:
    // 0x800DF39C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF3A0: addiu       $v0, $v0, -0x35C0
    ctx->r2 = ADD32(ctx->r2, -0X35C0);
    // 0x800DF3A4: addiu       $t7, $v0, 0x400
    ctx->r15 = ADD32(ctx->r2, 0X400);
    // 0x800DF3A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800DF3AC: sw          $v0, 0x400($v0)
    MEM_W(0X400, ctx->r2) = ctx->r2;
    // 0x800DF3B0: sw          $t7, 0x404($v0)
    MEM_W(0X404, ctx->r2) = ctx->r15;
    // 0x800DF3B4: jal         0x800EFD24
    // 0x800DF3B8: addiu       $a0, $a0, -0x31B8
    ctx->r4 = ADD32(ctx->r4, -0X31B8);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x800DF3B8: addiu       $a0, $a0, -0x31B8
    ctx->r4 = ADD32(ctx->r4, -0X31B8);
    after_1:
    // 0x800DF3BC: jal         0x800ADF98
    // 0x800DF3C0: nop

    func_800ADF98(rdram, ctx);
        goto after_2;
    // 0x800DF3C0: nop

    after_2:
    // 0x800DF3C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF3C8: jal         0x8010E334
    // 0x800DF3CC: sw          $v0, -0x37C0($at)
    MEM_W(-0X37C0, ctx->r1) = ctx->r2;
    func_8010E334(rdram, ctx);
        goto after_3;
    // 0x800DF3CC: sw          $v0, -0x37C0($at)
    MEM_W(-0X37C0, ctx->r1) = ctx->r2;
    after_3:
    // 0x800DF3D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF3D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF3D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF3E0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800DF3E4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF3E8: addiu       $v0, $v0, -0x36C0
    ctx->r2 = ADD32(ctx->r2, -0X36C0);
    // 0x800DF3EC: addiu       $v1, $v1, -0x37B0
    ctx->r3 = ADD32(ctx->r3, -0X37B0);
L_800DF3F0:
    // 0x800DF3F0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x800DF3F4: sw          $zero, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = 0;
    // 0x800DF3F8: sw          $zero, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = 0;
    // 0x800DF3FC: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x800DF400: bne         $v1, $v0, L_800DF3F0
    if (ctx->r3 != ctx->r2) {
        // 0x800DF404: sw          $zero, -0x10($v1)
        MEM_W(-0X10, ctx->r3) = 0;
            goto L_800DF3F0;
    }
    // 0x800DF404: sw          $zero, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = 0;
    // 0x800DF408: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF410: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF414: jr          $ra
    // 0x800DF418: sw          $a0, -0x365C($at)
    MEM_W(-0X365C, ctx->r1) = ctx->r4;
    return;
    // 0x800DF418: sw          $a0, -0x365C($at)
    MEM_W(-0X365C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF41C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF420: jr          $ra
    // 0x800DF424: sw          $a0, -0x37DC($at)
    MEM_W(-0X37DC, ctx->r1) = ctx->r4;
    return;
    // 0x800DF424: sw          $a0, -0x37DC($at)
    MEM_W(-0X37DC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF428: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF42C: addiu       $v0, $v0, -0x37D4
    ctx->r2 = ADD32(ctx->r2, -0X37D4);
    // 0x800DF430: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800DF434: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x800DF438: jr          $ra
    // 0x800DF43C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x800DF43C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_800DF440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF440: beq         $a0, $zero, L_800DF458
    if (ctx->r4 == 0) {
            // 0x800DF444: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    func_800DF458(rdram, ctx);
    return;
    }
    // 0x800DF444: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF448: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800DF44C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF450: jr          $ra
    // 0x800DF454: sw          $t6, -0x37D8($at)
    MEM_W(-0X37D8, ctx->r1) = ctx->r14;
    return;
    // 0x800DF454: sw          $t6, -0x37D8($at)
    MEM_W(-0X37D8, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800DF458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF458: sw          $zero, -0x37D8($at)
    MEM_W(-0X37D8, ctx->r1) = 0;
    // 0x800DF45C: jr          $ra
    // 0x800DF460: nop

    return;
    // 0x800DF460: nop

;}
RECOMP_FUNC void func_800DF464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF464: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF468: jr          $ra
    // 0x800DF46C: swc1        $f12, -0x37D0($at)
    MEM_W(-0X37D0, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800DF46C: swc1        $f12, -0x37D0($at)
    MEM_W(-0X37D0, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800DF470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF470: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF474: jr          $ra
    // 0x800DF478: sw          $a0, -0x37CC($at)
    MEM_W(-0X37CC, ctx->r1) = ctx->r4;
    return;
    // 0x800DF478: sw          $a0, -0x37CC($at)
    MEM_W(-0X37CC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF47C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF480: addiu       $v0, $v0, -0x3658
    ctx->r2 = ADD32(ctx->r2, -0X3658);
    // 0x800DF484: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800DF488: jr          $ra
    // 0x800DF48C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    return;
    // 0x800DF48C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800DF490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF490: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF494: addiu       $v0, $v0, -0x3658
    ctx->r2 = ADD32(ctx->r2, -0X3658);
    // 0x800DF498: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x800DF49C: jr          $ra
    // 0x800DF4A0: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    return;
    // 0x800DF4A0: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800DF4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF4A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF4A8: jr          $ra
    // 0x800DF4AC: sw          $a0, -0x36A0($at)
    MEM_W(-0X36A0, ctx->r1) = ctx->r4;
    return;
    // 0x800DF4AC: sw          $a0, -0x36A0($at)
    MEM_W(-0X36A0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF4B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800DF4B4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800DF4B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF4BC: lw          $t7, 0x3198($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3198);
    // 0x800DF4C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF4C4: jr          $ra
    // 0x800DF4C8: sw          $t7, -0x3074($at)
    MEM_W(-0X3074, ctx->r1) = ctx->r15;
    return;
    // 0x800DF4C8: sw          $t7, -0x3074($at)
    MEM_W(-0X3074, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_800DF4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF4CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF4D0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800DF4D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF4D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800DF4DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF4E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800DF4E4: sw          $t6, -0x3648($at)
    MEM_W(-0X3648, ctx->r1) = ctx->r14;
    // 0x800DF4E8: jal         0x800EE7F8
    // 0x800DF4EC: addiu       $a0, $a0, -0x3644
    ctx->r4 = ADD32(ctx->r4, -0X3644);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800DF4EC: addiu       $a0, $a0, -0x3644
    ctx->r4 = ADD32(ctx->r4, -0X3644);
    after_0:
    // 0x800DF4F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF4F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF504: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800DF508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF50C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800DF510: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF514: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800DF518: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800DF51C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800DF520: sw          $t6, -0x3648($at)
    MEM_W(-0X3648, ctx->r1) = ctx->r14;
    // 0x800DF524: addiu       $a0, $a0, -0x3644
    ctx->r4 = ADD32(ctx->r4, -0X3644);
    // 0x800DF528: jal         0x800EFA4C
    // 0x800DF52C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800DF52C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x800DF530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF538: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF544: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800DF548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF54C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800DF550: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF554: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800DF558: sw          $t6, -0x3648($at)
    MEM_W(-0X3648, ctx->r1) = ctx->r14;
    // 0x800DF55C: jal         0x800F293C
    // 0x800DF560: addiu       $a0, $a0, -0x3638
    ctx->r4 = ADD32(ctx->r4, -0X3638);
    func_800F293C(rdram, ctx);
        goto after_0;
    // 0x800DF560: addiu       $a0, $a0, -0x3638
    ctx->r4 = ADD32(ctx->r4, -0X3638);
    after_0:
    // 0x800DF564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF56C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF574: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF578: jr          $ra
    // 0x800DF57C: sh          $a0, -0x35C8($at)
    MEM_H(-0X35C8, ctx->r1) = ctx->r4;
    return;
    // 0x800DF57C: sh          $a0, -0x35C8($at)
    MEM_H(-0X35C8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF580: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800DF584: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF588: sw          $t6, -0x37C4($at)
    MEM_W(-0X37C4, ctx->r1) = ctx->r14;
    // 0x800DF58C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800DF590: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF594: addiu       $v0, $v0, -0x3678
    ctx->r2 = ADD32(ctx->r2, -0X3678);
    // 0x800DF598: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x800DF59C: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x800DF5A0: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
    // 0x800DF5A4: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800DF5A8: sw          $t9, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r25;
    // 0x800DF5AC: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x800DF5B0: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
    // 0x800DF5B4: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x800DF5B8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x800DF5BC: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    // 0x800DF5C0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x800DF5C4: lw          $t3, 0x8($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X8);
    // 0x800DF5C8: sw          $t3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r11;
    // 0x800DF5CC: lw          $t4, 0xC($a1)
    ctx->r12 = MEM_W(ctx->r5, 0XC);
    // 0x800DF5D0: jr          $ra
    // 0x800DF5D4: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    return;
    // 0x800DF5D4: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
;}
RECOMP_FUNC void func_800DF5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF5D8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800DF5DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF5E0: sw          $t6, -0x37C4($at)
    MEM_W(-0X37C4, ctx->r1) = ctx->r14;
    // 0x800DF5E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF5E8: slti        $at, $a0, 0x100
    ctx->r1 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x800DF5EC: bne         $at, $zero, L_800DF608
    if (ctx->r1 != 0) {
        // 0x800DF5F0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800DF608;
    }
    // 0x800DF5F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF5F4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF5F8: addiu       $v0, $v0, -0x3678
    ctx->r2 = ADD32(ctx->r2, -0X3678);
    // 0x800DF5FC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x800DF600: b           L_800DF618
    // 0x800DF604: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
        goto L_800DF618;
    // 0x800DF604: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
L_800DF608:
    // 0x800DF608: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF60C: addiu       $v0, $v0, -0x3678
    ctx->r2 = ADD32(ctx->r2, -0X3678);
    // 0x800DF610: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x800DF614: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_800DF618:
    // 0x800DF618: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    // 0x800DF61C: bnel        $at, $zero, L_800DF630
    if (ctx->r1 != 0) {
        // 0x800DF620: sw          $a1, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r5;
            goto L_800DF630;
    }
    goto skip_0;
    // 0x800DF620: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    skip_0:
    // 0x800DF624: b           L_800DF630
    // 0x800DF628: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
        goto L_800DF630;
    // 0x800DF628: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x800DF62C: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
L_800DF630:
    // 0x800DF630: slti        $at, $a2, 0x100
    ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
    // 0x800DF634: bnel        $at, $zero, L_800DF648
    if (ctx->r1 != 0) {
        // 0x800DF638: sw          $a2, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->r6;
            goto L_800DF648;
    }
    goto skip_1;
    // 0x800DF638: sw          $a2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r6;
    skip_1:
    // 0x800DF63C: b           L_800DF648
    // 0x800DF640: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
        goto L_800DF648;
    // 0x800DF640: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x800DF644: sw          $a2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r6;
L_800DF648:
    // 0x800DF648: jal         0x800DF410
    // 0x800DF64C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800DF410(rdram, ctx);
        goto after_0;
    // 0x800DF64C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x800DF650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF658: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF668: bne         $a1, $zero, L_800DF680
    if (ctx->r5 != 0) {
        // 0x800DF66C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800DF680;
    }
    // 0x800DF66C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800DF670: bne         $a2, $zero, L_800DF680
    if (ctx->r6 != 0) {
        // 0x800DF674: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_800DF680;
    }
    // 0x800DF674: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF678: b           L_800DF6AC
    // 0x800DF67C: sw          $zero, -0x37C8($at)
    MEM_W(-0X37C8, ctx->r1) = 0;
        goto L_800DF6AC;
    // 0x800DF67C: sw          $zero, -0x37C8($at)
    MEM_W(-0X37C8, ctx->r1) = 0;
L_800DF680:
    // 0x800DF680: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF684: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800DF688: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF68C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800DF690: addiu       $v0, $v0, -0x35F8
    ctx->r2 = ADD32(ctx->r2, -0X35F8);
    // 0x800DF694: sw          $t6, -0x37C8($at)
    MEM_W(-0X37C8, ctx->r1) = ctx->r14;
    // 0x800DF698: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x800DF69C: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x800DF6A0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800DF6A4: jal         0x800DF410
    // 0x800DF6A8: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
    func_800DF410(rdram, ctx);
        goto after_0;
    // 0x800DF6A8: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
    after_0:
L_800DF6AC:
    // 0x800DF6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF6B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF6B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF6BC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800DF6C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF6C4: sw          $t6, -0x37C4($at)
    MEM_W(-0X37C4, ctx->r1) = ctx->r14;
    // 0x800DF6C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF6CC: slti        $at, $a0, 0x100
    ctx->r1 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x800DF6D0: bne         $at, $zero, L_800DF6E0
    if (ctx->r1 != 0) {
        // 0x800DF6D4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800DF6E0;
    }
    // 0x800DF6D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF6D8: b           L_800DF6E4
    // 0x800DF6DC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_800DF6E4;
    // 0x800DF6DC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_800DF6E0:
    // 0x800DF6E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800DF6E4:
    // 0x800DF6E4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800DF6E8: addiu       $v1, $v1, -0x3678
    ctx->r3 = ADD32(ctx->r3, -0X3678);
    // 0x800DF6EC: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x800DF6F0: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x800DF6F4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x800DF6F8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800DF6FC: jal         0x800DF410
    // 0x800DF700: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800DF410(rdram, ctx);
        goto after_0;
    // 0x800DF700: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800DF704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF70C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF714: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF718: jr          $ra
    // 0x800DF71C: sw          $a0, -0x3680($at)
    MEM_W(-0X3680, ctx->r1) = ctx->r4;
    return;
    // 0x800DF71C: sw          $a0, -0x3680($at)
    MEM_W(-0X3680, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF720: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF724: jr          $ra
    // 0x800DF728: sw          $a0, -0x368C($at)
    MEM_W(-0X368C, ctx->r1) = ctx->r4;
    return;
    // 0x800DF728: sw          $a0, -0x368C($at)
    MEM_W(-0X368C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF72C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF730: jr          $ra
    // 0x800DF734: sw          $a0, -0x3698($at)
    MEM_W(-0X3698, ctx->r1) = ctx->r4;
    return;
    // 0x800DF734: sw          $a0, -0x3698($at)
    MEM_W(-0X3698, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF738: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF73C: jr          $ra
    // 0x800DF740: sw          $a0, -0x37BC($at)
    MEM_W(-0X37BC, ctx->r1) = ctx->r4;
    return;
    // 0x800DF740: sw          $a0, -0x37BC($at)
    MEM_W(-0X37BC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF744: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800DF748: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF74C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800DF750: jr          $ra
    // 0x800DF754: sw          $a1, -0x37B0($at)
    MEM_W(-0X37B0, ctx->r1) = ctx->r5;
    return;
    // 0x800DF754: sw          $a1, -0x37B0($at)
    MEM_W(-0X37B0, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_800DF758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF758: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
    // 0x800DF75C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800DF760: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF764: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800DF768: sw          $t6, -0x37AC($at)
    MEM_W(-0X37AC, ctx->r1) = ctx->r14;
    // 0x800DF76C: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x800DF770: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF774: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF778: sw          $t7, -0x37A8($at)
    MEM_W(-0X37A8, ctx->r1) = ctx->r15;
    // 0x800DF77C: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
    // 0x800DF780: addiu       $v0, $v0, -0x36C0
    ctx->r2 = ADD32(ctx->r2, -0X36C0);
    // 0x800DF784: addiu       $v1, $v1, -0x37A0
    ctx->r3 = ADD32(ctx->r3, -0X37A0);
    // 0x800DF788: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    // 0x800DF78C: sw          $t8, -0x37A4($at)
    MEM_W(-0X37A4, ctx->r1) = ctx->r24;
L_800DF790:
    // 0x800DF790: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x800DF794: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x800DF798: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800DF79C: sw          $t9, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r25;
    // 0x800DF7A0: lw          $t0, -0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, -0XC);
    // 0x800DF7A4: sw          $t0, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r8;
    // 0x800DF7A8: lw          $t1, -0x8($a1)
    ctx->r9 = MEM_W(ctx->r5, -0X8);
    // 0x800DF7AC: sw          $t1, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r9;
    // 0x800DF7B0: lw          $t2, -0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, -0X4);
    // 0x800DF7B4: bne         $v1, $v0, L_800DF790
    if (ctx->r3 != ctx->r2) {
        // 0x800DF7B8: sw          $t2, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r10;
            goto L_800DF790;
    }
    // 0x800DF7B8: sw          $t2, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r10;
    // 0x800DF7BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF7C4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800DF7C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF7CC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800DF7D0: negu        $t6, $a1
    ctx->r14 = SUB32(0, ctx->r5);
    // 0x800DF7D4: jr          $ra
    // 0x800DF7D8: sw          $t6, -0x37B0($at)
    MEM_W(-0X37B0, ctx->r1) = ctx->r14;
    return;
    // 0x800DF7D8: sw          $t6, -0x37B0($at)
    MEM_W(-0X37B0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800DF7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF7DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF7E0: jr          $ra
    // 0x800DF7E4: sw          $a0, -0x36A4($at)
    MEM_W(-0X36A4, ctx->r1) = ctx->r4;
    return;
    // 0x800DF7E4: sw          $a0, -0x36A4($at)
    MEM_W(-0X36A4, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF7E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF7EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800DF7F0: jr          $ra
    // 0x800DF7F4: sb          $a0, -0x3694($at)
    MEM_B(-0X3694, ctx->r1) = ctx->r4;
    return;
    // 0x800DF7F4: sb          $a0, -0x3694($at)
    MEM_B(-0X3694, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF7F8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800DF7FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800DF800: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800DF804: addiu       $v0, $v0, -0x35E8
    ctx->r2 = ADD32(ctx->r2, -0X35E8);
    // 0x800DF808: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800DF80C: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    // 0x800DF810: jr          $ra
    // 0x800DF814: swc1        $f14, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f14.u32l;
    return;
    // 0x800DF814: swc1        $f14, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800DF818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF818: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF81C: jr          $ra
    // 0x800DF820: sw          $a0, -0x369C($at)
    MEM_W(-0X369C, ctx->r1) = ctx->r4;
    return;
    // 0x800DF820: sw          $a0, -0x369C($at)
    MEM_W(-0X369C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF824: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF828: jr          $ra
    // 0x800DF82C: sw          $a0, -0x3688($at)
    MEM_W(-0X3688, ctx->r1) = ctx->r4;
    return;
    // 0x800DF82C: sw          $a0, -0x3688($at)
    MEM_W(-0X3688, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF830: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF834: jr          $ra
    // 0x800DF838: sw          $a0, -0x35D8($at)
    MEM_W(-0X35D8, ctx->r1) = ctx->r4;
    return;
    // 0x800DF838: sw          $a0, -0x35D8($at)
    MEM_W(-0X35D8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF83C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF840: jr          $ra
    // 0x800DF844: sw          $a0, -0x37B8($at)
    MEM_W(-0X37B8, ctx->r1) = ctx->r4;
    return;
    // 0x800DF844: sw          $a0, -0x37B8($at)
    MEM_W(-0X37B8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800DF848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF848: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x800DF84C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800DF850: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800DF854: addiu       $t0, $t0, 0x2DC8
    ctx->r8 = ADD32(ctx->r8, 0X2DC8);
    // 0x800DF858: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800DF85C: addiu       $v1, $v1, -0x35D8
    ctx->r3 = ADD32(ctx->r3, -0X35D8);
    // 0x800DF860: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x800DF864: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800DF868: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800DF86C: jr          $ra
    // 0x800DF870: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    return;
    // 0x800DF870: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800DF874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF874: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800DF878: lw          $a0, -0x37C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X37C0);
    // 0x800DF87C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF884: beq         $a0, $zero, L_800DF89C
    if (ctx->r4 == 0) {
        // 0x800DF888: nop
    
            goto L_800DF89C;
    }
    // 0x800DF888: nop

    // 0x800DF88C: jal         0x800AE5F0
    // 0x800DF890: nop

    func_800AE5F0(rdram, ctx);
        goto after_0;
    // 0x800DF890: nop

    after_0:
    // 0x800DF894: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800DF898: sw          $v0, -0x37C0($at)
    MEM_W(-0X37C0, ctx->r1) = ctx->r2;
L_800DF89C:
    // 0x800DF89C: jal         0x8010E358
    // 0x800DF8A0: nop

    func_8010E358(rdram, ctx);
        goto after_1;
    // 0x800DF8A0: nop

    after_1:
    // 0x800DF8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF8A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF8AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF8B4: jr          $ra
    // 0x800DF8B8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    return;
    // 0x800DF8B8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
;}
RECOMP_FUNC void func_800DF8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF8BC: jr          $ra
    // 0x800DF8C0: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    return;
    // 0x800DF8C0: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
;}
RECOMP_FUNC void func_800DF8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF8C4: jr          $ra
    // 0x800DF8C8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    return;
    // 0x800DF8C8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
;}
RECOMP_FUNC void func_800DF8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF8CC: jr          $ra
    // 0x800DF8D0: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    return;
    // 0x800DF8D0: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
;}
RECOMP_FUNC void func_800DF8D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF8D4: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x800DF8D8: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800DF8DC: beq         $t6, $zero, L_800DF8F0
    if (ctx->r14 == 0) {
        // 0x800DF8E0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800DF8F0;
    }
    // 0x800DF8E0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800DF8E4: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x800DF8E8: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800DF8EC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_800DF8F0:
    // 0x800DF8F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF8F8: jr          $ra
    // 0x800DF8FC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    return;
    // 0x800DF8FC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void func_800DF900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF900: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800DF904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF90C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800DF910: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800DF914: jal         0x80018E1C
    // 0x800DF918: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_80018E1C(rdram, ctx);
        goto after_0;
    // 0x800DF918: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x800DF91C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800DF920: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800DF924: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x800DF928: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x800DF92C: jal         0x8001980C
    // 0x800DF930: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    func_8001980C(rdram, ctx);
        goto after_1;
    // 0x800DF930: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    after_1:
    // 0x800DF934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF93C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DF944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF944: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800DF948: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DF94C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800DF950: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800DF954: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800DF958: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x800DF95C: jal         0x800E42F0
    // 0x800DF960: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    func_800E42F0(rdram, ctx);
        goto after_0;
    // 0x800DF960: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_0:
    // 0x800DF964: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x800DF968: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800DF96C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DF970: beq         $v0, $zero, L_800DF9C8
    if (ctx->r2 == 0) {
        // 0x800DF974: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_800DF9C8;
    }
    // 0x800DF974: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DF978: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800DF97C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800DF980: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800DF984: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800DF988: lui         $at, 0x4418
    ctx->r1 = S32(0X4418 << 16);
    // 0x800DF98C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800DF990: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800DF994: lui         $at, 0x43E4
    ctx->r1 = S32(0X43E4 << 16);
    // 0x800DF998: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800DF99C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800DF9A0: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800DF9A4: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x800DF9A8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800DF9AC: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x800DF9B0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800DF9B4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800DF9B8: jal         0x800EFA4C
    // 0x800DF9BC: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x800DF9BC: nop

    after_1:
    // 0x800DF9C0: b           L_800DF9D4
    // 0x800DF9C4: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
        goto L_800DF9D4;
    // 0x800DF9C4: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
L_800DF9C8:
    // 0x800DF9C8: jal         0x800EFA4C
    // 0x800DF9CC: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x800DF9CC: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    after_2:
    // 0x800DF9D0: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
L_800DF9D4:
    // 0x800DF9D4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x800DF9D8: beql        $t6, $zero, L_800DFA18
    if (ctx->r14 == 0) {
        // 0x800DF9DC: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800DFA18;
    }
    goto skip_0;
    // 0x800DF9DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x800DF9E0: lh          $t7, -0x6648($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6648);
    // 0x800DF9E4: beql        $t7, $zero, L_800DFA18
    if (ctx->r15 == 0) {
        // 0x800DF9E8: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800DFA18;
    }
    goto skip_1;
    // 0x800DF9E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x800DF9EC: jal         0x800A89F8
    // 0x800DF9F0: nop

    func_800A89F8(rdram, ctx);
        goto after_3;
    // 0x800DF9F0: nop

    after_3:
    // 0x800DF9F4: jal         0x800A8AF0
    // 0x800DF9F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800A8AF0(rdram, ctx);
        goto after_4;
    // 0x800DF9F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800DF9FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800DFA00: lwc1        $f10, 0x5D68($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5D68);
    // 0x800DFA04: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800DFA08: div.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800DFA0C: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800DFA10: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x800DFA14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_800DFA18:
    // 0x800DFA18: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800DFA1C: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x800DFA20: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800DFA24: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800DFA28: jal         0x800EFA4C
    // 0x800DFA2C: nop

    func_800EFA4C(rdram, ctx);
        goto after_5;
    // 0x800DFA2C: nop

    after_5:
    // 0x800DFA30: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x800DFA34: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800DFA38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DFA3C: beq         $v0, $zero, L_800DFA58
    if (ctx->r2 == 0) {
        // 0x800DFA40: nop
    
            goto L_800DFA58;
    }
    // 0x800DFA40: nop

    // 0x800DFA44: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x800DFA48: jal         0x800EFA4C
    // 0x800DFA4C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    func_800EFA4C(rdram, ctx);
        goto after_6;
    // 0x800DFA4C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    after_6:
    // 0x800DFA50: b           L_800DFA60
    // 0x800DFA54: nop

        goto L_800DFA60;
    // 0x800DFA54: nop

L_800DFA58:
    // 0x800DFA58: jal         0x800EFD24
    // 0x800DFA5C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_800EFD24(rdram, ctx);
        goto after_7;
    // 0x800DFA5C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_7:
L_800DFA60:
    // 0x800DFA60: jal         0x800DF830
    // 0x800DFA64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DF830(rdram, ctx);
        goto after_8;
    // 0x800DFA64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x800DFA68: jal         0x800DF440
    // 0x800DFA6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DF440(rdram, ctx);
        goto after_9;
    // 0x800DFA6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x800DFA70: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800DFA74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800DFA78: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800DFA7C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x800DFA80: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x800DFA84: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800DFA88: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800DFA8C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800DFA90: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800DFA94: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x800DFA98: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800DFA9C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800DFAA0: jal         0x800DE498
    // 0x800DFAA4: nop

    func_800DE498(rdram, ctx);
        goto after_10;
    // 0x800DFAA4: nop

    after_10:
    // 0x800DFAA8: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x800DFAAC: jal         0x800E4640
    // 0x800DFAB0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800E4640(rdram, ctx);
        goto after_11;
    // 0x800DFAB0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_11:
    // 0x800DFAB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DFAB8: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x800DFABC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800DFAC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFAD0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800DFAD4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800DFAD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DFADC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DFAE0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800DFAE4: addu        $v1, $t7, $v0
    ctx->r3 = ADD32(ctx->r15, ctx->r2);
    // 0x800DFAE8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800DFAEC: beq         $at, $zero, L_800DFB38
    if (ctx->r1 == 0) {
        // 0x800DFAF0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800DFB38;
    }
    // 0x800DFAF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DFAF4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800DFAF8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800DFAFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800DFB00: nop

L_800DFB04:
    // 0x800DFB04: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x800DFB08: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800DFB0C: swc1        $f0, -0x20($v0)
    MEM_W(-0X20, ctx->r2) = ctx->f0.u32l;
    // 0x800DFB10: swc1        $f0, -0x24($v0)
    MEM_W(-0X24, ctx->r2) = ctx->f0.u32l;
    // 0x800DFB14: swc1        $f0, -0x28($v0)
    MEM_W(-0X28, ctx->r2) = ctx->f0.u32l;
    // 0x800DFB18: swc1        $f2, -0x1C($v0)
    MEM_W(-0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x800DFB1C: swc1        $f12, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f12.u32l;
    // 0x800DFB20: swc1        $f12, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f12.u32l;
    // 0x800DFB24: swc1        $f12, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f12.u32l;
    // 0x800DFB28: swc1        $f0, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f0.u32l;
    // 0x800DFB2C: swc1        $f0, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f0.u32l;
    // 0x800DFB30: bne         $at, $zero, L_800DFB04
    if (ctx->r1 != 0) {
        // 0x800DFB34: swc1        $f0, -0xC($v0)
        MEM_W(-0XC, ctx->r2) = ctx->f0.u32l;
            goto L_800DFB04;
    }
    // 0x800DFB34: swc1        $f0, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f0.u32l;
L_800DFB38:
    // 0x800DFB38: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFB40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DFB44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFB48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800DFB4C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800DFB50: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800DFB54: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x800DFB58: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x800DFB5C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800DFB60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800DFB64: jal         0x800D9600
    // 0x800DFB68: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    func_800D9600(rdram, ctx);
        goto after_0;
    // 0x800DFB68: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    after_0:
    // 0x800DFB6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFB70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DFB74: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFB7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DFB80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFB84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800DFB88: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800DFB8C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800DFB90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800DFB94: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800DFB98: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x800DFB9C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800DFBA0: addu        $a1, $v0, $t8
    ctx->r5 = ADD32(ctx->r2, ctx->r24);
    // 0x800DFBA4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x800DFBA8: jal         0x800D9600
    // 0x800DFBAC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800D9600(rdram, ctx);
        goto after_0;
    // 0x800DFBAC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800DFBB0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800DFBB4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800DFBB8: jal         0x800EE7F8
    // 0x800DFBBC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800DFBBC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_1:
    // 0x800DFBC0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800DFBC4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800DFBC8: jal         0x800EE7F8
    // 0x800DFBCC: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800DFBCC: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    after_2:
    // 0x800DFBD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFBD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DFBD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFBE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DFBE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFBE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800DFBEC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800DFBF0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x800DFBF4: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800DFBF8: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x800DFBFC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800DFC00: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    // 0x800DFC04: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800DFC08: jal         0x800EE7F8
    // 0x800DFC0C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800DFC0C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800DFC10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFC14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DFC18: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFC20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFC20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DFC24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFC28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800DFC2C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800DFC30: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x800DFC34: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800DFC38: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x800DFC3C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800DFC40: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    // 0x800DFC44: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x800DFC48: jal         0x800EE7F8
    // 0x800DFC4C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800DFC4C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800DFC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFC54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DFC58: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DFC64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFC68: jal         0x8001B084
    // 0x800DFC6C: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800DFC6C: nop

    after_0:
    // 0x800DFC70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFC74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DFC78: jr          $ra
    // 0x800DFC7C: nop

    return;
    // 0x800DFC7C: nop

;}
RECOMP_FUNC void func_800DFC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFC80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DFC84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFC88: jal         0x8001ACCC
    // 0x800DFC8C: addiu       $a0, $zero, 0x1110
    ctx->r4 = ADD32(0, 0X1110);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800DFC8C: addiu       $a0, $zero, 0x1110
    ctx->r4 = ADD32(0, 0X1110);
    after_0:
    // 0x800DFC90: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800DFC94: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800DFC98: addiu       $t7, $zero, 0x6D
    ctx->r15 = ADD32(0, 0X6D);
    // 0x800DFC9C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800DFCA0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800DFCA4: jal         0x800DFAD0
    // 0x800DFCA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DFAD0(rdram, ctx);
        goto after_1;
    // 0x800DFCA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800DFCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFCB0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800DFCB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DFCB8: jr          $ra
    // 0x800DFCBC: nop

    return;
    // 0x800DFCBC: nop

;}
RECOMP_FUNC void func_800DFCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFCC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DFCC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFCC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800DFCCC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800DFCD0: jal         0x8001B754
    // 0x800DFCD4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B754(rdram, ctx);
        goto after_0;
    // 0x800DFCD4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x800DFCD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFCDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DFCE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFCE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFCE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DFCEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFCF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800DFCF4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800DFCF8: jal         0x8001B798
    // 0x800DFCFC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x800DFCFC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x800DFD00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFD04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DFD08: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFD10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DFD14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFD18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DFD1C: jal         0x8001B668
    // 0x800DFD20: addiu       $a1, $zero, 0x1110
    ctx->r5 = ADD32(0, 0X1110);
    func_8001B668(rdram, ctx);
        goto after_0;
    // 0x800DFD20: addiu       $a1, $zero, 0x1110
    ctx->r5 = ADD32(0, 0X1110);
    after_0:
    // 0x800DFD24: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x800DFD28: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800DFD2C: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x800DFD30: jal         0x8001B798
    // 0x800DFD34: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8001B798(rdram, ctx);
        goto after_1;
    // 0x800DFD34: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x800DFD38: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800DFD3C: addiu       $t8, $zero, 0x6D
    ctx->r24 = ADD32(0, 0X6D);
    // 0x800DFD40: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800DFD44: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800DFD48: jal         0x800DFAD0
    // 0x800DFD4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DFAD0(rdram, ctx);
        goto after_2;
    // 0x800DFD4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800DFD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFD54: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x800DFD58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DFD5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFD64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800DFD68: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800DFD6C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800DFD70: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800DFD74: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800DFD78: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800DFD7C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800DFD80: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800DFD84: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x800DFD88: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x800DFD8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DFD90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DFD94: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800DFD98: addu        $s3, $t7, $s0
    ctx->r19 = ADD32(ctx->r15, ctx->r16);
    // 0x800DFD9C: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x800DFDA0: lw          $s1, 0x0($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X0);
    // 0x800DFDA4: beq         $at, $zero, L_800DFE88
    if (ctx->r1 == 0) {
        // 0x800DFDA8: lw          $s2, 0x0($a2)
        ctx->r18 = MEM_W(ctx->r6, 0X0);
            goto L_800DFE88;
    }
    // 0x800DFDA8: lw          $s2, 0x0($a2)
    ctx->r18 = MEM_W(ctx->r6, 0X0);
L_800DFDAC:
    // 0x800DFDAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800DFDB0: jal         0x800D97E8
    // 0x800DFDB4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800D97E8(rdram, ctx);
        goto after_0;
    // 0x800DFDB4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x800DFDB8: beq         $v0, $zero, L_800DFDD4
    if (ctx->r2 == 0) {
        // 0x800DFDBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800DFDD4;
    }
    // 0x800DFDBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800DFDC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800DFDC4: jal         0x800D9600
    // 0x800DFDC8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800D9600(rdram, ctx);
        goto after_1;
    // 0x800DFDC8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x800DFDCC: b           L_800DFDE8
    // 0x800DFDD0: lwc1        $f0, 0x10($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X10);
        goto L_800DFDE8;
    // 0x800DFDD0: lwc1        $f0, 0x10($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X10);
L_800DFDD4:
    // 0x800DFDD4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x800DFDD8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800DFDDC: jal         0x800D9AD4
    // 0x800DFDE0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800D9AD4(rdram, ctx);
        goto after_2;
    // 0x800DFDE0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x800DFDE4: lwc1        $f0, 0x10($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X10);
L_800DFDE8:
    // 0x800DFDE8: lwc1        $f4, 0x10($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X10);
    // 0x800DFDEC: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x800DFDF0: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x800DFDF4: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x800DFDF8: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x800DFDFC: addiu       $s2, $s2, 0x28
    ctx->r18 = ADD32(ctx->r18, 0X28);
    // 0x800DFE00: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800DFE04: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x800DFE08: swc1        $f10, -0x18($s0)
    MEM_W(-0X18, ctx->r16) = ctx->f10.u32l;
    // 0x800DFE0C: lwc1        $f16, -0x14($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, -0X14);
    // 0x800DFE10: lwc1        $f2, -0x14($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, -0X14);
    // 0x800DFE14: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x800DFE18: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x800DFE1C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x800DFE20: swc1        $f6, -0x14($s0)
    MEM_W(-0X14, ctx->r16) = ctx->f6.u32l;
    // 0x800DFE24: lwc1        $f8, -0x10($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, -0X10);
    // 0x800DFE28: lwc1        $f12, -0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, -0X10);
    // 0x800DFE2C: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x800DFE30: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800DFE34: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x800DFE38: swc1        $f18, -0x10($s0)
    MEM_W(-0X10, ctx->r16) = ctx->f18.u32l;
    // 0x800DFE3C: lwc1        $f4, -0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, -0XC);
    // 0x800DFE40: lwc1        $f14, -0xC($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, -0XC);
    // 0x800DFE44: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x800DFE48: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800DFE4C: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x800DFE50: swc1        $f10, -0xC($s0)
    MEM_W(-0XC, ctx->r16) = ctx->f10.u32l;
    // 0x800DFE54: lwc1        $f16, -0x8($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, -0X8);
    // 0x800DFE58: lwc1        $f0, -0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, -0X8);
    // 0x800DFE5C: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x800DFE60: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x800DFE64: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800DFE68: swc1        $f6, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->f6.u32l;
    // 0x800DFE6C: lwc1        $f8, -0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, -0X4);
    // 0x800DFE70: lwc1        $f2, -0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, -0X4);
    // 0x800DFE74: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x800DFE78: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800DFE7C: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x800DFE80: bne         $at, $zero, L_800DFDAC
    if (ctx->r1 != 0) {
        // 0x800DFE84: swc1        $f18, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->f18.u32l;
            goto L_800DFDAC;
    }
    // 0x800DFE84: swc1        $f18, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f18.u32l;
L_800DFE88:
    // 0x800DFE88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800DFE8C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800DFE90: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800DFE94: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800DFE98: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800DFE9C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800DFEA0: jr          $ra
    // 0x800DFEA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800DFEA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800DFEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFEA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DFEAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DFEB0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800DFEB4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800DFEB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800DFEBC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800DFEC0: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x800DFEC4: lw          $s1, 0x0($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X0);
    // 0x800DFEC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DFECC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DFED0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800DFED4: addu        $s2, $t7, $s0
    ctx->r18 = ADD32(ctx->r15, ctx->r16);
    // 0x800DFED8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800DFEDC: beq         $at, $zero, L_800DFF14
    if (ctx->r1 == 0) {
        // 0x800DFEE0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800DFF14;
    }
L_800DFEE0:
    // 0x800DFEE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800DFEE4: jal         0x800D9600
    // 0x800DFEE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800D9600(rdram, ctx);
        goto after_0;
    // 0x800DFEE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x800DFEEC: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x800DFEF0: jal         0x800EE7F8
    // 0x800DFEF4: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800DFEF4: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_1:
    // 0x800DFEF8: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x800DFEFC: jal         0x800EE7F8
    // 0x800DFF00: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800DFF00: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    after_2:
    // 0x800DFF04: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x800DFF08: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800DFF0C: bne         $at, $zero, L_800DFEE0
    if (ctx->r1 != 0) {
        // 0x800DFF10: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_800DFEE0;
    }
    // 0x800DFF10: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
L_800DFF14:
    // 0x800DFF14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DFF18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800DFF1C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800DFF20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800DFF24: jr          $ra
    // 0x800DFF28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800DFF28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800DFF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFF2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DFF30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFF34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800DFF38: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800DFF3C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800DFF40: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x800DFF44: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800DFF48: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800DFF4C: jal         0x800D9600
    // 0x800DFF50: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    func_800D9600(rdram, ctx);
        goto after_0;
    // 0x800DFF50: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    after_0:
    // 0x800DFF54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFF58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DFF5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFF64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DFF68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFF6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800DFF70: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800DFF74: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800DFF78: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x800DFF7C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800DFF80: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    // 0x800DFF84: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x800DFF88: jal         0x800EE7F8
    // 0x800DFF8C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800DFF8C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800DFF90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFF94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DFF98: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFFA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DFFA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFFA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800DFFAC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800DFFB0: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800DFFB4: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x800DFFB8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800DFFBC: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x800DFFC0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    // 0x800DFFC4: jal         0x800EE7F8
    // 0x800DFFC8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800DFFC8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800DFFCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DFFD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DFFD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800DFFDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFFDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DFFE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DFFE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800DFFE8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800DFFEC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800DFFF0: jal         0x800D93A0
    // 0x800DFFF4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_800D93A0(rdram, ctx);
        goto after_0;
    // 0x800DFFF4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x800DFFF8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800DFFFC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0000: jal         0x800DFF2C
    // 0x800E0004: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_800DFF2C(rdram, ctx);
        goto after_1;
    // 0x800E0004: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x800E0008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E000C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E0010: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E0018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E001C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E0020: jal         0x8001BAFC
    // 0x800E0024: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800E0024: nop

    after_0:
    // 0x800E0028: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800E002C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800E0030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E0034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E0038: jr          $ra
    // 0x800E003C: nop

    return;
    // 0x800E003C: nop

;}
RECOMP_FUNC void func_800E0040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0040: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x800E0044: jr          $ra
    // 0x800E0048: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    return;
    // 0x800E0048: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_800E0050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0050: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800E0054: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E0058: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800E005C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800E0060: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800E0064: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800E0068: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800E006C: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x800E0070: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800E0074: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x800E0078: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800E007C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800E0080: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800E0084: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E0088: jal         0x800E0414
    // 0x800E008C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    func_800E0414(rdram, ctx);
        goto after_0;
    // 0x800E008C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x800E0090: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800E0094: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E0098: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800E009C: swc1        $f2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f2.u32l;
    // 0x800E00A0: swc1        $f2, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f2.u32l;
    // 0x800E00A4: swc1        $f2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f2.u32l;
    // 0x800E00A8: swc1        $f2, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->f2.u32l;
    // 0x800E00AC: swc1        $f2, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->f2.u32l;
    // 0x800E00B0: swc1        $f2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->f2.u32l;
    // 0x800E00B4: swc1        $f12, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f12.u32l;
    // 0x800E00B8: swc1        $f12, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f12.u32l;
    // 0x800E00BC: swc1        $f12, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f12.u32l;
    // 0x800E00C0: lh          $v1, 0x4($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X4);
    // 0x800E00C4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800E00C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800E00CC: addiu       $s1, $s5, 0x8
    ctx->r17 = ADD32(ctx->r21, 0X8);
    // 0x800E00D0: blez        $v1, L_800E0144
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800E00D4: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800E0144;
    }
    // 0x800E00D4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800E00D8:
    // 0x800E00D8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x800E00DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E00E0: srl         $t6, $v0, 4
    ctx->r14 = S32(U32(ctx->r2) >> 4);
    // 0x800E00E4: beq         $s6, $t6, L_800E00FC
    if (ctx->r22 == ctx->r14) {
        // 0x800E00E8: andi        $s0, $v0, 0xF
        ctx->r16 = ctx->r2 & 0XF;
            goto L_800E00FC;
    }
    // 0x800E00E8: andi        $s0, $v0, 0xF
    ctx->r16 = ctx->r2 & 0XF;
    // 0x800E00EC: beql        $s3, $zero, L_800E012C
    if (ctx->r19 == 0) {
        // 0x800E00F0: lh          $t9, 0x2($s1)
        ctx->r25 = MEM_H(ctx->r17, 0X2);
            goto L_800E012C;
    }
    goto skip_0;
    // 0x800E00F0: lh          $t9, 0x2($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X2);
    skip_0:
    // 0x800E00F4: b           L_800E0148
    // 0x800E00F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_800E0148;
    // 0x800E00F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800E00FC:
    // 0x800E00FC: slti        $at, $s0, 0x9
    ctx->r1 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x800E0100: bne         $at, $zero, L_800E010C
    if (ctx->r1 != 0) {
        // 0x800E0104: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_800E010C;
    }
    // 0x800E0104: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x800E0108: addiu       $s0, $s0, -0x9
    ctx->r16 = ADD32(ctx->r16, -0X9);
L_800E010C:
    // 0x800E010C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800E0110: jal         0x800E04C0
    // 0x800E0114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800E04C0(rdram, ctx);
        goto after_1;
    // 0x800E0114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E0118: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x800E011C: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x800E0120: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x800E0124: lh          $v1, 0x4($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X4);
    // 0x800E0128: lh          $t9, 0x2($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X2);
L_800E012C:
    // 0x800E012C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800E0130: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800E0134: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800E0138: addu        $s1, $s1, $t0
    ctx->r17 = ADD32(ctx->r17, ctx->r8);
    // 0x800E013C: bne         $at, $zero, L_800E00D8
    if (ctx->r1 != 0) {
        // 0x800E0140: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800E00D8;
    }
    // 0x800E0140: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_800E0144:
    // 0x800E0144: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800E0148:
    // 0x800E0148: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800E014C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E0150: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800E0154: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800E0158: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800E015C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800E0160: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800E0164: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800E0168: jr          $ra
    // 0x800E016C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800E016C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800E0170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0170: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x800E0174: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E0178: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800E017C: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x800E0180: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x800E0184: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800E0188: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800E018C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800E0190: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800E0194: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x800E0198: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x800E019C: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x800E01A0: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x800E01A4: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x800E01A8: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800E01AC: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800E01B0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800E01B4: jal         0x800E0414
    // 0x800E01B8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_800E0414(rdram, ctx);
        goto after_0;
    // 0x800E01B8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x800E01BC: beq         $s0, $zero, L_800E01D4
    if (ctx->r16 == 0) {
        // 0x800E01C0: mov.s       $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
            goto L_800E01D4;
    }
    // 0x800E01C0: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x800E01C4: lh          $t6, 0x2($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X2);
    // 0x800E01C8: lh          $t7, 0x0($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X0);
    // 0x800E01CC: b           L_800E01D8
    // 0x800E01D0: subu        $s6, $t6, $t7
    ctx->r22 = SUB32(ctx->r14, ctx->r15);
        goto L_800E01D8;
    // 0x800E01D0: subu        $s6, $t6, $t7
    ctx->r22 = SUB32(ctx->r14, ctx->r15);
L_800E01D4:
    // 0x800E01D4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_800E01D8:
    // 0x800E01D8: lh          $t8, 0x4($s5)
    ctx->r24 = MEM_H(ctx->r21, 0X4);
    // 0x800E01DC: addiu       $s1, $s5, 0x8
    ctx->r17 = ADD32(ctx->r21, 0X8);
    // 0x800E01E0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800E01E4: blez        $t8, L_800E02B0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800E01E8: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_800E02B0;
    }
    // 0x800E01E8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800E01EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E01F0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800E01F4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800E01F8: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
L_800E01FC:
    // 0x800E01FC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x800E0200: srl         $v1, $v0, 4
    ctx->r3 = S32(U32(ctx->r2) >> 4);
    // 0x800E0204: beql        $s2, $v1, L_800E0268
    if (ctx->r18 == ctx->r3) {
        // 0x800E0208: andi        $s0, $v0, 0xF
        ctx->r16 = ctx->r2 & 0XF;
            goto L_800E0268;
    }
    goto skip_0;
    // 0x800E0208: andi        $s0, $v0, 0xF
    ctx->r16 = ctx->r2 & 0XF;
    skip_0:
    // 0x800E020C: beq         $s2, $zero, L_800E022C
    if (ctx->r18 == 0) {
        // 0x800E0210: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_800E022C;
    }
    // 0x800E0210: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800E0214: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800E0218: jal         0x800E084C
    // 0x800E021C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800E084C(rdram, ctx);
        goto after_1;
    // 0x800E021C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x800E0220: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x800E0224: srl         $t9, $v1, 4
    ctx->r25 = S32(U32(ctx->r3) >> 4);
    // 0x800E0228: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_800E022C:
    // 0x800E022C: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x800E0230: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800E0234: swc1        $f22, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f22.u32l;
    // 0x800E0238: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800E023C: swc1        $f20, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f20.u32l;
    // 0x800E0240: lwc1        $f14, 0x88($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800E0244: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x800E0248: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x800E024C: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x800E0250: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x800E0254: swc1        $f14, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f14.u32l;
    // 0x800E0258: swc1        $f14, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f14.u32l;
    // 0x800E025C: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x800E0260: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x800E0264: andi        $s0, $v0, 0xF
    ctx->r16 = ctx->r2 & 0XF;
L_800E0268:
    // 0x800E0268: slti        $at, $s0, 0x9
    ctx->r1 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x800E026C: bne         $at, $zero, L_800E0278
    if (ctx->r1 != 0) {
        // 0x800E0270: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800E0278;
    }
    // 0x800E0270: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E0274: addiu       $s0, $s0, -0x9
    ctx->r16 = ADD32(ctx->r16, -0X9);
L_800E0278:
    // 0x800E0278: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x800E027C: jal         0x800E04C0
    // 0x800E0280: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_800E04C0(rdram, ctx);
        goto after_2;
    // 0x800E0280: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x800E0284: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x800E0288: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x800E028C: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x800E0290: lh          $t2, 0x2($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X2);
    // 0x800E0294: lh          $t4, 0x4($s5)
    ctx->r12 = MEM_H(ctx->r21, 0X4);
    // 0x800E0298: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800E029C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800E02A0: addu        $s1, $s1, $t3
    ctx->r17 = ADD32(ctx->r17, ctx->r11);
    // 0x800E02A4: slt         $at, $s3, $t4
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800E02A8: bne         $at, $zero, L_800E01FC
    if (ctx->r1 != 0) {
        // 0x800E02AC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800E01FC;
    }
    // 0x800E02AC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_800E02B0:
    // 0x800E02B0: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x800E02B4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800E02B8: jal         0x800E084C
    // 0x800E02BC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800E084C(rdram, ctx);
        goto after_3;
    // 0x800E02BC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x800E02C0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800E02C4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800E02C8: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800E02CC: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x800E02D0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800E02D4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800E02D8: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800E02DC: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800E02E0: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x800E02E4: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x800E02E8: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x800E02EC: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x800E02F0: jr          $ra
    // 0x800E02F4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x800E02F4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_800E02F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E02F8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800E02FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E0300: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800E0304: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800E0308: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E030C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800E0310: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800E0314: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x800E0318: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x800E031C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x800E0320: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800E0324: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800E0328: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800E032C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800E0330: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800E0334: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800E0338: jal         0x800E0414
    // 0x800E033C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    func_800E0414(rdram, ctx);
        goto after_0;
    // 0x800E033C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_0:
    // 0x800E0340: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800E0344: beq         $s0, $zero, L_800E035C
    if (ctx->r16 == 0) {
        // 0x800E0348: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_800E035C;
    }
    // 0x800E0348: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800E034C: lh          $t6, 0x2($s4)
    ctx->r14 = MEM_H(ctx->r20, 0X2);
    // 0x800E0350: lh          $t7, 0x0($s4)
    ctx->r15 = MEM_H(ctx->r20, 0X0);
    // 0x800E0354: b           L_800E0360
    // 0x800E0358: subu        $fp, $t6, $t7
    ctx->r30 = SUB32(ctx->r14, ctx->r15);
        goto L_800E0360;
    // 0x800E0358: subu        $fp, $t6, $t7
    ctx->r30 = SUB32(ctx->r14, ctx->r15);
L_800E035C:
    // 0x800E035C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_800E0360:
    // 0x800E0360: lh          $a0, 0x4($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X4);
    // 0x800E0364: addiu       $s1, $s4, 0x8
    ctx->r17 = ADD32(ctx->r20, 0X8);
    // 0x800E0368: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800E036C: blez        $a0, L_800E03E0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800E0370: addiu       $s7, $zero, 0x7
        ctx->r23 = ADD32(0, 0X7);
            goto L_800E03E0;
    }
    // 0x800E0370: addiu       $s7, $zero, 0x7
    ctx->r23 = ADD32(0, 0X7);
    // 0x800E0374: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x800E0378: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
L_800E037C:
    // 0x800E037C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x800E0380: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800E0384: srl         $v1, $v0, 4
    ctx->r3 = S32(U32(ctx->r2) >> 4);
    // 0x800E0388: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800E038C: bne         $at, $zero, L_800E03C4
    if (ctx->r1 != 0) {
        // 0x800E0390: slt         $at, $s5, $v1
        ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800E03C4;
    }
    // 0x800E0390: slt         $at, $s5, $v1
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800E0394: bne         $at, $zero, L_800E03C4
    if (ctx->r1 != 0) {
        // 0x800E0398: andi        $t9, $v0, 0xF
        ctx->r25 = ctx->r2 & 0XF;
            goto L_800E03C4;
    }
    // 0x800E0398: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x800E039C: bne         $s7, $t9, L_800E03C4
    if (ctx->r23 != ctx->r25) {
        // 0x800E03A0: or          $a2, $fp, $zero
        ctx->r6 = ctx->r30 | 0;
            goto L_800E03C4;
    }
    // 0x800E03A0: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x800E03A4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800E03A8: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x800E03AC: addu        $s0, $s6, $t0
    ctx->r16 = ADD32(ctx->r22, ctx->r8);
    // 0x800E03B0: jal         0x800E04C0
    // 0x800E03B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E04C0(rdram, ctx);
        goto after_1;
    // 0x800E03B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800E03B8: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x800E03BC: lh          $a0, 0x4($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X4);
    // 0x800E03C0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_800E03C4:
    // 0x800E03C4: lh          $t1, 0x2($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X2);
    // 0x800E03C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800E03CC: slt         $at, $s2, $a0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800E03D0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800E03D4: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
    // 0x800E03D8: bne         $at, $zero, L_800E037C
    if (ctx->r1 != 0) {
        // 0x800E03DC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800E037C;
    }
    // 0x800E03DC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_800E03E0:
    // 0x800E03E0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800E03E4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800E03E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E03EC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800E03F0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800E03F4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800E03F8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800E03FC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800E0400: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800E0404: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x800E0408: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x800E040C: jr          $ra
    // 0x800E0410: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800E0410: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800E0414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0414: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x800E0418: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x800E041C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E0420: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800E0424: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x800E0428: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800E042C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E0430: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E0434: mul.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x800E0438: jr          $ra
    // 0x800E043C: add.s       $f0, $f6, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f16.fl;
    return;
    // 0x800E043C: add.s       $f0, $f6, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f16.fl;
;}
RECOMP_FUNC void func_800E0440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0440: jr          $ra
    // 0x800E0444: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    return;
    // 0x800E0444: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
;}
RECOMP_FUNC void func_800E0448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0448: jr          $ra
    // 0x800E044C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    return;
    // 0x800E044C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
;}
RECOMP_FUNC void func_800E0450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0450: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x800E0454: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x800E0458: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x800E045C: jr          $ra
    // 0x800E0460: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    return;
    // 0x800E0460: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
;}
RECOMP_FUNC void func_800E0464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0464: jr          $ra
    // 0x800E0468: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    return;
    // 0x800E0468: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
;}
RECOMP_FUNC void func_800E046C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E046C: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x800E0470: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E0474: bnel        $a1, $v0, L_800E0488
    if (ctx->r5 != ctx->r2) {
            // 0x800E0478: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    static_3_800E0488(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800E0478: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    skip_0:
    // 0x800E047C: jr          $ra
    // 0x800E0480: lwc1        $f0, 0x5D70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5D70);
    return;
    // 0x800E0480: lwc1        $f0, 0x5D70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5D70);
;}
RECOMP_FUNC void func_800E0484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0484: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x800E0488: subu        $t6, $a1, $v1
    ctx->r14 = SUB32(ctx->r5, ctx->r3);
    // 0x800E048C: subu        $t7, $v0, $v1
    ctx->r15 = SUB32(ctx->r2, ctx->r3);
    // 0x800E0490: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800E0494: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800E0498: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E049C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E04A0: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800E04A4: jr          $ra
    // 0x800E04A8: nop

    return;
    // 0x800E04A8: nop

;}
RECOMP_FUNC void func_800E04AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E04AC: jr          $ra
    // 0x800E04B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800E04B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800E04C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E04C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E04C4: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x800E04C8: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x800E04CC: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x800E04D0: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x800E04D4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x800E04D8: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x800E04DC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x800E04E0: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x800E04E4: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x800E04E8: lh          $t2, 0x2($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X2);
    // 0x800E04EC: addiu       $s4, $a0, 0x4
    ctx->r20 = ADD32(ctx->r4, 0X4);
    // 0x800E04F0: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x800E04F4: bnel        $t2, $zero, L_800E0524
    if (ctx->r10 != 0) {
        // 0x800E04F8: mtc1        $a1, $f12
        ctx->f12.u32l = ctx->r5;
            goto L_800E0524;
    }
    goto skip_0;
    // 0x800E04F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    skip_0:
    // 0x800E04FC: lh          $t3, 0x2($s4)
    ctx->r11 = MEM_H(ctx->r20, 0X2);
    // 0x800E0500: lui         $at, 0x3C80
    ctx->r1 = S32(0X3C80 << 16);
    // 0x800E0504: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E0508: mtc1        $t3, $f0
    ctx->f0.u32l = ctx->r11;
    // 0x800E050C: nop

    // 0x800E0510: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800E0514: mul.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800E0518: b           L_800E0824
    // 0x800E051C: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
        goto L_800E0824;
    // 0x800E051C: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x800E0520: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
L_800E0524:
    // 0x800E0524: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800E0528: lh          $t2, 0x0($s4)
    ctx->r10 = MEM_H(ctx->r20, 0X0);
    // 0x800E052C: trunc.w.s   $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x800E0530: addu        $s5, $s4, $t3
    ctx->r21 = ADD32(ctx->r20, ctx->r11);
    // 0x800E0534: andi        $t2, $t2, 0x3FFF
    ctx->r10 = ctx->r10 & 0X3FFF;
    // 0x800E0538: mfc1        $t0, $f0
    ctx->r8 = (int32_t)ctx->f0.u32l;
    // 0x800E053C: nop

    // 0x800E0540: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x800E0544: beql        $at, $zero, L_800E0578
    if (ctx->r1 == 0) {
        // 0x800E0548: lh          $t1, 0x0($s5)
        ctx->r9 = MEM_H(ctx->r21, 0X0);
            goto L_800E0578;
    }
    goto skip_1;
    // 0x800E0548: lh          $t1, 0x0($s5)
    ctx->r9 = MEM_H(ctx->r21, 0X0);
    skip_1:
    // 0x800E054C: beq         $a2, $zero, L_800E0568
    if (ctx->r6 == 0) {
        // 0x800E0550: or          $s2, $s4, $zero
        ctx->r18 = ctx->r20 | 0;
            goto L_800E0568;
    }
    // 0x800E0550: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x800E0554: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x800E0558: lh          $t1, 0x0($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X0);
    // 0x800E055C: andi        $t1, $t1, 0x3FFF
    ctx->r9 = ctx->r9 & 0X3FFF;
    // 0x800E0560: b           L_800E0604
    // 0x800E0564: subu        $t1, $t1, $a2
    ctx->r9 = SUB32(ctx->r9, ctx->r6);
        goto L_800E0604;
    // 0x800E0564: subu        $t1, $t1, $a2
    ctx->r9 = SUB32(ctx->r9, ctx->r6);
L_800E0568:
    // 0x800E0568: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x800E056C: b           L_800E0604
    // 0x800E0570: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
        goto L_800E0604;
    // 0x800E0570: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x800E0574: lh          $t1, 0x0($s5)
    ctx->r9 = MEM_H(ctx->r21, 0X0);
L_800E0578:
    // 0x800E0578: andi        $t1, $t1, 0x3FFF
    ctx->r9 = ctx->r9 & 0X3FFF;
    // 0x800E057C: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x800E0580: bnel        $at, $zero, L_800E05B4
    if (ctx->r1 != 0) {
        // 0x800E0584: or          $s1, $s4, $zero
        ctx->r17 = ctx->r20 | 0;
            goto L_800E05B4;
    }
    goto skip_2;
    // 0x800E0584: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    skip_2:
    // 0x800E0588: beq         $a2, $zero, L_800E05A4
    if (ctx->r6 == 0) {
        // 0x800E058C: or          $s1, $s5, $zero
        ctx->r17 = ctx->r21 | 0;
            goto L_800E05A4;
    }
    // 0x800E058C: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x800E0590: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x800E0594: lh          $t2, 0x0($s2)
    ctx->r10 = MEM_H(ctx->r18, 0X0);
    // 0x800E0598: andi        $t2, $t2, 0x3FFF
    ctx->r10 = ctx->r10 & 0X3FFF;
    // 0x800E059C: b           L_800E0604
    // 0x800E05A0: addu        $t2, $t2, $a2
    ctx->r10 = ADD32(ctx->r10, ctx->r6);
        goto L_800E0604;
    // 0x800E05A0: addu        $t2, $t2, $a2
    ctx->r10 = ADD32(ctx->r10, ctx->r6);
L_800E05A4:
    // 0x800E05A4: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    // 0x800E05A8: b           L_800E0604
    // 0x800E05AC: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
        goto L_800E0604;
    // 0x800E05AC: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
    // 0x800E05B0: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
L_800E05B4:
    // 0x800E05B4: b           L_800E05C0
    // 0x800E05B8: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
        goto L_800E05C0;
    // 0x800E05B8: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    // 0x800E05BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_800E05C0:
    // 0x800E05C0: subu        $v0, $s2, $s1
    ctx->r2 = SUB32(ctx->r18, ctx->r17);
    // 0x800E05C4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x800E05C8: beql        $v0, $zero, L_800E05F8
    if (ctx->r2 == 0) {
        // 0x800E05CC: lh          $t1, 0x0($s1)
        ctx->r9 = MEM_H(ctx->r17, 0X0);
            goto L_800E05F8;
    }
    goto skip_3;
    // 0x800E05CC: lh          $t1, 0x0($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X0);
    skip_3:
    // 0x800E05D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800E05D4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x800E05D8: lh          $t1, 0x0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X0);
    // 0x800E05DC: andi        $t1, $t1, 0x3FFF
    ctx->r9 = ctx->r9 & 0X3FFF;
    // 0x800E05E0: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x800E05E4: beql        $at, $zero, L_800E05C0
    if (ctx->r1 == 0) {
        // 0x800E05E8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800E05C0;
    }
    goto skip_4;
    // 0x800E05E8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    skip_4:
    // 0x800E05EC: b           L_800E05C0
    // 0x800E05F0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_800E05C0;
    // 0x800E05F0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800E05F4: lh          $t1, 0x0($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X0);
L_800E05F8:
    // 0x800E05F8: lh          $t2, 0x0($s2)
    ctx->r10 = MEM_H(ctx->r18, 0X0);
    // 0x800E05FC: andi        $t1, $t1, 0x3FFF
    ctx->r9 = ctx->r9 & 0X3FFF;
    // 0x800E0600: andi        $t2, $t2, 0x3FFF
    ctx->r10 = ctx->r10 & 0X3FFF;
L_800E0604:
    // 0x800E0604: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E0608: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E060C: sltu        $at, $t2, $t0
    ctx->r1 = ctx->r10 < ctx->r8 ? 1 : 0;
    // 0x800E0610: bnel        $at, $zero, L_800E0640
    if (ctx->r1 != 0) {
        // 0x800E0614: lhu         $s6, 0x0($s1)
        ctx->r22 = MEM_HU(ctx->r17, 0X0);
            goto L_800E0640;
    }
    goto skip_5;
    // 0x800E0614: lhu         $s6, 0x0($s1)
    ctx->r22 = MEM_HU(ctx->r17, 0X0);
    skip_5:
    // 0x800E0618: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800E061C: beql        $t2, $zero, L_800E0640
    if (ctx->r10 == 0) {
        // 0x800E0620: lhu         $s6, 0x0($s1)
        ctx->r22 = MEM_HU(ctx->r17, 0X0);
            goto L_800E0640;
    }
    goto skip_6;
    // 0x800E0620: lhu         $s6, 0x0($s1)
    ctx->r22 = MEM_HU(ctx->r17, 0X0);
    skip_6:
    // 0x800E0624: mtc1        $t1, $f0
    ctx->f0.u32l = ctx->r9;
    // 0x800E0628: mtc1        $t2, $f2
    ctx->f2.u32l = ctx->r10;
    // 0x800E062C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800E0630: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x800E0634: sub.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800E0638: div.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800E063C: lhu         $s6, 0x0($s1)
    ctx->r22 = MEM_HU(ctx->r17, 0X0);
L_800E0640:
    // 0x800E0640: lh          $t5, 0x2($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X2);
    // 0x800E0644: lh          $t6, 0x2($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X2);
    // 0x800E0648: andi        $s6, $s6, 0x4000
    ctx->r22 = ctx->r22 & 0X4000;
    // 0x800E064C: beql        $s6, $zero, L_800E067C
    if (ctx->r22 == 0) {
        // 0x800E0650: or          $t4, $t5, $zero
        ctx->r12 = ctx->r13 | 0;
            goto L_800E067C;
    }
    goto skip_7;
    // 0x800E0650: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    skip_7:
    // 0x800E0654: addiu       $s0, $s1, -0x4
    ctx->r16 = ADD32(ctx->r17, -0X4);
    // 0x800E0658: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x800E065C: beq         $at, $zero, L_800E0670
    if (ctx->r1 == 0) {
        // 0x800E0660: nop
    
            goto L_800E0670;
    }
    // 0x800E0660: nop

    // 0x800E0664: beq         $a2, $zero, L_800E0670
    if (ctx->r6 == 0) {
        // 0x800E0668: or          $s0, $s4, $zero
        ctx->r16 = ctx->r20 | 0;
            goto L_800E0670;
    }
    // 0x800E0668: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800E066C: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_800E0670:
    // 0x800E0670: b           L_800E067C
    // 0x800E0674: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
        goto L_800E067C;
    // 0x800E0674: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x800E0678: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
L_800E067C:
    // 0x800E067C: lhu         $t0, 0x0($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X0);
    // 0x800E0680: andi        $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 & 0X8000;
    // 0x800E0684: beq         $t0, $zero, L_800E06B0
    if (ctx->r8 == 0) {
        // 0x800E0688: or          $s6, $s6, $t0
        ctx->r22 = ctx->r22 | ctx->r8;
            goto L_800E06B0;
    }
    // 0x800E0688: or          $s6, $s6, $t0
    ctx->r22 = ctx->r22 | ctx->r8;
    // 0x800E068C: addiu       $s3, $s2, 0x4
    ctx->r19 = ADD32(ctx->r18, 0X4);
    // 0x800E0690: sltu        $at, $s5, $s3
    ctx->r1 = ctx->r21 < ctx->r19 ? 1 : 0;
    // 0x800E0694: beq         $at, $zero, L_800E06A8
    if (ctx->r1 == 0) {
        // 0x800E0698: nop
    
            goto L_800E06A8;
    }
    // 0x800E0698: nop

    // 0x800E069C: beq         $a2, $zero, L_800E06A8
    if (ctx->r6 == 0) {
        // 0x800E06A0: or          $s3, $s5, $zero
        ctx->r19 = ctx->r21 | 0;
            goto L_800E06A8;
    }
    // 0x800E06A0: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x800E06A4: or          $s3, $s4, $zero
    ctx->r19 = ctx->r20 | 0;
L_800E06A8:
    // 0x800E06A8: b           L_800E06B4
    // 0x800E06AC: lh          $t7, 0x2($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X2);
        goto L_800E06B4;
    // 0x800E06AC: lh          $t7, 0x2($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X2);
L_800E06B0:
    // 0x800E06B0: or          $t7, $t6, $zero
    ctx->r15 = ctx->r14 | 0;
L_800E06B4:
    // 0x800E06B4: lhu         $t0, 0x0($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X0);
    // 0x800E06B8: addiu       $s7, $zero, 0x0
    ctx->r23 = ADD32(0, 0X0);
    // 0x800E06BC: andi        $t0, $t0, 0xF
    ctx->r8 = ctx->r8 & 0XF;
    // 0x800E06C0: addiu       $t0, $t0, -0x9
    ctx->r8 = ADD32(ctx->r8, -0X9);
    // 0x800E06C4: bltz        $t0, L_800E0730
    if (SIGNED(ctx->r8) < 0) {
        // 0x800E06C8: nop
    
            goto L_800E0730;
    }
    // 0x800E06C8: nop

    // 0x800E06CC: sub         $s0, $t5, $t4
    ctx->r16 = SUB32(ctx->r13, ctx->r12);
    // 0x800E06D0: sub         $s1, $t6, $t5
    ctx->r17 = SUB32(ctx->r14, ctx->r13);
    // 0x800E06D4: sub         $s2, $t7, $t6
    ctx->r18 = SUB32(ctx->r15, ctx->r14);
    // 0x800E06D8: ori         $s7, $zero, 0xB400
    ctx->r23 = 0 | 0XB400;
    // 0x800E06DC: addiu       $t0, $s0, 0x5A00
    ctx->r8 = ADD32(ctx->r16, 0X5A00);
    // 0x800E06E0: sltu        $t1, $s7, $t0
    ctx->r9 = ctx->r23 < ctx->r8 ? 1 : 0;
    // 0x800E06E4: beq         $t1, $zero, L_800E06F8
    if (ctx->r9 == 0) {
        // 0x800E06E8: addiu       $t0, $s1, 0x5A00
        ctx->r8 = ADD32(ctx->r17, 0X5A00);
            goto L_800E06F8;
    }
    // 0x800E06E8: addiu       $t0, $s1, 0x5A00
    ctx->r8 = ADD32(ctx->r17, 0X5A00);
    // 0x800E06EC: bltzl       $s0, L_800E06F8
    if (SIGNED(ctx->r16) < 0) {
        // 0x800E06F0: add         $s0, $s0, $s7
        ctx->r16 = ADD32(ctx->r16, ctx->r23);
            goto L_800E06F8;
    }
    goto skip_8;
    // 0x800E06F0: add         $s0, $s0, $s7
    ctx->r16 = ADD32(ctx->r16, ctx->r23);
    skip_8:
    // 0x800E06F4: sub         $s0, $s0, $s7
    ctx->r16 = SUB32(ctx->r16, ctx->r23);
L_800E06F8:
    // 0x800E06F8: sltu        $t1, $s7, $t0
    ctx->r9 = ctx->r23 < ctx->r8 ? 1 : 0;
    // 0x800E06FC: beq         $t1, $zero, L_800E0710
    if (ctx->r9 == 0) {
        // 0x800E0700: addiu       $t0, $s2, 0x5A00
        ctx->r8 = ADD32(ctx->r18, 0X5A00);
            goto L_800E0710;
    }
    // 0x800E0700: addiu       $t0, $s2, 0x5A00
    ctx->r8 = ADD32(ctx->r18, 0X5A00);
    // 0x800E0704: bltzl       $s1, L_800E0710
    if (SIGNED(ctx->r17) < 0) {
        // 0x800E0708: add         $s1, $s1, $s7
        ctx->r17 = ADD32(ctx->r17, ctx->r23);
            goto L_800E0710;
    }
    goto skip_9;
    // 0x800E0708: add         $s1, $s1, $s7
    ctx->r17 = ADD32(ctx->r17, ctx->r23);
    skip_9:
    // 0x800E070C: sub         $s1, $s1, $s7
    ctx->r17 = SUB32(ctx->r17, ctx->r23);
L_800E0710:
    // 0x800E0710: sltu        $t1, $s7, $t0
    ctx->r9 = ctx->r23 < ctx->r8 ? 1 : 0;
    // 0x800E0714: beq         $t1, $zero, L_800E0728
    if (ctx->r9 == 0) {
        // 0x800E0718: add         $t5, $t4, $s0
        ctx->r13 = ADD32(ctx->r12, ctx->r16);
            goto L_800E0728;
    }
    // 0x800E0718: add         $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x800E071C: bltzl       $s2, L_800E0728
    if (SIGNED(ctx->r18) < 0) {
        // 0x800E0720: add         $s2, $s2, $s7
        ctx->r18 = ADD32(ctx->r18, ctx->r23);
            goto L_800E0728;
    }
    goto skip_10;
    // 0x800E0720: add         $s2, $s2, $s7
    ctx->r18 = ADD32(ctx->r18, ctx->r23);
    skip_10:
    // 0x800E0724: sub         $s2, $s2, $s7
    ctx->r18 = SUB32(ctx->r18, ctx->r23);
L_800E0728:
    // 0x800E0728: add         $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x800E072C: add         $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
L_800E0730:
    // 0x800E0730: beql        $s6, $zero, L_800E07B4
    if (ctx->r22 == 0) {
        // 0x800E0734: mtc1        $t5, $f4
        ctx->f4.u32l = ctx->r13;
            goto L_800E07B4;
    }
    goto skip_11;
    // 0x800E0734: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    skip_11:
    // 0x800E0738: sub         $t0, $t7, $t4
    ctx->r8 = SUB32(ctx->r15, ctx->r12);
    // 0x800E073C: sub         $t8, $t6, $t5
    ctx->r24 = SUB32(ctx->r14, ctx->r13);
    // 0x800E0740: add         $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800E0744: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E0748: sub         $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x800E074C: mtc1        $t0, $f2
    ctx->f2.u32l = ctx->r8;
    // 0x800E0750: sll         $t0, $t4, 1
    ctx->r8 = S32(ctx->r12 << 1);
    // 0x800E0754: add         $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800E0758: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x800E075C: sub         $t0, $t0, $t5
    ctx->r8 = SUB32(ctx->r8, ctx->r13);
    // 0x800E0760: sub         $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x800E0764: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800E0768: sub         $t0, $t6, $t4
    ctx->r8 = SUB32(ctx->r14, ctx->r12);
    // 0x800E076C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800E0770: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800E0774: sll         $t0, $t5, 1
    ctx->r8 = S32(ctx->r13 << 1);
    // 0x800E0778: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800E077C: lui         $at, 0x3C00
    ctx->r1 = S32(0X3C00 << 16);
    // 0x800E0780: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E0784: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E0788: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E078C: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x800E0790: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E0794: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800E0798: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x800E079C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800E07A0: add.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x800E07A4: mul.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800E07A8: b           L_800E07E0
    // 0x800E07AC: nop

        goto L_800E07E0;
    // 0x800E07AC: nop

    // 0x800E07B0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
L_800E07B4:
    // 0x800E07B4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800E07B8: lui         $at, 0x3C80
    ctx->r1 = S32(0X3C80 << 16);
    // 0x800E07BC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E07C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E07C4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E07C8: mul.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x800E07CC: nop

    // 0x800E07D0: mul.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x800E07D4: sub.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x800E07D8: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800E07DC: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
L_800E07E0:
    // 0x800E07E0: beql        $s7, $zero, L_800E0824
    if (ctx->r23 == 0) {
        // 0x800E07E4: lw          $s0, 0x0($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X0);
            goto L_800E0824;
    }
    goto skip_12;
    // 0x800E07E4: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    skip_12:
    // 0x800E07E8: lui         $t0, 0x3B36
    ctx->r8 = S32(0X3B36 << 16);
    // 0x800E07EC: ori         $t0, $t0, 0xB61
    ctx->r8 = ctx->r8 | 0XB61;
    // 0x800E07F0: mtc1        $t0, $f2
    ctx->f2.u32l = ctx->r8;
    // 0x800E07F4: abs.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = fabsf(ctx->f0.fl);
    // 0x800E07F8: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x800E07FC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800E0800: lui         $t0, 0x43B4
    ctx->r8 = S32(0X43B4 << 16);
    // 0x800E0804: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800E0808: trunc.w.s   $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x800E080C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x800E0810: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x800E0814: bc1t        L_800E0820
    if (c1cs) {
        // 0x800E0818: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_800E0820;
    }
    // 0x800E0818: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800E081C: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_800E0820:
    // 0x800E0820: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
L_800E0824:
    // 0x800E0824: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x800E0828: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x800E082C: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x800E0830: lw          $s4, 0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X10);
    // 0x800E0834: lw          $s5, 0x14($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X14);
    // 0x800E0838: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x800E083C: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x800E0840: lw          $fp, 0x20($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X20);
    // 0x800E0844: jr          $ra
    // 0x800E0848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E0848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E084C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E084C: sll         $t0, $a2, 5
    ctx->r8 = S32(ctx->r6 << 5);
    // 0x800E0850: sll         $t1, $a2, 3
    ctx->r9 = S32(ctx->r6 << 3);
    // 0x800E0854: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x800E0858: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800E085C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x800E0860: lw          $t0, 0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC);
    // 0x800E0864: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x800E0868: lw          $t2, 0x14($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X14);
    // 0x800E086C: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
    // 0x800E0870: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    // 0x800E0874: sw          $t2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r10;
    // 0x800E0878: lw          $t0, 0x18($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X18);
    // 0x800E087C: lw          $t1, 0x1C($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X1C);
    // 0x800E0880: lw          $t2, 0x20($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X20);
    // 0x800E0884: sw          $t0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r8;
    // 0x800E0888: sw          $t1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r9;
    // 0x800E088C: sw          $t2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r10;
    // 0x800E0890: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E0894: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x800E0898: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x800E089C: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x800E08A0: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x800E08A4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800E08A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E08AC: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800E08B0: lwc1        $f20, 0x4($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800E08B4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800E08B8: lwc1        $f22, 0x8($a1)
    ctx->f22.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800E08BC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x800E08C0: sw          $ra, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r31;
    // 0x800E08C4: mul.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x800E08C8: jal         0x800137AC
    // 0x800E08CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    func_800137AC(rdram, ctx);
        goto after_0;
    // 0x800E08CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E08D0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800E08D4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x800E08D8: jal         0x800137AC
    // 0x800E08DC: mov.s       $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    ctx->f26.fl = ctx->f2.fl;
    func_800137AC(rdram, ctx);
        goto after_1;
    // 0x800E08DC: mov.s       $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    ctx->f26.fl = ctx->f2.fl;
    after_1:
    // 0x800E08E0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x800E08E4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800E08E8: jal         0x800137AC
    // 0x800E08EC: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
    func_800137AC(rdram, ctx);
        goto after_2;
    // 0x800E08EC: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
    after_2:
    // 0x800E08F0: mul.s       $f4, $f24, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x800E08F4: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x800E08F8: mul.s       $f8, $f26, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f20.fl);
    // 0x800E08FC: lw          $ra, 0x4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4);
    // 0x800E0900: mul.s       $f6, $f24, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f22.fl);
    // 0x800E0904: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x800E0908: mul.s       $f10, $f26, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f22.fl);
    // 0x800E090C: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x800E0910: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800E0914: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x800E0918: mul.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800E091C: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x800E0920: mul.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800E0924: sub.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x800E0928: mul.s       $f18, $f8, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800E092C: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x800E0930: mul.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800E0934: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800E0938: mul.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800E093C: swc1        $f16, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f16.u32l;
    // 0x800E0940: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800E0944: sub.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x800E0948: mul.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800E094C: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    // 0x800E0950: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800E0954: swc1        $f16, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f16.u32l;
    // 0x800E0958: jr          $ra
    // 0x800E095C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E095C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E0960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E0964: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800E0968: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800E096C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E0970: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800E0974: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E0978: jal         0x8001ACCC
    // 0x800E097C: addiu       $a0, $t6, 0x20
    ctx->r4 = ADD32(ctx->r14, 0X20);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800E097C: addiu       $a0, $t6, 0x20
    ctx->r4 = ADD32(ctx->r14, 0X20);
    after_0:
    // 0x800E0980: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800E0984: addiu       $t7, $v0, 0x20
    ctx->r15 = ADD32(ctx->r2, 0X20);
    // 0x800E0988: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800E098C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800E0990: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E0994: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E0998: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
    // 0x800E099C: jal         0x800E0ACC
    // 0x800E09A0: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    func_800E0ACC(rdram, ctx);
        goto after_1;
    // 0x800E09A0: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    after_1:
    // 0x800E09A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E09A8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800E09AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E09B0: jr          $ra
    // 0x800E09B4: nop

    return;
    // 0x800E09B4: nop

;}
RECOMP_FUNC void func_800E09B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E09B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E09BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800E09C0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800E09C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E09C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800E09CC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800E09D0: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x800E09D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E09D8: jal         0x8001B668
    // 0x800E09DC: addiu       $a1, $t6, 0x20
    ctx->r5 = ADD32(ctx->r14, 0X20);
    func_8001B668(rdram, ctx);
        goto after_0;
    // 0x800E09DC: addiu       $a1, $t6, 0x20
    ctx->r5 = ADD32(ctx->r14, 0X20);
    after_0:
    // 0x800E09E0: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x800E09E4: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800E09E8: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x800E09EC: jal         0x800E0A28
    // 0x800E09F0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800E0A28(rdram, ctx);
        goto after_1;
    // 0x800E09F0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x800E09F4: addiu       $t8, $v0, 0x20
    ctx->r24 = ADD32(ctx->r2, 0X20);
    // 0x800E09F8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800E09FC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800E0A00: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E0A04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E0A08: sh          $t9, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r25;
    // 0x800E0A0C: jal         0x800E0ACC
    // 0x800E0A10: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    func_800E0ACC(rdram, ctx);
        goto after_2;
    // 0x800E0A10: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    after_2:
    // 0x800E0A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E0A18: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x800E0A1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E0A20: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E0A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0A28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E0A2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E0A30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E0A34: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800E0A38: jal         0x8001B798
    // 0x800E0A3C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x800E0A3C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x800E0A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E0A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E0A48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E0A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E0A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E0A58: jal         0x8001B084
    // 0x800E0A5C: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800E0A5C: nop

    after_0:
    // 0x800E0A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E0A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E0A68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E0A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E0A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E0A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E0A7C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800E0A80: jal         0x8001B754
    // 0x800E0A84: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B754(rdram, ctx);
        goto after_0;
    // 0x800E0A84: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x800E0A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E0A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E0A90: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E0A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E0A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E0AA0: jal         0x8001BAFC
    // 0x800E0AA4: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800E0AA4: nop

    after_0:
    // 0x800E0AA8: addiu       $t6, $v0, 0x20
    ctx->r14 = ADD32(ctx->r2, 0X20);
    // 0x800E0AAC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800E0AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E0AB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E0AB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E0AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0AC0: addiu       $t6, $a0, 0x20
    ctx->r14 = ADD32(ctx->r4, 0X20);
    // 0x800E0AC4: jr          $ra
    // 0x800E0AC8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    return;
    // 0x800E0AC8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_800E0ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0ACC: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x800E0AD0: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x800E0AD4: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x800E0AD8: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x800E0ADC: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x800E0AE0: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    // 0x800E0AE4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x800E0AE8: jr          $ra
    // 0x800E0AEC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    return;
    // 0x800E0AEC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800E0AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0AF0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E0AF4: jr          $ra
    // 0x800E0AF8: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x800E0AF8: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800E0AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0AFC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800E0B00: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x800E0B04: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x800E0B08: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800E0B0C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800E0B10: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800E0B14: beq         $at, $zero, L_800E0B84
    if (ctx->r1 == 0) {
        // 0x800E0B18: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_800E0B84;
    }
    // 0x800E0B18: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800E0B1C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800E0B20: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800E0B24: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x800E0B28: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E0B2C: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x800E0B30: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
    // 0x800E0B34: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x800E0B38: swc1        $f12, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f12.u32l;
    // 0x800E0B3C: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x800E0B40: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800E0B44: sra         $t1, $t6, 5
    ctx->r9 = S32(SIGNED(ctx->r14) >> 5);
    // 0x800E0B48: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800E0B4C: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x800E0B50: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800E0B54: sb          $zero, 0x11($v1)
    MEM_B(0X11, ctx->r3) = 0;
    // 0x800E0B58: sb          $t6, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r14;
    // 0x800E0B5C: addu        $a3, $a0, $t2
    ctx->r7 = ADD32(ctx->r4, ctx->r10);
    // 0x800E0B60: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x800E0B64: lw          $t3, 0x10($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X10);
    // 0x800E0B68: andi        $t4, $t6, 0x1F
    ctx->r12 = ctx->r14 & 0X1F;
    // 0x800E0B6C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800E0B70: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x800E0B74: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x800E0B78: sw          $t7, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r15;
    // 0x800E0B7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800E0B80: sb          $t8, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r24;
L_800E0B84:
    // 0x800E0B84: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E0B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0B8C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800E0B90: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x800E0B94: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x800E0B98: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800E0B9C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800E0BA0: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800E0BA4: beq         $at, $zero, L_800E0C18
    if (ctx->r1 == 0) {
        // 0x800E0BA8: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_800E0C18;
    }
    // 0x800E0BA8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800E0BAC: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800E0BB0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800E0BB4: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x800E0BB8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E0BBC: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x800E0BC0: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
    // 0x800E0BC4: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x800E0BC8: swc1        $f12, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f12.u32l;
    // 0x800E0BCC: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x800E0BD0: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800E0BD4: sra         $t2, $t6, 5
    ctx->r10 = S32(SIGNED(ctx->r14) >> 5);
    // 0x800E0BD8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800E0BDC: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x800E0BE0: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800E0BE4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800E0BE8: sb          $t1, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r9;
    // 0x800E0BEC: sb          $t6, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r14;
    // 0x800E0BF0: addu        $a3, $a0, $t3
    ctx->r7 = ADD32(ctx->r4, ctx->r11);
    // 0x800E0BF4: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x800E0BF8: lw          $t4, 0x10($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X10);
    // 0x800E0BFC: andi        $t5, $t6, 0x1F
    ctx->r13 = ctx->r14 & 0X1F;
    // 0x800E0C00: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800E0C04: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x800E0C08: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800E0C0C: sw          $t8, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r24;
    // 0x800E0C10: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800E0C14: sb          $t9, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r25;
L_800E0C18:
    // 0x800E0C18: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E0C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0C20: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800E0C24: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x800E0C28: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x800E0C2C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800E0C30: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800E0C34: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800E0C38: beq         $at, $zero, L_800E0CAC
    if (ctx->r1 == 0) {
        // 0x800E0C3C: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_800E0CAC;
    }
    // 0x800E0C3C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800E0C40: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800E0C44: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800E0C48: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x800E0C4C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E0C50: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x800E0C54: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
    // 0x800E0C58: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x800E0C5C: swc1        $f12, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f12.u32l;
    // 0x800E0C60: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x800E0C64: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800E0C68: sra         $t2, $t6, 5
    ctx->r10 = S32(SIGNED(ctx->r14) >> 5);
    // 0x800E0C6C: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800E0C70: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x800E0C74: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800E0C78: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800E0C7C: sb          $t1, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r9;
    // 0x800E0C80: sb          $t6, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r14;
    // 0x800E0C84: addu        $a3, $a0, $t3
    ctx->r7 = ADD32(ctx->r4, ctx->r11);
    // 0x800E0C88: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x800E0C8C: lw          $t4, 0x10($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X10);
    // 0x800E0C90: andi        $t5, $t6, 0x1F
    ctx->r13 = ctx->r14 & 0X1F;
    // 0x800E0C94: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800E0C98: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x800E0C9C: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800E0CA0: sw          $t8, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r24;
    // 0x800E0CA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800E0CA8: sb          $t9, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r25;
L_800E0CAC:
    // 0x800E0CAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E0CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0CB4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800E0CB8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800E0CBC: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x800E0CC0: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x800E0CC4: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x800E0CC8: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x800E0CCC: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x800E0CD0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x800E0CD4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800E0CD8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800E0CDC: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800E0CE0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800E0CE4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800E0CE8: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x800E0CEC: lh          $t7, 0x4($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X4);
    // 0x800E0CF0: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800E0CF4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800E0CF8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800E0CFC: blez        $t7, L_800E0E5C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800E0D00: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800E0E5C;
    }
    // 0x800E0D00: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800E0D04: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800E0D08: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800E0D0C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800E0D10: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800E0D14: or          $s7, $t6, $zero
    ctx->r23 = ctx->r14 | 0;
    // 0x800E0D18: addiu       $s6, $sp, 0x78
    ctx->r22 = ADD32(ctx->r29, 0X78);
    // 0x800E0D1C: addiu       $s5, $sp, 0x5C
    ctx->r21 = ADD32(ctx->r29, 0X5C);
    // 0x800E0D20: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x800E0D24: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
L_800E0D28:
    // 0x800E0D28: addu        $v0, $t8, $s4
    ctx->r2 = ADD32(ctx->r24, ctx->r20);
    // 0x800E0D2C: lbu         $t9, 0x10($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X10);
    // 0x800E0D30: bnel        $s7, $t9, L_800E0E48
    if (ctx->r23 != ctx->r25) {
        // 0x800E0D34: lh          $t1, 0x4($s3)
        ctx->r9 = MEM_H(ctx->r19, 0X4);
            goto L_800E0E48;
    }
    goto skip_0;
    // 0x800E0D34: lh          $t1, 0x4($s3)
    ctx->r9 = MEM_H(ctx->r19, 0X4);
    skip_0:
    // 0x800E0D38: lbu         $t0, 0x11($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X11);
    // 0x800E0D3C: bnel        $t0, $zero, L_800E0E48
    if (ctx->r8 != 0) {
        // 0x800E0D40: lh          $t1, 0x4($s3)
        ctx->r9 = MEM_H(ctx->r19, 0X4);
            goto L_800E0E48;
    }
    goto skip_1;
    // 0x800E0D40: lh          $t1, 0x4($s3)
    ctx->r9 = MEM_H(ctx->r19, 0X4);
    skip_1:
    // 0x800E0D44: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800E0D48: lwc1        $f6, 0xC($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XC);
    // 0x800E0D4C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800E0D50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E0D54: mul.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800E0D58: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x800E0D5C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800E0D60: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x800E0D64: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800E0D68: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x800E0D6C: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x800E0D70: bc1fl       L_800E0D90
    if (!c1cs) {
        // 0x800E0D74: c.lt.s      $f20, $f24
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f20.fl < ctx->f24.fl;
            goto L_800E0D90;
    }
    goto skip_2;
    // 0x800E0D74: c.lt.s      $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f20.fl < ctx->f24.fl;
    skip_2:
    // 0x800E0D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E0D7C: jal         0x800D952C
    // 0x800E0D80: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800D952C(rdram, ctx);
        goto after_0;
    // 0x800E0D80: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_0:
    // 0x800E0D84: b           L_800E0E60
    // 0x800E0D88: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_800E0E60;
    // 0x800E0D88: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800E0D8C: c.lt.s      $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f20.fl < ctx->f24.fl;
L_800E0D90:
    // 0x800E0D90: nop

    // 0x800E0D94: bc1fl       L_800E0E10
    if (!c1cs) {
        // 0x800E0D98: c.lt.s      $f24, $f20
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
            goto L_800E0E10;
    }
    goto skip_3;
    // 0x800E0D98: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    skip_3:
    // 0x800E0D9C: jal         0x800D952C
    // 0x800E0DA0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800D952C(rdram, ctx);
        goto after_1;
    // 0x800E0DA0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x800E0DA4: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x800E0DA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E0DAC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800E0DB0: bc1fl       L_800E0DD8
    if (!c1cs) {
        // 0x800E0DB4: neg.s       $f4, $f20
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
            goto L_800E0DD8;
    }
    goto skip_4;
    // 0x800E0DB4: neg.s       $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
    skip_4:
    // 0x800E0DB8: neg.s       $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = -ctx->f20.fl;
    // 0x800E0DBC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800E0DC0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x800E0DC4: jal         0x800D9AD4
    // 0x800E0DC8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800D9AD4(rdram, ctx);
        goto after_2;
    // 0x800E0DC8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x800E0DCC: b           L_800E0DEC
    // 0x800E0DD0: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
        goto L_800E0DEC;
    // 0x800E0DD0: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800E0DD4: neg.s       $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
L_800E0DD8:
    // 0x800E0DD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E0DDC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800E0DE0: jal         0x800D9888
    // 0x800E0DE4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800D9888(rdram, ctx);
        goto after_3;
    // 0x800E0DE4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x800E0DE8: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
L_800E0DEC:
    // 0x800E0DEC: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x800E0DF0: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800E0DF4: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x800E0DF8: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x800E0DFC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x800E0E00: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800E0E04: b           L_800E0E44
    // 0x800E0E08: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
        goto L_800E0E44;
    // 0x800E0E08: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x800E0E0C: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
L_800E0E10:
    // 0x800E0E10: nop

    // 0x800E0E14: bc1fl       L_800E0E48
    if (!c1cs) {
        // 0x800E0E18: lh          $t1, 0x4($s3)
        ctx->r9 = MEM_H(ctx->r19, 0X4);
            goto L_800E0E48;
    }
    goto skip_5;
    // 0x800E0E18: lh          $t1, 0x4($s3)
    ctx->r9 = MEM_H(ctx->r19, 0X4);
    skip_5:
    // 0x800E0E1C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800E0E20: jal         0x800EF334
    // 0x800E0E24: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800EF334(rdram, ctx);
        goto after_4;
    // 0x800E0E24: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x800E0E28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E0E2C: jal         0x800D952C
    // 0x800E0E30: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800D952C(rdram, ctx);
        goto after_5;
    // 0x800E0E30: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_5:
    // 0x800E0E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E0E38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E0E3C: jal         0x800D9470
    // 0x800E0E40: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800D9470(rdram, ctx);
        goto after_6;
    // 0x800E0E40: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
L_800E0E44:
    // 0x800E0E44: lh          $t1, 0x4($s3)
    ctx->r9 = MEM_H(ctx->r19, 0X4);
L_800E0E48:
    // 0x800E0E48: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800E0E4C: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x800E0E50: slt         $at, $s2, $t1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800E0E54: bnel        $at, $zero, L_800E0D28
    if (ctx->r1 != 0) {
        // 0x800E0E58: lw          $t8, 0x0($s3)
        ctx->r24 = MEM_W(ctx->r19, 0X0);
            goto L_800E0D28;
    }
    goto skip_6;
    // 0x800E0E58: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    skip_6:
L_800E0E5C:
    // 0x800E0E5C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_800E0E60:
    // 0x800E0E60: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800E0E64: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800E0E68: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x800E0E6C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0E70: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800E0E74: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800E0E78: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800E0E7C: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x800E0E80: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x800E0E84: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x800E0E88: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x800E0E8C: jr          $ra
    // 0x800E0E90: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x800E0E90: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_800E0E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0E94: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800E0E98: sw          $s0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r16;
    // 0x800E0E9C: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x800E0EA0: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x800E0EA4: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x800E0EA8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800E0EAC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800E0EB0: blez        $v1, L_800E0FD8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800E0EB4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800E0FD8;
    }
    // 0x800E0EB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E0EB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E0EBC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800E0EC0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E0EC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E0EC8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x800E0ECC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_800E0ED0:
    // 0x800E0ED0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800E0ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800E0ED8: addu        $a1, $t7, $a2
    ctx->r5 = ADD32(ctx->r15, ctx->r6);
    // 0x800E0EDC: lbu         $t8, 0x10($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X10);
    // 0x800E0EE0: bnel        $a3, $t8, L_800E0FD0
    if (ctx->r7 != ctx->r24) {
        // 0x800E0EE4: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800E0FD0;
    }
    goto skip_0;
    // 0x800E0EE4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_0:
    // 0x800E0EE8: lbu         $t9, 0x11($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X11);
    // 0x800E0EEC: bnel        $t0, $t9, L_800E0FD0
    if (ctx->r8 != ctx->r25) {
        // 0x800E0EF0: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800E0FD0;
    }
    goto skip_1;
    // 0x800E0EF0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_1:
    // 0x800E0EF4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800E0EF8: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x800E0EFC: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800E0F00: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800E0F04: nop

    // 0x800E0F08: bc1fl       L_800E0F68
    if (!c1cs) {
        // 0x800E0F0C: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_800E0F68;
    }
    goto skip_2;
    // 0x800E0F0C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_2:
    // 0x800E0F10: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800E0F14: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800E0F18: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x800E0F1C: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800E0F20: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x800E0F24: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800E0F28: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800E0F2C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x800E0F30: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x800E0F34: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800E0F38: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x800E0F3C: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800E0F40: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x800E0F44: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x800E0F48: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x800E0F4C: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800E0F50: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800E0F54: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x800E0F58: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x800E0F5C: b           L_800E0FCC
    // 0x800E0F60: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
        goto L_800E0FCC;
    // 0x800E0F60: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x800E0F64: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_800E0F68:
    // 0x800E0F68: nop

    // 0x800E0F6C: bc1fl       L_800E0FD0
    if (!c1cs) {
        // 0x800E0F70: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800E0FD0;
    }
    goto skip_3;
    // 0x800E0F70: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_3:
    // 0x800E0F74: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800E0F78: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800E0F7C: sub.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x800E0F80: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800E0F84: add.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f20.fl + ctx->f6.fl;
    // 0x800E0F88: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800E0F8C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800E0F90: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x800E0F94: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800E0F98: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x800E0F9C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800E0FA0: add.s       $f8, $f20, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x800E0FA4: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800E0FA8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800E0FAC: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x800E0FB0: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x800E0FB4: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x800E0FB8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800E0FBC: add.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f10.fl;
    // 0x800E0FC0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800E0FC4: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x800E0FC8: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
L_800E0FCC:
    // 0x800E0FCC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_800E0FD0:
    // 0x800E0FD0: bne         $at, $zero, L_800E0ED0
    if (ctx->r1 != 0) {
        // 0x800E0FD4: addiu       $a2, $a2, 0x14
        ctx->r6 = ADD32(ctx->r6, 0X14);
            goto L_800E0ED0;
    }
    // 0x800E0FD4: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
L_800E0FD8:
    // 0x800E0FD8: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    // 0x800E0FDC: lw          $s0, 0xC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC);
    // 0x800E0FE0: jr          $ra
    // 0x800E0FE4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800E0FE4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800E0FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0FE8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E0FEC: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x800E0FF0: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x800E0FF4: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x800E0FF8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800E0FFC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800E1000: blez        $v1, L_800E1108
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800E1004: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800E1108;
    }
    // 0x800E1004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E1008: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E100C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E1010: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x800E1014: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
L_800E1018:
    // 0x800E1018: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800E101C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800E1020: addu        $a1, $t7, $a2
    ctx->r5 = ADD32(ctx->r15, ctx->r6);
    // 0x800E1024: lbu         $t8, 0x10($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X10);
    // 0x800E1028: bnel        $a3, $t8, L_800E1100
    if (ctx->r7 != ctx->r24) {
        // 0x800E102C: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800E1100;
    }
    goto skip_0;
    // 0x800E102C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_0:
    // 0x800E1030: lbu         $t9, 0x11($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X11);
    // 0x800E1034: bnel        $t0, $t9, L_800E1100
    if (ctx->r8 != ctx->r25) {
        // 0x800E1038: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800E1100;
    }
    goto skip_1;
    // 0x800E1038: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_1:
    // 0x800E103C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800E1040: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x800E1044: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800E1048: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800E104C: nop

    // 0x800E1050: bc1fl       L_800E10B0
    if (!c1cs) {
        // 0x800E1054: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_800E10B0;
    }
    goto skip_2;
    // 0x800E1054: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_2:
    // 0x800E1058: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800E105C: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800E1060: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x800E1064: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800E1068: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x800E106C: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800E1070: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800E1074: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x800E1078: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x800E107C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800E1080: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x800E1084: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800E1088: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x800E108C: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x800E1090: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x800E1094: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800E1098: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800E109C: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x800E10A0: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x800E10A4: b           L_800E10FC
    // 0x800E10A8: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
        goto L_800E10FC;
    // 0x800E10A8: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x800E10AC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_800E10B0:
    // 0x800E10B0: nop

    // 0x800E10B4: bc1fl       L_800E1100
    if (!c1cs) {
        // 0x800E10B8: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800E1100;
    }
    goto skip_3;
    // 0x800E10B8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_3:
    // 0x800E10BC: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800E10C0: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800E10C4: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800E10C8: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800E10CC: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800E10D0: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x800E10D4: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800E10D8: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800E10DC: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800E10E0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800E10E4: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x800E10E8: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x800E10EC: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800E10F0: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800E10F4: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x800E10F8: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
L_800E10FC:
    // 0x800E10FC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_800E1100:
    // 0x800E1100: bne         $at, $zero, L_800E1018
    if (ctx->r1 != 0) {
        // 0x800E1104: addiu       $a2, $a2, 0x14
        ctx->r6 = ADD32(ctx->r6, 0X14);
            goto L_800E1018;
    }
    // 0x800E1104: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
L_800E1108:
    // 0x800E1108: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x800E110C: jr          $ra
    // 0x800E1110: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E1110: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800E1120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1120: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E1124: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800E1128: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800E112C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E1130: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800E1134: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x800E1138: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E113C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800E1140: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800E1144: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800E1148: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800E114C: jal         0x800EFA4C
    // 0x800E1150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800E1150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800E1154: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E1158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E115C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E1160: jal         0x800EF8BC
    // 0x800E1164: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    func_800EF8BC(rdram, ctx);
        goto after_1;
    // 0x800E1164: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    after_1:
    // 0x800E1168: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E116C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E1170: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E1174: jal         0x800EF934
    // 0x800E1178: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    func_800EF934(rdram, ctx);
        goto after_2;
    // 0x800E1178: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    after_2:
    // 0x800E117C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800E1180: jal         0x800EF04C
    // 0x800E1184: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x800E1184: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800E1188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E118C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E1190: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E1194: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E119C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E119C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E11A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800E11A4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800E11A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E11AC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800E11B0: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x800E11B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E11B8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800E11BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800E11C0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800E11C4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x800E11C8: jal         0x800EFA4C
    // 0x800E11CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800E11CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800E11D0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E11D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E11D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E11DC: jal         0x800EF8BC
    // 0x800E11E0: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    func_800EF8BC(rdram, ctx);
        goto after_1;
    // 0x800E11E0: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    after_1:
    // 0x800E11E4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E11E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E11EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E11F0: jal         0x800EF934
    // 0x800E11F4: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    func_800EF934(rdram, ctx);
        goto after_2;
    // 0x800E11F4: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    after_2:
    // 0x800E11F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800E11FC: jal         0x800EF04C
    // 0x800E1200: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x800E1200: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800E1204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E1208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E120C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E1210: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E1218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1218: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E121C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800E1220: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800E1224: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E1228: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800E122C: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x800E1230: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E1234: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800E1238: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800E123C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800E1240: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800E1244: jal         0x800EFA4C
    // 0x800E1248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800E1248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800E124C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E1250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E1254: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E1258: jal         0x800EF8BC
    // 0x800E125C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    func_800EF8BC(rdram, ctx);
        goto after_1;
    // 0x800E125C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    after_1:
    // 0x800E1260: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E1264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E1268: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E126C: jal         0x800EF934
    // 0x800E1270: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    func_800EF934(rdram, ctx);
        goto after_2;
    // 0x800E1270: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    after_2:
    // 0x800E1274: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800E1278: jal         0x800EF04C
    // 0x800E127C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x800E127C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800E1280: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E1284: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E1288: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E128C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E1294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E1298: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800E129C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800E12A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E12A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E12A8: beq         $a0, $zero, L_800E12F0
    if (ctx->r4 == 0) {
        // 0x800E12AC: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800E12F0;
    }
    // 0x800E12AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800E12B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E12B4: beq         $a0, $at, L_800E12DC
    if (ctx->r4 == ctx->r1) {
        // 0x800E12B8: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_800E12DC;
    }
    // 0x800E12B8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800E12BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E12C0: beq         $a0, $at, L_800E1308
    if (ctx->r4 == ctx->r1) {
        // 0x800E12C4: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_800E1308;
    }
    // 0x800E12C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800E12C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800E12CC: beql        $a0, $at, L_800E1320
    if (ctx->r4 == ctx->r1) {
        // 0x800E12D0: lwc1        $f4, 0x4($a3)
        ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
            goto L_800E1320;
    }
    goto skip_0;
    // 0x800E12D0: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    skip_0:
    // 0x800E12D4: b           L_800E132C
    // 0x800E12D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800E132C;
    // 0x800E12D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E12DC:
    // 0x800E12DC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800E12E0: jal         0x800E1218
    // 0x800E12E4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800E1218(rdram, ctx);
        goto after_0;
    // 0x800E12E4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x800E12E8: b           L_800E132C
    // 0x800E12EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800E132C;
    // 0x800E12EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E12F0:
    // 0x800E12F0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800E12F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800E12F8: jal         0x800E1120
    // 0x800E12FC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800E1120(rdram, ctx);
        goto after_1;
    // 0x800E12FC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800E1300: b           L_800E132C
    // 0x800E1304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800E132C;
    // 0x800E1304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E1308:
    // 0x800E1308: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800E130C: jal         0x800E119C
    // 0x800E1310: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800E119C(rdram, ctx);
        goto after_2;
    // 0x800E1310: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x800E1314: b           L_800E132C
    // 0x800E1318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800E132C;
    // 0x800E1318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E131C: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
L_800E1320:
    // 0x800E1320: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x800E1324: swc1        $f6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f6.u32l;
    // 0x800E1328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E132C:
    // 0x800E132C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E1330: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E1338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1338: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E133C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E1340: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E1344: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E1348: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800E134C: jr          $ra
    // 0x800E1350: lwc1        $f0, -0x3048($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3048);
    return;
    // 0x800E1350: lwc1        $f0, -0x3048($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3048);
;}
RECOMP_FUNC void func_800E1354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1354: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E1358: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E135C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E1360: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E1364: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800E1368: lbu         $v0, -0x2FFC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2FFC);
    // 0x800E136C: xori        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 ^ 0X1;
    // 0x800E1370: jr          $ra
    // 0x800E1374: sltu        $v0, $zero, $t7
    ctx->r2 = 0 < ctx->r15 ? 1 : 0;
    return;
    // 0x800E1374: sltu        $v0, $zero, $t7
    ctx->r2 = 0 < ctx->r15 ? 1 : 0;
;}
RECOMP_FUNC void func_800E1378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E137C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E1380: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E1384: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E1388: jal         0x800E13F0
    // 0x800E138C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_800E13F0(rdram, ctx);
        goto after_0;
    // 0x800E138C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x800E1390: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
    // 0x800E1394: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x800E1398: jal         0x800E144C
    // 0x800E139C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E144C(rdram, ctx);
        goto after_1;
    // 0x800E139C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800E13A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E13A4: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x800E13A8: jal         0x800E148C
    // 0x800E13AC: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    func_800E148C(rdram, ctx);
        goto after_2;
    // 0x800E13AC: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    after_2:
    // 0x800E13B0: jal         0x800EA068
    // 0x800E13B4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800EA068(rdram, ctx);
        goto after_3;
    // 0x800E13B4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_3:
    // 0x800E13B8: beq         $v0, $zero, L_800E13D4
    if (ctx->r2 == 0) {
        // 0x800E13BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800E13D4;
    }
    // 0x800E13BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E13C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E13C4: jal         0x800E146C
    // 0x800E13C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800E146C(rdram, ctx);
        goto after_4;
    // 0x800E13C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x800E13CC: b           L_800E13E0
    // 0x800E13D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800E13E0;
    // 0x800E13D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800E13D4:
    // 0x800E13D4: jal         0x800E146C
    // 0x800E13D8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_800E146C(rdram, ctx);
        goto after_5;
    // 0x800E13D8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_5:
    // 0x800E13DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800E13E0:
    // 0x800E13E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E13E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E13E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E13F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E13F0: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E13F4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E13F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E13FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E1400: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E1404: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800E1408: jr          $ra
    // 0x800E140C: swc1        $f12, -0x3048($at)
    MEM_W(-0X3048, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800E140C: swc1        $f12, -0x3048($at)
    MEM_W(-0X3048, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800E1410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1410: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E1414: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E1418: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800E141C: addiu       $t7, $t7, -0x3070
    ctx->r15 = ADD32(ctx->r15, -0X3070);
    // 0x800E1420: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E1424: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800E1428: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E142C: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x800E1430: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800E1434: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x800E1438: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x800E143C: swc1        $f14, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f14.u32l;
    // 0x800E1440: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x800E1444: jr          $ra
    // 0x800E1448: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x800E1448: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800E144C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E144C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E1450: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E1454: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E1458: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E145C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E1460: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800E1464: jr          $ra
    // 0x800E1468: swc1        $f12, -0x3054($at)
    MEM_W(-0X3054, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800E1468: swc1        $f12, -0x3054($at)
    MEM_W(-0X3054, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800E146C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E146C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E1470: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E1474: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E1478: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E147C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E1480: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800E1484: jr          $ra
    // 0x800E1488: swc1        $f12, -0x305C($at)
    MEM_W(-0X305C, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800E1488: swc1        $f12, -0x305C($at)
    MEM_W(-0X305C, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800E148C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E148C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E1490: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E1494: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800E1498: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E149C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800E14A0: addiu       $t7, $t7, -0x3070
    ctx->r15 = ADD32(ctx->r15, -0X3070);
    // 0x800E14A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E14A8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800E14AC: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x800E14B0: jr          $ra
    // 0x800E14B4: swc1        $f14, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f14.u32l;
    return;
    // 0x800E14B4: swc1        $f14, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800E14B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E14B8: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E14BC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E14C0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800E14C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E14C8: addiu       $t7, $t7, -0x3070
    ctx->r15 = ADD32(ctx->r15, -0X3070);
    // 0x800E14CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E14D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E14D4: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x800E14D8: jal         0x800EE7F8
    // 0x800E14DC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800E14DC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E14E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E14E4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800E14E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800E14EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E14F0: jr          $ra
    // 0x800E14F4: sb          $t8, 0x76($a0)
    MEM_B(0X76, ctx->r4) = ctx->r24;
    return;
    // 0x800E14F4: sb          $t8, 0x76($a0)
    MEM_B(0X76, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_800E14F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E14F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E14FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800E1500: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E1504: lh          $v1, 0x22($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X22);
    // 0x800E1508: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E150C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800E1510: addiu       $t7, $t7, -0x3070
    ctx->r15 = ADD32(ctx->r15, -0X3070);
    // 0x800E1514: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E1518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E151C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800E1520: addiu       $a0, $v0, 0x34
    ctx->r4 = ADD32(ctx->r2, 0X34);
    // 0x800E1524: sb          $v1, 0x78($v0)
    MEM_B(0X78, ctx->r2) = ctx->r3;
    // 0x800E1528: jal         0x8001BBA0
    // 0x800E152C: sll         $a2, $v1, 3
    ctx->r6 = S32(ctx->r3 << 3);
    rare_memcpy(rdram, ctx);
        goto after_0;
    // 0x800E152C: sll         $a2, $v1, 3
    ctx->r6 = S32(ctx->r3 << 3);
    after_0:
    // 0x800E1530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E1534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E1538: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E1540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E1544: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800E1548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E154C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E1550: addiu       $a1, $a1, -0x3070
    ctx->r5 = ADD32(ctx->r5, -0X3070);
    // 0x800E1554: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800E1558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800E155C:
    // 0x800E155C: lbu         $t6, 0x74($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X74);
    // 0x800E1560: beql        $v0, $t6, L_800E157C
    if (ctx->r2 == ctx->r14) {
        // 0x800E1564: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_800E157C;
    }
    goto skip_0;
    // 0x800E1564: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_0:
    // 0x800E1568: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800E156C: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x800E1570: bne         $at, $zero, L_800E155C
    if (ctx->r1 != 0) {
        // 0x800E1574: addiu       $a1, $a1, 0x7C
        ctx->r5 = ADD32(ctx->r5, 0X7C);
            goto L_800E155C;
    }
    // 0x800E1574: addiu       $a1, $a1, 0x7C
    ctx->r5 = ADD32(ctx->r5, 0X7C);
    // 0x800E1578: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_800E157C:
    // 0x800E157C: bne         $v1, $at, L_800E15A8
    if (ctx->r3 != ctx->r1) {
        // 0x800E1580: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800E15A8;
    }
    // 0x800E1580: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800E1584: jal         0x800DC128
    // 0x800E1588: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800DC128(rdram, ctx);
        goto after_0;
    // 0x800E1588: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x800E158C: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x800E1590: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x800E1594: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800E1598: addiu       $t8, $t8, -0x3070
    ctx->r24 = ADD32(ctx->r24, -0X3070);
    // 0x800E159C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E15A0: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x800E15A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800E15A8:
    // 0x800E15A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E15AC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800E15B0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800E15B4: sb          $t0, 0x74($a1)
    MEM_B(0X74, ctx->r5) = ctx->r8;
    // 0x800E15B8: sb          $zero, 0x77($a1)
    MEM_B(0X77, ctx->r5) = 0;
    // 0x800E15BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E15C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800E15C4: jr          $ra
    // 0x800E15C8: sb          $t9, 0x75($a1)
    MEM_B(0X75, ctx->r5) = ctx->r25;
    return;
    // 0x800E15C8: sb          $t9, 0x75($a1)
    MEM_B(0X75, ctx->r5) = ctx->r25;
;}
RECOMP_FUNC void func_800E15CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E15CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E15D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E15D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800E15D8: jal         0x800E1540
    // 0x800E15DC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800E1540(rdram, ctx);
        goto after_0;
    // 0x800E15DC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800E15E0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800E15E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E15E8: jal         0x800E13F0
    // 0x800E15EC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800E13F0(rdram, ctx);
        goto after_1;
    // 0x800E15EC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800E15F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800E15F4: jal         0x800E144C
    // 0x800E15F8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800E144C(rdram, ctx);
        goto after_2;
    // 0x800E15F8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800E15FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E1600: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800E1604: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E1608: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E1610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E1614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E1618: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800E161C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800E1620: jal         0x800E1540
    // 0x800E1624: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800E1540(rdram, ctx);
        goto after_0;
    // 0x800E1624: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800E1628: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800E162C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E1630: jal         0x800E13F0
    // 0x800E1634: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800E13F0(rdram, ctx);
        goto after_1;
    // 0x800E1634: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800E1638: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800E163C: jal         0x800E144C
    // 0x800E1640: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800E144C(rdram, ctx);
        goto after_2;
    // 0x800E1640: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800E1644: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800E1648: jal         0x800E14B8
    // 0x800E164C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800E14B8(rdram, ctx);
        goto after_3;
    // 0x800E164C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x800E1650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E1654: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800E1658: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E165C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E1664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1664: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E1668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E166C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800E1670: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800E1674: jal         0x800E1540
    // 0x800E1678: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800E1540(rdram, ctx);
        goto after_0;
    // 0x800E1678: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800E167C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800E1680: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E1684: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800E1688: jal         0x800E14F8
    // 0x800E168C: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    func_800E14F8(rdram, ctx);
        goto after_1;
    // 0x800E168C: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    after_1:
    // 0x800E1690: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800E1694: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800E1698: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E169C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E16A0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800E16A4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E16A8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x800E16AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E16B0: addiu       $t7, $t7, -0x3070
    ctx->r15 = ADD32(ctx->r15, -0X3070);
    // 0x800E16B4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800E16B8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800E16BC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x800E16C0: sb          $t8, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r24;
    // 0x800E16C4: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x800E16C8: swc1        $f0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f0.u32l;
    // 0x800E16CC: bc1f        L_800E16E4
    if (!c1cs) {
        // 0x800E16D0: swc1        $f4, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
            goto L_800E16E4;
    }
    // 0x800E16D0: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x800E16D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E16D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E16DC: b           L_800E16F4
    // 0x800E16E0: swc1        $f6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
        goto L_800E16F4;
    // 0x800E16E0: swc1        $f6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
L_800E16E4:
    // 0x800E16E4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800E16E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E16EC: nop

    // 0x800E16F0: swc1        $f8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f8.u32l;
L_800E16F4:
    // 0x800E16F4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800E16F8: beql        $a1, $zero, L_800E1710
    if (ctx->r5 == 0) {
        // 0x800E16FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E1710;
    }
    goto skip_0;
    // 0x800E16FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E1700: jal         0x800E14B8
    // 0x800E1704: nop

    func_800E14B8(rdram, ctx);
        goto after_2;
    // 0x800E1704: nop

    after_2:
    // 0x800E1708: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800E170C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E1710:
    // 0x800E1710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E1714: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800E1718: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E1720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1720: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x800E1724: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800E1728: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800E172C: addiu       $t7, $t7, -0x3070
    ctx->r15 = ADD32(ctx->r15, -0X3070);
    // 0x800E1730: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E1734: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800E1738: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800E173C: sb          $t8, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r24;
    // 0x800E1740: jr          $ra
    // 0x800E1744: sb          $zero, 0x76($v0)
    MEM_B(0X76, ctx->r2) = 0;
    return;
    // 0x800E1744: sb          $zero, 0x76($v0)
    MEM_B(0X76, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800E1748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1748: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E174C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E1750: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E1754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E1758: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800E175C: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
L_800E1760:
    // 0x800E1760: jal         0x800E1720
    // 0x800E1764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E1720(rdram, ctx);
        goto after_0;
    // 0x800E1764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800E1768: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800E176C: bne         $s0, $s1, L_800E1760
    if (ctx->r16 != ctx->r17) {
        // 0x800E1770: nop
    
            goto L_800E1760;
    }
    // 0x800E1770: nop

    // 0x800E1774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E1778: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E177C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E1780: jr          $ra
    // 0x800E1784: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800E1784: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800E1788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1788: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E178C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800E1790: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800E1794: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800E1798: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800E179C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800E17A0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800E17A4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800E17A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E17AC: addiu       $s0, $s0, -0x3070
    ctx->r16 = ADD32(ctx->r16, -0X3070);
    // 0x800E17B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800E17B4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800E17B8: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
L_800E17BC:
    // 0x800E17BC: sb          $s2, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r18;
    // 0x800E17C0: swc1        $f20, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f20.u32l;
    // 0x800E17C4: sb          $zero, 0x76($s0)
    MEM_B(0X76, ctx->r16) = 0;
    // 0x800E17C8: jal         0x800EFD24
    // 0x800E17CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x800E17CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800E17D0: jal         0x800E1378
    // 0x800E17D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E1378(rdram, ctx);
        goto after_1;
    // 0x800E17D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800E17D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800E17DC: bne         $s1, $s3, L_800E17BC
    if (ctx->r17 != ctx->r19) {
        // 0x800E17E0: addiu       $s0, $s0, 0x7C
        ctx->r16 = ADD32(ctx->r16, 0X7C);
            goto L_800E17BC;
    }
    // 0x800E17E0: addiu       $s0, $s0, 0x7C
    ctx->r16 = ADD32(ctx->r16, 0X7C);
    // 0x800E17E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E17E8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800E17EC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800E17F0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800E17F4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800E17F8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800E17FC: jr          $ra
    // 0x800E1800: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E1800: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800E1804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1804: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800E1808: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x800E180C: sw          $s7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r23;
    // 0x800E1810: sw          $s6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r22;
    // 0x800E1814: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x800E1818: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x800E181C: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x800E1820: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x800E1824: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x800E1828: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x800E182C: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x800E1830: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x800E1834: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x800E1838: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x800E183C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800E1840: jal         0x800D8FF8
    // 0x800E1844: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800E1844: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x800E1848: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800E184C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800E1850: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E1854: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x800E1858: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E185C: lwc1        $f26, 0x5D80($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X5D80);
    // 0x800E1860: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E1864: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800E1868: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800E186C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800E1870: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x800E1874: addiu       $s0, $s0, -0x3070
    ctx->r16 = ADD32(ctx->r16, -0X3070);
    // 0x800E1878: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800E187C: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x800E1880: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
    // 0x800E1884: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x800E1888: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x800E188C: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_800E1890:
    // 0x800E1890: lbu         $v0, 0x74($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X74);
    // 0x800E1894: beql        $v0, $s3, L_800E18B8
    if (ctx->r2 == ctx->r19) {
        // 0x800E1898: lwc1        $f4, 0x28($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
            goto L_800E18B8;
    }
    goto skip_0;
    // 0x800E1898: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    skip_0:
    // 0x800E189C: beql        $v0, $s4, L_800E18E4
    if (ctx->r2 == ctx->r20) {
        // 0x800E18A0: lwc1        $f0, 0x30($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
            goto L_800E18E4;
    }
    goto skip_1;
    // 0x800E18A0: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    skip_1:
    // 0x800E18A4: beql        $v0, $s5, L_800E19AC
    if (ctx->r2 == ctx->r21) {
        // 0x800E18A8: lwc1        $f0, 0x30($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
            goto L_800E19AC;
    }
    goto skip_2;
    // 0x800E18A8: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    skip_2:
    // 0x800E18AC: b           L_800E1A0C
    // 0x800E18B0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_800E1A0C;
    // 0x800E18B0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800E18B4: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
L_800E18B8:
    // 0x800E18B8: c.le.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl <= ctx->f4.fl;
    // 0x800E18BC: nop

    // 0x800E18C0: bc1fl       L_800E18D4
    if (!c1cs) {
        // 0x800E18C4: swc1        $f30, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->f30.u32l;
            goto L_800E18D4;
    }
    goto skip_3;
    // 0x800E18C4: swc1        $f30, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f30.u32l;
    skip_3:
    // 0x800E18C8: b           L_800E18D4
    // 0x800E18CC: swc1        $f28, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f28.u32l;
        goto L_800E18D4;
    // 0x800E18CC: swc1        $f28, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f28.u32l;
    // 0x800E18D0: swc1        $f30, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f30.u32l;
L_800E18D4:
    // 0x800E18D4: sb          $s7, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r23;
    // 0x800E18D8: b           L_800E1A08
    // 0x800E18DC: sb          $zero, 0x77($s0)
    MEM_B(0X77, ctx->r16) = 0;
        goto L_800E1A08;
    // 0x800E18DC: sb          $zero, 0x77($s0)
    MEM_B(0X77, ctx->r16) = 0;
    // 0x800E18E0: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
L_800E18E4:
    // 0x800E18E4: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x800E18E8: nop

    // 0x800E18EC: bc1tl       L_800E193C
    if (c1cs) {
        // 0x800E18F0: lbu         $v0, 0x77($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X77);
            goto L_800E193C;
    }
    goto skip_4;
    // 0x800E18F0: lbu         $v0, 0x77($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X77);
    skip_4:
    // 0x800E18F4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800E18F8: jal         0x800F0E00
    // 0x800E18FC: sub.s       $f14, $f0, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f22.fl;
    func_800F0E00(rdram, ctx);
        goto after_1;
    // 0x800E18FC: sub.s       $f14, $f0, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f22.fl;
    after_1:
    // 0x800E1900: lbu         $v0, 0x77($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X77);
    // 0x800E1904: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x800E1908: beql        $v0, $zero, L_800E1964
    if (ctx->r2 == 0) {
        // 0x800E190C: lwc1        $f6, 0x1C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_800E1964;
    }
    goto skip_5;
    // 0x800E190C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    skip_5:
    // 0x800E1910: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800E1914: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800E1918: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    // 0x800E191C: lwc1        $f14, 0x18($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800E1920: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x800E1924: jal         0x800F10B4
    // 0x800E1928: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x800E1928: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x800E192C: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x800E1930: b           L_800E1960
    // 0x800E1934: lbu         $v0, 0x77($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X77);
        goto L_800E1960;
    // 0x800E1934: lbu         $v0, 0x77($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X77);
    // 0x800E1938: lbu         $v0, 0x77($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X77);
L_800E193C:
    // 0x800E193C: beql        $v0, $zero, L_800E1964
    if (ctx->r2 == 0) {
        // 0x800E1940: lwc1        $f6, 0x1C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_800E1964;
    }
    goto skip_6;
    // 0x800E1940: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    skip_6:
    // 0x800E1944: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x800E1948: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x800E194C: lbu         $v0, 0x77($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X77);
    // 0x800E1950: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800E1954: nop

    // 0x800E1958: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800E195C: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
L_800E1960:
    // 0x800E1960: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
L_800E1964:
    // 0x800E1964: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x800E1968: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x800E196C: c.eq.s      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.fl == ctx->f6.fl;
    // 0x800E1970: sb          $t6, 0x77($s0)
    MEM_B(0X77, ctx->r16) = ctx->r14;
    // 0x800E1974: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x800E1978: bc1t        L_800E1A08
    if (c1cs) {
        // 0x800E197C: swc1        $f4, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
            goto L_800E1A08;
    }
    // 0x800E197C: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x800E1980: jal         0x800F2100
    // 0x800E1984: lwc1        $f12, 0x28($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X28);
    func_800F2100(rdram, ctx);
        goto after_3;
    // 0x800E1984: lwc1        $f12, 0x28($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X28);
    after_3:
    // 0x800E1988: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x800E198C: nop

    // 0x800E1990: bc1fl       L_800E1A0C
    if (!c1cs) {
        // 0x800E1994: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800E1A0C;
    }
    goto skip_7;
    // 0x800E1994: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_7:
    // 0x800E1998: jal         0x800E1720
    // 0x800E199C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800E1720(rdram, ctx);
        goto after_4;
    // 0x800E199C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x800E19A0: b           L_800E1A0C
    // 0x800E19A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_800E1A0C;
    // 0x800E19A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800E19A8: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
L_800E19AC:
    // 0x800E19AC: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800E19B0: addiu       $s1, $s0, 0x34
    ctx->r17 = ADD32(ctx->r16, 0X34);
    // 0x800E19B4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800E19B8: nop

    // 0x800E19BC: bc1f        L_800E1A00
    if (!c1cs) {
        // 0x800E19C0: nop
    
            goto L_800E1A00;
    }
    // 0x800E19C0: nop

    // 0x800E19C4: jal         0x800F13F0
    // 0x800E19C8: add.s       $f14, $f0, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f22.fl;
    func_800F13F0(rdram, ctx);
        goto after_5;
    // 0x800E19C8: add.s       $f14, $f0, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f22.fl;
    after_5:
    // 0x800E19CC: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800E19D0: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x800E19D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800E19D8: lbu         $a2, 0x78($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X78);
    // 0x800E19DC: jal         0x800F3780
    // 0x800E19E0: div.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    func_800F3780(rdram, ctx);
        goto after_6;
    // 0x800E19E0: div.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    after_6:
    // 0x800E19E4: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800E19E8: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x800E19EC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800E19F0: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x800E19F4: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x800E19F8: b           L_800E1A08
    // 0x800E19FC: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
        goto L_800E1A08;
    // 0x800E19FC: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
L_800E1A00:
    // 0x800E1A00: jal         0x800E1720
    // 0x800E1A04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800E1720(rdram, ctx);
        goto after_7;
    // 0x800E1A04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_7:
L_800E1A08:
    // 0x800E1A08: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800E1A0C:
    // 0x800E1A0C: bne         $s2, $s6, L_800E1890
    if (ctx->r18 != ctx->r22) {
        // 0x800E1A10: addiu       $s0, $s0, 0x7C
        ctx->r16 = ADD32(ctx->r16, 0X7C);
            goto L_800E1890;
    }
    // 0x800E1A10: addiu       $s0, $s0, 0x7C
    ctx->r16 = ADD32(ctx->r16, 0X7C);
    // 0x800E1A14: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x800E1A18: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800E1A1C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800E1A20: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x800E1A24: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x800E1A28: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x800E1A2C: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x800E1A30: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x800E1A34: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x800E1A38: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x800E1A3C: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x800E1A40: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x800E1A44: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x800E1A48: lw          $s6, 0x64($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X64);
    // 0x800E1A4C: lw          $s7, 0x68($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X68);
    // 0x800E1A50: jr          $ra
    // 0x800E1A54: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800E1A54: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800E1A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1A58: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800E1A5C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x800E1A60: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x800E1A64: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x800E1A68: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800E1A6C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800E1A70: addiu       $s3, $sp, 0x80
    ctx->r19 = ADD32(ctx->r29, 0X80);
    // 0x800E1A74: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x800E1A78: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x800E1A7C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x800E1A80: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x800E1A84: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x800E1A88: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x800E1A8C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x800E1A90: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x800E1A94: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x800E1A98: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x800E1A9C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x800E1AA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800E1AA4: jal         0x800EE7F8
    // 0x800E1AA8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800E1AA8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x800E1AAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E1AB0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800E1AB4: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x800E1AB8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800E1ABC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800E1AC0: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x800E1AC4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800E1AC8: addiu       $s5, $s5, -0x2B98
    ctx->r21 = ADD32(ctx->r21, -0X2B98);
    // 0x800E1ACC: addiu       $s0, $s0, -0x3070
    ctx->r16 = ADD32(ctx->r16, -0X3070);
    // 0x800E1AD0: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x800E1AD4: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x800E1AD8: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x800E1ADC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x800E1AE0: lbu         $t6, 0x74($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X74);
L_800E1AE4:
    // 0x800E1AE4: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x800E1AE8: beql        $s4, $t6, L_800E1BB4
    if (ctx->r20 == ctx->r14) {
        // 0x800E1AEC: addiu       $s0, $s0, 0x7C
        ctx->r16 = ADD32(ctx->r16, 0X7C);
            goto L_800E1BB4;
    }
    goto skip_0;
    // 0x800E1AEC: addiu       $s0, $s0, 0x7C
    ctx->r16 = ADD32(ctx->r16, 0X7C);
    skip_0:
    // 0x800E1AF0: lbu         $t7, 0x76($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X76);
    // 0x800E1AF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800E1AF8: beql        $t7, $zero, L_800E1B40
    if (ctx->r15 == 0) {
        // 0x800E1AFC: lbu         $v0, 0x74($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X74);
            goto L_800E1B40;
    }
    goto skip_1;
    // 0x800E1AFC: lbu         $v0, 0x74($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X74);
    skip_1:
    // 0x800E1B00: jal         0x800EEAD4
    // 0x800E1B04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_1;
    // 0x800E1B04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800E1B08: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x800E1B0C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800E1B10: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800E1B14: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x800E1B18: jal         0x800F10B4
    // 0x800E1B1C: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x800E1B1C: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_2:
    // 0x800E1B20: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800E1B24: jal         0x800F0E00
    // 0x800E1B28: lwc1        $f14, 0x14($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X14);
    func_800F0E00(rdram, ctx);
        goto after_3;
    // 0x800E1B28: lwc1        $f14, 0x14($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X14);
    after_3:
    // 0x800E1B2C: c.eq.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl == ctx->f26.fl;
    // 0x800E1B30: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800E1B34: bc1tl       L_800E1BB4
    if (c1cs) {
        // 0x800E1B38: addiu       $s0, $s0, 0x7C
        ctx->r16 = ADD32(ctx->r16, 0X7C);
            goto L_800E1BB4;
    }
    goto skip_2;
    // 0x800E1B38: addiu       $s0, $s0, 0x7C
    ctx->r16 = ADD32(ctx->r16, 0X7C);
    skip_2:
    // 0x800E1B3C: lbu         $v0, 0x74($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X74);
L_800E1B40:
    // 0x800E1B40: beql        $v0, $s6, L_800E1B64
    if (ctx->r2 == ctx->r22) {
        // 0x800E1B44: lwc1        $f4, 0x28($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
            goto L_800E1B64;
    }
    goto skip_3;
    // 0x800E1B44: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    skip_3:
    // 0x800E1B48: beql        $v0, $s7, L_800E1B8C
    if (ctx->r2 == ctx->r23) {
        // 0x800E1B4C: lwc1        $f8, 0x28($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
            goto L_800E1B8C;
    }
    goto skip_4;
    // 0x800E1B4C: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    skip_4:
    // 0x800E1B50: beql        $v0, $fp, L_800E1B8C
    if (ctx->r2 == ctx->r30) {
        // 0x800E1B54: lwc1        $f8, 0x28($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
            goto L_800E1B8C;
    }
    goto skip_5;
    // 0x800E1B54: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    skip_5:
    // 0x800E1B58: b           L_800E1BB4
    // 0x800E1B5C: addiu       $s0, $s0, 0x7C
    ctx->r16 = ADD32(ctx->r16, 0X7C);
        goto L_800E1BB4;
    // 0x800E1B5C: addiu       $s0, $s0, 0x7C
    ctx->r16 = ADD32(ctx->r16, 0X7C);
    // 0x800E1B60: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
L_800E1B64:
    // 0x800E1B64: lbu         $a0, 0x75($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X75);
    // 0x800E1B68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800E1B6C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800E1B70: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800E1B74: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800E1B78: jal         0x800E1294
    // 0x800E1B7C: nop

    func_800E1294(rdram, ctx);
        goto after_4;
    // 0x800E1B7C: nop

    after_4:
    // 0x800E1B80: b           L_800E1BB4
    // 0x800E1B84: addiu       $s0, $s0, 0x7C
    ctx->r16 = ADD32(ctx->r16, 0X7C);
        goto L_800E1BB4;
    // 0x800E1B84: addiu       $s0, $s0, 0x7C
    ctx->r16 = ADD32(ctx->r16, 0X7C);
    // 0x800E1B88: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
L_800E1B8C:
    // 0x800E1B8C: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x800E1B90: lbu         $a0, 0x75($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X75);
    // 0x800E1B94: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800E1B98: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800E1B9C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800E1BA0: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x800E1BA4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x800E1BA8: jal         0x800E1294
    // 0x800E1BAC: nop

    func_800E1294(rdram, ctx);
        goto after_5;
    // 0x800E1BAC: nop

    after_5:
    // 0x800E1BB0: addiu       $s0, $s0, 0x7C
    ctx->r16 = ADD32(ctx->r16, 0X7C);
L_800E1BB4:
    // 0x800E1BB4: bnel        $s0, $s5, L_800E1AE4
    if (ctx->r16 != ctx->r21) {
        // 0x800E1BB8: lbu         $t6, 0x74($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X74);
            goto L_800E1AE4;
    }
    goto skip_6;
    // 0x800E1BB8: lbu         $t6, 0x74($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X74);
    skip_6:
    // 0x800E1BBC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x800E1BC0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x800E1BC4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x800E1BC8: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x800E1BCC: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x800E1BD0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x800E1BD4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x800E1BD8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x800E1BDC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x800E1BE0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x800E1BE4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x800E1BE8: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x800E1BEC: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x800E1BF0: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x800E1BF4: jr          $ra
    // 0x800E1BF8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x800E1BF8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_800E1C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1C00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E1C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E1C08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800E1C0C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800E1C10: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800E1C14: jal         0x800E42C0
    // 0x800E1C18: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800E42C0(rdram, ctx);
        goto after_0;
    // 0x800E1C18: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x800E1C1C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E1C20: addiu       $v1, $v1, -0x2B90
    ctx->r3 = ADD32(ctx->r3, -0X2B90);
    // 0x800E1C24: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    // 0x800E1C28: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1C2C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800E1C30: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800E1C34: nop

    // 0x800E1C38: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E1C3C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800E1C40: jal         0x800E3928
    // 0x800E1C44: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_800E3928(rdram, ctx);
        goto after_1;
    // 0x800E1C44: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x800E1C48: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800E1C4C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1C50: jal         0x800EE7F8
    // 0x800E1C54: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800E1C54: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x800E1C58: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E1C5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E1C60: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E1C64: addiu       $v1, $v1, -0x2B90
    ctx->r3 = ADD32(ctx->r3, -0X2B90);
    // 0x800E1C68: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x800E1C6C: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800E1C70: bc1t        L_800E1C88
    if (c1cs) {
        // 0x800E1C74: nop
    
            goto L_800E1C88;
    }
    // 0x800E1C74: nop

    // 0x800E1C78: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x800E1C7C: nop

    // 0x800E1C80: bc1fl       L_800E1C94
    if (!c1cs) {
        // 0x800E1C84: lbu         $t7, 0x21($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X21);
            goto L_800E1C94;
    }
    goto skip_0;
    // 0x800E1C84: lbu         $t7, 0x21($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X21);
    skip_0:
L_800E1C88:
    // 0x800E1C88: b           L_800E1DE4
    // 0x800E1C8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E1DE4;
    // 0x800E1C8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E1C90: lbu         $t7, 0x21($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X21);
L_800E1C94:
    // 0x800E1C94: bnel        $t7, $zero, L_800E1D34
    if (ctx->r15 != 0) {
        // 0x800E1C98: lw          $t1, 0x80($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X80);
            goto L_800E1D34;
    }
    goto skip_1;
    // 0x800E1C98: lw          $t1, 0x80($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X80);
    skip_1:
    // 0x800E1C9C: lw          $t8, 0x24($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X24);
    // 0x800E1CA0: addiu       $at, $zero, 0x4E20
    ctx->r1 = ADD32(0, 0X4E20);
    // 0x800E1CA4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x800E1CA8: bnel        $t8, $at, L_800E1D34
    if (ctx->r24 != ctx->r1) {
        // 0x800E1CAC: lw          $t1, 0x80($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X80);
            goto L_800E1D34;
    }
    goto skip_2;
    // 0x800E1CAC: lw          $t1, 0x80($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X80);
    skip_2:
    // 0x800E1CB0: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x800E1CB4: lh          $t0, 0x6($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X6);
    // 0x800E1CB8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800E1CBC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800E1CC0: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800E1CC4: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800E1CC8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E1CCC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E1CD0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E1CD4: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800E1CD8: nop

    // 0x800E1CDC: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800E1CE0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800E1CE4: nop

    // 0x800E1CE8: bc1f        L_800E1CF4
    if (!c1cs) {
        // 0x800E1CEC: nop
    
            goto L_800E1CF4;
    }
    // 0x800E1CEC: nop

    // 0x800E1CF0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800E1CF4:
    // 0x800E1CF4: lwc1        $f16, 0x5D90($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5D90);
    // 0x800E1CF8: mul.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x800E1CFC: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x800E1D00: nop

    // 0x800E1D04: bc1fl       L_800E1D34
    if (!c1cs) {
        // 0x800E1D08: lw          $t1, 0x80($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X80);
            goto L_800E1D34;
    }
    goto skip_3;
    // 0x800E1D08: lw          $t1, 0x80($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X80);
    skip_3:
    // 0x800E1D0C: div.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
    // 0x800E1D10: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E1D14: lwc1        $f6, 0x5D94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5D94);
    // 0x800E1D18: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800E1D1C: nop

    // 0x800E1D20: bc1fl       L_800E1D34
    if (!c1cs) {
        // 0x800E1D24: lw          $t1, 0x80($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X80);
            goto L_800E1D34;
    }
    goto skip_4;
    // 0x800E1D24: lw          $t1, 0x80($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X80);
    skip_4:
    // 0x800E1D28: b           L_800E1DE4
    // 0x800E1D2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E1DE4;
    // 0x800E1D2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E1D30: lw          $t1, 0x80($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X80);
L_800E1D34:
    // 0x800E1D34: bnel        $t1, $zero, L_800E1D68
    if (ctx->r9 != 0) {
        // 0x800E1D38: lbu         $t2, 0x22($v1)
        ctx->r10 = MEM_BU(ctx->r3, 0X22);
            goto L_800E1D68;
    }
    goto skip_5;
    // 0x800E1D38: lbu         $t2, 0x22($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X22);
    skip_5:
    // 0x800E1D3C: lw          $v0, 0x78($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X78);
    // 0x800E1D40: beql        $v0, $zero, L_800E1D68
    if (ctx->r2 == 0) {
        // 0x800E1D44: lbu         $t2, 0x22($v1)
        ctx->r10 = MEM_BU(ctx->r3, 0X22);
            goto L_800E1D68;
    }
    goto skip_6;
    // 0x800E1D44: lbu         $t2, 0x22($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X22);
    skip_6:
    // 0x800E1D48: lw          $a0, 0x7C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X7C);
    // 0x800E1D4C: jalr        $v0
    // 0x800E1D50: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x800E1D50: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x800E1D54: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E1D58: addiu       $v1, $v1, -0x2B90
    ctx->r3 = ADD32(ctx->r3, -0X2B90);
    // 0x800E1D5C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E1D60: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800E1D64: lbu         $t2, 0x22($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X22);
L_800E1D68:
    // 0x800E1D68: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800E1D6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800E1D70: beq         $t2, $zero, L_800E1DE4
    if (ctx->r10 == 0) {
        // 0x800E1D74: nop
    
            goto L_800E1DE4;
    }
    // 0x800E1D74: nop

    // 0x800E1D78: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800E1D7C: nop

    // 0x800E1D80: sub.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x800E1D84: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800E1D88: nop

    // 0x800E1D8C: bc1f        L_800E1DE4
    if (!c1cs) {
        // 0x800E1D90: nop
    
            goto L_800E1DE4;
    }
    // 0x800E1D90: nop

    // 0x800E1D94: sub.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800E1D98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E1D9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E1DA0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800E1DA4: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800E1DA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E1DAC: lh          $t5, 0x1C($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X1C);
    // 0x800E1DB0: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800E1DB4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800E1DB8: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800E1DBC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800E1DC0: nop

    // 0x800E1DC4: multu       $t5, $t4
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800E1DC8: mflo        $t6
    ctx->r14 = lo;
    // 0x800E1DCC: bgez        $t6, L_800E1DDC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800E1DD0: sra         $t7, $t6, 8
        ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
            goto L_800E1DDC;
    }
    // 0x800E1DD0: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800E1DD4: addiu       $at, $t6, 0xFF
    ctx->r1 = ADD32(ctx->r14, 0XFF);
    // 0x800E1DD8: sra         $t7, $at, 8
    ctx->r15 = S32(SIGNED(ctx->r1) >> 8);
L_800E1DDC:
    // 0x800E1DDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E1DE0: sh          $t7, -0x2B74($at)
    MEM_H(-0X2B74, ctx->r1) = ctx->r15;
L_800E1DE4:
    // 0x800E1DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E1DE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E1DEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E1DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1DF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800E1DF8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E1DFC: lui         $t7, 0x12
    ctx->r15 = S32(0X12 << 16);
    // 0x800E1E00: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E1E04: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1E08: addiu       $t7, $t7, 0x31B0
    ctx->r15 = ADD32(ctx->r15, 0X31B0);
    // 0x800E1E0C: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x800E1E10: addiu       $v1, $v1, -0x2B90
    ctx->r3 = ADD32(ctx->r3, -0X2B90);
    // 0x800E1E14: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800E1E18: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x800E1E1C: lbu         $t8, 0x1F($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X1F);
    // 0x800E1E20: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800E1E24: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1E28: bne         $t8, $zero, L_800E1E48
    if (ctx->r24 != 0) {
        // 0x800E1E2C: lui         $t1, 0xFA00
        ctx->r9 = S32(0XFA00 << 16);
            goto L_800E1E48;
    }
    // 0x800E1E2C: lui         $t1, 0xFA00
    ctx->r9 = S32(0XFA00 << 16);
    // 0x800E1E30: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x800E1E34: ori         $t9, $t9, 0x1801
    ctx->r25 = ctx->r25 | 0X1801;
    // 0x800E1E38: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x800E1E3C: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x800E1E40: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800E1E44: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800E1E48:
    // 0x800E1E48: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1E4C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x800E1E50: lw          $t2, 0x18($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X18);
    // 0x800E1E54: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x800E1E58: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x800E1E5C: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x800E1E60: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x800E1E64: lh          $t3, 0x1C($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X1C);
    // 0x800E1E68: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x800E1E6C: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x800E1E70: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800E1E74: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x800E1E78: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x800E1E7C: andi        $t5, $t3, 0xFF
    ctx->r13 = ctx->r11 & 0XFF;
    // 0x800E1E80: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x800E1E84: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800E1E88: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x800E1E8C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800E1E90: lui         $t4, 0xFB00
    ctx->r12 = S32(0XFB00 << 16);
    // 0x800E1E94: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x800E1E98: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x800E1E9C: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x800E1EA0: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x800E1EA4: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x800E1EA8: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x800E1EAC: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x800E1EB0: sll         $t3, $t1, 24
    ctx->r11 = S32(ctx->r9 << 24);
    // 0x800E1EB4: or          $t2, $t0, $t3
    ctx->r10 = ctx->r8 | ctx->r11;
    // 0x800E1EB8: sll         $t4, $t6, 16
    ctx->r12 = S32(ctx->r14 << 16);
    // 0x800E1EBC: or          $t7, $t2, $t4
    ctx->r15 = ctx->r10 | ctx->r12;
    // 0x800E1EC0: ori         $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 | 0XFF;
    // 0x800E1EC4: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x800E1EC8: lbu         $a3, 0x1E($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X1E);
    // 0x800E1ECC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800E1ED0: blez        $a3, L_800E1FBC
    if (SIGNED(ctx->r7) <= 0) {
        // 0x800E1ED4: slti        $at, $a3, 0x5
        ctx->r1 = SIGNED(ctx->r7) < 0X5 ? 1 : 0;
            goto L_800E1FBC;
    }
    // 0x800E1ED4: slti        $at, $a3, 0x5
    ctx->r1 = SIGNED(ctx->r7) < 0X5 ? 1 : 0;
    // 0x800E1ED8: beq         $at, $zero, L_800E1FBC
    if (ctx->r1 == 0) {
        // 0x800E1EDC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800E1FBC;
    }
    // 0x800E1EDC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1EE0: lui         $t8, 0xD9FF
    ctx->r24 = S32(0XD9FF << 16);
    // 0x800E1EE4: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x800E1EE8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800E1EEC: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x800E1EF0: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x800E1EF4: lbu         $a2, 0x1E($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X1E);
    // 0x800E1EF8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800E1EFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E1F00: beq         $a2, $at, L_800E1F34
    if (ctx->r6 == ctx->r1) {
        // 0x800E1F04: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800E1F34;
    }
    // 0x800E1F04: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1F08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E1F0C: beq         $a2, $at, L_800E1F54
    if (ctx->r6 == ctx->r1) {
        // 0x800E1F10: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800E1F54;
    }
    // 0x800E1F10: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1F14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800E1F18: beq         $a2, $at, L_800E1F74
    if (ctx->r6 == ctx->r1) {
        // 0x800E1F1C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800E1F74;
    }
    // 0x800E1F1C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1F20: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800E1F24: beq         $a2, $at, L_800E1F9C
    if (ctx->r6 == ctx->r1) {
        // 0x800E1F28: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800E1F9C;
    }
    // 0x800E1F28: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1F2C: b           L_800E200C
    // 0x800E1F30: lbu         $t6, 0x20($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X20);
        goto L_800E200C;
    // 0x800E1F30: lbu         $t6, 0x20($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X20);
L_800E1F34:
    // 0x800E1F34: lui         $t0, 0xE200
    ctx->r8 = S32(0XE200 << 16);
    // 0x800E1F38: lui         $t3, 0x50
    ctx->r11 = S32(0X50 << 16);
    // 0x800E1F3C: ori         $t3, $t3, 0x4A50
    ctx->r11 = ctx->r11 | 0X4A50;
    // 0x800E1F40: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x800E1F44: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x800E1F48: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x800E1F4C: b           L_800E2008
    // 0x800E1F50: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_800E2008;
    // 0x800E1F50: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800E1F54:
    // 0x800E1F54: lui         $t5, 0xE200
    ctx->r13 = S32(0XE200 << 16);
    // 0x800E1F58: lui         $t6, 0x50
    ctx->r14 = S32(0X50 << 16);
    // 0x800E1F5C: ori         $t6, $t6, 0x4250
    ctx->r14 = ctx->r14 | 0X4250;
    // 0x800E1F60: ori         $t5, $t5, 0x1C
    ctx->r13 = ctx->r13 | 0X1C;
    // 0x800E1F64: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x800E1F68: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x800E1F6C: b           L_800E2008
    // 0x800E1F70: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_800E2008;
    // 0x800E1F70: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800E1F74:
    // 0x800E1F74: lui         $t2, 0xE200
    ctx->r10 = S32(0XE200 << 16);
    // 0x800E1F78: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x800E1F7C: ori         $t4, $t4, 0x4A70
    ctx->r12 = ctx->r12 | 0X4A70;
    // 0x800E1F80: ori         $t2, $t2, 0x1C
    ctx->r10 = ctx->r10 | 0X1C;
    // 0x800E1F84: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x800E1F88: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x800E1F8C: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x800E1F90: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800E1F94: b           L_800E2008
    // 0x800E1F98: sb          $t7, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r15;
        goto L_800E2008;
    // 0x800E1F98: sb          $t7, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r15;
L_800E1F9C:
    // 0x800E1F9C: lui         $t9, 0xE200
    ctx->r25 = S32(0XE200 << 16);
    // 0x800E1FA0: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x800E1FA4: ori         $t8, $t8, 0x4B70
    ctx->r24 = ctx->r24 | 0X4B70;
    // 0x800E1FA8: ori         $t9, $t9, 0x1C
    ctx->r25 = ctx->r25 | 0X1C;
    // 0x800E1FAC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800E1FB0: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x800E1FB4: b           L_800E2008
    // 0x800E1FB8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_800E2008;
    // 0x800E1FB8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800E1FBC:
    // 0x800E1FBC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800E1FC0: bne         $a3, $at, L_800E1FEC
    if (ctx->r7 != ctx->r1) {
        // 0x800E1FC4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800E1FEC;
    }
    // 0x800E1FC4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1FC8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E1FCC: lui         $t1, 0xE200
    ctx->r9 = S32(0XE200 << 16);
    // 0x800E1FD0: lui         $t0, 0x50
    ctx->r8 = S32(0X50 << 16);
    // 0x800E1FD4: ori         $t0, $t0, 0x4340
    ctx->r8 = ctx->r8 | 0X4340;
    // 0x800E1FD8: ori         $t1, $t1, 0x1C
    ctx->r9 = ctx->r9 | 0X1C;
    // 0x800E1FDC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x800E1FE0: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x800E1FE4: b           L_800E2008
    // 0x800E1FE8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_800E2008;
    // 0x800E1FE8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800E1FEC:
    // 0x800E1FEC: lui         $t3, 0xE200
    ctx->r11 = S32(0XE200 << 16);
    // 0x800E1FF0: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x800E1FF4: ori         $t5, $t5, 0x4240
    ctx->r13 = ctx->r13 | 0X4240;
    // 0x800E1FF8: ori         $t3, $t3, 0x1C
    ctx->r11 = ctx->r11 | 0X1C;
    // 0x800E1FFC: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x800E2000: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x800E2004: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800E2008:
    // 0x800E2008: lbu         $t6, 0x20($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X20);
L_800E200C:
    // 0x800E200C: lui         $t2, 0xE200
    ctx->r10 = S32(0XE200 << 16);
    // 0x800E2010: ori         $t2, $t2, 0x1E01
    ctx->r10 = ctx->r10 | 0X1E01;
    // 0x800E2014: beq         $t6, $zero, L_800E2044
    if (ctx->r14 == 0) {
        // 0x800E2018: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800E2044;
    }
    // 0x800E2018: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E201C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800E2020: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800E2024: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x800E2028: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x800E202C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800E2030: lui         $t7, 0xF900
    ctx->r15 = S32(0XF900 << 16);
    // 0x800E2034: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x800E2038: lbu         $t8, 0x20($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X20);
    // 0x800E203C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800E2040: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
L_800E2044:
    // 0x800E2044: jr          $ra
    // 0x800E2048: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x800E2048: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_800E204C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E204C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E2050: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E2054: addiu       $v1, $v1, -0x2B90
    ctx->r3 = ADD32(ctx->r3, -0X2B90);
    // 0x800E2058: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E205C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E2060: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800E2064: lh          $t1, 0x4($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X4);
    // 0x800E2068: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    // 0x800E206C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E2070: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E2074: beql        $t0, $t1, L_800E2088
    if (ctx->r8 == ctx->r9) {
        // 0x800E2078: lh          $v0, 0x2($v1)
        ctx->r2 = MEM_H(ctx->r3, 0X2);
            goto L_800E2088;
    }
    goto skip_0;
    // 0x800E2078: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    skip_0:
    // 0x800E207C: bnel        $t0, $zero, L_800E20D0
    if (ctx->r8 != 0) {
        // 0x800E2080: mtc1        $t0, $f10
        ctx->f10.u32l = ctx->r8;
            goto L_800E20D0;
    }
    goto skip_1;
    // 0x800E2080: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    skip_1:
    // 0x800E2084: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
L_800E2088:
    // 0x800E2088: lh          $t8, 0x6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X6);
    // 0x800E208C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E2090: beql        $v0, $t8, L_800E20A4
    if (ctx->r2 == ctx->r24) {
        // 0x800E2094: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_800E20A4;
    }
    goto skip_2;
    // 0x800E2094: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_2:
    // 0x800E2098: bnel        $v0, $zero, L_800E20D0
    if (ctx->r2 != 0) {
        // 0x800E209C: mtc1        $t0, $f10
        ctx->f10.u32l = ctx->r8;
            goto L_800E20D0;
    }
    goto skip_3;
    // 0x800E209C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    skip_3:
    // 0x800E20A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_800E20A4:
    // 0x800E20A4: lwc1        $f4, 0x2C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x800E20A8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800E20AC: nop

    // 0x800E20B0: bc1fl       L_800E20D0
    if (!c1cs) {
        // 0x800E20B4: mtc1        $t0, $f10
        ctx->f10.u32l = ctx->r8;
            goto L_800E20D0;
    }
    goto skip_4;
    // 0x800E20B4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    skip_4:
    // 0x800E20B8: lwc1        $f6, 0x30($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X30);
    // 0x800E20BC: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x800E20C0: nop

    // 0x800E20C4: bc1tl       L_800E2170
    if (c1cs) {
        // 0x800E20C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800E2170;
    }
    goto skip_5;
    // 0x800E20C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x800E20CC: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
L_800E20D0:
    // 0x800E20D0: lwc1        $f8, 0x2C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x800E20D4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800E20D8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800E20DC: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x800E20E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E20E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E20E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E20EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E20F0: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800E20F4: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800E20F8: lh          $t3, 0x6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X6);
    // 0x800E20FC: lwc1        $f8, 0x30($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X30);
    // 0x800E2100: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E2104: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800E2108: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E210C: addiu       $a0, $a0, -0x2B58
    ctx->r4 = ADD32(ctx->r4, -0X2B58);
    // 0x800E2110: div.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x800E2114: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800E2118: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800E211C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800E2120: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E2124: div.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x800E2128: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800E212C: jal         0x800F26B0
    // 0x800E2130: nop

    func_800F26B0(rdram, ctx);
        goto after_0;
    // 0x800E2130: nop

    after_0:
    // 0x800E2134: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E2138: addiu       $a0, $a0, -0x2B58
    ctx->r4 = ADD32(ctx->r4, -0X2B58);
    // 0x800E213C: jal         0x8002ED00
    // 0x800E2140: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    func_8002ED00(rdram, ctx);
        goto after_1;
    // 0x800E2140: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    after_1:
    // 0x800E2144: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E2148: lui         $t5, 0xDA38
    ctx->r13 = S32(0XDA38 << 16);
    // 0x800E214C: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x800E2150: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x800E2154: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800E2158: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x800E215C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800E2160: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x800E2164: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x800E2168: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x800E216C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800E2170:
    // 0x800E2170: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E2174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E2178: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E2180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2180: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E2184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E2188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E218C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800E2190: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800E2194: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E2198: lui         $t7, 0xDB06
    ctx->r15 = S32(0XDB06 << 16);
    // 0x800E219C: ori         $t7, $t7, 0x8
    ctx->r15 = ctx->r15 | 0X8;
    // 0x800E21A0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E21A4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E21A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E21AC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E21B0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800E21B4: jal         0x800AF5D8
    // 0x800E21B8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_800AF5D8(rdram, ctx);
        goto after_0;
    // 0x800E21B8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x800E21BC: jal         0x8002E330
    // 0x800E21C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x800E21C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800E21C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E21C8: lui         $t0, 0xDB06
    ctx->r8 = S32(0XDB06 << 16);
    // 0x800E21CC: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x800E21D0: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x800E21D4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E21D8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800E21DC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800E21E0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800E21E4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800E21E8: jal         0x800AF5E4
    // 0x800E21EC: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_800AF5E4(rdram, ctx);
        goto after_2;
    // 0x800E21EC: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x800E21F0: jal         0x8002E330
    // 0x800E21F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x800E21F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800E21F8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800E21FC: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x800E2200: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800E2204: jal         0x800AF5FC
    // 0x800E2208: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_800AF5FC(rdram, ctx);
        goto after_4;
    // 0x800E2208: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_4:
    // 0x800E220C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800E2210: jal         0x800AF5F0
    // 0x800E2214: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_800AF5F0(rdram, ctx);
        goto after_5;
    // 0x800E2214: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_5:
    // 0x800E2218: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E221C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E2220: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x800E2224: lh          $t3, 0x4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X4);
    // 0x800E2228: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x800E222C: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x800E2230: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800E2234: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x800E2238: addu        $a0, $v0, $t4
    ctx->r4 = ADD32(ctx->r2, ctx->r12);
    // 0x800E223C: jal         0x8002E330
    // 0x800E2240: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_6;
    // 0x800E2240: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_6:
    // 0x800E2244: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800E2248: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x800E224C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E2250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E2254: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800E2258: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E2260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2260: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E2264: addiu       $v1, $v1, -0x2B90
    ctx->r3 = ADD32(ctx->r3, -0X2B90);
    // 0x800E2268: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x800E226C: lh          $t6, 0x4($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X4);
    // 0x800E2270: beql        $v0, $t6, L_800E2284
    if (ctx->r2 == ctx->r14) {
        // 0x800E2274: lh          $v0, 0x2($v1)
        ctx->r2 = MEM_H(ctx->r3, 0X2);
            goto L_800E2284;
    }
    goto skip_0;
    // 0x800E2274: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    skip_0:
    // 0x800E2278: bnel        $v0, $zero, L_800E22CC
    if (ctx->r2 != 0) {
        // 0x800E227C: lw          $v1, 0x0($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X0);
            goto L_800E22CC;
    }
    goto skip_1;
    // 0x800E227C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    skip_1:
    // 0x800E2280: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
L_800E2284:
    // 0x800E2284: lh          $t7, 0x6($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X6);
    // 0x800E2288: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E228C: beql        $v0, $t7, L_800E22A0
    if (ctx->r2 == ctx->r15) {
        // 0x800E2290: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_800E22A0;
    }
    goto skip_2;
    // 0x800E2290: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_2:
    // 0x800E2294: bnel        $v0, $zero, L_800E22CC
    if (ctx->r2 != 0) {
        // 0x800E2298: lw          $v1, 0x0($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X0);
            goto L_800E22CC;
    }
    goto skip_3;
    // 0x800E2298: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    skip_3:
    // 0x800E229C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_800E22A0:
    // 0x800E22A0: lwc1        $f4, 0x2C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x800E22A4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800E22A8: nop

    // 0x800E22AC: bc1fl       L_800E22CC
    if (!c1cs) {
        // 0x800E22B0: lw          $v1, 0x0($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X0);
            goto L_800E22CC;
    }
    goto skip_4;
    // 0x800E22B0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    skip_4:
    // 0x800E22B4: lwc1        $f6, 0x30($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X30);
    // 0x800E22B8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x800E22BC: nop

    // 0x800E22C0: bc1t        L_800E22E8
    if (c1cs) {
        // 0x800E22C4: nop
    
            goto L_800E22E8;
    }
    // 0x800E22C4: nop

    // 0x800E22C8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
L_800E22CC:
    // 0x800E22CC: lui         $t9, 0xD838
    ctx->r25 = S32(0XD838 << 16);
    // 0x800E22D0: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x800E22D4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x800E22D8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800E22DC: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x800E22E0: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x800E22E4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_800E22E8:
    // 0x800E22E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E22F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E22F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E22F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E22F8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800E22FC: addiu       $a1, $a1, -0x2B90
    ctx->r5 = ADD32(ctx->r5, -0X2B90);
    // 0x800E2300: lbu         $t6, 0x1F($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1F);
    // 0x800E2304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E2308: beql        $t6, $zero, L_800E2320
    if (ctx->r14 == 0) {
        // 0x800E230C: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_800E2320;
    }
    goto skip_0;
    // 0x800E230C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800E2310: lbu         $t7, 0x20($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X20);
    // 0x800E2314: beq         $t7, $zero, L_800E2384
    if (ctx->r15 == 0) {
        // 0x800E2318: nop
    
            goto L_800E2384;
    }
    // 0x800E2318: nop

    // 0x800E231C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_800E2320:
    // 0x800E2320: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x800E2324: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800E2328: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800E232C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800E2330: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800E2334: lbu         $t0, 0x1F($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X1F);
    // 0x800E2338: bnel        $t0, $zero, L_800E2360
    if (ctx->r8 != 0) {
        // 0x800E233C: lbu         $t3, 0x20($a1)
        ctx->r11 = MEM_BU(ctx->r5, 0X20);
            goto L_800E2360;
    }
    goto skip_1;
    // 0x800E233C: lbu         $t3, 0x20($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X20);
    skip_1:
    // 0x800E2340: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E2344: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x800E2348: ori         $t2, $t2, 0x1801
    ctx->r10 = ctx->r10 | 0X1801;
    // 0x800E234C: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x800E2350: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x800E2354: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800E2358: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x800E235C: lbu         $t3, 0x20($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X20);
L_800E2360:
    // 0x800E2360: beq         $t3, $zero, L_800E2384
    if (ctx->r11 == 0) {
        // 0x800E2364: nop
    
            goto L_800E2384;
    }
    // 0x800E2364: nop

    // 0x800E2368: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E236C: lui         $t5, 0xE200
    ctx->r13 = S32(0XE200 << 16);
    // 0x800E2370: ori         $t5, $t5, 0x1E01
    ctx->r13 = ctx->r13 | 0X1E01;
    // 0x800E2374: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800E2378: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800E237C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800E2380: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_800E2384:
    // 0x800E2384: jal         0x800E8078
    // 0x800E2388: nop

    func_800E8078(rdram, ctx);
        goto after_0;
    // 0x800E2388: nop

    after_0:
    // 0x800E238C: jal         0x800E23A4
    // 0x800E2390: nop

    func_800E23A4(rdram, ctx);
        goto after_1;
    // 0x800E2390: nop

    after_1:
    // 0x800E2394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E2398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E239C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E23A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E23A4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E23A8: addiu       $v1, $v1, -0x2B90
    ctx->r3 = ADD32(ctx->r3, -0X2B90);
    // 0x800E23AC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800E23B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E23B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E23B8: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x800E23BC: sh          $t2, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r10;
    // 0x800E23C0: lh          $v0, 0x1C($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X1C);
    // 0x800E23C4: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x800E23C8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x800E23CC: swc1        $f6, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f6.u32l;
    // 0x800E23D0: lh          $t6, 0x2($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2);
    // 0x800E23D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E23D8: lwc1        $f8, 0x30($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X30);
    // 0x800E23DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E23E0: addiu       $t4, $zero, 0x4E20
    ctx->r12 = ADD32(0, 0X4E20);
    // 0x800E23E4: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x800E23E8: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x800E23EC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800E23F0: sb          $zero, 0x23($v1)
    MEM_B(0X23, ctx->r3) = 0;
    // 0x800E23F4: sb          $zero, 0x22($v1)
    MEM_B(0X22, ctx->r3) = 0;
    // 0x800E23F8: sb          $zero, 0x20($v1)
    MEM_B(0X20, ctx->r3) = 0;
    // 0x800E23FC: sb          $zero, 0x21($v1)
    MEM_B(0X21, ctx->r3) = 0;
    // 0x800E2400: sb          $zero, 0x1E($v1)
    MEM_B(0X1E, ctx->r3) = 0;
    // 0x800E2404: sb          $t1, 0x1F($v1)
    MEM_B(0X1F, ctx->r3) = ctx->r9;
    // 0x800E2408: sw          $zero, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = 0;
    // 0x800E240C: sw          $zero, 0x78($v1)
    MEM_W(0X78, ctx->r3) = 0;
    // 0x800E2410: sw          $t4, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r12;
    // 0x800E2414: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x800E2418: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x800E241C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x800E2420: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x800E2424: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
    // 0x800E2428: swc1        $f8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f8.u32l;
    // 0x800E242C: jr          $ra
    // 0x800E2430: swc1        $f10, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f10.u32l;
    return;
    // 0x800E2430: swc1        $f10, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_800E2434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2434: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E2438: jr          $ra
    // 0x800E243C: sb          $a0, -0x2B70($at)
    MEM_B(-0X2B70, ctx->r1) = ctx->r4;
    return;
    // 0x800E243C: sb          $a0, -0x2B70($at)
    MEM_B(-0X2B70, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E2440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E2444: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E2448: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E244C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E2450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E2454: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800E2458: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E245C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800E2460: jal         0x800F31DC
    // 0x800E2464: addiu       $a0, $a0, -0x2B8C
    ctx->r4 = ADD32(ctx->r4, -0X2B8C);
    func_800F31DC(rdram, ctx);
        goto after_0;
    // 0x800E2464: addiu       $a0, $a0, -0x2B8C
    ctx->r4 = ADD32(ctx->r4, -0X2B8C);
    after_0:
    // 0x800E2468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E246C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E2470: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E2478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E247C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E2480: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E2484: jal         0x800E24F8
    // 0x800E2488: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    func_800E24F8(rdram, ctx);
        goto after_0;
    // 0x800E2488: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_0:
    // 0x800E248C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E2490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E2494: jr          $ra
    // 0x800E2498: nop

    return;
    // 0x800E2498: nop

;}
RECOMP_FUNC void func_800E249C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E249C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E24A0: jr          $ra
    // 0x800E24A4: sw          $a0, -0x2B6C($at)
    MEM_W(-0X2B6C, ctx->r1) = ctx->r4;
    return;
    // 0x800E24A4: sw          $a0, -0x2B6C($at)
    MEM_W(-0X2B6C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E24A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E24A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E24AC: jr          $ra
    // 0x800E24B0: swc1        $f12, -0x2B5C($at)
    MEM_W(-0X2B5C, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800E24B0: swc1        $f12, -0x2B5C($at)
    MEM_W(-0X2B5C, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800E24B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E24B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E24B8: jr          $ra
    // 0x800E24BC: sb          $a0, -0x2B71($at)
    MEM_B(-0X2B71, ctx->r1) = ctx->r4;
    return;
    // 0x800E24BC: sb          $a0, -0x2B71($at)
    MEM_B(-0X2B71, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E24C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E24C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E24C4: jr          $ra
    // 0x800E24C8: sb          $a0, -0x2B6E($at)
    MEM_B(-0X2B6E, ctx->r1) = ctx->r4;
    return;
    // 0x800E24C8: sb          $a0, -0x2B6E($at)
    MEM_B(-0X2B6E, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E24CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E24CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E24D0: jr          $ra
    // 0x800E24D4: sb          $a0, -0x2B6D($at)
    MEM_B(-0X2B6D, ctx->r1) = ctx->r4;
    return;
    // 0x800E24D4: sb          $a0, -0x2B6D($at)
    MEM_B(-0X2B6D, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E24D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E24D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E24DC: jr          $ra
    // 0x800E24E0: sb          $a0, -0x2B6F($at)
    MEM_B(-0X2B6F, ctx->r1) = ctx->r4;
    return;
    // 0x800E24E0: sb          $a0, -0x2B6F($at)
    MEM_B(-0X2B6F, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E24E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E24E4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E24E8: addiu       $v0, $v0, -0x2B90
    ctx->r2 = ADD32(ctx->r2, -0X2B90);
    // 0x800E24EC: sw          $a0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r4;
    // 0x800E24F0: jr          $ra
    // 0x800E24F4: sw          $a1, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r5;
    return;
    // 0x800E24F4: sw          $a1, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800E24F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E24F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E24FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E2500: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E2504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E2508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E250C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800E2510: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E2514: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800E2518: jal         0x800F31DC
    // 0x800E251C: addiu       $a0, $a0, -0x2B80
    ctx->r4 = ADD32(ctx->r4, -0X2B80);
    func_800F31DC(rdram, ctx);
        goto after_0;
    // 0x800E251C: addiu       $a0, $a0, -0x2B80
    ctx->r4 = ADD32(ctx->r4, -0X2B80);
    after_0:
    // 0x800E2520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E2524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E2528: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E2530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2530: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E2534: jr          $ra
    // 0x800E2538: swc1        $f12, -0x2B68($at)
    MEM_W(-0X2B68, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800E2538: swc1        $f12, -0x2B68($at)
    MEM_W(-0X2B68, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800E253C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E253C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E2540: addiu       $v0, $v0, -0x2B90
    ctx->r2 = ADD32(ctx->r2, -0X2B90);
    // 0x800E2544: swc1        $f12, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f12.u32l;
    // 0x800E2548: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800E254C: jr          $ra
    // 0x800E2550: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x800E2550: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800E2554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2554: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E2558: addiu       $v0, $v0, -0x2B90
    ctx->r2 = ADD32(ctx->r2, -0X2B90);
    // 0x800E255C: swc1        $f12, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f12.u32l;
    // 0x800E2560: jr          $ra
    // 0x800E2564: swc1        $f14, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f14.u32l;
    return;
    // 0x800E2564: swc1        $f14, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800E2568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2568: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E256C: addiu       $v0, $v0, -0x2B90
    ctx->r2 = ADD32(ctx->r2, -0X2B90);
    // 0x800E2570: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x800E2574: jr          $ra
    // 0x800E2578: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
    return;
    // 0x800E2578: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800E257C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E257C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E2580: jr          $ra
    // 0x800E2584: sh          $a0, -0x2B74($at)
    MEM_H(-0X2B74, ctx->r1) = ctx->r4;
    return;
    // 0x800E2584: sh          $a0, -0x2B74($at)
    MEM_H(-0X2B74, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E2588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2588: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E258C: jr          $ra
    // 0x800E2590: sb          $a0, -0x2B72($at)
    MEM_B(-0X2B72, ctx->r1) = ctx->r4;
    return;
    // 0x800E2590: sb          $a0, -0x2B72($at)
    MEM_B(-0X2B72, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E2594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2594: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E2598: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E259C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E25A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E25A4: jal         0x800E1DF4
    // 0x800E25A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800E1DF4(rdram, ctx);
        goto after_0;
    // 0x800E25A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E25AC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E25B0: lui         $t7, 0xDB06
    ctx->r15 = S32(0XDB06 << 16);
    // 0x800E25B4: ori         $t7, $t7, 0x8
    ctx->r15 = ctx->r15 | 0X8;
    // 0x800E25B8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E25BC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800E25C0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E25C4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800E25C8: jal         0x800AF5D8
    // 0x800E25CC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800AF5D8(rdram, ctx);
        goto after_1;
    // 0x800E25CC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x800E25D0: jal         0x8002E330
    // 0x800E25D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x800E25D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800E25D8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E25DC: lui         $t0, 0xDB06
    ctx->r8 = S32(0XDB06 << 16);
    // 0x800E25E0: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x800E25E4: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x800E25E8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E25EC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800E25F0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800E25F4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800E25F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800E25FC: jal         0x800AF5E4
    // 0x800E2600: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_800AF5E4(rdram, ctx);
        goto after_3;
    // 0x800E2600: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_3:
    // 0x800E2604: jal         0x8002E330
    // 0x800E2608: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x800E2608: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800E260C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800E2610: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E2614: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x800E2618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E261C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2620: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E2624: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E2628: jr          $ra
    // 0x800E262C: sw          $t2, -0x2B10($at)
    MEM_W(-0X2B10, ctx->r1) = ctx->r10;
    return;
    // 0x800E262C: sw          $t2, -0x2B10($at)
    MEM_W(-0X2B10, ctx->r1) = ctx->r10;
;}
RECOMP_FUNC void func_800E2630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2630: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E2634: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E2638: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800E263C: addiu       $s0, $s0, -0x2B90
    ctx->r16 = ADD32(ctx->r16, -0X2B90);
    // 0x800E2640: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    // 0x800E2644: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E2648: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800E264C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E2650: beq         $a2, $t6, L_800E26A8
    if (ctx->r6 == ctx->r14) {
        // 0x800E2654: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_800E26A8;
    }
    // 0x800E2654: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800E2658: sh          $a2, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r6;
    // 0x800E265C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E2660: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x800E2664: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800E2668: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800E266C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800E2670: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x800E2674: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x800E2678: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x800E267C: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x800E2680: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x800E2684: lh          $t0, 0x1C($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1C);
    // 0x800E2688: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x800E268C: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x800E2690: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x800E2694: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x800E2698: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x800E269C: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x800E26A0: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x800E26A4: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
L_800E26A8:
    // 0x800E26A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E26AC: jal         0x800E204C
    // 0x800E26B0: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    func_800E204C(rdram, ctx);
        goto after_0;
    // 0x800E26B0: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    after_0:
    // 0x800E26B4: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x800E26B8: jal         0x800AF5FC
    // 0x800E26BC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_800AF5FC(rdram, ctx);
        goto after_1;
    // 0x800E26BC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x800E26C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800E26C4: jal         0x800AF5F0
    // 0x800E26C8: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    func_800AF5F0(rdram, ctx);
        goto after_2;
    // 0x800E26C8: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x800E26CC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E26D0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800E26D4: lui         $t5, 0xDE00
    ctx->r13 = S32(0XDE00 << 16);
    // 0x800E26D8: lh          $t4, 0x4($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X4);
    // 0x800E26DC: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800E26E0: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x800E26E4: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800E26E8: sll         $t6, $t4, 3
    ctx->r14 = S32(ctx->r12 << 3);
    // 0x800E26EC: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x800E26F0: jal         0x8002E330
    // 0x800E26F4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x800E26F4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_3:
    // 0x800E26F8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800E26FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E2700: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x800E2704: jal         0x800E2260
    // 0x800E2708: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    func_800E2260(rdram, ctx);
        goto after_4;
    // 0x800E2708: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    after_4:
    // 0x800E270C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E2710: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E2714: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E2718: jr          $ra
    // 0x800E271C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E271C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800E2720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2720: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800E2724: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x800E2728: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E272C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E2730: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E2734: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x800E2738: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x800E273C: beq         $t6, $zero, L_800E2760
    if (ctx->r14 == 0) {
        // 0x800E2740: sw          $a3, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r7;
            goto L_800E2760;
    }
    // 0x800E2740: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x800E2744: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800E2748: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x800E274C: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800E2750: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x800E2754: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800E2758: b           L_800E2778
    // 0x800E275C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
        goto L_800E2778;
    // 0x800E275C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
L_800E2760:
    // 0x800E2760: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E2764: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E2768: nop

    // 0x800E276C: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x800E2770: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x800E2774: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
L_800E2778:
    // 0x800E2778: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E277C: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x800E2780: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E2784: lw          $a0, -0x2B10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B10);
    // 0x800E2788: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x800E278C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x800E2790: jal         0x800E1C00
    // 0x800E2794: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    func_800E1C00(rdram, ctx);
        goto after_0;
    // 0x800E2794: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    after_0:
    // 0x800E2798: bne         $v0, $zero, L_800E27A8
    if (ctx->r2 != 0) {
        // 0x800E279C: nop
    
            goto L_800E27A8;
    }
    // 0x800E279C: nop

    // 0x800E27A0: b           L_800E2890
    // 0x800E27A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E2890;
    // 0x800E27A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E27A8:
    // 0x800E27A8: jal         0x800E401C
    // 0x800E27AC: nop

    func_800E401C(rdram, ctx);
        goto after_1;
    // 0x800E27AC: nop

    after_1:
    // 0x800E27B0: jal         0x80018EFC
    // 0x800E27B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80018EFC(rdram, ctx);
        goto after_2;
    // 0x800E27B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800E27B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E27BC: lwc1        $f12, -0x2B68($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2B68);
    // 0x800E27C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E27C4: nop

    // 0x800E27C8: c.eq.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl == ctx->f12.fl;
    // 0x800E27CC: nop

    // 0x800E27D0: bc1tl       L_800E27E4
    if (c1cs) {
        // 0x800E27D4: lwc1        $f12, 0x40($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
            goto L_800E27E4;
    }
    goto skip_0;
    // 0x800E27D4: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x800E27D8: jal         0x8001907C
    // 0x800E27DC: nop

    func_8001907C(rdram, ctx);
        goto after_3;
    // 0x800E27DC: nop

    after_3:
    // 0x800E27E0: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
L_800E27E4:
    // 0x800E27E4: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800E27E8: jal         0x800191F8
    // 0x800E27EC: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    func_800191F8(rdram, ctx);
        goto after_4;
    // 0x800E27EC: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_4:
    // 0x800E27F0: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x800E27F4: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x800E27F8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x800E27FC: bne         $t8, $zero, L_800E280C
    if (ctx->r24 != 0) {
        // 0x800E2800: lwc1        $f14, 0x50($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
            goto L_800E280C;
    }
    // 0x800E2800: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800E2804: beq         $t9, $zero, L_800E2828
    if (ctx->r25 == 0) {
        // 0x800E2808: nop
    
            goto L_800E2828;
    }
    // 0x800E2808: nop

L_800E280C:
    // 0x800E280C: beq         $t0, $zero, L_800E2820
    if (ctx->r8 == 0) {
        // 0x800E2810: lwc1        $f12, 0x54($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
            goto L_800E2820;
    }
    // 0x800E2810: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800E2814: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800E2818: b           L_800E2820
    // 0x800E281C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_800E2820;
    // 0x800E281C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_800E2820:
    // 0x800E2820: jal         0x80019D30
    // 0x800E2824: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    func_80019D30(rdram, ctx);
        goto after_5;
    // 0x800E2824: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_5:
L_800E2828:
    // 0x800E2828: jal         0x80018C28
    // 0x800E282C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_80018C28(rdram, ctx);
        goto after_6;
    // 0x800E282C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_6:
    // 0x800E2830: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E2834: lui         $t2, 0xDA38
    ctx->r10 = S32(0XDA38 << 16);
    // 0x800E2838: ori         $t2, $t2, 0x2
    ctx->r10 = ctx->r10 | 0X2;
    // 0x800E283C: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x800E2840: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x800E2844: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x800E2848: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x800E284C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2850: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800E2854: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x800E2858: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x800E285C: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x800E2860: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x800E2864: jal         0x800E2630
    // 0x800E2868: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_800E2630(rdram, ctx);
        goto after_7;
    // 0x800E2868: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_7:
    // 0x800E286C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E2870: lui         $t7, 0xD838
    ctx->r15 = S32(0XD838 << 16);
    // 0x800E2874: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x800E2878: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E287C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800E2880: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x800E2884: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800E2888: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800E288C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_800E2890:
    // 0x800E2890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E2894: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E2898: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800E289C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E28A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E28A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800E28A8: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x800E28AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E28B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E28B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E28B8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800E28BC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800E28C0: beq         $t6, $zero, L_800E28E4
    if (ctx->r14 == 0) {
        // 0x800E28C4: sw          $a3, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r7;
            goto L_800E28E4;
    }
    // 0x800E28C4: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x800E28C8: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800E28CC: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x800E28D0: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800E28D4: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x800E28D8: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800E28DC: b           L_800E28FC
    // 0x800E28E0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
        goto L_800E28FC;
    // 0x800E28E0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
L_800E28E4:
    // 0x800E28E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E28E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E28EC: nop

    // 0x800E28F0: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x800E28F4: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x800E28F8: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
L_800E28FC:
    // 0x800E28FC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E2900: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x800E2904: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E2908: lw          $a0, -0x2B10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B10);
    // 0x800E290C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800E2910: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x800E2914: jal         0x800E1C00
    // 0x800E2918: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    func_800E1C00(rdram, ctx);
        goto after_0;
    // 0x800E2918: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_0:
    // 0x800E291C: bne         $v0, $zero, L_800E292C
    if (ctx->r2 != 0) {
        // 0x800E2920: nop
    
            goto L_800E292C;
    }
    // 0x800E2920: nop

    // 0x800E2924: b           L_800E2A00
    // 0x800E2928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E2A00;
    // 0x800E2928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E292C:
    // 0x800E292C: jal         0x80019CD4
    // 0x800E2930: nop

    func_80019CD4(rdram, ctx);
        goto after_1;
    // 0x800E2930: nop

    after_1:
    // 0x800E2934: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800E2938: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800E293C: jal         0x800191F8
    // 0x800E2940: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_800191F8(rdram, ctx);
        goto after_2;
    // 0x800E2940: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x800E2944: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x800E2948: beql        $v0, $zero, L_800E2964
    if (ctx->r2 == 0) {
        // 0x800E294C: lw          $t8, 0x64($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X64);
            goto L_800E2964;
    }
    goto skip_0;
    // 0x800E294C: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x800E2950: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800E2954: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800E2958: jal         0x80019110
    // 0x800E295C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    func_80019110(rdram, ctx);
        goto after_3;
    // 0x800E295C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    after_3:
    // 0x800E2960: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
L_800E2964:
    // 0x800E2964: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x800E2968: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800E296C: bne         $t8, $zero, L_800E297C
    if (ctx->r24 != 0) {
        // 0x800E2970: lwc1        $f14, 0x48($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
            goto L_800E297C;
    }
    // 0x800E2970: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800E2974: beq         $t9, $zero, L_800E2998
    if (ctx->r25 == 0) {
        // 0x800E2978: nop
    
            goto L_800E2998;
    }
    // 0x800E2978: nop

L_800E297C:
    // 0x800E297C: beq         $t0, $zero, L_800E2990
    if (ctx->r8 == 0) {
        // 0x800E2980: lwc1        $f12, 0x4C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_800E2990;
    }
    // 0x800E2980: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800E2984: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800E2988: b           L_800E2990
    // 0x800E298C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_800E2990;
    // 0x800E298C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_800E2990:
    // 0x800E2990: jal         0x80019D30
    // 0x800E2994: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_80019D30(rdram, ctx);
        goto after_4;
    // 0x800E2994: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_4:
L_800E2998:
    // 0x800E2998: jal         0x80018C28
    // 0x800E299C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_80018C28(rdram, ctx);
        goto after_5;
    // 0x800E299C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_5:
    // 0x800E29A0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E29A4: lui         $t2, 0xDA38
    ctx->r10 = S32(0XDA38 << 16);
    // 0x800E29A8: ori         $t2, $t2, 0x2
    ctx->r10 = ctx->r10 | 0X2;
    // 0x800E29AC: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x800E29B0: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x800E29B4: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x800E29B8: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x800E29BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E29C0: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800E29C4: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x800E29C8: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x800E29CC: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x800E29D0: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x800E29D4: jal         0x800E2630
    // 0x800E29D8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800E2630(rdram, ctx);
        goto after_6;
    // 0x800E29D8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_6:
    // 0x800E29DC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E29E0: lui         $t7, 0xD838
    ctx->r15 = S32(0XD838 << 16);
    // 0x800E29E4: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x800E29E8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E29EC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800E29F0: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x800E29F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800E29F8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800E29FC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_800E2A00:
    // 0x800E2A00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E2A04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E2A08: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800E2A0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E2A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2A14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E2A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E2A1C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800E2A20: jal         0x800E22F0
    // 0x800E2A24: lw          $a1, -0x2B10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2B10);
    func_800E22F0(rdram, ctx);
        goto after_0;
    // 0x800E2A24: lw          $a1, -0x2B10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2B10);
    after_0:
    // 0x800E2A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E2A2C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E2A30: sw          $zero, -0x2B10($at)
    MEM_W(-0X2B10, ctx->r1) = 0;
    // 0x800E2A34: jr          $ra
    // 0x800E2A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800E2A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800E2A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2A3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E2A40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E2A44: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E2A48: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E2A4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E2A50: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800E2A54: jal         0x800E1DF4
    // 0x800E2A58: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800E1DF4(rdram, ctx);
        goto after_0;
    // 0x800E2A58: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800E2A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2A60: jal         0x800E204C
    // 0x800E2A64: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800E204C(rdram, ctx);
        goto after_1;
    // 0x800E2A64: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x800E2A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2A6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800E2A70: jal         0x800E2180
    // 0x800E2A74: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800E2180(rdram, ctx);
        goto after_2;
    // 0x800E2A74: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800E2A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2A7C: jal         0x800E2260
    // 0x800E2A80: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800E2260(rdram, ctx);
        goto after_3;
    // 0x800E2A80: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x800E2A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2A88: jal         0x800E22F0
    // 0x800E2A8C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800E22F0(rdram, ctx);
        goto after_4;
    // 0x800E2A8C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x800E2A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E2A94: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E2A98: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E2A9C: jr          $ra
    // 0x800E2AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800E2AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800E2AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2AA4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800E2AA8: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x800E2AAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E2AB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E2AB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E2AB8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x800E2ABC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x800E2AC0: beq         $t6, $zero, L_800E2AE4
    if (ctx->r14 == 0) {
        // 0x800E2AC4: sw          $a3, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r7;
            goto L_800E2AE4;
    }
    // 0x800E2AC4: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x800E2AC8: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800E2ACC: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x800E2AD0: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800E2AD4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x800E2AD8: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800E2ADC: b           L_800E2AFC
    // 0x800E2AE0: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
        goto L_800E2AFC;
    // 0x800E2AE0: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
L_800E2AE4:
    // 0x800E2AE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E2AE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E2AEC: nop

    // 0x800E2AF0: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x800E2AF4: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x800E2AF8: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
L_800E2AFC:
    // 0x800E2AFC: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x800E2B00: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E2B04: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x800E2B08: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x800E2B0C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x800E2B10: jal         0x800E1C00
    // 0x800E2B14: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    func_800E1C00(rdram, ctx);
        goto after_0;
    // 0x800E2B14: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    after_0:
    // 0x800E2B18: bne         $v0, $zero, L_800E2B30
    if (ctx->r2 != 0) {
        // 0x800E2B1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800E2B30;
    }
    // 0x800E2B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2B20: jal         0x800E23A4
    // 0x800E2B24: nop

    func_800E23A4(rdram, ctx);
        goto after_1;
    // 0x800E2B24: nop

    after_1:
    // 0x800E2B28: b           L_800E2C44
    // 0x800E2B2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800E2C44;
    // 0x800E2B2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800E2B30:
    // 0x800E2B30: jal         0x800E1DF4
    // 0x800E2B34: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_800E1DF4(rdram, ctx);
        goto after_2;
    // 0x800E2B34: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_2:
    // 0x800E2B38: jal         0x800E401C
    // 0x800E2B3C: nop

    func_800E401C(rdram, ctx);
        goto after_3;
    // 0x800E2B3C: nop

    after_3:
    // 0x800E2B40: jal         0x80018EFC
    // 0x800E2B44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80018EFC(rdram, ctx);
        goto after_4;
    // 0x800E2B44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800E2B48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E2B4C: lwc1        $f12, -0x2B68($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2B68);
    // 0x800E2B50: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E2B54: nop

    // 0x800E2B58: c.eq.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl == ctx->f12.fl;
    // 0x800E2B5C: nop

    // 0x800E2B60: bc1tl       L_800E2B74
    if (c1cs) {
        // 0x800E2B64: lwc1        $f12, 0x40($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
            goto L_800E2B74;
    }
    goto skip_0;
    // 0x800E2B64: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x800E2B68: jal         0x8001907C
    // 0x800E2B6C: nop

    func_8001907C(rdram, ctx);
        goto after_5;
    // 0x800E2B6C: nop

    after_5:
    // 0x800E2B70: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
L_800E2B74:
    // 0x800E2B74: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800E2B78: jal         0x800191F8
    // 0x800E2B7C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    func_800191F8(rdram, ctx);
        goto after_6;
    // 0x800E2B7C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_6:
    // 0x800E2B80: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x800E2B84: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x800E2B88: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x800E2B8C: bne         $t8, $zero, L_800E2B9C
    if (ctx->r24 != 0) {
        // 0x800E2B90: lwc1        $f14, 0x50($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
            goto L_800E2B9C;
    }
    // 0x800E2B90: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800E2B94: beq         $t9, $zero, L_800E2BB8
    if (ctx->r25 == 0) {
        // 0x800E2B98: nop
    
            goto L_800E2BB8;
    }
    // 0x800E2B98: nop

L_800E2B9C:
    // 0x800E2B9C: beq         $t0, $zero, L_800E2BB0
    if (ctx->r8 == 0) {
        // 0x800E2BA0: lwc1        $f12, 0x54($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
            goto L_800E2BB0;
    }
    // 0x800E2BA0: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800E2BA4: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800E2BA8: b           L_800E2BB0
    // 0x800E2BAC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_800E2BB0;
    // 0x800E2BAC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_800E2BB0:
    // 0x800E2BB0: jal         0x80019D30
    // 0x800E2BB4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    func_80019D30(rdram, ctx);
        goto after_7;
    // 0x800E2BB4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_7:
L_800E2BB8:
    // 0x800E2BB8: jal         0x80018C28
    // 0x800E2BBC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_80018C28(rdram, ctx);
        goto after_8;
    // 0x800E2BBC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_8:
    // 0x800E2BC0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E2BC4: lui         $t2, 0xDA38
    ctx->r10 = S32(0XDA38 << 16);
    // 0x800E2BC8: ori         $t2, $t2, 0x2
    ctx->r10 = ctx->r10 | 0X2;
    // 0x800E2BCC: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x800E2BD0: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x800E2BD4: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x800E2BD8: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x800E2BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2BE0: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800E2BE4: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x800E2BE8: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x800E2BEC: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x800E2BF0: jal         0x800E204C
    // 0x800E2BF4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_800E204C(rdram, ctx);
        goto after_9;
    // 0x800E2BF4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_9:
    // 0x800E2BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2BFC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800E2C00: jal         0x800E2180
    // 0x800E2C04: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    func_800E2180(rdram, ctx);
        goto after_10;
    // 0x800E2C04: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    after_10:
    // 0x800E2C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2C0C: jal         0x800E2260
    // 0x800E2C10: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_800E2260(rdram, ctx);
        goto after_11;
    // 0x800E2C10: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_11:
    // 0x800E2C14: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E2C18: lui         $t7, 0xD838
    ctx->r15 = S32(0XD838 << 16);
    // 0x800E2C1C: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x800E2C20: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E2C24: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800E2C28: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x800E2C2C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800E2C30: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E2C34: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800E2C38: jal         0x800E22F0
    // 0x800E2C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E22F0(rdram, ctx);
        goto after_12;
    // 0x800E2C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x800E2C40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800E2C44:
    // 0x800E2C44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E2C48: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800E2C4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E2C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2C54: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800E2C58: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x800E2C5C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E2C60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E2C64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E2C68: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800E2C6C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800E2C70: beq         $t6, $zero, L_800E2C94
    if (ctx->r14 == 0) {
        // 0x800E2C74: sw          $a3, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r7;
            goto L_800E2C94;
    }
    // 0x800E2C74: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x800E2C78: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800E2C7C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x800E2C80: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800E2C84: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x800E2C88: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800E2C8C: b           L_800E2CAC
    // 0x800E2C90: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
        goto L_800E2CAC;
    // 0x800E2C90: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
L_800E2C94:
    // 0x800E2C94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E2C98: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E2C9C: nop

    // 0x800E2CA0: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x800E2CA4: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x800E2CA8: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
L_800E2CAC:
    // 0x800E2CAC: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x800E2CB0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E2CB4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x800E2CB8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800E2CBC: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x800E2CC0: jal         0x800E1C00
    // 0x800E2CC4: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    func_800E1C00(rdram, ctx);
        goto after_0;
    // 0x800E2CC4: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_0:
    // 0x800E2CC8: bne         $v0, $zero, L_800E2CE0
    if (ctx->r2 != 0) {
        // 0x800E2CCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800E2CE0;
    }
    // 0x800E2CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2CD0: jal         0x800E23A4
    // 0x800E2CD4: nop

    func_800E23A4(rdram, ctx);
        goto after_1;
    // 0x800E2CD4: nop

    after_1:
    // 0x800E2CD8: b           L_800E2DE0
    // 0x800E2CDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800E2DE0;
    // 0x800E2CDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800E2CE0:
    // 0x800E2CE0: jal         0x800E1DF4
    // 0x800E2CE4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800E1DF4(rdram, ctx);
        goto after_2;
    // 0x800E2CE4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_2:
    // 0x800E2CE8: jal         0x80019CD4
    // 0x800E2CEC: nop

    func_80019CD4(rdram, ctx);
        goto after_3;
    // 0x800E2CEC: nop

    after_3:
    // 0x800E2CF0: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800E2CF4: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800E2CF8: jal         0x800191F8
    // 0x800E2CFC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_800191F8(rdram, ctx);
        goto after_4;
    // 0x800E2CFC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x800E2D00: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x800E2D04: beql        $v0, $zero, L_800E2D20
    if (ctx->r2 == 0) {
        // 0x800E2D08: lw          $t8, 0x68($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X68);
            goto L_800E2D20;
    }
    goto skip_0;
    // 0x800E2D08: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    skip_0:
    // 0x800E2D0C: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800E2D10: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800E2D14: jal         0x80019110
    // 0x800E2D18: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    func_80019110(rdram, ctx);
        goto after_5;
    // 0x800E2D18: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    after_5:
    // 0x800E2D1C: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
L_800E2D20:
    // 0x800E2D20: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800E2D24: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800E2D28: bne         $t8, $zero, L_800E2D38
    if (ctx->r24 != 0) {
        // 0x800E2D2C: lwc1        $f14, 0x48($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
            goto L_800E2D38;
    }
    // 0x800E2D2C: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800E2D30: beq         $t9, $zero, L_800E2D54
    if (ctx->r25 == 0) {
        // 0x800E2D34: nop
    
            goto L_800E2D54;
    }
    // 0x800E2D34: nop

L_800E2D38:
    // 0x800E2D38: beq         $t0, $zero, L_800E2D4C
    if (ctx->r8 == 0) {
        // 0x800E2D3C: lwc1        $f12, 0x4C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_800E2D4C;
    }
    // 0x800E2D3C: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800E2D40: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800E2D44: b           L_800E2D4C
    // 0x800E2D48: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_800E2D4C;
    // 0x800E2D48: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_800E2D4C:
    // 0x800E2D4C: jal         0x80019D30
    // 0x800E2D50: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_80019D30(rdram, ctx);
        goto after_6;
    // 0x800E2D50: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_6:
L_800E2D54:
    // 0x800E2D54: jal         0x80018C28
    // 0x800E2D58: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_80018C28(rdram, ctx);
        goto after_7;
    // 0x800E2D58: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_7:
    // 0x800E2D5C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E2D60: lui         $t2, 0xDA38
    ctx->r10 = S32(0XDA38 << 16);
    // 0x800E2D64: ori         $t2, $t2, 0x2
    ctx->r10 = ctx->r10 | 0X2;
    // 0x800E2D68: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x800E2D6C: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x800E2D70: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x800E2D74: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x800E2D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2D7C: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800E2D80: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x800E2D84: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x800E2D88: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x800E2D8C: jal         0x800E204C
    // 0x800E2D90: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800E204C(rdram, ctx);
        goto after_8;
    // 0x800E2D90: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_8:
    // 0x800E2D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2D98: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x800E2D9C: jal         0x800E2180
    // 0x800E2DA0: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    func_800E2180(rdram, ctx);
        goto after_9;
    // 0x800E2DA0: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    after_9:
    // 0x800E2DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E2DA8: jal         0x800E2260
    // 0x800E2DAC: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800E2260(rdram, ctx);
        goto after_10;
    // 0x800E2DAC: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_10:
    // 0x800E2DB0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E2DB4: lui         $t7, 0xD838
    ctx->r15 = S32(0XD838 << 16);
    // 0x800E2DB8: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x800E2DBC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E2DC0: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800E2DC4: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x800E2DC8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800E2DCC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E2DD0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x800E2DD4: jal         0x800E22F0
    // 0x800E2DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E22F0(rdram, ctx);
        goto after_11;
    // 0x800E2DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x800E2DDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800E2DE0:
    // 0x800E2DE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E2DE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800E2DE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E2DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2DF0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E2DF4: addiu       $v0, $v0, -0x2B90
    ctx->r2 = ADD32(ctx->r2, -0X2B90);
    // 0x800E2DF8: lbu         $t6, 0x23($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X23);
    // 0x800E2DFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E2E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E2E04: beq         $t6, $zero, L_800E2E34
    if (ctx->r14 == 0) {
        // 0x800E2E08: lwc1        $f2, 0x2C($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_800E2E34;
    }
    // 0x800E2E08: lwc1        $f2, 0x2C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x800E2E0C: jal         0x800A89F8
    // 0x800E2E10: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_800A89F8(rdram, ctx);
        goto after_0;
    // 0x800E2E10: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x800E2E14: jal         0x800A8AF0
    // 0x800E2E18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800A8AF0(rdram, ctx);
        goto after_1;
    // 0x800E2E18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800E2E1C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E2E20: lwc1        $f4, 0x5D98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5D98);
    // 0x800E2E24: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E2E28: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800E2E2C: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800E2E30: nop

L_800E2E34:
    // 0x800E2E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E2E38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E2E3C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800E2E40: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E2E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2E48: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800E2E4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E2E50: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800E2E54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E2E58: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E2E5C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800E2E60: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800E2E64: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x800E2E68: jal         0x800E42F0
    // 0x800E2E6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800E42F0(rdram, ctx);
        goto after_0;
    // 0x800E2E6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E2E70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E2E74: jal         0x800E1DF4
    // 0x800E2E78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800E1DF4(rdram, ctx);
        goto after_1;
    // 0x800E2E78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800E2E7C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E2E80: addiu       $v1, $v1, -0x2B90
    ctx->r3 = ADD32(ctx->r3, -0X2B90);
    // 0x800E2E84: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x800E2E88: beql        $v0, $zero, L_800E2E9C
    if (ctx->r2 == 0) {
        // 0x800E2E8C: lh          $t6, 0x8($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X8);
            goto L_800E2E9C;
    }
    goto skip_0;
    // 0x800E2E8C: lh          $t6, 0x8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8);
    skip_0:
    // 0x800E2E90: b           L_800E2EA4
    // 0x800E2E94: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
        goto L_800E2EA4;
    // 0x800E2E94: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800E2E98: lh          $t6, 0x8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8);
L_800E2E9C:
    // 0x800E2E9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E2EA0: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_800E2EA4:
    // 0x800E2EA4: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x800E2EA8: beql        $v0, $zero, L_800E2EBC
    if (ctx->r2 == 0) {
        // 0x800E2EAC: lh          $t8, 0xA($s0)
        ctx->r24 = MEM_H(ctx->r16, 0XA);
            goto L_800E2EBC;
    }
    goto skip_1;
    // 0x800E2EAC: lh          $t8, 0xA($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA);
    skip_1:
    // 0x800E2EB0: b           L_800E2EC4
    // 0x800E2EB4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_800E2EC4;
    // 0x800E2EB4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800E2EB8: lh          $t8, 0xA($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA);
L_800E2EBC:
    // 0x800E2EBC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800E2EC0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_800E2EC4:
    // 0x800E2EC4: jal         0x800E2DF0
    // 0x800E2EC8: nop

    func_800E2DF0(rdram, ctx);
        goto after_2;
    // 0x800E2EC8: nop

    after_2:
    // 0x800E2ECC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800E2ED0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800E2ED4: lh          $t1, 0x8($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X8);
    // 0x800E2ED8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800E2EDC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E2EE0: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x800E2EE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E2EE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E2EEC: addiu       $v0, $v0, -0x2B90
    ctx->r2 = ADD32(ctx->r2, -0X2B90);
    // 0x800E2EF0: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800E2EF4: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x800E2EF8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800E2EFC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800E2F00: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800E2F04: addiu       $t7, $zero, 0x1C8
    ctx->r15 = ADD32(0, 0X1C8);
    // 0x800E2F08: lw          $a3, 0x34($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X34);
    // 0x800E2F0C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800E2F10: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E2F14: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800E2F18: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x800E2F1C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x800E2F20: lh          $t3, 0xA($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA);
    // 0x800E2F24: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800E2F28: nop

    // 0x800E2F2C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E2F30: div.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800E2F34: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x800E2F38: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x800E2F3C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x800E2F40: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x800E2F44: addiu       $t5, $t4, -0x260
    ctx->r13 = ADD32(ctx->r12, -0X260);
    // 0x800E2F48: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800E2F4C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800E2F50: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E2F54: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800E2F58: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800E2F5C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800E2F60: jal         0x800EFA4C
    // 0x800E2F64: nop

    func_800EFA4C(rdram, ctx);
        goto after_3;
    // 0x800E2F64: nop

    after_3:
    // 0x800E2F68: jal         0x80019CD4
    // 0x800E2F6C: nop

    func_80019CD4(rdram, ctx);
        goto after_4;
    // 0x800E2F6C: nop

    after_4:
    // 0x800E2F70: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800E2F74: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800E2F78: jal         0x800191F8
    // 0x800E2F7C: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    func_800191F8(rdram, ctx);
        goto after_5;
    // 0x800E2F7C: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_5:
    // 0x800E2F80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E2F84: lwc1        $f12, -0x2B68($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2B68);
    // 0x800E2F88: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E2F8C: nop

    // 0x800E2F90: c.eq.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl == ctx->f12.fl;
    // 0x800E2F94: nop

    // 0x800E2F98: bc1tl       L_800E2FAC
    if (c1cs) {
        // 0x800E2F9C: lh          $v0, 0x4($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X4);
            goto L_800E2FAC;
    }
    goto skip_2;
    // 0x800E2F9C: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    skip_2:
    // 0x800E2FA0: jal         0x8001907C
    // 0x800E2FA4: nop

    func_8001907C(rdram, ctx);
        goto after_6;
    // 0x800E2FA4: nop

    after_6:
    // 0x800E2FA8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_800E2FAC:
    // 0x800E2FAC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800E2FB0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E2FB4: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800E2FB8: bnel        $t9, $v0, L_800E3004
    if (ctx->r25 != ctx->r2) {
        // 0x800E2FBC: lh          $t2, 0x8($s0)
        ctx->r10 = MEM_H(ctx->r16, 0X8);
            goto L_800E3004;
    }
    goto skip_3;
    // 0x800E2FBC: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    skip_3:
    // 0x800E2FC0: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x800E2FC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E2FC8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800E2FCC: bnel        $t0, $t1, L_800E3004
    if (ctx->r8 != ctx->r9) {
        // 0x800E2FD0: lh          $t2, 0x8($s0)
        ctx->r10 = MEM_H(ctx->r16, 0X8);
            goto L_800E3004;
    }
    goto skip_4;
    // 0x800E2FD0: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    skip_4:
    // 0x800E2FD4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E2FD8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E2FDC: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x800E2FE0: nop

    // 0x800E2FE4: bc1fl       L_800E3004
    if (!c1cs) {
        // 0x800E2FE8: lh          $t2, 0x8($s0)
        ctx->r10 = MEM_H(ctx->r16, 0X8);
            goto L_800E3004;
    }
    goto skip_5;
    // 0x800E2FE8: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    skip_5:
    // 0x800E2FEC: lwc1        $f18, -0x2B60($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2B60);
    // 0x800E2FF0: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x800E2FF4: nop

    // 0x800E2FF8: bc1t        L_800E3054
    if (c1cs) {
        // 0x800E2FFC: nop
    
            goto L_800E3054;
    }
    // 0x800E2FFC: nop

    // 0x800E3000: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
L_800E3004:
    // 0x800E3004: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800E3008: lh          $t3, 0xA($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA);
    // 0x800E300C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800E3010: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E3014: lh          $t4, 0x6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X6);
    // 0x800E3018: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E301C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E3020: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E3024: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800E3028: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800E302C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800E3030: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800E3034: nop

    // 0x800E3038: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E303C: div.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800E3040: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800E3044: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x800E3048: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E304C: jal         0x80019D30
    // 0x800E3050: div.s       $f14, $f8, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    func_80019D30(rdram, ctx);
        goto after_7;
    // 0x800E3050: div.s       $f14, $f8, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    after_7:
L_800E3054:
    // 0x800E3054: jal         0x80018C28
    // 0x800E3058: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_80018C28(rdram, ctx);
        goto after_8;
    // 0x800E3058: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_8:
    // 0x800E305C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800E3060: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x800E3064: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x800E3068: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x800E306C: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x800E3070: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E3074: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x800E3078: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E307C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E3080: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800E3084: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x800E3088: addiu       $t9, $t8, 0x40
    ctx->r25 = ADD32(ctx->r24, 0X40);
    // 0x800E308C: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x800E3090: jal         0x800E2180
    // 0x800E3094: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    func_800E2180(rdram, ctx);
        goto after_9;
    // 0x800E3094: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    after_9:
    // 0x800E3098: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800E309C: lui         $t1, 0xD838
    ctx->r9 = S32(0XD838 << 16);
    // 0x800E30A0: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    // 0x800E30A4: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x800E30A8: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x800E30AC: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x800E30B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E30B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E30B8: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x800E30BC: jal         0x800E22F0
    // 0x800E30C0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    func_800E22F0(rdram, ctx);
        goto after_10;
    // 0x800E30C0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    after_10:
    // 0x800E30C4: jal         0x800E4640
    // 0x800E30C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E4640(rdram, ctx);
        goto after_11;
    // 0x800E30C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x800E30CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E30D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E30D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E30D8: jr          $ra
    // 0x800E30DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800E30DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800E30E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E30E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E30E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800E30E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E30EC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800E30F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800E30F4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800E30F8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800E30FC: jal         0x800AF5FC
    // 0x800E3100: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_800AF5FC(rdram, ctx);
        goto after_0;
    // 0x800E3100: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x800E3104: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x800E3108: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800E310C: bnel        $t6, $zero, L_800E31F0
    if (ctx->r14 != 0) {
        // 0x800E3110: lw          $t8, 0x0($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X0);
            goto L_800E31F0;
    }
    goto skip_0;
    // 0x800E3110: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x800E3114: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x800E3118: bnel        $t7, $zero, L_800E31F0
    if (ctx->r15 != 0) {
        // 0x800E311C: lw          $t8, 0x0($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X0);
            goto L_800E31F0;
    }
    goto skip_1;
    // 0x800E311C: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    skip_1:
    // 0x800E3120: jal         0x800E2DF0
    // 0x800E3124: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_800E2DF0(rdram, ctx);
        goto after_1;
    // 0x800E3124: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_1:
    // 0x800E3128: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800E312C: addiu       $a1, $a1, -0x2B90
    ctx->r5 = ADD32(ctx->r5, -0X2B90);
    // 0x800E3130: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x800E3134: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800E3138: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800E313C: beq         $v0, $zero, L_800E314C
    if (ctx->r2 == 0) {
        // 0x800E3140: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_800E314C;
    }
    // 0x800E3140: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800E3144: b           L_800E3158
    // 0x800E3148: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_800E3158;
    // 0x800E3148: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800E314C:
    // 0x800E314C: lh          $a0, 0x8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X8);
    // 0x800E3150: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x800E3154: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_800E3158:
    // 0x800E3158: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x800E315C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800E3160: beql        $v0, $zero, L_800E3174
    if (ctx->r2 == 0) {
        // 0x800E3164: lh          $v1, 0xA($t0)
        ctx->r3 = MEM_H(ctx->r8, 0XA);
            goto L_800E3174;
    }
    goto skip_2;
    // 0x800E3164: lh          $v1, 0xA($t0)
    ctx->r3 = MEM_H(ctx->r8, 0XA);
    skip_2:
    // 0x800E3168: b           L_800E317C
    // 0x800E316C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800E317C;
    // 0x800E316C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800E3170: lh          $v1, 0xA($t0)
    ctx->r3 = MEM_H(ctx->r8, 0XA);
L_800E3174:
    // 0x800E3174: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x800E3178: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_800E317C:
    // 0x800E317C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x800E3180: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800E3184: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x800E3188: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E318C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800E3190: nop

    // 0x800E3194: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E3198: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800E319C: lwc1        $f10, 0x30($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X30);
    // 0x800E31A0: div.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x800E31A4: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x800E31A8: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x800E31AC: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E31B0: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800E31B4: mul.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800E31B8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x800E31BC: nop

    // 0x800E31C0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x800E31C4: div.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x800E31C8: lw          $t5, 0x4($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X4);
    // 0x800E31CC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800E31D0: nop

    // 0x800E31D4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E31D8: sub.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x800E31DC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800E31E0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800E31E4: b           L_800E31FC
    // 0x800E31E8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
        goto L_800E31FC;
    // 0x800E31E8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x800E31EC: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
L_800E31F0:
    // 0x800E31F0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800E31F4: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x800E31F8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_800E31FC:
    // 0x800E31FC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800E3200: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x800E3204: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800E3208: jal         0x800E2E48
    // 0x800E320C: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_800E2E48(rdram, ctx);
        goto after_2;
    // 0x800E320C: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x800E3210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3214: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800E3218: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3220: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E3224: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E3228: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E322C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E3230: jal         0x800E1DF4
    // 0x800E3234: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800E1DF4(rdram, ctx);
        goto after_0;
    // 0x800E3234: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E3238: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E323C: lui         $t7, 0xDB06
    ctx->r15 = S32(0XDB06 << 16);
    // 0x800E3240: ori         $t7, $t7, 0x8
    ctx->r15 = ctx->r15 | 0X8;
    // 0x800E3244: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E3248: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800E324C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E3250: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3254: jal         0x800AF5D8
    // 0x800E3258: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800AF5D8(rdram, ctx);
        goto after_1;
    // 0x800E3258: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x800E325C: jal         0x8002E330
    // 0x800E3260: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x800E3260: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800E3264: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E3268: lui         $t0, 0xDB06
    ctx->r8 = S32(0XDB06 << 16);
    // 0x800E326C: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x800E3270: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x800E3274: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E3278: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800E327C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800E3280: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800E3284: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3288: jal         0x800AF5E4
    // 0x800E328C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_800AF5E4(rdram, ctx);
        goto after_3;
    // 0x800E328C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_3:
    // 0x800E3290: jal         0x8002E330
    // 0x800E3294: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x800E3294: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800E3298: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800E329C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E32A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E32A4: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x800E32A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E32AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E32B0: jal         0x800E42F0
    // 0x800E32B4: sw          $t2, -0x2B0C($at)
    MEM_W(-0X2B0C, ctx->r1) = ctx->r10;
    func_800E42F0(rdram, ctx);
        goto after_5;
    // 0x800E32B4: sw          $t2, -0x2B0C($at)
    MEM_W(-0X2B0C, ctx->r1) = ctx->r10;
    after_5:
    // 0x800E32B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E32BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E32C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E32C4: jr          $ra
    // 0x800E32C8: nop

    return;
    // 0x800E32C8: nop

;}
RECOMP_FUNC void func_800E32CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E32CC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800E32D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E32D4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800E32D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E32DC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800E32E0: addiu       $s0, $s0, -0x2B90
    ctx->r16 = ADD32(ctx->r16, -0X2B90);
    // 0x800E32E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E32E8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x800E32EC: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x800E32F0: jal         0x800AF5FC
    // 0x800E32F4: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    func_800AF5FC(rdram, ctx);
        goto after_0;
    // 0x800E32F4: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    after_0:
    // 0x800E32F8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x800E32FC: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    // 0x800E3300: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x800E3304: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x800E3308: beql        $a0, $t6, L_800E3364
    if (ctx->r4 == ctx->r14) {
        // 0x800E330C: lh          $v1, 0x0($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X0);
            goto L_800E3364;
    }
    goto skip_0;
    // 0x800E330C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    skip_0:
    // 0x800E3310: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
    // 0x800E3314: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800E3318: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x800E331C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800E3320: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x800E3324: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800E3328: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x800E332C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x800E3330: andi        $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 & 0XFF;
    // 0x800E3334: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x800E3338: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x800E333C: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x800E3340: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800E3344: lh          $t4, 0x1C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X1C);
    // 0x800E3348: andi        $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 & 0XFF;
    // 0x800E334C: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x800E3350: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x800E3354: andi        $t7, $t4, 0xFF
    ctx->r15 = ctx->r12 & 0XFF;
    // 0x800E3358: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x800E335C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800E3360: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_800E3364:
    // 0x800E3364: beql        $v1, $zero, L_800E3380
    if (ctx->r3 == 0) {
        // 0x800E3368: lw          $v0, 0x84($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X84);
            goto L_800E3380;
    }
    goto skip_1;
    // 0x800E3368: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    skip_1:
    // 0x800E336C: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x800E3370: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x800E3374: b           L_800E338C
    // 0x800E3378: lh          $t0, 0x8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8);
        goto L_800E338C;
    // 0x800E3378: lh          $t0, 0x8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8);
    // 0x800E337C: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
L_800E3380:
    // 0x800E3380: lh          $t0, 0x8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8);
    // 0x800E3384: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800E3388: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
L_800E338C:
    // 0x800E338C: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    // 0x800E3390: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800E3394: beq         $a0, $zero, L_800E33A8
    if (ctx->r4 == 0) {
        // 0x800E3398: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800E33A8;
    }
    // 0x800E3398: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E339C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800E33A0: b           L_800E33B4
    // 0x800E33A4: lh          $v1, 0xA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XA);
        goto L_800E33B4;
    // 0x800E33A4: lh          $v1, 0xA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XA);
L_800E33A8:
    // 0x800E33A8: lh          $v1, 0xA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XA);
    // 0x800E33AC: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x800E33B0: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_800E33B4:
    // 0x800E33B4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800E33B8: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x800E33BC: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x800E33C0: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800E33C4: lh          $t6, 0x0($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X0);
    // 0x800E33C8: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x800E33CC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E33D0: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x800E33D4: addiu       $t9, $t7, -0x260
    ctx->r25 = ADD32(ctx->r15, -0X260);
    // 0x800E33D8: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x800E33DC: addiu       $t8, $zero, 0x1C8
    ctx->r24 = ADD32(0, 0X1C8);
    // 0x800E33E0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800E33E4: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800E33E8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x800E33EC: lh          $t4, 0x2($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X2);
    // 0x800E33F0: subu        $t5, $t8, $t3
    ctx->r13 = SUB32(ctx->r24, ctx->r11);
    // 0x800E33F4: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x800E33F8: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x800E33FC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E3400: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800E3404: div.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800E3408: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x800E340C: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800E3410: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800E3414: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800E3418: div.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800E341C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x800E3420: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E3424: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800E3428: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800E342C: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800E3430: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800E3434: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x800E3438: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E343C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x800E3440: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800E3444: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x800E3448: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800E344C: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x800E3450: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800E3454: jal         0x800EFA4C
    // 0x800E3458: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x800E3458: nop

    after_1:
    // 0x800E345C: jal         0x80019CD4
    // 0x800E3460: nop

    func_80019CD4(rdram, ctx);
        goto after_2;
    // 0x800E3460: nop

    after_2:
    // 0x800E3464: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800E3468: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800E346C: jal         0x800191F8
    // 0x800E3470: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    func_800191F8(rdram, ctx);
        goto after_3;
    // 0x800E3470: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    after_3:
    // 0x800E3474: lwc1        $f12, 0x28($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X28);
    // 0x800E3478: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E347C: nop

    // 0x800E3480: c.eq.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl == ctx->f12.fl;
    // 0x800E3484: nop

    // 0x800E3488: bc1tl       L_800E349C
    if (c1cs) {
        // 0x800E348C: lw          $v0, 0x84($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X84);
            goto L_800E349C;
    }
    goto skip_2;
    // 0x800E348C: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    skip_2:
    // 0x800E3490: jal         0x8001907C
    // 0x800E3494: nop

    func_8001907C(rdram, ctx);
        goto after_4;
    // 0x800E3494: nop

    after_4:
    // 0x800E3498: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
L_800E349C:
    // 0x800E349C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800E34A0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x800E34A4: lh          $v1, 0x4($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X4);
    // 0x800E34A8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800E34AC: bnel        $t6, $v1, L_800E34F4
    if (ctx->r14 != ctx->r3) {
        // 0x800E34B0: lh          $t8, 0x8($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X8);
            goto L_800E34F4;
    }
    goto skip_3;
    // 0x800E34B0: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
    skip_3:
    // 0x800E34B4: lh          $t9, 0x6($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X6);
    // 0x800E34B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E34BC: bnel        $t7, $t9, L_800E34F4
    if (ctx->r15 != ctx->r25) {
        // 0x800E34C0: lh          $t8, 0x8($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X8);
            goto L_800E34F4;
    }
    goto skip_4;
    // 0x800E34C0: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
    skip_4:
    // 0x800E34C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E34C8: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x800E34CC: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x800E34D0: nop

    // 0x800E34D4: bc1fl       L_800E34F4
    if (!c1cs) {
        // 0x800E34D8: lh          $t8, 0x8($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X8);
            goto L_800E34F4;
    }
    goto skip_5;
    // 0x800E34D8: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
    skip_5:
    // 0x800E34DC: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x800E34E0: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x800E34E4: nop

    // 0x800E34E8: bc1t        L_800E3544
    if (c1cs) {
        // 0x800E34EC: nop
    
            goto L_800E3544;
    }
    // 0x800E34EC: nop

    // 0x800E34F0: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
L_800E34F4:
    // 0x800E34F4: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x800E34F8: lh          $t3, 0xA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XA);
    // 0x800E34FC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800E3500: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800E3504: lh          $t5, 0x6($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X6);
    // 0x800E3508: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E350C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E3510: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E3514: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800E3518: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800E351C: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x800E3520: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800E3524: nop

    // 0x800E3528: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E352C: div.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800E3530: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800E3534: mul.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800E3538: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E353C: jal         0x80019D30
    // 0x800E3540: div.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    func_80019D30(rdram, ctx);
        goto after_5;
    // 0x800E3540: div.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    after_5:
L_800E3544:
    // 0x800E3544: jal         0x80018C28
    // 0x800E3548: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_80018C28(rdram, ctx);
        goto after_6;
    // 0x800E3548: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_6:
    // 0x800E354C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800E3550: lui         $t6, 0xDA38
    ctx->r14 = S32(0XDA38 << 16);
    // 0x800E3554: ori         $t6, $t6, 0x2
    ctx->r14 = ctx->r14 | 0X2;
    // 0x800E3558: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x800E355C: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x800E3560: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800E3564: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x800E3568: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800E356C: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x800E3570: addiu       $t8, $t9, 0x40
    ctx->r24 = ADD32(ctx->r25, 0X40);
    // 0x800E3574: sw          $t8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r24;
    // 0x800E3578: jal         0x800AF5F0
    // 0x800E357C: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    func_800AF5F0(rdram, ctx);
        goto after_7;
    // 0x800E357C: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    after_7:
    // 0x800E3580: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x800E3584: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x800E3588: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800E358C: lh          $t5, 0x4($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X4);
    // 0x800E3590: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x800E3594: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x800E3598: sll         $t4, $t5, 3
    ctx->r12 = S32(ctx->r13 << 3);
    // 0x800E359C: addu        $a0, $v0, $t4
    ctx->r4 = ADD32(ctx->r2, ctx->r12);
    // 0x800E35A0: jal         0x8002E330
    // 0x800E35A4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_8;
    // 0x800E35A4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    after_8:
    // 0x800E35A8: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x800E35AC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800E35B0: lui         $t8, 0xD838
    ctx->r24 = S32(0XD838 << 16);
    // 0x800E35B4: ori         $t8, $t8, 0x2
    ctx->r24 = ctx->r24 | 0X2;
    // 0x800E35B8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800E35BC: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x800E35C0: addiu       $t3, $zero, 0x40
    ctx->r11 = ADD32(0, 0X40);
    // 0x800E35C4: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800E35C8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800E35CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E35D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E35D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E35D8: jr          $ra
    // 0x800E35DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800E35DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800E35E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E35E0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800E35E4: addiu       $t0, $t0, -0x2B90
    ctx->r8 = ADD32(ctx->r8, -0X2B90);
    // 0x800E35E8: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x800E35EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E35F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E35F4: beq         $v0, $zero, L_800E3604
    if (ctx->r2 == 0) {
        // 0x800E35F8: sw          $a2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r6;
            goto L_800E3604;
    }
    // 0x800E35F8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800E35FC: b           L_800E3614
    // 0x800E3600: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
        goto L_800E3614;
    // 0x800E3600: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_800E3604:
    // 0x800E3604: lw          $t6, 0x84($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X84);
    // 0x800E3608: lh          $t1, 0x8($t6)
    ctx->r9 = MEM_H(ctx->r14, 0X8);
    // 0x800E360C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800E3610: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_800E3614:
    // 0x800E3614: lh          $v0, 0x2($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X2);
    // 0x800E3618: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800E361C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800E3620: beql        $v0, $zero, L_800E3634
    if (ctx->r2 == 0) {
        // 0x800E3624: lw          $t8, 0x84($t0)
        ctx->r24 = MEM_W(ctx->r8, 0X84);
            goto L_800E3634;
    }
    goto skip_0;
    // 0x800E3624: lw          $t8, 0x84($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X84);
    skip_0:
    // 0x800E3628: b           L_800E3640
    // 0x800E362C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800E3640;
    // 0x800E362C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800E3630: lw          $t8, 0x84($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X84);
L_800E3634:
    // 0x800E3634: lh          $v1, 0xA($t8)
    ctx->r3 = MEM_H(ctx->r24, 0XA);
    // 0x800E3638: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800E363C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_800E3640:
    // 0x800E3640: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800E3644: bgez        $t1, L_800E3654
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800E3648: sra         $t4, $t1, 1
        ctx->r12 = S32(SIGNED(ctx->r9) >> 1);
            goto L_800E3654;
    }
    // 0x800E3648: sra         $t4, $t1, 1
    ctx->r12 = S32(SIGNED(ctx->r9) >> 1);
    // 0x800E364C: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x800E3650: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_800E3654:
    // 0x800E3654: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x800E3658: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x800E365C: lw          $t6, 0x4($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X4);
    // 0x800E3660: bgez        $v1, L_800E3670
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800E3664: sra         $t7, $v1, 1
        ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
            goto L_800E3670;
    }
    // 0x800E3664: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800E3668: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x800E366C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_800E3670:
    // 0x800E3670: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x800E3674: jal         0x800E32CC
    // 0x800E3678: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_800E32CC(rdram, ctx);
        goto after_0;
    // 0x800E3678: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_0:
    // 0x800E367C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E3684: jr          $ra
    // 0x800E3688: nop

    return;
    // 0x800E3688: nop

;}
RECOMP_FUNC void func_800E368C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E368C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3694: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800E3698: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E369C: jal         0x800E22F0
    // 0x800E36A0: lw          $a1, -0x2B0C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2B0C);
    func_800E22F0(rdram, ctx);
        goto after_0;
    // 0x800E36A0: lw          $a1, -0x2B0C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2B0C);
    after_0:
    // 0x800E36A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E36A8: sw          $zero, -0x2B0C($at)
    MEM_W(-0X2B0C, ctx->r1) = 0;
    // 0x800E36AC: jal         0x800E4640
    // 0x800E36B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800E4640(rdram, ctx);
        goto after_1;
    // 0x800E36B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800E36B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E36B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E36BC: jr          $ra
    // 0x800E36C0: nop

    return;
    // 0x800E36C0: nop

;}
RECOMP_FUNC void func_800E36D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E36D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E36D4: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x800E36D8: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x800E36DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800E36E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E36E4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800E36E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E36EC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800E36F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800E36F4:
    // 0x800E36F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800E36F8:
    // 0x800E36F8: beql        $v0, $zero, L_800E370C
    if (ctx->r2 == 0) {
        // 0x800E36FC: lw          $a1, 0x0($s1)
        ctx->r5 = MEM_W(ctx->r17, 0X0);
            goto L_800E370C;
    }
    goto skip_0;
    // 0x800E36FC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x800E3700: b           L_800E370C
    // 0x800E3704: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
        goto L_800E370C;
    // 0x800E3704: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800E3708: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
L_800E370C:
    // 0x800E370C: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x800E3710: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800E3714: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E3718: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800E371C: beq         $v1, $zero, L_800E372C
    if (ctx->r3 == 0) {
        // 0x800E3720: swc1        $f10, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
            goto L_800E372C;
    }
    // 0x800E3720: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x800E3724: b           L_800E3730
    // 0x800E3728: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
        goto L_800E3730;
    // 0x800E3728: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
L_800E372C:
    // 0x800E372C: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
L_800E3730:
    // 0x800E3730: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x800E3734: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x800E3738: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E373C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800E3740: beq         $a0, $zero, L_800E3750
    if (ctx->r4 == 0) {
        // 0x800E3744: swc1        $f6, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
            goto L_800E3750;
    }
    // 0x800E3744: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x800E3748: b           L_800E3754
    // 0x800E374C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
        goto L_800E3754;
    // 0x800E374C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
L_800E3750:
    // 0x800E3750: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
L_800E3754:
    // 0x800E3754: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x800E3758: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    // 0x800E375C: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800E3760: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E3764: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E3768: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800E376C: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800E3770: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x800E3774: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800E3778: lwc1        $f10, 0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X4);
    // 0x800E377C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800E3780: nop

    // 0x800E3784: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800E3788: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x800E378C: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x800E3790: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800E3794: add.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800E3798: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800E379C: nop

    // 0x800E37A0: bc1f        L_800E37AC
    if (!c1cs) {
        // 0x800E37A4: nop
    
            goto L_800E37AC;
    }
    // 0x800E37A4: nop

    // 0x800E37A8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800E37AC:
    // 0x800E37AC: bne         $a0, $t0, L_800E36F8
    if (ctx->r4 != ctx->r8) {
        // 0x800E37B0: nop
    
            goto L_800E36F8;
    }
    // 0x800E37B0: nop

    // 0x800E37B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800E37B8: bnel        $v1, $t0, L_800E36F8
    if (ctx->r3 != ctx->r8) {
        // 0x800E37BC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800E36F8;
    }
    goto skip_1;
    // 0x800E37BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_1:
    // 0x800E37C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800E37C4: bnel        $v0, $t0, L_800E36F4
    if (ctx->r2 != ctx->r8) {
        // 0x800E37C8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800E36F4;
    }
    goto skip_2;
    // 0x800E37C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_2:
    // 0x800E37CC: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800E37D0: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x800E37D4: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x800E37D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E37DC: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x800E37E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E37E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E37E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800E37EC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x800E37F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800E37F4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
L_800E37F8:
    // 0x800E37F8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800E37FC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800E3800: bltz        $v0, L_800E3840
    if (SIGNED(ctx->r2) < 0) {
        // 0x800E3804: nop
    
            goto L_800E3840;
    }
    // 0x800E3804: nop

    // 0x800E3808: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800E380C: mflo        $t6
    ctx->r14 = lo;
    // 0x800E3810: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800E3814: bne         $a2, $zero, L_800E3820
    if (ctx->r6 != 0) {
        // 0x800E3818: nop
    
            goto L_800E3820;
    }
    // 0x800E3818: nop

    // 0x800E381C: break       7
    do_break(2148415516);
L_800E3820:
    // 0x800E3820: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E3824: bne         $a2, $at, L_800E3838
    if (ctx->r6 != ctx->r1) {
        // 0x800E3828: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800E3838;
    }
    // 0x800E3828: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E382C: bne         $v0, $at, L_800E3838
    if (ctx->r2 != ctx->r1) {
        // 0x800E3830: nop
    
            goto L_800E3838;
    }
    // 0x800E3830: nop

    // 0x800E3834: break       6
    do_break(2148415540);
L_800E3838:
    // 0x800E3838: b           L_800E3878
    // 0x800E383C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
        goto L_800E3878;
    // 0x800E383C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
L_800E3840:
    // 0x800E3840: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800E3844: mflo        $t7
    ctx->r15 = lo;
    // 0x800E3848: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800E384C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x800E3850: bne         $a2, $zero, L_800E385C
    if (ctx->r6 != 0) {
        // 0x800E3854: nop
    
            goto L_800E385C;
    }
    // 0x800E3854: nop

    // 0x800E3858: break       7
    do_break(2148415576);
L_800E385C:
    // 0x800E385C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E3860: bne         $a2, $at, L_800E3874
    if (ctx->r6 != ctx->r1) {
        // 0x800E3864: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800E3874;
    }
    // 0x800E3864: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E3868: bne         $v0, $at, L_800E3874
    if (ctx->r2 != ctx->r1) {
        // 0x800E386C: nop
    
            goto L_800E3874;
    }
    // 0x800E386C: nop

    // 0x800E3870: break       6
    do_break(2148415600);
L_800E3874:
    // 0x800E3874: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
L_800E3878:
    // 0x800E3878: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800E387C: bltz        $v0, L_800E38BC
    if (SIGNED(ctx->r2) < 0) {
        // 0x800E3880: nop
    
            goto L_800E38BC;
    }
    // 0x800E3880: nop

    // 0x800E3884: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800E3888: mflo        $t9
    ctx->r25 = lo;
    // 0x800E388C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800E3890: bne         $a2, $zero, L_800E389C
    if (ctx->r6 != 0) {
        // 0x800E3894: nop
    
            goto L_800E389C;
    }
    // 0x800E3894: nop

    // 0x800E3898: break       7
    do_break(2148415640);
L_800E389C:
    // 0x800E389C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E38A0: bne         $a2, $at, L_800E38B4
    if (ctx->r6 != ctx->r1) {
        // 0x800E38A4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800E38B4;
    }
    // 0x800E38A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E38A8: bne         $v0, $at, L_800E38B4
    if (ctx->r2 != ctx->r1) {
        // 0x800E38AC: nop
    
            goto L_800E38B4;
    }
    // 0x800E38AC: nop

    // 0x800E38B0: break       6
    do_break(2148415664);
L_800E38B4:
    // 0x800E38B4: b           L_800E38F0
    // 0x800E38B8: nop

        goto L_800E38F0;
    // 0x800E38B8: nop

L_800E38BC:
    // 0x800E38BC: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800E38C0: mflo        $t1
    ctx->r9 = lo;
    // 0x800E38C4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800E38C8: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x800E38CC: bne         $a2, $zero, L_800E38D8
    if (ctx->r6 != 0) {
        // 0x800E38D0: nop
    
            goto L_800E38D8;
    }
    // 0x800E38D0: nop

    // 0x800E38D4: break       7
    do_break(2148415700);
L_800E38D8:
    // 0x800E38D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E38DC: bne         $a2, $at, L_800E38F0
    if (ctx->r6 != ctx->r1) {
        // 0x800E38E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800E38F0;
    }
    // 0x800E38E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E38E4: bne         $v0, $at, L_800E38F0
    if (ctx->r2 != ctx->r1) {
        // 0x800E38E8: nop
    
            goto L_800E38F0;
    }
    // 0x800E38E8: nop

    // 0x800E38EC: break       6
    do_break(2148415724);
L_800E38F0:
    // 0x800E38F0: bne         $v1, $a0, L_800E37F8
    if (ctx->r3 != ctx->r4) {
        // 0x800E38F4: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_800E37F8;
    }
    // 0x800E38F4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800E38F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3908: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E390C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800E3910: jal         0x800CA3A4
    // 0x800E3914: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA3A4(rdram, ctx);
        goto after_0;
    // 0x800E3914: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E391C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3920: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E392C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800E3930: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3934: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E3938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E393C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3940: jal         0x800CA704
    // 0x800E3944: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA704(rdram, ctx);
        goto after_0;
    // 0x800E3944: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E394C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3950: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E395C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3964: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3968: jal         0x800CA740
    // 0x800E396C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA740(rdram, ctx);
        goto after_0;
    // 0x800E396C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3978: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3984: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E398C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3990: jal         0x800CA7E4
    // 0x800E3994: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA7E4(rdram, ctx);
        goto after_0;
    // 0x800E3994: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E399C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E39A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E39A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E39A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E39AC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800E39B0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E39B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E39B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E39BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E39C0: jal         0x800CA8B4
    // 0x800E39C4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA8B4(rdram, ctx);
        goto after_0;
    // 0x800E39C4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E39C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E39CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E39D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E39D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E39D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E39DC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800E39E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E39E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E39E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E39EC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E39F0: jal         0x800CA628
    // 0x800E39F4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA628(rdram, ctx);
        goto after_0;
    // 0x800E39F4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E39F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E39FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3A00: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3A0C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3A14: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3A18: jal         0x800CA810
    // 0x800E3A1C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA810(rdram, ctx);
        goto after_0;
    // 0x800E3A1C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3A28: jr          $ra
    // 0x800E3A2C: nop

    return;
    // 0x800E3A2C: nop

;}
RECOMP_FUNC void func_800E3A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3A34: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3A3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3A40: jal         0x800CA934
    // 0x800E3A44: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA934(rdram, ctx);
        goto after_0;
    // 0x800E3A44: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3A50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3A5C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3A64: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3A68: jal         0x800CA9D8
    // 0x800E3A6C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA9D8(rdram, ctx);
        goto after_0;
    // 0x800E3A6C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3A78: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3A88: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3A8C: jal         0x800CAA1C
    // 0x800E3A90: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CAA1C(rdram, ctx);
        goto after_0;
    // 0x800E3A90: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3A9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3AAC: jal         0x800E3A80
    // 0x800E3AB0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_800E3A80(rdram, ctx);
        goto after_0;
    // 0x800E3AB0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800E3AB4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800E3AB8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800E3ABC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800E3AC0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800E3AC4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800E3AC8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800E3ACC: nop

    // 0x800E3AD0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800E3AD4: nop

    // 0x800E3AD8: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800E3ADC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800E3AE0: nop

    // 0x800E3AE4: bc1fl       L_800E3B0C
    if (!c1cs) {
        // 0x800E3AE8: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_800E3B0C;
    }
    goto skip_0;
    // 0x800E3AE8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    skip_0:
    // 0x800E3AEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E3AF0: nop

    // 0x800E3AF4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_800E3AF8:
    // 0x800E3AF8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800E3AFC: nop

    // 0x800E3B00: bc1tl       L_800E3AF8
    if (c1cs) {
        // 0x800E3B04: add.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
            goto L_800E3AF8;
    }
    goto skip_1;
    // 0x800E3B04: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    skip_1:
    // 0x800E3B08: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
L_800E3B0C:
    // 0x800E3B0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E3B10: nop

    // 0x800E3B14: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x800E3B18: nop

    // 0x800E3B1C: bc1fl       L_800E3B3C
    if (!c1cs) {
        // 0x800E3B20: trunc.w.s   $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
            goto L_800E3B3C;
    }
    goto skip_2;
    // 0x800E3B20: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
    skip_2:
    // 0x800E3B24: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
L_800E3B28:
    // 0x800E3B28: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x800E3B2C: nop

    // 0x800E3B30: bc1tl       L_800E3B28
    if (c1cs) {
        // 0x800E3B34: sub.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_800E3B28;
    }
    goto skip_3;
    // 0x800E3B34: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    skip_3:
    // 0x800E3B38: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
L_800E3B3C:
    // 0x800E3B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3B44: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x800E3B48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3B54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E3B58: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3B5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E3B60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3B64: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800E3B68: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3B6C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800E3B70: jal         0x800CAA00
    // 0x800E3B74: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CAA00(rdram, ctx);
        goto after_0;
    // 0x800E3B74: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3B80: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3B90: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3B94: jal         0x800CA440
    // 0x800E3B98: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA440(rdram, ctx);
        goto after_0;
    // 0x800E3B98: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3BA4: jr          $ra
    // 0x800E3BA8: nop

    return;
    // 0x800E3BA8: nop

;}
RECOMP_FUNC void func_800E3BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3BAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3BB0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3BB8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3BBC: jal         0x800CA5B8
    // 0x800E3BC0: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA5B8(rdram, ctx);
        goto after_0;
    // 0x800E3BC0: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3BCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3BD8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3BE0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3BE4: jal         0x800CA5D8
    // 0x800E3BE8: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA5D8(rdram, ctx);
        goto after_0;
    // 0x800E3BE8: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3BF4: jr          $ra
    // 0x800E3BF8: nop

    return;
    // 0x800E3BF8: nop

;}
RECOMP_FUNC void func_800E3BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3BFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3C00: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800E3C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3C08: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800E3C0C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3C10: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800E3C14: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3C18: jal         0x800CA5F8
    // 0x800E3C1C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_800CA5F8(rdram, ctx);
        goto after_0;
    // 0x800E3C1C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x800E3C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3C24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3C28: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3C30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3C34: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3C3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3C40: jal         0x800CA668
    // 0x800E3C44: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA668(rdram, ctx);
        goto after_0;
    // 0x800E3C44: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3C50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3C58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3C5C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800E3C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3C64: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800E3C68: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3C6C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800E3C70: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3C74: jal         0x800CA688
    // 0x800E3C78: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_800CA688(rdram, ctx);
        goto after_0;
    // 0x800E3C78: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x800E3C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3C80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3C84: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3C94: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3C98: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800E3C9C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800E3CA0: jal         0x800CA6C0
    // 0x800E3CA4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA6C0(rdram, ctx);
        goto after_0;
    // 0x800E3CA4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3CB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3CBC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800E3CC0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E3CC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E3CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3CCC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3CD0: jal         0x800CA6D4
    // 0x800E3CD4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA6D4(rdram, ctx);
        goto after_0;
    // 0x800E3CD4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3CE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3CEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3CF0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3CF4: jal         0x800CAF34
    // 0x800E3CF8: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CAF34(rdram, ctx);
        goto after_0;
    // 0x800E3CF8: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E3CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E3D04: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3D0C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800E3D10: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800E3D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3D18: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800E3D1C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3D20: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3D24: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x800E3D28: jal         0x800CAA24
    // 0x800E3D2C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800CAA24(rdram, ctx);
        goto after_0;
    // 0x800E3D2C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_0:
    // 0x800E3D30: jal         0x800BCC58
    // 0x800E3D34: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_800BCC58(rdram, ctx);
        goto after_1;
    // 0x800E3D34: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800E3D38: beq         $v0, $zero, L_800E3DAC
    if (ctx->r2 == 0) {
        // 0x800E3D3C: lw          $v1, 0x4C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X4C);
            goto L_800E3DAC;
    }
    // 0x800E3D3C: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800E3D40: bne         $v1, $zero, L_800E3DAC
    if (ctx->r3 != 0) {
        // 0x800E3D44: addiu       $a0, $sp, 0x3C
        ctx->r4 = ADD32(ctx->r29, 0X3C);
            goto L_800E3DAC;
    }
    // 0x800E3D44: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800E3D48: jal         0x800BCC28
    // 0x800E3D4C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800BCC28(rdram, ctx);
        goto after_2;
    // 0x800E3D4C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x800E3D50: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800E3D54: jal         0x800BCC28
    // 0x800E3D58: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800BCC28(rdram, ctx);
        goto after_3;
    // 0x800E3D58: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_3:
    // 0x800E3D5C: addiu       $v1, $sp, 0x30
    ctx->r3 = ADD32(ctx->r29, 0X30);
    // 0x800E3D60: addiu       $v0, $sp, 0x3C
    ctx->r2 = ADD32(ctx->r29, 0X3C);
    // 0x800E3D64: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
L_800E3D68:
    // 0x800E3D68: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800E3D6C: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800E3D70: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800E3D74: nop

    // 0x800E3D78: bc1fl       L_800E3D8C
    if (!c1cs) {
        // 0x800E3D7C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800E3D8C;
    }
    goto skip_0;
    // 0x800E3D7C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x800E3D80: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x800E3D84: swc1        $f12, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f12.u32l;
    // 0x800E3D88: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800E3D8C:
    // 0x800E3D8C: bne         $v0, $a0, L_800E3D68
    if (ctx->r2 != ctx->r4) {
        // 0x800E3D90: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800E3D68;
    }
    // 0x800E3D90: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800E3D94: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3D98: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3D9C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800E3DA0: jal         0x800CAA24
    // 0x800E3DA4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800CAA24(rdram, ctx);
        goto after_4;
    // 0x800E3DA4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x800E3DA8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800E3DAC:
    // 0x800E3DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3DB0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800E3DB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    tooie_expand_visibility(rdram, ctx);
    // 0x800E3DB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3DC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800E3DC4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800E3DC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3DCC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800E3DD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3DD4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3DD8: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x800E3DDC: jal         0x800CAB70
    // 0x800E3DE0: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800CAB70(rdram, ctx);
        goto after_0;
    // 0x800E3DE0: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_0:
    // 0x800E3DE4: jal         0x800BCC58
    // 0x800E3DE8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_800BCC58(rdram, ctx);
        goto after_1;
    // 0x800E3DE8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800E3DEC: beq         $v0, $zero, L_800E3E78
    if (ctx->r2 == 0) {
        // 0x800E3DF0: lw          $v1, 0x4C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X4C);
            goto L_800E3E78;
    }
    // 0x800E3DF0: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800E3DF4: bne         $v1, $zero, L_800E3E78
    if (ctx->r3 != 0) {
        // 0x800E3DF8: addiu       $a0, $sp, 0x3C
        ctx->r4 = ADD32(ctx->r29, 0X3C);
            goto L_800E3E78;
    }
    // 0x800E3DF8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800E3DFC: jal         0x800EE88C
    // 0x800E3E00: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800EE88C(rdram, ctx);
        goto after_2;
    // 0x800E3E00: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x800E3E04: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800E3E08: jal         0x800EE88C
    // 0x800E3E0C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800EE88C(rdram, ctx);
        goto after_3;
    // 0x800E3E0C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_3:
    // 0x800E3E10: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800E3E14: jal         0x800BCC28
    // 0x800E3E18: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_800BCC28(rdram, ctx);
        goto after_4;
    // 0x800E3E18: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_4:
    // 0x800E3E1C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800E3E20: jal         0x800BCC28
    // 0x800E3E24: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_800BCC28(rdram, ctx);
        goto after_5;
    // 0x800E3E24: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_5:
    // 0x800E3E28: addiu       $v1, $sp, 0x30
    ctx->r3 = ADD32(ctx->r29, 0X30);
    // 0x800E3E2C: addiu       $v0, $sp, 0x3C
    ctx->r2 = ADD32(ctx->r29, 0X3C);
    // 0x800E3E30: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
L_800E3E34:
    // 0x800E3E34: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800E3E38: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800E3E3C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800E3E40: nop

    // 0x800E3E44: bc1fl       L_800E3E58
    if (!c1cs) {
        // 0x800E3E48: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800E3E58;
    }
    goto skip_0;
    // 0x800E3E48: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x800E3E4C: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x800E3E50: swc1        $f12, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f12.u32l;
    // 0x800E3E54: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800E3E58:
    // 0x800E3E58: bne         $v0, $a0, L_800E3E34
    if (ctx->r2 != ctx->r4) {
        // 0x800E3E5C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800E3E34;
    }
    // 0x800E3E5C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800E3E60: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3E64: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3E68: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800E3E6C: jal         0x800CAA24
    // 0x800E3E70: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800CAA24(rdram, ctx);
        goto after_6;
    // 0x800E3E70: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x800E3E74: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800E3E78:
    // 0x800E3E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3E7C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800E3E80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    tooie_expand_visibility(rdram, ctx);
    // 0x800E3E84: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3E8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E3E90: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800E3E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3E98: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800E3E9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3EA0: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3EA4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3EA8: jal         0x800CACEC
    // 0x800E3EAC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800CACEC(rdram, ctx);
        goto after_0;
    // 0x800E3EAC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x800E3EB0: jal         0x800BCC58
    // 0x800E3EB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800BCC58(rdram, ctx);
        goto after_1;
    // 0x800E3EB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x800E3EB8: beq         $v0, $zero, L_800E3EE8
    if (ctx->r2 == 0) {
        // 0x800E3EBC: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_800E3EE8;
    }
    // 0x800E3EBC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800E3EC0: bne         $v1, $zero, L_800E3EE8
    if (ctx->r3 != 0) {
        // 0x800E3EC4: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_800E3EE8;
    }
    // 0x800E3EC4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x800E3EC8: jal         0x800BCC28
    // 0x800E3ECC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800BCC28(rdram, ctx);
        goto after_2;
    // 0x800E3ECC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x800E3ED0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3ED4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3ED8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800E3EDC: jal         0x800CACEC
    // 0x800E3EE0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800CACEC(rdram, ctx);
        goto after_3;
    // 0x800E3EE0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x800E3EE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800E3EE8:
    // 0x800E3EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3EEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E3EF0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    tooie_expand_visibility(rdram, ctx);
    // 0x800E3EF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E3EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3EFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E3F00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3F04: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x800E3F08: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x800E3F0C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800E3F10: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3F14: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3F18: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800E3F1C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800E3F20: jal         0x800CAD9C
    // 0x800E3F24: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800CAD9C(rdram, ctx);
        goto after_0;
    // 0x800E3F24: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x800E3F28: jal         0x800BCC58
    // 0x800E3F2C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_800BCC58(rdram, ctx);
        goto after_1;
    // 0x800E3F2C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x800E3F30: beq         $v0, $zero, L_800E3F78
    if (ctx->r2 == 0) {
        // 0x800E3F34: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_800E3F78;
    }
    // 0x800E3F34: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x800E3F38: bne         $v1, $zero, L_800E3F78
    if (ctx->r3 != 0) {
        // 0x800E3F3C: addiu       $a0, $sp, 0x1C
        ctx->r4 = ADD32(ctx->r29, 0X1C);
            goto L_800E3F78;
    }
    // 0x800E3F3C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800E3F40: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800E3F44: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800E3F48: jal         0x800EFA4C
    // 0x800E3F4C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x800E3F4C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x800E3F50: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800E3F54: jal         0x800BCC28
    // 0x800E3F58: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800BCC28(rdram, ctx);
        goto after_3;
    // 0x800E3F58: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x800E3F5C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3F60: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3F64: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800E3F68: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3F6C: jal         0x800CAD9C
    // 0x800E3F70: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    func_800CAD9C(rdram, ctx);
        goto after_4;
    // 0x800E3F70: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x800E3F74: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800E3F78:
    // 0x800E3F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3F7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800E3F80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800E3F84: jr          $ra
    // 0x800E3F88: nop

    return;
    // 0x800E3F88: nop

;}
RECOMP_FUNC void func_800E3F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3F8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E3F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E3F94: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x800E3F98: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x800E3F9C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800E3FA0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3FA4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3FA8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800E3FAC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800E3FB0: jal         0x800CAEA4
    // 0x800E3FB4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800CAEA4(rdram, ctx);
        goto after_0;
    // 0x800E3FB4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x800E3FB8: jal         0x800BCC58
    // 0x800E3FBC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_800BCC58(rdram, ctx);
        goto after_1;
    // 0x800E3FBC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x800E3FC0: beq         $v0, $zero, L_800E4008
    if (ctx->r2 == 0) {
        // 0x800E3FC4: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_800E4008;
    }
    // 0x800E3FC4: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x800E3FC8: bne         $v1, $zero, L_800E4008
    if (ctx->r3 != 0) {
        // 0x800E3FCC: addiu       $a0, $sp, 0x1C
        ctx->r4 = ADD32(ctx->r29, 0X1C);
            goto L_800E4008;
    }
    // 0x800E3FCC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800E3FD0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800E3FD4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800E3FD8: jal         0x800EFA4C
    // 0x800E3FDC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x800E3FDC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x800E3FE0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800E3FE4: jal         0x800BCC28
    // 0x800E3FE8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800BCC28(rdram, ctx);
        goto after_3;
    // 0x800E3FE8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x800E3FEC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E3FF0: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E3FF4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800E3FF8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3FFC: jal         0x800CAEA4
    // 0x800E4000: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    func_800CAEA4(rdram, ctx);
        goto after_4;
    // 0x800E4000: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x800E4004: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800E4008:
    // 0x800E4008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E400C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800E4010: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800E4014: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E401C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E401C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E4020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4024: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4028: jal         0x800CA7A4
    // 0x800E402C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA7A4(rdram, ctx);
        goto after_0;
    // 0x800E402C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E4030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E4034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E4038: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E4040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E4044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4048: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E404C: jal         0x800CA7AC
    // 0x800E4050: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA7AC(rdram, ctx);
        goto after_0;
    // 0x800E4050: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E4054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E4058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E405C: jr          $ra
    // 0x800E4060: nop

    return;
    // 0x800E4060: nop

;}
RECOMP_FUNC void func_800E4064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E4068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E406C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4070: jal         0x800CA6FC
    // 0x800E4074: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA6FC(rdram, ctx);
        goto after_0;
    // 0x800E4074: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E4078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E407C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E4080: jr          $ra
    // 0x800E4084: nop

    return;
    // 0x800E4084: nop

;}
RECOMP_FUNC void func_800E4088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E408C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4090: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4094: jal         0x800CA7B4
    // 0x800E4098: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA7B4(rdram, ctx);
        goto after_0;
    // 0x800E4098: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E409C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E40A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E40A4: jr          $ra
    // 0x800E40A8: nop

    return;
    // 0x800E40A8: nop

;}
RECOMP_FUNC void func_800E40AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E40AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E40B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E40B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E40B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E40BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E40C0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800E40C4: jal         0x800CAF00
    // 0x800E40C8: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CAF00(rdram, ctx);
        goto after_0;
    // 0x800E40C8: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E40CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E40D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E40D4: jr          $ra
    // 0x800E40D8: nop

    return;
    // 0x800E40D8: nop

;}
RECOMP_FUNC void func_800E40DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E40DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E40E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E40E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E40E8: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x800E40EC: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x800E40F0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800E40F4: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E40F8: jal         0x800CA9D8
    // 0x800E40FC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_800CA9D8(rdram, ctx);
        goto after_0;
    // 0x800E40FC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x800E4100: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800E4104: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800E4108: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800E410C: jal         0x800EFA4C
    // 0x800E4110: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x800E4110: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_1:
    // 0x800E4114: jal         0x800A89F8
    // 0x800E4118: nop

    func_800A89F8(rdram, ctx);
        goto after_2;
    // 0x800E4118: nop

    after_2:
    // 0x800E411C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E4120: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800E4124: jal         0x800C4E58
    // 0x800E4128: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    func_800C4E58(rdram, ctx);
        goto after_3;
    // 0x800E4128: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x800E412C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E4130: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E4134: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E4138: jr          $ra
    // 0x800E413C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E413C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E4140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E4144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4148: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800E414C: jal         0x800A89F8
    // 0x800E4150: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800A89F8(rdram, ctx);
        goto after_0;
    // 0x800E4150: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E4154: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E4158: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800E415C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800E4160: jal         0x800C4C34
    // 0x800E4164: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_800C4C34(rdram, ctx);
        goto after_1;
    // 0x800E4164: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x800E4168: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800E416C: beq         $t6, $zero, L_800E4180
    if (ctx->r14 == 0) {
        // 0x800E4170: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800E4180;
    }
    // 0x800E4170: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800E4174: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800E4178: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800E417C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_800E4180:
    // 0x800E4180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E4184: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E4188: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E4190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E4194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4198: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E419C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E41A0: jal         0x800A89F8
    // 0x800E41A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800A89F8(rdram, ctx);
        goto after_0;
    // 0x800E41A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800E41A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E41AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800E41B0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800E41B4: jal         0x800C4C34
    // 0x800E41B8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_800C4C34(rdram, ctx);
        goto after_1;
    // 0x800E41B8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800E41BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E41C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E41C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E41CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E41CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E41D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E41D4: jal         0x800CA334
    // 0x800E41D8: nop

    func_800CA334(rdram, ctx);
        goto after_0;
    // 0x800E41D8: nop

    after_0:
    // 0x800E41DC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E41E0: addiu       $v1, $v1, -0x2AFC
    ctx->r3 = ADD32(ctx->r3, -0X2AFC);
    // 0x800E41E4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800E41E8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800E41EC: lw          $a1, -0x2B00($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2B00);
    // 0x800E41F0: jal         0x800CA314
    // 0x800E41F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800CA314(rdram, ctx);
        goto after_1;
    // 0x800E41F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800E41F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E41FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E4200: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E4208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E420C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4210: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4214: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800E4218: lw          $a1, -0x2AFC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2AFC);
    // 0x800E421C: jal         0x800CA314
    // 0x800E4220: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA314(rdram, ctx);
        goto after_0;
    // 0x800E4220: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E4224: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4228: jal         0x800CA364
    // 0x800E422C: lw          $a0, -0x2AFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2AFC);
    func_800CA364(rdram, ctx);
        goto after_1;
    // 0x800E422C: lw          $a0, -0x2AFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2AFC);
    after_1:
    // 0x800E4230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E4234: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E4238: sw          $zero, -0x2AFC($at)
    MEM_W(-0X2AFC, ctx->r1) = 0;
    // 0x800E423C: jr          $ra
    // 0x800E4240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800E4240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800E4244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4244: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E4248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E424C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E4250: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E4254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4258: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E425C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800E4260: jal         0x800CA3F4
    // 0x800E4264: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA3F4(rdram, ctx);
        goto after_0;
    // 0x800E4264: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E4268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E426C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E4270: jr          $ra
    // 0x800E4274: nop

    return;
    // 0x800E4274: nop

;}
RECOMP_FUNC void func_800E4278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4278: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E427C: addiu       $v0, $v0, -0x2AFC
    ctx->r2 = ADD32(ctx->r2, -0X2AFC);
    // 0x800E4280: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800E4284: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E4288: jr          $ra
    // 0x800E428C: sw          $zero, -0x2B00($at)
    MEM_W(-0X2B00, ctx->r1) = 0;
    return;
    // 0x800E428C: sw          $zero, -0x2B00($at)
    MEM_W(-0X2B00, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800E4290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4290: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E4294: addiu       $v0, $v0, -0x2AFC
    ctx->r2 = ADD32(ctx->r2, -0X2AFC);
    // 0x800E4298: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800E429C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E42A0: jr          $ra
    // 0x800E42A4: sw          $zero, -0x2B00($at)
    MEM_W(-0X2B00, ctx->r1) = 0;
    return;
    // 0x800E42A4: sw          $zero, -0x2B00($at)
    MEM_W(-0X2B00, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800E42A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E42A8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E42AC: jr          $ra
    // 0x800E42B0: lw          $v0, -0x2B00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2B00);
    return;
    // 0x800E42B0: lw          $v0, -0x2B00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2B00);
;}
RECOMP_FUNC void func_800E42B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E42B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E42B8: jr          $ra
    // 0x800E42BC: sw          $a0, -0x2B00($at)
    MEM_W(-0X2B00, ctx->r1) = ctx->r4;
    return;
    // 0x800E42BC: sw          $a0, -0x2B00($at)
    MEM_W(-0X2B00, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E42C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E42C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E42C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E42C8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E42CC: jal         0x800CA6E8
    // 0x800E42D0: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA6E8(rdram, ctx);
        goto after_0;
    // 0x800E42D0: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_0:
    // 0x800E42D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E42D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E42DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E42E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E42E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E42E8: jr          $ra
    // 0x800E42EC: sw          $a0, -0x2AF8($at)
    MEM_W(-0X2AF8, ctx->r1) = ctx->r4;
    return;
    // 0x800E42EC: sw          $a0, -0x2AF8($at)
    MEM_W(-0X2AF8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800E42F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E42F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E42F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E42F8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800E42FC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800E4300: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E4304: beq         $a1, $zero, L_800E4370
    if (ctx->r5 == 0) {
        // 0x800E4308: lw          $s0, 0x4($a0)
        ctx->r16 = MEM_W(ctx->r4, 0X4);
            goto L_800E4370;
    }
    // 0x800E4308: lw          $s0, 0x4($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X4);
    // 0x800E430C: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x800E4310: lh          $t7, -0x6648($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6648);
    // 0x800E4314: lui         $a1, 0xC44A
    ctx->r5 = S32(0XC44A << 16);
    // 0x800E4318: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x800E431C: beq         $t7, $zero, L_800E4370
    if (ctx->r15 == 0) {
        // 0x800E4320: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800E4370;
    }
    // 0x800E4320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E4324: lui         $at, 0x43E4
    ctx->r1 = S32(0X43E4 << 16);
    // 0x800E4328: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E432C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x800E4330: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E4334: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800E4338: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E433C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E4340: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E4344: lui         $a2, 0x444A
    ctx->r6 = S32(0X444A << 16);
    // 0x800E4348: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x800E434C: lui         $a3, 0xC3E4
    ctx->r7 = S32(0XC3E4 << 16);
    // 0x800E4350: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x800E4354: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E4358: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800E435C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x800E4360: jal         0x8002DE04
    // 0x800E4364: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_8002DE04(rdram, ctx);
        goto after_0;
    // 0x800E4364: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x800E4368: b           L_800E43BC
    // 0x800E436C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
        goto L_800E43BC;
    // 0x800E436C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
L_800E4370:
    // 0x800E4370: lui         $at, 0x43E4
    ctx->r1 = S32(0X43E4 << 16);
    // 0x800E4374: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800E4378: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x800E437C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E4380: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800E4384: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E4388: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E438C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E4390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E4394: lui         $a1, 0xC418
    ctx->r5 = S32(0XC418 << 16);
    // 0x800E4398: lui         $a2, 0x4418
    ctx->r6 = S32(0X4418 << 16);
    // 0x800E439C: lui         $a3, 0xC3E4
    ctx->r7 = S32(0XC3E4 << 16);
    // 0x800E43A0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x800E43A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800E43A8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x800E43AC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x800E43B0: jal         0x8002DE04
    // 0x800E43B4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8002DE04(rdram, ctx);
        goto after_1;
    // 0x800E43B4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
    tooie_rt64_tag_projection(rdram, ctx, 1, (uint32_t)ctx->r29 + 0x34U);
    // 0x800E43B8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
L_800E43BC:
    // 0x800E43BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E43C0: addu        $t9, $s0, $at
    ctx->r25 = ADD32(ctx->r16, ctx->r1);
    // 0x800E43C4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800E43C8: lui         $t8, 0xDA38
    ctx->r24 = S32(0XDA38 << 16);
    // 0x800E43CC: ori         $t8, $t8, 0x7
    ctx->r24 = ctx->r24 | 0X7;
    // 0x800E43D0: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x800E43D4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800E43D8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800E43DC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800E43E0: addiu       $t0, $s0, -0x40
    ctx->r8 = ADD32(ctx->r16, -0X40);
    // 0x800E43E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E43E8: sw          $t0, -0x2AAC($at)
    MEM_W(-0X2AAC, ctx->r1) = ctx->r8;
    // 0x800E43EC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x800E43F0: jal         0x8002EF3C
    // 0x800E43F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002EF3C(rdram, ctx);
        goto after_2;
    // 0x800E43F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800E43F8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x800E43FC: lui         $t1, 0xDA38
    ctx->r9 = S32(0XDA38 << 16);
    // 0x800E4400: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E4404: addu        $t2, $s0, $at
    ctx->r10 = ADD32(ctx->r16, ctx->r1);
    // 0x800E4408: ori         $t1, $t1, 0x3
    ctx->r9 = ctx->r9 | 0X3;
    // 0x800E440C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x800E4410: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x800E4414: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800E4418: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x800E441C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800E4420: sw          $v1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r3;
    // 0x800E4424: sw          $s0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r16;
    // 0x800E4428: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E442C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E4430: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800E4434: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E443C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E443C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800E4440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4444: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x800E4448: jal         0x80018EFC
    // 0x800E444C: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    func_80018EFC(rdram, ctx);
        goto after_0;
    // 0x800E444C: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    after_0:
    // 0x800E4450: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4454: jal         0x800CA7AC
    // 0x800E4458: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA7AC(rdram, ctx);
        goto after_1;
    // 0x800E4458: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_1:
    // 0x800E445C: jal         0x80018C50
    // 0x800E4460: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80018C50(rdram, ctx);
        goto after_2;
    // 0x800E4460: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800E4464: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E4468: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800E446C: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800E4470: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800E4474: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x800E4478: div.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f14.fl, ctx->f4.fl);
    // 0x800E447C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x800E4480: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x800E4484: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x800E4488: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x800E448C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x800E4490: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x800E4494: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x800E4498: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x800E449C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x800E44A0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800E44A4: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x800E44A8: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800E44AC: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x800E44B0: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x800E44B4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800E44B8: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x800E44BC: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800E44C0: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x800E44C4: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800E44C8: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x800E44CC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800E44D0: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x800E44D4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800E44D8: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    // 0x800E44DC: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x800E44E0: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800E44E4: jal         0x80018C50
    // 0x800E44E8: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    func_80018C50(rdram, ctx);
        goto after_3;
    // 0x800E44E8: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x800E44EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E44F0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x800E44F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E44FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E44FC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800E4500: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E4504: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E4508: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E450C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4510: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E4514: jal         0x800CA7E4
    // 0x800E4518: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800CA7E4(rdram, ctx);
        goto after_0;
    // 0x800E4518: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x800E451C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4520: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    // 0x800E4524: jal         0x800CB124
    // 0x800E4528: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800CB124(rdram, ctx);
        goto after_1;
    // 0x800E4528: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x800E452C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E4530: lui         $t7, 0xDB0E
    ctx->r15 = S32(0XDB0E << 16);
    // 0x800E4534: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4538: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E453C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800E4540: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x800E4544: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E4548: jal         0x800CA6E8
    // 0x800E454C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA6E8(rdram, ctx);
        goto after_2;
    // 0x800E454C: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_2:
    // 0x800E4550: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800E4554: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800E4558: jal         0x800E443C
    // 0x800E455C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800E443C(rdram, ctx);
        goto after_3;
    // 0x800E455C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x800E4560: jal         0x80018BC4
    // 0x800E4564: nop

    func_80018BC4(rdram, ctx);
        goto after_4;
    // 0x800E4564: nop

    after_4:
    // 0x800E4568: beq         $v0, $zero, L_800E4590
    if (ctx->r2 == 0) {
        // 0x800E456C: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800E4590;
    }
    // 0x800E456C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E4570: jal         0x800CA6E8
    // 0x800E4574: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    func_800CA6E8(rdram, ctx);
        goto after_5;
    // 0x800E4574: lw          $a0, -0x2B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2B00);
    after_5:
    // 0x800E4578: add.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800E457C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800E4580: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800E4584: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800E4588: jal         0x800E443C
    // 0x800E458C: nop

    func_800E443C(rdram, ctx);
        goto after_6;
    // 0x800E458C: nop

    after_6:
L_800E4590:
    // 0x800E4590: jal         0x80018C28
    // 0x800E4594: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_80018C28(rdram, ctx);
        goto after_7;
    // 0x800E4594: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_7:
    tooie_rt64_tag_projection(rdram, ctx, 0, (uint32_t)ctx->r16);
    // 0x800E4598: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E459C: lui         $t9, 0xDA38
    ctx->r25 = S32(0XDA38 << 16);
    // 0x800E45A0: ori         $t9, $t9, 0x7
    ctx->r25 = ctx->r25 | 0X7;
    // 0x800E45A4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x800E45A8: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x800E45AC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800E45B0: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x800E45B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E45B8: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x800E45BC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x800E45C0: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x800E45C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E45C8: addiu       $t3, $t2, 0x40
    ctx->r11 = ADD32(ctx->r10, 0X40);
    // 0x800E45CC: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x800E45D0: addiu       $t5, $t3, -0x40
    ctx->r13 = ADD32(ctx->r11, -0X40);
    // 0x800E45D4: sw          $t5, -0x2AA8($at)
    MEM_W(-0X2AA8, ctx->r1) = ctx->r13;
    // 0x800E45D8: jal         0x8002EF3C
    // 0x800E45DC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_8002EF3C(rdram, ctx);
        goto after_8;
    // 0x800E45DC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_8:
    // 0x800E45E0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800E45E4: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x800E45E8: ori         $t7, $t7, 0x3
    ctx->r15 = ctx->r15 | 0X3;
    // 0x800E45EC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E45F0: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800E45F4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E45F8: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x800E45FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E4600: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x800E4604: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800E4608: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x800E460C: addiu       $t1, $t0, 0x40
    ctx->r9 = ADD32(ctx->r8, 0X40);
    // 0x800E4610: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x800E4614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4618: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E461C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x800E4620: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E4628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4628: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E462C: addiu       $v0, $v0, -0x2AAC
    ctx->r2 = ADD32(ctx->r2, -0X2AAC);
    // 0x800E4630: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800E4634: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E4638: jr          $ra
    // 0x800E463C: sw          $zero, -0x2AA8($at)
    MEM_W(-0X2AA8, ctx->r1) = 0;
    return;
    // 0x800E463C: sw          $zero, -0x2AA8($at)
    MEM_W(-0X2AA8, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800E4640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4640: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800E4644: lw          $t6, -0x2AF8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2AF8);
    // 0x800E4648: lui         $t1, 0xDA38
    ctx->r9 = S32(0XDA38 << 16);
    // 0x800E464C: beql        $t6, $zero, L_800E4678
    if (ctx->r14 == 0) {
            // 0x800E4650: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    static_3_800E4678(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800E4650: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800E4654: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E4658: lui         $t8, 0xDE00
    ctx->r24 = S32(0XDE00 << 16);
    // 0x800E465C: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x800E4660: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800E4664: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800E4668: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800E466C: jr          $ra
    // 0x800E4670: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    return;
    // 0x800E4670: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void func_800E4674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4674: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E4678: ori         $t1, $t1, 0x7
    ctx->r9 = ctx->r9 | 0X7;
    // 0x800E467C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800E4680: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x800E4684: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x800E4688: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x800E468C: lw          $t2, -0x2AA8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2AA8);
    // 0x800E4690: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E4694: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x800E4698: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800E469C: jr          $ra
    // 0x800E46A0: nop

    return;
    // 0x800E46A0: nop

;}
RECOMP_FUNC void func_800E46A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E46A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E46A8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800E46AC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E46B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E46B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E46B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E46BC: jal         0x800F2D34
    // 0x800E46C0: addiu       $a0, $a0, -0x2AF0
    ctx->r4 = ADD32(ctx->r4, -0X2AF0);
    func_800F2D34(rdram, ctx);
        goto after_0;
    // 0x800E46C0: addiu       $a0, $a0, -0x2AF0
    ctx->r4 = ADD32(ctx->r4, -0X2AF0);
    after_0:
    // 0x800E46C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E46C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E46CC: jr          $ra
    // 0x800E46D0: nop

    return;
    // 0x800E46D0: nop

;}
RECOMP_FUNC void func_800E46D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E46D4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E46D8: jr          $ra
    // 0x800E46DC: lhu         $v0, -0x2AB0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2AB0);
    return;
    // 0x800E46DC: lhu         $v0, -0x2AB0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2AB0);
;}
RECOMP_FUNC void func_800E46E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E46E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E46E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E46E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E46EC: lui         $t7, 0xDB06
    ctx->r15 = S32(0XDB06 << 16);
    // 0x800E46F0: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x800E46F4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800E46F8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E46FC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800E4700: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800E4704: jal         0x8002E330
    // 0x800E4708: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800E4708: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800E470C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4710: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x800E4714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E4718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E471C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E4730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4730: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E4734: lw          $v0, -0x2AA0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2AA0);
    // 0x800E4738: beq         $v0, $zero, L_800E4754
    if (ctx->r2 == 0) {
            // 0x800E473C: nop

    func_800E4754(rdram, ctx);
    return;
    }
    // 0x800E473C: nop

    // 0x800E4740: lh          $t6, 0x3A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X3A);
    // 0x800E4744: bne         $a0, $t6, L_800E4754
    if (ctx->r4 != ctx->r14) {
            // 0x800E4748: nop

    func_800E4754(rdram, ctx);
    return;
    }
    // 0x800E4748: nop

    // 0x800E474C: jr          $ra
    // 0x800E4750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800E4750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800E4754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4754: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E4758: lw          $v0, -0x2A9C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2A9C);
    // 0x800E475C: beq         $v0, $zero, L_800E4778
    if (ctx->r2 == 0) {
            // 0x800E4760: nop

    func_800E4778(rdram, ctx);
    return;
    }
    // 0x800E4760: nop

    // 0x800E4764: lh          $t7, 0x3A($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X3A);
    // 0x800E4768: bne         $a0, $t7, L_800E4778
    if (ctx->r4 != ctx->r15) {
            // 0x800E476C: nop

    func_800E4778(rdram, ctx);
    return;
    }
    // 0x800E476C: nop

    // 0x800E4770: jr          $ra
    // 0x800E4774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800E4774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800E4778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4778: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E477C: lw          $v0, -0x2A98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2A98);
    // 0x800E4780: beq         $v0, $zero, L_800E479C
    if (ctx->r2 == 0) {
            // 0x800E4784: nop

    func_800E479C(rdram, ctx);
    return;
    }
    // 0x800E4784: nop

    // 0x800E4788: lh          $t8, 0x3A($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X3A);
    // 0x800E478C: bne         $a0, $t8, L_800E479C
    if (ctx->r4 != ctx->r24) {
            // 0x800E4790: nop

    func_800E479C(rdram, ctx);
    return;
    }
    // 0x800E4790: nop

    // 0x800E4794: jr          $ra
    // 0x800E4798: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800E4798: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_800E479C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E479C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E47A0: lw          $v0, -0x2A94($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2A94);
    // 0x800E47A4: beql        $v0, $zero, L_800E47C4
    if (ctx->r2 == 0) {
            // 0x800E47A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    static_3_800E47C4(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800E47A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x800E47AC: lh          $t9, 0x3A($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X3A);
    // 0x800E47B0: bnel        $a0, $t9, L_800E47C4
    if (ctx->r4 != ctx->r25) {
            // 0x800E47B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    static_3_800E47C4(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800E47B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x800E47B8: jr          $ra
    // 0x800E47BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x800E47BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
;}
RECOMP_FUNC void func_800E47C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E47C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800E47C4: jr          $ra
    // 0x800E47C8: nop

    return;
    // 0x800E47C8: nop

;}
RECOMP_FUNC void func_800E47CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E47CC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E47D0: lw          $v0, -0x2AA0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2AA0);
    // 0x800E47D4: bnel        $v0, $zero, L_800E47E8
    if (ctx->r2 != 0) {
            // 0x800E47D8: lh          $t6, 0x3A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X3A);
    static_3_800E47E8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800E47D8: lh          $t6, 0x3A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X3A);
    skip_0:
    // 0x800E47DC: jr          $ra
    // 0x800E47E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800E47E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800E47E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E47E4: lh          $t6, 0x3A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X3A);
    // 0x800E47E8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800E47EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E47F0: bne         $v1, $t6, L_800E4800
    if (ctx->r3 != ctx->r14) {
            // 0x800E47F4: nop

    func_800E4800(rdram, ctx);
    return;
    }
    // 0x800E47F4: nop

    // 0x800E47F8: jr          $ra
    // 0x800E47FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800E47FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800E4800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4800: lw          $v0, -0x2A9C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2A9C);
    // 0x800E4804: bnel        $v0, $zero, L_800E4818
    if (ctx->r2 != 0) {
            // 0x800E4808: lh          $t7, 0x3A($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X3A);
    static_3_800E4818(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800E4808: lh          $t7, 0x3A($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X3A);
    skip_0:
    // 0x800E480C: jr          $ra
    // 0x800E4810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800E4810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800E4814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4814: lh          $t7, 0x3A($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X3A);
    // 0x800E4818: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E481C: bne         $v1, $t7, L_800E482C
    if (ctx->r3 != ctx->r15) {
            // 0x800E4820: nop

    func_800E482C(rdram, ctx);
    return;
    }
    // 0x800E4820: nop

    // 0x800E4824: jr          $ra
    // 0x800E4828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800E4828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800E482C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E482C: lw          $v0, -0x2A98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2A98);
    // 0x800E4830: bnel        $v0, $zero, L_800E4844
    if (ctx->r2 != 0) {
            // 0x800E4834: lh          $t8, 0x3A($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X3A);
    static_3_800E4844(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800E4834: lh          $t8, 0x3A($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X3A);
    skip_0:
    // 0x800E4838: jr          $ra
    // 0x800E483C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800E483C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_800E4840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4840: lh          $t8, 0x3A($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X3A);
    // 0x800E4844: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E4848: bne         $v1, $t8, L_800E4858
    if (ctx->r3 != ctx->r24) {
            // 0x800E484C: nop

    func_800E4858(rdram, ctx);
    return;
    }
    // 0x800E484C: nop

    // 0x800E4850: jr          $ra
    // 0x800E4854: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800E4854: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_800E4858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4858: lw          $v0, -0x2A94($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2A94);
    // 0x800E485C: bnel        $v0, $zero, L_800E4870
    if (ctx->r2 != 0) {
            // 0x800E4860: lh          $t9, 0x3A($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X3A);
    static_3_800E4870(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800E4860: lh          $t9, 0x3A($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X3A);
    skip_0:
    // 0x800E4864: jr          $ra
    // 0x800E4868: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x800E4868: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
;}
RECOMP_FUNC void func_800E486C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E486C: lh          $t9, 0x3A($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X3A);
    // 0x800E4870: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800E4874: bne         $v1, $t9, L_800E4884
    if (ctx->r3 != ctx->r25) {
            // 0x800E4878: nop

    func_800E4884(rdram, ctx);
    return;
    }
    // 0x800E4878: nop

    // 0x800E487C: jr          $ra
    // 0x800E4880: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x800E4880: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
;}
RECOMP_FUNC void func_800E4884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4884: jr          $ra
    // 0x800E4888: nop

    return;
    // 0x800E4888: nop

;}
RECOMP_FUNC void func_800E488C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E488C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E4890: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E4894: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E4898: jal         0x800E4730
    // 0x800E489C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800E4730(rdram, ctx);
        goto after_0;
    // 0x800E489C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800E48A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E48A4: bne         $v0, $at, L_800E4900
    if (ctx->r2 != ctx->r1) {
        // 0x800E48A8: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_800E4900;
    }
    // 0x800E48A8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800E48AC: jal         0x800E47CC
    // 0x800E48B0: nop

    func_800E47CC(rdram, ctx);
        goto after_1;
    // 0x800E48B0: nop

    after_1:
    // 0x800E48B4: bgez        $v0, L_800E48C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800E48B8: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_800E48C4;
    }
    // 0x800E48B8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800E48BC: b           L_800E4ADC
    // 0x800E48C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E4ADC;
    // 0x800E48C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E48C4:
    // 0x800E48C4: jal         0x8001ACCC
    // 0x800E48C8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_8001ACCC(rdram, ctx);
        goto after_2;
    // 0x800E48C8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_2:
    // 0x800E48CC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E48D0: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800E48D4: addiu       $t8, $t8, -0x2AA0
    ctx->r24 = ADD32(ctx->r24, -0X2AA0);
    // 0x800E48D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E48DC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x800E48E0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800E48E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800E48E8: sb          $t9, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r25;
    // 0x800E48EC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x800E48F0: addiu       $t1, $zero, 0x9C4
    ctx->r9 = ADD32(0, 0X9C4);
    // 0x800E48F4: sh          $s0, 0x3A($t0)
    MEM_H(0X3A, ctx->r8) = ctx->r16;
    // 0x800E48F8: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x800E48FC: sh          $t1, 0x3C($t2)
    MEM_H(0X3C, ctx->r10) = ctx->r9;
L_800E4900:
    // 0x800E4900: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E4904: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800E4908: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800E490C: addu        $s0, $s0, $t4
    ctx->r16 = ADD32(ctx->r16, ctx->r12);
    // 0x800E4910: lw          $s0, -0x2AA0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X2AA0);
    // 0x800E4914: lbu         $v0, 0x38($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X38);
    // 0x800E4918: bne         $v0, $zero, L_800E4928
    if (ctx->r2 != 0) {
        // 0x800E491C: sltiu       $at, $v0, 0x5
        ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
            goto L_800E4928;
    }
    // 0x800E491C: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x800E4920: b           L_800E4ADC
    // 0x800E4924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800E4ADC;
    // 0x800E4924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800E4928:
    // 0x800E4928: beq         $at, $zero, L_800E4AD8
    if (ctx->r1 == 0) {
        // 0x800E492C: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_800E4AD8;
    }
    // 0x800E492C: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x800E4930: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E4934: addu        $at, $at, $t5
    gpr jr_addend_800E493C = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800E4938: lw          $t5, 0x5DA0($at)
    ctx->r13 = ADD32(ctx->r1, 0X5DA0);
    // 0x800E493C: jr          $t5
    // 0x800E4940: nop

    switch (jr_addend_800E493C >> 2) {
        case 0: goto L_800E4AD0; break;
        case 1: goto L_800E4944; break;
        case 2: goto L_800E49DC; break;
        case 3: goto L_800E4A50; break;
        case 4: goto L_800E4A6C; break;
        default: switch_error(__func__, 0x800E493C, 0x80125DA0);
    }
    // 0x800E4940: nop

L_800E4944:
    // 0x800E4944: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x800E4948: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x800E494C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x800E4950: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x800E4954: jal         0x8001ACCC
    // 0x800E4958: addiu       $a0, $zero, 0x2800
    ctx->r4 = ADD32(0, 0X2800);
    func_8001ACCC(rdram, ctx);
        goto after_3;
    // 0x800E4958: addiu       $a0, $zero, 0x2800
    ctx->r4 = ADD32(0, 0X2800);
    after_3:
    // 0x800E495C: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x800E4960: jal         0x800D5A6C
    // 0x800E4964: lh          $a0, 0x3A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3A);
    func_800D5A6C(rdram, ctx);
        goto after_4;
    // 0x800E4964: lh          $a0, 0x3A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3A);
    after_4:
    // 0x800E4968: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x800E496C: jal         0x8001ACCC
    // 0x800E4970: addiu       $a0, $zero, 0x1800
    ctx->r4 = ADD32(0, 0X1800);
    func_8001ACCC(rdram, ctx);
        goto after_5;
    // 0x800E4970: addiu       $a0, $zero, 0x1800
    ctx->r4 = ADD32(0, 0X1800);
    after_5:
    // 0x800E4974: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800E4978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E497C: jal         0x8001311C
    // 0x800E4980: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_6;
    // 0x800E4980: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_6:
    // 0x800E4984: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x800E4988: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800E498C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800E4990: addiu       $t7, $t6, 0x1800
    ctx->r15 = ADD32(ctx->r14, 0X1800);
    // 0x800E4994: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x800E4998: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x800E499C: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x800E49A0: srl         $t9, $a0, 16
    ctx->r25 = S32(U32(ctx->r4) >> 16);
    // 0x800E49A4: jal         0x8001ACCC
    // 0x800E49A8: sll         $a0, $t9, 4
    ctx->r4 = S32(ctx->r25 << 4);
    func_8001ACCC(rdram, ctx);
        goto after_7;
    // 0x800E49A8: sll         $a0, $t9, 4
    ctx->r4 = S32(ctx->r25 << 4);
    after_7:
    // 0x800E49AC: bne         $v0, $zero, L_800E49C4
    if (ctx->r2 != 0) {
        // 0x800E49B0: sw          $v0, 0x34($s0)
        MEM_W(0X34, ctx->r16) = ctx->r2;
            goto L_800E49C4;
    }
    // 0x800E49B0: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x800E49B4: jal         0x800E4B1C
    // 0x800E49B8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800E4B1C(rdram, ctx);
        goto after_8;
    // 0x800E49B8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x800E49BC: b           L_800E4ADC
    // 0x800E49C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E4ADC;
    // 0x800E49C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E49C4:
    // 0x800E49C4: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x800E49C8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800E49CC: sb          $t3, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r11;
    // 0x800E49D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E49D4: b           L_800E4ADC
    // 0x800E49D8: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
        goto L_800E4ADC;
    // 0x800E49D8: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
L_800E49DC:
    // 0x800E49DC: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x800E49E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800E49E4: jal         0x800E4D28
    // 0x800E49E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E4D28(rdram, ctx);
        goto after_9;
    // 0x800E49E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x800E49EC: beq         $v0, $zero, L_800E4A20
    if (ctx->r2 == 0) {
        // 0x800E49F0: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_800E4A20;
    }
    // 0x800E49F0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800E49F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E49F8: beq         $v0, $at, L_800E4A38
    if (ctx->r2 == ctx->r1) {
        // 0x800E49FC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800E4A38;
    }
    // 0x800E49FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E4A00: bne         $v0, $at, L_800E4A48
    if (ctx->r2 != ctx->r1) {
        // 0x800E4A04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800E4A48;
    }
    // 0x800E4A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E4A08: jal         0x800E5EC0
    // 0x800E4A0C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800E5EC0(rdram, ctx);
        goto after_10;
    // 0x800E4A0C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_10:
    // 0x800E4A10: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800E4A14: sb          $t4, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r12;
    // 0x800E4A18: b           L_800E4ADC
    // 0x800E4A1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E4ADC;
    // 0x800E4A1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E4A20:
    // 0x800E4A20: jal         0x800E6728
    // 0x800E4A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E6728(rdram, ctx);
        goto after_11;
    // 0x800E4A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x800E4A28: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800E4A2C: sb          $t5, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r13;
    // 0x800E4A30: b           L_800E4ADC
    // 0x800E4A34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E4ADC;
    // 0x800E4A34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E4A38:
    // 0x800E4A38: jal         0x800E659C
    // 0x800E4A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E659C(rdram, ctx);
        goto after_12;
    // 0x800E4A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x800E4A40: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800E4A44: sb          $t6, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r14;
L_800E4A48:
    // 0x800E4A48: b           L_800E4ADC
    // 0x800E4A4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E4ADC;
    // 0x800E4A4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E4A50:
    // 0x800E4A50: jal         0x800E4E54
    // 0x800E4A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E4E54(rdram, ctx);
        goto after_13;
    // 0x800E4A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x800E4A58: bne         $v0, $zero, L_800E4A64
    if (ctx->r2 != 0) {
        // 0x800E4A5C: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_800E4A64;
    }
    // 0x800E4A5C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800E4A60: sb          $t7, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r15;
L_800E4A64:
    // 0x800E4A64: b           L_800E4ADC
    // 0x800E4A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E4ADC;
    // 0x800E4A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E4A6C:
    // 0x800E4A6C: lbu         $t8, 0x39($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X39);
    // 0x800E4A70: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800E4A74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E4A78: beq         $t8, $zero, L_800E4AC8
    if (ctx->r24 == 0) {
        // 0x800E4A7C: nop
    
            goto L_800E4AC8;
    }
    // 0x800E4A7C: nop

    // 0x800E4A80: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x800E4A84: beql        $a0, $zero, L_800E4A9C
    if (ctx->r4 == 0) {
        // 0x800E4A88: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800E4A9C;
    }
    goto skip_0;
    // 0x800E4A88: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x800E4A8C: jal         0x8001B084
    // 0x800E4A90: nop

    func_8001B084(rdram, ctx);
        goto after_14;
    // 0x800E4A90: nop

    after_14:
    // 0x800E4A94: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x800E4A98: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800E4A9C:
    // 0x800E4A9C: beql        $a0, $zero, L_800E4AB4
    if (ctx->r4 == 0) {
        // 0x800E4AA0: sb          $zero, 0x38($s0)
        MEM_B(0X38, ctx->r16) = 0;
            goto L_800E4AB4;
    }
    goto skip_1;
    // 0x800E4AA0: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
    skip_1:
    // 0x800E4AA4: jal         0x8001B084
    // 0x800E4AA8: nop

    func_8001B084(rdram, ctx);
        goto after_15;
    // 0x800E4AA8: nop

    after_15:
    // 0x800E4AAC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800E4AB0: sb          $zero, 0x38($s0)
    MEM_B(0X38, ctx->r16) = 0;
L_800E4AB4:
    // 0x800E4AB4: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x800E4AB8: jal         0x8002E660
    // 0x800E4ABC: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_16;
    // 0x800E4ABC: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_16:
    // 0x800E4AC0: b           L_800E4ADC
    // 0x800E4AC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800E4ADC;
    // 0x800E4AC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800E4AC8:
    // 0x800E4AC8: b           L_800E4ADC
    // 0x800E4ACC: sb          $t9, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r25;
        goto L_800E4ADC;
    // 0x800E4ACC: sb          $t9, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r25;
L_800E4AD0:
    // 0x800E4AD0: b           L_800E4ADC
    // 0x800E4AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800E4ADC;
    // 0x800E4AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800E4AD8:
    // 0x800E4AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E4ADC:
    // 0x800E4ADC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4AE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E4AE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800E4AE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E4AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E4AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4AF8: jal         0x800E4730
    // 0x800E4AFC: nop

    func_800E4730(rdram, ctx);
        goto after_0;
    // 0x800E4AFC: nop

    after_0:
    // 0x800E4B00: bgez        $v0, L_800E4B10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800E4B04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E4B10;
    }
    // 0x800E4B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E4B08: b           L_800E4B14
    // 0x800E4B0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E4B14;
    // 0x800E4B0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E4B10:
    // 0x800E4B10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800E4B14:
    // 0x800E4B14: jr          $ra
    // 0x800E4B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800E4B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800E4B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4B1C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800E4B20: addiu       $t7, $t7, -0x2AA0
    ctx->r15 = ADD32(ctx->r15, -0X2AA0);
    // 0x800E4B24: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800E4B28: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800E4B2C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x800E4B30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E4B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4B38: beql        $a1, $zero, L_800E4BAC
    if (ctx->r5 == 0) {
        // 0x800E4B3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E4BAC;
    }
    goto skip_0;
    // 0x800E4B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E4B40: lw          $a0, 0x34($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X34);
    // 0x800E4B44: beql        $a0, $zero, L_800E4B60
    if (ctx->r4 == 0) {
        // 0x800E4B48: lw          $a0, 0x0($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X0);
            goto L_800E4B60;
    }
    goto skip_1;
    // 0x800E4B48: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    skip_1:
    // 0x800E4B4C: jal         0x8001B084
    // 0x800E4B50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800E4B50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800E4B54: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4B58: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x800E4B5C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
L_800E4B60:
    // 0x800E4B60: beql        $a0, $zero, L_800E4B7C
    if (ctx->r4 == 0) {
        // 0x800E4B64: lw          $a0, 0x28($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X28);
            goto L_800E4B7C;
    }
    goto skip_2;
    // 0x800E4B64: lw          $a0, 0x28($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X28);
    skip_2:
    // 0x800E4B68: jal         0x8001B084
    // 0x800E4B6C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x800E4B6C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800E4B70: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4B74: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x800E4B78: lw          $a0, 0x28($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X28);
L_800E4B7C:
    // 0x800E4B7C: beql        $a0, $zero, L_800E4B98
    if (ctx->r4 == 0) {
        // 0x800E4B80: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_800E4B98;
    }
    goto skip_3;
    // 0x800E4B80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_3:
    // 0x800E4B84: jal         0x8001B084
    // 0x800E4B88: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B084(rdram, ctx);
        goto after_2;
    // 0x800E4B88: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x800E4B8C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4B90: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x800E4B94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_800E4B98:
    // 0x800E4B98: jal         0x8001B084
    // 0x800E4B9C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x800E4B9C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x800E4BA0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4BA4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800E4BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E4BAC:
    // 0x800E4BAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E4BB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E4BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E4BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E4BC0: jal         0x800E4730
    // 0x800E4BC4: nop

    func_800E4730(rdram, ctx);
        goto after_0;
    // 0x800E4BC4: nop

    after_0:
    // 0x800E4BC8: bgez        $v0, L_800E4BD8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800E4BCC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800E4BD8;
    }
    // 0x800E4BCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E4BD0: b           L_800E4BE4
    // 0x800E4BD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E4BE4;
    // 0x800E4BD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E4BD8:
    // 0x800E4BD8: jal         0x800E4B1C
    // 0x800E4BDC: nop

    func_800E4B1C(rdram, ctx);
        goto after_1;
    // 0x800E4BDC: nop

    after_1:
    // 0x800E4BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800E4BE4:
    // 0x800E4BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E4BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E4BEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E4BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4BF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E4BF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E4BFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E4C00: jal         0x800E4730
    // 0x800E4C04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800E4730(rdram, ctx);
        goto after_0;
    // 0x800E4C04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800E4C08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E4C0C: bne         $v0, $at, L_800E4C1C
    if (ctx->r2 != ctx->r1) {
        // 0x800E4C10: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_800E4C1C;
    }
    // 0x800E4C10: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800E4C14: b           L_800E4C68
    // 0x800E4C18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E4C68;
    // 0x800E4C18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E4C1C:
    // 0x800E4C1C: jal         0x800E488C
    // 0x800E4C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E488C(rdram, ctx);
        goto after_1;
    // 0x800E4C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800E4C24: bnel        $v0, $zero, L_800E4C40
    if (ctx->r2 != 0) {
        // 0x800E4C28: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_800E4C40;
    }
    goto skip_0;
    // 0x800E4C28: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_800E4C2C:
    // 0x800E4C2C: jal         0x800E488C
    // 0x800E4C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E488C(rdram, ctx);
        goto after_2;
    // 0x800E4C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800E4C34: beq         $v0, $zero, L_800E4C2C
    if (ctx->r2 == 0) {
        // 0x800E4C38: nop
    
            goto L_800E4C2C;
    }
    // 0x800E4C38: nop

    // 0x800E4C3C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_800E4C40:
    // 0x800E4C40: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800E4C44: addiu       $t8, $t8, -0x2AA0
    ctx->r24 = ADD32(ctx->r24, -0X2AA0);
    // 0x800E4C48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E4C4C: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x800E4C50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800E4C54: lw          $t9, 0x34($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X34);
    // 0x800E4C58: jal         0x8001B084
    // 0x800E4C5C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x800E4C5C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_3:
    // 0x800E4C60: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800E4C64: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_800E4C68:
    // 0x800E4C68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4C6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E4C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E4C74: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E4C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4C7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E4C80: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E4C84: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E4C88: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800E4C8C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800E4C90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E4C94: addiu       $s1, $s1, -0x2A90
    ctx->r17 = ADD32(ctx->r17, -0X2A90);
    // 0x800E4C98: addiu       $s0, $s0, -0x2AA0
    ctx->r16 = ADD32(ctx->r16, -0X2AA0);
    // 0x800E4C9C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800E4CA0:
    // 0x800E4CA0: beql        $a0, $zero, L_800E4CB8
    if (ctx->r4 == 0) {
        // 0x800E4CA4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800E4CB8;
    }
    goto skip_0;
    // 0x800E4CA4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800E4CA8: jal         0x8001BAFC
    // 0x800E4CAC: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x800E4CAC: nop

    after_0:
    // 0x800E4CB0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800E4CB4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800E4CB8:
    // 0x800E4CB8: bnel        $s0, $s1, L_800E4CA0
    if (ctx->r16 != ctx->r17) {
        // 0x800E4CBC: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800E4CA0;
    }
    goto skip_1;
    // 0x800E4CBC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x800E4CC0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800E4CC4: addiu       $s0, $s0, -0x2A90
    ctx->r16 = ADD32(ctx->r16, -0X2A90);
    // 0x800E4CC8: jal         0x8001BAFC
    // 0x800E4CCC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    defrag(rdram, ctx);
        goto after_1;
    // 0x800E4CCC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x800E4CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4CD4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800E4CD8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E4CDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E4CE0: jr          $ra
    // 0x800E4CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800E4CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800E4CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4CE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E4CEC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E4CF0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E4CF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E4CF8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800E4CFC: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_800E4D00:
    // 0x800E4D00: jal         0x800E4B1C
    // 0x800E4D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E4B1C(rdram, ctx);
        goto after_0;
    // 0x800E4D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800E4D08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800E4D0C: bne         $s0, $s1, L_800E4D00
    if (ctx->r16 != ctx->r17) {
        // 0x800E4D10: nop
    
            goto L_800E4D00;
    }
    // 0x800E4D10: nop

    // 0x800E4D14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4D18: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E4D1C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E4D20: jr          $ra
    // 0x800E4D24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800E4D24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800E4D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4D28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E4D2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E4D30: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800E4D34: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800E4D38: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E4D3C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E4D40: lw          $s1, 0x10($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X10);
    // 0x800E4D44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E4D48: lw          $s3, 0xC($a0)
    ctx->r19 = MEM_W(ctx->r4, 0XC);
    // 0x800E4D4C: bnel        $s1, $zero, L_800E4DB0
    if (ctx->r17 != 0) {
        // 0x800E4D50: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_800E4DB0;
    }
    goto skip_0;
    // 0x800E4D50: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_0:
    // 0x800E4D54: lw          $s2, 0x0($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X0);
L_800E4D58:
    // 0x800E4D58: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E4D5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800E4D60: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E4D64: bnel        $at, $zero, L_800E4D90
    if (ctx->r1 != 0) {
        // 0x800E4D68: addu        $t8, $s2, $v0
        ctx->r24 = ADD32(ctx->r18, ctx->r2);
            goto L_800E4D90;
    }
    goto skip_1;
    // 0x800E4D68: addu        $t8, $s2, $v0
    ctx->r24 = ADD32(ctx->r18, ctx->r2);
    skip_1:
    // 0x800E4D6C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E4D70: jal         0x8001311C
    // 0x800E4D74: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_0;
    // 0x800E4D74: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_0:
    // 0x800E4D78: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x800E4D7C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E4D80: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x800E4D84: addiu       $t7, $t6, 0x1800
    ctx->r15 = ADD32(ctx->r14, 0X1800);
    // 0x800E4D88: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x800E4D8C: addu        $t8, $s2, $v0
    ctx->r24 = ADD32(ctx->r18, ctx->r2);
L_800E4D90:
    // 0x800E4D90: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x800E4D94: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x800E4D98: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x800E4D9C: sllv        $t0, $t9, $s1
    ctx->r8 = S32(ctx->r25 << (ctx->r17 & 31));
    // 0x800E4DA0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800E4DA4: beq         $s1, $zero, L_800E4D58
    if (ctx->r17 == 0) {
        // 0x800E4DA8: or          $s3, $s3, $t0
        ctx->r19 = ctx->r19 | ctx->r8;
            goto L_800E4D58;
    }
    // 0x800E4DA8: or          $s3, $s3, $t0
    ctx->r19 = ctx->r19 | ctx->r8;
    // 0x800E4DAC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_800E4DB0:
    // 0x800E4DB0: andi        $t2, $s3, 0x1
    ctx->r10 = ctx->r19 & 0X1;
    // 0x800E4DB4: srl         $t3, $s3, 1
    ctx->r11 = S32(U32(ctx->r19) >> 1);
    // 0x800E4DB8: sltiu       $at, $s1, 0x2
    ctx->r1 = ctx->r17 < 0X2 ? 1 : 0;
    // 0x800E4DBC: sb          $t2, 0x39($s0)
    MEM_B(0X39, ctx->r16) = ctx->r10;
    // 0x800E4DC0: beq         $at, $zero, L_800E4E24
    if (ctx->r1 == 0) {
        // 0x800E4DC4: or          $s3, $t3, $zero
        ctx->r19 = ctx->r11 | 0;
            goto L_800E4E24;
    }
    // 0x800E4DC4: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
    // 0x800E4DC8: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
L_800E4DCC:
    // 0x800E4DCC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E4DD0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800E4DD4: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E4DD8: bnel        $at, $zero, L_800E4E04
    if (ctx->r1 != 0) {
        // 0x800E4DDC: addu        $t6, $s2, $v0
        ctx->r14 = ADD32(ctx->r18, ctx->r2);
            goto L_800E4E04;
    }
    goto skip_2;
    // 0x800E4DDC: addu        $t6, $s2, $v0
    ctx->r14 = ADD32(ctx->r18, ctx->r2);
    skip_2:
    // 0x800E4DE0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E4DE4: jal         0x8001311C
    // 0x800E4DE8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_1;
    // 0x800E4DE8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x800E4DEC: lw          $t4, 0x30($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X30);
    // 0x800E4DF0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E4DF4: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x800E4DF8: addiu       $t5, $t4, 0x1800
    ctx->r13 = ADD32(ctx->r12, 0X1800);
    // 0x800E4DFC: sw          $t5, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r13;
    // 0x800E4E00: addu        $t6, $s2, $v0
    ctx->r14 = ADD32(ctx->r18, ctx->r2);
L_800E4E04:
    // 0x800E4E04: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800E4E08: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x800E4E0C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x800E4E10: sllv        $t8, $t7, $s1
    ctx->r24 = S32(ctx->r15 << (ctx->r17 & 31));
    // 0x800E4E14: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800E4E18: sltiu       $at, $s1, 0x2
    ctx->r1 = ctx->r17 < 0X2 ? 1 : 0;
    // 0x800E4E1C: bne         $at, $zero, L_800E4DCC
    if (ctx->r1 != 0) {
        // 0x800E4E20: or          $s3, $s3, $t8
        ctx->r19 = ctx->r19 | ctx->r24;
            goto L_800E4DCC;
    }
    // 0x800E4E20: or          $s3, $s3, $t8
    ctx->r19 = ctx->r19 | ctx->r24;
L_800E4E24:
    // 0x800E4E24: srl         $t0, $s3, 2
    ctx->r8 = S32(U32(ctx->r19) >> 2);
    // 0x800E4E28: addiu       $s1, $s1, -0x2
    ctx->r17 = ADD32(ctx->r17, -0X2);
    // 0x800E4E2C: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
    // 0x800E4E30: sw          $s1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r17;
    // 0x800E4E34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E4E38: andi        $v0, $s3, 0x3
    ctx->r2 = ctx->r19 & 0X3;
    // 0x800E4E3C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800E4E40: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4E44: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E4E48: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E4E4C: jr          $ra
    // 0x800E4E50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E4E50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E4E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4E54: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800E4E58: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800E4E5C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800E4E60: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800E4E64: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800E4E68: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800E4E6C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800E4E70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800E4E74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800E4E78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800E4E7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E4E80: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x800E4E84: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800E4E88: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E4E8C: addiu       $t0, $t0, 0x32C0
    ctx->r8 = ADD32(ctx->r8, 0X32C0);
    // 0x800E4E90: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x800E4E94: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x800E4E98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E4E9C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x800E4EA0: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x800E4EA4: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x800E4EA8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x800E4EAC: lw          $s4, 0xC($a0)
    ctx->r20 = MEM_W(ctx->r4, 0XC);
    // 0x800E4EB0: lw          $s2, 0x10($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X10);
    // 0x800E4EB4: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x800E4EB8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800E4EBC: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x800E4EC0: lw          $fp, 0x14($a0)
    ctx->r30 = MEM_W(ctx->r4, 0X14);
    // 0x800E4EC4: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x800E4EC8: lw          $t3, 0x24($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X24);
    // 0x800E4ECC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800E4ED0: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x800E4ED4: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x800E4ED8: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
L_800E4EDC:
    // 0x800E4EDC: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x800E4EE0: beq         $at, $zero, L_800E4F48
    if (ctx->r1 == 0) {
        // 0x800E4EE4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800E4F48;
    }
    // 0x800E4EE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800E4EE8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E4EEC:
    // 0x800E4EEC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E4EF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E4EF4: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E4EF8: bnel        $at, $zero, L_800E4F28
    if (ctx->r1 != 0) {
        // 0x800E4EFC: addu        $t9, $s1, $v0
        ctx->r25 = ADD32(ctx->r17, ctx->r2);
            goto L_800E4F28;
    }
    goto skip_0;
    // 0x800E4EFC: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
    skip_0:
    // 0x800E4F00: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E4F04: jal         0x8001311C
    // 0x800E4F08: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_0;
    // 0x800E4F08: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_0:
    // 0x800E4F0C: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x800E4F10: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x800E4F14: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E4F18: addiu       $t8, $t7, 0x1800
    ctx->r24 = ADD32(ctx->r15, 0X1800);
    // 0x800E4F1C: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x800E4F20: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E4F24: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
L_800E4F28:
    // 0x800E4F28: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x800E4F2C: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x800E4F30: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x800E4F34: sllv        $t2, $t1, $s2
    ctx->r10 = S32(ctx->r9 << (ctx->r18 & 31));
    // 0x800E4F38: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E4F3C: sltu        $at, $s2, $v1
    ctx->r1 = ctx->r18 < ctx->r3 ? 1 : 0;
    // 0x800E4F40: bne         $at, $zero, L_800E4EEC
    if (ctx->r1 != 0) {
        // 0x800E4F44: or          $s4, $s4, $t2
        ctx->r20 = ctx->r20 | ctx->r10;
            goto L_800E4EEC;
    }
    // 0x800E4F44: or          $s4, $s4, $t2
    ctx->r20 = ctx->r20 | ctx->r10;
L_800E4F48:
    // 0x800E4F48: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x800E4F4C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800E4F50: and         $t0, $s4, $t4
    ctx->r8 = ctx->r20 & ctx->r12;
    // 0x800E4F54: sll         $t5, $t0, 3
    ctx->r13 = S32(ctx->r8 << 3);
    // 0x800E4F58: addu        $s6, $t5, $t6
    ctx->r22 = ADD32(ctx->r13, ctx->r14);
    // 0x800E4F5C: lbu         $s3, 0x0($s6)
    ctx->r19 = MEM_BU(ctx->r22, 0X0);
    // 0x800E4F60: sltiu       $at, $s3, 0x11
    ctx->r1 = ctx->r19 < 0X11 ? 1 : 0;
    // 0x800E4F64: bnel        $at, $zero, L_800E5014
    if (ctx->r1 != 0) {
        // 0x800E4F68: lbu         $v0, 0x1($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X1);
            goto L_800E5014;
    }
    goto skip_1;
    // 0x800E4F68: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    skip_1:
    // 0x800E4F6C: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
L_800E4F70:
    // 0x800E4F70: addiu       $s3, $s3, -0x10
    ctx->r19 = ADD32(ctx->r19, -0X10);
    // 0x800E4F74: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800E4F78: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E4F7C: beq         $at, $zero, L_800E4FE0
    if (ctx->r1 == 0) {
        // 0x800E4F80: srlv        $s4, $s4, $v0
        ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
            goto L_800E4FE0;
    }
    // 0x800E4F80: srlv        $s4, $s4, $v0
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
    // 0x800E4F84: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E4F88:
    // 0x800E4F88: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E4F8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E4F90: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E4F94: bnel        $at, $zero, L_800E4FC0
    if (ctx->r1 != 0) {
        // 0x800E4F98: addu        $t9, $s1, $v0
        ctx->r25 = ADD32(ctx->r17, ctx->r2);
            goto L_800E4FC0;
    }
    goto skip_2;
    // 0x800E4F98: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
    skip_2:
    // 0x800E4F9C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E4FA0: jal         0x8001311C
    // 0x800E4FA4: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_1;
    // 0x800E4FA4: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x800E4FA8: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x800E4FAC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E4FB0: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E4FB4: addiu       $t8, $t7, 0x1800
    ctx->r24 = ADD32(ctx->r15, 0X1800);
    // 0x800E4FB8: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x800E4FBC: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
L_800E4FC0:
    // 0x800E4FC0: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x800E4FC4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x800E4FC8: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x800E4FCC: sllv        $t2, $t1, $s2
    ctx->r10 = S32(ctx->r9 << (ctx->r18 & 31));
    // 0x800E4FD0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E4FD4: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E4FD8: bne         $at, $zero, L_800E4F88
    if (ctx->r1 != 0) {
        // 0x800E4FDC: or          $s4, $s4, $t2
        ctx->r20 = ctx->r20 | ctx->r10;
            goto L_800E4F88;
    }
    // 0x800E4FDC: or          $s4, $s4, $t2
    ctx->r20 = ctx->r20 | ctx->r10;
L_800E4FE0:
    // 0x800E4FE0: sll         $t4, $s3, 1
    ctx->r12 = S32(ctx->r19 << 1);
    // 0x800E4FE4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E4FE8: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x800E4FEC: lhu         $t0, 0x32C0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X32C0);
    // 0x800E4FF0: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x800E4FF4: and         $t5, $t0, $s4
    ctx->r13 = ctx->r8 & ctx->r20;
    // 0x800E4FF8: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800E4FFC: addu        $s6, $t6, $t7
    ctx->r22 = ADD32(ctx->r14, ctx->r15);
    // 0x800E5000: lbu         $s3, 0x0($s6)
    ctx->r19 = MEM_BU(ctx->r22, 0X0);
    // 0x800E5004: sltiu       $at, $s3, 0x11
    ctx->r1 = ctx->r19 < 0X11 ? 1 : 0;
    // 0x800E5008: beql        $at, $zero, L_800E4F70
    if (ctx->r1 == 0) {
        // 0x800E500C: lbu         $v0, 0x1($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X1);
            goto L_800E4F70;
    }
    goto skip_3;
    // 0x800E500C: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    skip_3:
    // 0x800E5010: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
L_800E5014:
    // 0x800E5014: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800E5018: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800E501C: srlv        $s4, $s4, $v0
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
    // 0x800E5020: bne         $s3, $at, L_800E503C
    if (ctx->r19 != ctx->r1) {
        // 0x800E5024: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_800E503C;
    }
    // 0x800E5024: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800E5028: lhu         $t8, 0x4($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X4);
    // 0x800E502C: addu        $t1, $t9, $fp
    ctx->r9 = ADD32(ctx->r25, ctx->r30);
    // 0x800E5030: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x800E5034: b           L_800E531C
    // 0x800E5038: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
        goto L_800E531C;
    // 0x800E5038: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
L_800E503C:
    // 0x800E503C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800E5040: beq         $s3, $at, L_800E5350
    if (ctx->r19 == ctx->r1) {
        // 0x800E5044: lw          $t2, 0x40($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X40);
            goto L_800E5350;
    }
    // 0x800E5044: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800E5048: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E504C: beq         $at, $zero, L_800E50B0
    if (ctx->r1 == 0) {
        // 0x800E5050: addu        $s5, $t2, $fp
        ctx->r21 = ADD32(ctx->r10, ctx->r30);
            goto L_800E50B0;
    }
    // 0x800E5050: addu        $s5, $t2, $fp
    ctx->r21 = ADD32(ctx->r10, ctx->r30);
    // 0x800E5054: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E5058:
    // 0x800E5058: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E505C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E5060: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E5064: bnel        $at, $zero, L_800E5090
    if (ctx->r1 != 0) {
        // 0x800E5068: addu        $t0, $s1, $v0
        ctx->r8 = ADD32(ctx->r17, ctx->r2);
            goto L_800E5090;
    }
    goto skip_4;
    // 0x800E5068: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
    skip_4:
    // 0x800E506C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E5070: jal         0x8001311C
    // 0x800E5074: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_2;
    // 0x800E5074: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_2:
    // 0x800E5078: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x800E507C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5080: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E5084: addiu       $t4, $t3, 0x1800
    ctx->r12 = ADD32(ctx->r11, 0X1800);
    // 0x800E5088: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x800E508C: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
L_800E5090:
    // 0x800E5090: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x800E5094: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x800E5098: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x800E509C: sllv        $t6, $t5, $s2
    ctx->r14 = S32(ctx->r13 << (ctx->r18 & 31));
    // 0x800E50A0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E50A4: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E50A8: bne         $at, $zero, L_800E5058
    if (ctx->r1 != 0) {
        // 0x800E50AC: or          $s4, $s4, $t6
        ctx->r20 = ctx->r20 | ctx->r14;
            goto L_800E5058;
    }
    // 0x800E50AC: or          $s4, $s4, $t6
    ctx->r20 = ctx->r20 | ctx->r14;
L_800E50B0:
    // 0x800E50B0: sll         $t9, $s3, 1
    ctx->r25 = S32(ctx->r19 << 1);
    // 0x800E50B4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E50B8: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800E50BC: lhu         $t8, 0x32C0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X32C0);
    // 0x800E50C0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x800E50C4: lhu         $t2, 0x4($s6)
    ctx->r10 = MEM_HU(ctx->r22, 0X4);
    // 0x800E50C8: subu        $s2, $s2, $s3
    ctx->r18 = SUB32(ctx->r18, ctx->r19);
    // 0x800E50CC: and         $t1, $t8, $s4
    ctx->r9 = ctx->r24 & ctx->r20;
    // 0x800E50D0: sltu        $at, $s2, $v1
    ctx->r1 = ctx->r18 < ctx->r3 ? 1 : 0;
    // 0x800E50D4: srlv        $s4, $s4, $s3
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r19 & 31));
    // 0x800E50D8: beq         $at, $zero, L_800E5140
    if (ctx->r1 == 0) {
        // 0x800E50DC: addu        $s7, $t1, $t2
        ctx->r23 = ADD32(ctx->r9, ctx->r10);
            goto L_800E5140;
    }
    // 0x800E50DC: addu        $s7, $t1, $t2
    ctx->r23 = ADD32(ctx->r9, ctx->r10);
    // 0x800E50E0: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E50E4:
    // 0x800E50E4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E50E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E50EC: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E50F0: bnel        $at, $zero, L_800E5120
    if (ctx->r1 != 0) {
        // 0x800E50F4: addu        $t0, $s1, $v0
        ctx->r8 = ADD32(ctx->r17, ctx->r2);
            goto L_800E5120;
    }
    goto skip_5;
    // 0x800E50F4: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
    skip_5:
    // 0x800E50F8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E50FC: jal         0x8001311C
    // 0x800E5100: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_3;
    // 0x800E5100: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_3:
    // 0x800E5104: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x800E5108: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E510C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E5110: addiu       $t4, $t3, 0x1800
    ctx->r12 = ADD32(ctx->r11, 0X1800);
    // 0x800E5114: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x800E5118: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x800E511C: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
L_800E5120:
    // 0x800E5120: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x800E5124: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x800E5128: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x800E512C: sllv        $t6, $t5, $s2
    ctx->r14 = S32(ctx->r13 << (ctx->r18 & 31));
    // 0x800E5130: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E5134: sltu        $at, $s2, $v1
    ctx->r1 = ctx->r18 < ctx->r3 ? 1 : 0;
    // 0x800E5138: bne         $at, $zero, L_800E50E4
    if (ctx->r1 != 0) {
        // 0x800E513C: or          $s4, $s4, $t6
        ctx->r20 = ctx->r20 | ctx->r14;
            goto L_800E50E4;
    }
    // 0x800E513C: or          $s4, $s4, $t6
    ctx->r20 = ctx->r20 | ctx->r14;
L_800E5140:
    // 0x800E5140: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x800E5144: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E5148: and         $t8, $s4, $t9
    ctx->r24 = ctx->r20 & ctx->r25;
    // 0x800E514C: sll         $t1, $t8, 3
    ctx->r9 = S32(ctx->r24 << 3);
    // 0x800E5150: addu        $s6, $t1, $t2
    ctx->r22 = ADD32(ctx->r9, ctx->r10);
    // 0x800E5154: lbu         $s3, 0x0($s6)
    ctx->r19 = MEM_BU(ctx->r22, 0X0);
    // 0x800E5158: sltiu       $at, $s3, 0x11
    ctx->r1 = ctx->r19 < 0X11 ? 1 : 0;
    // 0x800E515C: bnel        $at, $zero, L_800E520C
    if (ctx->r1 != 0) {
        // 0x800E5160: lbu         $v0, 0x1($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X1);
            goto L_800E520C;
    }
    goto skip_6;
    // 0x800E5160: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    skip_6:
    // 0x800E5164: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
L_800E5168:
    // 0x800E5168: addiu       $s3, $s3, -0x10
    ctx->r19 = ADD32(ctx->r19, -0X10);
    // 0x800E516C: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800E5170: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E5174: beq         $at, $zero, L_800E51D8
    if (ctx->r1 == 0) {
        // 0x800E5178: srlv        $s4, $s4, $v0
        ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
            goto L_800E51D8;
    }
    // 0x800E5178: srlv        $s4, $s4, $v0
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
    // 0x800E517C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E5180:
    // 0x800E5180: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5184: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E5188: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E518C: bnel        $at, $zero, L_800E51B8
    if (ctx->r1 != 0) {
        // 0x800E5190: addu        $t0, $s1, $v0
        ctx->r8 = ADD32(ctx->r17, ctx->r2);
            goto L_800E51B8;
    }
    goto skip_7;
    // 0x800E5190: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
    skip_7:
    // 0x800E5194: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E5198: jal         0x8001311C
    // 0x800E519C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_4;
    // 0x800E519C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_4:
    // 0x800E51A0: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x800E51A4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E51A8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E51AC: addiu       $t4, $t3, 0x1800
    ctx->r12 = ADD32(ctx->r11, 0X1800);
    // 0x800E51B0: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x800E51B4: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
L_800E51B8:
    // 0x800E51B8: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x800E51BC: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x800E51C0: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x800E51C4: sllv        $t6, $t5, $s2
    ctx->r14 = S32(ctx->r13 << (ctx->r18 & 31));
    // 0x800E51C8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E51CC: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E51D0: bne         $at, $zero, L_800E5180
    if (ctx->r1 != 0) {
        // 0x800E51D4: or          $s4, $s4, $t6
        ctx->r20 = ctx->r20 | ctx->r14;
            goto L_800E5180;
    }
    // 0x800E51D4: or          $s4, $s4, $t6
    ctx->r20 = ctx->r20 | ctx->r14;
L_800E51D8:
    // 0x800E51D8: sll         $t9, $s3, 1
    ctx->r25 = S32(ctx->r19 << 1);
    // 0x800E51DC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E51E0: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800E51E4: lhu         $t8, 0x32C0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X32C0);
    // 0x800E51E8: lw          $t3, 0x4($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X4);
    // 0x800E51EC: and         $t1, $t8, $s4
    ctx->r9 = ctx->r24 & ctx->r20;
    // 0x800E51F0: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x800E51F4: addu        $s6, $t2, $t3
    ctx->r22 = ADD32(ctx->r10, ctx->r11);
    // 0x800E51F8: lbu         $s3, 0x0($s6)
    ctx->r19 = MEM_BU(ctx->r22, 0X0);
    // 0x800E51FC: sltiu       $at, $s3, 0x11
    ctx->r1 = ctx->r19 < 0X11 ? 1 : 0;
    // 0x800E5200: beql        $at, $zero, L_800E5168
    if (ctx->r1 == 0) {
        // 0x800E5204: lbu         $v0, 0x1($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X1);
            goto L_800E5168;
    }
    goto skip_8;
    // 0x800E5204: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    skip_8:
    // 0x800E5208: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
L_800E520C:
    // 0x800E520C: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800E5210: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E5214: beq         $at, $zero, L_800E5278
    if (ctx->r1 == 0) {
        // 0x800E5218: srlv        $s4, $s4, $v0
        ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
            goto L_800E5278;
    }
    // 0x800E5218: srlv        $s4, $s4, $v0
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
    // 0x800E521C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E5220:
    // 0x800E5220: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5224: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E5228: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E522C: bnel        $at, $zero, L_800E5258
    if (ctx->r1 != 0) {
        // 0x800E5230: addu        $t5, $s1, $v0
        ctx->r13 = ADD32(ctx->r17, ctx->r2);
            goto L_800E5258;
    }
    goto skip_9;
    // 0x800E5230: addu        $t5, $s1, $v0
    ctx->r13 = ADD32(ctx->r17, ctx->r2);
    skip_9:
    // 0x800E5234: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E5238: jal         0x8001311C
    // 0x800E523C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_5;
    // 0x800E523C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_5:
    // 0x800E5240: lw          $t4, 0x30($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X30);
    // 0x800E5244: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5248: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E524C: addiu       $t0, $t4, 0x1800
    ctx->r8 = ADD32(ctx->r12, 0X1800);
    // 0x800E5250: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x800E5254: addu        $t5, $s1, $v0
    ctx->r13 = ADD32(ctx->r17, ctx->r2);
L_800E5258:
    // 0x800E5258: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x800E525C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x800E5260: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x800E5264: sllv        $t7, $t6, $s2
    ctx->r15 = S32(ctx->r14 << (ctx->r18 & 31));
    // 0x800E5268: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E526C: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E5270: bne         $at, $zero, L_800E5220
    if (ctx->r1 != 0) {
        // 0x800E5274: or          $s4, $s4, $t7
        ctx->r20 = ctx->r20 | ctx->r15;
            goto L_800E5220;
    }
    // 0x800E5274: or          $s4, $s4, $t7
    ctx->r20 = ctx->r20 | ctx->r15;
L_800E5278:
    // 0x800E5278: sll         $t2, $s3, 1
    ctx->r10 = S32(ctx->r19 << 1);
    // 0x800E527C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800E5280: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800E5284: lhu         $t3, 0x32C0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X32C0);
    // 0x800E5288: lhu         $t8, 0x4($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X4);
    // 0x800E528C: andi        $a1, $s7, 0x3
    ctx->r5 = ctx->r23 & 0X3;
    // 0x800E5290: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800E5294: and         $t4, $t3, $s4
    ctx->r12 = ctx->r11 & ctx->r20;
    // 0x800E5298: subu        $t1, $fp, $t8
    ctx->r9 = SUB32(ctx->r30, ctx->r24);
    // 0x800E529C: subu        $v1, $t1, $t4
    ctx->r3 = SUB32(ctx->r9, ctx->r12);
    // 0x800E52A0: srlv        $s4, $s4, $s3
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r19 & 31));
    // 0x800E52A4: beq         $a1, $zero, L_800E52E0
    if (ctx->r5 == 0) {
        // 0x800E52A8: subu        $s2, $s2, $s3
        ctx->r18 = SUB32(ctx->r18, ctx->r19);
            goto L_800E52E0;
    }
    // 0x800E52A8: subu        $s2, $s2, $s3
    ctx->r18 = SUB32(ctx->r18, ctx->r19);
    // 0x800E52AC: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800E52B0: addu        $a0, $a1, $s7
    ctx->r4 = ADD32(ctx->r5, ctx->r23);
    // 0x800E52B4: addu        $v0, $v1, $t0
    ctx->r2 = ADD32(ctx->r3, ctx->r8);
L_800E52B8:
    // 0x800E52B8: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x800E52BC: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
    // 0x800E52C0: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x800E52C4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800E52C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800E52CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800E52D0: bne         $a0, $s7, L_800E52B8
    if (ctx->r4 != ctx->r23) {
        // 0x800E52D4: sb          $t5, -0x1($s5)
        MEM_B(-0X1, ctx->r21) = ctx->r13;
            goto L_800E52B8;
    }
    // 0x800E52D4: sb          $t5, -0x1($s5)
    MEM_B(-0X1, ctx->r21) = ctx->r13;
    // 0x800E52D8: beql        $s7, $zero, L_800E5320
    if (ctx->r23 == 0) {
        // 0x800E52DC: lw          $t1, 0x4C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X4C);
            goto L_800E5320;
    }
    goto skip_10;
    // 0x800E52DC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    skip_10:
L_800E52E0:
    // 0x800E52E0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800E52E4: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
L_800E52E8:
    // 0x800E52E8: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x800E52EC: addiu       $s7, $s7, -0x4
    ctx->r23 = ADD32(ctx->r23, -0X4);
    // 0x800E52F0: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x800E52F4: sb          $t7, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r15;
    // 0x800E52F8: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x800E52FC: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x800E5300: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800E5304: sb          $t9, -0x3($s5)
    MEM_B(-0X3, ctx->r21) = ctx->r25;
    // 0x800E5308: lbu         $t8, -0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, -0X2);
    // 0x800E530C: sb          $t8, -0x2($s5)
    MEM_B(-0X2, ctx->r21) = ctx->r24;
    // 0x800E5310: lbu         $t2, -0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, -0X1);
    // 0x800E5314: bne         $s7, $zero, L_800E52E8
    if (ctx->r23 != 0) {
        // 0x800E5318: sb          $t2, -0x1($s5)
        MEM_B(-0X1, ctx->r21) = ctx->r10;
            goto L_800E52E8;
    }
    // 0x800E5318: sb          $t2, -0x1($s5)
    MEM_B(-0X1, ctx->r21) = ctx->r10;
L_800E531C:
    // 0x800E531C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
L_800E5320:
    // 0x800E5320: lh          $t3, 0x3C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X3C);
    // 0x800E5324: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x800E5328: slt         $v0, $t3, $t1
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800E532C: beq         $v0, $zero, L_800E5348
    if (ctx->r2 == 0) {
        // 0x800E5330: sw          $t4, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r12;
            goto L_800E5348;
    }
    // 0x800E5330: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x800E5334: sw          $fp, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r30;
    // 0x800E5338: sw          $s4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r20;
    // 0x800E533C: sw          $s2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r18;
    // 0x800E5340: b           L_800E5360
    // 0x800E5344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800E5360;
    // 0x800E5344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800E5348:
    // 0x800E5348: b           L_800E4EDC
    // 0x800E534C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
        goto L_800E4EDC;
    // 0x800E534C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
L_800E5350:
    // 0x800E5350: sw          $fp, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r30;
    // 0x800E5354: sw          $s4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r20;
    // 0x800E5358: sw          $s2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r18;
    // 0x800E535C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E5360:
    // 0x800E5360: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800E5364: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E5368: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800E536C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800E5370: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800E5374: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800E5378: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800E537C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800E5380: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800E5384: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800E5388: jr          $ra
    // 0x800E538C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800E538C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800E5390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5390: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800E5394: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800E5398: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800E539C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800E53A0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800E53A4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800E53A8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800E53AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800E53B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800E53B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800E53B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E53BC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800E53C0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E53C4: addiu       $t0, $t0, 0x32C0
    ctx->r8 = ADD32(ctx->r8, 0X32C0);
    // 0x800E53C8: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x800E53CC: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x800E53D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E53D4: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x800E53D8: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x800E53DC: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x800E53E0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x800E53E4: lw          $s4, 0xC($a0)
    ctx->r20 = MEM_W(ctx->r4, 0XC);
    // 0x800E53E8: lw          $s2, 0x10($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X10);
    // 0x800E53EC: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x800E53F0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800E53F4: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x800E53F8: lw          $fp, 0x14($a0)
    ctx->r30 = MEM_W(ctx->r4, 0X14);
    // 0x800E53FC: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x800E5400: lw          $t3, 0x24($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X24);
    // 0x800E5404: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800E5408: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x800E540C: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x800E5410: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
L_800E5414:
    // 0x800E5414: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x800E5418: beq         $at, $zero, L_800E5480
    if (ctx->r1 == 0) {
        // 0x800E541C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800E5480;
    }
    // 0x800E541C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800E5420: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E5424:
    // 0x800E5424: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5428: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E542C: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E5430: bnel        $at, $zero, L_800E5460
    if (ctx->r1 != 0) {
        // 0x800E5434: addu        $t9, $s1, $v0
        ctx->r25 = ADD32(ctx->r17, ctx->r2);
            goto L_800E5460;
    }
    goto skip_0;
    // 0x800E5434: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
    skip_0:
    // 0x800E5438: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E543C: jal         0x8001311C
    // 0x800E5440: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_0;
    // 0x800E5440: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_0:
    // 0x800E5444: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x800E5448: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x800E544C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5450: addiu       $t8, $t7, 0x1800
    ctx->r24 = ADD32(ctx->r15, 0X1800);
    // 0x800E5454: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x800E5458: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E545C: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
L_800E5460:
    // 0x800E5460: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x800E5464: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x800E5468: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x800E546C: sllv        $t2, $t1, $s2
    ctx->r10 = S32(ctx->r9 << (ctx->r18 & 31));
    // 0x800E5470: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E5474: sltu        $at, $s2, $v1
    ctx->r1 = ctx->r18 < ctx->r3 ? 1 : 0;
    // 0x800E5478: bne         $at, $zero, L_800E5424
    if (ctx->r1 != 0) {
        // 0x800E547C: or          $s4, $s4, $t2
        ctx->r20 = ctx->r20 | ctx->r10;
            goto L_800E5424;
    }
    // 0x800E547C: or          $s4, $s4, $t2
    ctx->r20 = ctx->r20 | ctx->r10;
L_800E5480:
    // 0x800E5480: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x800E5484: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800E5488: and         $t0, $s4, $t4
    ctx->r8 = ctx->r20 & ctx->r12;
    // 0x800E548C: sll         $t5, $t0, 3
    ctx->r13 = S32(ctx->r8 << 3);
    // 0x800E5490: addu        $s6, $t5, $t6
    ctx->r22 = ADD32(ctx->r13, ctx->r14);
    // 0x800E5494: lbu         $s3, 0x0($s6)
    ctx->r19 = MEM_BU(ctx->r22, 0X0);
    // 0x800E5498: sltiu       $at, $s3, 0x11
    ctx->r1 = ctx->r19 < 0X11 ? 1 : 0;
    // 0x800E549C: bnel        $at, $zero, L_800E554C
    if (ctx->r1 != 0) {
        // 0x800E54A0: lbu         $v0, 0x1($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X1);
            goto L_800E554C;
    }
    goto skip_1;
    // 0x800E54A0: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    skip_1:
    // 0x800E54A4: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
L_800E54A8:
    // 0x800E54A8: addiu       $s3, $s3, -0x10
    ctx->r19 = ADD32(ctx->r19, -0X10);
    // 0x800E54AC: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800E54B0: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E54B4: beq         $at, $zero, L_800E5518
    if (ctx->r1 == 0) {
        // 0x800E54B8: srlv        $s4, $s4, $v0
        ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
            goto L_800E5518;
    }
    // 0x800E54B8: srlv        $s4, $s4, $v0
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
    // 0x800E54BC: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E54C0:
    // 0x800E54C0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E54C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E54C8: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E54CC: bnel        $at, $zero, L_800E54F8
    if (ctx->r1 != 0) {
        // 0x800E54D0: addu        $t9, $s1, $v0
        ctx->r25 = ADD32(ctx->r17, ctx->r2);
            goto L_800E54F8;
    }
    goto skip_2;
    // 0x800E54D0: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
    skip_2:
    // 0x800E54D4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E54D8: jal         0x8001311C
    // 0x800E54DC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_1;
    // 0x800E54DC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x800E54E0: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x800E54E4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E54E8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E54EC: addiu       $t8, $t7, 0x1800
    ctx->r24 = ADD32(ctx->r15, 0X1800);
    // 0x800E54F0: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x800E54F4: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
L_800E54F8:
    // 0x800E54F8: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x800E54FC: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x800E5500: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x800E5504: sllv        $t2, $t1, $s2
    ctx->r10 = S32(ctx->r9 << (ctx->r18 & 31));
    // 0x800E5508: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E550C: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E5510: bne         $at, $zero, L_800E54C0
    if (ctx->r1 != 0) {
        // 0x800E5514: or          $s4, $s4, $t2
        ctx->r20 = ctx->r20 | ctx->r10;
            goto L_800E54C0;
    }
    // 0x800E5514: or          $s4, $s4, $t2
    ctx->r20 = ctx->r20 | ctx->r10;
L_800E5518:
    // 0x800E5518: sll         $t4, $s3, 1
    ctx->r12 = S32(ctx->r19 << 1);
    // 0x800E551C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E5520: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x800E5524: lhu         $t0, 0x32C0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X32C0);
    // 0x800E5528: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x800E552C: and         $t5, $t0, $s4
    ctx->r13 = ctx->r8 & ctx->r20;
    // 0x800E5530: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800E5534: addu        $s6, $t6, $t7
    ctx->r22 = ADD32(ctx->r14, ctx->r15);
    // 0x800E5538: lbu         $s3, 0x0($s6)
    ctx->r19 = MEM_BU(ctx->r22, 0X0);
    // 0x800E553C: sltiu       $at, $s3, 0x11
    ctx->r1 = ctx->r19 < 0X11 ? 1 : 0;
    // 0x800E5540: beql        $at, $zero, L_800E54A8
    if (ctx->r1 == 0) {
        // 0x800E5544: lbu         $v0, 0x1($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X1);
            goto L_800E54A8;
    }
    goto skip_3;
    // 0x800E5544: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    skip_3:
    // 0x800E5548: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
L_800E554C:
    // 0x800E554C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800E5550: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800E5554: srlv        $s4, $s4, $v0
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
    // 0x800E5558: bne         $s3, $at, L_800E5578
    if (ctx->r19 != ctx->r1) {
        // 0x800E555C: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_800E5578;
    }
    // 0x800E555C: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800E5560: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800E5564: lhu         $t8, 0x4($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X4);
    // 0x800E5568: addu        $t1, $t9, $fp
    ctx->r9 = ADD32(ctx->r25, ctx->r30);
    // 0x800E556C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x800E5570: b           L_800E5854
    // 0x800E5574: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
        goto L_800E5854;
    // 0x800E5574: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
L_800E5578:
    // 0x800E5578: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800E557C: beq         $s3, $at, L_800E585C
    if (ctx->r19 == ctx->r1) {
        // 0x800E5580: sltu        $at, $s2, $s3
        ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
            goto L_800E585C;
    }
    // 0x800E5580: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E5584: beq         $at, $zero, L_800E55E8
    if (ctx->r1 == 0) {
        // 0x800E5588: addu        $s5, $t2, $fp
        ctx->r21 = ADD32(ctx->r10, ctx->r30);
            goto L_800E55E8;
    }
    // 0x800E5588: addu        $s5, $t2, $fp
    ctx->r21 = ADD32(ctx->r10, ctx->r30);
    // 0x800E558C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E5590:
    // 0x800E5590: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5594: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E5598: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E559C: bnel        $at, $zero, L_800E55C8
    if (ctx->r1 != 0) {
        // 0x800E55A0: addu        $t0, $s1, $v0
        ctx->r8 = ADD32(ctx->r17, ctx->r2);
            goto L_800E55C8;
    }
    goto skip_4;
    // 0x800E55A0: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
    skip_4:
    // 0x800E55A4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E55A8: jal         0x8001311C
    // 0x800E55AC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_2;
    // 0x800E55AC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_2:
    // 0x800E55B0: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x800E55B4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E55B8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E55BC: addiu       $t4, $t3, 0x1800
    ctx->r12 = ADD32(ctx->r11, 0X1800);
    // 0x800E55C0: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x800E55C4: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
L_800E55C8:
    // 0x800E55C8: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x800E55CC: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x800E55D0: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x800E55D4: sllv        $t6, $t5, $s2
    ctx->r14 = S32(ctx->r13 << (ctx->r18 & 31));
    // 0x800E55D8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E55DC: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E55E0: bne         $at, $zero, L_800E5590
    if (ctx->r1 != 0) {
        // 0x800E55E4: or          $s4, $s4, $t6
        ctx->r20 = ctx->r20 | ctx->r14;
            goto L_800E5590;
    }
    // 0x800E55E4: or          $s4, $s4, $t6
    ctx->r20 = ctx->r20 | ctx->r14;
L_800E55E8:
    // 0x800E55E8: sll         $t9, $s3, 1
    ctx->r25 = S32(ctx->r19 << 1);
    // 0x800E55EC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E55F0: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800E55F4: lhu         $t8, 0x32C0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X32C0);
    // 0x800E55F8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x800E55FC: lhu         $t2, 0x4($s6)
    ctx->r10 = MEM_HU(ctx->r22, 0X4);
    // 0x800E5600: subu        $s2, $s2, $s3
    ctx->r18 = SUB32(ctx->r18, ctx->r19);
    // 0x800E5604: and         $t1, $t8, $s4
    ctx->r9 = ctx->r24 & ctx->r20;
    // 0x800E5608: sltu        $at, $s2, $v1
    ctx->r1 = ctx->r18 < ctx->r3 ? 1 : 0;
    // 0x800E560C: srlv        $s4, $s4, $s3
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r19 & 31));
    // 0x800E5610: beq         $at, $zero, L_800E5678
    if (ctx->r1 == 0) {
        // 0x800E5614: addu        $s7, $t1, $t2
        ctx->r23 = ADD32(ctx->r9, ctx->r10);
            goto L_800E5678;
    }
    // 0x800E5614: addu        $s7, $t1, $t2
    ctx->r23 = ADD32(ctx->r9, ctx->r10);
    // 0x800E5618: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E561C:
    // 0x800E561C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5620: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E5624: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E5628: bnel        $at, $zero, L_800E5658
    if (ctx->r1 != 0) {
        // 0x800E562C: addu        $t0, $s1, $v0
        ctx->r8 = ADD32(ctx->r17, ctx->r2);
            goto L_800E5658;
    }
    goto skip_5;
    // 0x800E562C: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
    skip_5:
    // 0x800E5630: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E5634: jal         0x8001311C
    // 0x800E5638: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_3;
    // 0x800E5638: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_3:
    // 0x800E563C: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x800E5640: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5644: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E5648: addiu       $t4, $t3, 0x1800
    ctx->r12 = ADD32(ctx->r11, 0X1800);
    // 0x800E564C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x800E5650: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x800E5654: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
L_800E5658:
    // 0x800E5658: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x800E565C: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x800E5660: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x800E5664: sllv        $t6, $t5, $s2
    ctx->r14 = S32(ctx->r13 << (ctx->r18 & 31));
    // 0x800E5668: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E566C: sltu        $at, $s2, $v1
    ctx->r1 = ctx->r18 < ctx->r3 ? 1 : 0;
    // 0x800E5670: bne         $at, $zero, L_800E561C
    if (ctx->r1 != 0) {
        // 0x800E5674: or          $s4, $s4, $t6
        ctx->r20 = ctx->r20 | ctx->r14;
            goto L_800E561C;
    }
    // 0x800E5674: or          $s4, $s4, $t6
    ctx->r20 = ctx->r20 | ctx->r14;
L_800E5678:
    // 0x800E5678: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x800E567C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E5680: and         $t8, $s4, $t9
    ctx->r24 = ctx->r20 & ctx->r25;
    // 0x800E5684: sll         $t1, $t8, 3
    ctx->r9 = S32(ctx->r24 << 3);
    // 0x800E5688: addu        $s6, $t1, $t2
    ctx->r22 = ADD32(ctx->r9, ctx->r10);
    // 0x800E568C: lbu         $s3, 0x0($s6)
    ctx->r19 = MEM_BU(ctx->r22, 0X0);
    // 0x800E5690: sltiu       $at, $s3, 0x11
    ctx->r1 = ctx->r19 < 0X11 ? 1 : 0;
    // 0x800E5694: bnel        $at, $zero, L_800E5744
    if (ctx->r1 != 0) {
        // 0x800E5698: lbu         $v0, 0x1($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X1);
            goto L_800E5744;
    }
    goto skip_6;
    // 0x800E5698: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    skip_6:
    // 0x800E569C: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
L_800E56A0:
    // 0x800E56A0: addiu       $s3, $s3, -0x10
    ctx->r19 = ADD32(ctx->r19, -0X10);
    // 0x800E56A4: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800E56A8: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E56AC: beq         $at, $zero, L_800E5710
    if (ctx->r1 == 0) {
        // 0x800E56B0: srlv        $s4, $s4, $v0
        ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
            goto L_800E5710;
    }
    // 0x800E56B0: srlv        $s4, $s4, $v0
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
    // 0x800E56B4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E56B8:
    // 0x800E56B8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E56BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E56C0: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E56C4: bnel        $at, $zero, L_800E56F0
    if (ctx->r1 != 0) {
        // 0x800E56C8: addu        $t0, $s1, $v0
        ctx->r8 = ADD32(ctx->r17, ctx->r2);
            goto L_800E56F0;
    }
    goto skip_7;
    // 0x800E56C8: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
    skip_7:
    // 0x800E56CC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E56D0: jal         0x8001311C
    // 0x800E56D4: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_4;
    // 0x800E56D4: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_4:
    // 0x800E56D8: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x800E56DC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E56E0: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E56E4: addiu       $t4, $t3, 0x1800
    ctx->r12 = ADD32(ctx->r11, 0X1800);
    // 0x800E56E8: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x800E56EC: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
L_800E56F0:
    // 0x800E56F0: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x800E56F4: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x800E56F8: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x800E56FC: sllv        $t6, $t5, $s2
    ctx->r14 = S32(ctx->r13 << (ctx->r18 & 31));
    // 0x800E5700: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E5704: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E5708: bne         $at, $zero, L_800E56B8
    if (ctx->r1 != 0) {
        // 0x800E570C: or          $s4, $s4, $t6
        ctx->r20 = ctx->r20 | ctx->r14;
            goto L_800E56B8;
    }
    // 0x800E570C: or          $s4, $s4, $t6
    ctx->r20 = ctx->r20 | ctx->r14;
L_800E5710:
    // 0x800E5710: sll         $t9, $s3, 1
    ctx->r25 = S32(ctx->r19 << 1);
    // 0x800E5714: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E5718: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800E571C: lhu         $t8, 0x32C0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X32C0);
    // 0x800E5720: lw          $t3, 0x4($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X4);
    // 0x800E5724: and         $t1, $t8, $s4
    ctx->r9 = ctx->r24 & ctx->r20;
    // 0x800E5728: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x800E572C: addu        $s6, $t2, $t3
    ctx->r22 = ADD32(ctx->r10, ctx->r11);
    // 0x800E5730: lbu         $s3, 0x0($s6)
    ctx->r19 = MEM_BU(ctx->r22, 0X0);
    // 0x800E5734: sltiu       $at, $s3, 0x11
    ctx->r1 = ctx->r19 < 0X11 ? 1 : 0;
    // 0x800E5738: beql        $at, $zero, L_800E56A0
    if (ctx->r1 == 0) {
        // 0x800E573C: lbu         $v0, 0x1($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X1);
            goto L_800E56A0;
    }
    goto skip_8;
    // 0x800E573C: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    skip_8:
    // 0x800E5740: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
L_800E5744:
    // 0x800E5744: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800E5748: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E574C: beq         $at, $zero, L_800E57B0
    if (ctx->r1 == 0) {
        // 0x800E5750: srlv        $s4, $s4, $v0
        ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
            goto L_800E57B0;
    }
    // 0x800E5750: srlv        $s4, $s4, $v0
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r2 & 31));
    // 0x800E5754: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E5758:
    // 0x800E5758: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E575C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E5760: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E5764: bnel        $at, $zero, L_800E5790
    if (ctx->r1 != 0) {
        // 0x800E5768: addu        $t5, $s1, $v0
        ctx->r13 = ADD32(ctx->r17, ctx->r2);
            goto L_800E5790;
    }
    goto skip_9;
    // 0x800E5768: addu        $t5, $s1, $v0
    ctx->r13 = ADD32(ctx->r17, ctx->r2);
    skip_9:
    // 0x800E576C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E5770: jal         0x8001311C
    // 0x800E5774: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_5;
    // 0x800E5774: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_5:
    // 0x800E5778: lw          $t4, 0x30($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X30);
    // 0x800E577C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5780: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E5784: addiu       $t0, $t4, 0x1800
    ctx->r8 = ADD32(ctx->r12, 0X1800);
    // 0x800E5788: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x800E578C: addu        $t5, $s1, $v0
    ctx->r13 = ADD32(ctx->r17, ctx->r2);
L_800E5790:
    // 0x800E5790: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x800E5794: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x800E5798: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x800E579C: sllv        $t7, $t6, $s2
    ctx->r15 = S32(ctx->r14 << (ctx->r18 & 31));
    // 0x800E57A0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E57A4: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x800E57A8: bne         $at, $zero, L_800E5758
    if (ctx->r1 != 0) {
        // 0x800E57AC: or          $s4, $s4, $t7
        ctx->r20 = ctx->r20 | ctx->r15;
            goto L_800E5758;
    }
    // 0x800E57AC: or          $s4, $s4, $t7
    ctx->r20 = ctx->r20 | ctx->r15;
L_800E57B0:
    // 0x800E57B0: sll         $t2, $s3, 1
    ctx->r10 = S32(ctx->r19 << 1);
    // 0x800E57B4: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800E57B8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800E57BC: lhu         $t3, 0x32C0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X32C0);
    // 0x800E57C0: lhu         $t8, 0x4($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X4);
    // 0x800E57C4: andi        $a1, $s7, 0x3
    ctx->r5 = ctx->r23 & 0X3;
    // 0x800E57C8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800E57CC: and         $t4, $t3, $s4
    ctx->r12 = ctx->r11 & ctx->r20;
    // 0x800E57D0: subu        $t1, $fp, $t8
    ctx->r9 = SUB32(ctx->r30, ctx->r24);
    // 0x800E57D4: subu        $v1, $t1, $t4
    ctx->r3 = SUB32(ctx->r9, ctx->r12);
    // 0x800E57D8: srlv        $s4, $s4, $s3
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r19 & 31));
    // 0x800E57DC: beq         $a1, $zero, L_800E5818
    if (ctx->r5 == 0) {
        // 0x800E57E0: subu        $s2, $s2, $s3
        ctx->r18 = SUB32(ctx->r18, ctx->r19);
            goto L_800E5818;
    }
    // 0x800E57E0: subu        $s2, $s2, $s3
    ctx->r18 = SUB32(ctx->r18, ctx->r19);
    // 0x800E57E4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800E57E8: addu        $a0, $a1, $s7
    ctx->r4 = ADD32(ctx->r5, ctx->r23);
    // 0x800E57EC: addu        $v0, $v1, $t0
    ctx->r2 = ADD32(ctx->r3, ctx->r8);
L_800E57F0:
    // 0x800E57F0: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x800E57F4: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
    // 0x800E57F8: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x800E57FC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800E5800: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800E5804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800E5808: bne         $a0, $s7, L_800E57F0
    if (ctx->r4 != ctx->r23) {
        // 0x800E580C: sb          $t5, -0x1($s5)
        MEM_B(-0X1, ctx->r21) = ctx->r13;
            goto L_800E57F0;
    }
    // 0x800E580C: sb          $t5, -0x1($s5)
    MEM_B(-0X1, ctx->r21) = ctx->r13;
    // 0x800E5810: beq         $s7, $zero, L_800E5854
    if (ctx->r23 == 0) {
        // 0x800E5814: nop
    
            goto L_800E5854;
    }
    // 0x800E5814: nop

L_800E5818:
    // 0x800E5818: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800E581C: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
L_800E5820:
    // 0x800E5820: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x800E5824: addiu       $s7, $s7, -0x4
    ctx->r23 = ADD32(ctx->r23, -0X4);
    // 0x800E5828: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x800E582C: sb          $t7, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r15;
    // 0x800E5830: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x800E5834: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x800E5838: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800E583C: sb          $t9, -0x3($s5)
    MEM_B(-0X3, ctx->r21) = ctx->r25;
    // 0x800E5840: lbu         $t8, -0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, -0X2);
    // 0x800E5844: sb          $t8, -0x2($s5)
    MEM_B(-0X2, ctx->r21) = ctx->r24;
    // 0x800E5848: lbu         $t2, -0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, -0X1);
    // 0x800E584C: bne         $s7, $zero, L_800E5820
    if (ctx->r23 != 0) {
        // 0x800E5850: sb          $t2, -0x1($s5)
        MEM_B(-0X1, ctx->r21) = ctx->r10;
            goto L_800E5820;
    }
    // 0x800E5850: sb          $t2, -0x1($s5)
    MEM_B(-0X1, ctx->r21) = ctx->r10;
L_800E5854:
    // 0x800E5854: b           L_800E5414
    // 0x800E5858: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
        goto L_800E5414;
    // 0x800E5858: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
L_800E585C:
    // 0x800E585C: sw          $fp, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r30;
    // 0x800E5860: sw          $s4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r20;
    // 0x800E5864: sw          $s2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r18;
    // 0x800E5868: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800E586C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800E5870: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800E5874: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800E5878: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800E587C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800E5880: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800E5884: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800E5888: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800E588C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E5890: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800E5894: jr          $ra
    // 0x800E5898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800E5898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800E589C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E589C: addiu       $sp, $sp, -0x5F8
    ctx->r29 = ADD32(ctx->r29, -0X5F8);
    // 0x800E58A0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800E58A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800E58A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800E58AC: addiu       $s1, $sp, 0x5B0
    ctx->r17 = ADD32(ctx->r29, 0X5B0);
    // 0x800E58B0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800E58B4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800E58B8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800E58BC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800E58C0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800E58C4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800E58C8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800E58CC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800E58D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E58D4: sw          $a2, 0x600($sp)
    MEM_W(0X600, ctx->r29) = ctx->r6;
    // 0x800E58D8: sw          $a3, 0x604($sp)
    MEM_W(0X604, ctx->r29) = ctx->r7;
    // 0x800E58DC: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x800E58E0: jal         0x8002D6E0
    // 0x800E58E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x800E58E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800E58E8: andi        $v0, $s3, 0x3
    ctx->r2 = ctx->r19 & 0X3;
    // 0x800E58EC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800E58F0: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x800E58F4: beq         $v0, $zero, L_800E592C
    if (ctx->r2 == 0) {
        // 0x800E58F8: or          $ra, $s3, $zero
        ctx->r31 = ctx->r19 | 0;
            goto L_800E592C;
    }
    // 0x800E58F8: or          $ra, $s3, $zero
    ctx->r31 = ctx->r19 | 0;
    // 0x800E58FC: addu        $v1, $v0, $s3
    ctx->r3 = ADD32(ctx->r2, ctx->r19);
L_800E5900:
    // 0x800E5900: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x800E5904: addiu       $ra, $ra, -0x1
    ctx->r31 = ADD32(ctx->r31, -0X1);
    // 0x800E5908: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x800E590C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5910: addu        $v0, $s1, $t7
    ctx->r2 = ADD32(ctx->r17, ctx->r15);
    // 0x800E5914: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800E5918: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800E591C: bne         $v1, $ra, L_800E5900
    if (ctx->r3 != ctx->r31) {
        // 0x800E5920: sw          $t9, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r25;
            goto L_800E5900;
    }
    // 0x800E5920: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800E5924: beql        $ra, $zero, L_800E599C
    if (ctx->r31 == 0) {
        // 0x800E5928: lw          $t6, 0x5B0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X5B0);
            goto L_800E599C;
    }
    goto skip_0;
    // 0x800E5928: lw          $t6, 0x5B0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5B0);
    skip_0:
L_800E592C:
    // 0x800E592C: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x800E5930: addiu       $ra, $ra, -0x4
    ctx->r31 = ADD32(ctx->r31, -0X4);
    // 0x800E5934: addiu       $s7, $s7, 0x10
    ctx->r23 = ADD32(ctx->r23, 0X10);
    // 0x800E5938: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E593C: addu        $v0, $s1, $t7
    ctx->r2 = ADD32(ctx->r17, ctx->r15);
    // 0x800E5940: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800E5944: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800E5948: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800E594C: lw          $t6, -0xC($s7)
    ctx->r14 = MEM_W(ctx->r23, -0XC);
    // 0x800E5950: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5954: addu        $v0, $s1, $t7
    ctx->r2 = ADD32(ctx->r17, ctx->r15);
    // 0x800E5958: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800E595C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800E5960: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800E5964: lw          $t6, -0x8($s7)
    ctx->r14 = MEM_W(ctx->r23, -0X8);
    // 0x800E5968: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E596C: addu        $v0, $s1, $t7
    ctx->r2 = ADD32(ctx->r17, ctx->r15);
    // 0x800E5970: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800E5974: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800E5978: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800E597C: lw          $t6, -0x4($s7)
    ctx->r14 = MEM_W(ctx->r23, -0X4);
    // 0x800E5980: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5984: addu        $v0, $s1, $t7
    ctx->r2 = ADD32(ctx->r17, ctx->r15);
    // 0x800E5988: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800E598C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800E5990: bne         $ra, $zero, L_800E592C
    if (ctx->r31 != 0) {
        // 0x800E5994: sw          $t9, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r25;
            goto L_800E592C;
    }
    // 0x800E5994: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800E5998: lw          $t6, 0x5B0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5B0);
L_800E599C:
    // 0x800E599C: lw          $a1, 0x610($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X610);
    // 0x800E59A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x800E59A4: bne         $s3, $t6, L_800E59C4
    if (ctx->r19 != ctx->r14) {
        // 0x800E59A8: addiu       $v1, $sp, 0x5B4
        ctx->r3 = ADD32(ctx->r29, 0X5B4);
            goto L_800E59C4;
    }
    // 0x800E59A8: addiu       $v1, $sp, 0x5B4
    ctx->r3 = ADD32(ctx->r29, 0X5B4);
    // 0x800E59AC: lw          $s5, 0x60C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60C);
    // 0x800E59B0: lw          $a1, 0x610($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X610);
    // 0x800E59B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E59B8: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    // 0x800E59BC: b           L_800E5E90
    // 0x800E59C0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
        goto L_800E5E90;
    // 0x800E59C0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_800E59C4:
    // 0x800E59C4: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x800E59C8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_800E59CC:
    // 0x800E59CC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800E59D0: bnel        $t7, $zero, L_800E59E8
    if (ctx->r15 != 0) {
        // 0x800E59D4: sltu        $at, $s0, $a3
        ctx->r1 = ctx->r16 < ctx->r7 ? 1 : 0;
            goto L_800E59E8;
    }
    goto skip_1;
    // 0x800E59D4: sltu        $at, $s0, $a3
    ctx->r1 = ctx->r16 < ctx->r7 ? 1 : 0;
    skip_1:
    // 0x800E59D8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800E59DC: bne         $a3, $v0, L_800E59CC
    if (ctx->r7 != ctx->r2) {
        // 0x800E59E0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800E59CC;
    }
    // 0x800E59E0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800E59E4: sltu        $at, $s0, $a3
    ctx->r1 = ctx->r16 < ctx->r7 ? 1 : 0;
L_800E59E8:
    // 0x800E59E8: beq         $at, $zero, L_800E59F4
    if (ctx->r1 == 0) {
        // 0x800E59EC: or          $s4, $a3, $zero
        ctx->r20 = ctx->r7 | 0;
            goto L_800E59F4;
    }
    // 0x800E59EC: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x800E59F0: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
L_800E59F4:
    // 0x800E59F4: addiu       $ra, $zero, 0x10
    ctx->r31 = ADD32(0, 0X10);
    // 0x800E59F8: addiu       $v0, $sp, 0x5F0
    ctx->r2 = ADD32(ctx->r29, 0X5F0);
L_800E59FC:
    // 0x800E59FC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800E5A00: bnel        $t8, $zero, L_800E5A18
    if (ctx->r24 != 0) {
        // 0x800E5A04: sltu        $at, $ra, $s0
        ctx->r1 = ctx->r31 < ctx->r16 ? 1 : 0;
            goto L_800E5A18;
    }
    goto skip_2;
    // 0x800E5A04: sltu        $at, $ra, $s0
    ctx->r1 = ctx->r31 < ctx->r16 ? 1 : 0;
    skip_2:
    // 0x800E5A08: addiu       $ra, $ra, -0x1
    ctx->r31 = ADD32(ctx->r31, -0X1);
    // 0x800E5A0C: bne         $ra, $zero, L_800E59FC
    if (ctx->r31 != 0) {
        // 0x800E5A10: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_800E59FC;
    }
    // 0x800E5A10: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x800E5A14: sltu        $at, $ra, $s0
    ctx->r1 = ctx->r31 < ctx->r16 ? 1 : 0;
L_800E5A18:
    // 0x800E5A18: beq         $at, $zero, L_800E5A24
    if (ctx->r1 == 0) {
        // 0x800E5A1C: or          $fp, $ra, $zero
        ctx->r30 = ctx->r31 | 0;
            goto L_800E5A24;
    }
    // 0x800E5A1C: or          $fp, $ra, $zero
    ctx->r30 = ctx->r31 | 0;
    // 0x800E5A20: or          $s0, $ra, $zero
    ctx->r16 = ctx->r31 | 0;
L_800E5A24:
    // 0x800E5A24: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800E5A28: sltu        $at, $a3, $ra
    ctx->r1 = ctx->r7 < ctx->r31 ? 1 : 0;
    // 0x800E5A2C: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x800E5A30: beq         $at, $zero, L_800E5A60
    if (ctx->r1 == 0) {
        // 0x800E5A34: sllv        $a0, $t9, $a3
        ctx->r4 = S32(ctx->r25 << (ctx->r7 & 31));
            goto L_800E5A60;
    }
    // 0x800E5A34: sllv        $a0, $t9, $a3
    ctx->r4 = S32(ctx->r25 << (ctx->r7 & 31));
    // 0x800E5A38: sll         $t6, $ra, 2
    ctx->r14 = S32(ctx->r31 << 2);
    // 0x800E5A3C: addiu       $t7, $sp, 0x5B0
    ctx->r15 = ADD32(ctx->r29, 0X5B0);
    // 0x800E5A40: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
L_800E5A44:
    // 0x800E5A44: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800E5A48: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800E5A4C: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x800E5A50: subu        $a0, $a0, $t8
    ctx->r4 = SUB32(ctx->r4, ctx->r24);
    // 0x800E5A54: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x800E5A58: bne         $at, $zero, L_800E5A44
    if (ctx->r1 != 0) {
        // 0x800E5A5C: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_800E5A44;
    }
    // 0x800E5A5C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_800E5A60:
    // 0x800E5A60: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800E5A64: addiu       $ra, $ra, -0x1
    ctx->r31 = ADD32(ctx->r31, -0X1);
    // 0x800E5A68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800E5A6C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x800E5A70: addu        $t6, $v1, $a0
    ctx->r14 = ADD32(ctx->r3, ctx->r4);
    // 0x800E5A74: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800E5A78: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x800E5A7C: addiu       $s7, $sp, 0x5B4
    ctx->r23 = ADD32(ctx->r29, 0X5B4);
    // 0x800E5A80: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    // 0x800E5A84: beq         $ra, $zero, L_800E5B1C
    if (ctx->r31 == 0) {
        // 0x800E5A88: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_800E5B1C;
    }
    // 0x800E5A88: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x800E5A8C: andi        $t0, $ra, 0x3
    ctx->r8 = ctx->r31 & 0X3;
    // 0x800E5A90: negu        $t0, $t0
    ctx->r8 = SUB32(0, ctx->r8);
    // 0x800E5A94: beq         $t0, $zero, L_800E5AD0
    if (ctx->r8 == 0) {
        // 0x800E5A98: addu        $v1, $t0, $ra
        ctx->r3 = ADD32(ctx->r8, ctx->r31);
            goto L_800E5AD0;
    }
    // 0x800E5A98: addu        $v1, $t0, $ra
    ctx->r3 = ADD32(ctx->r8, ctx->r31);
    // 0x800E5A9C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800E5AA0: addiu       $t8, $sp, 0x5B0
    ctx->r24 = ADD32(ctx->r29, 0X5B0);
    // 0x800E5AA4: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
L_800E5AA8:
    // 0x800E5AA8: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x800E5AAC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x800E5AB0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800E5AB4: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
    // 0x800E5AB8: sw          $a3, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r7;
    // 0x800E5ABC: bne         $a1, $v0, L_800E5AA8
    if (ctx->r5 != ctx->r2) {
        // 0x800E5AC0: addiu       $s7, $s7, 0x4
        ctx->r23 = ADD32(ctx->r23, 0X4);
            goto L_800E5AA8;
    }
    // 0x800E5AC0: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x800E5AC4: addiu       $t6, $sp, 0x5B0
    ctx->r14 = ADD32(ctx->r29, 0X5B0);
    // 0x800E5AC8: beql        $v0, $t6, L_800E5B20
    if (ctx->r2 == ctx->r14) {
        // 0x800E5ACC: or          $s7, $s2, $zero
        ctx->r23 = ctx->r18 | 0;
            goto L_800E5B20;
    }
    goto skip_3;
    // 0x800E5ACC: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    skip_3:
L_800E5AD0:
    // 0x800E5AD0: sw          $s3, 0x5FC($sp)
    MEM_W(0X5FC, ctx->r29) = ctx->r19;
    // 0x800E5AD4: addiu       $v1, $sp, 0x5B0
    ctx->r3 = ADD32(ctx->r29, 0X5B0);
L_800E5AD8:
    // 0x800E5AD8: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x800E5ADC: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x800E5AE0: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800E5AE4: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x800E5AE8: sw          $a3, -0x10($a2)
    MEM_W(-0X10, ctx->r6) = ctx->r7;
    // 0x800E5AEC: lw          $t8, 0x4($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X4);
    // 0x800E5AF0: addiu       $s7, $s7, 0x10
    ctx->r23 = ADD32(ctx->r23, 0X10);
    // 0x800E5AF4: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x800E5AF8: sw          $a3, -0xC($a2)
    MEM_W(-0XC, ctx->r6) = ctx->r7;
    // 0x800E5AFC: lw          $t9, -0x8($s7)
    ctx->r25 = MEM_W(ctx->r23, -0X8);
    // 0x800E5B00: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
    // 0x800E5B04: sw          $a3, -0x8($a2)
    MEM_W(-0X8, ctx->r6) = ctx->r7;
    // 0x800E5B08: lw          $t6, -0x4($s7)
    ctx->r14 = MEM_W(ctx->r23, -0X4);
    // 0x800E5B0C: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x800E5B10: bne         $v0, $v1, L_800E5AD8
    if (ctx->r2 != ctx->r3) {
        // 0x800E5B14: sw          $a3, -0x4($a2)
        MEM_W(-0X4, ctx->r6) = ctx->r7;
            goto L_800E5AD8;
    }
    // 0x800E5B14: sw          $a3, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r7;
    // 0x800E5B18: lw          $s3, 0x5FC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5FC);
L_800E5B1C:
    // 0x800E5B1C: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
L_800E5B20:
    // 0x800E5B20: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x800E5B24: sw          $s3, 0x5FC($sp)
    MEM_W(0X5FC, ctx->r29) = ctx->r19;
    // 0x800E5B28: or          $t1, $s3, $zero
    ctx->r9 = ctx->r19 | 0;
    // 0x800E5B2C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x800E5B30: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    // 0x800E5B34: lw          $a3, 0x0($s7)
    ctx->r7 = MEM_W(ctx->r23, 0X0);
L_800E5B38:
    // 0x800E5B38: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x800E5B3C: beq         $a3, $zero, L_800E5B60
    if (ctx->r7 == 0) {
        // 0x800E5B40: sll         $t7, $a3, 2
        ctx->r15 = S32(ctx->r7 << 2);
            goto L_800E5B60;
    }
    // 0x800E5B40: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x800E5B44: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x800E5B48: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800E5B4C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x800E5B50: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x800E5B54: sw          $ra, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r31;
    // 0x800E5B58: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x800E5B5C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_800E5B60:
    // 0x800E5B60: addiu       $ra, $ra, 0x1
    ctx->r31 = ADD32(ctx->r31, 0X1);
    // 0x800E5B64: sltu        $at, $ra, $t1
    ctx->r1 = ctx->r31 < ctx->r9 ? 1 : 0;
    // 0x800E5B68: bnel        $at, $zero, L_800E5B38
    if (ctx->r1 != 0) {
        // 0x800E5B6C: lw          $a3, 0x0($s7)
        ctx->r7 = MEM_W(ctx->r23, 0X0);
            goto L_800E5B38;
    }
    goto skip_4;
    // 0x800E5B6C: lw          $a3, 0x0($s7)
    ctx->r7 = MEM_W(ctx->r23, 0X0);
    skip_4:
    // 0x800E5B70: slt         $at, $fp, $s4
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800E5B74: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x800E5B78: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x800E5B7C: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x800E5B80: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x800E5B84: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800E5B88: negu        $t2, $s0
    ctx->r10 = SUB32(0, ctx->r16);
    // 0x800E5B8C: sw          $zero, 0x544($sp)
    MEM_W(0X544, ctx->r29) = 0;
    // 0x800E5B90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E5B94: bne         $at, $zero, L_800E5E78
    if (ctx->r1 != 0) {
        // 0x800E5B98: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_800E5E78;
    }
    // 0x800E5B98: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800E5B9C: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x800E5BA0: addiu       $t8, $sp, 0x5B0
    ctx->r24 = ADD32(ctx->r29, 0X5B0);
    // 0x800E5BA4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5BA8: lw          $s5, 0x60C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60C);
    // 0x800E5BAC: addiu       $s3, $sp, 0x584
    ctx->r19 = ADD32(ctx->r29, 0X584);
    // 0x800E5BB0: lw          $s1, 0x614($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X614);
L_800E5BB4:
    // 0x800E5BB4: lw          $s6, 0x0($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X0);
    // 0x800E5BB8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800E5BBC: addiu       $t9, $sp, 0x7C
    ctx->r25 = ADD32(ctx->r29, 0X7C);
    // 0x800E5BC0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800E5BC4: beq         $s6, $zero, L_800E5E64
    if (ctx->r22 == 0) {
        // 0x800E5BC8: addiu       $s6, $s6, -0x1
        ctx->r22 = ADD32(ctx->r22, -0X1);
            goto L_800E5E64;
    }
    // 0x800E5BC8: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x800E5BCC: lw          $t6, 0x5FC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5FC);
    // 0x800E5BD0: addu        $t3, $t5, $t9
    ctx->r11 = ADD32(ctx->r13, ctx->r25);
    // 0x800E5BD4: addiu       $t8, $sp, 0xC4
    ctx->r24 = ADD32(ctx->r29, 0XC4);
    // 0x800E5BD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5BDC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5BE0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800E5BE4: addiu       $t6, $s4, 0x1F
    ctx->r14 = ADD32(ctx->r20, 0X1F);
    // 0x800E5BE8: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x800E5BEC: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x800E5BF0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800E5BF4: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
L_800E5BF8:
    // 0x800E5BF8: addu        $v1, $t2, $s0
    ctx->r3 = ADD32(ctx->r10, ctx->r16);
    // 0x800E5BFC: slt         $at, $v1, $s4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800E5C00: beq         $at, $zero, L_800E5D1C
    if (ctx->r1 == 0) {
        // 0x800E5C04: addiu       $s2, $s6, 0x1
        ctx->r18 = ADD32(ctx->r22, 0X1);
            goto L_800E5D1C;
    }
    // 0x800E5C04: addiu       $s2, $s6, 0x1
    ctx->r18 = ADD32(ctx->r22, 0X1);
    // 0x800E5C08: addiu       $t9, $sp, 0x544
    ctx->r25 = ADD32(ctx->r29, 0X544);
    // 0x800E5C0C: addu        $t1, $t5, $t9
    ctx->r9 = ADD32(ctx->r13, ctx->r25);
    // 0x800E5C10: subu        $t0, $fp, $v1
    ctx->r8 = SUB32(ctx->r30, ctx->r3);
L_800E5C14:
    // 0x800E5C14: sltu        $at, $s0, $t0
    ctx->r1 = ctx->r16 < ctx->r8 ? 1 : 0;
    // 0x800E5C18: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x800E5C1C: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x800E5C20: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x800E5C24: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x800E5C28: beq         $at, $zero, L_800E5C34
    if (ctx->r1 == 0) {
        // 0x800E5C2C: or          $t2, $v1, $zero
        ctx->r10 = ctx->r3 | 0;
            goto L_800E5C34;
    }
    // 0x800E5C2C: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
    // 0x800E5C30: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
L_800E5C34:
    // 0x800E5C34: subu        $v0, $s4, $t2
    ctx->r2 = SUB32(ctx->r20, ctx->r10);
    // 0x800E5C38: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800E5C3C: sllv        $a0, $t7, $v0
    ctx->r4 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x800E5C40: sltu        $at, $s2, $a0
    ctx->r1 = ctx->r18 < ctx->r4 ? 1 : 0;
    // 0x800E5C44: beq         $at, $zero, L_800E5C94
    if (ctx->r1 == 0) {
        // 0x800E5C48: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_800E5C94;
    }
    // 0x800E5C48: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800E5C4C: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
    // 0x800E5C50: subu        $v1, $a0, $s6
    ctx->r3 = SUB32(ctx->r4, ctx->r22);
    // 0x800E5C54: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x800E5C58: addiu       $t8, $sp, 0x5B0
    ctx->r24 = ADD32(ctx->r29, 0X5B0);
    // 0x800E5C5C: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x800E5C60: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800E5C64: beq         $at, $zero, L_800E5C94
    if (ctx->r1 == 0) {
        // 0x800E5C68: addu        $a2, $t6, $t8
        ctx->r6 = ADD32(ctx->r14, ctx->r24);
            goto L_800E5C94;
    }
    // 0x800E5C68: addu        $a2, $t6, $t8
    ctx->r6 = ADD32(ctx->r14, ctx->r24);
L_800E5C6C:
    // 0x800E5C6C: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x800E5C70: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800E5C74: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800E5C78: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x800E5C7C: beql        $at, $zero, L_800E5C98
    if (ctx->r1 == 0) {
        // 0x800E5C80: lw          $v1, 0x2C($s1)
        ctx->r3 = MEM_W(ctx->r17, 0X2C);
            goto L_800E5C98;
    }
    goto skip_5;
    // 0x800E5C80: lw          $v1, 0x2C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X2C);
    skip_5:
    // 0x800E5C84: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800E5C88: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x800E5C8C: bne         $at, $zero, L_800E5C6C
    if (ctx->r1 != 0) {
        // 0x800E5C90: subu        $v1, $v0, $a0
        ctx->r3 = SUB32(ctx->r2, ctx->r4);
            goto L_800E5C6C;
    }
    // 0x800E5C90: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
L_800E5C94:
    // 0x800E5C94: lw          $v1, 0x2C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X2C);
L_800E5C98:
    // 0x800E5C98: lw          $t7, 0x28($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X28);
    // 0x800E5C9C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800E5CA0: sllv        $t0, $t9, $a3
    ctx->r8 = S32(ctx->r25 << (ctx->r7 & 31));
    // 0x800E5CA4: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x800E5CA8: addu        $t8, $v1, $t0
    ctx->r24 = ADD32(ctx->r3, ctx->r8);
    // 0x800E5CAC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800E5CB0: addu        $a2, $t7, $t6
    ctx->r6 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5CB4: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x800E5CB8: addiu       $a0, $a2, 0x8
    ctx->r4 = ADD32(ctx->r6, 0X8);
    // 0x800E5CBC: sw          $a0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r4;
    // 0x800E5CC0: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800E5CC4: addiu       $s5, $a2, 0x4
    ctx->r21 = ADD32(ctx->r6, 0X4);
    // 0x800E5CC8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800E5CCC: beq         $t4, $zero, L_800E5D0C
    if (ctx->r12 == 0) {
        // 0x800E5CD0: sw          $a0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r4;
            goto L_800E5D0C;
    }
    // 0x800E5CD0: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x800E5CD4: sw          $ra, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r31;
    // 0x800E5CD8: addiu       $t7, $a3, 0x10
    ctx->r15 = ADD32(ctx->r7, 0X10);
    // 0x800E5CDC: sb          $s0, 0x585($sp)
    MEM_B(0X585, ctx->r29) = ctx->r16;
    // 0x800E5CE0: sb          $t7, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r15;
    // 0x800E5CE4: sw          $a0, 0x588($sp)
    MEM_W(0X588, ctx->r29) = ctx->r4;
    // 0x800E5CE8: lw          $t6, -0x4($t1)
    ctx->r14 = MEM_W(ctx->r9, -0X4);
    // 0x800E5CEC: subu        $t8, $t2, $s0
    ctx->r24 = SUB32(ctx->r10, ctx->r16);
    // 0x800E5CF0: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x800E5CF4: srlv        $t9, $ra, $t8
    ctx->r25 = S32(U32(ctx->r31) >> (ctx->r24 & 31));
    // 0x800E5CF8: sll         $t7, $t9, 3
    ctx->r15 = S32(ctx->r25 << 3);
    // 0x800E5CFC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800E5D00: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x800E5D04: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x800E5D08: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
L_800E5D0C:
    // 0x800E5D0C: addu        $v1, $t2, $s0
    ctx->r3 = ADD32(ctx->r10, ctx->r16);
    // 0x800E5D10: slt         $at, $v1, $s4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800E5D14: bnel        $at, $zero, L_800E5C14
    if (ctx->r1 != 0) {
        // 0x800E5D18: subu        $t0, $fp, $v1
        ctx->r8 = SUB32(ctx->r30, ctx->r3);
            goto L_800E5C14;
    }
    goto skip_6;
    // 0x800E5D18: subu        $t0, $fp, $v1
    ctx->r8 = SUB32(ctx->r30, ctx->r3);
    skip_6:
L_800E5D1C:
    // 0x800E5D1C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E5D20: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800E5D24: subu        $v1, $s4, $t2
    ctx->r3 = SUB32(ctx->r20, ctx->r10);
    // 0x800E5D28: sllv        $a1, $t6, $t2
    ctx->r5 = S32(ctx->r14 << (ctx->r10 & 31));
    // 0x800E5D2C: sltu        $at, $s7, $t9
    ctx->r1 = ctx->r23 < ctx->r25 ? 1 : 0;
    // 0x800E5D30: sb          $v1, 0x585($sp)
    MEM_B(0X585, ctx->r29) = ctx->r3;
    // 0x800E5D34: bne         $at, $zero, L_800E5D48
    if (ctx->r1 != 0) {
        // 0x800E5D38: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_800E5D48;
    }
    // 0x800E5D38: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800E5D3C: addiu       $t8, $zero, 0x63
    ctx->r24 = ADD32(0, 0X63);
    // 0x800E5D40: b           L_800E5DC4
    // 0x800E5D44: sb          $t8, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r24;
        goto L_800E5DC4;
    // 0x800E5D44: sb          $t8, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r24;
L_800E5D48:
    // 0x800E5D48: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x800E5D4C: lw          $t7, 0x600($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X600);
    // 0x800E5D50: lw          $a0, 0x600($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X600);
    // 0x800E5D54: lw          $t6, 0x608($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X608);
    // 0x800E5D58: sltu        $at, $v0, $t7
    ctx->r1 = ctx->r2 < ctx->r15 ? 1 : 0;
    // 0x800E5D5C: beq         $at, $zero, L_800E5D8C
    if (ctx->r1 == 0) {
        // 0x800E5D60: sltiu       $at, $v0, 0x100
        ctx->r1 = ctx->r2 < 0X100 ? 1 : 0;
            goto L_800E5D8C;
    }
    // 0x800E5D60: sltiu       $at, $v0, 0x100
    ctx->r1 = ctx->r2 < 0X100 ? 1 : 0;
    // 0x800E5D64: beq         $at, $zero, L_800E5D78
    if (ctx->r1 == 0) {
        // 0x800E5D68: addiu       $t9, $zero, 0xF
        ctx->r25 = ADD32(0, 0XF);
            goto L_800E5D78;
    }
    // 0x800E5D68: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x800E5D6C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x800E5D70: b           L_800E5D7C
    // 0x800E5D74: sb          $t6, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r14;
        goto L_800E5D7C;
    // 0x800E5D74: sb          $t6, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r14;
L_800E5D78:
    // 0x800E5D78: sb          $t9, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r25;
L_800E5D7C:
    // 0x800E5D7C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x800E5D80: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x800E5D84: b           L_800E5DC4
    // 0x800E5D88: sh          $t8, 0x588($sp)
    MEM_H(0X588, ctx->r29) = ctx->r24;
        goto L_800E5DC4;
    // 0x800E5D88: sh          $t8, 0x588($sp)
    MEM_H(0X588, ctx->r29) = ctx->r24;
L_800E5D8C:
    // 0x800E5D8C: subu        $t7, $v0, $a0
    ctx->r15 = SUB32(ctx->r2, ctx->r4);
    // 0x800E5D90: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5D94: lbu         $t8, 0x0($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X0);
    // 0x800E5D98: lw          $t7, 0x604($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X604);
    // 0x800E5D9C: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x800E5DA0: sb          $t8, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r24;
    // 0x800E5DA4: lw          $t6, -0x4($s7)
    ctx->r14 = MEM_W(ctx->r23, -0X4);
    // 0x800E5DA8: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x800E5DAC: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800E5DB0: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x800E5DB4: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x800E5DB8: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x800E5DBC: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x800E5DC0: sh          $t6, 0x588($sp)
    MEM_H(0X588, ctx->r29) = ctx->r14;
L_800E5DC4:
    // 0x800E5DC4: srlv        $a3, $ra, $t2
    ctx->r7 = S32(U32(ctx->r31) >> (ctx->r10 & 31));
    // 0x800E5DC8: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x800E5DCC: beq         $at, $zero, L_800E5DFC
    if (ctx->r1 == 0) {
        // 0x800E5DD0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_800E5DFC;
    }
    // 0x800E5DD0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800E5DD4: sllv        $v0, $t8, $v1
    ctx->r2 = S32(ctx->r24 << (ctx->r3 & 31));
L_800E5DD8:
    // 0x800E5DD8: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x800E5DDC: sll         $t7, $a3, 3
    ctx->r15 = S32(ctx->r7 << 3);
    // 0x800E5DE0: addu        $t9, $a2, $t7
    ctx->r25 = ADD32(ctx->r6, ctx->r15);
    // 0x800E5DE4: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x800E5DE8: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x800E5DEC: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x800E5DF0: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x800E5DF4: bne         $at, $zero, L_800E5DD8
    if (ctx->r1 != 0) {
        // 0x800E5DF8: sw          $t8, 0x4($t9)
        MEM_W(0X4, ctx->r25) = ctx->r24;
            goto L_800E5DD8;
    }
    // 0x800E5DF8: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
L_800E5DFC:
    // 0x800E5DFC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800E5E00: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x800E5E04: and         $t7, $ra, $a3
    ctx->r15 = ctx->r31 & ctx->r7;
    // 0x800E5E08: beq         $t7, $zero, L_800E5E20
    if (ctx->r15 == 0) {
        // 0x800E5E0C: srl         $t6, $a3, 1
        ctx->r14 = S32(U32(ctx->r7) >> 1);
            goto L_800E5E20;
    }
L_800E5E0C:
    // 0x800E5E0C: srl         $t6, $a3, 1
    ctx->r14 = S32(U32(ctx->r7) >> 1);
    // 0x800E5E10: xor         $ra, $ra, $a3
    ctx->r31 = ctx->r31 ^ ctx->r7;
    // 0x800E5E14: and         $t9, $ra, $t6
    ctx->r25 = ctx->r31 & ctx->r14;
    // 0x800E5E18: bne         $t9, $zero, L_800E5E0C
    if (ctx->r25 != 0) {
        // 0x800E5E1C: or          $a3, $t6, $zero
        ctx->r7 = ctx->r14 | 0;
            goto L_800E5E0C;
    }
    // 0x800E5E1C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
L_800E5E20:
    // 0x800E5E20: xor         $ra, $ra, $a3
    ctx->r31 = ctx->r31 ^ ctx->r7;
    // 0x800E5E24: and         $t8, $ra, $a1
    ctx->r24 = ctx->r31 & ctx->r5;
    // 0x800E5E28: beq         $t8, $v0, L_800E5E58
    if (ctx->r24 == ctx->r2) {
        // 0x800E5E2C: or          $a1, $s6, $zero
        ctx->r5 = ctx->r22 | 0;
            goto L_800E5E58;
    }
    // 0x800E5E2C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
L_800E5E30:
    // 0x800E5E30: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x800E5E34: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800E5E38: sllv        $t6, $t7, $t2
    ctx->r14 = S32(ctx->r15 << (ctx->r10 & 31));
    // 0x800E5E3C: lw          $t7, -0x4($t3)
    ctx->r15 = MEM_W(ctx->r11, -0X4);
    // 0x800E5E40: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x800E5E44: and         $t8, $ra, $t9
    ctx->r24 = ctx->r31 & ctx->r25;
    // 0x800E5E48: addiu       $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x800E5E4C: addiu       $t5, $t5, -0x4
    ctx->r13 = ADD32(ctx->r13, -0X4);
    // 0x800E5E50: bne         $t8, $t7, L_800E5E30
    if (ctx->r24 != ctx->r15) {
        // 0x800E5E54: addiu       $t3, $t3, -0x4
        ctx->r11 = ADD32(ctx->r11, -0X4);
            goto L_800E5E30;
    }
    // 0x800E5E54: addiu       $t3, $t3, -0x4
    ctx->r11 = ADD32(ctx->r11, -0X4);
L_800E5E58:
    // 0x800E5E58: bne         $s6, $zero, L_800E5BF8
    if (ctx->r22 != 0) {
        // 0x800E5E5C: addiu       $s6, $s6, -0x1
        ctx->r22 = ADD32(ctx->r22, -0X1);
            goto L_800E5BF8;
    }
    // 0x800E5E5C: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x800E5E60: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_800E5E64:
    // 0x800E5E64: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800E5E68: slt         $at, $fp, $s4
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800E5E6C: beq         $at, $zero, L_800E5BB4
    if (ctx->r1 == 0) {
        // 0x800E5E70: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800E5BB4;
    }
    // 0x800E5E70: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800E5E74: sw          $s5, 0x60C($sp)
    MEM_W(0X60C, ctx->r29) = ctx->r21;
L_800E5E78:
    // 0x800E5E78: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x800E5E7C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800E5E80: beq         $t6, $zero, L_800E5E90
    if (ctx->r14 == 0) {
        // 0x800E5E84: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800E5E90;
    }
    // 0x800E5E84: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800E5E88: xori        $v0, $fp, 0x1
    ctx->r2 = ctx->r30 ^ 0X1;
    // 0x800E5E8C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_800E5E90:
    // 0x800E5E90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800E5E94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E5E98: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5E9C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800E5EA0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800E5EA4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800E5EA8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5EAC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800E5EB0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800E5EB4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800E5EB8: jr          $ra
    // 0x800E5EBC: addiu       $sp, $sp, 0x5F8
    ctx->r29 = ADD32(ctx->r29, 0X5F8);
    return;
    // 0x800E5EBC: addiu       $sp, $sp, 0x5F8
    ctx->r29 = ADD32(ctx->r29, 0X5F8);
;}
RECOMP_FUNC void func_800E5EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5EC0: addiu       $sp, $sp, -0x580
    ctx->r29 = ADD32(ctx->r29, -0X580);
    // 0x800E5EC4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800E5EC8: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x800E5ECC: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x800E5ED0: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x800E5ED4: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x800E5ED8: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800E5EDC: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800E5EE0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800E5EE4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800E5EE8: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x800E5EEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E5EF0: sw          $t6, 0x560($sp)
    MEM_W(0X560, ctx->r29) = ctx->r14;
    // 0x800E5EF4: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x800E5EF8: sw          $t7, 0x55C($sp)
    MEM_W(0X55C, ctx->r29) = ctx->r15;
    // 0x800E5EFC: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x800E5F00: sw          $t8, 0x568($sp)
    MEM_W(0X568, ctx->r29) = ctx->r24;
    // 0x800E5F04: lw          $t9, 0x1C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1C);
    // 0x800E5F08: sw          $t9, 0x564($sp)
    MEM_W(0X564, ctx->r29) = ctx->r25;
    // 0x800E5F0C: lw          $s3, 0x10($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X10);
    // 0x800E5F10: lw          $s4, 0xC($a0)
    ctx->r20 = MEM_W(ctx->r4, 0XC);
    // 0x800E5F14: sltiu       $at, $s3, 0x5
    ctx->r1 = ctx->r19 < 0X5 ? 1 : 0;
    // 0x800E5F18: beql        $at, $zero, L_800E5F80
    if (ctx->r1 == 0) {
        // 0x800E5F1C: andi        $t6, $s4, 0x1F
        ctx->r14 = ctx->r20 & 0X1F;
            goto L_800E5F80;
    }
    goto skip_0;
    // 0x800E5F1C: andi        $t6, $s4, 0x1F
    ctx->r14 = ctx->r20 & 0X1F;
    skip_0:
    // 0x800E5F20: lw          $s1, 0x0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X0);
L_800E5F24:
    // 0x800E5F24: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5F28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E5F2C: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E5F30: bnel        $at, $zero, L_800E5F5C
    if (ctx->r1 != 0) {
        // 0x800E5F34: addu        $t2, $s1, $v0
        ctx->r10 = ADD32(ctx->r17, ctx->r2);
            goto L_800E5F5C;
    }
    goto skip_1;
    // 0x800E5F34: addu        $t2, $s1, $v0
    ctx->r10 = ADD32(ctx->r17, ctx->r2);
    skip_1:
    // 0x800E5F38: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E5F3C: jal         0x8001311C
    // 0x800E5F40: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_0;
    // 0x800E5F40: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_0:
    // 0x800E5F44: lw          $t0, 0x30($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X30);
    // 0x800E5F48: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5F4C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E5F50: addiu       $t1, $t0, 0x1800
    ctx->r9 = ADD32(ctx->r8, 0X1800);
    // 0x800E5F54: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
    // 0x800E5F58: addu        $t2, $s1, $v0
    ctx->r10 = ADD32(ctx->r17, ctx->r2);
L_800E5F5C:
    // 0x800E5F5C: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x800E5F60: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x800E5F64: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x800E5F68: sllv        $t4, $t3, $s3
    ctx->r12 = S32(ctx->r11 << (ctx->r19 & 31));
    // 0x800E5F6C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x800E5F70: sltiu       $at, $s3, 0x5
    ctx->r1 = ctx->r19 < 0X5 ? 1 : 0;
    // 0x800E5F74: bne         $at, $zero, L_800E5F24
    if (ctx->r1 != 0) {
        // 0x800E5F78: or          $s4, $s4, $t4
        ctx->r20 = ctx->r20 | ctx->r12;
            goto L_800E5F24;
    }
    // 0x800E5F78: or          $s4, $s4, $t4
    ctx->r20 = ctx->r20 | ctx->r12;
    // 0x800E5F7C: andi        $t6, $s4, 0x1F
    ctx->r14 = ctx->r20 & 0X1F;
L_800E5F80:
    // 0x800E5F80: addiu       $s3, $s3, -0x5
    ctx->r19 = ADD32(ctx->r19, -0X5);
    // 0x800E5F84: addiu       $t7, $t6, 0x101
    ctx->r15 = ADD32(ctx->r14, 0X101);
    // 0x800E5F88: srl         $t8, $s4, 5
    ctx->r24 = S32(U32(ctx->r20) >> 5);
    // 0x800E5F8C: sltiu       $at, $s3, 0x5
    ctx->r1 = ctx->r19 < 0X5 ? 1 : 0;
    // 0x800E5F90: sw          $t7, 0x554($sp)
    MEM_W(0X554, ctx->r29) = ctx->r15;
    // 0x800E5F94: beq         $at, $zero, L_800E5FF8
    if (ctx->r1 == 0) {
        // 0x800E5F98: or          $s4, $t8, $zero
        ctx->r20 = ctx->r24 | 0;
            goto L_800E5FF8;
    }
    // 0x800E5F98: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x800E5F9C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E5FA0:
    // 0x800E5FA0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5FA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E5FA8: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E5FAC: bnel        $at, $zero, L_800E5FD8
    if (ctx->r1 != 0) {
        // 0x800E5FB0: addu        $t1, $s1, $v0
        ctx->r9 = ADD32(ctx->r17, ctx->r2);
            goto L_800E5FD8;
    }
    goto skip_2;
    // 0x800E5FB0: addu        $t1, $s1, $v0
    ctx->r9 = ADD32(ctx->r17, ctx->r2);
    skip_2:
    // 0x800E5FB4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E5FB8: jal         0x8001311C
    // 0x800E5FBC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_1;
    // 0x800E5FBC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x800E5FC0: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x800E5FC4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E5FC8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E5FCC: addiu       $t0, $t9, 0x1800
    ctx->r8 = ADD32(ctx->r25, 0X1800);
    // 0x800E5FD0: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x800E5FD4: addu        $t1, $s1, $v0
    ctx->r9 = ADD32(ctx->r17, ctx->r2);
L_800E5FD8:
    // 0x800E5FD8: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x800E5FDC: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x800E5FE0: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x800E5FE4: sllv        $t3, $t2, $s3
    ctx->r11 = S32(ctx->r10 << (ctx->r19 & 31));
    // 0x800E5FE8: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x800E5FEC: sltiu       $at, $s3, 0x5
    ctx->r1 = ctx->r19 < 0X5 ? 1 : 0;
    // 0x800E5FF0: bne         $at, $zero, L_800E5FA0
    if (ctx->r1 != 0) {
        // 0x800E5FF4: or          $s4, $s4, $t3
        ctx->r20 = ctx->r20 | ctx->r11;
            goto L_800E5FA0;
    }
    // 0x800E5FF4: or          $s4, $s4, $t3
    ctx->r20 = ctx->r20 | ctx->r11;
L_800E5FF8:
    // 0x800E5FF8: andi        $t5, $s4, 0x1F
    ctx->r13 = ctx->r20 & 0X1F;
    // 0x800E5FFC: addiu       $s3, $s3, -0x5
    ctx->r19 = ADD32(ctx->r19, -0X5);
    // 0x800E6000: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800E6004: srl         $t7, $s4, 5
    ctx->r15 = S32(U32(ctx->r20) >> 5);
    // 0x800E6008: sltiu       $at, $s3, 0x4
    ctx->r1 = ctx->r19 < 0X4 ? 1 : 0;
    // 0x800E600C: sw          $t6, 0x550($sp)
    MEM_W(0X550, ctx->r29) = ctx->r14;
    // 0x800E6010: beq         $at, $zero, L_800E6074
    if (ctx->r1 == 0) {
        // 0x800E6014: or          $s4, $t7, $zero
        ctx->r20 = ctx->r15 | 0;
            goto L_800E6074;
    }
    // 0x800E6014: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x800E6018: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E601C:
    // 0x800E601C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E6020: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E6024: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E6028: bnel        $at, $zero, L_800E6054
    if (ctx->r1 != 0) {
        // 0x800E602C: addu        $t0, $s1, $v0
        ctx->r8 = ADD32(ctx->r17, ctx->r2);
            goto L_800E6054;
    }
    goto skip_3;
    // 0x800E602C: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
    skip_3:
    // 0x800E6030: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E6034: jal         0x8001311C
    // 0x800E6038: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_2;
    // 0x800E6038: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_2:
    // 0x800E603C: lw          $t8, 0x30($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X30);
    // 0x800E6040: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E6044: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E6048: addiu       $t9, $t8, 0x1800
    ctx->r25 = ADD32(ctx->r24, 0X1800);
    // 0x800E604C: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    // 0x800E6050: addu        $t0, $s1, $v0
    ctx->r8 = ADD32(ctx->r17, ctx->r2);
L_800E6054:
    // 0x800E6054: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x800E6058: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x800E605C: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x800E6060: sllv        $t2, $t1, $s3
    ctx->r10 = S32(ctx->r9 << (ctx->r19 & 31));
    // 0x800E6064: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x800E6068: sltiu       $at, $s3, 0x4
    ctx->r1 = ctx->r19 < 0X4 ? 1 : 0;
    // 0x800E606C: bne         $at, $zero, L_800E601C
    if (ctx->r1 != 0) {
        // 0x800E6070: or          $s4, $s4, $t2
        ctx->r20 = ctx->r20 | ctx->r10;
            goto L_800E601C;
    }
    // 0x800E6070: or          $s4, $s4, $t2
    ctx->r20 = ctx->r20 | ctx->r10;
L_800E6074:
    // 0x800E6074: andi        $s6, $s4, 0xF
    ctx->r22 = ctx->r20 & 0XF;
    // 0x800E6078: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x800E607C: srl         $t4, $s4, 4
    ctx->r12 = S32(U32(ctx->r20) >> 4);
    // 0x800E6080: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
    // 0x800E6084: addiu       $s3, $s3, -0x4
    ctx->r19 = ADD32(ctx->r19, -0X4);
    // 0x800E6088: beq         $s6, $zero, L_800E6130
    if (ctx->r22 == 0) {
        // 0x800E608C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800E6130;
    }
    // 0x800E608C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800E6090: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x800E6094: addiu       $s5, $s5, 0x31F0
    ctx->r21 = ADD32(ctx->r21, 0X31F0);
    // 0x800E6098: addiu       $s7, $sp, 0x60
    ctx->r23 = ADD32(ctx->r29, 0X60);
L_800E609C:
    // 0x800E609C: sltiu       $at, $s3, 0x3
    ctx->r1 = ctx->r19 < 0X3 ? 1 : 0;
    // 0x800E60A0: beql        $at, $zero, L_800E6108
    if (ctx->r1 == 0) {
        // 0x800E60A4: lbu         $t2, 0x0($s5)
        ctx->r10 = MEM_BU(ctx->r21, 0X0);
            goto L_800E6108;
    }
    goto skip_4;
    // 0x800E60A4: lbu         $t2, 0x0($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X0);
    skip_4:
    // 0x800E60A8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E60AC:
    // 0x800E60AC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E60B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E60B4: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E60B8: bnel        $at, $zero, L_800E60E4
    if (ctx->r1 != 0) {
        // 0x800E60BC: addu        $t7, $s1, $v0
        ctx->r15 = ADD32(ctx->r17, ctx->r2);
            goto L_800E60E4;
    }
    goto skip_5;
    // 0x800E60BC: addu        $t7, $s1, $v0
    ctx->r15 = ADD32(ctx->r17, ctx->r2);
    skip_5:
    // 0x800E60C0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E60C4: jal         0x8001311C
    // 0x800E60C8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_3;
    // 0x800E60C8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_3:
    // 0x800E60CC: lw          $t5, 0x30($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X30);
    // 0x800E60D0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E60D4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E60D8: addiu       $t6, $t5, 0x1800
    ctx->r14 = ADD32(ctx->r13, 0X1800);
    // 0x800E60DC: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x800E60E0: addu        $t7, $s1, $v0
    ctx->r15 = ADD32(ctx->r17, ctx->r2);
L_800E60E4:
    // 0x800E60E4: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x800E60E8: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x800E60EC: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x800E60F0: sllv        $t9, $t8, $s3
    ctx->r25 = S32(ctx->r24 << (ctx->r19 & 31));
    // 0x800E60F4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x800E60F8: sltiu       $at, $s3, 0x3
    ctx->r1 = ctx->r19 < 0X3 ? 1 : 0;
    // 0x800E60FC: bne         $at, $zero, L_800E60AC
    if (ctx->r1 != 0) {
        // 0x800E6100: or          $s4, $s4, $t9
        ctx->r20 = ctx->r20 | ctx->r25;
            goto L_800E60AC;
    }
    // 0x800E6100: or          $s4, $s4, $t9
    ctx->r20 = ctx->r20 | ctx->r25;
    // 0x800E6104: lbu         $t2, 0x0($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X0);
L_800E6108:
    // 0x800E6108: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800E610C: andi        $t1, $s4, 0x7
    ctx->r9 = ctx->r20 & 0X7;
    // 0x800E6110: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800E6114: addu        $t4, $s7, $t3
    ctx->r12 = ADD32(ctx->r23, ctx->r11);
    // 0x800E6118: srl         $t5, $s4, 3
    ctx->r13 = S32(U32(ctx->r20) >> 3);
    // 0x800E611C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800E6120: sw          $t1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r9;
    // 0x800E6124: or          $s4, $t5, $zero
    ctx->r20 = ctx->r13 | 0;
    // 0x800E6128: bne         $s2, $s6, L_800E609C
    if (ctx->r18 != ctx->r22) {
        // 0x800E612C: addiu       $s3, $s3, -0x3
        ctx->r19 = ADD32(ctx->r19, -0X3);
            goto L_800E609C;
    }
    // 0x800E612C: addiu       $s3, $s3, -0x3
    ctx->r19 = ADD32(ctx->r19, -0X3);
L_800E6130:
    // 0x800E6130: sltiu       $at, $s2, 0x13
    ctx->r1 = ctx->r18 < 0X13 ? 1 : 0;
    // 0x800E6134: beq         $at, $zero, L_800E616C
    if (ctx->r1 == 0) {
        // 0x800E6138: addiu       $s7, $sp, 0x60
        ctx->r23 = ADD32(ctx->r29, 0X60);
            goto L_800E616C;
    }
    // 0x800E6138: addiu       $s7, $sp, 0x60
    ctx->r23 = ADD32(ctx->r29, 0X60);
    // 0x800E613C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800E6140: addiu       $t6, $t6, 0x31F0
    ctx->r14 = ADD32(ctx->r14, 0X31F0);
    // 0x800E6144: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800E6148: addiu       $v0, $v0, 0x3203
    ctx->r2 = ADD32(ctx->r2, 0X3203);
    // 0x800E614C: addu        $s5, $s2, $t6
    ctx->r21 = ADD32(ctx->r18, ctx->r14);
L_800E6150:
    // 0x800E6150: lbu         $t7, 0x0($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X0);
    // 0x800E6154: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800E6158: sltu        $at, $s5, $v0
    ctx->r1 = ctx->r21 < ctx->r2 ? 1 : 0;
    // 0x800E615C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800E6160: addu        $t9, $s7, $t8
    ctx->r25 = ADD32(ctx->r23, ctx->r24);
    // 0x800E6164: bne         $at, $zero, L_800E6150
    if (ctx->r1 != 0) {
        // 0x800E6168: sw          $zero, 0x0($t9)
        MEM_W(0X0, ctx->r25) = 0;
            goto L_800E6150;
    }
    // 0x800E6168: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
L_800E616C:
    // 0x800E616C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x800E6170: addiu       $t2, $sp, 0x568
    ctx->r10 = ADD32(ctx->r29, 0X568);
    // 0x800E6174: addiu       $t3, $sp, 0x560
    ctx->r11 = ADD32(ctx->r29, 0X560);
    // 0x800E6178: sw          $t0, 0x560($sp)
    MEM_W(0X560, ctx->r29) = ctx->r8;
    // 0x800E617C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800E6180: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x800E6184: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800E6188: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x800E618C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x800E6190: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800E6194: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800E6198: jal         0x800E589C
    // 0x800E619C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_800E589C(rdram, ctx);
        goto after_4;
    // 0x800E619C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_4:
    // 0x800E61A0: lw          $t5, 0x560($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X560);
    // 0x800E61A4: lw          $t1, 0x554($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X554);
    // 0x800E61A8: lw          $t4, 0x550($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X550);
    // 0x800E61AC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E61B0: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x800E61B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E61B8: lhu         $t7, 0x32C0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X32C0);
    // 0x800E61BC: addu        $v0, $t1, $t4
    ctx->r2 = ADD32(ctx->r9, ctx->r12);
    // 0x800E61C0: sw          $v0, 0x56C($sp)
    MEM_W(0X56C, ctx->r29) = ctx->r2;
    // 0x800E61C4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800E61C8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800E61CC: beq         $v0, $zero, L_800E64BC
    if (ctx->r2 == 0) {
        // 0x800E61D0: sw          $t7, 0x570($sp)
        MEM_W(0X570, ctx->r29) = ctx->r15;
            goto L_800E64BC;
    }
    // 0x800E61D0: sw          $t7, 0x570($sp)
    MEM_W(0X570, ctx->r29) = ctx->r15;
    // 0x800E61D4: lw          $t8, 0x560($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X560);
L_800E61D8:
    // 0x800E61D8: sltu        $at, $s3, $t8
    ctx->r1 = ctx->r19 < ctx->r24 ? 1 : 0;
    // 0x800E61DC: beql        $at, $zero, L_800E6248
    if (ctx->r1 == 0) {
        // 0x800E61E0: lw          $t6, 0x570($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X570);
            goto L_800E6248;
    }
    goto skip_6;
    // 0x800E61E0: lw          $t6, 0x570($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X570);
    skip_6:
    // 0x800E61E4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E61E8:
    // 0x800E61E8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E61EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E61F0: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E61F4: bnel        $at, $zero, L_800E6220
    if (ctx->r1 != 0) {
        // 0x800E61F8: addu        $t2, $s1, $v0
        ctx->r10 = ADD32(ctx->r17, ctx->r2);
            goto L_800E6220;
    }
    goto skip_7;
    // 0x800E61F8: addu        $t2, $s1, $v0
    ctx->r10 = ADD32(ctx->r17, ctx->r2);
    skip_7:
    // 0x800E61FC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E6200: jal         0x8001311C
    // 0x800E6204: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_5;
    // 0x800E6204: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_5:
    // 0x800E6208: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x800E620C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E6210: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E6214: addiu       $t0, $t9, 0x1800
    ctx->r8 = ADD32(ctx->r25, 0X1800);
    // 0x800E6218: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x800E621C: addu        $t2, $s1, $v0
    ctx->r10 = ADD32(ctx->r17, ctx->r2);
L_800E6220:
    // 0x800E6220: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x800E6224: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x800E6228: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x800E622C: lw          $t5, 0x560($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X560);
    // 0x800E6230: sllv        $t1, $t3, $s3
    ctx->r9 = S32(ctx->r11 << (ctx->r19 & 31));
    // 0x800E6234: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x800E6238: sltu        $at, $s3, $t5
    ctx->r1 = ctx->r19 < ctx->r13 ? 1 : 0;
    // 0x800E623C: bne         $at, $zero, L_800E61E8
    if (ctx->r1 != 0) {
        // 0x800E6240: or          $s4, $s4, $t1
        ctx->r20 = ctx->r20 | ctx->r9;
            goto L_800E61E8;
    }
    // 0x800E6240: or          $s4, $s4, $t1
    ctx->r20 = ctx->r20 | ctx->r9;
    // 0x800E6244: lw          $t6, 0x570($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X570);
L_800E6248:
    // 0x800E6248: lw          $t9, 0x568($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X568);
    // 0x800E624C: sll         $t2, $s5, 2
    ctx->r10 = S32(ctx->r21 << 2);
    // 0x800E6250: and         $t7, $s4, $t6
    ctx->r15 = ctx->r20 & ctx->r14;
    // 0x800E6254: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800E6258: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800E625C: sw          $t0, 0x564($sp)
    MEM_W(0X564, ctx->r29) = ctx->r8;
    // 0x800E6260: lbu         $s2, 0x1($t0)
    ctx->r18 = MEM_BU(ctx->r8, 0X1);
    // 0x800E6264: addu        $t3, $s7, $t2
    ctx->r11 = ADD32(ctx->r23, ctx->r10);
    // 0x800E6268: srlv        $s4, $s4, $s2
    ctx->r20 = S32(U32(ctx->r20) >> (ctx->r18 & 31));
    // 0x800E626C: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x800E6270: lhu         $s2, 0x4($t0)
    ctx->r18 = MEM_HU(ctx->r8, 0X4);
    // 0x800E6274: sltiu       $at, $s2, 0x10
    ctx->r1 = ctx->r18 < 0X10 ? 1 : 0;
    // 0x800E6278: beql        $at, $zero, L_800E6294
    if (ctx->r1 == 0) {
        // 0x800E627C: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_800E6294;
    }
    goto skip_8;
    // 0x800E627C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    skip_8:
    // 0x800E6280: or          $s6, $s2, $zero
    ctx->r22 = ctx->r18 | 0;
    // 0x800E6284: sw          $s2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r18;
    // 0x800E6288: b           L_800E64AC
    // 0x800E628C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
        goto L_800E64AC;
    // 0x800E628C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800E6290: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_800E6294:
    // 0x800E6294: bne         $s2, $at, L_800E6348
    if (ctx->r18 != ctx->r1) {
        // 0x800E6298: sltiu       $at, $s3, 0x2
        ctx->r1 = ctx->r19 < 0X2 ? 1 : 0;
            goto L_800E6348;
    }
    // 0x800E6298: sltiu       $at, $s3, 0x2
    ctx->r1 = ctx->r19 < 0X2 ? 1 : 0;
    // 0x800E629C: beql        $at, $zero, L_800E6304
    if (ctx->r1 == 0) {
        // 0x800E62A0: andi        $s2, $s4, 0x3
        ctx->r18 = ctx->r20 & 0X3;
            goto L_800E6304;
    }
    goto skip_9;
    // 0x800E62A0: andi        $s2, $s4, 0x3
    ctx->r18 = ctx->r20 & 0X3;
    skip_9:
    // 0x800E62A4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E62A8:
    // 0x800E62A8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E62AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E62B0: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E62B4: bnel        $at, $zero, L_800E62E0
    if (ctx->r1 != 0) {
        // 0x800E62B8: addu        $t5, $s1, $v0
        ctx->r13 = ADD32(ctx->r17, ctx->r2);
            goto L_800E62E0;
    }
    goto skip_10;
    // 0x800E62B8: addu        $t5, $s1, $v0
    ctx->r13 = ADD32(ctx->r17, ctx->r2);
    skip_10:
    // 0x800E62BC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E62C0: jal         0x8001311C
    // 0x800E62C4: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_6;
    // 0x800E62C4: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_6:
    // 0x800E62C8: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x800E62CC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E62D0: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E62D4: addiu       $t4, $t1, 0x1800
    ctx->r12 = ADD32(ctx->r9, 0X1800);
    // 0x800E62D8: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x800E62DC: addu        $t5, $s1, $v0
    ctx->r13 = ADD32(ctx->r17, ctx->r2);
L_800E62E0:
    // 0x800E62E0: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x800E62E4: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x800E62E8: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x800E62EC: sllv        $t7, $t6, $s3
    ctx->r15 = S32(ctx->r14 << (ctx->r19 & 31));
    // 0x800E62F0: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x800E62F4: sltiu       $at, $s3, 0x2
    ctx->r1 = ctx->r19 < 0X2 ? 1 : 0;
    // 0x800E62F8: bne         $at, $zero, L_800E62A8
    if (ctx->r1 != 0) {
        // 0x800E62FC: or          $s4, $s4, $t7
        ctx->r20 = ctx->r20 | ctx->r15;
            goto L_800E62A8;
    }
    // 0x800E62FC: or          $s4, $s4, $t7
    ctx->r20 = ctx->r20 | ctx->r15;
    // 0x800E6300: andi        $s2, $s4, 0x3
    ctx->r18 = ctx->r20 & 0X3;
L_800E6304:
    // 0x800E6304: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x800E6308: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800E630C: srl         $t9, $s4, 2
    ctx->r25 = S32(U32(ctx->r20) >> 2);
    // 0x800E6310: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
    // 0x800E6314: addiu       $s3, $s3, -0x2
    ctx->r19 = ADD32(ctx->r19, -0X2);
    // 0x800E6318: beq         $s2, $zero, L_800E64AC
    if (ctx->r18 == 0) {
        // 0x800E631C: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_800E64AC;
    }
    // 0x800E631C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800E6320: sll         $t0, $s5, 2
    ctx->r8 = S32(ctx->r21 << 2);
    // 0x800E6324: addu        $v0, $s7, $t0
    ctx->r2 = ADD32(ctx->r23, ctx->r8);
L_800E6328:
    // 0x800E6328: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800E632C: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x800E6330: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800E6334: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800E6338: bne         $s2, $zero, L_800E6328
    if (ctx->r18 != 0) {
        // 0x800E633C: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_800E6328;
    }
    // 0x800E633C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800E6340: b           L_800E64B0
    // 0x800E6344: lw          $t7, 0x56C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X56C);
        goto L_800E64B0;
    // 0x800E6344: lw          $t7, 0x56C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X56C);
L_800E6348:
    // 0x800E6348: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x800E634C: bne         $s2, $at, L_800E6404
    if (ctx->r18 != ctx->r1) {
        // 0x800E6350: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_800E6404;
    }
    // 0x800E6350: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800E6354: sltiu       $at, $s3, 0x3
    ctx->r1 = ctx->r19 < 0X3 ? 1 : 0;
    // 0x800E6358: beql        $at, $zero, L_800E63C0
    if (ctx->r1 == 0) {
        // 0x800E635C: andi        $s2, $s4, 0x7
        ctx->r18 = ctx->r20 & 0X7;
            goto L_800E63C0;
    }
    goto skip_11;
    // 0x800E635C: andi        $s2, $s4, 0x7
    ctx->r18 = ctx->r20 & 0X7;
    skip_11:
    // 0x800E6360: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E6364:
    // 0x800E6364: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E6368: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E636C: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E6370: bnel        $at, $zero, L_800E639C
    if (ctx->r1 != 0) {
        // 0x800E6374: addu        $t1, $s1, $v0
        ctx->r9 = ADD32(ctx->r17, ctx->r2);
            goto L_800E639C;
    }
    goto skip_12;
    // 0x800E6374: addu        $t1, $s1, $v0
    ctx->r9 = ADD32(ctx->r17, ctx->r2);
    skip_12:
    // 0x800E6378: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E637C: jal         0x8001311C
    // 0x800E6380: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_7;
    // 0x800E6380: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_7:
    // 0x800E6384: lw          $t2, 0x30($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X30);
    // 0x800E6388: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E638C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E6390: addiu       $t3, $t2, 0x1800
    ctx->r11 = ADD32(ctx->r10, 0X1800);
    // 0x800E6394: sw          $t3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r11;
    // 0x800E6398: addu        $t1, $s1, $v0
    ctx->r9 = ADD32(ctx->r17, ctx->r2);
L_800E639C:
    // 0x800E639C: lbu         $t4, 0x0($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X0);
    // 0x800E63A0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800E63A4: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x800E63A8: sllv        $t5, $t4, $s3
    ctx->r13 = S32(ctx->r12 << (ctx->r19 & 31));
    // 0x800E63AC: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x800E63B0: sltiu       $at, $s3, 0x3
    ctx->r1 = ctx->r19 < 0X3 ? 1 : 0;
    // 0x800E63B4: bne         $at, $zero, L_800E6364
    if (ctx->r1 != 0) {
        // 0x800E63B8: or          $s4, $s4, $t5
        ctx->r20 = ctx->r20 | ctx->r13;
            goto L_800E6364;
    }
    // 0x800E63B8: or          $s4, $s4, $t5
    ctx->r20 = ctx->r20 | ctx->r13;
    // 0x800E63BC: andi        $s2, $s4, 0x7
    ctx->r18 = ctx->r20 & 0X7;
L_800E63C0:
    // 0x800E63C0: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x800E63C4: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800E63C8: srl         $t7, $s4, 3
    ctx->r15 = S32(U32(ctx->r20) >> 3);
    // 0x800E63CC: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x800E63D0: addiu       $s3, $s3, -0x3
    ctx->r19 = ADD32(ctx->r19, -0X3);
    // 0x800E63D4: beq         $s2, $zero, L_800E64AC
    if (ctx->r18 == 0) {
        // 0x800E63D8: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_800E64AC;
    }
    // 0x800E63D8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800E63DC: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x800E63E0: addu        $v0, $s7, $t8
    ctx->r2 = ADD32(ctx->r23, ctx->r24);
L_800E63E4:
    // 0x800E63E4: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800E63E8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800E63EC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800E63F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800E63F4: bne         $s2, $zero, L_800E63E4
    if (ctx->r18 != 0) {
        // 0x800E63F8: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_800E63E4;
    }
    // 0x800E63F8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800E63FC: b           L_800E64B0
    // 0x800E6400: lw          $t7, 0x56C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X56C);
        goto L_800E64B0;
    // 0x800E6400: lw          $t7, 0x56C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X56C);
L_800E6404:
    // 0x800E6404: sltiu       $at, $s3, 0x7
    ctx->r1 = ctx->r19 < 0X7 ? 1 : 0;
    // 0x800E6408: beql        $at, $zero, L_800E6470
    if (ctx->r1 == 0) {
        // 0x800E640C: andi        $s2, $s4, 0x7F
        ctx->r18 = ctx->r20 & 0X7F;
            goto L_800E6470;
    }
    goto skip_13;
    // 0x800E640C: andi        $s2, $s4, 0x7F
    ctx->r18 = ctx->r20 & 0X7F;
    skip_13:
    // 0x800E6410: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E6414:
    // 0x800E6414: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E6418: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E641C: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E6420: bnel        $at, $zero, L_800E644C
    if (ctx->r1 != 0) {
        // 0x800E6424: addu        $t2, $s1, $v0
        ctx->r10 = ADD32(ctx->r17, ctx->r2);
            goto L_800E644C;
    }
    goto skip_14;
    // 0x800E6424: addu        $t2, $s1, $v0
    ctx->r10 = ADD32(ctx->r17, ctx->r2);
    skip_14:
    // 0x800E6428: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E642C: jal         0x8001311C
    // 0x800E6430: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_8;
    // 0x800E6430: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_8:
    // 0x800E6434: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x800E6438: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E643C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E6440: addiu       $t0, $t9, 0x1800
    ctx->r8 = ADD32(ctx->r25, 0X1800);
    // 0x800E6444: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x800E6448: addu        $t2, $s1, $v0
    ctx->r10 = ADD32(ctx->r17, ctx->r2);
L_800E644C:
    // 0x800E644C: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x800E6450: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x800E6454: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x800E6458: sllv        $t1, $t3, $s3
    ctx->r9 = S32(ctx->r11 << (ctx->r19 & 31));
    // 0x800E645C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x800E6460: sltiu       $at, $s3, 0x7
    ctx->r1 = ctx->r19 < 0X7 ? 1 : 0;
    // 0x800E6464: bne         $at, $zero, L_800E6414
    if (ctx->r1 != 0) {
        // 0x800E6468: or          $s4, $s4, $t1
        ctx->r20 = ctx->r20 | ctx->r9;
            goto L_800E6414;
    }
    // 0x800E6468: or          $s4, $s4, $t1
    ctx->r20 = ctx->r20 | ctx->r9;
    // 0x800E646C: andi        $s2, $s4, 0x7F
    ctx->r18 = ctx->r20 & 0X7F;
L_800E6470:
    // 0x800E6470: addiu       $s2, $s2, 0xB
    ctx->r18 = ADD32(ctx->r18, 0XB);
    // 0x800E6474: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800E6478: srl         $t5, $s4, 7
    ctx->r13 = S32(U32(ctx->r20) >> 7);
    // 0x800E647C: or          $s4, $t5, $zero
    ctx->r20 = ctx->r13 | 0;
    // 0x800E6480: addiu       $s3, $s3, -0x7
    ctx->r19 = ADD32(ctx->r19, -0X7);
    // 0x800E6484: beq         $s2, $zero, L_800E64AC
    if (ctx->r18 == 0) {
        // 0x800E6488: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_800E64AC;
    }
    // 0x800E6488: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800E648C: sll         $t6, $s5, 2
    ctx->r14 = S32(ctx->r21 << 2);
    // 0x800E6490: addu        $v0, $s7, $t6
    ctx->r2 = ADD32(ctx->r23, ctx->r14);
L_800E6494:
    // 0x800E6494: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800E6498: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800E649C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800E64A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800E64A4: bne         $s2, $zero, L_800E6494
    if (ctx->r18 != 0) {
        // 0x800E64A8: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_800E6494;
    }
    // 0x800E64A8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_800E64AC:
    // 0x800E64AC: lw          $t7, 0x56C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X56C);
L_800E64B0:
    // 0x800E64B0: sltu        $at, $s5, $t7
    ctx->r1 = ctx->r21 < ctx->r15 ? 1 : 0;
    // 0x800E64B4: bnel        $at, $zero, L_800E61D8
    if (ctx->r1 != 0) {
        // 0x800E64B8: lw          $t8, 0x560($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X560);
            goto L_800E61D8;
    }
    goto skip_15;
    // 0x800E64B8: lw          $t8, 0x560($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X560);
    skip_15:
L_800E64BC:
    // 0x800E64BC: sw          $s4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r20;
    // 0x800E64C0: sw          $s3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r19;
    // 0x800E64C4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800E64C8: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x800E64CC: addiu       $t9, $t9, 0x3244
    ctx->r25 = ADD32(ctx->r25, 0X3244);
    // 0x800E64D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E64D4: addiu       $t0, $sp, 0x568
    ctx->r8 = ADD32(ctx->r29, 0X568);
    // 0x800E64D8: addiu       $t2, $sp, 0x560
    ctx->r10 = ADD32(ctx->r29, 0X560);
    // 0x800E64DC: sw          $t8, 0x560($sp)
    MEM_W(0X560, ctx->r29) = ctx->r24;
    // 0x800E64E0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800E64E4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800E64E8: addiu       $a3, $a3, 0x3204
    ctx->r7 = ADD32(ctx->r7, 0X3204);
    // 0x800E64EC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800E64F0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800E64F4: lw          $a1, 0x554($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X554);
    // 0x800E64F8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800E64FC: jal         0x800E589C
    // 0x800E6500: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    func_800E589C(rdram, ctx);
        goto after_9;
    // 0x800E6500: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    after_9:
    // 0x800E6504: lw          $t1, 0x554($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X554);
    // 0x800E6508: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E650C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x800E6510: addiu       $t5, $t5, 0x32A0
    ctx->r13 = ADD32(ctx->r13, 0X32A0);
    // 0x800E6514: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E6518: addiu       $t6, $sp, 0x564
    ctx->r14 = ADD32(ctx->r29, 0X564);
    // 0x800E651C: addiu       $t7, $sp, 0x55C
    ctx->r15 = ADD32(ctx->r29, 0X55C);
    // 0x800E6520: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800E6524: sw          $t3, 0x55C($sp)
    MEM_W(0X55C, ctx->r29) = ctx->r11;
    // 0x800E6528: addu        $a0, $s7, $t4
    ctx->r4 = ADD32(ctx->r23, ctx->r12);
    // 0x800E652C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800E6530: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800E6534: addiu       $a3, $a3, 0x3264
    ctx->r7 = ADD32(ctx->r7, 0X3264);
    // 0x800E6538: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E653C: lw          $a1, 0x550($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X550);
    // 0x800E6540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E6544: jal         0x800E589C
    // 0x800E6548: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_800E589C(rdram, ctx);
        goto after_10;
    // 0x800E6548: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_10:
    // 0x800E654C: lw          $t8, 0x560($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X560);
    // 0x800E6550: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E6554: sw          $t8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r24;
    // 0x800E6558: lw          $t9, 0x55C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X55C);
    // 0x800E655C: sw          $t9, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r25;
    // 0x800E6560: lw          $t0, 0x568($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X568);
    // 0x800E6564: sw          $t0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r8;
    // 0x800E6568: lw          $t2, 0x564($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X564);
    // 0x800E656C: sw          $t2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r10;
    // 0x800E6570: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800E6574: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x800E6578: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x800E657C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x800E6580: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x800E6584: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800E6588: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800E658C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800E6590: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800E6594: jr          $ra
    // 0x800E6598: addiu       $sp, $sp, 0x580
    ctx->r29 = ADD32(ctx->r29, 0X580);
    return;
    // 0x800E6598: addiu       $sp, $sp, 0x580
    ctx->r29 = ADD32(ctx->r29, 0X580);
;}
RECOMP_FUNC void func_800E659C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E659C: addiu       $sp, $sp, -0x4C8
    ctx->r29 = ADD32(ctx->r29, -0X4C8);
    // 0x800E65A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800E65A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E65A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E65AC: addiu       $a0, $sp, 0x274
    ctx->r4 = ADD32(ctx->r29, 0X274);
    // 0x800E65B0: addiu       $v0, $sp, 0x34
    ctx->r2 = ADD32(ctx->r29, 0X34);
    // 0x800E65B4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_800E65B8:
    // 0x800E65B8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800E65BC: sw          $v1, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r3;
    // 0x800E65C0: sw          $v1, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r3;
    // 0x800E65C4: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x800E65C8: bne         $v0, $a0, L_800E65B8
    if (ctx->r2 != ctx->r4) {
        // 0x800E65CC: sw          $v1, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = ctx->r3;
            goto L_800E65B8;
    }
    // 0x800E65CC: sw          $v1, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r3;
    // 0x800E65D0: addiu       $t6, $sp, 0x434
    ctx->r14 = ADD32(ctx->r29, 0X434);
    // 0x800E65D4: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x800E65D8: beq         $at, $zero, L_800E65F8
    if (ctx->r1 == 0) {
        // 0x800E65DC: addiu       $t7, $sp, 0x494
        ctx->r15 = ADD32(ctx->r29, 0X494);
            goto L_800E65F8;
    }
    // 0x800E65DC: addiu       $t7, $sp, 0x494
    ctx->r15 = ADD32(ctx->r29, 0X494);
    // 0x800E65E0: addiu       $a1, $sp, 0x434
    ctx->r5 = ADD32(ctx->r29, 0X434);
    // 0x800E65E4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_800E65E8:
    // 0x800E65E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800E65EC: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800E65F0: bne         $at, $zero, L_800E65E8
    if (ctx->r1 != 0) {
        // 0x800E65F4: sw          $a0, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r4;
            goto L_800E65E8;
    }
    // 0x800E65F4: sw          $a0, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r4;
L_800E65F8:
    // 0x800E65F8: sltu        $at, $v0, $t7
    ctx->r1 = ctx->r2 < ctx->r15 ? 1 : 0;
    // 0x800E65FC: beq         $at, $zero, L_800E661C
    if (ctx->r1 == 0) {
        // 0x800E6600: addiu       $t8, $sp, 0x4B4
        ctx->r24 = ADD32(ctx->r29, 0X4B4);
            goto L_800E661C;
    }
    // 0x800E6600: addiu       $t8, $sp, 0x4B4
    ctx->r24 = ADD32(ctx->r29, 0X4B4);
    // 0x800E6604: addiu       $a1, $sp, 0x494
    ctx->r5 = ADD32(ctx->r29, 0X494);
    // 0x800E6608: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_800E660C:
    // 0x800E660C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800E6610: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800E6614: bne         $at, $zero, L_800E660C
    if (ctx->r1 != 0) {
        // 0x800E6618: sw          $a0, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r4;
            goto L_800E660C;
    }
    // 0x800E6618: sw          $a0, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r4;
L_800E661C:
    // 0x800E661C: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x800E6620: beq         $at, $zero, L_800E663C
    if (ctx->r1 == 0) {
        // 0x800E6624: addiu       $t9, $zero, 0x7
        ctx->r25 = ADD32(0, 0X7);
            goto L_800E663C;
    }
    // 0x800E6624: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x800E6628: addiu       $a0, $sp, 0x4B4
    ctx->r4 = ADD32(ctx->r29, 0X4B4);
L_800E662C:
    // 0x800E662C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800E6630: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x800E6634: bne         $at, $zero, L_800E662C
    if (ctx->r1 != 0) {
        // 0x800E6638: sw          $v1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r3;
            goto L_800E662C;
    }
    // 0x800E6638: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
L_800E663C:
    // 0x800E663C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E6640: addiu       $t0, $t0, 0x3244
    ctx->r8 = ADD32(ctx->r8, 0X3244);
    // 0x800E6644: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E6648: addiu       $t1, $sp, 0x4C0
    ctx->r9 = ADD32(ctx->r29, 0X4C0);
    // 0x800E664C: addiu       $t2, $sp, 0x4B8
    ctx->r10 = ADD32(ctx->r29, 0X4B8);
    // 0x800E6650: sw          $t9, 0x4B8($sp)
    MEM_W(0X4B8, ctx->r29) = ctx->r25;
    // 0x800E6654: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800E6658: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800E665C: addiu       $a3, $a3, 0x3204
    ctx->r7 = ADD32(ctx->r7, 0X3204);
    // 0x800E6660: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800E6664: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800E6668: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x800E666C: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    // 0x800E6670: jal         0x800E589C
    // 0x800E6674: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_800E589C(rdram, ctx);
        goto after_0;
    // 0x800E6674: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x800E6678: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800E667C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x800E6680: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x800E6684: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x800E6688: addiu       $v0, $sp, 0x3C
    ctx->r2 = ADD32(ctx->r29, 0X3C);
    // 0x800E668C: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x800E6690: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_800E6694:
    // 0x800E6694: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800E6698: sw          $v1, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r3;
    // 0x800E669C: sw          $v1, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r3;
    // 0x800E66A0: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x800E66A4: bne         $v0, $a0, L_800E6694
    if (ctx->r2 != ctx->r4) {
        // 0x800E66A8: sw          $v1, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = ctx->r3;
            goto L_800E6694;
    }
    // 0x800E66A8: sw          $v1, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r3;
    // 0x800E66AC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800E66B0: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x800E66B4: addiu       $t6, $t6, 0x32A0
    ctx->r14 = ADD32(ctx->r14, 0X32A0);
    // 0x800E66B8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E66BC: addiu       $t7, $sp, 0x4BC
    ctx->r15 = ADD32(ctx->r29, 0X4BC);
    // 0x800E66C0: addiu       $t8, $sp, 0x4B4
    ctx->r24 = ADD32(ctx->r29, 0X4B4);
    // 0x800E66C4: sw          $t5, 0x4B4($sp)
    MEM_W(0X4B4, ctx->r29) = ctx->r13;
    // 0x800E66C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800E66CC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800E66D0: addiu       $a3, $a3, 0x3264
    ctx->r7 = ADD32(ctx->r7, 0X3264);
    // 0x800E66D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800E66D8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800E66DC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x800E66E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E66E4: jal         0x800E589C
    // 0x800E66E8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_800E589C(rdram, ctx);
        goto after_1;
    // 0x800E66E8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_1:
    // 0x800E66EC: lw          $t9, 0x4B8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4B8);
    // 0x800E66F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E66F4: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
    // 0x800E66F8: lw          $t0, 0x4B4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4B4);
    // 0x800E66FC: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    // 0x800E6700: lw          $t1, 0x4C0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C0);
    // 0x800E6704: sw          $t1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r9;
    // 0x800E6708: lw          $t2, 0x4BC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4BC);
    // 0x800E670C: jal         0x800E5390
    // 0x800E6710: sw          $t2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r10;
    func_800E5390(rdram, ctx);
        goto after_2;
    // 0x800E6710: sw          $t2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r10;
    after_2:
    // 0x800E6714: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6718: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E671C: addiu       $sp, $sp, 0x4C8
    ctx->r29 = ADD32(ctx->r29, 0X4C8);
    // 0x800E6720: jr          $ra
    // 0x800E6724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800E6724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800E6728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6728: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800E672C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800E6730: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800E6734: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800E6738: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800E673C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800E6740: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800E6744: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800E6748: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E674C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800E6750: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E6754: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x800E6758: lw          $s2, 0x10($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X10);
    // 0x800E675C: lw          $s3, 0xC($a0)
    ctx->r19 = MEM_W(ctx->r4, 0XC);
    // 0x800E6760: lw          $s6, 0x14($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X14);
    // 0x800E6764: andi        $v0, $s2, 0x7
    ctx->r2 = ctx->r18 & 0X7;
    // 0x800E6768: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800E676C: sltiu       $at, $s2, 0x10
    ctx->r1 = ctx->r18 < 0X10 ? 1 : 0;
    // 0x800E6770: beq         $at, $zero, L_800E67D4
    if (ctx->r1 == 0) {
        // 0x800E6774: srlv        $s3, $s3, $v0
        ctx->r19 = S32(U32(ctx->r19) >> (ctx->r2 & 31));
            goto L_800E67D4;
    }
    // 0x800E6774: srlv        $s3, $s3, $v0
    ctx->r19 = S32(U32(ctx->r19) >> (ctx->r2 & 31));
    // 0x800E6778: lw          $s1, 0x0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X0);
L_800E677C:
    // 0x800E677C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E6780: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E6784: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E6788: bnel        $at, $zero, L_800E67B4
    if (ctx->r1 != 0) {
        // 0x800E678C: addu        $t9, $s1, $v0
        ctx->r25 = ADD32(ctx->r17, ctx->r2);
            goto L_800E67B4;
    }
    goto skip_0;
    // 0x800E678C: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
    skip_0:
    // 0x800E6790: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E6794: jal         0x8001311C
    // 0x800E6798: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_0;
    // 0x800E6798: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_0:
    // 0x800E679C: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x800E67A0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E67A4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E67A8: addiu       $t8, $t7, 0x1800
    ctx->r24 = ADD32(ctx->r15, 0X1800);
    // 0x800E67AC: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x800E67B0: addu        $t9, $s1, $v0
    ctx->r25 = ADD32(ctx->r17, ctx->r2);
L_800E67B4:
    // 0x800E67B4: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x800E67B8: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x800E67BC: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x800E67C0: sllv        $t1, $t0, $s2
    ctx->r9 = S32(ctx->r8 << (ctx->r18 & 31));
    // 0x800E67C4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E67C8: sltiu       $at, $s2, 0x10
    ctx->r1 = ctx->r18 < 0X10 ? 1 : 0;
    // 0x800E67CC: bne         $at, $zero, L_800E677C
    if (ctx->r1 != 0) {
        // 0x800E67D0: or          $s3, $s3, $t1
        ctx->r19 = ctx->r19 | ctx->r9;
            goto L_800E677C;
    }
    // 0x800E67D0: or          $s3, $s3, $t1
    ctx->r19 = ctx->r19 | ctx->r9;
L_800E67D4:
    // 0x800E67D4: addiu       $s2, $s2, -0x10
    ctx->r18 = ADD32(ctx->r18, -0X10);
    // 0x800E67D8: andi        $s5, $s3, 0xFFFF
    ctx->r21 = ctx->r19 & 0XFFFF;
    // 0x800E67DC: srl         $t3, $s3, 16
    ctx->r11 = S32(U32(ctx->r19) >> 16);
    // 0x800E67E0: sltiu       $at, $s2, 0x10
    ctx->r1 = ctx->r18 < 0X10 ? 1 : 0;
    // 0x800E67E4: beq         $at, $zero, L_800E6848
    if (ctx->r1 == 0) {
        // 0x800E67E8: or          $s3, $t3, $zero
        ctx->r19 = ctx->r11 | 0;
            goto L_800E6848;
    }
    // 0x800E67E8: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
    // 0x800E67EC: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E67F0:
    // 0x800E67F0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E67F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E67F8: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E67FC: bnel        $at, $zero, L_800E6828
    if (ctx->r1 != 0) {
        // 0x800E6800: addu        $t6, $s1, $v0
        ctx->r14 = ADD32(ctx->r17, ctx->r2);
            goto L_800E6828;
    }
    goto skip_1;
    // 0x800E6800: addu        $t6, $s1, $v0
    ctx->r14 = ADD32(ctx->r17, ctx->r2);
    skip_1:
    // 0x800E6804: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E6808: jal         0x8001311C
    // 0x800E680C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_1;
    // 0x800E680C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x800E6810: lw          $t4, 0x30($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X30);
    // 0x800E6814: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E6818: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E681C: addiu       $t5, $t4, 0x1800
    ctx->r13 = ADD32(ctx->r12, 0X1800);
    // 0x800E6820: sw          $t5, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r13;
    // 0x800E6824: addu        $t6, $s1, $v0
    ctx->r14 = ADD32(ctx->r17, ctx->r2);
L_800E6828:
    // 0x800E6828: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800E682C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x800E6830: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x800E6834: sllv        $t8, $t7, $s2
    ctx->r24 = S32(ctx->r15 << (ctx->r18 & 31));
    // 0x800E6838: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E683C: sltiu       $at, $s2, 0x10
    ctx->r1 = ctx->r18 < 0X10 ? 1 : 0;
    // 0x800E6840: bne         $at, $zero, L_800E67F0
    if (ctx->r1 != 0) {
        // 0x800E6844: or          $s3, $s3, $t8
        ctx->r19 = ctx->r19 | ctx->r24;
            goto L_800E67F0;
    }
    // 0x800E6844: or          $s3, $s3, $t8
    ctx->r19 = ctx->r19 | ctx->r24;
L_800E6848:
    // 0x800E6848: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x800E684C: srl         $t0, $s3, 16
    ctx->r8 = S32(U32(ctx->r19) >> 16);
    // 0x800E6850: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
    // 0x800E6854: addiu       $s2, $s2, -0x10
    ctx->r18 = ADD32(ctx->r18, -0X10);
    // 0x800E6858: beq         $s5, $zero, L_800E68F4
    if (ctx->r21 == 0) {
        // 0x800E685C: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_800E68F4;
    }
    // 0x800E685C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x800E6860: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6864: addu        $s4, $t1, $s6
    ctx->r20 = ADD32(ctx->r9, ctx->r22);
L_800E6868:
    // 0x800E6868: sltiu       $at, $s2, 0x8
    ctx->r1 = ctx->r18 < 0X8 ? 1 : 0;
    // 0x800E686C: beql        $at, $zero, L_800E68D4
    if (ctx->r1 == 0) {
        // 0x800E6870: or          $v0, $s5, $zero
        ctx->r2 = ctx->r21 | 0;
            goto L_800E68D4;
    }
    goto skip_2;
    // 0x800E6870: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    skip_2:
    // 0x800E6874: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_800E6878:
    // 0x800E6878: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E687C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E6880: slti        $at, $v0, 0x1800
    ctx->r1 = SIGNED(ctx->r2) < 0X1800 ? 1 : 0;
    // 0x800E6884: bnel        $at, $zero, L_800E68B0
    if (ctx->r1 != 0) {
        // 0x800E6888: addu        $t4, $s1, $v0
        ctx->r12 = ADD32(ctx->r17, ctx->r2);
            goto L_800E68B0;
    }
    goto skip_3;
    // 0x800E6888: addu        $t4, $s1, $v0
    ctx->r12 = ADD32(ctx->r17, ctx->r2);
    skip_3:
    // 0x800E688C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800E6890: jal         0x8001311C
    // 0x800E6894: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001311C(rdram, ctx);
        goto after_2;
    // 0x800E6894: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_2:
    // 0x800E6898: lw          $t2, 0x30($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X30);
    // 0x800E689C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800E68A0: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800E68A4: addiu       $t3, $t2, 0x1800
    ctx->r11 = ADD32(ctx->r10, 0X1800);
    // 0x800E68A8: sw          $t3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r11;
    // 0x800E68AC: addu        $t4, $s1, $v0
    ctx->r12 = ADD32(ctx->r17, ctx->r2);
L_800E68B0:
    // 0x800E68B0: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x800E68B4: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x800E68B8: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x800E68BC: sllv        $t6, $t5, $s2
    ctx->r14 = S32(ctx->r13 << (ctx->r18 & 31));
    // 0x800E68C0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800E68C4: sltiu       $at, $s2, 0x8
    ctx->r1 = ctx->r18 < 0X8 ? 1 : 0;
    // 0x800E68C8: bne         $at, $zero, L_800E6878
    if (ctx->r1 != 0) {
        // 0x800E68CC: or          $s3, $s3, $t6
        ctx->r19 = ctx->r19 | ctx->r14;
            goto L_800E6878;
    }
    // 0x800E68CC: or          $s3, $s3, $t6
    ctx->r19 = ctx->r19 | ctx->r14;
    // 0x800E68D0: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_800E68D4:
    // 0x800E68D4: sb          $s3, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r19;
    // 0x800E68D8: srl         $t8, $s3, 8
    ctx->r24 = S32(U32(ctx->r19) >> 8);
    // 0x800E68DC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x800E68E0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800E68E4: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x800E68E8: addiu       $s2, $s2, -0x8
    ctx->r18 = ADD32(ctx->r18, -0X8);
    // 0x800E68EC: bne         $s5, $zero, L_800E6868
    if (ctx->r21 != 0) {
        // 0x800E68F0: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_800E6868;
    }
    // 0x800E68F0: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_800E68F4:
    // 0x800E68F4: sw          $s6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r22;
    // 0x800E68F8: sw          $s3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r19;
    // 0x800E68FC: sw          $s2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r18;
    // 0x800E6900: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800E6904: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800E6908: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800E690C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800E6910: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800E6914: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800E6918: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800E691C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E6920: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800E6924: jr          $ra
    // 0x800E6928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800E6928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800E692C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E692C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E6930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E6934: jal         0x8001ACCC
    // 0x800E6938: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800E6938: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x800E693C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E6940: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E6944: sw          $v0, -0x2A90($at)
    MEM_W(-0X2A90, ctx->r1) = ctx->r2;
    // 0x800E6948: jr          $ra
    // 0x800E694C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800E694C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800E6950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6950: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E6954: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E6958: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E695C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800E6960: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E6964: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800E6968: jal         0x800D5A6C
    // 0x800E696C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_800D5A6C(rdram, ctx);
        goto after_0;
    // 0x800E696C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x800E6970: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800E6974: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E6978: jal         0x8001E210
    // 0x800E697C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8001E210(rdram, ctx);
        goto after_1;
    // 0x800E697C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x800E6980: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800E6984: srl         $t6, $a0, 16
    ctx->r14 = S32(U32(ctx->r4) >> 16);
    // 0x800E6988: sll         $s1, $t6, 4
    ctx->r17 = S32(ctx->r14 << 4);
    // 0x800E698C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E6990: jal         0x800D5FDC
    // 0x800E6994: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    func_800D5FDC(rdram, ctx);
        goto after_2;
    // 0x800E6994: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    after_2:
    // 0x800E6998: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x800E699C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E69A0: bnel        $v0, $zero, L_800E69C4
    if (ctx->r2 != 0) {
        // 0x800E69A4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800E69C4;
    }
    goto skip_0;
    // 0x800E69A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    skip_0:
    // 0x800E69A8: jal         0x8001ACEC
    // 0x800E69AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001ACEC(rdram, ctx);
        goto after_3;
    // 0x800E69AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800E69B0: bne         $v0, $zero, L_800E69C4
    if (ctx->r2 != 0) {
        // 0x800E69B4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800E69C4;
    }
    // 0x800E69B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E69B8: b           L_800E69EC
    // 0x800E69BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E69EC;
    // 0x800E69BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E69C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800E69C4:
    // 0x800E69C4: jal         0x800D5950
    // 0x800E69C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800D5950(rdram, ctx);
        goto after_4;
    // 0x800E69C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_4:
    // 0x800E69CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800E69D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E69D4: jal         0x80117248
    // 0x800E69D8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80117248(rdram, ctx);
        goto after_5;
    // 0x800E69D8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x800E69DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E69E0: jal         0x8002E660
    // 0x800E69E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_6;
    // 0x800E69E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x800E69E8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_800E69EC:
    // 0x800E69EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E69F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E69F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E69F8: jr          $ra
    // 0x800E69FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800E69FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800E6A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6A00: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800E6A04: jr          $ra
    // 0x800E6A08: lbu         $v0, 0x75E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X75E0);
    return;
    // 0x800E6A08: lbu         $v0, 0x75E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X75E0);
;}
RECOMP_FUNC void func_800E6A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6A10: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800E6A14: beql        $t6, $zero, L_800E6A30
    if (ctx->r14 == 0) {
        // 0x800E6A18: lbu         $v0, 0x0($a1)
        ctx->r2 = MEM_BU(ctx->r5, 0X0);
            goto L_800E6A30;
    }
    goto skip_0;
    // 0x800E6A18: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    skip_0:
    // 0x800E6A1C: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
L_800E6A20:
    // 0x800E6A20: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6A24: bnel        $t7, $zero, L_800E6A20
    if (ctx->r15 != 0) {
        // 0x800E6A28: lbu         $t7, 0x1($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X1);
            goto L_800E6A20;
    }
    goto skip_1;
    // 0x800E6A28: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
    skip_1:
    // 0x800E6A2C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
L_800E6A30:
    // 0x800E6A30: beq         $v0, $zero, L_800E6A50
    if (ctx->r2 == 0) {
        // 0x800E6A34: nop
    
            goto L_800E6A50;
    }
    // 0x800E6A34: nop

    // 0x800E6A38: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_800E6A3C:
    // 0x800E6A3C: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x800E6A40: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6A44: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800E6A48: bnel        $v0, $zero, L_800E6A3C
    if (ctx->r2 != 0) {
        // 0x800E6A4C: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_800E6A3C;
    }
    goto skip_2;
    // 0x800E6A4C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    skip_2:
L_800E6A50:
    // 0x800E6A50: jr          $ra
    // 0x800E6A54: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x800E6A54: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800E6A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6A58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800E6A5C: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x800E6A60: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800E6A64: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800E6A68: beql        $t7, $zero, L_800E6A84
    if (ctx->r15 == 0) {
        // 0x800E6A6C: sb          $a1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r5;
            goto L_800E6A84;
    }
    goto skip_0;
    // 0x800E6A6C: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    skip_0:
    // 0x800E6A70: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
L_800E6A74:
    // 0x800E6A74: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6A78: bnel        $t8, $zero, L_800E6A74
    if (ctx->r24 != 0) {
        // 0x800E6A7C: lbu         $t8, 0x1($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X1);
            goto L_800E6A74;
    }
    goto skip_1;
    // 0x800E6A7C: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
    skip_1:
    // 0x800E6A80: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
L_800E6A84:
    // 0x800E6A84: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6A88: jr          $ra
    // 0x800E6A8C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x800E6A8C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800E6A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6A90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E6A94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E6A98: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800E6A9C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800E6AA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E6AA4: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x800E6AA8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800E6AAC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800E6AB0: beq         $a2, $zero, L_800E6AE4
    if (ctx->r6 == 0) {
        // 0x800E6AB4: lui         $s2, 0x8012
        ctx->r18 = S32(0X8012 << 16);
            goto L_800E6AE4;
    }
    // 0x800E6AB4: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x800E6AB8: addiu       $s2, $s2, 0x5DC0
    ctx->r18 = ADD32(ctx->r18, 0X5DC0);
    // 0x800E6ABC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800E6AC0:
    // 0x800E6AC0: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x800E6AC4: jal         0x800E6AFC
    // 0x800E6AC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800E6AFC(rdram, ctx);
        goto after_0;
    // 0x800E6AC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x800E6ACC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E6AD0: jal         0x800E6A10
    // 0x800E6AD4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800E6A10(rdram, ctx);
        goto after_1;
    // 0x800E6AD4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x800E6AD8: lbu         $a2, 0x0($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X0);
    // 0x800E6ADC: bnel        $a2, $zero, L_800E6AC0
    if (ctx->r6 != 0) {
        // 0x800E6AE0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800E6AC0;
    }
    goto skip_0;
    // 0x800E6AE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_800E6AE4:
    // 0x800E6AE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E6AE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E6AEC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800E6AF0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800E6AF4: jr          $ra
    // 0x800E6AF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E6AF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E6AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6AFC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800E6B00: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x800E6B04: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800E6B08: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800E6B0C: beq         $t7, $zero, L_800E6B24
    if (ctx->r15 == 0) {
        // 0x800E6B10: addiu       $t9, $zero, 0x30
        ctx->r25 = ADD32(0, 0X30);
            goto L_800E6B24;
    }
    // 0x800E6B10: addiu       $t9, $zero, 0x30
    ctx->r25 = ADD32(0, 0X30);
    // 0x800E6B14: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
L_800E6B18:
    // 0x800E6B18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6B1C: bnel        $t8, $zero, L_800E6B18
    if (ctx->r24 != 0) {
        // 0x800E6B20: lbu         $t8, 0x1($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X1);
            goto L_800E6B18;
    }
    goto skip_0;
    // 0x800E6B20: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
    skip_0:
L_800E6B24:
    // 0x800E6B24: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x800E6B28: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x800E6B2C: sb          $t0, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r8;
    // 0x800E6B30: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800E6B34: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800E6B38: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_800E6B3C:
    // 0x800E6B3C: srav        $v0, $v1, $a2
    ctx->r2 = S32(SIGNED(ctx->r3) >> (ctx->r6 & 31));
    // 0x800E6B40: andi        $t1, $v0, 0xF
    ctx->r9 = ctx->r2 & 0XF;
    // 0x800E6B44: slti        $t2, $t1, 0xA
    ctx->r10 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x800E6B48: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x800E6B4C: beq         $t3, $zero, L_800E6B60
    if (ctx->r11 == 0) {
        // 0x800E6B50: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_800E6B60;
    }
    // 0x800E6B50: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x800E6B54: addiu       $t4, $t1, 0x30
    ctx->r12 = ADD32(ctx->r9, 0X30);
    // 0x800E6B58: b           L_800E6B68
    // 0x800E6B5C: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
        goto L_800E6B68;
    // 0x800E6B5C: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
L_800E6B60:
    // 0x800E6B60: addiu       $t5, $v0, 0x57
    ctx->r13 = ADD32(ctx->r2, 0X57);
    // 0x800E6B64: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_800E6B68:
    // 0x800E6B68: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x800E6B6C: bgez        $a2, L_800E6B3C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800E6B70: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800E6B3C;
    }
    // 0x800E6B70: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6B74: jr          $ra
    // 0x800E6B78: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x800E6B78: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800E6B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6B7C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E6B80: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E6B84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800E6B88: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800E6B8C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x800E6B90: nop

    // 0x800E6B94: bc1f        L_800E6BA4
    if (!c1cs) {
            // 0x800E6B98: nop

    func_800E6BA4(rdram, ctx);
    return;
    }
    // 0x800E6B98: nop

    // 0x800E6B9C: jr          $ra
    // 0x800E6BA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800E6BA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_800E6BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6BA4: jr          $ra
    // 0x800E6BA8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800E6BA8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800E6BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6BAC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800E6BB0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800E6BB4: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x800E6BB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E6BBC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E6BC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E6BC4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800E6BC8: jal         0x800E6B7C
    // 0x800E6BCC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_800E6B7C(rdram, ctx);
        goto after_0;
    // 0x800E6BCC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x800E6BD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E6BD4: beq         $v0, $at, L_800E6C08
    if (ctx->r2 == ctx->r1) {
        // 0x800E6BD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800E6C08;
    }
    // 0x800E6BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E6BDC: beq         $v0, $zero, L_800E6BF8
    if (ctx->r2 == 0) {
        // 0x800E6BE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800E6BF8;
    }
    // 0x800E6BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E6BE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E6BE8: beql        $v0, $at, L_800E6C1C
    if (ctx->r2 == ctx->r1) {
        // 0x800E6BEC: trunc.w.s   $f4, $f20
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
            goto L_800E6C1C;
    }
    goto skip_0;
    // 0x800E6BEC: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
    skip_0:
    // 0x800E6BF0: b           L_800E6C98
    // 0x800E6BF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800E6C98;
    // 0x800E6BF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800E6BF8:
    // 0x800E6BF8: jal         0x800E6A10
    // 0x800E6BFC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800E6A10(rdram, ctx);
        goto after_1;
    // 0x800E6BFC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x800E6C00: b           L_800E6C98
    // 0x800E6C04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800E6C98;
    // 0x800E6C04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800E6C08:
    // 0x800E6C08: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800E6C0C: jal         0x800E6A10
    // 0x800E6C10: addiu       $a1, $a1, 0x5DC4
    ctx->r5 = ADD32(ctx->r5, 0X5DC4);
    func_800E6A10(rdram, ctx);
        goto after_2;
    // 0x800E6C10: addiu       $a1, $a1, 0x5DC4
    ctx->r5 = ADD32(ctx->r5, 0X5DC4);
    after_2:
    // 0x800E6C14: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x800E6C18: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
L_800E6C1C:
    // 0x800E6C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E6C20: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800E6C24: jal         0x800E6DB4
    // 0x800E6C28: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    func_800E6DB4(rdram, ctx);
        goto after_3;
    // 0x800E6C28: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_3:
    // 0x800E6C2C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800E6C30: addiu       $a1, $a1, 0x5DC8
    ctx->r5 = ADD32(ctx->r5, 0X5DC8);
    // 0x800E6C34: jal         0x800E6A10
    // 0x800E6C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E6A10(rdram, ctx);
        goto after_4;
    // 0x800E6C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800E6C3C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800E6C40: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800E6C44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800E6C48: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800E6C4C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800E6C50: addiu       $a1, $a1, 0x5DCC
    ctx->r5 = ADD32(ctx->r5, 0X5DCC);
    // 0x800E6C54: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E6C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E6C5C: sub.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x800E6C60: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800E6C64: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800E6C68: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800E6C6C: nop

    // 0x800E6C70: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x800E6C74: beql        $at, $zero, L_800E6C8C
    if (ctx->r1 == 0) {
        // 0x800E6C78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800E6C8C;
    }
    goto skip_1;
    // 0x800E6C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x800E6C7C: jal         0x800E6A10
    // 0x800E6C80: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_800E6A10(rdram, ctx);
        goto after_5;
    // 0x800E6C80: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_5:
    // 0x800E6C84: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800E6C8C:
    // 0x800E6C8C: jal         0x800E6DB4
    // 0x800E6C90: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800E6DB4(rdram, ctx);
        goto after_6;
    // 0x800E6C90: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_6:
    // 0x800E6C94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800E6C98:
    // 0x800E6C98: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800E6C9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E6CA0: jr          $ra
    // 0x800E6CA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800E6CA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800E6CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6CA8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800E6CAC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800E6CB0: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x800E6CB4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800E6CB8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800E6CBC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800E6CC0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800E6CC4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800E6CC8: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800E6CCC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800E6CD0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800E6CD4: jal         0x800E6B7C
    // 0x800E6CD8: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_800E6B7C(rdram, ctx);
        goto after_0;
    // 0x800E6CD8: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_0:
    // 0x800E6CDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E6CE0: beq         $v0, $at, L_800E6D14
    if (ctx->r2 == ctx->r1) {
        // 0x800E6CE4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800E6D14;
    }
    // 0x800E6CE4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800E6CE8: beq         $v0, $zero, L_800E6D04
    if (ctx->r2 == 0) {
        // 0x800E6CEC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800E6D04;
    }
    // 0x800E6CEC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800E6CF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E6CF4: beql        $v0, $at, L_800E6D28
    if (ctx->r2 == ctx->r1) {
        // 0x800E6CF8: trunc.w.s   $f4, $f20
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
            goto L_800E6D28;
    }
    goto skip_0;
    // 0x800E6CF8: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
    skip_0:
    // 0x800E6CFC: b           L_800E6D98
    // 0x800E6D00: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_800E6D98;
    // 0x800E6D00: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800E6D04:
    // 0x800E6D04: jal         0x800E6A10
    // 0x800E6D08: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_800E6A10(rdram, ctx);
        goto after_1;
    // 0x800E6D08: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_1:
    // 0x800E6D0C: b           L_800E6D98
    // 0x800E6D10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_800E6D98;
    // 0x800E6D10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800E6D14:
    // 0x800E6D14: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800E6D18: jal         0x800E6A10
    // 0x800E6D1C: addiu       $a1, $a1, 0x5DD0
    ctx->r5 = ADD32(ctx->r5, 0X5DD0);
    func_800E6A10(rdram, ctx);
        goto after_2;
    // 0x800E6D1C: addiu       $a1, $a1, 0x5DD0
    ctx->r5 = ADD32(ctx->r5, 0X5DD0);
    after_2:
    // 0x800E6D20: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x800E6D24: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
L_800E6D28:
    // 0x800E6D28: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800E6D2C: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x800E6D30: jal         0x800E6DB4
    // 0x800E6D34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800E6DB4(rdram, ctx);
        goto after_3;
    // 0x800E6D34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800E6D38: beq         $s1, $zero, L_800E6D94
    if (ctx->r17 == 0) {
        // 0x800E6D3C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800E6D94;
    }
    // 0x800E6D3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800E6D40: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800E6D44: jal         0x800E6A10
    // 0x800E6D48: addiu       $a1, $a1, 0x5DD4
    ctx->r5 = ADD32(ctx->r5, 0X5DD4);
    func_800E6A10(rdram, ctx);
        goto after_4;
    // 0x800E6D48: addiu       $a1, $a1, 0x5DD4
    ctx->r5 = ADD32(ctx->r5, 0X5DD4);
    after_4:
    // 0x800E6D4C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800E6D50: beq         $s1, $zero, L_800E6D94
    if (ctx->r17 == 0) {
        // 0x800E6D54: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_800E6D94;
    }
    // 0x800E6D54: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x800E6D58: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800E6D5C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800E6D60: nop

L_800E6D64:
    // 0x800E6D64: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x800E6D68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800E6D6C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E6D70: sub.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x800E6D74: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x800E6D78: trunc.w.s   $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    ctx->f10.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x800E6D7C: mfc1        $s0, $f10
    ctx->r16 = (int32_t)ctx->f10.u32l;
    // 0x800E6D80: jal         0x800E6DB4
    // 0x800E6D84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800E6DB4(rdram, ctx);
        goto after_5;
    // 0x800E6D84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x800E6D88: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800E6D8C: bne         $s1, $zero, L_800E6D64
    if (ctx->r17 != 0) {
        // 0x800E6D90: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_800E6D64;
    }
    // 0x800E6D90: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_800E6D94:
    // 0x800E6D94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800E6D98:
    // 0x800E6D98: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800E6D9C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800E6DA0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E6DA4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6DA8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800E6DAC: jr          $ra
    // 0x800E6DB0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800E6DB0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800E6DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E6DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E6DBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E6DC0: jal         0x800E6DD8
    // 0x800E6DC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800E6DD8(rdram, ctx);
        goto after_0;
    // 0x800E6DC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800E6DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E6DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E6DD0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E6DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6DD8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800E6DDC: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x800E6DE0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x800E6DE4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x800E6DE8: beq         $t7, $zero, L_800E6E00
    if (ctx->r15 == 0) {
        // 0x800E6DEC: lui         $v1, 0x3B9A
        ctx->r3 = S32(0X3B9A << 16);
            goto L_800E6E00;
    }
    // 0x800E6DEC: lui         $v1, 0x3B9A
    ctx->r3 = S32(0X3B9A << 16);
    // 0x800E6DF0: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
L_800E6DF4:
    // 0x800E6DF4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6DF8: bnel        $t8, $zero, L_800E6DF4
    if (ctx->r24 != 0) {
        // 0x800E6DFC: lbu         $t8, 0x1($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X1);
            goto L_800E6DF4;
    }
    goto skip_0;
    // 0x800E6DFC: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
    skip_0:
L_800E6E00:
    // 0x800E6E00: bgez        $a1, L_800E6E1C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800E6E04: ori         $v0, $v1, 0xCA00
        ctx->r2 = ctx->r3 | 0XCA00;
            goto L_800E6E1C;
    }
    // 0x800E6E04: ori         $v0, $v1, 0xCA00
    ctx->r2 = ctx->r3 | 0XCA00;
    // 0x800E6E08: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x800E6E0C: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x800E6E10: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6E14: b           L_800E6E2C
    // 0x800E6E18: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
        goto L_800E6E2C;
    // 0x800E6E18: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
L_800E6E1C:
    // 0x800E6E1C: beql        $a2, $zero, L_800E6E30
    if (ctx->r6 == 0) {
        // 0x800E6E20: slt         $at, $a1, $v0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_800E6E30;
    }
    goto skip_1;
    // 0x800E6E20: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    skip_1:
    // 0x800E6E24: sb          $a2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r6;
    // 0x800E6E28: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_800E6E2C:
    // 0x800E6E2C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
L_800E6E30:
    // 0x800E6E30: beq         $at, $zero, L_800E6E70
    if (ctx->r1 == 0) {
        // 0x800E6E34: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_800E6E70;
    }
    // 0x800E6E34: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_800E6E38:
    // 0x800E6E38: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x800E6E3C: bne         $v1, $zero, L_800E6E48
    if (ctx->r3 != 0) {
        // 0x800E6E40: nop
    
            goto L_800E6E48;
    }
    // 0x800E6E40: nop

    // 0x800E6E44: break       7
    do_break(2148429380);
L_800E6E48:
    // 0x800E6E48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E6E4C: bne         $v1, $at, L_800E6E60
    if (ctx->r3 != ctx->r1) {
        // 0x800E6E50: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800E6E60;
    }
    // 0x800E6E50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E6E54: bne         $v0, $at, L_800E6E60
    if (ctx->r2 != ctx->r1) {
        // 0x800E6E58: nop
    
            goto L_800E6E60;
    }
    // 0x800E6E58: nop

    // 0x800E6E5C: break       6
    do_break(2148429404);
L_800E6E60:
    // 0x800E6E60: mflo        $v0
    ctx->r2 = lo;
    // 0x800E6E64: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800E6E68: bne         $at, $zero, L_800E6E38
    if (ctx->r1 != 0) {
        // 0x800E6E6C: nop
    
            goto L_800E6E38;
    }
    // 0x800E6E6C: nop

L_800E6E70:
    // 0x800E6E70: bne         $v0, $zero, L_800E6E88
    if (ctx->r2 != 0) {
        // 0x800E6E74: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_800E6E88;
    }
    // 0x800E6E74: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x800E6E78: addiu       $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
    // 0x800E6E7C: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
    // 0x800E6E80: b           L_800E6F74
    // 0x800E6E84: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_800E6F74;
    // 0x800E6E84: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_800E6E88:
    // 0x800E6E88: blez        $v0, L_800E6F74
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800E6E8C: nop
    
            goto L_800E6F74;
    }
    // 0x800E6E8C: nop

L_800E6E90:
    // 0x800E6E90: beq         $a3, $zero, L_800E6ED4
    if (ctx->r7 == 0) {
        // 0x800E6E94: nop
    
            goto L_800E6ED4;
    }
    // 0x800E6E94: nop

    // 0x800E6E98: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x800E6E9C: mflo        $t1
    ctx->r9 = lo;
    // 0x800E6EA0: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x800E6EA4: bne         $v0, $zero, L_800E6EB0
    if (ctx->r2 != 0) {
        // 0x800E6EA8: nop
    
            goto L_800E6EB0;
    }
    // 0x800E6EA8: nop

    // 0x800E6EAC: break       7
    do_break(2148429484);
L_800E6EB0:
    // 0x800E6EB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E6EB4: bne         $v0, $at, L_800E6EC8
    if (ctx->r2 != ctx->r1) {
        // 0x800E6EB8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800E6EC8;
    }
    // 0x800E6EB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E6EBC: bne         $a1, $at, L_800E6EC8
    if (ctx->r5 != ctx->r1) {
        // 0x800E6EC0: nop
    
            goto L_800E6EC8;
    }
    // 0x800E6EC0: nop

    // 0x800E6EC4: break       6
    do_break(2148429508);
L_800E6EC8:
    // 0x800E6EC8: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    // 0x800E6ECC: b           L_800E6F0C
    // 0x800E6ED0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_800E6F0C;
    // 0x800E6ED0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_800E6ED4:
    // 0x800E6ED4: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x800E6ED8: mflo        $t3
    ctx->r11 = lo;
    // 0x800E6EDC: addiu       $t4, $t3, 0x30
    ctx->r12 = ADD32(ctx->r11, 0X30);
    // 0x800E6EE0: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
    // 0x800E6EE4: bne         $v0, $zero, L_800E6EF0
    if (ctx->r2 != 0) {
        // 0x800E6EE8: nop
    
            goto L_800E6EF0;
    }
    // 0x800E6EE8: nop

    // 0x800E6EEC: break       7
    do_break(2148429548);
L_800E6EF0:
    // 0x800E6EF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E6EF4: bne         $v0, $at, L_800E6F08
    if (ctx->r2 != ctx->r1) {
        // 0x800E6EF8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800E6F08;
    }
    // 0x800E6EF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E6EFC: bne         $a1, $at, L_800E6F08
    if (ctx->r5 != ctx->r1) {
        // 0x800E6F00: nop
    
            goto L_800E6F08;
    }
    // 0x800E6F00: nop

    // 0x800E6F04: break       6
    do_break(2148429572);
L_800E6F08:
    // 0x800E6F08: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_800E6F0C:
    // 0x800E6F0C: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x800E6F10: bne         $v0, $zero, L_800E6F1C
    if (ctx->r2 != 0) {
        // 0x800E6F14: nop
    
            goto L_800E6F1C;
    }
    // 0x800E6F14: nop

    // 0x800E6F18: break       7
    do_break(2148429592);
L_800E6F1C:
    // 0x800E6F1C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E6F20: bne         $v0, $at, L_800E6F34
    if (ctx->r2 != ctx->r1) {
        // 0x800E6F24: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800E6F34;
    }
    // 0x800E6F24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E6F28: bne         $a1, $at, L_800E6F34
    if (ctx->r5 != ctx->r1) {
        // 0x800E6F2C: nop
    
            goto L_800E6F34;
    }
    // 0x800E6F2C: nop

    // 0x800E6F30: break       6
    do_break(2148429616);
L_800E6F34:
    // 0x800E6F34: mfhi        $a1
    ctx->r5 = hi;
    // 0x800E6F38: nop

    // 0x800E6F3C: nop

    // 0x800E6F40: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x800E6F44: bne         $v1, $zero, L_800E6F50
    if (ctx->r3 != 0) {
        // 0x800E6F48: nop
    
            goto L_800E6F50;
    }
    // 0x800E6F48: nop

    // 0x800E6F4C: break       7
    do_break(2148429644);
L_800E6F50:
    // 0x800E6F50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E6F54: bne         $v1, $at, L_800E6F68
    if (ctx->r3 != ctx->r1) {
        // 0x800E6F58: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800E6F68;
    }
    // 0x800E6F58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E6F5C: bne         $v0, $at, L_800E6F68
    if (ctx->r2 != ctx->r1) {
        // 0x800E6F60: nop
    
            goto L_800E6F68;
    }
    // 0x800E6F60: nop

    // 0x800E6F64: break       6
    do_break(2148429668);
L_800E6F68:
    // 0x800E6F68: mflo        $v0
    ctx->r2 = lo;
    // 0x800E6F6C: bgtz        $v0, L_800E6E90
    if (SIGNED(ctx->r2) > 0) {
        // 0x800E6F70: nop
    
            goto L_800E6E90;
    }
    // 0x800E6F70: nop

L_800E6F74:
    // 0x800E6F74: jr          $ra
    // 0x800E6F78: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x800E6F78: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800E6F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6F7C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800E6F80: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x800E6F84: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x800E6F88: beq         $t6, $zero, L_800E6FA0
    if (ctx->r14 == 0) {
        // 0x800E6F8C: addiu       $v1, $zero, 0x1C
        ctx->r3 = ADD32(0, 0X1C);
            goto L_800E6FA0;
    }
    // 0x800E6F8C: addiu       $v1, $zero, 0x1C
    ctx->r3 = ADD32(0, 0X1C);
    // 0x800E6F90: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
L_800E6F94:
    // 0x800E6F94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6F98: bnel        $t7, $zero, L_800E6F94
    if (ctx->r15 != 0) {
        // 0x800E6F9C: lbu         $t7, 0x1($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X1);
            goto L_800E6F94;
    }
    goto skip_0;
    // 0x800E6F9C: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
    skip_0:
L_800E6FA0:
    // 0x800E6FA0: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x800E6FA4: sb          $t9, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r25;
    // 0x800E6FA8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_800E6FAC:
    // 0x800E6FAC: srlv        $v0, $a1, $v1
    ctx->r2 = S32(U32(ctx->r5) >> (ctx->r3 & 31));
    // 0x800E6FB0: andi        $t0, $v0, 0xF
    ctx->r8 = ctx->r2 & 0XF;
    // 0x800E6FB4: slti        $t1, $t0, 0xA
    ctx->r9 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x800E6FB8: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x800E6FBC: beq         $t2, $zero, L_800E6FD0
    if (ctx->r10 == 0) {
        // 0x800E6FC0: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_800E6FD0;
    }
    // 0x800E6FC0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x800E6FC4: addiu       $t3, $t0, 0x30
    ctx->r11 = ADD32(ctx->r8, 0X30);
    // 0x800E6FC8: b           L_800E6FD8
    // 0x800E6FCC: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
        goto L_800E6FD8;
    // 0x800E6FCC: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
L_800E6FD0:
    // 0x800E6FD0: addiu       $t4, $v0, 0x57
    ctx->r12 = ADD32(ctx->r2, 0X57);
    // 0x800E6FD4: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
L_800E6FD8:
    // 0x800E6FD8: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800E6FDC: bgez        $v1, L_800E6FAC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800E6FE0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800E6FAC;
    }
    // 0x800E6FE0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E6FE4: jr          $ra
    // 0x800E6FE8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x800E6FE8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800E6FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6FEC: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800E6FF0: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x800E6FF4: addiu       $t9, $zero, 0x2E
    ctx->r25 = ADD32(0, 0X2E);
    // 0x800E6FF8: beq         $t6, $zero, L_800E7010
    if (ctx->r14 == 0) {
        // 0x800E6FFC: addiu       $v1, $zero, 0x1C
        ctx->r3 = ADD32(0, 0X1C);
            goto L_800E7010;
    }
    // 0x800E6FFC: addiu       $v1, $zero, 0x1C
    ctx->r3 = ADD32(0, 0X1C);
    // 0x800E7000: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
L_800E7004:
    // 0x800E7004: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E7008: bnel        $t7, $zero, L_800E7004
    if (ctx->r15 != 0) {
        // 0x800E700C: lbu         $t7, 0x1($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X1);
            goto L_800E7004;
    }
    goto skip_0;
    // 0x800E700C: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
    skip_0:
L_800E7010:
    // 0x800E7010: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x800E7014: sb          $t9, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r25;
    // 0x800E7018: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_800E701C:
    // 0x800E701C: srlv        $v0, $a1, $v1
    ctx->r2 = S32(U32(ctx->r5) >> (ctx->r3 & 31));
    // 0x800E7020: andi        $t0, $v0, 0xF
    ctx->r8 = ctx->r2 & 0XF;
    // 0x800E7024: slti        $t1, $t0, 0xA
    ctx->r9 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x800E7028: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x800E702C: beq         $t2, $zero, L_800E7040
    if (ctx->r10 == 0) {
        // 0x800E7030: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_800E7040;
    }
    // 0x800E7030: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x800E7034: addiu       $t3, $t0, 0x30
    ctx->r11 = ADD32(ctx->r8, 0X30);
    // 0x800E7038: b           L_800E7048
    // 0x800E703C: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
        goto L_800E7048;
    // 0x800E703C: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
L_800E7040:
    // 0x800E7040: addiu       $t4, $v0, 0x37
    ctx->r12 = ADD32(ctx->r2, 0X37);
    // 0x800E7044: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
L_800E7048:
    // 0x800E7048: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800E704C: bgez        $v1, L_800E701C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800E7050: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800E701C;
    }
    // 0x800E7050: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E7054: jr          $ra
    // 0x800E7058: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x800E7058: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800E705C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E705C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800E7060: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x800E7064: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800E7068: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800E706C: beq         $t7, $zero, L_800E7084
    if (ctx->r15 == 0) {
        // 0x800E7070: addiu       $t9, $zero, 0x30
        ctx->r25 = ADD32(0, 0X30);
            goto L_800E7084;
    }
    // 0x800E7070: addiu       $t9, $zero, 0x30
    ctx->r25 = ADD32(0, 0X30);
    // 0x800E7074: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
L_800E7078:
    // 0x800E7078: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E707C: bnel        $t8, $zero, L_800E7078
    if (ctx->r24 != 0) {
        // 0x800E7080: lbu         $t8, 0x1($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X1);
            goto L_800E7078;
    }
    goto skip_0;
    // 0x800E7080: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
    skip_0:
L_800E7084:
    // 0x800E7084: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x800E7088: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x800E708C: sb          $t0, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r8;
    // 0x800E7090: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800E7094: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800E7098: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_800E709C:
    // 0x800E709C: srav        $v0, $v1, $a2
    ctx->r2 = S32(SIGNED(ctx->r3) >> (ctx->r6 & 31));
    // 0x800E70A0: andi        $t1, $v0, 0xF
    ctx->r9 = ctx->r2 & 0XF;
    // 0x800E70A4: slti        $t2, $t1, 0xA
    ctx->r10 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x800E70A8: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x800E70AC: beq         $t3, $zero, L_800E70C0
    if (ctx->r11 == 0) {
        // 0x800E70B0: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_800E70C0;
    }
    // 0x800E70B0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x800E70B4: addiu       $t4, $t1, 0x30
    ctx->r12 = ADD32(ctx->r9, 0X30);
    // 0x800E70B8: b           L_800E70C8
    // 0x800E70BC: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
        goto L_800E70C8;
    // 0x800E70BC: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
L_800E70C0:
    // 0x800E70C0: addiu       $t5, $v0, 0x37
    ctx->r13 = ADD32(ctx->r2, 0X37);
    // 0x800E70C4: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_800E70C8:
    // 0x800E70C8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x800E70CC: bgez        $a2, L_800E709C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800E70D0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800E709C;
    }
    // 0x800E70D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E70D4: jr          $ra
    // 0x800E70D8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x800E70D8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800E70DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E70DC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800E70E0: beql        $v0, $zero, L_800E7128
    if (ctx->r2 == 0) {
        // 0x800E70E4: lbu         $a0, 0x0($a1)
        ctx->r4 = MEM_BU(ctx->r5, 0X0);
            goto L_800E7128;
    }
    goto skip_0;
    // 0x800E70E4: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    skip_0:
    // 0x800E70E8: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x800E70EC: beql        $v1, $zero, L_800E7128
    if (ctx->r3 == 0) {
        // 0x800E70F0: lbu         $a0, 0x0($a1)
        ctx->r4 = MEM_BU(ctx->r5, 0X0);
            goto L_800E7128;
    }
    goto skip_1;
    // 0x800E70F0: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    skip_1:
    // 0x800E70F4: bnel        $v0, $v1, L_800E7128
    if (ctx->r2 != ctx->r3) {
        // 0x800E70F8: lbu         $a0, 0x0($a1)
        ctx->r4 = MEM_BU(ctx->r5, 0X0);
            goto L_800E7128;
    }
    goto skip_2;
    // 0x800E70F8: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    skip_2:
    // 0x800E70FC: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
L_800E7100:
    // 0x800E7100: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E7104: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800E7108: beql        $v0, $zero, L_800E7128
    if (ctx->r2 == 0) {
        // 0x800E710C: lbu         $a0, 0x0($a1)
        ctx->r4 = MEM_BU(ctx->r5, 0X0);
            goto L_800E7128;
    }
    goto skip_3;
    // 0x800E710C: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    skip_3:
    // 0x800E7110: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x800E7114: beql        $v1, $zero, L_800E7128
    if (ctx->r3 == 0) {
        // 0x800E7118: lbu         $a0, 0x0($a1)
        ctx->r4 = MEM_BU(ctx->r5, 0X0);
            goto L_800E7128;
    }
    goto skip_4;
    // 0x800E7118: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    skip_4:
    // 0x800E711C: beql        $v0, $v1, L_800E7100
    if (ctx->r2 == ctx->r3) {
        // 0x800E7120: lbu         $v0, 0x1($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X1);
            goto L_800E7100;
    }
    goto skip_5;
    // 0x800E7120: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    skip_5:
    // 0x800E7124: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
L_800E7128:
    // 0x800E7128: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800E712C: bne         $v0, $a0, L_800E713C
    if (ctx->r2 != ctx->r4) {
            // 0x800E7130: nop

    func_800E713C(rdram, ctx);
    return;
    }
    // 0x800E7130: nop

    // 0x800E7134: jr          $ra
    // 0x800E7138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800E7138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800E713C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E713C: beq         $v1, $zero, L_800E714C
    if (ctx->r3 == 0) {
        // 0x800E7140: slt         $at, $v1, $a0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_800E714C;
    }
    // 0x800E7140: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800E7144: beq         $at, $zero, L_800E7154
    if (ctx->r1 == 0) {
            // 0x800E7148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_800E7154(rdram, ctx);
    return;
    }
    // 0x800E7148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800E714C:
    // 0x800E714C: jr          $ra
    // 0x800E7150: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800E7150: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_800E7154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7154: jr          $ra
    // 0x800E7158: nop

    return;
    // 0x800E7158: nop

;}
RECOMP_FUNC void func_800E715C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E715C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800E7160: beq         $v0, $zero, L_800E7180
    if (ctx->r2 == 0) {
        // 0x800E7164: nop
    
            goto L_800E7180;
    }
    // 0x800E7164: nop

    // 0x800E7168: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_800E716C:
    // 0x800E716C: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x800E7170: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E7174: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800E7178: bnel        $v0, $zero, L_800E716C
    if (ctx->r2 != 0) {
        // 0x800E717C: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_800E716C;
    }
    goto skip_0;
    // 0x800E717C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    skip_0:
L_800E7180:
    // 0x800E7180: jr          $ra
    // 0x800E7184: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x800E7184: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
