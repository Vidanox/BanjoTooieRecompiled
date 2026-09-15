#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void susplinet_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808002B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002BC: jal         0x80000184
    // 0x808002C0: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    susplinet_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808002C0: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x808002C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808002C8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808002CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808002D0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x808002D4: nop

    // 0x808002D8: bc1fl       L_808002E8
    if (!c1cs) {
        // 0x808002DC: lw          $t6, 0x54($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X54);
            goto L_808002E8;
    }
    goto skip_0;
    // 0x808002DC: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    skip_0:
    // 0x808002E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808002E4: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
L_808002E8:
    // 0x808002E8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x808002EC: beql        $t7, $zero, L_80800328
    if (ctx->r15 == 0) {
        // 0x808002F0: swc1        $f12, 0x44($a0)
        MEM_W(0X44, ctx->r4) = ctx->f12.u32l;
            goto L_80800328;
    }
    goto skip_1;
    // 0x808002F0: swc1        $f12, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f12.u32l;
    skip_1:
    // 0x808002F4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x808002F8: nop

    // 0x808002FC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800300: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80800304: nop

    // 0x80800308: bc1fl       L_80800328
    if (!c1cs) {
        // 0x8080030C: swc1        $f12, 0x44($a0)
        MEM_W(0X44, ctx->r4) = ctx->f12.u32l;
            goto L_80800328;
    }
    goto skip_2;
    // 0x8080030C: swc1        $f12, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f12.u32l;
    skip_2:
    // 0x80800310: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_80800314:
    // 0x80800314: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80800318: nop

    // 0x8080031C: bc1tl       L_80800314
    if (c1cs) {
        // 0x80800320: sub.s       $f12, $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80800314;
    }
    goto skip_3;
    // 0x80800320: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    skip_3:
    // 0x80800324: swc1        $f12, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f12.u32l;
L_80800328:
    // 0x80800328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080032C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800330: jr          $ra
    // 0x80800334: nop

    return;
    // 0x80800334: nop

;}
RECOMP_FUNC void susplinet_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800338: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080033C: jr          $ra
    // 0x80800340: swc1        $f12, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80800340: swc1        $f12, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void susplinet_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800344: lh          $t6, 0x30($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X30);
    // 0x80800348: jr          $ra
    // 0x8080034C: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    return;
    // 0x8080034C: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
;}
RECOMP_FUNC void susplinet_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800350: lh          $t6, 0x34($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X34);
    // 0x80800354: jr          $ra
    // 0x80800358: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    return;
    // 0x80800358: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
;}
RECOMP_FUNC void susplinet_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080035C: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x80800360: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80800364: lh          $t8, 0x36($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X36);
    // 0x80800368: jr          $ra
    // 0x8080036C: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    return;
    // 0x8080036C: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
;}
RECOMP_FUNC void susplinet_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800370: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x80800374: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80800378: lh          $t8, 0x3E($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X3E);
    // 0x8080037C: jr          $ra
    // 0x80800380: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    return;
    // 0x80800380: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
;}
RECOMP_FUNC void func_80800384_susplinet(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800384: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80800388: lh          $t8, 0x30($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X30);
    // 0x8080038C: lh          $v1, 0x4C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4C);
    // 0x80800390: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80800394: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x80800398: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x8080039C: addu        $a2, $v0, $t9
    ctx->r6 = ADD32(ctx->r2, ctx->r25);
    // 0x808003A0: lh          $t0, 0x0($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X0);
    // 0x808003A4: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x808003A8: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x808003AC: beql        $at, $zero, L_808003F0
    if (ctx->r1 == 0) {
        // 0x808003B0: lh          $t5, 0x2($a2)
        ctx->r13 = MEM_H(ctx->r6, 0X2);
            goto L_808003F0;
    }
    goto skip_0;
    // 0x808003B0: lh          $t5, 0x2($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X2);
    skip_0:
    // 0x808003B4: blezl       $v1, L_808003F0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x808003B8: lh          $t5, 0x2($a2)
        ctx->r13 = MEM_H(ctx->r6, 0X2);
            goto L_808003F0;
    }
    goto skip_1;
    // 0x808003B8: lh          $t5, 0x2($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X2);
    skip_1:
    // 0x808003BC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_808003C0:
    // 0x808003C0: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x808003C4: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x808003C8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x808003CC: addu        $a2, $v0, $t3
    ctx->r6 = ADD32(ctx->r2, ctx->r11);
    // 0x808003D0: lh          $t4, 0x0($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X0);
    // 0x808003D4: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x808003D8: slt         $at, $a1, $t4
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x808003DC: beql        $at, $zero, L_808003F0
    if (ctx->r1 == 0) {
        // 0x808003E0: lh          $t5, 0x2($a2)
        ctx->r13 = MEM_H(ctx->r6, 0X2);
            goto L_808003F0;
    }
    goto skip_2;
    // 0x808003E0: lh          $t5, 0x2($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X2);
    skip_2:
    // 0x808003E4: bgtzl       $t2, L_808003C0
    if (SIGNED(ctx->r10) > 0) {
        // 0x808003E8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_808003C0;
    }
    goto skip_3;
    // 0x808003E8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_3:
    // 0x808003EC: lh          $t5, 0x2($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X2);
L_808003F0:
    // 0x808003F0: slt         $at, $t5, $a1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x808003F4: beql        $at, $zero, L_80800444
    if (ctx->r1 == 0) {
        // 0x808003F8: sh          $v1, 0x4C($a0)
        MEM_H(0X4C, ctx->r4) = ctx->r3;
            goto L_80800444;
    }
    goto skip_4;
    // 0x808003F8: sh          $v1, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r3;
    skip_4:
    // 0x808003FC: lh          $a2, 0x4E($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X4E);
    // 0x80800400: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80800404: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80800408: beql        $at, $zero, L_80800444
    if (ctx->r1 == 0) {
        // 0x8080040C: sh          $v1, 0x4C($a0)
        MEM_H(0X4C, ctx->r4) = ctx->r3;
            goto L_80800444;
    }
    goto skip_5;
    // 0x8080040C: sh          $v1, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r3;
    skip_5:
    // 0x80800410: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80800414:
    // 0x80800414: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80800418: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8080041C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80800420: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80800424: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x80800428: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8080042C: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80800430: beq         $at, $zero, L_80800440
    if (ctx->r1 == 0) {
        // 0x80800434: slt         $at, $t7, $a2
        ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80800440;
    }
    // 0x80800434: slt         $at, $t7, $a2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80800438: bnel        $at, $zero, L_80800414
    if (ctx->r1 != 0) {
        // 0x8080043C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80800414;
    }
    goto skip_6;
    // 0x8080043C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_6:
L_80800440:
    // 0x80800440: sh          $v1, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r3;
L_80800444:
    // 0x80800444: jr          $ra
    // 0x80800448: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800448: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void susplinet_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080044C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x80800450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800458: trunc.w.s   $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8080045C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800460: lh          $t6, 0x30($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X30);
    // 0x80800464: lh          $t7, 0x32($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X32);
    // 0x80800468: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8080046C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80800470: addu        $a3, $a0, $t6
    ctx->r7 = ADD32(ctx->r4, ctx->r14);
    // 0x80800474: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80800478: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x8080047C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80800480: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80800484: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80800488: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8080048C: jal         0x80000384
    // 0x80800490: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_80800384_susplinet(rdram, ctx);
        goto after_0;
    // 0x80800490: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80800494: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80800498: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8080049C: sll         $a1, $v1, 16
    ctx->r5 = S32(ctx->r3 << 16);
    // 0x808004A0: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x808004A4: lh          $t9, 0x4E($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X4E);
    // 0x808004A8: addiu       $a0, $t6, 0x1
    ctx->r4 = ADD32(ctx->r14, 0X1);
    // 0x808004AC: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x808004B0: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x808004B4: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x808004B8: sra         $t8, $t0, 16
    ctx->r24 = S32(SIGNED(ctx->r8) >> 16);
    // 0x808004BC: sra         $t5, $t1, 16
    ctx->r13 = S32(SIGNED(ctx->r9) >> 16);
    // 0x808004C0: sra         $t7, $t2, 16
    ctx->r15 = S32(SIGNED(ctx->r10) >> 16);
    // 0x808004C4: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x808004C8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x808004CC: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808004D0: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
    // 0x808004D4: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
    // 0x808004D8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x808004DC: bne         $at, $zero, L_808004F8
    if (ctx->r1 != 0) {
        // 0x808004E0: or          $t0, $t8, $zero
        ctx->r8 = ctx->r24 | 0;
            goto L_808004F8;
    }
    // 0x808004E0: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x808004E4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x808004E8: jal         0x800002AC
    // 0x808004EC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    susplinet_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x808004EC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x808004F0: b           L_80800614
    // 0x808004F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800614;
    // 0x808004F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808004F8:
    // 0x808004F8: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x808004FC: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x80800500: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x80800504: addu        $t3, $a3, $v0
    ctx->r11 = ADD32(ctx->r7, ctx->r2);
    // 0x80800508: lh          $v1, 0x0($t3)
    ctx->r3 = MEM_H(ctx->r11, 0X0);
    // 0x8080050C: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x80800510: beql        $v1, $t6, L_80800530
    if (ctx->r3 == ctx->r14) {
        // 0x80800514: mtc1        $v1, $f6
        ctx->f6.u32l = ctx->r3;
            goto L_80800530;
    }
    goto skip_0;
    // 0x80800514: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    skip_0:
    // 0x80800518: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8080051C: jal         0x800002AC
    // 0x80800520: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    susplinet_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80800520: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x80800524: b           L_80800614
    // 0x80800528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800614;
    // 0x80800528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080052C: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
L_80800530:
    // 0x80800530: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80800534: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800538: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8080053C: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x80800540: nop

    // 0x80800544: bc1fl       L_80800564
    if (!c1cs) {
        // 0x80800548: lh          $t9, 0x0($t8)
        ctx->r25 = MEM_H(ctx->r24, 0X0);
            goto L_80800564;
    }
    goto skip_1;
    // 0x80800548: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    skip_1:
    // 0x8080054C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800550: jal         0x800002AC
    // 0x80800554: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    susplinet_entrypoint_10(rdram, ctx);
        goto after_3;
    // 0x80800554: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x80800558: b           L_80800614
    // 0x8080055C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800614;
    // 0x8080055C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800560: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
L_80800564:
    // 0x80800564: addiu       $a0, $zero, 0x644
    ctx->r4 = ADD32(0, 0X644);
    // 0x80800568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080056C: andi        $t3, $t9, 0x1
    ctx->r11 = ctx->r25 & 0X1;
    // 0x80800570: beql        $t3, $zero, L_80800608
    if (ctx->r11 == 0) {
        // 0x80800574: mfc1        $a1, $f12
        ctx->r5 = (int32_t)ctx->f12.u32l;
            goto L_80800608;
    }
    goto skip_2;
    // 0x80800574: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    skip_2:
    // 0x80800578: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080057C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80800580: sh          $t1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r9;
    // 0x80800584: jal         0x800DA9E4
    // 0x80800588: sh          $t2, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r10;
    func_800DA9E4(rdram, ctx);
        goto after_4;
    // 0x80800588: sh          $t2, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r10;
    after_4:
    // 0x8080058C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80800590: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80800594: lh          $t1, 0x1C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1C);
    // 0x80800598: bne         $v0, $zero, L_808005D0
    if (ctx->r2 != 0) {
        // 0x8080059C: lh          $t2, 0x1A($sp)
        ctx->r10 = MEM_H(ctx->r29, 0X1A);
            goto L_808005D0;
    }
    // 0x8080059C: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x808005A0: sll         $t4, $t1, 1
    ctx->r12 = S32(ctx->r9 << 1);
    // 0x808005A4: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x808005A8: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x808005AC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x808005B0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x808005B4: nop

    // 0x808005B8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x808005BC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x808005C0: jal         0x800002AC
    // 0x808005C4: nop

    susplinet_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x808005C4: nop

    after_5:
    // 0x808005C8: b           L_80800614
    // 0x808005CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800614;
    // 0x808005CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005D0:
    // 0x808005D0: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x808005D4: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x808005D8: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x808005DC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x808005E0: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x808005E4: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x808005E8: nop

    // 0x808005EC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x808005F0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x808005F4: jal         0x800002AC
    // 0x808005F8: nop

    susplinet_entrypoint_10(rdram, ctx);
        goto after_6;
    // 0x808005F8: nop

    after_6:
    // 0x808005FC: b           L_80800614
    // 0x80800600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800614;
    // 0x80800600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800604: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
L_80800608:
    // 0x80800608: jal         0x800002AC
    // 0x8080060C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    susplinet_entrypoint_10(rdram, ctx);
        goto after_7;
    // 0x8080060C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_7:
    // 0x80800610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800614:
    // 0x80800614: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800618: jr          $ra
    // 0x8080061C: nop

    return;
    // 0x8080061C: nop

;}
RECOMP_FUNC void func_80800620_susplinet(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800620: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800624: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80800628: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8080062C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800630: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800634: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800638: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080063C: lh          $t6, 0x30($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X30);
    // 0x80800640: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800644: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800648: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8080064C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80800650: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80800654: jal         0x80000384
    // 0x80800658: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    func_80800384_susplinet(rdram, ctx);
        goto after_0;
    // 0x80800658: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_0:
    // 0x8080065C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800660: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80800664: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80800668: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x8080066C: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x80800670: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    // 0x80800674: sh          $t2, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r10;
    // 0x80800678: lw          $t3, 0x54($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X54);
    // 0x8080067C: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x80800680: bnel        $t4, $zero, L_808006DC
    if (ctx->r12 != 0) {
        // 0x80800684: lh          $v1, 0x4($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X4);
            goto L_808006DC;
    }
    goto skip_0;
    // 0x80800684: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    skip_0:
    // 0x80800688: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x8080068C: lh          $v0, 0x4E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4E);
    // 0x80800690: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80800694: bne         $at, $zero, L_808006A4
    if (ctx->r1 != 0) {
        // 0x80800698: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_808006A4;
    }
    // 0x80800698: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x8080069C: sh          $t5, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r13;
    // 0x808006A0: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
L_808006A4:
    // 0x808006A4: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x808006A8: sh          $t6, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r14;
    // 0x808006AC: lh          $t7, 0x6($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X6);
    // 0x808006B0: lh          $v0, 0x4E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4E);
    // 0x808006B4: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x808006B8: bne         $at, $zero, L_808006C4
    if (ctx->r1 != 0) {
        // 0x808006BC: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_808006C4;
    }
    // 0x808006BC: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x808006C0: sh          $t8, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r24;
L_808006C4:
    // 0x808006C4: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x808006C8: bgezl       $t9, L_8080073C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x808006CC: lh          $a1, 0x2($s0)
        ctx->r5 = MEM_H(ctx->r16, 0X2);
            goto L_8080073C;
    }
    goto skip_1;
    // 0x808006CC: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    skip_1:
    // 0x808006D0: b           L_80800738
    // 0x808006D4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
        goto L_80800738;
    // 0x808006D4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x808006D8: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
L_808006DC:
    // 0x808006DC: lh          $v0, 0x4E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4E);
    // 0x808006E0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x808006E4: bne         $at, $zero, L_808006F8
    if (ctx->r1 != 0) {
        // 0x808006E8: subu        $t0, $v1, $v0
        ctx->r8 = SUB32(ctx->r3, ctx->r2);
            goto L_808006F8;
    }
    // 0x808006E8: subu        $t0, $v1, $v0
    ctx->r8 = SUB32(ctx->r3, ctx->r2);
    // 0x808006EC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x808006F0: sh          $t1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r9;
    // 0x808006F4: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
L_808006F8:
    // 0x808006F8: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x808006FC: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
    // 0x80800700: lh          $v0, 0x4E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4E);
    // 0x80800704: lh          $a1, 0x6($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X6);
    // 0x80800708: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8080070C: bne         $at, $zero, L_8080071C
    if (ctx->r1 != 0) {
        // 0x80800710: subu        $t3, $a1, $v0
        ctx->r11 = SUB32(ctx->r5, ctx->r2);
            goto L_8080071C;
    }
    // 0x80800710: subu        $t3, $a1, $v0
    ctx->r11 = SUB32(ctx->r5, ctx->r2);
    // 0x80800714: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80800718: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
L_8080071C:
    // 0x8080071C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80800720: bgezl       $v0, L_8080073C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80800724: lh          $a1, 0x2($s0)
        ctx->r5 = MEM_H(ctx->r16, 0X2);
            goto L_8080073C;
    }
    goto skip_2;
    // 0x80800724: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    skip_2:
    // 0x80800728: lh          $t5, 0x4E($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4E);
    // 0x8080072C: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80800730: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80800734: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
L_80800738:
    // 0x80800738: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
L_8080073C:
    // 0x8080073C: jal         0x80000048
    // 0x80800740: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80800048_susplinet(rdram, ctx);
        goto after_1;
    // 0x80800740: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x80800744: beq         $v0, $zero, L_80800754
    if (ctx->r2 == 0) {
        // 0x80800748: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80800754;
    }
    // 0x80800748: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8080074C: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x80800750: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
L_80800754:
    // 0x80800754: jal         0x80000068
    // 0x80800758: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    func_80800068_susplinet(rdram, ctx);
        goto after_2;
    // 0x80800758: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    after_2:
    // 0x8080075C: beq         $v0, $zero, L_8080076C
    if (ctx->r2 == 0) {
        // 0x80800760: lui         $a3, 0x3EAA
        ctx->r7 = S32(0X3EAA << 16);
            goto L_8080076C;
    }
    // 0x80800760: lui         $a3, 0x3EAA
    ctx->r7 = S32(0X3EAA << 16);
    // 0x80800764: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    // 0x80800768: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
L_8080076C:
    // 0x8080076C: lh          $t4, 0x4($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X4);
    // 0x80800770: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80800774: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x80800778: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8080077C: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80800780: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x80800784: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80800788: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8080078C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80800790: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80800794: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X1300) << 16);
    // 0x80800798: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8080079C: lwc1        $f16, 0x1300($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1300));
    // 0x808007A0: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x808007A4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808007A8: ori         $a3, $a3, 0x7EFA
    ctx->r7 = ctx->r7 | 0X7EFA;
    // 0x808007AC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x808007B0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x808007B4: jal         0x800F10B4
    // 0x808007B8: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x808007B8: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_3:
    // 0x808007BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808007C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808007C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808007C8: jr          $ra
    // 0x808007CC: nop

    return;
    // 0x808007CC: nop

;}
RECOMP_FUNC void func_808007D0_susplinet(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007D0: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x808007D4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x808007D8: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x808007DC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x808007E0: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x808007E4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x808007E8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x808007EC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x808007F0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x808007F4: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x808007F8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x808007FC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80800800: lh          $t7, 0x34($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X34);
    // 0x80800804: lh          $t6, 0x30($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X30);
    // 0x80800808: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080080C: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80800810: sw          $t8, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r24;
    // 0x80800814: lh          $t9, 0x4($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X4);
    // 0x80800818: addu        $s5, $a0, $t6
    ctx->r21 = ADD32(ctx->r4, ctx->r14);
    // 0x8080081C: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x80800820: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80800824: addu        $t1, $s5, $t0
    ctx->r9 = ADD32(ctx->r21, ctx->r8);
    // 0x80800828: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x8080082C: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80800830: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X1304) << 16);
    // 0x80800834: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80800838: nop

    // 0x8080083C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800840: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x80800844: nop

    // 0x80800848: bc1fl       L_8080085C
    if (!c1cs) {
        // 0x8080084C: lh          $t3, 0x2($s6)
        ctx->r11 = MEM_H(ctx->r22, 0X2);
            goto L_8080085C;
    }
    goto skip_0;
    // 0x8080084C: lh          $t3, 0x2($s6)
    ctx->r11 = MEM_H(ctx->r22, 0X2);
    skip_0:
    // 0x80800850: b           L_80800D08
    // 0x80800854: lwc1        $f0, 0x1304($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1304));
        goto L_80800D08;
    // 0x80800854: lwc1        $f0, 0x1304($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1304));
    // 0x80800858: lh          $t3, 0x2($s6)
    ctx->r11 = MEM_H(ctx->r22, 0X2);
L_8080085C:
    // 0x8080085C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X1308) << 16);
    // 0x80800860: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x80800864: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80800868: addu        $t5, $s5, $t4
    ctx->r13 = ADD32(ctx->r21, ctx->r12);
    // 0x8080086C: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x80800870: addiu       $a1, $s4, 0x18
    ctx->r5 = ADD32(ctx->r20, 0X18);
    // 0x80800874: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x80800878: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8080087C: nop

    // 0x80800880: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800884: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x80800888: nop

    // 0x8080088C: bc1f        L_8080089C
    if (!c1cs) {
        // 0x80800890: nop
    
            goto L_8080089C;
    }
    // 0x80800890: nop

    // 0x80800894: b           L_80800D08
    // 0x80800898: lwc1        $f0, 0x1308($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1308));
        goto L_80800D08;
    // 0x80800898: lwc1        $f0, 0x1308($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1308));
L_8080089C:
    // 0x8080089C: jal         0x800EEDE8
    // 0x808008A0: swc1        $f12, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f12.u32l;
    func_800EEDE8(rdram, ctx);
        goto after_0;
    // 0x808008A0: swc1        $f12, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x808008A4: beq         $v0, $zero, L_80800908
    if (ctx->r2 == 0) {
        // 0x808008A8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80800908;
    }
    // 0x808008A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808008AC: lh          $t1, 0x4($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X4);
    // 0x808008B0: lh          $t7, 0x2($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X2);
    // 0x808008B4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X130C) << 16);
    // 0x808008B8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x808008BC: addu        $t3, $s5, $t2
    ctx->r11 = ADD32(ctx->r21, ctx->r10);
    // 0x808008C0: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x808008C4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x808008C8: lwc1        $f22, 0x130C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X130C));
    // 0x808008CC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x808008D0: addu        $t9, $s5, $t8
    ctx->r25 = ADD32(ctx->r21, ctx->r24);
    // 0x808008D4: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x808008D8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x808008DC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X1310) << 16);
    // 0x808008E0: lwc1        $f24, 0x1310($at)
    ctx->f24.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1310));
    // 0x808008E4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x808008E8: lwc1        $f12, 0x13C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x808008EC: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x808008F0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x808008F4: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x808008F8: jal         0x800F10B4
    // 0x808008FC: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x808008FC: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x80800900: b           L_80800D0C
    // 0x80800904: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_80800D0C;
    // 0x80800904: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80800908:
    // 0x80800908: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X1314) << 16);
    // 0x8080090C: lwc1        $f24, 0x1314($at)
    ctx->f24.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1314));
    // 0x80800910: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X1318) << 16);
    // 0x80800914: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80800918: lwc1        $f22, 0x1318($at)
    ctx->f22.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1318));
    // 0x8080091C: addiu       $s1, $sp, 0xB4
    ctx->r17 = ADD32(ctx->r29, 0XB4);
    // 0x80800920: addiu       $s3, $sp, 0x98
    ctx->r19 = ADD32(ctx->r29, 0X98);
    // 0x80800924: addiu       $s2, $sp, 0xA4
    ctx->r18 = ADD32(ctx->r29, 0XA4);
L_80800928:
    // 0x80800928: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8080092C: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80800930: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x80800934: lui         $a2, 0x41E8
    ctx->r6 = S32(0X41E8 << 16);
    // 0x80800938: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8080093C: jal         0x800F10B4
    // 0x80800940: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x80800940: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_2:
    // 0x80800944: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800948: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8080094C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80800950: jal         0x800890F8
    // 0x80800954: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    _mlspline_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x80800954: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_3:
    // 0x80800958: blez        $s0, L_80800978
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8080095C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80800978;
    }
    // 0x8080095C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800960: jal         0x800EEAD4
    // 0x80800964: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_4;
    // 0x80800964: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x80800968: lwc1        $f10, -0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, -0X4);
    // 0x8080096C: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80800970: b           L_8080097C
    // 0x80800974: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
        goto L_8080097C;
    // 0x80800974: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
L_80800978:
    // 0x80800978: swc1        $f20, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f20.u32l;
L_8080097C:
    // 0x8080097C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800980: jal         0x800EE7F8
    // 0x80800984: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x80800984: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x80800988: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8080098C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80800990: bne         $s0, $at, L_80800928
    if (ctx->r16 != ctx->r1) {
        // 0x80800994: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80800928;
    }
    // 0x80800994: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80800998: lh          $v1, 0x2($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X2);
    // 0x8080099C: lw          $a0, 0x130($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X130);
    // 0x808009A0: lh          $v0, 0x4($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X4);
    // 0x808009A4: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x808009A8: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x808009AC: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x808009B0: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x808009B4: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x808009B8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x808009BC: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x808009C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X131C) << 16);
    // 0x808009C4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x808009C8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x808009CC: lwc1        $f10, 0x131C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X131C));
    // 0x808009D0: addu        $t1, $s5, $t8
    ctx->r9 = ADD32(ctx->r21, ctx->r24);
    // 0x808009D4: addu        $t3, $s5, $t5
    ctx->r11 = ADD32(ctx->r21, ctx->r13);
    // 0x808009D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808009DC: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x808009E0: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x808009E4: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x808009E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X1320) << 16);
    // 0x808009EC: lwc1        $f8, 0x1320($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1320));
    // 0x808009F0: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x808009F4: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x808009F8: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x808009FC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80800A00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800A04: lwc1        $f6, 0x128($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80800A08: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800A0C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800A10: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800A14: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x80800A18: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x80800A1C: lwc1        $f12, 0x13C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80800A20: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800A24: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80800A28: sub.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80800A2C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800A30: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80800A34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800A38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800A3C: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x80800A40: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80800A44: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80800A48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800A4C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80800A50: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80800A54: jal         0x800F10B4
    // 0x80800A58: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x80800A58: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80800A5C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800A60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800A64: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80800A68: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x80800A6C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80800A70: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80800A74: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800A78: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80800A7C: bc1fl       L_80800B20
    if (!c1cs) {
        // 0x80800A80: lh          $t7, 0x4($s6)
        ctx->r15 = MEM_H(ctx->r22, 0X4);
            goto L_80800B20;
    }
    goto skip_1;
    // 0x80800A80: lh          $t7, 0x4($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X4);
    skip_1:
    // 0x80800A84: lh          $t5, 0x2($s6)
    ctx->r13 = MEM_H(ctx->r22, 0X2);
    // 0x80800A88: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800A8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800A90: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80800A94: addu        $t7, $s5, $t6
    ctx->r15 = ADD32(ctx->r21, ctx->r14);
    // 0x80800A98: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x80800A9C: mul.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800AA0: lwc1        $f12, 0x13C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80800AA4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80800AA8: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x80800AAC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800AB0: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80800AB4: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x80800AB8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80800ABC: add.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x80800AC0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800AC4: jal         0x800F10B4
    // 0x80800AC8: nop

    func_800F10B4(rdram, ctx);
        goto after_7;
    // 0x80800AC8: nop

    after_7:
    // 0x80800ACC: lh          $t9, 0x2($s6)
    ctx->r25 = MEM_H(ctx->r22, 0X2);
    // 0x80800AD0: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80800AD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800AD8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80800ADC: addu        $t1, $s5, $t0
    ctx->r9 = ADD32(ctx->r21, ctx->r8);
    // 0x80800AE0: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x80800AE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800AE8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800AEC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80800AF0: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x80800AF4: lwc1        $f12, 0x13C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80800AF8: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800AFC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80800B00: add.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x80800B04: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80800B08: jal         0x800F10B4
    // 0x80800B0C: nop

    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x80800B0C: nop

    after_8:
    // 0x80800B10: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80800B14: b           L_80800BD0
    // 0x80800B18: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
        goto L_80800BD0;
    // 0x80800B18: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80800B1C: lh          $t7, 0x4($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X4);
L_80800B20:
    // 0x80800B20: lh          $t3, 0x2($s6)
    ctx->r11 = MEM_H(ctx->r22, 0X2);
    // 0x80800B24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800B28: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80800B2C: addu        $t9, $s5, $t8
    ctx->r25 = ADD32(ctx->r21, ctx->r24);
    // 0x80800B30: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80800B34: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80800B38: addu        $t5, $s5, $t4
    ctx->r13 = ADD32(ctx->r21, ctx->r12);
    // 0x80800B3C: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80800B40: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x80800B44: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80800B48: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80800B4C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80800B50: lwc1        $f12, 0x13C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80800B54: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800B58: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x80800B5C: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x80800B60: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800B64: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80800B68: jal         0x800F10B4
    // 0x80800B6C: add.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f2.fl;
    func_800F10B4(rdram, ctx);
        goto after_9;
    // 0x80800B6C: add.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f2.fl;
    after_9:
    // 0x80800B70: lh          $t5, 0x4($s6)
    ctx->r13 = MEM_H(ctx->r22, 0X4);
    // 0x80800B74: lh          $t1, 0x2($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X2);
    // 0x80800B78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800B7C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80800B80: addu        $t7, $s5, $t6
    ctx->r15 = ADD32(ctx->r21, ctx->r14);
    // 0x80800B84: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x80800B88: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80800B8C: addu        $t3, $s5, $t2
    ctx->r11 = ADD32(ctx->r21, ctx->r10);
    // 0x80800B90: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x80800B94: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80800B98: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80800B9C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80800BA0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800BA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800BA8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800BAC: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x80800BB0: lwc1        $f12, 0x13C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80800BB4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800BB8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800BBC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80800BC0: jal         0x800F10B4
    // 0x80800BC4: add.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f2.fl;
    func_800F10B4(rdram, ctx);
        goto after_10;
    // 0x80800BC4: add.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f2.fl;
    after_10:
    // 0x80800BC8: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80800BCC: lwc1        $f2, 0x90($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X90);
L_80800BD0:
    // 0x80800BD0: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x80800BD4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80800BD8: addiu       $v1, $sp, 0xB4
    ctx->r3 = ADD32(ctx->r29, 0XB4);
    // 0x80800BDC: bc1fl       L_80800C14
    if (!c1cs) {
        // 0x80800BE0: add.s       $f4, $f16, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f2.fl;
            goto L_80800C14;
    }
    goto skip_2;
    // 0x80800BE0: add.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f2.fl;
    skip_2:
    // 0x80800BE4: add.s       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x80800BE8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80800BEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800BF0: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80800BF4: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80800BF8: nop

    // 0x80800BFC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80800C00: nop

    // 0x80800C04: mul.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80800C08: b           L_80800C34
    // 0x80800C0C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_80800C34;
    // 0x80800C0C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x80800C10: add.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f2.fl;
L_80800C14:
    // 0x80800C14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800C18: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80800C1C: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80800C20: nop

    // 0x80800C24: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80800C28: nop

    // 0x80800C2C: mul.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80800C30: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_80800C34:
    // 0x80800C34: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800C38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800C3C: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80800C40: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80800C44: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80800C48: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80800C4C: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80800C50: bc1fl       L_80800C70
    if (!c1cs) {
        // 0x80800C54: lwc1        $f6, 0xB8($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
            goto L_80800C70;
    }
    goto skip_3;
    // 0x80800C54: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    skip_3:
    // 0x80800C58: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80800C5C: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80800C60: nop

    // 0x80800C64: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80800C68: add.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x80800C6C: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
L_80800C70:
    // 0x80800C70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800C74: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80800C78: nop

    // 0x80800C7C: bc1fl       L_80800CB0
    if (!c1cs) {
        // 0x80800C80: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_80800CB0;
    }
    goto skip_4;
    // 0x80800C80: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_4:
    // 0x80800C84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80800C88:
    // 0x80800C88: slti        $at, $v0, 0x1C
    ctx->r1 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
    // 0x80800C8C: beq         $at, $zero, L_80800CAC
    if (ctx->r1 == 0) {
        // 0x80800C90: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_80800CAC;
    }
    // 0x80800C90: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80800C94: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x80800C98: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80800C9C: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x80800CA0: nop

    // 0x80800CA4: bc1tl       L_80800C88
    if (c1cs) {
        // 0x80800CA8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80800C88;
    }
    goto skip_5;
    // 0x80800CA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_5:
L_80800CAC:
    // 0x80800CAC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
L_80800CB0:
    // 0x80800CB0: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x80800CB4: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80800CB8: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800CBC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(845, 0X1324) << 16);
    // 0x80800CC0: lwc1        $f0, 0x1324($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(845, 0X1324));
    // 0x80800CC4: addiu       $v1, $sp, 0xB4
    ctx->r3 = ADD32(ctx->r29, 0XB4);
    // 0x80800CC8: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x80800CCC: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800CD0: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80800CD4: addu        $a0, $v1, $t1
    ctx->r4 = ADD32(ctx->r3, ctx->r9);
    // 0x80800CD8: lwc1        $f14, 0x0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80800CDC: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x80800CE0: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80800CE4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80800CE8: jal         0x800F10B4
    // 0x80800CEC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_11;
    // 0x80800CEC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x80800CF0: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80800CF4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800CF8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x80800CFC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800D00: jal         0x800F10B4
    // 0x80800D04: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    func_800F10B4(rdram, ctx);
        goto after_12;
    // 0x80800D04: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    after_12:
L_80800D08:
    // 0x80800D08: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80800D0C:
    // 0x80800D0C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80800D10: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80800D14: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x80800D18: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80800D1C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80800D20: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80800D24: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80800D28: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80800D2C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80800D30: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80800D34: jr          $ra
    // 0x80800D38: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x80800D38: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_80800D3C_susplinet(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D3C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x80800D40: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800D44: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80800D48: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80800D4C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80800D50: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80800D54: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800D58: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80800D5C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80800D60: lh          $t6, 0x34($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X34);
    // 0x80800D64: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x80800D68: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80800D6C: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80800D70: sw          $t7, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r15;
    // 0x80800D74: lh          $t8, 0x30($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X30);
    // 0x80800D78: lh          $t9, 0x4E($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4E);
    // 0x80800D7C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80800D80: addu        $s1, $a0, $t8
    ctx->r17 = ADD32(ctx->r4, ctx->r24);
    // 0x80800D84: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80800D88: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x80800D8C: lh          $t2, -0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, -0X2);
    // 0x80800D90: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x80800D94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800D98: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80800D9C: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x80800DA0: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800DA4: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x80800DA8: nop

    // 0x80800DAC: bc1fl       L_80800DC0
    if (!c1cs) {
        // 0x80800DB0: lh          $t3, 0x0($s1)
        ctx->r11 = MEM_H(ctx->r17, 0X0);
            goto L_80800DC0;
    }
    goto skip_0;
    // 0x80800DB0: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
    skip_0:
    // 0x80800DB4: b           L_80800DE0
    // 0x80800DB8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
        goto L_80800DE0;
    // 0x80800DB8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80800DBC: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
L_80800DC0:
    // 0x80800DC0: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80800DC4: nop

    // 0x80800DC8: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800DCC: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x80800DD0: nop

    // 0x80800DD4: bc1fl       L_80800DE4
    if (!c1cs) {
        // 0x80800DD8: lbu         $t4, 0x51($s3)
        ctx->r12 = MEM_BU(ctx->r19, 0X51);
            goto L_80800DE4;
    }
    goto skip_1;
    // 0x80800DD8: lbu         $t4, 0x51($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X51);
    skip_1:
    // 0x80800DDC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_80800DE0:
    // 0x80800DE0: lbu         $t4, 0x51($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X51);
L_80800DE4:
    // 0x80800DE4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80800DE8: blezl       $t4, L_80800E20
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80800DEC: lbu         $t8, 0x52($s3)
        ctx->r24 = MEM_BU(ctx->r19, 0X52);
            goto L_80800E20;
    }
    goto skip_2;
    // 0x80800DEC: lbu         $t8, 0x52($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X52);
    skip_2:
    // 0x80800DF0: lh          $t5, 0x36($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X36);
L_80800DF4:
    // 0x80800DF4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80800DF8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800DFC: addu        $t6, $t5, $s3
    ctx->r14 = ADD32(ctx->r13, ctx->r19);
    // 0x80800E00: sw          $t6, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r14;
    // 0x80800E04: lbu         $t7, 0x51($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X51);
    // 0x80800E08: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80800E0C: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80800E10: bnel        $at, $zero, L_80800DF4
    if (ctx->r1 != 0) {
        // 0x80800E14: lh          $t5, 0x36($v0)
        ctx->r13 = MEM_H(ctx->r2, 0X36);
            goto L_80800DF4;
    }
    goto skip_3;
    // 0x80800E14: lh          $t5, 0x36($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X36);
    skip_3:
    // 0x80800E18: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80800E1C: lbu         $t8, 0x52($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X52);
L_80800E20:
    // 0x80800E20: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80800E24: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
    // 0x80800E28: blezl       $t8, L_80800E5C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80800E2C: lh          $t2, 0x4E($s3)
        ctx->r10 = MEM_H(ctx->r19, 0X4E);
            goto L_80800E5C;
    }
    goto skip_4;
    // 0x80800E2C: lh          $t2, 0x4E($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X4E);
    skip_4:
    // 0x80800E30: lh          $t9, 0x3E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X3E);
L_80800E34:
    // 0x80800E34: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80800E38: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80800E3C: addu        $t0, $t9, $s3
    ctx->r8 = ADD32(ctx->r25, ctx->r19);
    // 0x80800E40: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x80800E44: lbu         $t1, 0x52($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X52);
    // 0x80800E48: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800E4C: slt         $at, $s2, $t1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80800E50: bnel        $at, $zero, L_80800E34
    if (ctx->r1 != 0) {
        // 0x80800E54: lh          $t9, 0x3E($v0)
        ctx->r25 = MEM_H(ctx->r2, 0X3E);
            goto L_80800E34;
    }
    goto skip_5;
    // 0x80800E54: lh          $t9, 0x3E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X3E);
    skip_5:
    // 0x80800E58: lh          $t2, 0x4E($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X4E);
L_80800E5C:
    // 0x80800E5C: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80800E60: bnel        $at, $zero, L_808010C4
    if (ctx->r1 != 0) {
        // 0x80800E64: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_808010C4;
    }
    goto skip_6;
    // 0x80800E64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_6:
    // 0x80800E68: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80800E6C: jal         0x80000620
    // 0x80800E70: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80800620_susplinet(rdram, ctx);
        goto after_0;
    // 0x80800E70: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_0:
    // 0x80800E74: lh          $t4, 0xB2($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XB2);
    // 0x80800E78: lh          $t3, 0xB0($sp)
    ctx->r11 = MEM_H(ctx->r29, 0XB0);
    // 0x80800E7C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80800E80: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80800E84: beq         $t3, $t4, L_80800ECC
    if (ctx->r11 == ctx->r12) {
        // 0x80800E88: addu        $t6, $s1, $t5
        ctx->r14 = ADD32(ctx->r17, ctx->r13);
            goto L_80800ECC;
    }
    // 0x80800E88: addu        $t6, $s1, $t5
    ctx->r14 = ADD32(ctx->r17, ctx->r13);
    // 0x80800E8C: sll         $t7, $t3, 1
    ctx->r15 = S32(ctx->r11 << 1);
    // 0x80800E90: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x80800E94: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x80800E98: lh          $v0, 0x0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X0);
    // 0x80800E9C: bnel        $t9, $v0, L_80800ED0
    if (ctx->r25 != ctx->r2) {
        // 0x80800EA0: sb          $zero, 0x53($s3)
        MEM_B(0X53, ctx->r19) = 0;
            goto L_80800ED0;
    }
    goto skip_7;
    // 0x80800EA0: sb          $zero, 0x53($s3)
    MEM_B(0X53, ctx->r19) = 0;
    skip_7:
    // 0x80800EA4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80800EA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800EAC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800EB0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80800EB4: jal         0x80000214
    // 0x80800EB8: nop

    susplinet_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800EB8: nop

    after_1:
    // 0x80800EBC: beq         $v0, $zero, L_80800ECC
    if (ctx->r2 == 0) {
        // 0x80800EC0: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80800ECC;
    }
    // 0x80800EC0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80800EC4: b           L_80800ED0
    // 0x80800EC8: sb          $t0, 0x53($s3)
    MEM_B(0X53, ctx->r19) = ctx->r8;
        goto L_80800ED0;
    // 0x80800EC8: sb          $t0, 0x53($s3)
    MEM_B(0X53, ctx->r19) = ctx->r8;
L_80800ECC:
    // 0x80800ECC: sb          $zero, 0x53($s3)
    MEM_B(0X53, ctx->r19) = 0;
L_80800ED0:
    // 0x80800ED0: lh          $t1, 0xB0($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XB0);
    // 0x80800ED4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80800ED8: lh          $t2, 0xB2($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XB2);
    // 0x80800EDC: multu       $t1, $v0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800EE0: lh          $t4, 0xB4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XB4);
    // 0x80800EE4: lh          $t5, 0xB6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XB6);
    // 0x80800EE8: lbu         $t6, 0x51($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X51);
    // 0x80800EEC: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x80800EF0: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
    // 0x80800EF4: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
    // 0x80800EF8: mflo        $v1
    ctx->r3 = lo;
    // 0x80800EFC: nop

    // 0x80800F00: nop

    // 0x80800F04: multu       $t2, $v0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800F08: mflo        $a0
    ctx->r4 = lo;
    // 0x80800F0C: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x80800F10: nop

    // 0x80800F14: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800F18: mflo        $a1
    ctx->r5 = lo;
    // 0x80800F1C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80800F20: nop

    // 0x80800F24: multu       $t5, $v0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800F28: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80800F2C: mflo        $a2
    ctx->r6 = lo;
    // 0x80800F30: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80800F34: blezl       $t6, L_80801030
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80800F38: lbu         $t9, 0x52($s3)
        ctx->r25 = MEM_BU(ctx->r19, 0X52);
            goto L_80801030;
    }
    goto skip_8;
    // 0x80800F38: lbu         $t9, 0x52($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X52);
    skip_8:
    // 0x80800F3C: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x80800F40: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80800F44: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80800F48: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
L_80800F4C:
    // 0x80800F4C: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x80800F50: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80800F54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800F58: jal         0x800EE7F8
    // 0x80800F5C: addu        $a1, $t9, $v0
    ctx->r5 = ADD32(ctx->r25, ctx->r2);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80800F5C: addu        $a1, $t9, $v0
    ctx->r5 = ADD32(ctx->r25, ctx->r2);
    after_2:
    // 0x80800F60: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80800F64: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80800F68: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x80800F6C: jal         0x800EE7F8
    // 0x80800F70: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x80800F70: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    after_3:
    // 0x80800F74: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80800F78: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80800F7C: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x80800F80: jal         0x800EE7F8
    // 0x80800F84: addu        $a1, $t2, $t4
    ctx->r5 = ADD32(ctx->r10, ctx->r12);
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x80800F84: addu        $a1, $t2, $t4
    ctx->r5 = ADD32(ctx->r10, ctx->r12);
    after_4:
    // 0x80800F88: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80800F8C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80800F90: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x80800F94: jal         0x800EE7F8
    // 0x80800F98: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x80800F98: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    after_5:
    // 0x80800F9C: bne         $s2, $zero, L_80800FC8
    if (ctx->r18 != 0) {
        // 0x80800FA0: lw          $t3, 0xDC($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XDC);
            goto L_80800FC8;
    }
    // 0x80800FA0: lw          $t3, 0xDC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XDC);
    // 0x80800FA4: lh          $t7, 0x0($t3)
    ctx->r15 = MEM_H(ctx->r11, 0X0);
    // 0x80800FA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800FAC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800FB0: beq         $t7, $at, L_80800FC8
    if (ctx->r15 == ctx->r1) {
        // 0x80800FB4: addiu       $a2, $sp, 0xB0
        ctx->r6 = ADD32(ctx->r29, 0XB0);
            goto L_80800FC8;
    }
    // 0x80800FB4: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80800FB8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80800FBC: jal         0x800007D0
    // 0x80800FC0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_808007D0_susplinet(rdram, ctx);
        goto after_6;
    // 0x80800FC0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_6:
    // 0x80800FC4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_80800FC8:
    // 0x80800FC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800FCC: jal         0x800000FC
    // 0x80800FD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_808000FC_susplinet(rdram, ctx);
        goto after_7;
    // 0x80800FD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x80800FD4: beq         $v0, $zero, L_80800FE4
    if (ctx->r2 == 0) {
        // 0x80800FD8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80800FE4;
    }
    // 0x80800FD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80800FDC: jal         0x800F0EF0
    // 0x80800FE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800F0EF0(rdram, ctx);
        goto after_8;
    // 0x80800FE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
L_80800FE4:
    // 0x80800FE4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80800FE8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80800FEC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80800FF0: jal         0x800890F8
    // 0x80800FF4: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    _mlspline_entrypoint_4(rdram, ctx);
        goto after_9;
    // 0x80800FF4: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_9:
    // 0x80800FF8: bne         $s2, $zero, L_80801010
    if (ctx->r18 != 0) {
        // 0x80800FFC: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80801010;
    }
    // 0x80800FFC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80801000: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80801004: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80801008: jal         0x80089118
    // 0x8080100C: addiu       $a3, $s4, 0x18
    ctx->r7 = ADD32(ctx->r20, 0X18);
    _mlspline_entrypoint_8(rdram, ctx);
        goto after_10;
    // 0x8080100C: addiu       $a3, $s4, 0x18
    ctx->r7 = ADD32(ctx->r20, 0X18);
    after_10:
L_80801010:
    // 0x80801010: lbu         $t8, 0x51($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X51);
    // 0x80801014: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80801018: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8080101C: slt         $at, $s2, $t8
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80801020: bne         $at, $zero, L_80800F4C
    if (ctx->r1 != 0) {
        // 0x80801024: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80800F4C;
    }
    // 0x80801024: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x80801028: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8080102C: lbu         $t9, 0x52($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X52);
L_80801030:
    // 0x80801030: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
    // 0x80801034: addiu       $s1, $s3, 0x24
    ctx->r17 = ADD32(ctx->r19, 0X24);
    // 0x80801038: blez        $t9, L_808010C0
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8080103C: addiu       $s4, $sp, 0x9C
        ctx->r20 = ADD32(ctx->r29, 0X9C);
            goto L_808010C0;
    }
    // 0x8080103C: addiu       $s4, $sp, 0x9C
    ctx->r20 = ADD32(ctx->r29, 0X9C);
L_80801040:
    // 0x80801040: lh          $t0, 0xB0($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XB0);
    // 0x80801044: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80801048: lh          $t4, 0xB2($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XB2);
    // 0x8080104C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80801050: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x80801054: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80801058: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8080105C: lh          $t3, 0xB4($sp)
    ctx->r11 = MEM_H(ctx->r29, 0XB4);
    // 0x80801060: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80801064: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x80801068: lwc1        $f16, 0x0($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8080106C: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80801070: lh          $t9, 0xB6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XB6);
    // 0x80801074: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80801078: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x8080107C: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80801080: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80801084: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x80801088: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    // 0x8080108C: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80801090: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80801094: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80801098: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8080109C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x808010A0: jal         0x80089120
    // 0x808010A4: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    _mlspline_entrypoint_9(rdram, ctx);
        goto after_11;
    // 0x808010A4: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x808010A8: lbu         $t2, 0x52($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X52);
    // 0x808010AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x808010B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x808010B4: slt         $at, $s2, $t2
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x808010B8: bne         $at, $zero, L_80801040
    if (ctx->r1 != 0) {
        // 0x808010BC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80801040;
    }
    // 0x808010BC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_808010C0:
    // 0x808010C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_808010C4:
    // 0x808010C4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808010C8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808010CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808010D0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x808010D4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x808010D8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x808010DC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x808010E0: jr          $ra
    // 0x808010E4: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x808010E4: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void susplinet_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808010EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808010F4: sb          $t6, 0x58($a0)
    MEM_B(0X58, ctx->r4) = ctx->r14;
    // 0x808010F8: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x808010FC: jal         0x80000D3C
    // 0x80801100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800D3C_susplinet(rdram, ctx);
        goto after_0;
    // 0x80801100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801104: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801108: sb          $zero, 0x58($a0)
    MEM_B(0X58, ctx->r4) = 0;
    // 0x8080110C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801114: jr          $ra
    // 0x80801118: nop

    return;
    // 0x80801118: nop

;}
RECOMP_FUNC void func_8080111C_susplinet(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080111C: lh          $v1, 0x4E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4E);
    // 0x80801120: lbu         $t8, 0x51($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X51);
    // 0x80801124: addiu       $t6, $zero, 0x5C
    ctx->r14 = ADD32(0, 0X5C);
    // 0x80801128: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x8080112C: addiu       $v0, $t7, 0x5C
    ctx->r2 = ADD32(ctx->r15, 0X5C);
    // 0x80801130: sh          $v0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r2;
    // 0x80801134: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x80801138: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8080113C: blez        $t8, L_8080117C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80801140: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8080117C;
    }
    // 0x80801140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801144: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80801148: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8080114C: sh          $v0, 0x36($v1)
    MEM_H(0X36, ctx->r3) = ctx->r2;
L_80801150:
    // 0x80801150: lh          $t9, 0x4E($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4E);
    // 0x80801154: lbu         $t1, 0x51($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X51);
    // 0x80801158: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8080115C: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801160: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80801164: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80801168: mflo        $t0
    ctx->r8 = lo;
    // 0x8080116C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80801170: bnel        $at, $zero, L_80801150
    if (ctx->r1 != 0) {
        // 0x80801174: sh          $v0, 0x36($v1)
        MEM_H(0X36, ctx->r3) = ctx->r2;
            goto L_80801150;
    }
    goto skip_0;
    // 0x80801174: sh          $v0, 0x36($v1)
    MEM_H(0X36, ctx->r3) = ctx->r2;
    skip_0:
    // 0x80801178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8080117C:
    // 0x8080117C: lbu         $t2, 0x52($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X52);
    // 0x80801180: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80801184: blez        $t2, L_808011B0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80801188: nop
    
            goto L_808011B0;
    }
    // 0x80801188: nop

L_8080118C:
    // 0x8080118C: sh          $v0, 0x3E($v1)
    MEM_H(0X3E, ctx->r3) = ctx->r2;
    // 0x80801190: lbu         $t5, 0x52($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X52);
    // 0x80801194: lh          $t3, 0x4E($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X4E);
    // 0x80801198: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8080119C: slt         $at, $a1, $t5
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x808011A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x808011A4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x808011A8: bne         $at, $zero, L_8080118C
    if (ctx->r1 != 0) {
        // 0x808011AC: addu        $v0, $v0, $t4
        ctx->r2 = ADD32(ctx->r2, ctx->r12);
            goto L_8080118C;
    }
    // 0x808011AC: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
L_808011B0:
    // 0x808011B0: jr          $ra
    // 0x808011B4: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    return;
    // 0x808011B4: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_808011B8_susplinet(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011B8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808011BC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x808011C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808011C4: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x808011C8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x808011CC: jr          $ra
    // 0x808011D0: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    return;
    // 0x808011D0: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
;}
RECOMP_FUNC void susplinet_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808011DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011E0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x808011E4: jal         0x800011B8
    // 0x808011E8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_808011B8_susplinet(rdram, ctx);
        goto after_0;
    // 0x808011E8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x808011EC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808011F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011F8: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808011FC: mflo        $v1
    ctx->r3 = lo;
    // 0x80801200: addiu       $v0, $v1, 0x5C
    ctx->r2 = ADD32(ctx->r3, 0X5C);
    // 0x80801204: jr          $ra
    // 0x80801208: nop

    return;
    // 0x80801208: nop

;}
RECOMP_FUNC void susplinet_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080120C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801214: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801218: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8080121C: sh          $a1, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r5;
    // 0x80801220: sb          $a2, 0x51($a0)
    MEM_B(0X51, ctx->r4) = ctx->r6;
    // 0x80801224: sb          $a3, 0x52($a0)
    MEM_B(0X52, ctx->r4) = ctx->r7;
    // 0x80801228: sb          $zero, 0x50($a0)
    MEM_B(0X50, ctx->r4) = 0;
    // 0x8080122C: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x80801230: sb          $zero, 0x58($a0)
    MEM_B(0X58, ctx->r4) = 0;
    // 0x80801234: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x80801238: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x8080123C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80801240: jal         0x8000111C
    // 0x80801244: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8080111C_susplinet(rdram, ctx);
        goto after_0;
    // 0x80801244: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801248: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080124C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801250: lh          $t6, 0x32($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X32);
    // 0x80801254: lh          $t7, 0x34($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X34);
    // 0x80801258: addu        $t0, $a0, $t6
    ctx->r8 = ADD32(ctx->r4, ctx->r14);
    // 0x8080125C: blez        $s0, L_808012DC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80801260: addu        $t1, $a0, $t7
        ctx->r9 = ADD32(ctx->r4, ctx->r15);
            goto L_808012DC;
    }
    // 0x80801260: addu        $t1, $a0, $t7
    ctx->r9 = ADD32(ctx->r4, ctx->r15);
    // 0x80801264: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x80801268: beq         $a0, $zero, L_8080129C
    if (ctx->r4 == 0) {
        // 0x8080126C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8080129C;
    }
    // 0x8080126C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80801270: sll         $a3, $zero, 1
    ctx->r7 = S32(0 << 1);
    // 0x80801274: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x80801278: addu        $v1, $t1, $a3
    ctx->r3 = ADD32(ctx->r9, ctx->r7);
    // 0x8080127C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_80801280:
    // 0x80801280: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80801284: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80801288: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x8080128C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80801290: bne         $a2, $a1, L_80801280
    if (ctx->r6 != ctx->r5) {
        // 0x80801294: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80801280;
    }
    // 0x80801294: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80801298: beq         $a1, $s0, L_808012DC
    if (ctx->r5 == ctx->r16) {
        // 0x8080129C: sll         $a3, $a1, 1
        ctx->r7 = S32(ctx->r5 << 1);
            goto L_808012DC;
    }
L_8080129C:
    // 0x8080129C: sll         $a3, $a1, 1
    ctx->r7 = S32(ctx->r5 << 1);
    // 0x808012A0: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x808012A4: addu        $v1, $t1, $a3
    ctx->r3 = ADD32(ctx->r9, ctx->r7);
    // 0x808012A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_808012AC:
    // 0x808012AC: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x808012B0: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x808012B4: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x808012B8: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x808012BC: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x808012C0: sh          $a0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r4;
    // 0x808012C4: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x808012C8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x808012CC: sh          $a0, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r4;
    // 0x808012D0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x808012D4: bne         $a1, $s0, L_808012AC
    if (ctx->r5 != ctx->r16) {
        // 0x808012D8: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_808012AC;
    }
    // 0x808012D8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_808012DC:
    // 0x808012DC: jal         0x800DA524
    // 0x808012E0: addiu       $a0, $zero, 0x644
    ctx->r4 = ADD32(0, 0X644);
    func_800DA524(rdram, ctx);
        goto after_1;
    // 0x808012E0: addiu       $a0, $zero, 0x644
    ctx->r4 = ADD32(0, 0X644);
    after_1:
    // 0x808012E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808012E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808012EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808012F0: jr          $ra
    // 0x808012F4: nop

    return;
    // 0x808012F4: nop

    // 0x808012F8: nop

    // 0x808012FC: nop

;}
RECOMP_FUNC void susubgame_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080000C: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x80800010: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80800014: sh          $a2, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r6;
    // 0x80800018: sb          $zero, 0x1($a1)
    MEM_B(0X1, ctx->r5) = 0;
    // 0x8080001C: sh          $t6, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r14;
    // 0x80800020: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800024: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(846, 0X970) << 16);
    // 0x80800028: jal         0x80000940
    // 0x8080002C: addiu       $a1, $a1, 0x970
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(846, 0X970));
    susubgame_entrypoint_12(rdram, ctx);
        goto after_0;
    // 0x8080002C: addiu       $a1, $a1, 0x970
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(846, 0X970));
    after_0:
    // 0x80800030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800038: jr          $ra
    // 0x8080003C: nop

    return;
    // 0x8080003C: nop

;}
RECOMP_FUNC void susubgame_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80800044: jr          $ra
    // 0x80800048: sh          $a2, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r6;
    return;
    // 0x80800048: sh          $a2, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r6;
;}
RECOMP_FUNC void susubgame_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080004C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80800050: jr          $ra
    // 0x80800054: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    return;
    // 0x80800054: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
;}
RECOMP_FUNC void susubgame_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080005C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800060: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800064: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800068: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8080006C: jal         0x80088078
    // 0x80800070: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    _gcdialogcamera_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800070: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x80800074: beq         $v0, $zero, L_808000A4
    if (ctx->r2 == 0) {
        // 0x80800078: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_808000A4;
    }
    // 0x80800078: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8080007C: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x80800080: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800084: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800088: beq         $t6, $at, L_8080009C
    if (ctx->r14 == ctx->r1) {
        // 0x8080008C: addiu       $a2, $zero, 0x5
        ctx->r6 = ADD32(0, 0X5);
            goto L_8080009C;
    }
    // 0x8080008C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80800090: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80800094: jal         0x8000014C
    // 0x80800098: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    susubgame_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800098: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8080009C:
    // 0x8080009C: b           L_808000A8
    // 0x808000A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_808000A8;
    // 0x808000A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_808000A4:
    // 0x808000A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808000A8:
    // 0x808000A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000B0: jr          $ra
    // 0x808000B4: nop

    return;
    // 0x808000B4: nop

;}
RECOMP_FUNC void susubgame_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808000C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808000C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808000CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808000D0: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x808000D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808000D8: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    // 0x808000DC: beq         $t7, $zero, L_80800138
    if (ctx->r15 == 0) {
        // 0x808000E0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800138;
    }
    // 0x808000E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808000E4:
    // 0x808000E4: jal         0x800008DC
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808008DC_susubgame(rdram, ctx);
        goto after_0;
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808000EC: beql        $v0, $zero, L_8080010C
    if (ctx->r2 == 0) {
        // 0x808000F0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8080010C;
    }
    goto skip_0;
    // 0x808000F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x808000F4: jal         0x800A93E4
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A93E4(rdram, ctx);
        goto after_1;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800100: jal         0x80089548
    // 0x80800104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _ncpod_entrypoint_17(rdram, ctx);
        goto after_2;
    // 0x80800104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800108: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8080010C:
    // 0x8080010C: bne         $s0, $s1, L_808000E4
    if (ctx->r16 != ctx->r17) {
        // 0x80800110: nop
    
            goto L_808000E4;
    }
    // 0x80800110: nop

    // 0x80800114: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80800118: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x8080011C: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x80800120: beq         $t9, $zero, L_80800130
    if (ctx->r25 == 0) {
        // 0x80800124: nop
    
            goto L_80800130;
    }
    // 0x80800124: nop

    // 0x80800128: jal         0x80088830
    // 0x8080012C: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    _glcutDll_entrypoint_17(rdram, ctx);
        goto after_3;
    // 0x8080012C: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    after_3:
L_80800130:
    // 0x80800130: b           L_80800138
    // 0x80800134: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800138;
    // 0x80800134: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800138:
    // 0x80800138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080013C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800140: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800144: jr          $ra
    // 0x80800148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void susubgame_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080014C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80800150: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800154: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x80800158: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8080015C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80800160: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x80800164: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x80800168: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8080016C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80800170: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80800174: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800178: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8080017C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80800180: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x80800184: jal         0x800D3948
    // 0x80800188: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    func_800D3948(rdram, ctx);
        goto after_0;
    // 0x80800188: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080018C: beq         $v0, $zero, L_8080019C
    if (ctx->r2 == 0) {
        // 0x80800190: lw          $t6, 0x88($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X88);
            goto L_8080019C;
    }
    // 0x80800190: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x80800194: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x80800198: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
L_8080019C:
    // 0x8080019C: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
    // 0x808001A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x808001A8: beq         $v0, $zero, L_808001D0
    if (ctx->r2 == 0) {
        // 0x808001AC: or          $a1, $s7, $zero
        ctx->r5 = ctx->r23 | 0;
            goto L_808001D0;
    }
    // 0x808001AC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x808001B0: beq         $v0, $at, L_808001D8
    if (ctx->r2 == ctx->r1) {
        // 0x808001B4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808001D8;
    }
    // 0x808001B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808001B8: beq         $v0, $at, L_8080030C
    if (ctx->r2 == ctx->r1) {
        // 0x808001BC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080030C;
    }
    // 0x808001BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808001C0: beql        $v0, $at, L_808001DC
    if (ctx->r2 == ctx->r1) {
        // 0x808001C4: addiu       $v0, $sp, 0x5C
        ctx->r2 = ADD32(ctx->r29, 0X5C);
            goto L_808001DC;
    }
    goto skip_0;
    // 0x808001C4: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
    skip_0:
    // 0x808001C8: b           L_8080034C
    // 0x808001CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8080034C;
    // 0x808001CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_808001D0:
    // 0x808001D0: jal         0x80000814
    // 0x808001D4: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    func_80800814_susubgame(rdram, ctx);
        goto after_1;
    // 0x808001D4: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    after_1:
L_808001D8:
    // 0x808001D8: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
L_808001DC:
    // 0x808001DC: or          $v1, $s7, $zero
    ctx->r3 = ctx->r23 | 0;
    // 0x808001E0: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x808001E4: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x808001E8: lwc1        $f16, 0x38($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X38);
    // 0x808001EC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x808001F0: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x808001F4: mul.s       $f20, $f18, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x808001F8: beql        $at, $zero, L_80800224
    if (ctx->r1 == 0) {
        // 0x808001FC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80800224;
    }
    goto skip_1;
    // 0x808001FC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_1:
L_80800200:
    // 0x80800200: swc1        $f20, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f20.u32l;
    // 0x80800204: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80800208: lwc1        $f16, 0x38($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X38);
    // 0x8080020C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80800210: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80800214: mul.s       $f20, $f18, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80800218: bne         $at, $zero, L_80800200
    if (ctx->r1 != 0) {
        // 0x8080021C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80800200;
    }
    // 0x8080021C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80800220: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_80800224:
    // 0x80800224: swc1        $f20, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f20.u32l;
    // 0x80800228: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8080022C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80800230: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
    // 0x80800234: addiu       $s5, $sp, 0x50
    ctx->r21 = ADD32(ctx->r29, 0X50);
L_80800238:
    // 0x80800238: jal         0x800008DC
    // 0x8080023C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_808008DC_susubgame(rdram, ctx);
        goto after_2;
    // 0x8080023C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80800240: beq         $v0, $zero, L_808002F8
    if (ctx->r2 == 0) {
        // 0x80800244: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808002F8;
    }
    // 0x80800244: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800248: jal         0x800A93E4
    // 0x8080024C: addiu       $s2, $s4, 0x4
    ctx->r18 = ADD32(ctx->r20, 0X4);
    func_800A93E4(rdram, ctx);
        goto after_3;
    // 0x8080024C: addiu       $s2, $s4, 0x4
    ctx->r18 = ADD32(ctx->r20, 0X4);
    after_3:
    // 0x80800250: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80800254: jal         0x800A93E4
    // 0x80800258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A93E4(rdram, ctx);
        goto after_4;
    // 0x80800258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8080025C: jal         0x80110024
    // 0x80800260: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_5;
    // 0x80800260: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x80800264: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800268: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080026C: jal         0x80089520
    // 0x80800270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _ncpod_entrypoint_12(rdram, ctx);
        goto after_6;
    // 0x80800270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080027C: jal         0x80089570
    // 0x80800280: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    _ncpod_entrypoint_22(rdram, ctx);
        goto after_7;
    // 0x80800280: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_7:
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080028C: jal         0x80089578
    // 0x80800290: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    _ncpod_entrypoint_23(rdram, ctx);
        goto after_8;
    // 0x80800290: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_8:
    // 0x80800294: lh          $t8, 0x2($s7)
    ctx->r24 = MEM_H(ctx->r23, 0X2);
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080029C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808002A0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x808002A4: beq         $t9, $zero, L_808002E4
    if (ctx->r25 == 0) {
        // 0x808002A8: nop
    
            goto L_808002E4;
    }
    // 0x808002A8: nop

    // 0x808002AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x808002B0: jal         0x8010CD50
    // 0x808002B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8010CD50(rdram, ctx);
        goto after_9;
    // 0x808002B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x808002B8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x808002BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808002C0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x808002C4: jal         0x800EFA4C
    // 0x808002C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800EFA4C(rdram, ctx);
        goto after_10;
    // 0x808002C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_10:
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808002D4: jal         0x80089580
    // 0x808002D8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    _ncpod_entrypoint_24(rdram, ctx);
        goto after_11;
    // 0x808002D8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_11:
    // 0x808002DC: b           L_808002F0
    // 0x808002E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_808002F0;
    // 0x808002E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_808002E4:
    // 0x808002E4: jal         0x80089580
    // 0x808002E8: addiu       $a2, $s4, 0x44
    ctx->r6 = ADD32(ctx->r20, 0X44);
    _ncpod_entrypoint_24(rdram, ctx);
        goto after_12;
    // 0x808002E8: addiu       $a2, $s4, 0x44
    ctx->r6 = ADD32(ctx->r20, 0X44);
    after_12:
    // 0x808002EC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_808002F0:
    // 0x808002F0: jal         0x8000078C
    // 0x808002F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8080078C_susubgame(rdram, ctx);
        goto after_13;
    // 0x808002F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_13:
L_808002F8:
    // 0x808002F8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x808002FC: bne         $s1, $s6, L_80800238
    if (ctx->r17 != ctx->r22) {
        // 0x80800300: nop
    
            goto L_80800238;
    }
    // 0x80800300: nop

    // 0x80800304: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80800308: sb          $t0, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r8;
L_8080030C:
    // 0x8080030C: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
    // 0x80800310: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80800314:
    // 0x80800314: jal         0x800008DC
    // 0x80800318: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_808008DC_susubgame(rdram, ctx);
        goto after_14;
    // 0x80800318: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x8080031C: beql        $v0, $zero, L_80800340
    if (ctx->r2 == 0) {
        // 0x80800320: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80800340;
    }
    goto skip_2;
    // 0x80800320: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x80800324: jal         0x800A93E4
    // 0x80800328: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A93E4(rdram, ctx);
        goto after_15;
    // 0x80800328: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x8080032C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800330: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80800334: jal         0x80089568
    // 0x80800338: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    _ncpod_entrypoint_21(rdram, ctx);
        goto after_16;
    // 0x80800338: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    after_16:
    // 0x8080033C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80800340:
    // 0x80800340: bne         $s1, $s6, L_80800314
    if (ctx->r17 != ctx->r22) {
        // 0x80800344: nop
    
            goto L_80800314;
    }
    // 0x80800344: nop

    // 0x80800348: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8080034C:
    // 0x8080034C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80800350: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800354: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800358: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8080035C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80800360: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80800364: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80800368: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8080036C: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x80800370: jr          $ra
    // 0x80800374: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80800374: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void susubgame_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080037C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80800380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800384: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800388: bne         $t6, $zero, L_80800398
    if (ctx->r14 != 0) {
        // 0x8080038C: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_80800398;
    }
    // 0x8080038C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80800390: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80800394: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_80800398:
    // 0x80800398: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8080039C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808003A0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x808003A4: beq         $v0, $zero, L_808003CC
    if (ctx->r2 == 0) {
        // 0x808003A8: nop
    
            goto L_808003CC;
    }
    // 0x808003A8: nop

    // 0x808003AC: beq         $v0, $at, L_808003E0
    if (ctx->r2 == ctx->r1) {
        // 0x808003B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808003E0;
    }
    // 0x808003B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808003B4: beq         $v0, $at, L_808003D8
    if (ctx->r2 == ctx->r1) {
        // 0x808003B8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808003D8;
    }
    // 0x808003B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808003BC: beql        $v0, $at, L_808003DC
    if (ctx->r2 == ctx->r1) {
        // 0x808003C0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_808003DC;
    }
    goto skip_0;
    // 0x808003C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    skip_0:
    // 0x808003C4: b           L_80800410
    // 0x808003C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800410;
    // 0x808003C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003CC:
    // 0x808003CC: jal         0x80000814
    // 0x808003D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800814_susubgame(rdram, ctx);
        goto after_0;
    // 0x808003D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808003D4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_808003D8:
    // 0x808003D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_808003DC:
    // 0x808003DC: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
L_808003E0:
    // 0x808003E0: jal         0x800F54E4
    // 0x808003E4: nop

    func_800F54E4(rdram, ctx);
        goto after_1;
    // 0x808003E4: nop

    after_1:
    // 0x808003E8: jal         0x800A93E4
    // 0x808003EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800A93E4(rdram, ctx);
        goto after_2;
    // 0x808003EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x808003F0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x808003F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808003F8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x808003FC: ori         $t9, $a3, 0x800
    ctx->r25 = ctx->r7 | 0X800;
    // 0x80800400: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x80800404: jal         0x80089560
    // 0x80800408: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    _ncpod_entrypoint_20(rdram, ctx);
        goto after_3;
    // 0x80800408: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x8080040C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800410:
    // 0x80800410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800414: jr          $ra
    // 0x80800418: nop

    return;
    // 0x80800418: nop

;}
RECOMP_FUNC void susubgame_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080041C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800420: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800424: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80800428: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8080042C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80800430: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800434: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800438: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x8080043C: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80800440: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80800444: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800448: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8080044C: bne         $s4, $zero, L_80800458
    if (ctx->r20 != 0) {
        // 0x80800450: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_80800458;
    }
    // 0x80800450: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800454: lw          $s4, 0x0($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X0);
L_80800458:
    // 0x80800458: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8080045C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800460: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800464: beq         $v0, $zero, L_8080048C
    if (ctx->r2 == 0) {
        // 0x80800468: nop
    
            goto L_8080048C;
    }
    // 0x80800468: nop

    // 0x8080046C: beq         $v0, $at, L_8080049C
    if (ctx->r2 == ctx->r1) {
        // 0x80800470: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080049C;
    }
    // 0x80800470: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800474: beq         $v0, $at, L_80800494
    if (ctx->r2 == ctx->r1) {
        // 0x80800478: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800494;
    }
    // 0x80800478: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080047C: beql        $v0, $at, L_80800498
    if (ctx->r2 == ctx->r1) {
        // 0x80800480: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800498;
    }
    goto skip_0;
    // 0x80800480: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_0:
    // 0x80800484: b           L_808004E8
    // 0x80800488: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_808004E8;
    // 0x80800488: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8080048C:
    // 0x8080048C: jal         0x80000814
    // 0x80800490: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_80800814_susubgame(rdram, ctx);
        goto after_0;
    // 0x80800490: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_0:
L_80800494:
    // 0x80800494: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_80800498:
    // 0x80800498: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_8080049C:
    // 0x8080049C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808004A0: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_808004A4:
    // 0x808004A4: jal         0x800008DC
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808008DC_susubgame(rdram, ctx);
        goto after_1;
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808004AC: beq         $v0, $zero, L_808004D8
    if (ctx->r2 == 0) {
        // 0x808004B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004D8;
    }
    // 0x808004B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B4: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x808004B8: addu        $s1, $s6, $t7
    ctx->r17 = ADD32(ctx->r22, ctx->r15);
    // 0x808004BC: jal         0x800A93E4
    // 0x808004C0: ori         $s2, $s5, 0x800
    ctx->r18 = ctx->r21 | 0X800;
    func_800A93E4(rdram, ctx);
        goto after_2;
    // 0x808004C0: ori         $s2, $s5, 0x800
    ctx->r18 = ctx->r21 | 0X800;
    after_2:
    // 0x808004C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808004C8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x808004CC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x808004D0: jal         0x80089560
    // 0x808004D4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    _ncpod_entrypoint_20(rdram, ctx);
        goto after_3;
    // 0x808004D4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_3:
L_808004D8:
    // 0x808004D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x808004DC: bne         $s0, $s3, L_808004A4
    if (ctx->r16 != ctx->r19) {
        // 0x808004E0: nop
    
            goto L_808004A4;
    }
    // 0x808004E0: nop

    // 0x808004E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_808004E8:
    // 0x808004E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004EC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808004F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808004F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x808004F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x808004FC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80800500: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80800504: jr          $ra
    // 0x80800508: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800508: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void susubgame_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080050C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800510: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800514: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80800518: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8080051C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80800520: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800524: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800528: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x8080052C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80800530: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800534: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800538: bne         $s3, $zero, L_80800544
    if (ctx->r19 != 0) {
        // 0x8080053C: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_80800544;
    }
    // 0x8080053C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800540: lw          $s3, 0x0($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X0);
L_80800544:
    // 0x80800544: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80800548: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080054C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800550: beq         $v0, $zero, L_80800578
    if (ctx->r2 == 0) {
        // 0x80800554: nop
    
            goto L_80800578;
    }
    // 0x80800554: nop

    // 0x80800558: beq         $v0, $at, L_80800580
    if (ctx->r2 == ctx->r1) {
        // 0x8080055C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800580;
    }
    // 0x8080055C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800560: beq         $v0, $at, L_80800580
    if (ctx->r2 == ctx->r1) {
        // 0x80800564: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800580;
    }
    // 0x80800564: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800568: beql        $v0, $at, L_8080058C
    if (ctx->r2 == ctx->r1) {
        // 0x8080056C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8080058C;
    }
    goto skip_0;
    // 0x8080056C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_0:
    // 0x80800570: b           L_808005CC
    // 0x80800574: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808005CC;
    // 0x80800574: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800578:
    // 0x80800578: jal         0x80000814
    // 0x8080057C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_80800814_susubgame(rdram, ctx);
        goto after_0;
    // 0x8080057C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
L_80800580:
    // 0x80800580: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800584: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x80800588: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8080058C:
    // 0x8080058C: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_80800590:
    // 0x80800590: jal         0x800008DC
    // 0x80800594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808008DC_susubgame(rdram, ctx);
        goto after_1;
    // 0x80800594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800598: beq         $v0, $zero, L_808005BC
    if (ctx->r2 == 0) {
        // 0x8080059C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005BC;
    }
    // 0x8080059C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A0: jal         0x800A93E4
    // 0x808005A4: ori         $s1, $s4, 0x800
    ctx->r17 = ctx->r20 | 0X800;
    func_800A93E4(rdram, ctx);
        goto after_2;
    // 0x808005A4: ori         $s1, $s4, 0x800
    ctx->r17 = ctx->r20 | 0X800;
    after_2:
    // 0x808005A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808005AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x808005B0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x808005B4: jal         0x800895C0
    // 0x808005B8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    _ncpod_entrypoint_32(rdram, ctx);
        goto after_3;
    // 0x808005B8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_3:
L_808005BC:
    // 0x808005BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x808005C0: bne         $s0, $s2, L_80800590
    if (ctx->r16 != ctx->r18) {
        // 0x808005C4: nop
    
            goto L_80800590;
    }
    // 0x808005C4: nop

    // 0x808005C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808005CC:
    // 0x808005CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808005D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808005D4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808005D8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808005DC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x808005E0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x808005E4: jr          $ra
    // 0x808005E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808005E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void susubgame_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808005F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808005F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808005F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800600: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
L_80800604:
    // 0x80800604: jal         0x800008DC
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808008DC_susubgame(rdram, ctx);
        goto after_0;
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8080060C: beql        $v0, $zero, L_80800630
    if (ctx->r2 == 0) {
        // 0x80800610: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80800630;
    }
    goto skip_0;
    // 0x80800610: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80800614: jal         0x800F6F00
    // 0x80800618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6F00(rdram, ctx);
        goto after_1;
    // 0x80800618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080061C: bnel        $v0, $zero, L_80800630
    if (ctx->r2 != 0) {
        // 0x80800620: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80800630;
    }
    goto skip_1;
    // 0x80800620: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x80800624: b           L_8080063C
    // 0x80800628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080063C;
    // 0x80800628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080062C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80800630:
    // 0x80800630: bne         $s0, $s1, L_80800604
    if (ctx->r16 != ctx->r17) {
        // 0x80800634: nop
    
            goto L_80800604;
    }
    // 0x80800634: nop

    // 0x80800638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080063C:
    // 0x8080063C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800640: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800644: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800648: jr          $ra
    // 0x8080064C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080064C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void susubgame_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800650: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800654: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800658: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8080065C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80800660: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800664: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80800668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080066C: jal         0x800DA9E4
    // 0x80800670: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800DA9E4(rdram, ctx);
        goto after_0;
    // 0x80800670: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x80800674: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800678: jal         0x800F54E4
    // 0x8080067C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    func_800F54E4(rdram, ctx);
        goto after_1;
    // 0x8080067C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_1:
    // 0x80800680: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800684: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80800688: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8080068C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80800690: jal         0x8008A0C0
    // 0x80800694: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    _subaddiemarker_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800694: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800698: bne         $v0, $zero, L_808006A8
    if (ctx->r2 != 0) {
        // 0x8080069C: lw          $t7, 0x34($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X34);
            goto L_808006A8;
    }
    // 0x8080069C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x808006A0: b           L_80800748
    // 0x808006A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800748;
    // 0x808006A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006A8:
    // 0x808006A8: beq         $t7, $zero, L_808006FC
    if (ctx->r15 == 0) {
        // 0x808006AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006FC;
    }
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B0: jal         0x800F608C
    // 0x808006B4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800F608C(rdram, ctx);
        goto after_3;
    // 0x808006B4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_3:
    // 0x808006B8: jal         0x800F497C
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F497C(rdram, ctx);
        goto after_4;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C4: jal         0x800F49A8
    // 0x808006C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800F49A8(rdram, ctx);
        goto after_5;
    // 0x808006C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808006CC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x808006D0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x808006D4: addiu       $a1, $a1, -0x2A24
    ctx->r5 = ADD32(ctx->r5, -0X2A24);
    // 0x808006D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006DC: jal         0x800F49D4
    // 0x808006E0: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    func_800F49D4(rdram, ctx);
        goto after_6;
    // 0x808006E0: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    after_6:
    // 0x808006E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x808006EC: jal         0x800F4A58
    // 0x808006F0: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    func_800F4A58(rdram, ctx);
        goto after_7;
    // 0x808006F0: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_7:
    // 0x808006F4: b           L_80800748
    // 0x808006F8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_80800748;
    // 0x808006F8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_808006FC:
    // 0x808006FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800700: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800704: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80800708: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080070C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800710: jal         0x800EFA4C
    // 0x80800714: nop

    func_800EFA4C(rdram, ctx);
        goto after_8;
    // 0x80800714: nop

    after_8:
    // 0x80800718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080071C: jal         0x800F608C
    // 0x80800720: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800F608C(rdram, ctx);
        goto after_9;
    // 0x80800720: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_9:
    // 0x80800724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800728: jal         0x800F8294
    // 0x8080072C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800F8294(rdram, ctx);
        goto after_10;
    // 0x8080072C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_10:
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800734: jal         0x800F832C
    // 0x80800738: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800F832C(rdram, ctx);
        goto after_11;
    // 0x80800738: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_11:
    // 0x8080073C: jal         0x800F497C
    // 0x80800740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F497C(rdram, ctx);
        goto after_12;
    // 0x80800740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800744: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_80800748:
    // 0x80800748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080074C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800750: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80800754: jr          $ra
    // 0x80800758: nop

    return;
    // 0x80800758: nop

;}
RECOMP_FUNC void susubgame_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080075C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800764: jal         0x800CEAA8
    // 0x80800768: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800CEAA8(rdram, ctx);
        goto after_0;
    // 0x80800768: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080076C: beq         $v0, $zero, L_8080077C
    if (ctx->r2 == 0) {
        // 0x80800770: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080077C;
    }
    // 0x80800770: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800774: jal         0x800CE88C
    // 0x80800778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800CE88C(rdram, ctx);
        goto after_1;
    // 0x80800778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8080077C:
    // 0x8080077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800784: jr          $ra
    // 0x80800788: nop

    return;
    // 0x80800788: nop

;}
RECOMP_FUNC void func_8080078C_susubgame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080078C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800794: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80800798: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8080079C: jal         0x800A93E4
    // 0x808007A0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A93E4(rdram, ctx);
        goto after_0;
    // 0x808007A0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x808007A4: jal         0x80110024
    // 0x808007A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x808007A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808007AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x808007B0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x808007B4: jal         0x800F5A00
    // 0x808007B8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800F5A00(rdram, ctx);
        goto after_2;
    // 0x808007B8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x808007BC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x808007C0: jal         0x800F5DC8
    // 0x808007C4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800F5DC8(rdram, ctx);
        goto after_3;
    // 0x808007C4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x808007C8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x808007CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808007D0: jal         0x80089578
    // 0x808007D4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    _ncpod_entrypoint_23(rdram, ctx);
        goto after_4;
    // 0x808007D4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x808007D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x808007DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808007E0: jal         0x80089580
    // 0x808007E4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    _ncpod_entrypoint_24(rdram, ctx);
        goto after_5;
    // 0x808007E4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x808007E8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x808007EC: jal         0x800880B0
    // 0x808007F0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    _gcdialogcamera_entrypoint_7(rdram, ctx);
        goto after_6;
    // 0x808007F0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_6:
    // 0x808007F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x808007F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808007FC: jal         0x80089570
    // 0x80800800: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    _ncpod_entrypoint_22(rdram, ctx);
        goto after_7;
    // 0x80800800: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x80800804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800808: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8080080C: jr          $ra
    // 0x80800810: nop

    return;
    // 0x80800810: nop

;}
RECOMP_FUNC void func_80800814_susubgame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800814: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800818: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8080081C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80800820: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800828: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8080082C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80800830: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80800834: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x80800838: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8080083C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800840: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800844: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
L_80800848:
    // 0x80800848: jal         0x800008DC
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808008DC_susubgame(rdram, ctx);
        goto after_0;
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800850: beq         $v0, $zero, L_80800874
    if (ctx->r2 == 0) {
        // 0x80800854: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800874;
    }
    // 0x80800854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800858: jal         0x800A93E4
    // 0x8080085C: ori         $s1, $s2, 0x800
    ctx->r17 = ctx->r18 | 0X800;
    func_800A93E4(rdram, ctx);
        goto after_1;
    // 0x8080085C: ori         $s1, $s2, 0x800
    ctx->r17 = ctx->r18 | 0X800;
    after_1:
    // 0x80800860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800864: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x80800868: lh          $a2, 0x4($s5)
    ctx->r6 = MEM_H(ctx->r21, 0X4);
    // 0x8080086C: jal         0x80089540
    // 0x80800870: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    _ncpod_entrypoint_16(rdram, ctx);
        goto after_2;
    // 0x80800870: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_2:
L_80800874:
    // 0x80800874: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800878: bne         $s0, $s4, L_80800848
    if (ctx->r16 != ctx->r20) {
        // 0x8080087C: nop
    
            goto L_80800848;
    }
    // 0x8080087C: nop

    // 0x80800880: andi        $t6, $s2, 0x800
    ctx->r14 = ctx->r18 & 0X800;
    // 0x80800884: beq         $t6, $zero, L_80800894
    if (ctx->r14 == 0) {
        // 0x80800888: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80800894;
    }
    // 0x80800888: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8080088C: b           L_80800898
    // 0x80800890: sb          $zero, 0x1($s5)
    MEM_B(0X1, ctx->r21) = 0;
        goto L_80800898;
    // 0x80800890: sb          $zero, 0x1($s5)
    MEM_B(0X1, ctx->r21) = 0;
L_80800894:
    // 0x80800894: sb          $t7, 0x1($s5)
    MEM_B(0X1, ctx->r21) = ctx->r15;
L_80800898:
    // 0x80800898: lbu         $t8, 0x1($s5)
    ctx->r24 = MEM_BU(ctx->r21, 0X1);
    // 0x8080089C: beql        $t8, $zero, L_808008BC
    if (ctx->r24 == 0) {
        // 0x808008A0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_808008BC;
    }
    goto skip_0;
    // 0x808008A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x808008A4: jal         0x800EA05C
    // 0x808008A8: nop

    func_800EA05C(rdram, ctx);
        goto after_3;
    // 0x808008A8: nop

    after_3:
    // 0x808008AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808008B0: jal         0x800887D8
    // 0x808008B4: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    _glcutDll_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x808008B4: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    after_4:
    // 0x808008B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808008BC:
    // 0x808008BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808008C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808008C4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808008C8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808008CC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x808008D0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x808008D4: jr          $ra
    // 0x808008D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808008D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_808008DC_susubgame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008E4: jal         0x800D3948
    // 0x808008E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D3948(rdram, ctx);
        goto after_0;
    // 0x808008E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808008EC: beq         $v0, $zero, L_8080091C
    if (ctx->r2 == 0) {
        // 0x808008F0: nop
    
            goto L_8080091C;
    }
    // 0x808008F0: nop

    // 0x808008F4: jal         0x800F6438
    // 0x808008F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F6438(rdram, ctx);
        goto after_1;
    // 0x808008F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808008FC: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800900: beq         $t6, $zero, L_80800930
    if (ctx->r14 == 0) {
        // 0x80800904: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80800930;
    }
    // 0x80800904: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80800908: jal         0x800A9420
    // 0x8080090C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A9420(rdram, ctx);
        goto after_2;
    // 0x8080090C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800910: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800914: b           L_80800930
    // 0x80800918: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_80800930;
    // 0x80800918: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8080091C:
    // 0x8080091C: jal         0x800F54E4
    // 0x80800920: nop

    func_800F54E4(rdram, ctx);
        goto after_3;
    // 0x80800920: nop

    after_3:
    // 0x80800924: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80800928: xor         $v0, $v0, $t8
    ctx->r2 = ctx->r2 ^ ctx->r24;
    // 0x8080092C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_80800930:
    // 0x80800930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800938: jr          $ra
    // 0x8080093C: nop

    return;
    // 0x8080093C: nop

;}
RECOMP_FUNC void susubgame_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800940: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80800944: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x80800948: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8080094C: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x80800950: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80800954: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    // 0x80800958: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8080095C: jr          $ra
    // 0x80800960: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x80800960: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x80800964: nop

    // 0x80800968: nop

    // 0x8080096C: nop

;}
RECOMP_FUNC void sutempleboss_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8080000C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80800010: jal         0x800F54E4
    // 0x80800014: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800018: jal         0x800F4BE4
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F4BE4(rdram, ctx);
        goto after_1;
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800020: bne         $v0, $zero, L_80800038
    if (ctx->r2 != 0) {
        // 0x80800024: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_80800038;
    }
    // 0x80800024: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80800028: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8080002C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80800030: b           L_808001C4
    // 0x80800034: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
        goto L_808001C4;
    // 0x80800034: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
L_80800038:
    // 0x80800038: jal         0x800EA05C
    // 0x8080003C: nop

    func_800EA05C(rdram, ctx);
        goto after_2;
    // 0x8080003C: nop

    after_2:
    // 0x80800040: addiu       $at, $zero, 0x177
    ctx->r1 = ADD32(0, 0X177);
    // 0x80800044: beq         $v0, $at, L_8080006C
    if (ctx->r2 == ctx->r1) {
        // 0x80800048: addiu       $v1, $zero, 0x178
        ctx->r3 = ADD32(0, 0X178);
            goto L_8080006C;
    }
    // 0x80800048: addiu       $v1, $zero, 0x178
    ctx->r3 = ADD32(0, 0X178);
    // 0x8080004C: addiu       $v1, $zero, 0x178
    ctx->r3 = ADD32(0, 0X178);
    // 0x80800050: beq         $v0, $v1, L_808000D0
    if (ctx->r2 == ctx->r3) {
        // 0x80800054: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_808000D0;
    }
    // 0x80800054: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80800058: addiu       $at, $zero, 0x17A
    ctx->r1 = ADD32(0, 0X17A);
    // 0x8080005C: beq         $v0, $at, L_808000A0
    if (ctx->r2 == ctx->r1) {
        // 0x80800060: lw          $t3, 0x4C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X4C);
            goto L_808000A0;
    }
    // 0x80800060: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80800064: b           L_808001C8
    // 0x80800068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808001C8;
    // 0x80800068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080006C:
    // 0x8080006C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80800070: addiu       $a0, $zero, 0x9D2
    ctx->r4 = ADD32(0, 0X9D2);
    // 0x80800074: jal         0x800DA298
    // 0x80800078: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
    func_800DA298(rdram, ctx);
        goto after_3;
    // 0x80800078: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
    after_3:
    // 0x8080007C: beq         $v0, $zero, L_80800094
    if (ctx->r2 == 0) {
        // 0x80800080: lw          $t2, 0x50($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X50);
            goto L_80800094;
    }
    // 0x80800080: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80800084: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80800088: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8080008C: b           L_808001C4
    // 0x80800090: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
        goto L_808001C4;
    // 0x80800090: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
L_80800094:
    // 0x80800094: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80800098: b           L_808001C4
    // 0x8080009C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
        goto L_808001C4;
    // 0x8080009C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_808000A0:
    // 0x808000A0: sw          $v1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r3;
    // 0x808000A4: jal         0x800DA298
    // 0x808000A8: addiu       $a0, $zero, 0x9D2
    ctx->r4 = ADD32(0, 0X9D2);
    func_800DA298(rdram, ctx);
        goto after_4;
    // 0x808000A8: addiu       $a0, $zero, 0x9D2
    ctx->r4 = ADD32(0, 0X9D2);
    after_4:
    // 0x808000AC: beq         $v0, $zero, L_808000C4
    if (ctx->r2 == 0) {
        // 0x808000B0: lw          $t7, 0x50($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X50);
            goto L_808000C4;
    }
    // 0x808000B0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x808000B4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x808000B8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x808000BC: b           L_808001C4
    // 0x808000C0: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
        goto L_808001C4;
    // 0x808000C0: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
L_808000C4:
    // 0x808000C4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808000C8: b           L_808001C4
    // 0x808000CC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
        goto L_808001C4;
    // 0x808000CC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_808000D0:
    // 0x808000D0: jal         0x800EE88C
    // 0x808000D4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_800EE88C(rdram, ctx);
        goto after_5;
    // 0x808000D4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_5:
    // 0x808000D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x808000DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000E0: jal         0x800882F0
    // 0x808000E4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    _gccubesearch_entrypoint_15(rdram, ctx);
        goto after_6;
    // 0x808000E4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x808000E8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x808000EC: jal         0x800EE88C
    // 0x808000F0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800EE88C(rdram, ctx);
        goto after_7;
    // 0x808000F0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_7:
    // 0x808000F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x808000F8: jal         0x800EEB40
    // 0x808000FC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800EEB40(rdram, ctx);
        goto after_8;
    // 0x808000FC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_8:
    // 0x80800100: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80800104: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80800108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080010C: jal         0x800882F0
    // 0x80800110: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    _gccubesearch_entrypoint_15(rdram, ctx);
        goto after_9;
    // 0x80800110: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_9:
    // 0x80800114: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800118: jal         0x800EE88C
    // 0x8080011C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800EE88C(rdram, ctx);
        goto after_10;
    // 0x8080011C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_10:
    // 0x80800120: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80800124: jal         0x800EEB40
    // 0x80800128: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800EEB40(rdram, ctx);
        goto after_11;
    // 0x80800128: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_11:
    // 0x8080012C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800130: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800134: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80800138: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8080013C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800140: bc1f        L_80800150
    if (!c1cs) {
        // 0x80800144: nop
    
            goto L_80800150;
    }
    // 0x80800144: nop

    // 0x80800148: b           L_80800150
    // 0x8080014C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_80800150;
    // 0x8080014C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80800150:
    // 0x80800150: jal         0x800D0B68
    // 0x80800154: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_800D0B68(rdram, ctx);
        goto after_12;
    // 0x80800154: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_12:
    // 0x80800158: beq         $v0, $zero, L_80800184
    if (ctx->r2 == 0) {
        // 0x8080015C: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_80800184;
    }
    // 0x8080015C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80800160: addiu       $a0, $zero, 0x9D2
    ctx->r4 = ADD32(0, 0X9D2);
    // 0x80800164: jal         0x800DA298
    // 0x80800168: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_800DA298(rdram, ctx);
        goto after_13;
    // 0x80800168: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_13:
    // 0x8080016C: beq         $v0, $zero, L_8080017C
    if (ctx->r2 == 0) {
        // 0x80800170: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_8080017C;
    }
    // 0x80800170: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80800174: b           L_80800198
    // 0x80800178: xori        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 ^ 0X1;
        goto L_80800198;
    // 0x80800178: xori        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 ^ 0X1;
L_8080017C:
    // 0x8080017C: b           L_80800198
    // 0x80800180: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
        goto L_80800198;
    // 0x80800180: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_80800184:
    // 0x80800184: addiu       $a0, $zero, 0x9D2
    ctx->r4 = ADD32(0, 0X9D2);
    // 0x80800188: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8080018C: jal         0x800DA3B8
    // 0x80800190: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    func_800DA3B8(rdram, ctx);
        goto after_14;
    // 0x80800190: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    after_14:
    // 0x80800194: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80800198:
    // 0x80800198: beq         $v0, $zero, L_808001B0
    if (ctx->r2 == 0) {
        // 0x8080019C: lw          $t1, 0x4C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X4C);
            goto L_808001B0;
    }
    // 0x8080019C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x808001A0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x808001A4: addiu       $t8, $zero, 0x17A
    ctx->r24 = ADD32(0, 0X17A);
    // 0x808001A8: b           L_808001B8
    // 0x808001AC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
        goto L_808001B8;
    // 0x808001AC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_808001B0:
    // 0x808001B0: addiu       $t0, $zero, 0x177
    ctx->r8 = ADD32(0, 0X177);
    // 0x808001B4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_808001B8:
    // 0x808001B8: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x808001BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x808001C0: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
L_808001C4:
    // 0x808001C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001C8:
    // 0x808001C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808001CC: jr          $ra
    // 0x808001D0: nop

    return;
    // 0x808001D0: nop

    // 0x808001D4: nop

    // 0x808001D8: nop

    // 0x808001DC: nop

;}
RECOMP_FUNC void func_80800000_trangler(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800004: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800010: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80800014: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80800018: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8080001C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80800020: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80800024: jal         0x8010E810
    // 0x80800028: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    func_8010E810(rdram, ctx);
        goto after_0;
    // 0x80800028: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080002C: bgez        $s0, L_8080003C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80800030: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8080003C;
    }
    // 0x80800030: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80800034: b           L_80800040
    // 0x80800038: negu        $v0, $s0
    ctx->r2 = SUB32(0, ctx->r16);
        goto L_80800040;
    // 0x80800038: negu        $v0, $s0
    ctx->r2 = SUB32(0, ctx->r16);
L_8080003C:
    // 0x8080003C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80800040:
    // 0x80800040: lw          $t6, 0x14($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X14);
    // 0x80800044: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80800048: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x8080004C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80800050: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80800054: sw          $t8, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r24;
    // 0x80800058: jal         0x800DF8B4
    // 0x8080005C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800DF8B4(rdram, ctx);
        goto after_1;
    // 0x8080005C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x80800060: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
    // 0x80800064: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80800068: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080006C: jal         0x800B237C
    // 0x80800070: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800B237C(rdram, ctx);
        goto after_2;
    // 0x80800070: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x80800074: jal         0x800DF8C4
    // 0x80800078: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800DF8C4(rdram, ctx);
        goto after_3;
    // 0x80800078: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_3:
    // 0x8080007C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80800080: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800084: jal         0x80019224
    // 0x80800088: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019224(rdram, ctx);
        goto after_4;
    // 0x80800088: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8080008C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800090: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80800094: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80800098: jal         0x800DF900
    // 0x8080009C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    func_800DF900(rdram, ctx);
        goto after_5;
    // 0x8080009C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x808000A0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x808000A4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x808000A8: beql        $a0, $zero, L_808000D0
    if (ctx->r4 == 0) {
        // 0x808000AC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_808000D0;
    }
    goto skip_0;
    // 0x808000AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_0:
    // 0x808000B0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x808000B4: jal         0x8010E924
    // 0x808000B8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_8010E924(rdram, ctx);
        goto after_6;
    // 0x808000B8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_6:
    // 0x808000BC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x808000C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808000C4: nop

    // 0x808000C8: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
    // 0x808000CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_808000D0:
    // 0x808000D0: jal         0x800C8760
    // 0x808000D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C8760(rdram, ctx);
        goto after_7;
    // 0x808000D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808000D8: beq         $v0, $zero, L_8080010C
    if (ctx->r2 == 0) {
        // 0x808000DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8080010C;
    }
    // 0x808000DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_808000E0:
    // 0x808000E0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x808000EC: jal         0x8010E924
    // 0x808000F0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_8010E924(rdram, ctx);
        goto after_8;
    // 0x808000F0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_8:
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000FC: jal         0x800C878C
    // 0x80800100: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800C878C(rdram, ctx);
        goto after_9;
    // 0x80800100: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80800104: bne         $v0, $zero, L_808000E0
    if (ctx->r2 != 0) {
        // 0x80800108: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_808000E0;
    }
    // 0x80800108: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8080010C:
    // 0x8080010C: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x80800110: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80800114: subu        $t0, $t9, $s2
    ctx->r8 = SUB32(ctx->r25, ctx->r18);
    // 0x80800118: addiu       $t1, $t0, -0x1C
    ctx->r9 = ADD32(ctx->r8, -0X1C);
    // 0x8080011C: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80800120: mflo        $t2
    ctx->r10 = lo;
    // 0x80800124: sb          $t2, 0x11($s2)
    MEM_B(0X11, ctx->r18) = ctx->r10;
    // 0x80800128: jal         0x80018DAC
    // 0x8080012C: nop

    func_80018DAC(rdram, ctx);
        goto after_10;
    // 0x8080012C: nop

    after_10:
    // 0x80800130: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800134: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80800138: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080013C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80800140: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80800144: jr          $ra
    // 0x80800148: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80800148: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void trangler_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080014C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800150: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800154: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800158: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080015C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80800160: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80800164: jal         0x8010E810
    // 0x80800168: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_8010E810(rdram, ctx);
        goto after_0;
    // 0x80800168: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080016C: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x80800170: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80800174: jal         0x800DF8D4
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8D4(rdram, ctx);
        goto after_1;
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080017C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80800180: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800188: addiu       $t6, $v1, 0x1C
    ctx->r14 = ADD32(ctx->r3, 0X1C);
    // 0x8080018C: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80800190: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80800194: sb          $v0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r2;
    // 0x80800198: sw          $t6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r14;
    // 0x8080019C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x808001A0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x808001A4: jal         0x80000000
    // 0x808001A8: andi        $a2, $t0, 0xFFFF
    ctx->r6 = ctx->r8 & 0XFFFF;
    func_80800000_trangler(rdram, ctx);
        goto after_2;
    // 0x808001A8: andi        $a2, $t0, 0xFFFF
    ctx->r6 = ctx->r8 & 0XFFFF;
    after_2:
    // 0x808001AC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x808001B0: jal         0x800C87B8
    // 0x808001B4: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    func_800C87B8(rdram, ctx);
        goto after_3;
    // 0x808001B4: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    after_3:
    // 0x808001B8: jal         0x800DF8B4
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8B4(rdram, ctx);
        goto after_4;
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808001C0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808001C4: jal         0x800DF8CC
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8CC(rdram, ctx);
        goto after_5;
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808001CC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808001D0: jal         0x800DF8BC
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800DF8BC(rdram, ctx);
        goto after_6;
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808001DC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808001E0: jal         0x8010EBE4
    // 0x808001E4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_8010EBE4(rdram, ctx);
        goto after_7;
    // 0x808001E4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_7:
    // 0x808001E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808001F4: jr          $ra
    // 0x808001F8: nop

    return;
    // 0x808001F8: nop

    // 0x808001FC: nop

;}
RECOMP_FUNC void vpflicker_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800010: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x80800014: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80800018: jal         0x8001ACCC
    // 0x8080001C: addiu       $a0, $t7, 0x8
    ctx->r4 = ADD32(ctx->r15, 0X8);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8080001C: addiu       $a0, $t7, 0x8
    ctx->r4 = ADD32(ctx->r15, 0X8);
    after_0:
    // 0x80800020: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80800028: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080002C: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x80800030: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800034: addiu       $a0, $a2, 0x14
    ctx->r4 = ADD32(ctx->r6, 0X14);
    // 0x80800038: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8080003C: addu        $a1, $t0, $a2
    ctx->r5 = ADD32(ctx->r8, ctx->r6);
    // 0x80800040: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80800044: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x80800048: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8080004C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80800050: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80800054: beq         $at, $zero, L_8080009C
    if (ctx->r1 == 0) {
        // 0x80800058: swc1        $f4, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
            goto L_8080009C;
    }
    // 0x80800058: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8080005C: lhu         $t1, 0x2($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2);
L_80800060:
    // 0x80800060: beql        $t1, $zero, L_80800090
    if (ctx->r9 == 0) {
        // 0x80800064: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80800090;
    }
    goto skip_0;
    // 0x80800064: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x80800068: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8080006C: subu        $t2, $v1, $a0
    ctx->r10 = SUB32(ctx->r3, ctx->r4);
    // 0x80800070: sra         $t3, $t2, 2
    ctx->r11 = S32(SIGNED(ctx->r10) >> 2);
    // 0x80800074: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80800078: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x8080007C: sh          $t3, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r11;
    // 0x80800080: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80800084: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80800088: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8080008C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_80800090:
    // 0x80800090: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x80800094: bnel        $at, $zero, L_80800060
    if (ctx->r1 != 0) {
        // 0x80800098: lhu         $t1, 0x2($v1)
        ctx->r9 = MEM_HU(ctx->r3, 0X2);
            goto L_80800060;
    }
    goto skip_1;
    // 0x80800098: lhu         $t1, 0x2($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2);
    skip_1:
L_8080009C:
    // 0x8080009C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A4: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x808000A8: jr          $ra
    // 0x808000AC: nop

    return;
    // 0x808000AC: nop

;}
RECOMP_FUNC void vpflicker_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B8: jal         0x8001B084
    // 0x808000BC: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x808000BC: nop

    after_0:
    // 0x808000C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000C8: jr          $ra
    // 0x808000CC: nop

    return;
    // 0x808000CC: nop

;}
RECOMP_FUNC void vpflicker_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(849, 0X3F0) << 16);
    // 0x808000D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000D8: lwc1        $f12, 0x3F0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(849, 0X3F0));
    // 0x808000DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(849, 0X3F4) << 16);
    // 0x808000E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808000E8: lwc1        $f14, 0x3F4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(849, 0X3F4));
    // 0x808000EC: jal         0x800DC264
    // 0x808000F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800DC264(rdram, ctx);
        goto after_0;
    // 0x808000F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000F4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x808000F8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800100: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80800104: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800108: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(849, 0X3F8) << 16);
    // 0x8080010C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80800110: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800114: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80800118: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x8080011C: lwc1        $f2, 0x0($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80800120: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80800124: nop

    // 0x80800128: bc1fl       L_8080013C
    if (!c1cs) {
        // 0x8080012C: swc1        $f2, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
            goto L_8080013C;
    }
    goto skip_0;
    // 0x8080012C: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
    skip_0:
    // 0x80800130: b           L_8080013C
    // 0x80800134: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
        goto L_8080013C;
    // 0x80800134: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
    // 0x80800138: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
L_8080013C:
    // 0x8080013C: lwc1        $f0, 0x3F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(849, 0X3F8));
    // 0x80800140: lwc1        $f2, 0x0($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80800144: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80800148: nop

    // 0x8080014C: bc1fl       L_80800160
    if (!c1cs) {
        // 0x80800150: swc1        $f2, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
            goto L_80800160;
    }
    goto skip_1;
    // 0x80800150: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
    skip_1:
    // 0x80800154: b           L_80800160
    // 0x80800158: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
        goto L_80800160;
    // 0x80800158: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x8080015C: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
L_80800160:
    // 0x80800160: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x80800164: lw          $t6, 0x1C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1C);
    // 0x80800168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080016C: blez        $t7, L_808001A4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80800170: addu        $a2, $v1, $t6
        ctx->r6 = ADD32(ctx->r3, ctx->r14);
            goto L_808001A4;
    }
    // 0x80800170: addu        $a2, $v1, $t6
    ctx->r6 = ADD32(ctx->r3, ctx->r14);
    // 0x80800174: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
    // 0x80800178: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
L_8080017C:
    // 0x8080017C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80800180: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80800184: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800188: mflo        $t9
    ctx->r25 = lo;
    // 0x8080018C: addu        $t0, $a2, $t9
    ctx->r8 = ADD32(ctx->r6, ctx->r25);
    // 0x80800190: sb          $a1, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r5;
    // 0x80800194: lw          $t1, 0x4($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X4);
    // 0x80800198: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8080019C: bnel        $at, $zero, L_8080017C
    if (ctx->r1 != 0) {
        // 0x808001A0: lh          $t8, 0x0($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X0);
            goto L_8080017C;
    }
    goto skip_2;
    // 0x808001A0: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    skip_2:
L_808001A4:
    // 0x808001A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001AC: jr          $ra
    // 0x808001B0: nop

    return;
    // 0x808001B0: nop

;}
RECOMP_FUNC void vpflicker_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B4: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x808001B8: addu        $v0, $t6, $a2
    ctx->r2 = ADD32(ctx->r14, ctx->r6);
    // 0x808001BC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x808001C0: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x808001C4: beq         $at, $zero, L_808003DC
    if (ctx->r1 == 0) {
        // 0x808001C8: lwc1        $f0, 0x0($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
            goto L_808003DC;
    }
    // 0x808001C8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
L_808001CC:
    // 0x808001CC: lbu         $t7, 0xC($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XC);
    // 0x808001D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x808001D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x808001D8: bgez        $t7, L_808001EC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x808001DC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_808001EC;
    }
    // 0x808001DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808001E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808001E4: nop

    // 0x808001E8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_808001EC:
    // 0x808001EC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x808001F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x808001F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x808001F8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x808001FC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80800200: nop

    // 0x80800204: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80800208: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8080020C: nop

    // 0x80800210: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80800214: beql        $t9, $zero, L_80800264
    if (ctx->r25 == 0) {
        // 0x80800218: mfc1        $t9, $f16
        ctx->r25 = (int32_t)ctx->f16.u32l;
            goto L_80800264;
    }
    goto skip_0;
    // 0x80800218: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x8080021C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800220: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800224: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80800228: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8080022C: nop

    // 0x80800230: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80800234: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80800238: nop

    // 0x8080023C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80800240: bne         $t9, $zero, L_80800258
    if (ctx->r25 != 0) {
        // 0x80800244: nop
    
            goto L_80800258;
    }
    // 0x80800244: nop

    // 0x80800248: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8080024C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80800250: b           L_80800270
    // 0x80800254: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80800270;
    // 0x80800254: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80800258:
    // 0x80800258: b           L_80800270
    // 0x8080025C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80800270;
    // 0x8080025C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80800260: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
L_80800264:
    // 0x80800264: nop

    // 0x80800268: bltz        $t9, L_80800258
    if (SIGNED(ctx->r25) < 0) {
        // 0x8080026C: nop
    
            goto L_80800258;
    }
    // 0x8080026C: nop

L_80800270:
    // 0x80800270: lbu         $t0, 0xD($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0XD);
    // 0x80800274: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80800278: sb          $t9, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r25;
    // 0x8080027C: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80800280: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80800284: bgez        $t0, L_80800298
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80800288: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80800298;
    }
    // 0x80800288: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8080028C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800290: nop

    // 0x80800294: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_80800298:
    // 0x80800298: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8080029C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x808002A0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x808002A4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x808002A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x808002AC: nop

    // 0x808002B0: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x808002B4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x808002B8: nop

    // 0x808002BC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x808002C0: beql        $t2, $zero, L_80800310
    if (ctx->r10 == 0) {
        // 0x808002C4: mfc1        $t2, $f10
        ctx->r10 = (int32_t)ctx->f10.u32l;
            goto L_80800310;
    }
    goto skip_1;
    // 0x808002C4: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x808002C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808002CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x808002D0: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x808002D4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x808002D8: nop

    // 0x808002DC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x808002E0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x808002E4: nop

    // 0x808002E8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x808002EC: bne         $t2, $zero, L_80800304
    if (ctx->r10 != 0) {
        // 0x808002F0: nop
    
            goto L_80800304;
    }
    // 0x808002F0: nop

    // 0x808002F4: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x808002F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x808002FC: b           L_8080031C
    // 0x80800300: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8080031C;
    // 0x80800300: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80800304:
    // 0x80800304: b           L_8080031C
    // 0x80800308: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8080031C;
    // 0x80800308: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8080030C: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
L_80800310:
    // 0x80800310: nop

    // 0x80800314: bltz        $t2, L_80800304
    if (SIGNED(ctx->r10) < 0) {
        // 0x80800318: nop
    
            goto L_80800304;
    }
    // 0x80800318: nop

L_8080031C:
    // 0x8080031C: lbu         $t3, 0xE($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0XE);
    // 0x80800320: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80800324: sb          $t2, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r10;
    // 0x80800328: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8080032C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80800330: bgez        $t3, L_80800344
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80800334: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80800344;
    }
    // 0x80800334: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80800338: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080033C: nop

    // 0x80800340: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_80800344:
    // 0x80800344: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80800348: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8080034C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80800350: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80800354: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80800358: nop

    // 0x8080035C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80800360: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80800364: nop

    // 0x80800368: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8080036C: beql        $t5, $zero, L_808003BC
    if (ctx->r13 == 0) {
        // 0x80800370: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_808003BC;
    }
    goto skip_2;
    // 0x80800370: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x80800374: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800378: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8080037C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800380: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80800384: nop

    // 0x80800388: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8080038C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80800390: nop

    // 0x80800394: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80800398: bne         $t5, $zero, L_808003B0
    if (ctx->r13 != 0) {
        // 0x8080039C: nop
    
            goto L_808003B0;
    }
    // 0x8080039C: nop

    // 0x808003A0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x808003A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x808003A8: b           L_808003C8
    // 0x808003AC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_808003C8;
    // 0x808003AC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_808003B0:
    // 0x808003B0: b           L_808003C8
    // 0x808003B4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_808003C8;
    // 0x808003B4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x808003B8: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_808003BC:
    // 0x808003BC: nop

    // 0x808003C0: bltz        $t5, L_808003B0
    if (SIGNED(ctx->r13) < 0) {
        // 0x808003C4: nop
    
            goto L_808003B0;
    }
    // 0x808003C4: nop

L_808003C8:
    // 0x808003C8: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x808003CC: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x808003D0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x808003D4: bne         $at, $zero, L_808001CC
    if (ctx->r1 != 0) {
        // 0x808003D8: sb          $t5, -0x2($a2)
        MEM_B(-0X2, ctx->r6) = ctx->r13;
            goto L_808001CC;
    }
    // 0x808003D8: sb          $t5, -0x2($a2)
    MEM_B(-0X2, ctx->r6) = ctx->r13;
L_808003DC:
    // 0x808003DC: jr          $ra
    // 0x808003E0: nop

    return;
    // 0x808003E0: nop

    // 0x808003E4: nop

    // 0x808003E8: nop

    // 0x808003EC: nop

;}
RECOMP_FUNC void vpglow_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x80800010: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800014: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80800018: jal         0x8001ACCC
    // 0x8080001C: addiu       $a0, $t7, 0xC
    ctx->r4 = ADD32(ctx->r15, 0XC);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8080001C: addiu       $a0, $t7, 0xC
    ctx->r4 = ADD32(ctx->r15, 0XC);
    after_0:
    // 0x80800020: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800028: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8080002C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800030: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x80800034: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80800038: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8080003C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80800040: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80800044: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80800048: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8080004C: mfhi        $t2
    ctx->r10 = hi;
    // 0x80800050: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80800054: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800058: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8080005C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800060: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(850, 0X410) << 16);
    // 0x80800064: lwc1        $f18, 0x410($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(850, 0X410));
    // 0x80800068: addu        $a1, $t0, $a2
    ctx->r5 = ADD32(ctx->r8, ctx->r6);
    // 0x8080006C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80800070: addiu       $a0, $a2, 0x14
    ctx->r4 = ADD32(ctx->r6, 0X14);
    // 0x80800074: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80800078: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x8080007C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80800080: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80800084: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80800088: beq         $at, $zero, L_808000D0
    if (ctx->r1 == 0) {
        // 0x8080008C: swc1        $f4, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
            goto L_808000D0;
    }
    // 0x8080008C: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80800090: lhu         $t3, 0x2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X2);
L_80800094:
    // 0x80800094: beql        $t3, $zero, L_808000C4
    if (ctx->r11 == 0) {
        // 0x80800098: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_808000C4;
    }
    goto skip_0;
    // 0x80800098: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x8080009C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x808000A0: subu        $t4, $v1, $a0
    ctx->r12 = SUB32(ctx->r3, ctx->r4);
    // 0x808000A4: sra         $t5, $t4, 2
    ctx->r13 = S32(SIGNED(ctx->r12) >> 2);
    // 0x808000A8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x808000AC: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x808000B0: sh          $t5, 0xC($t8)
    MEM_H(0XC, ctx->r24) = ctx->r13;
    // 0x808000B4: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x808000B8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x808000BC: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x808000C0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_808000C4:
    // 0x808000C4: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x808000C8: bnel        $at, $zero, L_80800094
    if (ctx->r1 != 0) {
        // 0x808000CC: lhu         $t3, 0x2($v1)
        ctx->r11 = MEM_HU(ctx->r3, 0X2);
            goto L_80800094;
    }
    goto skip_1;
    // 0x808000CC: lhu         $t3, 0x2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X2);
    skip_1:
L_808000D0:
    // 0x808000D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000D8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x808000DC: jr          $ra
    // 0x808000E0: nop

    return;
    // 0x808000E0: nop

;}
RECOMP_FUNC void vpglow_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000EC: jal         0x8001B084
    // 0x808000F0: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x808000F0: nop

    after_0:
    // 0x808000F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000FC: jr          $ra
    // 0x80800100: nop

    return;
    // 0x80800100: nop

;}
RECOMP_FUNC void vpglow_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080010C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800110: jal         0x800D8FF8
    // 0x80800114: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800114: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800118: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8080011C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800120: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800124: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80800128: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8080012C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800130: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80800134: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(850, 0X414) << 16);
    // 0x80800138: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080013C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80800140: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800144: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x80800148: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8080014C: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x80800150: nop

    // 0x80800154: bc1f        L_8080016C
    if (!c1cs) {
        // 0x80800158: nop
    
            goto L_8080016C;
    }
    // 0x80800158: nop

    // 0x8080015C: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x80800160: swc1        $f14, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f14.u32l;
    // 0x80800164: b           L_8080018C
    // 0x80800168: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
        goto L_8080018C;
    // 0x80800168: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
L_8080016C:
    // 0x8080016C: lwc1        $f0, 0x414($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(850, 0X414));
    // 0x80800170: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80800174: nop

    // 0x80800178: bc1fl       L_80800190
    if (!c1cs) {
        // 0x8080017C: lw          $t7, 0x8($a2)
        ctx->r15 = MEM_W(ctx->r6, 0X8);
            goto L_80800190;
    }
    goto skip_0;
    // 0x8080017C: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    skip_0:
    // 0x80800180: neg.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = -ctx->f2.fl;
    // 0x80800184: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x80800188: swc1        $f16, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f16.u32l;
L_8080018C:
    // 0x8080018C: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
L_80800190:
    // 0x80800190: lw          $t6, 0x1C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1C);
    // 0x80800194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800198: blez        $t7, L_808001D0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8080019C: addu        $a3, $v1, $t6
        ctx->r7 = ADD32(ctx->r3, ctx->r14);
            goto L_808001D0;
    }
    // 0x8080019C: addu        $a3, $v1, $t6
    ctx->r7 = ADD32(ctx->r3, ctx->r14);
    // 0x808001A0: addiu       $v1, $a2, 0xC
    ctx->r3 = ADD32(ctx->r6, 0XC);
    // 0x808001A4: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
L_808001A8:
    // 0x808001A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x808001AC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x808001B0: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808001B4: mflo        $t9
    ctx->r25 = lo;
    // 0x808001B8: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x808001BC: sb          $a1, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r5;
    // 0x808001C0: lw          $t1, 0x8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X8);
    // 0x808001C4: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x808001C8: bnel        $at, $zero, L_808001A8
    if (ctx->r1 != 0) {
        // 0x808001CC: lh          $t8, 0x0($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X0);
            goto L_808001A8;
    }
    goto skip_1;
    // 0x808001CC: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    skip_1:
L_808001D0:
    // 0x808001D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001D8: jr          $ra
    // 0x808001DC: nop

    return;
    // 0x808001DC: nop

;}
RECOMP_FUNC void vpglow_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E0: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x808001E4: addu        $v0, $t6, $a2
    ctx->r2 = ADD32(ctx->r14, ctx->r6);
    // 0x808001E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x808001EC: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x808001F0: beq         $at, $zero, L_80800408
    if (ctx->r1 == 0) {
        // 0x808001F4: lwc1        $f0, 0x0($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
            goto L_80800408;
    }
    // 0x808001F4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
L_808001F8:
    // 0x808001F8: lbu         $t7, 0xC($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XC);
    // 0x808001FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80800200: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80800204: bgez        $t7, L_80800218
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80800208: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80800218;
    }
    // 0x80800208: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8080020C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800210: nop

    // 0x80800214: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80800218:
    // 0x80800218: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8080021C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800220: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80800224: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80800228: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8080022C: nop

    // 0x80800230: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80800234: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80800238: nop

    // 0x8080023C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80800240: beql        $t9, $zero, L_80800290
    if (ctx->r25 == 0) {
        // 0x80800244: mfc1        $t9, $f16
        ctx->r25 = (int32_t)ctx->f16.u32l;
            goto L_80800290;
    }
    goto skip_0;
    // 0x80800244: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x80800248: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080024C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800250: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80800254: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80800258: nop

    // 0x8080025C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80800260: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80800264: nop

    // 0x80800268: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8080026C: bne         $t9, $zero, L_80800284
    if (ctx->r25 != 0) {
        // 0x80800270: nop
    
            goto L_80800284;
    }
    // 0x80800270: nop

    // 0x80800274: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80800278: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8080027C: b           L_8080029C
    // 0x80800280: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8080029C;
    // 0x80800280: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80800284:
    // 0x80800284: b           L_8080029C
    // 0x80800288: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8080029C;
    // 0x80800288: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8080028C: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
L_80800290:
    // 0x80800290: nop

    // 0x80800294: bltz        $t9, L_80800284
    if (SIGNED(ctx->r25) < 0) {
        // 0x80800298: nop
    
            goto L_80800284;
    }
    // 0x80800298: nop

L_8080029C:
    // 0x8080029C: lbu         $t0, 0xD($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0XD);
    // 0x808002A0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x808002A4: sb          $t9, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r25;
    // 0x808002A8: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x808002AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x808002B0: bgez        $t0, L_808002C4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x808002B4: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_808002C4;
    }
    // 0x808002B4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x808002B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808002BC: nop

    // 0x808002C0: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_808002C4:
    // 0x808002C4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x808002C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x808002CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x808002D0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x808002D4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x808002D8: nop

    // 0x808002DC: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x808002E0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x808002E4: nop

    // 0x808002E8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x808002EC: beql        $t2, $zero, L_8080033C
    if (ctx->r10 == 0) {
        // 0x808002F0: mfc1        $t2, $f10
        ctx->r10 = (int32_t)ctx->f10.u32l;
            goto L_8080033C;
    }
    goto skip_1;
    // 0x808002F0: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x808002F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808002F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x808002FC: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80800300: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80800304: nop

    // 0x80800308: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8080030C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80800310: nop

    // 0x80800314: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80800318: bne         $t2, $zero, L_80800330
    if (ctx->r10 != 0) {
        // 0x8080031C: nop
    
            goto L_80800330;
    }
    // 0x8080031C: nop

    // 0x80800320: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80800324: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80800328: b           L_80800348
    // 0x8080032C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80800348;
    // 0x8080032C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80800330:
    // 0x80800330: b           L_80800348
    // 0x80800334: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80800348;
    // 0x80800334: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80800338: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
L_8080033C:
    // 0x8080033C: nop

    // 0x80800340: bltz        $t2, L_80800330
    if (SIGNED(ctx->r10) < 0) {
        // 0x80800344: nop
    
            goto L_80800330;
    }
    // 0x80800344: nop

L_80800348:
    // 0x80800348: lbu         $t3, 0xE($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0XE);
    // 0x8080034C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80800350: sb          $t2, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r10;
    // 0x80800354: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80800358: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8080035C: bgez        $t3, L_80800370
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80800360: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80800370;
    }
    // 0x80800360: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80800364: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800368: nop

    // 0x8080036C: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_80800370:
    // 0x80800370: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80800374: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80800378: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8080037C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80800380: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80800384: nop

    // 0x80800388: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8080038C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80800390: nop

    // 0x80800394: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80800398: beql        $t5, $zero, L_808003E8
    if (ctx->r13 == 0) {
        // 0x8080039C: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_808003E8;
    }
    goto skip_2;
    // 0x8080039C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x808003A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808003A4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x808003A8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x808003AC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x808003B0: nop

    // 0x808003B4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x808003B8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x808003BC: nop

    // 0x808003C0: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x808003C4: bne         $t5, $zero, L_808003DC
    if (ctx->r13 != 0) {
        // 0x808003C8: nop
    
            goto L_808003DC;
    }
    // 0x808003C8: nop

    // 0x808003CC: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x808003D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x808003D4: b           L_808003F4
    // 0x808003D8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_808003F4;
    // 0x808003D8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_808003DC:
    // 0x808003DC: b           L_808003F4
    // 0x808003E0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_808003F4;
    // 0x808003E0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x808003E4: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_808003E8:
    // 0x808003E8: nop

    // 0x808003EC: bltz        $t5, L_808003DC
    if (SIGNED(ctx->r13) < 0) {
        // 0x808003F0: nop
    
            goto L_808003DC;
    }
    // 0x808003F0: nop

L_808003F4:
    // 0x808003F4: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x808003F8: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x808003FC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80800400: bne         $at, $zero, L_808001F8
    if (ctx->r1 != 0) {
        // 0x80800404: sb          $t5, -0x2($a2)
        MEM_B(-0X2, ctx->r6) = ctx->r13;
            goto L_808001F8;
    }
    // 0x80800404: sb          $t5, -0x2($a2)
    MEM_B(-0X2, ctx->r6) = ctx->r13;
L_80800408:
    // 0x80800408: jr          $ra
    // 0x8080040C: nop

    return;
    // 0x8080040C: nop

;}
RECOMP_FUNC void vplight_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80800010: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x80800014: lhu         $t6, 0x10($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X10);
    // 0x80800018: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080001C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80800020: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80800024: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    // 0x80800028: jal         0x8001ACCC
    // 0x8080002C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8080002C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800030: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80800034: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080003C: jal         0x8001BCF8
    // 0x80800040: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    rare_memset(rdram, ctx);
        goto after_1;
    // 0x80800040: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
    // 0x80800044: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x80800048: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8080004C: lhu         $t5, 0x10($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X10);
    // 0x80800050: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x80800054: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x80800058: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8080005C: addu        $a0, $t6, $t2
    ctx->r4 = ADD32(ctx->r14, ctx->r10);
    // 0x80800060: sltu        $at, $t2, $a0
    ctx->r1 = ctx->r10 < ctx->r4 ? 1 : 0;
    // 0x80800064: beq         $at, $zero, L_80800084
    if (ctx->r1 == 0) {
        // 0x80800068: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_80800084;
    }
    // 0x80800068: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8080006C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80800070:
    // 0x80800070: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80800074: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80800078: bne         $at, $zero, L_80800070
    if (ctx->r1 != 0) {
        // 0x8080007C: sh          $v1, -0x2($v0)
        MEM_H(-0X2, ctx->r2) = ctx->r3;
            goto L_80800070;
    }
    // 0x8080007C: sh          $v1, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r3;
    // 0x80800080: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
L_80800084:
    // 0x80800084: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x80800088: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8080008C: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x80800090: addu        $a2, $t8, $v0
    ctx->r6 = ADD32(ctx->r24, ctx->r2);
    // 0x80800094: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    // 0x80800098: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x8080009C: sltu        $at, $a1, $a2
    ctx->r1 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x808000A0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x808000A4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x808000A8: beq         $at, $zero, L_80800100
    if (ctx->r1 == 0) {
        // 0x808000AC: addu        $a3, $s0, $t7
        ctx->r7 = ADD32(ctx->r16, ctx->r15);
            goto L_80800100;
    }
    // 0x808000AC: addu        $a3, $s0, $t7
    ctx->r7 = ADD32(ctx->r16, ctx->r15);
    // 0x808000B0: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x808000B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_808000B8:
    // 0x808000B8: lhu         $t9, 0x2($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X2);
    // 0x808000BC: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x808000C0: sra         $t4, $v0, 2
    ctx->r12 = S32(SIGNED(ctx->r2) >> 2);
    // 0x808000C4: beql        $t9, $zero, L_808000F4
    if (ctx->r25 == 0) {
        // 0x808000C8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_808000F4;
    }
    goto skip_0;
    // 0x808000C8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x808000CC: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808000D0: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
    // 0x808000D4: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x808000D8: mflo        $t5
    ctx->r13 = lo;
    // 0x808000DC: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x808000E0: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x808000E4: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x808000E8: addu        $t9, $t2, $t7
    ctx->r25 = ADD32(ctx->r10, ctx->r15);
    // 0x808000EC: sh          $t4, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r12;
    // 0x808000F0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_808000F4:
    // 0x808000F4: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x808000F8: bne         $at, $zero, L_808000B8
    if (ctx->r1 != 0) {
        // 0x808000FC: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_808000B8;
    }
    // 0x808000FC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
L_80800100:
    // 0x80800100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800104: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800108: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8080010C: jr          $ra
    // 0x80800110: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x80800110: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
;}
RECOMP_FUNC void vplight_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080011C: jal         0x8001B084
    // 0x80800120: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x80800120: nop

    after_0:
    // 0x80800124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080012C: jr          $ra
    // 0x80800130: nop

    return;
    // 0x80800130: nop

;}
RECOMP_FUNC void func_80800134_vplight(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800134: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80800138: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8080013C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80800140: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80800144: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80800148: or          $t2, $a3, $zero
    ctx->r10 = ctx->r7 | 0;
    // 0x8080014C: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x80800150: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
L_80800154:
    // 0x80800154: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800158: lwc1        $f16, 0x18($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8080015C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80800160: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80800164: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80800168: add.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8080016C: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80800170: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80800174: mul.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x80800178: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8080017C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800180: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80800184: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80800188: bc1fl       L_80800198
    if (!c1cs) {
        // 0x8080018C: c.lt.s      $f14, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
            goto L_80800198;
    }
    goto skip_0;
    // 0x8080018C: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    skip_0:
    // 0x80800190: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80800194: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
L_80800198:
    // 0x80800198: nop

    // 0x8080019C: bc1fl       L_808001AC
    if (!c1cs) {
        // 0x808001A0: lh          $a2, 0x0($t1)
        ctx->r6 = MEM_H(ctx->r9, 0X0);
            goto L_808001AC;
    }
    goto skip_1;
    // 0x808001A0: lh          $a2, 0x0($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X0);
    skip_1:
    // 0x808001A4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x808001A8: lh          $a2, 0x0($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X0);
L_808001AC:
    // 0x808001AC: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x808001B0: lh          $a3, 0x4($t1)
    ctx->r7 = MEM_H(ctx->r9, 0X4);
    // 0x808001B4: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x808001B8: beql        $at, $zero, L_808001C8
    if (ctx->r1 == 0) {
        // 0x808001BC: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_808001C8;
    }
    goto skip_2;
    // 0x808001BC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    skip_2:
    // 0x808001C0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x808001C4: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
L_808001C8:
    // 0x808001C8: beql        $at, $zero, L_808001D8
    if (ctx->r1 == 0) {
        // 0x808001CC: slt         $at, $a1, $a2
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_808001D8;
    }
    goto skip_3;
    // 0x808001CC: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    skip_3:
    // 0x808001D0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x808001D4: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
L_808001D8:
    // 0x808001D8: beq         $at, $zero, L_808001E4
    if (ctx->r1 == 0) {
        // 0x808001DC: subu        $t8, $v0, $a2
        ctx->r24 = SUB32(ctx->r2, ctx->r6);
            goto L_808001E4;
    }
    // 0x808001DC: subu        $t8, $v0, $a2
    ctx->r24 = SUB32(ctx->r2, ctx->r6);
    // 0x808001E0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_808001E4:
    // 0x808001E4: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x808001E8: beql        $at, $zero, L_808001F8
    if (ctx->r1 == 0) {
        // 0x808001EC: sw          $t8, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r24;
            goto L_808001F8;
    }
    goto skip_4;
    // 0x808001EC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    skip_4:
    // 0x808001F0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x808001F4: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
L_808001F8:
    // 0x808001F8: subu        $t9, $a1, $a2
    ctx->r25 = SUB32(ctx->r5, ctx->r6);
    // 0x808001FC: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x80800200: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x80800204: bne         $t0, $t4, L_80800154
    if (ctx->r8 != ctx->r12) {
        // 0x80800208: sw          $t9, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r25;
            goto L_80800154;
    }
    // 0x80800208: sw          $t9, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r25;
    // 0x8080020C: jr          $ra
    // 0x80800210: nop

    return;
    // 0x80800210: nop

;}
RECOMP_FUNC void vplight_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800214: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80800218: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8080021C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80800220: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80800224: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80800228: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8080022C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80800230: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80800234: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80800238: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8080023C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800240: lw          $t6, 0x14($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X14);
    // 0x80800244: lw          $t8, 0x1C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X1C);
    // 0x80800248: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080024C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80800250: addu        $v0, $t7, $a0
    ctx->r2 = ADD32(ctx->r15, ctx->r4);
    // 0x80800254: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80800258: addu        $s6, $a1, $t8
    ctx->r22 = ADD32(ctx->r5, ctx->r24);
    // 0x8080025C: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x80800260: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800264: sw          $v0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r2;
    // 0x80800268: jal         0x800C8760
    // 0x8080026C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800C8760(rdram, ctx);
        goto after_0;
    // 0x8080026C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80800270: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x80800274: beq         $v0, $zero, L_80800480
    if (ctx->r2 == 0) {
        // 0x80800278: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80800480;
    }
    // 0x80800278: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8080027C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x80800280: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
    // 0x80800284: addiu       $s1, $zero, 0xE
    ctx->r17 = ADD32(0, 0XE);
L_80800288:
    // 0x80800288: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8080028C: or          $fp, $s0, $zero
    ctx->r30 = ctx->r16 | 0;
    // 0x80800290: jal         0x800C89D8
    // 0x80800294: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    func_800C89D8(rdram, ctx);
        goto after_1;
    // 0x80800294: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    after_1:
    // 0x80800298: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x8080029C: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x808002A0: sltu        $at, $s0, $t1
    ctx->r1 = ctx->r16 < ctx->r9 ? 1 : 0;
    // 0x808002A4: beq         $at, $zero, L_80800324
    if (ctx->r1 == 0) {
        // 0x808002A8: nop
    
            goto L_80800324;
    }
    // 0x808002A8: nop

    // 0x808002AC: lbu         $t9, 0x0($fp)
    ctx->r25 = MEM_BU(ctx->r30, 0X0);
L_808002B0:
    // 0x808002B0: beql        $t9, $zero, L_80800318
    if (ctx->r25 == 0) {
        // 0x808002B4: addiu       $fp, $fp, 0x10
        ctx->r30 = ADD32(ctx->r30, 0X10);
            goto L_80800318;
    }
    goto skip_0;
    // 0x808002B4: addiu       $fp, $fp, 0x10
    ctx->r30 = ADD32(ctx->r30, 0X10);
    skip_0:
    // 0x808002B8: lbu         $t2, 0x1($fp)
    ctx->r10 = MEM_BU(ctx->r30, 0X1);
    // 0x808002BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x808002C0: or          $v1, $fp, $zero
    ctx->r3 = ctx->r30 | 0;
    // 0x808002C4: beql        $t2, $zero, L_80800318
    if (ctx->r10 == 0) {
        // 0x808002C8: addiu       $fp, $fp, 0x10
        ctx->r30 = ADD32(ctx->r30, 0X10);
            goto L_80800318;
    }
    goto skip_1;
    // 0x808002C8: addiu       $fp, $fp, 0x10
    ctx->r30 = ADD32(ctx->r30, 0X10);
    skip_1:
L_808002CC:
    // 0x808002CC: lbu         $t3, 0x2($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X2);
    // 0x808002D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x808002D4: bne         $s3, $t3, L_8080030C
    if (ctx->r19 != ctx->r11) {
        // 0x808002D8: nop
    
            goto L_8080030C;
    }
    // 0x808002D8: nop

    // 0x808002DC: beq         $v0, $zero, L_808002F4
    if (ctx->r2 == 0) {
        // 0x808002E0: subu        $a0, $fp, $s0
        ctx->r4 = SUB32(ctx->r30, ctx->r16);
            goto L_808002F4;
    }
    // 0x808002E0: subu        $a0, $fp, $s0
    ctx->r4 = SUB32(ctx->r30, ctx->r16);
    // 0x808002E4: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x808002E8: lbu         $t4, 0x1($fp)
    ctx->r12 = MEM_BU(ctx->r30, 0X1);
    // 0x808002EC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x808002F0: sb          $t5, 0x1($fp)
    MEM_B(0X1, ctx->r30) = ctx->r13;
L_808002F4:
    // 0x808002F4: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x808002F8: multu       $t6, $s4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808002FC: mflo        $t7
    ctx->r15 = lo;
    // 0x80800300: addu        $t8, $s6, $t7
    ctx->r24 = ADD32(ctx->r22, ctx->r15);
    // 0x80800304: b           L_80800314
    // 0x80800308: sb          $s5, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r21;
        goto L_80800314;
    // 0x80800308: sb          $s5, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r21;
L_8080030C:
    // 0x8080030C: bne         $a0, $s1, L_808002CC
    if (ctx->r4 != ctx->r17) {
        // 0x80800310: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_808002CC;
    }
    // 0x80800310: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80800314:
    // 0x80800314: addiu       $fp, $fp, 0x10
    ctx->r30 = ADD32(ctx->r30, 0X10);
L_80800318:
    // 0x80800318: sltu        $at, $fp, $t1
    ctx->r1 = ctx->r30 < ctx->r9 ? 1 : 0;
    // 0x8080031C: bnel        $at, $zero, L_808002B0
    if (ctx->r1 != 0) {
        // 0x80800320: lbu         $t9, 0x0($fp)
        ctx->r25 = MEM_BU(ctx->r30, 0X0);
            goto L_808002B0;
    }
    goto skip_2;
    // 0x80800320: lbu         $t9, 0x0($fp)
    ctx->r25 = MEM_BU(ctx->r30, 0X0);
    skip_2:
L_80800324:
    // 0x80800324: beq         $v0, $zero, L_80800460
    if (ctx->r2 == 0) {
        // 0x80800328: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80800460;
    }
    // 0x80800328: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8080032C: jal         0x800C8800
    // 0x80800330: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    func_800C8800(rdram, ctx);
        goto after_2;
    // 0x80800330: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    after_2:
    // 0x80800334: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800338: jal         0x800C883C
    // 0x8080033C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_800C883C(rdram, ctx);
        goto after_3;
    // 0x8080033C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_3:
    // 0x80800340: addiu       $t9, $sp, 0x74
    ctx->r25 = ADD32(ctx->r29, 0X74);
    // 0x80800344: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80800348: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8080034C: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x80800350: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x80800354: jal         0x80000134
    // 0x80800358: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    func_80800134_vplight(rdram, ctx);
        goto after_4;
    // 0x80800358: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    after_4:
    // 0x8080035C: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x80800360: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x80800364: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x80800368: slt         $at, $t2, $t0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8080036C: bnel        $at, $zero, L_80800464
    if (ctx->r1 != 0) {
        // 0x80800370: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80800464;
    }
    goto skip_3;
    // 0x80800370: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_3:
    // 0x80800374: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
L_80800378:
    // 0x80800378: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x8080037C: slt         $at, $t3, $a3
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80800380: bnel        $at, $zero, L_80800450
    if (ctx->r1 != 0) {
        // 0x80800384: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_80800450;
    }
    goto skip_4;
    // 0x80800384: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_4:
    // 0x80800388: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
L_8080038C:
    // 0x8080038C: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x80800390: slt         $at, $t4, $a2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80800394: bnel        $at, $zero, L_8080043C
    if (ctx->r1 != 0) {
        // 0x80800398: lw          $t4, 0x78($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X78);
            goto L_8080043C;
    }
    goto skip_5;
    // 0x80800398: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    skip_5:
    // 0x8080039C: lhu         $t5, 0xE($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0XE);
L_808003A0:
    // 0x808003A0: lhu         $t8, 0xC($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0XC);
    // 0x808003A4: multu       $t5, $t0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808003A8: mflo        $t6
    ctx->r14 = lo;
    // 0x808003AC: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x808003B0: nop

    // 0x808003B4: multu       $a3, $t8
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808003B8: mflo        $t9
    ctx->r25 = lo;
    // 0x808003BC: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x808003C0: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x808003C4: addu        $t3, $s7, $t2
    ctx->r11 = ADD32(ctx->r23, ctx->r10);
    // 0x808003C8: lh          $a1, 0x0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X0);
    // 0x808003CC: bltz        $a1, L_80800424
    if (SIGNED(ctx->r5) < 0) {
        // 0x808003D0: sll         $t4, $a1, 4
        ctx->r12 = S32(ctx->r5 << 4);
            goto L_80800424;
    }
    // 0x808003D0: sll         $t4, $a1, 4
    ctx->r12 = S32(ctx->r5 << 4);
    // 0x808003D4: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x808003D8: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x808003DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808003E0: beq         $t5, $zero, L_80800424
    if (ctx->r13 == 0) {
        // 0x808003E4: addu        $v1, $a0, $v0
        ctx->r3 = ADD32(ctx->r4, ctx->r2);
            goto L_80800424;
    }
    // 0x808003E4: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
L_808003E8:
    // 0x808003E8: lbu         $t6, 0x2($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2);
    // 0x808003EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x808003F0: bne         $t6, $zero, L_8080041C
    if (ctx->r14 != 0) {
        // 0x808003F4: nop
    
            goto L_8080041C;
    }
    // 0x808003F4: nop

    // 0x808003F8: multu       $a1, $s4
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808003FC: sb          $s3, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r19;
    // 0x80800400: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
    // 0x80800404: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80800408: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    // 0x8080040C: mflo        $t9
    ctx->r25 = lo;
    // 0x80800410: addu        $t2, $t9, $s6
    ctx->r10 = ADD32(ctx->r25, ctx->r22);
    // 0x80800414: b           L_80800424
    // 0x80800418: sb          $s5, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r21;
        goto L_80800424;
    // 0x80800418: sb          $s5, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r21;
L_8080041C:
    // 0x8080041C: bnel        $v0, $s1, L_808003E8
    if (ctx->r2 != ctx->r17) {
        // 0x80800420: addu        $v1, $a0, $v0
        ctx->r3 = ADD32(ctx->r4, ctx->r2);
            goto L_808003E8;
    }
    goto skip_6;
    // 0x80800420: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    skip_6:
L_80800424:
    // 0x80800424: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x80800428: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8080042C: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80800430: beql        $at, $zero, L_808003A0
    if (ctx->r1 == 0) {
        // 0x80800434: lhu         $t5, 0xE($s2)
        ctx->r13 = MEM_HU(ctx->r18, 0XE);
            goto L_808003A0;
    }
    goto skip_7;
    // 0x80800434: lhu         $t5, 0xE($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0XE);
    skip_7:
    // 0x80800438: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
L_8080043C:
    // 0x8080043C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80800440: slt         $at, $t4, $a3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80800444: beql        $at, $zero, L_8080038C
    if (ctx->r1 == 0) {
        // 0x80800448: lw          $a2, 0x80($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X80);
            goto L_8080038C;
    }
    goto skip_8;
    // 0x80800448: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    skip_8:
    // 0x8080044C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_80800450:
    // 0x80800450: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80800454: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80800458: beql        $at, $zero, L_80800378
    if (ctx->r1 == 0) {
        // 0x8080045C: lw          $a3, 0x84($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X84);
            goto L_80800378;
    }
    goto skip_9;
    // 0x8080045C: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    skip_9:
L_80800460:
    // 0x80800460: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80800464:
    // 0x80800464: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800468: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8080046C: jal         0x800C878C
    // 0x80800470: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    func_800C878C(rdram, ctx);
        goto after_5;
    // 0x80800470: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    after_5:
    // 0x80800474: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x80800478: bne         $v0, $zero, L_80800288
    if (ctx->r2 != 0) {
        // 0x8080047C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80800288;
    }
    // 0x8080047C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_80800480:
    // 0x80800480: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80800484: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800488: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8080048C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80800490: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80800494: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80800498: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8080049C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x808004A0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x808004A4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x808004A8: jr          $ra
    // 0x808004AC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x808004AC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_808004B0_vplight(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808004BC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x808004C0: jal         0x800C8800
    // 0x808004C4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800C8800(rdram, ctx);
        goto after_0;
    // 0x808004C4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x808004C8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808004CC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x808004D0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x808004D4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x808004D8: nop

    // 0x808004DC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x808004E0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x808004E4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x808004E8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x808004EC: nop

    // 0x808004F0: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x808004F4: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808004F8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x808004FC: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80800500: nop

    // 0x80800504: sw          $t1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r9;
    // 0x80800508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080050C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800510: jr          $ra
    // 0x80800514: nop

    return;
    // 0x80800514: nop

;}
RECOMP_FUNC void func_80800518_vplight(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800518: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080051C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800520: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800524: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80800528: jal         0x800C8898
    // 0x8080052C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800C8898(rdram, ctx);
        goto after_0;
    // 0x8080052C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80800530: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80800534: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800538: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8080053C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80800540: lui         $at, 0x4680
    ctx->r1 = S32(0X4680 << 16);
    // 0x80800544: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800548: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8080054C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800550: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80800554: nop

    // 0x80800558: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8080055C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800560: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80800564: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80800568: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8080056C: nop

    // 0x80800570: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x80800574: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800578: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8080057C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80800580: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80800584: nop

    // 0x80800588: sw          $t1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r9;
    // 0x8080058C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800590: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800594: jr          $ra
    // 0x80800598: nop

    return;
    // 0x80800598: nop

;}
RECOMP_FUNC void vplight_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080059C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x808005A0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x808005A4: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x808005A8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x808005AC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x808005B0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x808005B4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x808005B8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x808005BC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x808005C0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x808005C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x808005C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808005CC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x808005D0: addu        $s6, $a0, $t6
    ctx->r22 = ADD32(ctx->r4, ctx->r14);
    // 0x808005D4: lbu         $t7, 0x1($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X1);
    // 0x808005D8: sll         $t8, $a3, 4
    ctx->r24 = S32(ctx->r7 << 4);
    // 0x808005DC: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x808005E0: beq         $t7, $zero, L_808007C0
    if (ctx->r15 == 0) {
        // 0x808005E4: addu        $fp, $t8, $a2
        ctx->r30 = ADD32(ctx->r24, ctx->r6);
            goto L_808007C0;
    }
    // 0x808005E4: addu        $fp, $t8, $a2
    ctx->r30 = ADD32(ctx->r24, ctx->r6);
    // 0x808005E8: or          $s4, $fp, $zero
    ctx->r20 = ctx->r30 | 0;
    // 0x808005EC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x808005F0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x808005F4: addu        $t9, $s6, $s5
    ctx->r25 = ADD32(ctx->r22, ctx->r21);
L_808005F8:
    // 0x808005F8: lbu         $t0, 0x2($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2);
    // 0x808005FC: bnel        $t0, $zero, L_80800614
    if (ctx->r8 != 0) {
        // 0x80800600: slti        $at, $s5, 0xE
        ctx->r1 = SIGNED(ctx->r21) < 0XE ? 1 : 0;
            goto L_80800614;
    }
    goto skip_0;
    // 0x80800600: slti        $at, $s5, 0xE
    ctx->r1 = SIGNED(ctx->r21) < 0XE ? 1 : 0;
    skip_0:
    // 0x80800604: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80800608: bnel        $s5, $v0, L_808005F8
    if (ctx->r21 != ctx->r2) {
        // 0x8080060C: addu        $t9, $s6, $s5
        ctx->r25 = ADD32(ctx->r22, ctx->r21);
            goto L_808005F8;
    }
    goto skip_1;
    // 0x8080060C: addu        $t9, $s6, $s5
    ctx->r25 = ADD32(ctx->r22, ctx->r21);
    skip_1:
    // 0x80800610: slti        $at, $s5, 0xE
    ctx->r1 = SIGNED(ctx->r21) < 0XE ? 1 : 0;
L_80800614:
    // 0x80800614: beq         $at, $zero, L_808007C0
    if (ctx->r1 == 0) {
        // 0x80800618: lui         $s3, 0x1
        ctx->r19 = S32(0X1 << 16);
            goto L_808007C0;
    }
    // 0x80800618: lui         $s3, 0x1
    ctx->r19 = S32(0X1 << 16);
    // 0x8080061C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80800620: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80800624: addiu       $s2, $zero, 0x4000
    ctx->r18 = ADD32(0, 0X4000);
    // 0x80800628: addu        $s1, $s6, $s5
    ctx->r17 = ADD32(ctx->r22, ctx->r21);
L_8080062C:
    // 0x8080062C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80800630: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x80800634: beq         $v0, $zero, L_808007B0
    if (ctx->r2 == 0) {
        // 0x80800638: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808007B0;
    }
    // 0x80800638: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080063C: jal         0x800004B0
    // 0x80800640: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    func_808004B0_vplight(rdram, ctx);
        goto after_0;
    // 0x80800640: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    after_0:
    // 0x80800644: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80800648: jal         0x80000518
    // 0x8080064C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_80800518_vplight(rdram, ctx);
        goto after_1;
    // 0x8080064C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_1:
    // 0x80800650: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80800654: jal         0x800C8900
    // 0x80800658: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_800C8900(rdram, ctx);
        goto after_2;
    // 0x80800658: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_2:
    // 0x8080065C: sltu        $at, $s7, $fp
    ctx->r1 = ctx->r23 < ctx->r30 ? 1 : 0;
    // 0x80800660: beql        $at, $zero, L_808007B4
    if (ctx->r1 == 0) {
        // 0x80800664: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_808007B4;
    }
    goto skip_2;
    // 0x80800664: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    skip_2:
    // 0x80800668: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
L_8080066C:
    // 0x8080066C: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x80800670: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x80800674: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x80800678: subu        $v0, $t1, $t2
    ctx->r2 = SUB32(ctx->r9, ctx->r10);
    // 0x8080067C: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800680: subu        $v1, $t3, $t4
    ctx->r3 = SUB32(ctx->r11, ctx->r12);
    // 0x80800684: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x80800688: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    // 0x8080068C: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x80800690: subu        $a0, $t5, $t6
    ctx->r4 = SUB32(ctx->r13, ctx->r14);
    // 0x80800694: mflo        $t7
    ctx->r15 = lo;
    // 0x80800698: nop

    // 0x8080069C: nop

    // 0x808006A0: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808006A4: mflo        $t8
    ctx->r24 = lo;
    // 0x808006A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x808006AC: nop

    // 0x808006B0: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808006B4: mflo        $t0
    ctx->r8 = lo;
    // 0x808006B8: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x808006BC: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x808006C0: beq         $at, $zero, L_808007A0
    if (ctx->r1 == 0) {
        // 0x808006C4: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_808007A0;
    }
    // 0x808006C4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808006C8: beql        $a1, $zero, L_808006F0
    if (ctx->r5 == 0) {
        // 0x808006CC: lw          $t3, 0x8C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X8C);
            goto L_808006F0;
    }
    goto skip_3;
    // 0x808006CC: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    skip_3:
    // 0x808006D0: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x808006D4: jal         0x8002DCA0
    // 0x808006D8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x808006D8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x808006DC: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x808006E0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x808006E4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x808006E8: nop

    // 0x808006EC: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
L_808006F0:
    // 0x808006F0: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x808006F4: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x808006F8: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x808006FC: beq         $at, $zero, L_80800720
    if (ctx->r1 == 0) {
        // 0x80800700: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_80800720;
    }
    // 0x80800700: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x80800704: subu        $t5, $a2, $t3
    ctx->r13 = SUB32(ctx->r6, ctx->r11);
    // 0x80800708: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8080070C: mflo        $t6
    ctx->r14 = lo;
    // 0x80800710: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x80800714: subu        $v0, $s2, $t7
    ctx->r2 = SUB32(ctx->r18, ctx->r15);
    // 0x80800718: b           L_80800720
    // 0x8080071C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_80800720;
    // 0x8080071C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_80800720:
    // 0x80800720: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800724: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
    // 0x80800728: mflo        $t9
    ctx->r25 = lo;
    // 0x8080072C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80800730: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x80800734: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80800738: bnel        $at, $zero, L_80800748
    if (ctx->r1 != 0) {
        // 0x8080073C: sb          $v0, 0xC($s0)
        MEM_B(0XC, ctx->r16) = ctx->r2;
            goto L_80800748;
    }
    goto skip_4;
    // 0x8080073C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    skip_4:
    // 0x80800740: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80800744: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80800748:
    // 0x80800748: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8080074C: lbu         $t5, 0xD($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XD);
    // 0x80800750: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800754: mflo        $t3
    ctx->r11 = lo;
    // 0x80800758: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8080075C: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80800760: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80800764: bnel        $at, $zero, L_80800774
    if (ctx->r1 != 0) {
        // 0x80800768: sb          $v0, 0xD($s0)
        MEM_B(0XD, ctx->r16) = ctx->r2;
            goto L_80800774;
    }
    goto skip_5;
    // 0x80800768: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    skip_5:
    // 0x8080076C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80800770: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80800774:
    // 0x80800774: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x80800778: lbu         $t9, 0xE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE);
    // 0x8080077C: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800780: mflo        $t7
    ctx->r15 = lo;
    // 0x80800784: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80800788: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8080078C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80800790: bnel        $at, $zero, L_808007A0
    if (ctx->r1 != 0) {
        // 0x80800794: sb          $v0, 0xE($s0)
        MEM_B(0XE, ctx->r16) = ctx->r2;
            goto L_808007A0;
    }
    goto skip_6;
    // 0x80800794: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    skip_6:
    // 0x80800798: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8080079C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_808007A0:
    // 0x808007A0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x808007A4: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x808007A8: bnel        $at, $zero, L_8080066C
    if (ctx->r1 != 0) {
        // 0x808007AC: lw          $t1, 0x98($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X98);
            goto L_8080066C;
    }
    goto skip_7;
    // 0x808007AC: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    skip_7:
L_808007B0:
    // 0x808007B0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_808007B4:
    // 0x808007B4: slti        $at, $s5, 0xE
    ctx->r1 = SIGNED(ctx->r21) < 0XE ? 1 : 0;
    // 0x808007B8: bnel        $at, $zero, L_8080062C
    if (ctx->r1 != 0) {
        // 0x808007BC: addu        $s1, $s6, $s5
        ctx->r17 = ADD32(ctx->r22, ctx->r21);
            goto L_8080062C;
    }
    goto skip_8;
    // 0x808007BC: addu        $s1, $s6, $s5
    ctx->r17 = ADD32(ctx->r22, ctx->r21);
    skip_8:
L_808007C0:
    // 0x808007C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x808007C4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808007C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808007CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x808007D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x808007D4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x808007D8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x808007DC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x808007E0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x808007E4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x808007E8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x808007EC: jr          $ra
    // 0x808007F0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x808007F0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void vplight_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007F4: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x808007F8: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x808007FC: addu        $v0, $t6, $a0
    ctx->r2 = ADD32(ctx->r14, ctx->r4);
    // 0x80800800: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80800804: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80800808: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8080080C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80800810: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80800814: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80800818: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8080081C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80800820: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80800824: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80800828: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8080082C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800830: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80800834: beq         $at, $zero, L_808009F0
    if (ctx->r1 == 0) {
        // 0x80800838: sw          $v0, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r2;
            goto L_808009F0;
    }
    // 0x80800838: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x8080083C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80800840: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80800844: addiu       $fp, $zero, 0x4000
    ctx->r30 = ADD32(0, 0X4000);
    // 0x80800848: addiu       $s7, $sp, 0x54
    ctx->r23 = ADD32(ctx->r29, 0X54);
    // 0x8080084C: addiu       $s6, $sp, 0x60
    ctx->r22 = ADD32(ctx->r29, 0X60);
    // 0x80800850: addiu       $s5, $sp, 0x6C
    ctx->r21 = ADD32(ctx->r29, 0X6C);
    // 0x80800854: lbu         $s2, 0xC($s1)
    ctx->r18 = MEM_BU(ctx->r17, 0XC);
L_80800858:
    // 0x80800858: lbu         $s3, 0xD($s1)
    ctx->r19 = MEM_BU(ctx->r17, 0XD);
    // 0x8080085C: lbu         $s4, 0xE($s1)
    ctx->r20 = MEM_BU(ctx->r17, 0XE);
    // 0x80800860: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800864: jal         0x800C8760
    // 0x80800868: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800C8760(rdram, ctx);
        goto after_0;
    // 0x80800868: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8080086C: beq         $v0, $zero, L_808009A0
    if (ctx->r2 == 0) {
        // 0x80800870: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_808009A0;
    }
    // 0x80800870: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80800874:
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800878: jal         0x800004B0
    // 0x8080087C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_808004B0_vplight(rdram, ctx);
        goto after_1;
    // 0x8080087C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x80800880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800884: jal         0x80000518
    // 0x80800888: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80800518_vplight(rdram, ctx);
        goto after_2;
    // 0x80800888: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800890: jal         0x800C8900
    // 0x80800894: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_800C8900(rdram, ctx);
        goto after_3;
    // 0x80800894: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_3:
    // 0x80800898: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8080089C: lh          $t8, 0x0($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X0);
    // 0x808008A0: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x808008A4: lh          $t0, 0x2($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X2);
    // 0x808008A8: subu        $v0, $t7, $t8
    ctx->r2 = SUB32(ctx->r15, ctx->r24);
    // 0x808008AC: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808008B0: subu        $v1, $t9, $t0
    ctx->r3 = SUB32(ctx->r25, ctx->r8);
    // 0x808008B4: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x808008B8: lh          $t2, 0x4($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X4);
    // 0x808008BC: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x808008C0: subu        $a0, $t1, $t2
    ctx->r4 = SUB32(ctx->r9, ctx->r10);
    // 0x808008C4: mflo        $t3
    ctx->r11 = lo;
    // 0x808008C8: nop

    // 0x808008CC: nop

    // 0x808008D0: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808008D4: mflo        $t4
    ctx->r12 = lo;
    // 0x808008D8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x808008DC: nop

    // 0x808008E0: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808008E4: mflo        $t6
    ctx->r14 = lo;
    // 0x808008E8: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x808008EC: slt         $at, $a1, $t7
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x808008F0: beq         $at, $zero, L_80800988
    if (ctx->r1 == 0) {
        // 0x808008F4: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80800988;
    }
    // 0x808008F4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808008F8: beql        $a1, $zero, L_80800920
    if (ctx->r5 == 0) {
        // 0x808008FC: lw          $a0, 0x60($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X60);
            goto L_80800920;
    }
    goto skip_0;
    // 0x808008FC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    skip_0:
    // 0x80800900: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80800904: jal         0x8002DCA0
    // 0x80800908: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    sqrtf_recomp(rdram, ctx);
        goto after_4;
    // 0x80800908: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x8080090C: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80800910: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80800914: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800918: nop

    // 0x8080091C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
L_80800920:
    // 0x80800920: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80800924: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80800928: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8080092C: beq         $at, $zero, L_80800950
    if (ctx->r1 == 0) {
        // 0x80800930: lw          $t3, 0x54($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X54);
            goto L_80800950;
    }
    // 0x80800930: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80800934: subu        $t0, $a2, $a0
    ctx->r8 = SUB32(ctx->r6, ctx->r4);
    // 0x80800938: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8080093C: mflo        $t1
    ctx->r9 = lo;
    // 0x80800940: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x80800944: subu        $v1, $fp, $t2
    ctx->r3 = SUB32(ctx->r30, ctx->r10);
    // 0x80800948: b           L_80800950
    // 0x8080094C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
        goto L_80800950;
    // 0x8080094C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_80800950:
    // 0x80800950: multu       $t3, $v0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800954: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80800958: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8080095C: mflo        $t4
    ctx->r12 = lo;
    // 0x80800960: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80800964: addu        $s2, $s2, $t5
    ctx->r18 = ADD32(ctx->r18, ctx->r13);
    // 0x80800968: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8080096C: mflo        $t7
    ctx->r15 = lo;
    // 0x80800970: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80800974: addu        $s3, $s3, $t8
    ctx->r19 = ADD32(ctx->r19, ctx->r24);
    // 0x80800978: multu       $t9, $v0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8080097C: mflo        $t0
    ctx->r8 = lo;
    // 0x80800980: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80800984: addu        $s4, $s4, $t1
    ctx->r20 = ADD32(ctx->r20, ctx->r9);
L_80800988:
    // 0x80800988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080098C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800990: jal         0x800C878C
    // 0x80800994: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800C878C(rdram, ctx);
        goto after_5;
    // 0x80800994: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x80800998: bne         $v0, $zero, L_80800874
    if (ctx->r2 != 0) {
        // 0x8080099C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80800874;
    }
    // 0x8080099C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_808009A0:
    // 0x808009A0: slti        $at, $s2, 0x100
    ctx->r1 = SIGNED(ctx->r18) < 0X100 ? 1 : 0;
    // 0x808009A4: bnel        $at, $zero, L_808009B4
    if (ctx->r1 != 0) {
        // 0x808009A8: slti        $at, $s3, 0x100
        ctx->r1 = SIGNED(ctx->r19) < 0X100 ? 1 : 0;
            goto L_808009B4;
    }
    goto skip_1;
    // 0x808009A8: slti        $at, $s3, 0x100
    ctx->r1 = SIGNED(ctx->r19) < 0X100 ? 1 : 0;
    skip_1:
    // 0x808009AC: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x808009B0: slti        $at, $s3, 0x100
    ctx->r1 = SIGNED(ctx->r19) < 0X100 ? 1 : 0;
L_808009B4:
    // 0x808009B4: bnel        $at, $zero, L_808009C4
    if (ctx->r1 != 0) {
        // 0x808009B8: slti        $at, $s4, 0x100
        ctx->r1 = SIGNED(ctx->r20) < 0X100 ? 1 : 0;
            goto L_808009C4;
    }
    goto skip_2;
    // 0x808009B8: slti        $at, $s4, 0x100
    ctx->r1 = SIGNED(ctx->r20) < 0X100 ? 1 : 0;
    skip_2:
    // 0x808009BC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x808009C0: slti        $at, $s4, 0x100
    ctx->r1 = SIGNED(ctx->r20) < 0X100 ? 1 : 0;
L_808009C4:
    // 0x808009C4: bnel        $at, $zero, L_808009D4
    if (ctx->r1 != 0) {
        // 0x808009C8: sb          $s2, 0xC($s1)
        MEM_B(0XC, ctx->r17) = ctx->r18;
            goto L_808009D4;
    }
    goto skip_3;
    // 0x808009C8: sb          $s2, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r18;
    skip_3:
    // 0x808009CC: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x808009D0: sb          $s2, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r18;
L_808009D4:
    // 0x808009D4: sb          $s3, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r19;
    // 0x808009D8: sb          $s4, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r20;
    // 0x808009DC: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x808009E0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x808009E4: sltu        $at, $s1, $t2
    ctx->r1 = ctx->r17 < ctx->r10 ? 1 : 0;
    // 0x808009E8: bnel        $at, $zero, L_80800858
    if (ctx->r1 != 0) {
        // 0x808009EC: lbu         $s2, 0xC($s1)
        ctx->r18 = MEM_BU(ctx->r17, 0XC);
            goto L_80800858;
    }
    goto skip_4;
    // 0x808009EC: lbu         $s2, 0xC($s1)
    ctx->r18 = MEM_BU(ctx->r17, 0XC);
    skip_4:
L_808009F0:
    // 0x808009F0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x808009F4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808009F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808009FC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80800A00: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80800A04: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80800A08: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80800A0C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80800A10: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80800A14: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80800A18: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80800A1C: jr          $ra
    // 0x80800A20: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80800A20: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x80800A24: nop

    // 0x80800A28: nop

    // 0x80800A2C: nop

;}
RECOMP_FUNC void func_80800000_vpmodule(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: bne         $a0, $zero, L_80800010
    if (ctx->r4 != 0) {
        // 0x80800004: slti        $at, $a0, 0x4B0
        ctx->r1 = SIGNED(ctx->r4) < 0X4B0 ? 1 : 0;
            goto L_80800010;
    }
    // 0x80800004: slti        $at, $a0, 0x4B0
    ctx->r1 = SIGNED(ctx->r4) < 0X4B0 ? 1 : 0;
    // 0x80800008: jr          $ra
    // 0x8080000C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8080000C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800010:
    // 0x80800010: bne         $at, $zero, L_8080001C
    if (ctx->r1 != 0) {
        // 0x80800014: slti        $at, $a0, 0x6A4
        ctx->r1 = SIGNED(ctx->r4) < 0X6A4 ? 1 : 0;
            goto L_8080001C;
    }
    // 0x80800014: slti        $at, $a0, 0x6A4
    ctx->r1 = SIGNED(ctx->r4) < 0X6A4 ? 1 : 0;
    // 0x80800018: bne         $at, $zero, L_80800030
    if (ctx->r1 != 0) {
        // 0x8080001C: slti        $at, $a0, 0x834
        ctx->r1 = SIGNED(ctx->r4) < 0X834 ? 1 : 0;
            goto L_80800030;
    }
L_8080001C:
    // 0x8080001C: slti        $at, $a0, 0x834
    ctx->r1 = SIGNED(ctx->r4) < 0X834 ? 1 : 0;
    // 0x80800020: bne         $at, $zero, L_80800038
    if (ctx->r1 != 0) {
        // 0x80800024: slti        $at, $a0, 0x898
        ctx->r1 = SIGNED(ctx->r4) < 0X898 ? 1 : 0;
            goto L_80800038;
    }
    // 0x80800024: slti        $at, $a0, 0x898
    ctx->r1 = SIGNED(ctx->r4) < 0X898 ? 1 : 0;
    // 0x80800028: beql        $at, $zero, L_8080003C
    if (ctx->r1 == 0) {
        // 0x8080002C: slti        $at, $a0, 0xC8
        ctx->r1 = SIGNED(ctx->r4) < 0XC8 ? 1 : 0;
            goto L_8080003C;
    }
    goto skip_0;
    // 0x8080002C: slti        $at, $a0, 0xC8
    ctx->r1 = SIGNED(ctx->r4) < 0XC8 ? 1 : 0;
    skip_0:
L_80800030:
    // 0x80800030: jr          $ra
    // 0x80800034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800038:
    // 0x80800038: slti        $at, $a0, 0xC8
    ctx->r1 = SIGNED(ctx->r4) < 0XC8 ? 1 : 0;
L_8080003C:
    // 0x8080003C: bne         $at, $zero, L_80800054
    if (ctx->r1 != 0) {
        // 0x80800040: slti        $at, $a0, 0x12C
        ctx->r1 = SIGNED(ctx->r4) < 0X12C ? 1 : 0;
            goto L_80800054;
    }
    // 0x80800040: slti        $at, $a0, 0x12C
    ctx->r1 = SIGNED(ctx->r4) < 0X12C ? 1 : 0;
    // 0x80800044: beql        $at, $zero, L_80800058
    if (ctx->r1 == 0) {
        // 0x80800048: slti        $at, $a0, 0x1F4
        ctx->r1 = SIGNED(ctx->r4) < 0X1F4 ? 1 : 0;
            goto L_80800058;
    }
    goto skip_1;
    // 0x80800048: slti        $at, $a0, 0x1F4
    ctx->r1 = SIGNED(ctx->r4) < 0X1F4 ? 1 : 0;
    skip_1:
    // 0x8080004C: jr          $ra
    // 0x80800050: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x80800050: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80800054:
    // 0x80800054: slti        $at, $a0, 0x1F4
    ctx->r1 = SIGNED(ctx->r4) < 0X1F4 ? 1 : 0;
L_80800058:
    // 0x80800058: bne         $at, $zero, L_80800070
    if (ctx->r1 != 0) {
        // 0x8080005C: slti        $at, $a0, 0x258
        ctx->r1 = SIGNED(ctx->r4) < 0X258 ? 1 : 0;
            goto L_80800070;
    }
    // 0x8080005C: slti        $at, $a0, 0x258
    ctx->r1 = SIGNED(ctx->r4) < 0X258 ? 1 : 0;
    // 0x80800060: beql        $at, $zero, L_80800074
    if (ctx->r1 == 0) {
        // 0x80800064: slti        $at, $a0, 0x64
        ctx->r1 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
            goto L_80800074;
    }
    goto skip_2;
    // 0x80800064: slti        $at, $a0, 0x64
    ctx->r1 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    skip_2:
    // 0x80800068: jr          $ra
    // 0x8080006C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x8080006C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80800070:
    // 0x80800070: slti        $at, $a0, 0x64
    ctx->r1 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
L_80800074:
    // 0x80800074: bne         $at, $zero, L_80800090
    if (ctx->r1 != 0) {
        // 0x80800078: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80800090;
    }
    // 0x80800078: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8080007C: slti        $at, $a0, 0xC8
    ctx->r1 = SIGNED(ctx->r4) < 0XC8 ? 1 : 0;
    // 0x80800080: beq         $at, $zero, L_80800090
    if (ctx->r1 == 0) {
        // 0x80800084: nop
    
            goto L_80800090;
    }
    // 0x80800084: nop

    // 0x80800088: jr          $ra
    // 0x8080008C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x8080008C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80800090:
    // 0x80800090: jr          $ra
    // 0x80800094: nop

    return;
    // 0x80800094: nop

;}
RECOMP_FUNC void vpmodule_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8080009C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x808000A0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x808000A4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x808000A8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x808000AC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x808000B0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x808000B4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x808000B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808000BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808000C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000C4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x808000C8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x808000CC: lw          $fp, 0x2C($a0)
    ctx->r30 = MEM_W(ctx->r4, 0X2C);
    // 0x808000D0: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x808000D4: bne         $fp, $zero, L_808000E4
    if (ctx->r30 != 0) {
        // 0x808000D8: sll         $v0, $fp, 3
        ctx->r2 = S32(ctx->r30 << 3);
            goto L_808000E4;
    }
    // 0x808000D8: sll         $v0, $fp, 3
    ctx->r2 = S32(ctx->r30 << 3);
    // 0x808000DC: b           L_808001F4
    // 0x808000E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808001F4;
    // 0x808000E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808000E4:
    // 0x808000E4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x808000E8: andi        $t6, $a0, 0xF
    ctx->r14 = ctx->r4 & 0XF;
    // 0x808000EC: beql        $t6, $zero, L_80800108
    if (ctx->r14 == 0) {
        // 0x808000F0: lh          $t8, 0x20($s7)
        ctx->r24 = MEM_H(ctx->r23, 0X20);
            goto L_80800108;
    }
    goto skip_0;
    // 0x808000F0: lh          $t8, 0x20($s7)
    ctx->r24 = MEM_H(ctx->r23, 0X20);
    skip_0:
    // 0x808000F4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_808000F8:
    // 0x808000F8: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x808000FC: bnel        $t7, $zero, L_808000F8
    if (ctx->r15 != 0) {
        // 0x80800100: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_808000F8;
    }
    goto skip_1;
    // 0x80800100: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x80800104: lh          $t8, 0x20($s7)
    ctx->r24 = MEM_H(ctx->r23, 0X20);
L_80800108:
    // 0x80800108: lh          $t1, 0x22($s7)
    ctx->r9 = MEM_H(ctx->r23, 0X22);
    // 0x8080010C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80800110: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80800114: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80800118: jal         0x8001ACCC
    // 0x8080011C: addu        $a0, $t0, $t2
    ctx->r4 = ADD32(ctx->r8, ctx->r10);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8080011C: addu        $a0, $t0, $t2
    ctx->r4 = ADD32(ctx->r8, ctx->r10);
    after_0:
    // 0x80800120: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80800124: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x80800128: blez        $fp, L_80800194
    if (SIGNED(ctx->r30) <= 0) {
        // 0x8080012C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80800194;
    }
    // 0x8080012C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80800130: lui         $s5, 0x0
    ctx->r21 = S32(RELOC_HI16(852, 0X8C0) << 16);
    // 0x80800134: addiu       $s5, $s5, 0x8C0
    ctx->r21 = ADD32(ctx->r21, (int16_t)RELOC_LO16(852, 0X8C0));
    // 0x80800138: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x8080013C: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x80800140: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_80800144:
    // 0x80800144: lw          $t3, 0x30($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X30);
    // 0x80800148: addu        $s3, $t3, $s7
    ctx->r19 = ADD32(ctx->r11, ctx->r23);
    // 0x8080014C: jal         0x80000000
    // 0x80800150: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    func_80800000_vpmodule(rdram, ctx);
        goto after_1;
    // 0x80800150: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_1:
    // 0x80800154: multu       $v0, $s6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800158: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8080015C: sb          $s4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r20;
    // 0x80800160: sh          $s1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r17;
    // 0x80800164: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80800168: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8080016C: mflo        $t4
    ctx->r12 = lo;
    // 0x80800170: addu        $t5, $s5, $t4
    ctx->r13 = ADD32(ctx->r21, ctx->r12);
    // 0x80800174: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x80800178: jalr        $t9
    // 0x8080017C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8080017C: nop

    after_2:
    // 0x80800180: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80800184: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80800188: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8080018C: bne         $s1, $fp, L_80800144
    if (ctx->r17 != ctx->r30) {
        // 0x80800190: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80800144;
    }
    // 0x80800190: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
L_80800194:
    // 0x80800194: andi        $t6, $s0, 0xF
    ctx->r14 = ctx->r16 & 0XF;
    // 0x80800198: beq         $t6, $zero, L_808001B0
    if (ctx->r14 == 0) {
        // 0x8080019C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_808001B0;
    }
    // 0x8080019C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808001A0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_808001A4:
    // 0x808001A4: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x808001A8: bnel        $t7, $zero, L_808001A4
    if (ctx->r15 != 0) {
        // 0x808001AC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_808001A4;
    }
    goto skip_2;
    // 0x808001AC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_2:
L_808001B0:
    // 0x808001B0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x808001B4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x808001B8: subu        $t1, $a1, $t8
    ctx->r9 = SUB32(ctx->r5, ctx->r24);
    // 0x808001BC: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x808001C0: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x808001C4: jal         0x800879A8
    // 0x808001C8: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    _dbvpl_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x808001C8: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_3:
    // 0x808001CC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x808001D0: lh          $t3, 0x20($s7)
    ctx->r11 = MEM_H(ctx->r23, 0X20);
    // 0x808001D4: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x808001D8: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x808001DC: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x808001E0: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x808001E4: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x808001E8: jal         0x800005C4
    // 0x808001EC: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    func_808005C4_vpmodule(rdram, ctx);
        goto after_4;
    // 0x808001EC: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_4:
    // 0x808001F0: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_808001F4:
    // 0x808001F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x808001F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800200: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800204: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800208: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8080020C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80800210: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80800214: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80800218: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8080021C: jr          $ra
    // 0x80800220: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80800220: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void vpmodule_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800224: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800228: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080022C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800230: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800234: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800238: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8080023C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800240: lw          $t7, 0x2C($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X2C);
    // 0x80800244: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x80800248: lui         $s2, 0x0
    ctx->r18 = S32(RELOC_HI16(852, 0X8C0) << 16);
    // 0x8080024C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80800250: addu        $s1, $t8, $a0
    ctx->r17 = ADD32(ctx->r24, ctx->r4);
    // 0x80800254: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80800258: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x8080025C: beq         $at, $zero, L_80800298
    if (ctx->r1 == 0) {
        // 0x80800260: addiu       $s3, $zero, 0x14
        ctx->r19 = ADD32(0, 0X14);
            goto L_80800298;
    }
    // 0x80800260: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x80800264: addiu       $s2, $s2, 0x8C0
    ctx->r18 = ADD32(ctx->r18, (int16_t)RELOC_LO16(852, 0X8C0));
    // 0x80800268: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
L_8080026C:
    // 0x8080026C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80800270: multu       $t9, $s3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800274: mflo        $t0
    ctx->r8 = lo;
    // 0x80800278: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x8080027C: lw          $t9, 0x8($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X8);
    // 0x80800280: jalr        $t9
    // 0x80800284: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80800284: nop

    after_0:
    // 0x80800288: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8080028C: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80800290: bnel        $at, $zero, L_8080026C
    if (ctx->r1 != 0) {
        // 0x80800294: lbu         $t9, 0x0($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X0);
            goto L_8080026C;
    }
    goto skip_0;
    // 0x80800294: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    skip_0:
L_80800298:
    // 0x80800298: jal         0x8001B084
    // 0x8080029C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x8080029C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x808002A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808002A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808002A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808002AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808002B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808002B4: jr          $ra
    // 0x808002B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808002B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void vpmodule_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808002C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808002C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x808002C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x808002CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808002D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808002D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002D8: lw          $t6, 0x2C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2C);
    // 0x808002DC: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x808002E0: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x808002E4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x808002E8: addu        $s3, $t7, $a0
    ctx->r19 = ADD32(ctx->r15, ctx->r4);
    // 0x808002EC: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x808002F0: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x808002F4: beq         $at, $zero, L_80800344
    if (ctx->r1 == 0) {
        // 0x808002F8: addiu       $s2, $zero, 0x14
        ctx->r18 = ADD32(0, 0X14);
            goto L_80800344;
    }
    // 0x808002F8: addiu       $s2, $zero, 0x14
    ctx->r18 = ADD32(0, 0X14);
    // 0x808002FC: lui         $s1, 0x0
    ctx->r17 = S32(RELOC_HI16(852, 0X8C0) << 16);
    // 0x80800300: addiu       $s1, $s1, 0x8C0
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(852, 0X8C0));
    // 0x80800304: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
L_80800308:
    // 0x80800308: beql        $t8, $zero, L_80800338
    if (ctx->r24 == 0) {
        // 0x8080030C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80800338;
    }
    goto skip_0;
    // 0x8080030C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_0:
    // 0x80800310: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80800314: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80800318: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8080031C: multu       $t9, $s2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800320: mflo        $t0
    ctx->r8 = lo;
    // 0x80800324: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x80800328: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8080032C: jalr        $t9
    // 0x80800330: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80800330: nop

    after_0:
    // 0x80800334: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80800338:
    // 0x80800338: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8080033C: bnel        $at, $zero, L_80800308
    if (ctx->r1 != 0) {
        // 0x80800340: lbu         $t8, 0x1($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X1);
            goto L_80800308;
    }
    goto skip_1;
    // 0x80800340: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    skip_1:
L_80800344:
    // 0x80800344: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800348: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080034C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800350: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800354: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800358: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8080035C: jr          $ra
    // 0x80800360: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80800360: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void vpmodule_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800364: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800368: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8080036C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80800370: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80800374: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80800378: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8080037C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800380: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800384: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800388: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8080038C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800390: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80800394: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80800398: lw          $t6, 0x1C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X1C);
    // 0x8080039C: lui         $s5, 0x0
    ctx->r21 = S32(RELOC_HI16(852, 0X8C0) << 16);
    // 0x808003A0: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x808003A4: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x808003A8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x808003AC: lw          $t8, 0x14($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X14);
    // 0x808003B0: addiu       $s5, $s5, 0x8C0
    ctx->r21 = ADD32(ctx->r21, (int16_t)RELOC_LO16(852, 0X8C0));
    // 0x808003B4: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x808003B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x808003BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x808003C0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x808003C4: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x808003C8: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x808003CC: lw          $t2, 0x2C($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X2C);
    // 0x808003D0: sltu        $at, $v0, $t1
    ctx->r1 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x808003D4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x808003D8: addu        $t5, $t3, $a0
    ctx->r13 = ADD32(ctx->r11, ctx->r4);
    // 0x808003DC: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x808003E0: beq         $at, $zero, L_80800594
    if (ctx->r1 == 0) {
        // 0x808003E4: sw          $t6, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r14;
            goto L_80800594;
    }
    // 0x808003E4: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x808003E8: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
L_808003EC:
    // 0x808003EC: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x808003F0: addiu       $a1, $v0, 0xA
    ctx->r5 = ADD32(ctx->r2, 0XA);
    // 0x808003F4: beql        $t7, $zero, L_80800584
    if (ctx->r15 == 0) {
        // 0x808003F8: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_80800584;
    }
    goto skip_0;
    // 0x808003F8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x808003FC: jal         0x800E3DC0
    // 0x80800400: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_800E3DC0(rdram, ctx);
        goto after_0;
    // 0x80800400: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_0:
    // 0x80800404: bne         $v0, $zero, L_80800414
    if (ctx->r2 != 0) {
        // 0x80800408: lw          $v1, 0x58($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X58);
            goto L_80800414;
    }
    // 0x80800408: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x8080040C: b           L_80800580
    // 0x80800410: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
        goto L_80800580;
    // 0x80800410: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_80800414:
    // 0x80800414: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x80800418: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x8080041C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80800420: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x80800424: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x80800428: addiu       $s0, $v1, 0x8
    ctx->r16 = ADD32(ctx->r3, 0X8);
    // 0x8080042C: addu        $s3, $v1, $t8
    ctx->r19 = ADD32(ctx->r3, ctx->r24);
    // 0x80800430: addu        $t2, $v1, $t9
    ctx->r10 = ADD32(ctx->r3, ctx->r25);
    // 0x80800434: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x80800438: sll         $t5, $a2, 4
    ctx->r13 = S32(ctx->r6 << 4);
    // 0x8080043C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80800440: addu        $a1, $t2, $t4
    ctx->r5 = ADD32(ctx->r10, ctx->r12);
    // 0x80800444: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800448: jal         0x80019E70
    // 0x8080044C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    func_80019E70(rdram, ctx);
        goto after_1;
    // 0x8080044C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    after_1:
    // 0x80800450: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80800454: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80800458: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8080045C: sltu        $at, $s0, $t6
    ctx->r1 = ctx->r16 < ctx->r14 ? 1 : 0;
    // 0x80800460: beq         $at, $zero, L_80800528
    if (ctx->r1 == 0) {
        // 0x80800464: subu        $s4, $t0, $t1
        ctx->r20 = SUB32(ctx->r8, ctx->r9);
            goto L_80800528;
    }
    // 0x80800464: subu        $s4, $t0, $t1
    ctx->r20 = SUB32(ctx->r8, ctx->r9);
    // 0x80800468: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8080046C: div         $zero, $s4, $at
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r1)));
    // 0x80800470: mflo        $s4
    ctx->r20 = lo;
    // 0x80800474: sll         $fp, $s4, 2
    ctx->r30 = S32(ctx->r20 << 2);
    // 0x80800478: nop

    // 0x8080047C: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
L_80800480:
    // 0x80800480: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80800484: addu        $t3, $s7, $t9
    ctx->r11 = ADD32(ctx->r23, ctx->r25);
    // 0x80800488: lw          $t2, 0x30($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X30);
    // 0x8080048C: addu        $v1, $t2, $s7
    ctx->r3 = ADD32(ctx->r10, ctx->r23);
    // 0x80800490: addu        $a0, $v1, $fp
    ctx->r4 = ADD32(ctx->r3, ctx->r30);
    // 0x80800494: lhu         $t4, 0x16($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X16);
    // 0x80800498: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x8080049C: beql        $t4, $zero, L_80800518
    if (ctx->r12 == 0) {
        // 0x808004A0: lw          $t5, 0x50($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X50);
            goto L_80800518;
    }
    goto skip_1;
    // 0x808004A0: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    skip_1:
    // 0x808004A4: lw          $t5, 0x14($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X14);
    // 0x808004A8: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x808004AC: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x808004B0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x808004B4: addu        $t0, $v1, $t6
    ctx->r8 = ADD32(ctx->r3, ctx->r14);
    // 0x808004B8: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x808004BC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x808004C0: addu        $s2, $t7, $s0
    ctx->r18 = ADD32(ctx->r15, ctx->r16);
    // 0x808004C4: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x808004C8: beql        $at, $zero, L_80800518
    if (ctx->r1 == 0) {
        // 0x808004CC: lw          $t5, 0x50($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X50);
            goto L_80800518;
    }
    goto skip_2;
    // 0x808004CC: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    skip_2:
    // 0x808004D0: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
L_808004D4:
    // 0x808004D4: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x808004D8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x808004DC: multu       $t3, $s6
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808004E0: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x808004E4: addu        $a2, $t9, $s3
    ctx->r6 = ADD32(ctx->r25, ctx->r19);
    // 0x808004E8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x808004EC: lbu         $a3, 0x0($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X0);
    // 0x808004F0: mflo        $t2
    ctx->r10 = lo;
    // 0x808004F4: addu        $t4, $s5, $t2
    ctx->r12 = ADD32(ctx->r21, ctx->r10);
    // 0x808004F8: lw          $t9, 0xC($t4)
    ctx->r25 = MEM_W(ctx->r12, 0XC);
    // 0x808004FC: jalr        $t9
    // 0x80800500: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80800500: nop

    after_2:
    // 0x80800504: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80800508: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8080050C: bnel        $at, $zero, L_808004D4
    if (ctx->r1 != 0) {
        // 0x80800510: lbu         $t3, 0x0($s1)
        ctx->r11 = MEM_BU(ctx->r17, 0X0);
            goto L_808004D4;
    }
    goto skip_3;
    // 0x80800510: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    skip_3:
    // 0x80800514: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
L_80800518:
    // 0x80800518: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8080051C: sltu        $at, $s1, $t5
    ctx->r1 = ctx->r17 < ctx->r13 ? 1 : 0;
    // 0x80800520: bnel        $at, $zero, L_80800480
    if (ctx->r1 != 0) {
        // 0x80800524: lh          $t8, 0x2($s1)
        ctx->r24 = MEM_H(ctx->r17, 0X2);
            goto L_80800480;
    }
    goto skip_4;
    // 0x80800524: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
    skip_4:
L_80800528:
    // 0x80800528: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8080052C: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x80800530: lbu         $t0, 0x2($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X2);
    // 0x80800534: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x80800538: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8080053C: addu        $s0, $t1, $s3
    ctx->r16 = ADD32(ctx->r9, ctx->r19);
    // 0x80800540: sltu        $at, $s3, $s0
    ctx->r1 = ctx->r19 < ctx->r16 ? 1 : 0;
    // 0x80800544: beql        $at, $zero, L_8080057C
    if (ctx->r1 == 0) {
        // 0x80800548: lw          $v0, 0x48($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X48);
            goto L_8080057C;
    }
    goto skip_5;
    // 0x80800548: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    skip_5:
    // 0x8080054C: lhu         $t7, 0x6($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X6);
L_80800550:
    // 0x80800550: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80800554: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80800558: andi        $t8, $t7, 0x7FFF
    ctx->r24 = ctx->r15 & 0X7FFF;
    // 0x8080055C: sll         $t3, $t8, 4
    ctx->r11 = S32(ctx->r24 << 4);
    // 0x80800560: jal         0x80019E70
    // 0x80800564: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    func_80019E70(rdram, ctx);
        goto after_3;
    // 0x80800564: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    after_3:
    // 0x80800568: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x8080056C: sltu        $at, $s3, $s0
    ctx->r1 = ctx->r19 < ctx->r16 ? 1 : 0;
    // 0x80800570: bnel        $at, $zero, L_80800550
    if (ctx->r1 != 0) {
        // 0x80800574: lhu         $t7, 0x6($s3)
        ctx->r15 = MEM_HU(ctx->r19, 0X6);
            goto L_80800550;
    }
    goto skip_6;
    // 0x80800574: lhu         $t7, 0x6($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X6);
    skip_6:
    // 0x80800578: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_8080057C:
    // 0x8080057C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
L_80800580:
    // 0x80800580: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_80800584:
    // 0x80800584: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80800588: sltu        $at, $v0, $t4
    ctx->r1 = ctx->r2 < ctx->r12 ? 1 : 0;
    // 0x8080058C: bnel        $at, $zero, L_808003EC
    if (ctx->r1 != 0) {
        // 0x80800590: lbu         $t7, 0x3($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X3);
            goto L_808003EC;
    }
    goto skip_7;
    // 0x80800590: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    skip_7:
L_80800594:
    // 0x80800594: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800598: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080059C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808005A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808005A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x808005A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x808005AC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x808005B0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x808005B4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x808005B8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x808005BC: jr          $ra
    // 0x808005C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x808005C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_808005C4_vpmodule(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005C4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x808005C8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x808005CC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x808005D0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x808005D4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x808005D8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x808005DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x808005E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x808005E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808005E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808005EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005F0: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x808005F4: lw          $t7, 0x14($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X14);
    // 0x808005F8: lw          $t6, 0x1C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X1C);
    // 0x808005FC: lw          $t9, 0x2C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X2C);
    // 0x80800600: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80800604: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80800608: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8080060C: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x80800610: addu        $t0, $t8, $v1
    ctx->r8 = ADD32(ctx->r24, ctx->r3);
    // 0x80800614: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x80800618: addu        $fp, $t1, $a0
    ctx->r30 = ADD32(ctx->r9, ctx->r4);
    // 0x8080061C: sltu        $at, $v1, $t0
    ctx->r1 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x80800620: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x80800624: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80800628: beq         $at, $zero, L_8080081C
    if (ctx->r1 == 0) {
        // 0x8080062C: or          $s7, $v1, $zero
        ctx->r23 = ctx->r3 | 0;
            goto L_8080081C;
    }
    // 0x8080062C: or          $s7, $v1, $zero
    ctx->r23 = ctx->r3 | 0;
    // 0x80800630: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x80800634: lui         $s5, 0x0
    ctx->r21 = S32(RELOC_HI16(852, 0X8C0) << 16);
    // 0x80800638: addiu       $s5, $s5, 0x8C0
    ctx->r21 = ADD32(ctx->r21, (int16_t)RELOC_LO16(852, 0X8C0));
    // 0x8080063C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80800640: sw          $v1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r3;
    // 0x80800644: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x80800648: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x8080064C: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
    // 0x80800650: lw          $a3, 0x80($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X80);
L_80800654:
    // 0x80800654: lh          $t5, 0x0($s7)
    ctx->r13 = MEM_H(ctx->r23, 0X0);
    // 0x80800658: lbu         $a2, 0x2($s7)
    ctx->r6 = MEM_BU(ctx->r23, 0X2);
    // 0x8080065C: lw          $t2, 0x4($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X4);
    // 0x80800660: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x80800664: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x80800668: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x8080066C: addu        $s3, $a3, $t2
    ctx->r19 = ADD32(ctx->r7, ctx->r10);
    // 0x80800670: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x80800674: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80800678: addu        $a1, $t4, $t6
    ctx->r5 = ADD32(ctx->r12, ctx->r14);
    // 0x8080067C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800680: jal         0x80019E70
    // 0x80800684: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_80019E70(rdram, ctx);
        goto after_0;
    // 0x80800684: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_0:
    // 0x80800688: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8080068C: sltu        $at, $t8, $fp
    ctx->r1 = ctx->r24 < ctx->r30 ? 1 : 0;
    // 0x80800690: beql        $at, $zero, L_80800794
    if (ctx->r1 == 0) {
        // 0x80800694: lw          $v0, 0x80($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X80);
            goto L_80800794;
    }
    goto skip_0;
    // 0x80800694: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    skip_0:
    // 0x80800698: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
L_8080069C:
    // 0x8080069C: multu       $t9, $s4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808006A0: mflo        $t1
    ctx->r9 = lo;
    // 0x808006A4: addu        $t2, $s5, $t1
    ctx->r10 = ADD32(ctx->r21, ctx->r9);
    // 0x808006A8: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x808006AC: beql        $t3, $zero, L_80800784
    if (ctx->r11 == 0) {
        // 0x808006B0: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80800784;
    }
    goto skip_1;
    // 0x808006B0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    skip_1:
    // 0x808006B4: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x808006B8: lh          $t5, 0x2($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X2);
    // 0x808006BC: subu        $t9, $s7, $t8
    ctx->r25 = SUB32(ctx->r23, ctx->r24);
    // 0x808006C0: div         $zero, $t9, $s4
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r20)));
    // 0x808006C4: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x808006C8: addu        $t6, $s6, $t4
    ctx->r14 = ADD32(ctx->r22, ctx->r12);
    // 0x808006CC: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x808006D0: mflo        $t1
    ctx->r9 = lo;
    // 0x808006D4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x808006D8: addu        $v1, $t7, $s6
    ctx->r3 = ADD32(ctx->r15, ctx->r22);
    // 0x808006DC: addu        $a0, $v1, $t2
    ctx->r4 = ADD32(ctx->r3, ctx->r10);
    // 0x808006E0: lhu         $t3, 0x16($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X16);
    // 0x808006E4: bne         $s4, $zero, L_808006F0
    if (ctx->r20 != 0) {
        // 0x808006E8: nop
    
            goto L_808006F0;
    }
    // 0x808006E8: nop

    // 0x808006EC: break       7
    do_break(2155874028);
L_808006F0:
    // 0x808006F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x808006F4: bne         $s4, $at, L_80800708
    if (ctx->r20 != ctx->r1) {
        // 0x808006F8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80800708;
    }
    // 0x808006F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x808006FC: bne         $t9, $at, L_80800708
    if (ctx->r25 != ctx->r1) {
        // 0x80800700: nop
    
            goto L_80800708;
    }
    // 0x80800700: nop

    // 0x80800704: break       6
    do_break(2155874052);
L_80800708:
    // 0x80800708: beql        $t3, $zero, L_80800784
    if (ctx->r11 == 0) {
        // 0x8080070C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80800784;
    }
    goto skip_2;
    // 0x8080070C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    skip_2:
    // 0x80800710: lw          $t5, 0x14($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X14);
    // 0x80800714: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x80800718: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x8080071C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80800720: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x80800724: addu        $t6, $v1, $t4
    ctx->r14 = ADD32(ctx->r3, ctx->r12);
    // 0x80800728: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x8080072C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80800730: addu        $s1, $t8, $s0
    ctx->r17 = ADD32(ctx->r24, ctx->r16);
    // 0x80800734: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80800738: beql        $at, $zero, L_80800784
    if (ctx->r1 == 0) {
        // 0x8080073C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80800784;
    }
    goto skip_3;
    // 0x8080073C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    skip_3:
    // 0x80800740: lbu         $t1, 0x0($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X0);
L_80800744:
    // 0x80800744: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80800748: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8080074C: multu       $t1, $s4
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800750: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x80800754: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    // 0x80800758: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8080075C: mflo        $t2
    ctx->r10 = lo;
    // 0x80800760: addu        $t3, $s5, $t2
    ctx->r11 = ADD32(ctx->r21, ctx->r10);
    // 0x80800764: lw          $t9, 0x10($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X10);
    // 0x80800768: jalr        $t9
    // 0x8080076C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8080076C: nop

    after_1:
    // 0x80800770: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800774: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80800778: bnel        $at, $zero, L_80800744
    if (ctx->r1 != 0) {
        // 0x8080077C: lbu         $t1, 0x0($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X0);
            goto L_80800744;
    }
    goto skip_4;
    // 0x8080077C: lbu         $t1, 0x0($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X0);
    skip_4:
    // 0x80800780: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_80800784:
    // 0x80800784: sltu        $at, $s2, $fp
    ctx->r1 = ctx->r18 < ctx->r30 ? 1 : 0;
    // 0x80800788: bnel        $at, $zero, L_8080069C
    if (ctx->r1 != 0) {
        // 0x8080078C: lbu         $t9, 0x0($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X0);
            goto L_8080069C;
    }
    goto skip_5;
    // 0x8080078C: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    skip_5:
    // 0x80800790: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
L_80800794:
    // 0x80800794: lh          $t6, 0x0($s7)
    ctx->r14 = MEM_H(ctx->r23, 0X0);
    // 0x80800798: lbu         $a2, 0x2($s7)
    ctx->r6 = MEM_BU(ctx->r23, 0X2);
    // 0x8080079C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x808007A0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x808007A4: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x808007A8: addu        $t4, $v0, $t5
    ctx->r12 = ADD32(ctx->r2, ctx->r13);
    // 0x808007AC: addu        $a0, $t4, $t7
    ctx->r4 = ADD32(ctx->r12, ctx->r15);
    // 0x808007B0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x808007B4: jal         0x80019E70
    // 0x808007B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019E70(rdram, ctx);
        goto after_2;
    // 0x808007B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x808007BC: lbu         $t1, 0x2($s7)
    ctx->r9 = MEM_BU(ctx->r23, 0X2);
    // 0x808007C0: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x808007C4: addu        $s0, $t2, $s3
    ctx->r16 = ADD32(ctx->r10, ctx->r19);
    // 0x808007C8: sltu        $at, $s3, $s0
    ctx->r1 = ctx->r19 < ctx->r16 ? 1 : 0;
    // 0x808007CC: beql        $at, $zero, L_8080080C
    if (ctx->r1 == 0) {
        // 0x808007D0: lw          $t6, 0x6C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X6C);
            goto L_8080080C;
    }
    goto skip_6;
    // 0x808007D0: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    skip_6:
    // 0x808007D4: lw          $s1, 0x88($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X88);
    // 0x808007D8: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x808007DC: lhu         $t3, 0x6($s3)
    ctx->r11 = MEM_HU(ctx->r19, 0X6);
L_808007E0:
    // 0x808007E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x808007E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x808007E8: andi        $t9, $t3, 0x7FFF
    ctx->r25 = ctx->r11 & 0X7FFF;
    // 0x808007EC: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x808007F0: jal         0x80019E70
    // 0x808007F4: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    func_80019E70(rdram, ctx);
        goto after_3;
    // 0x808007F4: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    after_3:
    // 0x808007F8: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x808007FC: sltu        $at, $s3, $s0
    ctx->r1 = ctx->r19 < ctx->r16 ? 1 : 0;
    // 0x80800800: bnel        $at, $zero, L_808007E0
    if (ctx->r1 != 0) {
        // 0x80800804: lhu         $t3, 0x6($s3)
        ctx->r11 = MEM_HU(ctx->r19, 0X6);
            goto L_808007E0;
    }
    goto skip_7;
    // 0x80800804: lhu         $t3, 0x6($s3)
    ctx->r11 = MEM_HU(ctx->r19, 0X6);
    skip_7:
    // 0x80800808: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
L_8080080C:
    // 0x8080080C: addiu       $s7, $s7, 0x14
    ctx->r23 = ADD32(ctx->r23, 0X14);
    // 0x80800810: sltu        $at, $s7, $t6
    ctx->r1 = ctx->r23 < ctx->r14 ? 1 : 0;
    // 0x80800814: bnel        $at, $zero, L_80800654
    if (ctx->r1 != 0) {
        // 0x80800818: lw          $a3, 0x80($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X80);
            goto L_80800654;
    }
    goto skip_8;
    // 0x80800818: lw          $a3, 0x80($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X80);
    skip_8:
L_8080081C:
    // 0x8080081C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800820: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800824: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800828: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8080082C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800830: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80800834: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80800838: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8080083C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80800840: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80800844: jr          $ra
    // 0x80800848: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80800848: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void vpmodule_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080084C: lw          $t6, 0x2C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2C);
    // 0x80800850: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x80800854: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80800858: addu        $t0, $t7, $a0
    ctx->r8 = ADD32(ctx->r15, ctx->r4);
    // 0x8080085C: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80800860: sltu        $at, $v1, $t0
    ctx->r1 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x80800864: beql        $at, $zero, L_808008AC
    if (ctx->r1 == 0) {
        // 0x80800868: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808008AC;
    }
    goto skip_0;
    // 0x80800868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8080086C: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
L_80800870:
    // 0x80800870: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80800874: addu        $t1, $a1, $t9
    ctx->r9 = ADD32(ctx->r5, ctx->r25);
    // 0x80800878: lw          $t2, 0x30($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X30);
    // 0x8080087C: addu        $v0, $t2, $a1
    ctx->r2 = ADD32(ctx->r10, ctx->r5);
    // 0x80800880: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80800884: bnel        $a2, $t3, L_8080089C
    if (ctx->r6 != ctx->r11) {
        // 0x80800888: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_8080089C;
    }
    goto skip_1;
    // 0x80800888: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    skip_1:
    // 0x8080088C: sb          $a3, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r7;
    // 0x80800890: jr          $ra
    // 0x80800894: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800894: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800898: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_8080089C:
    // 0x8080089C: sltu        $at, $v1, $t0
    ctx->r1 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x808008A0: bnel        $at, $zero, L_80800870
    if (ctx->r1 != 0) {
        // 0x808008A4: lh          $t8, 0x2($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X2);
            goto L_80800870;
    }
    goto skip_2;
    // 0x808008A4: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    skip_2:
    // 0x808008A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808008AC:
    // 0x808008AC: jr          $ra
    // 0x808008B0: nop

    return;
    // 0x808008B0: nop

    // 0x808008B4: nop

    // 0x808008B8: nop

    // 0x808008BC: nop

;}
RECOMP_FUNC void vpscroll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x80800010: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800014: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80800018: jal         0x8001ACCC
    // 0x8080001C: addiu       $a0, $t7, 0x10
    ctx->r4 = ADD32(ctx->r15, 0X10);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8080001C: addiu       $a0, $t7, 0x10
    ctx->r4 = ADD32(ctx->r15, 0X10);
    after_0:
    // 0x80800020: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80800028: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080002C: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x80800030: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80800034: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x80800038: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8080003C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80800040: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80800044: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80800048: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8080004C: mfhi        $t2
    ctx->r10 = hi;
    // 0x80800050: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80800054: addu        $a1, $t0, $a2
    ctx->r5 = ADD32(ctx->r8, ctx->r6);
    // 0x80800058: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8080005C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800060: addiu       $a0, $a2, 0x14
    ctx->r4 = ADD32(ctx->r6, 0X14);
    // 0x80800064: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x80800068: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8080006C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80800070: beq         $at, $zero, L_808000B8
    if (ctx->r1 == 0) {
        // 0x80800074: swc1        $f8, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
            goto L_808000B8;
    }
    // 0x80800074: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80800078: lhu         $t3, 0x2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X2);
L_8080007C:
    // 0x8080007C: beql        $t3, $zero, L_808000AC
    if (ctx->r11 == 0) {
        // 0x80800080: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_808000AC;
    }
    goto skip_0;
    // 0x80800080: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x80800084: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80800088: subu        $t4, $v1, $a0
    ctx->r12 = SUB32(ctx->r3, ctx->r4);
    // 0x8080008C: sra         $t5, $t4, 2
    ctx->r13 = S32(SIGNED(ctx->r12) >> 2);
    // 0x80800090: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80800094: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80800098: sh          $t5, 0x10($t8)
    MEM_H(0X10, ctx->r24) = ctx->r13;
    // 0x8080009C: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x808000A0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x808000A4: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x808000A8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_808000AC:
    // 0x808000AC: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x808000B0: bnel        $at, $zero, L_8080007C
    if (ctx->r1 != 0) {
        // 0x808000B4: lhu         $t3, 0x2($v1)
        ctx->r11 = MEM_HU(ctx->r3, 0X2);
            goto L_8080007C;
    }
    goto skip_1;
    // 0x808000B4: lhu         $t3, 0x2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X2);
    skip_1:
L_808000B8:
    // 0x808000B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000C0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x808000C4: jr          $ra
    // 0x808000C8: nop

    return;
    // 0x808000C8: nop

;}
RECOMP_FUNC void vpscroll_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D4: jal         0x8001B084
    // 0x808000D8: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x808000D8: nop

    after_0:
    // 0x808000DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000E4: jr          $ra
    // 0x808000E8: nop

    return;
    // 0x808000E8: nop

;}
RECOMP_FUNC void vpscroll_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808000F8: jal         0x800D8FF8
    // 0x808000FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808000FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800100: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800104: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80800108: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080010C: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80800110: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80800114: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800118: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8080011C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800120: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80800124: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80800128: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x8080012C: lwc1        $f2, 0x0($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80800130: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x80800134: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x80800138: nop

    // 0x8080013C: slti        $at, $v1, 0x2001
    ctx->r1 = SIGNED(ctx->r3) < 0X2001 ? 1 : 0;
    // 0x80800140: bne         $at, $zero, L_80800168
    if (ctx->r1 != 0) {
        // 0x80800144: lui         $at, 0x4600
        ctx->r1 = S32(0X4600 << 16);
            goto L_80800168;
    }
    // 0x80800144: lui         $at, 0x4600
    ctx->r1 = S32(0X4600 << 16);
    // 0x80800148: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080014C: nop

    // 0x80800150: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x80800154: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x80800158: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8080015C: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80800160: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x80800164: nop

L_80800168:
    // 0x80800168: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x8080016C: sh          $v1, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r3;
    // 0x80800170: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x80800174: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800178: blez        $t9, L_808001B4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8080017C: addu        $a3, $a0, $t8
        ctx->r7 = ADD32(ctx->r4, ctx->r24);
            goto L_808001B4;
    }
    // 0x8080017C: addu        $a3, $a0, $t8
    ctx->r7 = ADD32(ctx->r4, ctx->r24);
    // 0x80800180: addiu       $v1, $a2, 0x10
    ctx->r3 = ADD32(ctx->r6, 0X10);
    // 0x80800184: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80800188: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
L_8080018C:
    // 0x8080018C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80800190: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80800194: multu       $t0, $a0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800198: mflo        $t1
    ctx->r9 = lo;
    // 0x8080019C: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x808001A0: sb          $a1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r5;
    // 0x808001A4: lw          $t3, 0xC($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XC);
    // 0x808001A8: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x808001AC: bnel        $at, $zero, L_8080018C
    if (ctx->r1 != 0) {
        // 0x808001B0: lh          $t0, 0x0($v1)
        ctx->r8 = MEM_H(ctx->r3, 0X0);
            goto L_8080018C;
    }
    goto skip_0;
    // 0x808001B0: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    skip_0:
L_808001B4:
    // 0x808001B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001BC: jr          $ra
    // 0x808001C0: nop

    return;
    // 0x808001C0: nop

;}
RECOMP_FUNC void vpscroll_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C4: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x808001C8: addu        $v1, $t6, $a2
    ctx->r3 = ADD32(ctx->r14, ctx->r6);
    // 0x808001CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x808001D0: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x808001D4: beq         $at, $zero, L_808001F4
    if (ctx->r1 == 0) {
        // 0x808001D8: lh          $v0, 0x4($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X4);
            goto L_808001F4;
    }
    // 0x808001D8: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
L_808001DC:
    // 0x808001DC: lh          $t7, 0xA($a2)
    ctx->r15 = MEM_H(ctx->r6, 0XA);
    // 0x808001E0: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x808001E4: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x808001E8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x808001EC: bne         $at, $zero, L_808001DC
    if (ctx->r1 != 0) {
        // 0x808001F0: sh          $t8, -0x6($a2)
        MEM_H(-0X6, ctx->r6) = ctx->r24;
            goto L_808001DC;
    }
    // 0x808001F0: sh          $t8, -0x6($a2)
    MEM_H(-0X6, ctx->r6) = ctx->r24;
L_808001F4:
    // 0x808001F4: jr          $ra
    // 0x808001F8: nop

    return;
    // 0x808001F8: nop

    // 0x808001FC: nop

;}
RECOMP_FUNC void func_80800000_vpwibble(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80800004: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x80800008: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(854, 0X70E) << 16);
    // 0x8080000C: lh          $t7, 0x70E($t7)
    ctx->r15 = MEM_H(ctx->r15, (int16_t)RELOC_LO16(854, 0X70E));
    // 0x80800010: mfhi        $t6
    ctx->r14 = hi;
    // 0x80800014: subu        $a0, $a0, $t6
    ctx->r4 = SUB32(ctx->r4, ctx->r14);
    // 0x80800018: bne         $a0, $t7, L_8080002C
    if (ctx->r4 != ctx->r15) {
        // 0x8080001C: lui         $t8, 0x0
        ctx->r24 = S32(RELOC_HI16(854, 0X71E) << 16);
            goto L_8080002C;
    }
    // 0x8080001C: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(854, 0X71E) << 16);
    // 0x80800020: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(854, 0X700) << 16);
    // 0x80800024: jr          $ra
    // 0x80800028: addiu       $v0, $a1, 0x700
    ctx->r2 = ADD32(ctx->r5, (int16_t)RELOC_LO16(854, 0X700));
    return;
    // 0x80800028: addiu       $v0, $a1, 0x700
    ctx->r2 = ADD32(ctx->r5, (int16_t)RELOC_LO16(854, 0X700));
L_8080002C:
    // 0x8080002C: lh          $t8, 0x71E($t8)
    ctx->r24 = MEM_H(ctx->r24, (int16_t)RELOC_LO16(854, 0X71E));
    // 0x80800030: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(854, 0X700) << 16);
    // 0x80800034: addiu       $a1, $a1, 0x700
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(854, 0X700));
    // 0x80800038: bne         $a0, $t8, L_8080004C
    if (ctx->r4 != ctx->r24) {
        // 0x8080003C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8080004C;
    }
    // 0x8080003C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80800040: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(854, 0X710) << 16);
    // 0x80800044: jr          $ra
    // 0x80800048: addiu       $v0, $v0, 0x710
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(854, 0X710));
    return;
    // 0x80800048: addiu       $v0, $v0, 0x710
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(854, 0X710));
L_8080004C:
    // 0x8080004C: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x80800050: addu        $v1, $a1, $t9
    ctx->r3 = ADD32(ctx->r5, ctx->r25);
    // 0x80800054: lh          $t0, 0xE($v1)
    ctx->r8 = MEM_H(ctx->r3, 0XE);
    // 0x80800058: bnel        $a0, $t0, L_8080006C
    if (ctx->r4 != ctx->r8) {
        // 0x8080005C: lh          $t1, 0x1E($v1)
        ctx->r9 = MEM_H(ctx->r3, 0X1E);
            goto L_8080006C;
    }
    goto skip_0;
    // 0x8080005C: lh          $t1, 0x1E($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X1E);
    skip_0:
    // 0x80800060: jr          $ra
    // 0x80800064: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800064: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800068: lh          $t1, 0x1E($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X1E);
L_8080006C:
    // 0x8080006C: bnel        $a0, $t1, L_80800080
    if (ctx->r4 != ctx->r9) {
        // 0x80800070: lh          $t2, 0x2E($v1)
        ctx->r10 = MEM_H(ctx->r3, 0X2E);
            goto L_80800080;
    }
    goto skip_1;
    // 0x80800070: lh          $t2, 0x2E($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2E);
    skip_1:
    // 0x80800074: jr          $ra
    // 0x80800078: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    return;
    // 0x80800078: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8080007C: lh          $t2, 0x2E($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2E);
L_80800080:
    // 0x80800080: bnel        $a0, $t2, L_80800094
    if (ctx->r4 != ctx->r10) {
        // 0x80800084: lh          $t3, 0x3E($v1)
        ctx->r11 = MEM_H(ctx->r3, 0X3E);
            goto L_80800094;
    }
    goto skip_2;
    // 0x80800084: lh          $t3, 0x3E($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X3E);
    skip_2:
    // 0x80800088: jr          $ra
    // 0x8080008C: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    return;
    // 0x8080008C: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80800090: lh          $t3, 0x3E($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X3E);
L_80800094:
    // 0x80800094: bnel        $a0, $t3, L_808000A8
    if (ctx->r4 != ctx->r11) {
        // 0x80800098: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_808000A8;
    }
    goto skip_3;
    // 0x80800098: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    skip_3:
    // 0x8080009C: jr          $ra
    // 0x808000A0: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    return;
    // 0x808000A0: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x808000A4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_808000A8:
    // 0x808000A8: jr          $ra
    // 0x808000AC: nop

    return;
    // 0x808000AC: nop

;}
RECOMP_FUNC void func_808000B0_vpwibble(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x808000BC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x808000C0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x808000C4: jal         0x80000000
    // 0x808000C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800000_vpwibble(rdram, ctx);
        goto after_0;
    // 0x808000C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808000CC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808000D0: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x808000D4: lbu         $t7, 0xD($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XD);
    // 0x808000D8: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x808000DC: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x808000E0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x808000E4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x808000E8: mfhi        $a1
    ctx->r5 = hi;
    // 0x808000EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808000F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x808000F4: swc1        $f6, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f6.u32l;
    // 0x808000F8: lbu         $t9, 0xD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XD);
    // 0x808000FC: beql        $t9, $zero, L_80800114
    if (ctx->r25 == 0) {
        // 0x80800100: sb          $zero, 0x33($a2)
        MEM_B(0X33, ctx->r6) = 0;
            goto L_80800114;
    }
    goto skip_0;
    // 0x80800100: sb          $zero, 0x33($a2)
    MEM_B(0X33, ctx->r6) = 0;
    skip_0:
    // 0x80800104: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80800108: b           L_80800114
    // 0x8080010C: sb          $v1, 0x33($a2)
    MEM_B(0X33, ctx->r6) = ctx->r3;
        goto L_80800114;
    // 0x8080010C: sb          $v1, 0x33($a2)
    MEM_B(0X33, ctx->r6) = ctx->r3;
    // 0x80800110: sb          $zero, 0x33($a2)
    MEM_B(0X33, ctx->r6) = 0;
L_80800114:
    // 0x80800114: lwc1        $f2, 0x10($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X10);
    // 0x80800118: lwc1        $f12, 0x4($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8080011C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80800120: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800124: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x80800128: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8080012C: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80800130: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80800134: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80800138: nop

    // 0x8080013C: sh          $t1, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r9;
    // 0x80800140: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800144: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80800148: nop

    // 0x8080014C: bc1fl       L_80800174
    if (!c1cs) {
        // 0x80800150: c.lt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
            goto L_80800174;
    }
    goto skip_1;
    // 0x80800150: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    skip_1:
    // 0x80800154: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80800158: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8080015C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800160: sb          $t4, 0x31($a2)
    MEM_B(0X31, ctx->r6) = ctx->r12;
    // 0x80800164: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x80800168: b           L_808001B4
    // 0x8080016C: sh          $t3, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r11;
        goto L_808001B4;
    // 0x8080016C: sh          $t3, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r11;
    // 0x80800170: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
L_80800174:
    // 0x80800174: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800178: bc1fl       L_80800198
    if (!c1cs) {
        // 0x8080017C: sub.s       $f10, $f2, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80800198;
    }
    goto skip_2;
    // 0x8080017C: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    skip_2:
    // 0x80800180: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800184: sb          $zero, 0x31($a2)
    MEM_B(0X31, ctx->r6) = 0;
    // 0x80800188: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8080018C: b           L_808001B4
    // 0x80800190: sh          $t6, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r14;
        goto L_808001B4;
    // 0x80800190: sh          $t6, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r14;
    // 0x80800194: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
L_80800198:
    // 0x80800198: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080019C: sb          $v1, 0x31($a2)
    MEM_B(0X31, ctx->r6) = ctx->r3;
    // 0x808001A0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x808001A4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x808001A8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x808001AC: nop

    // 0x808001B0: sh          $t8, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r24;
L_808001B4:
    // 0x808001B4: lbu         $t9, 0xC($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XC);
    // 0x808001B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x808001BC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x808001C0: bgez        $t9, L_808001D4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x808001C4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_808001D4;
    }
    // 0x808001C4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x808001C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808001CC: nop

    // 0x808001D0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_808001D4:
    // 0x808001D4: lh          $t0, 0x1A($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X1A);
    // 0x808001D8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x808001DC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(854, 0X6F0) << 16);
    // 0x808001E0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x808001E4: nop

    // 0x808001E8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x808001EC: div.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x808001F0: swc1        $f4, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f4.u32l;
    // 0x808001F4: lbu         $t1, 0xC($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XC);
    // 0x808001F8: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x808001FC: sb          $t3, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r11;
    // 0x80800200: lbu         $t4, 0xC($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XC);
    // 0x80800204: beql        $t4, $zero, L_80800218
    if (ctx->r12 == 0) {
        // 0x80800208: sb          $zero, 0x32($a2)
        MEM_B(0X32, ctx->r6) = 0;
            goto L_80800218;
    }
    goto skip_3;
    // 0x80800208: sb          $zero, 0x32($a2)
    MEM_B(0X32, ctx->r6) = 0;
    skip_3:
    // 0x8080020C: b           L_80800218
    // 0x80800210: sb          $v1, 0x32($a2)
    MEM_B(0X32, ctx->r6) = ctx->r3;
        goto L_80800218;
    // 0x80800210: sb          $v1, 0x32($a2)
    MEM_B(0X32, ctx->r6) = ctx->r3;
    // 0x80800214: sb          $zero, 0x32($a2)
    MEM_B(0X32, ctx->r6) = 0;
L_80800218:
    // 0x80800218: swc1        $f14, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f14.u32l;
    // 0x8080021C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800220: lwc1        $f6, 0x6F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(854, 0X6F0));
    // 0x80800224: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80800228: swc1        $f16, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f16.u32l;
    // 0x8080022C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800230: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80800234: nop

    // 0x80800238: bc1fl       L_80800250
    if (!c1cs) {
        // 0x8080023C: mtc1        $a1, $f18
        ctx->f18.u32l = ctx->r5;
            goto L_80800250;
    }
    goto skip_4;
    // 0x8080023C: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
    skip_4:
    // 0x80800240: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x80800244: b           L_80800260
    // 0x80800248: swc1        $f8, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f8.u32l;
        goto L_80800260;
    // 0x80800248: swc1        $f8, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f8.u32l;
    // 0x8080024C: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
L_80800250:
    // 0x80800250: nop

    // 0x80800254: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80800258: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8080025C: swc1        $f6, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f6.u32l;
L_80800260:
    // 0x80800260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800268: jr          $ra
    // 0x8080026C: nop

    return;
    // 0x8080026C: nop

;}
RECOMP_FUNC void vpwibble_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800270: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800274: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800278: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080027C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800280: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800284: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x80800288: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8080028C: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80800290: jal         0x8001ACCC
    // 0x80800294: addiu       $a0, $t7, 0x38
    ctx->r4 = ADD32(ctx->r15, 0X38);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x80800294: addiu       $a0, $t7, 0x38
    ctx->r4 = ADD32(ctx->r15, 0X38);
    after_0:
    // 0x80800298: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8080029C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x808002A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808002A4: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x808002A8: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x808002AC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x808002B0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x808002B4: addu        $a1, $t0, $s1
    ctx->r5 = ADD32(ctx->r8, ctx->r17);
    // 0x808002B8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x808002BC: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x808002C0: beql        $at, $zero, L_8080030C
    if (ctx->r1 == 0) {
        // 0x808002C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080030C;
    }
    goto skip_0;
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808002C8: lhu         $t1, 0x2($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2);
L_808002CC:
    // 0x808002CC: beql        $t1, $zero, L_808002FC
    if (ctx->r9 == 0) {
        // 0x808002D0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_808002FC;
    }
    goto skip_1;
    // 0x808002D0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_1:
    // 0x808002D4: lw          $t4, 0x34($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X34);
    // 0x808002D8: subu        $t2, $v1, $a0
    ctx->r10 = SUB32(ctx->r3, ctx->r4);
    // 0x808002DC: sra         $t3, $t2, 2
    ctx->r11 = S32(SIGNED(ctx->r10) >> 2);
    // 0x808002E0: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x808002E4: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x808002E8: sh          $t3, 0x38($t6)
    MEM_H(0X38, ctx->r14) = ctx->r11;
    // 0x808002EC: lw          $t7, 0x34($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X34);
    // 0x808002F0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x808002F4: sw          $t8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r24;
    // 0x808002F8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_808002FC:
    // 0x808002FC: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x80800300: bnel        $at, $zero, L_808002CC
    if (ctx->r1 != 0) {
        // 0x80800304: lhu         $t1, 0x2($v1)
        ctx->r9 = MEM_HU(ctx->r3, 0X2);
            goto L_808002CC;
    }
    goto skip_2;
    // 0x80800304: lhu         $t1, 0x2($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2);
    skip_2:
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080030C:
    // 0x8080030C: jal         0x800EE88C
    // 0x80800310: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    func_800EE88C(rdram, ctx);
        goto after_1;
    // 0x80800310: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    after_1:
    // 0x80800314: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80800318: jal         0x800EE88C
    // 0x8080031C: addiu       $a1, $s1, 0xE
    ctx->r5 = ADD32(ctx->r17, 0XE);
    func_800EE88C(rdram, ctx);
        goto after_2;
    // 0x8080031C: addiu       $a1, $s1, 0xE
    ctx->r5 = ADD32(ctx->r17, 0XE);
    after_2:
    // 0x80800320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800324: jal         0x800000B0
    // 0x80800328: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    func_808000B0_vpwibble(rdram, ctx);
        goto after_3;
    // 0x80800328: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_3:
    // 0x8080032C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800330: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80800334: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800338: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080033C: jr          $ra
    // 0x80800340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void vpwibble_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080034C: jal         0x8001B084
    // 0x80800350: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x80800350: nop

    after_0:
    // 0x80800354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080035C: jr          $ra
    // 0x80800360: nop

    return;
    // 0x80800360: nop

;}
RECOMP_FUNC void vpwibble_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080036C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800370: jal         0x800D8FF8
    // 0x80800374: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800374: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800378: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8080037C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800384: lwc1        $f6, 0x2C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x80800388: lwc1        $f4, 0x24($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
    // 0x8080038C: lw          $t7, 0x34($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X34);
    // 0x80800390: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80800394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800398: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x8080039C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x808003A0: swc1        $f10, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f10.u32l;
    // 0x808003A4: lw          $t6, 0x1C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1C);
    // 0x808003A8: blez        $t7, L_808003E0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x808003AC: addu        $a3, $v1, $t6
        ctx->r7 = ADD32(ctx->r3, ctx->r14);
            goto L_808003E0;
    }
    // 0x808003AC: addu        $a3, $v1, $t6
    ctx->r7 = ADD32(ctx->r3, ctx->r14);
    // 0x808003B0: addiu       $v1, $a2, 0x38
    ctx->r3 = ADD32(ctx->r6, 0X38);
    // 0x808003B4: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
L_808003B8:
    // 0x808003B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x808003BC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x808003C0: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808003C4: mflo        $t9
    ctx->r25 = lo;
    // 0x808003C8: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x808003CC: sb          $a1, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r5;
    // 0x808003D0: lw          $t1, 0x34($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X34);
    // 0x808003D4: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x808003D8: bnel        $at, $zero, L_808003B8
    if (ctx->r1 != 0) {
        // 0x808003DC: lh          $t8, 0x0($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X0);
            goto L_808003B8;
    }
    goto skip_0;
    // 0x808003DC: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    skip_0:
L_808003E0:
    // 0x808003E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003E8: jr          $ra
    // 0x808003EC: nop

    return;
    // 0x808003EC: nop

;}
RECOMP_FUNC void func_808003F0_vpwibble(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808003F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003FC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80800400: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x80800404: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800408: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8080040C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80800410: nop

    // 0x80800414: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800418: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x8080041C: lh          $t7, 0x2($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X2);
    // 0x80800420: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80800424: nop

    // 0x80800428: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8080042C: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80800430: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x80800434: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80800438: nop

    // 0x8080043C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80800440: jal         0x800EEF94
    // 0x80800444: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800EEF94(rdram, ctx);
        goto after_0;
    // 0x80800444: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80800448: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8080044C: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80800450: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80800454: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80800458: mul.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8080045C: jal         0x800136D0
    // 0x80800460: nop

    func_800136D0(rdram, ctx);
        goto after_1;
    // 0x80800460: nop

    after_1:
    // 0x80800464: jal         0x800137D4
    // 0x80800468: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800137D4(rdram, ctx);
        goto after_2;
    // 0x80800468: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x8080046C: lh          $t9, 0x1A($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X1A);
    // 0x80800470: lbu         $t0, 0x33($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X33);
    // 0x80800474: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80800478: nop

    // 0x8080047C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800480: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800484: beql        $t0, $zero, L_8080050C
    if (ctx->r8 == 0) {
        // 0x80800488: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080050C;
    }
    goto skip_0;
    // 0x80800488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080048C: jal         0x80013788
    // 0x80800490: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    func_80013788(rdram, ctx);
        goto after_3;
    // 0x80800490: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x80800494: lh          $t1, 0x1A($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X1A);
    // 0x80800498: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(854, 0X6F4) << 16);
    // 0x8080049C: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808004A0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x808004A4: lwc1        $f10, 0x6F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(854, 0X6F4));
    // 0x808004A8: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x808004AC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x808004B0: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808004B4: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x808004B8: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x808004BC: nop

    // 0x808004C0: mul.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x808004C4: bc1f        L_808004F0
    if (!c1cs) {
        // 0x808004C8: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_808004F0;
    }
    // 0x808004C8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808004CC: div.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x808004D0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808004D4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x808004D8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x808004DC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x808004E0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808004E4: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x808004E8: b           L_80800508
    // 0x808004EC: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
        goto L_80800508;
    // 0x808004EC: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
L_808004F0:
    // 0x808004F0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x808004F4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x808004F8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x808004FC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800500: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80800504: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_80800508:
    // 0x80800508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080050C:
    // 0x8080050C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800510: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800514: jr          $ra
    // 0x80800518: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x80800518: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void vpwibble_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080051C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800520: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800524: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x80800528: addu        $s2, $t6, $a2
    ctx->r18 = ADD32(ctx->r14, ctx->r6);
    // 0x8080052C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800530: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800534: sltu        $at, $a2, $s2
    ctx->r1 = ctx->r6 < ctx->r18 ? 1 : 0;
    // 0x80800538: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8080053C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800540: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800544: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80800548: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8080054C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800550: beq         $at, $zero, L_808006C4
    if (ctx->r1 == 0) {
        // 0x80800554: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_808006C4;
    }
    // 0x80800554: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80800558: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8080055C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80800560: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x80800564: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80800568:
    // 0x80800568: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8080056C: jal         0x800003F0
    // 0x80800570: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_808003F0_vpwibble(rdram, ctx);
        goto after_0;
    // 0x80800570: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x80800574: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x80800578: bne         $s4, $v0, L_808005A4
    if (ctx->r20 != ctx->r2) {
        // 0x8080057C: nop
    
            goto L_808005A4;
    }
    // 0x8080057C: nop

    // 0x80800580: lh          $t7, 0x18($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X18);
    // 0x80800584: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80800588: nop

    // 0x8080058C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800590: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80800594: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800598: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8080059C: b           L_808005D0
    // 0x808005A0: sh          $t9, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r25;
        goto L_808005D0;
    // 0x808005A0: sh          $t9, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r25;
L_808005A4:
    // 0x808005A4: bnel        $s5, $v0, L_808005D4
    if (ctx->r21 != ctx->r2) {
        // 0x808005A8: lbu         $t3, 0x32($s1)
        ctx->r11 = MEM_BU(ctx->r17, 0X32);
            goto L_808005D4;
    }
    goto skip_0;
    // 0x808005A8: lbu         $t3, 0x32($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X32);
    skip_0:
    // 0x808005AC: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x808005B0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x808005B4: nop

    // 0x808005B8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x808005BC: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x808005C0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x808005C4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x808005C8: nop

    // 0x808005CC: sh          $t2, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r10;
L_808005D0:
    // 0x808005D0: lbu         $t3, 0x32($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X32);
L_808005D4:
    // 0x808005D4: beql        $t3, $zero, L_80800654
    if (ctx->r11 == 0) {
        // 0x808005D8: lbu         $t5, 0x33($s1)
        ctx->r13 = MEM_BU(ctx->r17, 0X33);
            goto L_80800654;
    }
    goto skip_1;
    // 0x808005D8: lbu         $t5, 0x33($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X33);
    skip_1:
    // 0x808005DC: lbu         $t4, 0x30($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X30);
    // 0x808005E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x808005E4: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x808005E8: bgez        $t4, L_808005FC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x808005EC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_808005FC;
    }
    // 0x808005EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x808005F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808005F4: nop

    // 0x808005F8: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_808005FC:
    // 0x808005FC: lwc1        $f18, 0x20($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X20);
    // 0x80800600: lbu         $t6, 0xC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC);
    // 0x80800604: lbu         $t9, 0xD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XD);
    // 0x80800608: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8080060C: lbu         $t2, 0xE($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE);
    // 0x80800610: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80800614: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80800618: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8080061C: nop

    // 0x80800620: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800624: mflo        $t7
    ctx->r15 = lo;
    // 0x80800628: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x8080062C: sb          $t8, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r24;
    // 0x80800630: multu       $t9, $v0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800634: mflo        $t0
    ctx->r8 = lo;
    // 0x80800638: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x8080063C: sb          $t1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r9;
    // 0x80800640: multu       $t2, $v0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800644: mflo        $t3
    ctx->r11 = lo;
    // 0x80800648: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8080064C: sb          $t4, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r12;
    // 0x80800650: lbu         $t5, 0x33($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X33);
L_80800654:
    // 0x80800654: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800658: beql        $t5, $zero, L_808006B8
    if (ctx->r13 == 0) {
        // 0x8080065C: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_808006B8;
    }
    goto skip_2;
    // 0x8080065C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    skip_2:
    // 0x80800660: lh          $t6, 0x8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8);
    // 0x80800664: lwc1        $f18, 0x1C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80800668: lh          $t9, 0xA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA);
    // 0x8080066C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80800670: mul.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80800674: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800678: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8080067C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80800680: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800684: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800688: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x8080068C: nop

    // 0x80800690: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
    // 0x80800694: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80800698: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080069C: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x808006A0: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x808006A4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x808006A8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x808006AC: nop

    // 0x808006B0: sh          $t1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r9;
    // 0x808006B4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_808006B8:
    // 0x808006B8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x808006BC: bnel        $at, $zero, L_80800568
    if (ctx->r1 != 0) {
        // 0x808006C0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800568;
    }
    goto skip_3;
    // 0x808006C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_3:
L_808006C4:
    // 0x808006C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808006C8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808006CC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808006D0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808006D4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808006D8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x808006DC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x808006E0: jr          $ra
    // 0x808006E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x808006E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808006E8: nop

    // 0x808006EC: nop

;}
RECOMP_FUNC void static_1_800007A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80000758:
    // 0x800007A4: j           L_80000758
    // 0x800007A8: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    static_1_80000758(rdram, ctx);
    return;
    // 0x800007A8: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void static_1_80001590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001590: addiu       $sp, $sp, -0xA90
    ctx->r29 = ADD32(ctx->r29, -0XA90);
    // 0x80001594: sw          $s0, 0xA48($sp)
    MEM_W(0XA48, ctx->r29) = ctx->r16;
    // 0x80001598: sw          $s1, 0xA4C($sp)
    MEM_W(0XA4C, ctx->r29) = ctx->r17;
    // 0x8000159C: sw          $s2, 0xA50($sp)
    MEM_W(0XA50, ctx->r29) = ctx->r18;
    // 0x800015A0: sw          $s3, 0xA54($sp)
    MEM_W(0XA54, ctx->r29) = ctx->r19;
    // 0x800015A4: sw          $s4, 0xA58($sp)
    MEM_W(0XA58, ctx->r29) = ctx->r20;
    // 0x800015A8: sw          $s5, 0xA5C($sp)
    MEM_W(0XA5C, ctx->r29) = ctx->r21;
    // 0x800015AC: sw          $s6, 0xA60($sp)
    MEM_W(0XA60, ctx->r29) = ctx->r22;
    // 0x800015B0: sw          $s7, 0xA64($sp)
    MEM_W(0XA64, ctx->r29) = ctx->r23;
    // 0x800015B4: sw          $ra, 0xA80($sp)
    MEM_W(0XA80, ctx->r29) = ctx->r31;
    // 0x800015B8: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x800015BC: lui         $s6, 0x8000
    ctx->r22 = S32(0X8000 << 16);
    // 0x800015C0: addiu       $s6, $s6, 0x6500
    ctx->r22 = ADD32(ctx->r22, 0X6500);
    // 0x800015C4: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x800015C8: addiu       $t2, $sp, 0x548
    ctx->r10 = ADD32(ctx->r29, 0X548);
    // 0x800015CC: addiu       $t1, $t2, 0x240
    ctx->r9 = ADD32(ctx->r10, 0X240);
L_800015D0:
    // 0x800015D0: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800015D4: bne         $t2, $t1, L_800015D0
    if (ctx->r10 != ctx->r9) {
        // 0x800015D8: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_800015D0;
    }
    // 0x800015D8: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x800015DC: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x800015E0: addiu       $t1, $t2, 0x1C0
    ctx->r9 = ADD32(ctx->r10, 0X1C0);
L_800015E4:
    // 0x800015E4: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800015E8: bne         $t2, $t1, L_800015E4
    if (ctx->r10 != ctx->r9) {
        // 0x800015EC: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_800015E4;
    }
    // 0x800015EC: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x800015F0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x800015F4: addiu       $t1, $t2, 0x60
    ctx->r9 = ADD32(ctx->r10, 0X60);
L_800015F8:
    // 0x800015F8: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800015FC: bne         $t2, $t1, L_800015F8
    if (ctx->r10 != ctx->r9) {
        // 0x80001600: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_800015F8;
    }
    // 0x80001600: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x80001604: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80001608: addiu       $t1, $t2, 0x20
    ctx->r9 = ADD32(ctx->r10, 0X20);
L_8000160C:
    // 0x8000160C: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x80001610: bne         $t2, $t1, L_8000160C
    if (ctx->r10 != ctx->r9) {
        // 0x80001614: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_8000160C;
    }
    // 0x80001614: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x80001618: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8000161C: sw          $t0, 0x9CC($sp)
    MEM_W(0X9CC, ctx->r29) = ctx->r8;
    // 0x80001620: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x80001624: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x80001628: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    // 0x8000162C: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x80001630: addiu       $a3, $a3, 0x4322
    ctx->r7 = ADD32(ctx->r7, 0X4322);
    // 0x80001634: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80001638: addiu       $t7, $t7, 0x43AF
    ctx->r15 = ADD32(ctx->r15, 0X43AF);
    // 0x8000163C: addiu       $t8, $sp, 0x9C8
    ctx->r24 = ADD32(ctx->r29, 0X9C8);
    // 0x80001640: jal         0x80000E1C
    // 0x80001644: addiu       $t9, $sp, 0x9CC
    ctx->r25 = ADD32(ctx->r29, 0X9CC);
    boot_huft_build(rdram, ctx);
        goto after_0;
    // 0x80001644: addiu       $t9, $sp, 0x9CC
    ctx->r25 = ADD32(ctx->r29, 0X9CC);
    after_0:
    // 0x80001648: addiu       $t0, $sp, 0x548
    ctx->r8 = ADD32(ctx->r29, 0X548);
    // 0x8000164C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80001650: addiu       $t2, $t0, 0x78
    ctx->r10 = ADD32(ctx->r8, 0X78);
L_80001654:
    // 0x80001654: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80001658: bne         $t0, $t2, L_80001654
    if (ctx->r8 != ctx->r10) {
        // 0x8000165C: sw          $t1, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r9;
            goto L_80001654;
    }
    // 0x8000165C: sw          $t1, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r9;
    // 0x80001660: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80001664: sw          $t0, 0x9D4($sp)
    MEM_W(0X9D4, ctx->r29) = ctx->r8;
    // 0x80001668: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x8000166C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x80001670: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80001674: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x80001678: addiu       $a3, $a3, 0x4360
    ctx->r7 = ADD32(ctx->r7, 0X4360);
    // 0x8000167C: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80001680: addiu       $t7, $t7, 0x43CE
    ctx->r15 = ADD32(ctx->r15, 0X43CE);
    // 0x80001684: addiu       $t8, $sp, 0x9D0
    ctx->r24 = ADD32(ctx->r29, 0X9D0);
    // 0x80001688: jal         0x80000E1C
    // 0x8000168C: addiu       $t9, $sp, 0x9D4
    ctx->r25 = ADD32(ctx->r29, 0X9D4);
    boot_huft_build(rdram, ctx);
        goto after_1;
    // 0x8000168C: addiu       $t9, $sp, 0x9D4
    ctx->r25 = ADD32(ctx->r29, 0X9D4);
    after_1:
    // 0x80001690: lw          $s0, 0xA48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA48);
    // 0x80001694: lw          $s1, 0xA4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4C);
    // 0x80001698: lw          $s2, 0xA50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA50);
    // 0x8000169C: lw          $s3, 0xA54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA54);
    // 0x800016A0: lw          $s4, 0xA58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA58);
    // 0x800016A4: lw          $s5, 0xA5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA5C);
    // 0x800016A8: lw          $s6, 0xA60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA60);
    // 0x800016AC: lw          $s7, 0xA64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA64);
    // 0x800016B0: lw          $ra, 0xA80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA80);
    // 0x800016B4: jr          $ra
    // 0x800016B8: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
    return;
    // 0x800016B8: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
;}
RECOMP_FUNC void static_1_800016BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800016BC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800016C0: addiu       $v0, $v0, 0x6F48
    ctx->r2 = ADD32(ctx->r2, 0X6F48);
    // 0x800016C4: jr          $ra
    // 0x800016C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x800016C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void static_1_800016CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800016CC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800016D0: addiu       $v0, $v0, 0x4240
    ctx->r2 = ADD32(ctx->r2, 0X4240);
    // 0x800016D4: jr          $ra
    // 0x800016D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x800016D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void static_1_800016DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800016DC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800016E0: addiu       $v0, $v0, 0x4244
    ctx->r2 = ADD32(ctx->r2, 0X4244);
    // 0x800016E4: jr          $ra
    // 0x800016E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x800016E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800016EC: nop

;}
RECOMP_FUNC void static_1_80000758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000758: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8000075C: addiu       $t0, $t0, 0x4240
    ctx->r8 = ADD32(ctx->r8, 0X4240);
    // 0x80000760: lw          $t1, 0xA84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA84);
    // 0x80000764: lw          $t2, 0xA88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA88);
    // 0x80000768: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x8000076C: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x80000770: lw          $s0, 0xA48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA48);
    // 0x80000774: lw          $s1, 0xA4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4C);
    // 0x80000778: lw          $s2, 0xA50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA50);
    // 0x8000077C: lw          $s3, 0xA54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA54);
    // 0x80000780: lw          $s4, 0xA58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA58);
    // 0x80000784: lw          $s5, 0xA5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA5C);
    // 0x80000788: lw          $s6, 0xA60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA60);
    // 0x8000078C: lw          $s7, 0xA64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA64);
    // 0x80000790: lw          $fp, 0xA78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA78);
    // 0x80000794: lw          $gp, 0xA7C($sp)
    ctx->r28 = MEM_W(ctx->r29, 0XA7C);
    // 0x80000798: lw          $ra, 0xA80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA80);
    // 0x8000079C: jr          $ra
    // 0x800007A0: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
    return;
    // 0x800007A0: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
;}
RECOMP_FUNC void static_2_800136F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800136F8: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x800136FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80013700: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80013704: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80013708: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8001370C: sub.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80013710: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80013714: bc1f        L_80013720
    if (!c1cs) {
        // 0x80013718: nop
    
            goto L_80013720;
    }
    // 0x80013718: nop

    // 0x8001371C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_80013720:
    // 0x80013720: jr          $ra
    // 0x80013724: nop

    return;
    // 0x80013724: nop

;}
RECOMP_FUNC void static_2_800138E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800138E4: mul.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800138E8: lui         $at, 0x4B00
    ctx->r1 = S32(0X4B00 << 16);
    // 0x800138EC: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x800138F0: addiu       $t1, $t1, -0x2C60
    ctx->r9 = ADD32(ctx->r9, -0X2C60);
    // 0x800138F4: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800138F8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800138FC: mul.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80013900: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80013904: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80013908: mul.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8001390C: nop

    // 0x80013910: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80013914: round.w.s   $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = lroundf(ctx->f4.fl);
    // 0x80013918: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8001391C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013920: lwc1        $f6, 0x16E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X16E8);
    // 0x80013924: andi        $t2, $a0, 0xFFF
    ctx->r10 = ctx->r4 & 0XFFF;
    // 0x80013928: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8001392C: srl         $t0, $a0, 10
    ctx->r8 = S32(U32(ctx->r4) >> 10);
    // 0x80013930: addiu       $t0, $t0, 0x800
    ctx->r8 = ADD32(ctx->r8, 0X800);
    // 0x80013934: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80013938: andi        $t0, $t0, 0x1FFC
    ctx->r8 = ctx->r8 & 0X1FFC;
    // 0x8001393C: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80013940: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80013944: lwc1        $f12, 0x4($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80013948: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001394C: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x80013950: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80013954: jr          $ra
    // 0x80013958: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
    return;
    // 0x80013958: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
;}
RECOMP_FUNC void static_2_80013984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013984: mul.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80013988: lui         $at, 0x4B00
    ctx->r1 = S32(0X4B00 << 16);
    // 0x8001398C: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x80013990: addiu       $t1, $t1, -0x2C60
    ctx->r9 = ADD32(ctx->r9, -0X2C60);
    // 0x80013994: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80013998: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8001399C: mul.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800139A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800139A4: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800139A8: mul.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800139AC: nop

    // 0x800139B0: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800139B4: round.w.s   $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = lroundf(ctx->f4.fl);
    // 0x800139B8: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x800139BC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800139C0: lwc1        $f6, 0x16F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X16F8);
    // 0x800139C4: andi        $t2, $a0, 0xFFF
    ctx->r10 = ctx->r4 & 0XFFF;
    // 0x800139C8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800139CC: srl         $t0, $a0, 10
    ctx->r8 = S32(U32(ctx->r4) >> 10);
    // 0x800139D0: andi        $t0, $t0, 0x1FFC
    ctx->r8 = ctx->r8 & 0X1FFC;
    // 0x800139D4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800139D8: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x800139DC: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800139E0: lwc1        $f12, 0x4($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800139E4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800139E8: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x800139EC: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x800139F0: jr          $ra
    // 0x800139F4: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
    return;
    // 0x800139F4: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
;}
RECOMP_FUNC void static_2_80013A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013A50: mtc1        $t0, $f0
    ctx->f0.u32l = ctx->r8;
    // 0x80013A54: jr          $ra
    // 0x80013A58: nop

    return;
    // 0x80013A58: nop

;}
RECOMP_FUNC void static_2_80013B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013B90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80013B94: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
    // 0x80013B98: c.eq.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl == ctx->f12.fl;
    // 0x80013B9C: bc1fl       L_80013BC8
    if (!c1cs) {
        // 0x80013BA0: c.eq.s      $f10, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
            goto L_80013BC8;
    }
    goto skip_0;
    // 0x80013BA0: c.eq.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
    skip_0:
    // 0x80013BA4: c.ole.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl <= ctx->f14.fl;
    // 0x80013BA8: bc1t        L_80013BBC
    if (c1cs) {
        // 0x80013BAC: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80013BBC;
    }
    // 0x80013BAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80013BB0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80013BB4: jr          $ra
    // 0x80013BB8: nop

    return;
    // 0x80013BB8: nop

L_80013BBC:
    // 0x80013BBC: jr          $ra
    // 0x80013BC0: mov.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = ctx->f10.fl;
    return;
    // 0x80013BC0: mov.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = ctx->f10.fl;
    // 0x80013BC4: c.eq.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
L_80013BC8:
    // 0x80013BC8: bc1fl       L_80013BFC
    if (!c1cs) {
        // 0x80013BCC: lui         $at, 0x3E34
        ctx->r1 = S32(0X3E34 << 16);
            goto L_80013BFC;
    }
    goto skip_1;
    // 0x80013BCC: lui         $at, 0x3E34
    ctx->r1 = S32(0X3E34 << 16);
    skip_1:
    // 0x80013BD0: c.olt.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80013BD4: bc1t        L_80013BE8
    if (c1cs) {
        // 0x80013BD8: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_80013BE8;
    }
    // 0x80013BD8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80013BDC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80013BE0: jr          $ra
    // 0x80013BE4: nop

    return;
    // 0x80013BE4: nop

L_80013BE8:
    // 0x80013BE8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80013BEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80013BF0: jr          $ra
    // 0x80013BF4: nop

    return;
    // 0x80013BF4: nop

    // 0x80013BF8: lui         $at, 0x3E34
    ctx->r1 = S32(0X3E34 << 16);
L_80013BFC:
    // 0x80013BFC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80013C00: or          $a3, $ra, $zero
    ctx->r7 = ctx->r31 | 0;
    // 0x80013C04: jal         0x80013ABC
    // 0x80013C08: div.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    func_80013ABC(rdram, ctx);
        goto after_0;
    // 0x80013C08: div.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    after_0:
    // 0x80013C0C: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x80013C10: or          $ra, $a3, $zero
    ctx->r31 = ctx->r7 | 0;
    // 0x80013C14: bc1f        L_80013C28
    if (!c1cs) {
        // 0x80013C18: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80013C28;
    }
    // 0x80013C18: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80013C1C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80013C20: nop

    // 0x80013C24: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
L_80013C28:
    // 0x80013C28: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80013C2C: bc1f        L_80013C40
    if (!c1cs) {
            // 0x80013C30: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    func_80013C40(rdram, ctx);
    return;
    }
    // 0x80013C30: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80013C34: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80013C38: jr          $ra
    // 0x80013C3C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    return;
    // 0x80013C3C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
;}
RECOMP_FUNC void static_2_80014F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F78: bnel        $t6, $zero, L_80014F90
    if (ctx->r14 != 0) {
            // 0x80014F7C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    static_2_80014F90(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014F7C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    skip_0:
    // 0x80014F80: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80014F84: jr          $ra
    // 0x80014F88: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    return;
    // 0x80014F88: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void static_2_80014F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F90: bnel        $t7, $zero, L_80014FA8
    if (ctx->r15 != 0) {
            // 0x80014F94: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    static_2_80014FA8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014F94: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x80014F98: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x80014F9C: jr          $ra
    // 0x80014FA0: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    return;
    // 0x80014FA0: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void static_2_80014FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014FA8: bnel        $t8, $zero, L_80014FC0
    if (ctx->r24 != 0) {
            // 0x80014FAC: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    static_2_80014FC0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014FAC: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    skip_0:
    // 0x80014FB0: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
    // 0x80014FB4: jr          $ra
    // 0x80014FB8: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    return;
    // 0x80014FB8: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void static_2_80014FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014FC0: bnel        $t9, $zero, L_80014FD8
    if (ctx->r25 != 0) {
            // 0x80014FC4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    static_2_80014FD8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014FC4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    skip_0:
    // 0x80014FC8: sw          $a0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r4;
    // 0x80014FCC: jr          $ra
    // 0x80014FD0: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
    return;
    // 0x80014FD0: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void static_2_80014FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80014F78:
    // 0x80014FD8: bnel        $v1, $v0, L_80014F78
    if (ctx->r3 != ctx->r2) {
            // 0x80014FDC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    static_2_80014F78(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014FDC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80014FE0: jr          $ra
    // 0x80014FE4: nop

    return;
    // 0x80014FE4: nop

;}
RECOMP_FUNC void static_2_800170B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800170B4: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x800170B8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800170BC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800170C0: subu        $a0, $t0, $t9
    ctx->r4 = SUB32(ctx->r8, ctx->r25);
    // 0x800170C4: sllv        $t2, $t1, $a0
    ctx->r10 = S32(ctx->r9 << (ctx->r4 & 31));
    // 0x800170C8: srlv        $v0, $t2, $a0
    ctx->r2 = S32(U32(ctx->r10) >> (ctx->r4 & 31));
    // 0x800170CC: jr          $ra
    // 0x800170D0: nop

    return;
    // 0x800170D0: nop

;}
RECOMP_FUNC void static_2_80018BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018BE4: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80018BE8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80018BEC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80018BF0: nop

    // 0x80018BF4: bc1t        L_80018C0C
    if (c1cs) {
        // 0x80018BF8: nop
    
            goto L_80018C0C;
    }
    // 0x80018BF8: nop

    // 0x80018BFC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80018C00: nop

    // 0x80018C04: bc1f        L_80018C14
    if (!c1cs) {
            // 0x80018C08: nop

    func_80018C14(rdram, ctx);
    return;
    }
    // 0x80018C08: nop

L_80018C0C:
    // 0x80018C0C: jr          $ra
    // 0x80018C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80018C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void static_2_8001BB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BB74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8001BB78: lbu         $t8, 0xF($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XF);
    // 0x8001BB7C: srl         $t9, $t8, 6
    ctx->r25 = S32(U32(ctx->r24) >> 6);
    // 0x8001BB80: beq         $t9, $zero, L_8001BB90
    if (ctx->r25 == 0) {
        // 0x8001BB84: nop
    
            goto L_8001BB90;
    }
    // 0x8001BB84: nop

    // 0x8001BB88: b           L_8001BB90
    // 0x8001BB8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8001BB90;
    // 0x8001BB8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001BB90:
    // 0x8001BB90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001BB94: jr          $ra
    // 0x8001BB98: nop

    return;
    // 0x8001BB98: nop

    // 0x8001BB9C: nop

;}
RECOMP_FUNC void static_2_8001C3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8001C3A8:
    // 0x8001C3F4: j           L_8001C3A8
    // 0x8001C3F8: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    static_2_8001C3A8(rdram, ctx);
    return;
    // 0x8001C3F8: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void static_2_8001D598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D598: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8001D59C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001D5A0: jr          $ra
    // 0x8001D5A4: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x8001D5A4: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
;}
RECOMP_FUNC void static_2_8001D5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8001D594:
    // 0x8001D5AC: nop

    // 0x8001D5B0: bltz        $v0, L_8001D594
    if (SIGNED(ctx->r2) < 0) {
            // 0x8001D5B4: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    func_8001D594(rdram, ctx);
    return;
    }
    // 0x8001D5B4: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8001D5B8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001D5BC: jr          $ra
    // 0x8001D5C0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x8001D5C0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
;}
RECOMP_FUNC void static_2_8001DC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DC90: jr          $ra
    // 0x8001DC94: nop

    return;
    // 0x8001DC94: nop

    // 0x8001DC98: nop

    // 0x8001DC9C: nop

;}
RECOMP_FUNC void static_2_80031DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80031DA4:
    // 0x80031DD4: beq         $v0, $zero, L_80031E38
    if (ctx->r2 == 0) {
        // 0x80031DD8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80031E38;
    }
    // 0x80031DD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80031DDC: beq         $v0, $at, L_80031E1C
    if (ctx->r2 == ctx->r1) {
        // 0x80031DE0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80031E1C;
    }
    // 0x80031DE0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80031DE4: beql        $v0, $at, L_80031E08
    if (ctx->r2 == ctx->r1) {
        // 0x80031DE8: lh          $v0, -0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, -0X2);
            goto L_80031E08;
    }
    goto skip_0;
    // 0x80031DE8: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
    skip_0:
    // 0x80031DEC: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x80031DF0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80031DF4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80031DF8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80031DFC: b           L_80031E38
    // 0x80031E00: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
        goto L_80031E38;
    // 0x80031E00: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80031E04: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
L_80031E08:
    // 0x80031E08: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x80031E0C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x80031E10: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x80031E14: b           L_80031E38
    // 0x80031E18: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80031E38;
    // 0x80031E18: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80031E1C:
    // 0x80031E1C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x80031E20: lh          $v1, -0x3($a0)
    ctx->r3 = MEM_H(ctx->r4, -0X3);
    // 0x80031E24: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x80031E28: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x80031E2C: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x80031E30: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80031E34: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_80031E38:
    // 0x80031E38: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x80031E3C: bnel        $at, $zero, L_80031E98
    if (ctx->r1 != 0) {
        // 0x80031E40: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80031E98;
    }
    goto skip_1;
    // 0x80031E40: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_1:
    // 0x80031E44: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80031E48: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x80031E4C: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x80031E50: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x80031E54: lw          $t2, -0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, -0X14);
    // 0x80031E58: lw          $t3, -0x18($a0)
    ctx->r11 = MEM_W(ctx->r4, -0X18);
    // 0x80031E5C: lw          $t4, -0x1C($a0)
    ctx->r12 = MEM_W(ctx->r4, -0X1C);
    // 0x80031E60: lw          $t5, -0x20($a0)
    ctx->r13 = MEM_W(ctx->r4, -0X20);
    // 0x80031E64: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x80031E68: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x80031E6C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x80031E70: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80031E74: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80031E78: sw          $t0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r8;
    // 0x80031E7C: sw          $t1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r9;
    // 0x80031E80: sw          $t2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r10;
    // 0x80031E84: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x80031E88: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x80031E8C: b           L_80031E38
    // 0x80031E90: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
        goto L_80031E38;
    // 0x80031E90: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_80031E94:
    // 0x80031E94: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80031E98:
    // 0x80031E98: bnel        $at, $zero, L_80031ED4
    if (ctx->r1 != 0) {
        // 0x80031E9C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_80031ED4;
    }
    goto skip_2;
    // 0x80031E9C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_2:
    // 0x80031EA0: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80031EA4: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x80031EA8: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x80031EAC: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x80031EB0: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x80031EB4: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x80031EB8: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80031EBC: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80031EC0: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x80031EC4: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x80031EC8: b           L_80031E94
    // 0x80031ECC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
        goto L_80031E94;
    // 0x80031ECC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_80031ED0:
    // 0x80031ED0: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_80031ED4:
    // 0x80031ED4: bne         $at, $zero, L_80031DA4
    if (ctx->r1 != 0) {
            // 0x80031ED8: nop

    static_2_80031DA4(rdram, ctx);
    return;
    }
    // 0x80031ED8: nop

    // 0x80031EDC: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80031EE0: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80031EE4: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x80031EE8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80031EEC: b           L_80031ED0
    // 0x80031EF0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_80031ED0;
    // 0x80031EF0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80031EF4: nop

    // 0x80031EF8: nop

    // 0x80031EFC: nop

;}
RECOMP_FUNC void static_2_80032540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032540: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x80032544: addiu       $t1, $t1, 0x1488
    ctx->r9 = ADD32(ctx->r9, 0X1488);
    // 0x80032548: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8003254C: sw          $t2, 0x0($k0)
    MEM_W(0X0, ctx->r26) = ctx->r10;
    // 0x80032550: j           L_800327C8
    // 0x80032554: sw          $k0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r26;
    __osDispatchThread_recomp(rdram, ctx);
    return;
    // 0x80032554: sw          $k0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r26;
;}
RECOMP_FUNC void static_2_80032A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032A84: bnel        $v1, $zero, L_80032A98
    if (ctx->r3 != 0) {
            // 0x80032A88: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    static_2_80032A98(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80032A88: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    skip_0:
    // 0x80032A8C: jr          $ra
    // 0x80032A90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80032A90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void static_2_80032A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80032A84:
    // 0x80032A98: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80032A9C: bne         $v0, $v1, L_80032A84
    if (ctx->r2 != ctx->r3) {
            // 0x80032AA0: nop

    static_2_80032A84(rdram, ctx);
    return;
    }
    // 0x80032AA0: nop

    // 0x80032AA4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void static_2_80032AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032AA8: jr          $ra
    // 0x80032AAC: nop

    return;
    // 0x80032AAC: nop

;}
RECOMP_FUNC void static_2_8001C3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C3A8: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x8001C3AC: addiu       $t0, $t0, -0x8A0
    ctx->r8 = ADD32(ctx->r8, -0X8A0);
    // 0x8001C3B0: lw          $t1, 0xA84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA84);
    // 0x8001C3B4: lw          $t2, 0xA88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA88);
    // 0x8001C3B8: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x8001C3BC: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x8001C3C0: lw          $s0, 0xA48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA48);
    // 0x8001C3C4: lw          $s1, 0xA4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4C);
    // 0x8001C3C8: lw          $s2, 0xA50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA50);
    // 0x8001C3CC: lw          $s3, 0xA54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA54);
    // 0x8001C3D0: lw          $s4, 0xA58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA58);
    // 0x8001C3D4: lw          $s5, 0xA5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA5C);
    // 0x8001C3D8: lw          $s6, 0xA60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA60);
    // 0x8001C3DC: lw          $s7, 0xA64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA64);
    // 0x8001C3E0: lw          $fp, 0xA78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA78);
    // 0x8001C3E4: lw          $gp, 0xA7C($sp)
    ctx->r28 = MEM_W(ctx->r29, 0XA7C);
    // 0x8001C3E8: lw          $ra, 0xA80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA80);
    // 0x8001C3EC: jr          $ra
    // 0x8001C3F0: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
    return;
    // 0x8001C3F0: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
;}
RECOMP_FUNC void static_2_80031DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80031C5C:
    // 0x80031DA4: beq         $a2, $zero, L_80031C5C
    if (ctx->r6 == 0) {
            // 0x80031DA8: nop

    static_2_80031C5C(rdram, ctx);
    return;
    }
    // 0x80031DA8: nop

    // 0x80031DAC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80031DB0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80031DB4: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
L_80031DB8:
    // 0x80031DB8: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80031DBC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80031DC0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80031DC4: bne         $a0, $v1, L_80031DB8
    if (ctx->r4 != ctx->r3) {
        // 0x80031DC8: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_80031DB8;
    }
    // 0x80031DC8: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x80031DCC: jr          $ra
    // 0x80031DD0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x80031DD0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void static_2_80031C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80031C3C:
    // 0x80031C5C: jr          $ra
    // 0x80031C60: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x80031C60: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x80031C64: beq         $v0, $zero, L_80031CC8
    if (ctx->r2 == 0) {
        // 0x80031C68: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80031CC8;
    }
    // 0x80031C68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80031C6C: beq         $v0, $at, L_80031CAC
    if (ctx->r2 == ctx->r1) {
        // 0x80031C70: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80031CAC;
    }
    // 0x80031C70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80031C74: beql        $v0, $at, L_80031C98
    if (ctx->r2 == ctx->r1) {
        // 0x80031C78: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_80031C98;
    }
    goto skip_0;
    // 0x80031C78: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    skip_0:
    // 0x80031C7C: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80031C80: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80031C84: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80031C88: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80031C8C: b           L_80031CC8
    // 0x80031C90: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
        goto L_80031CC8;
    // 0x80031C90: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x80031C94: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_80031C98:
    // 0x80031C98: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80031C9C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80031CA0: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x80031CA4: b           L_80031CC8
    // 0x80031CA8: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
        goto L_80031CC8;
    // 0x80031CA8: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
L_80031CAC:
    // 0x80031CAC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80031CB0: lh          $v1, 0x1($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1);
    // 0x80031CB4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80031CB8: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x80031CBC: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x80031CC0: sb          $v0, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = ctx->r2;
    // 0x80031CC4: sh          $v1, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r3;
L_80031CC8:
    // 0x80031CC8: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x80031CCC: bnel        $at, $zero, L_80031D28
    if (ctx->r1 != 0) {
        // 0x80031CD0: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80031D28;
    }
    goto skip_1;
    // 0x80031CD0: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_1:
    // 0x80031CD4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80031CD8: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80031CDC: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80031CE0: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80031CE4: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x80031CE8: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x80031CEC: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x80031CF0: lw          $t5, 0x1C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1C);
    // 0x80031CF4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80031CF8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x80031CFC: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x80031D00: sw          $v0, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r2;
    // 0x80031D04: sw          $v1, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r3;
    // 0x80031D08: sw          $t0, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->r8;
    // 0x80031D0C: sw          $t1, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->r9;
    // 0x80031D10: sw          $t2, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r10;
    // 0x80031D14: sw          $t3, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r11;
    // 0x80031D18: sw          $t4, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r12;
    // 0x80031D1C: b           L_80031CC8
    // 0x80031D20: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
        goto L_80031CC8;
    // 0x80031D20: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
L_80031D24:
    // 0x80031D24: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80031D28:
    // 0x80031D28: bnel        $at, $zero, L_80031D64
    if (ctx->r1 != 0) {
        // 0x80031D2C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_80031D64;
    }
    goto skip_2;
    // 0x80031D2C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_2:
    // 0x80031D30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80031D34: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80031D38: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80031D3C: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80031D40: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80031D44: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80031D48: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80031D4C: sw          $v0, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r2;
    // 0x80031D50: sw          $v1, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r3;
    // 0x80031D54: sw          $t0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r8;
    // 0x80031D58: b           L_80031D24
    // 0x80031D5C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
        goto L_80031D24;
    // 0x80031D5C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
L_80031D60:
    // 0x80031D60: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_80031D64:
    // 0x80031D64: bne         $at, $zero, L_80031C3C
    if (ctx->r1 != 0) {
            // 0x80031D68: nop

    static_2_80031C3C(rdram, ctx);
    return;
    }
    // 0x80031D68: nop

    // 0x80031D6C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80031D70: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80031D74: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80031D78: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80031D7C: b           L_80031D60
    // 0x80031D80: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
        goto L_80031D60;
    // 0x80031D80: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x80031D84: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80031D88: add         $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80031D8C: bne         $at, $zero, L_80031DA4
    if (ctx->r1 != 0) {
            // 0x80031D90: add         $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    static_2_80031DA4(rdram, ctx);
    return;
    }
    // 0x80031D90: add         $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x80031D94: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80031D98: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x80031D9C: beq         $v0, $v1, L_80031DD4
    if (ctx->r2 == ctx->r3) {
            // 0x80031DA0: nop

    static_2_80031DD4(rdram, ctx);
    return;
    }
    // 0x80031DA0: nop

;}
RECOMP_FUNC void static_2_80031C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031C3C: beq         $a2, $zero, L_80031C5C
    if (ctx->r6 == 0) {
            // 0x80031C40: nop

    static_2_80031C5C(rdram, ctx);
    return;
    }
    // 0x80031C40: nop

    // 0x80031C44: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
L_80031C48:
    // 0x80031C48: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80031C4C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80031C50: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80031C54: bne         $a0, $v1, L_80031C48
    if (ctx->r4 != ctx->r3) {
        // 0x80031C58: sb          $v0, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r2;
            goto L_80031C48;
    }
    // 0x80031C58: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void static_3_8008B178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B178: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x8008B17C: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
    // 0x8008B180: jr          $ra
    // 0x8008B184: nop

    return;
    // 0x8008B184: nop

;}
RECOMP_FUNC void static_3_8009480C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009480C: nor         $t9, $a1, $zero
    ctx->r25 = ~(ctx->r5 | 0);
    // 0x80094810: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x80094814: and         $t0, $t8, $t9
    ctx->r8 = ctx->r24 & ctx->r25;
    // 0x80094818: sb          $t0, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r8;
    // 0x8009481C: jr          $ra
    // 0x80094820: nop

    return;
    // 0x80094820: nop

;}
RECOMP_FUNC void static_3_80095A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095A28: nor         $t9, $a1, $zero
    ctx->r25 = ~(ctx->r5 | 0);
    // 0x80095A2C: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x80095A30: and         $t0, $t8, $t9
    ctx->r8 = ctx->r24 & ctx->r25;
    // 0x80095A34: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
    // 0x80095A38: jr          $ra
    // 0x80095A3C: nop

    return;
    // 0x80095A3C: nop

;}
RECOMP_FUNC void static_3_800979B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800979B8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800979BC: sllv        $t2, $t1, $a1
    ctx->r10 = S32(ctx->r9 << (ctx->r5 & 31));
    // 0x800979C0: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x800979C4: nor         $t3, $t2, $zero
    ctx->r11 = ~(ctx->r10 | 0);
    // 0x800979C8: and         $t4, $t0, $t3
    ctx->r12 = ctx->r8 & ctx->r11;
    // 0x800979CC: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800979D0: jr          $ra
    // 0x800979D4: nop

    return;
    // 0x800979D4: nop

;}
RECOMP_FUNC void static_3_80098168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098168: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8009816C: sllv        $t2, $t1, $a1
    ctx->r10 = S32(ctx->r9 << (ctx->r5 & 31));
    // 0x80098170: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80098174: nor         $t3, $t2, $zero
    ctx->r11 = ~(ctx->r10 | 0);
    // 0x80098178: and         $t4, $t0, $t3
    ctx->r12 = ctx->r8 & ctx->r11;
    // 0x8009817C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80098180: jr          $ra
    // 0x80098184: nop

    return;
    // 0x80098184: nop

;}
RECOMP_FUNC void static_3_8009EC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EC34: jr          $ra
    // 0x8009EC38: nop

    return;
    // 0x8009EC38: nop

;}
RECOMP_FUNC void static_3_800A2038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void static_3_800A8978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8978: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800A897C: jr          $ra
    // 0x800A8980: nop

    return;
    // 0x800A8980: nop

;}
RECOMP_FUNC void static_3_800A9700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9700: lh          $t6, 0x8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8);
    // 0x800A9704: bnel        $a0, $t6, L_800A9718
    if (ctx->r4 != ctx->r14) {
            // 0x800A9708: lh          $t7, 0xA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA);
    static_3_800A9718(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9708: lh          $t7, 0xA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA);
    skip_0:
    // 0x800A970C: jr          $ra
    // 0x800A9710: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800A9710: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void static_3_800A9718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9718: bnel        $a0, $t7, L_800A972C
    if (ctx->r4 != ctx->r15) {
            // 0x800A971C: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    static_3_800A972C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A971C: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    skip_0:
    // 0x800A9720: jr          $ra
    // 0x800A9724: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x800A9724: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
;}
RECOMP_FUNC void static_3_800A972C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A972C: bnel        $a0, $t8, L_800A9740
    if (ctx->r4 != ctx->r24) {
            // 0x800A9730: lh          $t9, 0xE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE);
    static_3_800A9740(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9730: lh          $t9, 0xE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE);
    skip_0:
    // 0x800A9734: jr          $ra
    // 0x800A9738: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x800A9738: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
;}
RECOMP_FUNC void static_3_800A9740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9740: bnel        $a0, $t9, L_800A9754
    if (ctx->r4 != ctx->r25) {
            // 0x800A9744: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800A9754(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9744: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800A9748: jr          $ra
    // 0x800A974C: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x800A974C: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
;}
RECOMP_FUNC void static_3_800A9754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800A9700:
    // 0x800A9754: bne         $v1, $a1, L_800A9700
    if (ctx->r3 != ctx->r5) {
            // 0x800A9758: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    static_3_800A9700(rdram, ctx);
    return;
    }
    // 0x800A9758: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800A975C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A9760: jr          $ra
    // 0x800A9764: nop

    return;
    // 0x800A9764: nop

;}
RECOMP_FUNC void static_3_800A9778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9778: lh          $t6, 0x8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8);
    // 0x800A977C: bne         $a0, $t6, L_800A9794
    if (ctx->r4 != ctx->r14) {
            // 0x800A9780: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    func_800A9794(rdram, ctx);
    return;
    }
    // 0x800A9780: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800A9784: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800A9788: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x800A978C: jr          $ra
    // 0x800A9790: lw          $v0, 0x76E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76E8);
    return;
    // 0x800A9790: lw          $v0, 0x76E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76E8);
;}
RECOMP_FUNC void static_3_800A9EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9EE8: bnel        $a0, $t7, L_800A9F04
    if (ctx->r4 != ctx->r15) {
            // 0x800A9EEC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800A9F04(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9EEC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800A9EF0: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x800A9EF4: sll         $t9, $t8, 10
    ctx->r25 = S32(ctx->r24 << 10);
    // 0x800A9EF8: jr          $ra
    // 0x800A9EFC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    return;
    // 0x800A9EFC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
;}
RECOMP_FUNC void static_3_800A9F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800A9EE8:
    // 0x800A9F04: bnel        $v1, $v0, L_800A9EE8
    if (ctx->r3 != ctx->r2) {
            // 0x800A9F08: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    static_3_800A9EE8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800A9F08: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    skip_0:
    // 0x800A9F0C: jr          $ra
    // 0x800A9F10: nop

    return;
    // 0x800A9F10: nop

;}
RECOMP_FUNC void static_3_800B0D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B0D10: lh          $v1, 0xC($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XC);
    // 0x800B0D14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800B0D18: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800B0D1C: beq         $at, $zero, L_800B0D2C
    if (ctx->r1 == 0) {
        // 0x800B0D20: nop
    
            goto L_800B0D2C;
    }
    // 0x800B0D20: nop

    // 0x800B0D24: b           L_800B0D2C
    // 0x800B0D28: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_800B0D2C;
    // 0x800B0D28: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_800B0D2C:
    // 0x800B0D2C: bgtz        $a0, L_800B0D3C
    if (SIGNED(ctx->r4) > 0) {
        // 0x800B0D30: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_800B0D3C;
    }
    // 0x800B0D30: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800B0D34: b           L_800B0D3C
    // 0x800B0D38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800B0D3C;
    // 0x800B0D38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800B0D3C:
    // 0x800B0D3C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B0D40: jr          $ra
    // 0x800B0D44: nop

    return;
    // 0x800B0D44: nop

    // 0x800B0D48: nop

    // 0x800B0D4C: nop

;}
RECOMP_FUNC void static_3_800B2734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B2734: bne         $v1, $zero, L_800B2744
    if (ctx->r3 != 0) {
            // 0x800B2738: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    func_800B2744(rdram, ctx);
    return;
    }
    // 0x800B2738: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x800B273C: jr          $ra
    // 0x800B2740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800B2740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void static_3_800B31CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B31CC: bnel        $a1, $a2, L_800B31E0
    if (ctx->r5 != ctx->r6) {
            // 0x800B31D0: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    static_3_800B31E0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800B31D0: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    skip_0:
    // 0x800B31D4: jr          $ra
    // 0x800B31D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800B31D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void static_3_800B31E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800B31CC:
    // 0x800B31E0: multu       $a2, $t7
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B31E4: mflo        $t8
    ctx->r24 = lo;
    // 0x800B31E8: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x800B31EC: lh          $a2, 0x0($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X0);
    // 0x800B31F0: bne         $a2, $zero, L_800B31CC
    if (ctx->r6 != 0) {
            // 0x800B31F4: nop

    static_3_800B31CC(rdram, ctx);
    return;
    }
    // 0x800B31F4: nop

    // 0x800B31F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void static_3_800B31FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B31FC: jr          $ra
    // 0x800B3200: nop

    return;
    // 0x800B3200: nop

;}
RECOMP_FUNC void static_3_800B3404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B3404: bnel        $t8, $a1, L_800B341C
    if (ctx->r24 != ctx->r5) {
        // 0x800B3408: subu        $t2, $a1, $v1
        ctx->r10 = SUB32(ctx->r5, ctx->r3);
            goto L_800B341C;
    }
    goto skip_0;
    // 0x800B3408: subu        $t2, $a1, $v1
    ctx->r10 = SUB32(ctx->r5, ctx->r3);
    skip_0:
    // 0x800B340C: addiu       $t9, $a1, -0x1C
    ctx->r25 = ADD32(ctx->r5, -0X1C);
    // 0x800B3410: sw          $t9, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r25;
    // 0x800B3414: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x800B3418: subu        $t2, $a1, $v1
    ctx->r10 = SUB32(ctx->r5, ctx->r3);
L_800B341C:
    // 0x800B341C: div         $zero, $t2, $t1
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r9)));
    // 0x800B3420: mflo        $t3
    ctx->r11 = lo;
    // 0x800B3424: addiu       $a2, $a1, 0x1C
    ctx->r6 = ADD32(ctx->r5, 0X1C);
    // 0x800B3428: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x800B342C: multu       $t3, $t1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800B3430: bne         $t1, $zero, L_800B343C
    if (ctx->r9 != 0) {
        // 0x800B3434: nop
    
            goto L_800B343C;
    }
    // 0x800B3434: nop

    // 0x800B3438: break       7
    do_break(2148217912);
L_800B343C:
    // 0x800B343C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B3440: bne         $t1, $at, L_800B3454
    if (ctx->r9 != ctx->r1) {
        // 0x800B3444: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800B3454;
    }
    // 0x800B3444: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800B3448: bne         $t2, $at, L_800B3454
    if (ctx->r10 != ctx->r1) {
        // 0x800B344C: nop
    
            goto L_800B3454;
    }
    // 0x800B344C: nop

    // 0x800B3450: break       6
    do_break(2148217936);
L_800B3454:
    // 0x800B3454: mflo        $a3
    ctx->r7 = lo;
    // 0x800B3458: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x800B345C: blez        $a3, L_800B3484
    if (SIGNED(ctx->r7) <= 0) {
        // 0x800B3460: addiu       $t0, $a1, -0x4
        ctx->r8 = ADD32(ctx->r5, -0X4);
            goto L_800B3484;
    }
    // 0x800B3460: addiu       $t0, $a1, -0x4
    ctx->r8 = ADD32(ctx->r5, -0X4);
L_800B3464:
    // 0x800B3464: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x800B3468: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x800B346C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x800B3470: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
    // 0x800B3474: bgtz        $a3, L_800B3464
    if (SIGNED(ctx->r7) > 0) {
        // 0x800B3478: sw          $t4, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r12;
            goto L_800B3464;
    }
    // 0x800B3478: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800B347C: lw          $a2, 0x10($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X10);
    // 0x800B3480: addiu       $a2, $a2, 0x1C
    ctx->r6 = ADD32(ctx->r6, 0X1C);
L_800B3484:
    // 0x800B3484: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x800B3488: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800B348C: jr          $ra
    // 0x800B3490: nop

    return;
    // 0x800B3490: nop

;}
RECOMP_FUNC void static_3_800B576C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B576C: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x800B5770: srl         $t6, $a0, 31
    ctx->r14 = S32(U32(ctx->r4) >> 31);
    // 0x800B5774: bnel        $t6, $zero, L_800B57BC
    if (ctx->r14 != 0) {
            // 0x800B5778: lw          $a0, 0x14($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X14);
    static_3_800B57BC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800B5778: lw          $a0, 0x14($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X14);
    skip_0:
    // 0x800B577C: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x800B5780: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800B5784: sll         $t9, $t7, 7
    ctx->r25 = S32(ctx->r15 << 7);
    // 0x800B5788: andi        $t1, $t0, 0xFF7F
    ctx->r9 = ctx->r8 & 0XFF7F;
    // 0x800B578C: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x800B5790: sb          $t2, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r10;
    // 0x800B5794: lhu         $t6, 0x8($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X8);
    // 0x800B5798: sll         $t4, $a2, 5
    ctx->r12 = S32(ctx->r6 << 5);
    // 0x800B579C: andi        $t5, $t4, 0x7FE0
    ctx->r13 = ctx->r12 & 0X7FE0;
    // 0x800B57A0: andi        $t7, $t6, 0x801F
    ctx->r15 = ctx->r14 & 0X801F;
    // 0x800B57A4: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x800B57A8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800B57AC: sh          $t8, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r24;
    // 0x800B57B0: jr          $ra
    // 0x800B57B4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x800B57B4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void static_3_800B57BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B57BC: srl         $t0, $a0, 31
    ctx->r8 = S32(U32(ctx->r4) >> 31);
    // 0x800B57C0: bnel        $t0, $zero, L_800B5810
    if (ctx->r8 != 0) {
            // 0x800B57C4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    static_3_800B5810(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800B57C4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    skip_0:
    // 0x800B57C8: lbu         $t3, 0x14($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X14);
    // 0x800B57CC: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x800B57D0: sll         $t2, $t9, 7
    ctx->r10 = S32(ctx->r25 << 7);
    // 0x800B57D4: andi        $t4, $t3, 0xFF7F
    ctx->r12 = ctx->r11 & 0XFF7F;
    // 0x800B57D8: or          $t6, $t2, $t4
    ctx->r14 = ctx->r10 | ctx->r12;
    // 0x800B57DC: sb          $t6, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r14;
    // 0x800B57E0: lhu         $t0, 0x14($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X14);
    // 0x800B57E4: sll         $t7, $a2, 5
    ctx->r15 = S32(ctx->r6 << 5);
    // 0x800B57E8: andi        $t8, $t7, 0x7FE0
    ctx->r24 = ctx->r15 & 0X7FE0;
    // 0x800B57EC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800B57F0: andi        $t9, $t0, 0x801F
    ctx->r25 = ctx->r8 & 0X801F;
    // 0x800B57F4: or          $t1, $t8, $t9
    ctx->r9 = ctx->r24 | ctx->r25;
    // 0x800B57F8: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x800B57FC: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x800B5800: sh          $t1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r9;
    // 0x800B5804: jr          $ra
    // 0x800B5808: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    return;
    // 0x800B5808: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
;}
RECOMP_FUNC void static_3_800B5810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800B576C:
    // 0x800B5810: bne         $v1, $v0, L_800B576C
    if (ctx->r3 != ctx->r2) {
            // 0x800B5814: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    static_3_800B576C(rdram, ctx);
    return;
    }
    // 0x800B5814: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x800B5818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800B581C: jr          $ra
    // 0x800B5820: nop

    return;
    // 0x800B5820: nop

;}
RECOMP_FUNC void static_3_800BD968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD968: subu        $v1, $a0, $t7
    ctx->r3 = SUB32(ctx->r4, ctx->r15);
    // 0x800BD96C: sra         $t8, $v1, 3
    ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
    // 0x800BD970: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x800BD974: jr          $ra
    // 0x800BD978: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800BD978: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void static_3_800BDB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDB58: subu        $t3, $t0, $t1
    ctx->r11 = SUB32(ctx->r8, ctx->r9);
    // 0x800BDB5C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x800BDB60: multu       $t9, $t3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDB64: subu        $t8, $v1, $a1
    ctx->r24 = SUB32(ctx->r3, ctx->r5);
    // 0x800BDB68: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800BDB6C: mflo        $t4
    ctx->r12 = lo;
    // 0x800BDB70: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x800BDB74: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800BDB78: lw          $t5, 0x1C($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X1C);
    // 0x800BDB7C: subu        $t4, $a2, $a3
    ctx->r12 = SUB32(ctx->r6, ctx->r7);
    // 0x800BDB80: addu        $t3, $t7, $t9
    ctx->r11 = ADD32(ctx->r15, ctx->r25);
    // 0x800BDB84: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BDB88: mflo        $t6
    ctx->r14 = lo;
    // 0x800BDB8C: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x800BDB90: addu        $v0, $t3, $t8
    ctx->r2 = ADD32(ctx->r11, ctx->r24);
    // 0x800BDB94: jr          $ra
    // 0x800BDB98: nop

    return;
    // 0x800BDB98: nop

;}
RECOMP_FUNC void static_3_800BFA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFA30: lw          $t6, 0x180($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X180);
    // 0x800BFA34: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800BFA38: addiu       $t7, $t6, -0x64
    ctx->r15 = ADD32(ctx->r14, -0X64);
    // 0x800BFA3C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BFA40: nop

    // 0x800BFA44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BFA48: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800BFA4C: nop

    // 0x800BFA50: bc1fl       L_800BFA64
    if (!c1cs) {
        // 0x800BFA54: lw          $t8, 0x18C($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X18C);
            goto L_800BFA64;
    }
    goto skip_0;
    // 0x800BFA54: lw          $t8, 0x18C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18C);
    skip_0:
    // 0x800BFA58: jr          $ra
    // 0x800BFA5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800BFA5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800BFA60: lw          $t8, 0x18C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18C);
L_800BFA64:
    // 0x800BFA64: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800BFA68: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x800BFA6C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BFA70: nop

    // 0x800BFA74: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BFA78: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x800BFA7C: nop

    // 0x800BFA80: bc1f        L_800BFA90
    if (!c1cs) {
            // 0x800BFA84: nop

    func_800BFA90(rdram, ctx);
    return;
    }
    // 0x800BFA84: nop

    // 0x800BFA88: jr          $ra
    // 0x800BFA8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800BFA8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void static_3_800C00A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C00A8: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x800C00AC: xor         $v1, $a1, $t7
    ctx->r3 = ctx->r5 ^ ctx->r15;
    // 0x800C00B0: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800C00B4: jr          $ra
    // 0x800C00B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800C00B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void static_3_800C1300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1300: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800C1304: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C1308: lwc1        $f10, -0x5790($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5790);
    // 0x800C130C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x800C1310: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800C1314: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800C1318: lwc1        $f4, -0x578C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X578C);
    // 0x800C131C: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x800C1320: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800C1324: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C1328: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C132C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800C1330: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800C1334: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800C1338: nop

    // 0x800C133C: bc1fl       L_800C1350
    if (!c1cs) {
        // 0x800C1340: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800C1350;
    }
    goto skip_0;
    // 0x800C1340: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x800C1344: b           L_800C1350
    // 0x800C1348: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_800C1350;
    // 0x800C1348: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800C134C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800C1350:
    // 0x800C1350: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x800C1354: nop

    // 0x800C1358: bc1fl       L_800C136C
    if (!c1cs) {
        // 0x800C135C: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_800C136C;
    }
    goto skip_1;
    // 0x800C135C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_1:
    // 0x800C1360: b           L_800C1388
    // 0x800C1364: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_800C1388;
    // 0x800C1364: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x800C1368: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_800C136C:
    // 0x800C136C: nop

    // 0x800C1370: bc1fl       L_800C1384
    if (!c1cs) {
        // 0x800C1374: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800C1384;
    }
    goto skip_2;
    // 0x800C1374: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x800C1378: b           L_800C1384
    // 0x800C137C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_800C1384;
    // 0x800C137C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800C1380: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800C1384:
    // 0x800C1384: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800C1388:
    // 0x800C1388: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x800C138C: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800C1390: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800C1394: nop

    // 0x800C1398: jr          $ra
    // 0x800C139C: nop

    return;
    // 0x800C139C: nop

;}
RECOMP_FUNC void static_3_800C14CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C14CC: lbu         $t2, 0x78($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X78);
    // 0x800C14D0: bne         $t2, $zero, L_800C14E4
    if (ctx->r10 != 0) {
            // 0x800C14D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    func_800C14E4(rdram, ctx);
    return;
    }
    // 0x800C14D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800C14D8: sb          $t3, 0x78($a0)
    MEM_B(0X78, ctx->r4) = ctx->r11;
    // 0x800C14DC: jr          $ra
    // 0x800C14E0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x800C14E0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void static_3_800C150C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C150C: bnel        $t7, $zero, L_800C1530
    if (ctx->r15 != 0) {
            // 0x800C1510: lbu         $t0, 0x1F8($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1F8);
    static_3_800C1530(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C1510: lbu         $t0, 0x1F8($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1F8);
    skip_0:
    // 0x800C1514: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x800C1518: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x800C151C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800C1520: sb          $t8, 0x178($a0)
    MEM_B(0X178, ctx->r4) = ctx->r24;
    // 0x800C1524: jr          $ra
    // 0x800C1528: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x800C1528: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
;}
RECOMP_FUNC void static_3_800C1530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1530: bnel        $t0, $zero, L_800C1554
    if (ctx->r8 != 0) {
            // 0x800C1534: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800C1554(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C1534: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800C1538: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    // 0x800C153C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x800C1540: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C1544: sb          $t1, 0x1F8($a0)
    MEM_B(0X1F8, ctx->r4) = ctx->r9;
    // 0x800C1548: jr          $ra
    // 0x800C154C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    return;
    // 0x800C154C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
;}
RECOMP_FUNC void static_3_800C1554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800C14CC:
    // 0x800C1554: bne         $v1, $v0, L_800C14CC
    if (ctx->r3 != ctx->r2) {
            // 0x800C1558: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    static_3_800C14CC(rdram, ctx);
    return;
    }
    // 0x800C1558: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x800C155C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C1560: jr          $ra
    // 0x800C1564: nop

    return;
    // 0x800C1564: nop

;}
RECOMP_FUNC void static_3_800C15C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C15C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800C15C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800C15C8: addiu       $a0, $a0, -0x74F0
    ctx->r4 = ADD32(ctx->r4, -0X74F0);
    // 0x800C15CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
;}
RECOMP_FUNC void static_3_800C15D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C15D0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800C15D4: beql        $t6, $zero, L_800C15E8
    if (ctx->r14 == 0) {
        // 0x800C15D8: lw          $t7, 0x0($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X0);
            goto L_800C15E8;
    }
    goto skip_0;
    // 0x800C15D8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800C15DC: b           L_800C15FC
    // 0x800C15E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    func_800C15FC(rdram, ctx);
    return;
    // 0x800C15E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800C15E4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
L_800C15E8:
    // 0x800C15E8: bne         $t7, $zero, L_800C15FC
    if (ctx->r15 != 0) {
            // 0x800C15EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    func_800C15FC(rdram, ctx);
    return;
    }
    // 0x800C15EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800C15F0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800C15F4: jr          $ra
    // 0x800C15F8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x800C15F8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
;}
RECOMP_FUNC void static_3_800C5E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5E48: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x800C5E4C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800C5E50: nop

    // 0x800C5E54: bc1fl       L_800C5E68
    if (!c1cs) {
            // 0x800C5E58: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    static_3_800C5E68(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C5E58: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    skip_0:
    // 0x800C5E5C: jr          $ra
    // 0x800C5E60: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800C5E60: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void static_3_800C5E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5E68: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x800C5E6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C5E70: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x800C5E74: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800C5E78: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x800C5E7C: nop

    // 0x800C5E80: bc1fl       L_800C5E94
    if (!c1cs) {
            // 0x800C5E84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    static_3_800C5E94(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C5E84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_0:
    // 0x800C5E88: jr          $ra
    // 0x800C5E8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800C5E8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void static_3_800C5E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5E94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800C5E98: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x800C5E9C: nop

    // 0x800C5EA0: bc1f        L_800C5EB0
    if (!c1cs) {
            // 0x800C5EA4: nop

    func_800C5EB0(rdram, ctx);
    return;
    }
    // 0x800C5EA4: nop

    // 0x800C5EA8: jr          $ra
    // 0x800C5EAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x800C5EAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void static_3_800C7148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7148: jr          $ra
    // 0x800C714C: nop

    return;
    // 0x800C714C: nop

;}
RECOMP_FUNC void static_3_800C79A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C79A0: bnel        $v0, $at, L_800C79B8
    if (ctx->r2 != ctx->r1) {
            // 0x800C79A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    static_3_800C79B8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C79A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x800C79A8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C79AC: jr          $ra
    // 0x800C79B0: addiu       $v0, $v0, -0x6EF8
    ctx->r2 = ADD32(ctx->r2, -0X6EF8);
    return;
    // 0x800C79B0: addiu       $v0, $v0, -0x6EF8
    ctx->r2 = ADD32(ctx->r2, -0X6EF8);
;}
RECOMP_FUNC void static_3_800C79B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C79B8: bne         $v0, $at, L_800C79C8
    if (ctx->r2 != ctx->r1) {
            // 0x800C79BC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    func_800C79C8(rdram, ctx);
    return;
    }
    // 0x800C79BC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C79C0: jr          $ra
    // 0x800C79C4: addiu       $v0, $v0, -0x6EF0
    ctx->r2 = ADD32(ctx->r2, -0X6EF0);
    return;
    // 0x800C79C4: addiu       $v0, $v0, -0x6EF0
    ctx->r2 = ADD32(ctx->r2, -0X6EF0);
;}
RECOMP_FUNC void static_3_800C7A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7A0C: bnel        $v0, $at, L_800C7A24
    if (ctx->r2 != ctx->r1) {
            // 0x800C7A10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    static_3_800C7A24(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C7A10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x800C7A14: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C7A18: jr          $ra
    // 0x800C7A1C: addiu       $v0, $v0, -0x6F28
    ctx->r2 = ADD32(ctx->r2, -0X6F28);
    return;
    // 0x800C7A1C: addiu       $v0, $v0, -0x6F28
    ctx->r2 = ADD32(ctx->r2, -0X6F28);
;}
RECOMP_FUNC void static_3_800C7A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7A24: bne         $v0, $at, L_800C7A34
    if (ctx->r2 != ctx->r1) {
            // 0x800C7A28: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    func_800C7A34(rdram, ctx);
    return;
    }
    // 0x800C7A28: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800C7A2C: jr          $ra
    // 0x800C7A30: addiu       $v0, $v0, -0x6F18
    ctx->r2 = ADD32(ctx->r2, -0X6F18);
    return;
    // 0x800C7A30: addiu       $v0, $v0, -0x6F18
    ctx->r2 = ADD32(ctx->r2, -0X6F18);
;}
RECOMP_FUNC void static_3_800C84FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C84FC: bnel        $v0, $t8, L_800C8510
    if (ctx->r2 != ctx->r24) {
            // 0x800C8500: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    static_3_800C8510(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C8500: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    skip_0:
    // 0x800C8504: jr          $ra
    // 0x800C8508: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    return;
    // 0x800C8508: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void static_3_800C8510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8510: bnel        $v0, $t9, L_800C8524
    if (ctx->r2 != ctx->r25) {
            // 0x800C8514: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    static_3_800C8524(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C8514: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    skip_0:
    // 0x800C8518: jr          $ra
    // 0x800C851C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x800C851C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void static_3_800C8524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8524: bnel        $v0, $t0, L_800C8538
    if (ctx->r2 != ctx->r8) {
            // 0x800C8528: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    static_3_800C8538(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C8528: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    skip_0:
    // 0x800C852C: jr          $ra
    // 0x800C8530: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    return;
    // 0x800C8530: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
;}
RECOMP_FUNC void static_3_800C8538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8538: bnel        $v0, $t1, L_800C854C
    if (ctx->r2 != ctx->r9) {
            // 0x800C853C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    static_3_800C854C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C853C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    skip_0:
    // 0x800C8540: jr          $ra
    // 0x800C8544: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    return;
    // 0x800C8544: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
;}
RECOMP_FUNC void static_3_800C854C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800C84FC:
    // 0x800C854C: bnel        $a0, $v1, L_800C84FC
    if (ctx->r4 != ctx->r3) {
            // 0x800C8550: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    static_3_800C84FC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800C8550: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800C8554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800C8558: jr          $ra
    // 0x800C855C: nop

    return;
    // 0x800C855C: nop

;}
RECOMP_FUNC void static_3_800CAA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAA38: lwc1        $f2, 0x24($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X24);
    // 0x800CAA3C: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x800CAA40: lwc1        $f14, 0x2C($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x800CAA44: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x800CAA48: nop

    // 0x800CAA4C: bc1fl       L_800CAA60
    if (!c1cs) {
        // 0x800CAA50: lwc1        $f16, 0x0($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
            goto L_800CAA60;
    }
    goto skip_0;
    // 0x800CAA50: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x800CAA54: b           L_800CAA60
    // 0x800CAA58: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
        goto L_800CAA60;
    // 0x800CAA58: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800CAA5C: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
L_800CAA60:
    // 0x800CAA60: lwc1        $f12, 0x28($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X28);
    // 0x800CAA64: mul.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x800CAA68: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x800CAA6C: nop

    // 0x800CAA70: bc1fl       L_800CAA84
    if (!c1cs) {
        // 0x800CAA74: lwc1        $f16, 0x4($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
            goto L_800CAA84;
    }
    goto skip_1;
    // 0x800CAA74: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    skip_1:
    // 0x800CAA78: b           L_800CAA84
    // 0x800CAA7C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
        goto L_800CAA84;
    // 0x800CAA7C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800CAA80: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
L_800CAA84:
    // 0x800CAA84: c.le.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
    // 0x800CAA88: mul.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800CAA8C: bc1fl       L_800CAAA0
    if (!c1cs) {
        // 0x800CAA90: lwc1        $f16, 0x8($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
            goto L_800CAAA0;
    }
    goto skip_2;
    // 0x800CAA90: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    skip_2:
    // 0x800CAA94: b           L_800CAAA0
    // 0x800CAA98: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
        goto L_800CAAA0;
    // 0x800CAA98: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800CAA9C: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
L_800CAAA0:
    // 0x800CAAA0: mul.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x800CAAA4: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CAAA8: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800CAAAC: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x800CAAB0: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x800CAAB4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800CAAB8: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x800CAABC: nop

    // 0x800CAAC0: bc1fl       L_800CAAD4
    if (!c1cs) {
        // 0x800CAAC4: lwc1        $f0, 0x34($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
            goto L_800CAAD4;
    }
    goto skip_3;
    // 0x800CAAC4: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
    skip_3:
    // 0x800CAAC8: jr          $ra
    // 0x800CAACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CAACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CAAD0: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
L_800CAAD4:
    // 0x800CAAD4: lwc1        $f2, 0x38($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X38);
    // 0x800CAAD8: lwc1        $f12, 0x3C($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X3C);
    // 0x800CAADC: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x800CAAE0: addiu       $v0, $a3, 0x34
    ctx->r2 = ADD32(ctx->r7, 0X34);
    // 0x800CAAE4: bc1fl       L_800CAAF8
    if (!c1cs) {
        // 0x800CAAE8: lwc1        $f16, 0x0($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
            goto L_800CAAF8;
    }
    goto skip_4;
    // 0x800CAAE8: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    skip_4:
    // 0x800CAAEC: b           L_800CAAF8
    // 0x800CAAF0: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
        goto L_800CAAF8;
    // 0x800CAAF0: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800CAAF4: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
L_800CAAF8:
    // 0x800CAAF8: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x800CAAFC: mul.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800CAB00: bc1fl       L_800CAB14
    if (!c1cs) {
        // 0x800CAB04: lwc1        $f16, 0x4($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
            goto L_800CAB14;
    }
    goto skip_5;
    // 0x800CAB04: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    skip_5:
    // 0x800CAB08: b           L_800CAB14
    // 0x800CAB0C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
        goto L_800CAB14;
    // 0x800CAB0C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800CAB10: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
L_800CAB14:
    // 0x800CAB14: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x800CAB18: mul.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x800CAB1C: bc1fl       L_800CAB30
    if (!c1cs) {
        // 0x800CAB20: lwc1        $f16, 0x8($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
            goto L_800CAB30;
    }
    goto skip_6;
    // 0x800CAB20: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    skip_6:
    // 0x800CAB24: b           L_800CAB30
    // 0x800CAB28: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
        goto L_800CAB30;
    // 0x800CAB28: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800CAB2C: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
L_800CAB30:
    // 0x800CAB30: mul.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800CAB34: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CAB38: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800CAB3C: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x800CAB40: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800CAB44: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x800CAB48: nop

    // 0x800CAB4C: bc1f        L_800CAB5C
    if (!c1cs) {
            // 0x800CAB50: nop

    func_800CAB5C(rdram, ctx);
    return;
    }
    // 0x800CAB50: nop

    // 0x800CAB54: jr          $ra
    // 0x800CAB58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CAB58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void static_3_800CAB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAB84: lwc1        $f0, 0x24($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X24);
    // 0x800CAB88: lwc1        $f12, 0x28($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X28);
    // 0x800CAB8C: lwc1        $f16, 0x2C($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x800CAB90: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x800CAB94: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x800CAB98: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800CAB9C: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    // 0x800CABA0: bc1fl       L_800CABB4
    if (!c1cs) {
        // 0x800CABA4: lh          $v0, 0x0($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X0);
            goto L_800CABB4;
    }
    goto skip_0;
    // 0x800CABA4: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    skip_0:
    // 0x800CABA8: b           L_800CABB4
    // 0x800CABAC: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
        goto L_800CABB4;
    // 0x800CABAC: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x800CABB0: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
L_800CABB4:
    // 0x800CABB4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800CABB8: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x800CABBC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CABC0: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800CABC4: bc1fl       L_800CABD8
    if (!c1cs) {
        // 0x800CABC8: lh          $v0, 0x2($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X2);
            goto L_800CABD8;
    }
    goto skip_1;
    // 0x800CABC8: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
    skip_1:
    // 0x800CABCC: b           L_800CABD8
    // 0x800CABD0: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
        goto L_800CABD8;
    // 0x800CABD0: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x800CABD4: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
L_800CABD8:
    // 0x800CABD8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800CABDC: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x800CABE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CABE4: mul.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x800CABE8: bc1fl       L_800CABFC
    if (!c1cs) {
        // 0x800CABEC: lh          $v0, 0x4($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X4);
            goto L_800CABFC;
    }
    goto skip_2;
    // 0x800CABEC: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
    skip_2:
    // 0x800CABF0: b           L_800CABFC
    // 0x800CABF4: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
        goto L_800CABFC;
    // 0x800CABF4: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x800CABF8: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
L_800CABFC:
    // 0x800CABFC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800CAC00: add.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CAC04: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800CAC08: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x800CAC0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CAC10: mul.s       $f14, $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x800CAC14: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x800CAC18: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800CAC1C: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x800CAC20: nop

    // 0x800CAC24: bc1fl       L_800CAC38
    if (!c1cs) {
        // 0x800CAC28: lwc1        $f0, 0x34($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
            goto L_800CAC38;
    }
    goto skip_3;
    // 0x800CAC28: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
    skip_3:
    // 0x800CAC2C: jr          $ra
    // 0x800CAC30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CAC30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CAC34: lwc1        $f0, 0x34($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X34);
L_800CAC38:
    // 0x800CAC38: lwc1        $f2, 0x38($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X38);
    // 0x800CAC3C: lwc1        $f14, 0x3C($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X3C);
    // 0x800CAC40: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x800CAC44: addiu       $a0, $a3, 0x34
    ctx->r4 = ADD32(ctx->r7, 0X34);
    // 0x800CAC48: bc1fl       L_800CAC5C
    if (!c1cs) {
        // 0x800CAC4C: lh          $v0, 0x0($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X0);
            goto L_800CAC5C;
    }
    goto skip_4;
    // 0x800CAC4C: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    skip_4:
    // 0x800CAC50: b           L_800CAC5C
    // 0x800CAC54: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
        goto L_800CAC5C;
    // 0x800CAC54: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x800CAC58: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
L_800CAC5C:
    // 0x800CAC5C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800CAC60: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x800CAC64: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CAC68: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800CAC6C: bc1fl       L_800CAC80
    if (!c1cs) {
        // 0x800CAC70: lh          $v0, 0x2($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X2);
            goto L_800CAC80;
    }
    goto skip_5;
    // 0x800CAC70: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
    skip_5:
    // 0x800CAC74: b           L_800CAC80
    // 0x800CAC78: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
        goto L_800CAC80;
    // 0x800CAC78: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x800CAC7C: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
L_800CAC80:
    // 0x800CAC80: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800CAC84: c.le.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
    // 0x800CAC88: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CAC8C: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800CAC90: bc1fl       L_800CACA4
    if (!c1cs) {
        // 0x800CAC94: lh          $v0, 0x4($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X4);
            goto L_800CACA4;
    }
    goto skip_6;
    // 0x800CAC94: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
    skip_6:
    // 0x800CAC98: b           L_800CACA4
    // 0x800CAC9C: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
        goto L_800CACA4;
    // 0x800CAC9C: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x800CACA0: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
L_800CACA4:
    // 0x800CACA4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800CACA8: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800CACAC: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x800CACB0: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CACB4: mul.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x800CACB8: add.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x800CACBC: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x800CACC0: c.le.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl <= ctx->f8.fl;
    // 0x800CACC4: nop

    // 0x800CACC8: bc1f        L_800CACD8
    if (!c1cs) {
            // 0x800CACCC: nop

    func_800CACD8(rdram, ctx);
    return;
    }
    // 0x800CACCC: nop

    // 0x800CACD0: jr          $ra
    // 0x800CACD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CACD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void static_3_800CB510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB510: jr          $ra
    // 0x800CB514: nop

    return;
    // 0x800CB514: nop

;}
RECOMP_FUNC void static_3_800CE298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE298: bnel        $a0, $t2, L_800CE2AC
    if (ctx->r4 != ctx->r10) {
            // 0x800CE29C: lhu         $t3, 0x8($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X8);
    static_3_800CE2AC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CE29C: lhu         $t3, 0x8($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X8);
    skip_0:
    // 0x800CE2A0: jr          $ra
    // 0x800CE2A4: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    return;
    // 0x800CE2A4: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
;}
RECOMP_FUNC void static_3_800CE2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE2AC: bnel        $a0, $t3, L_800CE2C0
    if (ctx->r4 != ctx->r11) {
            // 0x800CE2B0: lhu         $t4, 0xC($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XC);
    static_3_800CE2C0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CE2B0: lhu         $t4, 0xC($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XC);
    skip_0:
    // 0x800CE2B4: jr          $ra
    // 0x800CE2B8: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    return;
    // 0x800CE2B8: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
;}
RECOMP_FUNC void static_3_800CE2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE2C0: bnel        $a0, $t4, L_800CE2D4
    if (ctx->r4 != ctx->r12) {
            // 0x800CE2C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    static_3_800CE2D4(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CE2C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x800CE2C8: jr          $ra
    // 0x800CE2CC: lhu         $v0, 0xE($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XE);
    return;
    // 0x800CE2CC: lhu         $v0, 0xE($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XE);
;}
RECOMP_FUNC void static_3_800CE2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE2D4: jr          $ra
    // 0x800CE2D8: nop

    return;
    // 0x800CE2D8: nop

;}
RECOMP_FUNC void static_3_800CE600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE600: andi        $t1, $v0, 0x8
    ctx->r9 = ctx->r2 & 0X8;
    // 0x800CE604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800CE608: beq         $t0, $zero, L_800CE620
    if (ctx->r8 == 0) {
            // 0x800CE60C: nop

    func_800CE620(rdram, ctx);
    return;
    }
    // 0x800CE60C: nop

    // 0x800CE610: beq         $t1, $zero, L_800CE620
    if (ctx->r9 == 0) {
            // 0x800CE614: nop

    func_800CE620(rdram, ctx);
    return;
    }
    // 0x800CE614: nop

    // 0x800CE618: jr          $ra
    // 0x800CE61C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800CE61C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void static_3_800CF89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF89C: bnel        $a0, $t6, L_800CF8BC
    if (ctx->r4 != ctx->r14) {
            // 0x800CF8A0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF8BC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF8A0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800CF8A4: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x800CF8A8: bnel        $a1, $t7, L_800CF8BC
    if (ctx->r5 != ctx->r15) {
            // 0x800CF8AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF8BC(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF8AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_1:
    // 0x800CF8B0: jr          $ra
    // 0x800CF8B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800CF8B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void static_3_800CF8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800CF89C:
    // 0x800CF8BC: bnel        $v1, $v0, L_800CF89C
    if (ctx->r3 != ctx->r2) {
            // 0x800CF8C0: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    static_3_800CF89C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF8C0: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    skip_0:
    // 0x800CF8C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CF8C8: jr          $ra
    // 0x800CF8CC: nop

    return;
    // 0x800CF8CC: nop

;}
RECOMP_FUNC void static_3_800CF8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF8E4: bnel        $a0, $t6, L_800CF904
    if (ctx->r4 != ctx->r14) {
            // 0x800CF8E8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF904(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF8E8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800CF8EC: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x800CF8F0: bnel        $a1, $t7, L_800CF904
    if (ctx->r5 != ctx->r15) {
            // 0x800CF8F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF904(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF8F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_1:
    // 0x800CF8F8: jr          $ra
    // 0x800CF8FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800CF8FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void static_3_800CF904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800CF8E4:
    // 0x800CF904: bnel        $v1, $v0, L_800CF8E4
    if (ctx->r3 != ctx->r2) {
            // 0x800CF908: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    static_3_800CF8E4(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF908: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    skip_0:
    // 0x800CF90C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800CF910: jr          $ra
    // 0x800CF914: nop

    return;
    // 0x800CF914: nop

;}
RECOMP_FUNC void static_3_800CF94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF94C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x800CF950: bnel        $a0, $t8, L_800CF970
    if (ctx->r4 != ctx->r24) {
            // 0x800CF954: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    static_3_800CF970(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF954: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    skip_0:
    // 0x800CF958: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x800CF95C: bnel        $a1, $t9, L_800CF970
    if (ctx->r5 != ctx->r25) {
            // 0x800CF960: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    static_3_800CF970(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF960: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    skip_1:
    // 0x800CF964: jr          $ra
    // 0x800CF968: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800CF968: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void static_3_800CF970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF970: bnel        $a0, $t0, L_800CF990
    if (ctx->r4 != ctx->r8) {
            // 0x800CF974: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    static_3_800CF990(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF974: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    skip_0:
    // 0x800CF978: lh          $t1, 0x12($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X12);
    // 0x800CF97C: bnel        $a1, $t1, L_800CF990
    if (ctx->r5 != ctx->r9) {
            // 0x800CF980: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    static_3_800CF990(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF980: lh          $t2, 0x20($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X20);
    skip_1:
    // 0x800CF984: jr          $ra
    // 0x800CF988: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x800CF988: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
;}
RECOMP_FUNC void static_3_800CF990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF990: bnel        $a0, $t2, L_800CF9B0
    if (ctx->r4 != ctx->r10) {
            // 0x800CF994: lh          $t4, 0x30($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X30);
    static_3_800CF9B0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF994: lh          $t4, 0x30($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X30);
    skip_0:
    // 0x800CF998: lh          $t3, 0x22($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X22);
    // 0x800CF99C: bnel        $a1, $t3, L_800CF9B0
    if (ctx->r5 != ctx->r11) {
            // 0x800CF9A0: lh          $t4, 0x30($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X30);
    static_3_800CF9B0(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF9A0: lh          $t4, 0x30($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X30);
    skip_1:
    // 0x800CF9A4: jr          $ra
    // 0x800CF9A8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x800CF9A8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
;}
RECOMP_FUNC void static_3_800CF9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF9B0: bnel        $a0, $t4, L_800CF9D0
    if (ctx->r4 != ctx->r12) {
            // 0x800CF9B4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF9D0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800CF9B4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800CF9B8: lh          $t5, 0x32($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X32);
    // 0x800CF9BC: bnel        $a1, $t5, L_800CF9D0
    if (ctx->r5 != ctx->r13) {
            // 0x800CF9C0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    static_3_800CF9D0(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800CF9C0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_1:
    // 0x800CF9C4: jr          $ra
    // 0x800CF9C8: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x800CF9C8: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
;}
RECOMP_FUNC void static_3_800CF9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800CF94C:
    // 0x800CF9D0: bne         $v1, $a2, L_800CF94C
    if (ctx->r3 != ctx->r6) {
            // 0x800CF9D4: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    static_3_800CF94C(rdram, ctx);
    return;
    }
    // 0x800CF9D4: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x800CF9D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800CF9DC: jr          $ra
    // 0x800CF9E0: nop

    return;
    // 0x800CF9E0: nop

;}
RECOMP_FUNC void static_3_800D2224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2224: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800D2228: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x800D222C: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x800D2230: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x800D2234: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x800D2238: bne         $a0, $t1, L_800D2248
    if (ctx->r4 != ctx->r9) {
            // 0x800D223C: nop

    func_800D2248(rdram, ctx);
    return;
    }
    // 0x800D223C: nop

    // 0x800D2240: jr          $ra
    // 0x800D2244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800D2244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void static_3_800D2254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2254: jr          $ra
    // 0x800D2258: nop

    return;
    // 0x800D2258: nop

;}
RECOMP_FUNC void static_3_800D2EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2EB8: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x800D2EBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800D2EC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D2EC4: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x800D2EC8: beq         $t0, $zero, L_800D2ED8
    if (ctx->r8 == 0) {
        // 0x800D2ECC: nop
    
            goto L_800D2ED8;
    }
    // 0x800D2ECC: nop

    // 0x800D2ED0: b           L_800D2ED8
    // 0x800D2ED4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800D2ED8;
    // 0x800D2ED4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800D2ED8:
    // 0x800D2ED8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800D2EDC: jr          $ra
    // 0x800D2EE0: nop

    return;
    // 0x800D2EE0: nop

;}
RECOMP_FUNC void static_3_800D3D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3D50: jr          $ra
    // 0x800D3D54: nop

    return;
    // 0x800D3D54: nop

;}
RECOMP_FUNC void static_3_800D4254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4254: bnel        $a0, $t2, L_800D4268
    if (ctx->r4 != ctx->r10) {
            // 0x800D4258: lh          $t3, 0x8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8);
    static_3_800D4268(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D4258: lh          $t3, 0x8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8);
    skip_0:
    // 0x800D425C: jr          $ra
    // 0x800D4260: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
    return;
    // 0x800D4260: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
;}
RECOMP_FUNC void static_3_800D4268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4268: bnel        $a0, $t3, L_800D427C
    if (ctx->r4 != ctx->r11) {
            // 0x800D426C: lh          $t4, 0xC($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XC);
    static_3_800D427C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D426C: lh          $t4, 0xC($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XC);
    skip_0:
    // 0x800D4270: jr          $ra
    // 0x800D4274: lh          $v0, 0xA($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA);
    return;
    // 0x800D4274: lh          $v0, 0xA($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA);
;}
RECOMP_FUNC void static_3_800D427C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D427C: bnel        $a0, $t4, L_800D4290
    if (ctx->r4 != ctx->r12) {
            // 0x800D4280: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    static_3_800D4290(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800D4280: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    skip_0:
    // 0x800D4284: jr          $ra
    // 0x800D4288: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    return;
    // 0x800D4288: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
;}
RECOMP_FUNC void static_3_800D4290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4290: jr          $ra
    // 0x800D4294: nop

    return;
    // 0x800D4294: nop

;}
RECOMP_FUNC void static_3_800DAE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DAE70: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x800DAE74: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800DAE78: jr          $ra
    // 0x800DAE7C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x800DAE7C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void static_3_800DAE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800DAE6C:
    // 0x800DAE84: nop

    // 0x800DAE88: bltz        $v0, L_800DAE6C
    if (SIGNED(ctx->r2) < 0) {
            // 0x800DAE8C: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    func_800DAE6C(rdram, ctx);
    return;
    }
    // 0x800DAE8C: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x800DAE90: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800DAE94: jr          $ra
    // 0x800DAE98: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x800DAE98: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void static_3_800DCF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DCF1C: lui         $t1, 0xDE00
    ctx->r9 = S32(0XDE00 << 16);
    // 0x800DCF20: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800DCF24: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x800DCF28: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x800DCF2C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x800DCF30: lw          $t2, -0x37E0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X37E0);
    // 0x800DCF34: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800DCF38: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x800DCF3C: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800DCF40: jr          $ra
    // 0x800DCF44: nop

    return;
    // 0x800DCF44: nop

;}
RECOMP_FUNC void static_3_800E0488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void static_3_800E4678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void static_3_800E47C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E47C4: jr          $ra
    // 0x800E47C8: nop

    return;
    // 0x800E47C8: nop

;}
RECOMP_FUNC void static_3_800E47E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void static_3_800E4818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void static_3_800E4844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void static_3_800E4870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void static_3_800E7200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7200: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800E7204: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800E7208: beql        $v0, $zero, L_800E7220
    if (ctx->r2 == 0) {
        // 0x800E720C: lbu         $v1, 0x0($a2)
        ctx->r3 = MEM_BU(ctx->r6, 0X0);
            goto L_800E7220;
    }
    goto skip_0;
    // 0x800E720C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    skip_0:
    // 0x800E7210: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x800E7214: bnel        $v0, $t8, L_800E7240
    if (ctx->r2 != ctx->r24) {
            // 0x800E7218: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    static_3_800E7240(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x800E7218: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    skip_1:
    // 0x800E721C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
L_800E7220:
    // 0x800E7220: beq         $v1, $zero, L_800E7234
    if (ctx->r3 == 0) {
        // 0x800E7224: nop
    
            goto L_800E7234;
    }
    // 0x800E7224: nop

    // 0x800E7228: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x800E722C: bnel        $v1, $t9, L_800E7240
    if (ctx->r3 != ctx->r25) {
            // 0x800E7230: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    static_3_800E7240(rdram, ctx);
    return;
    }
    goto skip_2;
    // 0x800E7230: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    skip_2:
L_800E7234:
    // 0x800E7234: jr          $ra
    // 0x800E7238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800E7238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void static_3_800E7240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800E7200:
    // 0x800E7240: beql        $v0, $t0, L_800E7200
    if (ctx->r2 == ctx->r8) {
            // 0x800E7244: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    static_3_800E7200(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800E7244: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    skip_0:
    // 0x800E7248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void static_3_800E724C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E724C: jr          $ra
    // 0x800E7250: nop

    return;
    // 0x800E7250: nop

;}
RECOMP_FUNC void static_3_800F0DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F0DA8: beq         $at, $zero, L_800F0DB8
    if (ctx->r1 == 0) {
            // 0x800F0DAC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    func_800F0DB8(rdram, ctx);
    return;
    }
    // 0x800F0DAC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800F0DB0: jr          $ra
    // 0x800F0DB4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x800F0DB4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void static_3_800F14F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F14F4: jr          $ra
    // 0x800F14F8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x800F14F8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void static_3_800F1528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F1528: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F152C: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x800F1530: bc1fl       L_800F1548
    if (!c1cs) {
            // 0x800F1534: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    static_3_800F1548(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800F1534: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    skip_0:
    // 0x800F1538: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800F153C: jr          $ra
    // 0x800F1540: nop

    return;
    // 0x800F1540: nop

;}
RECOMP_FUNC void static_3_800F1548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F1548: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800F154C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F1550: sub.s       $f16, $f14, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x800F1554: div.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800F1558: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x800F155C: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800F1560: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800F1564: mul.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x800F1568: nop

    // 0x800F156C: jr          $ra
    // 0x800F1570: nop

    return;
    // 0x800F1570: nop

;}
RECOMP_FUNC void static_3_800F6C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6C14: jr          $ra
    // 0x800F6C18: nop

    return;
    // 0x800F6C18: nop

;}
RECOMP_FUNC void static_3_800FA924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA924: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x800FA928: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x800FA92C: jr          $ra
    // 0x800FA930: nop

    return;
    // 0x800FA930: nop

;}
RECOMP_FUNC void static_3_800FB610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB610: bne         $a0, $v0, L_800FB620
    if (ctx->r4 != ctx->r2) {
            // 0x800FB614: nop

    func_800FB620(rdram, ctx);
    return;
    }
    // 0x800FB614: nop

    // 0x800FB618: jr          $ra
    // 0x800FB61C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x800FB61C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void static_3_800FE7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE7E4: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x800FE7E8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800FE7EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800FE7F0: beq         $t8, $zero, L_800FE80C
    if (ctx->r24 == 0) {
            // 0x800FE7F4: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    func_800FE80C(rdram, ctx);
    return;
    }
    // 0x800FE7F4: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x800FE7F8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x800FE7FC: bne         $a0, $t1, L_800FE80C
    if (ctx->r4 != ctx->r9) {
            // 0x800FE800: nop

    func_800FE80C(rdram, ctx);
    return;
    }
    // 0x800FE800: nop

    // 0x800FE804: jr          $ra
    // 0x800FE808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800FE808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void static_3_800FE814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800FE818: jr          $ra
    // 0x800FE81C: nop

    return;
    // 0x800FE81C: nop

;}
RECOMP_FUNC void static_3_801021AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801021AC: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x801021B0: sb          $t0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r8;
    // 0x801021B4: jr          $ra
    // 0x801021B8: nop

    return;
    // 0x801021B8: nop

;}
RECOMP_FUNC void static_3_80102F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102F30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80102F34: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x80102F38: sb          $t1, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r9;
    // 0x80102F3C: jr          $ra
    // 0x80102F40: nop

    return;
    // 0x80102F40: nop

;}
RECOMP_FUNC void static_3_80103004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103004: andi        $t0, $t9, 0xFFDF
    ctx->r8 = ctx->r25 & 0XFFDF;
    // 0x80103008: sb          $t0, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r8;
    // 0x8010300C: jr          $ra
    // 0x80103010: nop

    return;
    // 0x80103010: nop

;}
RECOMP_FUNC void static_3_8010312C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010312C: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x80103130: sb          $t0, 0x7E($a0)
    MEM_B(0X7E, ctx->r4) = ctx->r8;
    // 0x80103134: jr          $ra
    // 0x80103138: nop

    return;
    // 0x80103138: nop

    // 0x8010313C: nop

;}
RECOMP_FUNC void static_3_8010A008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A008: lbu         $t9, 0x1B($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1B);
    // 0x8010A00C: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x8010A010: sb          $t0, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r8;
    // 0x8010A014: jr          $ra
    // 0x8010A018: nop

    return;
    // 0x8010A018: nop

;}
RECOMP_FUNC void static_3_8010E894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void static_3_8010F2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void static_3_801138BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
