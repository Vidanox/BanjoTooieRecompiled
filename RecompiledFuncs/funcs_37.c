#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8010A980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A980: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8010A984: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010A988: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010A98C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010A990: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8010A994: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8010A998: jal         0x8010A698
    // 0x8010A99C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    func_8010A698(rdram, ctx);
        goto after_0;
    // 0x8010A99C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010A9A0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8010A9A4: jal         0x8010A624
    // 0x8010A9A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A624(rdram, ctx);
        goto after_1;
    // 0x8010A9A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8010A9AC: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x8010A9B0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8010A9B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8010A9B8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8010A9BC: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010A9C0: addiu       $a2, $a2, 0x6F30
    ctx->r6 = ADD32(ctx->r6, 0X6F30);
    // 0x8010A9C4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x8010A9C8: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8010A9CC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8010A9D0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8010A9D4: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8010A9D8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x8010A9DC: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8010A9E0: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x8010A9E4: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8010A9E8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x8010A9EC: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010A9F0: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x8010A9F4: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8010A9F8: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8010A9FC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x8010AA00: jal         0x800C6A7C
    // 0x8010AA04: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    func_800C6A7C(rdram, ctx);
        goto after_2;
    // 0x8010AA04: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_2:
    // 0x8010AA08: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010AA0C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8010AA10: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    // 0x8010AA14: jal         0x800EE7F8
    // 0x8010AA18: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x8010AA18: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x8010AA1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010AA20: jal         0x8010A654
    // 0x8010AA24: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8010A654(rdram, ctx);
        goto after_4;
    // 0x8010AA24: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x8010AA28: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8010AA2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010AA30: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8010AA34: beq         $t6, $zero, L_8010AA44
    if (ctx->r14 == 0) {
        // 0x8010AA38: nop
    
            goto L_8010AA44;
    }
    // 0x8010AA38: nop

    // 0x8010AA3C: b           L_8010AA44
    // 0x8010AA40: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8010AA44;
    // 0x8010AA40: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8010AA44:
    // 0x8010AA44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010AA48: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8010AA4C: jr          $ra
    // 0x8010AA50: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8010AA50: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8010AA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010AA54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010AA58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010AA5C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010AA60: jal         0x800EE7F8
    // 0x8010AA64: addiu       $a1, $a1, 0x6F30
    ctx->r5 = ADD32(ctx->r5, 0X6F30);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010AA64: addiu       $a1, $a1, 0x6F30
    ctx->r5 = ADD32(ctx->r5, 0X6F30);
    after_0:
    // 0x8010AA68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010AA6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010AA70: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010AA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010AA78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010AA7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010AA80: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010AA84: jal         0x800EE7F8
    // 0x8010AA88: addiu       $a1, $a1, 0x6F20
    ctx->r5 = ADD32(ctx->r5, 0X6F20);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010AA88: addiu       $a1, $a1, 0x6F20
    ctx->r5 = ADD32(ctx->r5, 0X6F20);
    after_0:
    // 0x8010AA8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010AA90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010AA94: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010AA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010AA9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010AAA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010AAA4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010AAA8: jal         0x800EE7F8
    // 0x8010AAAC: addiu       $a1, $a1, 0x6F40
    ctx->r5 = ADD32(ctx->r5, 0X6F40);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010AAAC: addiu       $a1, $a1, 0x6F40
    ctx->r5 = ADD32(ctx->r5, 0X6F40);
    after_0:
    // 0x8010AAB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010AAB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010AAB8: jr          $ra
    // 0x8010AABC: nop

    return;
    // 0x8010AABC: nop

;}
RECOMP_FUNC void func_8010AAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010AAC0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8010AAC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010AAC8: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x8010AACC: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x8010AAD0: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x8010AAD4: jal         0x8010A698
    // 0x8010AAD8: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    func_8010A698(rdram, ctx);
        goto after_0;
    // 0x8010AAD8: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010AADC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x8010AAE0: jal         0x8010A624
    // 0x8010AAE4: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    func_8010A624(rdram, ctx);
        goto after_1;
    // 0x8010AAE4: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    after_1:
    // 0x8010AAE8: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x8010AAEC: jal         0x800EC708
    // 0x8010AAF0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800EC708(rdram, ctx);
        goto after_2;
    // 0x8010AAF0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_2:
    // 0x8010AAF4: lw          $v0, 0xB8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB8);
    // 0x8010AAF8: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x8010AAFC: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x8010AB00: andi        $t7, $v0, 0xF000
    ctx->r15 = ctx->r2 & 0XF000;
    // 0x8010AB04: beq         $t7, $at, L_8010AB28
    if (ctx->r15 == ctx->r1) {
        // 0x8010AB08: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8010AB28;
    }
    // 0x8010AB08: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8010AB0C: addiu       $at, $zero, 0x3000
    ctx->r1 = ADD32(0, 0X3000);
    // 0x8010AB10: beq         $t7, $at, L_8010AB28
    if (ctx->r15 == ctx->r1) {
        // 0x8010AB14: addiu       $at, $zero, 0x5000
        ctx->r1 = ADD32(0, 0X5000);
            goto L_8010AB28;
    }
    // 0x8010AB14: addiu       $at, $zero, 0x5000
    ctx->r1 = ADD32(0, 0X5000);
    // 0x8010AB18: beq         $t7, $at, L_8010AB28
    if (ctx->r15 == ctx->r1) {
        // 0x8010AB1C: addiu       $at, $zero, 0x6000
        ctx->r1 = ADD32(0, 0X6000);
            goto L_8010AB28;
    }
    // 0x8010AB1C: addiu       $at, $zero, 0x6000
    ctx->r1 = ADD32(0, 0X6000);
    // 0x8010AB20: bne         $t7, $at, L_8010AB2C
    if (ctx->r15 != ctx->r1) {
        // 0x8010AB24: nop
    
            goto L_8010AB2C;
    }
    // 0x8010AB24: nop

L_8010AB28:
    // 0x8010AB28: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8010AB2C:
    // 0x8010AB2C: beq         $v1, $zero, L_8010AB98
    if (ctx->r3 == 0) {
        // 0x8010AB30: nop
    
            goto L_8010AB98;
    }
    // 0x8010AB30: nop

    // 0x8010AB34: jal         0x8010A40C
    // 0x8010AB38: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    func_8010A40C(rdram, ctx);
        goto after_3;
    // 0x8010AB38: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    after_3:
    // 0x8010AB3C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010AB40: lwc1        $f6, 0x6510($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6510);
    // 0x8010AB44: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8010AB48: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x8010AB4C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8010AB50: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x8010AB54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8010AB58: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8010AB5C: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x8010AB60: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8010AB64: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8010AB68: lh          $t9, 0x20($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X20);
    // 0x8010AB6C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8010AB70: nop

    // 0x8010AB74: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8010AB78: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8010AB7C: nop

    // 0x8010AB80: bc1f        L_8010AB90
    if (!c1cs) {
        // 0x8010AB84: nop
    
            goto L_8010AB90;
    }
    // 0x8010AB84: nop

    // 0x8010AB88: b           L_8010AC00
    // 0x8010AB8C: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
        goto L_8010AC00;
    // 0x8010AB8C: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
L_8010AB90:
    // 0x8010AB90: b           L_8010AC00
    // 0x8010AB94: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
        goto L_8010AC00;
    // 0x8010AB94: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
L_8010AB98:
    // 0x8010AB98: jal         0x8010A40C
    // 0x8010AB9C: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    func_8010A40C(rdram, ctx);
        goto after_4;
    // 0x8010AB9C: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    after_4:
    // 0x8010ABA0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8010ABA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010ABA8: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8010ABAC: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x8010ABB0: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8010ABB4: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x8010ABB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8010ABBC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8010ABC0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8010ABC4: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x8010ABC8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8010ABCC: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8010ABD0: lh          $t2, 0x20($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X20);
    // 0x8010ABD4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8010ABD8: nop

    // 0x8010ABDC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8010ABE0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8010ABE4: nop

    // 0x8010ABE8: bc1fl       L_8010ABFC
    if (!c1cs) {
        // 0x8010ABEC: swc1        $f2, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
            goto L_8010ABFC;
    }
    goto skip_0;
    // 0x8010ABEC: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    skip_0:
    // 0x8010ABF0: b           L_8010AC00
    // 0x8010ABF4: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
        goto L_8010AC00;
    // 0x8010ABF4: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x8010ABF8: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
L_8010ABFC:
    // 0x8010ABFC: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
L_8010AC00:
    // 0x8010AC00: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x8010AC04: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x8010AC08: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x8010AC0C: lw          $t3, 0x14($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X14);
    // 0x8010AC10: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x8010AC14: sb          $zero, 0x70($sp)
    MEM_B(0X70, ctx->r29) = 0;
    // 0x8010AC18: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x8010AC1C: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x8010AC20: sb          $zero, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = 0;
    // 0x8010AC24: sb          $zero, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = 0;
    // 0x8010AC28: sb          $zero, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = 0;
    // 0x8010AC2C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x8010AC30: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8010AC34: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x8010AC38: jal         0x800EFB24
    // 0x8010AC3C: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    func_800EFB24(rdram, ctx);
        goto after_5;
    // 0x8010AC3C: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    after_5:
    // 0x8010AC40: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8010AC44: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x8010AC48: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8010AC4C: jal         0x800D4584
    // 0x8010AC50: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_800D4584(rdram, ctx);
        goto after_6;
    // 0x8010AC50: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_6:
    // 0x8010AC54: lbu         $v0, 0xAD($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XAD);
    // 0x8010AC58: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010AC5C: addiu       $a0, $a0, 0x6F30
    ctx->r4 = ADD32(ctx->r4, 0X6F30);
    // 0x8010AC60: beq         $v0, $zero, L_8010ACB0
    if (ctx->r2 == 0) {
        // 0x8010AC64: sw          $v0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r2;
            goto L_8010ACB0;
    }
    // 0x8010AC64: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8010AC68: jal         0x800EE7F8
    // 0x8010AC6C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x8010AC6C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    after_7:
    // 0x8010AC70: lbu         $t4, 0xAC($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XAC);
    // 0x8010AC74: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8010AC78: bnel        $t4, $zero, L_8010ACB4
    if (ctx->r12 != 0) {
        // 0x8010AC7C: lw          $a0, 0xB0($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XB0);
            goto L_8010ACB4;
    }
    goto skip_1;
    // 0x8010AC7C: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    skip_1:
    // 0x8010AC80: jal         0x800EF410
    // 0x8010AC84: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800EF410(rdram, ctx);
        goto after_8;
    // 0x8010AC84: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_8:
    // 0x8010AC88: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x8010AC8C: jal         0x800EEAA4
    // 0x8010AC90: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800EEAA4(rdram, ctx);
        goto after_9;
    // 0x8010AC90: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_9:
    // 0x8010AC94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010AC98: lwc1        $f4, 0x6514($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6514);
    // 0x8010AC9C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8010ACA0: nop

    // 0x8010ACA4: bc1fl       L_8010ACB4
    if (!c1cs) {
        // 0x8010ACA8: lw          $a0, 0xB0($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XB0);
            goto L_8010ACB4;
    }
    goto skip_2;
    // 0x8010ACA8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    skip_2:
    // 0x8010ACAC: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_8010ACB0:
    // 0x8010ACB0: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
L_8010ACB4:
    // 0x8010ACB4: jal         0x8010A654
    // 0x8010ACB8: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_8010A654(rdram, ctx);
        goto after_10;
    // 0x8010ACB8: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_10:
    // 0x8010ACBC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8010ACC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010ACC4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x8010ACC8: beq         $t5, $zero, L_8010ACD8
    if (ctx->r13 == 0) {
        // 0x8010ACCC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8010ACD8;
    }
    // 0x8010ACCC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8010ACD0: b           L_8010ACD8
    // 0x8010ACD4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8010ACD8;
    // 0x8010ACD4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8010ACD8:
    // 0x8010ACD8: jr          $ra
    // 0x8010ACDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8010ACDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8010ACE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010ACE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010ACE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010ACE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010ACEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010ACF0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010ACF4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8010ACF8: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x8010ACFC: srl         $v1, $v0, 25
    ctx->r3 = S32(U32(ctx->r2) >> 25);
    // 0x8010AD00: beq         $v1, $zero, L_8010AD28
    if (ctx->r3 == 0) {
        // 0x8010AD04: addiu       $a0, $v1, -0x1
        ctx->r4 = ADD32(ctx->r3, -0X1);
            goto L_8010AD28;
    }
    // 0x8010AD04: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    // 0x8010AD08: sll         $a1, $v0, 22
    ctx->r5 = S32(ctx->r2 << 22);
    // 0x8010AD0C: srl         $t7, $a1, 26
    ctx->r15 = S32(U32(ctx->r5) >> 26);
    // 0x8010AD10: jal         0x800CC6CC
    // 0x8010AD14: addiu       $a1, $t7, -0x1
    ctx->r5 = ADD32(ctx->r15, -0X1);
    func_800CC6CC(rdram, ctx);
        goto after_0;
    // 0x8010AD14: addiu       $a1, $t7, -0x1
    ctx->r5 = ADD32(ctx->r15, -0X1);
    after_0:
    // 0x8010AD18: bnel        $v0, $zero, L_8010AD2C
    if (ctx->r2 != 0) {
        // 0x8010AD1C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8010AD2C;
    }
    goto skip_0;
    // 0x8010AD1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x8010AD20: b           L_8010AD3C
    // 0x8010AD24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010AD3C;
    // 0x8010AD24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010AD28:
    // 0x8010AD28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_8010AD2C:
    // 0x8010AD2C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8010AD30: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8010AD34: jal         0x8010AAC0
    // 0x8010AD38: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_8010AAC0(rdram, ctx);
        goto after_1;
    // 0x8010AD38: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
L_8010AD3C:
    // 0x8010AD3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010AD40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010AD44: jr          $ra
    // 0x8010AD48: nop

    return;
    // 0x8010AD48: nop

;}
RECOMP_FUNC void func_8010AD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010AD4C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8010AD50: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8010AD54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010AD58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010AD5C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8010AD60: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8010AD64: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8010AD68: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8010AD6C: jal         0x800EC708
    // 0x8010AD70: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_800EC708(rdram, ctx);
        goto after_0;
    // 0x8010AD70: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8010AD74: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8010AD78: jal         0x8010A40C
    // 0x8010AD7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A40C(rdram, ctx);
        goto after_1;
    // 0x8010AD7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8010AD80: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010AD84: lwc1        $f6, 0x6518($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6518);
    // 0x8010AD88: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010AD8C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8010AD90: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010AD94: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8010AD98: addiu       $a2, $a2, 0x6F30
    ctx->r6 = ADD32(ctx->r6, 0X6F30);
    // 0x8010AD9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010ADA0: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8010ADA4: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x8010ADA8: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8010ADAC: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8010ADB0: swc1        $f16, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f16.u32l;
    // 0x8010ADB4: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010ADB8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x8010ADBC: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8010ADC0: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x8010ADC4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8010ADC8: jal         0x800BF340
    // 0x8010ADCC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_800BF340(rdram, ctx);
        goto after_2;
    // 0x8010ADCC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8010ADD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010ADD4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8010ADD8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8010ADDC: jal         0x800EE7F8
    // 0x8010ADE0: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x8010ADE0: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    after_3:
    // 0x8010ADE4: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8010ADE8: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8010ADEC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8010ADF0: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8010ADF4: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    // 0x8010ADF8: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010ADFC: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8010AE00: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x8010AE04: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8010AE08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8010AE0C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8010AE10: beq         $t6, $zero, L_8010AE20
    if (ctx->r14 == 0) {
        // 0x8010AE14: nop
    
            goto L_8010AE20;
    }
    // 0x8010AE14: nop

    // 0x8010AE18: b           L_8010AE20
    // 0x8010AE1C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8010AE20;
    // 0x8010AE1C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8010AE20:
    // 0x8010AE20: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8010AE24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8010AE28: jr          $ra
    // 0x8010AE2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8010AE2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8010AE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010AE30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010AE34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010AE38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010AE3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010AE40: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010AE44: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8010AE48: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x8010AE4C: srl         $v1, $v0, 25
    ctx->r3 = S32(U32(ctx->r2) >> 25);
    // 0x8010AE50: beq         $v1, $zero, L_8010AE78
    if (ctx->r3 == 0) {
        // 0x8010AE54: addiu       $a0, $v1, -0x1
        ctx->r4 = ADD32(ctx->r3, -0X1);
            goto L_8010AE78;
    }
    // 0x8010AE54: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    // 0x8010AE58: sll         $a1, $v0, 22
    ctx->r5 = S32(ctx->r2 << 22);
    // 0x8010AE5C: srl         $t7, $a1, 26
    ctx->r15 = S32(U32(ctx->r5) >> 26);
    // 0x8010AE60: jal         0x800CC6CC
    // 0x8010AE64: addiu       $a1, $t7, -0x1
    ctx->r5 = ADD32(ctx->r15, -0X1);
    func_800CC6CC(rdram, ctx);
        goto after_0;
    // 0x8010AE64: addiu       $a1, $t7, -0x1
    ctx->r5 = ADD32(ctx->r15, -0X1);
    after_0:
    // 0x8010AE68: bnel        $v0, $zero, L_8010AE7C
    if (ctx->r2 != 0) {
        // 0x8010AE6C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8010AE7C;
    }
    goto skip_0;
    // 0x8010AE6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x8010AE70: b           L_8010AE8C
    // 0x8010AE74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010AE8C;
    // 0x8010AE74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010AE78:
    // 0x8010AE78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_8010AE7C:
    // 0x8010AE7C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8010AE80: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8010AE84: jal         0x8010AD4C
    // 0x8010AE88: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_8010AD4C(rdram, ctx);
        goto after_1;
    // 0x8010AE88: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
L_8010AE8C:
    // 0x8010AE8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010AE90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010AE94: jr          $ra
    // 0x8010AE98: nop

    return;
    // 0x8010AE98: nop

;}
RECOMP_FUNC void func_8010AE9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010AE9C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8010AEA0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8010AEA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010AEA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010AEAC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8010AEB0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8010AEB4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8010AEB8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8010AEBC: jal         0x800EC708
    // 0x8010AEC0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_800EC708(rdram, ctx);
        goto after_0;
    // 0x8010AEC0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8010AEC4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8010AEC8: jal         0x8010A40C
    // 0x8010AECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A40C(rdram, ctx);
        goto after_1;
    // 0x8010AECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8010AED0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010AED4: lwc1        $f6, 0x651C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X651C);
    // 0x8010AED8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010AEDC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8010AEE0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8010AEE4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8010AEE8: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8010AEEC: addiu       $a3, $a3, 0x6F30
    ctx->r7 = ADD32(ctx->r7, 0X6F30);
    // 0x8010AEF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010AEF4: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8010AEF8: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x8010AEFC: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8010AF00: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8010AF04: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8010AF08: swc1        $f16, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f16.u32l;
    // 0x8010AF0C: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010AF10: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8010AF14: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x8010AF18: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8010AF1C: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8010AF20: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8010AF24: jal         0x800BF0E0
    // 0x8010AF28: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800BF0E0(rdram, ctx);
        goto after_2;
    // 0x8010AF28: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x8010AF2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010AF30: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8010AF34: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8010AF38: jal         0x800EE7F8
    // 0x8010AF3C: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x8010AF3C: addiu       $a0, $a0, 0x6F20
    ctx->r4 = ADD32(ctx->r4, 0X6F20);
    after_3:
    // 0x8010AF40: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8010AF44: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8010AF48: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8010AF4C: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8010AF50: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    // 0x8010AF54: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010AF58: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8010AF5C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x8010AF60: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8010AF64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8010AF68: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8010AF6C: beq         $t8, $zero, L_8010AF7C
    if (ctx->r24 == 0) {
        // 0x8010AF70: nop
    
            goto L_8010AF7C;
    }
    // 0x8010AF70: nop

    // 0x8010AF74: b           L_8010AF7C
    // 0x8010AF78: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8010AF7C;
    // 0x8010AF78: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8010AF7C:
    // 0x8010AF7C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8010AF80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8010AF84: jr          $ra
    // 0x8010AF88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8010AF88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8010AF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010AF8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010AF90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010AF94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010AF98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010AF9C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010AFA0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8010AFA4: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x8010AFA8: srl         $v1, $v0, 25
    ctx->r3 = S32(U32(ctx->r2) >> 25);
    // 0x8010AFAC: beq         $v1, $zero, L_8010AFD4
    if (ctx->r3 == 0) {
        // 0x8010AFB0: addiu       $a0, $v1, -0x1
        ctx->r4 = ADD32(ctx->r3, -0X1);
            goto L_8010AFD4;
    }
    // 0x8010AFB0: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    // 0x8010AFB4: sll         $a1, $v0, 22
    ctx->r5 = S32(ctx->r2 << 22);
    // 0x8010AFB8: srl         $t7, $a1, 26
    ctx->r15 = S32(U32(ctx->r5) >> 26);
    // 0x8010AFBC: jal         0x800CC6CC
    // 0x8010AFC0: addiu       $a1, $t7, -0x1
    ctx->r5 = ADD32(ctx->r15, -0X1);
    func_800CC6CC(rdram, ctx);
        goto after_0;
    // 0x8010AFC0: addiu       $a1, $t7, -0x1
    ctx->r5 = ADD32(ctx->r15, -0X1);
    after_0:
    // 0x8010AFC4: bnel        $v0, $zero, L_8010AFD8
    if (ctx->r2 != 0) {
        // 0x8010AFC8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8010AFD8;
    }
    goto skip_0;
    // 0x8010AFC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x8010AFCC: b           L_8010AFE8
    // 0x8010AFD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010AFE8;
    // 0x8010AFD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010AFD4:
    // 0x8010AFD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_8010AFD8:
    // 0x8010AFD8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8010AFDC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8010AFE0: jal         0x8010AE9C
    // 0x8010AFE4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_8010AE9C(rdram, ctx);
        goto after_1;
    // 0x8010AFE4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
L_8010AFE8:
    // 0x8010AFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010AFEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010AFF0: jr          $ra
    // 0x8010AFF4: nop

    return;
    // 0x8010AFF4: nop

;}
RECOMP_FUNC void func_8010AFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010AFF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010AFFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B000: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010B004: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010B008: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010B00C: jal         0x8010C4AC
    // 0x8010B010: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8010C4AC(rdram, ctx);
        goto after_0;
    // 0x8010B010: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B014: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8010B018: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8010B01C: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8010B020: lw          $a1, 0x44($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X44);
    // 0x8010B024: jal         0x800EF214
    // 0x8010B028: lw          $a2, 0x48($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X48);
    func_800EF214(rdram, ctx);
        goto after_1;
    // 0x8010B028: lw          $a2, 0x48($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X48);
    after_1:
    // 0x8010B02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010B034: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B038: jr          $ra
    // 0x8010B03C: nop

    return;
    // 0x8010B03C: nop

;}
RECOMP_FUNC void func_8010B040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010B044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010B04C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010B050: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010B054: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8010B058: jal         0x8010C4AC
    // 0x8010B05C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8010C4AC(rdram, ctx);
        goto after_0;
    // 0x8010B05C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010B060: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8010B064: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8010B068: addiu       $a0, $a3, 0x4
    ctx->r4 = ADD32(ctx->r7, 0X4);
    // 0x8010B06C: jal         0x800EF1B8
    // 0x8010B070: lw          $a1, 0x48($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X48);
    func_800EF1B8(rdram, ctx);
        goto after_1;
    // 0x8010B070: lw          $a1, 0x48($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X48);
    after_1:
    // 0x8010B074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010B07C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B080: jr          $ra
    // 0x8010B084: nop

    return;
    // 0x8010B084: nop

;}
RECOMP_FUNC void func_8010B088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B088: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010B08C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B090: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8010B094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010B098: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8010B09C: jal         0x8010C4AC
    // 0x8010B0A0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8010C4AC(rdram, ctx);
        goto after_0;
    // 0x8010B0A0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B0A4: jal         0x800D8FF8
    // 0x8010B0A8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8010B0A8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8010B0AC: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8010B0B0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8010B0B4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8010B0B8: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8010B0BC: lw          $a1, 0x48($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X48);
    // 0x8010B0C0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8010B0C4: jal         0x800EF1B8
    // 0x8010B0C8: nop

    func_800EF1B8(rdram, ctx);
        goto after_2;
    // 0x8010B0C8: nop

    after_2:
    // 0x8010B0CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B0D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010B0D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B0D8: jr          $ra
    // 0x8010B0DC: nop

    return;
    // 0x8010B0DC: nop

;}
RECOMP_FUNC void func_8010B0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B0E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010B0E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B0E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8010B0EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010B0F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8010B0F4: jal         0x8010C4AC
    // 0x8010B0F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8010C4AC(rdram, ctx);
        goto after_0;
    // 0x8010B0F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B0FC: jal         0x800D8FF8
    // 0x8010B100: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8010B100: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8010B104: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8010B108: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8010B10C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8010B110: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8010B114: lw          $a1, 0x44($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X44);
    // 0x8010B118: lw          $a2, 0x48($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X48);
    // 0x8010B11C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8010B120: jal         0x800EF214
    // 0x8010B124: nop

    func_800EF214(rdram, ctx);
        goto after_2;
    // 0x8010B124: nop

    after_2:
    // 0x8010B128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B12C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010B130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B134: jr          $ra
    // 0x8010B138: nop

    return;
    // 0x8010B138: nop

;}
RECOMP_FUNC void func_8010B13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B13C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010B140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B144: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010B148: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010B14C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010B150: jal         0x8010C4AC
    // 0x8010B154: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8010C4AC(rdram, ctx);
        goto after_0;
    // 0x8010B154: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B158: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8010B15C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8010B160: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8010B164: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8010B168: lw          $a2, 0x48($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X48);
    // 0x8010B16C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8010B170: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8010B174: jal         0x800EF214
    // 0x8010B178: nop

    func_800EF214(rdram, ctx);
        goto after_1;
    // 0x8010B178: nop

    after_1:
    // 0x8010B17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010B184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B188: jr          $ra
    // 0x8010B18C: nop

    return;
    // 0x8010B18C: nop

;}
RECOMP_FUNC void func_8010B190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B190: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010B194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B198: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8010B19C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010B1A0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8010B1A4: jal         0x8010C4AC
    // 0x8010B1A8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8010C4AC(rdram, ctx);
        goto after_0;
    // 0x8010B1A8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B1AC: jal         0x800D8FF8
    // 0x8010B1B0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8010B1B0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8010B1B4: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8010B1B8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8010B1BC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8010B1C0: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8010B1C4: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8010B1C8: lw          $a2, 0x48($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X48);
    // 0x8010B1CC: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8010B1D0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8010B1D4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8010B1D8: jal         0x800EF214
    // 0x8010B1DC: nop

    func_800EF214(rdram, ctx);
        goto after_2;
    // 0x8010B1DC: nop

    after_2:
    // 0x8010B1E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B1E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010B1E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B1EC: jr          $ra
    // 0x8010B1F0: nop

    return;
    // 0x8010B1F0: nop

;}
RECOMP_FUNC void func_8010B1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B1F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8010B1F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010B1FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010B200: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010B204: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8010B208: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8010B20C: jal         0x8010C460
    // 0x8010B210: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_8010C460(rdram, ctx);
        goto after_0;
    // 0x8010B210: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B214: jal         0x800D8FF8
    // 0x8010B218: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8010B218: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8010B21C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8010B220: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8010B224: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010B228: jal         0x800EE7F8
    // 0x8010B22C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8010B22C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x8010B230: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8010B234: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010B238: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8010B23C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8010B240: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8010B244: jal         0x800EE7F8
    // 0x8010B248: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x8010B248: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8010B24C: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8010B250: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8010B254: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x8010B258: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8010B25C: mul.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8010B260: jal         0x800F13F0
    // 0x8010B264: nop

    func_800F13F0(rdram, ctx);
        goto after_4;
    // 0x8010B264: nop

    after_4:
    // 0x8010B268: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8010B26C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010B270: addiu       $a2, $a2, 0x6F40
    ctx->r6 = ADD32(ctx->r6, 0X6F40);
    // 0x8010B274: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x8010B278: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8010B27C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8010B280: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x8010B284: jal         0x800BEF00
    // 0x8010B288: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    func_800BEF00(rdram, ctx);
        goto after_5;
    // 0x8010B288: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_5:
    // 0x8010B28C: beq         $v0, $zero, L_8010B2D8
    if (ctx->r2 == 0) {
        // 0x8010B290: lui         $at, 0x4496
        ctx->r1 = S32(0X4496 << 16);
            goto L_8010B2D8;
    }
    // 0x8010B290: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x8010B294: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8010B298: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8010B29C: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x8010B2A0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8010B2A4: jal         0x800EE7F8
    // 0x8010B2A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x8010B2A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x8010B2AC: lh          $t6, 0x8E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8E);
    // 0x8010B2B0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8010B2B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010B2B8: beq         $t6, $zero, L_8010B2D0
    if (ctx->r14 == 0) {
        // 0x8010B2BC: lui         $a1, 0x8013
        ctx->r5 = S32(0X8013 << 16);
            goto L_8010B2D0;
    }
    // 0x8010B2BC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010B2C0: addiu       $a1, $a1, 0x6F40
    ctx->r5 = ADD32(ctx->r5, 0X6F40);
    // 0x8010B2C4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8010B2C8: jal         0x801045AC
    // 0x8010B2CC: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    func_801045AC(rdram, ctx);
        goto after_7;
    // 0x8010B2CC: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    after_7:
L_8010B2D0:
    // 0x8010B2D0: b           L_8010B31C
    // 0x8010B2D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010B31C;
    // 0x8010B2D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010B2D8:
    // 0x8010B2D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8010B2DC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8010B2E0: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8010B2E4: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010B2E8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8010B2EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010B2F0: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8010B2F4: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x8010B2F8: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8010B2FC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8010B300: jal         0x8010C3E8
    // 0x8010B304: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    func_8010C3E8(rdram, ctx);
        goto after_8;
    // 0x8010B304: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    after_8:
    // 0x8010B308: beql        $v0, $zero, L_8010B31C
    if (ctx->r2 == 0) {
        // 0x8010B30C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8010B31C;
    }
    goto skip_0;
    // 0x8010B30C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8010B310: b           L_8010B31C
    // 0x8010B314: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8010B31C;
    // 0x8010B314: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8010B318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010B31C:
    // 0x8010B31C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010B320: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010B324: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8010B328: jr          $ra
    // 0x8010B32C: nop

    return;
    // 0x8010B32C: nop

;}
RECOMP_FUNC void func_8010B330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B330: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8010B334: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010B338: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010B33C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010B340: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8010B344: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8010B348: jal         0x8010C460
    // 0x8010B34C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    func_8010C460(rdram, ctx);
        goto after_0;
    // 0x8010B34C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B350: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8010B354: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8010B358: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010B35C: jal         0x800EE7F8
    // 0x8010B360: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8010B360: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x8010B364: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8010B368: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8010B36C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8010B370: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8010B374: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8010B378: jal         0x800EE7F8
    // 0x8010B37C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8010B37C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8010B380: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8010B384: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8010B388: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010B38C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010B390: addiu       $a2, $a2, 0x6F40
    ctx->r6 = ADD32(ctx->r6, 0X6F40);
    // 0x8010B394: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8010B398: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8010B39C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8010B3A0: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x8010B3A4: jal         0x800C6A7C
    // 0x8010B3A8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    func_800C6A7C(rdram, ctx);
        goto after_3;
    // 0x8010B3A8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_3:
    // 0x8010B3AC: beql        $v0, $zero, L_8010B3FC
    if (ctx->r2 == 0) {
        // 0x8010B3B0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8010B3FC;
    }
    goto skip_0;
    // 0x8010B3B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8010B3B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8010B3B8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8010B3BC: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x8010B3C0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8010B3C4: jal         0x800EE7F8
    // 0x8010B3C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x8010B3C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x8010B3CC: lh          $t6, 0x8E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8E);
    // 0x8010B3D0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8010B3D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010B3D8: beq         $t6, $zero, L_8010B3F0
    if (ctx->r14 == 0) {
        // 0x8010B3DC: lui         $a1, 0x8013
        ctx->r5 = S32(0X8013 << 16);
            goto L_8010B3F0;
    }
    // 0x8010B3DC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010B3E0: addiu       $a1, $a1, 0x6F40
    ctx->r5 = ADD32(ctx->r5, 0X6F40);
    // 0x8010B3E4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8010B3E8: jal         0x801045AC
    // 0x8010B3EC: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    func_801045AC(rdram, ctx);
        goto after_5;
    // 0x8010B3EC: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    after_5:
L_8010B3F0:
    // 0x8010B3F0: b           L_8010B3FC
    // 0x8010B3F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010B3FC;
    // 0x8010B3F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8010B3F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010B3FC:
    // 0x8010B3FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010B400: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010B404: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8010B408: jr          $ra
    // 0x8010B40C: nop

    return;
    // 0x8010B40C: nop

;}
RECOMP_FUNC void func_8010B410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B410: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8010B414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010B418: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010B41C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010B420: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8010B424: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8010B428: jal         0x8010C460
    // 0x8010B42C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    func_8010C460(rdram, ctx);
        goto after_0;
    // 0x8010B42C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B430: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8010B434: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8010B438: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010B43C: jal         0x800EE7F8
    // 0x8010B440: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8010B440: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x8010B444: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8010B448: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8010B44C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8010B450: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8010B454: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8010B458: jal         0x800EE7F8
    // 0x8010B45C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8010B45C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8010B460: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8010B464: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8010B468: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010B46C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010B470: addiu       $a2, $a2, 0x6F40
    ctx->r6 = ADD32(ctx->r6, 0X6F40);
    // 0x8010B474: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8010B478: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8010B47C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8010B480: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x8010B484: jal         0x800BEF00
    // 0x8010B488: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    func_800BEF00(rdram, ctx);
        goto after_3;
    // 0x8010B488: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_3:
    // 0x8010B48C: beq         $v0, $zero, L_8010B4E4
    if (ctx->r2 == 0) {
        // 0x8010B490: nop
    
            goto L_8010B4E4;
    }
    // 0x8010B490: nop

    // 0x8010B494: lh          $t6, 0x8E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8E);
    // 0x8010B498: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010B49C: addiu       $a1, $a1, 0x6F40
    ctx->r5 = ADD32(ctx->r5, 0X6F40);
    // 0x8010B4A0: beq         $t6, $zero, L_8010B4B4
    if (ctx->r14 == 0) {
        // 0x8010B4A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010B4B4;
    }
    // 0x8010B4A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010B4A8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8010B4AC: jal         0x801045AC
    // 0x8010B4B0: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    func_801045AC(rdram, ctx);
        goto after_4;
    // 0x8010B4B0: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    after_4:
L_8010B4B4:
    // 0x8010B4B4: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010B4B8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010B4BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8010B4C0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8010B4C4: nop

    // 0x8010B4C8: bc1f        L_8010B4E4
    if (!c1cs) {
        // 0x8010B4CC: nop
    
            goto L_8010B4E4;
    }
    // 0x8010B4CC: nop

    // 0x8010B4D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8010B4D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8010B4D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8010B4DC: b           L_8010B500
    // 0x8010B4E0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
        goto L_8010B500;
    // 0x8010B4E0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_8010B4E4:
    // 0x8010B4E4: jal         0x8010C3E8
    // 0x8010B4E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010C3E8(rdram, ctx);
        goto after_5;
    // 0x8010B4E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8010B4EC: beql        $v0, $zero, L_8010B500
    if (ctx->r2 == 0) {
        // 0x8010B4F0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8010B500;
    }
    goto skip_0;
    // 0x8010B4F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8010B4F4: b           L_8010B500
    // 0x8010B4F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8010B500;
    // 0x8010B4F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8010B4FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010B500:
    // 0x8010B500: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010B504: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010B508: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8010B50C: jr          $ra
    // 0x8010B510: nop

    return;
    // 0x8010B510: nop

;}
RECOMP_FUNC void func_8010B514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B514: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8010B518: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010B51C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010B520: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010B524: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8010B528: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8010B52C: jal         0x8010C460
    // 0x8010B530: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_8010C460(rdram, ctx);
        goto after_0;
    // 0x8010B530: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B534: jal         0x800D8FF8
    // 0x8010B538: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8010B538: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8010B53C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8010B540: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8010B544: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010B548: jal         0x800EE7F8
    // 0x8010B54C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8010B54C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x8010B550: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8010B554: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010B558: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8010B55C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8010B560: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8010B564: jal         0x800EE7F8
    // 0x8010B568: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x8010B568: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8010B56C: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8010B570: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8010B574: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x8010B578: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8010B57C: mul.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8010B580: jal         0x800F13F0
    // 0x8010B584: nop

    func_800F13F0(rdram, ctx);
        goto after_4;
    // 0x8010B584: nop

    after_4:
    // 0x8010B588: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8010B58C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8010B590: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8010B594: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8010B598: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x8010B59C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010B5A0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8010B5A4: addiu       $a2, $a2, 0x6F40
    ctx->r6 = ADD32(ctx->r6, 0X6F40);
    // 0x8010B5A8: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x8010B5AC: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8010B5B0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x8010B5B4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8010B5B8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8010B5BC: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8010B5C0: jal         0x800BEF00
    // 0x8010B5C4: swc1        $f18, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f18.u32l;
    func_800BEF00(rdram, ctx);
        goto after_5;
    // 0x8010B5C4: swc1        $f18, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f18.u32l;
    after_5:
    // 0x8010B5C8: beql        $v0, $zero, L_8010B660
    if (ctx->r2 == 0) {
        // 0x8010B5CC: lwc1        $f8, 0x8($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
            goto L_8010B660;
    }
    goto skip_0;
    // 0x8010B5CC: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    skip_0:
    // 0x8010B5D0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010B5D4: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8010B5D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010B5DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8010B5E0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8010B5E4: jal         0x8010C3E8
    // 0x8010B5E8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8010C3E8(rdram, ctx);
        goto after_6;
    // 0x8010B5E8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_6:
    // 0x8010B5EC: beq         $v0, $zero, L_8010B5FC
    if (ctx->r2 == 0) {
        // 0x8010B5F0: lw          $v1, 0x2C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X2C);
            goto L_8010B5FC;
    }
    // 0x8010B5F0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8010B5F4: b           L_8010B688
    // 0x8010B5F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8010B688;
    // 0x8010B5F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8010B5FC:
    // 0x8010B5FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8010B600: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010B604: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010B608: swc1        $f16, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f16.u32l;
    // 0x8010B60C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8010B610: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x8010B614: addiu       $a1, $a1, 0x6F40
    ctx->r5 = ADD32(ctx->r5, 0X6F40);
    // 0x8010B618: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8010B61C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010B620: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8010B624: bc1fl       L_8010B644
    if (!c1cs) {
        // 0x8010B628: lh          $t6, 0x8E($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X8E);
            goto L_8010B644;
    }
    goto skip_1;
    // 0x8010B628: lh          $t6, 0x8E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8E);
    skip_1:
    // 0x8010B62C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010B630: nop

    // 0x8010B634: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x8010B638: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8010B63C: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x8010B640: lh          $t6, 0x8E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8E);
L_8010B644:
    // 0x8010B644: beq         $t6, $zero, L_8010B654
    if (ctx->r14 == 0) {
        // 0x8010B648: nop
    
            goto L_8010B654;
    }
    // 0x8010B648: nop

    // 0x8010B64C: jal         0x801045AC
    // 0x8010B650: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    func_801045AC(rdram, ctx);
        goto after_7;
    // 0x8010B650: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    after_7:
L_8010B654:
    // 0x8010B654: b           L_8010B688
    // 0x8010B658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010B688;
    // 0x8010B658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8010B65C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
L_8010B660:
    // 0x8010B660: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8010B664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010B668: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8010B66C: jal         0x8010C3E8
    // 0x8010B670: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    func_8010C3E8(rdram, ctx);
        goto after_8;
    // 0x8010B670: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    after_8:
    // 0x8010B674: beql        $v0, $zero, L_8010B688
    if (ctx->r2 == 0) {
        // 0x8010B678: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8010B688;
    }
    goto skip_2;
    // 0x8010B678: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x8010B67C: b           L_8010B688
    // 0x8010B680: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8010B688;
    // 0x8010B680: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8010B684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010B688:
    // 0x8010B688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010B68C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010B690: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8010B694: jr          $ra
    // 0x8010B698: nop

    return;
    // 0x8010B698: nop

;}
RECOMP_FUNC void func_8010B69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B69C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010B6A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010B6A4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8010B6A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B6AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010B6B0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010B6B4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8010B6B8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8010B6BC: jal         0x800BED50
    // 0x8010B6C0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800BED50(rdram, ctx);
        goto after_0;
    // 0x8010B6C0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x8010B6C4: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x8010B6C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010B6CC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8010B6D0: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8010B6D4: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8010B6D8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8010B6DC: nop

    // 0x8010B6E0: bc1fl       L_8010B6F4
    if (!c1cs) {
        // 0x8010B6E4: swc1        $f2, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->f2.u32l;
            goto L_8010B6F4;
    }
    goto skip_0;
    // 0x8010B6E4: swc1        $f2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f2.u32l;
    skip_0:
    // 0x8010B6E8: b           L_8010B6F4
    // 0x8010B6EC: swc1        $f12, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f12.u32l;
        goto L_8010B6F4;
    // 0x8010B6EC: swc1        $f12, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f12.u32l;
    // 0x8010B6F0: swc1        $f2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f2.u32l;
L_8010B6F4:
    // 0x8010B6F4: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8010B6F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B6FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B700: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x8010B704: nop

    // 0x8010B708: bc1f        L_8010B714
    if (!c1cs) {
        // 0x8010B70C: nop
    
            goto L_8010B714;
    }
    // 0x8010B70C: nop

    // 0x8010B710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010B714:
    // 0x8010B714: jr          $ra
    // 0x8010B718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8010B718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8010B71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B71C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8010B720: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010B724: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010B728: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010B72C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8010B730: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8010B734: jal         0x8010C460
    // 0x8010B738: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    func_8010C460(rdram, ctx);
        goto after_0;
    // 0x8010B738: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B73C: jal         0x800D8FF8
    // 0x8010B740: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8010B740: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8010B744: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8010B748: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8010B74C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8010B750: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8010B754: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8010B758: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010B75C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010B760: addiu       $a2, $a2, 0x6F40
    ctx->r6 = ADD32(ctx->r6, 0X6F40);
    // 0x8010B764: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8010B768: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8010B76C: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8010B770: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8010B774: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x8010B778: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8010B77C: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8010B780: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x8010B784: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8010B788: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8010B78C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8010B790: jal         0x800BEF00
    // 0x8010B794: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800BEF00(rdram, ctx);
        goto after_2;
    // 0x8010B794: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_2:
    // 0x8010B798: beq         $v0, $zero, L_8010B7D4
    if (ctx->r2 == 0) {
        // 0x8010B79C: lwc1        $f16, 0x2C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_8010B7D4;
    }
    // 0x8010B79C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8010B7A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8010B7A4: lh          $t6, 0x8E($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8E);
    // 0x8010B7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010B7AC: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x8010B7B0: beq         $t6, $zero, L_8010B7CC
    if (ctx->r14 == 0) {
        // 0x8010B7B4: swc1        $f0, 0x34($s0)
        MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
            goto L_8010B7CC;
    }
    // 0x8010B7B4: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x8010B7B8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010B7BC: addiu       $a1, $a1, 0x6F40
    ctx->r5 = ADD32(ctx->r5, 0X6F40);
    // 0x8010B7C0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8010B7C4: jal         0x801045AC
    // 0x8010B7C8: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    func_801045AC(rdram, ctx);
        goto after_3;
    // 0x8010B7C8: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    after_3:
L_8010B7CC:
    // 0x8010B7CC: b           L_8010B7EC
    // 0x8010B7D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010B7EC;
    // 0x8010B7D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010B7D4:
    // 0x8010B7D4: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8010B7D8: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8010B7DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B7E0: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8010B7E4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8010B7E8: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
L_8010B7EC:
    // 0x8010B7EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010B7F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010B7F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8010B7F8: jr          $ra
    // 0x8010B7FC: nop

    return;
    // 0x8010B7FC: nop

;}
RECOMP_FUNC void func_8010B800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010B804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B808: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8010B80C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8010B810: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8010B814: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8010B818: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x8010B81C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8010B820: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8010B824: srl         $v1, $v0, 25
    ctx->r3 = S32(U32(ctx->r2) >> 25);
    // 0x8010B828: beq         $v1, $zero, L_8010B890
    if (ctx->r3 == 0) {
        // 0x8010B82C: addiu       $a1, $v1, -0x1
        ctx->r5 = ADD32(ctx->r3, -0X1);
            goto L_8010B890;
    }
    // 0x8010B82C: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x8010B830: sll         $a2, $v0, 22
    ctx->r6 = S32(ctx->r2 << 22);
    // 0x8010B834: srl         $t6, $a2, 26
    ctx->r14 = S32(U32(ctx->r6) >> 26);
    // 0x8010B838: addiu       $a2, $t6, -0x1
    ctx->r6 = ADD32(ctx->r14, -0X1);
    // 0x8010B83C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010B840: jal         0x800CC338
    // 0x8010B844: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_800CC338(rdram, ctx);
        goto after_0;
    // 0x8010B844: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B848: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8010B84C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010B850: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8010B854: bne         $v0, $at, L_8010B86C
    if (ctx->r2 != ctx->r1) {
        // 0x8010B858: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8010B86C;
    }
    // 0x8010B858: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8010B85C: jal         0x800EE7F8
    // 0x8010B860: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8010B860: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x8010B864: b           L_8010B894
    // 0x8010B868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010B894;
    // 0x8010B868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010B86C:
    // 0x8010B86C: lhu         $t1, 0x72($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X72);
    // 0x8010B870: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x8010B874: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8010B878: andi        $t0, $t9, 0x3F0
    ctx->r8 = ctx->r25 & 0X3F0;
    // 0x8010B87C: andi        $t2, $t1, 0xFC0F
    ctx->r10 = ctx->r9 & 0XFC0F;
    // 0x8010B880: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x8010B884: sh          $t3, 0x72($a3)
    MEM_H(0X72, ctx->r7) = ctx->r11;
    // 0x8010B888: b           L_8010B894
    // 0x8010B88C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010B894;
    // 0x8010B88C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010B890:
    // 0x8010B890: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010B894:
    // 0x8010B894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B898: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8010B89C: jr          $ra
    // 0x8010B8A0: nop

    return;
    // 0x8010B8A0: nop

;}
RECOMP_FUNC void func_8010B8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B8A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010B8A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B8AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8010B8B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8010B8B4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8010B8B8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8010B8BC: jal         0x800D8FF8
    // 0x8010B8C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8010B8C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010B8C4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8010B8C8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8010B8CC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8010B8D0: lwc1        $f6, 0x34($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X34);
    // 0x8010B8D4: lwc1        $f4, 0x2C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x8010B8D8: addiu       $a1, $a3, 0x28
    ctx->r5 = ADD32(ctx->r7, 0X28);
    // 0x8010B8DC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8010B8E0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8010B8E4: jal         0x800EFA20
    // 0x8010B8E8: swc1        $f10, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f10.u32l;
    func_800EFA20(rdram, ctx);
        goto after_1;
    // 0x8010B8E8: swc1        $f10, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f10.u32l;
    after_1:
    // 0x8010B8EC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8010B8F0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8010B8F4: jal         0x800EF04C
    // 0x8010B8F8: addiu       $a0, $a3, 0x4
    ctx->r4 = ADD32(ctx->r7, 0X4);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x8010B8F8: addiu       $a0, $a3, 0x4
    ctx->r4 = ADD32(ctx->r7, 0X4);
    after_2:
    // 0x8010B8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B900: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8010B904: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B908: jr          $ra
    // 0x8010B90C: nop

    return;
    // 0x8010B90C: nop

;}
RECOMP_FUNC void func_8010B910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010B914: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010B918: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8010B91C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B920: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010B924: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010B928: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8010B92C: addiu       $a1, $a2, 0x28
    ctx->r5 = ADD32(ctx->r6, 0X28);
    // 0x8010B930: jal         0x800EF04C
    // 0x8010B934: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EF04C(rdram, ctx);
        goto after_0;
    // 0x8010B934: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x8010B938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B93C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010B940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B944: jr          $ra
    // 0x8010B948: nop

    return;
    // 0x8010B948: nop

;}
RECOMP_FUNC void func_8010B94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B94C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010B950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010B954: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010B958: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010B95C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010B960: jal         0x800D8FF8
    // 0x8010B964: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8010B964: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010B968: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8010B96C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8010B970: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8010B974: jal         0x800EF174
    // 0x8010B978: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    func_800EF174(rdram, ctx);
        goto after_1;
    // 0x8010B978: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    after_1:
    // 0x8010B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010B980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010B984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010B988: jr          $ra
    // 0x8010B98C: nop

    return;
    // 0x8010B98C: nop

;}
RECOMP_FUNC void func_8010B990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010B990: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8010B994: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8010B998: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8010B99C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8010B9A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8010B9A4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8010B9A8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8010B9AC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8010B9B0: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8010B9B4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8010B9B8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8010B9BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8010B9C0: jal         0x80104580
    // 0x8010B9C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_80104580(rdram, ctx);
        goto after_0;
    // 0x8010B9C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x8010B9C8: addiu       $s4, $sp, 0x40
    ctx->r20 = ADD32(ctx->r29, 0X40);
    // 0x8010B9CC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8010B9D0: jal         0x800EE7F8
    // 0x8010B9D4: addiu       $a1, $s3, 0x4
    ctx->r5 = ADD32(ctx->r19, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8010B9D4: addiu       $a1, $s3, 0x4
    ctx->r5 = ADD32(ctx->r19, 0X4);
    after_1:
    // 0x8010B9D8: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x8010B9DC: addiu       $s5, $s5, 0x4714
    ctx->r21 = ADD32(ctx->r21, 0X4714);
    // 0x8010B9E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8010B9E4: addiu       $s7, $zero, 0x6
    ctx->r23 = ADD32(0, 0X6);
    // 0x8010B9E8: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x8010B9EC: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
L_8010B9F0:
    // 0x8010B9F0: srlv        $v0, $s2, $t6
    ctx->r2 = S32(U32(ctx->r18) >> (ctx->r14 & 31));
    // 0x8010B9F4: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x8010B9F8: beq         $t7, $zero, L_8010BA44
    if (ctx->r15 == 0) {
        // 0x8010B9FC: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_8010BA44;
    }
    // 0x8010B9FC: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x8010BA00: addu        $t9, $s5, $t8
    ctx->r25 = ADD32(ctx->r21, ctx->r24);
    // 0x8010BA04: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8010BA08: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x8010BA0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8010BA10: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8010BA14: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x8010BA18: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8010BA1C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8010BA20: jalr        $t9
    // 0x8010BA24: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8010BA24: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_2:
    // 0x8010BA28: bne         $v0, $s6, L_8010BA38
    if (ctx->r2 != ctx->r22) {
        // 0x8010BA2C: sllv        $t3, $v0, $s0
        ctx->r11 = S32(ctx->r2 << (ctx->r16 & 31));
            goto L_8010BA38;
    }
    // 0x8010BA2C: sllv        $t3, $v0, $s0
    ctx->r11 = S32(ctx->r2 << (ctx->r16 & 31));
    // 0x8010BA30: b           L_8010BA54
    // 0x8010BA34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010BA54;
    // 0x8010BA34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010BA38:
    // 0x8010BA38: beql        $v0, $zero, L_8010BA48
    if (ctx->r2 == 0) {
        // 0x8010BA3C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8010BA48;
    }
    goto skip_0;
    // 0x8010BA3C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8010BA40: or          $s1, $s1, $t3
    ctx->r17 = ctx->r17 | ctx->r11;
L_8010BA44:
    // 0x8010BA44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8010BA48:
    // 0x8010BA48: bnel        $s0, $s7, L_8010B9F0
    if (ctx->r16 != ctx->r23) {
        // 0x8010BA4C: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_8010B9F0;
    }
    goto skip_1;
    // 0x8010BA4C: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    skip_1:
    // 0x8010BA50: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8010BA54:
    // 0x8010BA54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8010BA58: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8010BA5C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8010BA60: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8010BA64: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8010BA68: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8010BA6C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8010BA70: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8010BA74: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8010BA78: jr          $ra
    // 0x8010BA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8010BA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8010BA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010BA80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8010BA84: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8010BA88: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8010BA8C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8010BA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010BA94: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8010BA98: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8010BA9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010BAA0: jal         0x800EE7F8
    // 0x8010BAA4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010BAA4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8010BAA8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8010BAAC: jal         0x8010B990
    // 0x8010BAB0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8010B990(rdram, ctx);
        goto after_1;
    // 0x8010BAB0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x8010BAB4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8010BAB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8010BABC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8010BAC0: and         $t7, $v0, $t6
    ctx->r15 = ctx->r2 & ctx->r14;
    // 0x8010BAC4: beq         $t7, $zero, L_8010BAD8
    if (ctx->r15 == 0) {
        // 0x8010BAC8: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8010BAD8;
    }
    // 0x8010BAC8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8010BACC: jal         0x800EE7F8
    // 0x8010BAD0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8010BAD0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8010BAD4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
L_8010BAD8:
    // 0x8010BAD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010BADC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8010BAE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8010BAE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010BAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010BAEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8010BAF0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8010BAF4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8010BAF8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8010BAFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010BB00: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8010BB04: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8010BB08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010BB0C: jal         0x800EE7F8
    // 0x8010BB10: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010BB10: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8010BB14: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8010BB18: jal         0x8010B990
    // 0x8010BB1C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8010B990(rdram, ctx);
        goto after_1;
    // 0x8010BB1C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x8010BB20: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8010BB24: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8010BB28: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8010BB2C: and         $t6, $v0, $a0
    ctx->r14 = ctx->r2 & ctx->r4;
    // 0x8010BB30: beql        $t6, $a0, L_8010BB4C
    if (ctx->r14 == ctx->r4) {
        // 0x8010BB34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010BB4C;
    }
    goto skip_0;
    // 0x8010BB34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8010BB38: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8010BB3C: jal         0x800EE7F8
    // 0x8010BB40: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8010BB40: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8010BB44: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8010BB48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010BB4C:
    // 0x8010BB4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8010BB50: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8010BB54: jr          $ra
    // 0x8010BB58: nop

    return;
    // 0x8010BB58: nop

;}
RECOMP_FUNC void func_8010BB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010BB5C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8010BB60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010BB64: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8010BB68: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8010BB6C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8010BB70: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8010BB74: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8010BB78: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8010BB7C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8010BB80: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8010BB84: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x8010BB88: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8010BB8C: nop

    // 0x8010BB90: bc1fl       L_8010BBA4
    if (!c1cs) {
        // 0x8010BB94: add.s       $f8, $f2, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
            goto L_8010BBA4;
    }
    goto skip_0;
    // 0x8010BB94: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
    skip_0:
    // 0x8010BB98: b           L_8010BCB4
    // 0x8010BB9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010BCB4;
    // 0x8010BB9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010BBA0: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
L_8010BBA4:
    // 0x8010BBA4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8010BBA8: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8010BBAC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8010BBB0: nop

    // 0x8010BBB4: bc1fl       L_8010BBC8
    if (!c1cs) {
        // 0x8010BBB8: lwc1        $f10, 0x0($t8)
        ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
            goto L_8010BBC8;
    }
    goto skip_1;
    // 0x8010BBB8: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    skip_1:
    // 0x8010BBBC: b           L_8010BCB4
    // 0x8010BBC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010BCB4;
    // 0x8010BBC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010BBC4: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
L_8010BBC8:
    // 0x8010BBC8: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8010BBCC: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8010BBD0: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8010BBD4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8010BBD8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8010BBDC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8010BBE0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8010BBE4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8010BBE8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8010BBEC: jal         0x800EFA4C
    // 0x8010BBF0: nop

    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x8010BBF0: nop

    after_0:
    // 0x8010BBF4: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8010BBF8: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8010BBFC: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8010BC00: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8010BC04: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8010BC08: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8010BC0C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8010BC10: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8010BC14: add.s       $f20, $f4, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8010BC18: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8010BC1C: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x8010BC20: nop

    // 0x8010BC24: bc1f        L_8010BC34
    if (!c1cs) {
        // 0x8010BC28: nop
    
            goto L_8010BC34;
    }
    // 0x8010BC28: nop

    // 0x8010BC2C: b           L_8010BCB4
    // 0x8010BC30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010BCB4;
    // 0x8010BC30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010BC34:
    // 0x8010BC34: jal         0x8002DCA0
    // 0x8010BC38: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x8010BC38: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x8010BC3C: jal         0x800D8FF8
    // 0x8010BC40: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x8010BC40: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x8010BC44: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x8010BC48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8010BC4C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8010BC50: mul.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8010BC54: jal         0x800F13F0
    // 0x8010BC58: sub.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f20.fl;
    func_800F13F0(rdram, ctx);
        goto after_3;
    // 0x8010BC58: sub.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f20.fl;
    after_3:
    // 0x8010BC5C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8010BC60: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8010BC64: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x8010BC68: nop

    // 0x8010BC6C: bc1fl       L_8010BC9C
    if (!c1cs) {
        // 0x8010BC70: addiu       $a0, $sp, 0x3C
        ctx->r4 = ADD32(ctx->r29, 0X3C);
            goto L_8010BC9C;
    }
    goto skip_2;
    // 0x8010BC70: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    skip_2:
    // 0x8010BC74: jal         0x800DC0C0
    // 0x8010BC78: nop

    func_800DC0C0(rdram, ctx);
        goto after_4;
    // 0x8010BC78: nop

    after_4:
    // 0x8010BC7C: jal         0x800DC0C0
    // 0x8010BC80: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800DC0C0(rdram, ctx);
        goto after_5;
    // 0x8010BC80: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x8010BC84: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8010BC88: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8010BC8C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8010BC90: jal         0x800EFA4C
    // 0x8010BC94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800EFA4C(rdram, ctx);
        goto after_6;
    // 0x8010BC94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_6:
    // 0x8010BC98: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
L_8010BC9C:
    // 0x8010BC9C: jal         0x800EF368
    // 0x8010BCA0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_800EF368(rdram, ctx);
        goto after_7;
    // 0x8010BCA0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x8010BCA4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8010BCA8: jal         0x800EF04C
    // 0x8010BCAC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800EF04C(rdram, ctx);
        goto after_8;
    // 0x8010BCAC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_8:
    // 0x8010BCB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010BCB4:
    // 0x8010BCB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010BCB8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8010BCBC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8010BCC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010BCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010BCC8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8010BCCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010BCD0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8010BCD4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8010BCD8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8010BCDC: lhu         $t6, 0x62($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X62);
    // 0x8010BCE0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8010BCE4: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8010BCE8: bne         $t6, $zero, L_8010BCF8
    if (ctx->r14 != 0) {
        // 0x8010BCEC: addiu       $a0, $sp, 0x34
        ctx->r4 = ADD32(ctx->r29, 0X34);
            goto L_8010BCF8;
    }
    // 0x8010BCEC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8010BCF0: b           L_8010BD9C
    // 0x8010BCF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010BD9C;
    // 0x8010BCF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010BCF8:
    // 0x8010BCF8: jal         0x800EE7F8
    // 0x8010BCFC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010BCFC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_0:
    // 0x8010BD00: lh          $t7, 0x88($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X88);
    // 0x8010BD04: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8010BD08: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8010BD0C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8010BD10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010BD14: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8010BD18: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8010BD1C: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8010BD20: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x8010BD24: lh          $t9, 0x88($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X88);
    // 0x8010BD28: lh          $t8, 0x8A($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X8A);
    // 0x8010BD2C: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8010BD30: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8010BD34: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x8010BD38: nop

    // 0x8010BD3C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8010BD40: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8010BD44: jal         0x8010A40C
    // 0x8010BD48: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    func_8010A40C(rdram, ctx);
        goto after_1;
    // 0x8010BD48: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8010BD4C: lhu         $t1, 0x62($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X62);
    // 0x8010BD50: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8010BD54: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8010BD58: bgez        $t1, L_8010BD6C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8010BD5C: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8010BD6C;
    }
    // 0x8010BD5C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8010BD60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8010BD64: nop

    // 0x8010BD68: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
L_8010BD6C:
    // 0x8010BD6C: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8010BD70: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x8010BD74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8010BD78: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8010BD7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010BD80: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8010BD84: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x8010BD88: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8010BD8C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8010BD90: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8010BD94: jal         0x8010BB5C
    // 0x8010BD98: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    func_8010BB5C(rdram, ctx);
        goto after_2;
    // 0x8010BD98: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    after_2:
L_8010BD9C:
    // 0x8010BD9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8010BDA0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8010BDA4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8010BDA8: jr          $ra
    // 0x8010BDAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8010BDAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8010BDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010BDB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8010BDB4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8010BDB8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8010BDBC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8010BDC0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8010BDC4: addiu       $s5, $a0, 0x4
    ctx->r21 = ADD32(ctx->r4, 0X4);
    // 0x8010BDC8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8010BDCC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8010BDD0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8010BDD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8010BDD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010BDDC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8010BDE0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8010BDE4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8010BDE8: jal         0x800BE3F8
    // 0x8010BDEC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800BE3F8(rdram, ctx);
        goto after_0;
    // 0x8010BDEC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x8010BDF0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8010BDF4: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8010BDF8: beq         $t6, $zero, L_8010BF20
    if (ctx->r14 == 0) {
        // 0x8010BDFC: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_8010BF20;
    }
    // 0x8010BDFC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_8010BE00:
    // 0x8010BE00: jal         0x800E9E88
    // 0x8010BE04: nop

    func_800E9E88(rdram, ctx);
        goto after_1;
    // 0x8010BE04: nop

    after_1:
    // 0x8010BE08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010BE0C: jal         0x800E9EB4
    // 0x8010BE10: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    func_800E9EB4(rdram, ctx);
        goto after_2;
    // 0x8010BE10: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    after_2:
    // 0x8010BE14: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8010BE18: beq         $at, $zero, L_8010BF10
    if (ctx->r1 == 0) {
        // 0x8010BE1C: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_8010BF10;
    }
    // 0x8010BE1C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8010BE20: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_8010BE24:
    // 0x8010BE24: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8010BE28: beql        $t8, $zero, L_8010BF04
    if (ctx->r24 == 0) {
        // 0x8010BE2C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8010BF04;
    }
    goto skip_0;
    // 0x8010BE2C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x8010BE30: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8010BE34: lhu         $t9, 0x18($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X18);
    // 0x8010BE38: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8010BE3C: beql        $t0, $zero, L_8010BF04
    if (ctx->r8 == 0) {
        // 0x8010BE40: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8010BF04;
    }
    goto skip_1;
    // 0x8010BE40: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_1:
    // 0x8010BE44: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x8010BE48: beql        $s1, $t1, L_8010BF04
    if (ctx->r17 == ctx->r9) {
        // 0x8010BE4C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8010BF04;
    }
    goto skip_2;
    // 0x8010BE4C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_2:
    // 0x8010BE50: jal         0x80106790
    // 0x8010BE54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80106790(rdram, ctx);
        goto after_3;
    // 0x8010BE54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x8010BE58: lhu         $t2, 0x70($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X70);
    // 0x8010BE5C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8010BE60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8010BE64: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8010BE68: beq         $t3, $zero, L_8010BF00
    if (ctx->r11 == 0) {
        // 0x8010BE6C: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_8010BF00;
    }
    // 0x8010BE6C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8010BE70: jal         0x8010BCC8
    // 0x8010BE74: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_8010BCC8(rdram, ctx);
        goto after_4;
    // 0x8010BE74: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_4:
    // 0x8010BE78: beql        $v0, $zero, L_8010BF04
    if (ctx->r2 == 0) {
        // 0x8010BE7C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8010BF04;
    }
    goto skip_3;
    // 0x8010BE7C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_3:
    // 0x8010BE80: lbu         $t4, 0x74($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X74);
    // 0x8010BE84: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8010BE88: beql        $t5, $zero, L_8010BEC0
    if (ctx->r13 == 0) {
        // 0x8010BE8C: lbu         $t8, 0x74($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X74);
            goto L_8010BEC0;
    }
    goto skip_4;
    // 0x8010BE8C: lbu         $t8, 0x74($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X74);
    skip_4:
    // 0x8010BE90: lbu         $t6, 0x74($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X74);
    // 0x8010BE94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8010BE98: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8010BE9C: bnel        $t7, $zero, L_8010BEC0
    if (ctx->r15 != 0) {
        // 0x8010BEA0: lbu         $t8, 0x74($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X74);
            goto L_8010BEC0;
    }
    goto skip_5;
    // 0x8010BEA0: lbu         $t8, 0x74($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X74);
    skip_5:
    // 0x8010BEA4: jal         0x80102F74
    // 0x8010BEA8: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    func_80102F74(rdram, ctx);
        goto after_5;
    // 0x8010BEA8: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    after_5:
    // 0x8010BEAC: beq         $v0, $zero, L_8010BEBC
    if (ctx->r2 == 0) {
        // 0x8010BEB0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8010BEBC;
    }
    // 0x8010BEB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8010BEB4: jal         0x800860D0
    // 0x8010BEB8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    _chflamer_entrypoint_1(rdram, ctx);
        goto after_6;
    // 0x8010BEB8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
L_8010BEBC:
    // 0x8010BEBC: lbu         $t8, 0x74($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X74);
L_8010BEC0:
    // 0x8010BEC0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8010BEC4: bne         $t9, $zero, L_8010BEF8
    if (ctx->r25 != 0) {
        // 0x8010BEC8: nop
    
            goto L_8010BEF8;
    }
    // 0x8010BEC8: nop

    // 0x8010BECC: lbu         $t0, 0x74($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X74);
    // 0x8010BED0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010BED4: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8010BED8: beq         $t1, $zero, L_8010BEF8
    if (ctx->r9 == 0) {
        // 0x8010BEDC: nop
    
            goto L_8010BEF8;
    }
    // 0x8010BEDC: nop

    // 0x8010BEE0: jal         0x80102F74
    // 0x8010BEE4: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    func_80102F74(rdram, ctx);
        goto after_7;
    // 0x8010BEE4: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    after_7:
    // 0x8010BEE8: beq         $v0, $zero, L_8010BEF8
    if (ctx->r2 == 0) {
        // 0x8010BEEC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8010BEF8;
    }
    // 0x8010BEEC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010BEF0: jal         0x800860D0
    // 0x8010BEF4: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    _chflamer_entrypoint_1(rdram, ctx);
        goto after_8;
    // 0x8010BEF4: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    after_8:
L_8010BEF8:
    // 0x8010BEF8: b           L_8010BF24
    // 0x8010BEFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010BF24;
    // 0x8010BEFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010BF00:
    // 0x8010BF00: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_8010BF04:
    // 0x8010BF04: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x8010BF08: bnel        $at, $zero, L_8010BE24
    if (ctx->r1 != 0) {
        // 0x8010BF0C: lw          $t7, 0x8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X8);
            goto L_8010BE24;
    }
    goto skip_6;
    // 0x8010BF0C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    skip_6:
L_8010BF10:
    // 0x8010BF10: lw          $a0, 0x4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X4);
    // 0x8010BF14: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8010BF18: bne         $a0, $zero, L_8010BE00
    if (ctx->r4 != 0) {
        // 0x8010BF1C: nop
    
            goto L_8010BE00;
    }
    // 0x8010BF1C: nop

L_8010BF20:
    // 0x8010BF20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010BF24:
    // 0x8010BF24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8010BF28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010BF2C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8010BF30: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8010BF34: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8010BF38: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8010BF3C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8010BF40: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8010BF44: jr          $ra
    // 0x8010BF48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8010BF48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8010BF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010BF4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010BF50: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8010BF54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010BF58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010BF5C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8010BF60: swc1        $f12, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f12.u32l;
    // 0x8010BF64: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8010BF68: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8010BF6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010BF70: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8010BF74: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8010BF78: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010BF7C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010BF80: jal         0x80102844
    // 0x8010BF84: nop

    func_80102844(rdram, ctx);
        goto after_0;
    // 0x8010BF84: nop

    after_0:
    // 0x8010BF88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010BF8C: jal         0x8010B990
    // 0x8010BF90: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8010B990(rdram, ctx);
        goto after_1;
    // 0x8010BF90: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8010BF94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010BF98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010BF9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010BFA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010BFA4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8010BFA8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8010BFAC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8010BFB0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8010BFB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010BFB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010BFBC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8010BFC0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010BFC4: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8010BFC8: sw          $a2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r6;
    // 0x8010BFCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8010BFD0: jal         0x800EFB24
    // 0x8010BFD4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x8010BFD4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x8010BFD8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8010BFDC: jal         0x800F1EA4
    // 0x8010BFE0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800F1EA4(rdram, ctx);
        goto after_1;
    // 0x8010BFE0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x8010BFE4: bne         $v0, $zero, L_8010C000
    if (ctx->r2 != 0) {
        // 0x8010BFE8: lw          $a2, 0x54($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X54);
            goto L_8010C000;
    }
    // 0x8010BFE8: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x8010BFEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010BFF0: jal         0x800EE7F8
    // 0x8010BFF4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8010BFF4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x8010BFF8: b           L_8010C0EC
    // 0x8010BFFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010C0EC;
    // 0x8010BFFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010C000:
    // 0x8010C000: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8010C004: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8010C008: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8010C00C: jal         0x800F1DF4
    // 0x8010C010: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    func_800F1DF4(rdram, ctx);
        goto after_3;
    // 0x8010C010: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8010C014: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8010C018: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8010C01C: jal         0x800F1DCC
    // 0x8010C020: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_4;
    // 0x8010C020: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_4:
    // 0x8010C024: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x8010C028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010C02C: jal         0x800EE7F8
    // 0x8010C030: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x8010C030: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_5:
    // 0x8010C034: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8010C038: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8010C03C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8010C040: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8010C044: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8010C048: add.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f20.fl + ctx->f6.fl;
    // 0x8010C04C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010C050: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8010C054: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8010C058: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8010C05C: jal         0x800EF1B8
    // 0x8010C060: nop

    func_800EF1B8(rdram, ctx);
        goto after_6;
    // 0x8010C060: nop

    after_6:
    // 0x8010C064: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8010C068: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8010C06C: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x8010C070: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8010C074: nop

    // 0x8010C078: bc1fl       L_8010C094
    if (!c1cs) {
        // 0x8010C07C: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_8010C094;
    }
    goto skip_0;
    // 0x8010C07C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x8010C080: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8010C084: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8010C088: b           L_8010C098
    // 0x8010C08C: nop

        goto L_8010C098;
    // 0x8010C08C: nop

    // 0x8010C090: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_8010C094:
    // 0x8010C094: nop

L_8010C098:
    // 0x8010C098: jal         0x800136E4
    // 0x8010C09C: add.s       $f12, $f20, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f0.fl;
    func_800136E4(rdram, ctx);
        goto after_7;
    // 0x8010C09C: add.s       $f12, $f20, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f0.fl;
    after_7:
    // 0x8010C0A0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8010C0A4: jal         0x800EEF94
    // 0x8010C0A8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EEF94(rdram, ctx);
        goto after_8;
    // 0x8010C0A8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_8:
    // 0x8010C0AC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8010C0B0: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8010C0B4: jal         0x800F1DCC
    // 0x8010C0B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800F1DCC(rdram, ctx);
        goto after_9;
    // 0x8010C0B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_9:
    // 0x8010C0BC: jal         0x800138D0
    // 0x8010C0C0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800138D0(rdram, ctx);
        goto after_10;
    // 0x8010C0C0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_10:
    // 0x8010C0C4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8010C0C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8010C0CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010C0D0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8010C0D4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8010C0D8: jal         0x800EF1B8
    // 0x8010C0DC: nop

    func_800EF1B8(rdram, ctx);
        goto after_11;
    // 0x8010C0DC: nop

    after_11:
    // 0x8010C0E0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8010C0E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8010C0E8: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
L_8010C0EC:
    // 0x8010C0EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8010C0F0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010C0F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8010C0F8: jr          $ra
    // 0x8010C0FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8010C0FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8010C100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C100: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8010C104: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8010C108: addiu       $s5, $sp, 0x64
    ctx->r21 = ADD32(ctx->r29, 0X64);
    // 0x8010C10C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8010C110: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8010C114: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8010C118: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8010C11C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8010C120: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8010C124: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8010C128: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8010C12C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8010C130: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010C134: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8010C138: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x8010C13C: jal         0x80103F38
    // 0x8010C140: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80103F38(rdram, ctx);
        goto after_0;
    // 0x8010C140: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_0:
    // 0x8010C144: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x8010C148: jal         0x8010A40C
    // 0x8010C14C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8010A40C(rdram, ctx);
        goto after_1;
    // 0x8010C14C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x8010C150: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010C154: lwc1        $f4, 0x6520($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6520);
    // 0x8010C158: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8010C15C: addiu       $a0, $s4, 0x4
    ctx->r4 = ADD32(ctx->r20, 0X4);
    // 0x8010C160: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8010C164: nop

    // 0x8010C168: mul.s       $f20, $f0, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8010C16C: jal         0x800BE3F8
    // 0x8010C170: nop

    func_800BE3F8(rdram, ctx);
        goto after_2;
    // 0x8010C170: nop

    after_2:
    // 0x8010C174: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8010C178: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8010C17C: beq         $t6, $zero, L_8010C2A8
    if (ctx->r14 == 0) {
        // 0x8010C180: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_8010C2A8;
    }
    // 0x8010C180: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_8010C184:
    // 0x8010C184: jal         0x800E9E88
    // 0x8010C188: nop

    func_800E9E88(rdram, ctx);
        goto after_3;
    // 0x8010C188: nop

    after_3:
    // 0x8010C18C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010C190: jal         0x800E9EB4
    // 0x8010C194: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    func_800E9EB4(rdram, ctx);
        goto after_4;
    // 0x8010C194: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    after_4:
    // 0x8010C198: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8010C19C: beq         $at, $zero, L_8010C298
    if (ctx->r1 == 0) {
        // 0x8010C1A0: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_8010C298;
    }
    // 0x8010C1A0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8010C1A4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_8010C1A8:
    // 0x8010C1A8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8010C1AC: beql        $t8, $zero, L_8010C28C
    if (ctx->r24 == 0) {
        // 0x8010C1B0: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8010C28C;
    }
    goto skip_0;
    // 0x8010C1B0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x8010C1B4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8010C1B8: lhu         $t9, 0x18($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X18);
    // 0x8010C1BC: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8010C1C0: beql        $t0, $zero, L_8010C28C
    if (ctx->r8 == 0) {
        // 0x8010C1C4: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8010C28C;
    }
    goto skip_1;
    // 0x8010C1C4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_1:
    // 0x8010C1C8: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8010C1CC: beql        $s1, $t1, L_8010C28C
    if (ctx->r17 == ctx->r9) {
        // 0x8010C1D0: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8010C28C;
    }
    goto skip_2;
    // 0x8010C1D0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_2:
    // 0x8010C1D4: jal         0x80106790
    // 0x8010C1D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80106790(rdram, ctx);
        goto after_5;
    // 0x8010C1D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8010C1DC: lhu         $t2, 0x70($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X70);
    // 0x8010C1E0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8010C1E4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8010C1E8: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8010C1EC: beq         $t3, $zero, L_8010C288
    if (ctx->r11 == 0) {
        // 0x8010C1F0: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_8010C288;
    }
    // 0x8010C1F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8010C1F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8010C1F8: jal         0x8010C2D8
    // 0x8010C1FC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8010C2D8(rdram, ctx);
        goto after_6;
    // 0x8010C1FC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_6:
    // 0x8010C200: beql        $v0, $zero, L_8010C28C
    if (ctx->r2 == 0) {
        // 0x8010C204: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8010C28C;
    }
    goto skip_3;
    // 0x8010C204: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_3:
    // 0x8010C208: lbu         $t4, 0x74($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X74);
    // 0x8010C20C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8010C210: beql        $t5, $zero, L_8010C248
    if (ctx->r13 == 0) {
        // 0x8010C214: lbu         $t8, 0x74($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X74);
            goto L_8010C248;
    }
    goto skip_4;
    // 0x8010C214: lbu         $t8, 0x74($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X74);
    skip_4:
    // 0x8010C218: lbu         $t6, 0x74($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X74);
    // 0x8010C21C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8010C220: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8010C224: bnel        $t7, $zero, L_8010C248
    if (ctx->r15 != 0) {
        // 0x8010C228: lbu         $t8, 0x74($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X74);
            goto L_8010C248;
    }
    goto skip_5;
    // 0x8010C228: lbu         $t8, 0x74($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X74);
    skip_5:
    // 0x8010C22C: jal         0x80102F74
    // 0x8010C230: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    func_80102F74(rdram, ctx);
        goto after_7;
    // 0x8010C230: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    after_7:
    // 0x8010C234: beq         $v0, $zero, L_8010C244
    if (ctx->r2 == 0) {
        // 0x8010C238: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_8010C244;
    }
    // 0x8010C238: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8010C23C: jal         0x800860D0
    // 0x8010C240: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    _chflamer_entrypoint_1(rdram, ctx);
        goto after_8;
    // 0x8010C240: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
L_8010C244:
    // 0x8010C244: lbu         $t8, 0x74($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X74);
L_8010C248:
    // 0x8010C248: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8010C24C: bne         $t9, $zero, L_8010C280
    if (ctx->r25 != 0) {
        // 0x8010C250: nop
    
            goto L_8010C280;
    }
    // 0x8010C250: nop

    // 0x8010C254: lbu         $t0, 0x74($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X74);
    // 0x8010C258: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010C25C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8010C260: beq         $t1, $zero, L_8010C280
    if (ctx->r9 == 0) {
        // 0x8010C264: nop
    
            goto L_8010C280;
    }
    // 0x8010C264: nop

    // 0x8010C268: jal         0x80102F74
    // 0x8010C26C: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    func_80102F74(rdram, ctx);
        goto after_9;
    // 0x8010C26C: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    after_9:
    // 0x8010C270: beq         $v0, $zero, L_8010C280
    if (ctx->r2 == 0) {
        // 0x8010C274: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8010C280;
    }
    // 0x8010C274: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010C278: jal         0x800860D0
    // 0x8010C27C: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    _chflamer_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x8010C27C: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    after_10:
L_8010C280:
    // 0x8010C280: b           L_8010C2AC
    // 0x8010C284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010C2AC;
    // 0x8010C284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010C288:
    // 0x8010C288: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_8010C28C:
    // 0x8010C28C: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8010C290: bnel        $at, $zero, L_8010C1A8
    if (ctx->r1 != 0) {
        // 0x8010C294: lw          $t7, 0x8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X8);
            goto L_8010C1A8;
    }
    goto skip_6;
    // 0x8010C294: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    skip_6:
L_8010C298:
    // 0x8010C298: lw          $a0, 0x4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X4);
    // 0x8010C29C: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8010C2A0: bne         $a0, $zero, L_8010C184
    if (ctx->r4 != 0) {
        // 0x8010C2A4: nop
    
            goto L_8010C184;
    }
    // 0x8010C2A4: nop

L_8010C2A8:
    // 0x8010C2A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010C2AC:
    // 0x8010C2AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8010C2B0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010C2B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8010C2B8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8010C2BC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8010C2C0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8010C2C4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8010C2C8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8010C2CC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8010C2D0: jr          $ra
    // 0x8010C2D4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8010C2D4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8010C2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C2D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8010C2DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C2E0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8010C2E4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8010C2E8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8010C2EC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8010C2F0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8010C2F4: jal         0x80103F38
    // 0x8010C2F8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80103F38(rdram, ctx);
        goto after_0;
    // 0x8010C2F8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8010C2FC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8010C300: jal         0x8010A40C
    // 0x8010C304: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_8010A40C(rdram, ctx);
        goto after_1;
    // 0x8010C304: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_1:
    // 0x8010C308: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010C30C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8010C310: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8010C314: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8010C318: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x8010C31C: jal         0x800EFB24
    // 0x8010C320: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x8010C320: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8010C324: jal         0x800EEFD4
    // 0x8010C328: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_800EEFD4(rdram, ctx);
        goto after_3;
    // 0x8010C328: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x8010C32C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8010C330: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8010C334: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8010C338: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010C33C: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8010C340: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8010C344: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8010C348: nop

    // 0x8010C34C: bc1f        L_8010C398
    if (!c1cs) {
        // 0x8010C350: nop
    
            goto L_8010C398;
    }
    // 0x8010C350: nop

    // 0x8010C354: jal         0x8002DCA0
    // 0x8010C358: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    sqrtf_recomp(rdram, ctx);
        goto after_4;
    // 0x8010C358: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x8010C35C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8010C360: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8010C364: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8010C368: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8010C36C: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x8010C370: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8010C374: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8010C378: jal         0x800EF368
    // 0x8010C37C: nop

    func_800EF368(rdram, ctx);
        goto after_5;
    // 0x8010C37C: nop

    after_5:
    // 0x8010C380: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8010C384: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8010C388: jal         0x800EF04C
    // 0x8010C38C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EF04C(rdram, ctx);
        goto after_6;
    // 0x8010C38C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_6:
    // 0x8010C390: b           L_8010C398
    // 0x8010C394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010C398;
    // 0x8010C394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010C398:
    // 0x8010C398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C39C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8010C3A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C3A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010C3AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C3B0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8010C3B4: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8010C3B8: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x8010C3BC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8010C3C0: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x8010C3C4: jal         0x8010B990
    // 0x8010C3C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8010B990(rdram, ctx);
        goto after_0;
    // 0x8010C3C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010C3CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8010C3D0: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8010C3D4: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x8010C3D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C3DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010C3E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C3E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C3EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C3F0: jal         0x800BECCC
    // 0x8010C3F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800BECCC(rdram, ctx);
        goto after_0;
    // 0x8010C3F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010C3F8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8010C3FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010C400: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010C404: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x8010C408: sub.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8010C40C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8010C410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8010C414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010C418: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8010C41C: nop

    // 0x8010C420: bc1f        L_8010C450
    if (!c1cs) {
        // 0x8010C424: nop
    
            goto L_8010C450;
    }
    // 0x8010C424: nop

    // 0x8010C428: jal         0x8010108C
    // 0x8010C42C: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    func_8010108C(rdram, ctx);
        goto after_1;
    // 0x8010C42C: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    after_1:
    // 0x8010C430: blez        $v0, L_8010C440
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8010C434: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8010C440;
    }
    // 0x8010C434: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010C438: b           L_8010C450
    // 0x8010C43C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010C450;
    // 0x8010C43C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010C440:
    // 0x8010C440: jal         0x800FFAB0
    // 0x8010C444: nop

    func_800FFAB0(rdram, ctx);
        goto after_2;
    // 0x8010C444: nop

    after_2:
    // 0x8010C448: b           L_8010C450
    // 0x8010C44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010C450;
    // 0x8010C44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010C450:
    // 0x8010C450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C458: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C468: jal         0x80103F38
    // 0x8010C46C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80103F38(rdram, ctx);
        goto after_0;
    // 0x8010C46C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8010C470: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8010C474: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8010C478: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010C47C: lwc1        $f4, 0x6524($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6524);
    // 0x8010C480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C484: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8010C488: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8010C48C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x8010C490: bc1fl       L_8010C4A4
    if (!c1cs) {
        // 0x8010C494: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_8010C4A4;
    }
    goto skip_0;
    // 0x8010C494: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_0:
    // 0x8010C498: b           L_8010C4A4
    // 0x8010C49C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_8010C4A4;
    // 0x8010C49C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8010C4A0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8010C4A4:
    // 0x8010C4A4: jr          $ra
    // 0x8010C4A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8010C4A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8010C4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C4AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C4B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C4B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010C4B8: jal         0x800D3E40
    // 0x8010C4BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800D3E40(rdram, ctx);
        goto after_0;
    // 0x8010C4BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x8010C4C0: beq         $v0, $zero, L_8010C4E0
    if (ctx->r2 == 0) {
        // 0x8010C4C4: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_8010C4E0;
    }
    // 0x8010C4C4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8010C4C8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8010C4CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8010C4D0: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8010C4D4: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8010C4D8: b           L_8010C4E8
    // 0x8010C4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010C4E8;
    // 0x8010C4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010C4E0:
    // 0x8010C4E0: lwc1        $f0, 0x24($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8010C4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010C4E8:
    // 0x8010C4E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C4EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C508: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x8010C50C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010C510: addiu       $a0, $a0, 0x6F50
    ctx->r4 = ADD32(ctx->r4, 0X6F50);
    // 0x8010C514: srl         $v1, $v0, 25
    ctx->r3 = S32(U32(ctx->r2) >> 25);
    // 0x8010C518: bne         $v1, $zero, L_8010C528
    if (ctx->r3 != 0) {
        // 0x8010C51C: addiu       $a1, $v1, -0x1
        ctx->r5 = ADD32(ctx->r3, -0X1);
            goto L_8010C528;
    }
    // 0x8010C51C: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x8010C520: b           L_8010C540
    // 0x8010C524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010C540;
    // 0x8010C524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010C528:
    // 0x8010C528: sll         $a2, $v0, 22
    ctx->r6 = S32(ctx->r2 << 22);
    // 0x8010C52C: srl         $t6, $a2, 26
    ctx->r14 = S32(U32(ctx->r6) >> 26);
    // 0x8010C530: jal         0x800CC338
    // 0x8010C534: addiu       $a2, $t6, -0x1
    ctx->r6 = ADD32(ctx->r14, -0X1);
    func_800CC338(rdram, ctx);
        goto after_0;
    // 0x8010C534: addiu       $a2, $t6, -0x1
    ctx->r6 = ADD32(ctx->r14, -0X1);
    after_0:
    // 0x8010C538: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8010C53C: sltu        $v0, $zero, $t7
    ctx->r2 = 0 < ctx->r15 ? 1 : 0;
L_8010C540:
    // 0x8010C540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C548: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C550: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010C554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C558: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x8010C55C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8010C560: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8010C564: srl         $t7, $t6, 25
    ctx->r15 = S32(U32(ctx->r14) >> 25);
    // 0x8010C568: bne         $t7, $zero, L_8010C578
    if (ctx->r15 != 0) {
        // 0x8010C56C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8010C578;
    }
    // 0x8010C56C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8010C570: b           L_8010C5B0
    // 0x8010C574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010C5B0;
    // 0x8010C574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010C578:
    // 0x8010C578: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8010C57C: jal         0x800F5A00
    // 0x8010C580: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_800F5A00(rdram, ctx);
        goto after_0;
    // 0x8010C580: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010C584: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8010C588: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8010C58C: lw          $v0, 0x70($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X70);
    // 0x8010C590: sll         $a2, $v0, 22
    ctx->r6 = S32(ctx->r2 << 22);
    // 0x8010C594: srl         $t8, $a2, 26
    ctx->r24 = S32(U32(ctx->r6) >> 26);
    // 0x8010C598: srl         $a1, $v0, 25
    ctx->r5 = S32(U32(ctx->r2) >> 25);
    // 0x8010C59C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8010C5A0: jal         0x800CC338
    // 0x8010C5A4: addiu       $a2, $t8, -0x1
    ctx->r6 = ADD32(ctx->r24, -0X1);
    func_800CC338(rdram, ctx);
        goto after_1;
    // 0x8010C5A4: addiu       $a2, $t8, -0x1
    ctx->r6 = ADD32(ctx->r24, -0X1);
    after_1:
    // 0x8010C5A8: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8010C5AC: sltu        $v0, $zero, $t9
    ctx->r2 = 0 < ctx->r25 ? 1 : 0;
L_8010C5B0:
    // 0x8010C5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C5B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8010C5B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C5C8: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x8010C5CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8010C5D0: srl         $a3, $v1, 25
    ctx->r7 = S32(U32(ctx->r3) >> 25);
    // 0x8010C5D4: bnel        $a3, $zero, L_8010C5E8
    if (ctx->r7 != 0) {
        // 0x8010C5D8: lwc1        $f2, 0x8($a0)
        ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
            goto L_8010C5E8;
    }
    goto skip_0;
    // 0x8010C5D8: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    skip_0:
    // 0x8010C5DC: b           L_8010C658
    // 0x8010C5E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010C658;
    // 0x8010C5E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8010C5E4: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
L_8010C5E8:
    // 0x8010C5E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010C5EC: lwc1        $f0, 0x6F54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F54);
    // 0x8010C5F0: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8010C5F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010C5F8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8010C5FC: nop

    // 0x8010C600: bc1f        L_8010C60C
    if (!c1cs) {
        // 0x8010C604: nop
    
            goto L_8010C60C;
    }
    // 0x8010C604: nop

    // 0x8010C608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010C60C:
    // 0x8010C60C: beql        $v0, $zero, L_8010C65C
    if (ctx->r2 == 0) {
        // 0x8010C610: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010C65C;
    }
    goto skip_1;
    // 0x8010C610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8010C614: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8010C618: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010C61C: sll         $a2, $v1, 22
    ctx->r6 = S32(ctx->r3 << 22);
    // 0x8010C620: srl         $t6, $a2, 26
    ctx->r14 = S32(U32(ctx->r6) >> 26);
    // 0x8010C624: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8010C628: addiu       $a0, $a0, 0x6F50
    ctx->r4 = ADD32(ctx->r4, 0X6F50);
    // 0x8010C62C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010C630: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8010C634: bc1f        L_8010C640
    if (!c1cs) {
        // 0x8010C638: nop
    
            goto L_8010C640;
    }
    // 0x8010C638: nop

    // 0x8010C63C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010C640:
    // 0x8010C640: beql        $v0, $zero, L_8010C65C
    if (ctx->r2 == 0) {
        // 0x8010C644: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010C65C;
    }
    goto skip_2;
    // 0x8010C644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8010C648: jal         0x800CC338
    // 0x8010C64C: addiu       $a2, $t6, -0x1
    ctx->r6 = ADD32(ctx->r14, -0X1);
    func_800CC338(rdram, ctx);
        goto after_0;
    // 0x8010C64C: addiu       $a2, $t6, -0x1
    ctx->r6 = ADD32(ctx->r14, -0X1);
    after_0:
    // 0x8010C650: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8010C654: sltu        $v0, $zero, $t7
    ctx->r2 = 0 < ctx->r15 ? 1 : 0;
L_8010C658:
    // 0x8010C658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010C65C:
    // 0x8010C65C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C660: jr          $ra
    // 0x8010C664: nop

    return;
    // 0x8010C664: nop

;}
RECOMP_FUNC void func_8010C668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C66C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C670: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x8010C674: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8010C678: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8010C67C: srl         $a3, $v1, 25
    ctx->r7 = S32(U32(ctx->r3) >> 25);
    // 0x8010C680: bnel        $a3, $zero, L_8010C694
    if (ctx->r7 != 0) {
        // 0x8010C684: lwc1        $f2, 0x4($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
            goto L_8010C694;
    }
    goto skip_0;
    // 0x8010C684: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x8010C688: b           L_8010C700
    // 0x8010C68C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010C700;
    // 0x8010C68C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8010C690: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
L_8010C694:
    // 0x8010C694: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010C698: addiu       $a0, $a0, 0x6F50
    ctx->r4 = ADD32(ctx->r4, 0X6F50);
    // 0x8010C69C: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8010C6A0: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8010C6A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010C6A8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8010C6AC: nop

    // 0x8010C6B0: bc1f        L_8010C6BC
    if (!c1cs) {
        // 0x8010C6B4: nop
    
            goto L_8010C6BC;
    }
    // 0x8010C6B4: nop

    // 0x8010C6B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010C6BC:
    // 0x8010C6BC: beql        $v0, $zero, L_8010C704
    if (ctx->r2 == 0) {
        // 0x8010C6C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010C704;
    }
    goto skip_1;
    // 0x8010C6C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8010C6C4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8010C6C8: sll         $a2, $v1, 22
    ctx->r6 = S32(ctx->r3 << 22);
    // 0x8010C6CC: srl         $t6, $a2, 26
    ctx->r14 = S32(U32(ctx->r6) >> 26);
    // 0x8010C6D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010C6D4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8010C6D8: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x8010C6DC: bc1f        L_8010C6E8
    if (!c1cs) {
        // 0x8010C6E0: nop
    
            goto L_8010C6E8;
    }
    // 0x8010C6E0: nop

    // 0x8010C6E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010C6E8:
    // 0x8010C6E8: beql        $v0, $zero, L_8010C704
    if (ctx->r2 == 0) {
        // 0x8010C6EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010C704;
    }
    goto skip_2;
    // 0x8010C6EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8010C6F0: jal         0x800CC338
    // 0x8010C6F4: addiu       $a2, $t6, -0x1
    ctx->r6 = ADD32(ctx->r14, -0X1);
    func_800CC338(rdram, ctx);
        goto after_0;
    // 0x8010C6F4: addiu       $a2, $t6, -0x1
    ctx->r6 = ADD32(ctx->r14, -0X1);
    after_0:
    // 0x8010C6F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8010C6FC: sltu        $v0, $zero, $t7
    ctx->r2 = 0 < ctx->r15 ? 1 : 0;
L_8010C700:
    // 0x8010C700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010C704:
    // 0x8010C704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C708: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C710: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010C714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C718: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8010C71C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010C720: addiu       $a2, $a2, 0x6F50
    ctx->r6 = ADD32(ctx->r6, 0X6F50);
    // 0x8010C724: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x8010C728: jal         0x800EFB24
    // 0x8010C72C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x8010C72C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8010C730: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8010C734: jal         0x800EEAA4
    // 0x8010C738: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_1;
    // 0x8010C738: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x8010C73C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8010C740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8010C748: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8010C74C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C75C: jal         0x8010C710
    // 0x8010C760: nop

    func_8010C710(rdram, ctx);
        goto after_0;
    // 0x8010C760: nop

    after_0:
    // 0x8010C764: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8010C768: jal         0x8002DCA0
    // 0x8010C76C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x8010C76C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x8010C770: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8010C774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C77C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8010C780: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C788: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010C78C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010C790: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8010C794: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8010C798: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8010C79C: jal         0x800F54E4
    // 0x8010C7A0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8010C7A0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010C7A4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8010C7A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8010C7AC: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010C7B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8010C7B4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8010C7B8: jal         0x800F8B88
    // 0x8010C7BC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_800F8B88(rdram, ctx);
        goto after_1;
    // 0x8010C7BC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8010C7C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8010C7C4: bnel        $v0, $at, L_8010C7F8
    if (ctx->r2 != ctx->r1) {
        // 0x8010C7C8: lwc1        $f16, 0x34($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
            goto L_8010C7F8;
    }
    goto skip_0;
    // 0x8010C7C8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x8010C7CC: jal         0x800878A0
    // 0x8010C7D0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x8010C7D0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x8010C7D4: bltz        $v0, L_8010C7F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8010C7D8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8010C7F4;
    }
    // 0x8010C7D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010C7DC: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010C7E0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8010C7E4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8010C7E8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8010C7EC: jal         0x800F4EC8
    // 0x8010C7F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F4EC8(rdram, ctx);
        goto after_3;
    // 0x8010C7F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
L_8010C7F4:
    // 0x8010C7F4: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
L_8010C7F8:
    // 0x8010C7F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8010C7FC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8010C800: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8010C804: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8010C808: jal         0x800F4EC8
    // 0x8010C80C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F4EC8(rdram, ctx);
        goto after_4;
    // 0x8010C80C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x8010C810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010C814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8010C818: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C824: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010C828: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8010C82C: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x8010C830: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8010C834: addiu       $t8, $t7, 0x1E
    ctx->r24 = ADD32(ctx->r15, 0X1E);
    // 0x8010C838: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8010C83C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010C840: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010C844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010C84C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8010C850: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8010C854: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010C858: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8010C85C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8010C860: jal         0x8010C788
    // 0x8010C864: nop

    func_8010C788(rdram, ctx);
        goto after_0;
    // 0x8010C864: nop

    after_0:
    // 0x8010C868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C86C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C870: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C87C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010C884: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010C888: lh          $t6, 0x8A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8A);
    // 0x8010C88C: lh          $t7, 0x88($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X88);
    // 0x8010C890: lwc1        $f0, 0x38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8010C894: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8010C898: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8010C89C: lhu         $v0, 0x62($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X62);
    // 0x8010C8A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010C8A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8010C8A8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8010C8AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8010C8B0: mul.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8010C8B4: nop

    // 0x8010C8B8: mul.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8010C8BC: bgez        $v0, L_8010C8D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8010C8C0: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8010C8D0;
    }
    // 0x8010C8C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8010C8C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010C8C8: nop

    // 0x8010C8CC: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8010C8D0:
    // 0x8010C8D0: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8010C8D4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8010C8D8: mul.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8010C8DC: beql        $v0, $zero, L_8010C8FC
    if (ctx->r2 == 0) {
        // 0x8010C8E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010C8FC;
    }
    goto skip_0;
    // 0x8010C8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8010C8E4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8010C8E8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8010C8EC: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8010C8F0: jal         0x8010C788
    // 0x8010C8F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8010C788(rdram, ctx);
        goto after_0;
    // 0x8010C8F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x8010C8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010C8FC:
    // 0x8010C8FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C900: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C90C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C910: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010C914: jal         0x8010A40C
    // 0x8010C918: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8010A40C(rdram, ctx);
        goto after_0;
    // 0x8010C918: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8010C91C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8010C920: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010C924: jal         0x8010C878
    // 0x8010C928: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8010C878(rdram, ctx);
        goto after_1;
    // 0x8010C928: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8010C92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C934: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C93C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C93C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8010C940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C948: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8010C94C: jal         0x8010C878
    // 0x8010C950: nop

    func_8010C878(rdram, ctx);
        goto after_0;
    // 0x8010C950: nop

    after_0:
    // 0x8010C954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C95C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C964: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8010C968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C96C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8010C970: jal         0x80103F38
    // 0x8010C974: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80103F38(rdram, ctx);
        goto after_0;
    // 0x8010C974: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x8010C978: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8010C97C: jal         0x8010A40C
    // 0x8010C980: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8010A40C(rdram, ctx);
        goto after_1;
    // 0x8010C980: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x8010C984: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010C988: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8010C98C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8010C990: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8010C994: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8010C998: jal         0x8008FB58
    // 0x8010C99C: nop

    func_8008FB58(rdram, ctx);
        goto after_2;
    // 0x8010C99C: nop

    after_2:
    // 0x8010C9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C9A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8010C9A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C9B0: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010C9B4: addiu       $a2, $a2, 0x6F50
    ctx->r6 = ADD32(ctx->r6, 0X6F50);
    // 0x8010C9B8: lh          $t6, 0xE($a2)
    ctx->r14 = MEM_H(ctx->r6, 0XE);
    // 0x8010C9BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010C9C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010C9C4: bne         $t6, $zero, L_8010C9D4
    if (ctx->r14 != 0) {
        // 0x8010C9C8: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8010C9D4;
    }
    // 0x8010C9C8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8010C9CC: b           L_8010C9EC
    // 0x8010C9D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010C9EC;
    // 0x8010C9D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010C9D4:
    // 0x8010C9D4: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x8010C9D8: nop

    // 0x8010C9DC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010C9E0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010C9E4: jal         0x800EFFB4
    // 0x8010C9E8: nop

    func_800EFFB4(rdram, ctx);
        goto after_0;
    // 0x8010C9E8: nop

    after_0:
L_8010C9EC:
    // 0x8010C9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010C9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010C9F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010C9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010C9FC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010CA00: addiu       $v0, $v0, 0x6F50
    ctx->r2 = ADD32(ctx->r2, 0X6F50);
    // 0x8010CA04: lh          $t6, 0xE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE);
    // 0x8010CA08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010CA0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010CA10: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010CA14: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8010CA18: bne         $t6, $zero, L_8010CA28
    if (ctx->r14 != 0) {
        // 0x8010CA1C: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_8010CA28;
    }
    // 0x8010CA1C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8010CA20: b           L_8010CA64
    // 0x8010CA24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010CA64;
    // 0x8010CA24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010CA28:
    // 0x8010CA28: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8010CA2C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8010CA30: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8010CA34: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8010CA38: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8010CA3C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8010CA40: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010CA44: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8010CA48: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8010CA4C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010CA50: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8010CA54: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8010CA58: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8010CA5C: jal         0x800F00A4
    // 0x8010CA60: nop

    func_800F00A4(rdram, ctx);
        goto after_0;
    // 0x8010CA60: nop

    after_0:
L_8010CA64:
    // 0x8010CA64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010CA68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010CA6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CA74: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010CA78: addiu       $a2, $a2, 0x6F50
    ctx->r6 = ADD32(ctx->r6, 0X6F50);
    // 0x8010CA7C: lh          $t6, 0xE($a2)
    ctx->r14 = MEM_H(ctx->r6, 0XE);
    // 0x8010CA80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010CA84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CA88: bne         $t6, $zero, L_8010CA98
    if (ctx->r14 != 0) {
        // 0x8010CA8C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8010CA98;
    }
    // 0x8010CA8C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8010CA90: b           L_8010CAB0
    // 0x8010CA94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010CAB0;
    // 0x8010CA94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010CA98:
    // 0x8010CA98: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x8010CA9C: nop

    // 0x8010CAA0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010CAA4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010CAA8: jal         0x800F0064
    // 0x8010CAAC: nop

    func_800F0064(rdram, ctx);
        goto after_0;
    // 0x8010CAAC: nop

    after_0:
L_8010CAB0:
    // 0x8010CAB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CAB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010CAB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CAC0: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010CAC4: addiu       $a2, $a2, 0x6F50
    ctx->r6 = ADD32(ctx->r6, 0X6F50);
    // 0x8010CAC8: lh          $t6, 0xC($a2)
    ctx->r14 = MEM_H(ctx->r6, 0XC);
    // 0x8010CACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010CAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CAD4: bne         $t6, $zero, L_8010CAE4
    if (ctx->r14 != 0) {
        // 0x8010CAD8: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8010CAE4;
    }
    // 0x8010CAD8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8010CADC: b           L_8010CAFC
    // 0x8010CAE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010CAFC;
    // 0x8010CAE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010CAE4:
    // 0x8010CAE4: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x8010CAE8: nop

    // 0x8010CAEC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010CAF0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010CAF4: jal         0x800EFFB4
    // 0x8010CAF8: nop

    func_800EFFB4(rdram, ctx);
        goto after_0;
    // 0x8010CAF8: nop

    after_0:
L_8010CAFC:
    // 0x8010CAFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010CB04: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CB0C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010CB10: addiu       $v0, $v0, 0x6F50
    ctx->r2 = ADD32(ctx->r2, 0X6F50);
    // 0x8010CB14: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x8010CB18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010CB1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010CB20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010CB24: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8010CB28: bne         $t6, $zero, L_8010CB38
    if (ctx->r14 != 0) {
        // 0x8010CB2C: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_8010CB38;
    }
    // 0x8010CB2C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8010CB30: b           L_8010CB74
    // 0x8010CB34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010CB74;
    // 0x8010CB34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010CB38:
    // 0x8010CB38: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8010CB3C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8010CB40: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8010CB44: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8010CB48: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8010CB4C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8010CB50: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010CB54: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8010CB58: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8010CB5C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010CB60: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8010CB64: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8010CB68: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8010CB6C: jal         0x800F00A4
    // 0x8010CB70: nop

    func_800F00A4(rdram, ctx);
        goto after_0;
    // 0x8010CB70: nop

    after_0:
L_8010CB74:
    // 0x8010CB74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010CB78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010CB7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CB84: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010CB88: addiu       $a2, $a2, 0x6F50
    ctx->r6 = ADD32(ctx->r6, 0X6F50);
    // 0x8010CB8C: lh          $t6, 0xC($a2)
    ctx->r14 = MEM_H(ctx->r6, 0XC);
    // 0x8010CB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010CB94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CB98: bne         $t6, $zero, L_8010CBA8
    if (ctx->r14 != 0) {
        // 0x8010CB9C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8010CBA8;
    }
    // 0x8010CB9C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8010CBA0: b           L_8010CBC0
    // 0x8010CBA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010CBC0;
    // 0x8010CBA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010CBA8:
    // 0x8010CBA8: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x8010CBAC: nop

    // 0x8010CBB0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010CBB4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010CBB8: jal         0x800F0064
    // 0x8010CBBC: nop

    func_800F0064(rdram, ctx);
        goto after_0;
    // 0x8010CBBC: nop

    after_0:
L_8010CBC0:
    // 0x8010CBC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CBC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010CBC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CBD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010CBD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CBD8: jal         0x800F5A00
    // 0x8010CBDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F5A00(rdram, ctx);
        goto after_0;
    // 0x8010CBDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8010CBE0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8010CBE4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8010CBE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8010CBEC: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8010CBF0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8010CBF4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8010CBF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8010CBFC: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x8010CC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010CC08: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CC10: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8010CC14: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8010CC18: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x8010CC1C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8010CC20: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x8010CC24: addiu       $s1, $s1, 0x6F68
    ctx->r17 = ADD32(ctx->r17, 0X6F68);
    // 0x8010CC28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8010CC2C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8010CC30: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8010CC34: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8010CC38: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8010CC3C: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
    // 0x8010CC40: sw          $zero, 0x24($s1)
    MEM_W(0X24, ctx->r17) = 0;
    // 0x8010CC44: jal         0x800F5898
    // 0x8010CC48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_800F5898(rdram, ctx);
        goto after_0;
    // 0x8010CC48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x8010CC4C: blez        $v0, L_8010CCBC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8010CC50: addiu       $s2, $sp, 0x34
        ctx->r18 = ADD32(ctx->r29, 0X34);
            goto L_8010CCBC;
    }
    // 0x8010CC50: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
L_8010CC54:
    // 0x8010CC54: jal         0x800F6438
    // 0x8010CC58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6438(rdram, ctx);
        goto after_1;
    // 0x8010CC58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8010CC5C: beq         $v0, $zero, L_8010CCA8
    if (ctx->r2 == 0) {
        // 0x8010CC60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010CCA8;
    }
    // 0x8010CC60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010CC64: jal         0x8010CBD0
    // 0x8010CC68: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8010CBD0(rdram, ctx);
        goto after_2;
    // 0x8010CC68: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8010CC6C: add.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8010CC70: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8010CC74: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8010CC78: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010CC7C: jal         0x800EFFB4
    // 0x8010CC80: nop

    func_800EFFB4(rdram, ctx);
        goto after_3;
    // 0x8010CC80: nop

    after_3:
    // 0x8010CC84: beq         $v0, $zero, L_8010CCA8
    if (ctx->r2 == 0) {
        // 0x8010CC88: nop
    
            goto L_8010CCA8;
    }
    // 0x8010CC88: nop

    // 0x8010CC8C: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x8010CC90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8010CC94: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x8010CC98: sw          $s0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r16;
    // 0x8010CC9C: lw          $t9, 0x20($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X20);
    // 0x8010CCA0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8010CCA4: sw          $t0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r8;
L_8010CCA8:
    // 0x8010CCA8: jal         0x800F5898
    // 0x8010CCAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800F5898(rdram, ctx);
        goto after_4;
    // 0x8010CCAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_4:
    // 0x8010CCB0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8010CCB4: bne         $at, $zero, L_8010CC54
    if (ctx->r1 != 0) {
        // 0x8010CCB8: nop
    
            goto L_8010CC54;
    }
    // 0x8010CCB8: nop

L_8010CCBC:
    // 0x8010CCBC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8010CCC0: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x8010CCC4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8010CCC8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8010CCCC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8010CCD0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8010CCD4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8010CCD8: jr          $ra
    // 0x8010CCDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8010CCDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8010CCE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CCE0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010CCE4: jr          $ra
    // 0x8010CCE8: sw          $zero, 0x6F8C($at)
    MEM_W(0X6F8C, ctx->r1) = 0;
    return;
    // 0x8010CCE8: sw          $zero, 0x6F8C($at)
    MEM_W(0X6F8C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8010CCEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CCEC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010CCF0: addiu       $a1, $a1, 0x6F68
    ctx->r5 = ADD32(ctx->r5, 0X6F68);
    // 0x8010CCF4: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x8010CCF8: lw          $t6, 0x20($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X20);
    // 0x8010CCFC: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8010CD00: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8010CD04: bne         $at, $zero, L_8010CD14
    if (ctx->r1 != 0) {
            // 0x8010CD08: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    func_8010CD14(rdram, ctx);
    return;
    }
    // 0x8010CD08: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x8010CD0C: jr          $ra
    // 0x8010CD10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8010CD10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_8010CD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CD14: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x8010CD18: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x8010CD1C: sw          $t9, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r25;
    // 0x8010CD20: jr          $ra
    // 0x8010CD24: nop

    return;
    // 0x8010CD24: nop

;}
RECOMP_FUNC void func_8010CD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CD28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010CD2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CD30: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010CD34: addiu       $a1, $a1, 0x6F50
    ctx->r5 = ADD32(ctx->r5, 0X6F50);
    // 0x8010CD38: jal         0x800F1DF4
    // 0x8010CD3C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800F1DF4(rdram, ctx);
        goto after_0;
    // 0x8010CD3C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x8010CD40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CD44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010CD48: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CD50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010CD54: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8010CD58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CD5C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8010CD60: jal         0x800F5A00
    // 0x8010CD64: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800F5A00(rdram, ctx);
        goto after_0;
    // 0x8010CD64: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8010CD68: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8010CD6C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8010CD70: jal         0x800F1DF4
    // 0x8010CD74: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800F1DF4(rdram, ctx);
        goto after_1;
    // 0x8010CD74: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x8010CD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CD7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8010CD80: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CD88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010CD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CD90: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8010CD94: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8010CD98: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8010CD9C: jal         0x8010CE28
    // 0x8010CDA0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8010CE28(rdram, ctx);
        goto after_0;
    // 0x8010CDA0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8010CDA4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8010CDA8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8010CDAC: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x8010CDB0: jal         0x80013728
    // 0x8010CDB4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_80013728(rdram, ctx);
        goto after_1;
    // 0x8010CDB4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_1:
    // 0x8010CDB8: jal         0x800F2100
    // 0x8010CDBC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_2;
    // 0x8010CDBC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x8010CDC0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8010CDC4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8010CDC8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8010CDCC: lwc1        $f8, 0x48($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X48);
    // 0x8010CDD0: jal         0x80013728
    // 0x8010CDD4: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    func_80013728(rdram, ctx);
        goto after_3;
    // 0x8010CDD4: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    after_3:
    // 0x8010CDD8: jal         0x800F2100
    // 0x8010CDDC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x8010CDDC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_4:
    // 0x8010CDE0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8010CDE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010CDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CDEC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8010CDF0: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8010CDF4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8010CDF8: bc1f        L_8010CE04
    if (!c1cs) {
        // 0x8010CDFC: nop
    
            goto L_8010CE04;
    }
    // 0x8010CDFC: nop

    // 0x8010CE00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010CE04:
    // 0x8010CE04: beq         $v0, $zero, L_8010CE20
    if (ctx->r2 == 0) {
        // 0x8010CE08: nop
    
            goto L_8010CE20;
    }
    // 0x8010CE08: nop

    // 0x8010CE0C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8010CE10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010CE14: bc1f        L_8010CE20
    if (!c1cs) {
        // 0x8010CE18: nop
    
            goto L_8010CE20;
    }
    // 0x8010CE18: nop

    // 0x8010CE1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010CE20:
    // 0x8010CE20: jr          $ra
    // 0x8010CE24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8010CE24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8010CE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CE28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010CE2C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8010CE30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CE34: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010CE38: addiu       $a1, $a1, 0x6F50
    ctx->r5 = ADD32(ctx->r5, 0X6F50);
    // 0x8010CE3C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8010CE40: jal         0x800F18FC
    // 0x8010CE44: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800F18FC(rdram, ctx);
        goto after_0;
    // 0x8010CE44: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x8010CE48: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8010CE4C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8010CE50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010CE54: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8010CE58: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8010CE5C: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x8010CE60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CE64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010CE68: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CE70: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x8010CE74: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8010CE78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010CE7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010CE80: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010CE84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CE88: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8010CE8C: addiu       $a3, $a3, 0x6F50
    ctx->r7 = ADD32(ctx->r7, 0X6F50);
    // 0x8010CE90: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8010CE94: jal         0x80102844
    // 0x8010CE98: nop

    func_80102844(rdram, ctx);
        goto after_0;
    // 0x8010CE98: nop

    after_0:
    // 0x8010CE9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CEA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010CEA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CEAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010CEB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010CEB4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8010CEB8: jal         0x8010D600
    // 0x8010CEBC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_8010D600(rdram, ctx);
        goto after_0;
    // 0x8010CEBC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8010CEC0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8010CEC4: jal         0x80102D78
    // 0x8010CEC8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80102D78(rdram, ctx);
        goto after_1;
    // 0x8010CEC8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8010CECC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8010CED0: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x8010CED4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8010CED8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8010CEDC: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    // 0x8010CEE0: jal         0x80102BF8
    // 0x8010CEE4: swc1        $f0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f0.u32l;
    func_80102BF8(rdram, ctx);
        goto after_2;
    // 0x8010CEE4: swc1        $f0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f0.u32l;
    after_2:
    // 0x8010CEE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010CEEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8010CEF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010CEF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CEF8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8010CEFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8010CF00: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8010CF04: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8010CF08: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8010CF0C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8010CF10: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8010CF14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8010CF18: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010CF1C: jal         0x800F54E4
    // 0x8010CF20: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8010CF20: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    after_0:
    // 0x8010CF24: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8010CF28: jal         0x800F57C0
    // 0x8010CF2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F57C0(rdram, ctx);
        goto after_1;
    // 0x8010CF2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8010CF30: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8010CF34: blez        $v0, L_8010CF94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8010CF38: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8010CF94;
    }
    // 0x8010CF38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8010CF3C: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8010CF40: addiu       $s2, $s1, 0x4
    ctx->r18 = ADD32(ctx->r17, 0X4);
    // 0x8010CF44: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x8010CF48: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8010CF4C: nop

    // 0x8010CF50: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010CF54: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8010CF58:
    // 0x8010CF58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8010CF5C: jal         0x800F5794
    // 0x8010CF60: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800F5794(rdram, ctx);
        goto after_2;
    // 0x8010CF60: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x8010CF64: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8010CF68: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8010CF6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010CF70: jal         0x800F0008
    // 0x8010CF74: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800F0008(rdram, ctx);
        goto after_3;
    // 0x8010CF74: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x8010CF78: beq         $v0, $zero, L_8010CF88
    if (ctx->r2 == 0) {
        // 0x8010CF7C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8010CF88;
    }
    // 0x8010CF7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8010CF80: b           L_8010CF98
    // 0x8010CF84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010CF98;
    // 0x8010CF84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010CF88:
    // 0x8010CF88: slt         $at, $s0, $s4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8010CF8C: bnel        $at, $zero, L_8010CF58
    if (ctx->r1 != 0) {
        // 0x8010CF90: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8010CF58;
    }
    goto skip_0;
    // 0x8010CF90: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
L_8010CF94:
    // 0x8010CF94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010CF98:
    // 0x8010CF98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8010CF9C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010CFA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8010CFA4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8010CFA8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8010CFAC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8010CFB0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8010CFB4: jr          $ra
    // 0x8010CFB8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8010CFB8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8010CFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010CFBC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8010CFC0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8010CFC4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8010CFC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8010CFCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010CFD0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8010CFD4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8010CFD8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8010CFDC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8010CFE0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010CFE4: jal         0x800F54E4
    // 0x8010CFE8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8010CFE8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    after_0:
    // 0x8010CFEC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8010CFF0: jal         0x800F57C0
    // 0x8010CFF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F57C0(rdram, ctx);
        goto after_1;
    // 0x8010CFF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8010CFF8: addiu       $s4, $sp, 0x44
    ctx->r20 = ADD32(ctx->r29, 0X44);
    // 0x8010CFFC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8010D000: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8010D004: jal         0x800EE7F8
    // 0x8010D008: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8010D008: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8010D00C: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x8010D010: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8010D014: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8010D018: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8010D01C: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8010D020: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8010D024: blez        $s2, L_8010D074
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8010D028: swc1        $f10, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
            goto L_8010D074;
    }
    // 0x8010D028: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x8010D02C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8010D030: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x8010D034: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8010D038: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8010D03C:
    // 0x8010D03C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8010D040: jal         0x800F5794
    // 0x8010D044: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800F5794(rdram, ctx);
        goto after_3;
    // 0x8010D044: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x8010D048: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8010D04C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8010D050: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8010D054: jal         0x800F0008
    // 0x8010D058: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800F0008(rdram, ctx);
        goto after_4;
    // 0x8010D058: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x8010D05C: beq         $v0, $zero, L_8010D06C
    if (ctx->r2 == 0) {
        // 0x8010D060: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8010D06C;
    }
    // 0x8010D060: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8010D064: b           L_8010D078
    // 0x8010D068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010D078;
    // 0x8010D068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010D06C:
    // 0x8010D06C: bnel        $s0, $s2, L_8010D03C
    if (ctx->r16 != ctx->r18) {
        // 0x8010D070: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8010D03C;
    }
    goto skip_0;
    // 0x8010D070: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
L_8010D074:
    // 0x8010D074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010D078:
    // 0x8010D078: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8010D07C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010D080: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8010D084: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8010D088: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8010D08C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8010D090: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8010D094: jr          $ra
    // 0x8010D098: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8010D098: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8010D09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D09C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8010D0A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010D0A4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8010D0A8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8010D0AC: jal         0x800D8FF8
    // 0x8010D0B0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8010D0B0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x8010D0B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8010D0B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010D0BC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8010D0C0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8010D0C4: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8010D0C8: jal         0x800F5A00
    // 0x8010D0CC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800F5A00(rdram, ctx);
        goto after_1;
    // 0x8010D0CC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8010D0D0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8010D0D4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8010D0D8: jal         0x800F5A2C
    // 0x8010D0DC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800F5A2C(rdram, ctx);
        goto after_2;
    // 0x8010D0DC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x8010D0E0: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8010D0E4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8010D0E8: jal         0x800EFB24
    // 0x8010D0EC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x8010D0EC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x8010D0F0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8010D0F4: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8010D0F8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8010D0FC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8010D100: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8010D104: jal         0x800EF334
    // 0x8010D108: nop

    func_800EF334(rdram, ctx);
        goto after_4;
    // 0x8010D108: nop

    after_4:
    // 0x8010D10C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8010D110: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8010D114: jal         0x800EE780
    // 0x8010D118: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800EE780(rdram, ctx);
        goto after_5;
    // 0x8010D118: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_5:
    // 0x8010D11C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010D120: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8010D124: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010D12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D12C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8010D130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010D134: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8010D138: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8010D13C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8010D140: jal         0x800D8FF8
    // 0x8010D144: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8010D144: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010D148: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8010D14C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010D150: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8010D154: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8010D158: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8010D15C: jal         0x800F5A00
    // 0x8010D160: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_800F5A00(rdram, ctx);
        goto after_1;
    // 0x8010D160: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8010D164: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8010D168: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8010D16C: jal         0x800F5A2C
    // 0x8010D170: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800F5A2C(rdram, ctx);
        goto after_2;
    // 0x8010D170: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x8010D174: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8010D178: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8010D17C: jal         0x800F5A2C
    // 0x8010D180: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800F5A2C(rdram, ctx);
        goto after_3;
    // 0x8010D180: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x8010D184: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8010D188: jal         0x800EF3DC
    // 0x8010D18C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800EF3DC(rdram, ctx);
        goto after_4;
    // 0x8010D18C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x8010D190: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8010D194: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8010D198: jal         0x800EFB24
    // 0x8010D19C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800EFB24(rdram, ctx);
        goto after_5;
    // 0x8010D19C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_5:
    // 0x8010D1A0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8010D1A4: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010D1A8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8010D1AC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8010D1B0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8010D1B4: jal         0x800EF334
    // 0x8010D1B8: nop

    func_800EF334(rdram, ctx);
        goto after_6;
    // 0x8010D1B8: nop

    after_6:
    // 0x8010D1BC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8010D1C0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8010D1C4: jal         0x800EE780
    // 0x8010D1C8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800EE780(rdram, ctx);
        goto after_7;
    // 0x8010D1C8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x8010D1CC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8010D1D0: jal         0x800EF04C
    // 0x8010D1D4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800EF04C(rdram, ctx);
        goto after_8;
    // 0x8010D1D4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x8010D1D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010D1DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8010D1E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010D1E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D1E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010D1EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010D1F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010D1F4: jal         0x8008FE68
    // 0x8010D1F8: addiu       $a0, $a0, 0x6F50
    ctx->r4 = ADD32(ctx->r4, 0X6F50);
    func_8008FE68(rdram, ctx);
        goto after_0;
    // 0x8010D1F8: addiu       $a0, $a0, 0x6F50
    ctx->r4 = ADD32(ctx->r4, 0X6F50);
    after_0:
    // 0x8010D1FC: jal         0x80090128
    // 0x8010D200: nop

    func_80090128(rdram, ctx);
        goto after_1;
    // 0x8010D200: nop

    after_1:
    // 0x8010D204: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010D208: jal         0x80090150
    // 0x8010D20C: sh          $v0, 0x6F5C($at)
    MEM_H(0X6F5C, ctx->r1) = ctx->r2;
    func_80090150(rdram, ctx);
        goto after_2;
    // 0x8010D20C: sh          $v0, 0x6F5C($at)
    MEM_H(0X6F5C, ctx->r1) = ctx->r2;
    after_2:
    // 0x8010D210: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010D214: jal         0x8008FD48
    // 0x8010D218: sh          $v0, 0x6F5E($at)
    MEM_H(0X6F5E, ctx->r1) = ctx->r2;
    func_8008FD48(rdram, ctx);
        goto after_3;
    // 0x8010D218: sh          $v0, 0x6F5E($at)
    MEM_H(0X6F5E, ctx->r1) = ctx->r2;
    after_3:
    // 0x8010D21C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010D220: jal         0x8008FF6C
    // 0x8010D224: sw          $v0, 0x6F60($at)
    MEM_W(0X6F60, ctx->r1) = ctx->r2;
    func_8008FF6C(rdram, ctx);
        goto after_4;
    // 0x8010D224: sw          $v0, 0x6F60($at)
    MEM_W(0X6F60, ctx->r1) = ctx->r2;
    after_4:
    // 0x8010D228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010D22C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010D230: sw          $v0, 0x6F64($at)
    MEM_W(0X6F64, ctx->r1) = ctx->r2;
    // 0x8010D234: jr          $ra
    // 0x8010D238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8010D238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8010D23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D23C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010D240: jr          $ra
    // 0x8010D244: lh          $v0, 0x6F5C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6F5C);
    return;
    // 0x8010D244: lh          $v0, 0x6F5C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6F5C);
;}
RECOMP_FUNC void func_8010D248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D248: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010D24C: jr          $ra
    // 0x8010D250: lh          $v0, 0x6F5E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6F5E);
    return;
    // 0x8010D250: lh          $v0, 0x6F5E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6F5E);
;}
RECOMP_FUNC void func_8010D254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010D258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010D25C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010D260: jal         0x800EE7F8
    // 0x8010D264: addiu       $a1, $a1, 0x6F50
    ctx->r5 = ADD32(ctx->r5, 0X6F50);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010D264: addiu       $a1, $a1, 0x6F50
    ctx->r5 = ADD32(ctx->r5, 0X6F50);
    after_0:
    // 0x8010D268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010D26C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010D270: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010D278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D278: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010D27C: jr          $ra
    // 0x8010D280: lw          $v0, 0x6F60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6F60);
    return;
    // 0x8010D280: lw          $v0, 0x6F60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6F60);
;}
RECOMP_FUNC void func_8010D284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D284: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010D288: jr          $ra
    // 0x8010D28C: lw          $v0, 0x6F64($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6F64);
    return;
    // 0x8010D28C: lw          $v0, 0x6F64($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6F64);
;}
RECOMP_FUNC void func_8010D290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D290: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010D294: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010D298: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8010D29C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8010D2A0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8010D2A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8010D2A8: jal         0x800F54E4
    // 0x8010D2AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8010D2AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8010D2B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8010D2B4: bne         $v0, $at, L_8010D2C4
    if (ctx->r2 != ctx->r1) {
        // 0x8010D2B8: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8010D2C4;
    }
    // 0x8010D2B8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8010D2BC: b           L_8010D334
    // 0x8010D2C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8010D334;
    // 0x8010D2C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8010D2C4:
    // 0x8010D2C4: jal         0x800F6438
    // 0x8010D2C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800F6438(rdram, ctx);
        goto after_1;
    // 0x8010D2C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x8010D2CC: beq         $v0, $zero, L_8010D2EC
    if (ctx->r2 == 0) {
        // 0x8010D2D0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8010D2EC;
    }
    // 0x8010D2D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010D2D4: jal         0x800F64A4
    // 0x8010D2D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800F64A4(rdram, ctx);
        goto after_2;
    // 0x8010D2D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8010D2DC: bnel        $v0, $zero, L_8010D2F0
    if (ctx->r2 != 0) {
        // 0x8010D2E0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8010D2F0;
    }
    goto skip_0;
    // 0x8010D2E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_0:
    // 0x8010D2E4: b           L_8010D334
    // 0x8010D2E8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_8010D334;
    // 0x8010D2E8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_8010D2EC:
    // 0x8010D2EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8010D2F0:
    // 0x8010D2F0: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
L_8010D2F4:
    // 0x8010D2F4: beql        $s0, $s2, L_8010D328
    if (ctx->r16 == ctx->r18) {
        // 0x8010D2F8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8010D328;
    }
    goto skip_1;
    // 0x8010D2F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x8010D2FC: jal         0x800F6438
    // 0x8010D300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6438(rdram, ctx);
        goto after_3;
    // 0x8010D300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8010D304: beq         $v0, $zero, L_8010D324
    if (ctx->r2 == 0) {
        // 0x8010D308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010D324;
    }
    // 0x8010D308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010D30C: jal         0x800F64A4
    // 0x8010D310: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800F64A4(rdram, ctx);
        goto after_4;
    // 0x8010D310: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x8010D314: bnel        $v0, $zero, L_8010D328
    if (ctx->r2 != 0) {
        // 0x8010D318: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8010D328;
    }
    goto skip_2;
    // 0x8010D318: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x8010D31C: b           L_8010D334
    // 0x8010D320: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8010D334;
    // 0x8010D320: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8010D324:
    // 0x8010D324: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8010D328:
    // 0x8010D328: bne         $s0, $s1, L_8010D2F4
    if (ctx->r16 != ctx->r17) {
        // 0x8010D32C: nop
    
            goto L_8010D2F4;
    }
    // 0x8010D32C: nop

    // 0x8010D330: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8010D334:
    // 0x8010D334: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8010D338: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8010D33C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8010D340: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8010D344: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8010D348: jr          $ra
    // 0x8010D34C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8010D34C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8010D350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D350: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8010D354: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x8010D358: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8010D35C: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x8010D360: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8010D364: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x8010D368: addiu       $s4, $sp, 0x90
    ctx->r20 = ADD32(ctx->r29, 0X90);
    // 0x8010D36C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8010D370: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8010D374: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x8010D378: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x8010D37C: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x8010D380: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x8010D384: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x8010D388: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8010D38C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x8010D390: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8010D394: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8010D398: jal         0x800EE7F8
    // 0x8010D39C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010D39C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x8010D3A0: addiu       $s5, $sp, 0x84
    ctx->r21 = ADD32(ctx->r29, 0X84);
    // 0x8010D3A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8010D3A8: jal         0x800EE7F8
    // 0x8010D3AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8010D3AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8010D3B0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8010D3B4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8010D3B8: jal         0x800F5898
    // 0x8010D3BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_800F5898(rdram, ctx);
        goto after_2;
    // 0x8010D3BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_2:
    // 0x8010D3C0: blez        $v0, L_8010D458
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8010D3C4: addiu       $s2, $sp, 0x78
        ctx->r18 = ADD32(ctx->r29, 0X78);
            goto L_8010D458;
    }
    // 0x8010D3C4: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    // 0x8010D3C8: addiu       $s1, $sp, 0x9C
    ctx->r17 = ADD32(ctx->r29, 0X9C);
L_8010D3CC:
    // 0x8010D3CC: jal         0x800F6438
    // 0x8010D3D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6438(rdram, ctx);
        goto after_3;
    // 0x8010D3D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8010D3D4: beq         $v0, $zero, L_8010D444
    if (ctx->r2 == 0) {
        // 0x8010D3D8: nop
    
            goto L_8010D444;
    }
    // 0x8010D3D8: nop

    // 0x8010D3DC: beq         $s0, $s3, L_8010D444
    if (ctx->r16 == ctx->r19) {
        // 0x8010D3E0: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_8010D444;
    }
    // 0x8010D3E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8010D3E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8010D3E8: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x8010D3EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8010D3F0: mul.s       $f20, $f26, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = MUL_S(ctx->f26.fl, ctx->f18.fl);
    // 0x8010D3F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010D3F8: add.s       $f22, $f16, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x8010D3FC: jal         0x800F5A00
    // 0x8010D400: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800F5A00(rdram, ctx);
        goto after_4;
    // 0x8010D400: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8010D404: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8010D408: add.s       $f24, $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f20.fl;
    // 0x8010D40C: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8010D410: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8010D414: sub.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f26.fl;
    // 0x8010D418: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x8010D41C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8010D420: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8010D424: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x8010D428: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x8010D42C: jal         0x800F0734
    // 0x8010D430: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800F0734(rdram, ctx);
        goto after_5;
    // 0x8010D430: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_5:
    // 0x8010D434: beq         $v0, $zero, L_8010D444
    if (ctx->r2 == 0) {
        // 0x8010D438: nop
    
            goto L_8010D444;
    }
    // 0x8010D438: nop

    // 0x8010D43C: b           L_8010D45C
    // 0x8010D440: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8010D45C;
    // 0x8010D440: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8010D444:
    // 0x8010D444: jal         0x800F5898
    // 0x8010D448: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800F5898(rdram, ctx);
        goto after_6;
    // 0x8010D448: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_6:
    // 0x8010D44C: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8010D450: bne         $at, $zero, L_8010D3CC
    if (ctx->r1 != 0) {
        // 0x8010D454: nop
    
            goto L_8010D3CC;
    }
    // 0x8010D454: nop

L_8010D458:
    // 0x8010D458: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8010D45C:
    // 0x8010D45C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8010D460: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8010D464: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8010D468: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8010D46C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x8010D470: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x8010D474: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8010D478: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x8010D47C: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x8010D480: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x8010D484: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x8010D488: jr          $ra
    // 0x8010D48C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x8010D48C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8010D490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D490: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8010D494: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8010D498: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8010D49C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8010D4A0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010D4A4: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8010D4A8: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x8010D4AC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8010D4B0: addiu       $s5, $sp, 0x50
    ctx->r21 = ADD32(ctx->r29, 0X50);
    // 0x8010D4B4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8010D4B8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8010D4BC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8010D4C0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8010D4C4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8010D4C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8010D4CC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x8010D4D0: jal         0x800EE7F8
    // 0x8010D4D4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010D4D4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x8010D4D8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8010D4DC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8010D4E0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8010D4E4: jal         0x800F0C68
    // 0x8010D4E8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800F0C68(rdram, ctx);
        goto after_1;
    // 0x8010D4E8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x8010D4EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010D4F0: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8010D4F4: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x8010D4F8: lwc1        $f20, 0x6530($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6530);
    // 0x8010D4FC: jal         0x800F5898
    // 0x8010D500: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_800F5898(rdram, ctx);
        goto after_2;
    // 0x8010D500: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_2:
    // 0x8010D504: blez        $v0, L_8010D594
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8010D508: lw          $s3, 0x98($sp)
        ctx->r19 = MEM_W(ctx->r29, 0X98);
            goto L_8010D594;
    }
    // 0x8010D508: lw          $s3, 0x98($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X98);
    // 0x8010D50C: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
    // 0x8010D510: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
L_8010D514:
    // 0x8010D514: jal         0x800F6438
    // 0x8010D518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6438(rdram, ctx);
        goto after_3;
    // 0x8010D518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8010D51C: beq         $v0, $zero, L_8010D580
    if (ctx->r2 == 0) {
        // 0x8010D520: nop
    
            goto L_8010D580;
    }
    // 0x8010D520: nop

    // 0x8010D524: beq         $s0, $s3, L_8010D580
    if (ctx->r16 == ctx->r19) {
        // 0x8010D528: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010D580;
    }
    // 0x8010D528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010D52C: jal         0x800F5BF0
    // 0x8010D530: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800F5BF0(rdram, ctx);
        goto after_4;
    // 0x8010D530: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x8010D534: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010D538: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8010D53C: jal         0x800EFB24
    // 0x8010D540: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800EFB24(rdram, ctx);
        goto after_5;
    // 0x8010D540: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_5:
    // 0x8010D544: jal         0x800EEFD4
    // 0x8010D548: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EEFD4(rdram, ctx);
        goto after_6;
    // 0x8010D548: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x8010D54C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8010D550: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x8010D554: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010D558: bc1f        L_8010D580
    if (!c1cs) {
        // 0x8010D55C: nop
    
            goto L_8010D580;
    }
    // 0x8010D55C: nop

    // 0x8010D560: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8010D564: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x8010D568: jal         0x800F0BD0
    // 0x8010D56C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800F0BD0(rdram, ctx);
        goto after_7;
    // 0x8010D56C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_7:
    // 0x8010D570: beq         $v0, $zero, L_8010D580
    if (ctx->r2 == 0) {
        // 0x8010D574: nop
    
            goto L_8010D580;
    }
    // 0x8010D574: nop

    // 0x8010D578: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x8010D57C: lwc1        $f20, 0x64($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X64);
L_8010D580:
    // 0x8010D580: jal         0x800F5898
    // 0x8010D584: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800F5898(rdram, ctx);
        goto after_8;
    // 0x8010D584: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_8:
    // 0x8010D588: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8010D58C: bne         $at, $zero, L_8010D514
    if (ctx->r1 != 0) {
        // 0x8010D590: nop
    
            goto L_8010D514;
    }
    // 0x8010D590: nop

L_8010D594:
    // 0x8010D594: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8010D598: bne         $s6, $at, L_8010D5A8
    if (ctx->r22 != ctx->r1) {
        // 0x8010D59C: ldc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
            goto L_8010D5A8;
    }
    // 0x8010D59C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010D5A0: b           L_8010D5AC
    // 0x8010D5A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8010D5AC;
    // 0x8010D5A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8010D5A8:
    // 0x8010D5A8: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
L_8010D5AC:
    // 0x8010D5AC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8010D5B0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8010D5B4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8010D5B8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8010D5BC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8010D5C0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8010D5C4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8010D5C8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8010D5CC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8010D5D0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8010D5D4: jr          $ra
    // 0x8010D5D8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8010D5D8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8010D5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D5DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010D5E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010D5E4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8010D5E8: jal         0x8010114C
    // 0x8010D5EC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_8010114C(rdram, ctx);
        goto after_0;
    // 0x8010D5EC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_0:
    // 0x8010D5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010D5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010D5F8: jr          $ra
    // 0x8010D5FC: nop

    return;
    // 0x8010D5FC: nop

;}
RECOMP_FUNC void func_8010D600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010D604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010D608: jal         0x8010D23C
    // 0x8010D60C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8010D23C(rdram, ctx);
        goto after_0;
    // 0x8010D60C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010D610: beq         $v0, $zero, L_8010D628
    if (ctx->r2 == 0) {
        // 0x8010D614: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8010D628;
    }
    // 0x8010D614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010D618: jal         0x8008FE68
    // 0x8010D61C: nop

    func_8008FE68(rdram, ctx);
        goto after_1;
    // 0x8010D61C: nop

    after_1:
    // 0x8010D620: b           L_8010D634
    // 0x8010D624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010D634;
    // 0x8010D624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010D628:
    // 0x8010D628: jal         0x800E3980
    // 0x8010D62C: nop

    func_800E3980(rdram, ctx);
        goto after_2;
    // 0x8010D62C: nop

    after_2:
    // 0x8010D630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010D634:
    // 0x8010D634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010D638: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010D640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010D644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010D648: jal         0x8010D23C
    // 0x8010D64C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8010D23C(rdram, ctx);
        goto after_0;
    // 0x8010D64C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010D650: beq         $v0, $zero, L_8010D678
    if (ctx->r2 == 0) {
        // 0x8010D654: nop
    
            goto L_8010D678;
    }
    // 0x8010D654: nop

    // 0x8010D658: jal         0x800DB9B0
    // 0x8010D65C: nop

    func_800DB9B0(rdram, ctx);
        goto after_1;
    // 0x8010D65C: nop

    after_1:
    // 0x8010D660: bne         $v0, $zero, L_8010D678
    if (ctx->r2 != 0) {
        // 0x8010D664: nop
    
            goto L_8010D678;
    }
    // 0x8010D664: nop

    // 0x8010D668: jal         0x8008FE68
    // 0x8010D66C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008FE68(rdram, ctx);
        goto after_2;
    // 0x8010D66C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8010D670: b           L_8010D684
    // 0x8010D674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010D684;
    // 0x8010D674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010D678:
    // 0x8010D678: jal         0x800E3980
    // 0x8010D67C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800E3980(rdram, ctx);
        goto after_3;
    // 0x8010D67C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8010D680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010D684:
    // 0x8010D684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010D688: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010D690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D690: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8010D694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010D698: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8010D69C: jal         0x80103F38
    // 0x8010D6A0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80103F38(rdram, ctx);
        goto after_0;
    // 0x8010D6A0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x8010D6A4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8010D6A8: jal         0x8010A40C
    // 0x8010D6AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8010A40C(rdram, ctx);
        goto after_1;
    // 0x8010D6AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x8010D6B0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010D6B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8010D6B8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8010D6BC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8010D6C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8010D6C4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8010D6C8: jal         0x8010D6E0
    // 0x8010D6CC: nop

    func_8010D6E0(rdram, ctx);
        goto after_2;
    // 0x8010D6CC: nop

    after_2:
    // 0x8010D6D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010D6D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8010D6D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010D6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D6E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8010D6E4: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x8010D6E8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8010D6EC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8010D6F0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8010D6F4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8010D6F8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8010D6FC: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8010D700: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x8010D704: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8010D708: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8010D70C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8010D710: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8010D714: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_8010D718:
    // 0x8010D718: jal         0x800F6438
    // 0x8010D71C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6438(rdram, ctx);
        goto after_0;
    // 0x8010D71C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8010D720: beql        $v0, $zero, L_8010D760
    if (ctx->r2 == 0) {
        // 0x8010D724: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8010D760;
    }
    goto skip_0;
    // 0x8010D724: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8010D728: jal         0x800F682C
    // 0x8010D72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F682C(rdram, ctx);
        goto after_1;
    // 0x8010D72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8010D730: beq         $v0, $zero, L_8010D748
    if (ctx->r2 == 0) {
        // 0x8010D734: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8010D748;
    }
    // 0x8010D734: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010D738: jal         0x80109EE0
    // 0x8010D73C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80109EE0(rdram, ctx);
        goto after_2;
    // 0x8010D73C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8010D740: beql        $v0, $zero, L_8010D760
    if (ctx->r2 == 0) {
        // 0x8010D744: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8010D760;
    }
    goto skip_1;
    // 0x8010D744: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
L_8010D748:
    // 0x8010D748: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8010D74C: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8010D750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010D754: jal         0x800F4F34
    // 0x8010D758: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800F4F34(rdram, ctx);
        goto after_3;
    // 0x8010D758: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x8010D75C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8010D760:
    // 0x8010D760: bne         $s0, $s3, L_8010D718
    if (ctx->r16 != ctx->r19) {
        // 0x8010D764: nop
    
            goto L_8010D718;
    }
    // 0x8010D764: nop

    // 0x8010D768: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8010D76C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8010D770: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x8010D774: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8010D778: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8010D77C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8010D780: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8010D784: jr          $ra
    // 0x8010D788: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8010D788: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8010D790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D790: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8010D794: addiu       $a0, $a0, 0x4730
    ctx->r4 = ADD32(ctx->r4, 0X4730);
    // 0x8010D798: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010D79C: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x8010D7A0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_8010D7A4:
    // 0x8010D7A4: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8010D7A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8010D7AC: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x8010D7B0: blez        $a1, L_8010D7D8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8010D7B4: lui         $t7, 0x8013
        ctx->r15 = S32(0X8013 << 16);
            goto L_8010D7D8;
    }
    // 0x8010D7B4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8010D7B8: addiu       $t7, $t7, 0x6F90
    ctx->r15 = ADD32(ctx->r15, 0X6F90);
    // 0x8010D7BC: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
L_8010D7C0:
    // 0x8010D7C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8010D7C4: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8010D7C8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8010D7CC: sb          $zero, -0x8($a2)
    MEM_B(-0X8, ctx->r6) = 0;
    // 0x8010D7D0: bne         $at, $zero, L_8010D7C0
    if (ctx->r1 != 0) {
        // 0x8010D7D4: sw          $a3, -0x4($a2)
        MEM_W(-0X4, ctx->r6) = ctx->r7;
            goto L_8010D7C0;
    }
    // 0x8010D7D4: sw          $a3, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r7;
L_8010D7D8:
    // 0x8010D7D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8010D7DC: bne         $v0, $t0, L_8010D7A4
    if (ctx->r2 != ctx->r8) {
        // 0x8010D7E0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8010D7A4;
    }
    // 0x8010D7E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8010D7E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010D7EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D7EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8010D7F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8010D7F4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8010D7F8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8010D7FC: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8010D800: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8010D804: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8010D808: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010D80C: addiu       $s2, $s2, 0x4730
    ctx->r18 = ADD32(ctx->r18, 0X4730);
    // 0x8010D810: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8010D814: addiu       $s4, $zero, 0xD
    ctx->r20 = ADD32(0, 0XD);
L_8010D818:
    // 0x8010D818: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x8010D81C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8010D820: sll         $t7, $s3, 4
    ctx->r15 = S32(ctx->r19 << 4);
    // 0x8010D824: blez        $t6, L_8010D870
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8010D828: lui         $t8, 0x8013
        ctx->r24 = S32(0X8013 << 16);
            goto L_8010D870;
    }
    // 0x8010D828: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8010D82C: addiu       $t8, $t8, 0x6F90
    ctx->r24 = ADD32(ctx->r24, 0X6F90);
    // 0x8010D830: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x8010D834: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
L_8010D838:
    // 0x8010D838: beql        $a0, $zero, L_8010D85C
    if (ctx->r4 == 0) {
        // 0x8010D83C: lbu         $t9, 0x0($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X0);
            goto L_8010D85C;
    }
    goto skip_0;
    // 0x8010D83C: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    skip_0:
    // 0x8010D840: jal         0x800C3D78
    // 0x8010D844: nop

    func_800C3D78(rdram, ctx);
        goto after_0;
    // 0x8010D844: nop

    after_0:
    // 0x8010D848: bnel        $v0, $zero, L_8010D85C
    if (ctx->r2 != 0) {
        // 0x8010D84C: lbu         $t9, 0x0($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X0);
            goto L_8010D85C;
    }
    goto skip_1;
    // 0x8010D84C: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    skip_1:
    // 0x8010D850: jal         0x8010DA30
    // 0x8010D854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010DA30(rdram, ctx);
        goto after_1;
    // 0x8010D854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8010D858: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
L_8010D85C:
    // 0x8010D85C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8010D860: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8010D864: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8010D868: bnel        $at, $zero, L_8010D838
    if (ctx->r1 != 0) {
        // 0x8010D86C: lbu         $a0, 0x0($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X0);
            goto L_8010D838;
    }
    goto skip_2;
    // 0x8010D86C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    skip_2:
L_8010D870:
    // 0x8010D870: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8010D874: bne         $s3, $s4, L_8010D818
    if (ctx->r19 != ctx->r20) {
        // 0x8010D878: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8010D818;
    }
    // 0x8010D878: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8010D87C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8010D880: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010D884: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8010D888: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8010D88C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8010D890: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8010D894: jr          $ra
    // 0x8010D898: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8010D898: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8010D89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D89C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8010D8A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8010D8A4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8010D8A8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8010D8AC: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8010D8B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8010D8B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8010D8B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010D8BC: addiu       $s2, $s2, 0x4730
    ctx->r18 = ADD32(ctx->r18, 0X4730);
    // 0x8010D8C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8010D8C4: addiu       $s4, $zero, 0xD
    ctx->r20 = ADD32(0, 0XD);
L_8010D8C8:
    // 0x8010D8C8: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x8010D8CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8010D8D0: sll         $t7, $s3, 4
    ctx->r15 = S32(ctx->r19 << 4);
    // 0x8010D8D4: blez        $t6, L_8010D904
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8010D8D8: lui         $t8, 0x8013
        ctx->r24 = S32(0X8013 << 16);
            goto L_8010D904;
    }
    // 0x8010D8D8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8010D8DC: addiu       $t8, $t8, 0x6F90
    ctx->r24 = ADD32(ctx->r24, 0X6F90);
    // 0x8010D8E0: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
L_8010D8E4:
    // 0x8010D8E4: jal         0x8010DA30
    // 0x8010D8E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8010DA30(rdram, ctx);
        goto after_0;
    // 0x8010D8E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8010D8EC: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x8010D8F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8010D8F4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8010D8F8: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8010D8FC: bne         $at, $zero, L_8010D8E4
    if (ctx->r1 != 0) {
        // 0x8010D900: nop
    
            goto L_8010D8E4;
    }
    // 0x8010D900: nop

L_8010D904:
    // 0x8010D904: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8010D908: bne         $s3, $s4, L_8010D8C8
    if (ctx->r19 != ctx->r20) {
        // 0x8010D90C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8010D8C8;
    }
    // 0x8010D90C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8010D910: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8010D914: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010D918: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8010D91C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8010D920: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8010D924: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8010D928: jr          $ra
    // 0x8010D92C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8010D92C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8010D930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010D930: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010D934: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010D938: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010D93C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010D940: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8010D944: jal         0x8010DA70
    // 0x8010D948: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8010DA70(rdram, ctx);
        goto after_0;
    // 0x8010D948: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010D94C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8010D950: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010D954: bne         $t6, $zero, L_8010D96C
    if (ctx->r14 != 0) {
        // 0x8010D958: nop
    
            goto L_8010D96C;
    }
    // 0x8010D958: nop

    // 0x8010D95C: jal         0x800C2E04
    // 0x8010D960: nop

    func_800C2E04(rdram, ctx);
        goto after_1;
    // 0x8010D960: nop

    after_1:
    // 0x8010D964: b           L_8010D974
    // 0x8010D968: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8010D974;
    // 0x8010D968: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8010D96C:
    // 0x8010D96C: jal         0x800C2E40
    // 0x8010D970: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_800C2E40(rdram, ctx);
        goto after_2;
    // 0x8010D970: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_2:
L_8010D974:
    // 0x8010D974: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8010D978: lui         $a2, 0x453B
    ctx->r6 = S32(0X453B << 16);
    // 0x8010D97C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x8010D980: beq         $t7, $zero, L_8010D990
    if (ctx->r15 == 0) {
        // 0x8010D984: lui         $a1, 0x4348
        ctx->r5 = S32(0X4348 << 16);
            goto L_8010D990;
    }
    // 0x8010D984: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x8010D988: jal         0x800C3584
    // 0x8010D98C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_800C3584(rdram, ctx);
        goto after_3;
    // 0x8010D98C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_3:
L_8010D990:
    // 0x8010D990: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8010D994: jal         0x800C330C
    // 0x8010D998: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_4;
    // 0x8010D998: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x8010D99C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8010D9A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8010D9A4: bltz        $v0, L_8010D9E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8010D9A8: nop
    
            goto L_8010D9E4;
    }
    // 0x8010D9A8: nop

    // 0x8010D9AC: beq         $v0, $zero, L_8010D9D4
    if (ctx->r2 == 0) {
        // 0x8010D9B0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8010D9D4;
    }
    // 0x8010D9B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8010D9B4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8010D9B8: jal         0x800C3418
    // 0x8010D9BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C3418(rdram, ctx);
        goto after_5;
    // 0x8010D9BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8010D9C0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8010D9C4: jal         0x800C32C4
    // 0x8010D9C8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_800C32C4(rdram, ctx);
        goto after_6;
    // 0x8010D9C8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_6:
    // 0x8010D9CC: b           L_8010D9F0
    // 0x8010D9D0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
        goto L_8010D9F0;
    // 0x8010D9D0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
L_8010D9D4:
    // 0x8010D9D4: jal         0x800C3418
    // 0x8010D9D8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_800C3418(rdram, ctx);
        goto after_7;
    // 0x8010D9D8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_7:
    // 0x8010D9DC: b           L_8010D9F0
    // 0x8010D9E0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
        goto L_8010D9F0;
    // 0x8010D9E0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
L_8010D9E4:
    // 0x8010D9E4: jal         0x800C3418
    // 0x8010D9E8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_800C3418(rdram, ctx);
        goto after_8;
    // 0x8010D9E8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_8:
    // 0x8010D9EC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
L_8010D9F0:
    // 0x8010D9F0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8010D9F4: jal         0x800C4350
    // 0x8010D9F8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800C4350(rdram, ctx);
        goto after_9;
    // 0x8010D9F8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_9:
    // 0x8010D9FC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8010DA00: jal         0x800C3B8C
    // 0x8010DA04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C3B8C(rdram, ctx);
        goto after_10;
    // 0x8010DA04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8010DA08: jal         0x800C3BDC
    // 0x8010DA0C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_800C3BDC(rdram, ctx);
        goto after_11;
    // 0x8010DA0C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_11:
    // 0x8010DA10: jal         0x8001211C
    // 0x8010DA14: nop

    func_8001211C(rdram, ctx);
        goto after_12;
    // 0x8010DA14: nop

    after_12:
    // 0x8010DA18: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8010DA1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010DA20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010DA24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010DA28: jr          $ra
    // 0x8010DA2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8010DA2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8010DA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010DA30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010DA34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010DA38: lbu         $a2, 0x0($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X0);
    // 0x8010DA3C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8010DA40: beq         $a2, $zero, L_8010DA58
    if (ctx->r6 == 0) {
        // 0x8010DA44: andi        $a0, $a2, 0xFF
        ctx->r4 = ctx->r6 & 0XFF;
            goto L_8010DA58;
    }
    // 0x8010DA44: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x8010DA48: jal         0x800C2FDC
    // 0x8010DA4C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x8010DA4C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8010DA50: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8010DA54: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8010DA58:
    // 0x8010DA58: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8010DA5C: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x8010DA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010DA64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010DA68: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010DA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010DA70: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8010DA74: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8010DA78: lbu         $a1, 0x4730($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4730);
    // 0x8010DA7C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8010DA80: addiu       $t7, $t7, 0x6F90
    ctx->r15 = ADD32(ctx->r15, 0X6F90);
    // 0x8010DA84: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8010DA88: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8010DA8C: bne         $at, $zero, L_8010DAD0
    if (ctx->r1 != 0) {
        // 0x8010DA90: addu        $v1, $t6, $t7
        ctx->r3 = ADD32(ctx->r14, ctx->r15);
            goto L_8010DAD0;
    }
    // 0x8010DA90: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8010DA94: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x8010DA98: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8010DA9C: addu        $a2, $t9, $t7
    ctx->r6 = ADD32(ctx->r25, ctx->r15);
    // 0x8010DAA0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8010DAA4: sll         $a3, $a1, 3
    ctx->r7 = S32(ctx->r5 << 3);
L_8010DAA8:
    // 0x8010DAA8: lw          $t0, 0x4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4);
    // 0x8010DAAC: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x8010DAB0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8010DAB4: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8010DAB8: beql        $at, $zero, L_8010DAC8
    if (ctx->r1 == 0) {
        // 0x8010DABC: slt         $at, $v0, $a3
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_8010DAC8;
    }
    goto skip_0;
    // 0x8010DABC: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    skip_0:
    // 0x8010DAC0: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8010DAC4: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
L_8010DAC8:
    // 0x8010DAC8: bne         $at, $zero, L_8010DAA8
    if (ctx->r1 != 0) {
        // 0x8010DACC: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_8010DAA8;
    }
    // 0x8010DACC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
L_8010DAD0:
    // 0x8010DAD0: jr          $ra
    // 0x8010DAD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8010DAD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8010DAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010DAE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8010DAE4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8010DAE8: addiu       $t7, $t7, 0x4740
    ctx->r15 = ADD32(ctx->r15, 0X4740);
    // 0x8010DAEC: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8010DAF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010DAF4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8010DAF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8010DAFC: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8010DB00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010DB04: lhu         $s1, 0x6($v0)
    ctx->r17 = MEM_HU(ctx->r2, 0X6);
    // 0x8010DB08: jal         0x8008AF24
    // 0x8010DB0C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8008AF24(rdram, ctx);
        goto after_0;
    // 0x8010DB0C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x8010DB10: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8010DB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010DB18: lw          $a1, 0x4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X4);
    // 0x8010DB1C: srl         $t9, $a1, 18
    ctx->r25 = S32(U32(ctx->r5) >> 18);
    // 0x8010DB20: jal         0x8008AED4
    // 0x8010DB24: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8008AED4(rdram, ctx);
        goto after_1;
    // 0x8010DB24: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
    // 0x8010DB28: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8010DB2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010DB30: jal         0x8008B1BC
    // 0x8010DB34: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x8010DB34: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    after_2:
    // 0x8010DB38: andi        $t1, $s1, 0x1
    ctx->r9 = ctx->r17 & 0X1;
    // 0x8010DB3C: beq         $t1, $zero, L_8010DB68
    if (ctx->r9 == 0) {
        // 0x8010DB40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010DB68;
    }
    // 0x8010DB40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010DB44: jal         0x8008B134
    // 0x8010DB48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_3;
    // 0x8010DB48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x8010DB4C: andi        $t2, $s1, 0x100
    ctx->r10 = ctx->r17 & 0X100;
    // 0x8010DB50: beq         $t2, $zero, L_8010DB60
    if (ctx->r10 == 0) {
        // 0x8010DB54: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8010DB60;
    }
    // 0x8010DB54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8010DB58: b           L_8010DB60
    // 0x8010DB5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_8010DB60;
    // 0x8010DB5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8010DB60:
    // 0x8010DB60: jal         0x8008B4A8
    // 0x8010DB64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B4A8(rdram, ctx);
        goto after_4;
    // 0x8010DB64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8010DB68:
    // 0x8010DB68: andi        $t3, $s1, 0x2
    ctx->r11 = ctx->r17 & 0X2;
    // 0x8010DB6C: beq         $t3, $zero, L_8010DB7C
    if (ctx->r11 == 0) {
        // 0x8010DB70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010DB7C;
    }
    // 0x8010DB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010DB74: jal         0x8008B134
    // 0x8010DB78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x8010DB78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_8010DB7C:
    // 0x8010DB7C: andi        $t4, $s1, 0x4
    ctx->r12 = ctx->r17 & 0X4;
    // 0x8010DB80: beq         $t4, $zero, L_8010DB90
    if (ctx->r12 == 0) {
        // 0x8010DB84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010DB90;
    }
    // 0x8010DB84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010DB88: jal         0x8008B134
    // 0x8010DB8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x8010DB8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
L_8010DB90:
    // 0x8010DB90: andi        $t5, $s1, 0x8
    ctx->r13 = ctx->r17 & 0X8;
    // 0x8010DB94: beq         $t5, $zero, L_8010DBA4
    if (ctx->r13 == 0) {
        // 0x8010DB98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010DBA4;
    }
    // 0x8010DB98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010DB9C: jal         0x8008B188
    // 0x8010DBA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B188(rdram, ctx);
        goto after_7;
    // 0x8010DBA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_8010DBA4:
    // 0x8010DBA4: andi        $t6, $s1, 0x10
    ctx->r14 = ctx->r17 & 0X10;
    // 0x8010DBA8: beq         $t6, $zero, L_8010DBB8
    if (ctx->r14 == 0) {
        // 0x8010DBAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010DBB8;
    }
    // 0x8010DBAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010DBB0: jal         0x8008B188
    // 0x8010DBB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B188(rdram, ctx);
        goto after_8;
    // 0x8010DBB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_8010DBB8:
    // 0x8010DBB8: andi        $t7, $s1, 0x800
    ctx->r15 = ctx->r17 & 0X800;
    // 0x8010DBBC: beq         $t7, $zero, L_8010DBE8
    if (ctx->r15 == 0) {
        // 0x8010DBC0: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_8010DBE8;
    }
    // 0x8010DBC0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8010DBC4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8010DBC8: jal         0x800DC298
    // 0x8010DBCC: nop

    func_800DC298(rdram, ctx);
        goto after_9;
    // 0x8010DBCC: nop

    after_9:
    // 0x8010DBD0: beq         $v0, $zero, L_8010DBE0
    if (ctx->r2 == 0) {
        // 0x8010DBD4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8010DBE0;
    }
    // 0x8010DBD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8010DBD8: b           L_8010DBE0
    // 0x8010DBDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8010DBE0;
    // 0x8010DBDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8010DBE0:
    // 0x8010DBE0: jal         0x8008B188
    // 0x8010DBE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B188(rdram, ctx);
        goto after_10;
    // 0x8010DBE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_8010DBE8:
    // 0x8010DBE8: andi        $t8, $s1, 0x40
    ctx->r24 = ctx->r17 & 0X40;
    // 0x8010DBEC: beq         $t8, $zero, L_8010DBFC
    if (ctx->r24 == 0) {
        // 0x8010DBF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010DBFC;
    }
    // 0x8010DBF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010DBF4: jal         0x8008B10C
    // 0x8010DBF8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B10C(rdram, ctx);
        goto after_11;
    // 0x8010DBF8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
L_8010DBFC:
    // 0x8010DBFC: andi        $t9, $s1, 0x80
    ctx->r25 = ctx->r17 & 0X80;
    // 0x8010DC00: beq         $t9, $zero, L_8010DC14
    if (ctx->r25 == 0) {
        // 0x8010DC04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010DC14;
    }
    // 0x8010DC04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010DC08: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
    // 0x8010DC0C: jal         0x8008B10C
    // 0x8010DC10: ori         $a1, $a1, 0xBE77
    ctx->r5 = ctx->r5 | 0XBE77;
    func_8008B10C(rdram, ctx);
        goto after_12;
    // 0x8010DC10: ori         $a1, $a1, 0xBE77
    ctx->r5 = ctx->r5 | 0XBE77;
    after_12:
L_8010DC14:
    // 0x8010DC14: andi        $t0, $s1, 0x400
    ctx->r8 = ctx->r17 & 0X400;
    // 0x8010DC18: beq         $t0, $zero, L_8010DC34
    if (ctx->r8 == 0) {
        // 0x8010DC1C: nop
    
            goto L_8010DC34;
    }
    // 0x8010DC1C: nop

    // 0x8010DC20: jal         0x800DC0C0
    // 0x8010DC24: nop

    func_800DC0C0(rdram, ctx);
        goto after_13;
    // 0x8010DC24: nop

    after_13:
    // 0x8010DC28: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8010DC2C: jal         0x8008B10C
    // 0x8010DC30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B10C(rdram, ctx);
        goto after_14;
    // 0x8010DC30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
L_8010DC34:
    // 0x8010DC34: jal         0x8008B064
    // 0x8010DC38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_15;
    // 0x8010DC38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8010DC3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010DC40: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8010DC44: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8010DC48: jr          $ra
    // 0x8010DC4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8010DC4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8010DC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010DC50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010DC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010DC58: jal         0x80104148
    // 0x8010DC5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80104148(rdram, ctx);
        goto after_0;
    // 0x8010DC5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010DC60: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x8010DC64: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8010DC68: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    // 0x8010DC6C: bnel        $t6, $zero, L_8010DC9C
    if (ctx->r14 != 0) {
        // 0x8010DC70: lbu         $t7, 0x4($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X4);
            goto L_8010DC9C;
    }
    goto skip_0;
    // 0x8010DC70: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
    skip_0:
    // 0x8010DC74: jal         0x80104268
    // 0x8010DC78: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80104268(rdram, ctx);
        goto after_1;
    // 0x8010DC78: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8010DC7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010DC80: jal         0x8010DAE0
    // 0x8010DC84: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8010DAE0(rdram, ctx);
        goto after_2;
    // 0x8010DC84: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8010DC88: jal         0x800AE020
    // 0x8010DC8C: nop

    func_800AE020(rdram, ctx);
        goto after_3;
    // 0x8010DC8C: nop

    after_3:
    // 0x8010DC90: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8010DC94: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8010DC98: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
L_8010DC9C:
    // 0x8010DC9C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8010DCA0: sb          $t8, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r24;
    // 0x8010DCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010DCA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010DCAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010DCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010DCB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010DCB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010DCBC: jal         0x80104148
    // 0x8010DCC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80104148(rdram, ctx);
        goto after_0;
    // 0x8010DCC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8010DCC4: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8010DCC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010DCCC: blez        $v1, L_8010DD0C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8010DCD0: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_8010DD0C;
    }
    // 0x8010DCD0: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x8010DCD4: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8010DCD8: bne         $t7, $zero, L_8010DD0C
    if (ctx->r15 != 0) {
        // 0x8010DCDC: sb          $t6, 0x4($v0)
        MEM_B(0X4, ctx->r2) = ctx->r14;
            goto L_8010DD0C;
    }
    // 0x8010DCDC: sb          $t6, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r14;
    // 0x8010DCE0: jal         0x801042D8
    // 0x8010DCE4: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    func_801042D8(rdram, ctx);
        goto after_1;
    // 0x8010DCE4: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    after_1:
    // 0x8010DCE8: jal         0x800ADFE0
    // 0x8010DCEC: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800ADFE0(rdram, ctx);
        goto after_2;
    // 0x8010DCEC: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_2:
    // 0x8010DCF0: lh          $a0, 0x8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X8);
    // 0x8010DCF4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x8010DCF8: beql        $a0, $zero, L_8010DD10
    if (ctx->r4 == 0) {
        // 0x8010DCFC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010DD10;
    }
    goto skip_0;
    // 0x8010DCFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8010DD00: jal         0x80100E18
    // 0x8010DD04: nop

    func_80100E18(rdram, ctx);
        goto after_3;
    // 0x8010DD04: nop

    after_3:
    // 0x8010DD08: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
L_8010DD0C:
    // 0x8010DD0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010DD10:
    // 0x8010DD10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010DD14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010DD18: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010DD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010DD20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8010DD24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010DD28: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8010DD2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8010DD30: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8010DD34: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8010DD38: jal         0x80104148
    // 0x8010DD3C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80104148(rdram, ctx);
        goto after_0;
    // 0x8010DD3C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8010DD40: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010DD44: jal         0x801015D0
    // 0x8010DD48: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_801015D0(rdram, ctx);
        goto after_1;
    // 0x8010DD48: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x8010DD4C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8010DD50: lw          $t7, 0x74($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X74);
    // 0x8010DD54: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x8010DD58: bgezl       $t9, L_8010DEEC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8010DD5C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8010DEEC;
    }
    goto skip_0;
    // 0x8010DD5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8010DD60: jal         0x80104200
    // 0x8010DD64: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    func_80104200(rdram, ctx);
        goto after_2;
    // 0x8010DD64: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    after_2:
    // 0x8010DD68: beq         $v0, $zero, L_8010DEE0
    if (ctx->r2 == 0) {
        // 0x8010DD6C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8010DEE0;
    }
    // 0x8010DD6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010DD70: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x8010DD74: beql        $t0, $zero, L_8010DEE4
    if (ctx->r8 == 0) {
        // 0x8010DD78: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_8010DEE4;
    }
    goto skip_1;
    // 0x8010DD78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    skip_1:
    // 0x8010DD7C: lbu         $t1, 0x5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5);
    // 0x8010DD80: bnel        $t1, $zero, L_8010DE0C
    if (ctx->r9 != 0) {
        // 0x8010DD84: lw          $t8, 0x44($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X44);
            goto L_8010DE0C;
    }
    goto skip_2;
    // 0x8010DD84: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x8010DD88: jal         0x8008B304
    // 0x8010DD8C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_8008B304(rdram, ctx);
        goto after_3;
    // 0x8010DD8C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_3:
    // 0x8010DD90: jal         0x800B27E0
    // 0x8010DD94: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_800B27E0(rdram, ctx);
        goto after_4;
    // 0x8010DD94: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_4:
    // 0x8010DD98: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8010DD9C: jal         0x8008AEDC
    // 0x8010DDA0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008AEDC(rdram, ctx);
        goto after_5;
    // 0x8010DDA0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_5:
    // 0x8010DDA4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8010DDA8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8010DDAC: jal         0x8008C200
    // 0x8010DDB0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_8008C200(rdram, ctx);
        goto after_6;
    // 0x8010DDB0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_6:
    // 0x8010DDB4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8010DDB8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8010DDBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010DDC0: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8010DDC4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8010DDC8: lhu         $t4, 0x4744($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X4744);
    // 0x8010DDCC: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x8010DDD0: bnel        $t5, $at, L_8010DE0C
    if (ctx->r13 != ctx->r1) {
        // 0x8010DDD4: lw          $t8, 0x44($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X44);
            goto L_8010DE0C;
    }
    goto skip_3;
    // 0x8010DDD4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x8010DDD8: jal         0x800A7180
    // 0x8010DDDC: nop

    func_800A7180(rdram, ctx);
        goto after_7;
    // 0x8010DDDC: nop

    after_7:
    // 0x8010DDE0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8010DDE4: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8010DDE8: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8010DDEC: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x8010DDF0: jal         0x800AE080
    // 0x8010DDF4: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
    func_800AE080(rdram, ctx);
        goto after_8;
    // 0x8010DDF4: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
    after_8:
    // 0x8010DDF8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8010DDFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010DE00: jal         0x800AE598
    // 0x8010DE04: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800AE598(rdram, ctx);
        goto after_9;
    // 0x8010DE04: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_9:
    // 0x8010DE08: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8010DE0C:
    // 0x8010DE0C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8010DE10: addiu       $t0, $t0, 0x4740
    ctx->r8 = ADD32(ctx->r8, 0X4740);
    // 0x8010DE14: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8010DE18: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8010DE1C: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8010DE20: jal         0x800AE080
    // 0x8010DE24: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    func_800AE080(rdram, ctx);
        goto after_10;
    // 0x8010DE24: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_10:
    // 0x8010DE28: jal         0x800DF72C
    // 0x8010DE2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF72C(rdram, ctx);
        goto after_11;
    // 0x8010DE2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_11:
    // 0x8010DE30: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8010DE34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8010DE38: lhu         $v0, 0x4($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X4);
    // 0x8010DE3C: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x8010DE40: beq         $t3, $at, L_8010DE58
    if (ctx->r11 == ctx->r1) {
        // 0x8010DE44: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8010DE58;
    }
    // 0x8010DE44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010DE48: beq         $t3, $at, L_8010DED8
    if (ctx->r11 == ctx->r1) {
        // 0x8010DE4C: nop
    
            goto L_8010DED8;
    }
    // 0x8010DE4C: nop

    // 0x8010DE50: b           L_8010DEE4
    // 0x8010DE54: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_8010DEE4;
    // 0x8010DE54: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_8010DE58:
    // 0x8010DE58: lh          $a0, 0x8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X8);
    // 0x8010DE5C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8010DE60: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8010DE64: bne         $a0, $zero, L_8010DEA0
    if (ctx->r4 != 0) {
        // 0x8010DE68: nop
    
            goto L_8010DEA0;
    }
    // 0x8010DE68: nop

    // 0x8010DE6C: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8010DE70: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8010DE74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8010DE78: lhu         $t5, 0x16($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X16);
    // 0x8010DE7C: lhu         $a1, 0x14($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X14);
    // 0x8010DE80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8010DE84: jal         0x80100D24
    // 0x8010DE88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80100D24(rdram, ctx);
        goto after_12;
    // 0x8010DE88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_12:
    // 0x8010DE8C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8010DE90: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8010DE94: lh          $a0, 0x8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X8);
    // 0x8010DE98: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x8010DE9C: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
L_8010DEA0:
    // 0x8010DEA0: jal         0x80100A74
    // 0x8010DEA4: lbu         $a1, 0x6($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6);
    func_80100A74(rdram, ctx);
        goto after_13;
    // 0x8010DEA4: lbu         $a1, 0x6($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6);
    after_13:
    // 0x8010DEA8: jal         0x800DF818
    // 0x8010DEAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF818(rdram, ctx);
        goto after_14;
    // 0x8010DEAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x8010DEB0: lbu         $t8, 0x5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X5);
    // 0x8010DEB4: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8010DEB8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8010DEBC: beql        $t8, $zero, L_8010DED0
    if (ctx->r24 == 0) {
        // 0x8010DEC0: lw          $t0, 0xC($s0)
        ctx->r8 = MEM_W(ctx->r16, 0XC);
            goto L_8010DED0;
    }
    goto skip_4;
    // 0x8010DEC0: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    skip_4:
    // 0x8010DEC4: b           L_8010DEE0
    // 0x8010DEC8: sw          $zero, 0x28($t9)
    MEM_W(0X28, ctx->r25) = 0;
        goto L_8010DEE0;
    // 0x8010DEC8: sw          $zero, 0x28($t9)
    MEM_W(0X28, ctx->r25) = 0;
    // 0x8010DECC: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
L_8010DED0:
    // 0x8010DED0: b           L_8010DEE0
    // 0x8010DED4: sw          $t0, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->r8;
        goto L_8010DEE0;
    // 0x8010DED4: sw          $t0, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->r8;
L_8010DED8:
    // 0x8010DED8: jal         0x800DF714
    // 0x8010DEDC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_800DF714(rdram, ctx);
        goto after_15;
    // 0x8010DEDC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_15:
L_8010DEE0:
    // 0x8010DEE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_8010DEE4:
    // 0x8010DEE4: sb          $t2, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r10;
    // 0x8010DEE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8010DEEC:
    // 0x8010DEEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8010DEF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8010DEF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010DEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010DEFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010DF00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8010DF04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8010DF08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010DF0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8010DF10: addiu       $s1, $zero, 0xB
    ctx->r17 = ADD32(0, 0XB);
L_8010DF14:
    // 0x8010DF14: jal         0x80104148
    // 0x8010DF18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104148(rdram, ctx);
        goto after_0;
    // 0x8010DF18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8010DF1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8010DF20: bne         $s0, $s1, L_8010DF14
    if (ctx->r16 != ctx->r17) {
        // 0x8010DF24: sb          $zero, 0x5($v0)
        MEM_B(0X5, ctx->r2) = 0;
            goto L_8010DF14;
    }
    // 0x8010DF24: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8010DF28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010DF2C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8010DF30: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8010DF34: jr          $ra
    // 0x8010DF38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8010DF38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8010DF3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010DF3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010DF40: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8010DF44: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8010DF48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010DF4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8010DF50: addiu       $s1, $zero, 0xB
    ctx->r17 = ADD32(0, 0XB);
L_8010DF54:
    // 0x8010DF54: jal         0x80104148
    // 0x8010DF58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104148(rdram, ctx);
        goto after_0;
    // 0x8010DF58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8010DF5C: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x8010DF60: beql        $t6, $zero, L_8010DF7C
    if (ctx->r14 == 0) {
        // 0x8010DF64: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8010DF7C;
    }
    goto skip_0;
    // 0x8010DF64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8010DF68: jal         0x80104200
    // 0x8010DF6C: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    func_80104200(rdram, ctx);
        goto after_1;
    // 0x8010DF6C: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    after_1:
    // 0x8010DF70: jal         0x8008ADE4
    // 0x8010DF74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008ADE4(rdram, ctx);
        goto after_2;
    // 0x8010DF74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8010DF78: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8010DF7C:
    // 0x8010DF7C: bne         $s0, $s1, L_8010DF54
    if (ctx->r16 != ctx->r17) {
        // 0x8010DF80: nop
    
            goto L_8010DF54;
    }
    // 0x8010DF80: nop

    // 0x8010DF84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010DF88: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8010DF8C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8010DF90: jr          $ra
    // 0x8010DF94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8010DF94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8010DF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010DF98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010DF9C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8010DFA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010DFA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010DFA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8010DFAC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8010DFB0: addiu       $s2, $zero, 0xB
    ctx->r18 = ADD32(0, 0XB);
L_8010DFB4:
    // 0x8010DFB4: jal         0x80104148
    // 0x8010DFB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104148(rdram, ctx);
        goto after_0;
    // 0x8010DFB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8010DFBC: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x8010DFC0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8010DFC4: bnel        $t6, $zero, L_8010DFE8
    if (ctx->r14 != 0) {
        // 0x8010DFC8: sb          $zero, 0x4($v0)
        MEM_B(0X4, ctx->r2) = 0;
            goto L_8010DFE8;
    }
    goto skip_0;
    // 0x8010DFC8: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    skip_0:
    // 0x8010DFCC: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x8010DFD0: bnel        $t7, $zero, L_8010DFE8
    if (ctx->r15 != 0) {
        // 0x8010DFD4: sb          $zero, 0x4($v0)
        MEM_B(0X4, ctx->r2) = 0;
            goto L_8010DFE8;
    }
    goto skip_1;
    // 0x8010DFD4: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    skip_1:
    // 0x8010DFD8: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
    // 0x8010DFDC: beql        $t8, $zero, L_8010DFF4
    if (ctx->r24 == 0) {
        // 0x8010DFE0: lh          $t9, 0x0($v0)
        ctx->r25 = MEM_H(ctx->r2, 0X0);
            goto L_8010DFF4;
    }
    goto skip_2;
    // 0x8010DFE0: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    skip_2:
    // 0x8010DFE4: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
L_8010DFE8:
    // 0x8010DFE8: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x8010DFEC: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x8010DFF0: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
L_8010DFF4:
    // 0x8010DFF4: beql        $t9, $zero, L_8010E00C
    if (ctx->r25 == 0) {
        // 0x8010DFF8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8010E00C;
    }
    goto skip_3;
    // 0x8010DFF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
    // 0x8010DFFC: jal         0x800ADFE0
    // 0x8010E000: lh          $a0, 0x0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X0);
    func_800ADFE0(rdram, ctx);
        goto after_1;
    // 0x8010E000: lh          $a0, 0x0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X0);
    after_1:
    // 0x8010E004: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8010E008: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8010E00C:
    // 0x8010E00C: bne         $s0, $s2, L_8010DFB4
    if (ctx->r16 != ctx->r18) {
        // 0x8010E010: nop
    
            goto L_8010DFB4;
    }
    // 0x8010E010: nop

    // 0x8010E014: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8010E018: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010E01C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8010E020: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8010E024: jr          $ra
    // 0x8010E028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8010E028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8010E030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E030: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8010E034: lw          $a0, 0x7614($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7614);
    // 0x8010E038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010E03C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010E040: beql        $a0, $zero, L_8010E05C
    if (ctx->r4 == 0) {
        // 0x8010E044: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010E05C;
    }
    goto skip_0;
    // 0x8010E044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8010E048: jal         0x8001BAFC
    // 0x8010E04C: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x8010E04C: nop

    after_0:
    // 0x8010E050: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010E054: sw          $v0, 0x7614($at)
    MEM_W(0X7614, ctx->r1) = ctx->r2;
    // 0x8010E058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010E05C:
    // 0x8010E05C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010E060: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010E070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E070: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010E074: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8010E078: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x8010E07C: addiu       $s1, $s1, 0x7060
    ctx->r17 = ADD32(ctx->r17, 0X7060);
    // 0x8010E080: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010E084: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8010E088: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8010E08C: jal         0x800B3784
    // 0x8010E090: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    func_800B3784(rdram, ctx);
        goto after_0;
    // 0x8010E090: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_0:
    // 0x8010E094: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010E098: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010E09C: sb          $v0, 0x11($s1)
    MEM_B(0X11, ctx->r17) = ctx->r2;
    // 0x8010E0A0: addiu       $a2, $a2, 0x707C
    ctx->r6 = ADD32(ctx->r6, 0X707C);
    // 0x8010E0A4: addiu       $a1, $a1, 0x7078
    ctx->r5 = ADD32(ctx->r5, 0X7078);
    // 0x8010E0A8: jal         0x800B37A4
    // 0x8010E0AC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    func_800B37A4(rdram, ctx);
        goto after_1;
    // 0x8010E0AC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_1:
    // 0x8010E0B0: lbu         $t6, 0x10($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X10);
    // 0x8010E0B4: bnel        $t6, $zero, L_8010E108
    if (ctx->r14 != 0) {
        // 0x8010E0B8: lbu         $t9, 0x11($s1)
        ctx->r25 = MEM_BU(ctx->r17, 0X11);
            goto L_8010E108;
    }
    goto skip_0;
    // 0x8010E0B8: lbu         $t9, 0x11($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X11);
    skip_0:
    // 0x8010E0BC: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x8010E0C0: lw          $t7, 0x1C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X1C);
    // 0x8010E0C4: sltu        $at, $s0, $t7
    ctx->r1 = ctx->r16 < ctx->r15 ? 1 : 0;
    // 0x8010E0C8: beq         $at, $zero, L_8010E104
    if (ctx->r1 == 0) {
        // 0x8010E0CC: lui         $at, 0x4380
        ctx->r1 = S32(0X4380 << 16);
            goto L_8010E104;
    }
    // 0x8010E0CC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8010E0D0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8010E0D4: nop

    // 0x8010E0D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8010E0DC:
    // 0x8010E0DC: jal         0x800192FC
    // 0x8010E0E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800192FC(rdram, ctx);
        goto after_2;
    // 0x8010E0E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8010E0E4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8010E0E8: jal         0x800EF368
    // 0x8010E0EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EF368(rdram, ctx);
        goto after_3;
    // 0x8010E0EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8010E0F0: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x8010E0F4: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x8010E0F8: sltu        $at, $s0, $t8
    ctx->r1 = ctx->r16 < ctx->r24 ? 1 : 0;
    // 0x8010E0FC: bnel        $at, $zero, L_8010E0DC
    if (ctx->r1 != 0) {
        // 0x8010E100: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010E0DC;
    }
    goto skip_1;
    // 0x8010E100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_8010E104:
    // 0x8010E104: lbu         $t9, 0x11($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X11);
L_8010E108:
    // 0x8010E108: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010E10C: addiu       $a1, $a1, 0x7064
    ctx->r5 = ADD32(ctx->r5, 0X7064);
    // 0x8010E110: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x8010E114: bne         $at, $zero, L_8010E1E4
    if (ctx->r1 != 0) {
        // 0x8010E118: nop
    
            goto L_8010E1E4;
    }
    // 0x8010E118: nop

    // 0x8010E11C: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x8010E120: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x8010E124: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8010E128: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8010E12C: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8010E130: beql        $at, $zero, L_8010E154
    if (ctx->r1 == 0) {
        // 0x8010E134: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8010E154;
    }
    goto skip_2;
    // 0x8010E134: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_2:
L_8010E138:
    // 0x8010E138: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8010E13C: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x8010E140: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8010E144: bne         $at, $zero, L_8010E138
    if (ctx->r1 != 0) {
        // 0x8010E148: add.s       $f2, $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
            goto L_8010E138;
    }
    // 0x8010E148: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x8010E14C: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8010E150: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8010E154:
    // 0x8010E154: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8010E158: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8010E15C: beq         $at, $zero, L_8010E1E4
    if (ctx->r1 == 0) {
        // 0x8010E160: div.s       $f2, $f12, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
            goto L_8010E1E4;
    }
    // 0x8010E160: div.s       $f2, $f12, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8010E164: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
L_8010E168:
    // 0x8010E168: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x8010E16C: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x8010E170: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8010E174: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8010E178: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x8010E17C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8010E180: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x8010E184: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8010E188: sub.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8010E18C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8010E190: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8010E194: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8010E198: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8010E19C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8010E1A0: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x8010E1A4: nop

    // 0x8010E1A8: sw          $t2, -0x10($s0)
    MEM_W(-0X10, ctx->r16) = ctx->r10;
    // 0x8010E1AC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8010E1B0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8010E1B4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8010E1B8: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8010E1BC: nop

    // 0x8010E1C0: sw          $t5, -0xC($s0)
    MEM_W(-0XC, ctx->r16) = ctx->r13;
    // 0x8010E1C4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8010E1C8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8010E1CC: nop

    // 0x8010E1D0: sw          $t8, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r24;
    // 0x8010E1D4: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x8010E1D8: sltu        $at, $s0, $t9
    ctx->r1 = ctx->r16 < ctx->r25 ? 1 : 0;
    // 0x8010E1DC: bnel        $at, $zero, L_8010E168
    if (ctx->r1 != 0) {
        // 0x8010E1E0: lwc1        $f6, 0x18($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
            goto L_8010E168;
    }
    goto skip_3;
    // 0x8010E1E0: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    skip_3:
L_8010E1E4:
    // 0x8010E1E4: jal         0x800B37B8
    // 0x8010E1E8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    func_800B37B8(rdram, ctx);
        goto after_4;
    // 0x8010E1E8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_4:
    // 0x8010E1EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8010E1F0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8010E1F4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8010E1F8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8010E1FC: jr          $ra
    // 0x8010E200: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8010E200: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8010E204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E204: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8010E208: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8010E20C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8010E210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010E214: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8010E218: bgez        $a1, L_8010E228
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8010E21C: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_8010E228;
    }
    // 0x8010E21C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8010E220: b           L_8010E22C
    // 0x8010E224: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
        goto L_8010E22C;
    // 0x8010E224: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
L_8010E228:
    // 0x8010E228: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_8010E22C:
    // 0x8010E22C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010E230: lw          $a0, 0x7074($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7074);
    // 0x8010E234: jal         0x800B388C
    // 0x8010E238: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    func_800B388C(rdram, ctx);
        goto after_0;
    // 0x8010E238: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_0:
    // 0x8010E23C: jal         0x800DF8B4
    // 0x8010E240: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800DF8B4(rdram, ctx);
        goto after_1;
    // 0x8010E240: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x8010E244: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010E248: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8010E24C: jal         0x800B237C
    // 0x8010E250: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800B237C(rdram, ctx);
        goto after_2;
    // 0x8010E250: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x8010E254: jal         0x800DF8C4
    // 0x8010E258: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800DF8C4(rdram, ctx);
        goto after_3;
    // 0x8010E258: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x8010E25C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8010E260: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8010E264: jal         0x80019224
    // 0x8010E268: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_80019224(rdram, ctx);
        goto after_4;
    // 0x8010E268: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_4:
    // 0x8010E26C: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8010E270: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010E274: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010E278: lw          $a0, 0x7074($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7074);
    // 0x8010E27C: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8010E280: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8010E284: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8010E288: jal         0x800B3494
    // 0x8010E28C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_800B3494(rdram, ctx);
        goto after_5;
    // 0x8010E28C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8010E290: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8010E294: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010E298: bgez        $t6, L_8010E2A8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8010E29C: nop
    
            goto L_8010E2A8;
    }
    // 0x8010E29C: nop

    // 0x8010E2A0: jal         0x800B3748
    // 0x8010E2A4: lw          $a0, 0x7074($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7074);
    func_800B3748(rdram, ctx);
        goto after_6;
    // 0x8010E2A4: lw          $a0, 0x7074($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7074);
    after_6:
L_8010E2A8:
    // 0x8010E2A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010E2AC: jal         0x800B38C8
    // 0x8010E2B0: lw          $a0, 0x7074($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7074);
    func_800B38C8(rdram, ctx);
        goto after_7;
    // 0x8010E2B0: lw          $a0, 0x7074($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7074);
    after_7:
    // 0x8010E2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010E2B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8010E2BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010E2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E2C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010E2C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010E2CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010E2D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010E2D4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010E2D8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8010E2DC: sw          $a0, 0x7060($at)
    MEM_W(0X7060, ctx->r1) = ctx->r4;
    // 0x8010E2E0: jal         0x800DF8D4
    // 0x8010E2E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800DF8D4(rdram, ctx);
        goto after_0;
    // 0x8010E2E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010E2E8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8010E2EC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8010E2F0: addiu       $v1, $v1, 0x7060
    ctx->r3 = ADD32(ctx->r3, 0X7060);
    // 0x8010E2F4: sb          $v0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r2;
    // 0x8010E2F8: beq         $a1, $zero, L_8010E310
    if (ctx->r5 == 0) {
        // 0x8010E2FC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8010E310;
    }
    // 0x8010E2FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010E300: jal         0x800B37E4
    // 0x8010E304: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    func_800B37E4(rdram, ctx);
        goto after_1;
    // 0x8010E304: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    after_1:
    // 0x8010E308: b           L_8010E31C
    // 0x8010E30C: nop

        goto L_8010E31C;
    // 0x8010E30C: nop

L_8010E310:
    // 0x8010E310: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8010E314: jal         0x8010E204
    // 0x8010E318: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    func_8010E204(rdram, ctx);
        goto after_2;
    // 0x8010E318: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_2:
L_8010E31C:
    // 0x8010E31C: jal         0x8010E070
    // 0x8010E320: nop

    func_8010E070(rdram, ctx);
        goto after_3;
    // 0x8010E320: nop

    after_3:
    // 0x8010E324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010E328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010E32C: jr          $ra
    // 0x8010E330: nop

    return;
    // 0x8010E330: nop

;}
RECOMP_FUNC void func_8010E334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010E338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010E33C: jal         0x800B3310
    // 0x8010E340: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800B3310(rdram, ctx);
        goto after_0;
    // 0x8010E340: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8010E344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010E348: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010E34C: sw          $v0, 0x7074($at)
    MEM_W(0X7074, ctx->r1) = ctx->r2;
    // 0x8010E350: jr          $ra
    // 0x8010E354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8010E354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8010E358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E358: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010E35C: lw          $a0, 0x7074($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7074);
    // 0x8010E360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010E364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010E368: beql        $a0, $zero, L_8010E384
    if (ctx->r4 == 0) {
        // 0x8010E36C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010E384;
    }
    goto skip_0;
    // 0x8010E36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8010E370: jal         0x800B38E8
    // 0x8010E374: nop

    func_800B38E8(rdram, ctx);
        goto after_0;
    // 0x8010E374: nop

    after_0:
    // 0x8010E378: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010E37C: sw          $v0, 0x7074($at)
    MEM_W(0X7074, ctx->r1) = ctx->r2;
    // 0x8010E380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010E384:
    // 0x8010E384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010E388: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010E390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010E394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010E398: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010E39C: jal         0x800B3370
    // 0x8010E3A0: lw          $a0, 0x7074($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7074);
    func_800B3370(rdram, ctx);
        goto after_0;
    // 0x8010E3A0: lw          $a0, 0x7074($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7074);
    after_0:
    // 0x8010E3A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010E3A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010E3AC: sw          $zero, 0x7074($at)
    MEM_W(0X7074, ctx->r1) = 0;
    // 0x8010E3B0: jr          $ra
    // 0x8010E3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8010E3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8010E3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E3B8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010E3BC: jr          $ra
    // 0x8010E3C0: lw          $v0, 0x7074($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7074);
    return;
    // 0x8010E3C0: lw          $v0, 0x7074($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7074);
;}
RECOMP_FUNC void func_8010E3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E3C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8010E3C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8010E3CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010E3D0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8010E3D4: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
L_8010E3D8:
    // 0x8010E3D8: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8010E3DC: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8010E3E0: lwc1        $f14, 0x4($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8010E3E4: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8010E3E8: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8010E3EC: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8010E3F0: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8010E3F4: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8010E3F8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8010E3FC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8010E400: mul.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8010E404: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8010E408: add.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x8010E40C: bne         $v1, $a0, L_8010E3D8
    if (ctx->r3 != ctx->r4) {
        // 0x8010E410: swc1        $f12, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f12.u32l;
            goto L_8010E3D8;
    }
    // 0x8010E410: swc1        $f12, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f12.u32l;
    // 0x8010E414: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8010E418: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8010E41C: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8010E420: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8010E424: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8010E428: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8010E42C: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8010E430: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8010E434: jal         0x8002DCA0
    // 0x8010E438: add.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x8010E438: add.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f10.fl;
    after_0:
    // 0x8010E43C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8010E440: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8010E444: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8010E448: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8010E44C: nop

    // 0x8010E450: bc1fl       L_8010E4AC
    if (!c1cs) {
        // 0x8010E454: sw          $zero, 0x8($a1)
        MEM_W(0X8, ctx->r5) = 0;
            goto L_8010E4AC;
    }
    goto skip_0;
    // 0x8010E454: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    skip_0:
    // 0x8010E458: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8010E45C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8010E460: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8010E464: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8010E468: trunc.w.s   $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8010E46C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8010E470: nop

    // 0x8010E474: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8010E478: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8010E47C: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8010E480: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8010E484: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8010E488: nop

    // 0x8010E48C: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8010E490: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8010E494: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8010E498: trunc.w.s   $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8010E49C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8010E4A0: b           L_8010E4B4
    // 0x8010E4A4: sw          $t1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r9;
        goto L_8010E4B4;
    // 0x8010E4A4: sw          $t1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r9;
    // 0x8010E4A8: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
L_8010E4AC:
    // 0x8010E4AC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8010E4B0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_8010E4B4:
    // 0x8010E4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010E4B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8010E4BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010E4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E4C4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8010E4C8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8010E4CC: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
    // 0x8010E4D0: addiu       $s6, $s6, 0x7060
    ctx->r22 = ADD32(ctx->r22, 0X7060);
    // 0x8010E4D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8010E4D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8010E4DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010E4E0: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x8010E4E4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8010E4E8: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8010E4EC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8010E4F0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8010E4F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8010E4F8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8010E4FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8010E500: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8010E504: jal         0x800DF8B4
    // 0x8010E508: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    func_800DF8B4(rdram, ctx);
        goto after_0;
    // 0x8010E508: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    after_0:
    // 0x8010E50C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8010E510: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8010E514: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8010E518: addu        $s5, $t7, $v0
    ctx->r21 = ADD32(ctx->r15, ctx->r2);
    // 0x8010E51C: jal         0x800DF8CC
    // 0x8010E520: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    func_800DF8CC(rdram, ctx);
        goto after_1;
    // 0x8010E520: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    after_1:
    // 0x8010E524: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8010E528: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8010E52C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8010E530: jal         0x800DF8BC
    // 0x8010E534: addu        $fp, $t9, $v0
    ctx->r30 = ADD32(ctx->r25, ctx->r2);
    func_800DF8BC(rdram, ctx);
        goto after_2;
    // 0x8010E534: addu        $fp, $t9, $v0
    ctx->r30 = ADD32(ctx->r25, ctx->r2);
    after_2:
    // 0x8010E538: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8010E53C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8010E540: multu       $v1, $a0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E544: addu        $t3, $v1, $s1
    ctx->r11 = ADD32(ctx->r3, ctx->r17);
    // 0x8010E548: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x8010E54C: lbu         $t4, 0x11($s6)
    ctx->r12 = MEM_BU(ctx->r22, 0X11);
    // 0x8010E550: mflo        $t1
    ctx->r9 = lo;
    // 0x8010E554: addu        $s3, $t1, $v0
    ctx->r19 = ADD32(ctx->r9, ctx->r2);
    // 0x8010E558: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x8010E55C: multu       $s1, $a0
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E560: mflo        $t2
    ctx->r10 = lo;
    // 0x8010E564: addu        $s7, $t2, $s3
    ctx->r23 = ADD32(ctx->r10, ctx->r19);
    // 0x8010E568: beq         $t4, $zero, L_8010E764
    if (ctx->r12 == 0) {
        // 0x8010E56C: or          $s4, $s7, $zero
        ctx->r20 = ctx->r23 | 0;
            goto L_8010E764;
    }
    // 0x8010E56C: or          $s4, $s7, $zero
    ctx->r20 = ctx->r23 | 0;
    // 0x8010E570: sltu        $at, $s3, $s7
    ctx->r1 = ctx->r19 < ctx->r23 ? 1 : 0;
    // 0x8010E574: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x8010E578: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x8010E57C: beq         $at, $zero, L_8010E59C
    if (ctx->r1 == 0) {
        // 0x8010E580: lw          $a0, 0xC($s6)
        ctx->r4 = MEM_W(ctx->r22, 0XC);
            goto L_8010E59C;
    }
    // 0x8010E580: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
L_8010E584:
    // 0x8010E584: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8010E588: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x8010E58C: sh          $v0, -0xA($s0)
    MEM_H(-0XA, ctx->r16) = ctx->r2;
    // 0x8010E590: sh          $v1, -0x8($s0)
    MEM_H(-0X8, ctx->r16) = ctx->r3;
    // 0x8010E594: bne         $at, $zero, L_8010E584
    if (ctx->r1 != 0) {
        // 0x8010E598: sh          $a0, -0x6($s0)
        MEM_H(-0X6, ctx->r16) = ctx->r4;
            goto L_8010E584;
    }
    // 0x8010E598: sh          $a0, -0x6($s0)
    MEM_H(-0X6, ctx->r16) = ctx->r4;
L_8010E59C:
    // 0x8010E59C: lw          $s2, 0x18($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X18);
    // 0x8010E5A0: lw          $t5, 0x1C($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X1C);
    // 0x8010E5A4: sltu        $at, $s2, $t5
    ctx->r1 = ctx->r18 < ctx->r13 ? 1 : 0;
    // 0x8010E5A8: beql        $at, $zero, L_8010E6CC
    if (ctx->r1 == 0) {
        // 0x8010E5AC: sltu        $at, $s3, $s7
        ctx->r1 = ctx->r19 < ctx->r23 ? 1 : 0;
            goto L_8010E6CC;
    }
    goto skip_0;
    // 0x8010E5AC: sltu        $at, $s3, $s7
    ctx->r1 = ctx->r19 < ctx->r23 ? 1 : 0;
    skip_0:
    // 0x8010E5B0: lbu         $t6, 0x10($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X10);
L_8010E5B4:
    // 0x8010E5B4: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x8010E5B8: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
    // 0x8010E5BC: beq         $t6, $zero, L_8010E5E0
    if (ctx->r14 == 0) {
        // 0x8010E5C0: lw          $a0, 0xB0($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XB0);
            goto L_8010E5E0;
    }
    // 0x8010E5C0: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x8010E5C4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x8010E5C8: jal         0x8010E3C4
    // 0x8010E5CC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8010E3C4(rdram, ctx);
        goto after_3;
    // 0x8010E5CC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x8010E5D0: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8010E5D4: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x8010E5D8: b           L_8010E608
    // 0x8010E5DC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
        goto L_8010E608;
    // 0x8010E5DC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
L_8010E5E0:
    // 0x8010E5E0: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8010E5E4: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x8010E5E8: lwc1        $f16, 0x8($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X8);
    // 0x8010E5EC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8010E5F0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8010E5F4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8010E5F8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8010E5FC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8010E600: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8010E604: nop

L_8010E608:
    // 0x8010E608: sltu        $at, $s3, $s7
    ctx->r1 = ctx->r19 < ctx->r23 ? 1 : 0;
    // 0x8010E60C: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x8010E610: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8010E614: beq         $at, $zero, L_8010E6B4
    if (ctx->r1 == 0) {
        // 0x8010E618: lw          $a1, 0x14($s2)
        ctx->r5 = MEM_W(ctx->r18, 0X14);
            goto L_8010E6B4;
    }
    // 0x8010E618: lw          $a1, 0x14($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X14);
L_8010E61C:
    // 0x8010E61C: lb          $t1, 0x2($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X2);
    // 0x8010E620: lb          $t3, 0x0($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X0);
    // 0x8010E624: lb          $t6, 0x1($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X1);
    // 0x8010E628: multu       $t1, $t0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E62C: mflo        $t2
    ctx->r10 = lo;
    // 0x8010E630: nop

    // 0x8010E634: nop

    // 0x8010E638: multu       $a2, $t3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E63C: mflo        $t4
    ctx->r12 = lo;
    // 0x8010E640: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8010E644: nop

    // 0x8010E648: multu       $a3, $t6
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E64C: mflo        $t7
    ctx->r15 = lo;
    // 0x8010E650: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    // 0x8010E654: blezl       $v0, L_8010E6A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8010E658: addiu       $s0, $s0, 0xA
        ctx->r16 = ADD32(ctx->r16, 0XA);
            goto L_8010E6A8;
    }
    goto skip_1;
    // 0x8010E658: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    skip_1:
    // 0x8010E65C: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E660: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x8010E664: lh          $t2, 0x2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2);
    // 0x8010E668: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x8010E66C: mflo        $t9
    ctx->r25 = lo;
    // 0x8010E670: sra         $t1, $t9, 15
    ctx->r9 = S32(SIGNED(ctx->r25) >> 15);
    // 0x8010E674: addu        $t3, $t8, $t1
    ctx->r11 = ADD32(ctx->r24, ctx->r9);
    // 0x8010E678: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E67C: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
    // 0x8010E680: mflo        $t4
    ctx->r12 = lo;
    // 0x8010E684: sra         $t6, $t4, 15
    ctx->r14 = S32(SIGNED(ctx->r12) >> 15);
    // 0x8010E688: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x8010E68C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E690: sh          $t5, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r13;
    // 0x8010E694: mflo        $t9
    ctx->r25 = lo;
    // 0x8010E698: sra         $t8, $t9, 15
    ctx->r24 = S32(SIGNED(ctx->r25) >> 15);
    // 0x8010E69C: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x8010E6A0: sh          $t1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r9;
    // 0x8010E6A4: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
L_8010E6A8:
    // 0x8010E6A8: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x8010E6AC: bne         $at, $zero, L_8010E61C
    if (ctx->r1 != 0) {
        // 0x8010E6B0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8010E61C;
    }
    // 0x8010E6B0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8010E6B4:
    // 0x8010E6B4: lw          $t3, 0x1C($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X1C);
    // 0x8010E6B8: addiu       $s2, $s2, 0x1C
    ctx->r18 = ADD32(ctx->r18, 0X1C);
    // 0x8010E6BC: sltu        $at, $s2, $t3
    ctx->r1 = ctx->r18 < ctx->r11 ? 1 : 0;
    // 0x8010E6C0: bnel        $at, $zero, L_8010E5B4
    if (ctx->r1 != 0) {
        // 0x8010E6C4: lbu         $t6, 0x10($s6)
        ctx->r14 = MEM_BU(ctx->r22, 0X10);
            goto L_8010E5B4;
    }
    goto skip_2;
    // 0x8010E6C4: lbu         $t6, 0x10($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X10);
    skip_2:
    // 0x8010E6C8: sltu        $at, $s3, $s7
    ctx->r1 = ctx->r19 < ctx->r23 ? 1 : 0;
L_8010E6CC:
    // 0x8010E6CC: beql        $at, $zero, L_8010E7C8
    if (ctx->r1 == 0) {
        // 0x8010E6D0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8010E7C8;
    }
    goto skip_3;
    // 0x8010E6D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_3:
L_8010E6D4:
    // 0x8010E6D4: lbu         $t4, 0x6($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X6);
    // 0x8010E6D8: lh          $t2, 0x0($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X0);
    // 0x8010E6DC: multu       $t4, $t2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E6E0: mflo        $v0
    ctx->r2 = lo;
    // 0x8010E6E4: sra         $t6, $v0, 8
    ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8010E6E8: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x8010E6EC: bne         $at, $zero, L_8010E6F8
    if (ctx->r1 != 0) {
        // 0x8010E6F0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8010E6F8;
    }
    // 0x8010E6F0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8010E6F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8010E6F8:
    // 0x8010E6F8: sb          $v0, 0xC($s5)
    MEM_B(0XC, ctx->r21) = ctx->r2;
    // 0x8010E6FC: lh          $t9, 0x2($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X2);
    // 0x8010E700: lbu         $t5, 0x7($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X7);
    // 0x8010E704: multu       $t5, $t9
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E708: mflo        $v0
    ctx->r2 = lo;
    // 0x8010E70C: sra         $t7, $v0, 8
    ctx->r15 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8010E710: slti        $at, $t7, 0x100
    ctx->r1 = SIGNED(ctx->r15) < 0X100 ? 1 : 0;
    // 0x8010E714: bne         $at, $zero, L_8010E720
    if (ctx->r1 != 0) {
        // 0x8010E718: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8010E720;
    }
    // 0x8010E718: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8010E71C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8010E720:
    // 0x8010E720: sb          $v0, 0xD($s5)
    MEM_B(0XD, ctx->r21) = ctx->r2;
    // 0x8010E724: lh          $t1, 0x4($s3)
    ctx->r9 = MEM_H(ctx->r19, 0X4);
    // 0x8010E728: lbu         $t8, 0x8($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X8);
    // 0x8010E72C: addiu       $s3, $s3, 0xA
    ctx->r19 = ADD32(ctx->r19, 0XA);
    // 0x8010E730: multu       $t8, $t1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E734: mflo        $v0
    ctx->r2 = lo;
    // 0x8010E738: sra         $t3, $v0, 8
    ctx->r11 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8010E73C: slti        $at, $t3, 0x100
    ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
    // 0x8010E740: bne         $at, $zero, L_8010E74C
    if (ctx->r1 != 0) {
        // 0x8010E744: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_8010E74C;
    }
    // 0x8010E744: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x8010E748: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8010E74C:
    // 0x8010E74C: sltu        $at, $s3, $s4
    ctx->r1 = ctx->r19 < ctx->r20 ? 1 : 0;
    // 0x8010E750: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x8010E754: bne         $at, $zero, L_8010E6D4
    if (ctx->r1 != 0) {
        // 0x8010E758: sb          $v0, -0x2($s5)
        MEM_B(-0X2, ctx->r21) = ctx->r2;
            goto L_8010E6D4;
    }
    // 0x8010E758: sb          $v0, -0x2($s5)
    MEM_B(-0X2, ctx->r21) = ctx->r2;
    // 0x8010E75C: b           L_8010E7C8
    // 0x8010E760: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8010E7C8;
    // 0x8010E760: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8010E764:
    // 0x8010E764: sltu        $at, $s3, $s7
    ctx->r1 = ctx->r19 < ctx->r23 ? 1 : 0;
    // 0x8010E768: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x8010E76C: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x8010E770: beq         $at, $zero, L_8010E7C4
    if (ctx->r1 == 0) {
        // 0x8010E774: lw          $a0, 0xC($s6)
        ctx->r4 = MEM_W(ctx->r22, 0XC);
            goto L_8010E7C4;
    }
    // 0x8010E774: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
L_8010E778:
    // 0x8010E778: lbu         $t4, 0x6($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X6);
    // 0x8010E77C: addiu       $s3, $s3, 0xA
    ctx->r19 = ADD32(ctx->r19, 0XA);
    // 0x8010E780: sltu        $at, $s3, $s4
    ctx->r1 = ctx->r19 < ctx->r20 ? 1 : 0;
    // 0x8010E784: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E788: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x8010E78C: mflo        $t2
    ctx->r10 = lo;
    // 0x8010E790: sra         $t6, $t2, 8
    ctx->r14 = S32(SIGNED(ctx->r10) >> 8);
    // 0x8010E794: sb          $t6, -0x4($s5)
    MEM_B(-0X4, ctx->r21) = ctx->r14;
    // 0x8010E798: lbu         $t5, -0x3($s3)
    ctx->r13 = MEM_BU(ctx->r19, -0X3);
    // 0x8010E79C: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E7A0: mflo        $t9
    ctx->r25 = lo;
    // 0x8010E7A4: sra         $t7, $t9, 8
    ctx->r15 = S32(SIGNED(ctx->r25) >> 8);
    // 0x8010E7A8: sb          $t7, -0x3($s5)
    MEM_B(-0X3, ctx->r21) = ctx->r15;
    // 0x8010E7AC: lbu         $t8, -0x2($s3)
    ctx->r24 = MEM_BU(ctx->r19, -0X2);
    // 0x8010E7B0: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E7B4: mflo        $t1
    ctx->r9 = lo;
    // 0x8010E7B8: sra         $t3, $t1, 8
    ctx->r11 = S32(SIGNED(ctx->r9) >> 8);
    // 0x8010E7BC: bne         $at, $zero, L_8010E778
    if (ctx->r1 != 0) {
        // 0x8010E7C0: sb          $t3, -0x2($s5)
        MEM_B(-0X2, ctx->r21) = ctx->r11;
            goto L_8010E778;
    }
    // 0x8010E7C0: sb          $t3, -0x2($s5)
    MEM_B(-0X2, ctx->r21) = ctx->r11;
L_8010E7C4:
    // 0x8010E7C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8010E7C8:
    // 0x8010E7C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010E7CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8010E7D0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8010E7D4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8010E7D8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8010E7DC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8010E7E0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8010E7E4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8010E7E8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8010E7EC: jr          $ra
    // 0x8010E7F0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x8010E7F0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8010E7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E7F4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010E7F8: addiu       $v0, $v0, 0x7060
    ctx->r2 = ADD32(ctx->r2, 0X7060);
    // 0x8010E7FC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8010E800: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x8010E804: jr          $ra
    // 0x8010E808: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    return;
    // 0x8010E808: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8010E810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E810: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010E814: jr          $ra
    // 0x8010E818: addiu       $v0, $v0, 0x7080
    ctx->r2 = ADD32(ctx->r2, 0X7080);
    return;
    // 0x8010E818: addiu       $v0, $v0, 0x7080
    ctx->r2 = ADD32(ctx->r2, 0X7080);
;}
RECOMP_FUNC void func_8010E81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E81C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8010E820: addiu       $t0, $t0, 0x7080
    ctx->r8 = ADD32(ctx->r8, 0X7080);
    // 0x8010E824: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8010E828: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010E82C: addiu       $v1, $v0, 0x709C
    ctx->r3 = ADD32(ctx->r2, 0X709C);
    // 0x8010E830: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8010E834: beq         $at, $zero, L_8010E860
    if (ctx->r1 == 0) {
        // 0x8010E838: addiu       $t1, $zero, 0x28
        ctx->r9 = ADD32(0, 0X28);
            goto L_8010E860;
    }
    // 0x8010E838: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x8010E83C: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
L_8010E840:
    // 0x8010E840: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8010E844: nop

    // 0x8010E848: bc1t        L_8010E860
    if (c1cs) {
        // 0x8010E84C: nop
    
            goto L_8010E860;
    }
    // 0x8010E84C: nop

    // 0x8010E850: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x8010E854: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8010E858: bnel        $at, $zero, L_8010E840
    if (ctx->r1 != 0) {
        // 0x8010E85C: lwc1        $f4, 0x24($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
            goto L_8010E840;
    }
    goto skip_0;
    // 0x8010E85C: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    skip_0:
L_8010E860:
    // 0x8010E860: bnel        $v1, $a0, L_8010E894
    if (ctx->r3 != ctx->r4) {
            // 0x8010E864: lw          $t8, 0x18($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X18);
    static_3_8010E894(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x8010E864: lw          $t8, 0x18($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X18);
    skip_1:
    // 0x8010E868: lw          $t6, 0x18($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X18);
    // 0x8010E86C: addiu       $t7, $a0, 0x28
    ctx->r15 = ADD32(ctx->r4, 0X28);
    // 0x8010E870: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8010E874: sltu        $at, $a0, $t6
    ctx->r1 = ctx->r4 < ctx->r14 ? 1 : 0;
    // 0x8010E878: beq         $at, $zero, L_8010E888
    if (ctx->r1 == 0) {
            // 0x8010E87C: nop

    func_8010E888(rdram, ctx);
    return;
    }
    // 0x8010E87C: nop

    // 0x8010E880: jr          $ra
    // 0x8010E884: sw          $t7, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r15;
    return;
    // 0x8010E884: sw          $t7, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r15;
;}
RECOMP_FUNC void func_8010E888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E888: jr          $ra
    // 0x8010E88C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8010E88C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8010E890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E890: lw          $t8, 0x18($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X18);
    // 0x8010E894: bnel        $t8, $a0, L_8010E8AC
    if (ctx->r24 != ctx->r4) {
        // 0x8010E898: subu        $t2, $a0, $v1
        ctx->r10 = SUB32(ctx->r4, ctx->r3);
            goto L_8010E8AC;
    }
    goto skip_0;
    // 0x8010E898: subu        $t2, $a0, $v1
    ctx->r10 = SUB32(ctx->r4, ctx->r3);
    skip_0:
    // 0x8010E89C: addiu       $t9, $a0, -0x28
    ctx->r25 = ADD32(ctx->r4, -0X28);
    // 0x8010E8A0: sw          $t9, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r25;
    // 0x8010E8A4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8010E8A8: subu        $t2, $a0, $v1
    ctx->r10 = SUB32(ctx->r4, ctx->r3);
L_8010E8AC:
    // 0x8010E8AC: div         $zero, $t2, $t1
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r9)));
    // 0x8010E8B0: mflo        $t3
    ctx->r11 = lo;
    // 0x8010E8B4: addiu       $a1, $a0, 0x28
    ctx->r5 = ADD32(ctx->r4, 0X28);
    // 0x8010E8B8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8010E8BC: multu       $t3, $t1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010E8C0: bne         $t1, $zero, L_8010E8CC
    if (ctx->r9 != 0) {
        // 0x8010E8C4: nop
    
            goto L_8010E8CC;
    }
    // 0x8010E8C4: nop

    // 0x8010E8C8: break       7
    do_break(2148591816);
L_8010E8CC:
    // 0x8010E8CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8010E8D0: bne         $t1, $at, L_8010E8E4
    if (ctx->r9 != ctx->r1) {
        // 0x8010E8D4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8010E8E4;
    }
    // 0x8010E8D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8010E8D8: bne         $t2, $at, L_8010E8E4
    if (ctx->r10 != ctx->r1) {
        // 0x8010E8DC: nop
    
            goto L_8010E8E4;
    }
    // 0x8010E8DC: nop

    // 0x8010E8E0: break       6
    do_break(2148591840);
L_8010E8E4:
    // 0x8010E8E4: mflo        $a2
    ctx->r6 = lo;
    // 0x8010E8E8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8010E8EC: blez        $a2, L_8010E914
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8010E8F0: addiu       $a3, $a0, -0x4
        ctx->r7 = ADD32(ctx->r4, -0X4);
            goto L_8010E914;
    }
    // 0x8010E8F0: addiu       $a3, $a0, -0x4
    ctx->r7 = ADD32(ctx->r4, -0X4);
L_8010E8F4:
    // 0x8010E8F4: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x8010E8F8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8010E8FC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8010E900: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x8010E904: bgtz        $a2, L_8010E8F4
    if (SIGNED(ctx->r6) > 0) {
        // 0x8010E908: sw          $t4, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r12;
            goto L_8010E8F4;
    }
    // 0x8010E908: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8010E90C: lw          $a1, 0x14($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X14);
    // 0x8010E910: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
L_8010E914:
    // 0x8010E914: sw          $a1, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r5;
    // 0x8010E918: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8010E91C: jr          $ra
    // 0x8010E920: nop

    return;
    // 0x8010E920: nop

;}
RECOMP_FUNC void func_8010E924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010E924: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8010E928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010E92C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8010E930: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8010E934: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8010E938: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8010E93C: jal         0x800C8800
    // 0x8010E940: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800C8800(rdram, ctx);
        goto after_0;
    // 0x8010E940: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8010E944: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8010E948: jal         0x800C883C
    // 0x8010E94C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_800C883C(rdram, ctx);
        goto after_1;
    // 0x8010E94C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8010E950: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8010E954: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8010E958: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8010E95C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8010E960: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8010E964: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8010E968: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8010E96C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8010E970: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8010E974: mul.s       $f16, $f8, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8010E978: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x8010E97C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8010E980: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8010E984: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8010E988: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x8010E98C: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8010E990: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8010E994: jal         0x8002DCA0
    // 0x8010E998: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x8010E998: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    after_2:
    // 0x8010E99C: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010E9A0: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8010E9A4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8010E9A8: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8010E9AC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8010E9B0: nop

    // 0x8010E9B4: bc1f        L_8010E9C4
    if (!c1cs) {
        // 0x8010E9B8: nop
    
            goto L_8010E9C4;
    }
    // 0x8010E9B8: nop

    // 0x8010E9BC: b           L_8010EABC
    // 0x8010E9C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010EABC;
    // 0x8010E9C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010E9C4:
    // 0x8010E9C4: jal         0x8010E81C
    // 0x8010E9C8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    func_8010E81C(rdram, ctx);
        goto after_3;
    // 0x8010E9C8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x8010E9CC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8010E9D0: bne         $v0, $zero, L_8010E9E0
    if (ctx->r2 != 0) {
        // 0x8010E9D4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8010E9E0;
    }
    // 0x8010E9D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8010E9D8: b           L_8010EABC
    // 0x8010E9DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010EABC;
    // 0x8010E9DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010E9E0:
    // 0x8010E9E0: swc1        $f12, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f12.u32l;
    // 0x8010E9E4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x8010E9E8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8010E9EC: jal         0x800193C4
    // 0x8010E9F0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800193C4(rdram, ctx);
        goto after_4;
    // 0x8010E9F0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x8010E9F4: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8010E9F8: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x8010E9FC: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8010EA00: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8010EA04: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8010EA08: addiu       $a1, $v1, 0x18
    ctx->r5 = ADD32(ctx->r3, 0X18);
    // 0x8010EA0C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8010EA10: nop

    // 0x8010EA14: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8010EA18: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8010EA1C: trunc.w.s   $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8010EA20: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8010EA24: nop

    // 0x8010EA28: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8010EA2C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010EA30: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8010EA34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8010EA38: lui         $at, 0x4680
    ctx->r1 = S32(0X4680 << 16);
    // 0x8010EA3C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x8010EA40: nop

    // 0x8010EA44: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x8010EA48: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8010EA4C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010EA50: div.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8010EA54: div.s       $f18, $f6, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8010EA58: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8010EA5C: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8010EA60: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8010EA64: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x8010EA68: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8010EA6C: nop

    // 0x8010EA70: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x8010EA74: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010EA78: mul.s       $f18, $f6, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8010EA7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8010EA80: trunc.w.s   $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8010EA84: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8010EA88: nop

    // 0x8010EA8C: sw          $t5, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r13;
    // 0x8010EA90: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8010EA94: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8010EA98: sub.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8010EA9C: div.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8010EAA0: trunc.w.s   $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8010EAA4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8010EAA8: nop

    // 0x8010EAAC: sw          $t7, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r15;
    // 0x8010EAB0: jal         0x800C8900
    // 0x8010EAB4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800C8900(rdram, ctx);
        goto after_5;
    // 0x8010EAB4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_5:
    // 0x8010EAB8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_8010EABC:
    // 0x8010EABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010EAC0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8010EAC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010EACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010EACC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8010EAD0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8010EAD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010EAD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010EADC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8010EAE0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8010EAE4: bgez        $a1, L_8010EAF4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8010EAE8: sw          $a2, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r6;
            goto L_8010EAF4;
    }
    // 0x8010EAE8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8010EAEC: b           L_8010EAF8
    // 0x8010EAF0: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
        goto L_8010EAF8;
    // 0x8010EAF0: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
L_8010EAF4:
    // 0x8010EAF4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8010EAF8:
    // 0x8010EAF8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8010EAFC: addiu       $v1, $v1, 0x7080
    ctx->r3 = ADD32(ctx->r3, 0X7080);
    // 0x8010EB00: lw          $t7, 0x14($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X14);
    // 0x8010EB04: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8010EB08: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8010EB0C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8010EB10: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8010EB14: sw          $t8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r24;
    // 0x8010EB18: jal         0x800DF8B4
    // 0x8010EB1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8B4(rdram, ctx);
        goto after_0;
    // 0x8010EB1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8010EB20: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x8010EB24: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8010EB28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010EB2C: jal         0x800B237C
    // 0x8010EB30: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800B237C(rdram, ctx);
        goto after_1;
    // 0x8010EB30: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x8010EB34: jal         0x800DF8C4
    // 0x8010EB38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8C4(rdram, ctx);
        goto after_2;
    // 0x8010EB38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8010EB3C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8010EB40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010EB44: jal         0x80019224
    // 0x8010EB48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019224(rdram, ctx);
        goto after_3;
    // 0x8010EB48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x8010EB4C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8010EB50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010EB54: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8010EB58: jal         0x800DF900
    // 0x8010EB5C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    func_800DF900(rdram, ctx);
        goto after_4;
    // 0x8010EB5C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x8010EB60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8010EB64: jal         0x800C8760
    // 0x8010EB68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C8760(rdram, ctx);
        goto after_5;
    // 0x8010EB68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8010EB6C: beq         $v0, $zero, L_8010EBA0
    if (ctx->r2 == 0) {
        // 0x8010EB70: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8010EBA0;
    }
    // 0x8010EB70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8010EB74:
    // 0x8010EB74: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8010EB78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010EB7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8010EB80: jal         0x8010E924
    // 0x8010EB84: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_8010E924(rdram, ctx);
        goto after_6;
    // 0x8010EB84: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x8010EB88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010EB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8010EB90: jal         0x800C878C
    // 0x8010EB94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800C878C(rdram, ctx);
        goto after_7;
    // 0x8010EB94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8010EB98: bne         $v0, $zero, L_8010EB74
    if (ctx->r2 != 0) {
        // 0x8010EB9C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8010EB74;
    }
    // 0x8010EB9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8010EBA0:
    // 0x8010EBA0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010EBA4: addiu       $v0, $v0, 0x7080
    ctx->r2 = ADD32(ctx->r2, 0X7080);
    // 0x8010EBA8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x8010EBAC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x8010EBB0: subu        $t0, $t9, $v0
    ctx->r8 = SUB32(ctx->r25, ctx->r2);
    // 0x8010EBB4: addiu       $t1, $t0, -0x1C
    ctx->r9 = ADD32(ctx->r8, -0X1C);
    // 0x8010EBB8: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8010EBBC: mflo        $t2
    ctx->r10 = lo;
    // 0x8010EBC0: sb          $t2, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r10;
    // 0x8010EBC4: jal         0x80018DAC
    // 0x8010EBC8: nop

    func_80018DAC(rdram, ctx);
        goto after_8;
    // 0x8010EBC8: nop

    after_8:
    // 0x8010EBCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8010EBD0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8010EBD4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8010EBD8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8010EBDC: jr          $ra
    // 0x8010EBE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8010EBE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8010EBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010EBE4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8010EBE8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8010EBEC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8010EBF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8010EBF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010EBF8: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x8010EBFC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8010EC00: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8010EC04: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8010EC08: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8010EC0C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8010EC10: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8010EC14: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8010EC18: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010EC1C: jal         0x800B2344
    // 0x8010EC20: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    func_800B2344(rdram, ctx);
        goto after_0;
    // 0x8010EC20: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_0:
    // 0x8010EC24: lui         $fp, 0x8013
    ctx->r30 = S32(0X8013 << 16);
    // 0x8010EC28: addiu       $fp, $fp, 0x7080
    ctx->r30 = ADD32(ctx->r30, 0X7080);
    // 0x8010EC2C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8010EC30: lbu         $t7, 0x11($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X11);
    // 0x8010EC34: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8010EC38: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8010EC3C: addu        $a1, $t6, $s7
    ctx->r5 = ADD32(ctx->r14, ctx->r23);
    // 0x8010EC40: addiu       $s4, $s0, 0x18
    ctx->r20 = ADD32(ctx->r16, 0X18);
    // 0x8010EC44: beq         $t7, $zero, L_8010EE20
    if (ctx->r15 == 0) {
        // 0x8010EC48: sw          $a1, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r5;
            goto L_8010EE20;
    }
    // 0x8010EC48: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x8010EC4C: sltu        $at, $s7, $a1
    ctx->r1 = ctx->r23 < ctx->r5 ? 1 : 0;
    // 0x8010EC50: beq         $at, $zero, L_8010EE98
    if (ctx->r1 == 0) {
        // 0x8010EC54: lui         $at, 0x4380
        ctx->r1 = S32(0X4380 << 16);
            goto L_8010EE98;
    }
    // 0x8010EC54: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8010EC58: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8010EC5C: addiu       $s6, $zero, 0x4000
    ctx->r22 = ADD32(0, 0X4000);
    // 0x8010EC60: lhu         $t8, 0x6($s4)
    ctx->r24 = MEM_HU(ctx->r20, 0X6);
L_8010EC64:
    // 0x8010EC64: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8010EC68: addiu       $s0, $t0, 0x709C
    ctx->r16 = ADD32(ctx->r8, 0X709C);
    // 0x8010EC6C: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8010EC70: bnel        $t9, $zero, L_8010EE04
    if (ctx->r25 != 0) {
        // 0x8010EC74: lw          $t3, 0x48($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X48);
            goto L_8010EE04;
    }
    goto skip_0;
    // 0x8010EC74: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    skip_0:
    // 0x8010EC78: lw          $a2, 0x14($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X14);
    // 0x8010EC7C: lw          $s2, 0x4($fp)
    ctx->r18 = MEM_W(ctx->r30, 0X4);
    // 0x8010EC80: lw          $s3, 0x8($fp)
    ctx->r19 = MEM_W(ctx->r30, 0X8);
    // 0x8010EC84: sltu        $at, $s0, $a2
    ctx->r1 = ctx->r16 < ctx->r6 ? 1 : 0;
    // 0x8010EC88: beq         $at, $zero, L_8010ED94
    if (ctx->r1 == 0) {
        // 0x8010EC8C: lw          $s5, 0xC($fp)
        ctx->r21 = MEM_W(ctx->r30, 0XC);
            goto L_8010ED94;
    }
    // 0x8010EC8C: lw          $s5, 0xC($fp)
    ctx->r21 = MEM_W(ctx->r30, 0XC);
    // 0x8010EC90: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
L_8010EC94:
    // 0x8010EC94: lh          $t2, 0x0($s4)
    ctx->r10 = MEM_H(ctx->r20, 0X0);
    // 0x8010EC98: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x8010EC9C: lh          $t4, 0x2($s4)
    ctx->r12 = MEM_H(ctx->r20, 0X2);
    // 0x8010ECA0: subu        $v0, $t1, $t2
    ctx->r2 = SUB32(ctx->r9, ctx->r10);
    // 0x8010ECA4: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010ECA8: subu        $v1, $t3, $t4
    ctx->r3 = SUB32(ctx->r11, ctx->r12);
    // 0x8010ECAC: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x8010ECB0: lh          $t6, 0x4($s4)
    ctx->r14 = MEM_H(ctx->r20, 0X4);
    // 0x8010ECB4: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x8010ECB8: subu        $a0, $t5, $t6
    ctx->r4 = SUB32(ctx->r13, ctx->r14);
    // 0x8010ECBC: mflo        $t7
    ctx->r15 = lo;
    // 0x8010ECC0: nop

    // 0x8010ECC4: nop

    // 0x8010ECC8: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010ECCC: mflo        $t8
    ctx->r24 = lo;
    // 0x8010ECD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8010ECD4: nop

    // 0x8010ECD8: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010ECDC: mflo        $t0
    ctx->r8 = lo;
    // 0x8010ECE0: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8010ECE4: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8010ECE8: beql        $at, $zero, L_8010ED88
    if (ctx->r1 == 0) {
        // 0x8010ECEC: addiu       $s0, $s0, 0x28
        ctx->r16 = ADD32(ctx->r16, 0X28);
            goto L_8010ED88;
    }
    goto skip_1;
    // 0x8010ECEC: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    skip_1:
    // 0x8010ECF0: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x8010ECF4: lui         $s1, 0x1
    ctx->r17 = S32(0X1 << 16);
    // 0x8010ECF8: jal         0x8002DCA0
    // 0x8010ECFC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x8010ECFC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x8010ED00: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8010ED04: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8010ED08: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8010ED0C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x8010ED10: nop

    // 0x8010ED14: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8010ED18: beql        $at, $zero, L_8010ED48
    if (ctx->r1 == 0) {
        // 0x8010ED1C: lw          $t8, 0x18($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X18);
            goto L_8010ED48;
    }
    goto skip_2;
    // 0x8010ED1C: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    skip_2:
    // 0x8010ED20: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x8010ED24: subu        $t4, $v1, $a0
    ctx->r12 = SUB32(ctx->r3, ctx->r4);
    // 0x8010ED28: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010ED2C: mflo        $t5
    ctx->r13 = lo;
    // 0x8010ED30: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x8010ED34: subu        $v0, $s6, $t6
    ctx->r2 = SUB32(ctx->r22, ctx->r14);
    // 0x8010ED38: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x8010ED3C: sra         $t7, $s1, 14
    ctx->r15 = S32(SIGNED(ctx->r17) >> 14);
    // 0x8010ED40: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8010ED44: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
L_8010ED48:
    // 0x8010ED48: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x8010ED4C: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x8010ED50: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010ED54: lw          $a2, 0x14($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X14);
    // 0x8010ED58: mflo        $t9
    ctx->r25 = lo;
    // 0x8010ED5C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8010ED60: addu        $s2, $s2, $t0
    ctx->r18 = ADD32(ctx->r18, ctx->r8);
    // 0x8010ED64: multu       $t1, $s1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010ED68: mflo        $t2
    ctx->r10 = lo;
    // 0x8010ED6C: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8010ED70: addu        $s3, $s3, $t3
    ctx->r19 = ADD32(ctx->r19, ctx->r11);
    // 0x8010ED74: multu       $t4, $s1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010ED78: mflo        $t5
    ctx->r13 = lo;
    // 0x8010ED7C: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8010ED80: addu        $s5, $s5, $t6
    ctx->r21 = ADD32(ctx->r21, ctx->r14);
    // 0x8010ED84: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
L_8010ED88:
    // 0x8010ED88: sltu        $at, $s0, $a2
    ctx->r1 = ctx->r16 < ctx->r6 ? 1 : 0;
    // 0x8010ED8C: bnel        $at, $zero, L_8010EC94
    if (ctx->r1 != 0) {
        // 0x8010ED90: lw          $t1, 0x0($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X0);
            goto L_8010EC94;
    }
    goto skip_3;
    // 0x8010ED90: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    skip_3:
L_8010ED94:
    // 0x8010ED94: lbu         $t7, 0x6($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X6);
    // 0x8010ED98: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010ED9C: mflo        $v0
    ctx->r2 = lo;
    // 0x8010EDA0: sra         $t8, $v0, 8
    ctx->r24 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8010EDA4: slti        $at, $t8, 0x100
    ctx->r1 = SIGNED(ctx->r24) < 0X100 ? 1 : 0;
    // 0x8010EDA8: bne         $at, $zero, L_8010EDB4
    if (ctx->r1 != 0) {
        // 0x8010EDAC: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8010EDB4;
    }
    // 0x8010EDAC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8010EDB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8010EDB4:
    // 0x8010EDB4: sb          $v0, 0xC($s4)
    MEM_B(0XC, ctx->r20) = ctx->r2;
    // 0x8010EDB8: lbu         $t9, 0x7($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X7);
    // 0x8010EDBC: multu       $t9, $s3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010EDC0: mflo        $v0
    ctx->r2 = lo;
    // 0x8010EDC4: sra         $t0, $v0, 8
    ctx->r8 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8010EDC8: slti        $at, $t0, 0x100
    ctx->r1 = SIGNED(ctx->r8) < 0X100 ? 1 : 0;
    // 0x8010EDCC: bne         $at, $zero, L_8010EDD8
    if (ctx->r1 != 0) {
        // 0x8010EDD0: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_8010EDD8;
    }
    // 0x8010EDD0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8010EDD4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8010EDD8:
    // 0x8010EDD8: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
    // 0x8010EDDC: lbu         $t1, 0x8($s7)
    ctx->r9 = MEM_BU(ctx->r23, 0X8);
    // 0x8010EDE0: multu       $t1, $s5
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010EDE4: mflo        $v0
    ctx->r2 = lo;
    // 0x8010EDE8: sra         $t2, $v0, 8
    ctx->r10 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8010EDEC: slti        $at, $t2, 0x100
    ctx->r1 = SIGNED(ctx->r10) < 0X100 ? 1 : 0;
    // 0x8010EDF0: bne         $at, $zero, L_8010EDFC
    if (ctx->r1 != 0) {
        // 0x8010EDF4: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_8010EDFC;
    }
    // 0x8010EDF4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8010EDF8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8010EDFC:
    // 0x8010EDFC: sb          $v0, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r2;
    // 0x8010EE00: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
L_8010EE04:
    // 0x8010EE04: addiu       $s7, $s7, 0xA
    ctx->r23 = ADD32(ctx->r23, 0XA);
    // 0x8010EE08: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x8010EE0C: sltu        $at, $s7, $t3
    ctx->r1 = ctx->r23 < ctx->r11 ? 1 : 0;
    // 0x8010EE10: bnel        $at, $zero, L_8010EC64
    if (ctx->r1 != 0) {
        // 0x8010EE14: lhu         $t8, 0x6($s4)
        ctx->r24 = MEM_HU(ctx->r20, 0X6);
            goto L_8010EC64;
    }
    goto skip_4;
    // 0x8010EE14: lhu         $t8, 0x6($s4)
    ctx->r24 = MEM_HU(ctx->r20, 0X6);
    skip_4:
    // 0x8010EE18: b           L_8010EE9C
    // 0x8010EE1C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_8010EE9C;
    // 0x8010EE1C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8010EE20:
    // 0x8010EE20: sltu        $at, $s7, $a1
    ctx->r1 = ctx->r23 < ctx->r5 ? 1 : 0;
    // 0x8010EE24: lw          $v0, 0x4($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X4);
    // 0x8010EE28: lw          $v1, 0x8($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X8);
    // 0x8010EE2C: beq         $at, $zero, L_8010EE98
    if (ctx->r1 == 0) {
        // 0x8010EE30: lw          $a0, 0xC($fp)
        ctx->r4 = MEM_W(ctx->r30, 0XC);
            goto L_8010EE98;
    }
    // 0x8010EE30: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x8010EE34: lhu         $t4, 0x6($s4)
    ctx->r12 = MEM_HU(ctx->r20, 0X6);
L_8010EE38:
    // 0x8010EE38: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8010EE3C: bnel        $t5, $zero, L_8010EE84
    if (ctx->r13 != 0) {
        // 0x8010EE40: lw          $t5, 0x48($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X48);
            goto L_8010EE84;
    }
    goto skip_5;
    // 0x8010EE40: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    skip_5:
    // 0x8010EE44: lbu         $t6, 0x6($s7)
    ctx->r14 = MEM_BU(ctx->r23, 0X6);
    // 0x8010EE48: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010EE4C: mflo        $t7
    ctx->r15 = lo;
    // 0x8010EE50: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x8010EE54: sb          $t8, 0xC($s4)
    MEM_B(0XC, ctx->r20) = ctx->r24;
    // 0x8010EE58: lbu         $t9, 0x7($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X7);
    // 0x8010EE5C: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010EE60: mflo        $t0
    ctx->r8 = lo;
    // 0x8010EE64: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8010EE68: sb          $t1, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r9;
    // 0x8010EE6C: lbu         $t2, 0x8($s7)
    ctx->r10 = MEM_BU(ctx->r23, 0X8);
    // 0x8010EE70: multu       $t2, $a0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010EE74: mflo        $t3
    ctx->r11 = lo;
    // 0x8010EE78: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8010EE7C: sb          $t4, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r12;
    // 0x8010EE80: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
L_8010EE84:
    // 0x8010EE84: addiu       $s7, $s7, 0xA
    ctx->r23 = ADD32(ctx->r23, 0XA);
    // 0x8010EE88: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x8010EE8C: sltu        $at, $s7, $t5
    ctx->r1 = ctx->r23 < ctx->r13 ? 1 : 0;
    // 0x8010EE90: bnel        $at, $zero, L_8010EE38
    if (ctx->r1 != 0) {
        // 0x8010EE94: lhu         $t4, 0x6($s4)
        ctx->r12 = MEM_HU(ctx->r20, 0X6);
            goto L_8010EE38;
    }
    goto skip_6;
    // 0x8010EE94: lhu         $t4, 0x6($s4)
    ctx->r12 = MEM_HU(ctx->r20, 0X6);
    skip_6:
L_8010EE98:
    // 0x8010EE98: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8010EE9C:
    // 0x8010EE9C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010EEA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8010EEA4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8010EEA8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8010EEAC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8010EEB0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8010EEB4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8010EEB8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8010EEBC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8010EEC0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8010EEC4: jr          $ra
    // 0x8010EEC8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8010EEC8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8010EECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010EECC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8010EED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010EED4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010EED8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010EEDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010EEE0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8010EEE4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8010EEE8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8010EEEC: jal         0x800DF8D4
    // 0x8010EEF0: sw          $a0, 0x7080($at)
    MEM_W(0X7080, ctx->r1) = ctx->r4;
    func_800DF8D4(rdram, ctx);
        goto after_0;
    // 0x8010EEF0: sw          $a0, 0x7080($at)
    MEM_W(0X7080, ctx->r1) = ctx->r4;
    after_0:
    // 0x8010EEF4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8010EEF8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8010EEFC: addiu       $v1, $v1, 0x7080
    ctx->r3 = ADD32(ctx->r3, 0X7080);
    // 0x8010EF00: addiu       $t6, $t6, 0x709C
    ctx->r14 = ADD32(ctx->r14, 0X709C);
    // 0x8010EF04: sb          $v0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r2;
    // 0x8010EF08: sw          $t6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r14;
    // 0x8010EF0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010EF10: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8010EF14: jal         0x8010EACC
    // 0x8010EF18: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_8010EACC(rdram, ctx);
        goto after_1;
    // 0x8010EF18: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x8010EF1C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010EF20: jal         0x800C87B8
    // 0x8010EF24: addiu       $a0, $a0, 0x7084
    ctx->r4 = ADD32(ctx->r4, 0X7084);
    func_800C87B8(rdram, ctx);
        goto after_2;
    // 0x8010EF24: addiu       $a0, $a0, 0x7084
    ctx->r4 = ADD32(ctx->r4, 0X7084);
    after_2:
    // 0x8010EF28: jal         0x800DF8B4
    // 0x8010EF2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8B4(rdram, ctx);
        goto after_3;
    // 0x8010EF2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8010EF30: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8010EF34: jal         0x800DF8CC
    // 0x8010EF38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8CC(rdram, ctx);
        goto after_4;
    // 0x8010EF38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8010EF3C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8010EF40: jal         0x800DF8BC
    // 0x8010EF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8BC(rdram, ctx);
        goto after_5;
    // 0x8010EF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8010EF48: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8010EF4C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8010EF50: jal         0x8010EBE4
    // 0x8010EF54: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_8010EBE4(rdram, ctx);
        goto after_6;
    // 0x8010EF54: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_6:
    // 0x8010EF58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010EF5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010EF60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8010EF64: jr          $ra
    // 0x8010EF68: nop

    return;
    // 0x8010EF68: nop

;}
RECOMP_FUNC void func_8010EF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010EF70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010EF74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010EF78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010EF7C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010EF80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010EF84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010EF88: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8010EF8C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8010EF90: jal         0x800DF8D4
    // 0x8010EF94: sw          $a0, 0x7210($at)
    MEM_W(0X7210, ctx->r1) = ctx->r4;
    func_800DF8D4(rdram, ctx);
        goto after_0;
    // 0x8010EF94: sw          $a0, 0x7210($at)
    MEM_W(0X7210, ctx->r1) = ctx->r4;
    after_0:
    // 0x8010EF98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010EF9C: sb          $v0, 0x7238($at)
    MEM_B(0X7238, ctx->r1) = ctx->r2;
    // 0x8010EFA0: jal         0x800DF8F8
    // 0x8010EFA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8F8(rdram, ctx);
        goto after_1;
    // 0x8010EFA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8010EFA8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010EFAC: addiu       $a0, $a0, 0x7214
    ctx->r4 = ADD32(ctx->r4, 0X7214);
    // 0x8010EFB0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8010EFB4: jal         0x800EFB24
    // 0x8010EFB8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x8010EFB8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8010EFBC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010EFC0: addiu       $a0, $a0, 0x7214
    ctx->r4 = ADD32(ctx->r4, 0X7214);
    // 0x8010EFC4: jal         0x800EF368
    // 0x8010EFC8: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    func_800EF368(rdram, ctx);
        goto after_3;
    // 0x8010EFC8: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    after_3:
    // 0x8010EFCC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8010EFD0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8010EFD4: addiu       $s0, $s0, 0x722C
    ctx->r16 = ADD32(ctx->r16, 0X722C);
    // 0x8010EFD8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8010EFDC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8010EFE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010EFE4: jal         0x800EFA4C
    // 0x8010EFE8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800EFA4C(rdram, ctx);
        goto after_4;
    // 0x8010EFE8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x8010EFEC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010EFF0: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010EFF4: addiu       $a2, $a2, 0x7214
    ctx->r6 = ADD32(ctx->r6, 0X7214);
    // 0x8010EFF8: addiu       $a0, $a0, 0x7220
    ctx->r4 = ADD32(ctx->r4, 0X7220);
    // 0x8010EFFC: jal         0x800EE97C
    // 0x8010F000: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE97C(rdram, ctx);
        goto after_5;
    // 0x8010F000: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8010F004: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010F008: jal         0x800EF2A0
    // 0x8010F00C: addiu       $a0, $a0, 0x7220
    ctx->r4 = ADD32(ctx->r4, 0X7220);
    func_800EF2A0(rdram, ctx);
        goto after_6;
    // 0x8010F00C: addiu       $a0, $a0, 0x7220
    ctx->r4 = ADD32(ctx->r4, 0X7220);
    after_6:
    // 0x8010F010: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010F014: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010F018: addiu       $a2, $a2, 0x7220
    ctx->r6 = ADD32(ctx->r6, 0X7220);
    // 0x8010F01C: addiu       $a1, $a1, 0x7214
    ctx->r5 = ADD32(ctx->r5, 0X7214);
    // 0x8010F020: jal         0x800EE97C
    // 0x8010F024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EE97C(rdram, ctx);
        goto after_7;
    // 0x8010F024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8010F028: jal         0x800EF2A0
    // 0x8010F02C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EF2A0(rdram, ctx);
        goto after_8;
    // 0x8010F02C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8010F030: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8010F034: lbu         $t6, 0x7238($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7238);
    // 0x8010F038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010F03C: bnel        $t6, $zero, L_8010F060
    if (ctx->r14 != 0) {
        // 0x8010F040: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010F060;
    }
    goto skip_0;
    // 0x8010F040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8010F044: jal         0x800192FC
    // 0x8010F048: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800192FC(rdram, ctx);
        goto after_9;
    // 0x8010F048: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x8010F04C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010F050: addiu       $a0, $a0, 0x7220
    ctx->r4 = ADD32(ctx->r4, 0X7220);
    // 0x8010F054: jal         0x800192FC
    // 0x8010F058: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_800192FC(rdram, ctx);
        goto after_10;
    // 0x8010F058: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_10:
    // 0x8010F05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010F060:
    // 0x8010F060: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010F064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010F068: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010F070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010F070: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8010F074: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8010F078: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8010F07C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8010F080: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8010F084: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010F088: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8010F08C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8010F090: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8010F094: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8010F098: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8010F09C: jal         0x800DF8CC
    // 0x8010F0A0: lw          $a0, 0x7210($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7210);
    func_800DF8CC(rdram, ctx);
        goto after_0;
    // 0x8010F0A0: lw          $a0, 0x7210($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7210);
    after_0:
    // 0x8010F0A4: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8010F0A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010F0AC: lw          $a0, 0x7210($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7210);
    // 0x8010F0B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8010F0B4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8010F0B8: jal         0x800DF8B4
    // 0x8010F0BC: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    func_800DF8B4(rdram, ctx);
        goto after_1;
    // 0x8010F0BC: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    after_1:
    // 0x8010F0C0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8010F0C4: sll         $t0, $s4, 4
    ctx->r8 = S32(ctx->r20 << 4);
    // 0x8010F0C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8010F0CC: sll         $t9, $v1, 4
    ctx->r25 = S32(ctx->r3 << 4);
    // 0x8010F0D0: addu        $s0, $t9, $v0
    ctx->r16 = ADD32(ctx->r25, ctx->r2);
    // 0x8010F0D4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x8010F0D8: addu        $t1, $v1, $s4
    ctx->r9 = ADD32(ctx->r3, ctx->r20);
    // 0x8010F0DC: addu        $s3, $t0, $s0
    ctx->r19 = ADD32(ctx->r8, ctx->r16);
    // 0x8010F0E0: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x8010F0E4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8010F0E8: jal         0x80100480
    // 0x8010F0EC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80100480(rdram, ctx);
        goto after_2;
    // 0x8010F0EC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x8010F0F0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8010F0F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8010F0F8: jal         0x80100480
    // 0x8010F0FC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80100480(rdram, ctx);
        goto after_3;
    // 0x8010F0FC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x8010F100: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8010F104: lbu         $t2, 0x7238($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X7238);
    // 0x8010F108: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8010F10C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8010F110: beq         $t2, $zero, L_8010F158
    if (ctx->r10 == 0) {
        // 0x8010F114: lui         $a1, 0x8013
        ctx->r5 = S32(0X8013 << 16);
            goto L_8010F158;
    }
    // 0x8010F114: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010F118: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010F11C: addiu       $a2, $a2, 0x7220
    ctx->r6 = ADD32(ctx->r6, 0X7220);
    // 0x8010F120: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8010F124: jal         0x800F24D0
    // 0x8010F128: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_800F24D0(rdram, ctx);
        goto after_4;
    // 0x8010F128: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_4:
    // 0x8010F12C: jal         0x800EF2A0
    // 0x8010F130: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_800EF2A0(rdram, ctx);
        goto after_5;
    // 0x8010F130: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_5:
    // 0x8010F134: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010F138: addiu       $a2, $a2, 0x722C
    ctx->r6 = ADD32(ctx->r6, 0X722C);
    // 0x8010F13C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8010F140: jal         0x800F24D0
    // 0x8010F144: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800F24D0(rdram, ctx);
        goto after_6;
    // 0x8010F144: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_6:
    // 0x8010F148: jal         0x800EF2A0
    // 0x8010F14C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_800EF2A0(rdram, ctx);
        goto after_7;
    // 0x8010F14C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_7:
    // 0x8010F150: b           L_8010F174
    // 0x8010F154: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_8010F174;
    // 0x8010F154: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_8010F158:
    // 0x8010F158: jal         0x800EE7F8
    // 0x8010F15C: addiu       $a1, $a1, 0x7220
    ctx->r5 = ADD32(ctx->r5, 0X7220);
    func_800EE7F8(rdram, ctx);
        goto after_8;
    // 0x8010F15C: addiu       $a1, $a1, 0x7220
    ctx->r5 = ADD32(ctx->r5, 0X7220);
    after_8:
    // 0x8010F160: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010F164: addiu       $a1, $a1, 0x722C
    ctx->r5 = ADD32(ctx->r5, 0X722C);
    // 0x8010F168: jal         0x800EE7F8
    // 0x8010F16C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_800EE7F8(rdram, ctx);
        goto after_9;
    // 0x8010F16C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x8010F170: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_8010F174:
    // 0x8010F174: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8010F178: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8010F17C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8010F180: jal         0x801164E0
    // 0x8010F184: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_801164E0(rdram, ctx);
        goto after_10;
    // 0x8010F184: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_10:
    // 0x8010F188: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8010F18C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8010F190: jal         0x8011649C
    // 0x8010F194: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8011649C(rdram, ctx);
        goto after_11;
    // 0x8010F194: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_11:
    // 0x8010F198: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8010F19C: sltu        $at, $s0, $t3
    ctx->r1 = ctx->r16 < ctx->r11 ? 1 : 0;
    // 0x8010F1A0: beq         $at, $zero, L_8010F250
    if (ctx->r1 == 0) {
        // 0x8010F1A4: lui         $at, 0x4478
        ctx->r1 = S32(0X4478 << 16);
            goto L_8010F250;
    }
    // 0x8010F1A4: lui         $at, 0x4478
    ctx->r1 = S32(0X4478 << 16);
    // 0x8010F1A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8010F1AC: nop

    // 0x8010F1B0: lwc1        $f16, 0x0($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8010F1B4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8010F1B8: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8010F1BC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8010F1C0: beql        $at, $zero, L_8010F21C
    if (ctx->r1 == 0) {
        // 0x8010F1C4: add.s       $f16, $f18, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f0.fl;
            goto L_8010F21C;
    }
    goto skip_0;
    // 0x8010F1C4: add.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f0.fl;
    skip_0:
    // 0x8010F1C8: add.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f0.fl;
L_8010F1CC:
    // 0x8010F1CC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8010F1D0: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8010F1D4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8010F1D8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8010F1DC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8010F1E0: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8010F1E4: nop

    // 0x8010F1E8: sh          $t5, -0x18($s0)
    MEM_H(-0X18, ctx->r16) = ctx->r13;
    // 0x8010F1EC: lwc1        $f16, -0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, -0XC);
    // 0x8010F1F0: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8010F1F4: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8010F1F8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8010F1FC: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8010F200: nop

    // 0x8010F204: sh          $t7, -0x16($s0)
    MEM_H(-0X16, ctx->r16) = ctx->r15;
    // 0x8010F208: lwc1        $f16, 0x0($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8010F20C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8010F210: bnel        $at, $zero, L_8010F1CC
    if (ctx->r1 != 0) {
        // 0x8010F214: add.s       $f16, $f18, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f0.fl;
            goto L_8010F1CC;
    }
    goto skip_1;
    // 0x8010F214: add.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f0.fl;
    skip_1:
    // 0x8010F218: add.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f0.fl;
L_8010F21C:
    // 0x8010F21C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8010F220: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8010F224: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8010F228: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8010F22C: nop

    // 0x8010F230: sh          $t5, -0x8($s0)
    MEM_H(-0X8, ctx->r16) = ctx->r13;
    // 0x8010F234: lwc1        $f16, -0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, -0XC);
    // 0x8010F238: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8010F23C: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8010F240: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8010F244: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8010F248: nop

    // 0x8010F24C: sh          $t7, -0x6($s0)
    MEM_H(-0X6, ctx->r16) = ctx->r15;
L_8010F250:
    // 0x8010F250: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8010F254: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8010F258: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8010F25C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8010F260: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8010F264: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8010F268: jr          $ra
    // 0x8010F26C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8010F26C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8010F270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010F270: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010F274: jr          $ra
    // 0x8010F278: sw          $zero, 0x7210($at)
    MEM_W(0X7210, ctx->r1) = 0;
    return;
    // 0x8010F278: sw          $zero, 0x7210($at)
    MEM_W(0X7210, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8010F280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010F280: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8010F284: addiu       $t0, $t0, 0x7240
    ctx->r8 = ADD32(ctx->r8, 0X7240);
    // 0x8010F288: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    // 0x8010F28C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010F290: addiu       $v1, $v0, 0x7250
    ctx->r3 = ADD32(ctx->r2, 0X7250);
    // 0x8010F294: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8010F298: beq         $at, $zero, L_8010F2C0
    if (ctx->r1 == 0) {
        // 0x8010F29C: addiu       $t1, $zero, 0x28
        ctx->r9 = ADD32(0, 0X28);
            goto L_8010F2C0;
    }
    // 0x8010F29C: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x8010F2A0: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
L_8010F2A4:
    // 0x8010F2A4: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8010F2A8: bne         $at, $zero, L_8010F2C0
    if (ctx->r1 != 0) {
        // 0x8010F2AC: nop
    
            goto L_8010F2C0;
    }
    // 0x8010F2AC: nop

    // 0x8010F2B0: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x8010F2B4: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8010F2B8: bnel        $at, $zero, L_8010F2A4
    if (ctx->r1 != 0) {
        // 0x8010F2BC: lw          $t6, 0x24($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X24);
            goto L_8010F2A4;
    }
    goto skip_0;
    // 0x8010F2BC: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    skip_0:
L_8010F2C0:
    // 0x8010F2C0: bnel        $v1, $a1, L_8010F2F4
    if (ctx->r3 != ctx->r5) {
            // 0x8010F2C4: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    static_3_8010F2F4(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x8010F2C4: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    skip_1:
    // 0x8010F2C8: lw          $t7, 0xC($t0)
    ctx->r15 = MEM_W(ctx->r8, 0XC);
    // 0x8010F2CC: addiu       $t8, $a1, 0x28
    ctx->r24 = ADD32(ctx->r5, 0X28);
    // 0x8010F2D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8010F2D4: sltu        $at, $a1, $t7
    ctx->r1 = ctx->r5 < ctx->r15 ? 1 : 0;
    // 0x8010F2D8: beq         $at, $zero, L_8010F2E8
    if (ctx->r1 == 0) {
            // 0x8010F2DC: nop

    func_8010F2E8(rdram, ctx);
    return;
    }
    // 0x8010F2DC: nop

    // 0x8010F2E0: jr          $ra
    // 0x8010F2E4: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
    return;
    // 0x8010F2E4: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
;}
RECOMP_FUNC void func_8010F2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010F2E8: jr          $ra
    // 0x8010F2EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8010F2EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8010F2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010F2F0: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    // 0x8010F2F4: bnel        $t9, $a1, L_8010F30C
    if (ctx->r25 != ctx->r5) {
        // 0x8010F2F8: subu        $t3, $a1, $v1
        ctx->r11 = SUB32(ctx->r5, ctx->r3);
            goto L_8010F30C;
    }
    goto skip_0;
    // 0x8010F2F8: subu        $t3, $a1, $v1
    ctx->r11 = SUB32(ctx->r5, ctx->r3);
    skip_0:
    // 0x8010F2FC: addiu       $t2, $a1, -0x28
    ctx->r10 = ADD32(ctx->r5, -0X28);
    // 0x8010F300: sw          $t2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r10;
    // 0x8010F304: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x8010F308: subu        $t3, $a1, $v1
    ctx->r11 = SUB32(ctx->r5, ctx->r3);
L_8010F30C:
    // 0x8010F30C: div         $zero, $t3, $t1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r9)));
    // 0x8010F310: mflo        $t4
    ctx->r12 = lo;
    // 0x8010F314: addiu       $a0, $a1, 0x28
    ctx->r4 = ADD32(ctx->r5, 0X28);
    // 0x8010F318: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8010F31C: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010F320: bne         $t1, $zero, L_8010F32C
    if (ctx->r9 != 0) {
        // 0x8010F324: nop
    
            goto L_8010F32C;
    }
    // 0x8010F324: nop

    // 0x8010F328: break       7
    do_break(2148594472);
L_8010F32C:
    // 0x8010F32C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8010F330: bne         $t1, $at, L_8010F344
    if (ctx->r9 != ctx->r1) {
        // 0x8010F334: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8010F344;
    }
    // 0x8010F334: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8010F338: bne         $t3, $at, L_8010F344
    if (ctx->r11 != ctx->r1) {
        // 0x8010F33C: nop
    
            goto L_8010F344;
    }
    // 0x8010F33C: nop

    // 0x8010F340: break       6
    do_break(2148594496);
L_8010F344:
    // 0x8010F344: mflo        $a2
    ctx->r6 = lo;
    // 0x8010F348: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8010F34C: blez        $a2, L_8010F374
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8010F350: addiu       $a3, $a1, -0x4
        ctx->r7 = ADD32(ctx->r5, -0X4);
            goto L_8010F374;
    }
    // 0x8010F350: addiu       $a3, $a1, -0x4
    ctx->r7 = ADD32(ctx->r5, -0X4);
L_8010F354:
    // 0x8010F354: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x8010F358: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8010F35C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8010F360: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x8010F364: bgtz        $a2, L_8010F354
    if (SIGNED(ctx->r6) > 0) {
        // 0x8010F368: sw          $t5, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r13;
            goto L_8010F354;
    }
    // 0x8010F368: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8010F36C: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x8010F370: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
L_8010F374:
    // 0x8010F374: sw          $a0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r4;
    // 0x8010F378: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8010F37C: jr          $ra
    // 0x8010F380: nop

    return;
    // 0x8010F380: nop

;}
RECOMP_FUNC void func_8010F384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010F384: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8010F388: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8010F38C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010F390: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8010F394: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x8010F398: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8010F39C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8010F3A0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8010F3A4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8010F3A8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8010F3AC: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x8010F3B0: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x8010F3B4: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x8010F3B8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8010F3BC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010F3C0: bgez        $a1, L_8010F3D0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8010F3C4: sw          $a2, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->r6;
            goto L_8010F3D0;
    }
    // 0x8010F3C4: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x8010F3C8: b           L_8010F3D4
    // 0x8010F3CC: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
        goto L_8010F3D4;
    // 0x8010F3CC: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
L_8010F3D0:
    // 0x8010F3D0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8010F3D4:
    // 0x8010F3D4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8010F3D8: addiu       $v1, $v1, 0x7240
    ctx->r3 = ADD32(ctx->r3, 0X7240);
    // 0x8010F3DC: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x8010F3E0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8010F3E4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8010F3E8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8010F3EC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8010F3F0: sw          $t8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r24;
    // 0x8010F3F4: jal         0x800DF8B4
    // 0x8010F3F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8B4(rdram, ctx);
        goto after_0;
    // 0x8010F3F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8010F3FC: addiu       $s1, $sp, 0xA8
    ctx->r17 = ADD32(ctx->r29, 0XA8);
    // 0x8010F400: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8010F404: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010F408: jal         0x800B237C
    // 0x8010F40C: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    func_800B237C(rdram, ctx);
        goto after_1;
    // 0x8010F40C: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    after_1:
    // 0x8010F410: jal         0x800DF8C4
    // 0x8010F414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8C4(rdram, ctx);
        goto after_2;
    // 0x8010F414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8010F418: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8010F41C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010F420: jal         0x80019224
    // 0x8010F424: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019224(rdram, ctx);
        goto after_3;
    // 0x8010F424: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x8010F428: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8010F42C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010F430: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8010F434: jal         0x800DF900
    // 0x8010F438: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    func_800DF900(rdram, ctx);
        goto after_4;
    // 0x8010F438: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x8010F43C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8010F440: jal         0x800C8760
    // 0x8010F444: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800C8760(rdram, ctx);
        goto after_5;
    // 0x8010F444: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x8010F448: beq         $v0, $zero, L_8010F624
    if (ctx->r2 == 0) {
        // 0x8010F44C: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8010F624;
    }
    // 0x8010F44C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8010F450: lui         $at, 0x4680
    ctx->r1 = S32(0X4680 << 16);
    // 0x8010F454: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8010F458: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8010F45C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8010F460: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8010F464: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8010F468: addiu       $s6, $sp, 0x88
    ctx->r22 = ADD32(ctx->r29, 0X88);
    // 0x8010F46C: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x8010F470: addiu       $s4, $sp, 0x64
    ctx->r20 = ADD32(ctx->r29, 0X64);
    // 0x8010F474: addiu       $s3, $sp, 0x7C
    ctx->r19 = ADD32(ctx->r29, 0X7C);
L_8010F478:
    // 0x8010F478: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010F47C: jal         0x800C8800
    // 0x8010F480: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800C8800(rdram, ctx);
        goto after_6;
    // 0x8010F480: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
    // 0x8010F484: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010F488: jal         0x800C883C
    // 0x8010F48C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800C883C(rdram, ctx);
        goto after_7;
    // 0x8010F48C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_7:
    // 0x8010F490: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8010F494: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8010F498: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8010F49C: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8010F4A0: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8010F4A4: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8010F4A8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8010F4AC: sub.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8010F4B0: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8010F4B4: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x8010F4B8: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8010F4BC: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8010F4C0: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x8010F4C4: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8010F4C8: swc1        $f14, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f14.u32l;
    // 0x8010F4CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8010F4D0: jal         0x8002DCA0
    // 0x8010F4D4: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_8;
    // 0x8010F4D4: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    after_8:
    // 0x8010F4D8: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8010F4DC: lwc1        $f6, 0xA4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8010F4E0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8010F4E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010F4E8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8010F4EC: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x8010F4F0: nop

    // 0x8010F4F4: bc1tl       L_8010F610
    if (c1cs) {
        // 0x8010F4F8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8010F610;
    }
    goto skip_0;
    // 0x8010F4F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x8010F4FC: jal         0x800C8900
    // 0x8010F500: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800C8900(rdram, ctx);
        goto after_9;
    // 0x8010F500: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_9:
    // 0x8010F504: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8010F508: lwc1        $f18, 0xA4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8010F50C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8010F510: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8010F514: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8010F518: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8010F51C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8010F520: div.s       $f4, $f20, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8010F524: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8010F528: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8010F52C: nop

    // 0x8010F530: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8010F534: sub.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f24.fl - ctx->f4.fl;
    // 0x8010F538: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8010F53C: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8010F540: mfc1        $s1, $f16
    ctx->r17 = (int32_t)ctx->f16.u32l;
    // 0x8010F544: jal         0x8010F280
    // 0x8010F548: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8010F280(rdram, ctx);
        goto after_10;
    // 0x8010F548: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x8010F54C: beq         $v0, $zero, L_8010F60C
    if (ctx->r2 == 0) {
        // 0x8010F550: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8010F60C;
    }
    // 0x8010F550: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010F554: sw          $s1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r17;
    // 0x8010F558: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8010F55C: jal         0x800193C4
    // 0x8010F560: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800193C4(rdram, ctx);
        goto after_11;
    // 0x8010F560: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_11:
    // 0x8010F564: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8010F568: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8010F56C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8010F570: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8010F574: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8010F578: nop

    // 0x8010F57C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x8010F580: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8010F584: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8010F588: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8010F58C: nop

    // 0x8010F590: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x8010F594: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8010F598: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8010F59C: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x8010F5A0: nop

    // 0x8010F5A4: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x8010F5A8: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8010F5AC: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8010F5B0: div.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8010F5B4: div.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8010F5B8: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x8010F5BC: mul.s       $f18, $f8, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x8010F5C0: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8010F5C4: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x8010F5C8: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8010F5CC: nop

    // 0x8010F5D0: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x8010F5D4: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8010F5D8: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8010F5DC: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8010F5E0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8010F5E4: nop

    // 0x8010F5E8: sw          $t4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r12;
    // 0x8010F5EC: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8010F5F0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8010F5F4: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8010F5F8: div.s       $f4, $f28, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f28.fl, ctx->f16.fl);
    // 0x8010F5FC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8010F600: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8010F604: jal         0x800EE830
    // 0x8010F608: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    func_800EE830(rdram, ctx);
        goto after_12;
    // 0x8010F608: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    after_12:
L_8010F60C:
    // 0x8010F60C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8010F610:
    // 0x8010F610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8010F614: jal         0x800C878C
    // 0x8010F618: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800C878C(rdram, ctx);
        goto after_13;
    // 0x8010F618: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_13:
    // 0x8010F61C: bne         $v0, $zero, L_8010F478
    if (ctx->r2 != 0) {
        // 0x8010F620: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8010F478;
    }
    // 0x8010F620: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8010F624:
    // 0x8010F624: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010F628: addiu       $v0, $v0, 0x7240
    ctx->r2 = ADD32(ctx->r2, 0X7240);
    // 0x8010F62C: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x8010F630: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x8010F634: subu        $t8, $t7, $v0
    ctx->r24 = SUB32(ctx->r15, ctx->r2);
    // 0x8010F638: addiu       $t9, $t8, -0x10
    ctx->r25 = ADD32(ctx->r24, -0X10);
    // 0x8010F63C: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x8010F640: mflo        $t0
    ctx->r8 = lo;
    // 0x8010F644: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8010F648: jal         0x80018DAC
    // 0x8010F64C: nop

    func_80018DAC(rdram, ctx);
        goto after_14;
    // 0x8010F64C: nop

    after_14:
    // 0x8010F650: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8010F654: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010F658: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8010F65C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8010F660: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x8010F664: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x8010F668: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8010F66C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8010F670: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8010F674: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8010F678: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8010F67C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8010F680: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8010F684: jr          $ra
    // 0x8010F688: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8010F688: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_8010F68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010F68C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8010F690: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8010F694: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8010F698: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x8010F69C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8010F6A0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8010F6A4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8010F6A8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8010F6AC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8010F6B0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8010F6B4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8010F6B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8010F6BC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010F6C0: jal         0x800B2344
    // 0x8010F6C4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_800B2344(rdram, ctx);
        goto after_0;
    // 0x8010F6C4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010F6C8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8010F6CC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8010F6D0: lw          $t7, 0x7244($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7244);
    // 0x8010F6D4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8010F6D8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8010F6DC: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8010F6E0: addu        $v1, $t6, $s7
    ctx->r3 = ADD32(ctx->r14, ctx->r23);
    // 0x8010F6E4: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x8010F6E8: beq         $t7, $zero, L_8010F8AC
    if (ctx->r15 == 0) {
        // 0x8010F6EC: addiu       $s2, $s2, 0x18
        ctx->r18 = ADD32(ctx->r18, 0X18);
            goto L_8010F8AC;
    }
    // 0x8010F6EC: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    // 0x8010F6F0: sltu        $at, $s7, $v1
    ctx->r1 = ctx->r23 < ctx->r3 ? 1 : 0;
    // 0x8010F6F4: beq         $at, $zero, L_8010F898
    if (ctx->r1 == 0) {
        // 0x8010F6F8: lui         $fp, 0x8013
        ctx->r30 = S32(0X8013 << 16);
            goto L_8010F898;
    }
    // 0x8010F6F8: lui         $fp, 0x8013
    ctx->r30 = S32(0X8013 << 16);
    // 0x8010F6FC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8010F700: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8010F704: addiu       $fp, $fp, 0x7250
    ctx->r30 = ADD32(ctx->r30, 0X7250);
    // 0x8010F708: lui         $s6, 0x1
    ctx->r22 = S32(0X1 << 16);
    // 0x8010F70C: addiu       $s5, $zero, 0x4000
    ctx->r21 = ADD32(0, 0X4000);
    // 0x8010F710: lhu         $t8, 0x6($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X6);
L_8010F714:
    // 0x8010F714: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x8010F718: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8010F71C: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8010F720: bnel        $t9, $zero, L_8010F884
    if (ctx->r25 != 0) {
        // 0x8010F724: lw          $t5, 0x48($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X48);
            goto L_8010F884;
    }
    goto skip_0;
    // 0x8010F724: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    skip_0:
    // 0x8010F728: lw          $a3, 0x7248($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X7248);
    // 0x8010F72C: lbu         $s1, 0x6($s7)
    ctx->r17 = MEM_BU(ctx->r23, 0X6);
    // 0x8010F730: lbu         $s3, 0x7($s7)
    ctx->r19 = MEM_BU(ctx->r23, 0X7);
    // 0x8010F734: sltu        $at, $fp, $a3
    ctx->r1 = ctx->r30 < ctx->r7 ? 1 : 0;
    // 0x8010F738: beq         $at, $zero, L_8010F84C
    if (ctx->r1 == 0) {
        // 0x8010F73C: lbu         $s4, 0x8($s7)
        ctx->r20 = MEM_BU(ctx->r23, 0X8);
            goto L_8010F84C;
    }
    // 0x8010F73C: lbu         $s4, 0x8($s7)
    ctx->r20 = MEM_BU(ctx->r23, 0X8);
    // 0x8010F740: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
L_8010F744:
    // 0x8010F744: lh          $t1, 0x0($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X0);
    // 0x8010F748: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x8010F74C: lh          $t3, 0x2($s2)
    ctx->r11 = MEM_H(ctx->r18, 0X2);
    // 0x8010F750: subu        $v0, $t0, $t1
    ctx->r2 = SUB32(ctx->r8, ctx->r9);
    // 0x8010F754: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010F758: subu        $v1, $t2, $t3
    ctx->r3 = SUB32(ctx->r10, ctx->r11);
    // 0x8010F75C: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x8010F760: lh          $t5, 0x4($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X4);
    // 0x8010F764: lw          $t0, 0x10($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X10);
    // 0x8010F768: subu        $a0, $t4, $t5
    ctx->r4 = SUB32(ctx->r12, ctx->r13);
    // 0x8010F76C: mflo        $t6
    ctx->r14 = lo;
    // 0x8010F770: nop

    // 0x8010F774: nop

    // 0x8010F778: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010F77C: mflo        $t7
    ctx->r15 = lo;
    // 0x8010F780: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8010F784: nop

    // 0x8010F788: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010F78C: mflo        $t9
    ctx->r25 = lo;
    // 0x8010F790: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8010F794: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8010F798: beq         $at, $zero, L_8010F83C
    if (ctx->r1 == 0) {
        // 0x8010F79C: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_8010F83C;
    }
    // 0x8010F79C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8010F7A0: beql        $a1, $zero, L_8010F7D0
    if (ctx->r5 == 0) {
        // 0x8010F7A4: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_8010F7D0;
    }
    goto skip_1;
    // 0x8010F7A4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_1:
    // 0x8010F7A8: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x8010F7AC: jal         0x8002DCA0
    // 0x8010F7B0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x8010F7B0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x8010F7B4: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8010F7B8: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8010F7BC: lw          $a3, 0x7248($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X7248);
    // 0x8010F7C0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8010F7C4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8010F7C8: nop

    // 0x8010F7CC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_8010F7D0:
    // 0x8010F7D0: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x8010F7D4: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8010F7D8: beq         $at, $zero, L_8010F800
    if (ctx->r1 == 0) {
        // 0x8010F7DC: nop
    
            goto L_8010F800;
    }
    // 0x8010F7DC: nop

    // 0x8010F7E0: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x8010F7E4: subu        $t3, $a2, $a0
    ctx->r11 = SUB32(ctx->r6, ctx->r4);
    // 0x8010F7E8: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010F7EC: mflo        $t4
    ctx->r12 = lo;
    // 0x8010F7F0: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8010F7F4: subu        $v1, $s5, $t5
    ctx->r3 = SUB32(ctx->r21, ctx->r13);
    // 0x8010F7F8: b           L_8010F800
    // 0x8010F7FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
        goto L_8010F800;
    // 0x8010F7FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_8010F800:
    // 0x8010F800: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x8010F804: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x8010F808: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x8010F80C: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010F810: mflo        $t7
    ctx->r15 = lo;
    // 0x8010F814: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8010F818: addu        $s1, $s1, $t8
    ctx->r17 = ADD32(ctx->r17, ctx->r24);
    // 0x8010F81C: multu       $t9, $v0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010F820: mflo        $t0
    ctx->r8 = lo;
    // 0x8010F824: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8010F828: addu        $s3, $s3, $t1
    ctx->r19 = ADD32(ctx->r19, ctx->r9);
    // 0x8010F82C: multu       $t2, $v0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8010F830: mflo        $t3
    ctx->r11 = lo;
    // 0x8010F834: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8010F838: addu        $s4, $s4, $t4
    ctx->r20 = ADD32(ctx->r20, ctx->r12);
L_8010F83C:
    // 0x8010F83C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8010F840: sltu        $at, $s0, $a3
    ctx->r1 = ctx->r16 < ctx->r7 ? 1 : 0;
    // 0x8010F844: bnel        $at, $zero, L_8010F744
    if (ctx->r1 != 0) {
        // 0x8010F848: lw          $t0, 0x0($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X0);
            goto L_8010F744;
    }
    goto skip_2;
    // 0x8010F848: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    skip_2:
L_8010F84C:
    // 0x8010F84C: slti        $at, $s1, 0x100
    ctx->r1 = SIGNED(ctx->r17) < 0X100 ? 1 : 0;
    // 0x8010F850: bnel        $at, $zero, L_8010F860
    if (ctx->r1 != 0) {
        // 0x8010F854: slti        $at, $s3, 0x100
        ctx->r1 = SIGNED(ctx->r19) < 0X100 ? 1 : 0;
            goto L_8010F860;
    }
    goto skip_3;
    // 0x8010F854: slti        $at, $s3, 0x100
    ctx->r1 = SIGNED(ctx->r19) < 0X100 ? 1 : 0;
    skip_3:
    // 0x8010F858: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x8010F85C: slti        $at, $s3, 0x100
    ctx->r1 = SIGNED(ctx->r19) < 0X100 ? 1 : 0;
L_8010F860:
    // 0x8010F860: bne         $at, $zero, L_8010F86C
    if (ctx->r1 != 0) {
        // 0x8010F864: sb          $s1, 0xC($s2)
        MEM_B(0XC, ctx->r18) = ctx->r17;
            goto L_8010F86C;
    }
    // 0x8010F864: sb          $s1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r17;
    // 0x8010F868: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_8010F86C:
    // 0x8010F86C: slti        $at, $s4, 0x100
    ctx->r1 = SIGNED(ctx->r20) < 0X100 ? 1 : 0;
    // 0x8010F870: bne         $at, $zero, L_8010F87C
    if (ctx->r1 != 0) {
        // 0x8010F874: sb          $s3, 0xD($s2)
        MEM_B(0XD, ctx->r18) = ctx->r19;
            goto L_8010F87C;
    }
    // 0x8010F874: sb          $s3, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r19;
    // 0x8010F878: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
L_8010F87C:
    // 0x8010F87C: sb          $s4, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r20;
    // 0x8010F880: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
L_8010F884:
    // 0x8010F884: addiu       $s7, $s7, 0xA
    ctx->r23 = ADD32(ctx->r23, 0XA);
    // 0x8010F888: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x8010F88C: sltu        $at, $s7, $t5
    ctx->r1 = ctx->r23 < ctx->r13 ? 1 : 0;
    // 0x8010F890: bnel        $at, $zero, L_8010F714
    if (ctx->r1 != 0) {
        // 0x8010F894: lhu         $t8, 0x6($s2)
        ctx->r24 = MEM_HU(ctx->r18, 0X6);
            goto L_8010F714;
    }
    goto skip_4;
    // 0x8010F894: lhu         $t8, 0x6($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X6);
    skip_4:
L_8010F898:
    // 0x8010F898: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8010F89C: lbu         $t8, 0x17($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X17);
    // 0x8010F8A0: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8010F8A4: b           L_8010F91C
    // 0x8010F8A8: sb          $t9, 0x17($t6)
    MEM_B(0X17, ctx->r14) = ctx->r25;
        goto L_8010F91C;
    // 0x8010F8A8: sb          $t9, 0x17($t6)
    MEM_B(0X17, ctx->r14) = ctx->r25;
L_8010F8AC:
    // 0x8010F8AC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8010F8B0: sltu        $at, $s7, $v1
    ctx->r1 = ctx->r23 < ctx->r3 ? 1 : 0;
    // 0x8010F8B4: lhu         $t1, 0x16($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X16);
    // 0x8010F8B8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8010F8BC: beql        $t2, $zero, L_8010F920
    if (ctx->r10 == 0) {
        // 0x8010F8C0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_8010F920;
    }
    goto skip_5;
    // 0x8010F8C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_5:
    // 0x8010F8C4: beql        $at, $zero, L_8010F910
    if (ctx->r1 == 0) {
        // 0x8010F8C8: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_8010F910;
    }
    goto skip_6;
    // 0x8010F8C8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    skip_6:
    // 0x8010F8CC: lhu         $t3, 0x6($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X6);
L_8010F8D0:
    // 0x8010F8D0: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x8010F8D4: bnel        $t4, $zero, L_8010F8F8
    if (ctx->r12 != 0) {
        // 0x8010F8D8: lw          $t9, 0x48($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X48);
            goto L_8010F8F8;
    }
    goto skip_7;
    // 0x8010F8D8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    skip_7:
    // 0x8010F8DC: lbu         $t5, 0x6($s7)
    ctx->r13 = MEM_BU(ctx->r23, 0X6);
    // 0x8010F8E0: sb          $t5, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r13;
    // 0x8010F8E4: lbu         $t7, 0x7($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X7);
    // 0x8010F8E8: sb          $t7, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r15;
    // 0x8010F8EC: lbu         $t8, 0x8($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X8);
    // 0x8010F8F0: sb          $t8, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r24;
    // 0x8010F8F4: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
L_8010F8F8:
    // 0x8010F8F8: addiu       $s7, $s7, 0xA
    ctx->r23 = ADD32(ctx->r23, 0XA);
    // 0x8010F8FC: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x8010F900: sltu        $at, $s7, $t9
    ctx->r1 = ctx->r23 < ctx->r25 ? 1 : 0;
    // 0x8010F904: bnel        $at, $zero, L_8010F8D0
    if (ctx->r1 != 0) {
        // 0x8010F908: lhu         $t3, 0x6($s2)
        ctx->r11 = MEM_HU(ctx->r18, 0X6);
            goto L_8010F8D0;
    }
    goto skip_8;
    // 0x8010F908: lhu         $t3, 0x6($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X6);
    skip_8:
    // 0x8010F90C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
L_8010F910:
    // 0x8010F910: lbu         $t0, 0x17($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X17);
    // 0x8010F914: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x8010F918: sb          $t1, 0x17($t6)
    MEM_B(0X17, ctx->r14) = ctx->r9;
L_8010F91C:
    // 0x8010F91C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8010F920:
    // 0x8010F920: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010F924: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8010F928: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8010F92C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8010F930: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8010F934: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8010F938: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8010F93C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8010F940: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8010F944: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8010F948: jr          $ra
    // 0x8010F94C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8010F94C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8010F950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010F950: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010F954: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010F958: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8010F95C: addiu       $v0, $v0, 0x7240
    ctx->r2 = ADD32(ctx->r2, 0X7240);
    // 0x8010F960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010F964: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8010F968: addiu       $t6, $t6, 0x7250
    ctx->r14 = ADD32(ctx->r14, 0X7250);
    // 0x8010F96C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8010F970: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x8010F974: jal         0x8010F384
    // 0x8010F978: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_8010F384(rdram, ctx);
        goto after_0;
    // 0x8010F978: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x8010F97C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010F980: jal         0x800DF8B4
    // 0x8010F984: lw          $a0, 0x7240($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7240);
    func_800DF8B4(rdram, ctx);
        goto after_1;
    // 0x8010F984: lw          $a0, 0x7240($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7240);
    after_1:
    // 0x8010F988: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010F98C: lw          $a0, 0x7240($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7240);
    // 0x8010F990: jal         0x800DF8BC
    // 0x8010F994: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800DF8BC(rdram, ctx);
        goto after_2;
    // 0x8010F994: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x8010F998: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010F99C: jal         0x8010F68C
    // 0x8010F9A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8010F68C(rdram, ctx);
        goto after_3;
    // 0x8010F9A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x8010F9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010F9A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010F9AC: jr          $ra
    // 0x8010F9B0: nop

    return;
    // 0x8010F9B0: nop

;}
RECOMP_FUNC void func_8010F9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010F9C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010F9C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010F9C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010F9CC: lh          $v1, 0x16($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X16);
    // 0x8010F9D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010F9D4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8010F9D8: beq         $a1, $v1, L_8010FAD0
    if (ctx->r5 == ctx->r3) {
        // 0x8010F9DC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8010FAD0;
    }
    // 0x8010F9DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8010F9E0: beq         $v1, $at, L_8010FA54
    if (ctx->r3 == ctx->r1) {
        // 0x8010F9E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8010FA54;
    }
    // 0x8010F9E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010F9E8: beq         $v1, $at, L_8010FA38
    if (ctx->r3 == ctx->r1) {
        // 0x8010F9EC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8010FA38;
    }
    // 0x8010F9EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8010F9F0: beq         $v1, $at, L_8010FA08
    if (ctx->r3 == ctx->r1) {
        // 0x8010F9F4: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8010FA08;
    }
    // 0x8010F9F4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8010F9F8: beql        $v1, $at, L_8010FA24
    if (ctx->r3 == ctx->r1) {
        // 0x8010F9FC: lh          $a0, 0x14($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X14);
            goto L_8010FA24;
    }
    goto skip_0;
    // 0x8010F9FC: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    skip_0:
    // 0x8010FA00: b           L_8010FA58
    // 0x8010FA04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
        goto L_8010FA58;
    // 0x8010FA04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8010FA08:
    // 0x8010FA08: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8010FA0C: jal         0x800891E0
    // 0x8010FA10: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    _ncfixposrot_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8010FA10: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x8010FA14: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8010FA18: b           L_8010FA54
    // 0x8010FA1C: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
        goto L_8010FA54;
    // 0x8010FA1C: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8010FA20: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
L_8010FA24:
    // 0x8010FA24: jal         0x800894C8
    // 0x8010FA28: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    _ncpod_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x8010FA28: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x8010FA2C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8010FA30: b           L_8010FA54
    // 0x8010FA34: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
        goto L_8010FA54;
    // 0x8010FA34: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
L_8010FA38:
    // 0x8010FA38: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8010FA3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8010FA40: beql        $a0, $zero, L_8010FA58
    if (ctx->r4 == 0) {
        // 0x8010FA44: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8010FA58;
    }
    goto skip_1;
    // 0x8010FA44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_1:
    // 0x8010FA48: jal         0x80110B68
    // 0x8010FA4C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_80110B68(rdram, ctx);
        goto after_2;
    // 0x8010FA4C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_2:
    // 0x8010FA50: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_8010FA54:
    // 0x8010FA54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8010FA58:
    // 0x8010FA58: beq         $a2, $at, L_8010FAD0
    if (ctx->r6 == ctx->r1) {
        // 0x8010FA5C: sh          $a2, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r6;
            goto L_8010FAD0;
    }
    // 0x8010FA5C: sh          $a2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r6;
    // 0x8010FA60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010FA64: beq         $a2, $at, L_8010FA94
    if (ctx->r6 == ctx->r1) {
        // 0x8010FA68: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8010FA94;
    }
    // 0x8010FA68: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8010FA6C: beq         $a2, $at, L_8010FA84
    if (ctx->r6 == ctx->r1) {
        // 0x8010FA70: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8010FA84;
    }
    // 0x8010FA70: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8010FA74: beq         $a2, $at, L_8010FAC4
    if (ctx->r6 == ctx->r1) {
        // 0x8010FA78: nop
    
            goto L_8010FAC4;
    }
    // 0x8010FA78: nop

    // 0x8010FA7C: b           L_8010FAD4
    // 0x8010FA80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8010FAD4;
    // 0x8010FA80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010FA84:
    // 0x8010FA84: jal         0x800891D8
    // 0x8010FA88: nop

    _ncfixposrot_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x8010FA88: nop

    after_3:
    // 0x8010FA8C: b           L_8010FAD0
    // 0x8010FA90: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
        goto L_8010FAD0;
    // 0x8010FA90: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
L_8010FA94:
    // 0x8010FA94: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8010FA98: beql        $a0, $zero, L_8010FAB4
    if (ctx->r4 == 0) {
        // 0x8010FA9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010FAB4;
    }
    goto skip_2;
    // 0x8010FA9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x8010FAA0: jal         0x80110B68
    // 0x8010FAA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80110B68(rdram, ctx);
        goto after_4;
    // 0x8010FAA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8010FAA8: b           L_8010FAD4
    // 0x8010FAAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8010FAD4;
    // 0x8010FAAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010FAB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8010FAB4:
    // 0x8010FAB4: jal         0x80110424
    // 0x8010FAB8: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    func_80110424(rdram, ctx);
        goto after_5;
    // 0x8010FAB8: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    after_5:
    // 0x8010FABC: b           L_8010FAD0
    // 0x8010FAC0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_8010FAD0;
    // 0x8010FAC0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_8010FAC4:
    // 0x8010FAC4: jal         0x800894C0
    // 0x8010FAC8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    _ncpod_entrypoint_0(rdram, ctx);
        goto after_6;
    // 0x8010FAC8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_6:
    // 0x8010FACC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_8010FAD0:
    // 0x8010FAD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010FAD4:
    // 0x8010FAD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010FAD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010FADC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FAE4: jr          $ra
    // 0x8010FAE8: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    return;
    // 0x8010FAE8: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
;}
RECOMP_FUNC void func_8010FAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FAEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FAF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FAF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010FAF8: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x8010FAFC: beql        $t6, $zero, L_8010FB28
    if (ctx->r14 == 0) {
        // 0x8010FB00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010FB28;
    }
    goto skip_0;
    // 0x8010FB00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8010FB04: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x8010FB08: jal         0x800A9420
    // 0x8010FB0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800A9420(rdram, ctx);
        goto after_0;
    // 0x8010FB0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8010FB10: beq         $v0, $zero, L_8010FB24
    if (ctx->r2 == 0) {
        // 0x8010FB14: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_8010FB24;
    }
    // 0x8010FB14: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8010FB18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010FB1C: jal         0x80114FA4
    // 0x8010FB20: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    func_80114FA4(rdram, ctx);
        goto after_1;
    // 0x8010FB20: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    after_1:
L_8010FB24:
    // 0x8010FB24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010FB28:
    // 0x8010FB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010FB2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FB34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010FB38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010FB3C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8010FB40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010FB44: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8010FB48: jal         0x8001ACCC
    // 0x8010FB4C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8010FB4C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x8010FB50: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8010FB54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010FB58: sb          $zero, 0x18($v0)
    MEM_B(0X18, ctx->r2) = 0;
    // 0x8010FB5C: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x8010FB60: sb          $zero, 0x20($v0)
    MEM_B(0X20, ctx->r2) = 0;
    // 0x8010FB64: jal         0x80114BD4
    // 0x8010FB68: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80114BD4(rdram, ctx);
        goto after_1;
    // 0x8010FB68: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_1:
    // 0x8010FB6C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8010FB70: jal         0x800DA298
    // 0x8010FB74: addiu       $a0, $zero, 0x6B5
    ctx->r4 = ADD32(0, 0X6B5);
    func_800DA298(rdram, ctx);
        goto after_2;
    // 0x8010FB74: addiu       $a0, $zero, 0x6B5
    ctx->r4 = ADD32(0, 0X6B5);
    after_2:
    // 0x8010FB78: beql        $v0, $zero, L_8010FB94
    if (ctx->r2 == 0) {
        // 0x8010FB7C: sw          $zero, 0xC($s0)
        MEM_W(0XC, ctx->r16) = 0;
            goto L_8010FB94;
    }
    goto skip_0;
    // 0x8010FB7C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    skip_0:
    // 0x8010FB80: jal         0x80115118
    // 0x8010FB84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115118(rdram, ctx);
        goto after_3;
    // 0x8010FB84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8010FB88: b           L_8010FB94
    // 0x8010FB8C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
        goto L_8010FB94;
    // 0x8010FB8C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8010FB90: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_8010FB94:
    // 0x8010FB94: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8010FB98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010FB9C: jal         0x80110424
    // 0x8010FBA0: sw          $a1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r5;
    func_80110424(rdram, ctx);
        goto after_4;
    // 0x8010FBA0: sw          $a1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r5;
    after_4:
    // 0x8010FBA4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8010FBA8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8010FBAC: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x8010FBB0: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x8010FBB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010FBB8: jal         0x8010F9C0
    // 0x8010FBBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8010F9C0(rdram, ctx);
        goto after_5;
    // 0x8010FBBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8010FBC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010FBC4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8010FBC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010FBCC: jr          $ra
    // 0x8010FBD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8010FBD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8010FBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FBD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010FBD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010FBDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010FBE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010FBE4: jal         0x8010F9C0
    // 0x8010FBE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8010F9C0(rdram, ctx);
        goto after_0;
    // 0x8010FBE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8010FBEC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8010FBF0: beql        $a0, $zero, L_8010FC04
    if (ctx->r4 == 0) {
        // 0x8010FBF4: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_8010FC04;
    }
    goto skip_0;
    // 0x8010FBF4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x8010FBF8: jal         0x801104F4
    // 0x8010FBFC: nop

    func_801104F4(rdram, ctx);
        goto after_1;
    // 0x8010FBFC: nop

    after_1:
    // 0x8010FC00: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_8010FC04:
    // 0x8010FC04: beq         $a0, $zero, L_8010FC14
    if (ctx->r4 == 0) {
        // 0x8010FC08: nop
    
            goto L_8010FC14;
    }
    // 0x8010FC08: nop

    // 0x8010FC0C: jal         0x801150F8
    // 0x8010FC10: nop

    func_801150F8(rdram, ctx);
        goto after_2;
    // 0x8010FC10: nop

    after_2:
L_8010FC14:
    // 0x8010FC14: jal         0x80114C7C
    // 0x8010FC18: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_80114C7C(rdram, ctx);
        goto after_3;
    // 0x8010FC18: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_3:
    // 0x8010FC1C: jal         0x8001B084
    // 0x8010FC20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001B084(rdram, ctx);
        goto after_4;
    // 0x8010FC20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8010FC24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010FC28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010FC2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010FC30: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FC38: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8010FC3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010FC40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010FC44: lbu         $t6, 0x18($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X18);
    // 0x8010FC48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010FC4C: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    // 0x8010FC50: bne         $t6, $zero, L_8010FC68
    if (ctx->r14 != 0) {
        // 0x8010FC54: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8010FC68;
    }
    // 0x8010FC54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010FC58: lbu         $t7, 0x19($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X19);
    // 0x8010FC5C: bne         $t7, $zero, L_8010FC68
    if (ctx->r15 != 0) {
        // 0x8010FC60: nop
    
            goto L_8010FC68;
    }
    // 0x8010FC60: nop

    // 0x8010FC64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010FC68:
    // 0x8010FC68: beq         $v0, $at, L_8010FC8C
    if (ctx->r2 == ctx->r1) {
        // 0x8010FC6C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8010FC8C;
    }
    // 0x8010FC6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8010FC70: beq         $v0, $at, L_8010FC9C
    if (ctx->r2 == ctx->r1) {
        // 0x8010FC74: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8010FC9C;
    }
    // 0x8010FC74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8010FC78: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8010FC7C: beq         $v0, $at, L_8010FCAC
    if (ctx->r2 == ctx->r1) {
        // 0x8010FC80: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8010FCAC;
    }
    // 0x8010FC80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8010FC84: b           L_8010FCB8
    // 0x8010FC88: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
        goto L_8010FCB8;
    // 0x8010FC88: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_8010FC8C:
    // 0x8010FC8C: jal         0x80110588
    // 0x8010FC90: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_80110588(rdram, ctx);
        goto after_0;
    // 0x8010FC90: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x8010FC94: b           L_8010FCB8
    // 0x8010FC98: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
        goto L_8010FCB8;
    // 0x8010FC98: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_8010FC9C:
    // 0x8010FC9C: jal         0x80089208
    // 0x8010FCA0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    _ncfixposrot_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x8010FCA0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x8010FCA4: b           L_8010FCB8
    // 0x8010FCA8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
        goto L_8010FCB8;
    // 0x8010FCA8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_8010FCAC:
    // 0x8010FCAC: jal         0x80089530
    // 0x8010FCB0: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    _ncpod_entrypoint_14(rdram, ctx);
        goto after_2;
    // 0x8010FCB0: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    after_2:
    // 0x8010FCB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_8010FCB8:
    // 0x8010FCB8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8010FCBC: jal         0x800CA8B4
    // 0x8010FCC0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800CA8B4(rdram, ctx);
        goto after_3;
    // 0x8010FCC0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x8010FCC4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8010FCC8: jal         0x800E1A58
    // 0x8010FCCC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800E1A58(rdram, ctx);
        goto after_4;
    // 0x8010FCCC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x8010FCD0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8010FCD4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8010FCD8: jal         0x800CA628
    // 0x8010FCDC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800CA628(rdram, ctx);
        goto after_5;
    // 0x8010FCDC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x8010FCE0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8010FCE4: beql        $a0, $zero, L_8010FCF8
    if (ctx->r4 == 0) {
        // 0x8010FCE8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010FCF8;
    }
    goto skip_0;
    // 0x8010FCE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8010FCEC: jal         0x801151C4
    // 0x8010FCF0: nop

    func_801151C4(rdram, ctx);
        goto after_6;
    // 0x8010FCF0: nop

    after_6:
    // 0x8010FCF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010FCF8:
    // 0x8010FCF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010FCFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8010FD00: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FD08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FD0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FD10: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8010FD14: sb          $t6, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r14;
    // 0x8010FD18: jal         0x8010FC38
    // 0x8010FD1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8010FC38(rdram, ctx);
        goto after_0;
    // 0x8010FD1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010FD20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010FD24: sb          $zero, 0x19($a0)
    MEM_B(0X19, ctx->r4) = 0;
    // 0x8010FD28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010FD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010FD30: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FD38: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8010FD3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FD40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FD44: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8010FD48: jal         0x80114CB0
    // 0x8010FD4C: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    func_80114CB0(rdram, ctx);
        goto after_0;
    // 0x8010FD4C: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    after_0:
    // 0x8010FD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010FD54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010FD58: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FD60: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8010FD64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FD68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FD6C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8010FD70: jal         0x80114CC0
    // 0x8010FD74: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    func_80114CC0(rdram, ctx);
        goto after_0;
    // 0x8010FD74: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    after_0:
    // 0x8010FD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010FD7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010FD80: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FD88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FD90: jal         0x8010FD08
    // 0x8010FD94: nop

    func_8010FD08(rdram, ctx);
        goto after_0;
    // 0x8010FD94: nop

    after_0:
    // 0x8010FD98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010FD9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010FDA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FDA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FDA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FDAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FDB0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8010FDB4: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x8010FDB8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8010FDBC: sb          $t6, 0x20($a0)
    MEM_B(0X20, ctx->r4) = ctx->r14;
    // 0x8010FDC0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8010FDC4: jal         0x800EE7F8
    // 0x8010FDC8: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8010FDC8: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_0:
    // 0x8010FDCC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8010FDD0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8010FDD4: jal         0x800EE7F8
    // 0x8010FDD8: addiu       $a0, $a3, 0x30
    ctx->r4 = ADD32(ctx->r7, 0X30);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8010FDD8: addiu       $a0, $a3, 0x30
    ctx->r4 = ADD32(ctx->r7, 0X30);
    after_1:
    // 0x8010FDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010FDE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010FDE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FDEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8010FDF0: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x8010FDF4: sb          $t6, 0x20($a0)
    MEM_B(0X20, ctx->r4) = ctx->r14;
    // 0x8010FDF8: jr          $ra
    // 0x8010FDFC: swc1        $f12, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8010FDFC: swc1        $f12, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8010FE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FE00: xori        $t6, $a2, 0x2
    ctx->r14 = ctx->r6 ^ 0X2;
    // 0x8010FE04: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8010FE08: sltiu       $t6, $t6, 0x1
    ctx->r14 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8010FE0C: jr          $ra
    // 0x8010FE10: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    return;
    // 0x8010FE10: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8010FE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FE14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FE18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FE1C: jal         0x800CA628
    // 0x8010FE20: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_800CA628(rdram, ctx);
        goto after_0;
    // 0x8010FE20: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8010FE24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010FE28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010FE2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FE34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010FE38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010FE3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010FE40: lbu         $v0, 0x20($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X20);
    // 0x8010FE44: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8010FE48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010FE4C: beq         $v0, $zero, L_8010FEBC
    if (ctx->r2 == 0) {
        // 0x8010FE50: lui         $a1, 0x8013
        ctx->r5 = S32(0X8013 << 16);
            goto L_8010FEBC;
    }
    // 0x8010FE50: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010FE54: lh          $t6, 0x16($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X16);
    // 0x8010FE58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010FE5C: sb          $zero, 0x20($a0)
    MEM_B(0X20, ctx->r4) = 0;
    // 0x8010FE60: bne         $t6, $at, L_8010FEBC
    if (ctx->r14 != ctx->r1) {
        // 0x8010FE64: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_8010FEBC;
    }
    // 0x8010FE64: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x8010FE68: beq         $v0, $at, L_8010FE84
    if (ctx->r2 == ctx->r1) {
        // 0x8010FE6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010FE84;
    }
    // 0x8010FE6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010FE70: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x8010FE74: beql        $v0, $at, L_8010FEA4
    if (ctx->r2 == ctx->r1) {
        // 0x8010FE78: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_8010FEA4;
    }
    goto skip_0;
    // 0x8010FE78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_0:
    // 0x8010FE7C: b           L_8010FEAC
    // 0x8010FE80: nop

        goto L_8010FEAC;
    // 0x8010FE80: nop

L_8010FE84:
    // 0x8010FE84: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    // 0x8010FE88: jal         0x8010FE14
    // 0x8010FE8C: addiu       $a2, $s0, 0x30
    ctx->r6 = ADD32(ctx->r16, 0X30);
    func_8010FE14(rdram, ctx);
        goto after_0;
    // 0x8010FE8C: addiu       $a2, $s0, 0x30
    ctx->r6 = ADD32(ctx->r16, 0X30);
    after_0:
    // 0x8010FE90: jal         0x801108A0
    // 0x8010FE94: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_801108A0(rdram, ctx);
        goto after_1;
    // 0x8010FE94: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_1:
    // 0x8010FE98: b           L_8010FEAC
    // 0x8010FE9C: nop

        goto L_8010FEAC;
    // 0x8010FE9C: nop

    // 0x8010FEA0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_8010FEA4:
    // 0x8010FEA4: jal         0x80110970
    // 0x8010FEA8: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    func_80110970(rdram, ctx);
        goto after_2;
    // 0x8010FEA8: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    after_2:
L_8010FEAC:
    // 0x8010FEAC: jal         0x8010FD08
    // 0x8010FEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010FD08(rdram, ctx);
        goto after_3;
    // 0x8010FEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8010FEB4: b           L_8010FF70
    // 0x8010FEB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8010FF70;
    // 0x8010FEB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010FEBC:
    // 0x8010FEBC: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010FEC0: addiu       $a2, $a2, 0x7330
    ctx->r6 = ADD32(ctx->r6, 0X7330);
    // 0x8010FEC4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8010FEC8: jal         0x80089438
    // 0x8010FECC: addiu       $a1, $a1, 0x7320
    ctx->r5 = ADD32(ctx->r5, 0X7320);
    _ncstart_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x8010FECC: addiu       $a1, $a1, 0x7320
    ctx->r5 = ADD32(ctx->r5, 0X7320);
    after_4:
    // 0x8010FED0: bnel        $v0, $zero, L_8010FF04
    if (ctx->r2 != 0) {
        // 0x8010FED4: lh          $t8, 0x16($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X16);
            goto L_8010FF04;
    }
    goto skip_1;
    // 0x8010FED4: lh          $t8, 0x16($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X16);
    skip_1:
    // 0x8010FED8: lh          $t7, 0x16($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X16);
    // 0x8010FEDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010FEE0: bne         $t7, $at, L_8010FEF0
    if (ctx->r15 != ctx->r1) {
        // 0x8010FEE4: nop
    
            goto L_8010FEF0;
    }
    // 0x8010FEE4: nop

    // 0x8010FEE8: jal         0x80110928
    // 0x8010FEEC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_80110928(rdram, ctx);
        goto after_5;
    // 0x8010FEEC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_5:
L_8010FEF0:
    // 0x8010FEF0: jal         0x8010FD08
    // 0x8010FEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010FD08(rdram, ctx);
        goto after_6;
    // 0x8010FEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8010FEF8: b           L_8010FF70
    // 0x8010FEFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8010FF70;
    // 0x8010FEFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010FF00: lh          $t8, 0x16($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X16);
L_8010FF04:
    // 0x8010FF04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010FF08: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010FF0C: bne         $t8, $at, L_8010FF24
    if (ctx->r24 != ctx->r1) {
        // 0x8010FF10: addiu       $a1, $a1, 0x7330
        ctx->r5 = ADD32(ctx->r5, 0X7330);
            goto L_8010FF24;
    }
    // 0x8010FF10: addiu       $a1, $a1, 0x7330
    ctx->r5 = ADD32(ctx->r5, 0X7330);
    // 0x8010FF14: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8010FF18: addiu       $a2, $a2, 0x7320
    ctx->r6 = ADD32(ctx->r6, 0X7320);
    // 0x8010FF1C: jal         0x80110A24
    // 0x8010FF20: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_80110A24(rdram, ctx);
        goto after_7;
    // 0x8010FF20: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_7:
L_8010FF24:
    // 0x8010FF24: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010FF28: addiu       $a1, $a1, 0x7320
    ctx->r5 = ADD32(ctx->r5, 0X7320);
    // 0x8010FF2C: jal         0x800CA5B8
    // 0x8010FF30: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800CA5B8(rdram, ctx);
        goto after_8;
    // 0x8010FF30: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_8:
    // 0x8010FF34: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8010FF38: addiu       $a1, $a1, 0x7330
    ctx->r5 = ADD32(ctx->r5, 0X7330);
    // 0x8010FF3C: jal         0x800CA668
    // 0x8010FF40: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800CA668(rdram, ctx);
        goto after_9;
    // 0x8010FF40: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_9:
    // 0x8010FF44: jal         0x800CAF34
    // 0x8010FF48: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800CAF34(rdram, ctx);
        goto after_10;
    // 0x8010FF48: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_10:
    // 0x8010FF4C: lh          $t9, 0x16($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X16);
    // 0x8010FF50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010FF54: bnel        $t9, $at, L_8010FF70
    if (ctx->r25 != ctx->r1) {
        // 0x8010FF58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010FF70;
    }
    goto skip_2;
    // 0x8010FF58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x8010FF5C: jal         0x801108A0
    // 0x8010FF60: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_801108A0(rdram, ctx);
        goto after_11;
    // 0x8010FF60: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_11:
    // 0x8010FF64: jal         0x8010FD08
    // 0x8010FF68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010FD08(rdram, ctx);
        goto after_12;
    // 0x8010FF68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8010FF6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010FF70:
    // 0x8010FF70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010FF74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8010FF78: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FF80: jr          $ra
    // 0x8010FF84: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    return;
    // 0x8010FF84: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
;}
RECOMP_FUNC void func_8010FF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FF88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FF8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FF90: jal         0x80114C9C
    // 0x8010FF94: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    func_80114C9C(rdram, ctx);
        goto after_0;
    // 0x8010FF94: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    after_0:
    // 0x8010FF98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010FF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010FFA0: jr          $ra
    // 0x8010FFA4: nop

    return;
    // 0x8010FFA4: nop

;}
RECOMP_FUNC void func_8010FFA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FFA8: jr          $ra
    // 0x8010FFAC: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    return;
    // 0x8010FFAC: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
;}
RECOMP_FUNC void func_8010FFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FFB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FFB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FFB8: jal         0x800CA8B4
    // 0x8010FFBC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_800CA8B4(rdram, ctx);
        goto after_0;
    // 0x8010FFBC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8010FFC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010FFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010FFC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010FFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FFD0: jr          $ra
    // 0x8010FFD4: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
    return;
    // 0x8010FFD4: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
;}
RECOMP_FUNC void func_8010FFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010FFD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010FFDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010FFE0: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x8010FFE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8010FFE8: beq         $a1, $zero, L_80110000
    if (ctx->r5 == 0) {
        // 0x8010FFEC: nop
    
            goto L_80110000;
    }
    // 0x8010FFEC: nop

    // 0x8010FFF0: jal         0x801150F0
    // 0x8010FFF4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801150F0(rdram, ctx);
        goto after_0;
    // 0x8010FFF4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8010FFF8: b           L_80110000
    // 0x8010FFFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80110000;
    // 0x8010FFFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80110000:
    // 0x80110000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110008: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8011000C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110014: jr          $ra
    // 0x80110018: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    return;
    // 0x80110018: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void func_8011001C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011001C: jr          $ra
    // 0x80110020: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    return;
    // 0x80110020: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
;}
RECOMP_FUNC void func_80110024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8011002C: lh          $a1, 0x14($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X14);
    // 0x80110030: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80110034: beq         $a1, $zero, L_80110050
    if (ctx->r5 == 0) {
        // 0x80110038: sll         $a0, $a1, 16
        ctx->r4 = S32(ctx->r5 << 16);
            goto L_80110050;
    }
    // 0x80110038: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x8011003C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80110040: jal         0x800894D0
    // 0x80110044: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    _ncpod_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80110044: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80110048: b           L_80110054
    // 0x8011004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80110054;
    // 0x8011004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80110050:
    // 0x80110050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80110054:
    // 0x80110054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110058: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110060: jr          $ra
    // 0x80110064: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    return;
    // 0x80110064: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
;}
RECOMP_FUNC void func_80110068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8011006C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110070: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80110074: jal         0x8001BAFC
    // 0x80110078: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    defrag(rdram, ctx);
        goto after_0;
    // 0x80110078: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8011007C: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80110080: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80110084: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80110088: beq         $t7, $zero, L_801100A0
    if (ctx->r15 == 0) {
        // 0x8011008C: sw          $t6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r14;
            goto L_801100A0;
    }
    // 0x8011008C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80110090: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x80110094: jal         0x80110FCC
    // 0x80110098: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80110FCC(rdram, ctx);
        goto after_1;
    // 0x80110098: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8011009C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_801100A0:
    // 0x801100A0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x801100A4: beql        $a0, $zero, L_801100BC
    if (ctx->r4 == 0) {
        // 0x801100A8: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_801100BC;
    }
    goto skip_0;
    // 0x801100A8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x801100AC: jal         0x80115324
    // 0x801100B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80115324(rdram, ctx);
        goto after_2;
    // 0x801100B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x801100B4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x801100B8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_801100BC:
    // 0x801100BC: beql        $a0, $zero, L_801100D4
    if (ctx->r4 == 0) {
        // 0x801100C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801100D4;
    }
    goto skip_1;
    // 0x801100C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801100C4: jal         0x80114CD4
    // 0x801100C8: nop

    func_80114CD4(rdram, ctx);
        goto after_3;
    // 0x801100C8: nop

    after_3:
    // 0x801100CC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x801100D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801100D4:
    // 0x801100D4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801100D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801100DC: jr          $ra
    // 0x801100E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x801100E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801100E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801100E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801100E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801100EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801100F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801100F4: beq         $a0, $a1, L_80110150
    if (ctx->r4 == ctx->r5) {
        // 0x801100F8: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80110150;
    }
    // 0x801100F8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801100FC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80110100: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80110104: jal         0x800CA314
    // 0x80110108: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    func_800CA314(rdram, ctx);
        goto after_0;
    // 0x80110108: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8011010C: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80110110: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80110114: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80110118: beql        $t6, $zero, L_80110154
    if (ctx->r14 == 0) {
        // 0x8011011C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80110154;
    }
    goto skip_0;
    // 0x8011011C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80110120: jal         0x8010FFB0
    // 0x80110124: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8010FFB0(rdram, ctx);
        goto after_1;
    // 0x80110124: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80110128: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8011012C: jal         0x80110770
    // 0x80110130: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80110770(rdram, ctx);
        goto after_2;
    // 0x80110130: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x80110134: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80110138: jal         0x80110790
    // 0x8011013C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80110790(rdram, ctx);
        goto after_3;
    // 0x8011013C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x80110140: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80110144: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80110148: jal         0x80111018
    // 0x8011014C: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    func_80111018(rdram, ctx);
        goto after_4;
    // 0x8011014C: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    after_4:
L_80110150:
    // 0x80110150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110154:
    // 0x80110154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80110158: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8011015C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110164: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80110168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8011016C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80110170: lw          $a2, 0x1C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X1C);
    // 0x80110174: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x80110178: jal         0x8011490C
    // 0x8011017C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8011490C(rdram, ctx);
        goto after_0;
    // 0x8011017C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x80110180: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80110184: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80110188: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8011018C: jal         0x80114C9C
    // 0x80110190: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    func_80114C9C(rdram, ctx);
        goto after_1;
    // 0x80110190: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    after_1:
    // 0x80110194: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80110198: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8011019C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801101A0: jal         0x800CA6C0
    // 0x801101A4: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    func_800CA6C0(rdram, ctx);
        goto after_2;
    // 0x801101A4: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    after_2:
    // 0x801101A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801101AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801101B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801101C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801101C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801101C4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801101C8: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x801101CC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x801101D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801101D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801101D8: addiu       $s2, $s2, 0x7372
    ctx->r18 = ADD32(ctx->r18, 0X7372);
    // 0x801101DC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x801101E0: addiu       $t6, $zero, 0x98
    ctx->r14 = ADD32(0, 0X98);
    // 0x801101E4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x801101E8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x801101EC: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x801101F0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801101F4: sh          $t6, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r14;
    // 0x801101F8: addiu       $s4, $s4, 0x7372
    ctx->r20 = ADD32(ctx->r20, 0X7372);
    // 0x801101FC: addiu       $s1, $s1, 0x4950
    ctx->r17 = ADD32(ctx->r17, 0X4950);
    // 0x80110200: addiu       $s0, $s0, 0x7340
    ctx->r16 = ADD32(ctx->r16, 0X7340);
    // 0x80110204: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_80110208:
    // 0x80110208: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8011020C: jalr        $t9
    // 0x80110210: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80110210: nop

    after_0:
    // 0x80110214: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80110218: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x8011021C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80110220: bgez        $v1, L_80110234
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80110224: andi        $a0, $v1, 0x3
        ctx->r4 = ctx->r3 & 0X3;
            goto L_80110234;
    }
    // 0x80110224: andi        $a0, $v1, 0x3
    ctx->r4 = ctx->r3 & 0X3;
    // 0x80110228: beq         $a0, $zero, L_80110234
    if (ctx->r4 == 0) {
        // 0x8011022C: nop
    
            goto L_80110234;
    }
    // 0x8011022C: nop

    // 0x80110230: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
L_80110234:
    // 0x80110234: beq         $a0, $zero, L_80110244
    if (ctx->r4 == 0) {
        // 0x80110238: nop
    
            goto L_80110244;
    }
    // 0x80110238: nop

    // 0x8011023C: b           L_80110244
    // 0x80110240: subu        $v0, $s3, $a0
    ctx->r2 = SUB32(ctx->r19, ctx->r4);
        goto L_80110244;
    // 0x80110240: subu        $v0, $s3, $a0
    ctx->r2 = SUB32(ctx->r19, ctx->r4);
L_80110244:
    // 0x80110244: lh          $t7, 0x0($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X0);
    // 0x80110248: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8011024C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80110250: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80110254: addu        $t0, $t8, $v0
    ctx->r8 = ADD32(ctx->r24, ctx->r2);
    // 0x80110258: bne         $s0, $s4, L_80110208
    if (ctx->r16 != ctx->r20) {
        // 0x8011025C: sh          $t0, 0x0($s2)
        MEM_H(0X0, ctx->r18) = ctx->r8;
            goto L_80110208;
    }
    // 0x8011025C: sh          $t0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r8;
    // 0x80110260: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80110264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80110268: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8011026C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80110270: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80110274: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80110278: jr          $ra
    // 0x8011027C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8011027C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80110280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110280: addiu       $t6, $a0, 0x98
    ctx->r14 = ADD32(ctx->r4, 0X98);
    // 0x80110284: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80110288: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8011028C: lh          $t7, 0x7340($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7340);
    // 0x80110290: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x80110294: addiu       $a2, $a2, 0x7342
    ctx->r6 = ADD32(ctx->r6, 0X7342);
    // 0x80110298: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8011029C: bgez        $a1, L_801102B0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801102A0: andi        $t8, $a1, 0x3
        ctx->r24 = ctx->r5 & 0X3;
            goto L_801102B0;
    }
    // 0x801102A0: andi        $t8, $a1, 0x3
    ctx->r24 = ctx->r5 & 0X3;
    // 0x801102A4: beq         $t8, $zero, L_801102B0
    if (ctx->r24 == 0) {
        // 0x801102A8: nop
    
            goto L_801102B0;
    }
    // 0x801102A8: nop

    // 0x801102AC: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_801102B0:
    // 0x801102B0: beq         $t8, $zero, L_801102D8
    if (ctx->r24 == 0) {
        // 0x801102B4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_801102D8;
    }
    // 0x801102B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801102B8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x801102BC: bgez        $t7, L_801102D0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801102C0: andi        $t9, $t7, 0x3
        ctx->r25 = ctx->r15 & 0X3;
            goto L_801102D0;
    }
    // 0x801102C0: andi        $t9, $t7, 0x3
    ctx->r25 = ctx->r15 & 0X3;
    // 0x801102C4: beq         $t9, $zero, L_801102D0
    if (ctx->r25 == 0) {
        // 0x801102C8: nop
    
            goto L_801102D0;
    }
    // 0x801102C8: nop

    // 0x801102CC: addiu       $t9, $t9, -0x4
    ctx->r25 = ADD32(ctx->r25, -0X4);
L_801102D0:
    // 0x801102D0: b           L_801102E0
    // 0x801102D4: subu        $t0, $t1, $t9
    ctx->r8 = SUB32(ctx->r9, ctx->r25);
        goto L_801102E0;
    // 0x801102D4: subu        $t0, $t1, $t9
    ctx->r8 = SUB32(ctx->r9, ctx->r25);
L_801102D8:
    // 0x801102D8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x801102DC: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
L_801102E0:
    // 0x801102E0: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
    // 0x801102E4: addiu       $v0, $v0, 0x98
    ctx->r2 = ADD32(ctx->r2, 0X98);
    // 0x801102E8: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
L_801102EC:
    // 0x801102EC: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x801102F0: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x801102F4: addu        $t3, $a0, $v0
    ctx->r11 = ADD32(ctx->r4, ctx->r2);
    // 0x801102F8: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x801102FC: lh          $a3, 0x0($a2)
    ctx->r7 = MEM_H(ctx->r6, 0X0);
    // 0x80110300: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x80110304: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80110308: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8011030C: bgez        $a1, L_80110320
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80110310: andi        $t6, $a1, 0x3
        ctx->r14 = ctx->r5 & 0X3;
            goto L_80110320;
    }
    // 0x80110310: andi        $t6, $a1, 0x3
    ctx->r14 = ctx->r5 & 0X3;
    // 0x80110314: beq         $t6, $zero, L_80110320
    if (ctx->r14 == 0) {
        // 0x80110318: nop
    
            goto L_80110320;
    }
    // 0x80110318: nop

    // 0x8011031C: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_80110320:
    // 0x80110320: beq         $t6, $zero, L_80110344
    if (ctx->r14 == 0) {
        // 0x80110324: addu        $t7, $v0, $a1
        ctx->r15 = ADD32(ctx->r2, ctx->r5);
            goto L_80110344;
    }
    // 0x80110324: addu        $t7, $v0, $a1
    ctx->r15 = ADD32(ctx->r2, ctx->r5);
    // 0x80110328: bgez        $a3, L_8011033C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x8011032C: andi        $t8, $a3, 0x3
        ctx->r24 = ctx->r7 & 0X3;
            goto L_8011033C;
    }
    // 0x8011032C: andi        $t8, $a3, 0x3
    ctx->r24 = ctx->r7 & 0X3;
    // 0x80110330: beq         $t8, $zero, L_8011033C
    if (ctx->r24 == 0) {
        // 0x80110334: nop
    
            goto L_8011033C;
    }
    // 0x80110334: nop

    // 0x80110338: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_8011033C:
    // 0x8011033C: b           L_80110348
    // 0x80110340: subu        $t0, $t1, $t8
    ctx->r8 = SUB32(ctx->r9, ctx->r24);
        goto L_80110348;
    // 0x80110340: subu        $t0, $t1, $t8
    ctx->r8 = SUB32(ctx->r9, ctx->r24);
L_80110344:
    // 0x80110344: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80110348:
    // 0x80110348: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x8011034C: addu        $t9, $a0, $v0
    ctx->r25 = ADD32(ctx->r4, ctx->r2);
    // 0x80110350: addu        $t5, $a0, $t3
    ctx->r13 = ADD32(ctx->r4, ctx->r11);
    // 0x80110354: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x80110358: lh          $a1, 0x2($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X2);
    // 0x8011035C: addiu       $t7, $v1, 0x2
    ctx->r15 = ADD32(ctx->r3, 0X2);
    // 0x80110360: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80110364: bgez        $a1, L_80110378
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80110368: andi        $a3, $a1, 0x3
        ctx->r7 = ctx->r5 & 0X3;
            goto L_80110378;
    }
    // 0x80110368: andi        $a3, $a1, 0x3
    ctx->r7 = ctx->r5 & 0X3;
    // 0x8011036C: beq         $a3, $zero, L_80110378
    if (ctx->r7 == 0) {
        // 0x80110370: nop
    
            goto L_80110378;
    }
    // 0x80110370: nop

    // 0x80110374: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
L_80110378:
    // 0x80110378: beq         $a3, $zero, L_80110388
    if (ctx->r7 == 0) {
        // 0x8011037C: addu        $t6, $v0, $a1
        ctx->r14 = ADD32(ctx->r2, ctx->r5);
            goto L_80110388;
    }
    // 0x8011037C: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x80110380: b           L_8011038C
    // 0x80110384: subu        $t0, $t1, $a3
    ctx->r8 = SUB32(ctx->r9, ctx->r7);
        goto L_8011038C;
    // 0x80110384: subu        $t0, $t1, $a3
    ctx->r8 = SUB32(ctx->r9, ctx->r7);
L_80110388:
    // 0x80110388: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_8011038C:
    // 0x8011038C: addu        $v0, $t6, $t0
    ctx->r2 = ADD32(ctx->r14, ctx->r8);
    // 0x80110390: addu        $t8, $a0, $v0
    ctx->r24 = ADD32(ctx->r4, ctx->r2);
    // 0x80110394: addu        $t3, $a0, $t4
    ctx->r11 = ADD32(ctx->r4, ctx->r12);
    // 0x80110398: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8011039C: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    // 0x801103A0: addiu       $t6, $v1, 0x3
    ctx->r14 = ADD32(ctx->r3, 0X3);
    // 0x801103A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801103A8: bgez        $a1, L_801103BC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801103AC: andi        $a3, $a1, 0x3
        ctx->r7 = ctx->r5 & 0X3;
            goto L_801103BC;
    }
    // 0x801103AC: andi        $a3, $a1, 0x3
    ctx->r7 = ctx->r5 & 0X3;
    // 0x801103B0: beq         $a3, $zero, L_801103BC
    if (ctx->r7 == 0) {
        // 0x801103B4: nop
    
            goto L_801103BC;
    }
    // 0x801103B4: nop

    // 0x801103B8: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
L_801103BC:
    // 0x801103BC: beq         $a3, $zero, L_801103CC
    if (ctx->r7 == 0) {
        // 0x801103C0: addu        $t9, $v0, $a1
        ctx->r25 = ADD32(ctx->r2, ctx->r5);
            goto L_801103CC;
    }
    // 0x801103C0: addu        $t9, $v0, $a1
    ctx->r25 = ADD32(ctx->r2, ctx->r5);
    // 0x801103C4: b           L_801103D0
    // 0x801103C8: subu        $t0, $t1, $a3
    ctx->r8 = SUB32(ctx->r9, ctx->r7);
        goto L_801103D0;
    // 0x801103C8: subu        $t0, $t1, $a3
    ctx->r8 = SUB32(ctx->r9, ctx->r7);
L_801103CC:
    // 0x801103CC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_801103D0:
    // 0x801103D0: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x801103D4: addu        $t5, $a0, $v0
    ctx->r13 = ADD32(ctx->r4, ctx->r2);
    // 0x801103D8: addu        $t4, $a0, $t7
    ctx->r12 = ADD32(ctx->r4, ctx->r15);
    // 0x801103DC: sw          $t5, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r13;
    // 0x801103E0: lh          $a1, 0x6($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X6);
    // 0x801103E4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x801103E8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x801103EC: bgez        $a1, L_80110400
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801103F0: andi        $a3, $a1, 0x3
        ctx->r7 = ctx->r5 & 0X3;
            goto L_80110400;
    }
    // 0x801103F0: andi        $a3, $a1, 0x3
    ctx->r7 = ctx->r5 & 0X3;
    // 0x801103F4: beq         $a3, $zero, L_80110400
    if (ctx->r7 == 0) {
        // 0x801103F8: nop
    
            goto L_80110400;
    }
    // 0x801103F8: nop

    // 0x801103FC: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
L_80110400:
    // 0x80110400: beq         $a3, $zero, L_80110410
    if (ctx->r7 == 0) {
        // 0x80110404: addu        $t8, $v0, $a1
        ctx->r24 = ADD32(ctx->r2, ctx->r5);
            goto L_80110410;
    }
    // 0x80110404: addu        $t8, $v0, $a1
    ctx->r24 = ADD32(ctx->r2, ctx->r5);
    // 0x80110408: b           L_80110414
    // 0x8011040C: subu        $t0, $t1, $a3
    ctx->r8 = SUB32(ctx->r9, ctx->r7);
        goto L_80110414;
    // 0x8011040C: subu        $t0, $t1, $a3
    ctx->r8 = SUB32(ctx->r9, ctx->r7);
L_80110410:
    // 0x80110410: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80110414:
    // 0x80110414: bne         $v1, $t2, L_801102EC
    if (ctx->r3 != ctx->r10) {
        // 0x80110418: addu        $v0, $t8, $t0
        ctx->r2 = ADD32(ctx->r24, ctx->r8);
            goto L_801102EC;
    }
    // 0x80110418: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x8011041C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80110428: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8011042C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x80110430: lh          $a0, 0x7372($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X7372);
    // 0x80110434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110438: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8011043C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80110440: jal         0x8001ACCC
    // 0x80110444: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x80110444: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x80110448: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8011044C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80110450: jal         0x8002D6E0
    // 0x80110454: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x80110454: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80110458: jal         0x80110280
    // 0x8011045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110280(rdram, ctx);
        goto after_2;
    // 0x8011045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80110460: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80110464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80110468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8011046C: sw          $t6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r14;
    // 0x80110470: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80110474: jal         0x80110720
    // 0x80110478: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    func_80110720(rdram, ctx);
        goto after_3;
    // 0x80110478: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    after_3:
    // 0x8011047C: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    // 0x80110480: addiu       $a1, $s0, 0x74
    ctx->r5 = ADD32(ctx->r16, 0X74);
    // 0x80110484: jal         0x8010FFB0
    // 0x80110488: addiu       $a2, $s0, 0x80
    ctx->r6 = ADD32(ctx->r16, 0X80);
    func_8010FFB0(rdram, ctx);
        goto after_4;
    // 0x80110488: addiu       $a2, $s0, 0x80
    ctx->r6 = ADD32(ctx->r16, 0X80);
    after_4:
    // 0x8011048C: jal         0x800893D0
    // 0x80110490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _ncba1p_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x80110490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80110494: jal         0x80112398
    // 0x80110498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80112398(rdram, ctx);
        goto after_6;
    // 0x80110498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8011049C: jal         0x80089388
    // 0x801104A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _ncbaspline_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x801104A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801104A4: jal         0x8011337C
    // 0x801104A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8011337C(rdram, ctx);
        goto after_8;
    // 0x801104A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801104AC: jal         0x80111348
    // 0x801104B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111348(rdram, ctx);
        goto after_9;
    // 0x801104B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801104B4: jal         0x80115FB0
    // 0x801104B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115FB0(rdram, ctx);
        goto after_10;
    // 0x801104B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x801104BC: jal         0x801125B8
    // 0x801104C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801125B8(rdram, ctx);
        goto after_11;
    // 0x801104C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801104C4: jal         0x80110C88
    // 0x801104C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110C88(rdram, ctx);
        goto after_12;
    // 0x801104C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801104CC: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x801104D0: sb          $zero, 0x72($s0)
    MEM_B(0X72, ctx->r16) = 0;
    // 0x801104D4: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    // 0x801104D8: jal         0x800EFD24
    // 0x801104DC: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    func_800EFD24(rdram, ctx);
        goto after_13;
    // 0x801104DC: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    after_13:
    // 0x801104E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801104E4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801104E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801104EC: jr          $ra
    // 0x801104F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x801104F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801104F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801104F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801104F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801104FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80110500: jal         0x801106A8
    // 0x80110504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801106A8(rdram, ctx);
        goto after_0;
    // 0x80110504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80110508: jal         0x80113410
    // 0x8011050C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80113410(rdram, ctx);
        goto after_1;
    // 0x8011050C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80110510: jal         0x8001B084
    // 0x80110514: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001B084(rdram, ctx);
        goto after_2;
    // 0x80110514: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80110518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8011051C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110520: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110528: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8011052C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110530: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80110534: jal         0x801138A0
    // 0x80110538: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_801138A0(rdram, ctx);
        goto after_0;
    // 0x80110538: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8011053C: beql        $v0, $zero, L_80110550
    if (ctx->r2 == 0) {
        // 0x80110540: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80110550;
    }
    goto skip_0;
    // 0x80110540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80110544: jal         0x801138F4
    // 0x80110548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_1;
    // 0x80110548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8011054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80110550:
    // 0x80110550: jal         0x80112524
    // 0x80110554: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80112524(rdram, ctx);
        goto after_2;
    // 0x80110554: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x80110558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8011055C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80110560: jal         0x80110A68
    // 0x80110564: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_80110A68(rdram, ctx);
        goto after_3;
    // 0x80110564: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80110568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8011056C: jal         0x80110790
    // 0x80110570: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80110790(rdram, ctx);
        goto after_4;
    // 0x80110570: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x80110574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80110578: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8011057C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80110580: jr          $ra
    // 0x80110584: nop

    return;
    // 0x80110584: nop

;}
RECOMP_FUNC void func_80110588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110588: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8011058C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110590: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80110594: lbu         $t6, 0x70($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X70);
    // 0x80110598: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8011059C: beql        $t6, $zero, L_80110690
    if (ctx->r14 == 0) {
        // 0x801105A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80110690;
    }
    goto skip_0;
    // 0x801105A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801105A4: jal         0x8011607C
    // 0x801105A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8011607C(rdram, ctx);
        goto after_0;
    // 0x801105A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801105AC: lbu         $t7, 0x72($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X72);
    // 0x801105B0: bne         $t7, $zero, L_8011061C
    if (ctx->r15 != 0) {
        // 0x801105B4: nop
    
            goto L_8011061C;
    }
    // 0x801105B4: nop

    // 0x801105B8: jal         0x8011347C
    // 0x801105BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8011347C(rdram, ctx);
        goto after_1;
    // 0x801105BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801105C0: jal         0x801123D4
    // 0x801105C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801123D4(rdram, ctx);
        goto after_2;
    // 0x801105C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801105C8: jal         0x80115A9C
    // 0x801105CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115A9C(rdram, ctx);
        goto after_3;
    // 0x801105CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801105D0: jal         0x80112A84
    // 0x801105D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80112A84(rdram, ctx);
        goto after_4;
    // 0x801105D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801105D8: jal         0x801154A4
    // 0x801105DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801154A4(rdram, ctx);
        goto after_5;
    // 0x801105DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801105E0: jal         0x80112648
    // 0x801105E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80112648(rdram, ctx);
        goto after_6;
    // 0x801105E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801105E8: jal         0x80114DD8
    // 0x801105EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80114DD8(rdram, ctx);
        goto after_7;
    // 0x801105EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801105F0: jal         0x80113D30
    // 0x801105F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80113D30(rdram, ctx);
        goto after_8;
    // 0x801105F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801105F8: lw          $t8, 0x6C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X6C);
    // 0x801105FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80110600: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80110604: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80110608: lw          $v0, 0x47A4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X47A4);
    // 0x8011060C: beq         $v0, $zero, L_8011061C
    if (ctx->r2 == 0) {
        // 0x80110610: nop
    
            goto L_8011061C;
    }
    // 0x80110610: nop

    // 0x80110614: jalr        $v0
    // 0x80110618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x80110618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_8011061C:
    // 0x8011061C: jal         0x800EFD24
    // 0x80110620: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    func_800EFD24(rdram, ctx);
        goto after_10;
    // 0x80110620: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    after_10:
    // 0x80110624: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80110628: jal         0x800EE7F8
    // 0x8011062C: addiu       $a1, $s0, 0x74
    ctx->r5 = ADD32(ctx->r16, 0X74);
    func_800EE7F8(rdram, ctx);
        goto after_11;
    // 0x8011062C: addiu       $a1, $s0, 0x74
    ctx->r5 = ADD32(ctx->r16, 0X74);
    after_11:
    // 0x80110630: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80110634: jal         0x800EE7F8
    // 0x80110638: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    func_800EE7F8(rdram, ctx);
        goto after_12;
    // 0x80110638: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    after_12:
    // 0x8011063C: lbu         $t0, 0x71($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X71);
    // 0x80110640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80110644: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80110648: beql        $t0, $zero, L_8011065C
    if (ctx->r8 == 0) {
        // 0x8011064C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8011065C;
    }
    goto skip_1;
    // 0x8011064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80110650: jal         0x800893E0
    // 0x80110654: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    _ncba1p_entrypoint_3(rdram, ctx);
        goto after_13;
    // 0x80110654: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_13:
    // 0x80110658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8011065C:
    // 0x8011065C: jal         0x80116024
    // 0x80110660: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80116024(rdram, ctx);
        goto after_14;
    // 0x80110660: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_14:
    // 0x80110664: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    // 0x80110668: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8011066C: jal         0x8010FE14
    // 0x80110670: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8010FE14(rdram, ctx);
        goto after_15;
    // 0x80110670: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_15:
    // 0x80110674: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x80110678: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8011067C: beql        $t2, $zero, L_80110690
    if (ctx->r10 == 0) {
        // 0x80110680: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80110690;
    }
    goto skip_2;
    // 0x80110680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80110684: jal         0x80089458
    // 0x80110688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _ncbawaypoint_entrypoint_1(rdram, ctx);
        goto after_16;
    // 0x80110688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8011068C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110690:
    // 0x80110690: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80110694: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80110698: jr          $ra
    return;
;}
RECOMP_FUNC void func_801106A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801106A0: jr          $ra
    // 0x801106A4: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    return;
    // 0x801106A4: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
;}
RECOMP_FUNC void func_801106A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801106A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801106AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801106B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801106B4: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x801106B8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x801106BC: beq         $a1, $v0, L_80110710
    if (ctx->r5 == ctx->r2) {
        // 0x801106C0: sll         $t7, $v0, 4
        ctx->r15 = S32(ctx->r2 << 4);
            goto L_80110710;
    }
    // 0x801106C0: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x801106C4: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x801106C8: lw          $v1, 0x47A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X47A8);
    // 0x801106CC: beql        $v1, $zero, L_801106E4
    if (ctx->r3 == 0) {
        // 0x801106D0: sll         $t8, $a1, 4
        ctx->r24 = S32(ctx->r5 << 4);
            goto L_801106E4;
    }
    goto skip_0;
    // 0x801106D0: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    skip_0:
    // 0x801106D4: jalr        $v1
    // 0x801106D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x801106D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801106DC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801106E0: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
L_801106E4:
    // 0x801106E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x801106E8: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x801106EC: lw          $v0, 0x47A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X47A0);
    // 0x801106F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801106F4: beql        $v0, $zero, L_8011070C
    if (ctx->r2 == 0) {
        // 0x801106F8: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_8011070C;
    }
    goto skip_1;
    // 0x801106F8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x801106FC: jalr        $v0
    // 0x80110700: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80110700: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80110704: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80110708: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_8011070C:
    // 0x8011070C: sw          $a1, 0x6C($t9)
    MEM_W(0X6C, ctx->r25) = ctx->r5;
L_80110710:
    // 0x80110710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110718: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110720: jr          $ra
    // 0x80110724: sb          $a1, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r5;
    return;
    // 0x80110724: sb          $a1, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80110728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110728: jr          $ra
    // 0x8011072C: sb          $a1, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r5;
    return;
    // 0x8011072C: sb          $a1, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80110730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110738: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8011073C: sb          $a1, 0x72($a0)
    MEM_B(0X72, ctx->r4) = ctx->r5;
    // 0x80110740: jal         0x80113410
    // 0x80110744: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80113410(rdram, ctx);
        goto after_0;
    // 0x80110744: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80110748: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8011074C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80110750: bnel        $t7, $zero, L_80110764
    if (ctx->r15 != 0) {
        // 0x80110754: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80110764;
    }
    goto skip_0;
    // 0x80110754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80110758: jal         0x8011337C
    // 0x8011075C: nop

    func_8011337C(rdram, ctx);
        goto after_1;
    // 0x8011075C: nop

    after_1:
    // 0x80110760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80110764:
    // 0x80110764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110768: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110778: jal         0x800EE7F8
    // 0x8011077C: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8011077C: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    after_0:
    // 0x80110780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110788: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110798: jal         0x800EE7F8
    // 0x8011079C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8011079C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
    // 0x801107A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801107A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801107A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801107B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801107B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801107B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801107B8: jal         0x800F5A00
    // 0x801107BC: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    func_800F5A00(rdram, ctx);
        goto after_0;
    // 0x801107BC: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    after_0:
    // 0x801107C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801107C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801107C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801107D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801107D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801107D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801107D8: jal         0x800F5B38
    // 0x801107DC: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    func_800F5B38(rdram, ctx);
        goto after_0;
    // 0x801107DC: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    after_0:
    // 0x801107E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801107E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801107E8: jr          $ra
    // 0x801107EC: nop

    return;
    // 0x801107EC: nop

;}
RECOMP_FUNC void func_801107F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801107F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801107F4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801107F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801107FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80110800: jal         0x800EE7F8
    // 0x80110804: addiu       $a1, $a3, 0x74
    ctx->r5 = ADD32(ctx->r7, 0X74);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80110804: addiu       $a1, $a3, 0x74
    ctx->r5 = ADD32(ctx->r7, 0X74);
    after_0:
    // 0x80110808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8011080C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110810: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8011081C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80110820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110824: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80110828: jal         0x800EE7F8
    // 0x8011082C: addiu       $a1, $a3, 0x80
    ctx->r5 = ADD32(ctx->r7, 0X80);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8011082C: addiu       $a1, $a3, 0x80
    ctx->r5 = ADD32(ctx->r7, 0X80);
    after_0:
    // 0x80110830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110838: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110840: jr          $ra
    // 0x80110844: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    return;
    // 0x80110844: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
;}
RECOMP_FUNC void func_80110848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8011084C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80110850: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80110854: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80110858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8011085C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80110860: jal         0x800EE7F8
    // 0x80110864: addiu       $a1, $a1, 0x74
    ctx->r5 = ADD32(ctx->r5, 0X74);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80110864: addiu       $a1, $a1, 0x74
    ctx->r5 = ADD32(ctx->r5, 0X74);
    after_0:
    // 0x80110868: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8011086C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80110870: jal         0x800EE7F8
    // 0x80110874: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80110874: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    after_1:
    // 0x80110878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8011087C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110880: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110888: jr          $ra
    // 0x8011088C: lbu         $v0, 0x71($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X71);
    return;
    // 0x8011088C: lbu         $v0, 0x71($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X71);
;}
RECOMP_FUNC void func_80110890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110890: jr          $ra
    // 0x80110894: lbu         $v0, 0x72($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X72);
    return;
    // 0x80110894: lbu         $v0, 0x72($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X72);
;}
RECOMP_FUNC void func_80110898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110898: jr          $ra
    // 0x8011089C: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    return;
    // 0x8011089C: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
;}
RECOMP_FUNC void func_801108A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801108A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801108A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801108A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801108AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801108B0: lw          $a0, 0x64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X64);
    // 0x801108B4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x801108B8: jal         0x8010FFB0
    // 0x801108BC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_8010FFB0(rdram, ctx);
        goto after_0;
    // 0x801108BC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x801108C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801108C4: jal         0x80110770
    // 0x801108C8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_80110770(rdram, ctx);
        goto after_1;
    // 0x801108C8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x801108CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801108D0: jal         0x80110790
    // 0x801108D4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80110790(rdram, ctx);
        goto after_2;
    // 0x801108D4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x801108D8: jal         0x80111348
    // 0x801108DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111348(rdram, ctx);
        goto after_3;
    // 0x801108DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801108E0: jal         0x801106A0
    // 0x801108E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801106A0(rdram, ctx);
        goto after_4;
    // 0x801108E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801108E8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x801108EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801108F0: jal         0x801106A8
    // 0x801108F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801106A8(rdram, ctx);
        goto after_5;
    // 0x801108F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x801108F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801108FC: jal         0x801106A8
    // 0x80110900: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_801106A8(rdram, ctx);
        goto after_6;
    // 0x80110900: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_6:
    // 0x80110904: jal         0x800893D0
    // 0x80110908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _ncba1p_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x80110908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8011090C: jal         0x80112398
    // 0x80110910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80112398(rdram, ctx);
        goto after_8;
    // 0x80110910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80110914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80110918: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8011091C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80110920: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110928: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8011092C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110930: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80110934: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    // 0x80110938: jal         0x800F5B38
    // 0x8011093C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800F5B38(rdram, ctx);
        goto after_0;
    // 0x8011093C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80110940: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80110944: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80110948: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8011094C: jal         0x800136E4
    // 0x80110950: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x80110950: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80110954: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80110958: jal         0x80110970
    // 0x8011095C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80110970(rdram, ctx);
        goto after_2;
    // 0x8011095C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x80110960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110964: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80110968: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110970: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80110974: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110978: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8011097C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80110980: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80110984: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80110988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8011098C: beq         $v0, $at, L_801109B0
    if (ctx->r2 == ctx->r1) {
        // 0x80110990: addiu       $a1, $sp, 0x34
        ctx->r5 = ADD32(ctx->r29, 0X34);
            goto L_801109B0;
    }
    // 0x80110990: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80110994: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80110998: beq         $v0, $at, L_801109B0
    if (ctx->r2 == ctx->r1) {
        // 0x8011099C: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_801109B0;
    }
    // 0x8011099C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x801109A0: beq         $v0, $at, L_801109B0
    if (ctx->r2 == ctx->r1) {
        // 0x801109A4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801109B0;
    }
    // 0x801109A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801109A8: bnel        $v0, $at, L_80110A14
    if (ctx->r2 != ctx->r1) {
        // 0x801109AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80110A14;
    }
    goto skip_0;
    // 0x801109AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_801109B0:
    // 0x801109B0: jal         0x800F5A00
    // 0x801109B4: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F5A00(rdram, ctx);
        goto after_0;
    // 0x801109B4: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_0:
    // 0x801109B8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801109BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801109C0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801109C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801109C8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x801109CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801109D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801109D4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801109D8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x801109DC: jal         0x800EFA4C
    // 0x801109E0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x801109E0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x801109E4: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    // 0x801109E8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x801109EC: jal         0x8010FE14
    // 0x801109F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8010FE14(rdram, ctx);
        goto after_2;
    // 0x801109F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x801109F4: jal         0x8010FF80
    // 0x801109F8: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    func_8010FF80(rdram, ctx);
        goto after_3;
    // 0x801109F8: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    after_3:
    // 0x801109FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80110A00: jal         0x800CA3A4
    // 0x80110A04: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_800CA3A4(rdram, ctx);
        goto after_4;
    // 0x80110A04: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_4:
    // 0x80110A08: jal         0x801108A0
    // 0x80110A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801108A0(rdram, ctx);
        goto after_5;
    // 0x80110A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80110A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110A14:
    // 0x80110A14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80110A18: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80110A1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110A24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80110A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110A2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80110A30: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80110A34: jal         0x80112524
    // 0x80110A38: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80110A38: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80110A3C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80110A40: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80110A44: jal         0x800A516C
    // 0x80110A48: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    func_800A516C(rdram, ctx);
        goto after_1;
    // 0x80110A48: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x80110A4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80110A50: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80110A54: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x80110A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110A5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80110A60: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110A6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80110A70: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80110A74: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80110A78: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80110A7C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80110A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110A84: jal         0x800A516C
    // 0x80110A88: addiu       $a2, $a2, 0x74
    ctx->r6 = ADD32(ctx->r6, 0X74);
    func_800A516C(rdram, ctx);
        goto after_0;
    // 0x80110A88: addiu       $a2, $a2, 0x74
    ctx->r6 = ADD32(ctx->r6, 0X74);
    after_0:
    // 0x80110A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110A94: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110A9C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80110AA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80110AA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80110AA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110AAC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80110AB0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80110AB4: jal         0x800F6BE4
    // 0x80110AB8: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    func_800F6BE4(rdram, ctx);
        goto after_0;
    // 0x80110AB8: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    after_0:
    // 0x80110ABC: beq         $v0, $zero, L_80110AF4
    if (ctx->r2 == 0) {
        // 0x80110AC0: nop
    
            goto L_80110AF4;
    }
    // 0x80110AC0: nop

    // 0x80110AC4: jal         0x800F6438
    // 0x80110AC8: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F6438(rdram, ctx);
        goto after_1;
    // 0x80110AC8: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_1:
    // 0x80110ACC: beq         $v0, $zero, L_80110AF4
    if (ctx->r2 == 0) {
        // 0x80110AD0: nop
    
            goto L_80110AF4;
    }
    // 0x80110AD0: nop

    // 0x80110AD4: jal         0x800F6640
    // 0x80110AD8: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F6640(rdram, ctx);
        goto after_2;
    // 0x80110AD8: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_2:
    // 0x80110ADC: beq         $v0, $zero, L_80110AF4
    if (ctx->r2 == 0) {
        // 0x80110AE0: nop
    
            goto L_80110AF4;
    }
    // 0x80110AE0: nop

    // 0x80110AE4: jal         0x800F6690
    // 0x80110AE8: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F6690(rdram, ctx);
        goto after_3;
    // 0x80110AE8: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_3:
    // 0x80110AEC: bne         $v0, $zero, L_80110AFC
    if (ctx->r2 != 0) {
        // 0x80110AF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80110AFC;
    }
    // 0x80110AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80110AF4:
    // 0x80110AF4: b           L_80110B54
    // 0x80110AF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80110B54;
    // 0x80110AF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80110AFC:
    // 0x80110AFC: jal         0x80112550
    // 0x80110B00: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80112550(rdram, ctx);
        goto after_4;
    // 0x80110B00: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x80110B04: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80110B08: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80110B0C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80110B10: jal         0x800EFB24
    // 0x80110B14: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800EFB24(rdram, ctx);
        goto after_5;
    // 0x80110B14: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x80110B18: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80110B1C: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80110B20: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80110B24: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80110B28: nop

    // 0x80110B2C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80110B30: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80110B34: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80110B38: jal         0x8002DCA0
    // 0x80110B3C: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_6;
    // 0x80110B3C: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_6:
    // 0x80110B40: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80110B44: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80110B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80110B4C: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80110B50: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
L_80110B54:
    // 0x80110B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80110B58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80110B5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80110B60: jr          $ra
    // 0x80110B64: nop

    return;
    // 0x80110B64: nop

;}
RECOMP_FUNC void func_80110B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110B68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80110B6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80110B70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80110B74: beq         $a1, $zero, L_80110BB0
    if (ctx->r5 == 0) {
        // 0x80110B78: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80110BB0;
    }
    // 0x80110B78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110B7C: jal         0x800F6BE4
    // 0x80110B80: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    func_800F6BE4(rdram, ctx);
        goto after_0;
    // 0x80110B80: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    after_0:
    // 0x80110B84: beq         $v0, $zero, L_80110BDC
    if (ctx->r2 == 0) {
        // 0x80110B88: addiu       $a1, $zero, 0x6C
        ctx->r5 = ADD32(0, 0X6C);
            goto L_80110BDC;
    }
    // 0x80110B88: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x80110B8C: jal         0x800F7B9C
    // 0x80110B90: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F7B9C(rdram, ctx);
        goto after_1;
    // 0x80110B90: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_1:
    // 0x80110B94: jal         0x800F53D0
    // 0x80110B98: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F53D0(rdram, ctx);
        goto after_2;
    // 0x80110B98: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_2:
    // 0x80110B9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80110BA0: jal         0x80093700
    // 0x80110BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80093700(rdram, ctx);
        goto after_3;
    // 0x80110BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80110BA8: b           L_80110BE0
    // 0x80110BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80110BE0;
    // 0x80110BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110BB0:
    // 0x80110BB0: jal         0x800F6BE4
    // 0x80110BB4: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F6BE4(rdram, ctx);
        goto after_4;
    // 0x80110BB4: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_4:
    // 0x80110BB8: beq         $v0, $zero, L_80110BDC
    if (ctx->r2 == 0) {
        // 0x80110BBC: addiu       $a1, $zero, 0x6B
        ctx->r5 = ADD32(0, 0X6B);
            goto L_80110BDC;
    }
    // 0x80110BBC: addiu       $a1, $zero, 0x6B
    ctx->r5 = ADD32(0, 0X6B);
    // 0x80110BC0: jal         0x800F7B9C
    // 0x80110BC4: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F7B9C(rdram, ctx);
        goto after_5;
    // 0x80110BC4: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_5:
    // 0x80110BC8: jal         0x800F53D0
    // 0x80110BCC: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F53D0(rdram, ctx);
        goto after_6;
    // 0x80110BCC: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_6:
    // 0x80110BD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80110BD4: jal         0x80093700
    // 0x80110BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80093700(rdram, ctx);
        goto after_7;
    // 0x80110BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_80110BDC:
    // 0x80110BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110BE0:
    // 0x80110BE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80110BE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80110BE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110BF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80110BFC: jal         0x800893F0
    // 0x80110C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _ncba1p_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80110C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80110C04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80110C08: jal         0x800893F8
    // 0x80110C0C: addiu       $a1, $a0, 0x74
    ctx->r5 = ADD32(ctx->r4, 0X74);
    _ncba1p_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80110C0C: addiu       $a1, $a0, 0x74
    ctx->r5 = ADD32(ctx->r4, 0X74);
    after_1:
    // 0x80110C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80110C14: jal         0x80089400
    // 0x80110C18: addiu       $a1, $a0, 0x80
    ctx->r5 = ADD32(ctx->r4, 0X80);
    _ncba1p_entrypoint_7(rdram, ctx);
        goto after_2;
    // 0x80110C18: addiu       $a1, $a0, 0x80
    ctx->r5 = ADD32(ctx->r4, 0X80);
    after_2:
    // 0x80110C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110C24: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110C2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110C34: jal         0x80089418
    // 0x80110C38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _ncba1p_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x80110C38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80110C3C: beq         $v0, $zero, L_80110C78
    if (ctx->r2 == 0) {
        // 0x80110C40: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80110C78;
    }
    // 0x80110C40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80110C44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80110C48: beql        $v0, $at, L_80110C7C
    if (ctx->r2 == ctx->r1) {
        // 0x80110C4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80110C7C;
    }
    goto skip_0;
    // 0x80110C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80110C50: lbu         $t6, 0x72($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X72);
    // 0x80110C54: addiu       $a1, $a0, 0x74
    ctx->r5 = ADD32(ctx->r4, 0X74);
    // 0x80110C58: addiu       $a2, $a0, 0x80
    ctx->r6 = ADD32(ctx->r4, 0X80);
    // 0x80110C5C: beq         $t6, $zero, L_80110C70
    if (ctx->r14 == 0) {
        // 0x80110C60: nop
    
            goto L_80110C70;
    }
    // 0x80110C60: nop

    // 0x80110C64: jal         0x80089430
    // 0x80110C68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _ncba1p_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x80110C68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80110C6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80110C70:
    // 0x80110C70: jal         0x800893F0
    // 0x80110C74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _ncba1p_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80110C74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
L_80110C78:
    // 0x80110C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80110C7C:
    // 0x80110C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110C80: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110C88: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80110C8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80110C90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80110C94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110C98: lui         $a1, 0x4409
    ctx->r5 = S32(0X4409 << 16);
    // 0x80110C9C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80110CA0: lui         $a2, 0x441B
    ctx->r6 = S32(0X441B << 16);
    // 0x80110CA4: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x80110CA8: jal         0x80110CC0
    // 0x80110CAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80110CC0(rdram, ctx);
        goto after_0;
    // 0x80110CAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80110CB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80110CB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80110CB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110CC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80110CC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110CC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80110CCC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80110CD0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80110CD4: jal         0x8011539C
    // 0x80110CD8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8011539C(rdram, ctx);
        goto after_0;
    // 0x80110CD8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80110CDC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80110CE0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80110CE4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80110CE8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80110CEC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80110CF0: jal         0x80115D08
    // 0x80110CF4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80115D08(rdram, ctx);
        goto after_1;
    // 0x80110CF4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80110CF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80110CFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80110D00: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110D08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110D0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110D10: jal         0x80115864
    // 0x80110D14: nop

    func_80115864(rdram, ctx);
        goto after_0;
    // 0x80110D14: nop

    after_0:
    // 0x80110D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110D20: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110D28: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80110D2C: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x80110D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110D38: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80110D3C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80110D40: jal         0x80116050
    // 0x80110D44: nop

    func_80116050(rdram, ctx);
        goto after_0;
    // 0x80110D44: nop

    after_0:
    // 0x80110D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110D50: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110D58: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80110D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110D64: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80110D68: jal         0x801125D8
    // 0x80110D6C: nop

    func_801125D8(rdram, ctx);
        goto after_0;
    // 0x80110D6C: nop

    after_0:
    // 0x80110D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110D78: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110D88: jal         0x8011396C
    // 0x80110D8C: nop

    func_8011396C(rdram, ctx);
        goto after_0;
    // 0x80110D8C: nop

    after_0:
    // 0x80110D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110D98: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110DA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110DA8: jal         0x80115460
    // 0x80110DAC: nop

    func_80115460(rdram, ctx);
        goto after_0;
    // 0x80110DAC: nop

    after_0:
    // 0x80110DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110DB8: jr          $ra
    // 0x80110DBC: nop

    return;
    // 0x80110DBC: nop

;}
RECOMP_FUNC void func_80110DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110DC8: jal         0x8011546C
    // 0x80110DCC: nop

    func_8011546C(rdram, ctx);
        goto after_0;
    // 0x80110DCC: nop

    after_0:
    // 0x80110DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110DD8: jr          $ra
    // 0x80110DDC: nop

    return;
    // 0x80110DDC: nop

;}
RECOMP_FUNC void func_80110DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110DE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110DE8: jal         0x80115478
    // 0x80110DEC: nop

    func_80115478(rdram, ctx);
        goto after_0;
    // 0x80110DEC: nop

    after_0:
    // 0x80110DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80110DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110DF8: jr          $ra
    // 0x80110DFC: nop

    return;
    // 0x80110DFC: nop

;}
RECOMP_FUNC void func_80110E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110E00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80110E04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110E08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80110E0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80110E10: jal         0x80114D98
    // 0x80110E14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80114D98(rdram, ctx);
        goto after_0;
    // 0x80110E14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80110E18: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80110E1C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80110E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80110E24: beq         $a1, $zero, L_80110EC8
    if (ctx->r5 == 0) {
        // 0x80110E28: nop
    
            goto L_80110EC8;
    }
    // 0x80110E28: nop

    // 0x80110E2C: beq         $a1, $v1, L_80110ED8
    if (ctx->r5 == ctx->r3) {
        // 0x80110E30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80110ED8;
    }
    // 0x80110E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80110E34: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80110E38: bne         $a1, $a0, L_80110EE8
    if (ctx->r5 != ctx->r4) {
        // 0x80110E3C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80110EE8;
    }
    // 0x80110E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80110E40: lw          $t6, 0x6C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X6C);
    // 0x80110E44: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80110E48: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80110E4C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80110E50: lh          $v0, 0x47AE($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X47AE);
    // 0x80110E54: beq         $v0, $v1, L_80110E6C
    if (ctx->r2 == ctx->r3) {
        // 0x80110E58: nop
    
            goto L_80110E6C;
    }
    // 0x80110E58: nop

    // 0x80110E5C: beq         $v0, $a0, L_80110E88
    if (ctx->r2 == ctx->r4) {
        // 0x80110E60: nop
    
            goto L_80110E88;
    }
    // 0x80110E60: nop

    // 0x80110E64: b           L_80110E9C
    // 0x80110E68: nop

        goto L_80110E9C;
    // 0x80110E68: nop

L_80110E6C:
    // 0x80110E6C: jal         0x800F5AE0
    // 0x80110E70: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    func_800F5AE0(rdram, ctx);
        goto after_1;
    // 0x80110E70: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    after_1:
    // 0x80110E74: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80110E78: jal         0x80111198
    // 0x80110E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111198(rdram, ctx);
        goto after_2;
    // 0x80110E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80110E80: b           L_80110E9C
    // 0x80110E84: nop

        goto L_80110E9C;
    // 0x80110E84: nop

L_80110E88:
    // 0x80110E88: jal         0x80115E88
    // 0x80110E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115E88(rdram, ctx);
        goto after_3;
    // 0x80110E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80110E90: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80110E94: jal         0x80111198
    // 0x80110E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111198(rdram, ctx);
        goto after_4;
    // 0x80110E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_80110E9C:
    // 0x80110E9C: jal         0x801112B0
    // 0x80110EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801112B0(rdram, ctx);
        goto after_5;
    // 0x80110EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80110EA4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80110EA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80110EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80110EB0: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80110EB4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80110EB8: jal         0x80111154
    // 0x80110EBC: nop

    func_80111154(rdram, ctx);
        goto after_6;
    // 0x80110EBC: nop

    after_6:
    // 0x80110EC0: b           L_80110EEC
    // 0x80110EC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80110EEC;
    // 0x80110EC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110EC8:
    // 0x80110EC8: jal         0x801111D0
    // 0x80110ECC: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    func_801111D0(rdram, ctx);
        goto after_7;
    // 0x80110ECC: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    after_7:
    // 0x80110ED0: b           L_80110EEC
    // 0x80110ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80110EEC;
    // 0x80110ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110ED8:
    // 0x80110ED8: jal         0x801111D0
    // 0x80110EDC: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    func_801111D0(rdram, ctx);
        goto after_8;
    // 0x80110EDC: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_8:
    // 0x80110EE0: b           L_80110EEC
    // 0x80110EE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80110EEC;
    // 0x80110EE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110EE8:
    // 0x80110EE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110EEC:
    // 0x80110EEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80110EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80110EF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110EFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80110F00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110F04: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x80110F08: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80110F0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80110F10: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80110F14: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80110F18: lh          $t8, 0x47AC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X47AC);
    // 0x80110F1C: beq         $t8, $zero, L_80110F34
    if (ctx->r24 == 0) {
        // 0x80110F20: nop
    
            goto L_80110F34;
    }
    // 0x80110F20: nop

    // 0x80110F24: jal         0x80110E00
    // 0x80110F28: nop

    func_80110E00(rdram, ctx);
        goto after_0;
    // 0x80110F28: nop

    after_0:
    // 0x80110F2C: b           L_80110F38
    // 0x80110F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80110F38;
    // 0x80110F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80110F34:
    // 0x80110F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80110F38:
    // 0x80110F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80110F3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110F44: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80110F48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80110F4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80110F50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80110F54: jal         0x80112524
    // 0x80110F58: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80110F58: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_0:
    // 0x80110F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80110F60: jal         0x801107F0
    // 0x80110F64: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x80110F64: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x80110F68: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80110F6C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80110F70: jal         0x800EFB24
    // 0x80110F74: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80110F74: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x80110F78: jal         0x80110840
    // 0x80110F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110840(rdram, ctx);
        goto after_3;
    // 0x80110F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80110F80: jal         0x800F53D0
    // 0x80110F84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_4;
    // 0x80110F84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80110F88: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80110F8C: jal         0x800EEFFC
    // 0x80110F90: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_800EEFFC(rdram, ctx);
        goto after_5;
    // 0x80110F90: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x80110F94: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80110F98: jal         0x800A4EFC
    // 0x80110F9C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800A4EFC(rdram, ctx);
        goto after_6;
    // 0x80110F9C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80110FA0: lw          $t6, 0x6C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X6C);
    // 0x80110FA4: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80110FA8: bnel        $t6, $at, L_80110FBC
    if (ctx->r14 != ctx->r1) {
        // 0x80110FAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80110FBC;
    }
    goto skip_0;
    // 0x80110FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80110FB0: jal         0x80089168
    // 0x80110FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _ncbastring_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x80110FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80110FB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80110FBC:
    // 0x80110FBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80110FC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80110FC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80110FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80110FCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80110FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80110FD4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80110FD8: jal         0x8001BAFC
    // 0x80110FDC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    defrag(rdram, ctx);
        goto after_0;
    // 0x80110FDC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80110FE0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80110FE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80110FE8: beql        $t6, $v0, L_80111000
    if (ctx->r14 == ctx->r2) {
        // 0x80110FEC: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_80111000;
    }
    goto skip_0;
    // 0x80110FEC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80110FF0: jal         0x80110280
    // 0x80110FF4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80110280(rdram, ctx);
        goto after_1;
    // 0x80110FF4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x80110FF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80110FFC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80111000:
    // 0x80111000: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80111004: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x80111008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8011100C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80111010: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8011101C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80111020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80111024: jal         0x80113410
    // 0x80111028: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80113410(rdram, ctx);
        goto after_0;
    // 0x80111028: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8011102C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x80111030: lh          $a2, 0x7372($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X7372);
    // 0x80111034: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80111038: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8011103C: addiu       $a2, $a2, -0x98
    ctx->r6 = ADD32(ctx->r6, -0X98);
    // 0x80111040: addiu       $a0, $a0, 0x98
    ctx->r4 = ADD32(ctx->r4, 0X98);
    // 0x80111044: jal         0x8001BBA0
    // 0x80111048: addiu       $a1, $a1, 0x98
    ctx->r5 = ADD32(ctx->r5, 0X98);
    rare_memcpy(rdram, ctx);
        goto after_1;
    // 0x80111048: addiu       $a1, $a1, 0x98
    ctx->r5 = ADD32(ctx->r5, 0X98);
    after_1:
    // 0x8011104C: jal         0x8011337C
    // 0x80111050: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8011337C(rdram, ctx);
        goto after_2;
    // 0x80111050: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80111054: jal         0x800893D0
    // 0x80111058: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _ncba1p_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x80111058: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8011105C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80111064: jr          $ra
    return;
;}
RECOMP_FUNC void func_8011106C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011106C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80111070: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80111074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80111078: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8011107C: jal         0x800EE7F8
    // 0x80111080: addiu       $a1, $a3, 0x8C
    ctx->r5 = ADD32(ctx->r7, 0X8C);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80111080: addiu       $a1, $a3, 0x8C
    ctx->r5 = ADD32(ctx->r7, 0X8C);
    after_0:
    // 0x80111084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8011108C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80111098: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8011109C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801110A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801110A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801110A8: addiu       $a1, $a3, 0x74
    ctx->r5 = ADD32(ctx->r7, 0X74);
    // 0x801110AC: jal         0x800EE780
    // 0x801110B0: addiu       $a2, $a3, 0x8C
    ctx->r6 = ADD32(ctx->r7, 0X8C);
    func_800EE780(rdram, ctx);
        goto after_0;
    // 0x801110B0: addiu       $a2, $a3, 0x8C
    ctx->r6 = ADD32(ctx->r7, 0X8C);
    after_0:
    // 0x801110B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801110B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801110BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801110C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801110C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801110C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801110CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801110D0: addiu       $a2, $a3, 0x74
    ctx->r6 = ADD32(ctx->r7, 0X74);
    // 0x801110D4: jal         0x800EFB24
    // 0x801110D8: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x801110D8: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    after_0:
    // 0x801110DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801110E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801110E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801110EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801110EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801110F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801110F4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801110F8: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x801110FC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80111100: bne         $t6, $at, L_80111124
    if (ctx->r14 != ctx->r1) {
        // 0x80111104: nop
    
            goto L_80111124;
    }
    // 0x80111104: nop

    // 0x80111108: jal         0x800894B8
    // 0x8011110C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _ncbatarget_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x8011110C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80111110: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80111114: jal         0x800894B0
    // 0x80111118: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    _ncbatarget_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80111118: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8011111C: b           L_8011112C
    // 0x80111120: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8011112C;
    // 0x80111120: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80111124:
    // 0x80111124: b           L_8011112C
    // 0x80111128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8011112C;
    // 0x80111128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8011112C:
    // 0x8011112C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80111134: jr          $ra
    return;
;}
RECOMP_FUNC void func_8011113C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011113C: jr          $ra
    // 0x80111140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80111140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80111144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111144: jr          $ra
    // 0x80111148: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80111148: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8011114C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011114C: jr          $ra
    // 0x80111150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80111150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80111154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80111158: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8011115C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80111160: jal         0x800136E4
    // 0x80111164: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x80111164: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80111168: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8011116C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80111170: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80111174: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80111178: lui         $a2, 0x4296
    ctx->r6 = S32(0X4296 << 16);
    // 0x8011117C: jal         0x80112D90
    // 0x80111180: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80112D90(rdram, ctx);
        goto after_1;
    // 0x80111180: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x80111184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80111188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8011118C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80111190: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8011119C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801111A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801111A4: jal         0x800136E4
    // 0x801111A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x801111A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801111AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801111B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801111B4: jal         0x80115DEC
    // 0x801111B8: lui         $a2, 0x4296
    ctx->r6 = S32(0X4296 << 16);
    func_80115DEC(rdram, ctx);
        goto after_1;
    // 0x801111B8: lui         $a2, 0x4296
    ctx->r6 = S32(0X4296 << 16);
    after_1:
    // 0x801111BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801111C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801111C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801111C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801111D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801111D0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801111D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801111D8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801111DC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801111E0: jal         0x801107F0
    // 0x801111E4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x801111E4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x801111E8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801111EC: jal         0x80112550
    // 0x801111F0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80112550(rdram, ctx);
        goto after_1;
    // 0x801111F0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x801111F4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x801111F8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x801111FC: jal         0x800EFB24
    // 0x80111200: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80111200: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x80111204: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80111208: jal         0x800F1EA4
    // 0x8011120C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800F1EA4(rdram, ctx);
        goto after_3;
    // 0x8011120C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x80111210: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80111214: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80111218: jal         0x800136E4
    // 0x8011121C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_4;
    // 0x8011121C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_4:
    // 0x80111220: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80111224: jal         0x80112E84
    // 0x80111228: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_80112E84(rdram, ctx);
        goto after_5;
    // 0x80111228: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_5:
    // 0x8011122C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80111230: beq         $v0, $at, L_80111280
    if (ctx->r2 == ctx->r1) {
        // 0x80111234: lwc1        $f8, 0x5C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_80111280;
    }
    // 0x80111234: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80111238: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8011123C: lwc1        $f10, 0x6540($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6540);
    // 0x80111240: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80111244: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80111248: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8011124C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80111250: jal         0x800EF934
    // 0x80111254: nop

    func_800EF934(rdram, ctx);
        goto after_6;
    // 0x80111254: nop

    after_6:
    // 0x80111258: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8011125C: jal         0x800EF04C
    // 0x80111260: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EF04C(rdram, ctx);
        goto after_7;
    // 0x80111260: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_7:
    // 0x80111264: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80111268: jal         0x8011349C
    // 0x8011126C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8011349C(rdram, ctx);
        goto after_8;
    // 0x8011126C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x80111270: bnel        $v0, $zero, L_80111284
    if (ctx->r2 != 0) {
        // 0x80111274: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_80111284;
    }
    goto skip_0;
    // 0x80111274: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    skip_0:
    // 0x80111278: b           L_801112A0
    // 0x8011127C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801112A0;
    // 0x8011127C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80111280:
    // 0x80111280: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_80111284:
    // 0x80111284: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80111288: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8011128C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80111290: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x80111294: jal         0x80112D90
    // 0x80111298: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80112D90(rdram, ctx);
        goto after_9;
    // 0x80111298: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x8011129C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801112A0:
    // 0x801112A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801112A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801112A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801112B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801112B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801112B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801112B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801112BC: jal         0x800F53D0
    // 0x801112C0: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x801112C0: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    after_0:
    // 0x801112C4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801112C8: jal         0x80092BC4
    // 0x801112CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80092BC4(rdram, ctx);
        goto after_1;
    // 0x801112CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801112D0: beq         $v0, $zero, L_801112F0
    if (ctx->r2 == 0) {
        // 0x801112D4: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_801112F0;
    }
    // 0x801112D4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801112D8: jal         0x80092BD0
    // 0x801112DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80092BD0(rdram, ctx);
        goto after_2;
    // 0x801112DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801112E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801112E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801112E8: b           L_801112FC
    // 0x801112EC: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
        goto L_801112FC;
    // 0x801112EC: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
L_801112F0:
    // 0x801112F0: jal         0x800F5F24
    // 0x801112F4: lw          $a0, 0x68($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X68);
    func_800F5F24(rdram, ctx);
        goto after_3;
    // 0x801112F4: lw          $a0, 0x68($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X68);
    after_3:
    // 0x801112F8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801112FC:
    // 0x801112FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80111304: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80111308: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80111314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80111318: jal         0x80110840
    // 0x8011131C: nop

    func_80110840(rdram, ctx);
        goto after_0;
    // 0x8011131C: nop

    after_0:
    // 0x80111320: jal         0x800F53D0
    // 0x80111324: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x80111324: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80111328: jal         0x800A509C
    // 0x8011132C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800A509C(rdram, ctx);
        goto after_2;
    // 0x8011132C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80111330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80111338: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111340: jr          $ra
    // 0x80111344: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    return;
    // 0x80111344: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
;}
RECOMP_FUNC void func_80111348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111348: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8011134C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80111350: jal         0x801113B8
    // 0x80111354: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801113B8(rdram, ctx);
        goto after_0;
    // 0x80111354: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80111358: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8011135C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80111360: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80111364: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80111368: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8011136C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80111370: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80111374: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80111378: jal         0x80111590
    // 0x8011137C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_80111590(rdram, ctx);
        goto after_1;
    // 0x8011137C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x80111380: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80111384: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80111388: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8011138C: jal         0x80111B8C
    // 0x80111390: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_80111B8C(rdram, ctx);
        goto after_2;
    // 0x80111390: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_2:
    // 0x80111394: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80111398: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    // 0x8011139C: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x801113A0: jal         0x801120CC
    // 0x801113A4: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    func_801120CC(rdram, ctx);
        goto after_3;
    // 0x801113A4: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    after_3:
    // 0x801113A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801113AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801113B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801113B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801113B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801113BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801113C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801113C4: lw          $a0, 0x34($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X34);
    // 0x801113C8: jal         0x800EFD24
    // 0x801113CC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x801113CC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x801113D0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801113D4: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    // 0x801113D8: jal         0x800EFD24
    // 0x801113DC: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x801113DC: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_1:
    // 0x801113E0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x801113E4: lw          $a0, 0x34($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X34);
    // 0x801113E8: jal         0x800EFD24
    // 0x801113EC: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x801113EC: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_2:
    // 0x801113F0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x801113F4: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    // 0x801113F8: jal         0x800EFD24
    // 0x801113FC: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x801113FC: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    after_3:
    // 0x80111400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80111408: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111410: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80111414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80111418: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8011141C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80111420: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80111424: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80111428: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8011142C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80111430: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80111434: jal         0x80013728
    // 0x80111438: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_80013728(rdram, ctx);
        goto after_0;
    // 0x80111438: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x8011143C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80111440: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80111444: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80111448: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8011144C: jal         0x80013728
    // 0x80111450: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    func_80013728(rdram, ctx);
        goto after_1;
    // 0x80111450: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    after_1:
    // 0x80111454: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80111458: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x8011145C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80111460: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80111464: jal         0x80013728
    // 0x80111468: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    func_80013728(rdram, ctx);
        goto after_2;
    // 0x80111468: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_2:
    // 0x8011146C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80111470: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80111474: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80111478: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8011147C: nop

    // 0x80111480: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80111484: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80111488: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8011148C: jal         0x8002DCA0
    // 0x80111490: add.s       $f12, $f18, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x80111490: add.s       $f12, $f18, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f10.fl;
    after_3:
    // 0x80111494: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80111498: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x8011149C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801114A0: nop

    // 0x801114A4: bc1tl       L_80111580
    if (c1cs) {
        // 0x801114A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80111580;
    }
    goto skip_0;
    // 0x801114A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801114AC: jal         0x800D8FF8
    // 0x801114B0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x801114B0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x801114B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801114B8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801114BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801114C0: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x801114C4: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801114C8: div.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801114CC: lw          $t9, 0x34($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X34);
    // 0x801114D0: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x801114D4: mul.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x801114D8: nop

    // 0x801114DC: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801114E0: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801114E4: mul.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801114E8: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x801114EC: lw          $t0, 0x34($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X34);
    // 0x801114F0: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801114F4: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801114F8: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801114FC: nop

    // 0x80111500: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80111504: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80111508: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8011150C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80111510: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80111514: mul.s       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80111518: nop

    // 0x8011151C: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80111520: jal         0x800F212C
    // 0x80111524: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_800F212C(rdram, ctx);
        goto after_5;
    // 0x80111524: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80111528: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8011152C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80111530: jal         0x800F212C
    // 0x80111534: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    func_800F212C(rdram, ctx);
        goto after_6;
    // 0x80111534: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    after_6:
    // 0x80111538: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8011153C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80111540: jal         0x800F212C
    // 0x80111544: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    func_800F212C(rdram, ctx);
        goto after_7;
    // 0x80111544: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x80111548: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8011154C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80111550: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80111554: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80111558: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8011155C: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80111560: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x80111564: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80111568: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8011156C: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x80111570: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80111574: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80111578: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x8011157C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80111580:
    // 0x80111580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80111584: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80111588: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111590: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80111594: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80111598: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x8011159C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801115A0: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x801115A4: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x801115A8: swc1        $f14, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f14.u32l;
    // 0x801115AC: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    // 0x801115B0: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x801115B4: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    // 0x801115B8: lw          $t9, 0x34($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X34);
    // 0x801115BC: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x801115C0: jr          $ra
    // 0x801115C4: swc1        $f6, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f6.u32l;
    return;
    // 0x801115C4: swc1        $f6, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_801115C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801115C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801115CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801115D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801115D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801115D8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801115DC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x801115E0: jal         0x800EEAA4
    // 0x801115E4: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_800EEAA4(rdram, ctx);
        goto after_0;
    // 0x801115E4: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801115E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801115EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801115F0: jal         0x800EEAA4
    // 0x801115F4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_800EEAA4(rdram, ctx);
        goto after_1;
    // 0x801115F4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801115F8: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801115FC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80111600: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80111604: nop

    // 0x80111608: bc1fl       L_80111624
    if (!c1cs) {
        // 0x8011160C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80111624;
    }
    goto skip_0;
    // 0x8011160C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_0:
    // 0x80111610: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80111614: nop

    // 0x80111618: bc1tl       L_80111644
    if (c1cs) {
        // 0x8011161C: c.eq.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
            goto L_80111644;
    }
    goto skip_1;
    // 0x8011161C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    skip_1:
    // 0x80111620: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80111624:
    // 0x80111624: nop

    // 0x80111628: bc1fl       L_80111670
    if (!c1cs) {
        // 0x8011162C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80111670;
    }
    goto skip_2;
    // 0x8011162C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x80111630: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80111634: nop

    // 0x80111638: bc1fl       L_80111670
    if (!c1cs) {
        // 0x8011163C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80111670;
    }
    goto skip_3;
    // 0x8011163C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x80111640: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_80111644:
    // 0x80111644: nop

    // 0x80111648: bc1tl       L_80111670
    if (c1cs) {
        // 0x8011164C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80111670;
    }
    goto skip_4;
    // 0x8011164C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x80111650: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80111654: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80111658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8011165C: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80111660: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80111664: b           L_80111670
    // 0x80111668: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
        goto L_80111670;
    // 0x80111668: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    // 0x8011166C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80111670:
    // 0x80111670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80111678: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111680: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x80111684: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80111688: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8011168C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80111690: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80111694: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80111698: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8011169C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x801116A0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x801116A4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x801116A8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x801116AC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x801116B0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x801116B4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801116B8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801116BC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801116C0: sw          $a0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r4;
    // 0x801116C4: sw          $a3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r7;
    // 0x801116C8: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x801116CC: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x801116D0: jal         0x800EEAD4
    // 0x801116D4: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    func_800EEAD4(rdram, ctx);
        goto after_0;
    // 0x801116D4: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    after_0:
    // 0x801116D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801116DC: lwc1        $f4, 0x6550($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6550);
    // 0x801116E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801116E4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801116E8: nop

    // 0x801116EC: bc1fl       L_80111708
    if (!c1cs) {
        // 0x801116F0: lw          $a0, 0x108($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X108);
            goto L_80111708;
    }
    goto skip_0;
    // 0x801116F0: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    skip_0:
    // 0x801116F4: jal         0x800EE7F8
    // 0x801116F8: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x801116F8: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    after_1:
    // 0x801116FC: jal         0x800EFD24
    // 0x80111700: lw          $a0, 0x114($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X114);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x80111700: lw          $a0, 0x114($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X114);
    after_2:
    // 0x80111704: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
L_80111708:
    // 0x80111708: jal         0x800EEAD4
    // 0x8011170C: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    func_800EEAD4(rdram, ctx);
        goto after_3;
    // 0x8011170C: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    after_3:
    // 0x80111710: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80111714: lwc1        $f6, 0x6554($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6554);
    // 0x80111718: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x8011171C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80111720: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80111724: nop

    // 0x80111728: bc1f        L_801117D0
    if (!c1cs) {
        // 0x8011172C: nop
    
            goto L_801117D0;
    }
    // 0x8011172C: nop

    // 0x80111730: jal         0x800EFB24
    // 0x80111734: lw          $a2, 0x108($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X108);
    func_800EFB24(rdram, ctx);
        goto after_4;
    // 0x80111734: lw          $a2, 0x108($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X108);
    after_4:
    // 0x80111738: jal         0x800EEEA8
    // 0x8011173C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    func_800EEEA8(rdram, ctx);
        goto after_5;
    // 0x8011173C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    after_5:
    // 0x80111740: beql        $v0, $zero, L_80111768
    if (ctx->r2 == 0) {
        // 0x80111744: addiu       $s0, $sp, 0x74
        ctx->r16 = ADD32(ctx->r29, 0X74);
            goto L_80111768;
    }
    goto skip_1;
    // 0x80111744: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    skip_1:
    // 0x80111748: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8011174C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x80111750: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80111754: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80111758: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8011175C: jal         0x800EFA4C
    // 0x80111760: nop

    func_800EFA4C(rdram, ctx);
        goto after_6;
    // 0x80111760: nop

    after_6:
    // 0x80111764: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
L_80111768:
    // 0x80111768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8011176C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80111770: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80111774: jal         0x800EFA4C
    // 0x80111778: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_800EFA4C(rdram, ctx);
        goto after_7;
    // 0x80111778: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_7:
    // 0x8011177C: addiu       $s4, $sp, 0x94
    ctx->r20 = ADD32(ctx->r29, 0X94);
    // 0x80111780: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80111784: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80111788: jal         0x800EE97C
    // 0x8011178C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800EE97C(rdram, ctx);
        goto after_8;
    // 0x8011178C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x80111790: jal         0x800EF2A0
    // 0x80111794: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800EF2A0(rdram, ctx);
        goto after_9;
    // 0x80111794: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_9:
    // 0x80111798: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8011179C: jal         0x800EEAA4
    // 0x801117A0: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    func_800EEAA4(rdram, ctx);
        goto after_10;
    // 0x801117A0: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    after_10:
    // 0x801117A4: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x801117A8: jal         0x800EF2A0
    // 0x801117AC: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    func_800EF2A0(rdram, ctx);
        goto after_11;
    // 0x801117AC: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    after_11:
    // 0x801117B0: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x801117B4: jal         0x800EEAA4
    // 0x801117B8: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    func_800EEAA4(rdram, ctx);
        goto after_12;
    // 0x801117B8: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    after_12:
    // 0x801117BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801117C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801117C4: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x801117C8: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x801117CC: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
L_801117D0:
    // 0x801117D0: jal         0x800D8FEC
    // 0x801117D4: addiu       $s4, $sp, 0x94
    ctx->r20 = ADD32(ctx->r29, 0X94);
    func_800D8FEC(rdram, ctx);
        goto after_13;
    // 0x801117D4: addiu       $s4, $sp, 0x94
    ctx->r20 = ADD32(ctx->r29, 0X94);
    after_13:
    // 0x801117D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x801117DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801117E0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x801117E4: blez        $v1, L_801119F4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801117E8: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_801119F4;
    }
    // 0x801117E8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x801117EC: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x801117F0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801117F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801117F8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801117FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80111800: lwc1        $f14, 0x6558($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6558);
    // 0x80111804: sw          $v1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r3;
    // 0x80111808: addiu       $fp, $sp, 0xE4
    ctx->r30 = ADD32(ctx->r29, 0XE4);
    // 0x8011180C: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x80111810: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x80111814: addiu       $s7, $sp, 0xF0
    ctx->r23 = ADD32(ctx->r29, 0XF0);
    // 0x80111818: addiu       $s6, $sp, 0xFC
    ctx->r22 = ADD32(ctx->r29, 0XFC);
    // 0x8011181C: addiu       $s2, $sp, 0xC0
    ctx->r18 = ADD32(ctx->r29, 0XC0);
    // 0x80111820: addiu       $s1, $sp, 0xB4
    ctx->r17 = ADD32(ctx->r29, 0XB4);
    // 0x80111824: addiu       $s0, $sp, 0xD8
    ctx->r16 = ADD32(ctx->r29, 0XD8);
    // 0x80111828: swc1        $f14, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f14.u32l;
    // 0x8011182C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_80111830:
    // 0x80111830: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    // 0x80111834: jal         0x800EFB24
    // 0x80111838: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_800EFB24(rdram, ctx);
        goto after_14;
    // 0x80111838: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_14:
    // 0x8011183C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80111840: jal         0x800EF334
    // 0x80111844: lw          $a1, 0x118($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X118);
    func_800EF334(rdram, ctx);
        goto after_15;
    // 0x80111844: lw          $a1, 0x118($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X118);
    after_15:
    // 0x80111848: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8011184C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80111850: jal         0x800EFB24
    // 0x80111854: lw          $a2, 0x114($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X114);
    func_800EFB24(rdram, ctx);
        goto after_16;
    // 0x80111854: lw          $a2, 0x114($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X114);
    after_16:
    // 0x80111858: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8011185C: jal         0x800EF334
    // 0x80111860: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    func_800EF334(rdram, ctx);
        goto after_17;
    // 0x80111860: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    after_17:
    // 0x80111864: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80111868: jal         0x800EE7F8
    // 0x8011186C: lw          $a1, 0x114($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X114);
    func_800EE7F8(rdram, ctx);
        goto after_18;
    // 0x8011186C: lw          $a1, 0x114($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X114);
    after_18:
    // 0x80111870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111874: jal         0x800EE7F8
    // 0x80111878: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_19;
    // 0x80111878: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_19:
    // 0x8011187C: lui         $a2, 0x3B5A
    ctx->r6 = S32(0X3B5A << 16);
    // 0x80111880: ori         $a2, $a2, 0x740E
    ctx->r6 = ctx->r6 | 0X740E;
    // 0x80111884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111888: jal         0x800EF174
    // 0x8011188C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_800EF174(rdram, ctx);
        goto after_20;
    // 0x8011188C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_20:
    // 0x80111890: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x80111894: jal         0x800EE7F8
    // 0x80111898: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_21;
    // 0x80111898: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_21:
    // 0x8011189C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801118A0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x801118A4: jal         0x800EE780
    // 0x801118A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800EE780(rdram, ctx);
        goto after_22;
    // 0x801118A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_22:
    // 0x801118AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801118B0: jal         0x800EF334
    // 0x801118B4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_800EF334(rdram, ctx);
        goto after_23;
    // 0x801118B4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_23:
    // 0x801118B8: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x801118BC: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x801118C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801118C4: bne         $t8, $zero, L_801118D4
    if (ctx->r24 != 0) {
        // 0x801118C8: addiu       $a1, $sp, 0xCC
        ctx->r5 = ADD32(ctx->r29, 0XCC);
            goto L_801118D4;
    }
    // 0x801118C8: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x801118CC: beql        $t9, $zero, L_80111998
    if (ctx->r25 == 0) {
        // 0x801118D0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80111998;
    }
    goto skip_2;
    // 0x801118D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_2:
L_801118D4:
    // 0x801118D4: jal         0x800EE780
    // 0x801118D8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EE780(rdram, ctx);
        goto after_24;
    // 0x801118D8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_24:
    // 0x801118DC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x801118E0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801118E4: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x801118E8: beq         $t0, $zero, L_8011193C
    if (ctx->r8 == 0) {
        // 0x801118EC: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_8011193C;
    }
    // 0x801118EC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x801118F0: addiu       $t1, $sp, 0x68
    ctx->r9 = ADD32(ctx->r29, 0X68);
    // 0x801118F4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801118F8: jal         0x801115C8
    // 0x801118FC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_801115C8(rdram, ctx);
        goto after_25;
    // 0x801118FC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_25:
    // 0x80111900: beq         $v0, $zero, L_8011193C
    if (ctx->r2 == 0) {
        // 0x80111904: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8011193C;
    }
    // 0x80111904: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80111908: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8011190C: jal         0x800EF334
    // 0x80111910: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    func_800EF334(rdram, ctx);
        goto after_26;
    // 0x80111910: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    after_26:
    // 0x80111914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111918: jal         0x800EEAA4
    // 0x8011191C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_27;
    // 0x8011191C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_27:
    // 0x80111920: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80111924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111928: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8011192C: jal         0x800EF174
    // 0x80111930: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800EF174(rdram, ctx);
        goto after_28;
    // 0x80111930: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_28:
    // 0x80111934: b           L_80111998
    // 0x80111938: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
        goto L_80111998;
    // 0x80111938: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8011193C:
    // 0x8011193C: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80111940: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x80111944: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x80111948: beq         $t2, $zero, L_80111994
    if (ctx->r10 == 0) {
        // 0x8011194C: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_80111994;
    }
    // 0x8011194C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80111950: addiu       $t3, $sp, 0x68
    ctx->r11 = ADD32(ctx->r29, 0X68);
    // 0x80111954: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80111958: jal         0x801115C8
    // 0x8011195C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_801115C8(rdram, ctx);
        goto after_29;
    // 0x8011195C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_29:
    // 0x80111960: beq         $v0, $zero, L_80111994
    if (ctx->r2 == 0) {
        // 0x80111964: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80111994;
    }
    // 0x80111964: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80111968: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8011196C: jal         0x800EF334
    // 0x80111970: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    func_800EF334(rdram, ctx);
        goto after_30;
    // 0x80111970: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    after_30:
    // 0x80111974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111978: jal         0x800EEAA4
    // 0x8011197C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_31;
    // 0x8011197C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_31:
    // 0x80111980: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x80111984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111988: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8011198C: jal         0x800EF174
    // 0x80111990: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_800EF174(rdram, ctx);
        goto after_32;
    // 0x80111990: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_32:
L_80111994:
    // 0x80111994: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80111998:
    // 0x80111998: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x8011199C: jal         0x800EE780
    // 0x801119A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EE780(rdram, ctx);
        goto after_33;
    // 0x801119A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_33:
    // 0x801119A4: lw          $a0, 0x114($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X114);
    // 0x801119A8: jal         0x800EEAD4
    // 0x801119AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_34;
    // 0x801119AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_34:
    // 0x801119B0: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801119B4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801119B8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801119BC: div.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801119C0: jal         0x800EE7F8
    // 0x801119C4: add.s       $f22, $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f16.fl;
    func_800EE7F8(rdram, ctx);
        goto after_35;
    // 0x801119C4: add.s       $f22, $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f16.fl;
    after_35:
    // 0x801119C8: lw          $a0, 0x114($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X114);
    // 0x801119CC: jal         0x800EE7F8
    // 0x801119D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_36;
    // 0x801119D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_36:
    // 0x801119D4: jal         0x800EEF94
    // 0x801119D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EEF94(rdram, ctx);
        goto after_37;
    // 0x801119D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_37:
    // 0x801119DC: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x801119E0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x801119E4: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x801119E8: slt         $at, $s5, $t4
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x801119EC: bnel        $at, $zero, L_80111830
    if (ctx->r1 != 0) {
        // 0x801119F0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80111830;
    }
    goto skip_3;
    // 0x801119F0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_3:
L_801119F4:
    // 0x801119F4: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x801119F8: jal         0x800EE7F8
    // 0x801119FC: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    func_800EE7F8(rdram, ctx);
        goto after_38;
    // 0x801119FC: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    after_38:
    // 0x80111A00: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80111A04: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80111A08: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80111A0C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80111A10: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80111A14: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80111A18: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80111A1C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80111A20: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80111A24: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80111A28: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80111A2C: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80111A30: jr          $ra
    // 0x80111A34: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x80111A34: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_80111A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111A38: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80111A3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80111A40: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80111A44: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80111A48: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80111A4C: jal         0x80112550
    // 0x80111A50: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80112550(rdram, ctx);
        goto after_0;
    // 0x80111A50: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80111A54: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80111A58: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80111A5C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80111A60: lw          $v0, 0x34($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X34);
    // 0x80111A64: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80111A68: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80111A6C: addiu       $t7, $v0, 0x38
    ctx->r15 = ADD32(ctx->r2, 0X38);
    // 0x80111A70: addiu       $a3, $v0, 0x24
    ctx->r7 = ADD32(ctx->r2, 0X24);
    // 0x80111A74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80111A78: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80111A7C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80111A80: jal         0x80111680
    // 0x80111A84: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80111680(rdram, ctx);
        goto after_1;
    // 0x80111A84: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80111A88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80111A8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80111A90: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80111A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80111AA0: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x80111AA4: jal         0x801107F0
    // 0x80111AA8: addiu       $a1, $a1, 0x5C
    ctx->r5 = ADD32(ctx->r5, 0X5C);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x80111AA8: addiu       $a1, $a1, 0x5C
    ctx->r5 = ADD32(ctx->r5, 0X5C);
    after_0:
    // 0x80111AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80111AB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80111AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80111AC4: lw          $a0, 0x34($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X34);
    // 0x80111AC8: jal         0x800EE7F8
    // 0x80111ACC: addiu       $a0, $a0, 0x68
    ctx->r4 = ADD32(ctx->r4, 0X68);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80111ACC: addiu       $a0, $a0, 0x68
    ctx->r4 = ADD32(ctx->r4, 0X68);
    after_0:
    // 0x80111AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80111AD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111AE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80111AE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80111AE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80111AEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80111AF0: jal         0x80110898
    // 0x80111AF4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_80110898(rdram, ctx);
        goto after_0;
    // 0x80111AF4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80111AF8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80111AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111B00: jal         0x801107F0
    // 0x80111B04: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x80111B04: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80111B08: jal         0x8010FFD0
    // 0x80111B0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8010FFD0(rdram, ctx);
        goto after_2;
    // 0x80111B0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80111B10: beq         $v0, $zero, L_80111B48
    if (ctx->r2 == 0) {
        // 0x80111B14: nop
    
            goto L_80111B48;
    }
    // 0x80111B14: nop

    // 0x80111B18: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80111B1C: jal         0x800EFD24
    // 0x80111B20: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x80111B20: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_3:
    // 0x80111B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111B28: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80111B2C: jal         0x80113640
    // 0x80111B30: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_80113640(rdram, ctx);
        goto after_4;
    // 0x80111B30: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x80111B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111B38: jal         0x80110770
    // 0x80111B3C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80110770(rdram, ctx);
        goto after_5;
    // 0x80111B3C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x80111B40: b           L_80111B7C
    // 0x80111B44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80111B7C;
    // 0x80111B44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80111B48:
    // 0x80111B48: jal         0x80111A98
    // 0x80111B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111A98(rdram, ctx);
        goto after_6;
    // 0x80111B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80111B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111B54: jal         0x80111ABC
    // 0x80111B58: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80111ABC(rdram, ctx);
        goto after_7;
    // 0x80111B58: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x80111B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111B60: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80111B64: jal         0x80111A38
    // 0x80111B68: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_80111A38(rdram, ctx);
        goto after_8;
    // 0x80111B68: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_8:
    // 0x80111B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111B70: jal         0x80110770
    // 0x80111B74: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80110770(rdram, ctx);
        goto after_9;
    // 0x80111B74: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_9:
    // 0x80111B78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80111B7C:
    // 0x80111B7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80111B80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80111B84: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80111B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80111B94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80111B98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80111B9C: jal         0x80110840
    // 0x80111BA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80111BA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80111BA4: jal         0x800F53E4
    // 0x80111BA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53E4(rdram, ctx);
        goto after_1;
    // 0x80111BA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80111BAC: beq         $v0, $zero, L_80111BC4
    if (ctx->r2 == 0) {
        // 0x80111BB0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80111BC4;
    }
    // 0x80111BB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80111BB4: jal         0x800A3048
    // 0x80111BB8: nop

    func_800A3048(rdram, ctx);
        goto after_2;
    // 0x80111BB8: nop

    after_2:
    // 0x80111BBC: b           L_80111BD0
    // 0x80111BC0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_80111BD0;
    // 0x80111BC0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80111BC4:
    // 0x80111BC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80111BC8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80111BCC: nop

L_80111BD0:
    // 0x80111BD0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80111BD4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80111BD8: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80111BDC: lw          $t6, 0x34($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X34);
    // 0x80111BE0: swc1        $f6, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f6.u32l;
    // 0x80111BE4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80111BE8: lw          $t7, 0x34($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X34);
    // 0x80111BEC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80111BF0: swc1        $f10, 0x34($t7)
    MEM_W(0X34, ctx->r15) = ctx->f10.u32l;
    // 0x80111BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80111BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80111BFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111C04: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80111C08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80111C0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80111C10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80111C14: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x80111C18: jal         0x801107F0
    // 0x80111C1C: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x80111C1C: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    after_0:
    // 0x80111C20: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80111C24: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80111C28: addiu       $a1, $v0, 0x68
    ctx->r5 = ADD32(ctx->r2, 0X68);
    // 0x80111C2C: jal         0x800EFB24
    // 0x80111C30: addiu       $a2, $v0, 0x5C
    ctx->r6 = ADD32(ctx->r2, 0X5C);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x80111C30: addiu       $a2, $v0, 0x5C
    ctx->r6 = ADD32(ctx->r2, 0X5C);
    after_1:
    // 0x80111C34: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80111C38: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80111C3C: addiu       $a1, $v0, 0x50
    ctx->r5 = ADD32(ctx->r2, 0X50);
    // 0x80111C40: jal         0x800EFB24
    // 0x80111C44: addiu       $a2, $v0, 0x5C
    ctx->r6 = ADD32(ctx->r2, 0X5C);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80111C44: addiu       $a2, $v0, 0x5C
    ctx->r6 = ADD32(ctx->r2, 0X5C);
    after_2:
    // 0x80111C48: jal         0x800EF2A0
    // 0x80111C4C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_800EF2A0(rdram, ctx);
        goto after_3;
    // 0x80111C4C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x80111C50: jal         0x800EF2A0
    // 0x80111C54: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EF2A0(rdram, ctx);
        goto after_4;
    // 0x80111C54: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x80111C58: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80111C5C: jal         0x800EEAA4
    // 0x80111C60: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EEAA4(rdram, ctx);
        goto after_5;
    // 0x80111C60: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x80111C64: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80111C68: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80111C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111C70: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80111C74: nop

    // 0x80111C78: bc1tl       L_80111C9C
    if (c1cs) {
        // 0x80111C7C: lw          $a1, 0x34($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X34);
            goto L_80111C9C;
    }
    goto skip_0;
    // 0x80111C7C: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    skip_0:
    // 0x80111C80: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80111C84: lwc1        $f4, 0x74($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X74);
    // 0x80111C88: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80111C8C: nop

    // 0x80111C90: bc1fl       L_80111CB4
    if (!c1cs) {
        // 0x80111C94: swc1        $f2, 0x74($v0)
        MEM_W(0X74, ctx->r2) = ctx->f2.u32l;
            goto L_80111CB4;
    }
    goto skip_1;
    // 0x80111C94: swc1        $f2, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f2.u32l;
    skip_1:
    // 0x80111C98: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
L_80111C9C:
    // 0x80111C9C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x80111CA0: jal         0x80110770
    // 0x80111CA4: addiu       $a1, $a1, 0x5C
    ctx->r5 = ADD32(ctx->r5, 0X5C);
    func_80110770(rdram, ctx);
        goto after_6;
    // 0x80111CA4: addiu       $a1, $a1, 0x5C
    ctx->r5 = ADD32(ctx->r5, 0X5C);
    after_6:
    // 0x80111CA8: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80111CAC: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80111CB0: swc1        $f2, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f2.u32l;
L_80111CB4:
    // 0x80111CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80111CB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80111CBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80111CC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111CC8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80111CCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80111CD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80111CD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80111CD8: jal         0x80110898
    // 0x80111CDC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_80110898(rdram, ctx);
        goto after_0;
    // 0x80111CDC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80111CE0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80111CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111CE8: jal         0x801107F0
    // 0x80111CEC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x80111CEC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x80111CF0: jal         0x8010FFD0
    // 0x80111CF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8010FFD0(rdram, ctx);
        goto after_2;
    // 0x80111CF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80111CF8: beq         $v0, $zero, L_80111D30
    if (ctx->r2 == 0) {
        // 0x80111CFC: nop
    
            goto L_80111D30;
    }
    // 0x80111CFC: nop

    // 0x80111D00: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80111D04: jal         0x800EFD24
    // 0x80111D08: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x80111D08: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_3:
    // 0x80111D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111D10: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80111D14: jal         0x80113640
    // 0x80111D18: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_80113640(rdram, ctx);
        goto after_4;
    // 0x80111D18: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_4:
    // 0x80111D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111D20: jal         0x80110770
    // 0x80111D24: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_80110770(rdram, ctx);
        goto after_5;
    // 0x80111D24: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_5:
    // 0x80111D28: b           L_80111D9C
    // 0x80111D2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80111D9C;
    // 0x80111D2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80111D30:
    // 0x80111D30: jal         0x80111A98
    // 0x80111D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111A98(rdram, ctx);
        goto after_6;
    // 0x80111D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80111D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111D3C: jal         0x80111ABC
    // 0x80111D40: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_80111ABC(rdram, ctx);
        goto after_7;
    // 0x80111D40: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_7:
    // 0x80111D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111D48: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80111D4C: jal         0x80111A38
    // 0x80111D50: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_80111A38(rdram, ctx);
        goto after_8;
    // 0x80111D50: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_8:
    // 0x80111D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111D58: jal         0x8011106C
    // 0x80111D5C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8011106C(rdram, ctx);
        goto after_9;
    // 0x80111D5C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_9:
    // 0x80111D60: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80111D64: jal         0x800EF04C
    // 0x80111D68: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_10;
    // 0x80111D68: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_10:
    // 0x80111D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111D70: jal         0x80110770
    // 0x80111D74: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80110770(rdram, ctx);
        goto after_11;
    // 0x80111D74: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_11:
    // 0x80111D78: jal         0x8011329C
    // 0x80111D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8011329C(rdram, ctx);
        goto after_12;
    // 0x80111D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80111D80: beql        $v0, $zero, L_80111D9C
    if (ctx->r2 == 0) {
        // 0x80111D84: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80111D9C;
    }
    goto skip_0;
    // 0x80111D84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80111D88: jal         0x80111C04
    // 0x80111D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111C04(rdram, ctx);
        goto after_13;
    // 0x80111D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80111D90: b           L_80111D9C
    // 0x80111D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80111D9C;
    // 0x80111D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80111D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80111D9C:
    // 0x80111D9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80111DA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80111DA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80111DA8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111DB0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80111DB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80111DB8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80111DBC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80111DC0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80111DC4: jal         0x800EFB24
    // 0x80111DC8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x80111DC8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x80111DCC: jal         0x800EEF94
    // 0x80111DD0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EEF94(rdram, ctx);
        goto after_1;
    // 0x80111DD0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x80111DD4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80111DD8: lwc1        $f4, 0x655C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X655C);
    // 0x80111DDC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80111DE0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80111DE4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80111DE8: nop

    // 0x80111DEC: bc1fl       L_80111E70
    if (!c1cs) {
        // 0x80111DF0: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80111E70;
    }
    goto skip_0;
    // 0x80111DF0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x80111DF4: jal         0x800D8FF8
    // 0x80111DF8: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x80111DF8: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x80111DFC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80111E00: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80111E04: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80111E08: lw          $v0, 0x34($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X34);
    // 0x80111E0C: lwc1        $f6, 0x7C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x80111E10: lw          $a2, 0x80($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X80);
    // 0x80111E14: lw          $a3, 0x84($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X84);
    // 0x80111E18: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80111E1C: jal         0x800FF060
    // 0x80111E20: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800FF060(rdram, ctx);
        goto after_3;
    // 0x80111E20: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80111E24: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80111E28: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80111E2C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80111E30: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80111E34: nop

    // 0x80111E38: bc1fl       L_80111E50
    if (!c1cs) {
        // 0x80111E3C: div.s       $f10, $f2, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
            goto L_80111E50;
    }
    goto skip_1;
    // 0x80111E3C: div.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    skip_1:
    // 0x80111E40: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80111E44: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x80111E48: swc1        $f8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f8.u32l;
    // 0x80111E4C: div.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
L_80111E50:
    // 0x80111E50: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80111E54: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80111E58: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80111E5C: jal         0x800EF174
    // 0x80111E60: nop

    func_800EF174(rdram, ctx);
        goto after_4;
    // 0x80111E60: nop

    after_4:
    // 0x80111E64: b           L_80111E7C
    // 0x80111E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80111E7C;
    // 0x80111E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80111E6C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_80111E70:
    // 0x80111E70: nop

    // 0x80111E74: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
    // 0x80111E78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80111E7C:
    // 0x80111E7C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80111E80: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111E88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80111E8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80111E90: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80111E94: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80111E98: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80111E9C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80111EA0: jal         0x800D8FF8
    // 0x80111EA4: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80111EA4: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80111EA8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80111EAC: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80111EB0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80111EB4: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80111EB8: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x80111EBC: nop

    // 0x80111EC0: bc1fl       L_80111ED8
    if (!c1cs) {
        // 0x80111EC4: sub.s       $f6, $f14, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
            goto L_80111ED8;
    }
    goto skip_0;
    // 0x80111EC4: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    skip_0:
    // 0x80111EC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80111ECC: b           L_80111F5C
    // 0x80111ED0: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
        goto L_80111F5C;
    // 0x80111ED0: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x80111ED4: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
L_80111ED8:
    // 0x80111ED8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80111EDC: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80111EE0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80111EE4: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80111EE8: sub.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80111EEC: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80111EF0: nop

    // 0x80111EF4: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80111EF8: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x80111EFC: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x80111F00: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80111F04: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80111F08: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80111F0C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x80111F10: nop

    // 0x80111F14: bc1f        L_80111F3C
    if (!c1cs) {
        // 0x80111F18: add.s       $f20, $f4, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f2.fl;
            goto L_80111F3C;
    }
    // 0x80111F18: add.s       $f20, $f4, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80111F1C: c.lt.s      $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f20.fl < ctx->f14.fl;
    // 0x80111F20: nop

    // 0x80111F24: bc1fl       L_80111F5C
    if (!c1cs) {
        // 0x80111F28: swc1        $f20, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f20.u32l;
            goto L_80111F5C;
    }
    goto skip_1;
    // 0x80111F28: swc1        $f20, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f20.u32l;
    skip_1:
    // 0x80111F2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80111F30: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x80111F34: b           L_80111F58
    // 0x80111F38: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
        goto L_80111F58;
    // 0x80111F38: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_80111F3C:
    // 0x80111F3C: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x80111F40: nop

    // 0x80111F44: bc1fl       L_80111F5C
    if (!c1cs) {
        // 0x80111F48: swc1        $f20, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f20.u32l;
            goto L_80111F5C;
    }
    goto skip_2;
    // 0x80111F48: swc1        $f20, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f20.u32l;
    skip_2:
    // 0x80111F4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80111F50: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x80111F54: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
L_80111F58:
    // 0x80111F58: swc1        $f20, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f20.u32l;
L_80111F5C:
    // 0x80111F5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80111F60: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80111F64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80111F68: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111F70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80111F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80111F78: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80111F7C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80111F80: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80111F84: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80111F88: jal         0x80111DB0
    // 0x80111F8C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_80111DB0(rdram, ctx);
        goto after_0;
    // 0x80111F8C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80111F90: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80111F94: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80111F98: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    // 0x80111F9C: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x80111FA0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80111FA4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80111FA8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80111FAC: lw          $v0, 0x34($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X34);
    // 0x80111FB0: lwc1        $f12, 0x4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80111FB4: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80111FB8: lw          $a3, 0x30($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X30);
    // 0x80111FBC: jal         0x80111E88
    // 0x80111FC0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80111E88(rdram, ctx);
        goto after_1;
    // 0x80111FC0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80111FC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80111FC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80111FCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80111FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80111FD4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80111FD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80111FDC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80111FE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80111FE4: jal         0x80110898
    // 0x80111FE8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_80110898(rdram, ctx);
        goto after_0;
    // 0x80111FE8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80111FEC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80111FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80111FF4: jal         0x801107F0
    // 0x80111FF8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x80111FF8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x80111FFC: jal         0x8010FFD0
    // 0x80112000: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8010FFD0(rdram, ctx);
        goto after_2;
    // 0x80112000: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80112004: beq         $v0, $zero, L_8011203C
    if (ctx->r2 == 0) {
        // 0x80112008: nop
    
            goto L_8011203C;
    }
    // 0x80112008: nop

    // 0x8011200C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80112010: lw          $t6, 0x34($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X34);
    // 0x80112014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112018: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8011201C: swc1        $f4, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->f4.u32l;
    // 0x80112020: jal         0x80113640
    // 0x80112024: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    func_80113640(rdram, ctx);
        goto after_3;
    // 0x80112024: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_3:
    // 0x80112028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8011202C: jal         0x80110770
    // 0x80112030: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_80110770(rdram, ctx);
        goto after_4;
    // 0x80112030: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_4:
    // 0x80112034: b           L_801120B8
    // 0x80112038: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801120B8;
    // 0x80112038: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8011203C:
    // 0x8011203C: jal         0x80111A98
    // 0x80112040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111A98(rdram, ctx);
        goto after_5;
    // 0x80112040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80112044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112048: jal         0x80111ABC
    // 0x8011204C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_80111ABC(rdram, ctx);
        goto after_6;
    // 0x8011204C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_6:
    // 0x80112050: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80112054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112058: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x8011205C: addiu       $t7, $v0, 0x88
    ctx->r15 = ADD32(ctx->r2, 0X88);
    // 0x80112060: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80112064: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x80112068: jal         0x80111F70
    // 0x8011206C: addiu       $a3, $v0, 0x78
    ctx->r7 = ADD32(ctx->r2, 0X78);
    func_80111F70(rdram, ctx);
        goto after_7;
    // 0x8011206C: addiu       $a3, $v0, 0x78
    ctx->r7 = ADD32(ctx->r2, 0X78);
    after_7:
    // 0x80112070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112074: jal         0x8011106C
    // 0x80112078: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8011106C(rdram, ctx);
        goto after_8;
    // 0x80112078: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_8:
    // 0x8011207C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80112080: jal         0x800EF04C
    // 0x80112084: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800EF04C(rdram, ctx);
        goto after_9;
    // 0x80112084: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_9:
    // 0x80112088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8011208C: jal         0x80110770
    // 0x80112090: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80110770(rdram, ctx);
        goto after_10;
    // 0x80112090: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_10:
    // 0x80112094: jal         0x8011329C
    // 0x80112098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8011329C(rdram, ctx);
        goto after_11;
    // 0x80112098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8011209C: beql        $v0, $zero, L_801120B8
    if (ctx->r2 == 0) {
        // 0x801120A0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801120B8;
    }
    goto skip_0;
    // 0x801120A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801120A4: jal         0x80111C04
    // 0x801120A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111C04(rdram, ctx);
        goto after_12;
    // 0x801120A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801120AC: b           L_801120B8
    // 0x801120B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801120B8;
    // 0x801120B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801120B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801120B8:
    // 0x801120B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801120BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801120C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801120C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801120CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801120CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801120D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801120D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801120D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801120DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801120E0: jal         0x80110840
    // 0x801120E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x801120E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x801120E8: jal         0x800F53E4
    // 0x801120EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53E4(rdram, ctx);
        goto after_1;
    // 0x801120EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801120F0: beq         $v0, $zero, L_80112108
    if (ctx->r2 == 0) {
        // 0x801120F4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80112108;
    }
    // 0x801120F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801120F8: jal         0x800A3048
    // 0x801120FC: nop

    func_800A3048(rdram, ctx);
        goto after_2;
    // 0x801120FC: nop

    after_2:
    // 0x80112100: b           L_80112114
    // 0x80112104: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_80112114;
    // 0x80112104: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80112108:
    // 0x80112108: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8011210C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80112110: nop

L_80112114:
    // 0x80112114: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80112118: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8011211C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80112120: lw          $t6, 0x34($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X34);
    // 0x80112124: swc1        $f6, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f6.u32l;
    // 0x80112128: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8011212C: lw          $t7, 0x34($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X34);
    // 0x80112130: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80112134: swc1        $f10, 0x80($t7)
    MEM_W(0X80, ctx->r15) = ctx->f10.u32l;
    // 0x80112138: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8011213C: lw          $t8, 0x34($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X34);
    // 0x80112140: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80112144: swc1        $f18, 0x84($t8)
    MEM_W(0X84, ctx->r24) = ctx->f18.u32l;
    // 0x80112148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8011214C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80112150: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112160: jr          $ra
    // 0x80112164: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    return;
    // 0x80112164: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
;}
RECOMP_FUNC void func_80112168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112168: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8011216C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80112170: jal         0x80110840
    // 0x80112174: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80112174: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80112178: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8011217C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80112180: jal         0x800F5BC4
    // 0x80112184: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_800F5BC4(rdram, ctx);
        goto after_1;
    // 0x80112184: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x80112188: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8011218C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80112190: jal         0x800F5A00
    // 0x80112194: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800F5A00(rdram, ctx);
        goto after_2;
    // 0x80112194: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x80112198: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8011219C: jal         0x800EF04C
    // 0x801121A0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x801121A0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x801121A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801121A8: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801121AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801121B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801121B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801121B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801121BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801121C0: jal         0x80112168
    // 0x801121C4: nop

    func_80112168(rdram, ctx);
        goto after_0;
    // 0x801121C4: nop

    after_0:
    // 0x801121C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801121CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801121D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801121D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801121D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801121DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801121E0: jal         0x80110840
    // 0x801121E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x801121E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801121E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801121EC: jal         0x800F5A00
    // 0x801121F0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800F5A00(rdram, ctx);
        goto after_1;
    // 0x801121F0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801121F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801121F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801121FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112204: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80112208: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8011220C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80112210: jal         0x80112168
    // 0x80112214: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80112168(rdram, ctx);
        goto after_0;
    // 0x80112214: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80112218: jal         0x80110840
    // 0x8011221C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80110840(rdram, ctx);
        goto after_1;
    // 0x8011221C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80112220: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80112224: jal         0x800F5470
    // 0x80112228: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800F5470(rdram, ctx);
        goto after_2;
    // 0x80112228: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x8011222C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80112230: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80112234: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80112238: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8011223C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x80112240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80112244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80112248: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112250: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80112254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80112258: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8011225C: jal         0x80110840
    // 0x80112260: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80112260: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_0:
    // 0x80112264: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80112268: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8011226C: jal         0x80112168
    // 0x80112270: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_80112168(rdram, ctx);
        goto after_1;
    // 0x80112270: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_1:
    // 0x80112274: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80112278: jal         0x801107F0
    // 0x8011227C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_801107F0(rdram, ctx);
        goto after_2;
    // 0x8011227C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x80112280: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80112284: jal         0x800EEAD4
    // 0x80112288: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800EEAD4(rdram, ctx);
        goto after_3;
    // 0x80112288: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_3:
    // 0x8011228C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80112290: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80112294: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80112298: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8011229C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801122A0: jal         0x800EFA4C
    // 0x801122A4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    func_800EFA4C(rdram, ctx);
        goto after_4;
    // 0x801122A4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_4:
    // 0x801122A8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x801122AC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801122B0: jal         0x800F51F0
    // 0x801122B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800F51F0(rdram, ctx);
        goto after_5;
    // 0x801122B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x801122B8: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x801122BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801122C0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801122C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801122C8: lui         $a2, 0x44BB
    ctx->r6 = S32(0X44BB << 16);
    // 0x801122CC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x801122D0: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801122D4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x801122D8: jal         0x800F10B4
    // 0x801122DC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x801122DC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x801122E0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801122E4: jal         0x800F5AE0
    // 0x801122E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800F5AE0(rdram, ctx);
        goto after_7;
    // 0x801122E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x801122EC: jal         0x80013728
    // 0x801122F0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80013728(rdram, ctx);
        goto after_8;
    // 0x801122F0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_8:
    // 0x801122F4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801122F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x801122FC: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80112300: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80112304: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x80112308: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8011230C: bc1fl       L_80112330
    if (!c1cs) {
        // 0x80112310: addiu       $a0, $sp, 0x44
        ctx->r4 = ADD32(ctx->r29, 0X44);
            goto L_80112330;
    }
    goto skip_0;
    // 0x80112310: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    skip_0:
    // 0x80112314: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80112318: jal         0x800F10B4
    // 0x8011231C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_800F10B4(rdram, ctx);
        goto after_9;
    // 0x8011231C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_9:
    // 0x80112320: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80112324: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80112328: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x8011232C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
L_80112330:
    // 0x80112330: jal         0x800EF368
    // 0x80112334: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_800EF368(rdram, ctx);
        goto after_10;
    // 0x80112334: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_10:
    // 0x80112338: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8011233C: jal         0x800EF04C
    // 0x80112340: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800EF04C(rdram, ctx);
        goto after_11;
    // 0x80112340: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_11:
    // 0x80112344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80112348: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8011234C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80112358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8011235C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80112360: jal         0x80112168
    // 0x80112364: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80112168(rdram, ctx);
        goto after_0;
    // 0x80112364: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80112368: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8011236C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80112370: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x80112374: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80112378: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8011237C: lw          $t7, 0x30($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X30);
    // 0x80112380: lwc1        $f6, 0x30($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X30);
    // 0x80112384: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x80112388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8011238C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80112390: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8011239C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801123A0: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x801123A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801123A8: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x801123AC: jal         0x801124D0
    // 0x801123B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801124D0(rdram, ctx);
        goto after_0;
    // 0x801123B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801123B4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801123B8: lw          $a0, 0x30($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X30);
    // 0x801123BC: jal         0x800EFD24
    // 0x801123C0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x801123C0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x801123C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801123C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801123CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801123D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801123D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801123D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801123DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801123E0: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x801123E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801123E8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x801123EC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801123F0: sltiu       $at, $t8, 0x6
    ctx->r1 = ctx->r24 < 0X6 ? 1 : 0;
    // 0x801123F4: beq         $at, $zero, L_8011246C
    if (ctx->r1 == 0) {
        // 0x801123F8: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8011246C;
    }
    // 0x801123F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801123FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80112400: addu        $at, $at, $t8
    gpr jr_addend_80112408 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80112404: lw          $t8, 0x6560($at)
    ctx->r24 = ADD32(ctx->r1, 0X6560);
    // 0x80112408: jr          $t8
    // 0x8011240C: nop

    switch (jr_addend_80112408 >> 2) {
        case 0: goto L_80112410; break;
        case 1: goto L_8011244C; break;
        case 2: goto L_80112438; break;
        case 3: goto L_80112424; break;
        case 4: goto L_80112410; break;
        case 5: goto L_80112460; break;
        default: switch_error(__func__, 0x80112408, 0x80126560);
    }
    // 0x8011240C: nop

L_80112410:
    // 0x80112410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112414: jal         0x801121B8
    // 0x80112418: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_801121B8(rdram, ctx);
        goto after_0;
    // 0x80112418: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8011241C: b           L_8011246C
    // 0x80112420: nop

        goto L_8011246C;
    // 0x80112420: nop

L_80112424:
    // 0x80112424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112428: jal         0x801121D8
    // 0x8011242C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_801121D8(rdram, ctx);
        goto after_1;
    // 0x8011242C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80112430: b           L_8011246C
    // 0x80112434: nop

        goto L_8011246C;
    // 0x80112434: nop

L_80112438:
    // 0x80112438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8011243C: jal         0x80112250
    // 0x80112440: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80112250(rdram, ctx);
        goto after_2;
    // 0x80112440: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x80112444: b           L_8011246C
    // 0x80112448: nop

        goto L_8011246C;
    // 0x80112448: nop

L_8011244C:
    // 0x8011244C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112450: jal         0x80112204
    // 0x80112454: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80112204(rdram, ctx);
        goto after_3;
    // 0x80112454: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80112458: b           L_8011246C
    // 0x8011245C: nop

        goto L_8011246C;
    // 0x8011245C: nop

L_80112460:
    // 0x80112460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112464: jal         0x80112354
    // 0x80112468: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80112354(rdram, ctx);
        goto after_4;
    // 0x80112468: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_4:
L_8011246C:
    // 0x8011246C: jal         0x80110898
    // 0x80112470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110898(rdram, ctx);
        goto after_5;
    // 0x80112470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80112474: jal         0x8010FFD0
    // 0x80112478: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FFD0(rdram, ctx);
        goto after_6;
    // 0x80112478: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x8011247C: beql        $v0, $zero, L_801124A0
    if (ctx->r2 == 0) {
        // 0x80112480: lw          $v0, 0x30($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X30);
            goto L_801124A0;
    }
    goto skip_0;
    // 0x80112480: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    skip_0:
    // 0x80112484: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80112488: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8011248C: jal         0x800EE7F8
    // 0x80112490: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x80112490: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_7:
    // 0x80112494: b           L_801124C0
    // 0x80112498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801124C0;
    // 0x80112498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8011249C: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
L_801124A0:
    // 0x801124A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801124A4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801124A8: addiu       $t9, $v0, 0x14
    ctx->r25 = ADD32(ctx->r2, 0X14);
    // 0x801124AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801124B0: addiu       $a2, $v0, 0x4
    ctx->r6 = ADD32(ctx->r2, 0X4);
    // 0x801124B4: jal         0x80111F70
    // 0x801124B8: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    func_80111F70(rdram, ctx);
        goto after_8;
    // 0x801124B8: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    after_8:
    // 0x801124BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801124C0:
    // 0x801124C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801124C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801124C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801124D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801124D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801124D4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801124D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801124DC: bne         $a1, $at, L_80112500
    if (ctx->r5 != ctx->r1) {
        // 0x801124E0: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80112500;
    }
    // 0x801124E0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801124E4: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x801124E8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x801124EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801124F0: jal         0x801121B8
    // 0x801124F4: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    func_801121B8(rdram, ctx);
        goto after_0;
    // 0x801124F4: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    after_0:
    // 0x801124F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801124FC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
L_80112500:
    // 0x80112500: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x80112504: sw          $a2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r6;
    // 0x80112508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8011250C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80112510: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112518: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x8011251C: jr          $ra
    // 0x80112520: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    return;
    // 0x80112520: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_80112524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80112528: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8011252C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80112530: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80112534: lw          $a1, 0x30($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X30);
    // 0x80112538: jal         0x800EE7F8
    // 0x8011253C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8011253C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_0:
    // 0x80112540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80112544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80112548: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80112554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80112558: jal         0x80112168
    // 0x8011255C: nop

    func_80112168(rdram, ctx);
        goto after_0;
    // 0x8011255C: nop

    after_0:
    // 0x80112560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80112564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80112568: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80112574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80112578: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8011257C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80112580: lw          $a0, 0x30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X30);
    // 0x80112584: jal         0x800EE7F8
    // 0x80112588: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80112588: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x8011258C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80112590: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80112594: lw          $t8, 0x30($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X30);
    // 0x80112598: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
    // 0x8011259C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801125A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801125A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801125B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801125B0: jr          $ra
    // 0x801125B4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x801125B4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void func_801125B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801125B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801125BC: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x801125C0: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x801125C4: lw          $t7, 0x4C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4C);
    // 0x801125C8: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x801125CC: lw          $t8, 0x4C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4C);
    // 0x801125D0: jr          $ra
    // 0x801125D4: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    return;
    // 0x801125D4: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_801125D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801125D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801125DC: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x801125E0: jr          $ra
    // 0x801125E4: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x801125E4: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_801125E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801125E8: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x801125EC: jr          $ra
    // 0x801125F0: lwc1        $f0, 0xC($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0XC);
    return;
    // 0x801125F0: lwc1        $f0, 0xC($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0XC);
;}
RECOMP_FUNC void func_801125F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801125F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801125F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801125FC: jal         0x800F53D0
    // 0x80112600: nop

    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x80112600: nop

    after_0:
    // 0x80112604: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80112608: jal         0x8009D2E4
    // 0x8011260C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8009D2E4(rdram, ctx);
        goto after_1;
    // 0x8011260C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80112610: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80112614: jal         0x8009BAF4
    // 0x80112618: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8009BAF4(rdram, ctx);
        goto after_2;
    // 0x80112618: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x8011261C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80112620: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80112624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80112628: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x8011262C: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x80112630: beq         $v0, $zero, L_80112640
    if (ctx->r2 == 0) {
        // 0x80112634: nop
    
            goto L_80112640;
    }
    // 0x80112634: nop

    // 0x80112638: xori        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 ^ 0X2;
    // 0x8011263C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_80112640:
    // 0x80112640: jr          $ra
    // 0x80112644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80112644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80112648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112648: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8011264C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80112650: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80112654: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80112658: jal         0x80110840
    // 0x8011265C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x8011265C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80112660: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80112664: jal         0x800F5CC0
    // 0x80112668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5CC0(rdram, ctx);
        goto after_1;
    // 0x80112668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8011266C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80112670: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80112674: jal         0x80013728
    // 0x80112678: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    func_80013728(rdram, ctx);
        goto after_2;
    // 0x80112678: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    after_2:
    // 0x8011267C: lw          $t6, 0x4C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4C);
    // 0x80112680: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80112684: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80112688: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x8011268C: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x80112690: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x80112694: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80112698: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8011269C: nop

    // 0x801126A0: bc1fl       L_801126C4
    if (!c1cs) {
        // 0x801126A4: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_801126C4;
    }
    goto skip_0;
    // 0x801126A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_0:
    // 0x801126A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801126AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801126B0: nop

    // 0x801126B4: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x801126B8: b           L_801126E8
    // 0x801126BC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_801126E8;
    // 0x801126BC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x801126C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_801126C4:
    // 0x801126C4: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x801126C8: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801126CC: nop

    // 0x801126D0: bc1f        L_801126E8
    if (!c1cs) {
        // 0x801126D4: nop
    
            goto L_801126E8;
    }
    // 0x801126D4: nop

    // 0x801126D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801126DC: nop

    // 0x801126E0: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x801126E4: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_801126E8:
    // 0x801126E8: jal         0x800F5CEC
    // 0x801126EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F5CEC(rdram, ctx);
        goto after_3;
    // 0x801126EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801126F0: lw          $t7, 0x4C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4C);
    // 0x801126F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801126F8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x801126FC: jal         0x800F5D70
    // 0x80112700: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    func_800F5D70(rdram, ctx);
        goto after_4;
    // 0x80112700: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    after_4:
    // 0x80112704: jal         0x800EEFFC
    // 0x80112708: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_800EEFFC(rdram, ctx);
        goto after_5;
    // 0x80112708: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x8011270C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80112710: lwc1        $f6, 0x6580($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6580);
    // 0x80112714: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80112718: nop

    // 0x8011271C: bc1tl       L_80112748
    if (c1cs) {
        // 0x80112720: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80112748;
    }
    goto skip_1;
    // 0x80112720: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_1:
    // 0x80112724: jal         0x800F5B0C
    // 0x80112728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F5B0C(rdram, ctx);
        goto after_6;
    // 0x80112728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8011272C: bnel        $v0, $zero, L_80112748
    if (ctx->r2 != 0) {
        // 0x80112730: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80112748;
    }
    goto skip_2;
    // 0x80112730: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_2:
    // 0x80112734: jal         0x801125F4
    // 0x80112738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801125F4(rdram, ctx);
        goto after_7;
    // 0x80112738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8011273C: bnel        $v0, $zero, L_80112754
    if (ctx->r2 != 0) {
        // 0x80112740: lw          $v0, 0x4C($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X4C);
            goto L_80112754;
    }
    goto skip_3;
    // 0x80112740: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    skip_3:
    // 0x80112744: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80112748:
    // 0x80112748: lw          $t8, 0x4C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4C);
    // 0x8011274C: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
    // 0x80112750: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
L_80112754:
    // 0x80112754: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80112758: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8011275C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80112760: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x80112764: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80112768: nop

    // 0x8011276C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80112770: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80112774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80112778: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8011277C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80112780: jr          $ra
    // 0x80112784: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80112784: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80112788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112788: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x8011278C: jr          $ra
    // 0x80112790: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    return;
    // 0x80112790: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
;}
RECOMP_FUNC void func_801127A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801127A0: jr          $ra
    // 0x801127A4: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    return;
    // 0x801127A4: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
;}
RECOMP_FUNC void func_801127A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801127A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801127AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801127B0: jal         0x80112550
    // 0x801127B4: nop

    func_80112550(rdram, ctx);
        goto after_0;
    // 0x801127B4: nop

    after_0:
    // 0x801127B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801127BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801127C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801127C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801127C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801127CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801127D0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801127D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801127D8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801127DC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801127E0: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801127E4: jal         0x800F1DCC
    // 0x801127E8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    func_800F1DCC(rdram, ctx);
        goto after_0;
    // 0x801127E8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    after_0:
    // 0x801127EC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801127F0: jal         0x800F2100
    // 0x801127F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x801127F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x801127F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801127FC: lwc1        $f4, 0x6590($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6590);
    // 0x80112800: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80112804: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80112808: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8011280C: nop

    // 0x80112810: bc1fl       L_801128B0
    if (!c1cs) {
        // 0x80112814: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_801128B0;
    }
    goto skip_0;
    // 0x80112814: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x80112818: jal         0x800D8FF8
    // 0x8011281C: nop

    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x8011281C: nop

    after_2:
    // 0x80112820: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x80112824: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80112828: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8011282C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80112830: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80112834: lui         $a3, 0xC40C
    ctx->r7 = S32(0XC40C << 16);
    // 0x80112838: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x8011283C: jal         0x800FF060
    // 0x80112840: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800FF060(rdram, ctx);
        goto after_3;
    // 0x80112840: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80112844: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80112848: jal         0x800F2100
    // 0x8011284C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x8011284C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80112850: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80112854: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80112858: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8011285C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80112860: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80112864: bc1fl       L_80112894
    if (!c1cs) {
        // 0x80112868: lw          $t7, 0x34($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X34);
            goto L_80112894;
    }
    goto skip_1;
    // 0x80112868: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x8011286C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80112870: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80112874: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80112878: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8011287C: nop

    // 0x80112880: bc1fl       L_80112894
    if (!c1cs) {
        // 0x80112884: lw          $t7, 0x34($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X34);
            goto L_80112894;
    }
    goto skip_2;
    // 0x80112884: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x80112888: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x8011288C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80112890: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_80112894:
    // 0x80112894: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80112898: jal         0x800136E4
    // 0x8011289C: add.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f2.fl;
    func_800136E4(rdram, ctx);
        goto after_5;
    // 0x8011289C: add.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f2.fl;
    after_5:
    // 0x801128A0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x801128A4: b           L_801128C4
    // 0x801128A8: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
        goto L_801128C4;
    // 0x801128A8: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x801128AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_801128B0:
    // 0x801128B0: nop

    // 0x801128B4: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
    // 0x801128B8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801128BC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801128C0: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_801128C4:
    // 0x801128C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801128C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801128CC: jr          $ra
    return;
;}
