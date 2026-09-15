#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_801128D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801128D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801128D8: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x801128DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801128E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801128E4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801128E8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x801128EC: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801128F0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801128F4: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x801128F8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x801128FC: nop

    // 0x80112900: bc1f        L_80112914
    if (!c1cs) {
        // 0x80112904: nop
    
            goto L_80112914;
    }
    // 0x80112904: nop

    // 0x80112908: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8011290C: b           L_80112A70
    // 0x80112910: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
        goto L_80112A70;
    // 0x80112910: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
L_80112914:
    // 0x80112914: jal         0x800D8FF8
    // 0x80112918: nop

    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80112918: nop

    after_0:
    // 0x8011291C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80112920: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80112924: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80112928: jal         0x800F1DCC
    // 0x8011292C: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    func_800F1DCC(rdram, ctx);
        goto after_1;
    // 0x8011292C: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x80112930: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80112934: jal         0x800F2100
    // 0x80112938: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_2;
    // 0x80112938: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x8011293C: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80112940: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80112944: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80112948: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8011294C: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x80112950: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80112954: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80112958: bc1f        L_8011297C
    if (!c1cs) {
        // 0x8011295C: lwc1        $f6, 0x38($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
            goto L_8011297C;
    }
    // 0x8011295C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80112960: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80112964: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80112968: jal         0x800F1344
    // 0x8011296C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F1344(rdram, ctx);
        goto after_3;
    // 0x8011296C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80112970: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x80112974: b           L_801129F8
    // 0x80112978: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
        goto L_801129F8;
    // 0x80112978: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
L_8011297C:
    // 0x8011297C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80112980: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80112984: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80112988: nop

    // 0x8011298C: bc1f        L_80112998
    if (!c1cs) {
        // 0x80112990: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_80112998;
    }
    // 0x80112990: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80112994: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_80112998:
    // 0x80112998: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8011299C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801129A0: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x801129A4: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801129A8: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801129AC: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801129B0: nop

    // 0x801129B4: bc1fl       L_801129E4
    if (!c1cs) {
        // 0x801129B8: c.lt.s      $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
            goto L_801129E4;
    }
    goto skip_0;
    // 0x801129B8: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    skip_0:
    // 0x801129BC: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801129C0: neg.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
    // 0x801129C4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801129C8: nop

    // 0x801129CC: bc1fl       L_801129FC
    if (!c1cs) {
        // 0x801129D0: lwc1        $f4, 0x30($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
            goto L_801129FC;
    }
    goto skip_1;
    // 0x801129D0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x801129D4: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x801129D8: b           L_801129F8
    // 0x801129DC: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
        goto L_801129F8;
    // 0x801129DC: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801129E0: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
L_801129E4:
    // 0x801129E4: nop

    // 0x801129E8: bc1fl       L_801129FC
    if (!c1cs) {
        // 0x801129EC: lwc1        $f4, 0x30($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
            goto L_801129FC;
    }
    goto skip_2;
    // 0x801129EC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x801129F0: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x801129F4: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
L_801129F8:
    // 0x801129F8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
L_801129FC:
    // 0x801129FC: mul.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80112A00: jal         0x800F2100
    // 0x80112A04: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x80112A04: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x80112A08: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80112A0C: jal         0x800F2100
    // 0x80112A10: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    func_800F2100(rdram, ctx);
        goto after_5;
    // 0x80112A10: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_5:
    // 0x80112A14: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80112A18: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80112A1C: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80112A20: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80112A24: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80112A28: bc1fl       L_80112A5C
    if (!c1cs) {
        // 0x80112A2C: lw          $t9, 0x44($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X44);
            goto L_80112A5C;
    }
    goto skip_3;
    // 0x80112A2C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x80112A30: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80112A34: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80112A38: nop

    // 0x80112A3C: bc1fl       L_80112A5C
    if (!c1cs) {
        // 0x80112A40: lw          $t9, 0x44($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X44);
            goto L_80112A5C;
    }
    goto skip_4;
    // 0x80112A40: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    skip_4:
    // 0x80112A44: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x80112A48: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80112A4C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80112A50: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    // 0x80112A54: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x80112A58: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_80112A5C:
    // 0x80112A5C: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80112A60: jal         0x800136E4
    // 0x80112A64: add.s       $f12, $f6, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f14.fl;
    func_800136E4(rdram, ctx);
        goto after_6;
    // 0x80112A64: add.s       $f12, $f6, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f14.fl;
    after_6:
    // 0x80112A68: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80112A6C: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
L_80112A70:
    // 0x80112A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80112A74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80112A78: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80112A7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112A84: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80112A88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80112A8C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80112A90: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80112A94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80112A98: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80112A9C: lh          $t7, 0xC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC);
    // 0x80112AA0: beql        $t7, $zero, L_80112C08
    if (ctx->r15 == 0) {
        // 0x80112AA4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80112C08;
    }
    goto skip_0;
    // 0x80112AA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x80112AA8: jal         0x800D8FF8
    // 0x80112AAC: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80112AAC: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    after_0:
    // 0x80112AB0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x80112AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112AB8: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80112ABC: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80112AC0: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80112AC4: jal         0x801127A8
    // 0x80112AC8: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    func_801127A8(rdram, ctx);
        goto after_1;
    // 0x80112AC8: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    after_1:
    // 0x80112ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112AD0: jal         0x801107F0
    // 0x80112AD4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_801107F0(rdram, ctx);
        goto after_2;
    // 0x80112AD4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x80112AD8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80112ADC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80112AE0: jal         0x800EFB24
    // 0x80112AE4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x80112AE4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x80112AE8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80112AEC: jal         0x800F1A88
    // 0x80112AF0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800F1A88(rdram, ctx);
        goto after_4;
    // 0x80112AF0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x80112AF4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x80112AF8: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80112AFC: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80112B00: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80112B04: nop

    // 0x80112B08: bc1fl       L_80112B20
    if (!c1cs) {
        // 0x80112B0C: lwc1        $f18, 0x10($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
            goto L_80112B20;
    }
    goto skip_1;
    // 0x80112B0C: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    skip_1:
    // 0x80112B10: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80112B14: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x80112B18: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x80112B1C: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
L_80112B20:
    // 0x80112B20: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80112B24: jal         0x800F2100
    // 0x80112B28: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    func_800F2100(rdram, ctx);
        goto after_5;
    // 0x80112B28: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_5:
    // 0x80112B2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80112B30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80112B34: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
    // 0x80112B38: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x80112B3C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80112B40: nop

    // 0x80112B44: bc1fl       L_80112B54
    if (!c1cs) {
        // 0x80112B48: sw          $t9, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r25;
            goto L_80112B54;
    }
    goto skip_2;
    // 0x80112B48: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    skip_2:
    // 0x80112B4C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80112B50: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80112B54:
    // 0x80112B54: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x80112B58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80112B5C: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80112B60: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x80112B64: addiu       $a2, $v0, 0x18
    ctx->r6 = ADD32(ctx->r2, 0X18);
    // 0x80112B68: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x80112B6C: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80112B70: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x80112B74: lh          $t0, 0xC($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XC);
    // 0x80112B78: bne         $t0, $at, L_80112BB4
    if (ctx->r8 != ctx->r1) {
        // 0x80112B7C: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_80112BB4;
    }
    // 0x80112B7C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80112B80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80112B84: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x80112B88: addiu       $a2, $v0, 0x18
    ctx->r6 = ADD32(ctx->r2, 0X18);
    // 0x80112B8C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x80112B90: jal         0x801127C8
    // 0x80112B94: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801127C8(rdram, ctx);
        goto after_6;
    // 0x80112B94: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x80112B98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80112B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112BA0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80112BA4: jal         0x801160DC
    // 0x80112BA8: nop

    func_801160DC(rdram, ctx);
        goto after_7;
    // 0x80112BA8: nop

    after_7:
    // 0x80112BAC: b           L_80112BE8
    // 0x80112BB0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
        goto L_80112BE8;
    // 0x80112BB0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
L_80112BB4:
    // 0x80112BB4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x80112BB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80112BBC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80112BC0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80112BC4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80112BC8: jal         0x801128D4
    // 0x80112BCC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_801128D4(rdram, ctx);
        goto after_8;
    // 0x80112BCC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x80112BD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80112BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80112BD8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80112BDC: jal         0x801160DC
    // 0x80112BE0: nop

    func_801160DC(rdram, ctx);
        goto after_9;
    // 0x80112BE0: nop

    after_9:
    // 0x80112BE4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
L_80112BE8:
    // 0x80112BE8: beql        $t1, $zero, L_80112C18
    if (ctx->r9 == 0) {
        // 0x80112BEC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80112C18;
    }
    goto skip_3;
    // 0x80112BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80112BF0: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x80112BF4: sh          $zero, 0xC($t2)
    MEM_H(0XC, ctx->r10) = 0;
    // 0x80112BF8: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x80112BFC: b           L_80112C14
    // 0x80112C00: sh          $zero, 0xE($t3)
    MEM_H(0XE, ctx->r11) = 0;
        goto L_80112C14;
    // 0x80112C00: sh          $zero, 0xE($t3)
    MEM_H(0XE, ctx->r11) = 0;
    // 0x80112C04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80112C08:
    // 0x80112C08: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x80112C0C: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x80112C10: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
L_80112C14:
    // 0x80112C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80112C18:
    // 0x80112C18: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x80112C1C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80112C20: jal         0x80112D08
    // 0x80112C24: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    func_80112D08(rdram, ctx);
        goto after_10;
    // 0x80112C24: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    after_10:
    // 0x80112C28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80112C2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80112C30: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80112C34: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112C3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80112C40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80112C44: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80112C48: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x80112C4C: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x80112C50: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x80112C54: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80112C58: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80112C5C: beq         $at, $zero, L_80112CF4
    if (ctx->r1 == 0) {
        // 0x80112C60: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80112CF4;
    }
    // 0x80112C60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80112C64: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80112C68: addu        $at, $at, $t7
    gpr jr_addend_80112C70 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80112C6C: lw          $t7, 0x6594($at)
    ctx->r15 = ADD32(ctx->r1, 0X6594);
    // 0x80112C70: jr          $t7
    // 0x80112C74: nop

    switch (jr_addend_80112C70 >> 2) {
        case 0: goto L_80112C78; break;
        case 1: goto L_80112C78; break;
        case 2: goto L_80112C90; break;
        case 3: goto L_80112CC4; break;
        case 4: goto L_80112C78; break;
        default: switch_error(__func__, 0x80112C70, 0x80126594);
    }
    // 0x80112C74: nop

L_80112C78:
    // 0x80112C78: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80112C7C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80112C80: jal         0x800F1738
    // 0x80112C84: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    func_800F1738(rdram, ctx);
        goto after_0;
    // 0x80112C84: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    after_0:
    // 0x80112C88: b           L_80112CF4
    // 0x80112C8C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_80112CF4;
    // 0x80112C8C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_80112C90:
    // 0x80112C90: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80112C94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80112C98: jal         0x800F1DCC
    // 0x80112C9C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_800F1DCC(rdram, ctx);
        goto after_1;
    // 0x80112C9C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x80112CA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80112CA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80112CA8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80112CAC: nop

    // 0x80112CB0: bc1fl       L_80112CF8
    if (!c1cs) {
        // 0x80112CB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80112CF8;
    }
    goto skip_0;
    // 0x80112CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80112CB8: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x80112CBC: b           L_80112CF4
    // 0x80112CC0: lwc1        $f20, 0x0($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X0);
        goto L_80112CF4;
    // 0x80112CC0: lwc1        $f20, 0x0($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X0);
L_80112CC4:
    // 0x80112CC4: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80112CC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80112CCC: jal         0x800F1DCC
    // 0x80112CD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_800F1DCC(rdram, ctx);
        goto after_2;
    // 0x80112CD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x80112CD4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80112CD8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80112CDC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80112CE0: nop

    // 0x80112CE4: bc1fl       L_80112CF8
    if (!c1cs) {
        // 0x80112CE8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80112CF8;
    }
    goto skip_1;
    // 0x80112CE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80112CEC: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x80112CF0: lwc1        $f20, 0x0($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X0);
L_80112CF4:
    // 0x80112CF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80112CF8:
    // 0x80112CF8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x80112CFC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80112D00: jr          $ra
    // 0x80112D04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80112D04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80112D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112D08: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80112D0C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80112D10: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80112D14: sw          $a1, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r5;
    // 0x80112D18: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x80112D1C: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
    // 0x80112D20: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x80112D24: jr          $ra
    // 0x80112D28: swc1        $f14, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f14.u32l;
    return;
    // 0x80112D28: swc1        $f14, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_80112D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112D2C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80112D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80112D34: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80112D38: jal         0x801107F0
    // 0x80112D3C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x80112D3C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x80112D40: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80112D44: jal         0x801127A8
    // 0x80112D48: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_801127A8(rdram, ctx);
        goto after_1;
    // 0x80112D48: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x80112D4C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80112D50: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80112D54: jal         0x800EFB24
    // 0x80112D58: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80112D58: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x80112D5C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80112D60: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80112D64: lw          $a1, 0x60($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X60);
    // 0x80112D68: jal         0x800F1EA4
    // 0x80112D6C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_800F1EA4(rdram, ctx);
        goto after_3;
    // 0x80112D6C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_3:
    // 0x80112D70: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80112D74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80112D78: lw          $t8, 0x60($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X60);
    // 0x80112D7C: swc1        $f4, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f4.u32l;
    // 0x80112D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80112D84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80112D88: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112D90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80112D94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80112D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80112D9C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80112DA0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80112DA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80112DA8: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x80112DAC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80112DB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80112DB4: lh          $t7, 0xE($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE);
    // 0x80112DB8: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80112DBC: bnel        $at, $zero, L_80112E40
    if (ctx->r1 != 0) {
        // 0x80112DC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80112E40;
    }
    goto skip_0;
    // 0x80112DC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80112DC4: lh          $t9, 0xC($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XC);
    // 0x80112DC8: beql        $a3, $t9, L_80112DE0
    if (ctx->r7 == ctx->r25) {
        // 0x80112DCC: lwc1        $f4, 0x24($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80112DE0;
    }
    goto skip_1;
    // 0x80112DCC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80112DD0: jal         0x80112D2C
    // 0x80112DD4: nop

    func_80112D2C(rdram, ctx);
        goto after_0;
    // 0x80112DD4: nop

    after_0:
    // 0x80112DD8: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x80112DDC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
L_80112DE0:
    // 0x80112DE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80112DE4: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x80112DE8: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x80112DEC: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
    // 0x80112DF0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x80112DF4: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80112DF8: jal         0x800F1DCC
    // 0x80112DFC: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    func_800F1DCC(rdram, ctx);
        goto after_1;
    // 0x80112DFC: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    after_1:
    // 0x80112E00: jal         0x800F2100
    // 0x80112E04: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_2;
    // 0x80112E04: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x80112E08: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80112E0C: lwc1        $f8, 0x65A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X65A8);
    // 0x80112E10: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80112E14: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x80112E18: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80112E1C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80112E20: swc1        $f18, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f18.u32l;
    // 0x80112E24: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x80112E28: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80112E2C: sh          $t2, 0xC($t3)
    MEM_H(0XC, ctx->r11) = ctx->r10;
    // 0x80112E30: lw          $t5, 0x60($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X60);
    // 0x80112E34: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80112E38: sh          $t4, 0xE($t5)
    MEM_H(0XE, ctx->r13) = ctx->r12;
    // 0x80112E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80112E40:
    // 0x80112E40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80112E44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80112E48: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112E50: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x80112E54: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80112E58: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x80112E5C: beq         $t6, $zero, L_80112E7C
    if (ctx->r14 == 0) {
        // 0x80112E60: nop
    
            goto L_80112E7C;
    }
    // 0x80112E60: nop

    // 0x80112E64: lh          $t7, 0xE($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE);
    // 0x80112E68: bne         $a2, $t7, L_80112E7C
    if (ctx->r6 != ctx->r15) {
        // 0x80112E6C: nop
    
            goto L_80112E7C;
    }
    // 0x80112E6C: nop

    // 0x80112E70: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80112E74: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x80112E78: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
L_80112E7C:
    // 0x80112E7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80112E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112E84: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80112E88: jr          $ra
    // 0x80112E8C: lh          $v0, 0xC($t6)
    ctx->r2 = MEM_H(ctx->r14, 0XC);
    return;
    // 0x80112E8C: lh          $v0, 0xC($t6)
    ctx->r2 = MEM_H(ctx->r14, 0XC);
;}
RECOMP_FUNC void func_80112E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112E90: jr          $ra
    // 0x80112E94: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    return;
    // 0x80112E94: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
;}
RECOMP_FUNC void func_80112E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80112E98: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80112E9C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80112EA0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80112EA4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80112EA8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80112EAC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80112EB0: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80112EB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80112EB8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80112EBC: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80112EC0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80112EC4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80112EC8: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x80112ECC: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80112ED0: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80112ED4: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80112ED8: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80112EDC: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80112EE0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80112EE4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80112EE8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x80112EEC: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x80112EF0: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x80112EF4: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80112EF8: jal         0x800F0E00
    // 0x80112EFC: sub.s       $f14, $f20, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f20.fl - ctx->f4.fl;
    func_800F0E00(rdram, ctx);
        goto after_0;
    // 0x80112EFC: sub.s       $f14, $f20, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f20.fl - ctx->f4.fl;
    after_0:
    // 0x80112F00: lw          $s7, 0xB8($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XB8);
    // 0x80112F04: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x80112F08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80112F0C: beq         $s7, $zero, L_80112F4C
    if (ctx->r23 == 0) {
        // 0x80112F10: addiu       $s6, $sp, 0x88
        ctx->r22 = ADD32(ctx->r29, 0X88);
            goto L_80112F4C;
    }
    // 0x80112F10: addiu       $s6, $sp, 0x88
    ctx->r22 = ADD32(ctx->r29, 0X88);
    // 0x80112F14: beq         $s7, $at, L_80112F3C
    if (ctx->r23 == ctx->r1) {
        // 0x80112F18: lui         $s4, 0x8012
        ctx->r20 = S32(0X8012 << 16);
            goto L_80112F3C;
    }
    // 0x80112F18: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80112F1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80112F20: beq         $s7, $at, L_80112F44
    if (ctx->r23 == ctx->r1) {
        // 0x80112F24: lui         $s4, 0x8012
        ctx->r20 = S32(0X8012 << 16);
            goto L_80112F44;
    }
    // 0x80112F24: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80112F28: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80112F2C: beq         $s7, $v1, L_80112F44
    if (ctx->r23 == ctx->r3) {
        // 0x80112F30: nop
    
            goto L_80112F44;
    }
    // 0x80112F30: nop

    // 0x80112F34: b           L_80112F4C
    // 0x80112F38: nop

        goto L_80112F4C;
    // 0x80112F38: nop

L_80112F3C:
    // 0x80112F3C: b           L_80112F58
    // 0x80112F40: addiu       $s4, $s4, 0x4A40
    ctx->r20 = ADD32(ctx->r20, 0X4A40);
        goto L_80112F58;
    // 0x80112F40: addiu       $s4, $s4, 0x4A40
    ctx->r20 = ADD32(ctx->r20, 0X4A40);
L_80112F44:
    // 0x80112F44: b           L_80112F58
    // 0x80112F48: addiu       $s4, $s4, 0x4A48
    ctx->r20 = ADD32(ctx->r20, 0X4A48);
        goto L_80112F58;
    // 0x80112F48: addiu       $s4, $s4, 0x4A48
    ctx->r20 = ADD32(ctx->r20, 0X4A48);
L_80112F4C:
    // 0x80112F4C: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80112F50: addiu       $s4, $s4, 0x4A38
    ctx->r20 = ADD32(ctx->r20, 0X4A38);
    // 0x80112F54: mov.s       $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    ctx->f26.fl = ctx->f22.fl;
L_80112F58:
    // 0x80112F58: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x80112F5C: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x80112F60: lw          $s5, 0xBC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XBC);
    // 0x80112F64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80112F68: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x80112F6C: sltu        $at, $s0, $t8
    ctx->r1 = ctx->r16 < ctx->r24 ? 1 : 0;
    // 0x80112F70: beq         $at, $zero, L_80113058
    if (ctx->r1 == 0) {
        // 0x80112F74: addiu       $s2, $sp, 0x9C
        ctx->r18 = ADD32(ctx->r29, 0X9C);
            goto L_80113058;
    }
    // 0x80112F74: addiu       $s2, $sp, 0x9C
    ctx->r18 = ADD32(ctx->r29, 0X9C);
    // 0x80112F78: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80112F7C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80112F80: neg.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = -ctx->f20.fl;
    // 0x80112F84: addiu       $s1, $sp, 0x78
    ctx->r17 = ADD32(ctx->r29, 0X78);
    // 0x80112F88: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80112F8C:
    // 0x80112F8C: bne         $s7, $v1, L_80112F98
    if (ctx->r23 != ctx->r3) {
        // 0x80112F90: lwc1        $f20, 0x0($s0)
        ctx->f20.u32l = MEM_W(ctx->r16, 0X0);
            goto L_80112F98;
    }
    // 0x80112F90: lwc1        $f20, 0x0($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80112F94: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
L_80112F98:
    // 0x80112F98: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80112F9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80112FA0: jal         0x800EFA20
    // 0x80112FA4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800EFA20(rdram, ctx);
        goto after_1;
    // 0x80112FA4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_1:
    // 0x80112FA8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80112FAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80112FB0: jal         0x800EF934
    // 0x80112FB4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EF934(rdram, ctx);
        goto after_2;
    // 0x80112FB4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x80112FB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80112FBC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80112FC0: jal         0x800EE780
    // 0x80112FC4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800EE780(rdram, ctx);
        goto after_3;
    // 0x80112FC4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x80112FC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80112FCC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80112FD0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80112FD4: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x80112FD8: jal         0x800FAB50
    // 0x80112FDC: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    func_800FAB50(rdram, ctx);
        goto after_4;
    // 0x80112FDC: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    after_4:
    // 0x80112FE0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80112FE4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80112FE8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80112FEC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80112FF0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80112FF4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x80112FF8: jal         0x800FB3C0
    // 0x80112FFC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    func_800FB3C0(rdram, ctx);
        goto after_5;
    // 0x80112FFC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    after_5:
    // 0x80113000: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80113004: jal         0x800EEAD4
    // 0x80113008: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_6;
    // 0x80113008: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x8011300C: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x80113010: nop

    // 0x80113014: bc1fl       L_8011303C
    if (!c1cs) {
        // 0x80113018: lw          $t1, 0x4($s4)
        ctx->r9 = MEM_W(ctx->r20, 0X4);
            goto L_8011303C;
    }
    goto skip_0;
    // 0x80113018: lw          $t1, 0x4($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X4);
    skip_0:
    // 0x8011301C: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x80113020: jal         0x80110770
    // 0x80113024: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80110770(rdram, ctx);
        goto after_7;
    // 0x80113024: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x80113028: jal         0x801113B8
    // 0x8011302C: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    func_801113B8(rdram, ctx);
        goto after_8;
    // 0x8011302C: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_8:
    // 0x80113030: b           L_8011305C
    // 0x80113034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8011305C;
    // 0x80113034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80113038: lw          $t1, 0x4($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X4);
L_8011303C:
    // 0x8011303C: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x80113040: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80113044: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80113048: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8011304C: sltu        $at, $s0, $t3
    ctx->r1 = ctx->r16 < ctx->r11 ? 1 : 0;
    // 0x80113050: bnel        $at, $zero, L_80112F8C
    if (ctx->r1 != 0) {
        // 0x80113054: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80112F8C;
    }
    goto skip_1;
    // 0x80113054: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    skip_1:
L_80113058:
    // 0x80113058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8011305C:
    // 0x8011305C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80113060: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80113064: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80113068: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8011306C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80113070: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80113074: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80113078: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8011307C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80113080: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80113084: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80113088: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8011308C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80113090: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80113094: jr          $ra
    // 0x80113098: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80113098: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8011309C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011309C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x801130A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801130A4: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x801130A8: jal         0x80110840
    // 0x801130AC: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x801130AC: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    after_0:
    // 0x801130B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801130B4: jal         0x800F5B64
    // 0x801130B8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_800F5B64(rdram, ctx);
        goto after_1;
    // 0x801130B8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x801130BC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801130C0: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x801130C4: jal         0x801107F0
    // 0x801130C8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_801107F0(rdram, ctx);
        goto after_2;
    // 0x801130C8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x801130CC: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x801130D0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801130D4: jal         0x800EFB24
    // 0x801130D8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x801130D8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x801130DC: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x801130E0: jal         0x800EF410
    // 0x801130E4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800EF410(rdram, ctx);
        goto after_4;
    // 0x801130E4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_4:
    // 0x801130E8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x801130EC: jal         0x800EE7F8
    // 0x801130F0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x801130F0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_5:
    // 0x801130F4: jal         0x800EEF94
    // 0x801130F8: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    func_800EEF94(rdram, ctx);
        goto after_6;
    // 0x801130F8: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    after_6:
    // 0x801130FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80113100: lwc1        $f2, 0x65B0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X65B0);
    // 0x80113104: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80113108: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x8011310C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80113110: nop

    // 0x80113114: bc1fl       L_8011313C
    if (!c1cs) {
        // 0x80113118: lw          $t6, 0x90($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X90);
            goto L_8011313C;
    }
    goto skip_0;
    // 0x80113118: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    skip_0:
    // 0x8011311C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80113120: jal         0x800EFA20
    // 0x80113124: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    func_800EFA20(rdram, ctx);
        goto after_7;
    // 0x80113124: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    after_7:
    // 0x80113128: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x8011312C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80113130: jal         0x800EE780
    // 0x80113134: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_800EE780(rdram, ctx);
        goto after_8;
    // 0x80113134: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_8:
    // 0x80113138: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
L_8011313C:
    // 0x8011313C: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x80113140: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x80113144: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x80113148: beq         $at, $zero, L_801131F0
    if (ctx->r1 == 0) {
        // 0x8011314C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_801131F0;
    }
    // 0x8011314C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80113150: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80113154: addu        $at, $at, $t8
    gpr jr_addend_8011315C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80113158: lw          $t8, 0x65B4($at)
    ctx->r24 = ADD32(ctx->r1, 0X65B4);
    // 0x8011315C: jr          $t8
    // 0x80113160: nop

    switch (jr_addend_8011315C >> 2) {
        case 0: goto L_80113164; break;
        case 1: goto L_80113174; break;
        case 2: goto L_8011319C; break;
        case 3: goto L_801131C4; break;
        case 4: goto L_801131E8; break;
        default: switch_error(__func__, 0x8011315C, 0x801265B4);
    }
    // 0x80113160: nop

L_80113164:
    // 0x80113164: jal         0x800EFD24
    // 0x80113168: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800EFD24(rdram, ctx);
        goto after_9;
    // 0x80113168: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_9:
    // 0x8011316C: b           L_801131F4
    // 0x80113170: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
        goto L_801131F4;
    // 0x80113170: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
L_80113174:
    // 0x80113174: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80113178: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x8011317C: jal         0x800EFA20
    // 0x80113180: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800EFA20(rdram, ctx);
        goto after_10;
    // 0x80113180: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_10:
    // 0x80113184: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80113188: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8011318C: jal         0x800EF934
    // 0x80113190: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    func_800EF934(rdram, ctx);
        goto after_11;
    // 0x80113190: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    after_11:
    // 0x80113194: b           L_801131F4
    // 0x80113198: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
        goto L_801131F4;
    // 0x80113198: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
L_8011319C:
    // 0x8011319C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x801131A0: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x801131A4: jal         0x800EFA20
    // 0x801131A8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800EFA20(rdram, ctx);
        goto after_12;
    // 0x801131A8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_12:
    // 0x801131AC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801131B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801131B4: jal         0x800EF934
    // 0x801131B8: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    func_800EF934(rdram, ctx);
        goto after_13;
    // 0x801131B8: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    after_13:
    // 0x801131BC: b           L_801131F4
    // 0x801131C0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
        goto L_801131F4;
    // 0x801131C0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
L_801131C4:
    // 0x801131C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801131C8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x801131CC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801131D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801131D4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801131D8: jal         0x800EFA4C
    // 0x801131DC: nop

    func_800EFA4C(rdram, ctx);
        goto after_14;
    // 0x801131DC: nop

    after_14:
    // 0x801131E0: b           L_801131F4
    // 0x801131E4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
        goto L_801131F4;
    // 0x801131E4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
L_801131E8:
    // 0x801131E8: jal         0x800EFD24
    // 0x801131EC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800EFD24(rdram, ctx);
        goto after_15;
    // 0x801131EC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_15:
L_801131F0:
    // 0x801131F0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
L_801131F4:
    // 0x801131F4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801131F8: jal         0x800EE780
    // 0x801131FC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800EE780(rdram, ctx);
        goto after_16;
    // 0x801131FC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_16:
    // 0x80113200: lui         $a3, 0x86
    ctx->r7 = S32(0X86 << 16);
    // 0x80113204: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x80113208: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8011320C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80113210: jal         0x800C6A7C
    // 0x80113214: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    func_800C6A7C(rdram, ctx);
        goto after_17;
    // 0x80113214: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    after_17:
    // 0x80113218: beq         $v0, $zero, L_80113280
    if (ctx->r2 == 0) {
        // 0x8011321C: lw          $t8, 0x90($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X90);
            goto L_80113280;
    }
    // 0x8011321C: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x80113220: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x80113224: lui         $t7, 0x86
    ctx->r15 = S32(0X86 << 16);
    // 0x80113228: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x8011322C: lw          $v0, 0x28($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X28);
    // 0x80113230: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80113234: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    // 0x80113238: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x8011323C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80113240: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x80113244: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x80113248: lw          $v0, 0x28($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X28);
    // 0x8011324C: lw          $t5, 0x10($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X10);
    // 0x80113250: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x80113254: bnel        $at, $zero, L_8011328C
    if (ctx->r1 != 0) {
        // 0x80113258: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8011328C;
    }
    goto skip_1;
    // 0x80113258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8011325C: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x80113260: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x80113264: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80113268: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8011326C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x80113270: jal         0x80112E98
    // 0x80113274: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80112E98(rdram, ctx);
        goto after_18;
    // 0x80113274: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_18:
    // 0x80113278: b           L_80113290
    // 0x8011327C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80113290;
    // 0x8011327C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80113280:
    // 0x80113280: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x80113284: sw          $zero, 0x10($t9)
    MEM_W(0X10, ctx->r25) = 0;
    // 0x80113288: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8011328C:
    // 0x8011328C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80113290:
    // 0x80113290: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80113294: jr          $ra
    return;
;}
RECOMP_FUNC void func_8011329C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011329C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801132A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801132A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801132A8: jal         0x80110898
    // 0x801132AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80110898(rdram, ctx);
        goto after_0;
    // 0x801132AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x801132B0: jal         0x8010FFD0
    // 0x801132B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FFD0(rdram, ctx);
        goto after_1;
    // 0x801132B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801132B8: beq         $v0, $zero, L_801132C8
    if (ctx->r2 == 0) {
        // 0x801132BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801132C8;
    }
    // 0x801132BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801132C0: b           L_8011330C
    // 0x801132C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8011330C;
    // 0x801132C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801132C8:
    // 0x801132C8: jal         0x801107F0
    // 0x801132CC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_801107F0(rdram, ctx);
        goto after_2;
    // 0x801132CC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x801132D0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801132D4: jal         0x800EE7F8
    // 0x801132D8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x801132D8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x801132DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801132E0: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x801132E4: jal         0x80113688
    // 0x801132E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_80113688(rdram, ctx);
        goto after_4;
    // 0x801132E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x801132EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801132F0: jal         0x80110770
    // 0x801132F4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80110770(rdram, ctx);
        goto after_5;
    // 0x801132F4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x801132F8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801132FC: jal         0x800EECE0
    // 0x80113300: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800EECE0(rdram, ctx);
        goto after_6;
    // 0x80113300: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x80113304: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80113308: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8011330C:
    // 0x8011330C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80113310: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80113314: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80113318: jr          $ra
    return;
;}
RECOMP_FUNC void func_80113320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80113320: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80113324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80113328: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8011332C: jal         0x800EE7F8
    // 0x80113330: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80113330: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x80113334: jal         0x80110840
    // 0x80113338: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_80110840(rdram, ctx);
        goto after_1;
    // 0x80113338: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_1:
    // 0x8011333C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80113340: jal         0x800F5B64
    // 0x80113344: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800F5B64(rdram, ctx);
        goto after_2;
    // 0x80113344: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x80113348: lui         $a3, 0x86
    ctx->r7 = S32(0X86 << 16);
    // 0x8011334C: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x80113350: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80113354: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80113358: jal         0x800C6A7C
    // 0x8011335C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800C6A7C(rdram, ctx);
        goto after_3;
    // 0x8011335C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80113360: beq         $v0, $zero, L_80113370
    if (ctx->r2 == 0) {
        // 0x80113364: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80113370;
    }
    // 0x80113364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80113368: b           L_80113374
    // 0x8011336C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80113374;
    // 0x8011336C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80113370:
    // 0x80113370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80113374:
    // 0x80113374: jr          $ra
    // 0x80113378: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80113378: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8011337C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011337C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80113380: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80113384: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80113388: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8011338C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80113390: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80113394: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80113398: jal         0x801107F0
    // 0x8011339C: lw          $a1, 0x28($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X28);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x8011339C: lw          $a1, 0x28($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X28);
    after_0:
    // 0x801133A0: lw          $t6, 0x28($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X28);
    // 0x801133A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801133A8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801133AC: sw          $zero, 0x10($t6)
    MEM_W(0X10, ctx->r14) = 0;
    // 0x801133B0: lw          $t7, 0x28($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X28);
    // 0x801133B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801133B8: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x801133BC: sb          $zero, 0x14($t7)
    MEM_B(0X14, ctx->r15) = 0;
L_801133C0:
    // 0x801133C0: jal         0x800E8714
    // 0x801133C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800E8714(rdram, ctx);
        goto after_1;
    // 0x801133C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x801133C8: lw          $t8, 0x28($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X28);
    // 0x801133CC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801133D0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x801133D4: sb          $v0, 0x34($t9)
    MEM_B(0X34, ctx->r25) = ctx->r2;
    // 0x801133D8: lw          $t0, 0x28($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X28);
    // 0x801133DC: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x801133E0: jal         0x800E8870
    // 0x801133E4: lbu         $a0, 0x34($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X34);
    func_800E8870(rdram, ctx);
        goto after_2;
    // 0x801133E4: lbu         $a0, 0x34($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X34);
    after_2:
    // 0x801133E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801133EC: bne         $s0, $s2, L_801133C0
    if (ctx->r16 != ctx->r18) {
        // 0x801133F0: nop
    
            goto L_801133C0;
    }
    // 0x801133F0: nop

    // 0x801133F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801133F8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801133FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80113400: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80113404: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80113408: jr          $ra
    // 0x8011340C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8011340C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80113410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80113410: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80113414: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80113418: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8011341C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80113420: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80113424: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80113428: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8011342C: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x80113430: lw          $t6, 0x28($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X28);
L_80113434:
    // 0x80113434: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80113438: lbu         $a0, 0x34($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X34);
    // 0x8011343C: beql        $a0, $zero, L_8011345C
    if (ctx->r4 == 0) {
        // 0x80113440: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8011345C;
    }
    goto skip_0;
    // 0x80113440: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80113444: jal         0x800E87E0
    // 0x80113448: nop

    func_800E87E0(rdram, ctx);
        goto after_0;
    // 0x80113448: nop

    after_0:
    // 0x8011344C: lw          $t8, 0x28($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X28);
    // 0x80113450: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80113454: sb          $zero, 0x34($t9)
    MEM_B(0X34, ctx->r25) = 0;
    // 0x80113458: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8011345C:
    // 0x8011345C: bnel        $s0, $s2, L_80113434
    if (ctx->r16 != ctx->r18) {
        // 0x80113460: lw          $t6, 0x28($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X28);
            goto L_80113434;
    }
    goto skip_1;
    // 0x80113460: lw          $t6, 0x28($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X28);
    skip_1:
    // 0x80113464: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80113468: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8011346C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80113470: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80113474: jr          $ra
    // 0x80113478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80113478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8011347C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011347C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80113480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80113484: jal         0x801107F0
    // 0x80113488: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x80113488: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    after_0:
    // 0x8011348C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80113490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80113494: jr          $ra
    return;
;}
RECOMP_FUNC void func_8011349C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011349C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801134A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801134A4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801134A8: jal         0x800EE7F8
    // 0x801134AC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x801134AC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x801134B0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801134B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801134B8: lui         $a3, 0x82
    ctx->r7 = S32(0X82 << 16);
    // 0x801134BC: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x801134C0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801134C4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801134C8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x801134CC: jal         0x800FAB50
    // 0x801134D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800FAB50(rdram, ctx);
        goto after_1;
    // 0x801134D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801134D4: beq         $v0, $zero, L_801134E4
    if (ctx->r2 == 0) {
        // 0x801134D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801134E4;
    }
    // 0x801134D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801134DC: b           L_801134E8
    // 0x801134E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801134E8;
    // 0x801134E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801134E4:
    // 0x801134E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801134E8:
    // 0x801134E8: jr          $ra
    // 0x801134EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x801134EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801134F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801134F0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801134F4: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x801134F8: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x801134FC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80113500: lui         $s4, 0x82
    ctx->r20 = S32(0X82 << 16);
    // 0x80113504: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80113508: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x8011350C: ori         $s4, $s4, 0x20
    ctx->r20 = ctx->r20 | 0X20;
    // 0x80113510: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80113514: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80113518: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8011351C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80113520: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80113524: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80113528: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8011352C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80113530: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80113534: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x80113538: jal         0x800C6C94
    // 0x8011353C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800C6C94(rdram, ctx);
        goto after_0;
    // 0x8011353C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x80113540: beq         $v0, $zero, L_801135A4
    if (ctx->r2 == 0) {
        // 0x80113544: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_801135A4;
    }
    // 0x80113544: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80113548: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8011354C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80113550: lwc1        $f20, 0x65C8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X65C8);
    // 0x80113554: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80113558:
    // 0x80113558: jal         0x800EEFD4
    // 0x8011355C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EEFD4(rdram, ctx);
        goto after_1;
    // 0x8011355C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80113560: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80113564: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80113568: bc1tl       L_801135A8
    if (c1cs) {
        // 0x8011356C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_801135A8;
    }
    goto skip_0;
    // 0x8011356C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x80113570: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80113574: jal         0x800EF174
    // 0x80113578: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EF174(rdram, ctx);
        goto after_2;
    // 0x80113578: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8011357C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80113580: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80113584: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80113588: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8011358C: jal         0x800C6C94
    // 0x80113590: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_800C6C94(rdram, ctx);
        goto after_3;
    // 0x80113590: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_3:
    // 0x80113594: beql        $v0, $zero, L_801135A8
    if (ctx->r2 == 0) {
        // 0x80113598: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_801135A8;
    }
    goto skip_1;
    // 0x80113598: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x8011359C: bne         $s0, $s3, L_80113558
    if (ctx->r16 != ctx->r19) {
        // 0x801135A0: nop
    
            goto L_80113558;
    }
    // 0x801135A0: nop

L_801135A4:
    // 0x801135A4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_801135A8:
    // 0x801135A8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801135AC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801135B0: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x801135B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801135B8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801135BC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801135C0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801135C4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801135C8: jr          $ra
    // 0x801135CC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x801135CC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801135D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801135D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801135D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801135D8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801135DC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801135E0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x801135E4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x801135E8: jal         0x800EFB24
    // 0x801135EC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x801135EC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x801135F0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x801135F4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801135F8: jal         0x800EFB24
    // 0x801135FC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x801135FC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x80113600: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80113604: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80113608: jal         0x800EFB24
    // 0x8011360C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x8011360C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x80113610: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80113614: jal         0x800EEAA4
    // 0x80113618: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800EEAA4(rdram, ctx);
        goto after_3;
    // 0x80113618: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x8011361C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80113620: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80113624: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80113628: jal         0x800EF174
    // 0x8011362C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800EF174(rdram, ctx);
        goto after_4;
    // 0x8011362C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_4:
    // 0x80113630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80113634: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80113638: jr          $ra
    return;
;}
RECOMP_FUNC void func_80113640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80113640: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80113644: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80113648: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8011364C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80113650: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80113654: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80113658: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8011365C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80113660: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80113664: lui         $a3, 0x82
    ctx->r7 = S32(0X82 << 16);
    // 0x80113668: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x8011366C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80113670: jal         0x800FAB50
    // 0x80113674: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800FAB50(rdram, ctx);
        goto after_0;
    // 0x80113674: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80113678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8011367C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80113680: jr          $ra
    return;
;}
RECOMP_FUNC void func_80113688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80113688: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8011368C: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x80113690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80113694: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x80113698: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8011369C: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x801136A0: jal         0x801134F0
    // 0x801136A4: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    func_801134F0(rdram, ctx);
        goto after_0;
    // 0x801136A4: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_0:
    // 0x801136A8: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x801136AC: jal         0x800EEB40
    // 0x801136B0: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    func_800EEB40(rdram, ctx);
        goto after_1;
    // 0x801136B0: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    after_1:
    // 0x801136B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801136B8: lwc1        $f4, 0x65CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X65CC);
    // 0x801136BC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x801136C0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801136C4: nop

    // 0x801136C8: bc1tl       L_801137D8
    if (c1cs) {
        // 0x801136CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801137D8;
    }
    goto skip_0;
    // 0x801136CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801136D0: jal         0x800EE7F8
    // 0x801136D4: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x801136D4: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    after_2:
    // 0x801136D8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x801136DC: jal         0x800EE7F8
    // 0x801136E0: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x801136E0: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    after_3:
    // 0x801136E4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x801136E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801136EC: lui         $a3, 0x82
    ctx->r7 = S32(0X82 << 16);
    // 0x801136F0: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x801136F4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x801136F8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x801136FC: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x80113700: jal         0x800FAB50
    // 0x80113704: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800FAB50(rdram, ctx);
        goto after_4;
    // 0x80113704: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80113708: bne         $v0, $zero, L_8011373C
    if (ctx->r2 != 0) {
        // 0x8011370C: sw          $v0, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r2;
            goto L_8011373C;
    }
    // 0x8011370C: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x80113710: lui         $t7, 0x82
    ctx->r15 = S32(0X82 << 16);
    // 0x80113714: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x80113718: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8011371C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80113720: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80113724: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80113728: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8011372C: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x80113730: jal         0x800FB3C0
    // 0x80113734: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    func_800FB3C0(rdram, ctx);
        goto after_5;
    // 0x80113734: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    after_5:
    // 0x80113738: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
L_8011373C:
    // 0x8011373C: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80113740: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80113744: bne         $t8, $zero, L_80113754
    if (ctx->r24 != 0) {
        // 0x80113748: nop
    
            goto L_80113754;
    }
    // 0x80113748: nop

    // 0x8011374C: beql        $t9, $zero, L_801137D8
    if (ctx->r25 == 0) {
        // 0x80113750: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801137D8;
    }
    goto skip_1;
    // 0x80113750: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
L_80113754:
    // 0x80113754: jal         0x800AAD28
    // 0x80113758: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_800AAD28(rdram, ctx);
        goto after_6;
    // 0x80113758: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x8011375C: jal         0x80110898
    // 0x80113760: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    func_80110898(rdram, ctx);
        goto after_7;
    // 0x80113760: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    after_7:
    // 0x80113764: jal         0x80110060
    // 0x80113768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110060(rdram, ctx);
        goto after_8;
    // 0x80113768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x8011376C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80113770: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80113774: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80113778: beq         $t0, $zero, L_80113788
    if (ctx->r8 == 0) {
        // 0x8011377C: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_80113788;
    }
    // 0x8011377C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80113780: b           L_8011378C
    // 0x80113784: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
        goto L_8011378C;
    // 0x80113784: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
L_80113788:
    // 0x80113788: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
L_8011378C:
    // 0x8011378C: jal         0x80114CF4
    // 0x80113790: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    func_80114CF4(rdram, ctx);
        goto after_9;
    // 0x80113790: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    after_9:
    // 0x80113794: addiu       $t2, $sp, 0x74
    ctx->r10 = ADD32(ctx->r29, 0X74);
    // 0x80113798: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8011379C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x801137A0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x801137A4: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x801137A8: jal         0x801135D0
    // 0x801137AC: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    func_801135D0(rdram, ctx);
        goto after_10;
    // 0x801137AC: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    after_10:
    // 0x801137B0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x801137B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801137B8: lui         $a3, 0x82
    ctx->r7 = S32(0X82 << 16);
    // 0x801137BC: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x801137C0: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x801137C4: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x801137C8: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x801137CC: jal         0x800FAB50
    // 0x801137D0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800FAB50(rdram, ctx);
        goto after_11;
    // 0x801137D0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x801137D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801137D8:
    // 0x801137D8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x801137DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801137E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801137E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801137E8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801137EC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801137F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801137F4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x801137F8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x801137FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80113800: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80113804: lui         $a3, 0x86
    ctx->r7 = S32(0X86 << 16);
    // 0x80113808: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x8011380C: jal         0x800C6A7C
    // 0x80113810: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800C6A7C(rdram, ctx);
        goto after_0;
    // 0x80113810: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80113814: beq         $v0, $zero, L_8011388C
    if (ctx->r2 == 0) {
        // 0x80113818: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_8011388C;
    }
    // 0x80113818: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8011381C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80113820: jal         0x800EFB24
    // 0x80113824: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x80113824: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x80113828: jal         0x800EF2A0
    // 0x8011382C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_800EF2A0(rdram, ctx);
        goto after_2;
    // 0x8011382C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x80113830: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80113834: jal         0x800EEAA4
    // 0x80113838: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800EEAA4(rdram, ctx);
        goto after_3;
    // 0x80113838: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x8011383C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80113840: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80113844: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80113848: nop

    // 0x8011384C: bc1f        L_8011385C
    if (!c1cs) {
        // 0x80113850: nop
    
            goto L_8011385C;
    }
    // 0x80113850: nop

    // 0x80113854: b           L_80113890
    // 0x80113858: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80113890;
    // 0x80113858: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8011385C:
    // 0x8011385C: jal         0x80013A7C
    // 0x80113860: nop

    func_80013A7C(rdram, ctx);
        goto after_4;
    // 0x80113860: nop

    after_4:
    // 0x80113864: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80113868: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8011386C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80113870: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80113874: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80113878: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8011387C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80113880: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80113884: b           L_80113890
    // 0x80113888: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
        goto L_80113890;
    // 0x80113888: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
L_8011388C:
    // 0x8011388C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80113890:
    // 0x80113890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80113894: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80113898: jr          $ra
    return;
;}
RECOMP_FUNC void func_801138A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801138A0: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x801138A4: lbu         $t6, 0x14($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X14);
    // 0x801138A8: beql        $t6, $zero, L_801138BC
    if (ctx->r14 == 0) {
            // 0x801138AC: lh          $t7, 0xC($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XC);
    static_3_801138BC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x801138AC: lh          $t7, 0xC($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XC);
    skip_0:
    // 0x801138B0: jr          $ra
    // 0x801138B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x801138B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_801138B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801138B8: lh          $t7, 0xC($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XC);
    // 0x801138BC: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x801138C0: bnel        $at, $zero, L_801138DC
    if (ctx->r1 != 0) {
        // 0x801138C4: sh          $zero, 0xE($v0)
        MEM_H(0XE, ctx->r2) = 0;
            goto L_801138DC;
    }
    goto skip_0;
    // 0x801138C4: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    skip_0:
    // 0x801138C8: lh          $t8, 0xE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XE);
    // 0x801138CC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801138D0: b           L_801138DC
    // 0x801138D4: sh          $t9, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r25;
        goto L_801138DC;
    // 0x801138D4: sh          $t9, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r25;
    // 0x801138D8: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
L_801138DC:
    // 0x801138DC: lw          $t0, 0x28($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X28);
    // 0x801138E0: lh          $v0, 0xE($t0)
    ctx->r2 = MEM_H(ctx->r8, 0XE);
    // 0x801138E4: slti        $t1, $v0, 0x5
    ctx->r9 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x801138E8: xori        $v0, $t1, 0x1
    ctx->r2 = ctx->r9 ^ 0X1;
    // 0x801138EC: jr          $ra
    // 0x801138F0: nop

    return;
    // 0x801138F0: nop

;}
RECOMP_FUNC void func_801138F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801138F4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801138F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801138FC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80113900: jal         0x80112550
    // 0x80113904: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_80112550(rdram, ctx);
        goto after_0;
    // 0x80113904: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x80113908: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8011390C: jal         0x801107F0
    // 0x80113910: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x80113910: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x80113914: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80113918: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x8011391C: jal         0x800EFB24
    // 0x80113920: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80113920: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x80113924: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80113928: jal         0x800EF410
    // 0x8011392C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EF410(rdram, ctx);
        goto after_3;
    // 0x8011392C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x80113930: jal         0x800EEF94
    // 0x80113934: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EEF94(rdram, ctx);
        goto after_4;
    // 0x80113934: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x80113938: lui         $t6, 0x2
    ctx->r14 = S32(0X2 << 16);
    // 0x8011393C: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x80113940: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80113944: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80113948: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8011394C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80113950: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x80113954: jal         0x80112E98
    // 0x80113958: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80112E98(rdram, ctx);
        goto after_5;
    // 0x80113958: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x8011395C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80113960: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80113964: jr          $ra
    return;
;}
RECOMP_FUNC void func_8011396C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011396C: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80113970: jr          $ra
    // 0x80113974: sb          $a1, 0x14($t6)
    MEM_B(0X14, ctx->r14) = ctx->r5;
    return;
    // 0x80113974: sb          $a1, 0x14($t6)
    MEM_B(0X14, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80113978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80113978: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8011397C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80113980: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80113984: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80113988: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x8011398C: jal         0x80110840
    // 0x80113990: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80113990: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x80113994: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80113998: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x8011399C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801139A0: jal         0x80110898
    // 0x801139A4: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    func_80110898(rdram, ctx);
        goto after_1;
    // 0x801139A4: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801139A8: jal         0x8010FF80
    // 0x801139AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FF80(rdram, ctx);
        goto after_2;
    // 0x801139AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x801139B0: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x801139B4: jal         0x800F711C
    // 0x801139B8: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    func_800F711C(rdram, ctx);
        goto after_3;
    // 0x801139B8: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    after_3:
    // 0x801139BC: beql        $v0, $zero, L_801139DC
    if (ctx->r2 == 0) {
        // 0x801139C0: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_801139DC;
    }
    goto skip_0;
    // 0x801139C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x801139C4: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x801139C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801139CC: lbu         $t7, 0x14($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X14);
    // 0x801139D0: beq         $t7, $zero, L_801139E4
    if (ctx->r15 == 0) {
        // 0x801139D4: nop
    
            goto L_801139E4;
    }
    // 0x801139D4: nop

    // 0x801139D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_801139DC:
    // 0x801139DC: b           L_80113D20
    // 0x801139E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80113D20;
    // 0x801139E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801139E4:
    // 0x801139E4: jal         0x80112550
    // 0x801139E8: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    func_80112550(rdram, ctx);
        goto after_4;
    // 0x801139E8: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    after_4:
    // 0x801139EC: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x801139F0: jal         0x800CA7E4
    // 0x801139F4: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    func_800CA7E4(rdram, ctx);
        goto after_5;
    // 0x801139F4: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    after_5:
    // 0x801139F8: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x801139FC: beql        $t8, $zero, L_80113C20
    if (ctx->r24 == 0) {
        // 0x80113A00: lw          $t3, 0xA8($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XA8);
            goto L_80113C20;
    }
    goto skip_1;
    // 0x80113A00: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    skip_1:
    // 0x80113A04: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80113A08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80113A0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80113A10: lw          $t9, 0x40($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X40);
    // 0x80113A14: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80113A18: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80113A1C: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80113A20: bnel        $at, $zero, L_80113A34
    if (ctx->r1 != 0) {
        // 0x80113A24: lw          $t2, 0x48($v0)
        ctx->r10 = MEM_W(ctx->r2, 0X48);
            goto L_80113A34;
    }
    goto skip_2;
    // 0x80113A24: lw          $t2, 0x48($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X48);
    skip_2:
    // 0x80113A28: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80113A2C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80113A30: lw          $t2, 0x48($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X48);
L_80113A34:
    // 0x80113A34: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80113A38: bne         $at, $zero, L_80113A48
    if (ctx->r1 != 0) {
        // 0x80113A3C: nop
    
            goto L_80113A48;
    }
    // 0x80113A3C: nop

    // 0x80113A40: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80113A44: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_80113A48:
    // 0x80113A48: beq         $v1, $zero, L_80113AEC
    if (ctx->r3 == 0) {
        // 0x80113A4C: swc1        $f6, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
            goto L_80113AEC;
    }
    // 0x80113A4C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x80113A50: bne         $t0, $zero, L_80113A7C
    if (ctx->r8 != 0) {
        // 0x80113A54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80113A7C;
    }
    // 0x80113A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80113A58: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80113A5C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80113A60: lw          $t3, 0x24($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X24);
    // 0x80113A64: lw          $t4, 0x1C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X1C);
    // 0x80113A68: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80113A6C: beq         $at, $zero, L_80113A7C
    if (ctx->r1 == 0) {
        // 0x80113A70: nop
    
            goto L_80113A7C;
    }
    // 0x80113A70: nop

    // 0x80113A74: b           L_80113A7C
    // 0x80113A78: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_80113A7C;
    // 0x80113A78: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_80113A7C:
    // 0x80113A7C: bgez        $t0, L_80113ABC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80113A80: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_80113ABC;
    }
    // 0x80113A80: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80113A84: addiu       $t5, $sp, 0x6C
    ctx->r13 = ADD32(ctx->r29, 0X6C);
    // 0x80113A88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80113A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80113A90: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x80113A94: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x80113A98: addiu       $a3, $v0, 0x58
    ctx->r7 = ADD32(ctx->r2, 0X58);
    // 0x80113A9C: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x80113AA0: jal         0x801137E4
    // 0x80113AA4: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    func_801137E4(rdram, ctx);
        goto after_6;
    // 0x80113AA4: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_6:
    // 0x80113AA8: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80113AAC: beq         $v0, $zero, L_80113AEC
    if (ctx->r2 == 0) {
        // 0x80113AB0: lw          $t1, 0x70($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X70);
            goto L_80113AEC;
    }
    // 0x80113AB0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x80113AB4: b           L_80113AEC
    // 0x80113AB8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_80113AEC;
    // 0x80113AB8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80113ABC:
    // 0x80113ABC: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x80113AC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80113AC4: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x80113AC8: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x80113ACC: addiu       $a3, $v0, 0x70
    ctx->r7 = ADD32(ctx->r2, 0X70);
    // 0x80113AD0: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x80113AD4: jal         0x801137E4
    // 0x80113AD8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    func_801137E4(rdram, ctx);
        goto after_7;
    // 0x80113AD8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_7:
    // 0x80113ADC: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80113AE0: beq         $v0, $zero, L_80113AEC
    if (ctx->r2 == 0) {
        // 0x80113AE4: lw          $t1, 0x70($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X70);
            goto L_80113AEC;
    }
    // 0x80113AE4: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x80113AE8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80113AEC:
    // 0x80113AEC: beq         $t1, $zero, L_80113BDC
    if (ctx->r9 == 0) {
        // 0x80113AF0: addiu       $a0, $sp, 0x48
        ctx->r4 = ADD32(ctx->r29, 0X48);
            goto L_80113BDC;
    }
    // 0x80113AF0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80113AF4: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x80113AF8: addiu       $a2, $sp, 0x94
    ctx->r6 = ADD32(ctx->r29, 0X94);
    // 0x80113AFC: jal         0x800EFB24
    // 0x80113B00: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    func_800EFB24(rdram, ctx);
        goto after_8;
    // 0x80113B00: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    after_8:
    // 0x80113B04: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80113B08: jal         0x800F1A88
    // 0x80113B0C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_800F1A88(rdram, ctx);
        goto after_9;
    // 0x80113B0C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_9:
    // 0x80113B10: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80113B14: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80113B18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80113B1C: bgezl       $t0, L_80113B38
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80113B20: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_80113B38;
    }
    goto skip_3;
    // 0x80113B20: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_3:
    // 0x80113B24: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80113B28: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80113B2C: b           L_80113B3C
    // 0x80113B30: nop

        goto L_80113B3C;
    // 0x80113B30: nop

    // 0x80113B34: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_80113B38:
    // 0x80113B38: nop

L_80113B3C:
    // 0x80113B3C: mul.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80113B40: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80113B44: lwc1        $f10, 0x65D0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X65D0);
    // 0x80113B48: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80113B4C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80113B50: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x80113B54: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80113B58: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x80113B5C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80113B60: jal         0x800EF934
    // 0x80113B64: nop

    func_800EF934(rdram, ctx);
        goto after_10;
    // 0x80113B64: nop

    after_10:
    // 0x80113B68: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80113B6C: jal         0x800EF04C
    // 0x80113B70: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    func_800EF04C(rdram, ctx);
        goto after_11;
    // 0x80113B70: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    after_11:
    // 0x80113B74: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80113B78: jal         0x8011349C
    // 0x80113B7C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_8011349C(rdram, ctx);
        goto after_12;
    // 0x80113B7C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_12:
    // 0x80113B80: beq         $v0, $zero, L_80113C1C
    if (ctx->r2 == 0) {
        // 0x80113B84: lw          $t0, 0x78($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X78);
            goto L_80113C1C;
    }
    // 0x80113B84: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80113B88: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80113B8C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80113B90: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x80113B94: jal         0x800136E4
    // 0x80113B98: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_13;
    // 0x80113B98: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_13:
    // 0x80113B9C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80113BA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80113BA4: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80113BA8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80113BAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80113BB0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80113BB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80113BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80113BBC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80113BC0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80113BC4: jal         0x80112D90
    // 0x80113BC8: nop

    func_80112D90(rdram, ctx);
        goto after_14;
    // 0x80113BC8: nop

    after_14:
    // 0x80113BCC: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80113BD0: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x80113BD4: b           L_80113C1C
    // 0x80113BD8: sw          $t0, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->r8;
        goto L_80113C1C;
    // 0x80113BD8: sw          $t0, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->r8;
L_80113BDC:
    // 0x80113BDC: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    // 0x80113BE0: lw          $v0, 0x7C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X7C);
    // 0x80113BE4: beql        $v0, $zero, L_80113C20
    if (ctx->r2 == 0) {
        // 0x80113BE8: lw          $t3, 0xA8($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XA8);
            goto L_80113C20;
    }
    goto skip_4;
    // 0x80113BE8: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    skip_4:
    // 0x80113BEC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80113BF0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80113BF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80113BF8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80113BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80113C00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80113C04: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80113C08: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80113C0C: jal         0x80112E50
    // 0x80113C10: nop

    func_80112E50(rdram, ctx);
        goto after_15;
    // 0x80113C10: nop

    after_15:
    // 0x80113C14: lw          $t2, 0x28($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X28);
    // 0x80113C18: sw          $zero, 0x7C($t2)
    MEM_W(0X7C, ctx->r10) = 0;
L_80113C1C:
    // 0x80113C1C: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
L_80113C20:
    // 0x80113C20: beql        $t3, $zero, L_80113D1C
    if (ctx->r11 == 0) {
        // 0x80113C24: lwc1        $f0, 0x80($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
            goto L_80113D1C;
    }
    goto skip_5;
    // 0x80113C24: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    skip_5:
    // 0x80113C28: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80113C2C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80113C30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80113C34: lw          $t4, 0x44($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X44);
    // 0x80113C38: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80113C3C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80113C40: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x80113C44: bnel        $at, $zero, L_80113C58
    if (ctx->r1 != 0) {
        // 0x80113C48: lw          $t5, 0x3C($v0)
        ctx->r13 = MEM_W(ctx->r2, 0X3C);
            goto L_80113C58;
    }
    goto skip_6;
    // 0x80113C48: lw          $t5, 0x3C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X3C);
    skip_6:
    // 0x80113C4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80113C50: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80113C54: lw          $t5, 0x3C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X3C);
L_80113C58:
    // 0x80113C58: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80113C5C: bne         $at, $zero, L_80113C6C
    if (ctx->r1 != 0) {
        // 0x80113C60: nop
    
            goto L_80113C6C;
    }
    // 0x80113C60: nop

    // 0x80113C64: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80113C68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80113C6C:
    // 0x80113C6C: beq         $a0, $zero, L_80113D00
    if (ctx->r4 == 0) {
        // 0x80113C70: swc1        $f8, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
            goto L_80113D00;
    }
    // 0x80113C70: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80113C74: bne         $v1, $zero, L_80113CA0
    if (ctx->r3 != 0) {
        // 0x80113C78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80113CA0;
    }
    // 0x80113C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80113C7C: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80113C80: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80113C84: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80113C88: lw          $t7, 0x20($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X20);
    // 0x80113C8C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80113C90: beq         $at, $zero, L_80113CA0
    if (ctx->r1 == 0) {
        // 0x80113C94: nop
    
            goto L_80113CA0;
    }
    // 0x80113C94: nop

    // 0x80113C98: b           L_80113CA0
    // 0x80113C9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80113CA0;
    // 0x80113C9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80113CA0:
    // 0x80113CA0: bgez        $v1, L_80113CD8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80113CA4: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_80113CD8;
    }
    // 0x80113CA4: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80113CA8: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x80113CAC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80113CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80113CB4: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x80113CB8: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x80113CBC: addiu       $a3, $v0, 0x64
    ctx->r7 = ADD32(ctx->r2, 0X64);
    // 0x80113CC0: jal         0x801137E4
    // 0x80113CC4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_801137E4(rdram, ctx);
        goto after_16;
    // 0x80113CC4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_16:
    // 0x80113CC8: beq         $v0, $zero, L_80113D00
    if (ctx->r2 == 0) {
        // 0x80113CCC: lw          $t0, 0x3C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X3C);
            goto L_80113D00;
    }
    // 0x80113CCC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80113CD0: b           L_80113D00
    // 0x80113CD4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_80113D00;
    // 0x80113CD4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_80113CD8:
    // 0x80113CD8: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x80113CDC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80113CE0: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x80113CE4: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x80113CE8: addiu       $a3, $v0, 0x4C
    ctx->r7 = ADD32(ctx->r2, 0X4C);
    // 0x80113CEC: jal         0x801137E4
    // 0x80113CF0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_801137E4(rdram, ctx);
        goto after_17;
    // 0x80113CF0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_17:
    // 0x80113CF4: beq         $v0, $zero, L_80113D00
    if (ctx->r2 == 0) {
        // 0x80113CF8: lw          $t0, 0x3C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X3C);
            goto L_80113D00;
    }
    // 0x80113CF8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80113CFC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_80113D00:
    // 0x80113D00: beq         $t0, $zero, L_80113D18
    if (ctx->r8 == 0) {
        // 0x80113D04: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80113D18;
    }
    // 0x80113D04: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80113D08: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80113D0C: jal         0x800F0DC0
    // 0x80113D10: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    func_800F0DC0(rdram, ctx);
        goto after_18;
    // 0x80113D10: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_18:
    // 0x80113D14: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
L_80113D18:
    // 0x80113D18: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
L_80113D1C:
    // 0x80113D1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80113D20:
    // 0x80113D20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80113D24: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x80113D28: jr          $ra
    return;
;}
RECOMP_FUNC void func_80113D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80113D30: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80113D34: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80113D38: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80113D3C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80113D40: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80113D44: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80113D48: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80113D4C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80113D50: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80113D54: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80113D58: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80113D5C: jal         0x80110840
    // 0x80113D60: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80113D60: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x80113D64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80113D68: jal         0x80110898
    // 0x80113D6C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80110898(rdram, ctx);
        goto after_1;
    // 0x80113D6C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x80113D70: jal         0x8010FF80
    // 0x80113D74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FF80(rdram, ctx);
        goto after_2;
    // 0x80113D74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80113D78: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80113D7C: jal         0x800A940C
    // 0x80113D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A940C(rdram, ctx);
        goto after_3;
    // 0x80113D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80113D84: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
    // 0x80113D88: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x80113D8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80113D90: jal         0x80112550
    // 0x80113D94: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80112550(rdram, ctx);
        goto after_4;
    // 0x80113D94: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
    // 0x80113D98: addiu       $s2, $sp, 0x8C
    ctx->r18 = ADD32(ctx->r29, 0X8C);
    // 0x80113D9C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80113DA0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80113DA4: jal         0x800CA7E4
    // 0x80113DA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800CA7E4(rdram, ctx);
        goto after_5;
    // 0x80113DA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80113DAC: addiu       $s3, $sp, 0xB0
    ctx->r19 = ADD32(ctx->r29, 0XB0);
    // 0x80113DB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80113DB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80113DB8: jal         0x800EFB24
    // 0x80113DBC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800EFB24(rdram, ctx);
        goto after_6;
    // 0x80113DBC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_6:
    // 0x80113DC0: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x80113DC4: jal         0x800EF410
    // 0x80113DC8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EF410(rdram, ctx);
        goto after_7;
    // 0x80113DC8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_7:
    // 0x80113DCC: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x80113DD0: jal         0x800EE7F8
    // 0x80113DD4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_8;
    // 0x80113DD4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x80113DD8: jal         0x800CA7A4
    // 0x80113DDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800CA7A4(rdram, ctx);
        goto after_9;
    // 0x80113DDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80113DE0: jal         0x80018EFC
    // 0x80113DE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80018EFC(rdram, ctx);
        goto after_10;
    // 0x80113DE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x80113DE8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80113DEC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80113DF0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80113DF4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80113DF8: addiu       $s6, $sp, 0x74
    ctx->r22 = ADD32(ctx->r29, 0X74);
    // 0x80113DFC: addiu       $s3, $sp, 0x80
    ctx->r19 = ADD32(ctx->r29, 0X80);
L_80113E00:
    // 0x80113E00: beq         $s1, $zero, L_80113E28
    if (ctx->r17 == 0) {
        // 0x80113E04: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80113E28;
    }
    // 0x80113E04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80113E08: beq         $s1, $at, L_80113E48
    if (ctx->r17 == ctx->r1) {
        // 0x80113E0C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80113E48;
    }
    // 0x80113E0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80113E10: beq         $s1, $at, L_80113E64
    if (ctx->r17 == ctx->r1) {
        // 0x80113E14: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80113E64;
    }
    // 0x80113E14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80113E18: beql        $s1, $at, L_80113E84
    if (ctx->r17 == ctx->r1) {
        // 0x80113E1C: neg.s       $f6, $f22
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = -ctx->f22.fl;
            goto L_80113E84;
    }
    goto skip_0;
    // 0x80113E1C: neg.s       $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = -ctx->f22.fl;
    skip_0:
    // 0x80113E20: b           L_80113E9C
    // 0x80113E24: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_80113E9C;
    // 0x80113E24: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80113E28:
    // 0x80113E28: neg.s       $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = -ctx->f22.fl;
    // 0x80113E2C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80113E30: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80113E34: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80113E38: jal         0x800EFA4C
    // 0x80113E3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800EFA4C(rdram, ctx);
        goto after_11;
    // 0x80113E3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_11:
    // 0x80113E40: b           L_80113E9C
    // 0x80113E44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_80113E9C;
    // 0x80113E44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80113E48:
    // 0x80113E48: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80113E4C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80113E50: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80113E54: jal         0x800EFA4C
    // 0x80113E58: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800EFA4C(rdram, ctx);
        goto after_12;
    // 0x80113E58: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_12:
    // 0x80113E5C: b           L_80113E9C
    // 0x80113E60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_80113E9C;
    // 0x80113E60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80113E64:
    // 0x80113E64: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80113E68: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80113E6C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80113E70: jal         0x800EFA4C
    // 0x80113E74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800EFA4C(rdram, ctx);
        goto after_13;
    // 0x80113E74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_13:
    // 0x80113E78: b           L_80113E9C
    // 0x80113E7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_80113E9C;
    // 0x80113E7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80113E80: neg.s       $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = -ctx->f22.fl;
L_80113E84:
    // 0x80113E84: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80113E88: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80113E8C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80113E90: jal         0x800EFA4C
    // 0x80113E94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800EFA4C(rdram, ctx);
        goto after_14;
    // 0x80113E94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_14:
    // 0x80113E98: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80113E9C:
    // 0x80113E9C: jal         0x80019224
    // 0x80113EA0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019224(rdram, ctx);
        goto after_15;
    // 0x80113EA0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_15:
    // 0x80113EA4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80113EA8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80113EAC: jal         0x800EE780
    // 0x80113EB0: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    func_800EE780(rdram, ctx);
        goto after_16;
    // 0x80113EB0: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_16:
    // 0x80113EB4: lw          $t6, 0x28($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X28);
    // 0x80113EB8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80113EBC: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x80113EC0: jal         0x800E8830
    // 0x80113EC4: lbu         $a0, 0x34($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X34);
    func_800E8830(rdram, ctx);
        goto after_17;
    // 0x80113EC4: lbu         $a0, 0x34($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X34);
    after_17:
    // 0x80113EC8: lw          $s0, 0x28($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X28);
    // 0x80113ECC: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80113ED0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80113ED4: addu        $t8, $s0, $s1
    ctx->r24 = ADD32(ctx->r16, ctx->r17);
    // 0x80113ED8: addu        $a2, $s0, $s5
    ctx->r6 = ADD32(ctx->r16, ctx->r21);
    // 0x80113EDC: addiu       $a2, $a2, 0x4C
    ctx->r6 = ADD32(ctx->r6, 0X4C);
    // 0x80113EE0: jal         0x800E8918
    // 0x80113EE4: lbu         $a0, 0x34($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X34);
    func_800E8918(rdram, ctx);
        goto after_18;
    // 0x80113EE4: lbu         $a0, 0x34($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X34);
    after_18:
    // 0x80113EE8: lw          $t9, 0x28($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X28);
    // 0x80113EEC: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x80113EF0: sb          $v0, 0x38($t0)
    MEM_B(0X38, ctx->r8) = ctx->r2;
    // 0x80113EF4: lw          $s0, 0x28($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X28);
    // 0x80113EF8: addu        $t1, $s0, $s1
    ctx->r9 = ADD32(ctx->r16, ctx->r17);
    // 0x80113EFC: lb          $t2, 0x38($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X38);
    // 0x80113F00: addu        $v1, $s0, $s2
    ctx->r3 = ADD32(ctx->r16, ctx->r18);
    // 0x80113F04: addu        $t9, $s0, $s2
    ctx->r25 = ADD32(ctx->r16, ctx->r18);
    // 0x80113F08: bnel        $t2, $zero, L_80113F4C
    if (ctx->r10 != 0) {
        // 0x80113F0C: sw          $zero, 0x18($t9)
        MEM_W(0X18, ctx->r25) = 0;
            goto L_80113F4C;
    }
    goto skip_1;
    // 0x80113F0C: sw          $zero, 0x18($t9)
    MEM_W(0X18, ctx->r25) = 0;
    skip_1:
    // 0x80113F10: lw          $t3, 0x18($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X18);
    // 0x80113F14: bnel        $t3, $zero, L_80113F3C
    if (ctx->r11 != 0) {
        // 0x80113F18: lw          $t7, 0x3C($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X3C);
            goto L_80113F3C;
    }
    goto skip_2;
    // 0x80113F18: lw          $t7, 0x3C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X3C);
    skip_2:
    // 0x80113F1C: jal         0x8001211C
    // 0x80113F20: nop

    func_8001211C(rdram, ctx);
        goto after_19;
    // 0x80113F20: nop

    after_19:
    // 0x80113F24: lw          $t4, 0x28($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X28);
    // 0x80113F28: addu        $t5, $t4, $s2
    ctx->r13 = ADD32(ctx->r12, ctx->r18);
    // 0x80113F2C: sw          $v0, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r2;
    // 0x80113F30: lw          $t6, 0x28($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X28);
    // 0x80113F34: addu        $v1, $t6, $s2
    ctx->r3 = ADD32(ctx->r14, ctx->r18);
    // 0x80113F38: lw          $t7, 0x3C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X3C);
L_80113F3C:
    // 0x80113F3C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80113F40: b           L_80113F5C
    // 0x80113F44: sw          $t8, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r24;
        goto L_80113F5C;
    // 0x80113F44: sw          $t8, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r24;
    // 0x80113F48: sw          $zero, 0x18($t9)
    MEM_W(0X18, ctx->r25) = 0;
L_80113F4C:
    // 0x80113F4C: lw          $t0, 0x28($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X28);
    // 0x80113F50: addu        $v1, $t0, $s2
    ctx->r3 = ADD32(ctx->r8, ctx->r18);
    // 0x80113F54: lw          $t1, 0x18($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X18);
    // 0x80113F58: sw          $t1, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r9;
L_80113F5C:
    // 0x80113F5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80113F60: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80113F64: addiu       $s5, $s5, 0xC
    ctx->r21 = ADD32(ctx->r21, 0XC);
    // 0x80113F68: bne         $at, $zero, L_80113E00
    if (ctx->r1 != 0) {
        // 0x80113F6C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80113E00;
    }
    // 0x80113F6C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80113F70: lw          $t2, 0x28($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X28);
    // 0x80113F74: sh          $zero, 0xC($t2)
    MEM_H(0XC, ctx->r10) = 0;
    // 0x80113F78: lw          $t3, 0x28($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X28);
    // 0x80113F7C: lh          $s1, 0xC($t3)
    ctx->r17 = MEM_H(ctx->r11, 0XC);
    // 0x80113F80: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80113F84: beq         $at, $zero, L_80113FC0
    if (ctx->r1 == 0) {
        // 0x80113F88: sll         $s2, $s1, 2
        ctx->r18 = S32(ctx->r17 << 2);
            goto L_80113FC0;
    }
    // 0x80113F88: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x80113F8C: lw          $s0, 0x28($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X28);
L_80113F90:
    // 0x80113F90: addu        $t4, $s0, $s2
    ctx->r12 = ADD32(ctx->r16, ctx->r18);
    // 0x80113F94: lw          $t5, 0x3C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X3C);
    // 0x80113F98: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80113F9C: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80113FA0: bnel        $at, $zero, L_80113FB8
    if (ctx->r1 != 0) {
        // 0x80113FA4: slti        $at, $s2, 0x10
        ctx->r1 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
            goto L_80113FB8;
    }
    goto skip_3;
    // 0x80113FA4: slti        $at, $s2, 0x10
    ctx->r1 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    skip_3:
    // 0x80113FA8: lh          $t6, 0xC($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC);
    // 0x80113FAC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80113FB0: sh          $t7, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r15;
    // 0x80113FB4: slti        $at, $s2, 0x10
    ctx->r1 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
L_80113FB8:
    // 0x80113FB8: bnel        $at, $zero, L_80113F90
    if (ctx->r1 != 0) {
        // 0x80113FBC: lw          $s0, 0x28($s4)
        ctx->r16 = MEM_W(ctx->r20, 0X28);
            goto L_80113F90;
    }
    goto skip_4;
    // 0x80113FBC: lw          $s0, 0x28($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X28);
    skip_4:
L_80113FC0:
    // 0x80113FC0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80113FC4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80113FC8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80113FCC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80113FD0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80113FD4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80113FD8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80113FDC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80113FE0: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80113FE4: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80113FE8: jr          $ra
    // 0x80113FEC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x80113FEC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_80113FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80113FF0: lbu         $t6, 0x50($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X50);
    // 0x80113FF4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80113FF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80113FFC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80114000: beq         $t6, $zero, L_80114010
    if (ctx->r14 == 0) {
        // 0x80114004: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80114010;
    }
    // 0x80114004: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80114008: lwc1        $f0, 0x4C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8011400C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80114010:
    // 0x80114010: lbu         $t7, 0x5C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5C);
    // 0x80114014: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80114018: beql        $t7, $zero, L_80114044
    if (ctx->r15 == 0) {
        // 0x8011401C: lbu         $t8, 0x68($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X68);
            goto L_80114044;
    }
    goto skip_0;
    // 0x8011401C: lbu         $t8, 0x68($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X68);
    skip_0:
    // 0x80114020: beq         $v1, $a2, L_80114038
    if (ctx->r3 == ctx->r6) {
        // 0x80114024: lwc1        $f2, 0x58($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X58);
            goto L_80114038;
    }
    // 0x80114024: lwc1        $f2, 0x58($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X58);
    // 0x80114028: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8011402C: nop

    // 0x80114030: bc1fl       L_80114044
    if (!c1cs) {
        // 0x80114034: lbu         $t8, 0x68($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X68);
            goto L_80114044;
    }
    goto skip_1;
    // 0x80114034: lbu         $t8, 0x68($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X68);
    skip_1:
L_80114038:
    // 0x80114038: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8011403C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80114040: lbu         $t8, 0x68($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X68);
L_80114044:
    // 0x80114044: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80114048: beql        $t8, $zero, L_80114074
    if (ctx->r24 == 0) {
        // 0x8011404C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80114074;
    }
    goto skip_2;
    // 0x8011404C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_2:
    // 0x80114050: beq         $v1, $a2, L_80114068
    if (ctx->r3 == ctx->r6) {
        // 0x80114054: lwc1        $f2, 0x64($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X64);
            goto L_80114068;
    }
    // 0x80114054: lwc1        $f2, 0x64($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X64);
    // 0x80114058: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8011405C: nop

    // 0x80114060: bc1fl       L_80114074
    if (!c1cs) {
        // 0x80114064: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80114074;
    }
    goto skip_3;
    // 0x80114064: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_3:
L_80114068:
    // 0x80114068: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8011406C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80114070: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80114074:
    // 0x80114074: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80114078: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x8011407C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80114080: addu        $a1, $a0, $t9
    ctx->r5 = ADD32(ctx->r4, ctx->r25);
    // 0x80114084: lbu         $t0, 0x50($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X50);
    // 0x80114088: beql        $t0, $zero, L_801140B8
    if (ctx->r8 == 0) {
        // 0x8011408C: lbu         $t1, 0x5C($a1)
        ctx->r9 = MEM_BU(ctx->r5, 0X5C);
            goto L_801140B8;
    }
    goto skip_4;
    // 0x8011408C: lbu         $t1, 0x5C($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X5C);
    skip_4:
    // 0x80114090: beql        $v1, $a2, L_801140B0
    if (ctx->r3 == ctx->r6) {
        // 0x80114094: lwc1        $f0, 0x4C($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X4C);
            goto L_801140B0;
    }
    goto skip_5;
    // 0x80114094: lwc1        $f0, 0x4C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4C);
    skip_5:
    // 0x80114098: lwc1        $f4, 0x4C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x8011409C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x801140A0: nop

    // 0x801140A4: bc1fl       L_801140B8
    if (!c1cs) {
        // 0x801140A8: lbu         $t1, 0x5C($a1)
        ctx->r9 = MEM_BU(ctx->r5, 0X5C);
            goto L_801140B8;
    }
    goto skip_6;
    // 0x801140A8: lbu         $t1, 0x5C($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X5C);
    skip_6:
    // 0x801140AC: lwc1        $f0, 0x4C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4C);
L_801140B0:
    // 0x801140B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801140B4: lbu         $t1, 0x5C($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X5C);
L_801140B8:
    // 0x801140B8: beql        $t1, $zero, L_801140E4
    if (ctx->r9 == 0) {
        // 0x801140BC: lbu         $t2, 0x68($a1)
        ctx->r10 = MEM_BU(ctx->r5, 0X68);
            goto L_801140E4;
    }
    goto skip_7;
    // 0x801140BC: lbu         $t2, 0x68($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X68);
    skip_7:
    // 0x801140C0: beq         $v1, $a2, L_801140D8
    if (ctx->r3 == ctx->r6) {
        // 0x801140C4: lwc1        $f2, 0x58($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X58);
            goto L_801140D8;
    }
    // 0x801140C4: lwc1        $f2, 0x58($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X58);
    // 0x801140C8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801140CC: nop

    // 0x801140D0: bc1fl       L_801140E4
    if (!c1cs) {
        // 0x801140D4: lbu         $t2, 0x68($a1)
        ctx->r10 = MEM_BU(ctx->r5, 0X68);
            goto L_801140E4;
    }
    goto skip_8;
    // 0x801140D4: lbu         $t2, 0x68($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X68);
    skip_8:
L_801140D8:
    // 0x801140D8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801140DC: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x801140E0: lbu         $t2, 0x68($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X68);
L_801140E4:
    // 0x801140E4: beql        $t2, $zero, L_80114110
    if (ctx->r10 == 0) {
        // 0x801140E8: lbu         $t3, 0x74($a1)
        ctx->r11 = MEM_BU(ctx->r5, 0X74);
            goto L_80114110;
    }
    goto skip_9;
    // 0x801140E8: lbu         $t3, 0x74($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X74);
    skip_9:
    // 0x801140EC: beq         $v1, $a2, L_80114104
    if (ctx->r3 == ctx->r6) {
        // 0x801140F0: lwc1        $f2, 0x64($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X64);
            goto L_80114104;
    }
    // 0x801140F0: lwc1        $f2, 0x64($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X64);
    // 0x801140F4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801140F8: nop

    // 0x801140FC: bc1fl       L_80114110
    if (!c1cs) {
        // 0x80114100: lbu         $t3, 0x74($a1)
        ctx->r11 = MEM_BU(ctx->r5, 0X74);
            goto L_80114110;
    }
    goto skip_10;
    // 0x80114100: lbu         $t3, 0x74($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X74);
    skip_10:
L_80114104:
    // 0x80114104: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80114108: addiu       $v1, $v0, 0x2
    ctx->r3 = ADD32(ctx->r2, 0X2);
    // 0x8011410C: lbu         $t3, 0x74($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X74);
L_80114110:
    // 0x80114110: beq         $t3, $zero, L_80114134
    if (ctx->r11 == 0) {
        // 0x80114114: nop
    
            goto L_80114134;
    }
    // 0x80114114: nop

    // 0x80114118: beq         $v1, $a2, L_80114130
    if (ctx->r3 == ctx->r6) {
        // 0x8011411C: lwc1        $f2, 0x70($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X70);
            goto L_80114130;
    }
    // 0x8011411C: lwc1        $f2, 0x70($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X70);
    // 0x80114120: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80114124: nop

    // 0x80114128: bc1f        L_80114134
    if (!c1cs) {
        // 0x8011412C: nop
    
            goto L_80114134;
    }
    // 0x8011412C: nop

L_80114130:
    // 0x80114130: addiu       $v1, $v0, 0x3
    ctx->r3 = ADD32(ctx->r2, 0X3);
L_80114134:
    // 0x80114134: jr          $ra
    // 0x80114138: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80114138: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8011413C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011413C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80114140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80114144: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80114148: beq         $a3, $zero, L_80114160
    if (ctx->r7 == 0) {
        // 0x8011414C: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_80114160;
    }
    // 0x8011414C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80114150: jal         0x800CB0E8
    // 0x80114154: addiu       $a2, $a3, -0x1
    ctx->r6 = ADD32(ctx->r7, -0X1);
    func_800CB0E8(rdram, ctx);
        goto after_0;
    // 0x80114154: addiu       $a2, $a3, -0x1
    ctx->r6 = ADD32(ctx->r7, -0X1);
    after_0:
    // 0x80114158: b           L_8011416C
    // 0x8011415C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
        goto L_8011416C;
    // 0x8011415C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_80114160:
    // 0x80114160: jal         0x800CA740
    // 0x80114164: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800CA740(rdram, ctx);
        goto after_1;
    // 0x80114164: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80114168: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_8011416C:
    // 0x8011416C: jal         0x800EF334
    // 0x80114170: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800EF334(rdram, ctx);
        goto after_2;
    // 0x80114170: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80114174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80114178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8011417C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80114184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114184: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80114188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8011418C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80114190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80114194: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x80114198: bne         $a3, $zero, L_801141B0
    if (ctx->r7 != 0) {
        // 0x8011419C: sw          $a2, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r6;
            goto L_801141B0;
    }
    // 0x8011419C: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x801141A0: jal         0x80113FF0
    // 0x801141A4: nop

    func_80113FF0(rdram, ctx);
        goto after_0;
    // 0x801141A4: nop

    after_0:
    // 0x801141A8: b           L_80114394
    // 0x801141AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80114394;
    // 0x801141AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801141B0:
    // 0x801141B0: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x801141B4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801141B8: jal         0x800CA8F4
    // 0x801141BC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800CA8F4(rdram, ctx);
        goto after_1;
    // 0x801141BC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_1:
    // 0x801141C0: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
    // 0x801141C4: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x801141C8: addiu       $a1, $s0, 0x3C
    ctx->r5 = ADD32(ctx->r16, 0X3C);
    // 0x801141CC: beql        $t6, $zero, L_8011422C
    if (ctx->r14 == 0) {
        // 0x801141D0: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8011422C;
    }
    goto skip_0;
    // 0x801141D0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_0:
    // 0x801141D4: jal         0x800EEAA4
    // 0x801141D8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800EEAA4(rdram, ctx);
        goto after_2;
    // 0x801141D8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_2:
    // 0x801141DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801141E0: lwc1        $f4, 0x65E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X65E0);
    // 0x801141E4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x801141E8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801141EC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801141F0: nop

    // 0x801141F4: bc1fl       L_8011422C
    if (!c1cs) {
        // 0x801141F8: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8011422C;
    }
    goto skip_1;
    // 0x801141F8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_1:
    // 0x801141FC: jal         0x800EFB24
    // 0x80114200: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x80114200: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80114204: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80114208: jal         0x800EEAA4
    // 0x8011420C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EEAA4(rdram, ctx);
        goto after_4;
    // 0x8011420C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x80114210: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x80114214: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80114218: sb          $t0, 0x98($s0)
    MEM_B(0X98, ctx->r16) = ctx->r8;
    // 0x8011421C: swc1        $f0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f0.u32l;
    // 0x80114220: b           L_8011423C
    // 0x80114224: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
        goto L_8011423C;
    // 0x80114224: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    // 0x80114228: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_8011422C:
    // 0x8011422C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80114230: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x80114234: sb          $zero, 0x98($s0)
    MEM_B(0X98, ctx->r16) = 0;
    // 0x80114238: swc1        $f6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f6.u32l;
L_8011423C:
    // 0x8011423C: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80114240: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80114244: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x80114248: jal         0x8011413C
    // 0x8011424C: lh          $a3, 0x0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X0);
    func_8011413C(rdram, ctx);
        goto after_5;
    // 0x8011424C: lh          $a3, 0x0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X0);
    after_5:
    // 0x80114250: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x80114254: jal         0x800EF04C
    // 0x80114258: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_800EF04C(rdram, ctx);
        goto after_6;
    // 0x80114258: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_6:
    // 0x8011425C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80114260: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80114264: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x80114268: jal         0x800C6A7C
    // 0x8011426C: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    func_800C6A7C(rdram, ctx);
        goto after_7;
    // 0x8011426C: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    after_7:
    // 0x80114270: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80114274: beq         $v0, $zero, L_801142D8
    if (ctx->r2 == 0) {
        // 0x80114278: sw          $v0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r2;
            goto L_801142D8;
    }
    // 0x80114278: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8011427C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80114280: jal         0x800EEAD4
    // 0x80114284: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800EEAD4(rdram, ctx);
        goto after_8;
    // 0x80114284: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_8:
    // 0x80114288: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x8011428C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80114290: jal         0x800EF3DC
    // 0x80114294: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_800EF3DC(rdram, ctx);
        goto after_9;
    // 0x80114294: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x80114298: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x8011429C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x801142A0: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x801142A4: multu       $t1, $v0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801142A8: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801142AC: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x801142B0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801142B4: mflo        $t2
    ctx->r10 = lo;
    // 0x801142B8: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x801142BC: sw          $t9, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->r25;
    // 0x801142C0: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
    // 0x801142C4: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801142C8: mflo        $t5
    ctx->r13 = lo;
    // 0x801142CC: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x801142D0: b           L_8011430C
    // 0x801142D4: sb          $t0, 0x50($t6)
    MEM_B(0X50, ctx->r14) = ctx->r8;
        goto L_8011430C;
    // 0x801142D4: sb          $t0, 0x50($t6)
    MEM_B(0X50, ctx->r14) = ctx->r8;
L_801142D8:
    // 0x801142D8: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x801142DC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x801142E0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801142E4: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801142E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801142EC: mflo        $t8
    ctx->r24 = lo;
    // 0x801142F0: addu        $t1, $s0, $t8
    ctx->r9 = ADD32(ctx->r16, ctx->r24);
    // 0x801142F4: sw          $zero, 0x48($t1)
    MEM_W(0X48, ctx->r9) = 0;
    // 0x801142F8: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x801142FC: multu       $t2, $v0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80114300: mflo        $t9
    ctx->r25 = lo;
    // 0x80114304: addu        $t3, $s0, $t9
    ctx->r11 = ADD32(ctx->r16, ctx->r25);
    // 0x80114308: sb          $zero, 0x50($t3)
    MEM_B(0X50, ctx->r11) = 0;
L_8011430C:
    // 0x8011430C: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
    // 0x80114310: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80114314: ori         $a1, $a1, 0x20
    ctx->r5 = ctx->r5 | 0X20;
    // 0x80114318: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8011431C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80114320: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80114324: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    // 0x80114328: mflo        $t5
    ctx->r13 = lo;
    // 0x8011432C: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x80114330: swc1        $f2, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->f2.u32l;
    // 0x80114334: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x80114338: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8011433C: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x80114340: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x80114344: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x80114348: bnel        $at, $zero, L_80114358
    if (ctx->r1 != 0) {
        // 0x8011434C: sb          $zero, 0x2($s0)
        MEM_B(0X2, ctx->r16) = 0;
            goto L_80114358;
    }
    goto skip_2;
    // 0x8011434C: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    skip_2:
    // 0x80114350: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80114354: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
L_80114358:
    // 0x80114358: lw          $a0, 0x48($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X48);
    // 0x8011435C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80114360: beq         $a0, $zero, L_80114380
    if (ctx->r4 == 0) {
        // 0x80114364: and         $t2, $a0, $a1
        ctx->r10 = ctx->r4 & ctx->r5;
            goto L_80114380;
    }
    // 0x80114364: and         $t2, $a0, $a1
    ctx->r10 = ctx->r4 & ctx->r5;
    // 0x80114368: beq         $t2, $zero, L_80114378
    if (ctx->r10 == 0) {
        // 0x8011436C: nop
    
            goto L_80114378;
    }
    // 0x8011436C: nop

    // 0x80114370: b           L_80114380
    // 0x80114374: sb          $t0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r8;
        goto L_80114380;
    // 0x80114374: sb          $t0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r8;
L_80114378:
    // 0x80114378: b           L_80114388
    // 0x8011437C: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
        goto L_80114388;
    // 0x8011437C: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
L_80114380:
    // 0x80114380: bne         $v0, $a2, L_80114358
    if (ctx->r2 != ctx->r6) {
        // 0x80114384: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_80114358;
    }
    // 0x80114384: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_80114388:
    // 0x80114388: jal         0x80113FF0
    // 0x8011438C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80113FF0(rdram, ctx);
        goto after_10;
    // 0x8011438C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80114390: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80114394:
    // 0x80114394: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80114398: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8011439C: jr          $ra
    return;
;}
RECOMP_FUNC void func_801143A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801143A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801143A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801143AC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801143B0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x801143B4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801143B8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x801143BC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x801143C0: jal         0x800CA8F4
    // 0x801143C4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800CA8F4(rdram, ctx);
        goto after_0;
    // 0x801143C4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x801143C8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x801143CC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801143D0: jal         0x800EFB24
    // 0x801143D4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x801143D4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x801143D8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x801143DC: jal         0x800EEAA4
    // 0x801143E0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800EEAA4(rdram, ctx);
        goto after_2;
    // 0x801143E0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x801143E4: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801143E8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x801143EC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801143F0: sub.s       $f12, $f0, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x801143F4: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801143F8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801143FC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80114400: nop

    // 0x80114404: bc1fl       L_80114434
    if (!c1cs) {
        // 0x80114408: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80114434;
    }
    goto skip_0;
    // 0x80114408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8011440C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80114410: jal         0x800CACEC
    // 0x80114414: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_800CACEC(rdram, ctx);
        goto after_3;
    // 0x80114414: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x80114418: beq         $v0, $zero, L_80114430
    if (ctx->r2 == 0) {
        // 0x8011441C: lwc1        $f12, 0x18($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
            goto L_80114430;
    }
    // 0x8011441C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80114420: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80114424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80114428: b           L_80114434
    // 0x8011442C: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
        goto L_80114434;
    // 0x8011442C: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
L_80114430:
    // 0x80114430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80114434:
    // 0x80114434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80114438: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8011443C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80114444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80114448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8011444C: jal         0x800F5410
    // 0x80114450: nop

    func_800F5410(rdram, ctx);
        goto after_0;
    // 0x80114450: nop

    after_0:
    // 0x80114454: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80114458: bne         $v0, $at, L_8011446C
    if (ctx->r2 != ctx->r1) {
        // 0x8011445C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8011446C;
    }
    // 0x8011445C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80114460: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80114464: b           L_80114474
    // 0x80114468: lwc1        $f0, 0x65E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65E4);
        goto L_80114474;
    // 0x80114468: lwc1        $f0, 0x65E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65E4);
L_8011446C:
    // 0x8011446C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80114470: lwc1        $f0, 0x65E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65E8);
L_80114474:
    // 0x80114474: jr          $ra
    // 0x80114478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80114478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8011447C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011447C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80114480: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80114484: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80114488: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8011448C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80114490: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80114494: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80114498: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8011449C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801144A0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801144A4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801144A8: jal         0x800F5898
    // 0x801144AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_800F5898(rdram, ctx);
        goto after_0;
    // 0x801144AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x801144B0: blez        $v0, L_80114564
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801144B4: addiu       $s1, $sp, 0x4C
        ctx->r17 = ADD32(ctx->r29, 0X4C);
            goto L_80114564;
    }
    // 0x801144B4: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
L_801144B8:
    // 0x801144B8: jal         0x800F6BE4
    // 0x801144BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6BE4(rdram, ctx);
        goto after_1;
    // 0x801144BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801144C0: beq         $v0, $zero, L_80114550
    if (ctx->r2 == 0) {
        // 0x801144C4: nop
    
            goto L_80114550;
    }
    // 0x801144C4: nop

    // 0x801144C8: jal         0x800F6BE4
    // 0x801144CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6BE4(rdram, ctx);
        goto after_2;
    // 0x801144CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801144D0: beq         $v0, $zero, L_80114550
    if (ctx->r2 == 0) {
        // 0x801144D4: nop
    
            goto L_80114550;
    }
    // 0x801144D4: nop

    // 0x801144D8: jal         0x800F6438
    // 0x801144DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6438(rdram, ctx);
        goto after_3;
    // 0x801144DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801144E0: beq         $v0, $zero, L_80114550
    if (ctx->r2 == 0) {
        // 0x801144E4: nop
    
            goto L_80114550;
    }
    // 0x801144E4: nop

    // 0x801144E8: jal         0x800F6640
    // 0x801144EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6640(rdram, ctx);
        goto after_4;
    // 0x801144EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801144F0: beq         $v0, $zero, L_80114550
    if (ctx->r2 == 0) {
        // 0x801144F4: nop
    
            goto L_80114550;
    }
    // 0x801144F4: nop

    // 0x801144F8: jal         0x800F6690
    // 0x801144FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6690(rdram, ctx);
        goto after_5;
    // 0x801144FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80114500: beq         $v0, $zero, L_80114550
    if (ctx->r2 == 0) {
        // 0x80114504: nop
    
            goto L_80114550;
    }
    // 0x80114504: nop

    // 0x80114508: jal         0x800F5EF8
    // 0x8011450C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F5EF8(rdram, ctx);
        goto after_6;
    // 0x8011450C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80114510: jal         0x80110014
    // 0x80114514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110014(rdram, ctx);
        goto after_7;
    // 0x80114514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x80114518: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8011451C: jal         0x80112550
    // 0x80114520: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80112550(rdram, ctx);
        goto after_8;
    // 0x80114520: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x80114524: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80114528: jal         0x80114444
    // 0x8011452C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80114444(rdram, ctx);
        goto after_9;
    // 0x8011452C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80114530: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80114534: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80114538: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8011453C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x80114540: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80114544: jal         0x801143A4
    // 0x80114548: nop

    func_801143A4(rdram, ctx);
        goto after_10;
    // 0x80114548: nop

    after_10:
    // 0x8011454C: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
L_80114550:
    // 0x80114550: jal         0x800F5898
    // 0x80114554: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800F5898(rdram, ctx);
        goto after_11;
    // 0x80114554: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_11:
    // 0x80114558: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8011455C: bne         $at, $zero, L_801144B8
    if (ctx->r1 != 0) {
        // 0x80114560: nop
    
            goto L_801144B8;
    }
    // 0x80114560: nop

L_80114564:
    // 0x80114564: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80114568: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x8011456C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80114570: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80114574: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80114578: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8011457C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80114580: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80114584: jr          $ra
    // 0x80114588: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80114588: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8011458C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011458C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80114590: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80114594: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80114598: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8011459C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x801145A0: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x801145A4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x801145A8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x801145AC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x801145B0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x801145B4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801145B8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801145BC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801145C0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801145C4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801145C8: jal         0x800BE444
    // 0x801145CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800BE444(rdram, ctx);
        goto after_0;
    // 0x801145CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801145D0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801145D4: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x801145D8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x801145DC: beq         $t6, $zero, L_80114714
    if (ctx->r14 == 0) {
        // 0x801145E0: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_80114714;
    }
    // 0x801145E0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801145E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801145E8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801145EC: lwc1        $f22, 0x65EC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X65EC);
    // 0x801145F0: ori         $s5, $zero, 0xFFFF
    ctx->r21 = 0 | 0XFFFF;
    // 0x801145F4: addiu       $s2, $sp, 0x60
    ctx->r18 = ADD32(ctx->r29, 0X60);
L_801145F8:
    // 0x801145F8: jal         0x800E9E88
    // 0x801145FC: nop

    func_800E9E88(rdram, ctx);
        goto after_1;
    // 0x801145FC: nop

    after_1:
    // 0x80114600: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80114604: jal         0x800E9EB4
    // 0x80114608: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    func_800E9EB4(rdram, ctx);
        goto after_2;
    // 0x80114608: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    after_2:
    // 0x8011460C: sltu        $at, $s1, $v0
    ctx->r1 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x80114610: beq         $at, $zero, L_801146F8
    if (ctx->r1 == 0) {
        // 0x80114614: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_801146F8;
    }
    // 0x80114614: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80114618: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
L_8011461C:
    // 0x8011461C: sll         $t8, $v0, 27
    ctx->r24 = S32(ctx->r2 << 27);
    // 0x80114620: bgez        $t8, L_801146E8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80114624: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_801146E8;
    }
    // 0x80114624: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80114628: beq         $t9, $zero, L_801146E8
    if (ctx->r25 == 0) {
        // 0x8011462C: sll         $t1, $v0, 28
        ctx->r9 = S32(ctx->r2 << 28);
            goto L_801146E8;
    }
    // 0x8011462C: sll         $t1, $v0, 28
    ctx->r9 = S32(ctx->r2 << 28);
    // 0x80114630: bltzl       $t1, L_801146EC
    if (SIGNED(ctx->r9) < 0) {
        // 0x80114634: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_801146EC;
    }
    goto skip_0;
    // 0x80114634: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_0:
    // 0x80114638: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8011463C: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x80114640: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80114644: beql        $t3, $zero, L_801146EC
    if (ctx->r11 == 0) {
        // 0x80114648: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_801146EC;
    }
    goto skip_1;
    // 0x80114648: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_1:
    // 0x8011464C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80114650: beql        $v0, $zero, L_801146EC
    if (ctx->r2 == 0) {
        // 0x80114654: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_801146EC;
    }
    goto skip_2;
    // 0x80114654: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_2:
    // 0x80114658: beql        $s5, $v0, L_801146EC
    if (ctx->r21 == ctx->r2) {
        // 0x8011465C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_801146EC;
    }
    goto skip_3;
    // 0x8011465C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_3:
    // 0x80114660: jal         0x80106790
    // 0x80114664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80106790(rdram, ctx);
        goto after_3;
    // 0x80114664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80114668: lw          $t4, 0x94($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X94);
    // 0x8011466C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80114670: sll         $t6, $t4, 17
    ctx->r14 = S32(ctx->r12 << 17);
    // 0x80114674: bgezl       $t6, L_801146EC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80114678: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_801146EC;
    }
    goto skip_4;
    // 0x80114678: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_4:
    // 0x8011467C: lw          $t7, 0x64($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X64);
    // 0x80114680: sll         $t9, $t7, 14
    ctx->r25 = S32(ctx->r15 << 14);
    // 0x80114684: bltzl       $t9, L_801146EC
    if (SIGNED(ctx->r25) < 0) {
        // 0x80114688: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_801146EC;
    }
    goto skip_5;
    // 0x80114688: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_5:
    // 0x8011468C: jal         0x801072A8
    // 0x80114690: nop

    func_801072A8(rdram, ctx);
        goto after_4;
    // 0x80114690: nop

    after_4:
    // 0x80114694: bne         $v0, $zero, L_801146E8
    if (ctx->r2 != 0) {
        // 0x80114698: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801146E8;
    }
    // 0x80114698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8011469C: jal         0x800EC75C
    // 0x801146A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EC75C(rdram, ctx);
        goto after_5;
    // 0x801146A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x801146A4: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x801146A8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801146AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801146B0: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x801146B4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801146B8: jal         0x801143A4
    // 0x801146BC: nop

    func_801143A4(rdram, ctx);
        goto after_6;
    // 0x801146BC: nop

    after_6:
    // 0x801146C0: beql        $v0, $zero, L_801146EC
    if (ctx->r2 == 0) {
        // 0x801146C4: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_801146EC;
    }
    goto skip_6;
    // 0x801146C4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_6:
    // 0x801146C8: lwc1        $f6, 0x0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X0);
    // 0x801146CC: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x801146D0: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x801146D4: nop

    // 0x801146D8: bc1fl       L_801146EC
    if (!c1cs) {
        // 0x801146DC: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_801146EC;
    }
    goto skip_7;
    // 0x801146DC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_7:
    // 0x801146E0: b           L_801146F8
    // 0x801146E4: swc1        $f20, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f20.u32l;
        goto L_801146F8;
    // 0x801146E4: swc1        $f20, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f20.u32l;
L_801146E8:
    // 0x801146E8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_801146EC:
    // 0x801146EC: sltu        $at, $s1, $s4
    ctx->r1 = ctx->r17 < ctx->r20 ? 1 : 0;
    // 0x801146F0: bnel        $at, $zero, L_8011461C
    if (ctx->r1 != 0) {
        // 0x801146F4: lw          $v0, 0x8($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X8);
            goto L_8011461C;
    }
    goto skip_8;
    // 0x801146F4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    skip_8:
L_801146F8:
    // 0x801146F8: sltu        $at, $s1, $s4
    ctx->r1 = ctx->r17 < ctx->r20 ? 1 : 0;
    // 0x801146FC: bne         $at, $zero, L_80114714
    if (ctx->r1 != 0) {
        // 0x80114700: nop
    
            goto L_80114714;
    }
    // 0x80114700: nop

    // 0x80114704: lw          $a0, 0x4($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X4);
    // 0x80114708: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x8011470C: bne         $a0, $zero, L_801145F8
    if (ctx->r4 != 0) {
        // 0x80114710: nop
    
            goto L_801145F8;
    }
    // 0x80114710: nop

L_80114714:
    // 0x80114714: beq         $s7, $zero, L_8011473C
    if (ctx->r23 == 0) {
        // 0x80114718: or          $v0, $s7, $zero
        ctx->r2 = ctx->r23 | 0;
            goto L_8011473C;
    }
    // 0x80114718: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x8011471C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80114720: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80114724: lwc1        $f8, 0x0($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80114728: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8011472C: nop

    // 0x80114730: bc1fl       L_80114740
    if (!c1cs) {
        // 0x80114734: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_80114740;
    }
    goto skip_9;
    // 0x80114734: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_9:
    // 0x80114738: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
L_8011473C:
    // 0x8011473C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_80114740:
    // 0x80114740: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80114744: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80114748: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8011474C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80114750: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80114754: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80114758: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8011475C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80114760: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80114764: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80114768: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8011476C: jr          $ra
    // 0x80114770: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80114770: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80114774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114774: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80114778: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8011477C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80114780: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80114784: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80114788: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8011478C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80114790: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80114794: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80114798: jal         0x800F0E00
    // 0x8011479C: lwc1        $f14, 0xC($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0XC);
    func_800F0E00(rdram, ctx);
        goto after_0;
    // 0x8011479C: lwc1        $f14, 0xC($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0XC);
    after_0:
    // 0x801147A0: lui         $t7, 0x82
    ctx->r15 = S32(0X82 << 16);
    // 0x801147A4: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x801147A8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801147AC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801147B0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801147B4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801147B8: jal         0x80114184
    // 0x801147BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80114184(rdram, ctx);
        goto after_1;
    // 0x801147BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x801147C0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x801147C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801147C8: beq         $v0, $at, L_80114808
    if (ctx->r2 == ctx->r1) {
        // 0x801147CC: lwc1        $f20, 0xC($t8)
        ctx->f20.u32l = MEM_W(ctx->r24, 0XC);
            goto L_80114808;
    }
    // 0x801147CC: lwc1        $f20, 0xC($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0XC);
    // 0x801147D0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801147D4: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x801147D8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801147DC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x801147E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801147E4: lwc1        $f6, 0x65F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X65F0);
    // 0x801147E8: lwc1        $f4, 0x4C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x801147EC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801147F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801147F4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801147F8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801147FC: jal         0x800F13F0
    // 0x80114800: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800F13F0(rdram, ctx);
        goto after_2;
    // 0x80114800: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_2:
    // 0x80114804: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_80114808:
    // 0x80114808: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8011480C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80114810: jal         0x8011447C
    // 0x80114814: swc1        $f20, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f20.u32l;
    func_8011447C(rdram, ctx);
        goto after_3;
    // 0x80114814: swc1        $f20, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x80114818: beq         $v0, $zero, L_80114848
    if (ctx->r2 == 0) {
        // 0x8011481C: lwc1        $f14, 0x44($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
            goto L_80114848;
    }
    // 0x8011481C: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80114820: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80114824: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80114828: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x8011482C: nop

    // 0x80114830: bc1f        L_8011483C
    if (!c1cs) {
        // 0x80114834: nop
    
            goto L_8011483C;
    }
    // 0x80114834: nop

    // 0x80114838: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8011483C:
    // 0x8011483C: jal         0x800F13F0
    // 0x80114840: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    func_800F13F0(rdram, ctx);
        goto after_4;
    // 0x80114840: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x80114844: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_80114848:
    // 0x80114848: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8011484C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80114850: swc1        $f20, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f20.u32l;
    // 0x80114854: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80114858: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x8011485C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80114860: bc1f        L_80114884
    if (!c1cs) {
        // 0x80114864: nop
    
            goto L_80114884;
    }
    // 0x80114864: nop

    // 0x80114868: jal         0x8011458C
    // 0x8011486C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_8011458C(rdram, ctx);
        goto after_5;
    // 0x8011486C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_5:
    // 0x80114870: beq         $v0, $zero, L_80114884
    if (ctx->r2 == 0) {
        // 0x80114874: lwc1        $f14, 0x44($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
            goto L_80114884;
    }
    // 0x80114874: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80114878: jal         0x800F13F0
    // 0x8011487C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_800F13F0(rdram, ctx);
        goto after_6;
    // 0x8011487C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x80114880: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_80114884:
    // 0x80114884: jal         0x800C954C
    // 0x80114888: nop

    func_800C954C(rdram, ctx);
        goto after_7;
    // 0x80114888: nop

    after_7:
    // 0x8011488C: beql        $v0, $zero, L_801148BC
    if (ctx->r2 == 0) {
        // 0x80114890: lw          $t1, 0x48($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X48);
            goto L_801148BC;
    }
    goto skip_0;
    // 0x80114890: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    skip_0:
    // 0x80114894: jal         0x800C9588
    // 0x80114898: nop

    func_800C9588(rdram, ctx);
        goto after_8;
    // 0x80114898: nop

    after_8:
    // 0x8011489C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801148A0: lwc1        $f18, 0x65F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X65F4);
    // 0x801148A4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801148A8: mul.s       $f14, $f0, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x801148AC: jal         0x800F13F0
    // 0x801148B0: nop

    func_800F13F0(rdram, ctx);
        goto after_9;
    // 0x801148B0: nop

    after_9:
    // 0x801148B4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801148B8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
L_801148BC:
    // 0x801148BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801148C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801148C4: lbu         $t2, 0x2($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X2);
    // 0x801148C8: beql        $t2, $zero, L_801148E4
    if (ctx->r10 == 0) {
        // 0x801148CC: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801148E4;
    }
    goto skip_1;
    // 0x801148CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_1:
    // 0x801148D0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801148D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801148D8: b           L_801148EC
    // 0x801148DC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
        goto L_801148EC;
    // 0x801148DC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x801148E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801148E4:
    // 0x801148E4: nop

    // 0x801148E8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_801148EC:
    // 0x801148EC: nop

    // 0x801148F0: bc1fl       L_80114900
    if (!c1cs) {
        // 0x801148F4: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_80114900;
    }
    goto skip_2;
    // 0x801148F4: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_2:
    // 0x801148F8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x801148FC: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_80114900:
    // 0x80114900: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80114904: jr          $ra
    // 0x80114908: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80114908: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8011490C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011490C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80114910: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80114914: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80114918: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8011491C: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x80114920: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x80114924: jal         0x8010FF80
    // 0x80114928: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8010FF80(rdram, ctx);
        goto after_0;
    // 0x80114928: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8011492C: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x80114930: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80114934: jal         0x800BED18
    // 0x80114938: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    func_800BED18(rdram, ctx);
        goto after_1;
    // 0x80114938: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    after_1:
    // 0x8011493C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x80114940: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x80114944: jal         0x800CA8F4
    // 0x80114948: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    func_800CA8F4(rdram, ctx);
        goto after_2;
    // 0x80114948: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    after_2:
    // 0x8011494C: jal         0x800BCC58
    // 0x80114950: nop

    func_800BCC58(rdram, ctx);
        goto after_3;
    // 0x80114950: nop

    after_3:
    // 0x80114954: beq         $v0, $zero, L_80114A64
    if (ctx->r2 == 0) {
        // 0x80114958: addiu       $a0, $sp, 0x5C
        ctx->r4 = ADD32(ctx->r29, 0X5C);
            goto L_80114A64;
    }
    // 0x80114958: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x8011495C: jal         0x800EE84C
    // 0x80114960: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    func_800EE84C(rdram, ctx);
        goto after_4;
    // 0x80114960: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    after_4:
    // 0x80114964: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80114968: jal         0x800EE84C
    // 0x8011496C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    func_800EE84C(rdram, ctx);
        goto after_5;
    // 0x8011496C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    after_5:
    // 0x80114970: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80114974: jal         0x800BCC28
    // 0x80114978: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_800BCC28(rdram, ctx);
        goto after_6;
    // 0x80114978: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_6:
    // 0x8011497C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80114980: jal         0x800BCC28
    // 0x80114984: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_800BCC28(rdram, ctx);
        goto after_7;
    // 0x80114984: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_7:
    // 0x80114988: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8011498C: addiu       $v0, $sp, 0x7C
    ctx->r2 = ADD32(ctx->r29, 0X7C);
    // 0x80114990: addiu       $v1, $sp, 0x70
    ctx->r3 = ADD32(ctx->r29, 0X70);
    // 0x80114994: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80114998: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
L_8011499C:
    // 0x8011499C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801149A0: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801149A4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x801149A8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801149AC: nop

    // 0x801149B0: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801149B4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x801149B8: nop

    // 0x801149BC: bc1fl       L_801149E0
    if (!c1cs) {
        // 0x801149C0: lw          $t0, 0x0($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X0);
            goto L_801149E0;
    }
    goto skip_0;
    // 0x801149C0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x801149C4: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x801149C8: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x801149CC: nop

    // 0x801149D0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x801149D4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801149D8: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801149DC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
L_801149E0:
    // 0x801149E0: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801149E4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x801149E8: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x801149EC: nop

    // 0x801149F0: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801149F4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801149F8: nop

    // 0x801149FC: bc1fl       L_80114A20
    if (!c1cs) {
        // 0x80114A00: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_80114A20;
    }
    goto skip_1;
    // 0x80114A00: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_1:
    // 0x80114A04: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80114A08: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x80114A0C: nop

    // 0x80114A10: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80114A14: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x80114A18: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80114A1C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80114A20:
    // 0x80114A20: nop

    // 0x80114A24: bc1fl       L_80114A40
    if (!c1cs) {
        // 0x80114A28: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_80114A40;
    }
    goto skip_2;
    // 0x80114A28: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_2:
    // 0x80114A2C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x80114A30: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x80114A34: nop

    // 0x80114A38: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80114A3C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_80114A40:
    // 0x80114A40: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80114A44: bc1f        L_80114A5C
    if (!c1cs) {
        // 0x80114A48: nop
    
            goto L_80114A5C;
    }
    // 0x80114A48: nop

    // 0x80114A4C: trunc.w.s   $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80114A50: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80114A54: nop

    // 0x80114A58: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80114A5C:
    // 0x80114A5C: bne         $a0, $a2, L_8011499C
    if (ctx->r4 != ctx->r6) {
        // 0x80114A60: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8011499C;
    }
    // 0x80114A60: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80114A64:
    // 0x80114A64: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80114A68: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80114A6C: addiu       $a2, $sp, 0x94
    ctx->r6 = ADD32(ctx->r29, 0X94);
    // 0x80114A70: jal         0x800E36D0
    // 0x80114A74: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    func_800E36D0(rdram, ctx);
        goto after_8;
    // 0x80114A74: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    after_8:
    // 0x80114A78: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80114A7C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80114A80: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80114A84: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80114A88: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80114A8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80114A90: lui         $at, 0x46FA
    ctx->r1 = S32(0X46FA << 16);
    // 0x80114A94: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80114A98: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80114A9C: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x80114AA0: bc1fl       L_80114AB8
    if (!c1cs) {
        // 0x80114AA4: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_80114AB8;
    }
    goto skip_3;
    // 0x80114AA4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_3:
    // 0x80114AA8: swc1        $f2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f2.u32l;
    // 0x80114AAC: b           L_80114AD4
    // 0x80114AB0: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
        goto L_80114AD4;
    // 0x80114AB0: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80114AB4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_80114AB8:
    // 0x80114AB8: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80114ABC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80114AC0: nop

    // 0x80114AC4: bc1fl       L_80114AD8
    if (!c1cs) {
        // 0x80114AC8: lui         $at, 0x3C00
        ctx->r1 = S32(0X3C00 << 16);
            goto L_80114AD8;
    }
    goto skip_4;
    // 0x80114AC8: lui         $at, 0x3C00
    ctx->r1 = S32(0X3C00 << 16);
    skip_4:
    // 0x80114ACC: swc1        $f2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f2.u32l;
    // 0x80114AD0: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
L_80114AD4:
    // 0x80114AD4: lui         $at, 0x3C00
    ctx->r1 = S32(0X3C00 << 16);
L_80114AD8:
    // 0x80114AD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80114ADC: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80114AE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80114AE4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80114AE8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80114AEC: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x80114AF0: nop

    // 0x80114AF4: bc1f        L_80114B04
    if (!c1cs) {
        // 0x80114AF8: swc1        $f4, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
            goto L_80114B04;
    }
    // 0x80114AF8: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x80114AFC: b           L_80114B44
    // 0x80114B00: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
        goto L_80114B44;
    // 0x80114B00: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
L_80114B04:
    // 0x80114B04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80114B08: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80114B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80114B10: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x80114B14: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80114B18: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x80114B1C: bc1f        L_80114B2C
    if (!c1cs) {
        // 0x80114B20: nop
    
            goto L_80114B2C;
    }
    // 0x80114B20: nop

    // 0x80114B24: b           L_80114B44
    // 0x80114B28: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
        goto L_80114B44;
    // 0x80114B28: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_80114B2C:
    // 0x80114B2C: jal         0x80114774
    // 0x80114B30: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    func_80114774(rdram, ctx);
        goto after_9;
    // 0x80114B30: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    after_9:
    // 0x80114B34: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80114B38: jal         0x800F13F0
    // 0x80114B3C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F13F0(rdram, ctx);
        goto after_10;
    // 0x80114B3C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_10:
    // 0x80114B40: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_80114B44:
    // 0x80114B44: jal         0x800A940C
    // 0x80114B48: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    func_800A940C(rdram, ctx);
        goto after_11;
    // 0x80114B48: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_11:
    // 0x80114B4C: jal         0x800C5190
    // 0x80114B50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800C5190(rdram, ctx);
        goto after_12;
    // 0x80114B50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_12:
    // 0x80114B54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80114B58: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80114B5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80114B60: div.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80114B64: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x80114B68: nop

    // 0x80114B6C: bc1tl       L_80114B94
    if (c1cs) {
        // 0x80114B70: lwc1        $f8, 0x8($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
            goto L_80114B94;
    }
    goto skip_5;
    // 0x80114B70: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    skip_5:
    // 0x80114B74: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80114B78: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80114B7C: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80114B80: nop

    // 0x80114B84: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80114B88: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x80114B8C: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x80114B90: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
L_80114B94:
    // 0x80114B94: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80114B98: nop

    // 0x80114B9C: bc1fl       L_80114BC0
    if (!c1cs) {
        // 0x80114BA0: sb          $zero, 0x3($s0)
        MEM_B(0X3, ctx->r16) = 0;
            goto L_80114BC0;
    }
    goto skip_6;
    // 0x80114BA0: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    skip_6:
    // 0x80114BA4: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x80114BA8: beql        $t8, $zero, L_80114BC0
    if (ctx->r24 == 0) {
        // 0x80114BAC: sb          $zero, 0x3($s0)
        MEM_B(0X3, ctx->r16) = 0;
            goto L_80114BC0;
    }
    goto skip_7;
    // 0x80114BAC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    skip_7:
    // 0x80114BB0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80114BB4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80114BB8: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80114BBC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
L_80114BC0:
    // 0x80114BC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80114BC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80114BC8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x80114BCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80114BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80114BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80114BDC: jal         0x8001ACCC
    // 0x80114BE0: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x80114BE0: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    after_0:
    // 0x80114BE4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80114BE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80114BEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80114BF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80114BF4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80114BF8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80114BFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80114C00: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80114C04: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80114C08: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80114C0C: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x80114C10: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x80114C14: sb          $zero, 0x50($v0)
    MEM_B(0X50, ctx->r2) = 0;
    // 0x80114C18: sw          $zero, 0x54($v0)
    MEM_W(0X54, ctx->r2) = 0;
    // 0x80114C1C: sb          $zero, 0x5C($v0)
    MEM_B(0X5C, ctx->r2) = 0;
    // 0x80114C20: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x80114C24: sb          $zero, 0x68($v0)
    MEM_B(0X68, ctx->r2) = 0;
    // 0x80114C28: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x80114C2C: swc1        $f0, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f0.u32l;
    // 0x80114C30: swc1        $f0, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f0.u32l;
    // 0x80114C34: swc1        $f0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->f0.u32l;
    // 0x80114C38: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80114C3C: sb          $zero, 0x74($v1)
    MEM_B(0X74, ctx->r3) = 0;
    // 0x80114C40: sw          $zero, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = 0;
    // 0x80114C44: sb          $zero, 0x68($v1)
    MEM_B(0X68, ctx->r3) = 0;
    // 0x80114C48: sw          $zero, 0x60($v1)
    MEM_W(0X60, ctx->r3) = 0;
    // 0x80114C4C: sb          $zero, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = 0;
    // 0x80114C50: sw          $zero, 0x54($v1)
    MEM_W(0X54, ctx->r3) = 0;
    // 0x80114C54: sw          $zero, 0x48($v1)
    MEM_W(0X48, ctx->r3) = 0;
    // 0x80114C58: sb          $zero, 0x50($v1)
    MEM_B(0X50, ctx->r3) = 0;
    // 0x80114C5C: swc1        $f0, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f0.u32l;
    // 0x80114C60: swc1        $f0, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f0.u32l;
    // 0x80114C64: swc1        $f0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f0.u32l;
    // 0x80114C68: swc1        $f0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f0.u32l;
    // 0x80114C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80114C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80114C74: jr          $ra
    return;
;}
RECOMP_FUNC void func_80114C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80114C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80114C84: jal         0x8001B084
    // 0x80114C88: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x80114C88: nop

    after_0:
    // 0x80114C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80114C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80114C94: jr          $ra
    return;
;}
RECOMP_FUNC void func_80114C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114C9C: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80114CA0: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80114CA4: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80114CA8: jr          $ra
    // 0x80114CAC: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x80114CAC: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80114CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114CB0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80114CB4: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x80114CB8: jr          $ra
    // 0x80114CBC: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80114CBC: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80114CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114CC0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80114CC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80114CC8: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x80114CCC: jr          $ra
    // 0x80114CD0: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80114CD0: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80114CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114CD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80114CD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80114CDC: jal         0x8001BAFC
    // 0x80114CE0: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x80114CE0: nop

    after_0:
    // 0x80114CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80114CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80114CEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80114CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114CF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80114CF8: sll         $t7, $a2, 13
    ctx->r15 = S32(ctx->r6 << 13);
    // 0x80114CFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80114D00: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80114D04: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80114D08: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80114D0C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80114D10: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80114D14: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80114D18: bltz        $t7, L_80114D70
    if (SIGNED(ctx->r15) < 0) {
        // 0x80114D1C: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_80114D70;
    }
    // 0x80114D1C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80114D20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80114D24: addiu       $s1, $a0, 0x14
    ctx->r17 = ADD32(ctx->r4, 0X14);
    // 0x80114D28: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80114D2C: addiu       $s3, $zero, 0x24
    ctx->r19 = ADD32(0, 0X24);
L_80114D30:
    // 0x80114D30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80114D34: jal         0x800EE7F8
    // 0x80114D38: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80114D38: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80114D3C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80114D40: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80114D44: bne         $s0, $s3, L_80114D30
    if (ctx->r16 != ctx->r19) {
        // 0x80114D48: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80114D30;
    }
    // 0x80114D48: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80114D4C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80114D50: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80114D54: jal         0x800EE7F8
    // 0x80114D58: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80114D58: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    after_1:
    // 0x80114D5C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80114D60: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80114D64: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80114D68: sb          $t0, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r8;
    // 0x80114D6C: sw          $t8, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r24;
L_80114D70:
    // 0x80114D70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80114D74: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80114D78: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80114D7C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80114D80: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80114D84: jr          $ra
    // 0x80114D88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80114D88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80114D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114D90: jr          $ra
    // 0x80114D94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x80114D94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
;}
RECOMP_FUNC void func_80114D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114D98: beq         $a1, $zero, L_80114DA8
    if (ctx->r5 == 0) {
        // 0x80114D9C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80114DA8;
    }
    // 0x80114D9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80114DA0: bne         $a1, $at, L_80114DD0
    if (ctx->r5 != ctx->r1) {
        // 0x80114DA4: nop
    
            goto L_80114DD0;
    }
    // 0x80114DA4: nop

L_80114DA8:
    // 0x80114DA8: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x80114DAC: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80114DB0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80114DB4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80114DB8: sh          $t6, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r14;
    // 0x80114DBC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80114DC0: addu        $v1, $t9, $v0
    ctx->r3 = ADD32(ctx->r25, ctx->r2);
    // 0x80114DC4: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    // 0x80114DC8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80114DCC: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
L_80114DD0:
    // 0x80114DD0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80114DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80114DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80114DE0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80114DE4: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x80114DE8: bnel        $t6, $zero, L_80114E24
    if (ctx->r14 != 0) {
        // 0x80114DEC: lh          $t8, 0x6($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X6);
            goto L_80114E24;
    }
    goto skip_0;
    // 0x80114DEC: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    skip_0:
    // 0x80114DF0: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x80114DF4: lui         $a1, 0xC0A0
    ctx->r5 = S32(0XC0A0 << 16);
    // 0x80114DF8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80114DFC: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x80114E00: bnel        $at, $zero, L_80114E1C
    if (ctx->r1 != 0) {
        // 0x80114E04: sh          $zero, 0x0($v0)
        MEM_H(0X0, ctx->r2) = 0;
            goto L_80114E1C;
    }
    goto skip_1;
    // 0x80114E04: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    skip_1:
    // 0x80114E08: jal         0x80112E50
    // 0x80114E0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80112E50(rdram, ctx);
        goto after_0;
    // 0x80114E0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80114E10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80114E14: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80114E18: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_80114E1C:
    // 0x80114E1C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80114E20: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
L_80114E24:
    // 0x80114E24: bnel        $t8, $zero, L_80114E60
    if (ctx->r24 != 0) {
        // 0x80114E28: sh          $zero, 0x6($v0)
        MEM_H(0X6, ctx->r2) = 0;
            goto L_80114E60;
    }
    goto skip_2;
    // 0x80114E28: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    skip_2:
    // 0x80114E2C: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x80114E30: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x80114E34: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80114E38: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x80114E3C: bnel        $at, $zero, L_80114E58
    if (ctx->r1 != 0) {
        // 0x80114E40: sh          $zero, 0x2($v0)
        MEM_H(0X2, ctx->r2) = 0;
            goto L_80114E58;
    }
    goto skip_3;
    // 0x80114E40: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    skip_3:
    // 0x80114E44: jal         0x80112E50
    // 0x80114E48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80112E50(rdram, ctx);
        goto after_1;
    // 0x80114E48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80114E4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80114E50: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80114E54: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
L_80114E58:
    // 0x80114E58: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80114E5C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
L_80114E60:
    // 0x80114E60: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80114E64: lh          $t0, 0x6($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X6);
    // 0x80114E68: sh          $t0, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r8;
    // 0x80114E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80114E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80114E74: jr          $ra
    return;
;}
RECOMP_FUNC void func_80114E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114E80: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80114E84: addiu       $a1, $a1, 0x4A50
    ctx->r5 = ADD32(ctx->r5, 0X4A50);
    // 0x80114E88: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x80114E8C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80114E90: addiu       $t7, $t7, 0x4A50
    ctx->r15 = ADD32(ctx->r15, 0X4A50);
    // 0x80114E94: beq         $t6, $zero, L_80114ECC
    if (ctx->r14 == 0) {
        // 0x80114E98: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80114ECC;
    }
    // 0x80114E98: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80114E9C: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
L_80114EA0:
    // 0x80114EA0: bne         $a0, $v0, L_80114EBC
    if (ctx->r4 != ctx->r2) {
        // 0x80114EA4: subu        $v0, $v1, $a1
        ctx->r2 = SUB32(ctx->r3, ctx->r5);
            goto L_80114EBC;
    }
    // 0x80114EA4: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x80114EA8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80114EAC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80114EB0: mflo        $v0
    ctx->r2 = lo;
    // 0x80114EB4: jr          $ra
    // 0x80114EB8: nop

    return;
    // 0x80114EB8: nop

L_80114EBC:
    // 0x80114EBC: lbu         $v0, 0x5($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X5);
    // 0x80114EC0: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x80114EC4: bne         $v0, $zero, L_80114EA0
    if (ctx->r2 != 0) {
        // 0x80114EC8: nop
    
            goto L_80114EA0;
    }
    // 0x80114EC8: nop

L_80114ECC:
    // 0x80114ECC: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x80114ED0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80114ED4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80114ED8: mflo        $v0
    ctx->r2 = lo;
    // 0x80114EDC: nop

    // 0x80114EE0: nop

    // 0x80114EE4: jr          $ra
    // 0x80114EE8: nop

    return;
    // 0x80114EE8: nop

;}
RECOMP_FUNC void func_80114EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114EEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80114EF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80114EF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80114EF8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80114EFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80114F00: jal         0x80013970
    // 0x80114F04: lwc1        $f12, 0x10($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X10);
    func_80013970(rdram, ctx);
        goto after_0;
    // 0x80114F04: lwc1        $f12, 0x10($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X10);
    after_0:
    // 0x80114F08: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80114F0C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80114F10: nop

    // 0x80114F14: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80114F18: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80114F1C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80114F20: mul.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80114F24: jal         0x80013970
    // 0x80114F28: nop

    func_80013970(rdram, ctx);
        goto after_1;
    // 0x80114F28: nop

    after_1:
    // 0x80114F2C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80114F30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80114F34: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80114F38: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80114F3C: jal         0x800EA068
    // 0x80114F40: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    func_800EA068(rdram, ctx);
        goto after_2;
    // 0x80114F40: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80114F44: bnel        $v0, $zero, L_80114F94
    if (ctx->r2 != 0) {
        // 0x80114F48: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80114F94;
    }
    goto skip_0;
    // 0x80114F48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80114F4C: jal         0x80110014
    // 0x80114F50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80110014(rdram, ctx);
        goto after_3;
    // 0x80114F50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_3:
    // 0x80114F54: jal         0x80110840
    // 0x80114F58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110840(rdram, ctx);
        goto after_4;
    // 0x80114F58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80114F5C: jal         0x800A940C
    // 0x80114F60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800A940C(rdram, ctx);
        goto after_5;
    // 0x80114F60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x80114F64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80114F68: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80114F6C: jal         0x800C4B90
    // 0x80114F70: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_800C4B90(rdram, ctx);
        goto after_6;
    // 0x80114F70: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x80114F74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80114F78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80114F7C: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80114F80: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80114F84: sb          $t6, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r14;
    // 0x80114F88: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80114F8C: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x80114F90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80114F94:
    // 0x80114F94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80114F98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80114F9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80114FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80114FA4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80114FA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80114FAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80114FB0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80114FB4: lbu         $t6, 0xC($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XC);
    // 0x80114FB8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80114FBC: beql        $t6, $zero, L_801150E0
    if (ctx->r14 == 0) {
        // 0x80114FC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801150E0;
    }
    goto skip_0;
    // 0x80114FC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80114FC4: lbu         $t7, 0xE($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XE);
    // 0x80114FC8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80114FCC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80114FD0: beq         $t7, $zero, L_801150DC
    if (ctx->r15 == 0) {
        // 0x80114FD4: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_801150DC;
    }
    // 0x80114FD4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80114FD8: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80114FDC: lwc1        $f4, 0x6600($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6600);
    // 0x80114FE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80114FE4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80114FE8: nop

    // 0x80114FEC: bc1f        L_80115004
    if (!c1cs) {
        // 0x80114FF0: nop
    
            goto L_80115004;
    }
    // 0x80114FF0: nop

    // 0x80114FF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80114FF8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80114FFC: b           L_80115010
    // 0x80115000: nop

        goto L_80115010;
    // 0x80115000: nop

L_80115004:
    // 0x80115004: lwc1        $f6, 0x6604($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6604);
    // 0x80115008: mul.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8011500C: nop

L_80115010:
    // 0x80115010: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80115014: lwc1        $f8, 0x6608($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6608);
    // 0x80115018: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8011501C: addiu       $a3, $a3, 0x4A50
    ctx->r7 = ADD32(ctx->r7, 0X4A50);
    // 0x80115020: mul.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80115024: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80115028:
    // 0x80115028: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8011502C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80115030: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80115034: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80115038: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x8011503C: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x80115040: lbu         $v0, 0x1($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X1);
    // 0x80115044: negu        $t2, $v0
    ctx->r10 = SUB32(0, ctx->r2);
    // 0x80115048: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8011504C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80115050: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80115054: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80115058: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8011505C: bgezl       $v0, L_80115074
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80115060: add.s       $f10, $f18, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
            goto L_80115074;
    }
    goto skip_1;
    // 0x80115060: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    skip_1:
    // 0x80115064: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80115068: nop

    // 0x8011506C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80115070: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
L_80115074:
    // 0x80115074: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80115078: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8011507C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80115080: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x80115084: bne         $v1, $a1, L_80115028
    if (ctx->r3 != ctx->r5) {
        // 0x80115088: sw          $t4, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r12;
            goto L_80115028;
    }
    // 0x80115088: sw          $t4, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r12;
    // 0x8011508C: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x80115090: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80115094: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80115098: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8011509C: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x801150A0: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x801150A4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801150A8: bgez        $t8, L_801150BC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801150AC: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801150BC;
    }
    // 0x801150AC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801150B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801150B4: nop

    // 0x801150B8: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_801150BC:
    // 0x801150BC: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801150C0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801150C4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x801150C8: add.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x801150CC: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801150D0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801150D4: jal         0x800B99CC
    // 0x801150D8: nop

    func_800B99CC(rdram, ctx);
        goto after_0;
    // 0x801150D8: nop

    after_0:
L_801150DC:
    // 0x801150DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801150E0:
    // 0x801150E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801150E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801150E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801150F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801150F0: jr          $ra
    // 0x801150F4: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    return;
    // 0x801150F4: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
;}
RECOMP_FUNC void func_801150F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801150F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801150FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80115100: jal         0x8001B084
    // 0x80115104: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x80115104: nop

    after_0:
    // 0x80115108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8011510C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80115110: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115118: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8011511C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80115120: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80115124: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80115128: jal         0x8001ACCC
    // 0x8011512C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8011512C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x80115130: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80115134: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80115138: jal         0x800EA05C
    // 0x8011513C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x8011513C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_1:
    // 0x80115140: jal         0x80114E80
    // 0x80115144: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80114E80(rdram, ctx);
        goto after_2;
    // 0x80115144: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80115148: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8011514C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80115150: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80115154: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80115158: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8011515C: sb          $t7, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r15;
    // 0x80115160: jal         0x800EA05C
    // 0x80115164: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    func_800EA05C(rdram, ctx);
        goto after_3;
    // 0x80115164: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x80115168: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8011516C: addiu       $v1, $a0, 0x4A58
    ctx->r3 = ADD32(ctx->r4, 0X4A58);
    // 0x80115170: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80115174: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80115178: addiu       $t9, $t9, 0x4A58
    ctx->r25 = ADD32(ctx->r25, 0X4A58);
    // 0x8011517C: beq         $t8, $zero, L_801151B0
    if (ctx->r24 == 0) {
        // 0x80115180: sll         $a1, $v0, 16
        ctx->r5 = S32(ctx->r2 << 16);
            goto L_801151B0;
    }
    // 0x80115180: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80115184: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80115188: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8011518C: lh          $a0, 0x0($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X0);
L_80115190:
    // 0x80115190: bnel        $a1, $a0, L_801151A4
    if (ctx->r5 != ctx->r4) {
        // 0x80115194: lh          $a0, 0x2($v1)
        ctx->r4 = MEM_H(ctx->r3, 0X2);
            goto L_801151A4;
    }
    goto skip_0;
    // 0x80115194: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
    skip_0:
    // 0x80115198: b           L_801151B0
    // 0x8011519C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_801151B0;
    // 0x8011519C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x801151A0: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
L_801151A4:
    // 0x801151A4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x801151A8: bne         $a0, $zero, L_80115190
    if (ctx->r4 != 0) {
        // 0x801151AC: nop
    
            goto L_80115190;
    }
    // 0x801151AC: nop

L_801151B0:
    // 0x801151B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801151B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x801151B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801151BC: jr          $ra
    // 0x801151C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x801151C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801151C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801151C4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801151C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801151CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801151D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801151D4: jal         0x8010FF80
    // 0x801151D8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_8010FF80(rdram, ctx);
        goto after_0;
    // 0x801151D8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x801151DC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x801151E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801151E4: jal         0x800CA7E4
    // 0x801151E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800CA7E4(rdram, ctx);
        goto after_1;
    // 0x801151E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x801151EC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x801151F0: jal         0x800BEAAC
    // 0x801151F4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800BEAAC(rdram, ctx);
        goto after_2;
    // 0x801151F4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x801151F8: bne         $v0, $zero, L_80115270
    if (ctx->r2 != 0) {
        // 0x801151FC: lwc1        $f10, 0x40($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80115270;
    }
    // 0x801151FC: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80115200: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80115204: lwc1        $f6, 0x660C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X660C);
    // 0x80115208: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8011520C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80115210: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80115214: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80115218: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8011521C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80115220: jal         0x800EFA4C
    // 0x80115224: nop

    func_800EFA4C(rdram, ctx);
        goto after_3;
    // 0x80115224: nop

    after_3:
    // 0x80115228: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8011522C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80115230: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x80115234: jal         0x800BEF00
    // 0x80115238: addiu       $a3, $zero, 0x1F00
    ctx->r7 = ADD32(0, 0X1F00);
    func_800BEF00(rdram, ctx);
        goto after_4;
    // 0x80115238: addiu       $a3, $zero, 0x1F00
    ctx->r7 = ADD32(0, 0X1F00);
    after_4:
    // 0x8011523C: beq         $v0, $zero, L_80115268
    if (ctx->r2 == 0) {
        // 0x80115240: nop
    
            goto L_80115268;
    }
    // 0x80115240: nop

    // 0x80115244: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x80115248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8011524C: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x80115250: bgez        $t7, L_80115260
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80115254: nop
    
            goto L_80115260;
    }
    // 0x80115254: nop

    // 0x80115258: b           L_80115260
    // 0x8011525C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80115260;
    // 0x8011525C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80115260:
    // 0x80115260: b           L_801152E8
    // 0x80115264: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
        goto L_801152E8;
    // 0x80115264: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80115268:
    // 0x80115268: b           L_801152E8
    // 0x8011526C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_801152E8;
    // 0x8011526C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_80115270:
    // 0x80115270: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80115274: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80115278: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8011527C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80115280: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x80115284: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80115288: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8011528C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80115290: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x80115294: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80115298: addiu       $a3, $zero, 0x1F00
    ctx->r7 = ADD32(0, 0X1F00);
    // 0x8011529C: jal         0x800BEF00
    // 0x801152A0: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    func_800BEF00(rdram, ctx);
        goto after_5;
    // 0x801152A0: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x801152A4: beq         $v0, $zero, L_801152BC
    if (ctx->r2 == 0) {
        // 0x801152A8: lwc1        $f8, 0x30($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
            goto L_801152BC;
    }
    // 0x801152A8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801152AC: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x801152B0: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x801152B4: bltzl       $t9, L_801152C4
    if (SIGNED(ctx->r25) < 0) {
        // 0x801152B8: lwc1        $f10, 0x38($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
            goto L_801152C4;
    }
    goto skip_0;
    // 0x801152B8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    skip_0:
L_801152BC:
    // 0x801152BC: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x801152C0: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
L_801152C4:
    // 0x801152C4: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801152C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801152CC: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x801152D0: nop

    // 0x801152D4: bc1fl       L_801152E8
    if (!c1cs) {
        // 0x801152D8: sb          $zero, 0xC($s0)
        MEM_B(0XC, ctx->r16) = 0;
            goto L_801152E8;
    }
    goto skip_1;
    // 0x801152D8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    skip_1:
    // 0x801152DC: b           L_801152E8
    // 0x801152E0: sb          $t0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r8;
        goto L_801152E8;
    // 0x801152E0: sb          $t0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r8;
    // 0x801152E4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_801152E8:
    // 0x801152E8: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
    // 0x801152EC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801152F0: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801152F4: beql        $t1, $zero, L_80115314
    if (ctx->r9 == 0) {
        // 0x801152F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80115314;
    }
    goto skip_2;
    // 0x801152F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801152FC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80115300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80115304: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x80115308: jal         0x80114EEC
    // 0x8011530C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80114EEC(rdram, ctx);
        goto after_6;
    // 0x8011530C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x80115310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80115314:
    // 0x80115314: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80115318: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8011531C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80115328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8011532C: jal         0x8001BAFC
    // 0x80115330: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    defrag(rdram, ctx);
        goto after_0;
    // 0x80115330: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    after_0:
    // 0x80115334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80115338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8011533C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115350: jr          $ra
    // 0x80115354: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x80115354: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void func_80115358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115358: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8011535C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80115360: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80115364: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80115368: nop

    // 0x8011536C: bc1fl       L_80115380
    if (!c1cs) {
        // 0x80115370: lwc1        $f0, 0x10($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
            goto L_80115380;
    }
    goto skip_0;
    // 0x80115370: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x80115374: jr          $ra
    // 0x80115378: nop

    return;
    // 0x80115378: nop

    // 0x8011537C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
L_80115380:
    // 0x80115380: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80115384: nop

    // 0x80115388: bc1f        L_80115394
    if (!c1cs) {
        // 0x8011538C: nop
    
            goto L_80115394;
    }
    // 0x8011538C: nop

    // 0x80115390: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80115394:
    // 0x80115394: jr          $ra
    // 0x80115398: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x80115398: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void func_8011539C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011539C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801153A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801153A4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801153A8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801153AC: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801153B0: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x801153B4: swc1        $f14, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f14.u32l;
    // 0x801153B8: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x801153BC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801153C0: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    // 0x801153C4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801153C8: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x801153CC: swc1        $f6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f6.u32l;
    // 0x801153D0: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801153D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801153D8: mul.s       $f2, $f8, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x801153DC: nop

    // 0x801153E0: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801153E4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x801153E8: jal         0x8002DCA0
    // 0x801153EC: add.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f2.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x801153EC: add.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f2.fl;
    after_0:
    // 0x801153F0: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801153F4: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801153F8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801153FC: mul.s       $f16, $f14, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80115400: jal         0x8002DCA0
    // 0x80115404: add.s       $f12, $f16, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f2.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x80115404: add.s       $f12, $f16, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f2.fl;
    after_1:
    // 0x80115408: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8011540C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80115410: jal         0x80115428
    // 0x80115414: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_80115428(rdram, ctx);
        goto after_2;
    // 0x80115414: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80115418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8011541C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80115420: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115428: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8011542C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80115430: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80115434: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
    // 0x80115438: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x8011543C: jr          $ra
    // 0x80115440: swc1        $f14, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x80115440: swc1        $f14, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_80115444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115444: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80115448: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x8011544C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80115450: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x80115454: lwc1        $f6, 0x10($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X10);
    // 0x80115458: jr          $ra
    // 0x8011545C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x8011545C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80115460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115460: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80115464: jr          $ra
    // 0x80115468: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    return;
    // 0x80115468: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
;}
RECOMP_FUNC void func_8011546C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011546C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80115470: jr          $ra
    // 0x80115474: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    return;
    // 0x80115474: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_80115478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115478: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x8011547C: jr          $ra
    // 0x80115480: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    return;
    // 0x80115480: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_80115484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80115488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8011548C: jal         0x80112524
    // 0x80115490: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80115490: nop

    after_0:
    // 0x80115494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80115498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8011549C: jr          $ra
    return;
;}
RECOMP_FUNC void func_801154A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801154A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801154A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801154AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801154B0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x801154B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801154B8: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801154BC: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801154C0: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x801154C4: nop

    // 0x801154C8: bc1fl       L_80115544
    if (!c1cs) {
        // 0x801154CC: swc1        $f2, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
            goto L_80115544;
    }
    goto skip_0;
    // 0x801154CC: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    skip_0:
    // 0x801154D0: jal         0x80115484
    // 0x801154D4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80115484(rdram, ctx);
        goto after_0;
    // 0x801154D4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x801154D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801154DC: jal         0x801107F0
    // 0x801154E0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x801154E0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x801154E4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801154E8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x801154EC: jal         0x800EFB24
    // 0x801154F0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x801154F0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x801154F4: jal         0x800EEF94
    // 0x801154F8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x801154F8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x801154FC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80115500: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80115504: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80115508: nop

    // 0x8011550C: bc1fl       L_80115524
    if (!c1cs) {
        // 0x80115510: lwc1        $f6, 0xC($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80115524;
    }
    goto skip_1;
    // 0x80115510: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x80115514: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x80115518: b           L_80115548
    // 0x8011551C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80115548;
    // 0x8011551C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80115520: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
L_80115524:
    // 0x80115524: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80115528: nop

    // 0x8011552C: bc1fl       L_8011554C
    if (!c1cs) {
        // 0x80115530: lwc1        $f8, 0x18($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
            goto L_8011554C;
    }
    goto skip_2;
    // 0x80115530: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    skip_2:
    // 0x80115534: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80115538: b           L_80115548
    // 0x8011553C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80115548;
    // 0x8011553C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80115540: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
L_80115544:
    // 0x80115544: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_80115548:
    // 0x80115548: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
L_8011554C:
    // 0x8011554C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x80115550: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80115554: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80115558: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8011555C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115564: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80115568: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8011556C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x80115570: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80115574: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80115578: jr          $ra
    // 0x8011557C: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    return;
    // 0x8011557C: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80115580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115580: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80115584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80115588: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8011558C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80115590: jal         0x801107F0
    // 0x80115594: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x80115594: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80115598: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8011559C: jal         0x800EEB40
    // 0x801155A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EEB40(rdram, ctx);
        goto after_1;
    // 0x801155A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x801155A4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x801155A8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801155AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801155B0: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x801155B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801155B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801155BC: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x801155C0: mul.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801155C4: nop

    // 0x801155C8: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801155CC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x801155D0: nop

    // 0x801155D4: bc1f        L_801155E0
    if (!c1cs) {
        // 0x801155D8: nop
    
            goto L_801155E0;
    }
    // 0x801155D8: nop

    // 0x801155DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801155E0:
    // 0x801155E0: jr          $ra
    // 0x801155E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x801155E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801155E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801155E8: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x801155EC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801155F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801155F4: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x801155F8: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801155FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115610: jr          $ra
    // 0x80115614: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    return;
    // 0x80115614: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
;}
RECOMP_FUNC void func_80115618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115618: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8011561C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80115620: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80115624: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80115628: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8011562C: jal         0x80110840
    // 0x80115630: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80115630: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    after_0:
    // 0x80115634: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80115638: jal         0x800F6C5C
    // 0x8011563C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6C5C(rdram, ctx);
        goto after_1;
    // 0x8011563C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80115640: beq         $v0, $zero, L_8011573C
    if (ctx->r2 == 0) {
        // 0x80115644: lw          $a0, 0x3C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X3C);
            goto L_8011573C;
    }
    // 0x80115644: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80115648: jal         0x800F5680
    // 0x8011564C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800F5680(rdram, ctx);
        goto after_2;
    // 0x8011564C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_2:
    // 0x80115650: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80115654: lwc1        $f4, 0x6610($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6610);
    // 0x80115658: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8011565C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80115660: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80115664: nop

    // 0x80115668: bc1fl       L_80115740
    if (!c1cs) {
        // 0x8011566C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80115740;
    }
    goto skip_0;
    // 0x8011566C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80115670: jal         0x801107B0
    // 0x80115674: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_801107B0(rdram, ctx);
        goto after_3;
    // 0x80115674: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x80115678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8011567C: jal         0x801107F0
    // 0x80115680: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_801107F0(rdram, ctx);
        goto after_4;
    // 0x80115680: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x80115684: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80115688: jal         0x800EF3DC
    // 0x8011568C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800EF3DC(rdram, ctx);
        goto after_5;
    // 0x8011568C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x80115690: jal         0x800EF2A0
    // 0x80115694: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_800EF2A0(rdram, ctx);
        goto after_6;
    // 0x80115694: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x80115698: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8011569C: jal         0x800EEAA4
    // 0x801156A0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800EEAA4(rdram, ctx);
        goto after_7;
    // 0x801156A0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_7:
    // 0x801156A4: jal         0x80013A7C
    // 0x801156A8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80013A7C(rdram, ctx);
        goto after_8;
    // 0x801156A8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_8:
    // 0x801156AC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x801156B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801156B4: jal         0x800F1DCC
    // 0x801156B8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_9;
    // 0x801156B8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_9:
    // 0x801156BC: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801156C0: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801156C4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801156C8: jal         0x80013728
    // 0x801156CC: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    func_80013728(rdram, ctx);
        goto after_10;
    // 0x801156CC: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_10:
    // 0x801156D0: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x801156D4: lbu         $t6, 0x11($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X11);
    // 0x801156D8: beql        $t6, $zero, L_80115704
    if (ctx->r14 == 0) {
        // 0x801156DC: swc1        $f0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
            goto L_80115704;
    }
    goto skip_1;
    // 0x801156DC: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    skip_1:
    // 0x801156E0: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801156E4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801156E8: nop

    // 0x801156EC: bc1fl       L_80115718
    if (!c1cs) {
        // 0x801156F0: lbu         $t9, 0x12($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0X12);
            goto L_80115718;
    }
    goto skip_2;
    // 0x801156F0: lbu         $t9, 0x12($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X12);
    skip_2:
    // 0x801156F4: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x801156F8: b           L_80115714
    // 0x801156FC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
        goto L_80115714;
    // 0x801156FC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80115700: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_80115704:
    // 0x80115704: lw          $t8, 0x3C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3C);
    // 0x80115708: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8011570C: sb          $t7, 0x11($t8)
    MEM_B(0X11, ctx->r24) = ctx->r15;
    // 0x80115710: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
L_80115714:
    // 0x80115714: lbu         $t9, 0x12($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X12);
L_80115718:
    // 0x80115718: beql        $t9, $zero, L_80115740
    if (ctx->r25 == 0) {
        // 0x8011571C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80115740;
    }
    goto skip_3;
    // 0x8011571C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x80115720: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80115724: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80115728: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8011572C: nop

    // 0x80115730: bc1fl       L_80115740
    if (!c1cs) {
        // 0x80115734: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80115740;
    }
    goto skip_4;
    // 0x80115734: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x80115738: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_8011573C:
    // 0x8011573C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80115740:
    // 0x80115740: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80115744: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80115748: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115750: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80115754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80115758: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8011575C: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x80115760: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x80115764: lbu         $t6, 0x10($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X10);
    // 0x80115768: beql        $t6, $zero, L_80115798
    if (ctx->r14 == 0) {
        // 0x8011576C: lwc1        $f4, 0x4($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80115798;
    }
    goto skip_0;
    // 0x8011576C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x80115770: lbu         $t7, 0x1C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1C);
    // 0x80115774: bnel        $t7, $zero, L_80115798
    if (ctx->r15 != 0) {
        // 0x80115778: lwc1        $f4, 0x4($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80115798;
    }
    goto skip_1;
    // 0x80115778: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x8011577C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80115780: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80115784: jal         0x80115618
    // 0x80115788: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80115618(rdram, ctx);
        goto after_0;
    // 0x80115788: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x8011578C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80115790: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x80115794: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
L_80115798:
    // 0x80115798: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8011579C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801157A0: lbu         $t8, 0x11($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X11);
    // 0x801157A4: beql        $t8, $zero, L_801157E0
    if (ctx->r24 == 0) {
        // 0x801157A8: lw          $t9, 0x3C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X3C);
            goto L_801157E0;
    }
    goto skip_2;
    // 0x801157A8: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    skip_2:
    // 0x801157AC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801157B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801157B4: jal         0x800F1DCC
    // 0x801157B8: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_800F1DCC(rdram, ctx);
        goto after_1;
    // 0x801157B8: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x801157BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801157C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801157C4: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801157C8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801157CC: nop

    // 0x801157D0: bc1fl       L_801157E0
    if (!c1cs) {
        // 0x801157D4: lw          $t9, 0x3C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X3C);
            goto L_801157E0;
    }
    goto skip_3;
    // 0x801157D4: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    skip_3:
    // 0x801157D8: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x801157DC: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
L_801157E0:
    // 0x801157E0: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801157E4: lbu         $t0, 0x12($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X12);
    // 0x801157E8: beql        $t0, $zero, L_80115818
    if (ctx->r8 == 0) {
        // 0x801157EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80115818;
    }
    goto skip_4;
    // 0x801157EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x801157F0: jal         0x800F1DCC
    // 0x801157F4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800F1DCC(rdram, ctx);
        goto after_2;
    // 0x801157F4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x801157F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801157FC: nop

    // 0x80115800: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80115804: nop

    // 0x80115808: bc1fl       L_80115818
    if (!c1cs) {
        // 0x8011580C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80115818;
    }
    goto skip_5;
    // 0x8011580C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x80115810: lwc1        $f20, 0x20($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80115814: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80115818:
    // 0x80115818: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x8011581C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80115820: jr          $ra
    // 0x80115824: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80115824: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80115828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115828: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8011582C: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80115830: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80115834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80115838: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x8011583C: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80115840: swc1        $f14, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f14.u32l;
    // 0x80115844: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x80115848: sb          $v0, 0x11($t8)
    MEM_B(0X11, ctx->r24) = ctx->r2;
    // 0x8011584C: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x80115850: jr          $ra
    // 0x80115854: sb          $v0, 0x12($t9)
    MEM_B(0X12, ctx->r25) = ctx->r2;
    return;
    // 0x80115854: sb          $v0, 0x12($t9)
    MEM_B(0X12, ctx->r25) = ctx->r2;
;}
RECOMP_FUNC void func_80115858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115858: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x8011585C: jr          $ra
    // 0x80115860: sw          $a1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r5;
    return;
    // 0x80115860: sw          $a1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80115864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115864: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80115868: jr          $ra
    // 0x8011586C: sb          $a1, 0x1C($t6)
    MEM_B(0X1C, ctx->r14) = ctx->r5;
    return;
    // 0x8011586C: sb          $a1, 0x1C($t6)
    MEM_B(0X1C, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80115870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115870: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80115874: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80115878: nop

    // 0x8011587C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80115880: nop

    // 0x80115884: bc1fl       L_8011589C
    if (!c1cs) {
        // 0x80115888: lw          $t8, 0x3C($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X3C);
            goto L_8011589C;
    }
    goto skip_0;
    // 0x80115888: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    skip_0:
    // 0x8011588C: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80115890: b           L_801158A4
    // 0x80115894: sb          $zero, 0x10($t6)
    MEM_B(0X10, ctx->r14) = 0;
        goto L_801158A4;
    // 0x80115894: sb          $zero, 0x10($t6)
    MEM_B(0X10, ctx->r14) = 0;
    // 0x80115898: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
L_8011589C:
    // 0x8011589C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801158A0: sb          $t7, 0x10($t8)
    MEM_B(0X10, ctx->r24) = ctx->r15;
L_801158A4:
    // 0x801158A4: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x801158A8: jr          $ra
    // 0x801158AC: swc1        $f12, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f12.u32l;
    return;
    // 0x801158AC: swc1        $f12, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_801158B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801158B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801158B4: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x801158B8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801158BC: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
    // 0x801158C0: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x801158C4: jr          $ra
    // 0x801158C8: swc1        $f14, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x801158C8: swc1        $f14, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_801158CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801158CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801158D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801158D4: jal         0x80112550
    // 0x801158D8: nop

    func_80112550(rdram, ctx);
        goto after_0;
    // 0x801158D8: nop

    after_0:
    // 0x801158DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801158E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801158E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801158EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801158EC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801158F0: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x801158F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801158F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801158FC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80115900: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80115904: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80115908: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8011590C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80115910: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80115914: nop

    // 0x80115918: bc1f        L_8011592C
    if (!c1cs) {
        // 0x8011591C: nop
    
            goto L_8011592C;
    }
    // 0x8011591C: nop

    // 0x80115920: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80115924: b           L_80115A88
    // 0x80115928: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
        goto L_80115A88;
    // 0x80115928: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
L_8011592C:
    // 0x8011592C: jal         0x800D8FF8
    // 0x80115930: nop

    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80115930: nop

    after_0:
    // 0x80115934: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80115938: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8011593C: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80115940: jal         0x800F1DCC
    // 0x80115944: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    func_800F1DCC(rdram, ctx);
        goto after_1;
    // 0x80115944: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x80115948: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x8011594C: jal         0x800F2100
    // 0x80115950: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_2;
    // 0x80115950: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x80115954: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80115958: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8011595C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80115960: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80115964: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x80115968: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8011596C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80115970: bc1f        L_80115994
    if (!c1cs) {
        // 0x80115974: lwc1        $f6, 0x38($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
            goto L_80115994;
    }
    // 0x80115974: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80115978: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8011597C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80115980: jal         0x800F1344
    // 0x80115984: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F1344(rdram, ctx);
        goto after_3;
    // 0x80115984: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80115988: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x8011598C: b           L_80115A10
    // 0x80115990: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
        goto L_80115A10;
    // 0x80115990: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
L_80115994:
    // 0x80115994: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80115998: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8011599C: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x801159A0: nop

    // 0x801159A4: bc1f        L_801159B0
    if (!c1cs) {
        // 0x801159A8: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801159B0;
    }
    // 0x801159A8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801159AC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_801159B0:
    // 0x801159B0: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801159B4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801159B8: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x801159BC: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801159C0: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801159C4: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801159C8: nop

    // 0x801159CC: bc1fl       L_801159FC
    if (!c1cs) {
        // 0x801159D0: c.lt.s      $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
            goto L_801159FC;
    }
    goto skip_0;
    // 0x801159D0: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    skip_0:
    // 0x801159D4: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801159D8: neg.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
    // 0x801159DC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801159E0: nop

    // 0x801159E4: bc1fl       L_80115A14
    if (!c1cs) {
        // 0x801159E8: lwc1        $f4, 0x30($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
            goto L_80115A14;
    }
    goto skip_1;
    // 0x801159E8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x801159EC: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x801159F0: b           L_80115A10
    // 0x801159F4: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
        goto L_80115A10;
    // 0x801159F4: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801159F8: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
L_801159FC:
    // 0x801159FC: nop

    // 0x80115A00: bc1fl       L_80115A14
    if (!c1cs) {
        // 0x80115A04: lwc1        $f4, 0x30($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
            goto L_80115A14;
    }
    goto skip_2;
    // 0x80115A04: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x80115A08: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x80115A0C: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
L_80115A10:
    // 0x80115A10: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
L_80115A14:
    // 0x80115A14: mul.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80115A18: jal         0x800F2100
    // 0x80115A1C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x80115A1C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x80115A20: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80115A24: jal         0x800F2100
    // 0x80115A28: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    func_800F2100(rdram, ctx);
        goto after_5;
    // 0x80115A28: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_5:
    // 0x80115A2C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80115A30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80115A34: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80115A38: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80115A3C: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80115A40: bc1fl       L_80115A74
    if (!c1cs) {
        // 0x80115A44: lw          $t9, 0x44($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X44);
            goto L_80115A74;
    }
    goto skip_3;
    // 0x80115A44: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x80115A48: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80115A4C: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80115A50: nop

    // 0x80115A54: bc1fl       L_80115A74
    if (!c1cs) {
        // 0x80115A58: lw          $t9, 0x44($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X44);
            goto L_80115A74;
    }
    goto skip_4;
    // 0x80115A58: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    skip_4:
    // 0x80115A5C: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x80115A60: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80115A64: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80115A68: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    // 0x80115A6C: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x80115A70: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_80115A74:
    // 0x80115A74: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80115A78: jal         0x800136E4
    // 0x80115A7C: add.s       $f12, $f6, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f14.fl;
    func_800136E4(rdram, ctx);
        goto after_6;
    // 0x80115A7C: add.s       $f12, $f6, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f14.fl;
    after_6:
    // 0x80115A80: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80115A84: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
L_80115A88:
    // 0x80115A88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80115A8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80115A90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80115A94: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115A9C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80115AA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80115AA4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80115AA8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80115AAC: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80115AB0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80115AB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80115AB8: sb          $zero, 0x12($t6)
    MEM_B(0X12, ctx->r14) = 0;
    // 0x80115ABC: lw          $s0, 0x3C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X3C);
    // 0x80115AC0: lbu         $t7, 0x12($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X12);
    // 0x80115AC4: sb          $t7, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r15;
    // 0x80115AC8: lw          $s0, 0x3C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X3C);
    // 0x80115ACC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80115AD0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80115AD4: beq         $v0, $at, L_80115AEC
    if (ctx->r2 == ctx->r1) {
        // 0x80115AD8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80115AEC;
    }
    // 0x80115AD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80115ADC: beq         $v0, $at, L_80115B00
    if (ctx->r2 == ctx->r1) {
        // 0x80115AE0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80115B00;
    }
    // 0x80115AE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80115AE4: b           L_80115B14
    // 0x80115AE8: lbu         $t8, 0x1D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1D);
        goto L_80115B14;
    // 0x80115AE8: lbu         $t8, 0x1D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1D);
L_80115AEC:
    // 0x80115AEC: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x80115AF0: jal         0x80115828
    // 0x80115AF4: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    func_80115828(rdram, ctx);
        goto after_0;
    // 0x80115AF4: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    after_0:
    // 0x80115AF8: b           L_80115B10
    // 0x80115AFC: lw          $s0, 0x3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3C);
        goto L_80115B10;
    // 0x80115AFC: lw          $s0, 0x3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3C);
L_80115B00:
    // 0x80115B00: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    // 0x80115B04: jal         0x80115828
    // 0x80115B08: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    func_80115828(rdram, ctx);
        goto after_1;
    // 0x80115B08: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_1:
    // 0x80115B0C: lw          $s0, 0x3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3C);
L_80115B10:
    // 0x80115B10: lbu         $t8, 0x1D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1D);
L_80115B14:
    // 0x80115B14: beql        $t8, $zero, L_80115C30
    if (ctx->r24 == 0) {
        // 0x80115B18: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80115C30;
    }
    goto skip_0;
    // 0x80115B18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80115B1C: jal         0x800D8FF8
    // 0x80115B20: nop

    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x80115B20: nop

    after_2:
    // 0x80115B24: lw          $s0, 0x3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3C);
    // 0x80115B28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80115B2C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80115B30: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x80115B34: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80115B38: jal         0x801158CC
    // 0x80115B3C: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    func_801158CC(rdram, ctx);
        goto after_3;
    // 0x80115B3C: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x80115B40: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x80115B44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80115B48: jal         0x801107F0
    // 0x80115B4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801107F0(rdram, ctx);
        goto after_4;
    // 0x80115B4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80115B50: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80115B54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80115B58: jal         0x800EFB24
    // 0x80115B5C: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_800EFB24(rdram, ctx);
        goto after_5;
    // 0x80115B5C: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_5:
    // 0x80115B60: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80115B64: jal         0x800F1A88
    // 0x80115B68: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800F1A88(rdram, ctx);
        goto after_6;
    // 0x80115B68: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_6:
    // 0x80115B6C: lw          $s0, 0x3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3C);
    // 0x80115B70: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80115B74: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x80115B78: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80115B7C: nop

    // 0x80115B80: bc1fl       L_80115B98
    if (!c1cs) {
        // 0x80115B84: lwc1        $f18, 0x20($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
            goto L_80115B98;
    }
    goto skip_1;
    // 0x80115B84: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    skip_1:
    // 0x80115B88: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80115B8C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x80115B90: lw          $s0, 0x3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3C);
    // 0x80115B94: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
L_80115B98:
    // 0x80115B98: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80115B9C: jal         0x800F2100
    // 0x80115BA0: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    func_800F2100(rdram, ctx);
        goto after_7;
    // 0x80115BA0: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_7:
    // 0x80115BA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80115BA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80115BAC: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
    // 0x80115BB0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80115BB4: nop

    // 0x80115BB8: bc1fl       L_80115BC8
    if (!c1cs) {
        // 0x80115BBC: sw          $t9, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r25;
            goto L_80115BC8;
    }
    goto skip_2;
    // 0x80115BBC: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    skip_2:
    // 0x80115BC0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80115BC4: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
L_80115BC8:
    // 0x80115BC8: lw          $s0, 0x3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3C);
    // 0x80115BCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80115BD0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80115BD4: jal         0x80115828
    // 0x80115BD8: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    func_80115828(rdram, ctx);
        goto after_8;
    // 0x80115BD8: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    after_8:
    // 0x80115BDC: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x80115BE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80115BE4: lw          $s0, 0x3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3C);
    // 0x80115BE8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80115BEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80115BF0: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80115BF4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x80115BF8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80115BFC: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    // 0x80115C00: addiu       $a2, $s0, 0x28
    ctx->r6 = ADD32(ctx->r16, 0X28);
    // 0x80115C04: jal         0x801158EC
    // 0x80115C08: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_801158EC(rdram, ctx);
        goto after_9;
    // 0x80115C08: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x80115C0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80115C10: jal         0x801160DC
    // 0x80115C14: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801160DC(rdram, ctx);
        goto after_10;
    // 0x80115C14: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80115C18: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80115C1C: beql        $t0, $zero, L_80115C30
    if (ctx->r8 == 0) {
        // 0x80115C20: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80115C30;
    }
    goto skip_3;
    // 0x80115C20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x80115C24: lw          $t1, 0x3C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X3C);
    // 0x80115C28: sb          $zero, 0x1D($t1)
    MEM_B(0X1D, ctx->r9) = 0;
    // 0x80115C2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80115C30:
    // 0x80115C30: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80115C34: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80115C38: jr          $ra
    // 0x80115C3C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80115C3C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80115C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115C40: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x80115C44: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80115C48: lbu         $t6, 0x11($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X11);
    // 0x80115C4C: beql        $t6, $zero, L_80115C6C
    if (ctx->r14 == 0) {
        // 0x80115C50: lbu         $t7, 0x12($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X12);
            goto L_80115C6C;
    }
    goto skip_0;
    // 0x80115C50: lbu         $t7, 0x12($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X12);
    skip_0:
    // 0x80115C54: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80115C58: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80115C5C: nop

    // 0x80115C60: bc1t        L_80115C9C
    if (c1cs) {
        // 0x80115C64: nop
    
            goto L_80115C9C;
    }
    // 0x80115C64: nop

    // 0x80115C68: lbu         $t7, 0x12($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X12);
L_80115C6C:
    // 0x80115C6C: beql        $t7, $zero, L_80115C90
    if (ctx->r15 == 0) {
        // 0x80115C70: swc1        $f12, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
            goto L_80115C90;
    }
    goto skip_1;
    // 0x80115C70: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    skip_1:
    // 0x80115C74: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80115C78: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80115C7C: nop

    // 0x80115C80: bc1fl       L_80115C90
    if (!c1cs) {
        // 0x80115C84: swc1        $f12, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
            goto L_80115C90;
    }
    goto skip_2;
    // 0x80115C84: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    skip_2:
    // 0x80115C88: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80115C8C: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
L_80115C90:
    // 0x80115C90: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x80115C94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80115C98: sb          $t8, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r24;
L_80115C9C:
    // 0x80115C9C: jr          $ra
    // 0x80115CA0: nop

    return;
    // 0x80115CA0: nop

;}
RECOMP_FUNC void func_80115CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115CA4: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x80115CA8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80115CAC: lbu         $t6, 0x12($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X12);
    // 0x80115CB0: beql        $t6, $zero, L_80115CD0
    if (ctx->r14 == 0) {
        // 0x80115CB4: lbu         $t7, 0x11($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X11);
            goto L_80115CD0;
    }
    goto skip_0;
    // 0x80115CB4: lbu         $t7, 0x11($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X11);
    skip_0:
    // 0x80115CB8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80115CBC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80115CC0: nop

    // 0x80115CC4: bc1t        L_80115D00
    if (c1cs) {
        // 0x80115CC8: nop
    
            goto L_80115D00;
    }
    // 0x80115CC8: nop

    // 0x80115CCC: lbu         $t7, 0x11($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X11);
L_80115CD0:
    // 0x80115CD0: beql        $t7, $zero, L_80115CF4
    if (ctx->r15 == 0) {
        // 0x80115CD4: swc1        $f12, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
            goto L_80115CF4;
    }
    goto skip_1;
    // 0x80115CD4: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    skip_1:
    // 0x80115CD8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80115CDC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80115CE0: nop

    // 0x80115CE4: bc1fl       L_80115CF4
    if (!c1cs) {
        // 0x80115CE8: swc1        $f12, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
            goto L_80115CF4;
    }
    goto skip_2;
    // 0x80115CE8: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    skip_2:
    // 0x80115CEC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80115CF0: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
L_80115CF4:
    // 0x80115CF4: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x80115CF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80115CFC: sb          $t8, 0x12($t9)
    MEM_B(0X12, ctx->r25) = ctx->r24;
L_80115D00:
    // 0x80115D00: jr          $ra
    // 0x80115D04: nop

    return;
    // 0x80115D04: nop

;}
RECOMP_FUNC void func_80115D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115D08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80115D0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80115D10: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80115D14: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80115D18: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80115D1C: jal         0x80013B7C
    // 0x80115D20: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_80013B7C(rdram, ctx);
        goto after_0;
    // 0x80115D20: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80115D24: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80115D28: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80115D2C: nop

    // 0x80115D30: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x80115D34: nop

    // 0x80115D38: bc1fl       L_80115D50
    if (!c1cs) {
        // 0x80115D3C: add.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_80115D50;
    }
    goto skip_0;
    // 0x80115D3C: add.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f2.fl;
    skip_0:
    // 0x80115D40: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80115D44: b           L_80115D54
    // 0x80115D48: add.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f2.fl;
        goto L_80115D54;
    // 0x80115D48: add.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80115D4C: add.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f2.fl;
L_80115D50:
    // 0x80115D50: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
L_80115D54:
    // 0x80115D54: jal         0x800136E4
    // 0x80115D58: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x80115D58: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x80115D5C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80115D60: jal         0x800136E4
    // 0x80115D64: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_800136E4(rdram, ctx);
        goto after_2;
    // 0x80115D64: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80115D68: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80115D6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80115D70: jal         0x801158B0
    // 0x80115D74: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801158B0(rdram, ctx);
        goto after_3;
    // 0x80115D74: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80115D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80115D7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80115D80: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115D88: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80115D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80115D90: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80115D94: jal         0x801107F0
    // 0x80115D98: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x80115D98: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x80115D9C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80115DA0: jal         0x801158CC
    // 0x80115DA4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_801158CC(rdram, ctx);
        goto after_1;
    // 0x80115DA4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x80115DA8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80115DAC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80115DB0: jal         0x800EFB24
    // 0x80115DB4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80115DB4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x80115DB8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80115DBC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80115DC0: lw          $a1, 0x3C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X3C);
    // 0x80115DC4: jal         0x800F1884
    // 0x80115DC8: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    func_800F1884(rdram, ctx);
        goto after_3;
    // 0x80115DC8: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    after_3:
    // 0x80115DCC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80115DD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80115DD4: lw          $t8, 0x3C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3C);
    // 0x80115DD8: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x80115DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80115DE0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80115DE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115DEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80115DF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80115DF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80115DF8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80115DFC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80115E00: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x80115E04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80115E08: lbu         $t6, 0x1D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1D);
    // 0x80115E0C: bnel        $t6, $zero, L_80115E24
    if (ctx->r14 != 0) {
        // 0x80115E10: lwc1        $f4, 0x24($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80115E24;
    }
    goto skip_0;
    // 0x80115E10: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80115E14: jal         0x80115D88
    // 0x80115E18: nop

    func_80115D88(rdram, ctx);
        goto after_0;
    // 0x80115E18: nop

    after_0:
    // 0x80115E1C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80115E20: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
L_80115E24:
    // 0x80115E24: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80115E28: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x80115E2C: lw          $t7, 0x3C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3C);
    // 0x80115E30: swc1        $f6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f6.u32l;
    // 0x80115E34: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80115E38: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80115E3C: jal         0x800F1DCC
    // 0x80115E40: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    func_800F1DCC(rdram, ctx);
        goto after_1;
    // 0x80115E40: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    after_1:
    // 0x80115E44: jal         0x800F2100
    // 0x80115E48: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_2;
    // 0x80115E48: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x80115E4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80115E50: lwc1        $f8, 0x6614($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6614);
    // 0x80115E54: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80115E58: lw          $t8, 0x3C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3C);
    // 0x80115E5C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80115E60: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80115E64: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80115E68: swc1        $f18, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f18.u32l;
    // 0x80115E6C: lw          $t0, 0x3C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3C);
    // 0x80115E70: sb          $t9, 0x1D($t0)
    MEM_B(0X1D, ctx->r8) = ctx->r25;
    // 0x80115E74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80115E78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80115E7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80115E80: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115E88: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80115E8C: jr          $ra
    // 0x80115E90: lwc1        $f0, 0x18($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X18);
    return;
    // 0x80115E90: lwc1        $f0, 0x18($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X18);
;}
RECOMP_FUNC void func_80115EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115EA0: jr          $ra
    // 0x80115EA4: addiu       $v0, $zero, 0x5C
    ctx->r2 = ADD32(0, 0X5C);
    return;
    // 0x80115EA4: addiu       $v0, $zero, 0x5C
    ctx->r2 = ADD32(0, 0X5C);
;}
RECOMP_FUNC void func_80115EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115EA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80115EAC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x80115EB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80115EB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80115EB8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80115EBC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80115EC0: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80115EC4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80115EC8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80115ECC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80115ED0: jal         0x800F2100
    // 0x80115ED4: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    func_800F2100(rdram, ctx);
        goto after_0;
    // 0x80115ED4: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80115ED8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80115EDC: lwc1        $f8, 0x6620($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6620);
    // 0x80115EE0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80115EE4: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80115EE8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80115EEC: nop

    // 0x80115EF0: bc1fl       L_80115F74
    if (!c1cs) {
        // 0x80115EF4: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80115F74;
    }
    goto skip_0;
    // 0x80115EF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x80115EF8: jal         0x800D8FF8
    // 0x80115EFC: nop

    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x80115EFC: nop

    after_1:
    // 0x80115F00: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80115F04: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80115F08: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80115F0C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80115F10: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80115F14: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80115F18: jal         0x800FF060
    // 0x80115F1C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800FF060(rdram, ctx);
        goto after_2;
    // 0x80115F1C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80115F20: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80115F24: jal         0x800F2100
    // 0x80115F28: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_3;
    // 0x80115F28: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x80115F2C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80115F30: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80115F34: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80115F38: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80115F3C: nop

    // 0x80115F40: bc1fl       L_80115F64
    if (!c1cs) {
        // 0x80115F44: lwc1        $f6, 0x0($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
            goto L_80115F64;
    }
    goto skip_1;
    // 0x80115F44: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x80115F48: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80115F4C: nop

    // 0x80115F50: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80115F54: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80115F58: b           L_80115F84
    // 0x80115F5C: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
        goto L_80115F84;
    // 0x80115F5C: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x80115F60: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
L_80115F64:
    // 0x80115F64: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80115F68: b           L_80115F84
    // 0x80115F6C: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
        goto L_80115F84;
    // 0x80115F6C: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80115F70: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_80115F74:
    // 0x80115F74: nop

    // 0x80115F78: swc1        $f16, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f16.u32l;
    // 0x80115F7C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80115F80: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
L_80115F84:
    // 0x80115F84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80115F88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80115F8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80115F90: jr          $ra
    return;
;}
RECOMP_FUNC void func_80115F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115F98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80115F9C: nop

    // 0x80115FA0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x80115FA4: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x80115FA8: jr          $ra
    // 0x80115FAC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x80115FAC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80115FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80115FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80115FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80115FB8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80115FBC: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x80115FC0: jal         0x80115F98
    // 0x80115FC4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80115F98(rdram, ctx);
        goto after_0;
    // 0x80115FC4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80115FC8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80115FCC: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x80115FD0: jal         0x80115F98
    // 0x80115FD4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80115F98(rdram, ctx);
        goto after_1;
    // 0x80115FD4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x80115FD8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80115FDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80115FE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80115FE4: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80115FE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80115FEC: swc1        $f4, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->f4.u32l;
    // 0x80115FF0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80115FF4: lwc1        $f0, 0x4C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80115FF8: swc1        $f0, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f0.u32l;
    // 0x80115FFC: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80116000: swc1        $f0, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->f0.u32l;
    // 0x80116004: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x80116008: sh          $zero, 0x2E($t8)
    MEM_H(0X2E, ctx->r24) = 0;
    // 0x8011600C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x80116010: swc1        $f6, 0x58($t9)
    MEM_W(0X58, ctx->r25) = ctx->f6.u32l;
    // 0x80116014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80116018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8011601C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80116024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80116028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8011602C: jal         0x80116218
    // 0x80116030: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80116218(rdram, ctx);
        goto after_0;
    // 0x80116030: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80116034: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80116038: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8011603C: sb          $zero, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = 0;
    // 0x80116040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80116044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80116048: jr          $ra
    return;
;}
RECOMP_FUNC void func_80116050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116050: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80116054: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80116058: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8011605C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80116060: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80116064: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    // 0x80116068: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8011606C: swc1        $f6, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f6.u32l;
    // 0x80116070: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x80116074: jr          $ra
    // 0x80116078: swc1        $f12, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f12.u32l;
    return;
    // 0x80116078: swc1        $f12, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8011607C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011607C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80116080: jr          $ra
    // 0x80116084: sh          $a1, 0x2E($t6)
    MEM_H(0X2E, ctx->r14) = ctx->r5;
    return;
    // 0x80116084: sh          $a1, 0x2E($t6)
    MEM_H(0X2E, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80116088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116088: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8011608C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80116090: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80116094: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80116098: jal         0x801107B0
    // 0x8011609C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_801107B0(rdram, ctx);
        goto after_0;
    // 0x8011609C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x801160A0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x801160A4: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x801160A8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801160AC: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x801160B0: jal         0x800F1E6C
    // 0x801160B4: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    func_800F1E6C(rdram, ctx);
        goto after_1;
    // 0x801160B4: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    after_1:
    // 0x801160B8: beq         $v0, $zero, L_801160CC
    if (ctx->r2 == 0) {
        // 0x801160BC: lw          $t8, 0x28($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X28);
            goto L_801160CC;
    }
    // 0x801160BC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x801160C0: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x801160C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801160C8: sb          $t7, 0x2C($t9)
    MEM_B(0X2C, ctx->r25) = ctx->r15;
L_801160CC:
    // 0x801160CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801160D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801160D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801160DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801160DC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801160E0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x801160E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801160E8: swc1        $f12, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f12.u32l;
    // 0x801160EC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x801160F0: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801160F4: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801160F8: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x801160FC: sb          $v1, 0x24($t7)
    MEM_B(0X24, ctx->r15) = ctx->r3;
    // 0x80116100: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80116104: lbu         $t8, 0x24($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X24);
    // 0x80116108: sb          $t8, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r24;
    // 0x8011610C: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80116110: swc1        $f12, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f12.u32l;
    // 0x80116114: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x80116118: jr          $ra
    // 0x8011611C: sb          $v1, 0x48($t0)
    MEM_B(0X48, ctx->r8) = ctx->r3;
    return;
    // 0x8011611C: sb          $v1, 0x48($t0)
    MEM_B(0X48, ctx->r8) = ctx->r3;
;}
RECOMP_FUNC void func_80116120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116120: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80116124: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80116128: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8011612C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80116130: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80116134: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80116138: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8011613C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80116140: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80116144: jal         0x800F2388
    // 0x80116148: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_800F2388(rdram, ctx);
        goto after_0;
    // 0x80116148: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x8011614C: jal         0x800F22EC
    // 0x80116150: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_800F22EC(rdram, ctx);
        goto after_1;
    // 0x80116150: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x80116154: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80116158: lwc1        $f4, 0x6624($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6624);
    // 0x8011615C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80116160: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80116164: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80116168: nop

    // 0x8011616C: bc1fl       L_801161FC
    if (!c1cs) {
        // 0x80116170: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_801161FC;
    }
    goto skip_0;
    // 0x80116170: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_0:
    // 0x80116174: jal         0x800D8FF8
    // 0x80116178: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x80116178: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x8011617C: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80116180: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80116184: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80116188: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8011618C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80116190: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80116194: jal         0x800FF060
    // 0x80116198: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800FF060(rdram, ctx);
        goto after_3;
    // 0x80116198: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8011619C: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801161A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801161A4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x801161A8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801161AC: nop

    // 0x801161B0: bc1fl       L_801161CC
    if (!c1cs) {
        // 0x801161B4: div.s       $f2, $f0, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
            goto L_801161CC;
    }
    goto skip_1;
    // 0x801161B4: div.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
    skip_1:
    // 0x801161B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801161BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801161C0: b           L_801161CC
    // 0x801161C4: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
        goto L_801161CC;
    // 0x801161C4: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    // 0x801161C8: div.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
L_801161CC:
    // 0x801161CC: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801161D0: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801161D4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801161D8: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801161DC: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801161E0: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x801161E4: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801161E8: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801161EC: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801161F0: b           L_80116204
    // 0x801161F4: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
        goto L_80116204;
    // 0x801161F4: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x801161F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_801161FC:
    // 0x801161FC: nop

    // 0x80116200: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
L_80116204:
    // 0x80116204: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80116208: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8011620C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80116210: jr          $ra
    return;
;}
RECOMP_FUNC void func_80116218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116218: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8011621C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80116220: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80116224: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80116228: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8011622C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80116230: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80116234: lbu         $t6, 0x2C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2C);
    // 0x80116238: beq         $t6, $zero, L_80116248
    if (ctx->r14 == 0) {
        // 0x8011623C: nop
    
            goto L_80116248;
    }
    // 0x8011623C: nop

    // 0x80116240: b           L_8011625C
    // 0x80116244: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
        goto L_8011625C;
    // 0x80116244: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
L_80116248:
    // 0x80116248: jal         0x80110840
    // 0x8011624C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x8011624C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80116250: jal         0x800F5F50
    // 0x80116254: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5F50(rdram, ctx);
        goto after_1;
    // 0x80116254: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80116258: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8011625C:
    // 0x8011625C: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80116260: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80116264: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80116268: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x8011626C: jal         0x800136E4
    // 0x80116270: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_800136E4(rdram, ctx);
        goto after_2;
    // 0x80116270: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_2:
    // 0x80116274: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80116278: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8011627C: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x80116280: lh          $t7, 0x2E($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2E);
    // 0x80116284: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80116288: addiu       $a1, $v0, 0x34
    ctx->r5 = ADD32(ctx->r2, 0X34);
    // 0x8011628C: beq         $t7, $zero, L_801162B0
    if (ctx->r15 == 0) {
        // 0x80116290: addiu       $a2, $v0, 0x3C
        ctx->r6 = ADD32(ctx->r2, 0X3C);
            goto L_801162B0;
    }
    // 0x80116290: addiu       $a2, $v0, 0x3C
    ctx->r6 = ADD32(ctx->r2, 0X3C);
    // 0x80116294: lbu         $t8, 0x48($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X48);
    // 0x80116298: beq         $t8, $zero, L_801162A8
    if (ctx->r24 == 0) {
        // 0x8011629C: nop
    
            goto L_801162A8;
    }
    // 0x8011629C: nop

    // 0x801162A0: b           L_801162B8
    // 0x801162A4: lwc1        $f12, 0x44($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X44);
        goto L_801162B8;
    // 0x801162A4: lwc1        $f12, 0x44($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X44);
L_801162A8:
    // 0x801162A8: b           L_801162B8
    // 0x801162AC: lwc1        $f12, 0x40($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X40);
        goto L_801162B8;
    // 0x801162AC: lwc1        $f12, 0x40($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X40);
L_801162B0:
    // 0x801162B0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801162B4: nop

L_801162B8:
    // 0x801162B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801162BC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801162C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801162C4: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x801162C8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801162CC: jal         0x80115EA8
    // 0x801162D0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80115EA8(rdram, ctx);
        goto after_3;
    // 0x801162D0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x801162D4: jal         0x800137AC
    // 0x801162D8: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    func_800137AC(rdram, ctx);
        goto after_4;
    // 0x801162D8: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    after_4:
    // 0x801162DC: jal         0x800137C4
    // 0x801162E0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_800137C4(rdram, ctx);
        goto after_5;
    // 0x801162E0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x801162E4: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x801162E8: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x801162EC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801162F0: lwc1        $f4, 0x34($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X34);
    // 0x801162F4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801162F8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x801162FC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80116300: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80116304: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80116308: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8011630C: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x80116310: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80116314: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x80116318: lwc1        $f8, 0x34($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X34);
    // 0x8011631C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80116320: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80116324: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80116328: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8011632C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80116330: addiu       $a1, $v0, 0x50
    ctx->r5 = ADD32(ctx->r2, 0X50);
    // 0x80116334: jal         0x80116120
    // 0x80116338: addiu       $a2, $v0, 0x4C
    ctx->r6 = ADD32(ctx->r2, 0X4C);
    func_80116120(rdram, ctx);
        goto after_6;
    // 0x80116338: addiu       $a2, $v0, 0x4C
    ctx->r6 = ADD32(ctx->r2, 0X4C);
    after_6:
    // 0x8011633C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80116340: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80116344: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80116348: lwc1        $f6, 0x54($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X54);
    // 0x8011634C: lwc1        $f16, 0x58($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X58);
    // 0x80116350: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80116354: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80116358: nop

    // 0x8011635C: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80116360: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80116364: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80116368: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    // 0x8011636C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80116370: lwc1        $f8, 0x58($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X58);
    // 0x80116374: lwc1        $f16, 0x50($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X50);
    // 0x80116378: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8011637C: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80116380: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x80116384: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x80116388: sb          $zero, 0x48($t1)
    MEM_B(0X48, ctx->r9) = 0;
    // 0x8011638C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80116390: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80116394: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80116398: jr          $ra
    // 0x8011639C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8011639C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801163A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801163A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801163A4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x801163A8: jr          $ra
    // 0x801163AC: swc1        $f12, 0x58($t6)
    MEM_W(0X58, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x801163AC: swc1        $f12, 0x58($t6)
    MEM_W(0X58, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_801163B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801163B0: mfc1        $t9, $f30
    ctx->r25 = (int32_t)ctx->f30.u32l;
    // 0x801163B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801163B8: mfc1        $t8, $f28
    ctx->r24 = (int32_t)ctx->f28.u32l;
    // 0x801163BC: mfc1        $t7, $f26
    ctx->r15 = (int32_t)ctx->f26.u32l;
    // 0x801163C0: mfc1        $t6, $f24
    ctx->r14 = (int32_t)ctx->f24.u32l;
    // 0x801163C4: mfc1        $t5, $f22
    ctx->r13 = (int32_t)ctx->f22.u32l;
    // 0x801163C8: mfc1        $t4, $f20
    ctx->r12 = (int32_t)ctx->f20.u32l;
    // 0x801163CC: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801163D0: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801163D4: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801163D8: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801163DC: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x801163E0: lwc1        $f10, 0x18($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X18);
    // 0x801163E4: lwc1        $f12, 0x20($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801163E8: lwc1        $f14, 0x24($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801163EC: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801163F0: lwc1        $f30, 0x6630($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X6630);
L_801163F4:
    // 0x801163F4: lb          $t0, 0x0($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X0);
    // 0x801163F8: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x801163FC: lb          $t1, 0x1($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X1);
    // 0x80116400: mtc1        $t1, $f20
    ctx->f20.u32l = ctx->r9;
    // 0x80116404: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80116408: mul.s       $f18, $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x8011640C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x80116410: mul.s       $f20, $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x80116414: lb          $t2, 0x2($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X2);
    // 0x80116418: mul.s       $f24, $f18, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8011641C: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x80116420: mul.s       $f26, $f20, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x80116424: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x80116428: mul.s       $f22, $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x8011642C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80116430: mul.s       $f28, $f22, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f28.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x80116434: add.s       $f26, $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f24.fl;
    // 0x80116438: mul.s       $f24, $f18, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8011643C: add.s       $f28, $f28, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f28.fl = ctx->f28.fl + ctx->f26.fl;
    // 0x80116440: mul.s       $f26, $f20, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80116444: swc1        $f28, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f28.u32l;
    // 0x80116448: mul.s       $f28, $f22, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f28.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x8011644C: add.s       $f26, $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f24.fl;
    // 0x80116450: mul.s       $f24, $f18, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80116454: add.s       $f28, $f28, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f28.fl = ctx->f28.fl + ctx->f26.fl;
    // 0x80116458: mul.s       $f26, $f20, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8011645C: swc1        $f28, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f28.u32l;
    // 0x80116460: mul.s       $f28, $f22, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f28.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x80116464: add.s       $f26, $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f24.fl;
    // 0x80116468: add.s       $f28, $f28, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f28.fl = ctx->f28.fl + ctx->f26.fl;
    // 0x8011646C: swc1        $f28, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f28.u32l;
    // 0x80116470: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80116474: bgtz        $a3, L_801163F4
    if (SIGNED(ctx->r7) > 0) {
        // 0x80116478: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_801163F4;
    }
    // 0x80116478: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x8011647C: mtc1        $t9, $f30
    ctx->f30.u32l = ctx->r25;
    // 0x80116480: mtc1        $t8, $f28
    ctx->f28.u32l = ctx->r24;
    // 0x80116484: mtc1        $t7, $f26
    ctx->f26.u32l = ctx->r15;
    // 0x80116488: mtc1        $t6, $f24
    ctx->f24.u32l = ctx->r14;
    // 0x8011648C: mtc1        $t5, $f22
    ctx->f22.u32l = ctx->r13;
    // 0x80116490: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x80116494: jr          $ra
    return;
;}
RECOMP_FUNC void func_8011649C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011649C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801164A0: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801164A4: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
L_801164A8:
    // 0x801164A8: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801164AC: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801164B0: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801164B4: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x801164B8: mul.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801164BC: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801164C0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801164C4: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801164C8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x801164CC: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801164D0: bgtz        $a2, L_801164A8
    if (SIGNED(ctx->r6) > 0) {
        // 0x801164D4: swc1        $f6, -0xC($a1)
        MEM_W(-0XC, ctx->r5) = ctx->f6.u32l;
            goto L_801164A8;
    }
    // 0x801164D4: swc1        $f6, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->f6.u32l;
    // 0x801164D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801164E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801164E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801164E4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801164E8: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801164EC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801164F0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x801164F4: lwc1        $f12, 0x6634($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6634);
L_801164F8:
    // 0x801164F8: lb          $t0, 0x0($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X0);
    // 0x801164FC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80116500: lb          $t0, 0x1($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X1);
    // 0x80116504: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80116508: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8011650C: mul.s       $f6, $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80116510: lb          $t0, 0x2($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X2);
    // 0x80116514: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80116518: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8011651C: mul.s       $f8, $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80116520: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80116524: mul.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80116528: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8011652C: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80116530: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    // 0x80116534: mul.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80116538: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x8011653C: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80116540: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80116544: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80116548: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x8011654C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80116550: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80116554: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x80116558: bgtz        $v0, L_801164F8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8011655C: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_801164F8;
    }
    // 0x8011655C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80116560: jr          $ra
    return;
;}
RECOMP_FUNC void func_80116568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116568: mfc1        $t9, $f20
    ctx->r25 = (int32_t)ctx->f20.u32l;
    // 0x8011656C: nop

    // 0x80116570: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80116574: lui         $t1, 0x400
    ctx->r9 = S32(0X400 << 16);
    // 0x80116578: or          $t0, $t0, $t1
    ctx->r8 = ctx->r8 | ctx->r9;
    // 0x8011657C: nop

    // 0x80116580: mtc0        $t0, Status
    cop0_status_write(ctx, ctx->r8);    // 0x80116584: nop

    // 0x80116588: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8011658C: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x80116590: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80116594: lwc1        $f3, 0x10($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x80116598: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8011659C: lwc1        $f5, 0x18($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x801165A0: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x801165A4: lwc1        $f7, 0x24($a0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x801165A8: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801165AC: lwc1        $f9, 0x30($a0)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x801165B0: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x801165B4: lwc1        $f11, 0x38($a0)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r4, 0X38);
L_801165B8:
    // 0x801165B8: lh          $t0, 0x0($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X0);
    // 0x801165BC: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x801165C0: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x801165C4: mtc1        $t0, $f12
    ctx->f12.u32l = ctx->r8;
    // 0x801165C8: lh          $t0, -0x4($a1)
    ctx->r8 = MEM_H(ctx->r5, -0X4);
    // 0x801165CC: addiu       $a2, $a2, 0x6
    ctx->r6 = ADD32(ctx->r6, 0X6);
    // 0x801165D0: mtc1        $t0, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r8;
    // 0x801165D4: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x801165D8: lh          $t0, -0x2($a1)
    ctx->r8 = MEM_H(ctx->r5, -0X2);
    // 0x801165DC: mtc1        $t0, $f14
    ctx->f14.u32l = ctx->r8;
    // 0x801165E0: cvt.s.w     $f13, $f13
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    ctx->f13.fl = CVT_S_W(ctx->f_odd[(13 - 1) * 2]);
    // 0x801165E4: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x801165E8: nop

    // 0x801165EC: mul.s       $f19, $f13, $f3
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f19.fl = MUL_S(ctx->f13.fl, ctx->f3.fl);
    // 0x801165F0: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x801165F4: add.s       $f15, $f18, $f9
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f15.fl = ctx->f18.fl + ctx->f9.fl;
    // 0x801165F8: mul.s       $f20, $f14, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x801165FC: add.s       $f15, $f15, $f19
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f15.fl = ctx->f15.fl + ctx->f19.fl;
    // 0x80116600: mul.s       $f18, $f12, $f1
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f1.fl);
    // 0x80116604: add.s       $f15, $f15, $f20
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f15.fl = ctx->f15.fl + ctx->f20.fl;
    // 0x80116608: mul.s       $f19, $f13, $f4
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f19.fl = MUL_S(ctx->f13.fl, ctx->f4.fl);
    // 0x8011660C: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80116610: mul.s       $f20, $f14, $f7
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f7.fl);
    // 0x80116614: add.s       $f16, $f16, $f19
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f19.fl;
    // 0x80116618: mul.s       $f18, $f12, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8011661C: add.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x80116620: mul.s       $f19, $f13, $f5
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f19.fl = MUL_S(ctx->f13.fl, ctx->f5.fl);
    // 0x80116624: add.s       $f17, $f18, $f11
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f17.fl = ctx->f18.fl + ctx->f11.fl;
    // 0x80116628: mul.s       $f20, $f14, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8011662C: add.s       $f17, $f17, $f19
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f19.fl;
    // 0x80116630: round.w.s   $f15, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    ctx->f_odd[(15 - 1) * 2] = lroundf(ctx->f15.fl);
    // 0x80116634: add.s       $f17, $f17, $f20
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f20.fl;
    // 0x80116638: mfc1        $t0, $f15
    ctx->r8 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x8011663C: round.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = lroundf(ctx->f16.fl);
    // 0x80116640: sh          $t0, -0x6($a2)
    MEM_H(-0X6, ctx->r6) = ctx->r8;
    // 0x80116644: round.w.s   $f17, $f17
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    ctx->f_odd[(17 - 1) * 2] = lroundf(ctx->f17.fl);
    // 0x80116648: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8011664C: mfc1        $t2, $f17
    ctx->r10 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x80116650: sh          $t1, -0x4($a2)
    MEM_H(-0X4, ctx->r6) = ctx->r9;
    // 0x80116654: bgtz        $a3, L_801165B8
    if (SIGNED(ctx->r7) > 0) {
        // 0x80116658: sh          $t2, -0x2($a2)
        MEM_H(-0X2, ctx->r6) = ctx->r10;
            goto L_801165B8;
    }
    // 0x80116658: sh          $t2, -0x2($a2)
    MEM_H(-0X2, ctx->r6) = ctx->r10;
    // 0x8011665C: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80116660: lui         $t1, 0x400
    ctx->r9 = S32(0X400 << 16);
    // 0x80116664: nor         $t1, $t1, $zero
    ctx->r9 = ~(ctx->r9 | 0);
    // 0x80116668: and         $t0, $t0, $t1
    ctx->r8 = ctx->r8 & ctx->r9;
    // 0x8011666C: nop

    // 0x80116670: mtc0        $t0, Status
    cop0_status_write(ctx, ctx->r8);    // 0x80116674: nop

    // 0x80116678: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x8011667C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80116684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116684: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80116688: mfc1        $t4, $f20
    ctx->r12 = (int32_t)ctx->f20.u32l;
    // 0x8011668C: mfc1        $t5, $f22
    ctx->r13 = (int32_t)ctx->f22.u32l;
    // 0x80116690: mfc1        $t6, $f24
    ctx->r14 = (int32_t)ctx->f24.u32l;
    // 0x80116694: mfc1        $t7, $f26
    ctx->r15 = (int32_t)ctx->f26.u32l;
    // 0x80116698: mfc1        $t8, $f28
    ctx->r24 = (int32_t)ctx->f28.u32l;
    // 0x8011669C: mfc1        $t9, $f30
    ctx->r25 = (int32_t)ctx->f30.u32l;
    // 0x801166A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801166A4: lui         $t0, 0xFFFF
    ctx->r8 = S32(0XFFFF << 16);
    // 0x801166A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_801166AC:
    // 0x801166AC: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801166B0: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801166B4: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801166B8: mul.s       $f26, $f0, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801166BC: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801166C0: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x801166C4: mul.s       $f28, $f0, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f28.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801166C8: lwc1        $f12, 0x18($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X18);
    // 0x801166CC: lwc1        $f14, 0x20($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X20);
    // 0x801166D0: mul.s       $f30, $f0, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801166D4: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x801166D8: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801166DC: lwc1        $f20, 0x30($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X30);
    // 0x801166E0: lwc1        $f22, 0x34($a0)
    ctx->f22.u32l = MEM_W(ctx->r4, 0X34);
    // 0x801166E4: lwc1        $f24, 0x38($a0)
    ctx->f24.u32l = MEM_W(ctx->r4, 0X38);
    // 0x801166E8: cvt.w.s     $f26, $f26
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    ctx->f26.u32l = CVT_W_S(ctx->f26.fl);
    // 0x801166EC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x801166F0: sh          $zero, 0x26($a1)
    MEM_H(0X26, ctx->r5) = 0;
    // 0x801166F4: cvt.w.s     $f28, $f28
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    ctx->f28.u32l = CVT_W_S(ctx->f28.fl);
    // 0x801166F8: mfc1        $t1, $f26
    ctx->r9 = (int32_t)ctx->f26.u32l;
    // 0x801166FC: mul.s       $f26, $f0, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80116700: cvt.w.s     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.u32l = CVT_W_S(ctx->f30.fl);
    // 0x80116704: sh          $t1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r9;
    // 0x80116708: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x8011670C: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x80116710: mfc1        $t1, $f28
    ctx->r9 = (int32_t)ctx->f28.u32l;
    // 0x80116714: mul.s       $f28, $f0, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80116718: cvt.w.s     $f26, $f26
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    ctx->f26.u32l = CVT_W_S(ctx->f26.fl);
    // 0x8011671C: sh          $t1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r9;
    // 0x80116720: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x80116724: sh          $t1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r9;
    // 0x80116728: mfc1        $t1, $f30
    ctx->r9 = (int32_t)ctx->f30.u32l;
    // 0x8011672C: mul.s       $f30, $f0, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f30.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80116730: cvt.w.s     $f28, $f28
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    ctx->f28.u32l = CVT_W_S(ctx->f28.fl);
    // 0x80116734: sh          $t1, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r9;
    // 0x80116738: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x8011673C: sh          $t1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r9;
    // 0x80116740: mfc1        $t1, $f26
    ctx->r9 = (int32_t)ctx->f26.u32l;
    // 0x80116744: mul.s       $f26, $f0, $f14
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f26.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80116748: cvt.w.s     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.u32l = CVT_W_S(ctx->f30.fl);
    // 0x8011674C: sh          $t1, 0x28($a1)
    MEM_H(0X28, ctx->r5) = ctx->r9;
    // 0x80116750: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x80116754: sh          $t1, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r9;
    // 0x80116758: mfc1        $t1, $f28
    ctx->r9 = (int32_t)ctx->f28.u32l;
    // 0x8011675C: mul.s       $f28, $f0, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f28.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80116760: cvt.w.s     $f26, $f26
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    ctx->f26.u32l = CVT_W_S(ctx->f26.fl);
    // 0x80116764: sh          $t1, 0x2A($a1)
    MEM_H(0X2A, ctx->r5) = ctx->r9;
    // 0x80116768: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x8011676C: sh          $t1, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r9;
    // 0x80116770: mfc1        $t1, $f30
    ctx->r9 = (int32_t)ctx->f30.u32l;
    // 0x80116774: mul.s       $f30, $f0, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f30.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80116778: cvt.w.s     $f28, $f28
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    ctx->f28.u32l = CVT_W_S(ctx->f28.fl);
    // 0x8011677C: sh          $t1, 0x2C($a1)
    MEM_H(0X2C, ctx->r5) = ctx->r9;
    // 0x80116780: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x80116784: sh          $t1, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r9;
    // 0x80116788: mfc1        $t1, $f26
    ctx->r9 = (int32_t)ctx->f26.u32l;
    // 0x8011678C: mul.s       $f26, $f0, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80116790: cvt.w.s     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.u32l = CVT_W_S(ctx->f30.fl);
    // 0x80116794: sh          $t1, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r9;
    // 0x80116798: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x8011679C: sh          $t1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r9;
    // 0x801167A0: mfc1        $t1, $f28
    ctx->r9 = (int32_t)ctx->f28.u32l;
    // 0x801167A4: mul.s       $f28, $f0, $f22
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f28.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x801167A8: cvt.w.s     $f26, $f26
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    ctx->f26.u32l = CVT_W_S(ctx->f26.fl);
    // 0x801167AC: sh          $t1, 0x32($a1)
    MEM_H(0X32, ctx->r5) = ctx->r9;
    // 0x801167B0: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x801167B4: sh          $t1, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r9;
    // 0x801167B8: mfc1        $t1, $f30
    ctx->r9 = (int32_t)ctx->f30.u32l;
    // 0x801167BC: mul.s       $f30, $f0, $f24
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f30.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x801167C0: cvt.w.s     $f28, $f28
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    ctx->f28.u32l = CVT_W_S(ctx->f28.fl);
    // 0x801167C4: sh          $t1, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r9;
    // 0x801167C8: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x801167CC: sh          $t1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r9;
    // 0x801167D0: mfc1        $t1, $f26
    ctx->r9 = (int32_t)ctx->f26.u32l;
    // 0x801167D4: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x801167D8: cvt.w.s     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.u32l = CVT_W_S(ctx->f30.fl);
    // 0x801167DC: sh          $t1, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r9;
    // 0x801167E0: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x801167E4: sh          $t1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r9;
    // 0x801167E8: mfc1        $t1, $f28
    ctx->r9 = (int32_t)ctx->f28.u32l;
    // 0x801167EC: sh          $zero, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = 0;
    // 0x801167F0: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
    // 0x801167F4: sh          $t1, 0x3A($a1)
    MEM_H(0X3A, ctx->r5) = ctx->r9;
    // 0x801167F8: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x801167FC: sh          $t1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r9;
    // 0x80116800: mfc1        $t1, $f30
    ctx->r9 = (int32_t)ctx->f30.u32l;
    // 0x80116804: sh          $zero, 0x36($a1)
    MEM_H(0X36, ctx->r5) = 0;
    // 0x80116808: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x8011680C: sh          $t1, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = ctx->r9;
    // 0x80116810: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x80116814: sh          $t1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r9;
    // 0x80116818: sh          $zero, 0x3E($a1)
    MEM_H(0X3E, ctx->r5) = 0;
    // 0x8011681C: sh          $t3, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r11;
    // 0x80116820: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x80116824: bne         $a2, $zero, L_801166AC
    if (ctx->r6 != 0) {
        // 0x80116828: addiu       $a1, $a1, 0x40
        ctx->r5 = ADD32(ctx->r5, 0X40);
            goto L_801166AC;
    }
    // 0x80116828: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x8011682C: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x80116830: mtc1        $t5, $f22
    ctx->f22.u32l = ctx->r13;
    // 0x80116834: mtc1        $t6, $f24
    ctx->f24.u32l = ctx->r14;
    // 0x80116838: mtc1        $t7, $f26
    ctx->f26.u32l = ctx->r15;
    // 0x8011683C: mtc1        $t8, $f28
    ctx->f28.u32l = ctx->r24;
    // 0x80116840: mtc1        $t9, $f30
    ctx->f30.u32l = ctx->r25;
    // 0x80116844: jr          $ra
    return;
;}
RECOMP_FUNC void func_80116850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116850: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80116854: ld          $a0, 0x4A70($a0)
    ctx->r4 = LD(ctx->r4, 0X4A70);
    // 0x80116858: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8011685C: dsll32      $a2, $a0, 31
    ctx->r6 = ctx->r4 << (31 + 32);
    // 0x80116860: dsll        $a1, $a0, 31
    ctx->r5 = ctx->r4 << 31;
    // 0x80116864: dsrl        $a2, $a2, 31
    ctx->r6 = ctx->r6 >> 31;
    // 0x80116868: dsrl32      $a1, $a1, 0
    ctx->r5 = ctx->r5 >> (0 + 32);
    // 0x8011686C: dsll32      $a0, $a0, 12
    ctx->r4 = ctx->r4 << (12 + 32);
    // 0x80116870: or          $a2, $a2, $a1
    ctx->r6 = ctx->r6 | ctx->r5;
    // 0x80116874: dsrl32      $a0, $a0, 0
    ctx->r4 = ctx->r4 >> (0 + 32);
    // 0x80116878: xor         $a2, $a2, $a0
    ctx->r6 = ctx->r6 ^ ctx->r4;
    // 0x8011687C: dsrl        $a0, $a2, 20
    ctx->r4 = ctx->r6 >> 20;
    // 0x80116880: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x80116884: xor         $a0, $a0, $a2
    ctx->r4 = ctx->r4 ^ ctx->r6;
    // 0x80116888: dsll32      $v0, $a0, 0
    ctx->r2 = ctx->r4 << (0 + 32);
    // 0x8011688C: sd          $a0, 0x4A70($at)
    SD(ctx->r4, 0X4A70, ctx->r1);
    // 0x80116890: jr          $ra
    // 0x80116894: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x80116894: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_80116898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116898: daddiu      $a0, $a0, 0x1
    ctx->r4 = ctx->r4 + 0X1;
    // 0x8011689C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801168A0: sd          $a0, 0x4A70($at)
    SD(ctx->r4, 0X4A70, ctx->r1);
    // 0x801168A4: jr          $ra
    // 0x801168A8: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    return;
    // 0x801168A8: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
;}
RECOMP_FUNC void func_801168AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801168AC: ld          $a3, 0x0($a0)
    ctx->r7 = LD(ctx->r4, 0X0);
    // 0x801168B0: dsll32      $a2, $a3, 31
    ctx->r6 = ctx->r7 << (31 + 32);
    // 0x801168B4: dsll        $a1, $a3, 31
    ctx->r5 = ctx->r7 << 31;
    // 0x801168B8: dsrl        $a2, $a2, 31
    ctx->r6 = ctx->r6 >> 31;
    // 0x801168BC: dsrl32      $a1, $a1, 0
    ctx->r5 = ctx->r5 >> (0 + 32);
    // 0x801168C0: dsll32      $a3, $a3, 12
    ctx->r7 = ctx->r7 << (12 + 32);
    // 0x801168C4: or          $a2, $a2, $a1
    ctx->r6 = ctx->r6 | ctx->r5;
    // 0x801168C8: dsrl32      $a3, $a3, 0
    ctx->r7 = ctx->r7 >> (0 + 32);
    // 0x801168CC: xor         $a2, $a2, $a3
    ctx->r6 = ctx->r6 ^ ctx->r7;
    // 0x801168D0: dsrl        $a3, $a2, 20
    ctx->r7 = ctx->r6 >> 20;
    // 0x801168D4: andi        $a3, $a3, 0xFFF
    ctx->r7 = ctx->r7 & 0XFFF;
    // 0x801168D8: xor         $a3, $a3, $a2
    ctx->r7 = ctx->r7 ^ ctx->r6;
    // 0x801168DC: dsll32      $v0, $a3, 0
    ctx->r2 = ctx->r7 << (0 + 32);
    // 0x801168E0: sd          $a3, 0x0($a0)
    SD(ctx->r7, 0X0, ctx->r4);
    // 0x801168E4: jr          $ra
    // 0x801168E8: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x801168E8: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_801168F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801168F0: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x801168F4: addiu       $t6, $t6, 0x1000
    ctx->r14 = ADD32(ctx->r14, 0X1000);
    // 0x801168F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801168FC: sw          $t6, 0x4A8C($at)
    MEM_W(0X4A8C, ctx->r1) = ctx->r14;
    // 0x80116900: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x80116904: addiu       $t7, $t7, -0x1800
    ctx->r15 = ADD32(ctx->r15, -0X1800);
    // 0x80116908: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8011690C: jr          $ra
    // 0x80116910: sw          $t7, 0x4A80($at)
    MEM_W(0X4A80, ctx->r1) = ctx->r15;
    return;
    // 0x80116910: sw          $t7, 0x4A80($at)
    MEM_W(0X4A80, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_80116914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116914: addiu       $sp, $sp, -0x5F8
    ctx->r29 = ADD32(ctx->r29, -0X5F8);
    // 0x80116918: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8011691C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80116920: addiu       $s1, $sp, 0x5B0
    ctx->r17 = ADD32(ctx->r29, 0X5B0);
    // 0x80116924: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80116928: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8011692C: sw          $a1, 0x5FC($sp)
    MEM_W(0X5FC, ctx->r29) = ctx->r5;
    // 0x80116930: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80116934: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80116938: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8011693C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80116940: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80116944: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80116948: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8011694C: sw          $a2, 0x600($sp)
    MEM_W(0X600, ctx->r29) = ctx->r6;
    // 0x80116950: sw          $a3, 0x604($sp)
    MEM_W(0X604, ctx->r29) = ctx->r7;
    // 0x80116954: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x80116958: jal         0x8002D6E0
    // 0x8011695C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8011695C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80116960: lw          $t6, 0x5FC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5FC);
    // 0x80116964: or          $fp, $s2, $zero
    ctx->r30 = ctx->r18 | 0;
    // 0x80116968: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8011696C: andi        $v0, $t6, 0x3
    ctx->r2 = ctx->r14 & 0X3;
    // 0x80116970: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80116974: beq         $v0, $zero, L_801169AC
    if (ctx->r2 == 0) {
        // 0x80116978: or          $ra, $t6, $zero
        ctx->r31 = ctx->r14 | 0;
            goto L_801169AC;
    }
    // 0x80116978: or          $ra, $t6, $zero
    ctx->r31 = ctx->r14 | 0;
    // 0x8011697C: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
L_80116980:
    // 0x80116980: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80116984: addiu       $ra, $ra, -0x1
    ctx->r31 = ADD32(ctx->r31, -0X1);
    // 0x80116988: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x8011698C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80116990: addu        $v0, $s1, $t8
    ctx->r2 = ADD32(ctx->r17, ctx->r24);
    // 0x80116994: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80116998: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8011699C: bne         $v1, $ra, L_80116980
    if (ctx->r3 != ctx->r31) {
        // 0x801169A0: sw          $t6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r14;
            goto L_80116980;
    }
    // 0x801169A0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801169A4: beql        $ra, $zero, L_80116A1C
    if (ctx->r31 == 0) {
        // 0x801169A8: lw          $t7, 0x5FC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X5FC);
            goto L_80116A1C;
    }
    goto skip_0;
    // 0x801169A8: lw          $t7, 0x5FC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5FC);
    skip_0:
L_801169AC:
    // 0x801169AC: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x801169B0: addiu       $ra, $ra, -0x4
    ctx->r31 = ADD32(ctx->r31, -0X4);
    // 0x801169B4: addiu       $fp, $fp, 0x10
    ctx->r30 = ADD32(ctx->r30, 0X10);
    // 0x801169B8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801169BC: addu        $v0, $s1, $t8
    ctx->r2 = ADD32(ctx->r17, ctx->r24);
    // 0x801169C0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801169C4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x801169C8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801169CC: lw          $t7, -0xC($fp)
    ctx->r15 = MEM_W(ctx->r30, -0XC);
    // 0x801169D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801169D4: addu        $v0, $s1, $t8
    ctx->r2 = ADD32(ctx->r17, ctx->r24);
    // 0x801169D8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801169DC: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x801169E0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801169E4: lw          $t7, -0x8($fp)
    ctx->r15 = MEM_W(ctx->r30, -0X8);
    // 0x801169E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801169EC: addu        $v0, $s1, $t8
    ctx->r2 = ADD32(ctx->r17, ctx->r24);
    // 0x801169F0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801169F4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x801169F8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801169FC: lw          $t7, -0x4($fp)
    ctx->r15 = MEM_W(ctx->r30, -0X4);
    // 0x80116A00: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80116A04: addu        $v0, $s1, $t8
    ctx->r2 = ADD32(ctx->r17, ctx->r24);
    // 0x80116A08: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80116A0C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80116A10: bne         $ra, $zero, L_801169AC
    if (ctx->r31 != 0) {
        // 0x80116A14: sw          $t6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r14;
            goto L_801169AC;
    }
    // 0x80116A14: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80116A18: lw          $t7, 0x5FC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5FC);
L_80116A1C:
    // 0x80116A1C: lw          $t8, 0x5B0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5B0);
    // 0x80116A20: lw          $a1, 0x610($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X610);
    // 0x80116A24: addiu       $a0, $sp, 0x5B4
    ctx->r4 = ADD32(ctx->r29, 0X5B4);
    // 0x80116A28: bne         $t7, $t8, L_80116A44
    if (ctx->r15 != ctx->r24) {
        // 0x80116A2C: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80116A44;
    }
    // 0x80116A2C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80116A30: lw          $s5, 0x60C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60C);
    // 0x80116A34: lw          $a1, 0x610($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X610);
    // 0x80116A38: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    // 0x80116A3C: b           L_80116EFC
    // 0x80116A40: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
        goto L_80116EFC;
    // 0x80116A40: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_80116A44:
    // 0x80116A44: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
L_80116A48:
    // 0x80116A48: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80116A4C: bnel        $t9, $zero, L_80116A64
    if (ctx->r25 != 0) {
        // 0x80116A50: sltu        $at, $s0, $a3
        ctx->r1 = ctx->r16 < ctx->r7 ? 1 : 0;
            goto L_80116A64;
    }
    goto skip_1;
    // 0x80116A50: sltu        $at, $s0, $a3
    ctx->r1 = ctx->r16 < ctx->r7 ? 1 : 0;
    skip_1:
    // 0x80116A54: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80116A58: bne         $a3, $v0, L_80116A48
    if (ctx->r7 != ctx->r2) {
        // 0x80116A5C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80116A48;
    }
    // 0x80116A5C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80116A60: sltu        $at, $s0, $a3
    ctx->r1 = ctx->r16 < ctx->r7 ? 1 : 0;
L_80116A64:
    // 0x80116A64: beq         $at, $zero, L_80116A70
    if (ctx->r1 == 0) {
        // 0x80116A68: or          $s4, $a3, $zero
        ctx->r20 = ctx->r7 | 0;
            goto L_80116A70;
    }
    // 0x80116A68: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x80116A6C: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
L_80116A70:
    // 0x80116A70: addiu       $ra, $zero, 0x10
    ctx->r31 = ADD32(0, 0X10);
    // 0x80116A74: addiu       $v1, $sp, 0x5F0
    ctx->r3 = ADD32(ctx->r29, 0X5F0);
L_80116A78:
    // 0x80116A78: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80116A7C: bnel        $t6, $zero, L_80116A94
    if (ctx->r14 != 0) {
        // 0x80116A80: sltu        $at, $ra, $s0
        ctx->r1 = ctx->r31 < ctx->r16 ? 1 : 0;
            goto L_80116A94;
    }
    goto skip_2;
    // 0x80116A80: sltu        $at, $ra, $s0
    ctx->r1 = ctx->r31 < ctx->r16 ? 1 : 0;
    skip_2:
    // 0x80116A84: addiu       $ra, $ra, -0x1
    ctx->r31 = ADD32(ctx->r31, -0X1);
    // 0x80116A88: bne         $ra, $zero, L_80116A78
    if (ctx->r31 != 0) {
        // 0x80116A8C: addiu       $v1, $v1, -0x4
        ctx->r3 = ADD32(ctx->r3, -0X4);
            goto L_80116A78;
    }
    // 0x80116A8C: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x80116A90: sltu        $at, $ra, $s0
    ctx->r1 = ctx->r31 < ctx->r16 ? 1 : 0;
L_80116A94:
    // 0x80116A94: beq         $at, $zero, L_80116AA0
    if (ctx->r1 == 0) {
        // 0x80116A98: sw          $ra, 0x5A8($sp)
        MEM_W(0X5A8, ctx->r29) = ctx->r31;
            goto L_80116AA0;
    }
    // 0x80116A98: sw          $ra, 0x5A8($sp)
    MEM_W(0X5A8, ctx->r29) = ctx->r31;
    // 0x80116A9C: or          $s0, $ra, $zero
    ctx->r16 = ctx->r31 | 0;
L_80116AA0:
    // 0x80116AA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80116AA4: sltu        $at, $a3, $ra
    ctx->r1 = ctx->r7 < ctx->r31 ? 1 : 0;
    // 0x80116AA8: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x80116AAC: beq         $at, $zero, L_80116ADC
    if (ctx->r1 == 0) {
        // 0x80116AB0: sllv        $v0, $t7, $a3
        ctx->r2 = S32(ctx->r15 << (ctx->r7 & 31));
            goto L_80116ADC;
    }
    // 0x80116AB0: sllv        $v0, $t7, $a3
    ctx->r2 = S32(ctx->r15 << (ctx->r7 & 31));
    // 0x80116AB4: sll         $t8, $ra, 2
    ctx->r24 = S32(ctx->r31 << 2);
    // 0x80116AB8: addiu       $t9, $sp, 0x5B0
    ctx->r25 = ADD32(ctx->r29, 0X5B0);
    // 0x80116ABC: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
L_80116AC0:
    // 0x80116AC0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80116AC4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80116AC8: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x80116ACC: subu        $v0, $v0, $t6
    ctx->r2 = SUB32(ctx->r2, ctx->r14);
    // 0x80116AD0: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x80116AD4: bne         $at, $zero, L_80116AC0
    if (ctx->r1 != 0) {
        // 0x80116AD8: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80116AC0;
    }
    // 0x80116AD8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80116ADC:
    // 0x80116ADC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80116AE0: addiu       $ra, $ra, -0x1
    ctx->r31 = ADD32(ctx->r31, -0X1);
    // 0x80116AE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80116AE8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80116AEC: addu        $t8, $a0, $v0
    ctx->r24 = ADD32(ctx->r4, ctx->r2);
    // 0x80116AF0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80116AF4: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x80116AF8: addiu       $fp, $sp, 0x5B4
    ctx->r30 = ADD32(ctx->r29, 0X5B4);
    // 0x80116AFC: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    // 0x80116B00: beq         $ra, $zero, L_80116B8C
    if (ctx->r31 == 0) {
        // 0x80116B04: addiu       $v1, $v1, -0x4
        ctx->r3 = ADD32(ctx->r3, -0X4);
            goto L_80116B8C;
    }
    // 0x80116B04: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x80116B08: andi        $a1, $ra, 0x3
    ctx->r5 = ctx->r31 & 0X3;
    // 0x80116B0C: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80116B10: beq         $a1, $zero, L_80116B48
    if (ctx->r5 == 0) {
        // 0x80116B14: addu        $v0, $a1, $ra
        ctx->r2 = ADD32(ctx->r5, ctx->r31);
            goto L_80116B48;
    }
    // 0x80116B14: addu        $v0, $a1, $ra
    ctx->r2 = ADD32(ctx->r5, ctx->r31);
    // 0x80116B18: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80116B1C: addiu       $t6, $sp, 0x5B0
    ctx->r14 = ADD32(ctx->r29, 0X5B0);
    // 0x80116B20: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
L_80116B24:
    // 0x80116B24: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80116B28: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x80116B2C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80116B30: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x80116B34: sw          $a3, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r7;
    // 0x80116B38: bne         $a0, $v1, L_80116B24
    if (ctx->r4 != ctx->r3) {
        // 0x80116B3C: addiu       $fp, $fp, 0x4
        ctx->r30 = ADD32(ctx->r30, 0X4);
            goto L_80116B24;
    }
    // 0x80116B3C: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x80116B40: addiu       $t8, $sp, 0x5B0
    ctx->r24 = ADD32(ctx->r29, 0X5B0);
    // 0x80116B44: beq         $v1, $t8, L_80116B8C
    if (ctx->r3 == ctx->r24) {
        // 0x80116B48: addiu       $v0, $sp, 0x5B0
        ctx->r2 = ADD32(ctx->r29, 0X5B0);
            goto L_80116B8C;
    }
L_80116B48:
    // 0x80116B48: addiu       $v0, $sp, 0x5B0
    ctx->r2 = ADD32(ctx->r29, 0X5B0);
L_80116B4C:
    // 0x80116B4C: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x80116B50: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80116B54: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x80116B58: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
    // 0x80116B5C: sw          $a3, -0x10($a2)
    MEM_W(-0X10, ctx->r6) = ctx->r7;
    // 0x80116B60: lw          $t6, 0x4($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X4);
    // 0x80116B64: addiu       $fp, $fp, 0x10
    ctx->r30 = ADD32(ctx->r30, 0X10);
    // 0x80116B68: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x80116B6C: sw          $a3, -0xC($a2)
    MEM_W(-0XC, ctx->r6) = ctx->r7;
    // 0x80116B70: lw          $t7, -0x8($fp)
    ctx->r15 = MEM_W(ctx->r30, -0X8);
    // 0x80116B74: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x80116B78: sw          $a3, -0x8($a2)
    MEM_W(-0X8, ctx->r6) = ctx->r7;
    // 0x80116B7C: lw          $t8, -0x4($fp)
    ctx->r24 = MEM_W(ctx->r30, -0X4);
    // 0x80116B80: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x80116B84: bne         $v1, $v0, L_80116B4C
    if (ctx->r3 != ctx->r2) {
        // 0x80116B88: sw          $a3, -0x4($a2)
        MEM_W(-0X4, ctx->r6) = ctx->r7;
            goto L_80116B4C;
    }
    // 0x80116B88: sw          $a3, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r7;
L_80116B8C:
    // 0x80116B8C: or          $fp, $s2, $zero
    ctx->r30 = ctx->r18 | 0;
    // 0x80116B90: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x80116B94: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x80116B98: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    // 0x80116B9C: lw          $a3, 0x0($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X0);
L_80116BA0:
    // 0x80116BA0: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x80116BA4: beq         $a3, $zero, L_80116BC8
    if (ctx->r7 == 0) {
        // 0x80116BA8: sll         $t9, $a3, 2
        ctx->r25 = S32(ctx->r7 << 2);
            goto L_80116BC8;
    }
    // 0x80116BA8: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x80116BAC: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x80116BB0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80116BB4: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80116BB8: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80116BBC: sw          $ra, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r31;
    // 0x80116BC0: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80116BC4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80116BC8:
    // 0x80116BC8: lw          $t9, 0x5FC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5FC);
    // 0x80116BCC: addiu       $ra, $ra, 0x1
    ctx->r31 = ADD32(ctx->r31, 0X1);
    // 0x80116BD0: sltu        $at, $ra, $t9
    ctx->r1 = ctx->r31 < ctx->r25 ? 1 : 0;
    // 0x80116BD4: bnel        $at, $zero, L_80116BA0
    if (ctx->r1 != 0) {
        // 0x80116BD8: lw          $a3, 0x0($fp)
        ctx->r7 = MEM_W(ctx->r30, 0X0);
            goto L_80116BA0;
    }
    goto skip_3;
    // 0x80116BD8: lw          $a3, 0x0($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X0);
    skip_3:
    // 0x80116BDC: lw          $t6, 0x5A8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5A8);
    // 0x80116BE0: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x80116BE4: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x80116BE8: slt         $at, $t6, $s4
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80116BEC: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x80116BF0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80116BF4: negu        $t2, $s0
    ctx->r10 = SUB32(0, ctx->r16);
    // 0x80116BF8: sw          $zero, 0x544($sp)
    MEM_W(0X544, ctx->r29) = 0;
    // 0x80116BFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80116C00: bne         $at, $zero, L_80116EFC
    if (ctx->r1 != 0) {
        // 0x80116C04: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80116EFC;
    }
    // 0x80116C04: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80116C08: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x80116C0C: addiu       $t8, $sp, 0x5B0
    ctx->r24 = ADD32(ctx->r29, 0X5B0);
    // 0x80116C10: lui         $s7, 0x8012
    ctx->r23 = S32(0X8012 << 16);
    // 0x80116C14: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x80116C18: addiu       $s2, $s2, 0x7388
    ctx->r18 = ADD32(ctx->r18, 0X7388);
    // 0x80116C1C: addiu       $s7, $s7, 0x4A80
    ctx->r23 = ADD32(ctx->r23, 0X4A80);
    // 0x80116C20: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80116C24: lw          $s5, 0x60C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60C);
    // 0x80116C28: addiu       $s3, $sp, 0x584
    ctx->r19 = ADD32(ctx->r29, 0X584);
    // 0x80116C2C: lw          $s6, 0x0($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X0);
L_80116C30:
    // 0x80116C30: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80116C34: addiu       $t9, $sp, 0x7C
    ctx->r25 = ADD32(ctx->r29, 0X7C);
    // 0x80116C38: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80116C3C: beq         $s6, $zero, L_80116EE0
    if (ctx->r22 == 0) {
        // 0x80116C40: addiu       $s6, $s6, -0x1
        ctx->r22 = ADD32(ctx->r22, -0X1);
            goto L_80116EE0;
    }
    // 0x80116C40: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x80116C44: lw          $t6, 0x5FC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5FC);
    // 0x80116C48: addu        $t3, $t5, $t9
    ctx->r11 = ADD32(ctx->r13, ctx->r25);
    // 0x80116C4C: addiu       $t8, $sp, 0xC4
    ctx->r24 = ADD32(ctx->r29, 0XC4);
    // 0x80116C50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80116C54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80116C58: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80116C5C: addiu       $t6, $s4, 0x1F
    ctx->r14 = ADD32(ctx->r20, 0X1F);
    // 0x80116C60: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x80116C64: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x80116C68: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80116C6C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
L_80116C70:
    // 0x80116C70: addu        $v1, $t2, $s0
    ctx->r3 = ADD32(ctx->r10, ctx->r16);
    // 0x80116C74: slt         $at, $v1, $s4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80116C78: beq         $at, $zero, L_80116D98
    if (ctx->r1 == 0) {
        // 0x80116C7C: addiu       $s1, $s6, 0x1
        ctx->r17 = ADD32(ctx->r22, 0X1);
            goto L_80116D98;
    }
    // 0x80116C7C: addiu       $s1, $s6, 0x1
    ctx->r17 = ADD32(ctx->r22, 0X1);
    // 0x80116C80: addiu       $t9, $sp, 0x544
    ctx->r25 = ADD32(ctx->r29, 0X544);
    // 0x80116C84: addu        $t1, $t5, $t9
    ctx->r9 = ADD32(ctx->r13, ctx->r25);
    // 0x80116C88: lw          $t7, 0x5A8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5A8);
L_80116C8C:
    // 0x80116C8C: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80116C90: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x80116C94: subu        $t0, $t7, $v1
    ctx->r8 = SUB32(ctx->r15, ctx->r3);
    // 0x80116C98: sltu        $at, $s0, $t0
    ctx->r1 = ctx->r16 < ctx->r8 ? 1 : 0;
    // 0x80116C9C: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80116CA0: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x80116CA4: beq         $at, $zero, L_80116CB0
    if (ctx->r1 == 0) {
        // 0x80116CA8: or          $t2, $v1, $zero
        ctx->r10 = ctx->r3 | 0;
            goto L_80116CB0;
    }
    // 0x80116CA8: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
    // 0x80116CAC: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
L_80116CB0:
    // 0x80116CB0: subu        $v0, $s4, $t2
    ctx->r2 = SUB32(ctx->r20, ctx->r10);
    // 0x80116CB4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80116CB8: sllv        $a0, $t6, $v0
    ctx->r4 = S32(ctx->r14 << (ctx->r2 & 31));
    // 0x80116CBC: sltu        $at, $s1, $a0
    ctx->r1 = ctx->r17 < ctx->r4 ? 1 : 0;
    // 0x80116CC0: beq         $at, $zero, L_80116D10
    if (ctx->r1 == 0) {
        // 0x80116CC4: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80116D10;
    }
    // 0x80116CC4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80116CC8: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
    // 0x80116CCC: subu        $v1, $a0, $s6
    ctx->r3 = SUB32(ctx->r4, ctx->r22);
    // 0x80116CD0: sll         $t8, $s4, 2
    ctx->r24 = S32(ctx->r20 << 2);
    // 0x80116CD4: addiu       $t9, $sp, 0x5B0
    ctx->r25 = ADD32(ctx->r29, 0X5B0);
    // 0x80116CD8: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x80116CDC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80116CE0: beq         $at, $zero, L_80116D10
    if (ctx->r1 == 0) {
        // 0x80116CE4: addu        $a2, $t8, $t9
        ctx->r6 = ADD32(ctx->r24, ctx->r25);
            goto L_80116D10;
    }
    // 0x80116CE4: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
L_80116CE8:
    // 0x80116CE8: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x80116CEC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80116CF0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80116CF4: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80116CF8: beql        $at, $zero, L_80116D14
    if (ctx->r1 == 0) {
        // 0x80116CFC: lw          $v1, 0x0($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X0);
            goto L_80116D14;
    }
    goto skip_4;
    // 0x80116CFC: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    skip_4:
    // 0x80116D00: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80116D04: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x80116D08: bne         $at, $zero, L_80116CE8
    if (ctx->r1 != 0) {
        // 0x80116D0C: subu        $v1, $v0, $a0
        ctx->r3 = SUB32(ctx->r2, ctx->r4);
            goto L_80116CE8;
    }
    // 0x80116D0C: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
L_80116D10:
    // 0x80116D10: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
L_80116D14:
    // 0x80116D14: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80116D18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80116D1C: sllv        $t0, $t7, $a3
    ctx->r8 = S32(ctx->r15 << (ctx->r7 & 31));
    // 0x80116D20: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80116D24: addu        $t9, $v1, $t0
    ctx->r25 = ADD32(ctx->r3, ctx->r8);
    // 0x80116D28: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x80116D2C: addu        $a2, $t6, $t8
    ctx->r6 = ADD32(ctx->r14, ctx->r24);
    // 0x80116D30: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x80116D34: addiu       $a0, $a2, 0x8
    ctx->r4 = ADD32(ctx->r6, 0X8);
    // 0x80116D38: sw          $a0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r4;
    // 0x80116D3C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80116D40: addiu       $s5, $a2, 0x4
    ctx->r21 = ADD32(ctx->r6, 0X4);
    // 0x80116D44: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80116D48: beq         $t4, $zero, L_80116D88
    if (ctx->r12 == 0) {
        // 0x80116D4C: sw          $a0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r4;
            goto L_80116D88;
    }
    // 0x80116D4C: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x80116D50: sw          $ra, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r31;
    // 0x80116D54: addiu       $t6, $a3, 0x10
    ctx->r14 = ADD32(ctx->r7, 0X10);
    // 0x80116D58: sb          $s0, 0x585($sp)
    MEM_B(0X585, ctx->r29) = ctx->r16;
    // 0x80116D5C: sb          $t6, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r14;
    // 0x80116D60: sw          $a0, 0x588($sp)
    MEM_W(0X588, ctx->r29) = ctx->r4;
    // 0x80116D64: lw          $t8, -0x4($t1)
    ctx->r24 = MEM_W(ctx->r9, -0X4);
    // 0x80116D68: subu        $t9, $t2, $s0
    ctx->r25 = SUB32(ctx->r10, ctx->r16);
    // 0x80116D6C: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x80116D70: srlv        $t7, $ra, $t9
    ctx->r15 = S32(U32(ctx->r31) >> (ctx->r25 & 31));
    // 0x80116D74: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x80116D78: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80116D7C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80116D80: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x80116D84: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
L_80116D88:
    // 0x80116D88: addu        $v1, $t2, $s0
    ctx->r3 = ADD32(ctx->r10, ctx->r16);
    // 0x80116D8C: slt         $at, $v1, $s4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80116D90: bnel        $at, $zero, L_80116C8C
    if (ctx->r1 != 0) {
        // 0x80116D94: lw          $t7, 0x5A8($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X5A8);
            goto L_80116C8C;
    }
    goto skip_5;
    // 0x80116D94: lw          $t7, 0x5A8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5A8);
    skip_5:
L_80116D98:
    // 0x80116D98: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80116D9C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80116DA0: subu        $v1, $s4, $t2
    ctx->r3 = SUB32(ctx->r20, ctx->r10);
    // 0x80116DA4: sllv        $a1, $t8, $t2
    ctx->r5 = S32(ctx->r24 << (ctx->r10 & 31));
    // 0x80116DA8: sltu        $at, $fp, $t7
    ctx->r1 = ctx->r30 < ctx->r15 ? 1 : 0;
    // 0x80116DAC: sb          $v1, 0x585($sp)
    MEM_B(0X585, ctx->r29) = ctx->r3;
    // 0x80116DB0: bne         $at, $zero, L_80116DC4
    if (ctx->r1 != 0) {
        // 0x80116DB4: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_80116DC4;
    }
    // 0x80116DB4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80116DB8: addiu       $t9, $zero, 0x63
    ctx->r25 = ADD32(0, 0X63);
    // 0x80116DBC: b           L_80116E40
    // 0x80116DC0: sb          $t9, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r25;
        goto L_80116E40;
    // 0x80116DC0: sb          $t9, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r25;
L_80116DC4:
    // 0x80116DC4: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x80116DC8: lw          $t6, 0x600($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X600);
    // 0x80116DCC: lw          $a0, 0x600($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X600);
    // 0x80116DD0: lw          $t8, 0x608($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X608);
    // 0x80116DD4: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x80116DD8: beq         $at, $zero, L_80116E08
    if (ctx->r1 == 0) {
        // 0x80116DDC: sltiu       $at, $v0, 0x100
        ctx->r1 = ctx->r2 < 0X100 ? 1 : 0;
            goto L_80116E08;
    }
    // 0x80116DDC: sltiu       $at, $v0, 0x100
    ctx->r1 = ctx->r2 < 0X100 ? 1 : 0;
    // 0x80116DE0: beq         $at, $zero, L_80116DF4
    if (ctx->r1 == 0) {
        // 0x80116DE4: addiu       $t7, $zero, 0xF
        ctx->r15 = ADD32(0, 0XF);
            goto L_80116DF4;
    }
    // 0x80116DE4: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80116DE8: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80116DEC: b           L_80116DF8
    // 0x80116DF0: sb          $t8, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r24;
        goto L_80116DF8;
    // 0x80116DF0: sb          $t8, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r24;
L_80116DF4:
    // 0x80116DF4: sb          $t7, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r15;
L_80116DF8:
    // 0x80116DF8: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x80116DFC: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x80116E00: b           L_80116E40
    // 0x80116E04: sh          $t9, 0x588($sp)
    MEM_H(0X588, ctx->r29) = ctx->r25;
        goto L_80116E40;
    // 0x80116E04: sh          $t9, 0x588($sp)
    MEM_H(0X588, ctx->r29) = ctx->r25;
L_80116E08:
    // 0x80116E08: subu        $t6, $v0, $a0
    ctx->r14 = SUB32(ctx->r2, ctx->r4);
    // 0x80116E0C: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80116E10: lbu         $t9, 0x0($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X0);
    // 0x80116E14: lw          $t6, 0x604($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X604);
    // 0x80116E18: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x80116E1C: sb          $t9, 0x584($sp)
    MEM_B(0X584, ctx->r29) = ctx->r25;
    // 0x80116E20: lw          $t8, -0x4($fp)
    ctx->r24 = MEM_W(ctx->r30, -0X4);
    // 0x80116E24: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x80116E28: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x80116E2C: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80116E30: negu        $t6, $t8
    ctx->r14 = SUB32(0, ctx->r24);
    // 0x80116E34: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80116E38: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80116E3C: sh          $t8, 0x588($sp)
    MEM_H(0X588, ctx->r29) = ctx->r24;
L_80116E40:
    // 0x80116E40: srlv        $a3, $ra, $t2
    ctx->r7 = S32(U32(ctx->r31) >> (ctx->r10 & 31));
    // 0x80116E44: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x80116E48: beq         $at, $zero, L_80116E78
    if (ctx->r1 == 0) {
        // 0x80116E4C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80116E78;
    }
    // 0x80116E4C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80116E50: sllv        $v0, $t9, $v1
    ctx->r2 = S32(ctx->r25 << (ctx->r3 & 31));
L_80116E54:
    // 0x80116E54: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x80116E58: sll         $t6, $a3, 3
    ctx->r14 = S32(ctx->r7 << 3);
    // 0x80116E5C: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x80116E60: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80116E64: lw          $t9, 0x4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X4);
    // 0x80116E68: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80116E6C: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x80116E70: bne         $at, $zero, L_80116E54
    if (ctx->r1 != 0) {
        // 0x80116E74: sw          $t9, 0x4($t7)
        MEM_W(0X4, ctx->r15) = ctx->r25;
            goto L_80116E54;
    }
    // 0x80116E74: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
L_80116E78:
    // 0x80116E78: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80116E7C: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80116E80: and         $t6, $ra, $a3
    ctx->r14 = ctx->r31 & ctx->r7;
    // 0x80116E84: beq         $t6, $zero, L_80116E9C
    if (ctx->r14 == 0) {
        // 0x80116E88: srl         $t8, $a3, 1
        ctx->r24 = S32(U32(ctx->r7) >> 1);
            goto L_80116E9C;
    }
L_80116E88:
    // 0x80116E88: srl         $t8, $a3, 1
    ctx->r24 = S32(U32(ctx->r7) >> 1);
    // 0x80116E8C: xor         $ra, $ra, $a3
    ctx->r31 = ctx->r31 ^ ctx->r7;
    // 0x80116E90: and         $t7, $ra, $t8
    ctx->r15 = ctx->r31 & ctx->r24;
    // 0x80116E94: bne         $t7, $zero, L_80116E88
    if (ctx->r15 != 0) {
        // 0x80116E98: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_80116E88;
    }
    // 0x80116E98: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
L_80116E9C:
    // 0x80116E9C: xor         $ra, $ra, $a3
    ctx->r31 = ctx->r31 ^ ctx->r7;
    // 0x80116EA0: and         $t9, $ra, $a1
    ctx->r25 = ctx->r31 & ctx->r5;
    // 0x80116EA4: beq         $t9, $v0, L_80116ED4
    if (ctx->r25 == ctx->r2) {
        // 0x80116EA8: or          $a1, $s6, $zero
        ctx->r5 = ctx->r22 | 0;
            goto L_80116ED4;
    }
    // 0x80116EA8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
L_80116EAC:
    // 0x80116EAC: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x80116EB0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80116EB4: sllv        $t8, $t6, $t2
    ctx->r24 = S32(ctx->r14 << (ctx->r10 & 31));
    // 0x80116EB8: lw          $t6, -0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, -0X4);
    // 0x80116EBC: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80116EC0: and         $t9, $ra, $t7
    ctx->r25 = ctx->r31 & ctx->r15;
    // 0x80116EC4: addiu       $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x80116EC8: addiu       $t5, $t5, -0x4
    ctx->r13 = ADD32(ctx->r13, -0X4);
    // 0x80116ECC: bne         $t9, $t6, L_80116EAC
    if (ctx->r25 != ctx->r14) {
        // 0x80116ED0: addiu       $t3, $t3, -0x4
        ctx->r11 = ADD32(ctx->r11, -0X4);
            goto L_80116EAC;
    }
    // 0x80116ED0: addiu       $t3, $t3, -0x4
    ctx->r11 = ADD32(ctx->r11, -0X4);
L_80116ED4:
    // 0x80116ED4: bne         $s6, $zero, L_80116C70
    if (ctx->r22 != 0) {
        // 0x80116ED8: addiu       $s6, $s6, -0x1
        ctx->r22 = ADD32(ctx->r22, -0X1);
            goto L_80116C70;
    }
    // 0x80116ED8: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x80116EDC: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_80116EE0:
    // 0x80116EE0: lw          $t8, 0x5A8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5A8);
    // 0x80116EE4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80116EE8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80116EEC: slt         $at, $t8, $s4
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80116EF0: beql        $at, $zero, L_80116C30
    if (ctx->r1 == 0) {
        // 0x80116EF4: lw          $s6, 0x0($v0)
        ctx->r22 = MEM_W(ctx->r2, 0X0);
            goto L_80116C30;
    }
    goto skip_6;
    // 0x80116EF4: lw          $s6, 0x0($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X0);
    skip_6:
    // 0x80116EF8: sw          $s5, 0x60C($sp)
    MEM_W(0X60C, ctx->r29) = ctx->r21;
L_80116EFC:
    // 0x80116EFC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80116F00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80116F04: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80116F08: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80116F0C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80116F10: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80116F14: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80116F18: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80116F1C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80116F20: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80116F24: jr          $ra
    // 0x80116F28: addiu       $sp, $sp, 0x5F8
    ctx->r29 = ADD32(ctx->r29, 0X5F8);
    return;
    // 0x80116F28: addiu       $sp, $sp, 0x5F8
    ctx->r29 = ADD32(ctx->r29, 0X5F8);
;}
RECOMP_FUNC void func_80116F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80116F30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80116F34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80116F38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80116F3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_80116F40:
    // 0x80116F40: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x80116F44: beq         $s4, $at, L_80116F5C
    if (ctx->r20 == ctx->r1) {
        // 0x80116F48: addiu       $at, $zero, 0x1000
        ctx->r1 = ADD32(0, 0X1000);
            goto L_80116F5C;
    }
    // 0x80116F48: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x80116F4C: beq         $s4, $at, L_801170B4
    if (ctx->r20 == ctx->r1) {
        // 0x80116F50: nop
    
            goto L_801170B4;
    }
    // 0x80116F50: nop

    // 0x80116F54: j           L_80117214
    // 0x80116F58: nop

        goto L_80117214;
    // 0x80116F58: nop

L_80116F5C:
    // 0x80116F5C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80116F60: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x80116F64: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x80116F68: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
    // 0x80116F6C: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x80116F70: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x80116F74: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x80116F78: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80116F7C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80116F80: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80116F84: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80116F88: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80116F8C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x80116F90: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80116F94: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80116F98: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x80116F9C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x80116FA0: jal         0x800132BC
    // 0x80116FA4: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    func_800132BC(rdram, ctx);
        goto after_0;
    // 0x80116FA4: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    after_0:
    // 0x80116FA8: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x80116FAC: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x80116FB0: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80116FB4: lw          $a0, 0xC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC);
    // 0x80116FB8: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80116FBC: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x80116FC0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80116FC4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80116FC8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80116FCC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80116FD0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80116FD4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80116FD8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80116FDC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80116FE0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80116FE4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80116FE8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80116FEC: beq         $s2, $zero, L_80117214
    if (ctx->r18 == 0) {
        // 0x80116FF0: addiu       $sp, $sp, 0x48
        ctx->r29 = ADD32(ctx->r29, 0X48);
            goto L_80117214;
    }
    // 0x80116FF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80116FF4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80116FF8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80116FFC: slti        $at, $a2, 0x800
    ctx->r1 = SIGNED(ctx->r6) < 0X800 ? 1 : 0;
    // 0x80117000: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80117004: bne         $at, $zero, L_80117010
    if (ctx->r1 != 0) {
        // 0x80117008: lw          $a1, 0x4A8C($a1)
        ctx->r5 = MEM_W(ctx->r5, 0X4A8C);
            goto L_80117010;
    }
    // 0x80117008: lw          $a1, 0x4A8C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4A8C);
    // 0x8011700C: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
L_80117010:
    // 0x80117010: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80117014: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x80117018: addu        $s3, $s3, $a2
    ctx->r19 = ADD32(ctx->r19, ctx->r6);
    // 0x8011701C: subu        $s2, $s2, $a2
    ctx->r18 = SUB32(ctx->r18, ctx->r6);
    // 0x80117020: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x80117024: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
    // 0x80117028: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x8011702C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x80117030: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x80117034: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80117038: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8011703C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80117040: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80117044: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80117048: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8011704C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80117050: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80117054: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x80117058: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x8011705C: jal         0x80013224
    // 0x80117060: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    func_80013224(rdram, ctx);
        goto after_1;
    // 0x80117060: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    after_1:
    // 0x80117064: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x80117068: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x8011706C: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80117070: lw          $a0, 0xC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC);
    // 0x80117074: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80117078: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x8011707C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80117080: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80117084: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80117088: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8011708C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80117090: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80117094: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80117098: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8011709C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x801170A0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x801170A4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x801170A8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801170AC: j           L_80117214
    // 0x801170B0: nop

        goto L_80117214;
    // 0x801170B0: nop

L_801170B4:
    // 0x801170B4: lui         $fp, 0x8012
    ctx->r30 = S32(0X8012 << 16);
    // 0x801170B8: lw          $fp, 0x4A8C($fp)
    ctx->r30 = MEM_W(ctx->r30, 0X4A8C);
    // 0x801170BC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801170C0: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x801170C4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801170C8: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x801170CC: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
    // 0x801170D0: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x801170D4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x801170D8: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x801170DC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x801170E0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801170E4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801170E8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801170EC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x801170F0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x801170F4: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801170F8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801170FC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x80117100: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x80117104: jal         0x800132BC
    // 0x80117108: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    func_800132BC(rdram, ctx);
        goto after_2;
    // 0x80117108: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    after_2:
    // 0x8011710C: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x80117110: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x80117114: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80117118: lw          $a0, 0xC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC);
    // 0x8011711C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80117120: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x80117124: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80117128: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8011712C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80117130: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80117134: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80117138: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8011713C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80117140: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80117144: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80117148: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8011714C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80117150: beq         $s2, $zero, L_80117214
    if (ctx->r18 == 0) {
        // 0x80117154: addiu       $sp, $sp, 0x48
        ctx->r29 = ADD32(ctx->r29, 0X48);
            goto L_80117214;
    }
    // 0x80117154: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80117158: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8011715C: lw          $a1, 0x4A8C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4A8C);
    // 0x80117160: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80117164: slti        $at, $a2, 0x800
    ctx->r1 = SIGNED(ctx->r6) < 0X800 ? 1 : 0;
    // 0x80117168: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8011716C: bne         $at, $zero, L_80117178
    if (ctx->r1 != 0) {
        // 0x80117170: addiu       $a1, $a1, 0x800
        ctx->r5 = ADD32(ctx->r5, 0X800);
            goto L_80117178;
    }
    // 0x80117170: addiu       $a1, $a1, 0x800
    ctx->r5 = ADD32(ctx->r5, 0X800);
    // 0x80117174: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
L_80117178:
    // 0x80117178: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8011717C: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x80117180: addu        $s3, $s3, $a2
    ctx->r19 = ADD32(ctx->r19, ctx->r6);
    // 0x80117184: subu        $s2, $s2, $a2
    ctx->r18 = SUB32(ctx->r18, ctx->r6);
    // 0x80117188: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x8011718C: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
    // 0x80117190: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x80117194: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x80117198: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x8011719C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x801171A0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801171A4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801171A8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801171AC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x801171B0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x801171B4: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801171B8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801171BC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x801171C0: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x801171C4: jal         0x80013224
    // 0x801171C8: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    func_80013224(rdram, ctx);
        goto after_3;
    // 0x801171C8: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    after_3:
    // 0x801171CC: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x801171D0: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x801171D4: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x801171D8: lw          $a0, 0xC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC);
    // 0x801171DC: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x801171E0: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x801171E4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801171E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801171EC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x801171F0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x801171F4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x801171F8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x801171FC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80117200: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80117204: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80117208: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8011720C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80117210: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
L_80117214:
    // 0x80117214: lbu         $v0, 0x0($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X0);
    // 0x80117218: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8011721C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80117220: sllv        $v0, $v0, $s5
    ctx->r2 = S32(ctx->r2 << (ctx->r21 & 31));
    // 0x80117224: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80117228: slt         $at, $s5, $s0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8011722C: bne         $at, $zero, L_80116F40
    if (ctx->r1 != 0) {
        // 0x80117230: or          $s6, $s6, $v0
        ctx->r22 = ctx->r22 | ctx->r2;
            goto L_80116F40;
    }
    // 0x80117230: or          $s6, $s6, $v0
    ctx->r22 = ctx->r22 | ctx->r2;
    // 0x80117234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80117238: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8011723C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80117240: jr          $ra
    return;
;}
RECOMP_FUNC void func_80117248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80117248: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8011724C: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80117250: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80117254: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80117258: lui         $fp, 0x8012
    ctx->r30 = S32(0X8012 << 16);
    // 0x8011725C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80117260: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x80117264: lw          $fp, 0x4A8C($fp)
    ctx->r30 = MEM_W(ctx->r30, 0X4A8C);
    // 0x80117268: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8011726C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80117270: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80117274: slti        $at, $a2, 0x800
    ctx->r1 = SIGNED(ctx->r6) < 0X800 ? 1 : 0;
    // 0x80117278: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8011727C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80117280: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80117284: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80117288: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8011728C: bne         $at, $zero, L_80117298
    if (ctx->r1 != 0) {
        // 0x80117290: or          $a1, $fp, $zero
        ctx->r5 = ctx->r30 | 0;
            goto L_80117298;
    }
    // 0x80117290: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80117294: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
L_80117298:
    // 0x80117298: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8011729C: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x801172A0: addu        $s3, $s3, $a2
    ctx->r19 = ADD32(ctx->r19, ctx->r6);
    // 0x801172A4: subu        $s2, $s2, $a2
    ctx->r18 = SUB32(ctx->r18, ctx->r6);
    // 0x801172A8: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x801172AC: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
    // 0x801172B0: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x801172B4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x801172B8: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x801172BC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x801172C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801172C4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801172C8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801172CC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x801172D0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x801172D4: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801172D8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801172DC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x801172E0: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x801172E4: jal         0x80013324
    // 0x801172E8: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    func_80013324(rdram, ctx);
        goto after_0;
    // 0x801172E8: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    after_0:
    // 0x801172EC: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x801172F0: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x801172F4: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x801172F8: lw          $a0, 0xC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC);
    // 0x801172FC: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80117300: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x80117304: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80117308: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8011730C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80117310: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80117314: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80117318: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8011731C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80117320: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80117324: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80117328: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8011732C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80117330: beq         $s2, $zero, L_801173F0
    if (ctx->r18 == 0) {
        // 0x80117334: addiu       $sp, $sp, 0x48
        ctx->r29 = ADD32(ctx->r29, 0X48);
            goto L_801173F0;
    }
    // 0x80117334: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80117338: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8011733C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80117340: slti        $at, $a2, 0x800
    ctx->r1 = SIGNED(ctx->r6) < 0X800 ? 1 : 0;
    // 0x80117344: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80117348: bne         $at, $zero, L_80117354
    if (ctx->r1 != 0) {
        // 0x8011734C: addiu       $a1, $a1, 0x800
        ctx->r5 = ADD32(ctx->r5, 0X800);
            goto L_80117354;
    }
    // 0x8011734C: addiu       $a1, $a1, 0x800
    ctx->r5 = ADD32(ctx->r5, 0X800);
    // 0x80117350: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
L_80117354:
    // 0x80117354: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80117358: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x8011735C: addu        $s3, $s3, $a2
    ctx->r19 = ADD32(ctx->r19, ctx->r6);
    // 0x80117360: subu        $s2, $s2, $a2
    ctx->r18 = SUB32(ctx->r18, ctx->r6);
    // 0x80117364: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x80117368: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
    // 0x8011736C: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x80117370: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x80117374: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x80117378: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8011737C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80117380: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80117384: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80117388: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x8011738C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x80117390: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80117394: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80117398: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8011739C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x801173A0: jal         0x80013224
    // 0x801173A4: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    func_80013224(rdram, ctx);
        goto after_1;
    // 0x801173A4: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    after_1:
    // 0x801173A8: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x801173AC: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x801173B0: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x801173B4: lw          $a0, 0xC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC);
    // 0x801173B8: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x801173BC: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x801173C0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801173C4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801173C8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x801173CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x801173D0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x801173D4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x801173D8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x801173DC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x801173E0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x801173E4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x801173E8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x801173EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
L_801173F0:
    // 0x801173F0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801173F4: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
    // 0x801173F8: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x801173FC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80117400: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_80117404:
    // 0x80117404: jal         0x80117448
    // 0x80117408: nop

    func_80117448(rdram, ctx);
        goto after_2;
    // 0x80117408: nop

    after_2:
    // 0x8011740C: bne         $v0, $zero, L_80117404
    if (ctx->r2 != 0) {
        // 0x80117410: nop
    
            goto L_80117404;
    }
    // 0x80117410: nop

    // 0x80117414: jal         0x8001334C
    // 0x80117418: nop

    func_8001334C(rdram, ctx);
        goto after_3;
    // 0x80117418: nop

    after_3:
    // 0x8011741C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80117420: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x80117424: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80117428: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8011742C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80117430: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80117434: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80117438: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8011743C: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80117440: jr          $ra
    // 0x80117444: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80117444: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80117448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80117448: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8011744C: sw          $zero, 0x7388($at)
    MEM_W(0X7388, ctx->r1) = 0;
    // 0x80117450: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80117454: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80117458: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x8011745C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80117460: beq         $at, $zero, L_80117470
    if (ctx->r1 == 0) {
        // 0x80117464: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80117470;
    }
    // 0x80117464: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80117468: jal         0x80116F30
    // 0x8011746C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_0;
    // 0x8011746C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_0:
L_80117470:
    // 0x80117470: andi        $s0, $s6, 0x1
    ctx->r16 = ctx->r22 & 0X1;
    // 0x80117474: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x80117478: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x8011747C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80117480: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x80117484: beql        $at, $zero, L_80117498
    if (ctx->r1 == 0) {
        // 0x80117488: andi        $t1, $s6, 0x3
        ctx->r9 = ctx->r22 & 0X3;
            goto L_80117498;
    }
    goto skip_0;
    // 0x80117488: andi        $t1, $s6, 0x3
    ctx->r9 = ctx->r22 & 0X3;
    skip_0:
    // 0x8011748C: jal         0x80116F30
    // 0x80117490: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_1;
    // 0x80117490: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x80117494: andi        $t1, $s6, 0x3
    ctx->r9 = ctx->r22 & 0X3;
L_80117498:
    // 0x80117498: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8011749C: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x801174A0: beq         $t1, $at, L_801174D4
    if (ctx->r9 == ctx->r1) {
        // 0x801174A4: sub         $s5, $s5, $t0
        ctx->r21 = SUB32(ctx->r21, ctx->r8);
            goto L_801174D4;
    }
    // 0x801174A4: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x801174A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801174AC: beq         $t1, $at, L_801174C4
    if (ctx->r9 == ctx->r1) {
        // 0x801174B0: nop
    
            goto L_801174C4;
    }
    // 0x801174B0: nop

    // 0x801174B4: jal         0x8011797C
    // 0x801174B8: nop

    func_8011797C(rdram, ctx);
        goto after_2;
    // 0x801174B8: nop

    after_2:
    // 0x801174BC: j           L_801174DC
    // 0x801174C0: nop

        goto L_801174DC;
    // 0x801174C0: nop

L_801174C4:
    // 0x801174C4: jal         0x80117824
    // 0x801174C8: nop

    func_80117824(rdram, ctx);
        goto after_3;
    // 0x801174C8: nop

    after_3:
    // 0x801174CC: j           L_801174DC
    // 0x801174D0: nop

        goto L_801174DC;
    // 0x801174D0: nop

L_801174D4:
    // 0x801174D4: jal         0x801174F4
    // 0x801174D8: nop

    func_801174F4(rdram, ctx);
        goto after_4;
    // 0x801174D8: nop

    after_4:
L_801174DC:
    // 0x801174DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801174E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801174E4: sub         $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x801174E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801174EC: jr          $ra
    // 0x801174F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x801174F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801174F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801174F4: addiu       $sp, $sp, -0x540
    ctx->r29 = ADD32(ctx->r29, -0X540);
    // 0x801174F8: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x801174FC: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x80117500: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80117504: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80117508: beq         $at, $zero, L_80117518
    if (ctx->r1 == 0) {
        // 0x8011750C: sw          $s0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r16;
            goto L_80117518;
    }
    // 0x8011750C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80117510: jal         0x80116F30
    // 0x80117514: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_0;
    // 0x80117514: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_0:
L_80117518:
    // 0x80117518: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x8011751C: andi        $s1, $s6, 0x1F
    ctx->r17 = ctx->r22 & 0X1F;
    // 0x80117520: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x80117524: addiu       $s1, $s1, 0x101
    ctx->r17 = ADD32(ctx->r17, 0X101);
    // 0x80117528: beq         $at, $zero, L_80117538
    if (ctx->r1 == 0) {
        // 0x8011752C: srlv        $s6, $s6, $t0
        ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
            goto L_80117538;
    }
    // 0x8011752C: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x80117530: jal         0x80116F30
    // 0x80117534: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_1;
    // 0x80117534: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
L_80117538:
    // 0x80117538: andi        $s0, $s6, 0x1F
    ctx->r16 = ctx->r22 & 0X1F;
    // 0x8011753C: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x80117540: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x80117544: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80117548: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x8011754C: beq         $at, $zero, L_8011755C
    if (ctx->r1 == 0) {
        // 0x80117550: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8011755C;
    }
    // 0x80117550: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80117554: jal         0x80116F30
    // 0x80117558: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_2;
    // 0x80117558: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_2:
L_8011755C:
    // 0x8011755C: andi        $t2, $s6, 0xF
    ctx->r10 = ctx->r22 & 0XF;
    // 0x80117560: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x80117564: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80117568: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x8011756C: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x80117570: or          $t1, $zero, $t2
    ctx->r9 = 0 | ctx->r10;
    // 0x80117574: addiu       $t9, $t9, 0x6640
    ctx->r25 = ADD32(ctx->r25, 0X6640);
    // 0x80117578: beq         $t2, $zero, L_801175CC
    if (ctx->r10 == 0) {
        // 0x8011757C: addi        $t7, $sp, 0x44
        ctx->r15 = ADD32(ctx->r29, 0X44);
            goto L_801175CC;
    }
    // 0x8011757C: addi        $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
L_80117580:
    // 0x80117580: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80117584: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x80117588: beql        $at, $zero, L_8011759C
    if (ctx->r1 == 0) {
        // 0x8011758C: lbu         $v1, 0x0($t9)
        ctx->r3 = MEM_BU(ctx->r25, 0X0);
            goto L_8011759C;
    }
    goto skip_0;
    // 0x8011758C: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
    skip_0:
    // 0x80117590: jal         0x80116F30
    // 0x80117594: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_3;
    // 0x80117594: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_3:
    // 0x80117598: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
L_8011759C:
    // 0x8011759C: andi        $v0, $s6, 0x7
    ctx->r2 = ctx->r22 & 0X7;
    // 0x801175A0: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x801175A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x801175A8: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x801175AC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801175B0: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x801175B4: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x801175B8: bne         $t2, $zero, L_80117580
    if (ctx->r10 != 0) {
        // 0x801175BC: addiu       $t9, $t9, 0x1
        ctx->r25 = ADD32(ctx->r25, 0X1);
            goto L_80117580;
    }
    // 0x801175BC: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x801175C0: sltiu       $at, $t1, 0x13
    ctx->r1 = ctx->r9 < 0X13 ? 1 : 0;
    // 0x801175C4: beql        $at, $zero, L_801175F0
    if (ctx->r1 == 0) {
        // 0x801175C8: addiu       $t5, $zero, 0x7
        ctx->r13 = ADD32(0, 0X7);
            goto L_801175F0;
    }
    goto skip_1;
    // 0x801175C8: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    skip_1:
L_801175CC:
    // 0x801175CC: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
    // 0x801175D0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x801175D4: slti        $at, $t1, 0x13
    ctx->r1 = SIGNED(ctx->r9) < 0X13 ? 1 : 0;
    // 0x801175D8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x801175DC: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x801175E0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x801175E4: bne         $at, $zero, L_801175CC
    if (ctx->r1 != 0) {
        // 0x801175E8: addiu       $t9, $t9, 0x1
        ctx->r25 = ADD32(ctx->r25, 0X1);
            goto L_801175CC;
    }
    // 0x801175E8: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x801175EC: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
L_801175F0:
    // 0x801175F0: addi        $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x801175F4: addi        $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x801175F8: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x801175FC: addi        $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80117600: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80117604: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x80117608: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8011760C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80117610: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80117614: jal         0x80116914
    // 0x80117618: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_80116914(rdram, ctx);
        goto after_4;
    // 0x80117618: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_4:
    // 0x8011761C: addi        $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x80117620: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x80117624: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80117628: addiu       $v0, $v0, 0x670C
    ctx->r2 = ADD32(ctx->r2, 0X670C);
    // 0x8011762C: sll         $v1, $t5, 1
    ctx->r3 = S32(ctx->r13 << 1);
    // 0x80117630: addi        $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x80117634: add         $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80117638: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x8011763C: add         $t9, $s1, $s0
    ctx->r25 = ADD32(ctx->r17, ctx->r16);
    // 0x80117640: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x80117644: addi        $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x80117648: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
L_8011764C:
    // 0x8011764C: beq         $t9, $zero, L_8011777C
    if (ctx->r25 == 0) {
        // 0x80117650: sltu        $at, $s5, $t5
        ctx->r1 = ctx->r21 < ctx->r13 ? 1 : 0;
            goto L_8011777C;
    }
    // 0x80117650: sltu        $at, $s5, $t5
    ctx->r1 = ctx->r21 < ctx->r13 ? 1 : 0;
    // 0x80117654: beql        $at, $zero, L_80117668
    if (ctx->r1 == 0) {
        // 0x80117658: and         $v0, $s6, $t8
        ctx->r2 = ctx->r22 & ctx->r24;
            goto L_80117668;
    }
    goto skip_2;
    // 0x80117658: and         $v0, $s6, $t8
    ctx->r2 = ctx->r22 & ctx->r24;
    skip_2:
    // 0x8011765C: jal         0x80116F30
    // 0x80117660: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80116F30(rdram, ctx);
        goto after_5;
    // 0x80117660: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_5:
    // 0x80117664: and         $v0, $s6, $t8
    ctx->r2 = ctx->r22 & ctx->r24;
L_80117668:
    // 0x80117668: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8011766C: addu        $t1, $t6, $v0
    ctx->r9 = ADD32(ctx->r14, ctx->r2);
    // 0x80117670: lhu         $t0, 0x4($t1)
    ctx->r8 = MEM_HU(ctx->r9, 0X4);
    // 0x80117674: lbu         $v0, 0x1($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X1);
    // 0x80117678: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x8011767C: srlv        $s6, $s6, $v0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r2 & 31));
    // 0x80117680: bne         $at, $zero, L_801176E0
    if (ctx->r1 != 0) {
        // 0x80117684: sub         $s5, $s5, $v0
        ctx->r21 = SUB32(ctx->r21, ctx->r2);
            goto L_801176E0;
    }
    // 0x80117684: sub         $s5, $s5, $v0
    ctx->r21 = SUB32(ctx->r21, ctx->r2);
    // 0x80117688: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8011768C: beq         $t0, $at, L_801176F4
    if (ctx->r8 == ctx->r1) {
        // 0x80117690: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_801176F4;
    }
    // 0x80117690: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80117694: beql        $t0, $at, L_8011773C
    if (ctx->r8 == ctx->r1) {
        // 0x80117698: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_8011773C;
    }
    goto skip_3;
    // 0x80117698: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    skip_3:
    // 0x8011769C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x801176A0: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x801176A4: beql        $at, $zero, L_801176B8
    if (ctx->r1 == 0) {
        // 0x801176A8: andi        $t1, $s6, 0x7F
        ctx->r9 = ctx->r22 & 0X7F;
            goto L_801176B8;
    }
    goto skip_4;
    // 0x801176A8: andi        $t1, $s6, 0x7F
    ctx->r9 = ctx->r22 & 0X7F;
    skip_4:
    // 0x801176AC: jal         0x80116F30
    // 0x801176B0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_6;
    // 0x801176B0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_6:
    // 0x801176B4: andi        $t1, $s6, 0x7F
    ctx->r9 = ctx->r22 & 0X7F;
L_801176B8:
    // 0x801176B8: addiu       $t1, $t1, 0xB
    ctx->r9 = ADD32(ctx->r9, 0XB);
    // 0x801176BC: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x801176C0: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x801176C4: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
L_801176C8:
    // 0x801176C8: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x801176CC: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x801176D0: bne         $t1, $zero, L_801176C8
    if (ctx->r9 != 0) {
        // 0x801176D4: addiu       $t7, $t7, 0x4
        ctx->r15 = ADD32(ctx->r15, 0X4);
            goto L_801176C8;
    }
    // 0x801176D4: addiu       $t7, $t7, 0x4
    ctx->r15 = ADD32(ctx->r15, 0X4);
    // 0x801176D8: j           L_8011764C
    // 0x801176DC: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
        goto L_8011764C;
    // 0x801176DC: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
L_801176E0:
    // 0x801176E0: sw          $t0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r8;
    // 0x801176E4: addiu       $t7, $t7, 0x4
    ctx->r15 = ADD32(ctx->r15, 0X4);
    // 0x801176E8: addiu       $t9, $t9, -0x1
    ctx->r25 = ADD32(ctx->r25, -0X1);
    // 0x801176EC: j           L_8011764C
    // 0x801176F0: or          $t2, $zero, $t0
    ctx->r10 = 0 | ctx->r8;
        goto L_8011764C;
    // 0x801176F0: or          $t2, $zero, $t0
    ctx->r10 = 0 | ctx->r8;
L_801176F4:
    // 0x801176F4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801176F8: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x801176FC: beql        $at, $zero, L_80117710
    if (ctx->r1 == 0) {
        // 0x80117700: andi        $t1, $s6, 0x3
        ctx->r9 = ctx->r22 & 0X3;
            goto L_80117710;
    }
    goto skip_5;
    // 0x80117700: andi        $t1, $s6, 0x3
    ctx->r9 = ctx->r22 & 0X3;
    skip_5:
    // 0x80117704: jal         0x80116F30
    // 0x80117708: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_7;
    // 0x80117708: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_7:
    // 0x8011770C: andi        $t1, $s6, 0x3
    ctx->r9 = ctx->r22 & 0X3;
L_80117710:
    // 0x80117710: addi        $t1, $t1, 0x3
    ctx->r9 = ADD32(ctx->r9, 0X3);
    // 0x80117714: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x80117718: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x8011771C: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
L_80117720:
    // 0x80117720: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80117724: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x80117728: bne         $t1, $zero, L_80117720
    if (ctx->r9 != 0) {
        // 0x8011772C: addiu       $t7, $t7, 0x4
        ctx->r15 = ADD32(ctx->r15, 0X4);
            goto L_80117720;
    }
    // 0x8011772C: addiu       $t7, $t7, 0x4
    ctx->r15 = ADD32(ctx->r15, 0X4);
    // 0x80117730: j           L_8011764C
    // 0x80117734: nop

        goto L_8011764C;
    // 0x80117734: nop

    // 0x80117738: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_8011773C:
    // 0x8011773C: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x80117740: beql        $at, $zero, L_80117754
    if (ctx->r1 == 0) {
        // 0x80117744: andi        $t1, $s6, 0x7
        ctx->r9 = ctx->r22 & 0X7;
            goto L_80117754;
    }
    goto skip_6;
    // 0x80117744: andi        $t1, $s6, 0x7
    ctx->r9 = ctx->r22 & 0X7;
    skip_6:
    // 0x80117748: jal         0x80116F30
    // 0x8011774C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_8;
    // 0x8011774C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_8:
    // 0x80117750: andi        $t1, $s6, 0x7
    ctx->r9 = ctx->r22 & 0X7;
L_80117754:
    // 0x80117754: addi        $t1, $t1, 0x3
    ctx->r9 = ADD32(ctx->r9, 0X3);
    // 0x80117758: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x8011775C: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x80117760: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
L_80117764:
    // 0x80117764: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80117768: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x8011776C: bne         $t1, $zero, L_80117764
    if (ctx->r9 != 0) {
        // 0x80117770: addiu       $t7, $t7, 0x4
        ctx->r15 = ADD32(ctx->r15, 0X4);
            goto L_80117764;
    }
    // 0x80117770: addiu       $t7, $t7, 0x4
    ctx->r15 = ADD32(ctx->r15, 0X4);
    // 0x80117774: j           L_8011764C
    // 0x80117778: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
        goto L_8011764C;
    // 0x80117778: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
L_8011777C:
    // 0x8011777C: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x80117780: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80117784: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80117788: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8011778C: addiu       $v0, $v0, 0x6692
    ctx->r2 = ADD32(ctx->r2, 0X6692);
    // 0x80117790: addi        $v1, $sp, 0x34
    ctx->r3 = ADD32(ctx->r29, 0X34);
    // 0x80117794: addi        $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x80117798: addi        $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8011779C: or          $a1, $zero, $s1
    ctx->r5 = 0 | ctx->r17;
    // 0x801177A0: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    // 0x801177A4: addiu       $a3, $a3, 0x6654
    ctx->r7 = ADD32(ctx->r7, 0X6654);
    // 0x801177A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x801177AC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x801177B0: jal         0x80116914
    // 0x801177B4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_80116914(rdram, ctx);
        goto after_9;
    // 0x801177B4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_9:
    // 0x801177B8: addi        $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x801177BC: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x801177C0: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x801177C4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x801177C8: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x801177CC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x801177D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x801177D4: addiu       $v0, $v0, 0x66EE
    ctx->r2 = ADD32(ctx->r2, 0X66EE);
    // 0x801177D8: addi        $v1, $sp, 0x3C
    ctx->r3 = ADD32(ctx->r29, 0X3C);
    // 0x801177DC: addi        $t0, $sp, 0x40
    ctx->r8 = ADD32(ctx->r29, 0X40);
    // 0x801177E0: or          $a1, $zero, $s0
    ctx->r5 = 0 | ctx->r16;
    // 0x801177E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801177E8: addiu       $a3, $a3, 0x66B2
    ctx->r7 = ADD32(ctx->r7, 0X66B2);
    // 0x801177EC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x801177F0: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x801177F4: jal         0x80116914
    // 0x801177F8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_80116914(rdram, ctx);
        goto after_10;
    // 0x801177F8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_10:
    // 0x801177FC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80117800: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80117804: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80117808: jal         0x80117A08
    // 0x8011780C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_80117A08(rdram, ctx);
        goto after_11;
    // 0x8011780C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_11:
    // 0x80117810: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80117814: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80117818: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8011781C: jr          $ra
    // 0x80117820: addiu       $sp, $sp, 0x540
    ctx->r29 = ADD32(ctx->r29, 0X540);
    return;
    // 0x80117820: addiu       $sp, $sp, 0x540
    ctx->r29 = ADD32(ctx->r29, 0X540);
;}
RECOMP_FUNC void func_80117824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80117824: addiu       $sp, $sp, -0x530
    ctx->r29 = ADD32(ctx->r29, -0X530);
    // 0x80117828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8011782C: addi        $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x80117830: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x80117834: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
L_80117838:
    // 0x80117838: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8011783C: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x80117840: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x80117844: sw          $t1, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r9;
    // 0x80117848: sw          $t1, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r9;
    // 0x8011784C: bne         $t0, $zero, L_80117838
    if (ctx->r8 != 0) {
        // 0x80117850: addiu       $t3, $t3, 0x10
        ctx->r11 = ADD32(ctx->r11, 0X10);
            goto L_80117838;
    }
    // 0x80117850: addiu       $t3, $t3, 0x10
    ctx->r11 = ADD32(ctx->r11, 0X10);
    // 0x80117854: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x80117858: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
L_8011785C:
    // 0x8011785C: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x80117860: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x80117864: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x80117868: sw          $t1, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r9;
    // 0x8011786C: sw          $t1, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r9;
    // 0x80117870: bne         $t0, $zero, L_8011785C
    if (ctx->r8 != 0) {
        // 0x80117874: addiu       $t3, $t3, 0x10
        ctx->r11 = ADD32(ctx->r11, 0X10);
            goto L_8011785C;
    }
    // 0x80117874: addiu       $t3, $t3, 0x10
    ctx->r11 = ADD32(ctx->r11, 0X10);
    // 0x80117878: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8011787C: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
L_80117880:
    // 0x80117880: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x80117884: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x80117888: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x8011788C: sw          $t1, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r9;
    // 0x80117890: sw          $t1, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r9;
    // 0x80117894: bne         $t0, $zero, L_80117880
    if (ctx->r8 != 0) {
        // 0x80117898: addiu       $t3, $t3, 0x10
        ctx->r11 = ADD32(ctx->r11, 0X10);
            goto L_80117880;
    }
    // 0x80117898: addiu       $t3, $t3, 0x10
    ctx->r11 = ADD32(ctx->r11, 0X10);
    // 0x8011789C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x801178A0: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x801178A4: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x801178A8: sw          $t1, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r9;
    // 0x801178AC: sw          $t1, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r9;
    // 0x801178B0: sw          $t1, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r9;
    // 0x801178B4: sw          $t1, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r9;
    // 0x801178B8: sw          $t1, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->r9;
    // 0x801178BC: sw          $t1, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->r9;
    // 0x801178C0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x801178C4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x801178C8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x801178CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x801178D0: addiu       $v0, $v0, 0x6692
    ctx->r2 = ADD32(ctx->r2, 0X6692);
    // 0x801178D4: addi        $v1, $sp, 0x20
    ctx->r3 = ADD32(ctx->r29, 0X20);
    // 0x801178D8: addi        $t0, $sp, 0x24
    ctx->r8 = ADD32(ctx->r29, 0X24);
    // 0x801178DC: addi        $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x801178E0: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x801178E4: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    // 0x801178E8: addiu       $a3, $a3, 0x6654
    ctx->r7 = ADD32(ctx->r7, 0X6654);
    // 0x801178EC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x801178F0: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x801178F4: jal         0x80116914
    // 0x801178F8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_80116914(rdram, ctx);
        goto after_0;
    // 0x801178F8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
    // 0x801178FC: addi        $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x80117900: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x80117904: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
L_80117908:
    // 0x80117908: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8011790C: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x80117910: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x80117914: sw          $t1, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r9;
    // 0x80117918: bne         $t0, $zero, L_80117908
    if (ctx->r8 != 0) {
        // 0x8011791C: addiu       $t3, $t3, 0xC
        ctx->r11 = ADD32(ctx->r11, 0XC);
            goto L_80117908;
    }
    // 0x8011791C: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80117920: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80117924: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80117928: addiu       $v0, $v0, 0x66EE
    ctx->r2 = ADD32(ctx->r2, 0X66EE);
    // 0x8011792C: addi        $v1, $sp, 0x28
    ctx->r3 = ADD32(ctx->r29, 0X28);
    // 0x80117930: addi        $t0, $sp, 0x2C
    ctx->r8 = ADD32(ctx->r29, 0X2C);
    // 0x80117934: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x80117938: addi        $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8011793C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x80117940: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80117944: addiu       $a3, $a3, 0x66B2
    ctx->r7 = ADD32(ctx->r7, 0X66B2);
    // 0x80117948: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8011794C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x80117950: jal         0x80116914
    // 0x80117954: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_80116914(rdram, ctx);
        goto after_1;
    // 0x80117954: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_1:
    // 0x80117958: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8011795C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80117960: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80117964: jal         0x80117A08
    // 0x80117968: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_80117A08(rdram, ctx);
        goto after_2;
    // 0x80117968: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8011796C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80117970: addiu       $sp, $sp, 0x530
    ctx->r29 = ADD32(ctx->r29, 0X530);
    // 0x80117974: jr          $ra
    return;
;}
RECOMP_FUNC void func_8011797C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8011797C: andi        $t0, $s5, 0x7
    ctx->r8 = ctx->r21 & 0X7;
    // 0x80117980: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x80117984: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x80117988: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x8011798C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80117990: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x80117994: beq         $at, $zero, L_801179A4
    if (ctx->r1 == 0) {
        // 0x80117998: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_801179A4;
    }
    // 0x80117998: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8011799C: jal         0x80116F30
    // 0x801179A0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_0;
    // 0x801179A0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_0:
L_801179A4:
    // 0x801179A4: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x801179A8: andi        $t1, $s6, 0xFFFF
    ctx->r9 = ctx->r22 & 0XFFFF;
    // 0x801179AC: sltu        $at, $s5, $t0
    ctx->r1 = ctx->r21 < ctx->r8 ? 1 : 0;
    // 0x801179B0: beq         $at, $zero, L_801179C0
    if (ctx->r1 == 0) {
        // 0x801179B4: srlv        $s6, $s6, $t0
        ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
            goto L_801179C0;
    }
    // 0x801179B4: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x801179B8: jal         0x80116F30
    // 0x801179BC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80116F30(rdram, ctx);
        goto after_1;
    // 0x801179BC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
L_801179C0:
    // 0x801179C0: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x801179C4: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x801179C8: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
L_801179CC:
    // 0x801179CC: sltu        $at, $s5, $t3
    ctx->r1 = ctx->r21 < ctx->r11 ? 1 : 0;
    // 0x801179D0: beql        $at, $zero, L_801179E4
    if (ctx->r1 == 0) {
        // 0x801179D4: sb          $s6, 0x0($s7)
        MEM_B(0X0, ctx->r23) = ctx->r22;
            goto L_801179E4;
    }
    goto skip_0;
    // 0x801179D4: sb          $s6, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r22;
    skip_0:
    // 0x801179D8: jal         0x80116F30
    // 0x801179DC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80116F30(rdram, ctx);
        goto after_2;
    // 0x801179DC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_2:
    // 0x801179E0: sb          $s6, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r22;
L_801179E4:
    // 0x801179E4: addi        $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x801179E8: srlv        $s6, $s6, $t3
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r11 & 31));
    // 0x801179EC: sub         $s5, $s5, $t3
    ctx->r21 = SUB32(ctx->r21, ctx->r11);
    // 0x801179F0: bne         $t1, $zero, L_801179CC
    if (ctx->r9 != 0) {
        // 0x801179F4: addi        $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_801179CC;
    }
    // 0x801179F4: addi        $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x801179F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801179FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80117A00: jr          $ra
    return;
;}
RECOMP_FUNC void func_80117A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80117A08: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80117A0C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80117A10: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x80117A14: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x80117A18: or          $t9, $a2, $zero
    ctx->r25 = ctx->r6 | 0;
    // 0x80117A1C: or          $t8, $a3, $zero
    ctx->r24 = ctx->r7 | 0;
    // 0x80117A20: addiu       $t2, $t2, 0x670C
    ctx->r10 = ADD32(ctx->r10, 0X670C);
    // 0x80117A24: sw          $ra, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r31;
    // 0x80117A28: sll         $v0, $t9, 1
    ctx->r2 = S32(ctx->r25 << 1);
    // 0x80117A2C: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80117A30: addu        $v1, $t2, $v0
    ctx->r3 = ADD32(ctx->r10, ctx->r2);
    // 0x80117A34: addu        $t1, $t2, $t0
    ctx->r9 = ADD32(ctx->r10, ctx->r8);
    // 0x80117A38: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80117A3C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80117A40: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x80117A44: lhu         $t3, 0x0($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X0);
L_80117A48:
    // 0x80117A48: sltu        $at, $s5, $t9
    ctx->r1 = ctx->r21 < ctx->r25 ? 1 : 0;
L_80117A4C:
    // 0x80117A4C: beql        $at, $zero, L_80117A60
    if (ctx->r1 == 0) {
        // 0x80117A50: and         $v0, $s6, $t4
        ctx->r2 = ctx->r22 & ctx->r12;
            goto L_80117A60;
    }
    goto skip_0;
    // 0x80117A50: and         $v0, $s6, $t4
    ctx->r2 = ctx->r22 & ctx->r12;
    skip_0:
    // 0x80117A54: jal         0x80116F30
    // 0x80117A58: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80116F30(rdram, ctx);
        goto after_0;
    // 0x80117A58: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_0:
    // 0x80117A5C: and         $v0, $s6, $t4
    ctx->r2 = ctx->r22 & ctx->r12;
L_80117A60:
    // 0x80117A60: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80117A64: addu        $t6, $s1, $v0
    ctx->r14 = ADD32(ctx->r17, ctx->r2);
    // 0x80117A68: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80117A6C: slti        $at, $t7, 0x11
    ctx->r1 = SIGNED(ctx->r15) < 0X11 ? 1 : 0;
    // 0x80117A70: bnel        $at, $zero, L_80117AC8
    if (ctx->r1 != 0) {
        // 0x80117A74: lbu         $v0, 0x1($t6)
        ctx->r2 = MEM_BU(ctx->r14, 0X1);
            goto L_80117AC8;
    }
    goto skip_1;
    // 0x80117A74: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
    skip_1:
    // 0x80117A78: lb          $v1, 0x1($t6)
    ctx->r3 = MEM_B(ctx->r14, 0X1);
L_80117A7C:
    // 0x80117A7C: addi        $t7, $t7, -0x10
    ctx->r15 = ADD32(ctx->r15, -0X10);
    // 0x80117A80: sub         $s5, $s5, $v1
    ctx->r21 = SUB32(ctx->r21, ctx->r3);
    // 0x80117A84: sltu        $at, $s5, $t7
    ctx->r1 = ctx->r21 < ctx->r15 ? 1 : 0;
    // 0x80117A88: beq         $at, $zero, L_80117A98
    if (ctx->r1 == 0) {
        // 0x80117A8C: srlv        $s6, $s6, $v1
        ctx->r22 = S32(U32(ctx->r22) >> (ctx->r3 & 31));
            goto L_80117A98;
    }
    // 0x80117A8C: srlv        $s6, $s6, $v1
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r3 & 31));
    // 0x80117A90: jal         0x80116F30
    // 0x80117A94: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80116F30(rdram, ctx);
        goto after_1;
    // 0x80117A94: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
L_80117A98:
    // 0x80117A98: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    // 0x80117A9C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80117AA0: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x80117AA4: lw          $t0, 0x4($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X4);
    // 0x80117AA8: and         $t1, $t1, $s6
    ctx->r9 = ctx->r9 & ctx->r22;
    // 0x80117AAC: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80117AB0: add         $t6, $t0, $t1
    ctx->r14 = ADD32(ctx->r8, ctx->r9);
    // 0x80117AB4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80117AB8: sltiu       $at, $t7, 0x11
    ctx->r1 = ctx->r15 < 0X11 ? 1 : 0;
    // 0x80117ABC: beql        $at, $zero, L_80117A7C
    if (ctx->r1 == 0) {
        // 0x80117AC0: lb          $v1, 0x1($t6)
        ctx->r3 = MEM_B(ctx->r14, 0X1);
            goto L_80117A7C;
    }
    goto skip_2;
    // 0x80117AC0: lb          $v1, 0x1($t6)
    ctx->r3 = MEM_B(ctx->r14, 0X1);
    skip_2:
    // 0x80117AC4: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
L_80117AC8:
    // 0x80117AC8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80117ACC: srlv        $s6, $s6, $v0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r2 & 31));
    // 0x80117AD0: bne         $t7, $at, L_80117AE8
    if (ctx->r15 != ctx->r1) {
        // 0x80117AD4: sub         $s5, $s5, $v0
        ctx->r21 = SUB32(ctx->r21, ctx->r2);
            goto L_80117AE8;
    }
    // 0x80117AD4: sub         $s5, $s5, $v0
    ctx->r21 = SUB32(ctx->r21, ctx->r2);
    // 0x80117AD8: lhu         $v0, 0x4($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X4);
    // 0x80117ADC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80117AE0: j           L_80117A48
    // 0x80117AE4: sb          $v0, -0x1($s7)
    MEM_B(-0X1, ctx->r23) = ctx->r2;
        goto L_80117A48;
    // 0x80117AE4: sb          $v0, -0x1($s7)
    MEM_B(-0X1, ctx->r23) = ctx->r2;
L_80117AE8:
    // 0x80117AE8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80117AEC: beq         $t7, $at, L_80117C40
    if (ctx->r15 == ctx->r1) {
        // 0x80117AF0: sltu        $at, $s5, $t7
        ctx->r1 = ctx->r21 < ctx->r15 ? 1 : 0;
            goto L_80117C40;
    }
    // 0x80117AF0: sltu        $at, $s5, $t7
    ctx->r1 = ctx->r21 < ctx->r15 ? 1 : 0;
    // 0x80117AF4: beql        $at, $zero, L_80117B08
    if (ctx->r1 == 0) {
        // 0x80117AF8: sll         $v0, $t7, 1
        ctx->r2 = S32(ctx->r15 << 1);
            goto L_80117B08;
    }
    goto skip_3;
    // 0x80117AF8: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    skip_3:
    // 0x80117AFC: jal         0x80116F30
    // 0x80117B00: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80116F30(rdram, ctx);
        goto after_2;
    // 0x80117B00: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x80117B04: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
L_80117B08:
    // 0x80117B08: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80117B0C: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x80117B10: lhu         $t0, 0x4($t6)
    ctx->r8 = MEM_HU(ctx->r14, 0X4);
    // 0x80117B14: sub         $s5, $s5, $t7
    ctx->r21 = SUB32(ctx->r21, ctx->r15);
    // 0x80117B18: sltu        $at, $s5, $t8
    ctx->r1 = ctx->r21 < ctx->r24 ? 1 : 0;
    // 0x80117B1C: and         $t1, $t1, $s6
    ctx->r9 = ctx->r9 & ctx->r22;
    // 0x80117B20: srlv        $s6, $s6, $t7
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r15 & 31));
    // 0x80117B24: beq         $at, $zero, L_80117B34
    if (ctx->r1 == 0) {
        // 0x80117B28: addu        $t5, $t0, $t1
        ctx->r13 = ADD32(ctx->r8, ctx->r9);
            goto L_80117B34;
    }
    // 0x80117B28: addu        $t5, $t0, $t1
    ctx->r13 = ADD32(ctx->r8, ctx->r9);
    // 0x80117B2C: jal         0x80116F30
    // 0x80117B30: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80116F30(rdram, ctx);
        goto after_3;
    // 0x80117B30: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
L_80117B34:
    // 0x80117B34: and         $v0, $t3, $s6
    ctx->r2 = ctx->r11 & ctx->r22;
    // 0x80117B38: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80117B3C: addu        $t6, $s0, $v0
    ctx->r14 = ADD32(ctx->r16, ctx->r2);
    // 0x80117B40: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80117B44: slti        $at, $t7, 0x11
    ctx->r1 = SIGNED(ctx->r15) < 0X11 ? 1 : 0;
    // 0x80117B48: bnel        $at, $zero, L_80117BA0
    if (ctx->r1 != 0) {
        // 0x80117B4C: lbu         $v0, 0x1($t6)
        ctx->r2 = MEM_BU(ctx->r14, 0X1);
            goto L_80117BA0;
    }
    goto skip_4;
    // 0x80117B4C: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
    skip_4:
    // 0x80117B50: lbu         $t0, 0x1($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X1);
L_80117B54:
    // 0x80117B54: addi        $t7, $t7, -0x10
    ctx->r15 = ADD32(ctx->r15, -0X10);
    // 0x80117B58: sub         $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x80117B5C: sltu        $at, $s5, $t7
    ctx->r1 = ctx->r21 < ctx->r15 ? 1 : 0;
    // 0x80117B60: beq         $at, $zero, L_80117B70
    if (ctx->r1 == 0) {
        // 0x80117B64: srlv        $s6, $s6, $t0
        ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
            goto L_80117B70;
    }
    // 0x80117B64: srlv        $s6, $s6, $t0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r8 & 31));
    // 0x80117B68: jal         0x80116F30
    // 0x80117B6C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80116F30(rdram, ctx);
        goto after_4;
    // 0x80117B6C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_4:
L_80117B70:
    // 0x80117B70: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    // 0x80117B74: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80117B78: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x80117B7C: lw          $t0, 0x4($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X4);
    // 0x80117B80: and         $t1, $t1, $s6
    ctx->r9 = ctx->r9 & ctx->r22;
    // 0x80117B84: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80117B88: addu        $t6, $t0, $t1
    ctx->r14 = ADD32(ctx->r8, ctx->r9);
    // 0x80117B8C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80117B90: sltiu       $at, $t7, 0x11
    ctx->r1 = ctx->r15 < 0X11 ? 1 : 0;
    // 0x80117B94: beql        $at, $zero, L_80117B54
    if (ctx->r1 == 0) {
        // 0x80117B98: lbu         $t0, 0x1($t6)
        ctx->r8 = MEM_BU(ctx->r14, 0X1);
            goto L_80117B54;
    }
    goto skip_5;
    // 0x80117B98: lbu         $t0, 0x1($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X1);
    skip_5:
    // 0x80117B9C: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
L_80117BA0:
    // 0x80117BA0: sub         $s5, $s5, $v0
    ctx->r21 = SUB32(ctx->r21, ctx->r2);
    // 0x80117BA4: sltu        $at, $s5, $t7
    ctx->r1 = ctx->r21 < ctx->r15 ? 1 : 0;
    // 0x80117BA8: beq         $at, $zero, L_80117BB8
    if (ctx->r1 == 0) {
        // 0x80117BAC: srlv        $s6, $s6, $v0
        ctx->r22 = S32(U32(ctx->r22) >> (ctx->r2 & 31));
            goto L_80117BB8;
    }
    // 0x80117BAC: srlv        $s6, $s6, $v0
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r2 & 31));
    // 0x80117BB0: jal         0x80116F30
    // 0x80117BB4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80116F30(rdram, ctx);
        goto after_5;
    // 0x80117BB4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_5:
L_80117BB8:
    // 0x80117BB8: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    // 0x80117BBC: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80117BC0: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x80117BC4: lhu         $v1, 0x4($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X4);
    // 0x80117BC8: sub         $s5, $s5, $t7
    ctx->r21 = SUB32(ctx->r21, ctx->r15);
    // 0x80117BCC: and         $t1, $t1, $s6
    ctx->r9 = ctx->r9 & ctx->r22;
    // 0x80117BD0: sub         $t0, $s7, $v1
    ctx->r8 = SUB32(ctx->r23, ctx->r3);
    // 0x80117BD4: sub         $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x80117BD8: andi        $t1, $t5, 0x3
    ctx->r9 = ctx->r13 & 0X3;
    // 0x80117BDC: beq         $t1, $zero, L_80117C08
    if (ctx->r9 == 0) {
        // 0x80117BE0: srlv        $s6, $s6, $t7
        ctx->r22 = S32(U32(ctx->r22) >> (ctx->r15 & 31));
            goto L_80117C08;
    }
    // 0x80117BE0: srlv        $s6, $s6, $t7
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r15 & 31));
    // 0x80117BE4: sub         $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
L_80117BE8:
    // 0x80117BE8: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80117BEC: addi        $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80117BF0: addi        $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80117BF4: addi        $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80117BF8: bne         $t1, $zero, L_80117BE8
    if (ctx->r9 != 0) {
        // 0x80117BFC: sb          $v0, -0x1($s7)
        MEM_B(-0X1, ctx->r23) = ctx->r2;
            goto L_80117BE8;
    }
    // 0x80117BFC: sb          $v0, -0x1($s7)
    MEM_B(-0X1, ctx->r23) = ctx->r2;
    // 0x80117C00: beql        $t5, $zero, L_80117A4C
    if (ctx->r13 == 0) {
        // 0x80117C04: sltu        $at, $s5, $t9
        ctx->r1 = ctx->r21 < ctx->r25 ? 1 : 0;
            goto L_80117A4C;
    }
    goto skip_6;
    // 0x80117C04: sltu        $at, $s5, $t9
    ctx->r1 = ctx->r21 < ctx->r25 ? 1 : 0;
    skip_6:
L_80117C08:
    // 0x80117C08: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80117C0C: addiu       $t5, $t5, -0x4
    ctx->r13 = ADD32(ctx->r13, -0X4);
    // 0x80117C10: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80117C14: sb          $v0, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r2;
    // 0x80117C18: lbu         $v1, -0x3($t0)
    ctx->r3 = MEM_BU(ctx->r8, -0X3);
    // 0x80117C1C: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x80117C20: sb          $v1, -0x3($s7)
    MEM_B(-0X3, ctx->r23) = ctx->r3;
    // 0x80117C24: lbu         $v0, -0x2($t0)
    ctx->r2 = MEM_BU(ctx->r8, -0X2);
    // 0x80117C28: sb          $v0, -0x2($s7)
    MEM_B(-0X2, ctx->r23) = ctx->r2;
    // 0x80117C2C: lbu         $v1, -0x1($t0)
    ctx->r3 = MEM_BU(ctx->r8, -0X1);
    // 0x80117C30: bne         $t5, $zero, L_80117C08
    if (ctx->r13 != 0) {
        // 0x80117C34: sb          $v1, -0x1($s7)
        MEM_B(-0X1, ctx->r23) = ctx->r3;
            goto L_80117C08;
    }
    // 0x80117C34: sb          $v1, -0x1($s7)
    MEM_B(-0X1, ctx->r23) = ctx->r3;
    // 0x80117C38: j           L_80117A48
    // 0x80117C3C: nop

        goto L_80117A48;
    // 0x80117C3C: nop

L_80117C40:
    // 0x80117C40: lw          $ra, 0x8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8);
    // 0x80117C44: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x80117C48: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x80117C4C: jr          $ra
    // 0x80117C50: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80117C50: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80800000_anseq(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80800000:
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800010: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x80800014: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800018: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8080001C: beql        $v0, $zero, L_80800044
    if (ctx->r2 == 0) {
        // 0x80800020: lbu         $t9, 0x4($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X4);
            goto L_80800044;
    }
    goto skip_0;
    // 0x80800020: lbu         $t9, 0x4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4);
    skip_0:
    // 0x80800024: beq         $v0, $at, L_808000F8
    if (ctx->r2 == ctx->r1) {
        // 0x80800028: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_808000F8;
    }
    // 0x80800028: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8080002C: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80800030: bne         $t7, $zero, L_808000F8
    if (ctx->r15 != 0) {
        // 0x80800034: sb          $t6, 0x6($a1)
        MEM_B(0X6, ctx->r5) = ctx->r14;
            goto L_808000F8;
    }
    // 0x80800034: sb          $t6, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r14;
    // 0x80800038: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8080003C: sb          $t8, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r24;
    // 0x80800040: lbu         $t9, 0x4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4);
L_80800044:
    // 0x80800044: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x80800048: beq         $at, $zero, L_808000F8
    if (ctx->r1 == 0) {
        // 0x8080004C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_808000F8;
    }
    // 0x8080004C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80800050: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(4, 0X470) << 16);
    // 0x80800054: addu        $at, $at, $t9
    gpr jr_addend_8080005C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80800058: lw          $t9, 0x470($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(4, 0X470));
    // 0x8080005C: jr          $t9
    // 0x80800060: nop

    switch (jr_addend_8080005C >> 2) {
        case 0: goto L_80800064; break;
        case 1: goto L_80800078; break;
        case 2: goto L_80800090; break;
        case 3: goto L_808000AC; break;
        case 4: goto L_808000C8; break;
        case 5: goto L_808000E8; break;
        case 6: goto L_80800000; break;
        case 7: goto L_80800000; break;
        default: switch_error(__func__, 0x8080005C, 0x80800470);
    }
    // 0x80800060: nop

L_80800064:
    // 0x80800064: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x80800068: jalr        $t9
    // 0x8080006C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8080006C: nop

    after_0:
    // 0x80800070: b           L_808000FC
    // 0x80800074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000FC;
    // 0x80800074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800078:
    // 0x80800078: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x8080007C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80800080: jalr        $t9
    // 0x80800084: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80800084: nop

    after_1:
    // 0x80800088: b           L_808000FC
    // 0x8080008C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000FC;
    // 0x8080008C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800090:
    // 0x80800090: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x80800094: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80800098: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x8080009C: jalr        $t9
    // 0x808000A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x808000A0: nop

    after_2:
    // 0x808000A4: b           L_808000FC
    // 0x808000A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000FC;
    // 0x808000A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000AC:
    // 0x808000AC: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x808000B0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x808000B4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x808000B8: jalr        $t9
    // 0x808000BC: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x808000BC: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    after_3:
    // 0x808000C0: b           L_808000FC
    // 0x808000C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000FC;
    // 0x808000C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000C8:
    // 0x808000C8: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x808000CC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x808000D0: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x808000D4: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x808000D8: jalr        $t9
    // 0x808000DC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x808000DC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_4:
    // 0x808000E0: b           L_808000FC
    // 0x808000E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000FC;
    // 0x808000E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000E8:
    // 0x808000E8: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x808000EC: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x808000F0: jalr        $t9
    // 0x808000F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x808000F4: nop

    after_5:
L_808000F8:
    // 0x808000F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000FC:
    // 0x808000FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800104: jr          $ra
    // 0x80800108: nop

    return;
    // 0x80800108: nop

;}
RECOMP_FUNC void anseq_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080010C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800114: jal         0x800B2890
    // 0x80800118: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    func_800B2890(rdram, ctx);
        goto after_0;
    // 0x80800118: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    after_0:
    // 0x8080011C: jal         0x800B28B8
    // 0x80800120: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B28B8(rdram, ctx);
        goto after_1;
    // 0x80800120: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080012C: jr          $ra
    // 0x80800130: nop

    return;
    // 0x80800130: nop

;}
RECOMP_FUNC void func_80800134_anseq(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800134: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080013C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800140: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800144: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800148: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8080014C: jal         0x800B2A58
    // 0x80800150: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    func_800B2A58(rdram, ctx);
        goto after_0;
    // 0x80800150: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    after_0:
    // 0x80800154: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800158: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080015C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800160: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80800164: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80800168: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8080016C: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(4, 0X490) << 16);
    // 0x80800170: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x80800174: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80800178: addiu       $a2, $a2, 0x490
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(4, 0X490));
    // 0x8080017C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800180: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
    // 0x80800184: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080018C: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x80800190: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80800194: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x80800198: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8080019C: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
    // 0x808001A0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x808001A4: sw          $t2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r10;
    // 0x808001A8: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x808001AC: bc1f        L_808001D0
    if (!c1cs) {
        // 0x808001B0: sb          $t3, 0x6($v0)
        MEM_B(0X6, ctx->r2) = ctx->r11;
            goto L_808001D0;
    }
    // 0x808001B0: sb          $t3, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r11;
    // 0x808001B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808001B8: jal         0x800001EC
    // 0x808001BC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    anseq_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808001BC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x808001C0: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(4, 0X490) << 16);
    // 0x808001C4: addiu       $a2, $a2, 0x490
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(4, 0X490));
    // 0x808001C8: b           L_808001D4
    // 0x808001CC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_808001D4;
    // 0x808001CC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_808001D0:
    // 0x808001D0: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
L_808001D4:
    // 0x808001D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001D8: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x808001DC: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x808001E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001E4: jr          $ra
    // 0x808001E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x808001E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void anseq_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001EC: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(4, 0X494) << 16);
    // 0x808001F0: lw          $t6, 0x494($t6)
    ctx->r14 = MEM_W(ctx->r14, (int16_t)RELOC_LO16(4, 0X494));
    // 0x808001F4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x808001F8: jr          $ra
    // 0x808001FC: sb          $a1, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r5;
    return;
    // 0x808001FC: sb          $a1, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void anseq_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800200: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800204: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800208: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8080020C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80800210: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80800214: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80800218: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080021C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80800220: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800224: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80800228: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8080022C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80800230: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800234: jal         0x80000134
    // 0x80800238: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_80800134_anseq(rdram, ctx);
        goto after_0;
    // 0x80800238: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8080023C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800240: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800244: jr          $ra
    // 0x80800248: nop

    return;
    // 0x80800248: nop

;}
RECOMP_FUNC void anseq_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080024C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800250: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800254: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80800258: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8080025C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80800260: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80800264: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80800268: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080026C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80800270: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800274: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800278: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8080027C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800280: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800284: jal         0x80000134
    // 0x80800288: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_80800134_anseq(rdram, ctx);
        goto after_0;
    // 0x80800288: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x8080028C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800294: jr          $ra
    // 0x80800298: nop

    return;
    // 0x80800298: nop

;}
RECOMP_FUNC void anseq_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080029C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808002A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808002A4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x808002A8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x808002AC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x808002B0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x808002B4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x808002B8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x808002BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808002C0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x808002C4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x808002C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x808002CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808002D0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x808002D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x808002D8: jal         0x80000134
    // 0x808002DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_80800134_anseq(rdram, ctx);
        goto after_0;
    // 0x808002DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x808002E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808002E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808002E8: jr          $ra
    // 0x808002EC: nop

    return;
    // 0x808002EC: nop

;}
RECOMP_FUNC void anseq_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002FC: jal         0x8001B798
    // 0x80800300: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x80800300: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    after_0:
    // 0x80800304: jal         0x800B2D48
    // 0x80800308: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    func_800B2D48(rdram, ctx);
        goto after_1;
    // 0x80800308: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    after_1:
    // 0x8080030C: jal         0x8001B754
    // 0x80800310: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80800310: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    after_2:
    // 0x80800314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080031C: jr          $ra
    // 0x80800320: nop

    return;
    // 0x80800320: nop

;}
RECOMP_FUNC void anseq_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080032C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800330: jal         0x8001B668
    // 0x80800334: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8001B668(rdram, ctx);
        goto after_0;
    // 0x80800334: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800338: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8080033C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80800340: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80800344: jal         0x8001B798
    // 0x80800348: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8001B798(rdram, ctx);
        goto after_1;
    // 0x80800348: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x8080034C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80800350: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800354: jal         0x800B2DC0
    // 0x80800358: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800B2DC0(rdram, ctx);
        goto after_2;
    // 0x80800358: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8080035C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800360: jal         0x8000010C
    // 0x80800364: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    anseq_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800364: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    after_3:
    // 0x80800368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080036C: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x80800370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800374: jr          $ra
    // 0x80800378: nop

    return;
    // 0x80800378: nop

;}
RECOMP_FUNC void anseq_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080037C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(4, 0X490) << 16);
    // 0x80800380: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80800384: jr          $ra
    // 0x80800388: sw          $a1, 0x490($at)
    MEM_W((int16_t)RELOC_LO16(4, 0X490), ctx->r1) = ctx->r5;
    return;
    // 0x80800388: sw          $a1, 0x490($at)
    MEM_W((int16_t)RELOC_LO16(4, 0X490), ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void anseq_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080038C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800390: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80800394: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80800398: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8080039C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x808003A0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808003A4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x808003A8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x808003AC: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x808003B0: jal         0x800B2890
    // 0x808003B4: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    func_800B2890(rdram, ctx);
        goto after_0;
    // 0x808003B4: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    after_0:
    // 0x808003B8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808003BC: jal         0x800B28C4
    // 0x808003C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x808003C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808003C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808003C8: jal         0x800B296C
    // 0x808003CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800B296C(rdram, ctx);
        goto after_2;
    // 0x808003CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x808003D0: beq         $v0, $s0, L_80800424
    if (ctx->r2 == ctx->r16) {
        // 0x808003D4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80800424;
    }
    // 0x808003D4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x808003D8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x808003DC: nop

    // 0x808003E0: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
L_808003E4:
    // 0x808003E4: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x808003E8: nop

    // 0x808003EC: bc1tl       L_80800408
    if (c1cs) {
        // 0x808003F0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80800408;
    }
    goto skip_0;
    // 0x808003F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x808003F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808003F8: jal         0x8008B348
    // 0x808003FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x808003FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x80800400: beq         $v0, $zero, L_80800410
    if (ctx->r2 == 0) {
        // 0x80800404: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80800410;
    }
    // 0x80800404: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80800408:
    // 0x80800408: jal         0x80000000
    // 0x8080040C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800000_anseq(rdram, ctx);
        goto after_4;
    // 0x8080040C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_80800410:
    // 0x80800410: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x80800414: jal         0x800B296C
    // 0x80800418: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800B296C(rdram, ctx);
        goto after_5;
    // 0x80800418: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8080041C: bnel        $v0, $s0, L_808003E4
    if (ctx->r2 != ctx->r16) {
        // 0x80800420: lwc1        $f0, 0x0($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
            goto L_808003E4;
    }
    goto skip_1;
    // 0x80800420: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    skip_1:
L_80800424:
    // 0x80800424: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800428: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8080042C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800430: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800434: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80800438: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8080043C: jr          $ra
    // 0x80800440: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80800440: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void anseq_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080044C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800450: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80800454: jal         0x8001B798
    // 0x80800458: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x80800458: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x8080045C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800464: jr          $ra
    // 0x80800468: nop

    return;
    // 0x80800468: nop

;}
RECOMP_FUNC void baairbar_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800010: jal         0x800DA298
    // 0x80800014: addiu       $a0, $zero, 0xE9
    ctx->r4 = ADD32(0, 0XE9);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a0, $zero, 0xE9
    ctx->r4 = ADD32(0, 0XE9);
    after_0:
    // 0x80800018: beq         $v0, $zero, L_80800030
    if (ctx->r2 == 0) {
        // 0x8080001C: nop
    
            goto L_80800030;
    }
    // 0x8080001C: nop

    // 0x80800020: jal         0x80088240
    // 0x80800024: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    _gclevel_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800024: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x80800028: bnel        $v0, $zero, L_80800090
    if (ctx->r2 != 0) {
        // 0x8080002C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800090;
    }
    goto skip_0;
    // 0x8080002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_80800030:
    // 0x80800030: jal         0x8008DAA8
    // 0x80800034: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008DAA8(rdram, ctx);
        goto after_2;
    // 0x80800034: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800038: beql        $v0, $zero, L_80800090
    if (ctx->r2 == 0) {
        // 0x8080003C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800090;
    }
    goto skip_1;
    // 0x8080003C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800040: jal         0x800F8B88
    // 0x80800044: nop

    func_800F8B88(rdram, ctx);
        goto after_3;
    // 0x80800044: nop

    after_3:
    // 0x80800048: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080004C: beql        $v0, $at, L_80800090
    if (ctx->r2 == ctx->r1) {
        // 0x80800050: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800090;
    }
    goto skip_2;
    // 0x80800050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80800054: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80800058: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080005C: beq         $v0, $at, L_80800074
    if (ctx->r2 == ctx->r1) {
        // 0x80800060: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800074;
    }
    // 0x80800060: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800064: beq         $v0, $at, L_80800084
    if (ctx->r2 == ctx->r1) {
        // 0x80800068: nop
    
            goto L_80800084;
    }
    // 0x80800068: nop

    // 0x8080006C: b           L_80800090
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800090;
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800074:
    // 0x80800074: jal         0x800CF494
    // 0x80800078: nop

    func_800CF494(rdram, ctx);
        goto after_4;
    // 0x80800078: nop

    after_4:
    // 0x8080007C: b           L_80800090
    // 0x80800080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800090;
    // 0x80800080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800084:
    // 0x80800084: jal         0x800CF2D4
    // 0x80800088: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CF2D4(rdram, ctx);
        goto after_5;
    // 0x80800088: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8080008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800090:
    // 0x80800090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

    // 0x8080009C: nop

;}
RECOMP_FUNC void func_80800000_baalarm(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_80800008_baalarm(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80800014: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800018: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8080001C: beq         $a1, $zero, L_80800034
    if (ctx->r5 == 0) {
        // 0x80800020: andi        $a0, $a1, 0xFF
        ctx->r4 = ctx->r5 & 0XFF;
            goto L_80800034;
    }
    // 0x80800020: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    // 0x80800024: jal         0x800C2FDC
    // 0x80800028: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800028: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8080002C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800030: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
L_80800034:
    // 0x80800034: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80800038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080003C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800040: jr          $ra
    // 0x80800044: nop

    return;
    // 0x80800044: nop

;}
RECOMP_FUNC void func_80800048_baalarm(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800048: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080004C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800054: jal         0x800C2E04
    // 0x80800058: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800C2E04(rdram, ctx);
        goto after_0;
    // 0x80800058: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080005C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80800060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800064: sb          $v0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r2;
    // 0x80800068: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8080006C: jal         0x800C3418
    // 0x80800070: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    func_800C3418(rdram, ctx);
        goto after_1;
    // 0x80800070: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    after_1:
    // 0x80800074: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80800078: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080007C: jal         0x800C330C
    // 0x80800080: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    func_800C330C(rdram, ctx);
        goto after_2;
    // 0x80800080: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    after_2:
    // 0x80800084: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80800088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080008C: jal         0x800C431C
    // 0x80800090: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    func_800C431C(rdram, ctx);
        goto after_3;
    // 0x80800090: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    after_3:
    // 0x80800094: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80800098: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8080009C: sb          $t0, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r8;
    // 0x808000A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000AC: jr          $ra
    // 0x808000B0: nop

    return;
    // 0x808000B0: nop

;}
RECOMP_FUNC void baalarm_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x808000B8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x808000BC: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x808000C0: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x808000C4: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x808000C8: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x808000CC: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x808000D0: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x808000D4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x808000D8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x808000DC: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x808000E0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x808000E4: mtc1        $a2, $f30
    ctx->f30.u32l = ctx->r6;
    // 0x808000E8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808000EC: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x808000F0: beql        $t7, $zero, L_8080026C
    if (ctx->r15 == 0) {
        // 0x808000F4: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8080026C;
    }
    goto skip_0;
    // 0x808000F4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x808000F8: jal         0x8009C128
    // 0x808000FC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808000FC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_0:
    // 0x80800100: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800104: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800108: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8080010C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80800110: c.lt.s      $f30, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f30.fl < ctx->f4.fl;
    // 0x80800114: nop

    // 0x80800118: bc1fl       L_80800188
    if (!c1cs) {
        // 0x8080011C: mtc1        $zero, $f22
        ctx->f22.u32l = 0;
            goto L_80800188;
    }
    goto skip_1;
    // 0x8080011C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    skip_1:
    // 0x80800120: c.eq.s      $f6, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f6.fl == ctx->f30.fl;
    // 0x80800124: nop

    // 0x80800128: bc1tl       L_8080026C
    if (c1cs) {
        // 0x8080012C: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8080026C;
    }
    goto skip_2;
    // 0x8080012C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_2:
    // 0x80800130: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80800134: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800138: jal         0x80000294
    // 0x8080013C: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    func_80800294_baalarm(rdram, ctx);
        goto after_1;
    // 0x8080013C: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    after_1:
    // 0x80800140: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80800144: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x80800148: jal         0x800C35E8
    // 0x8080014C: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    func_800C35E8(rdram, ctx);
        goto after_2;
    // 0x8080014C: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    after_2:
    // 0x80800150: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80800154: addiu       $a1, $zero, 0x414
    ctx->r5 = ADD32(0, 0X414);
    // 0x80800158: jal         0x800C301C
    // 0x8080015C: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    func_800C301C(rdram, ctx);
        goto after_3;
    // 0x8080015C: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    after_3:
    // 0x80800160: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80800164: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x80800168: jal         0x800C3058
    // 0x8080016C: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
    func_800C3058(rdram, ctx);
        goto after_4;
    // 0x8080016C: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
    after_4:
    // 0x80800170: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80800174: jal         0x800C3BDC
    // 0x80800178: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    func_800C3BDC(rdram, ctx);
        goto after_5;
    // 0x80800178: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    after_5:
    // 0x8080017C: b           L_8080026C
    // 0x80800180: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_8080026C;
    // 0x80800180: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80800184: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
L_80800188:
    // 0x80800188: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8080018C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800190: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80800194: c.lt.s      $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f22.fl < ctx->f28.fl;
    // 0x80800198: mov.s       $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    ctx->f20.fl = ctx->f28.fl;
    // 0x8080019C: bc1fl       L_8080026C
    if (!c1cs) {
        // 0x808001A0: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8080026C;
    }
    goto skip_3;
    // 0x808001A0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_3:
    // 0x808001A4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x808001A8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(6, 0X2E0) << 16);
    // 0x808001AC: lwc1        $f24, 0x2E0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(6, 0X2E0));
    // 0x808001B0: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
L_808001B4:
    // 0x808001B4: xori        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 ^ 0X1;
    // 0x808001B8: c.le.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl <= ctx->f8.fl;
    // 0x808001BC: nop

    // 0x808001C0: bc1fl       L_8080023C
    if (!c1cs) {
        // 0x808001C4: mfc1        $a2, $f28
        ctx->r6 = (int32_t)ctx->f28.u32l;
            goto L_8080023C;
    }
    goto skip_4;
    // 0x808001C4: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    skip_4:
    // 0x808001C8: c.lt.s      $f30, $f20
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f30.fl < ctx->f20.fl;
    // 0x808001CC: nop

    // 0x808001D0: bc1fl       L_8080023C
    if (!c1cs) {
        // 0x808001D4: mfc1        $a2, $f28
        ctx->r6 = (int32_t)ctx->f28.u32l;
            goto L_8080023C;
    }
    goto skip_5;
    // 0x808001D4: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    skip_5:
    // 0x808001D8: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x808001DC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x808001E0: jal         0x800C35E8
    // 0x808001E4: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    func_800C35E8(rdram, ctx);
        goto after_6;
    // 0x808001E4: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    after_6:
    // 0x808001E8: beq         $s0, $zero, L_808001F8
    if (ctx->r16 == 0) {
        // 0x808001EC: addiu       $a1, $zero, 0x438
        ctx->r5 = ADD32(0, 0X438);
            goto L_808001F8;
    }
    // 0x808001EC: addiu       $a1, $zero, 0x438
    ctx->r5 = ADD32(0, 0X438);
    // 0x808001F0: b           L_808001F8
    // 0x808001F4: addiu       $a1, $zero, 0x41C
    ctx->r5 = ADD32(0, 0X41C);
        goto L_808001F8;
    // 0x808001F4: addiu       $a1, $zero, 0x41C
    ctx->r5 = ADD32(0, 0X41C);
L_808001F8:
    // 0x808001F8: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x808001FC: jal         0x800C301C
    // 0x80800200: lbu         $a0, 0x0($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X0);
    func_800C301C(rdram, ctx);
        goto after_7;
    // 0x80800200: lbu         $a0, 0x0($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X0);
    after_7:
    // 0x80800204: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80800208: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x8080020C: jal         0x800C3058
    // 0x80800210: lbu         $a0, 0x0($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X0);
    func_800C3058(rdram, ctx);
        goto after_8;
    // 0x80800210: lbu         $a0, 0x0($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X0);
    after_8:
    // 0x80800214: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80800218: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8080021C: jal         0x80000294
    // 0x80800220: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    func_80800294_baalarm(rdram, ctx);
        goto after_9;
    // 0x80800220: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    after_9:
    // 0x80800224: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80800228: jal         0x800C3BDC
    // 0x8080022C: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    func_800C3BDC(rdram, ctx);
        goto after_10;
    // 0x8080022C: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    after_10:
    // 0x80800230: b           L_8080026C
    // 0x80800234: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_8080026C;
    // 0x80800234: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80800238: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
L_8080023C:
    // 0x8080023C: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80800240: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80800244: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80800248: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x8080024C: jal         0x800F10B4
    // 0x80800250: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    func_800F10B4(rdram, ctx);
        goto after_11;
    // 0x80800250: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    after_11:
    // 0x80800254: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x80800258: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x8080025C: nop

    // 0x80800260: bc1tl       L_808001B4
    if (c1cs) {
        // 0x80800264: lwc1        $f8, 0x7C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_808001B4;
    }
    goto skip_6;
    // 0x80800264: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    skip_6:
    // 0x80800268: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8080026C:
    // 0x8080026C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80800270: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80800274: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80800278: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x8080027C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x80800280: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x80800284: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80800288: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x8080028C: jr          $ra
    // 0x80800290: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80800290: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80800294_baalarm(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080029C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808002A4: jal         0x800C39A0
    // 0x808002A8: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    func_800C39A0(rdram, ctx);
        goto after_0;
    // 0x808002A8: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    after_0:
    // 0x808002AC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x808002B0: beql        $v0, $t6, L_808002D0
    if (ctx->r2 == ctx->r14) {
        // 0x808002B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808002D0;
    }
    goto skip_0;
    // 0x808002B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808002B8: jal         0x800C3CE8
    // 0x808002BC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    func_800C3CE8(rdram, ctx);
        goto after_1;
    // 0x808002BC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    after_1:
    // 0x808002C0: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x808002C4: jal         0x800C330C
    // 0x808002C8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800C330C(rdram, ctx);
        goto after_2;
    // 0x808002C8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x808002CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002D0:
    // 0x808002D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002D4: jr          $ra
    // 0x808002D8: nop

    return;
    // 0x808002D8: nop

;}
RECOMP_FUNC void baattach_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
;}
RECOMP_FUNC void baattach_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8080000C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800010: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80800014: beq         $t7, $zero, L_80800024
    if (ctx->r15 == 0) {
        // 0x80800018: nop
    
            goto L_80800024;
    }
    // 0x80800018: nop

    // 0x8080001C: jr          $ra
    // 0x80800020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800024:
    // 0x80800024: jr          $ra
    // 0x80800028: nop

    return;
    // 0x80800028: nop

;}
RECOMP_FUNC void baattach_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080002C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80800030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800034: sw          $a1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r5;
    // 0x80800038: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x8080003C: jr          $ra
    // 0x80800040: sw          $a2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r6;
    return;
    // 0x80800040: sw          $a2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r6;
;}
RECOMP_FUNC void baattach_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080004C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800054: jal         0x80000098
    // 0x80800058: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    baattach_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800058: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8080005C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800064: jr          $ra
    // 0x80800068: nop

    return;
    // 0x80800068: nop

;}
RECOMP_FUNC void baattach_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080006C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80800070: jr          $ra
    // 0x80800074: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    return;
    // 0x80800074: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
;}
RECOMP_FUNC void baattach_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800078: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8080007C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80800080: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80800084: beq         $t6, $zero, L_80800090
    if (ctx->r14 == 0) {
        // 0x80800088: nop
    
            goto L_80800090;
    }
    // 0x80800088: nop

    // 0x8080008C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_80800090:
    // 0x80800090: jr          $ra
    // 0x80800094: nop

    return;
    // 0x80800094: nop

;}
RECOMP_FUNC void baattach_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080009C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x808000A4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x808000A8: beq         $t6, $zero, L_808000C0
    if (ctx->r14 == 0) {
        // 0x808000AC: sw          $t6, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r14;
            goto L_808000C0;
    }
    // 0x808000AC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x808000B0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x808000B4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x808000B8: jalr        $t9
    // 0x808000BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x808000BC: nop

    after_0:
L_808000C0:
    // 0x808000C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000C8: jr          $ra
    // 0x808000CC: nop

    return;
    // 0x808000CC: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
;}
RECOMP_FUNC void bababykaz_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x800A3274
    // 0x80800014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800018: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8080001C: bnel        $v0, $at, L_80800044
    if (ctx->r2 != ctx->r1) {
        // 0x80800020: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800044;
    }
    goto skip_0;
    // 0x80800020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800024: jal         0x800EA068
    // 0x80800028: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800EA068(rdram, ctx);
        goto after_1;
    // 0x80800028: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_1:
    // 0x8080002C: bne         $v0, $zero, L_80800040
    if (ctx->r2 != 0) {
        // 0x80800030: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_80800040;
    }
    // 0x80800030: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800034: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x80800038: jal         0x8009EA94
    // 0x8080003C: lwc1        $f12, 0x4($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X4);
    func_8009EA94(rdram, ctx);
        goto after_2;
    // 0x8080003C: lwc1        $f12, 0x4($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X4);
    after_2:
L_80800040:
    // 0x80800040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800044:
    // 0x80800044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800048: jr          $ra
    // 0x8080004C: nop

    return;
    // 0x8080004C: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800058: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8080005C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80800060: jal         0x800EA068
    // 0x80800064: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800EA068(rdram, ctx);
        goto after_0;
    // 0x80800064: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_0:
    // 0x80800068: bne         $v0, $zero, L_80800088
    if (ctx->r2 != 0) {
        // 0x8080006C: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_80800088;
    }
    // 0x8080006C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800070: jal         0x8009EA14
    // 0x80800074: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8009EA14(rdram, ctx);
        goto after_1;
    // 0x80800074: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x80800078: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8080007C: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x80800080: b           L_80800094
    // 0x80800084: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
        goto L_80800094;
    // 0x80800084: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
L_80800088:
    // 0x80800088: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080008C: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x80800090: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
L_80800094:
    // 0x80800094: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x80800098: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x8080009C: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x808000A0: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    // 0x808000A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000AC: jr          $ra
    // 0x808000B0: nop

    return;
    // 0x808000B0: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B4: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x808000B8: jr          $ra
    // 0x808000BC: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
    return;
    // 0x808000BC: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
;}
RECOMP_FUNC void bababykaz_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x808000C4: jr          $ra
    // 0x808000C8: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    return;
    // 0x808000C8: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
;}
RECOMP_FUNC void bababykaz_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D4: jal         0x800F8B88
    // 0x808000D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800F8B88(rdram, ctx);
        goto after_0;
    // 0x808000D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808000E0: bne         $v0, $at, L_808000F0
    if (ctx->r2 != ctx->r1) {
        // 0x808000E4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_808000F0;
    }
    // 0x808000E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x808000E8: b           L_808000F0
    // 0x808000EC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_808000F0;
    // 0x808000EC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_808000F0:
    // 0x808000F0: jal         0x800F8A5C
    // 0x808000F4: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_800F8A5C(rdram, ctx);
        goto after_1;
    // 0x808000F4: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_1:
    // 0x808000F8: jal         0x800EA05C
    // 0x808000FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_2;
    // 0x808000FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x80800100: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80800104: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800108: beq         $v0, $t6, L_80800118
    if (ctx->r2 == ctx->r14) {
        // 0x8080010C: nop
    
            goto L_80800118;
    }
    // 0x8080010C: nop

    // 0x80800110: b           L_80800120
    // 0x80800114: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80800120;
    // 0x80800114: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80800118:
    // 0x80800118: jal         0x800878A0
    // 0x8080011C: nop

    _plsu_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x8080011C: nop

    after_3:
L_80800120:
    // 0x80800120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800124: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800128: jr          $ra
    // 0x8080012C: nop

    return;
    // 0x8080012C: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800130: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800138: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080013C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800140: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800144: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800148: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x8080014C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800150: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80800154: lwc1        $f12, 0x4($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80800158: jal         0x800F10B4
    // 0x8080015C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x8080015C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x80800160: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800164: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800168: jal         0x80085338
    // 0x8080016C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    _batimer_set(rdram, ctx);
        goto after_1;
    // 0x8080016C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x80800170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800180: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x80800184: jr          $ra
    // 0x80800188: sb          $a1, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r5;
    return;
    // 0x80800188: sb          $a1, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bababykaz_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080018C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800194: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080019C: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x808001A0: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x808001A4: jal         0x800EA068
    // 0x808001A8: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    func_800EA068(rdram, ctx);
        goto after_0;
    // 0x808001A8: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    after_0:
    // 0x808001AC: beq         $v0, $zero, L_808001C4
    if (ctx->r2 == 0) {
        // 0x808001B0: nop
    
            goto L_808001C4;
    }
    // 0x808001B0: nop

    // 0x808001B4: jal         0x800FC660
    // 0x808001B8: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    func_800FC660(rdram, ctx);
        goto after_1;
    // 0x808001B8: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_1:
    // 0x808001BC: b           L_808001D0
    // 0x808001C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808001D0;
    // 0x808001C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001C4:
    // 0x808001C4: jal         0x800C77DC
    // 0x808001C8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C77DC(rdram, ctx);
        goto after_2;
    // 0x808001C8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x808001CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001D0:
    // 0x808001D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001D4: jr          $ra
    // 0x808001D8: nop

    return;
    // 0x808001D8: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808001E8: jal         0x800EA068
    // 0x808001EC: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    func_800EA068(rdram, ctx);
        goto after_0;
    // 0x808001EC: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    after_0:
    // 0x808001F0: bnel        $v0, $zero, L_80800204
    if (ctx->r2 != 0) {
        // 0x808001F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800204;
    }
    goto skip_0;
    // 0x808001F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808001F8: jal         0x800C77DC
    // 0x808001FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C77DC(rdram, ctx);
        goto after_1;
    // 0x808001FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80800200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800204:
    // 0x80800204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800208: jr          $ra
    // 0x8080020C: nop

    return;
    // 0x8080020C: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800210: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x80800214: jr          $ra
    // 0x80800218: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
    return;
    // 0x80800218: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bababykaz_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080021C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800220: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800224: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800228: jal         0x8008E124
    // 0x8080022C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008E124(rdram, ctx);
        goto after_0;
    // 0x8080022C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800230: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800234: beql        $v1, $zero, L_80800288
    if (ctx->r3 == 0) {
        // 0x80800238: sltu        $t0, $zero, $v1
        ctx->r8 = 0 < ctx->r3 ? 1 : 0;
            goto L_80800288;
    }
    goto skip_0;
    // 0x80800238: sltu        $t0, $zero, $v1
    ctx->r8 = 0 < ctx->r3 ? 1 : 0;
    skip_0:
    // 0x8080023C: jal         0x800C954C
    // 0x80800240: nop

    func_800C954C(rdram, ctx);
        goto after_1;
    // 0x80800240: nop

    after_1:
    // 0x80800244: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800248: beql        $v1, $zero, L_80800288
    if (ctx->r3 == 0) {
        // 0x8080024C: sltu        $t0, $zero, $v1
        ctx->r8 = 0 < ctx->r3 ? 1 : 0;
            goto L_80800288;
    }
    goto skip_1;
    // 0x8080024C: sltu        $t0, $zero, $v1
    ctx->r8 = 0 < ctx->r3 ? 1 : 0;
    skip_1:
    // 0x80800250: jal         0x800F8004
    // 0x80800254: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8004(rdram, ctx);
        goto after_2;
    // 0x80800254: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_2:
    // 0x80800258: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8080025C: beql        $v1, $zero, L_80800288
    if (ctx->r3 == 0) {
        // 0x80800260: sltu        $t0, $zero, $v1
        ctx->r8 = 0 < ctx->r3 ? 1 : 0;
            goto L_80800288;
    }
    goto skip_2;
    // 0x80800260: sltu        $t0, $zero, $v1
    ctx->r8 = 0 < ctx->r3 ? 1 : 0;
    skip_2:
    // 0x80800264: jal         0x800F99E8
    // 0x80800268: nop

    func_800F99E8(rdram, ctx);
        goto after_3;
    // 0x80800268: nop

    after_3:
    // 0x8080026C: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800270: beql        $v1, $zero, L_80800288
    if (ctx->r3 == 0) {
        // 0x80800274: sltu        $t0, $zero, $v1
        ctx->r8 = 0 < ctx->r3 ? 1 : 0;
            goto L_80800288;
    }
    goto skip_3;
    // 0x80800274: sltu        $t0, $zero, $v1
    ctx->r8 = 0 < ctx->r3 ? 1 : 0;
    skip_3:
    // 0x80800278: jal         0x800F68B8
    // 0x8080027C: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F68B8(rdram, ctx);
        goto after_4;
    // 0x8080027C: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_4:
    // 0x80800280: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800284: sltu        $t0, $zero, $v1
    ctx->r8 = 0 < ctx->r3 ? 1 : 0;
L_80800288:
    // 0x80800288: beq         $t0, $zero, L_808002B0
    if (ctx->r8 == 0) {
        // 0x8080028C: sw          $v1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r3;
            goto L_808002B0;
    }
    // 0x8080028C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x80800290: jal         0x800C0638
    // 0x80800294: nop

    func_800C0638(rdram, ctx);
        goto after_5;
    // 0x80800294: nop

    after_5:
    // 0x80800298: sltiu       $t0, $v0, 0x1
    ctx->r8 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8080029C: beql        $t0, $zero, L_808002B4
    if (ctx->r8 == 0) {
        // 0x808002A0: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_808002B4;
    }
    goto skip_4;
    // 0x808002A0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    skip_4:
    // 0x808002A4: jal         0x800D3948
    // 0x808002A8: nop

    func_800D3948(rdram, ctx);
        goto after_6;
    // 0x808002A8: nop

    after_6:
    // 0x808002AC: sltiu       $t0, $v0, 0x1
    ctx->r8 = ctx->r2 < 0X1 ? 1 : 0;
L_808002B0:
    // 0x808002B0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
L_808002B4:
    // 0x808002B4: sltu        $t6, $zero, $t0
    ctx->r14 = 0 < ctx->r8 ? 1 : 0;
    // 0x808002B8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x808002BC: beq         $t7, $zero, L_808002E4
    if (ctx->r15 == 0) {
        // 0x808002C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002E4;
    }
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x808002C8: jal         0x800852F0
    // 0x808002CC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    _batimer_decrement(rdram, ctx);
        goto after_7;
    // 0x808002CC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_7:
    // 0x808002D0: beq         $v0, $zero, L_808002E4
    if (ctx->r2 == 0) {
        // 0x808002D4: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_808002E4;
    }
    // 0x808002D4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x808002D8: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x808002DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808002E0: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
L_808002E4:
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x808002EC: jal         0x80085300
    // 0x808002F0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    _batimer_get(rdram, ctx);
        goto after_8;
    // 0x808002F0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_8:
    // 0x808002F4: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x808002F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808002FC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800300: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800304: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80800308: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8080030C: jal         0x800F10B4
    // 0x80800310: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_9;
    // 0x80800310: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x80800314: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(8, 0X470) << 16);
    // 0x80800318: lwc1        $f6, 0x470($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(8, 0X470));
    // 0x8080031C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80800320: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80800324: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800328: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8080032C: nop

    // 0x80800330: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80800334: jal         0x800F0E00
    // 0x80800338: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    func_800F0E00(rdram, ctx);
        goto after_10;
    // 0x80800338: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_10:
    // 0x8080033C: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x80800340: swc1        $f0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f0.u32l;
    // 0x80800344: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80800348: beq         $t4, $zero, L_80800370
    if (ctx->r12 == 0) {
        // 0x8080034C: nop
    
            goto L_80800370;
    }
    // 0x8080034C: nop

    // 0x80800350: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x80800354: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    // 0x80800358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8080035C: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80800360: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80800364: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80800368: jal         0x800D2498
    // 0x8080036C: nop

    func_800D2498(rdram, ctx);
        goto after_11;
    // 0x8080036C: nop

    after_11:
L_80800370:
    // 0x80800370: jal         0x8008E35C
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_12;
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800378: beql        $v0, $zero, L_808003C4
    if (ctx->r2 == 0) {
        // 0x8080037C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808003C4;
    }
    goto skip_5;
    // 0x8080037C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x80800380: jal         0x800964DC
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800964DC(rdram, ctx);
        goto after_13;
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800388: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080038C: jal         0x8009C150
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_14;
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800394: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800398: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8080039C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808003A0: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x808003A4: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x808003A8: nop

    // 0x808003AC: bc1fl       L_808003C4
    if (!c1cs) {
        // 0x808003B0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808003C4;
    }
    goto skip_6;
    // 0x808003B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x808003B4: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x808003B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808003BC: sb          $t7, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r15;
    // 0x808003C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808003C4:
    // 0x808003C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808003CC: jr          $ra
    // 0x808003D0: nop

    return;
    // 0x808003D0: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D4: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x808003D8: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x808003DC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x808003E0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x808003E4: jr          $ra
    // 0x808003E8: nop

    return;
    // 0x808003E8: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808003F8: jal         0x80095760
    // 0x808003FC: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    func_80095760(rdram, ctx);
        goto after_0;
    // 0x808003FC: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    after_0:
    // 0x80800400: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800404: jal         0x8009F198
    // 0x80800408: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009F198(rdram, ctx);
        goto after_1;
    // 0x80800408: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8080040C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800410: jal         0x80091C74
    // 0x80800414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091C74(rdram, ctx);
        goto after_2;
    // 0x80800414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080041C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800420: jr          $ra
    // 0x80800424: nop

    return;
    // 0x80800424: nop

;}
RECOMP_FUNC void bababykaz_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080042C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800430: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800434: jal         0x80095774
    // 0x80800438: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    func_80095774(rdram, ctx);
        goto after_0;
    // 0x80800438: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    after_0:
    // 0x8080043C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800440: jal         0x8009F198
    // 0x80800444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F198(rdram, ctx);
        goto after_1;
    // 0x80800444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800448: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080044C: jal         0x80091C74
    // 0x80800450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80091C74(rdram, ctx);
        goto after_2;
    // 0x80800450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080045C: jr          $ra
    // 0x80800460: nop

    return;
    // 0x80800460: nop

    // 0x80800464: nop

    // 0x80800468: nop

    // 0x8080046C: nop

    // 0x80800470: xori        $s1, $a2, 0xB717
    ctx->r17 = ctx->r6 ^ 0XB717;
    // 0x80800474: nop

    // 0x80800478: nop

    // 0x8080047C: nop

;}
RECOMP_FUNC void func_80800000_babackpack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
;}
RECOMP_FUNC void func_80800008_babackpack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800014: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x80800018: jal         0x8008ADBC
    // 0x8080001C: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    func_8008ADBC(rdram, ctx);
        goto after_0;
    // 0x8080001C: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_0:
    // 0x80800020: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x80800028: sw          $zero, 0x14($t9)
    MEM_W(0X14, ctx->r25) = 0;
    // 0x8080002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800034: jr          $ra
    // 0x80800038: nop

    return;
    // 0x80800038: nop

;}
RECOMP_FUNC void func_8080003C_babackpack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080003C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800040: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080004C: jal         0x8008AD80
    // 0x80800050: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8008AD80(rdram, ctx);
        goto after_0;
    // 0x80800050: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80800054: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x80800058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080005C: sw          $v0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r2;
    // 0x80800060: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x80800064: jal         0x8008B1A0
    // 0x80800068: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    func_8008B1A0(rdram, ctx);
        goto after_1;
    // 0x80800068: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_1:
    // 0x8080006C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80800070: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x80800074: jal         0x8008AED4
    // 0x80800078: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800078: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    after_2:
    // 0x8080007C: jal         0x8008CAC8
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_3;
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800084: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x80800088: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080008C: jal         0x8008B10C
    // 0x80800090: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    func_8008B10C(rdram, ctx);
        goto after_4;
    // 0x80800090: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    after_4:
    // 0x80800094: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x80800098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080009C: jal         0x8008B134
    // 0x808000A0: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x808000A0: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_5:
    // 0x808000A4: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x808000A8: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808000AC: jal         0x8008B1BC
    // 0x808000B0: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x808000B0: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    after_6:
    // 0x808000B4: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x808000B8: jal         0x8008B064
    // 0x808000BC: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808000BC: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    after_7:
    // 0x808000C0: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x808000C4: jal         0x8008B304
    // 0x808000C8: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    func_8008B304(rdram, ctx);
        goto after_8;
    // 0x808000C8: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    after_8:
    // 0x808000CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000D8: jr          $ra
    // 0x808000DC: nop

    return;
    // 0x808000DC: nop

;}
RECOMP_FUNC void babackpack_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E8: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x808000EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808000F0: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x808000F4: beq         $a1, $zero, L_8080010C
    if (ctx->r5 == 0) {
        // 0x808000F8: nop
    
            goto L_8080010C;
    }
    // 0x808000F8: nop

    // 0x808000FC: jal         0x800D674C
    // 0x80800100: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x80800100: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800104: b           L_80800110
    // 0x80800108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800110;
    // 0x80800108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080010C:
    // 0x8080010C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800110:
    // 0x80800110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800114: jr          $ra
    // 0x80800118: nop

    return;
    // 0x80800118: nop

;}
RECOMP_FUNC void func_8080011C_babackpack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080011C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800120: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800124: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800128: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8080012C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80800130: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80800134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800138: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080013C: jal         0x8009272C
    // 0x80800140: swc1        $f12, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f12.u32l;
    func_8009272C(rdram, ctx);
        goto after_0;
    // 0x80800140: swc1        $f12, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f12.u32l;
    after_0:
    // 0x80800144: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80800148: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x8080014C: bnel        $t7, $zero, L_8080016C
    if (ctx->r15 != 0) {
        // 0x80800150: lw          $t9, 0x0($v1)
        ctx->r25 = MEM_W(ctx->r3, 0X0);
            goto L_8080016C;
    }
    goto skip_0;
    // 0x80800150: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80800154: jal         0x800DBFF8
    // 0x80800158: nop

    func_800DBFF8(rdram, ctx);
        goto after_1;
    // 0x80800158: nop

    after_1:
    // 0x8080015C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80800160: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x80800164: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80800168: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
L_8080016C:
    // 0x8080016C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80800170: bnel        $t9, $zero, L_80800184
    if (ctx->r25 != 0) {
        // 0x80800174: lbu         $t1, 0x8($v1)
        ctx->r9 = MEM_BU(ctx->r3, 0X8);
            goto L_80800184;
    }
    goto skip_1;
    // 0x80800174: lbu         $t1, 0x8($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X8);
    skip_1:
    // 0x80800178: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8080017C: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80800180: lbu         $t1, 0x8($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X8);
L_80800184:
    // 0x80800184: bnel        $t1, $zero, L_8080020C
    if (ctx->r9 != 0) {
        // 0x80800188: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8080020C;
    }
    goto skip_2;
    // 0x80800188: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x8080018C: jal         0x800000E0
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    babackpack_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800194: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80800198: jal         0x800B26F0
    // 0x8080019C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B26F0(rdram, ctx);
        goto after_3;
    // 0x8080019C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x808001A0: beql        $v0, $zero, L_808001BC
    if (ctx->r2 == 0) {
        // 0x808001A4: lw          $t4, 0x14($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X14);
            goto L_808001BC;
    }
    goto skip_3;
    // 0x808001A4: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    skip_3:
    // 0x808001A8: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x808001AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x808001B0: b           L_808001C0
    // 0x808001B4: sb          $t2, 0xA($t3)
    MEM_B(0XA, ctx->r11) = ctx->r10;
        goto L_808001C0;
    // 0x808001B4: sb          $t2, 0xA($t3)
    MEM_B(0XA, ctx->r11) = ctx->r10;
    // 0x808001B8: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
L_808001BC:
    // 0x808001BC: sb          $zero, 0xA($t4)
    MEM_B(0XA, ctx->r12) = 0;
L_808001C0:
    // 0x808001C0: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C8: lbu         $t6, 0xA($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XA);
    // 0x808001CC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x808001D0: jal         0x800A25D0
    // 0x808001D4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    func_800A25D0(rdram, ctx);
        goto after_4;
    // 0x808001D4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    after_4:
    // 0x808001D8: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x808001DC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808001E0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x808001E4: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x808001E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x808001EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x808001F0: jal         0x80100D24
    // 0x808001F4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80100D24(rdram, ctx);
        goto after_5;
    // 0x808001F4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_5:
    // 0x808001F8: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x808001FC: sb          $v0, 0x8($t9)
    MEM_B(0X8, ctx->r25) = ctx->r2;
    // 0x80800200: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x80800204: sb          $zero, 0x9($t0)
    MEM_B(0X9, ctx->r8) = 0;
    // 0x80800208: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080020C:
    // 0x8080020C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800210: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800214: jr          $ra
    // 0x80800218: nop

    return;
    // 0x80800218: nop

;}
RECOMP_FUNC void func_8080021C_babackpack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080021C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800224: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80800228: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8080022C: beq         $v1, $zero, L_8080024C
    if (ctx->r3 == 0) {
        // 0x80800230: sll         $a0, $v1, 16
        ctx->r4 = S32(ctx->r3 << 16);
            goto L_8080024C;
    }
    // 0x80800230: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x80800234: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80800238: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8080023C: jal         0x80100A74
    // 0x80800240: lbu         $a1, 0x9($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X9);
    func_80100A74(rdram, ctx);
        goto after_0;
    // 0x80800240: lbu         $a1, 0x9($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X9);
    after_0:
    // 0x80800244: b           L_80800250
    // 0x80800248: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80800250;
    // 0x80800248: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8080024C:
    // 0x8080024C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80800250:
    // 0x80800250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800258: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8080025C: jr          $ra
    // 0x80800260: nop

    return;
    // 0x80800260: nop

;}
RECOMP_FUNC void babackpack_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800264: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800268: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080026C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800270: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80800274: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80800278: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080027C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80800280: bnel        $t6, $at, L_808002DC
    if (ctx->r14 != ctx->r1) {
        // 0x80800284: lbu         $t1, 0xA($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0XA);
            goto L_808002DC;
    }
    goto skip_0;
    // 0x80800284: lbu         $t1, 0xA($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XA);
    skip_0:
    // 0x80800288: jal         0x8008CAC8
    // 0x8080028C: nop

    func_8008CAC8(rdram, ctx);
        goto after_0;
    // 0x8080028C: nop

    after_0:
    // 0x80800290: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x80800294: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800298: jal         0x8008B10C
    // 0x8080029C: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    func_8008B10C(rdram, ctx);
        goto after_1;
    // 0x8080029C: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_1:
    // 0x808002A0: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x808002A4: jal         0x8008B304
    // 0x808002A8: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    func_8008B304(rdram, ctx);
        goto after_2;
    // 0x808002A8: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    after_2:
    // 0x808002AC: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x808002B0: jal         0x8008B4D4
    // 0x808002B4: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    func_8008B4D4(rdram, ctx);
        goto after_3;
    // 0x808002B4: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    after_3:
    // 0x808002B8: jal         0x800DF41C
    // 0x808002BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF41C(rdram, ctx);
        goto after_4;
    // 0x808002BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x808002C0: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C8: jal         0x800A0714
    // 0x808002CC: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    func_800A0714(rdram, ctx);
        goto after_5;
    // 0x808002CC: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    after_5:
    // 0x808002D0: b           L_80800310
    // 0x808002D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800310;
    // 0x808002D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002D8: lbu         $t1, 0xA($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XA);
L_808002DC:
    // 0x808002DC: beq         $t1, $zero, L_808002FC
    if (ctx->r9 == 0) {
        // 0x808002E0: nop
    
            goto L_808002FC;
    }
    // 0x808002E0: nop

    // 0x808002E4: jal         0x8000021C
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080021C_babackpack(rdram, ctx);
        goto after_6;
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808002EC: jal         0x800DF818
    // 0x808002F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF818(rdram, ctx);
        goto after_7;
    // 0x808002F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x808002F4: b           L_80800310
    // 0x808002F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800310;
    // 0x808002F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002FC:
    // 0x808002FC: jal         0x8008CA74
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CA74(rdram, ctx);
        goto after_8;
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800304: jal         0x800DF41C
    // 0x80800308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF41C(rdram, ctx);
        goto after_9;
    // 0x80800308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x8080030C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800310:
    // 0x80800310: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800314: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800318: jr          $ra
    // 0x8080031C: nop

    return;
    // 0x8080031C: nop

;}
RECOMP_FUNC void babackpack_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800320: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800324: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800328: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080032C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800330: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80800334: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80800338: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x8080033C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800340: jal         0x800DF738
    // 0x80800344: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    func_800DF738(rdram, ctx);
        goto after_0;
    // 0x80800344: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    after_0:
    // 0x80800348: jal         0x8000021C
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080021C_babackpack(rdram, ctx);
        goto after_1;
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800350: jal         0x800DF818
    // 0x80800354: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF818(rdram, ctx);
        goto after_2;
    // 0x80800354: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800358: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8080035C: jal         0x80100AC4
    // 0x80800360: lbu         $a0, 0x8($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X8);
    func_80100AC4(rdram, ctx);
        goto after_3;
    // 0x80800360: lbu         $a0, 0x8($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X8);
    after_3:
    // 0x80800364: jal         0x800DF720
    // 0x80800368: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF720(rdram, ctx);
        goto after_4;
    // 0x80800368: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x8080036C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80800370: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80800374: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80800378: bne         $t9, $at, L_808003D0
    if (ctx->r25 != ctx->r1) {
        // 0x8080037C: nop
    
            goto L_808003D0;
    }
    // 0x8080037C: nop

    // 0x80800380: jal         0x8008CAC8
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_5;
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800388: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x8080038C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800390: jal         0x8008B10C
    // 0x80800394: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_8008B10C(rdram, ctx);
        goto after_6;
    // 0x80800394: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_6:
    // 0x80800398: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x8080039C: jal         0x8008B304
    // 0x808003A0: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    func_8008B304(rdram, ctx);
        goto after_7;
    // 0x808003A0: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    after_7:
    // 0x808003A4: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x808003A8: jal         0x8008B4D4
    // 0x808003AC: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    func_8008B4D4(rdram, ctx);
        goto after_8;
    // 0x808003AC: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    after_8:
    // 0x808003B0: jal         0x800DF41C
    // 0x808003B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF41C(rdram, ctx);
        goto after_9;
    // 0x808003B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x808003B8: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003C0: jal         0x800A0714
    // 0x808003C4: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    func_800A0714(rdram, ctx);
        goto after_10;
    // 0x808003C4: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    after_10:
    // 0x808003C8: b           L_808003E0
    // 0x808003CC: nop

        goto L_808003E0;
    // 0x808003CC: nop

L_808003D0:
    // 0x808003D0: jal         0x8008CA74
    // 0x808003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CA74(rdram, ctx);
        goto after_11;
    // 0x808003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808003D8: jal         0x800DF41C
    // 0x808003DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF41C(rdram, ctx);
        goto after_12;
    // 0x808003DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_12:
L_808003E0:
    // 0x808003E0: jal         0x800000E0
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    babackpack_entrypoint_1(rdram, ctx);
        goto after_13;
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808003E8: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x808003EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808003F0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x808003F4: lw          $a2, 0x10($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X10);
    // 0x808003F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x808003FC: jal         0x800DE448
    // 0x80800400: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    func_800DE448(rdram, ctx);
        goto after_14;
    // 0x80800400: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    after_14:
    // 0x80800404: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80800408: lbu         $t5, 0xA($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XA);
    // 0x8080040C: beql        $t5, $zero, L_80800424
    if (ctx->r13 == 0) {
        // 0x80800410: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800424;
    }
    goto skip_0;
    // 0x80800410: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800414: lbu         $t6, 0x9($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X9);
    // 0x80800418: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x8080041C: sb          $t7, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r15;
    // 0x80800420: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800424:
    // 0x80800424: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080042C: jr          $ra
    // 0x80800430: nop

    return;
    // 0x80800430: nop

;}
RECOMP_FUNC void func_80800434_babackpack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800434: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80800438: jr          $ra
    // 0x8080043C: lw          $v0, 0xC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XC);
    return;
    // 0x8080043C: lw          $v0, 0xC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XC);
;}
RECOMP_FUNC void babackpack_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800448: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080044C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800450: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80800454: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800458: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8080045C: jal         0x800DBEFC
    // 0x80800460: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    func_800DBEFC(rdram, ctx);
        goto after_0;
    // 0x80800460: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    after_0:
    // 0x80800464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080046C: jr          $ra
    // 0x80800470: nop

    return;
    // 0x80800470: nop

;}
RECOMP_FUNC void babackpack_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080047C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800480: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800484: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80800488: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8080048C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80800490: jal         0x800DBEFC
    // 0x80800494: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    func_800DBEFC(rdram, ctx);
        goto after_0;
    // 0x80800494: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    after_0:
    // 0x80800498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080049C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004A0: jr          $ra
    // 0x808004A4: nop

    return;
    // 0x808004A4: nop

;}
RECOMP_FUNC void func_808004A8_babackpack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A8: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x808004AC: jr          $ra
    // 0x808004B0: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    return;
    // 0x808004B0: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
;}
RECOMP_FUNC void babackpack_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004BC: jal         0x8000053C
    // 0x808004C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    babackpack_set_state(rdram, ctx);
        goto after_0;
    // 0x808004C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808004C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004CC: jr          $ra
    // 0x808004D0: nop

    return;
    // 0x808004D0: nop

;}
RECOMP_FUNC void babackpack_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004DC: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x808004E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808004E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808004E8: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x808004EC: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x808004F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808004F4: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x808004F8: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x808004FC: sb          $zero, 0x8($t8)
    MEM_B(0X8, ctx->r24) = 0;
    // 0x80800500: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80800504: sb          $zero, 0x9($t9)
    MEM_B(0X9, ctx->r25) = 0;
    // 0x80800508: lw          $t0, 0x14($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X14);
    // 0x8080050C: sb          $zero, 0xA($t0)
    MEM_B(0XA, ctx->r8) = 0;
    // 0x80800510: lw          $t1, 0x14($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X14);
    // 0x80800514: swc1        $f4, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f4.u32l;
    // 0x80800518: lw          $t2, 0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X14);
    // 0x8080051C: sw          $zero, 0x14($t2)
    MEM_W(0X14, ctx->r10) = 0;
    // 0x80800520: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x80800524: jal         0x8000053C
    // 0x80800528: sw          $zero, 0xC($t3)
    MEM_W(0XC, ctx->r11) = 0;
    babackpack_set_state(rdram, ctx);
        goto after_0;
    // 0x80800528: sw          $zero, 0xC($t3)
    MEM_W(0XC, ctx->r11) = 0;
    after_0:
    // 0x8080052C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800534: jr          $ra
    // 0x80800538: nop

    return;
    // 0x80800538: nop

;}
RECOMP_FUNC void babackpack_set_state(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080053C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800540: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800544: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800548: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8080054C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80800550: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80800554: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800558: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8080055C: bne         $v1, $at, L_80800574
    if (ctx->r3 != ctx->r1) {
        // 0x80800560: nop
    
            goto L_80800574;
    }
    // 0x80800560: nop

    // 0x80800564: jal         0x80000008
    // 0x80800568: nop

    func_80800008_babackpack(rdram, ctx);
        goto after_0;
    // 0x80800568: nop

    after_0:
    // 0x8080056C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80800570: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
L_80800574:
    // 0x80800574: beq         $v1, $zero, L_808005BC
    if (ctx->r3 == 0) {
        // 0x80800578: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_808005BC;
    }
    // 0x80800578: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080057C: beq         $v1, $at, L_808005BC
    if (ctx->r3 == ctx->r1) {
        // 0x80800580: lw          $t6, 0x34($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X34);
            goto L_808005BC;
    }
    // 0x80800580: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80800584: beq         $t6, $zero, L_808005BC
    if (ctx->r14 == 0) {
        // 0x80800588: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_808005BC;
    }
    // 0x80800588: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080058C: beql        $t6, $at, L_808005C0
    if (ctx->r14 == ctx->r1) {
        // 0x80800590: lw          $t9, 0x34($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X34);
            goto L_808005C0;
    }
    goto skip_0;
    // 0x80800590: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x80800594: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80800598: beq         $v1, $zero, L_808005B0
    if (ctx->r3 == 0) {
        // 0x8080059C: sll         $a0, $v1, 16
        ctx->r4 = S32(ctx->r3 << 16);
            goto L_808005B0;
    }
    // 0x8080059C: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x808005A0: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x808005A4: jal         0x80100E18
    // 0x808005A8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80100E18(rdram, ctx);
        goto after_1;
    // 0x808005A8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x808005AC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_808005B0:
    // 0x808005B0: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x808005B4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x808005B8: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
L_808005BC:
    // 0x808005BC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_808005C0:
    // 0x808005C0: sltiu       $at, $t9, 0x8
    ctx->r1 = ctx->r25 < 0X8 ? 1 : 0;
    // 0x808005C4: beq         $at, $zero, L_80800724
    if (ctx->r1 == 0) {
        // 0x808005C8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80800724;
    }
    // 0x808005C8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x808005CC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(9, 0X750) << 16);
    // 0x808005D0: addu        $at, $at, $t9
    gpr jr_addend_808005D8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x808005D4: lw          $t9, 0x750($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(9, 0X750));
    // 0x808005D8: jr          $t9
    // 0x808005DC: nop

    switch (jr_addend_808005D8 >> 2) {
        case 0: goto L_808005E0; break;
        case 1: goto L_808005F4; break;
        case 2: goto L_80800668; break;
        case 3: goto L_80800680; break;
        case 4: goto L_8080069C; break;
        case 5: goto L_808006B8; break;
        case 6: goto L_808006D4; break;
        case 7: goto L_808006F0; break;
        default: switch_error(__func__, 0x808005D8, 0x80800750);
    }
    // 0x808005DC: nop

L_808005E0:
    // 0x808005E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E4: jal         0x8009272C
    // 0x808005E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009272C(rdram, ctx);
        goto after_2;
    // 0x808005E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808005EC: b           L_80800728
    // 0x808005F0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80800728;
    // 0x808005F0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_808005F4:
    // 0x808005F4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x808005F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800600: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x80800604: beql        $t0, $at, L_8080072C
    if (ctx->r8 == ctx->r1) {
        // 0x80800608: lw          $t3, 0x34($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X34);
            goto L_8080072C;
    }
    goto skip_1;
    // 0x80800608: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x8080060C: jal         0x8009272C
    // 0x80800610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009272C(rdram, ctx);
        goto after_3;
    // 0x80800610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800614: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80800618: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8080061C: beql        $a0, $zero, L_80800634
    if (ctx->r4 == 0) {
        // 0x80800620: sw          $zero, 0x4($v0)
        MEM_W(0X4, ctx->r2) = 0;
            goto L_80800634;
    }
    goto skip_2;
    // 0x80800620: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    skip_2:
    // 0x80800624: jal         0x800DBFD8
    // 0x80800628: nop

    func_800DBFD8(rdram, ctx);
        goto after_4;
    // 0x80800628: nop

    after_4:
    // 0x8080062C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80800630: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_80800634:
    // 0x80800634: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80800638: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8080063C: beq         $v1, $zero, L_80800654
    if (ctx->r3 == 0) {
        // 0x80800640: sll         $a0, $v1, 16
        ctx->r4 = S32(ctx->r3 << 16);
            goto L_80800654;
    }
    // 0x80800640: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x80800644: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80800648: jal         0x80100E18
    // 0x8080064C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80100E18(rdram, ctx);
        goto after_5;
    // 0x8080064C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_5:
    // 0x80800650: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_80800654:
    // 0x80800654: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x80800658: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x8080065C: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x80800660: b           L_80800728
    // 0x80800664: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80800728;
    // 0x80800664: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_80800668:
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080066C: addiu       $a1, $zero, 0x621
    ctx->r5 = ADD32(0, 0X621);
    // 0x80800670: jal         0x8000011C
    // 0x80800674: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8080011C_babackpack(rdram, ctx);
        goto after_6;
    // 0x80800674: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
    // 0x80800678: b           L_80800728
    // 0x8080067C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80800728;
    // 0x8080067C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_80800680:
    // 0x80800680: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x80800684: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080068C: jal         0x8000011C
    // 0x80800690: addiu       $a1, $zero, 0x625
    ctx->r5 = ADD32(0, 0X625);
    func_8080011C_babackpack(rdram, ctx);
        goto after_7;
    // 0x80800690: addiu       $a1, $zero, 0x625
    ctx->r5 = ADD32(0, 0X625);
    after_7:
    // 0x80800694: b           L_80800728
    // 0x80800698: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80800728;
    // 0x80800698: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_8080069C:
    // 0x8080069C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x808006A0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A8: jal         0x8000011C
    // 0x808006AC: addiu       $a1, $zero, 0x60A
    ctx->r5 = ADD32(0, 0X60A);
    func_8080011C_babackpack(rdram, ctx);
        goto after_8;
    // 0x808006AC: addiu       $a1, $zero, 0x60A
    ctx->r5 = ADD32(0, 0X60A);
    after_8:
    // 0x808006B0: b           L_80800728
    // 0x808006B4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80800728;
    // 0x808006B4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_808006B8:
    // 0x808006B8: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x808006BC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C4: jal         0x8000011C
    // 0x808006C8: addiu       $a1, $zero, 0x61B
    ctx->r5 = ADD32(0, 0X61B);
    func_8080011C_babackpack(rdram, ctx);
        goto after_9;
    // 0x808006C8: addiu       $a1, $zero, 0x61B
    ctx->r5 = ADD32(0, 0X61B);
    after_9:
    // 0x808006CC: b           L_80800728
    // 0x808006D0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80800728;
    // 0x808006D0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_808006D4:
    // 0x808006D4: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x808006D8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E0: jal         0x8000011C
    // 0x808006E4: addiu       $a1, $zero, 0x831
    ctx->r5 = ADD32(0, 0X831);
    func_8080011C_babackpack(rdram, ctx);
        goto after_10;
    // 0x808006E4: addiu       $a1, $zero, 0x831
    ctx->r5 = ADD32(0, 0X831);
    after_10:
    // 0x808006E8: b           L_80800728
    // 0x808006EC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80800728;
    // 0x808006EC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_808006F0:
    // 0x808006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x808006F8: addiu       $a2, $sp, 0x2E
    ctx->r6 = ADD32(ctx->r29, 0X2E);
    // 0x808006FC: jal         0x80084F38
    // 0x80800700: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    _bapreload_entrypoint_0(rdram, ctx);
        goto after_11;
    // 0x80800700: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_11:
    // 0x80800704: jal         0x8000003C
    // 0x80800708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080003C_babackpack(rdram, ctx);
        goto after_12;
    // 0x80800708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800710: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x80800714: jal         0x8000011C
    // 0x80800718: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8080011C_babackpack(rdram, ctx);
        goto after_13;
    // 0x80800718: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_13:
    // 0x8080071C: b           L_80800728
    // 0x80800720: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
        goto L_80800728;
    // 0x80800720: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_80800724:
    // 0x80800724: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
L_80800728:
    // 0x80800728: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
L_8080072C:
    // 0x8080072C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x80800730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800734: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800738: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080073C: jr          $ra
    // 0x80800740: nop

    return;
    // 0x80800740: nop

;}
RECOMP_FUNC void babee_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
;}
RECOMP_FUNC void func_80800008_babee(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8080000C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800014: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800018: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8080001C: jal         0x800EFA98
    // 0x80800020: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_800EFA98(rdram, ctx);
        goto after_0;
    // 0x80800020: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80800024: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800028: jal         0x800EF04C
    // 0x8080002C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_800EF04C(rdram, ctx);
        goto after_1;
    // 0x8080002C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x80800030: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(10, 0X390) << 16);
    // 0x80800034: addiu       $t6, $t6, 0x390
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(10, 0X390));
    // 0x80800038: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080003C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800044: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800048: jal         0x800BBCB8
    // 0x8080004C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_2;
    // 0x8080004C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800054: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800058: jr          $ra
    // 0x8080005C: nop

    return;
    // 0x8080005C: nop

;}
RECOMP_FUNC void babee_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80800064: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800068: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8080006C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80800070: jal         0x800F53D0
    // 0x80800074: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x80800074: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800078: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080007C: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80800080: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800084: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80800088: jal         0x80092CDC
    // 0x8080008C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80092CDC(rdram, ctx);
        goto after_1;
    // 0x8080008C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80800090: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80800094: jal         0x80092EB0
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092EB0(rdram, ctx);
        goto after_2;
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080009C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x808000A8: beq         $t6, $zero, L_80800140
    if (ctx->r14 == 0) {
        // 0x808000AC: nop
    
            goto L_80800140;
    }
    // 0x808000AC: nop

    // 0x808000B0: beq         $v0, $zero, L_80800140
    if (ctx->r2 == 0) {
        // 0x808000B4: nop
    
            goto L_80800140;
    }
    // 0x808000B4: nop

    // 0x808000B8: jal         0x8008E078
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000C0: beq         $v0, $zero, L_808000D4
    if (ctx->r2 == 0) {
        // 0x808000C4: nop
    
            goto L_808000D4;
    }
    // 0x808000C4: nop

    // 0x808000C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808000CC: b           L_808000E4
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808000E4;
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808000D4:
    // 0x808000D4: jal         0x8009BFCC
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFCC(rdram, ctx);
        goto after_4;
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808000DC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808000E4:
    // 0x808000E4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x808000E8: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x808000EC: jal         0x800F3BD0
    // 0x808000F0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    func_800F3BD0(rdram, ctx);
        goto after_5;
    // 0x808000F0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x808000F4: jal         0x8009C984
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_6;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808000FC: lbu         $t7, 0x1C($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1C);
    // 0x80800100: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800104: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800108: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8080010C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80800110: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80800114: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x80800118: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8080011C: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x80800120: jal         0x800EEC30
    // 0x80800124: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_800EEC30(rdram, ctx);
        goto after_7;
    // 0x80800124: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_7:
    // 0x80800128: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8080012C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80800130: jal         0x80000008
    // 0x80800134: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80800008_babee(rdram, ctx);
        goto after_8;
    // 0x80800134: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_8:
    // 0x80800138: b           L_808001A0
    // 0x8080013C: lbu         $t3, 0x1C($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X1C);
        goto L_808001A0;
    // 0x8080013C: lbu         $t3, 0x1C($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X1C);
L_80800140:
    // 0x80800140: jal         0x80084B28
    // 0x80800144: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    _baeggfire_entrypoint_3(rdram, ctx);
        goto after_9;
    // 0x80800144: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x80800148: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8080014C: jal         0x800EF368
    // 0x80800150: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_800EF368(rdram, ctx);
        goto after_10;
    // 0x80800150: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_10:
    // 0x80800154: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800158: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8080015C: jal         0x800EE780
    // 0x80800160: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800EE780(rdram, ctx);
        goto after_11;
    // 0x80800160: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_11:
    // 0x80800164: lbu         $t0, 0x1C($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X1C);
    // 0x80800168: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8080016C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80800170: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80800174: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80800178: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x8080017C: jal         0x800EF368
    // 0x80800180: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    func_800EF368(rdram, ctx);
        goto after_12;
    // 0x80800180: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    after_12:
    // 0x80800184: jal         0x80084AF0
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggcursor_entrypoint_8(rdram, ctx);
        goto after_13;
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8080018C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800190: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80800194: jal         0x80000008
    // 0x80800198: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    func_80800008_babee(rdram, ctx);
        goto after_14;
    // 0x80800198: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_14:
    // 0x8080019C: lbu         $t3, 0x1C($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X1C);
L_808001A0:
    // 0x808001A0: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x808001A4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x808001A8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x808001AC: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x808001B0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x808001B4: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x808001B8: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x808001BC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x808001C0: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x808001C4: jal         0x800872C0
    // 0x808001C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    _chstinger_entrypoint_0(rdram, ctx);
        goto after_15;
    // 0x808001C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_15:
    // 0x808001CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808001D0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808001D4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808001D8: jr          $ra
    // 0x808001DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x808001DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void babee_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808001E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001E8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x808001EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808001F0: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x808001F4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808001F8: nop

    // 0x808001FC: bc1tl       L_80800260
    if (c1cs) {
        // 0x80800200: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800260;
    }
    goto skip_0;
    // 0x80800200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800204: lbu         $t6, 0x1C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1C);
    // 0x80800208: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8080020C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80800210: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80800214: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80800218: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8080021C: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80800220: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80800224: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x80800228: jal         0x8009C128
    // 0x8080022C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8080022C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800230: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(10, 0X3BC) << 16);
    // 0x80800234: addiu       $a3, $a3, 0x3BC
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(10, 0X3BC));
    // 0x80800238: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8080023C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80800240: jal         0x8010D930
    // 0x80800244: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8010D930(rdram, ctx);
        goto after_1;
    // 0x80800244: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80800248: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8080024C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80800250: addiu       $a0, $a0, 0x4548
    ctx->r4 = ADD32(ctx->r4, 0X4548);
    // 0x80800254: jal         0x80086D30
    // 0x80800258: lw          $a1, 0x184($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X184);
    _chbaddiesetup_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800258: lw          $a1, 0x184($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X184);
    after_2:
    // 0x8080025C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800260:
    // 0x80800260: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800264: jr          $ra
    // 0x80800268: nop

    return;
    // 0x80800268: nop

;}
RECOMP_FUNC void babee_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080026C: jr          $ra
    // 0x80800270: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800270: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void babee_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800274: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x80800278: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080027C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(10, 0X380) << 16);
    // 0x80800280: sb          $zero, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = 0;
    // 0x80800284: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x80800288: lwc1        $f6, 0x380($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(10, 0X380));
    // 0x8080028C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800290: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800294: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(10, 0X384) << 16);
    // 0x80800298: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x8080029C: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x808002A0: lwc1        $f10, 0x384($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(10, 0X384));
    // 0x808002A4: jr          $ra
    // 0x808002A8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    return;
    // 0x808002A8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void babee_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002AC: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x808002B0: lbu         $t6, 0x1C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1C);
    // 0x808002B4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x808002B8: jr          $ra
    // 0x808002BC: sb          $t7, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r15;
    return;
    // 0x808002BC: sb          $t7, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void babee_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002C0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x808002C4: lbu         $t6, 0x1C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1C);
    // 0x808002C8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x808002CC: jr          $ra
    // 0x808002D0: sb          $t7, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r15;
    return;
    // 0x808002D0: sb          $t7, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void babee_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x808002D8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x808002DC: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x808002E0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808002E4: lbu         $t6, 0x1C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1C);
    // 0x808002E8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x808002EC: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808002F0: mflo        $t7
    ctx->r15 = lo;
    // 0x808002F4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x808002F8: swc1        $f12, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f12.u32l;
    // 0x808002FC: lbu         $t9, 0x1C($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1C);
    // 0x80800300: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800304: mflo        $t0
    ctx->r8 = lo;
    // 0x80800308: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x8080030C: swc1        $f14, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f14.u32l;
    // 0x80800310: lbu         $t2, 0x1C($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1C);
    // 0x80800314: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80800318: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8080031C: mflo        $t3
    ctx->r11 = lo;
    // 0x80800320: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x80800324: jr          $ra
    // 0x80800328: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    return;
    // 0x80800328: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
;}
RECOMP_FUNC void babee_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080032C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800334: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x80800338: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080033C: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80800340: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800344: nop

    // 0x80800348: bc1fl       L_8080036C
    if (!c1cs) {
        // 0x8080034C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080036C;
    }
    goto skip_0;
    // 0x8080034C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800350: jal         0x800D8FF8
    // 0x80800354: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800354: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80800358: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8080035C: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80800360: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80800364: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x80800368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080036C:
    // 0x8080036C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800370: jr          $ra
    // 0x80800374: nop

    return;
    // 0x80800374: nop

    // 0x80800378: nop

    // 0x8080037C: nop

;}
RECOMP_FUNC void baboost_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void baboost_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x8080000C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800014: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80800018: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8080001C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800020: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800024: addu        $a0, $a1, $t6
    ctx->r4 = ADD32(ctx->r5, ctx->r14);
    // 0x80800028: bc1tl       L_80800038
    if (c1cs) {
        // 0x8080002C: lwc1        $f6, 0x8($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
            goto L_80800038;
    }
    goto skip_0;
    // 0x8080002C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    skip_0:
    // 0x80800030: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80800034: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
L_80800038:
    // 0x80800038: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8080003C: nop

    // 0x80800040: bc1tl       L_80800050
    if (c1cs) {
        // 0x80800044: lwc1        $f8, 0xC($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
            goto L_80800050;
    }
    goto skip_1;
    // 0x80800044: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    skip_1:
    // 0x80800048: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8080004C: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
L_80800050:
    // 0x80800050: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80800054: nop

    // 0x80800058: bc1tl       L_80800068
    if (c1cs) {
        // 0x8080005C: lwc1        $f10, 0x10($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
            goto L_80800068;
    }
    goto skip_2;
    // 0x8080005C: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    skip_2:
    // 0x80800060: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80800064: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
L_80800068:
    // 0x80800068: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x8080006C: nop

    // 0x80800070: bc1tl       L_80800080
    if (c1cs) {
        // 0x80800074: lwc1        $f16, 0x14($a0)
        ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
            goto L_80800080;
    }
    goto skip_3;
    // 0x80800074: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    skip_3:
    // 0x80800078: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8080007C: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
L_80800080:
    // 0x80800080: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x80800084: nop

    // 0x80800088: bc1t        L_80800094
    if (c1cs) {
        // 0x8080008C: nop
    
            goto L_80800094;
    }
    // 0x8080008C: nop

    // 0x80800090: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80800094:
    // 0x80800094: jr          $ra
    // 0x80800098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void baboost_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x808000A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000A8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x808000AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000B0: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x808000B4: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_808000B8:
    // 0x808000B8: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x808000BC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x808000C0: slti        $at, $a1, 0x14
    ctx->r1 = SIGNED(ctx->r5) < 0X14 ? 1 : 0;
    // 0x808000C4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x808000C8: nop

    // 0x808000CC: bc1f        L_808000E0
    if (!c1cs) {
        // 0x808000D0: nop
    
            goto L_808000E0;
    }
    // 0x808000D0: nop

    // 0x808000D4: swc1        $f12, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f12.u32l;
    // 0x808000D8: jr          $ra
    // 0x808000DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x808000DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808000E0:
    // 0x808000E0: bne         $at, $zero, L_808000B8
    if (ctx->r1 != 0) {
        // 0x808000E4: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_808000B8;
    }
    // 0x808000E4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x808000E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808000EC: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x808000F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808000F4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x808000F8: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x808000FC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80800100: addu        $a2, $v1, $t6
    ctx->r6 = ADD32(ctx->r3, ctx->r14);
    // 0x80800104: bc1fl       L_8080011C
    if (!c1cs) {
        // 0x80800108: lwc1        $f10, 0x8($a2)
        ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
            goto L_8080011C;
    }
    goto skip_0;
    // 0x80800108: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    skip_0:
    // 0x8080010C: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    // 0x80800110: jr          $ra
    // 0x80800114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800118: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
L_8080011C:
    // 0x8080011C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800120: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80800124: nop

    // 0x80800128: bc1fl       L_8080013C
    if (!c1cs) {
        // 0x8080012C: lwc1        $f16, 0xC($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
            goto L_8080013C;
    }
    goto skip_1;
    // 0x8080012C: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    skip_1:
    // 0x80800130: jr          $ra
    // 0x80800134: swc1        $f12, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f12.u32l;
    return;
    // 0x80800134: swc1        $f12, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f12.u32l;
    // 0x80800138: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
L_8080013C:
    // 0x8080013C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800140: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x80800144: nop

    // 0x80800148: bc1fl       L_8080015C
    if (!c1cs) {
        // 0x8080014C: lwc1        $f18, 0x10($a2)
        ctx->f18.u32l = MEM_W(ctx->r6, 0X10);
            goto L_8080015C;
    }
    goto skip_2;
    // 0x8080014C: lwc1        $f18, 0x10($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X10);
    skip_2:
    // 0x80800150: jr          $ra
    // 0x80800154: swc1        $f12, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f12.u32l;
    return;
    // 0x80800154: swc1        $f12, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f12.u32l;
    // 0x80800158: lwc1        $f18, 0x10($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X10);
L_8080015C:
    // 0x8080015C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800160: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x80800164: nop

    // 0x80800168: bc1fl       L_8080017C
    if (!c1cs) {
        // 0x8080016C: lwc1        $f4, 0x14($a2)
        ctx->f4.u32l = MEM_W(ctx->r6, 0X14);
            goto L_8080017C;
    }
    goto skip_3;
    // 0x8080016C: lwc1        $f4, 0x14($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X14);
    skip_3:
    // 0x80800170: jr          $ra
    // 0x80800174: swc1        $f12, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f12.u32l;
    return;
    // 0x80800174: swc1        $f12, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f12.u32l;
    // 0x80800178: lwc1        $f4, 0x14($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X14);
L_8080017C:
    // 0x8080017C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800180: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800184: nop

    // 0x80800188: bc1fl       L_808001A0
    if (!c1cs) {
        // 0x8080018C: swc1        $f12, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->f12.u32l;
            goto L_808001A0;
    }
    goto skip_4;
    // 0x8080018C: swc1        $f12, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f12.u32l;
    skip_4:
    // 0x80800190: swc1        $f12, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f12.u32l;
    // 0x80800194: jr          $ra
    // 0x80800198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8080019C: swc1        $f12, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f12.u32l;
L_808001A0:
    // 0x808001A0: jr          $ra
    // 0x808001A4: nop

    return;
    // 0x808001A4: nop

;}
RECOMP_FUNC void baboost_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808001AC: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x808001B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808001B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x808001B8: swc1        $f0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f0.u32l;
    // 0x808001BC: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x808001C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x808001C4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x808001C8: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x808001CC: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x808001D0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x808001D4: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x808001D8: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x808001DC: lw          $t9, 0x24($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X24);
    // 0x808001E0: addu        $a1, $t9, $v1
    ctx->r5 = ADD32(ctx->r25, ctx->r3);
    // 0x808001E4: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x808001E8: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x808001EC: lw          $t0, 0x24($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X24);
    // 0x808001F0: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x808001F4: swc1        $f0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f0.u32l;
    // 0x808001F8: lw          $t2, 0x24($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X24);
    // 0x808001FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80800200: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80800204: addu        $a1, $t2, $v1
    ctx->r5 = ADD32(ctx->r10, ctx->r3);
    // 0x80800208: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8080020C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80800210: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x80800214: lw          $t3, 0x24($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X24);
    // 0x80800218: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x8080021C: swc1        $f0, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f0.u32l;
    // 0x80800220: lw          $t5, 0x24($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X24);
    // 0x80800224: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    // 0x80800228: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8080022C: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    // 0x80800230: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x80800234: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80800238: swc1        $f0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f0.u32l;
    // 0x8080023C: lw          $t8, 0x24($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X24);
    // 0x80800240: addu        $a1, $t8, $v1
    ctx->r5 = ADD32(ctx->r24, ctx->r3);
    // 0x80800244: lwc1        $f16, 0x14($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80800248: swc1        $f16, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f16.u32l;
    // 0x8080024C: lw          $t9, 0x24($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X24);
    // 0x80800250: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x80800254: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80800258: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8080025C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80800260: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80800264: nop

    // 0x80800268: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8080026C: beql        $t1, $zero, L_808002BC
    if (ctx->r9 == 0) {
        // 0x80800270: mfc1        $t1, $f6
        ctx->r9 = (int32_t)ctx->f6.u32l;
            goto L_808002BC;
    }
    goto skip_0;
    // 0x80800270: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x80800274: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800278: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8080027C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800280: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80800284: nop

    // 0x80800288: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8080028C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80800290: nop

    // 0x80800294: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80800298: bne         $t1, $zero, L_808002B0
    if (ctx->r9 != 0) {
        // 0x8080029C: nop
    
            goto L_808002B0;
    }
    // 0x8080029C: nop

    // 0x808002A0: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x808002A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x808002A8: b           L_808002C8
    // 0x808002AC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_808002C8;
    // 0x808002AC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_808002B0:
    // 0x808002B0: b           L_808002C8
    // 0x808002B4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_808002C8;
    // 0x808002B4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x808002B8: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
L_808002BC:
    // 0x808002BC: nop

    // 0x808002C0: bltz        $t1, L_808002B0
    if (SIGNED(ctx->r9) < 0) {
        // 0x808002C4: nop
    
            goto L_808002B0;
    }
    // 0x808002C4: nop

L_808002C8:
    // 0x808002C8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x808002CC: jr          $ra
    // 0x808002D0: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    return;
    // 0x808002D0: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void baboost_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002DC: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x808002E0: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
    // 0x808002E4: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x808002E8: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x808002EC: bnel        $t8, $zero, L_80800300
    if (ctx->r24 != 0) {
        // 0x808002F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800300;
    }
    goto skip_0;
    // 0x808002F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808002F4: jal         0x800845A0
    // 0x808002F8: nop

    _baboost_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808002F8: nop

    after_0:
    // 0x808002FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800300:
    // 0x80800300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800304: jr          $ra
    // 0x80800308: nop

    return;
    // 0x80800308: nop

;}
RECOMP_FUNC void baboost_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080030C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800310: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800314: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800318: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8080031C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800320: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x80800324: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80800328: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8080032C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80800330: addiu       $s1, $zero, 0x14
    ctx->r17 = ADD32(0, 0X14);
    // 0x80800334: beql        $t7, $zero, L_80800388
    if (ctx->r15 == 0) {
        // 0x80800338: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800388;
    }
    goto skip_0;
    // 0x80800338: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8080033C: lw          $t8, 0x24($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X24);
L_80800340:
    // 0x80800340: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x80800344: jal         0x800D9078
    // 0x80800348: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800D9078(rdram, ctx);
        goto after_0;
    // 0x80800348: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8080034C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800350: bnel        $s0, $s1, L_80800340
    if (ctx->r16 != ctx->r17) {
        // 0x80800354: lw          $t8, 0x24($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X24);
            goto L_80800340;
    }
    goto skip_1;
    // 0x80800354: lw          $t8, 0x24($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X24);
    skip_1:
    // 0x80800358: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8080035C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80800360: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800364: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800368: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8080036C: nop

    // 0x80800370: bc1tl       L_80800388
    if (c1cs) {
        // 0x80800374: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800388;
    }
    goto skip_2;
    // 0x80800374: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80800378: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8080037C: jal         0x8000009C
    // 0x80800380: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    baboost_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800380: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    after_1:
    // 0x80800384: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800388:
    // 0x80800388: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080038C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800390: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800394: jr          $ra
    // 0x80800398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080039C: nop

;}
RECOMP_FUNC void babounce_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
;}
RECOMP_FUNC void func_80800008_babounce(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80800014: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800018: bne         $a1, $at, L_80800028
    if (ctx->r5 != ctx->r1) {
        // 0x8080001C: sb          $a1, 0xC($t6)
        MEM_B(0XC, ctx->r14) = ctx->r5;
            goto L_80800028;
    }
    // 0x8080001C: sb          $a1, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r5;
    // 0x80800020: jal         0x8008E95C
    // 0x80800024: nop

    func_8008E95C(rdram, ctx);
        goto after_0;
    // 0x80800024: nop

    after_0:
L_80800028:
    // 0x80800028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080002C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800030: jr          $ra
    // 0x80800034: nop

    return;
    // 0x80800034: nop

;}
RECOMP_FUNC void babounce_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x8080003C: jr          $ra
    // 0x80800040: lbu         $v0, 0xC($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XC);
    return;
    // 0x80800040: lbu         $v0, 0xC($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XC);
;}
RECOMP_FUNC void babounce_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080004C: jal         0x80084F80
    // 0x80800050: nop

    _bareact_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800050: nop

    after_0:
    // 0x80800054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800058: xori        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 ^ 0X2;
    // 0x8080005C: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x80800060: jr          $ra
    // 0x80800064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void babounce_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080006C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800070: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800074: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80800078: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080007C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800080: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x80800084: bnel        $t6, $at, L_8080009C
    if (ctx->r14 != ctx->r1) {
        // 0x80800088: lbu         $t7, 0xD($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0XD);
            goto L_8080009C;
    }
    goto skip_0;
    // 0x80800088: lbu         $t7, 0xD($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XD);
    skip_0:
    // 0x8080008C: jal         0x8009BA9C
    // 0x80800090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_0;
    // 0x80800090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800094: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80800098: lbu         $t7, 0xD($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XD);
L_8080009C:
    // 0x8080009C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808000A0: bnel        $t7, $at, L_808000C0
    if (ctx->r15 != ctx->r1) {
        // 0x808000A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000C0;
    }
    goto skip_1;
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808000A8: jal         0x800951B4
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000B0: jal         0x8009BD88
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BD88(rdram, ctx);
        goto after_2;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000B8: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808000C0:
    // 0x808000C0: jal         0x8009BCB4
    // 0x808000C4: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    func_8009BCB4(rdram, ctx);
        goto after_3;
    // 0x808000C4: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    after_3:
    // 0x808000C8: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D0: jal         0x8009BCC4
    // 0x808000D4: lw          $a1, 0x18($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X18);
    func_8009BCC4(rdram, ctx);
        goto after_4;
    // 0x808000D4: lw          $a1, 0x18($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X18);
    after_4:
    // 0x808000D8: jal         0x8008E95C
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E95C(rdram, ctx);
        goto after_5;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000E0: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    // 0x808000E4: addiu       $a1, $zero, 0xA1
    ctx->r5 = ADD32(0, 0XA1);
    // 0x808000E8: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x808000EC: beql        $a0, $zero, L_80800108
    if (ctx->r4 == 0) {
        // 0x808000F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800108;
    }
    goto skip_2;
    // 0x808000F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x808000F4: jal         0x8010114C
    // 0x808000F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8010114C(rdram, ctx);
        goto after_6;
    // 0x808000F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x808000FC: lw          $t0, 0x28($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X28);
    // 0x80800100: sw          $zero, 0x10($t0)
    MEM_W(0X10, ctx->r8) = 0;
    // 0x80800104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800108:
    // 0x80800108: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080010C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800110: jr          $ra
    // 0x80800114: nop

    return;
    // 0x80800114: nop

;}
RECOMP_FUNC void babounce_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800118: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8080011C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800120: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800124: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800128: jal         0x8009BADC
    // 0x8080012C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    func_8009BADC(rdram, ctx);
        goto after_0;
    // 0x8080012C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800130: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800138: jal         0x8009BAE8
    // 0x8080013C: swc1        $f0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f0.u32l;
    func_8009BAE8(rdram, ctx);
        goto after_1;
    // 0x8080013C: swc1        $f0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f0.u32l;
    after_1:
    // 0x80800140: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x80800144: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x80800148: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080014C: swc1        $f0, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f0.u32l;
    // 0x80800150: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x80800154: sw          $zero, 0x10($t8)
    MEM_W(0X10, ctx->r24) = 0;
    // 0x80800158: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    // 0x8080015C: beq         $v0, $at, L_80800178
    if (ctx->r2 == ctx->r1) {
        // 0x80800160: sb          $v0, 0xD($t9)
        MEM_B(0XD, ctx->r25) = ctx->r2;
            goto L_80800178;
    }
    // 0x80800160: sb          $v0, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r2;
    // 0x80800164: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800168: beq         $v0, $at, L_808001A4
    if (ctx->r2 == ctx->r1) {
        // 0x8080016C: nop
    
            goto L_808001A4;
    }
    // 0x8080016C: nop

    // 0x80800170: b           L_808001AC
    // 0x80800174: nop

        goto L_808001AC;
    // 0x80800174: nop

L_80800178:
    // 0x80800178: jal         0x800A32EC
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A32EC(rdram, ctx);
        goto after_2;
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800180: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800184: beq         $v0, $at, L_80800194
    if (ctx->r2 == ctx->r1) {
        // 0x80800188: nop
    
            goto L_80800194;
    }
    // 0x80800188: nop

    // 0x8080018C: jal         0x8009D9D4
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D9D4(rdram, ctx);
        goto after_3;
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80800194:
    // 0x80800194: jal         0x8009514C
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_4;
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080019C: b           L_808001AC
    // 0x808001A0: nop

        goto L_808001AC;
    // 0x808001A0: nop

L_808001A4:
    // 0x808001A4: jal         0x8009DA40
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009DA40(rdram, ctx);
        goto after_5;
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_808001AC:
    // 0x808001AC: jal         0x80099A58
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A58(rdram, ctx);
        goto after_6;
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001B4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001BC: jal         0x80084F78
    // 0x808001C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _bareact_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x808001C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_7:
    // 0x808001C4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(12, 0X6B0) << 16);
    // 0x808001C8: lwc1        $f4, 0x6B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(12, 0X6B0));
    // 0x808001CC: lw          $t0, 0x28($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X28);
    // 0x808001D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(12, 0X6B4) << 16);
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D8: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x808001DC: lw          $t1, 0x28($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X28);
    // 0x808001E0: lwc1        $f6, 0x6B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(12, 0X6B4));
    // 0x808001E4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x808001E8: jal         0x800A32C4
    // 0x808001EC: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
    func_800A32C4(rdram, ctx);
        goto after_8;
    // 0x808001EC: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
    after_8:
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F4: jal         0x8009C128
    // 0x808001F8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_8009C128(rdram, ctx);
        goto after_9;
    // 0x808001F8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x808001FC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800200: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80800204: jal         0x800F1E6C
    // 0x80800208: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800F1E6C(rdram, ctx);
        goto after_10;
    // 0x80800208: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_10:
    // 0x8080020C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80800210: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800218: beq         $v1, $at, L_80800228
    if (ctx->r3 == ctx->r1) {
        // 0x8080021C: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_80800228;
    }
    // 0x8080021C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80800220: bne         $v1, $at, L_80800308
    if (ctx->r3 != ctx->r1) {
        // 0x80800224: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80800308;
    }
    // 0x80800224: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_80800228:
    // 0x80800228: jal         0x80000008
    // 0x8080022C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800008_babounce(rdram, ctx);
        goto after_11;
    // 0x8080022C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x80800230: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80800234: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800244: jal         0x8009FFD8
    // 0x80800248: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_12;
    // 0x80800248: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_12:
    // 0x8080024C: jal         0x800136E4
    // 0x80800250: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    func_800136E4(rdram, ctx);
        goto after_13;
    // 0x80800250: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    after_13:
    // 0x80800254: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800258: jal         0x8009C914
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_14;
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800260: jal         0x80099A40
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A40(rdram, ctx);
        goto after_15;
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800268: lw          $t3, 0x28($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X28);
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: jal         0x80099A34
    // 0x80800274: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    func_80099A34(rdram, ctx);
        goto after_16;
    // 0x80800274: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    after_16:
    // 0x80800278: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8080027C: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
    // 0x80800280: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800288: lwc1        $f8, 0x1C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8080028C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80800290: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x80800294: jal         0x8009F3BC
    // 0x80800298: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8009F3BC(rdram, ctx);
        goto after_17;
    // 0x80800298: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x8080029C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x808002A0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x808002A4: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x808002A8: jal         0x800EFB24
    // 0x808002AC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_800EFB24(rdram, ctx);
        goto after_18;
    // 0x808002AC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_18:
    // 0x808002B0: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808002B4: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x808002B8: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x808002BC: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808002C0: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C8: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x808002CC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x808002D0: div.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x808002D4: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x808002D8: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x808002DC: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
    // 0x808002E0: jal         0x8009BA9C
    // 0x808002E4: swc1        $f2, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f2.u32l;
    func_8009BA9C(rdram, ctx);
        goto after_19;
    // 0x808002E4: swc1        $f2, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f2.u32l;
    after_19:
    // 0x808002E8: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808002EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x808002F4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x808002F8: jal         0x80085338
    // 0x808002FC: nop

    _batimer_set(rdram, ctx);
        goto after_20;
    // 0x808002FC: nop

    after_20:
    // 0x80800300: b           L_808003C8
    // 0x80800304: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
        goto L_808003C8;
    // 0x80800304: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
L_80800308:
    // 0x80800308: jal         0x80000008
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_babounce(rdram, ctx);
        goto after_21;
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800310: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800314: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800318: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080031C: jal         0x800136E4
    // 0x80800320: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_800136E4(rdram, ctx);
        goto after_22;
    // 0x80800320: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_22:
    // 0x80800324: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800328: jal         0x8009C914
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_23;
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800330: jal         0x80084F90
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_4(rdram, ctx);
        goto after_24;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80800338: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080033C: jal         0x8009B9B0
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_25;
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800348: jal         0x8009B9C0
    // 0x8080034C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009B9C0(rdram, ctx);
        goto after_26;
    // 0x8080034C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_26:
    // 0x80800350: jal         0x8009BB00
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_27;
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80800358: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800360: jal         0x8009BA68
    // 0x80800364: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009BA68(rdram, ctx);
        goto after_28;
    // 0x80800364: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_28:
    // 0x80800368: jal         0x80084F88
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_3(rdram, ctx);
        goto after_29;
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80800370: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800374: jal         0x8009BA58
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_30;
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x8080037C: jal         0x80084F98
    // 0x80800380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_5(rdram, ctx);
        goto after_31;
    // 0x80800380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80800384: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x80800388: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800390: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x80800394: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800398: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080039C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808003A0: jal         0x8009FFD8
    // 0x808003A4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_32;
    // 0x808003A4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_32:
    // 0x808003A8: jal         0x80084F80
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_2(rdram, ctx);
        goto after_33;
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x808003B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808003B4: bne         $v0, $at, L_808003C4
    if (ctx->r2 != ctx->r1) {
        // 0x808003B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003C4;
    }
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003BC: jal         0x8009B800
    // 0x808003C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_34;
    // 0x808003C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_34:
L_808003C4:
    // 0x808003C4: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
L_808003C8:
    // 0x808003C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003CC: jal         0x8009BCB4
    // 0x808003D0: lw          $a1, 0x1C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1C);
    func_8009BCB4(rdram, ctx);
        goto after_35;
    // 0x808003D0: lw          $a1, 0x1C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1C);
    after_35:
    // 0x808003D4: jal         0x8009BC90
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_36;
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x808003DC: jal         0x8009C974
    // 0x808003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_37;
    // 0x808003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x808003E4: jal         0x8008E944
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_38;
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x808003EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808003F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x808003F8: jr          $ra
    // 0x808003FC: nop

    return;
    // 0x808003FC: nop

;}
RECOMP_FUNC void babounce_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800404: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800408: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080040C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800410: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800414: jal         0x8008CABC
    // 0x80800418: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800418: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x8080041C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800420: jal         0x8008AF24
    // 0x80800424: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800424: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080042C: jal         0x8008AED4
    // 0x80800430: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800430: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80800434: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80800438: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080043C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800440: lw          $v0, 0x28($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X28);
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800448: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    // 0x8080044C: bne         $t7, $at, L_8080047C
    if (ctx->r15 != ctx->r1) {
        // 0x80800450: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8080047C;
    }
    // 0x80800450: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800454: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800458: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800460: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800464: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80800468: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8080046C: jal         0x8008B1BC
    // 0x80800470: nop

    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80800470: nop

    after_3:
    // 0x80800474: b           L_80800488
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800488;
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080047C:
    // 0x8080047C: jal         0x8008B1BC
    // 0x80800480: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x80800480: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    after_4:
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800488:
    // 0x80800488: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8080048C: jal         0x8008B1D4
    // 0x80800490: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_8008B1D4(rdram, ctx);
        goto after_5;
    // 0x80800490: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800498: jal         0x8008B134
    // 0x8080049C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x8080049C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808004A0: jal         0x8008B064
    // 0x808004A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808004A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808004A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808004AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004B4: jr          $ra
    // 0x808004B8: nop

    return;
    // 0x808004B8: nop

;}
RECOMP_FUNC void babounce_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004C4: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x808004C8: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x808004CC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x808004D0: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x808004D4: lw          $t7, 0x28($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X28);
    // 0x808004D8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808004DC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x808004E0: jal         0x80000400
    // 0x808004E4: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    babounce_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x808004E4: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    after_0:
    // 0x808004E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004F0: jr          $ra
    // 0x808004F4: nop

    return;
    // 0x808004F4: nop

;}
RECOMP_FUNC void babounce_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F8: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x808004FC: jr          $ra
    // 0x80800500: sw          $a1, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r5;
    return;
    // 0x80800500: sw          $a1, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void babounce_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800504: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800508: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080050C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800510: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80800514: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080051C: lbu         $v0, 0xC($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XC);
    // 0x80800520: beq         $v0, $at, L_808005C4
    if (ctx->r2 == ctx->r1) {
        // 0x80800524: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808005C4;
    }
    // 0x80800524: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800528: beq         $v0, $at, L_80800590
    if (ctx->r2 == ctx->r1) {
        // 0x8080052C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800590;
    }
    // 0x8080052C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800530: bnel        $v0, $at, L_808005D0
    if (ctx->r2 != ctx->r1) {
        // 0x80800534: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808005D0;
    }
    goto skip_0;
    // 0x80800534: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80800538: jal         0x800852F0
    // 0x8080053C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x8080053C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x80800540: beq         $v0, $zero, L_80800588
    if (ctx->r2 == 0) {
        // 0x80800544: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800588;
    }
    // 0x80800544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800548: jal         0x8009BB24
    // 0x8080054C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_1;
    // 0x8080054C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800550: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800558: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8080055C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80800560: jal         0x8009BA9C
    // 0x80800564: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_8009BA9C(rdram, ctx);
        goto after_2;
    // 0x80800564: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080056C: jal         0x8009B9B0
    // 0x80800570: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800570: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800578: jal         0x80000008
    // 0x8080057C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800008_babounce(rdram, ctx);
        goto after_4;
    // 0x8080057C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800580: b           L_808005D0
    // 0x80800584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808005D0;
    // 0x80800584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800588:
    // 0x80800588: b           L_808005D0
    // 0x8080058C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808005D0;
    // 0x8080058C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800590:
    // 0x80800590: jal         0x8008E078
    // 0x80800594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_5;
    // 0x80800594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800598: beq         $v0, $zero, L_808005BC
    if (ctx->r2 == 0) {
        // 0x8080059C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005BC;
    }
    // 0x8080059C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A0: jal         0x8009B9B0
    // 0x808005A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x808005A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005AC: jal         0x80000008
    // 0x808005B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800008_babounce(rdram, ctx);
        goto after_7;
    // 0x808005B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808005B4: b           L_808005D0
    // 0x808005B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808005D0;
    // 0x808005B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808005BC:
    // 0x808005BC: b           L_808005D0
    // 0x808005C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808005D0;
    // 0x808005C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808005C4:
    // 0x808005C4: b           L_808005D0
    // 0x808005C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_808005D0;
    // 0x808005C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x808005CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808005D0:
    // 0x808005D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808005D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808005DC: jr          $ra
    // 0x808005E0: nop

    return;
    // 0x808005E0: nop

;}
RECOMP_FUNC void babounce_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005EC: jal         0x80000504
    // 0x808005F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    babounce_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x808005F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808005F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005F8: beq         $v0, $at, L_80800614
    if (ctx->r2 == ctx->r1) {
        // 0x808005FC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800614;
    }
    // 0x808005FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800600: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800604: beq         $v0, $at, L_8080062C
    if (ctx->r2 == ctx->r1) {
        // 0x80800608: nop
    
            goto L_8080062C;
    }
    // 0x80800608: nop

    // 0x8080060C: b           L_80800668
    // 0x80800610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800668;
    // 0x80800610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800614:
    // 0x80800614: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80800618: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8080061C: jal         0x8008CF1C
    // 0x80800620: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    func_8008CF1C(rdram, ctx);
        goto after_1;
    // 0x80800620: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    after_1:
    // 0x80800624: b           L_80800668
    // 0x80800628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800668;
    // 0x80800628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080062C:
    // 0x8080062C: jal         0x8008CAEC
    // 0x80800630: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008CAEC(rdram, ctx);
        goto after_2;
    // 0x80800630: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80800634: bne         $v0, $zero, L_8080065C
    if (ctx->r2 != 0) {
        // 0x80800638: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080065C;
    }
    // 0x80800638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080063C: jal         0x8009EF04
    // 0x80800640: nop

    func_8009EF04(rdram, ctx);
        goto after_3;
    // 0x80800640: nop

    after_3:
    // 0x80800644: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800648: nop

    // 0x8080064C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800650: nop

    // 0x80800654: bc1tl       L_80800668
    if (c1cs) {
        // 0x80800658: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800668;
    }
    goto skip_0;
    // 0x80800658: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_8080065C:
    // 0x8080065C: b           L_80800668
    // 0x80800660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800668;
    // 0x80800660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800664: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800668:
    // 0x80800668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080066C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800670: jr          $ra
    // 0x80800674: nop

    return;
    // 0x80800674: nop

;}
RECOMP_FUNC void babounce_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080067C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800680: jal         0x80000504
    // 0x80800684: nop

    babounce_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x80800684: nop

    after_0:
    // 0x80800688: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080068C: bne         $v0, $at, L_8080069C
    if (ctx->r2 != ctx->r1) {
        // 0x80800690: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080069C;
    }
    // 0x80800690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800694: b           L_808006A0
    // 0x80800698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006A0;
    // 0x80800698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080069C:
    // 0x8080069C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006A0:
    // 0x808006A0: jr          $ra
    // 0x808006A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x808006A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void babuzz_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
;}
RECOMP_FUNC void func_80800008_babuzz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(13, 0X2D0) << 16);
    // 0x80800014: jal         0x800F0F9C
    // 0x80800018: lwc1        $f14, 0x2D0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(13, 0X2D0));
    func_800F0F9C(rdram, ctx);
        goto after_0;
    // 0x80800018: lwc1        $f14, 0x2D0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(13, 0X2D0));
    after_0:
    // 0x8080001C: add.s       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80800020: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800024: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800028: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8080002C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x80800030: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x80800034: nop

    // 0x80800038: bc1fl       L_80800050
    if (!c1cs) {
        // 0x8080003C: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80800050;
    }
    goto skip_0;
    // 0x8080003C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_0:
    // 0x80800040: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800044: nop

    // 0x80800048: sub.s       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x8080004C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_80800050:
    // 0x80800050: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800054: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(13, 0X2D4) << 16);
    // 0x80800058: lwc1        $f10, 0x2D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(13, 0X2D4));
    // 0x8080005C: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x80800060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800068: mul.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8080006C: jr          $ra
    // 0x80800070: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80800070: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_80800074_babuzz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080007C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800080: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80800084: jal         0x800D8FF8
    // 0x80800088: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800088: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8080008C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80800090: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800094: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080009C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x808000A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A4: bc1f        L_808000CC
    if (!c1cs) {
        // 0x808000A8: nop
    
            goto L_808000CC;
    }
    // 0x808000A8: nop

    // 0x808000AC: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x808000B0: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x808000B4: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x808000B8: nop

    // 0x808000BC: bc1f        L_808000E8
    if (!c1cs) {
        // 0x808000C0: nop
    
            goto L_808000E8;
    }
    // 0x808000C0: nop

    // 0x808000C4: b           L_808000E8
    // 0x808000C8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_808000E8;
    // 0x808000C8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_808000CC:
    // 0x808000CC: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x808000D0: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x808000D4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x808000D8: nop

    // 0x808000DC: bc1f        L_808000E8
    if (!c1cs) {
        // 0x808000E0: nop
    
            goto L_808000E8;
    }
    // 0x808000E0: nop

    // 0x808000E4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_808000E8:
    // 0x808000E8: jr          $ra
    // 0x808000EC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x808000EC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void babuzz_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000FC: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x80800100: jal         0x800C2FDC
    // 0x80800104: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800104: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    after_0:
    // 0x80800108: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8080010C: lw          $t9, 0x34($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X34);
    // 0x80800110: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x80800114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080011C: jr          $ra
    // 0x80800120: nop

    return;
    // 0x80800120: nop

;}
RECOMP_FUNC void babuzz_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800124: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080012C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800130: jal         0x800C2E04
    // 0x80800134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800C2E04(rdram, ctx);
        goto after_0;
    // 0x80800134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800138: lw          $t6, 0x34($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X34);
    // 0x8080013C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800140: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800144: sb          $v0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r2;
    // 0x80800148: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x8080014C: addiu       $t8, $zero, 0x1F40
    ctx->r24 = ADD32(0, 0X1F40);
    // 0x80800150: addiu       $a1, $zero, 0x49B
    ctx->r5 = ADD32(0, 0X49B);
    // 0x80800154: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    // 0x80800158: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8080015C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80800160: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x80800164: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x80800168: sw          $t8, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r24;
    // 0x8080016C: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80800170: lw          $t0, 0x10($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X10);
    // 0x80800174: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x80800178: lw          $t1, 0x34($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X34);
    // 0x8080017C: jal         0x800C301C
    // 0x80800180: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
    func_800C301C(rdram, ctx);
        goto after_1;
    // 0x80800180: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
    after_1:
    // 0x80800184: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x80800188: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080018C: jal         0x800C330C
    // 0x80800190: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    func_800C330C(rdram, ctx);
        goto after_2;
    // 0x80800190: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    after_2:
    // 0x80800194: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80800198: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8080019C: jal         0x800C31DC
    // 0x808001A0: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    func_800C31DC(rdram, ctx);
        goto after_3;
    // 0x808001A0: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    after_3:
    // 0x808001A4: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x808001A8: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x808001AC: jal         0x800C3058
    // 0x808001B0: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    func_800C3058(rdram, ctx);
        goto after_4;
    // 0x808001B0: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    after_4:
    // 0x808001B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x808001B8: lw          $t3, 0x34($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X34);
    // 0x808001BC: swc1        $f8, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f8.u32l;
    // 0x808001C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001CC: jr          $ra
    // 0x808001D0: nop

    return;
    // 0x808001D0: nop

;}
RECOMP_FUNC void babuzz_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001E0: jal         0x800D8FF8
    // 0x808001E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808001E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808001E8: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x808001EC: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x808001F0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808001F4: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x808001F8: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x808001FC: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80800200: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80800204: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800208: jal         0x80000074
    // 0x8080020C: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    func_80800074_babuzz(rdram, ctx);
        goto after_1;
    // 0x8080020C: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    after_1:
    // 0x80800210: lw          $t6, 0x34($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X34);
    // 0x80800214: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80800218: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x8080021C: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80800220: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x80800224: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x80800228: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8080022C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80800230: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800234: jal         0x80000074
    // 0x80800238: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    func_80800074_babuzz(rdram, ctx);
        goto after_2;
    // 0x80800238: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_2:
    // 0x8080023C: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800240: lw          $t1, 0x34($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X34);
    // 0x80800244: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x80800248: nop

    // 0x8080024C: sw          $t0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r8;
    // 0x80800250: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x80800254: jal         0x80000008
    // 0x80800258: lwc1        $f12, 0x14($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X14);
    func_80800008_babuzz(rdram, ctx);
        goto after_3;
    // 0x80800258: lwc1        $f12, 0x14($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X14);
    after_3:
    // 0x8080025C: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80800260: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800264: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80800268: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x8080026C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80800270: jal         0x800C31DC
    // 0x80800274: nop

    func_800C31DC(rdram, ctx);
        goto after_4;
    // 0x80800274: nop

    after_4:
    // 0x80800278: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8080027C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80800280: jal         0x800C3058
    // 0x80800284: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    func_800C3058(rdram, ctx);
        goto after_5;
    // 0x80800284: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    after_5:
    // 0x80800288: lw          $t3, 0x34($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X34);
    // 0x8080028C: jal         0x800C3BDC
    // 0x80800290: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    func_800C3BDC(rdram, ctx);
        goto after_6;
    // 0x80800290: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    after_6:
    // 0x80800294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800298: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080029C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002A0: jr          $ra
    // 0x808002A4: nop

    return;
    // 0x808002A4: nop

;}
RECOMP_FUNC void babuzz_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808002AC: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x808002B0: jr          $ra
    // 0x808002B4: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808002B4: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void babuzz_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B8: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x808002BC: jr          $ra
    // 0x808002C0: sw          $a1, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r5;
    return;
    // 0x808002C0: sw          $a1, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bacough_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
;}
RECOMP_FUNC void bacough_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x8080000C: jr          $ra
    // 0x80800010: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    return;
    // 0x80800010: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
;}
RECOMP_FUNC void bacough_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080001C: jal         0x8000005C
    // 0x80800020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    bacough_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080002C: jr          $ra
    // 0x80800030: nop

    return;
    // 0x80800030: nop

;}
RECOMP_FUNC void bacough_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080003C: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x80800040: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800044: jal         0x8000005C
    // 0x80800048: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    bacough_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800048: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    after_0:
    // 0x8080004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800054: jr          $ra
    // 0x80800058: nop

    return;
    // 0x80800058: nop

;}
RECOMP_FUNC void bacough_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080005C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800060: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800068: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080006C: beq         $a1, $at, L_80800088
    if (ctx->r5 == ctx->r1) {
        // 0x80800070: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80800088;
    }
    // 0x80800070: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80800074: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800078: beq         $a1, $at, L_808000A4
    if (ctx->r5 == ctx->r1) {
        // 0x8080007C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808000A4;
    }
    // 0x8080007C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800080: b           L_808000CC
    // 0x80800084: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
        goto L_808000CC;
    // 0x80800084: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
L_80800088:
    // 0x80800088: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080008C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80800090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800094: jal         0x8009ADF0
    // 0x80800098: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8009ADF0(rdram, ctx);
        goto after_0;
    // 0x80800098: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080009C: b           L_808000C8
    // 0x808000A0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
        goto L_808000C8;
    // 0x808000A0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_808000A4:
    // 0x808000A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x808000A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000AC: lw          $t7, 0x44($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X44);
    // 0x808000B0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x808000B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808000B8: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    // 0x808000BC: jal         0x8009ADF0
    // 0x808000C0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8009ADF0(rdram, ctx);
        goto after_1;
    // 0x808000C0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x808000C4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_808000C8:
    // 0x808000C8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
L_808000CC:
    // 0x808000CC: lw          $t9, 0x44($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X44);
    // 0x808000D0: sb          $a3, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r7;
    // 0x808000D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000DC: jr          $ra
    // 0x808000E0: nop

    return;
    // 0x808000E0: nop

;}
RECOMP_FUNC void bacough_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000EC: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x808000F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808000F4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x808000F8: bnel        $t7, $at, L_808002C0
    if (ctx->r15 != ctx->r1) {
        // 0x808000FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808002C0;
    }
    goto skip_0;
    // 0x808000FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800100: jal         0x800F424C
    // 0x80800104: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800F424C(rdram, ctx);
        goto after_0;
    // 0x80800104: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800108: beq         $v0, $zero, L_808002BC
    if (ctx->r2 == 0) {
        // 0x8080010C: lw          $t8, 0x28($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X28);
            goto L_808002BC;
    }
    // 0x8080010C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80800110: lw          $a0, 0x44($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X44);
    // 0x80800114: jal         0x800D9078
    // 0x80800118: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800D9078(rdram, ctx);
        goto after_1;
    // 0x80800118: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x8080011C: beql        $v0, $zero, L_808002C0
    if (ctx->r2 == 0) {
        // 0x80800120: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808002C0;
    }
    goto skip_1;
    // 0x80800120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800124: jal         0x800DC0C0
    // 0x80800128: nop

    func_800DC0C0(rdram, ctx);
        goto after_2;
    // 0x80800128: nop

    after_2:
    // 0x8080012C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(14, 0X2D0) << 16);
    // 0x80800130: lwc1        $f12, 0x2D0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2D0));
    // 0x80800134: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(14, 0X2D4) << 16);
    // 0x80800138: lwc1        $f14, 0x2D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2D4));
    // 0x8080013C: jal         0x800DC178
    // 0x80800140: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x80800140: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x80800144: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800148: jal         0x800A3274
    // 0x8080014C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800A3274(rdram, ctx);
        goto after_4;
    // 0x8080014C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x80800150: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800154: beq         $v0, $at, L_80800180
    if (ctx->r2 == ctx->r1) {
        // 0x80800158: lwc1        $f2, 0x20($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
            goto L_80800180;
    }
    // 0x80800158: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8080015C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80800160: beq         $v0, $at, L_80800180
    if (ctx->r2 == ctx->r1) {
        // 0x80800164: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80800180;
    }
    // 0x80800164: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80800168: beq         $v0, $at, L_808001C8
    if (ctx->r2 == ctx->r1) {
        // 0x8080016C: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_808001C8;
    }
    // 0x8080016C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80800170: beql        $v0, $at, L_808001F8
    if (ctx->r2 == ctx->r1) {
        // 0x80800174: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_808001F8;
    }
    goto skip_2;
    // 0x80800174: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_2:
    // 0x80800178: b           L_80800218
    // 0x8080017C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_80800218;
    // 0x8080017C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80800180:
    // 0x80800180: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(14, 0X2D8) << 16);
    // 0x80800184: lwc1        $f4, 0x2D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2D8));
    // 0x80800188: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(14, 0X2DC) << 16);
    // 0x8080018C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80800190: nop

    // 0x80800194: bc1f        L_808001A4
    if (!c1cs) {
        // 0x80800198: nop
    
            goto L_808001A4;
    }
    // 0x80800198: nop

    // 0x8080019C: b           L_80800218
    // 0x808001A0: addiu       $a1, $zero, 0x571
    ctx->r5 = ADD32(0, 0X571);
        goto L_80800218;
    // 0x808001A0: addiu       $a1, $zero, 0x571
    ctx->r5 = ADD32(0, 0X571);
L_808001A4:
    // 0x808001A4: lwc1        $f6, 0x2DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2DC));
    // 0x808001A8: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x808001AC: nop

    // 0x808001B0: bc1f        L_808001C0
    if (!c1cs) {
        // 0x808001B4: nop
    
            goto L_808001C0;
    }
    // 0x808001B4: nop

    // 0x808001B8: b           L_80800218
    // 0x808001BC: addiu       $a1, $zero, 0x572
    ctx->r5 = ADD32(0, 0X572);
        goto L_80800218;
    // 0x808001BC: addiu       $a1, $zero, 0x572
    ctx->r5 = ADD32(0, 0X572);
L_808001C0:
    // 0x808001C0: b           L_80800218
    // 0x808001C4: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
        goto L_80800218;
    // 0x808001C4: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
L_808001C8:
    // 0x808001C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808001CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808001D0: nop

    // 0x808001D4: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x808001D8: nop

    // 0x808001DC: bc1f        L_808001EC
    if (!c1cs) {
        // 0x808001E0: nop
    
            goto L_808001EC;
    }
    // 0x808001E0: nop

    // 0x808001E4: b           L_80800218
    // 0x808001E8: addiu       $a1, $zero, 0x45B
    ctx->r5 = ADD32(0, 0X45B);
        goto L_80800218;
    // 0x808001E8: addiu       $a1, $zero, 0x45B
    ctx->r5 = ADD32(0, 0X45B);
L_808001EC:
    // 0x808001EC: b           L_80800218
    // 0x808001F0: addiu       $a1, $zero, 0x59F
    ctx->r5 = ADD32(0, 0X59F);
        goto L_80800218;
    // 0x808001F0: addiu       $a1, $zero, 0x59F
    ctx->r5 = ADD32(0, 0X59F);
    // 0x808001F4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_808001F8:
    // 0x808001F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808001FC: addiu       $a1, $zero, 0x510
    ctx->r5 = ADD32(0, 0X510);
    // 0x80800200: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x80800204: nop

    // 0x80800208: bc1f        L_80800218
    if (!c1cs) {
        // 0x8080020C: nop
    
            goto L_80800218;
    }
    // 0x8080020C: nop

    // 0x80800210: b           L_80800218
    // 0x80800214: addiu       $a1, $zero, 0x50F
    ctx->r5 = ADD32(0, 0X50F);
        goto L_80800218;
    // 0x80800214: addiu       $a1, $zero, 0x50F
    ctx->r5 = ADD32(0, 0X50F);
L_80800218:
    // 0x80800218: beq         $a1, $zero, L_8080022C
    if (ctx->r5 == 0) {
        // 0x8080021C: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_8080022C;
    }
    // 0x8080021C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800220: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80800224: jal         0x8009DB04
    // 0x80800228: addiu       $a3, $zero, 0x5DC0
    ctx->r7 = ADD32(0, 0X5DC0);
    func_8009DB04(rdram, ctx);
        goto after_5;
    // 0x80800228: addiu       $a3, $zero, 0x5DC0
    ctx->r7 = ADD32(0, 0X5DC0);
    after_5:
L_8080022C:
    // 0x8080022C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(14, 0X2E0) << 16);
    // 0x80800230: jal         0x800DC298
    // 0x80800234: lwc1        $f12, 0x2E0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2E0));
    func_800DC298(rdram, ctx);
        goto after_6;
    // 0x80800234: lwc1        $f12, 0x2E0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2E0));
    after_6:
    // 0x80800238: beq         $v0, $zero, L_80800264
    if (ctx->r2 == 0) {
        // 0x8080023C: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(14, 0X2EC) << 16);
            goto L_80800264;
    }
    // 0x8080023C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(14, 0X2EC) << 16);
    // 0x80800240: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(14, 0X2E4) << 16);
    // 0x80800244: lwc1        $f12, 0x2E4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2E4));
    // 0x80800248: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(14, 0X2E8) << 16);
    // 0x8080024C: jal         0x800DC178
    // 0x80800250: lwc1        $f14, 0x2E8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2E8));
    func_800DC178(rdram, ctx);
        goto after_7;
    // 0x80800250: lwc1        $f14, 0x2E8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2E8));
    after_7:
    // 0x80800254: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80800258: lw          $t0, 0x44($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X44);
    // 0x8080025C: b           L_808002BC
    // 0x80800260: swc1        $f0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f0.u32l;
        goto L_808002BC;
    // 0x80800260: swc1        $f0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f0.u32l;
L_80800264:
    // 0x80800264: jal         0x800DC298
    // 0x80800268: lwc1        $f12, 0x2EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2EC));
    func_800DC298(rdram, ctx);
        goto after_8;
    // 0x80800268: lwc1        $f12, 0x2EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(14, 0X2EC));
    after_8:
    // 0x8080026C: beq         $v0, $zero, L_8080029C
    if (ctx->r2 == 0) {
        // 0x80800270: lui         $at, 0x4060
        ctx->r1 = S32(0X4060 << 16);
            goto L_8080029C;
    }
    // 0x80800270: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x80800274: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80800278: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8080027C: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80800280: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800284: jal         0x800DC178
    // 0x80800288: nop

    func_800DC178(rdram, ctx);
        goto after_9;
    // 0x80800288: nop

    after_9:
    // 0x8080028C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80800290: lw          $t2, 0x44($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X44);
    // 0x80800294: b           L_808002BC
    // 0x80800298: swc1        $f0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f0.u32l;
        goto L_808002BC;
    // 0x80800298: swc1        $f0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f0.u32l;
L_8080029C:
    // 0x8080029C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808002A0: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x808002A4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808002A8: jal         0x800DC178
    // 0x808002AC: nop

    func_800DC178(rdram, ctx);
        goto after_10;
    // 0x808002AC: nop

    after_10:
    // 0x808002B0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x808002B4: lw          $t4, 0x44($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X44);
    // 0x808002B8: swc1        $f0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f0.u32l;
L_808002BC:
    // 0x808002BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002C0:
    // 0x808002C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808002C4: jr          $ra
    // 0x808002C8: nop

    return;
    // 0x808002C8: nop

;}
RECOMP_FUNC void func_80800000_badata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8009E6F8
    // 0x8080000C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x8080000C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800010: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800014: jal         0x800A3274
    // 0x80800018: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x80800018: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080001C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80800020: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x80800024: beq         $at, $zero, L_80800248
    if (ctx->r1 == 0) {
        // 0x80800028: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800248;
    }
    // 0x80800028: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8080002C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(15, 0XFC0) << 16);
    // 0x80800030: addu        $at, $at, $t6
    gpr jr_addend_80800038 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800034: lw          $t6, 0xFC0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(15, 0XFC0));
    // 0x80800038: jr          $t6
    // 0x8080003C: nop

    switch (jr_addend_80800038 >> 2) {
        case 0: goto L_80800248; break;
        case 1: goto L_80800040; break;
        case 2: goto L_80800248; break;
        case 3: goto L_80800248; break;
        case 4: goto L_80800248; break;
        case 5: goto L_80800048; break;
        case 6: goto L_80800070; break;
        case 7: goto L_80800078; break;
        case 8: goto L_80800240; break;
        case 9: goto L_80800080; break;
        case 10: goto L_80800148; break;
        case 11: goto L_80800220; break;
        case 12: goto L_808001E8; break;
        case 13: goto L_80800208; break;
        case 14: goto L_80800210; break;
        case 15: goto L_80800218; break;
        case 16: goto L_80800228; break;
        case 17: goto L_80800230; break;
        case 18: goto L_80800238; break;
        default: switch_error(__func__, 0x80800038, 0x80800FC0);
    }
    // 0x8080003C: nop

L_80800040:
    // 0x80800040: b           L_80800378
    // 0x80800044: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80800378;
    // 0x80800044: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80800048:
    // 0x80800048: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080004C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800050: jal         0x8009CA70
    // 0x80800054: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    func_8009CA70(rdram, ctx);
        goto after_2;
    // 0x80800054: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    after_2:
    // 0x80800058: beq         $v0, $zero, L_80800068
    if (ctx->r2 == 0) {
        // 0x8080005C: nop
    
            goto L_80800068;
    }
    // 0x8080005C: nop

    // 0x80800060: b           L_80800378
    // 0x80800064: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
        goto L_80800378;
    // 0x80800064: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_80800068:
    // 0x80800068: b           L_80800378
    // 0x8080006C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_80800378;
    // 0x8080006C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80800070:
    // 0x80800070: b           L_80800378
    // 0x80800074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800378;
    // 0x80800074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800078:
    // 0x80800078: b           L_80800378
    // 0x8080007C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_80800378;
    // 0x8080007C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_80800080:
    // 0x80800080: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800084: jal         0x8009E71C
    // 0x80800088: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8009E71C(rdram, ctx);
        goto after_3;
    // 0x80800088: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_3:
    // 0x8080008C: beq         $v0, $zero, L_8080009C
    if (ctx->r2 == 0) {
        // 0x80800090: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8080009C;
    }
    // 0x80800090: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800094: b           L_80800378
    // 0x80800098: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80800378;
    // 0x80800098: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8080009C:
    // 0x8080009C: jal         0x8009E71C
    // 0x808000A0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8009E71C(rdram, ctx);
        goto after_4;
    // 0x808000A0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_4:
    // 0x808000A4: beq         $v0, $zero, L_808000B4
    if (ctx->r2 == 0) {
        // 0x808000A8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808000B4;
    }
    // 0x808000A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000AC: b           L_80800378
    // 0x808000B0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_80800378;
    // 0x808000B0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_808000B4:
    // 0x808000B4: jal         0x8009E71C
    // 0x808000B8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_8009E71C(rdram, ctx);
        goto after_5;
    // 0x808000B8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_5:
    // 0x808000BC: beq         $v0, $zero, L_808000CC
    if (ctx->r2 == 0) {
        // 0x808000C0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808000CC;
    }
    // 0x808000C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000C4: b           L_80800378
    // 0x808000C8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_80800378;
    // 0x808000C8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_808000CC:
    // 0x808000CC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808000D0: jal         0x8009CA70
    // 0x808000D4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    func_8009CA70(rdram, ctx);
        goto after_6;
    // 0x808000D4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_6:
    // 0x808000D8: beq         $v0, $zero, L_808000E8
    if (ctx->r2 == 0) {
        // 0x808000DC: nop
    
            goto L_808000E8;
    }
    // 0x808000DC: nop

    // 0x808000E0: b           L_80800378
    // 0x808000E4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
        goto L_80800378;
    // 0x808000E4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
L_808000E8:
    // 0x808000E8: jal         0x8008E35C
    // 0x808000EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E35C(rdram, ctx);
        goto after_7;
    // 0x808000EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x808000F0: beq         $v0, $zero, L_80800140
    if (ctx->r2 == 0) {
        // 0x808000F4: nop
    
            goto L_80800140;
    }
    // 0x808000F4: nop

    // 0x808000F8: jal         0x800F8B88
    // 0x808000FC: nop

    func_800F8B88(rdram, ctx);
        goto after_8;
    // 0x808000FC: nop

    after_8:
    // 0x80800100: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800104: bne         $v0, $at, L_80800114
    if (ctx->r2 != ctx->r1) {
        // 0x80800108: nop
    
            goto L_80800114;
    }
    // 0x80800108: nop

    // 0x8080010C: b           L_80800378
    // 0x80800110: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
        goto L_80800378;
    // 0x80800110: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_80800114:
    // 0x80800114: jal         0x800F40EC
    // 0x80800118: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800F40EC(rdram, ctx);
        goto after_9;
    // 0x80800118: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x8080011C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800120: beq         $v0, $at, L_80800138
    if (ctx->r2 == ctx->r1) {
        // 0x80800124: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800138;
    }
    // 0x80800124: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800128: bne         $v0, $at, L_80800138
    if (ctx->r2 != ctx->r1) {
        // 0x8080012C: nop
    
            goto L_80800138;
    }
    // 0x8080012C: nop

    // 0x80800130: b           L_80800378
    // 0x80800134: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80800378;
    // 0x80800134: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80800138:
    // 0x80800138: b           L_80800378
    // 0x8080013C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80800378;
    // 0x8080013C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80800140:
    // 0x80800140: b           L_80800378
    // 0x80800144: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_80800378;
    // 0x80800144: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_80800148:
    // 0x80800148: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080014C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800150: jal         0x8009CA70
    // 0x80800154: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    func_8009CA70(rdram, ctx);
        goto after_10;
    // 0x80800154: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_10:
    // 0x80800158: beq         $v0, $zero, L_80800168
    if (ctx->r2 == 0) {
        // 0x8080015C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800168;
    }
    // 0x8080015C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800160: b           L_80800378
    // 0x80800164: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
        goto L_80800378;
    // 0x80800164: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
L_80800168:
    // 0x80800168: jal         0x8009CBDC
    // 0x8080016C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009CBDC(rdram, ctx);
        goto after_11;
    // 0x8080016C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_11:
    // 0x80800170: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80800174: bne         $v0, $at, L_80800184
    if (ctx->r2 != ctx->r1) {
        // 0x80800178: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800184;
    }
    // 0x80800178: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080017C: b           L_80800378
    // 0x80800180: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80800378;
    // 0x80800180: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80800184:
    // 0x80800184: jal         0x80091538
    // 0x80800188: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091538(rdram, ctx);
        goto after_12;
    // 0x80800188: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x8080018C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800190: nop

    // 0x80800194: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800198: nop

    // 0x8080019C: bc1t        L_808001AC
    if (c1cs) {
        // 0x808001A0: nop
    
            goto L_808001AC;
    }
    // 0x808001A0: nop

    // 0x808001A4: b           L_80800378
    // 0x808001A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800378;
    // 0x808001A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808001AC:
    // 0x808001AC: jal         0x800F8B88
    // 0x808001B0: nop

    func_800F8B88(rdram, ctx);
        goto after_13;
    // 0x808001B0: nop

    after_13:
    // 0x808001B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808001B8: bne         $v0, $at, L_808001C8
    if (ctx->r2 != ctx->r1) {
        // 0x808001BC: nop
    
            goto L_808001C8;
    }
    // 0x808001BC: nop

    // 0x808001C0: b           L_80800378
    // 0x808001C4: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
        goto L_80800378;
    // 0x808001C4: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
L_808001C8:
    // 0x808001C8: jal         0x8008E35C
    // 0x808001CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E35C(rdram, ctx);
        goto after_14;
    // 0x808001CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_14:
    // 0x808001D0: beq         $v0, $zero, L_808001E0
    if (ctx->r2 == 0) {
        // 0x808001D4: nop
    
            goto L_808001E0;
    }
    // 0x808001D4: nop

    // 0x808001D8: b           L_80800378
    // 0x808001DC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_80800378;
    // 0x808001DC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_808001E0:
    // 0x808001E0: b           L_80800378
    // 0x808001E4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_80800378;
    // 0x808001E4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_808001E8:
    // 0x808001E8: jal         0x8008E35C
    // 0x808001EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E35C(rdram, ctx);
        goto after_15;
    // 0x808001EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_15:
    // 0x808001F0: beq         $v0, $zero, L_80800200
    if (ctx->r2 == 0) {
        // 0x808001F4: nop
    
            goto L_80800200;
    }
    // 0x808001F4: nop

    // 0x808001F8: b           L_80800378
    // 0x808001FC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_80800378;
    // 0x808001FC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80800200:
    // 0x80800200: b           L_80800378
    // 0x80800204: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
        goto L_80800378;
    // 0x80800204: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_80800208:
    // 0x80800208: b           L_80800378
    // 0x8080020C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_80800378;
    // 0x8080020C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_80800210:
    // 0x80800210: b           L_80800378
    // 0x80800214: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_80800378;
    // 0x80800214: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_80800218:
    // 0x80800218: b           L_80800378
    // 0x8080021C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
        goto L_80800378;
    // 0x8080021C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_80800220:
    // 0x80800220: b           L_80800378
    // 0x80800224: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
        goto L_80800378;
    // 0x80800224: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
L_80800228:
    // 0x80800228: b           L_80800378
    // 0x8080022C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
        goto L_80800378;
    // 0x8080022C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_80800230:
    // 0x80800230: b           L_80800378
    // 0x80800234: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_80800378;
    // 0x80800234: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_80800238:
    // 0x80800238: b           L_80800378
    // 0x8080023C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
        goto L_80800378;
    // 0x8080023C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_80800240:
    // 0x80800240: b           L_80800378
    // 0x80800244: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
        goto L_80800378;
    // 0x80800244: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
L_80800248:
    // 0x80800248: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080024C: jal         0x8009CBDC
    // 0x80800250: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009CBDC(rdram, ctx);
        goto after_16;
    // 0x80800250: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_16:
    // 0x80800254: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800258: bne         $v0, $at, L_80800268
    if (ctx->r2 != ctx->r1) {
        // 0x8080025C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800268;
    }
    // 0x8080025C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800260: b           L_80800378
    // 0x80800264: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
        goto L_80800378;
    // 0x80800264: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
L_80800268:
    // 0x80800268: jal         0x8009CBDC
    // 0x8080026C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009CBDC(rdram, ctx);
        goto after_17;
    // 0x8080026C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_17:
    // 0x80800270: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80800274: bne         $v0, $at, L_80800284
    if (ctx->r2 != ctx->r1) {
        // 0x80800278: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800284;
    }
    // 0x80800278: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080027C: b           L_80800378
    // 0x80800280: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_80800378;
    // 0x80800280: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80800284:
    // 0x80800284: jal         0x8009CBDC
    // 0x80800288: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009CBDC(rdram, ctx);
        goto after_18;
    // 0x80800288: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_18:
    // 0x8080028C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80800290: bne         $v0, $at, L_808002A0
    if (ctx->r2 != ctx->r1) {
        // 0x80800294: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808002A0;
    }
    // 0x80800294: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800298: b           L_80800378
    // 0x8080029C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80800378;
    // 0x8080029C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_808002A0:
    // 0x808002A0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808002A4: jal         0x8009CA70
    // 0x808002A8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_19;
    // 0x808002A8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_19:
    // 0x808002AC: beq         $v0, $zero, L_808002BC
    if (ctx->r2 == 0) {
        // 0x808002B0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808002BC;
    }
    // 0x808002B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808002B4: b           L_80800378
    // 0x808002B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80800378;
    // 0x808002B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_808002BC:
    // 0x808002BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808002C0: jal         0x8009CA70
    // 0x808002C4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    func_8009CA70(rdram, ctx);
        goto after_20;
    // 0x808002C4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_20:
    // 0x808002C8: beq         $v0, $zero, L_808002D8
    if (ctx->r2 == 0) {
        // 0x808002CC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808002D8;
    }
    // 0x808002CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808002D0: b           L_80800378
    // 0x808002D4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
        goto L_80800378;
    // 0x808002D4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
L_808002D8:
    // 0x808002D8: jal         0x80091538
    // 0x808002DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091538(rdram, ctx);
        goto after_21;
    // 0x808002DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x808002E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808002E4: nop

    // 0x808002E8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x808002EC: nop

    // 0x808002F0: bc1t        L_80800300
    if (c1cs) {
        // 0x808002F4: nop
    
            goto L_80800300;
    }
    // 0x808002F4: nop

    // 0x808002F8: b           L_80800378
    // 0x808002FC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_80800378;
    // 0x808002FC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80800300:
    // 0x80800300: jal         0x8009EA4C
    // 0x80800304: nop

    func_8009EA4C(rdram, ctx);
        goto after_22;
    // 0x80800304: nop

    after_22:
    // 0x80800308: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8080030C: bne         $v0, $at, L_8080031C
    if (ctx->r2 != ctx->r1) {
        // 0x80800310: nop
    
            goto L_8080031C;
    }
    // 0x80800310: nop

    // 0x80800314: b           L_80800378
    // 0x80800318: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80800378;
    // 0x80800318: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8080031C:
    // 0x8080031C: jal         0x800F3ED0
    // 0x80800320: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800F3ED0(rdram, ctx);
        goto after_23;
    // 0x80800320: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_23:
    // 0x80800324: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800328: bne         $v0, $at, L_80800338
    if (ctx->r2 != ctx->r1) {
        // 0x8080032C: nop
    
            goto L_80800338;
    }
    // 0x8080032C: nop

    // 0x80800330: b           L_80800378
    // 0x80800334: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_80800378;
    // 0x80800334: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80800338:
    // 0x80800338: jal         0x8008E35C
    // 0x8080033C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E35C(rdram, ctx);
        goto after_24;
    // 0x8080033C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_24:
    // 0x80800340: beql        $v0, $zero, L_80800378
    if (ctx->r2 == 0) {
        // 0x80800344: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80800378;
    }
    goto skip_0;
    // 0x80800344: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    skip_0:
    // 0x80800348: jal         0x800F40EC
    // 0x8080034C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800F40EC(rdram, ctx);
        goto after_25;
    // 0x8080034C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_25:
    // 0x80800350: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800354: beq         $v0, $at, L_8080036C
    if (ctx->r2 == ctx->r1) {
        // 0x80800358: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080036C;
    }
    // 0x80800358: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080035C: bne         $v0, $at, L_8080036C
    if (ctx->r2 != ctx->r1) {
        // 0x80800360: nop
    
            goto L_8080036C;
    }
    // 0x80800360: nop

    // 0x80800364: b           L_80800378
    // 0x80800368: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80800378;
    // 0x80800368: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8080036C:
    // 0x8080036C: b           L_80800378
    // 0x80800370: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80800378;
    // 0x80800370: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80800374: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80800378:
    // 0x80800378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080037C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800380: jr          $ra
    // 0x80800384: nop

    return;
    // 0x80800384: nop

;}
RECOMP_FUNC void func_80800388_badata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800388: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080038C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800390: jal         0x8009EA4C
    // 0x80800394: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EA4C(rdram, ctx);
        goto after_0;
    // 0x80800394: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800398: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080039C: jal         0x800A3274
    // 0x808003A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x808003A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x808003A4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x808003A8: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x808003AC: beq         $at, $zero, L_808005B8
    if (ctx->r1 == 0) {
        // 0x808003B0: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808005B8;
    }
    // 0x808003B0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808003B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808003B8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(15, 0X100C) << 16);
    // 0x808003BC: addu        $at, $at, $t6
    gpr jr_addend_808003C4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808003C0: lw          $t6, 0x100C($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(15, 0X100C));
    // 0x808003C4: jr          $t6
    // 0x808003C8: nop

    switch (jr_addend_808003C4 >> 2) {
        case 0: goto L_808005B8; break;
        case 1: goto L_808003CC; break;
        case 2: goto L_808005B8; break;
        case 3: goto L_808005B8; break;
        case 4: goto L_808005B8; break;
        case 5: goto L_808003D4; break;
        case 6: goto L_808003F0; break;
        case 7: goto L_808003F8; break;
        case 8: goto L_808005B0; break;
        case 9: goto L_80800400; break;
        case 10: goto L_808004B8; break;
        case 11: goto L_80800590; break;
        case 12: goto L_80800558; break;
        case 13: goto L_80800578; break;
        case 14: goto L_80800580; break;
        case 15: goto L_80800588; break;
        case 16: goto L_80800598; break;
        case 17: goto L_808005A0; break;
        case 18: goto L_808005A8; break;
        default: switch_error(__func__, 0x808003C4, 0x8080100C);
    }
    // 0x808003C8: nop

L_808003CC:
    // 0x808003CC: b           L_8080069C
    // 0x808003D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8080069C;
    // 0x808003D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_808003D4:
    // 0x808003D4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808003D8: bne         $v1, $at, L_808003E8
    if (ctx->r3 != ctx->r1) {
        // 0x808003DC: nop
    
            goto L_808003E8;
    }
    // 0x808003DC: nop

    // 0x808003E0: b           L_8080069C
    // 0x808003E4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
        goto L_8080069C;
    // 0x808003E4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_808003E8:
    // 0x808003E8: b           L_8080069C
    // 0x808003EC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8080069C;
    // 0x808003EC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_808003F0:
    // 0x808003F0: b           L_8080069C
    // 0x808003F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080069C;
    // 0x808003F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808003F8:
    // 0x808003F8: b           L_8080069C
    // 0x808003FC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_8080069C;
    // 0x808003FC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_80800400:
    // 0x80800400: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800404: jal         0x8008E35C
    // 0x80800408: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8008E35C(rdram, ctx);
        goto after_2;
    // 0x80800408: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8080040C: beq         $v0, $zero, L_80800474
    if (ctx->r2 == 0) {
        // 0x80800410: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800474;
    }
    // 0x80800410: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800414: jal         0x800F8B88
    // 0x80800418: nop

    func_800F8B88(rdram, ctx);
        goto after_3;
    // 0x80800418: nop

    after_3:
    // 0x8080041C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800420: bne         $v0, $at, L_80800430
    if (ctx->r2 != ctx->r1) {
        // 0x80800424: nop
    
            goto L_80800430;
    }
    // 0x80800424: nop

    // 0x80800428: b           L_8080069C
    // 0x8080042C: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
        goto L_8080069C;
    // 0x8080042C: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_80800430:
    // 0x80800430: jal         0x8009C150
    // 0x80800434: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009C150(rdram, ctx);
        goto after_4;
    // 0x80800434: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800438: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8080043C: jal         0x800964DC
    // 0x80800440: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800964DC(rdram, ctx);
        goto after_5;
    // 0x80800440: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x80800444: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800448: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080044C: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80800450: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80800454: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80800458: nop

    // 0x8080045C: bc1f        L_8080046C
    if (!c1cs) {
        // 0x80800460: nop
    
            goto L_8080046C;
    }
    // 0x80800460: nop

    // 0x80800464: b           L_8080069C
    // 0x80800468: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8080069C;
    // 0x80800468: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8080046C:
    // 0x8080046C: b           L_8080069C
    // 0x80800470: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8080069C;
    // 0x80800470: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80800474:
    // 0x80800474: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800478: beq         $v1, $at, L_80800498
    if (ctx->r3 == ctx->r1) {
        // 0x8080047C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80800498;
    }
    // 0x8080047C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80800480: beq         $v1, $at, L_808004A0
    if (ctx->r3 == ctx->r1) {
        // 0x80800484: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_808004A0;
    }
    // 0x80800484: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80800488: beq         $v1, $at, L_808004A8
    if (ctx->r3 == ctx->r1) {
        // 0x8080048C: nop
    
            goto L_808004A8;
    }
    // 0x8080048C: nop

    // 0x80800490: b           L_8080069C
    // 0x80800494: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_8080069C;
    // 0x80800494: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_80800498:
    // 0x80800498: b           L_8080069C
    // 0x8080049C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8080069C;
    // 0x8080049C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_808004A0:
    // 0x808004A0: b           L_8080069C
    // 0x808004A4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_8080069C;
    // 0x808004A4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_808004A8:
    // 0x808004A8: b           L_8080069C
    // 0x808004AC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_8080069C;
    // 0x808004AC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x808004B0: b           L_8080069C
    // 0x808004B4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_8080069C;
    // 0x808004B4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_808004B8:
    // 0x808004B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808004BC: bne         $v1, $at, L_808004CC
    if (ctx->r3 != ctx->r1) {
        // 0x808004C0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808004CC;
    }
    // 0x808004C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004C4: b           L_8080069C
    // 0x808004C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8080069C;
    // 0x808004C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_808004CC:
    // 0x808004CC: jal         0x80091538
    // 0x808004D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091538(rdram, ctx);
        goto after_6;
    // 0x808004D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x808004D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x808004D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004DC: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x808004E0: nop

    // 0x808004E4: bc1t        L_808004F4
    if (c1cs) {
        // 0x808004E8: nop
    
            goto L_808004F4;
    }
    // 0x808004E8: nop

    // 0x808004EC: b           L_8080069C
    // 0x808004F0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_8080069C;
    // 0x808004F0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_808004F4:
    // 0x808004F4: jal         0x80091538
    // 0x808004F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091538(rdram, ctx);
        goto after_7;
    // 0x808004F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x808004FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80800500: nop

    // 0x80800504: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x80800508: nop

    // 0x8080050C: bc1t        L_8080051C
    if (c1cs) {
        // 0x80800510: nop
    
            goto L_8080051C;
    }
    // 0x80800510: nop

    // 0x80800514: b           L_8080069C
    // 0x80800518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8080069C;
    // 0x80800518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080051C:
    // 0x8080051C: jal         0x800F8B88
    // 0x80800520: nop

    func_800F8B88(rdram, ctx);
        goto after_8;
    // 0x80800520: nop

    after_8:
    // 0x80800524: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800528: bne         $v0, $at, L_80800538
    if (ctx->r2 != ctx->r1) {
        // 0x8080052C: nop
    
            goto L_80800538;
    }
    // 0x8080052C: nop

    // 0x80800530: b           L_8080069C
    // 0x80800534: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
        goto L_8080069C;
    // 0x80800534: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
L_80800538:
    // 0x80800538: jal         0x8008E35C
    // 0x8080053C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E35C(rdram, ctx);
        goto after_9;
    // 0x8080053C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x80800540: beq         $v0, $zero, L_80800550
    if (ctx->r2 == 0) {
        // 0x80800544: nop
    
            goto L_80800550;
    }
    // 0x80800544: nop

    // 0x80800548: b           L_8080069C
    // 0x8080054C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_8080069C;
    // 0x8080054C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_80800550:
    // 0x80800550: b           L_8080069C
    // 0x80800554: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_8080069C;
    // 0x80800554: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80800558:
    // 0x80800558: jal         0x8008E35C
    // 0x8080055C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E35C(rdram, ctx);
        goto after_10;
    // 0x8080055C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_10:
    // 0x80800560: beq         $v0, $zero, L_80800570
    if (ctx->r2 == 0) {
        // 0x80800564: nop
    
            goto L_80800570;
    }
    // 0x80800564: nop

    // 0x80800568: b           L_8080069C
    // 0x8080056C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_8080069C;
    // 0x8080056C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80800570:
    // 0x80800570: b           L_8080069C
    // 0x80800574: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
        goto L_8080069C;
    // 0x80800574: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_80800578:
    // 0x80800578: b           L_8080069C
    // 0x8080057C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_8080069C;
    // 0x8080057C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_80800580:
    // 0x80800580: b           L_8080069C
    // 0x80800584: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_8080069C;
    // 0x80800584: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_80800588:
    // 0x80800588: b           L_8080069C
    // 0x8080058C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
        goto L_8080069C;
    // 0x8080058C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_80800590:
    // 0x80800590: b           L_8080069C
    // 0x80800594: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
        goto L_8080069C;
    // 0x80800594: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
L_80800598:
    // 0x80800598: b           L_8080069C
    // 0x8080059C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
        goto L_8080069C;
    // 0x8080059C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_808005A0:
    // 0x808005A0: b           L_8080069C
    // 0x808005A4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_8080069C;
    // 0x808005A4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_808005A8:
    // 0x808005A8: b           L_8080069C
    // 0x808005AC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
        goto L_8080069C;
    // 0x808005AC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_808005B0:
    // 0x808005B0: b           L_8080069C
    // 0x808005B4: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
        goto L_8080069C;
    // 0x808005B4: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
L_808005B8:
    // 0x808005B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808005BC: jal         0x8008E35C
    // 0x808005C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8008E35C(rdram, ctx);
        goto after_11;
    // 0x808005C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_11:
    // 0x808005C4: beq         $v0, $zero, L_80800610
    if (ctx->r2 == 0) {
        // 0x808005C8: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800610;
    }
    // 0x808005C8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808005CC: jal         0x8009C150
    // 0x808005D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009C150(rdram, ctx);
        goto after_12;
    // 0x808005D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_12:
    // 0x808005D4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x808005D8: jal         0x800964DC
    // 0x808005DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800964DC(rdram, ctx);
        goto after_13;
    // 0x808005DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_13:
    // 0x808005E0: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x808005E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808005E8: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x808005EC: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x808005F0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x808005F4: nop

    // 0x808005F8: bc1f        L_80800608
    if (!c1cs) {
        // 0x808005FC: nop
    
            goto L_80800608;
    }
    // 0x808005FC: nop

    // 0x80800600: b           L_8080069C
    // 0x80800604: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8080069C;
    // 0x80800604: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80800608:
    // 0x80800608: b           L_8080069C
    // 0x8080060C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8080069C;
    // 0x8080060C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80800610:
    // 0x80800610: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800614: bnel        $v1, $at, L_80800628
    if (ctx->r3 != ctx->r1) {
        // 0x80800618: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80800628;
    }
    goto skip_0;
    // 0x80800618: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_0:
    // 0x8080061C: b           L_8080069C
    // 0x80800620: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8080069C;
    // 0x80800620: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80800624: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_80800628:
    // 0x80800628: bnel        $v1, $at, L_8080063C
    if (ctx->r3 != ctx->r1) {
        // 0x8080062C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080063C;
    }
    goto skip_1;
    // 0x8080062C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x80800630: b           L_8080069C
    // 0x80800634: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8080069C;
    // 0x80800634: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80800638: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8080063C:
    // 0x8080063C: bne         $v1, $at, L_8080064C
    if (ctx->r3 != ctx->r1) {
        // 0x80800640: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8080064C;
    }
    // 0x80800640: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800644: b           L_8080069C
    // 0x80800648: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8080069C;
    // 0x80800648: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8080064C:
    // 0x8080064C: jal         0x80091538
    // 0x80800650: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091538(rdram, ctx);
        goto after_14;
    // 0x80800650: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_14:
    // 0x80800654: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800658: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080065C: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80800660: nop

    // 0x80800664: bc1t        L_80800674
    if (c1cs) {
        // 0x80800668: nop
    
            goto L_80800674;
    }
    // 0x80800668: nop

    // 0x8080066C: b           L_8080069C
    // 0x80800670: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8080069C;
    // 0x80800670: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80800674:
    // 0x80800674: jal         0x80091538
    // 0x80800678: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091538(rdram, ctx);
        goto after_15;
    // 0x80800678: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
    // 0x8080067C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800680: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80800684: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80800688: nop

    // 0x8080068C: bc1t        L_8080069C
    if (c1cs) {
        // 0x80800690: nop
    
            goto L_8080069C;
    }
    // 0x80800690: nop

    // 0x80800694: b           L_8080069C
    // 0x80800698: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8080069C;
    // 0x80800698: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8080069C:
    // 0x8080069C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808006A4: jr          $ra
    // 0x808006A8: nop

    return;
    // 0x808006A8: nop

;}
RECOMP_FUNC void func_808006AC_badata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808006B8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808006BC: jal         0x80000000
    // 0x808006C0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x808006C0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x808006C4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x808006C8: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x808006CC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x808006D0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x808006D4: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x808006D8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x808006DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x808006E0: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x808006E4: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x808006E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006F0: jr          $ra
    // 0x808006F4: nop

    return;
    // 0x808006F4: nop

;}
RECOMP_FUNC void badata_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006FC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80800700: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800704: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080070C: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X1EF8) << 16);
    // 0x80800710: jal         0x800006AC
    // 0x80800714: addiu       $a1, $a1, 0x1EF8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1EF8));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x80800714: addiu       $a1, $a1, 0x1EF8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1EF8));
    after_0:
    // 0x80800718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080071C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800720: jr          $ra
    // 0x80800724: nop

    return;
    // 0x80800724: nop

;}
RECOMP_FUNC void badata_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080072C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80800730: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800734: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080073C: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X1A78) << 16);
    // 0x80800740: jal         0x800006AC
    // 0x80800744: addiu       $a1, $a1, 0x1A78
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1A78));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x80800744: addiu       $a1, $a1, 0x1A78
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1A78));
    after_0:
    // 0x80800748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080074C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800750: jr          $ra
    // 0x80800754: nop

    return;
    // 0x80800754: nop

;}
RECOMP_FUNC void badata_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080075C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80800760: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800764: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080076C: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X1B98) << 16);
    // 0x80800770: jal         0x800006AC
    // 0x80800774: addiu       $a1, $a1, 0x1B98
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1B98));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x80800774: addiu       $a1, $a1, 0x1B98
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1B98));
    after_0:
    // 0x80800778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080077C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800780: jr          $ra
    // 0x80800784: nop

    return;
    // 0x80800784: nop

;}
RECOMP_FUNC void badata_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080078C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80800790: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800794: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080079C: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X1DD8) << 16);
    // 0x808007A0: jal         0x800006AC
    // 0x808007A4: addiu       $a1, $a1, 0x1DD8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1DD8));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x808007A4: addiu       $a1, $a1, 0x1DD8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1DD8));
    after_0:
    // 0x808007A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007B0: jr          $ra
    // 0x808007B4: nop

    return;
    // 0x808007B4: nop

;}
RECOMP_FUNC void badata_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007BC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x808007C0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808007C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808007C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007CC: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X2018) << 16);
    // 0x808007D0: jal         0x800006AC
    // 0x808007D4: addiu       $a1, $a1, 0x2018
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X2018));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x808007D4: addiu       $a1, $a1, 0x2018
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X2018));
    after_0:
    // 0x808007D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007E0: jr          $ra
    // 0x808007E4: nop

    return;
    // 0x808007E4: nop

;}
RECOMP_FUNC void badata_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007EC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x808007F0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808007F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808007F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007FC: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X1CB8) << 16);
    // 0x80800800: jal         0x800006AC
    // 0x80800804: addiu       $a1, $a1, 0x1CB8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1CB8));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x80800804: addiu       $a1, $a1, 0x1CB8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1CB8));
    after_0:
    // 0x80800808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080080C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800810: jr          $ra
    // 0x80800814: nop

    return;
    // 0x80800814: nop

;}
RECOMP_FUNC void badata_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080081C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800824: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800828: jal         0x80000000
    // 0x8080082C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x8080082C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800830: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(15, 0X1718) << 16);
    // 0x80800834: addiu       $t7, $t7, 0x1718
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(15, 0X1718));
    // 0x80800838: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x8080083C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80800840: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x80800844: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80800848: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8080084C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80800850: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80800854: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x80800858: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8080085C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80800860: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x80800864: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80800868: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8080086C: swc1        $f8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f8.u32l;
    // 0x80800870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800878: jr          $ra
    // 0x8080087C: nop

    return;
    // 0x8080087C: nop

;}
RECOMP_FUNC void badata_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800884: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80800888: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8080088C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800894: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X1958) << 16);
    // 0x80800898: jal         0x800006AC
    // 0x8080089C: addiu       $a1, $a1, 0x1958
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1958));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x8080089C: addiu       $a1, $a1, 0x1958
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1958));
    after_0:
    // 0x808008A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008A8: jr          $ra
    // 0x808008AC: nop

    return;
    // 0x808008AC: nop

;}
RECOMP_FUNC void badata_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808008BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808008C0: jal         0x80000000
    // 0x808008C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x808008C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x808008C8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x808008CC: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x808008D0: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(15, 0X2648) << 16);
    // 0x808008D4: addiu       $t7, $t7, 0x2648
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(15, 0X2648));
    // 0x808008D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808008DC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x808008E0: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x808008E4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x808008E8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x808008EC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x808008F0: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x808008F4: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x808008F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x808008FC: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80800900: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x80800904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080090C: jr          $ra
    // 0x80800910: nop

    return;
    // 0x80800910: nop

;}
RECOMP_FUNC void badata_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800918: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8080091C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800920: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800928: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X2138) << 16);
    // 0x8080092C: jal         0x800006AC
    // 0x80800930: addiu       $a1, $a1, 0x2138
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X2138));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x80800930: addiu       $a1, $a1, 0x2138
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X2138));
    after_0:
    // 0x80800934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080093C: jr          $ra
    // 0x80800940: nop

    return;
    // 0x80800940: nop

;}
RECOMP_FUNC void badata_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800948: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8080094C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800950: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800958: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X2378) << 16);
    // 0x8080095C: jal         0x800006AC
    // 0x80800960: addiu       $a1, $a1, 0x2378
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X2378));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x80800960: addiu       $a1, $a1, 0x2378
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X2378));
    after_0:
    // 0x80800964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080096C: jr          $ra
    // 0x80800970: nop

    return;
    // 0x80800970: nop

;}
RECOMP_FUNC void badata_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800978: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8080097C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800980: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800988: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X2258) << 16);
    // 0x8080098C: jal         0x800006AC
    // 0x80800990: addiu       $a1, $a1, 0x2258
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X2258));
    func_808006AC_badata(rdram, ctx);
        goto after_0;
    // 0x80800990: addiu       $a1, $a1, 0x2258
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X2258));
    after_0:
    // 0x80800994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080099C: jr          $ra
    // 0x808009A0: nop

    return;
    // 0x808009A0: nop

;}
RECOMP_FUNC void badata_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808009B0: jal         0x80000000
    // 0x808009B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x808009B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x808009B8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x808009BC: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x808009C0: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(15, 0X2498) << 16);
    // 0x808009C4: addiu       $t7, $t7, 0x2498
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(15, 0X2498));
    // 0x808009C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808009CC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x808009D0: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x808009D4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x808009D8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x808009DC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x808009E0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x808009E4: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x808009E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009F0: jr          $ra
    // 0x808009F4: nop

    return;
    // 0x808009F4: nop

;}
RECOMP_FUNC void badata_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800A04: jal         0x80000000
    // 0x80800A08: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800A08: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800A0C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80800A10: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80800A14: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(15, 0X2498) << 16);
    // 0x80800A18: addiu       $t7, $t7, 0x2498
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(15, 0X2498));
    // 0x80800A1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800A20: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80800A24: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80800A28: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A2C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80800A30: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80800A34: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80800A38: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x80800A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A44: jr          $ra
    // 0x80800A48: nop

    return;
    // 0x80800A48: nop

;}
RECOMP_FUNC void badata_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A54: jal         0x80000000
    // 0x80800A58: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800A58: nop

    after_0:
    // 0x80800A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A60: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(15, 0X1640) << 16);
    // 0x80800A64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80800A68: lbu         $v0, 0x1640($at)
    ctx->r2 = MEM_BU(ctx->r1, (int16_t)RELOC_LO16(15, 0X1640));
    // 0x80800A6C: jr          $ra
    // 0x80800A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A7C: jal         0x80000000
    // 0x80800A80: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800A80: nop

    after_0:
    // 0x80800A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A88: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(15, 0X1664) << 16);
    // 0x80800A8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80800A90: lbu         $v0, 0x1664($at)
    ctx->r2 = MEM_BU(ctx->r1, (int16_t)RELOC_LO16(15, 0X1664));
    // 0x80800A94: jr          $ra
    // 0x80800A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A9C: jr          $ra
    // 0x80800AA0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x80800AA0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
;}
RECOMP_FUNC void func_80800AA4_badata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AAC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80800AB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800AB4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80800AB8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80800ABC: jal         0x80000000
    // 0x80800AC0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800AC0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800AC4: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80800AC8: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800ACC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80800AD0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80800AD4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80800AD8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800ADC: mflo        $t6
    ctx->r14 = lo;
    // 0x80800AE0: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x80800AE4: lw          $v1, 0x4($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X4);
    // 0x80800AE8: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80800AEC: bne         $at, $zero, L_80800AFC
    if (ctx->r1 != 0) {
        // 0x80800AF0: nop
    
            goto L_80800AFC;
    }
    // 0x80800AF0: nop

    // 0x80800AF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800AF8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80800AFC:
    // 0x80800AFC: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800B00: sll         $a0, $a2, 3
    ctx->r4 = S32(ctx->r6 << 3);
    // 0x80800B04: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80800B08: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80800B0C: mflo        $t8
    ctx->r24 = lo;
    // 0x80800B10: addu        $v1, $t1, $t8
    ctx->r3 = ADD32(ctx->r9, ctx->r24);
    // 0x80800B14: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80800B18: addu        $t2, $t9, $a0
    ctx->r10 = ADD32(ctx->r25, ctx->r4);
    // 0x80800B1C: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80800B20: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80800B24: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80800B28: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80800B2C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80800B30: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x80800B34: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80800B38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800B3C: swc1        $f8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f8.u32l;
    // 0x80800B40: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80800B44: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80800B48: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x80800B4C: lh          $t2, 0x2($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X2);
    // 0x80800B50: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80800B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800B5C: jr          $ra
    // 0x80800B60: nop

    return;
    // 0x80800B60: nop

;}
RECOMP_FUNC void badata_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800B68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800B6C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80800B70: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80800B74: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80800B78: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800B7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800B80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B84: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X10C8) << 16);
    // 0x80800B88: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80800B8C: addiu       $a1, $a1, 0x10C8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X10C8));
    // 0x80800B90: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800B94: jal         0x80000AA4
    // 0x80800B98: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_80800AA4_badata(rdram, ctx);
        goto after_0;
    // 0x80800B98: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x80800B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800BA4: jr          $ra
    // 0x80800BA8: nop

    return;
    // 0x80800BA8: nop

;}
RECOMP_FUNC void badata_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BB4: jal         0x80000000
    // 0x80800BB8: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800BB8: nop

    after_0:
    // 0x80800BBC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80800BC0: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80800BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800BCC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(15, 0X10D0) << 16);
    // 0x80800BD0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800BD4: lwc1        $f0, 0x10D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(15, 0X10D0));
    // 0x80800BD8: jr          $ra
    // 0x80800BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BE4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800BE8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80800BEC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80800BF0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80800BF4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800BF8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800C00: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(15, 0X1298) << 16);
    // 0x80800C04: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80800C08: addiu       $a1, $a1, 0x1298
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(15, 0X1298));
    // 0x80800C0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800C10: jal         0x80000AA4
    // 0x80800C14: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_80800AA4_badata(rdram, ctx);
        goto after_0;
    // 0x80800C14: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x80800C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800C20: jr          $ra
    // 0x80800C24: nop

    return;
    // 0x80800C24: nop

;}
RECOMP_FUNC void badata_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C30: jal         0x800DC0C0
    // 0x80800C34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800DC0C0(rdram, ctx);
        goto after_0;
    // 0x80800C34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C38: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800C3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800C40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800C44: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800C48: nop

    // 0x80800C4C: bc1f        L_80800C78
    if (!c1cs) {
        // 0x80800C50: nop
    
            goto L_80800C78;
    }
    // 0x80800C50: nop

    // 0x80800C54: jal         0x80000000
    // 0x80800C58: nop

    func_80800000_badata(rdram, ctx);
        goto after_1;
    // 0x80800C58: nop

    after_1:
    // 0x80800C5C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80800C60: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80800C64: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80800C68: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X156A) << 16);
    // 0x80800C6C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800C70: b           L_80800C98
    // 0x80800C74: lh          $v0, 0x156A($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X156A));
        goto L_80800C98;
    // 0x80800C74: lh          $v0, 0x156A($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X156A));
L_80800C78:
    // 0x80800C78: jal         0x80000000
    // 0x80800C7C: nop

    func_80800000_badata(rdram, ctx);
        goto after_2;
    // 0x80800C7C: nop

    after_2:
    // 0x80800C80: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80800C84: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x80800C88: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80800C8C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X156C) << 16);
    // 0x80800C90: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80800C94: lh          $v0, 0x156C($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X156C));
L_80800C98:
    // 0x80800C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800CA0: jr          $ra
    // 0x80800CA4: nop

    return;
    // 0x80800CA4: nop

;}
RECOMP_FUNC void badata_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CB0: jal         0x80000000
    // 0x80800CB4: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800CB4: nop

    after_0:
    // 0x80800CB8: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x80800CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CC0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X1A78) << 16);
    // 0x80800CC4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800CC8: lh          $v0, 0x1A78($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X1A78));
    // 0x80800CCC: jr          $ra
    // 0x80800CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CDC: jal         0x80000000
    // 0x80800CE0: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800CE0: nop

    after_0:
    // 0x80800CE4: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x80800CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CEC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X1718) << 16);
    // 0x80800CF0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800CF4: lh          $v0, 0x1718($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X1718));
    // 0x80800CF8: jr          $ra
    // 0x80800CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D08: jal         0x80000000
    // 0x80800D0C: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800D0C: nop

    after_0:
    // 0x80800D10: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x80800D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D18: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X2018) << 16);
    // 0x80800D1C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D20: lh          $v0, 0x2018($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X2018));
    // 0x80800D24: jr          $ra
    // 0x80800D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D34: jal         0x80000000
    // 0x80800D38: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800D38: nop

    after_0:
    // 0x80800D3C: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80800D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D44: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X14D8) << 16);
    // 0x80800D48: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D4C: lh          $v0, 0x14D8($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X14D8));
    // 0x80800D50: jr          $ra
    // 0x80800D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D60: jal         0x80000000
    // 0x80800D64: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800D64: nop

    after_0:
    // 0x80800D68: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80800D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D70: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X1520) << 16);
    // 0x80800D74: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D78: lh          $v0, 0x1520($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X1520));
    // 0x80800D7C: jr          $ra
    // 0x80800D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D8C: jal         0x80000000
    // 0x80800D90: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800D90: nop

    after_0:
    // 0x80800D94: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80800D98: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80800D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DA0: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80800DA4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X1568) << 16);
    // 0x80800DA8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DAC: lh          $v0, 0x1568($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X1568));
    // 0x80800DB0: jr          $ra
    // 0x80800DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DC0: jal         0x80000000
    // 0x80800DC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800DC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800DC8: jal         0x80000000
    // 0x80800DCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_badata(rdram, ctx);
        goto after_1;
    // 0x80800DCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800DD0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80800DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DD8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X1448) << 16);
    // 0x80800DDC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DE0: lh          $v0, 0x1448($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X1448));
    // 0x80800DE4: jr          $ra
    // 0x80800DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DF4: jal         0x80000000
    // 0x80800DF8: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800DF8: nop

    after_0:
    // 0x80800DFC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80800E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E04: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X1688) << 16);
    // 0x80800E08: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800E0C: lw          $v0, 0x1688($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(15, 0X1688));
    // 0x80800E10: jr          $ra
    // 0x80800E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E20: jal         0x80000000
    // 0x80800E24: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800E24: nop

    after_0:
    // 0x80800E28: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x80800E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E30: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X2138) << 16);
    // 0x80800E34: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800E38: lh          $v0, 0x2138($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X2138));
    // 0x80800E3C: jr          $ra
    // 0x80800E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800E48: beq         $a1, $at, L_80800E74
    if (ctx->r5 == ctx->r1) {
        // 0x80800E4C: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80800E74;
    }
    // 0x80800E4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80800E50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800E54: beq         $a1, $at, L_80800E7C
    if (ctx->r5 == ctx->r1) {
        // 0x80800E58: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800E7C;
    }
    // 0x80800E58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800E5C: beq         $a1, $at, L_80800E84
    if (ctx->r5 == ctx->r1) {
        // 0x80800E60: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800E84;
    }
    // 0x80800E60: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800E64: beq         $a1, $at, L_80800E8C
    if (ctx->r5 == ctx->r1) {
        // 0x80800E68: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800E8C;
    }
    // 0x80800E68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800E6C: b           L_80800E94
    // 0x80800E70: nop

        goto L_80800E94;
    // 0x80800E70: nop

L_80800E74:
    // 0x80800E74: jr          $ra
    // 0x80800E78: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    return;
    // 0x80800E78: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
L_80800E7C:
    // 0x80800E7C: jr          $ra
    // 0x80800E80: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    return;
    // 0x80800E80: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
L_80800E84:
    // 0x80800E84: jr          $ra
    // 0x80800E88: addiu       $v0, $zero, 0x75
    ctx->r2 = ADD32(0, 0X75);
    return;
    // 0x80800E88: addiu       $v0, $zero, 0x75
    ctx->r2 = ADD32(0, 0X75);
L_80800E8C:
    // 0x80800E8C: jr          $ra
    // 0x80800E90: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    return;
    // 0x80800E90: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
L_80800E94:
    // 0x80800E94: jr          $ra
    // 0x80800E98: nop

    return;
    // 0x80800E98: nop

;}
RECOMP_FUNC void badata_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EA4: jal         0x80000000
    // 0x80800EA8: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800EA8: nop

    after_0:
    // 0x80800EAC: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x80800EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EB4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X2378) << 16);
    // 0x80800EB8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800EBC: lh          $v0, 0x2378($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X2378));
    // 0x80800EC0: jr          $ra
    // 0x80800EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800ED0: jal         0x80000000
    // 0x80800ED4: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800ED4: nop

    after_0:
    // 0x80800ED8: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x80800EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EE0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X2258) << 16);
    // 0x80800EE4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800EE8: lh          $v0, 0x2258($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X2258));
    // 0x80800EEC: jr          $ra
    // 0x80800EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EFC: jal         0x8009EA64
    // 0x80800F00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009EA64(rdram, ctx);
        goto after_0;
    // 0x80800F00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800F04: addiu       $at, $zero, 0x171
    ctx->r1 = ADD32(0, 0X171);
    // 0x80800F08: beq         $v0, $at, L_80800F3C
    if (ctx->r2 == ctx->r1) {
        // 0x80800F0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800F3C;
    }
    // 0x80800F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F10: addiu       $at, $zero, 0x2A2
    ctx->r1 = ADD32(0, 0X2A2);
    // 0x80800F14: beq         $v0, $at, L_80800F44
    if (ctx->r2 == ctx->r1) {
        // 0x80800F18: addiu       $at, $zero, 0x305
        ctx->r1 = ADD32(0, 0X305);
            goto L_80800F44;
    }
    // 0x80800F18: addiu       $at, $zero, 0x305
    ctx->r1 = ADD32(0, 0X305);
    // 0x80800F1C: beq         $v0, $at, L_80800F34
    if (ctx->r2 == ctx->r1) {
        // 0x80800F20: addiu       $at, $zero, 0x38A
        ctx->r1 = ADD32(0, 0X38A);
            goto L_80800F34;
    }
    // 0x80800F20: addiu       $at, $zero, 0x38A
    ctx->r1 = ADD32(0, 0X38A);
    // 0x80800F24: beq         $v0, $at, L_80800F4C
    if (ctx->r2 == ctx->r1) {
        // 0x80800F28: nop
    
            goto L_80800F4C;
    }
    // 0x80800F28: nop

    // 0x80800F2C: b           L_80800F54
    // 0x80800F30: addiu       $v0, $zero, 0xB7
    ctx->r2 = ADD32(0, 0XB7);
        goto L_80800F54;
    // 0x80800F30: addiu       $v0, $zero, 0xB7
    ctx->r2 = ADD32(0, 0XB7);
L_80800F34:
    // 0x80800F34: b           L_80800F54
    // 0x80800F38: addiu       $v0, $zero, 0x12A
    ctx->r2 = ADD32(0, 0X12A);
        goto L_80800F54;
    // 0x80800F38: addiu       $v0, $zero, 0x12A
    ctx->r2 = ADD32(0, 0X12A);
L_80800F3C:
    // 0x80800F3C: b           L_80800F54
    // 0x80800F40: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
        goto L_80800F54;
    // 0x80800F40: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
L_80800F44:
    // 0x80800F44: b           L_80800F54
    // 0x80800F48: addiu       $v0, $zero, 0x12B
    ctx->r2 = ADD32(0, 0X12B);
        goto L_80800F54;
    // 0x80800F48: addiu       $v0, $zero, 0x12B
    ctx->r2 = ADD32(0, 0X12B);
L_80800F4C:
    // 0x80800F4C: b           L_80800F54
    // 0x80800F50: addiu       $v0, $zero, 0xB7
    ctx->r2 = ADD32(0, 0XB7);
        goto L_80800F54;
    // 0x80800F50: addiu       $v0, $zero, 0xB7
    ctx->r2 = ADD32(0, 0XB7);
L_80800F54:
    // 0x80800F54: jr          $ra
    // 0x80800F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F64: jal         0x80000000
    // 0x80800F68: nop

    func_80800000_badata(rdram, ctx);
        goto after_0;
    // 0x80800F68: nop

    after_0:
    // 0x80800F6C: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80800F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F74: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X1490) << 16);
    // 0x80800F78: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800F7C: lh          $v0, 0x1490($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X1490));
    // 0x80800F80: jr          $ra
    // 0x80800F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void badata_entrypoint_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F90: jal         0x80000388
    // 0x80800F94: nop

    func_80800388_badata(rdram, ctx);
        goto after_0;
    // 0x80800F94: nop

    after_0:
    // 0x80800F98: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80800F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FA0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(15, 0X1490) << 16);
    // 0x80800FA4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800FA8: lh          $v0, 0x1490($v0)
    ctx->r2 = MEM_H(ctx->r2, (int16_t)RELOC_LO16(15, 0X1490));
    // 0x80800FAC: jr          $ra
    // 0x80800FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FB4: nop

    // 0x80800FB8: nop

    // 0x80800FBC: nop

;}
RECOMP_FUNC void func_80800000_badeathmatch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lw          $t7, 0x158($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X158);
    // 0x80800004: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800008: sb          $t6, 0x20($t7)
    MEM_B(0X20, ctx->r15) = ctx->r14;
    // 0x8080000C: lw          $t8, 0x158($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X158);
    // 0x80800010: sb          $zero, 0x21($t8)
    MEM_B(0X21, ctx->r24) = 0;
    // 0x80800014: lw          $t9, 0x158($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X158);
    // 0x80800018: sb          $zero, 0x22($t9)
    MEM_B(0X22, ctx->r25) = 0;
    // 0x8080001C: lw          $t0, 0x158($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X158);
    // 0x80800020: jr          $ra
    // 0x80800024: sb          $zero, 0x23($t0)
    MEM_B(0X23, ctx->r8) = 0;
    return;
    // 0x80800024: sb          $zero, 0x23($t0)
    MEM_B(0X23, ctx->r8) = 0;
;}
RECOMP_FUNC void func_80800028_badeathmatch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800028: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(16, 0X54F) << 16);
    // 0x8080002C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80800030: jr          $ra
    // 0x80800034: lbu         $v0, 0x54F($v0)
    ctx->r2 = MEM_BU(ctx->r2, (int16_t)RELOC_LO16(16, 0X54F));
    return;
    // 0x80800034: lbu         $v0, 0x54F($v0)
    ctx->r2 = MEM_BU(ctx->r2, (int16_t)RELOC_LO16(16, 0X54F));
;}
RECOMP_FUNC void badeathmatch_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080003C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800040: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800044: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800048: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080004C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800050: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800054: lw          $s2, 0x158($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X158);
    // 0x80800058: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8080005C: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
    // 0x80800060: lbu         $s1, 0x20($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X20);
L_80800064:
    // 0x80800064: jal         0x80000028
    // 0x80800068: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800028_badeathmatch(rdram, ctx);
        goto after_0;
    // 0x80800068: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8080006C: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x80800070: addu        $v1, $s2, $t7
    ctx->r3 = ADD32(ctx->r18, ctx->r15);
    // 0x80800074: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x80800078: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8080007C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800080: bnel        $t8, $zero, L_80800094
    if (ctx->r24 != 0) {
        // 0x80800084: lh          $t9, 0x0($v1)
        ctx->r25 = MEM_H(ctx->r3, 0X0);
            goto L_80800094;
    }
    goto skip_0;
    // 0x80800084: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    skip_0:
    // 0x80800088: bne         $s0, $s3, L_80800064
    if (ctx->r16 != ctx->r19) {
        // 0x8080008C: nop
    
            goto L_80800064;
    }
    // 0x8080008C: nop

    // 0x80800090: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
L_80800094:
    // 0x80800094: bnel        $t9, $zero, L_808000C0
    if (ctx->r25 != 0) {
        // 0x80800098: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_808000C0;
    }
    goto skip_1;
    // 0x80800098: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    skip_1:
L_8080009C:
    // 0x8080009C: jal         0x80000028
    // 0x808000A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800028_badeathmatch(rdram, ctx);
        goto after_1;
    // 0x808000A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808000A4: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x808000A8: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x808000AC: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x808000B0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808000B4: beq         $t2, $zero, L_8080009C
    if (ctx->r10 == 0) {
        // 0x808000B8: nop
    
            goto L_8080009C;
    }
    // 0x808000B8: nop

    // 0x808000BC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
L_808000C0:
    // 0x808000C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808000C4: lw          $t4, 0x158($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X158);
    // 0x808000C8: jal         0x800883C8
    // 0x808000CC: sb          $s1, 0x20($t4)
    MEM_B(0X20, ctx->r12) = ctx->r17;
    _gcegg_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808000CC: sb          $s1, 0x20($t4)
    MEM_B(0X20, ctx->r12) = ctx->r17;
    after_2:
    // 0x808000D0: jal         0x800FC6B0
    // 0x808000D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800FC6B0(rdram, ctx);
        goto after_3;
    // 0x808000D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x808000D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000DC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x808000E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808000E4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808000E8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808000EC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808000F0: jr          $ra
    // 0x808000F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808000F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void badeathmatch_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800104: jal         0x800EA068
    // 0x80800108: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800EA068(rdram, ctx);
        goto after_0;
    // 0x80800108: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x8080010C: beql        $v0, $zero, L_80800140
    if (ctx->r2 == 0) {
        // 0x80800110: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800140;
    }
    goto skip_0;
    // 0x80800110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800114: jal         0x8001ACCC
    // 0x80800118: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_8001ACCC(rdram, ctx);
        goto after_1;
    // 0x80800118: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_1:
    // 0x8080011C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800120: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800128: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8080012C: jal         0x80019E98
    // 0x80800130: sw          $v0, 0x158($t6)
    MEM_W(0X158, ctx->r14) = ctx->r2;
    func_80019E98(rdram, ctx);
        goto after_2;
    // 0x80800130: sw          $v0, 0x158($t6)
    MEM_W(0X158, ctx->r14) = ctx->r2;
    after_2:
    // 0x80800134: jal         0x80000000
    // 0x80800138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_badeathmatch(rdram, ctx);
        goto after_3;
    // 0x80800138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8080013C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800140:
    // 0x80800140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800144: jr          $ra
    // 0x80800148: nop

    return;
    // 0x80800148: nop

;}
RECOMP_FUNC void badeathmatch_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080014C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800154: lw          $a2, 0x158($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X158);
    // 0x80800158: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8080015C: beq         $a2, $zero, L_80800184
    if (ctx->r6 == 0) {
        // 0x80800160: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80800184;
    }
    // 0x80800160: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80800164: jal         0x8001B084
    // 0x80800168: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x80800168: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080016C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800170: jal         0x800A4C68
    // 0x80800174: sw          $zero, 0x158($a0)
    MEM_W(0X158, ctx->r4) = 0;
    func_800A4C68(rdram, ctx);
        goto after_1;
    // 0x80800174: sw          $zero, 0x158($a0)
    MEM_W(0X158, ctx->r4) = 0;
    after_1:
    // 0x80800178: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080017C: jal         0x800C968C
    // 0x80800180: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800C968C(rdram, ctx);
        goto after_2;
    // 0x80800180: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
L_80800184:
    // 0x80800184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080018C: jr          $ra
    // 0x80800190: nop

    return;
    // 0x80800190: nop

;}
