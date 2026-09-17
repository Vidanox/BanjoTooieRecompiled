#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void mlwave_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080011C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800120: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800124: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800128: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8080012C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x80800130: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80800134: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80800138: sub.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x8080013C: mul.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80800140: jal         0x8001395C
    // 0x80800144: nop

    func_8001395C(rdram, ctx);
        goto after_0;
    // 0x80800144: nop

    after_0:
    // 0x80800148: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8080014C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800150: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800154: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800158: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080015C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80800160: jal         0x800F10B4
    // 0x80800164: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x80800164: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80800168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080016C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800170: jr          $ra
    // 0x80800174: nop

    return;
    // 0x80800174: nop

;}
RECOMP_FUNC void mlwave_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800178: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080017C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80800180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800188: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8080018C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80800190: jal         0x8000011C
    // 0x80800194: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    mlwave_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800194: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80800198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080019C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001A0: jr          $ra
    // 0x808001A4: nop

    return;
    // 0x808001A4: nop

;}
RECOMP_FUNC void mlwave_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001B0: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x808001B4: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x808001B8: jal         0x800F13C4
    // 0x808001BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800F13C4(rdram, ctx);
        goto after_0;
    // 0x808001BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808001C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808001C8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808001CC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x808001D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808001D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808001D8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x808001DC: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x808001E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808001E4: bc1fl       L_808001FC
    if (!c1cs) {
        // 0x808001E8: lwc1        $f0, 0x8($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
            goto L_808001FC;
    }
    goto skip_0;
    // 0x808001E8: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    skip_0:
    // 0x808001EC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x808001F0: b           L_808001FC
    // 0x808001F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_808001FC;
    // 0x808001F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x808001F8: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
L_808001FC:
    // 0x808001FC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800200: jal         0x800F10B4
    // 0x80800204: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x80800204: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80800208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080020C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800210: jr          $ra
    // 0x80800214: nop

    return;
    // 0x80800214: nop

;}
RECOMP_FUNC void mlwave_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800218: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080021C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80800220: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x80800224: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80800228: jr          $ra
    // 0x8080022C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x8080022C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void mlwave_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800238: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080023C: lwc1        $f2, 0x18($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80800240: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800244: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x80800248: jal         0x800001A8
    // 0x8080024C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    mlwave_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x8080024C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x80800250: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800254: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800258: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8080025C: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80800260: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800268: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8080026C: nop

    // 0x80800270: bc1fl       L_80800300
    if (!c1cs) {
        // 0x80800274: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_80800300;
    }
    goto skip_0;
    // 0x80800274: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_0:
    // 0x80800278: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8080027C: nop

    // 0x80800280: bc1fl       L_808002C4
    if (!c1cs) {
        // 0x80800284: c.le.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
            goto L_808002C4;
    }
    goto skip_1;
    // 0x80800284: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    skip_1:
    // 0x80800288: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8080028C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800290: bc1f        L_8080029C
    if (!c1cs) {
        // 0x80800294: nop
    
            goto L_8080029C;
    }
    // 0x80800294: nop

    // 0x80800298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080029C:
    // 0x8080029C: beq         $v0, $zero, L_808002B8
    if (ctx->r2 == 0) {
        // 0x808002A0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_808002B8;
    }
    // 0x808002A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808002A4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x808002A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x808002AC: bc1f        L_808002B8
    if (!c1cs) {
        // 0x808002B0: nop
    
            goto L_808002B8;
    }
    // 0x808002B0: nop

    // 0x808002B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_808002B8:
    // 0x808002B8: b           L_8080037C
    // 0x808002BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8080037C;
    // 0x808002BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x808002C0: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
L_808002C4:
    // 0x808002C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808002C8: bc1f        L_808002D4
    if (!c1cs) {
        // 0x808002CC: nop
    
            goto L_808002D4;
    }
    // 0x808002CC: nop

    // 0x808002D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808002D4:
    // 0x808002D4: bne         $v0, $zero, L_808002F0
    if (ctx->r2 != 0) {
        // 0x808002D8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_808002F0;
    }
    // 0x808002D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808002DC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x808002E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x808002E4: bc1fl       L_808002F4
    if (!c1cs) {
        // 0x808002E8: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_808002F4;
    }
    goto skip_2;
    // 0x808002E8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_2:
    // 0x808002EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_808002F0:
    // 0x808002F0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_808002F4:
    // 0x808002F4: b           L_8080037C
    // 0x808002F8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8080037C;
    // 0x808002F8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x808002FC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_80800300:
    // 0x80800300: nop

    // 0x80800304: bc1fl       L_80800348
    if (!c1cs) {
        // 0x80800308: c.le.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
            goto L_80800348;
    }
    goto skip_3;
    // 0x80800308: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    skip_3:
    // 0x8080030C: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x80800310: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800314: bc1f        L_80800320
    if (!c1cs) {
        // 0x80800318: nop
    
            goto L_80800320;
    }
    // 0x80800318: nop

    // 0x8080031C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800320:
    // 0x80800320: beq         $v0, $zero, L_8080033C
    if (ctx->r2 == 0) {
        // 0x80800324: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080033C;
    }
    // 0x80800324: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800328: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8080032C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800330: bc1f        L_8080033C
    if (!c1cs) {
        // 0x80800334: nop
    
            goto L_8080033C;
    }
    // 0x80800334: nop

    // 0x80800338: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8080033C:
    // 0x8080033C: b           L_80800378
    // 0x80800340: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_80800378;
    // 0x80800340: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80800344: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
L_80800348:
    // 0x80800348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080034C: bc1f        L_80800358
    if (!c1cs) {
        // 0x80800350: nop
    
            goto L_80800358;
    }
    // 0x80800350: nop

    // 0x80800354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800358:
    // 0x80800358: bne         $v0, $zero, L_80800374
    if (ctx->r2 != 0) {
        // 0x8080035C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800374;
    }
    // 0x8080035C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800360: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80800364: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800368: bc1fl       L_80800378
    if (!c1cs) {
        // 0x8080036C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80800378;
    }
    goto skip_4;
    // 0x8080036C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_4:
    // 0x80800370: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80800374:
    // 0x80800374: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80800378:
    // 0x80800378: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8080037C:
    // 0x8080037C: jr          $ra
    // 0x80800380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void mlwave_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800384: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800388: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8080038C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800390: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800394: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80800398: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080039C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x808003A0: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x808003A4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x808003A8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808003AC: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x808003B0: nop

    // 0x808003B4: bc1tl       L_808003F4
    if (c1cs) {
        // 0x808003B8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808003F4;
    }
    goto skip_0;
    // 0x808003B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x808003BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_808003C0:
    // 0x808003C0: jal         0x80000230
    // 0x808003C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    mlwave_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x808003C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x808003C8: beql        $v0, $zero, L_808003DC
    if (ctx->r2 == 0) {
        // 0x808003CC: lwc1        $f0, 0x4($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
            goto L_808003DC;
    }
    goto skip_1;
    // 0x808003CC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x808003D0: b           L_808003F4
    // 0x808003D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808003F4;
    // 0x808003D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808003D8: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
L_808003DC:
    // 0x808003DC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x808003E0: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x808003E4: nop

    // 0x808003E8: bc1fl       L_808003C0
    if (!c1cs) {
        // 0x808003EC: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_808003C0;
    }
    goto skip_2;
    // 0x808003EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_2:
    // 0x808003F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808003F4:
    // 0x808003F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808003F8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x808003FC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800400: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800404: jr          $ra
    // 0x80800408: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800408: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080040C: nop

;}
RECOMP_FUNC void ncba1p_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x54
    ctx->r2 = ADD32(0, 0X54);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x54
    ctx->r2 = ADD32(0, 0X54);
;}
RECOMP_FUNC void func_80800008_ncba1p(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800014: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800018: jal         0x800EEAD4
    // 0x8080001C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_0;
    // 0x8080001C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80800020: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800024: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800030: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800034: nop

    // 0x80800038: bc1f        L_80800044
    if (!c1cs) {
        // 0x8080003C: nop
    
            goto L_80800044;
    }
    // 0x8080003C: nop

    // 0x80800040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800044:
    // 0x80800044: jr          $ra
    // 0x80800048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8080004C_ncba1p(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080004C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800054: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800058: jal         0x80110840
    // 0x8080005C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x8080005C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800060: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800064: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800068: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8080006C: lbu         $t8, 0x51($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X51);
    // 0x80800070: bnel        $t8, $zero, L_80800094
    if (ctx->r24 != 0) {
        // 0x80800074: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800094;
    }
    goto skip_0;
    // 0x80800074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800078: jal         0x800F7B9C
    // 0x8080007C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800F7B9C(rdram, ctx);
        goto after_1;
    // 0x8080007C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80800080: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80800084: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800088: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8080008C: sb          $t9, 0x51($t1)
    MEM_B(0X51, ctx->r9) = ctx->r25;
    // 0x80800090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800094:
    // 0x80800094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800098: jr          $ra
    // 0x8080009C: nop

    return;
    // 0x8080009C: nop

;}
RECOMP_FUNC void func_808000A0_ncba1p(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808000A4: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x808000A8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x808000AC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x808000B0: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x808000B4: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x808000B8: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x808000BC: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x808000C0: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x808000C4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x808000C8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x808000CC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x808000D0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x808000D4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x808000D8: jal         0x800D9078
    // 0x808000DC: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_800D9078(rdram, ctx);
        goto after_0;
    // 0x808000DC: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x808000E0: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x808000E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808000E8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x808000EC: lwc1        $f4, 0x48($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X48);
    // 0x808000F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808000F4: mul.s       $f0, $f4, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x808000F8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000FC: jal         0x801163A0
    // 0x80800100: nop

    func_801163A0(rdram, ctx);
        goto after_1;
    // 0x80800100: nop

    after_1:
    // 0x80800104: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800108: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8080010C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80800110: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80800114: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80800118: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_8080011C:
    // 0x8080011C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80800120: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80800124: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    // 0x80800128: addu        $s0, $a1, $s1
    ctx->r16 = ADD32(ctx->r5, ctx->r17);
    // 0x8080012C: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80800130: lw          $a3, 0x30($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X30);
    // 0x80800134: lwc1        $f12, 0x48($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X48);
    // 0x80800138: jal         0x800F130C
    // 0x8080013C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F130C(rdram, ctx);
        goto after_2;
    // 0x8080013C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80800140: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80800144: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x80800148: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x8080014C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80800150: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80800154: lwc1        $f12, 0x24($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80800158: jal         0x800F1DCC
    // 0x8080015C: lwc1        $f14, 0x3C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X3C);
    func_800F1DCC(rdram, ctx);
        goto after_3;
    // 0x8080015C: lwc1        $f14, 0x3C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X3C);
    after_3:
    // 0x80800160: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80800164: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800168: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8080016C: lwc1        $f12, 0x48($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X48);
    // 0x80800170: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80800174: jal         0x800F130C
    // 0x80800178: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_800F130C(rdram, ctx);
        goto after_4;
    // 0x80800178: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_4:
    // 0x8080017C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x80800180: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x80800184: lwc1        $f8, 0x3C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80800188: jal         0x800136E4
    // 0x8080018C: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
    func_800136E4(rdram, ctx);
        goto after_5;
    // 0x8080018C: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
    after_5:
    // 0x80800190: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x80800194: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x80800198: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8080019C: bne         $s1, $s3, L_8080011C
    if (ctx->r17 != ctx->r19) {
        // 0x808001A0: swc1        $f0, 0xC($t4)
        MEM_W(0XC, ctx->r12) = ctx->f0.u32l;
            goto L_8080011C;
    }
    // 0x808001A0: swc1        $f0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f0.u32l;
    // 0x808001A4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x808001A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808001AC: lwc1        $f10, 0x48($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X48);
    // 0x808001B0: c.eq.s      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.fl == ctx->f10.fl;
    // 0x808001B4: nop

    // 0x808001B8: bc1fl       L_808001D0
    if (!c1cs) {
        // 0x808001BC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_808001D0;
    }
    goto skip_0;
    // 0x808001BC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x808001C0: jal         0x80000620
    // 0x808001C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ncba1p_entrypoint_5(rdram, ctx);
        goto after_6;
    // 0x808001C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x808001C8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x808001CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_808001D0:
    // 0x808001D0: jal         0x80000008
    // 0x808001D4: addiu       $a2, $a1, 0x18
    ctx->r6 = ADD32(ctx->r5, 0X18);
    func_80800008_ncba1p(rdram, ctx);
        goto after_7;
    // 0x808001D4: addiu       $a2, $a1, 0x18
    ctx->r6 = ADD32(ctx->r5, 0X18);
    after_7:
    // 0x808001D8: beq         $v0, $zero, L_808001E8
    if (ctx->r2 == 0) {
        // 0x808001DC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_808001E8;
    }
    // 0x808001DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808001E0: jal         0x8000004C
    // 0x808001E4: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    func_8080004C_ncba1p(rdram, ctx);
        goto after_8;
    // 0x808001E4: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    after_8:
L_808001E8:
    // 0x808001E8: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x808001EC: jal         0x800EE7F8
    // 0x808001F0: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    func_800EE7F8(rdram, ctx);
        goto after_9;
    // 0x808001F0: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    after_9:
    // 0x808001F4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x808001F8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x808001FC: jal         0x800EE7F8
    // 0x80800200: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_10;
    // 0x80800200: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_10:
    // 0x80800204: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80800208: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8080020C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80800210: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80800214: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x80800218: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x8080021C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80800220: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x80800224: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x80800228: jr          $ra
    // 0x8080022C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8080022C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80800230_ncba1p(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800230: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800234: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80800238: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8080023C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80800240: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80800244: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80800248: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8080024C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80800250: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80800254: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80800258: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8080025C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80800260: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80800264: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80800268: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8080026C: jal         0x800D9078
    // 0x80800270: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_800D9078(rdram, ctx);
        goto after_0;
    // 0x80800270: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x80800274: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80800278: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080027C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80800280: lwc1        $f4, 0x48($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X48);
    // 0x80800284: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800288: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8080028C: sub.s       $f0, $f20, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x80800290: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800294: jal         0x801163A0
    // 0x80800298: nop

    func_801163A0(rdram, ctx);
        goto after_1;
    // 0x80800298: nop

    after_1:
    // 0x8080029C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808002A0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x808002A4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x808002A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808002AC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x808002B0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x808002B4: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
L_808002B8:
    // 0x808002B8: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x808002BC: lwc1        $f8, 0x0($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X0);
    // 0x808002C0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x808002C4: addu        $t7, $s1, $s0
    ctx->r15 = ADD32(ctx->r17, ctx->r16);
    // 0x808002C8: lw          $a3, 0x18($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X18);
    // 0x808002CC: lwc1        $f12, 0x48($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X48);
    // 0x808002D0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x808002D4: jal         0x800F130C
    // 0x808002D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F130C(rdram, ctx);
        goto after_2;
    // 0x808002D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x808002DC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x808002E0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x808002E4: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
    // 0x808002E8: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x808002EC: lwc1        $f12, 0x0($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X0);
    // 0x808002F0: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x808002F4: jal         0x800F1DCC
    // 0x808002F8: lwc1        $f14, 0x24($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X24);
    func_800F1DCC(rdram, ctx);
        goto after_3;
    // 0x808002F8: lwc1        $f14, 0x24($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X24);
    after_3:
    // 0x808002FC: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80800300: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80800304: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80800308: lwc1        $f12, 0x48($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X48);
    // 0x8080030C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80800310: jal         0x800F130C
    // 0x80800314: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800F130C(rdram, ctx);
        goto after_4;
    // 0x80800314: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_4:
    // 0x80800318: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8080031C: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80800320: lwc1        $f10, 0x24($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X24);
    // 0x80800324: jal         0x800136E4
    // 0x80800328: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    func_800136E4(rdram, ctx);
        goto after_5;
    // 0x80800328: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    after_5:
    // 0x8080032C: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x80800330: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80800334: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80800338: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x8080033C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800340: bne         $s0, $s5, L_808002B8
    if (ctx->r16 != ctx->r21) {
        // 0x80800344: swc1        $f0, 0xC($t6)
        MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
            goto L_808002B8;
    }
    // 0x80800344: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    // 0x80800348: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x8080034C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800350: lwc1        $f16, 0x48($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X48);
    // 0x80800354: c.eq.s      $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f22.fl == ctx->f16.fl;
    // 0x80800358: nop

    // 0x8080035C: bc1fl       L_80800374
    if (!c1cs) {
        // 0x80800360: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80800374;
    }
    goto skip_0;
    // 0x80800360: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x80800364: jal         0x80000620
    // 0x80800368: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ncba1p_entrypoint_5(rdram, ctx);
        goto after_6;
    // 0x80800368: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x8080036C: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x80800370: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80800374:
    // 0x80800374: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    // 0x80800378: jal         0x80000008
    // 0x8080037C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80800008_ncba1p(rdram, ctx);
        goto after_7;
    // 0x8080037C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x80800380: bne         $v0, $zero, L_80800390
    if (ctx->r2 != 0) {
        // 0x80800384: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80800390;
    }
    // 0x80800384: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800388: jal         0x8000004C
    // 0x8080038C: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    func_8080004C_ncba1p(rdram, ctx);
        goto after_8;
    // 0x8080038C: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    after_8:
L_80800390:
    // 0x80800390: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80800394: jal         0x800EE7F8
    // 0x80800398: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    func_800EE7F8(rdram, ctx);
        goto after_9;
    // 0x80800398: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    after_9:
    // 0x8080039C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x808003A0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x808003A4: jal         0x800EE7F8
    // 0x808003A8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_10;
    // 0x808003A8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_10:
    // 0x808003AC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x808003B0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808003B4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808003B8: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x808003BC: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x808003C0: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x808003C4: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x808003C8: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x808003CC: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x808003D0: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x808003D4: jr          $ra
    // 0x808003D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x808003D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_808003DC_ncba1p(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808003E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808003EC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808003F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808003F4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x808003F8: jal         0x801163A0
    // 0x808003FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801163A0(rdram, ctx);
        goto after_0;
    // 0x808003FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80800400: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80800404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800408: jal         0x800EE7F8
    // 0x8080040C: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8080040C: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    after_1:
    // 0x80800410: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80800414: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80800418: lbu         $t6, 0x50($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X50);
    // 0x8080041C: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    // 0x80800420: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x80800424: beq         $t6, $zero, L_8080043C
    if (ctx->r14 == 0) {
        // 0x80800428: addiu       $a0, $s0, 0xC
        ctx->r4 = ADD32(ctx->r16, 0XC);
            goto L_8080043C;
    }
    // 0x80800428: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x8080042C: jal         0x80111410
    // 0x80800430: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80111410(rdram, ctx);
        goto after_2;
    // 0x80800430: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80800434: b           L_80800448
    // 0x80800438: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
        goto L_80800448;
    // 0x80800438: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_8080043C:
    // 0x8080043C: jal         0x800EE7F8
    // 0x80800440: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x80800440: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    after_3:
    // 0x80800444: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_80800448:
    // 0x80800448: jal         0x800EE7F8
    // 0x8080044C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x8080044C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_4:
    // 0x80800450: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80800454: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800458: jal         0x800EE7F8
    // 0x8080045C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x8080045C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_5:
    // 0x80800460: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800464: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800468: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080046C: jr          $ra
    // 0x80800470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ncba1p_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800474: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800478: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080047C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800480: jal         0x80110840
    // 0x80800484: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80800484: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800488: jal         0x800878C0
    // 0x8080048C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _plcamera_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x8080048C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800490: bnel        $v0, $zero, L_8080051C
    if (ctx->r2 != 0) {
        // 0x80800494: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8080051C;
    }
    goto skip_0;
    // 0x80800494: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800498: jal         0x800EFD24
    // 0x8080049C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x8080049C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x808004A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x808004A4: jal         0x800EFD24
    // 0x808004A8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x808004A8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_3:
    // 0x808004AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x808004B0: jal         0x800EFD24
    // 0x808004B4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EFD24(rdram, ctx);
        goto after_4;
    // 0x808004B4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_4:
    // 0x808004B8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x808004BC: jal         0x800EFD24
    // 0x808004C0: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EFD24(rdram, ctx);
        goto after_5;
    // 0x808004C0: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_5:
    // 0x808004C4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x808004C8: jal         0x800EFD24
    // 0x808004CC: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    func_800EFD24(rdram, ctx);
        goto after_6;
    // 0x808004CC: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_6:
    // 0x808004D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x808004D4: jal         0x800EFD24
    // 0x808004D8: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    func_800EFD24(rdram, ctx);
        goto after_7;
    // 0x808004D8: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    after_7:
    // 0x808004DC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x808004E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808004E4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x808004E8: sw          $zero, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = 0;
    // 0x808004EC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x808004F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F8: sb          $t7, 0x50($t8)
    MEM_B(0X50, ctx->r24) = ctx->r15;
    // 0x808004FC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80800500: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80800504: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80800508: sb          $zero, 0x51($t9)
    MEM_B(0X51, ctx->r25) = 0;
    // 0x8080050C: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80800510: jal         0x80111590
    // 0x80800514: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80111590(rdram, ctx);
        goto after_8;
    // 0x80800514: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80800518: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080051C:
    // 0x8080051C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800524: jr          $ra
    // 0x80800528: nop

    return;
    // 0x80800528: nop

;}
RECOMP_FUNC void ncba1p_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080052C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800534: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80800538: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080053C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80800540: sw          $t6, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->r14;
    // 0x80800544: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80800548: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8080054C: jal         0x80000564
    // 0x80800550: sb          $zero, 0x50($t8)
    MEM_B(0X50, ctx->r24) = 0;
    ncba1p_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800550: sb          $zero, 0x50($t8)
    MEM_B(0X50, ctx->r24) = 0;
    after_0:
    // 0x80800554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800558: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080055C: jr          $ra
    // 0x80800560: nop

    return;
    // 0x80800560: nop

;}
RECOMP_FUNC void ncba1p_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080056C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80800570: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800574: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80800578: lw          $v0, 0x4C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4C);
    // 0x8080057C: beql        $v0, $at, L_808005B4
    if (ctx->r2 == ctx->r1) {
        // 0x80800580: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_808005B4;
    }
    goto skip_0;
    // 0x80800580: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x80800584: beq         $v0, $zero, L_808005B0
    if (ctx->r2 == 0) {
        // 0x80800588: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_808005B0;
    }
    // 0x80800588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080058C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800590: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800594: jal         0x8011607C
    // 0x80800598: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8011607C(rdram, ctx);
        goto after_0;
    // 0x80800598: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080059C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808005A0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x808005A4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x808005A8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x808005AC: lw          $v0, 0x4C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X4C);
L_808005B0:
    // 0x808005B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_808005B4:
    // 0x808005B4: beq         $v0, $at, L_808005DC
    if (ctx->r2 == ctx->r1) {
        // 0x808005B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808005DC;
    }
    // 0x808005B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808005BC: beq         $v0, $at, L_808005EC
    if (ctx->r2 == ctx->r1) {
        // 0x808005C0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808005EC;
    }
    // 0x808005C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808005C4: beq         $v0, $at, L_808005FC
    if (ctx->r2 == ctx->r1) {
        // 0x808005C8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_808005FC;
    }
    // 0x808005C8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808005CC: beql        $v0, $at, L_80800608
    if (ctx->r2 == ctx->r1) {
        // 0x808005D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800608;
    }
    goto skip_1;
    // 0x808005D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x808005D4: b           L_80800608
    // 0x808005D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800608;
    // 0x808005D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005DC:
    // 0x808005DC: jal         0x800000A0
    // 0x808005E0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_808000A0_ncba1p(rdram, ctx);
        goto after_1;
    // 0x808005E0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x808005E4: b           L_80800608
    // 0x808005E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800608;
    // 0x808005E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005EC:
    // 0x808005EC: jal         0x800003DC
    // 0x808005F0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_808003DC_ncba1p(rdram, ctx);
        goto after_2;
    // 0x808005F0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_2:
    // 0x808005F4: b           L_80800608
    // 0x808005F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800608;
    // 0x808005F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005FC:
    // 0x808005FC: jal         0x80000230
    // 0x80800600: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80800230_ncba1p(rdram, ctx);
        goto after_3;
    // 0x80800600: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_3:
    // 0x80800604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800608:
    // 0x80800608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080060C: jr          $ra
    // 0x80800610: nop

    return;
    // 0x80800610: nop

;}
RECOMP_FUNC void ncba1p_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800614: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80800618: jr          $ra
    // 0x8080061C: sb          $a1, 0x50($t6)
    MEM_B(0X50, ctx->r14) = ctx->r5;
    return;
    // 0x8080061C: sb          $a1, 0x50($t6)
    MEM_B(0X50, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void ncba1p_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800624: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800628: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080062C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800630: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80800634: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800638: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080063C: lw          $v0, 0x4C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4C);
    // 0x80800640: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80800644: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80800648: beq         $v0, $a2, L_80800660
    if (ctx->r2 == ctx->r6) {
        // 0x8080064C: nop
    
            goto L_80800660;
    }
    // 0x8080064C: nop

    // 0x80800650: beq         $v0, $v1, L_80800684
    if (ctx->r2 == ctx->r3) {
        // 0x80800654: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_80800684;
    }
    // 0x80800654: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80800658: b           L_808006A0
    // 0x8080065C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
        goto L_808006A0;
    // 0x8080065C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_80800660:
    // 0x80800660: bne         $t7, $a2, L_80800670
    if (ctx->r15 != ctx->r6) {
        // 0x80800664: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800670;
    }
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800668: b           L_8080069C
    // 0x8080066C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_8080069C;
    // 0x8080066C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80800670:
    // 0x80800670: jal         0x8000004C
    // 0x80800674: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    func_8080004C_ncba1p(rdram, ctx);
        goto after_0;
    // 0x80800674: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    after_0:
    // 0x80800678: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080067C: b           L_8080069C
    // 0x80800680: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_8080069C;
    // 0x80800680: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80800684:
    // 0x80800684: beq         $t8, $v1, L_8080069C
    if (ctx->r24 == ctx->r3) {
        // 0x80800688: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080069C;
    }
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080068C: jal         0x8000004C
    // 0x80800690: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    func_8080004C_ncba1p(rdram, ctx);
        goto after_1;
    // 0x80800690: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    after_1:
    // 0x80800694: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800698: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8080069C:
    // 0x8080069C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_808006A0:
    // 0x808006A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A8: beq         $t9, $a2, L_808006D4
    if (ctx->r25 == ctx->r6) {
        // 0x808006AC: nop
    
            goto L_808006D4;
    }
    // 0x808006AC: nop

    // 0x808006B0: beql        $t9, $at, L_808007AC
    if (ctx->r25 == ctx->r1) {
        // 0x808006B4: lw          $a2, 0x0($s0)
        ctx->r6 = MEM_W(ctx->r16, 0X0);
            goto L_808007AC;
    }
    goto skip_0;
    // 0x808006B4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x808006B8: beq         $t9, $v1, L_80800770
    if (ctx->r25 == ctx->r3) {
        // 0x808006BC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80800770;
    }
    // 0x808006BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808006C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808006C4: beq         $t9, $at, L_8080078C
    if (ctx->r25 == ctx->r1) {
        // 0x808006C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080078C;
    }
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006CC: b           L_808007AC
    // 0x808006D0: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
        goto L_808007AC;
    // 0x808006D0: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
L_808006D4:
    // 0x808006D4: jal         0x80110728
    // 0x808006D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80110728(rdram, ctx);
        goto after_2;
    // 0x808006D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x808006DC: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x808006E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808006E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E8: lw          $t0, 0x4C($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4C);
    // 0x808006EC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x808006F0: bne         $t0, $at, L_80800718
    if (ctx->r8 != ctx->r1) {
        // 0x808006F4: nop
    
            goto L_80800718;
    }
    // 0x808006F4: nop

    // 0x808006F8: jal         0x800EE7F8
    // 0x808006FC: addiu       $a0, $a2, 0x30
    ctx->r4 = ADD32(ctx->r6, 0X30);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x808006FC: addiu       $a0, $a2, 0x30
    ctx->r4 = ADD32(ctx->r6, 0X30);
    after_3:
    // 0x80800700: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x80800704: addiu       $a0, $a2, 0x3C
    ctx->r4 = ADD32(ctx->r6, 0X3C);
    // 0x80800708: jal         0x800EE7F8
    // 0x8080070C: addiu       $a1, $a2, 0xC
    ctx->r5 = ADD32(ctx->r6, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x8080070C: addiu       $a1, $a2, 0xC
    ctx->r5 = ADD32(ctx->r6, 0XC);
    after_4:
    // 0x80800710: b           L_80800754
    // 0x80800714: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
        goto L_80800754;
    // 0x80800714: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80800718:
    // 0x80800718: jal         0x801107F0
    // 0x8080071C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_801107F0(rdram, ctx);
        goto after_5;
    // 0x8080071C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_5:
    // 0x80800720: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80800724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800728: jal         0x80110818
    // 0x8080072C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_80110818(rdram, ctx);
        goto after_6;
    // 0x8080072C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_6:
    // 0x80800730: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80800734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800738: jal         0x801107F0
    // 0x8080073C: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    func_801107F0(rdram, ctx);
        goto after_7;
    // 0x8080073C: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    after_7:
    // 0x80800740: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80800744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800748: jal         0x80110818
    // 0x8080074C: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    func_80110818(rdram, ctx);
        goto after_8;
    // 0x8080074C: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    after_8:
    // 0x80800750: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80800754:
    // 0x80800754: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800758: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8080075C: swc1        $f4, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f4.u32l;
    // 0x80800760: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80800764: sb          $zero, 0x51($t2)
    MEM_B(0X51, ctx->r10) = 0;
    // 0x80800768: b           L_808007AC
    // 0x8080076C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
        goto L_808007AC;
    // 0x8080076C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
L_80800770:
    // 0x80800770: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800774: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80800778: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x8080077C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80800780: sb          $zero, 0x51($t4)
    MEM_B(0X51, ctx->r12) = 0;
    // 0x80800784: b           L_808007AC
    // 0x80800788: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
        goto L_808007AC;
    // 0x80800788: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
L_8080078C:
    // 0x8080078C: jal         0x801163A0
    // 0x80800790: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_801163A0(rdram, ctx);
        goto after_9;
    // 0x80800790: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_9:
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800798: jal         0x80110728
    // 0x8080079C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80110728(rdram, ctx);
        goto after_10;
    // 0x8080079C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x808007A0: b           L_808007AC
    // 0x808007A4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
        goto L_808007AC;
    // 0x808007A4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x808007A8: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
L_808007AC:
    // 0x808007AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x808007B0: sw          $t5, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r13;
    // 0x808007B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808007BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808007C0: jr          $ra
    // 0x808007C4: nop

    return;
    // 0x808007C4: nop

;}
RECOMP_FUNC void ncba1p_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x808007D4: jal         0x800EE7F8
    // 0x808007D8: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808007D8: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x808007DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007E4: jr          $ra
    // 0x808007E8: nop

    return;
    // 0x808007E8: nop

;}
RECOMP_FUNC void ncba1p_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808007F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808007FC: jal         0x800136E4
    // 0x80800800: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x80800800: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    after_0:
    // 0x80800804: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800808: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8080080C: swc1        $f0, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f0.u32l;
    // 0x80800810: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80800814: jal         0x800136E4
    // 0x80800818: lwc1        $f12, 0x4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X4);
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x80800818: lwc1        $f12, 0x4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X4);
    after_1:
    // 0x8080081C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80800820: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80800824: swc1        $f0, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f0.u32l;
    // 0x80800828: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8080082C: jal         0x800136E4
    // 0x80800830: lwc1        $f12, 0x8($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X8);
    func_800136E4(rdram, ctx);
        goto after_2;
    // 0x80800830: lwc1        $f12, 0x8($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X8);
    after_2:
    // 0x80800834: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80800838: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8080083C: swc1        $f0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f0.u32l;
    // 0x80800840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800848: jr          $ra
    // 0x8080084C: nop

    return;
    // 0x8080084C: nop

;}
RECOMP_FUNC void ncba1p_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800854: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80800858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080085C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800860: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80800864: jal         0x800EE7F8
    // 0x80800868: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800868: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    after_0:
    // 0x8080086C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800874: jr          $ra
    // 0x80800878: nop

    return;
    // 0x80800878: nop

;}
RECOMP_FUNC void ncba1p_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080087C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80800880: jr          $ra
    // 0x80800884: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    return;
    // 0x80800884: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
;}
RECOMP_FUNC void ncba1p_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800888: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8080088C: jr          $ra
    // 0x80800890: lw          $v0, 0x4C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4C);
    return;
    // 0x80800890: lw          $v0, 0x4C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4C);
;}
RECOMP_FUNC void ncba1p_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800894: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80800898: jr          $ra
    // 0x8080089C: lwc1        $f0, 0x48($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X48);
    return;
    // 0x8080089C: lwc1        $f0, 0x48($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X48);
;}
RECOMP_FUNC void ncba1p_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808008A4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x808008A8: jr          $ra
    // 0x808008AC: swc1        $f12, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808008AC: swc1        $f12, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void ncba1p_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808008B8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808008BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008C0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808008C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x808008C8: jal         0x800EE7F8
    // 0x808008CC: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808008CC: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x808008D0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x808008D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808008D8: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x808008DC: jal         0x800EE7F8
    // 0x808008E0: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808008E0: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_1:
    // 0x808008E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008EC: jr          $ra
    // 0x808008F0: nop

    return;
    // 0x808008F0: nop

    // 0x808008F4: nop

    // 0x808008F8: nop

    // 0x808008FC: nop

;}
RECOMP_FUNC void ncbabee_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800010: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    // 0x80800014: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x80800018: jal         0x801120CC
    // 0x8080001C: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    func_801120CC(rdram, ctx);
        goto after_0;
    // 0x8080001C: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    after_0:
    // 0x80800020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800024: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80800028: jal         0x80111B8C
    // 0x8080002C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_1;
    // 0x8080002C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_1:
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800034: jal         0x80115858
    // 0x80800038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80115858(rdram, ctx);
        goto after_2;
    // 0x80800038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800040: jal         0x80115870
    // 0x80800044: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80115870(rdram, ctx);
        goto after_3;
    // 0x80800044: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: jal         0x801124D0
    // 0x80800050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_4;
    // 0x80800050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800058: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080005C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800060: jr          $ra
    // 0x80800064: nop

    return;
    // 0x80800064: nop

;}
RECOMP_FUNC void ncbabee_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: jr          $ra
    // 0x8080006C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080006C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80800070_ncbabee(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800078: jal         0x80112550
    // 0x8080007C: nop

    func_80112550(rdram, ctx);
        goto after_0;
    // 0x8080007C: nop

    after_0:
    // 0x80800080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800088: jr          $ra
    // 0x8080008C: nop

    return;
    // 0x8080008C: nop

;}
RECOMP_FUNC void ncbabee_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800090: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80800094: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800098: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080009C: jal         0x80110840
    // 0x808000A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x808000A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000A4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000AC: jal         0x8011607C
    // 0x808000B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8011607C(rdram, ctx);
        goto after_1;
    // 0x808000B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: jal         0x801107F0
    // 0x808000BC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_801107F0(rdram, ctx);
        goto after_2;
    // 0x808000BC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: jal         0x80000070
    // 0x808000C8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_80800070_ncbabee(rdram, ctx);
        goto after_3;
    // 0x808000C8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_3:
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x808000D4: jal         0x80115444
    // 0x808000D8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80115444(rdram, ctx);
        goto after_4;
    // 0x808000D8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x808000DC: jal         0x800F5AE0
    // 0x808000E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800F5AE0(rdram, ctx);
        goto after_5;
    // 0x808000E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x808000E4: jal         0x80013728
    // 0x808000E8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80013728(rdram, ctx);
        goto after_6;
    // 0x808000E8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_6:
    // 0x808000EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000F0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000F4: jal         0x80115828
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115828(rdram, ctx);
        goto after_7;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808000FC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800100: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80800104: jal         0x800EFB24
    // 0x80800108: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_800EFB24(rdram, ctx);
        goto after_8;
    // 0x80800108: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_8:
    // 0x8080010C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800110: jal         0x800F1A88
    // 0x80800114: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800F1A88(rdram, ctx);
        goto after_9;
    // 0x80800114: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_9:
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: jal         0x80115750
    // 0x80800120: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_80115750(rdram, ctx);
        goto after_10;
    // 0x80800120: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_10:
    // 0x80800124: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80800128: jal         0x801112B0
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801112B0(rdram, ctx);
        goto after_11;
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800130: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800134: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800138: jal         0x800136E4
    // 0x8080013C: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_12;
    // 0x8080013C: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    after_12:
    // 0x80800140: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80800144: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800148: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8080014C: jal         0x800EEBF0
    // 0x80800150: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    func_800EEBF0(rdram, ctx);
        goto after_13;
    // 0x80800150: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_13:
    // 0x80800154: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80800158: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x8080015C: jal         0x800EE780
    // 0x80800160: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800EE780(rdram, ctx);
        goto after_14;
    // 0x80800160: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_14:
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: jal         0x80111FD4
    // 0x8080016C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80111FD4(rdram, ctx);
        goto after_15;
    // 0x8080016C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_15:
    // 0x80800170: beql        $v0, $zero, L_80800184
    if (ctx->r2 == 0) {
        // 0x80800174: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800184;
    }
    goto skip_0;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800178: jal         0x801138F4
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_16;
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800184:
    // 0x80800184: jal         0x80112524
    // 0x80800188: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_80112524(rdram, ctx);
        goto after_17;
    // 0x80800188: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_17:
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800190: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80800194: jal         0x80110A68
    // 0x80800198: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_80110A68(rdram, ctx);
        goto after_18;
    // 0x80800198: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_18:
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A0: jal         0x80110790
    // 0x808001A4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_80110790(rdram, ctx);
        goto after_19;
    // 0x808001A4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_19:
    // 0x808001A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001B0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x808001B4: jr          $ra
    // 0x808001B8: nop

    return;
    // 0x808001B8: nop

    // 0x808001BC: nop

;}
RECOMP_FUNC void ncbaclimb_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_80800008_ncbaclimb(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x80112524
    // 0x80800014: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800014: nop

    after_0:
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080001C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800020: jr          $ra
    // 0x80800024: nop

    return;
    // 0x80800024: nop

;}
RECOMP_FUNC void func_80800028_ncbaclimb(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080002C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800030: jal         0x80112524
    // 0x80800034: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800034: nop

    after_0:
    // 0x80800038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080003C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800040: jr          $ra
    // 0x80800044: nop

    return;
    // 0x80800044: nop

;}
RECOMP_FUNC void ncbaclimb_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080004C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800050: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800054: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80800058: jal         0x80111B8C
    // 0x8080005C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_0;
    // 0x8080005C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_0:
    // 0x80800060: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800064: jal         0x801124D0
    // 0x80800068: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801124D0(rdram, ctx);
        goto after_1;
    // 0x80800068: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8080006C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800070: jal         0x80115858
    // 0x80800074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80115858(rdram, ctx);
        goto after_2;
    // 0x80800074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800078: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080007C: jal         0x80115870
    // 0x80800080: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80115870(rdram, ctx);
        goto after_3;
    // 0x80800080: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080008C: jr          $ra
    // 0x80800090: nop

    return;
    // 0x80800090: nop

;}
RECOMP_FUNC void ncbaclimb_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800094: jr          $ra
    // 0x80800098: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800098: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbaclimb_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x808000A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A8: jal         0x80110840
    // 0x808000AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x808000AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000B0: jal         0x800F53D0
    // 0x808000B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x808000B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808000B8: jal         0x8009861C
    // 0x808000BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8009861C(rdram, ctx);
        goto after_2;
    // 0x808000BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x808000C0: xori        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 ^ 0X2;
    // 0x808000C4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x808000C8: bne         $v1, $zero, L_808000E0
    if (ctx->r3 != 0) {
        // 0x808000CC: sw          $v1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r3;
            goto L_808000E0;
    }
    // 0x808000CC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000D8: jal         0x80113978
    // 0x808000DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80113978(rdram, ctx);
        goto after_3;
    // 0x808000DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_808000E0:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: jal         0x80000028
    // 0x808000E8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_80800028_ncbaclimb(rdram, ctx);
        goto after_4;
    // 0x808000E8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_4:
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F0: jal         0x801107F0
    // 0x808000F4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_801107F0(rdram, ctx);
        goto after_5;
    // 0x808000F4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_5:
    // 0x808000F8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x808000FC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80800100: jal         0x800EFB24
    // 0x80800104: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_800EFB24(rdram, ctx);
        goto after_6;
    // 0x80800104: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_6:
    // 0x80800108: jal         0x800EEF94
    // 0x8080010C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_800EEF94(rdram, ctx);
        goto after_7;
    // 0x8080010C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_7:
    // 0x80800110: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80800114: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80800118: jal         0x800F1A88
    // 0x8080011C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800F1A88(rdram, ctx);
        goto after_8;
    // 0x8080011C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_8:
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800124: jal         0x80115358
    // 0x80800128: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_80115358(rdram, ctx);
        goto after_9;
    // 0x80800128: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_9:
    // 0x8080012C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800134: jal         0x80115750
    // 0x80800138: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_80115750(rdram, ctx);
        goto after_10;
    // 0x80800138: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_10:
    // 0x8080013C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800144: jal         0x80112C3C
    // 0x80800148: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_80112C3C(rdram, ctx);
        goto after_11;
    // 0x80800148: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_11:
    // 0x8080014C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800154: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    // 0x80800158: jal         0x80115828
    // 0x8080015C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    func_80115828(rdram, ctx);
        goto after_12;
    // 0x8080015C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    after_12:
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800164: jal         0x80115750
    // 0x80800168: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_80115750(rdram, ctx);
        goto after_13;
    // 0x80800168: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_13:
    // 0x8080016C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80800170: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80800174: beql        $t6, $zero, L_808001D0
    if (ctx->r14 == 0) {
        // 0x80800178: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_808001D0;
    }
    goto skip_0;
    // 0x80800178: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    skip_0:
    // 0x8080017C: jal         0x801112B0
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801112B0(rdram, ctx);
        goto after_14;
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800184: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800188: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080018C: jal         0x800F1DCC
    // 0x80800190: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_15;
    // 0x80800190: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_15:
    // 0x80800194: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80800198: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x808001A4: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x808001A8: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x808001AC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x808001B0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x808001B4: jal         0x80112D08
    // 0x808001B8: nop

    func_80112D08(rdram, ctx);
        goto after_16;
    // 0x808001B8: nop

    after_16:
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C0: jal         0x80112C3C
    // 0x808001C4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_80112C3C(rdram, ctx);
        goto after_17;
    // 0x808001C4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_17:
    // 0x808001C8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x808001CC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
L_808001D0:
    // 0x808001D0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x808001D4: jal         0x800EEBF0
    // 0x808001D8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_800EEBF0(rdram, ctx);
        goto after_18;
    // 0x808001D8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_18:
    // 0x808001DC: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x808001E0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x808001E4: jal         0x800EE780
    // 0x808001E8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_800EE780(rdram, ctx);
        goto after_19;
    // 0x808001E8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_19:
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F0: jal         0x80111CC8
    // 0x808001F4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80111CC8(rdram, ctx);
        goto after_20;
    // 0x808001F4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_20:
    // 0x808001F8: beql        $v0, $zero, L_8080023C
    if (ctx->r2 == 0) {
        // 0x808001FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080023C;
    }
    goto skip_1;
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800200: jal         0x801138A0
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_21;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800208: bne         $v0, $zero, L_80800220
    if (ctx->r2 != 0) {
        // 0x8080020C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800220;
    }
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: jal         0x80115580
    // 0x80800214: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_80115580(rdram, ctx);
        goto after_22;
    // 0x80800214: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_22:
    // 0x80800218: beql        $v0, $zero, L_8080023C
    if (ctx->r2 == 0) {
        // 0x8080021C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080023C;
    }
    goto skip_2;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
L_80800220:
    // 0x80800220: jal         0x801138F4
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_23;
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800228: beql        $v0, $zero, L_8080023C
    if (ctx->r2 == 0) {
        // 0x8080022C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080023C;
    }
    goto skip_3;
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800230: jal         0x80110F44
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_24;
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080023C:
    // 0x8080023C: jal         0x80000008
    // 0x80800240: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_80800008_ncbaclimb(rdram, ctx);
        goto after_25;
    // 0x80800240: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_25:
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800248: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8080024C: jal         0x80110A68
    // 0x80800250: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_80110A68(rdram, ctx);
        goto after_26;
    // 0x80800250: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_26:
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800258: jal         0x80110790
    // 0x8080025C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_80110790(rdram, ctx);
        goto after_27;
    // 0x8080025C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_27:
    // 0x80800260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800268: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8080026C: jr          $ra
    // 0x80800270: nop

    return;
    // 0x80800270: nop

    // 0x80800274: nop

    // 0x80800278: nop

    // 0x8080027C: nop

;}
RECOMP_FUNC void ncbadeflect_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800004: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80800008: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8080000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80800014: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80800018: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8080001C: jal         0x80111094
    // 0x80800020: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80111094(rdram, ctx);
        goto after_0;
    // 0x80800020: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80800024: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x80800028: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8080002C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800030: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800034: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800038: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8080003C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80800040: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800044: add.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x80800048: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8080004C: nop

    // 0x80800050: bc1tl       L_80800170
    if (c1cs) {
        // 0x80800054: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800170;
    }
    goto skip_0;
    // 0x80800054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800058: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x8080005C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800060: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80800064: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80800068: nop

    // 0x8080006C: bc1tl       L_80800170
    if (c1cs) {
        // 0x80800070: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800170;
    }
    goto skip_1;
    // 0x80800070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800074: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800078: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8080007C: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800080: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80800084: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800088: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8080008C: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80800090: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80800094: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80800098: jal         0x800EFA4C
    // 0x8080009C: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x8080009C: nop

    after_1:
    // 0x808000A0: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x808000A4: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808000A8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808000AC: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x808000B0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808000B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000B8: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x808000BC: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x808000C0: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x808000C4: add.s       $f2, $f16, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x808000C8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x808000CC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x808000D0: add.s       $f20, $f18, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x808000D4: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x808000D8: nop

    // 0x808000DC: bc1tl       L_80800170
    if (c1cs) {
        // 0x808000E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800170;
    }
    goto skip_2;
    // 0x808000E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x808000E4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x808000E8: jal         0x8002DCA0
    // 0x808000EC: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x808000EC: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x808000F0: jal         0x800D8FF8
    // 0x808000F4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800D8FF8(rdram, ctx);
        goto after_3;
    // 0x808000F4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x808000F8: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x808000FC: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800100: mul.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80800104: jal         0x800F13F0
    // 0x80800108: sub.s       $f14, $f2, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f20.fl;
    func_800F13F0(rdram, ctx);
        goto after_4;
    // 0x80800108: sub.s       $f14, $f2, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f20.fl;
    after_4:
    // 0x8080010C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80800110: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x80800114: c.eq.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl == ctx->f18.fl;
    // 0x80800118: nop

    // 0x8080011C: bc1fl       L_8080014C
    if (!c1cs) {
        // 0x80800120: addiu       $a0, $sp, 0x2C
        ctx->r4 = ADD32(ctx->r29, 0X2C);
            goto L_8080014C;
    }
    goto skip_3;
    // 0x80800120: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    skip_3:
    // 0x80800124: jal         0x800DC0C0
    // 0x80800128: nop

    func_800DC0C0(rdram, ctx);
        goto after_5;
    // 0x80800128: nop

    after_5:
    // 0x8080012C: jal         0x800DC0C0
    // 0x80800130: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800DC0C0(rdram, ctx);
        goto after_6;
    // 0x80800130: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_6:
    // 0x80800134: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80800138: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8080013C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800140: jal         0x800EFA4C
    // 0x80800144: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800EFA4C(rdram, ctx);
        goto after_7;
    // 0x80800144: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
    // 0x80800148: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
L_8080014C:
    // 0x8080014C: jal         0x800EF368
    // 0x80800150: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_800EF368(rdram, ctx);
        goto after_8;
    // 0x80800150: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_8:
    // 0x80800154: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800158: jal         0x800EF04C
    // 0x8080015C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800EF04C(rdram, ctx);
        goto after_9;
    // 0x8080015C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_9:
    // 0x80800160: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80800164: jal         0x801110C4
    // 0x80800168: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_801110C4(rdram, ctx);
        goto after_10;
    // 0x80800168: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_10:
    // 0x8080016C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800170:
    // 0x80800170: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80800174: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

;}
RECOMP_FUNC void ncbadeflect_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800180: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80800184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800188: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8080018C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80800190: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80800194: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x80800198: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x8080019C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x808001A0: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x808001A4: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x808001A8: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x808001AC: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x808001B0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808001B4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x808001B8: jal         0x800EFA4C
    // 0x808001BC: nop

    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x808001BC: nop

    after_0:
    // 0x808001C0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x808001C4: jal         0x80111094
    // 0x808001C8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_80111094(rdram, ctx);
        goto after_1;
    // 0x808001C8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x808001CC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x808001D0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x808001D4: jal         0x800EFB24
    // 0x808001D8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x808001D8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x808001DC: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808001E0: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808001E4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808001E8: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x808001EC: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x808001F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808001F4: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x808001F8: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x808001FC: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80800200: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800204: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80800208: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8080020C: add.s       $f20, $f18, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80800210: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x80800214: nop

    // 0x80800218: bc1tl       L_808002B4
    if (c1cs) {
        // 0x8080021C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002B4;
    }
    goto skip_0;
    // 0x8080021C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800220: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80800224: jal         0x8002DCA0
    // 0x80800228: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x80800228: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x8080022C: jal         0x800D8FF8
    // 0x80800230: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x80800230: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x80800234: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80800238: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8080023C: mul.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80800240: jal         0x800F13F0
    // 0x80800244: sub.s       $f14, $f2, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f20.fl;
    func_800F13F0(rdram, ctx);
        goto after_5;
    // 0x80800244: sub.s       $f14, $f2, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f20.fl;
    after_5:
    // 0x80800248: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8080024C: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x80800250: c.eq.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl == ctx->f18.fl;
    // 0x80800254: nop

    // 0x80800258: bc1fl       L_80800290
    if (!c1cs) {
        // 0x8080025C: addiu       $a0, $sp, 0x40
        ctx->r4 = ADD32(ctx->r29, 0X40);
            goto L_80800290;
    }
    goto skip_1;
    // 0x8080025C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    skip_1:
    // 0x80800260: jal         0x800DC0C0
    // 0x80800264: nop

    func_800DC0C0(rdram, ctx);
        goto after_6;
    // 0x80800264: nop

    after_6:
    // 0x80800268: jal         0x800DC0C0
    // 0x8080026C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_800DC0C0(rdram, ctx);
        goto after_7;
    // 0x8080026C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_7:
    // 0x80800270: jal         0x800DC0C0
    // 0x80800274: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_800DC0C0(rdram, ctx);
        goto after_8;
    // 0x80800274: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x80800278: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8080027C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800280: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80800284: jal         0x800EFA4C
    // 0x80800288: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800EFA4C(rdram, ctx);
        goto after_9;
    // 0x80800288: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_9:
    // 0x8080028C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
L_80800290:
    // 0x80800290: jal         0x800EF368
    // 0x80800294: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_800EF368(rdram, ctx);
        goto after_10;
    // 0x80800294: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_10:
    // 0x80800298: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8080029C: jal         0x800EF04C
    // 0x808002A0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800EF04C(rdram, ctx);
        goto after_11;
    // 0x808002A0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_11:
    // 0x808002A4: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x808002A8: jal         0x801110C4
    // 0x808002AC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_801110C4(rdram, ctx);
        goto after_12;
    // 0x808002AC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_12:
    // 0x808002B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002B4:
    // 0x808002B4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x808002B8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x808002BC: jr          $ra
    // 0x808002C0: nop

    return;
    // 0x808002C0: nop

    // 0x808002C4: nop

    // 0x808002C8: nop

    // 0x808002CC: nop

;}
RECOMP_FUNC void ncbadie_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_80800008_ncbadie(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800014: jal         0x80112524
    // 0x80800018: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800018: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080001C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800020: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800024: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x80800028: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8080002C: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80800030: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800034: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x80800038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080003C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800040: jr          $ra
    // 0x80800044: nop

    return;
    // 0x80800044: nop

;}
RECOMP_FUNC void func_80800048_ncbadie(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080004C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800050: jal         0x80112524
    // 0x80800054: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800054: nop

    after_0:
    // 0x80800058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080005C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800060: jr          $ra
    // 0x80800064: nop

    return;
    // 0x80800064: nop

;}
RECOMP_FUNC void ncbadie_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080006C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800070: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800078: jal         0x800000D4
    // 0x8080007C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ncbadie_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080007C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x80800080: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80800084: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080008C: jal         0x80111B8C
    // 0x80800090: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_80111B8C(rdram, ctx);
        goto after_1;
    // 0x80800090: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_1:
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800098: jal         0x80115858
    // 0x8080009C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80115858(rdram, ctx);
        goto after_2;
    // 0x8080009C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A4: jal         0x80115870
    // 0x808000A8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_80115870(rdram, ctx);
        goto after_3;
    // 0x808000A8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_3:
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B0: jal         0x801124D0
    // 0x808000B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801124D0(rdram, ctx);
        goto after_4;
    // 0x808000B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x808000B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000C4: jr          $ra
    // 0x808000C8: nop

    return;
    // 0x808000C8: nop

;}
RECOMP_FUNC void ncbadie_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000CC: jr          $ra
    // 0x808000D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808000D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbadie_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000D8: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x808000DC: jr          $ra
    // 0x808000E0: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808000E0: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void ncbadie_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x808000E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000F4: jal         0x80000048
    // 0x808000F8: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80800048_ncbadie(rdram, ctx);
        goto after_0;
    // 0x808000F8: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800100: jal         0x801107F0
    // 0x80800104: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x80800104: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x80800108: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8080010C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80800110: jal         0x800EFB24
    // 0x80800114: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80800114: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_2:
    // 0x80800118: jal         0x800EEF94
    // 0x8080011C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x8080011C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x80800120: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800124: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80800128: jal         0x800F1A88
    // 0x8080012C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800F1A88(rdram, ctx);
        goto after_4;
    // 0x8080012C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800134: jal         0x80115358
    // 0x80800138: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80115358(rdram, ctx);
        goto after_5;
    // 0x80800138: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x8080013C: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x80800140: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800144: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80800148: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8080014C: nop

    // 0x80800150: bc1fl       L_80800160
    if (!c1cs) {
        // 0x80800154: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_80800160;
    }
    goto skip_0;
    // 0x80800154: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x80800158: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x8080015C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_80800160:
    // 0x80800160: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80800164: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800168: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8080016C: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x80800170: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800174: jal         0x80013AAC
    // 0x80800178: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    func_80013AAC(rdram, ctx);
        goto after_6;
    // 0x80800178: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    after_6:
    // 0x8080017C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800180: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800184: jal         0x80115828
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115828(rdram, ctx);
        goto after_7;
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800190: jal         0x80115750
    // 0x80800194: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80115750(rdram, ctx);
        goto after_8;
    // 0x80800194: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800198: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A0: jal         0x80112C3C
    // 0x808001A4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80112C3C(rdram, ctx);
        goto after_9;
    // 0x808001A4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_9:
    // 0x808001A8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x808001AC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x808001B0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808001B4: jal         0x800EEBF0
    // 0x808001B8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800EEBF0(rdram, ctx);
        goto after_10;
    // 0x808001B8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_10:
    // 0x808001BC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x808001C0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x808001C4: jal         0x800EE780
    // 0x808001C8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_800EE780(rdram, ctx);
        goto after_11;
    // 0x808001C8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_11:
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D0: jal         0x80111CC8
    // 0x808001D4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80111CC8(rdram, ctx);
        goto after_12;
    // 0x808001D4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_12:
    // 0x808001D8: beql        $v0, $zero, L_8080020C
    if (ctx->r2 == 0) {
        // 0x808001DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080020C;
    }
    goto skip_1;
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808001E0: jal         0x801138A0
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_13;
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808001E8: beql        $v0, $zero, L_8080020C
    if (ctx->r2 == 0) {
        // 0x808001EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080020C;
    }
    goto skip_2;
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808001F0: jal         0x801138F4
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_14;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808001F8: beql        $v0, $zero, L_8080020C
    if (ctx->r2 == 0) {
        // 0x808001FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080020C;
    }
    goto skip_3;
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800200: jal         0x80110F44
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_15;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080020C:
    // 0x8080020C: jal         0x80000008
    // 0x80800210: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80800008_ncbadie(rdram, ctx);
        goto after_16;
    // 0x80800210: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_16:
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800218: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8080021C: jal         0x80110A68
    // 0x80800220: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_80110A68(rdram, ctx);
        goto after_17;
    // 0x80800220: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_17:
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800228: jal         0x80110790
    // 0x8080022C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_80110790(rdram, ctx);
        goto after_18;
    // 0x8080022C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_18:
    // 0x80800230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800234: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800238: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8080023C: jr          $ra
    // 0x80800240: nop

    return;
    // 0x80800240: nop

    // 0x80800244: nop

    // 0x80800248: nop

    // 0x8080024C: nop

;}
RECOMP_FUNC void ncbadive_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void ncbadive_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800014: jal         0x800EFD24
    // 0x80800018: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x80800018: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    after_0:
    // 0x8080001C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800020: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800024: lui         $a1, 0x4583
    ctx->r5 = S32(0X4583 << 16);
    // 0x80800028: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x8080002C: lui         $a2, 0x4603
    ctx->r6 = S32(0X4603 << 16);
    // 0x80800030: lui         $a3, 0xC603
    ctx->r7 = S32(0XC603 << 16);
    // 0x80800034: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x80800038: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x8080003C: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x80800040: jal         0x801120CC
    // 0x80800044: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    func_801120CC(rdram, ctx);
        goto after_1;
    // 0x80800044: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    after_1:
    // 0x80800048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080004C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800050: jr          $ra
    // 0x80800054: nop

    return;
    // 0x80800054: nop

;}
RECOMP_FUNC void ncbadive_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080005C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800060: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    // 0x80800064: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x80800068: jal         0x801120CC
    // 0x8080006C: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    func_801120CC(rdram, ctx);
        goto after_0;
    // 0x8080006C: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    after_0:
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800078: jr          $ra
    // 0x8080007C: nop

    return;
    // 0x8080007C: nop

;}
RECOMP_FUNC void func_80800080_ncbadive(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800088: jal         0x80112524
    // 0x8080008C: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x8080008C: nop

    after_0:
    // 0x80800090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800098: jr          $ra
    // 0x8080009C: nop

    return;
    // 0x8080009C: nop

;}
RECOMP_FUNC void ncbadive_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x808000A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000B0: jal         0x801107F0
    // 0x808000B4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x808000B4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_0:
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000BC: jal         0x80000080
    // 0x808000C0: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    func_80800080_ncbadive(rdram, ctx);
        goto after_1;
    // 0x808000C0: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_1:
    // 0x808000C4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x808000C8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x808000CC: jal         0x800EFB24
    // 0x808000D0: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x808000D0: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_2:
    // 0x808000D4: jal         0x800EEF94
    // 0x808000D8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x808000D8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_3:
    // 0x808000DC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(756, 0X1C0) << 16);
    // 0x808000E0: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x808000E4: lwc1        $f14, 0x1C0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(756, 0X1C0));
    // 0x808000E8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x808000EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000F0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808000F4: lwc1        $f12, 0xC($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0XC);
    // 0x808000F8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x808000FC: jal         0x800F10B4
    // 0x80800100: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x80800100: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80800104: jal         0x800D8FF8
    // 0x80800108: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_5;
    // 0x80800108: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8080010C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x80800110: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800114: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80800118: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8080011C: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80800120: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80800124: jal         0x800EFA20
    // 0x80800128: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    func_800EFA20(rdram, ctx);
        goto after_6;
    // 0x80800128: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_6:
    // 0x8080012C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80800130: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x80800134: jal         0x800EFB24
    // 0x80800138: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_800EFB24(rdram, ctx);
        goto after_7;
    // 0x80800138: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_7:
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800140: jal         0x80111FD4
    // 0x80800144: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_80111FD4(rdram, ctx);
        goto after_8;
    // 0x80800144: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_8:
    // 0x80800148: beq         $v0, $zero, L_80800158
    if (ctx->r2 == 0) {
        // 0x8080014C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800158;
    }
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800150: jal         0x8011309C
    // 0x80800154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8011309C(rdram, ctx);
        goto after_9;
    // 0x80800154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
L_80800158:
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: jal         0x80000080
    // 0x80800160: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    func_80800080_ncbadive(rdram, ctx);
        goto after_10;
    // 0x80800160: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_10:
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8080016C: jal         0x80110A68
    // 0x80800170: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    func_80110A68(rdram, ctx);
        goto after_11;
    // 0x80800170: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_11:
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800178: jal         0x80110790
    // 0x8080017C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80110790(rdram, ctx);
        goto after_12;
    // 0x8080017C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_12:
    // 0x80800180: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800184: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800188: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8080018C: jr          $ra
    // 0x80800190: nop

    return;
    // 0x80800190: nop

;}
RECOMP_FUNC void ncbadive_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080019C: jal         0x800EF410
    // 0x808001A0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    func_800EF410(rdram, ctx);
        goto after_0;
    // 0x808001A0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    after_0:
    // 0x808001A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001AC: jr          $ra
    // 0x808001B0: nop

    return;
    // 0x808001B0: nop

    // 0x808001B4: nop

    // 0x808001B8: nop

    // 0x808001BC: nop

;}
RECOMP_FUNC void ncbadolly_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void ncbadolly_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x80800014: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800018: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080001C: jal         0x801124D0
    // 0x80800020: sb          $t6, 0x21($t7)
    MEM_B(0X21, ctx->r15) = ctx->r14;
    func_801124D0(rdram, ctx);
        goto after_0;
    // 0x80800020: sb          $t6, 0x21($t7)
    MEM_B(0X21, ctx->r15) = ctx->r14;
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
RECOMP_FUNC void ncbadolly_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800034: jr          $ra
    // 0x80800038: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800038: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbadolly_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080003C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80800040: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800044: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800048: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x8080004C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800050: lbu         $t7, 0x21($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X21);
    // 0x80800054: bnel        $t7, $zero, L_80800178
    if (ctx->r15 != 0) {
        // 0x80800058: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800178;
    }
    goto skip_0;
    // 0x80800058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080005C: jal         0x80112524
    // 0x80800060: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800060: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_0:
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800068: jal         0x801107F0
    // 0x8080006C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x8080006C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x80800070: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80800074: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80800078: jal         0x800EFB24
    // 0x8080007C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x8080007C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_2:
    // 0x80800080: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800084: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80800088: jal         0x800EEFFC
    // 0x8080008C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_800EEFFC(rdram, ctx);
        goto after_3;
    // 0x8080008C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80800090: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x80800094: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80800098: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8080009C: lwc1        $f12, 0x1C($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x808000A0: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x808000A4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x808000A8: nop

    // 0x808000AC: bc1fl       L_808000BC
    if (!c1cs) {
        // 0x808000B0: lwc1        $f0, 0x18($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
            goto L_808000BC;
    }
    goto skip_1;
    // 0x808000B0: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    skip_1:
    // 0x808000B4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x808000B8: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
L_808000BC:
    // 0x808000BC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x808000C0: nop

    // 0x808000C4: bc1f        L_808000D0
    if (!c1cs) {
        // 0x808000C8: nop
    
            goto L_808000D0;
    }
    // 0x808000C8: nop

    // 0x808000CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_808000D0:
    // 0x808000D0: jal         0x800EFB24
    // 0x808000D4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_800EFB24(rdram, ctx);
        goto after_4;
    // 0x808000D4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x808000D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808000DC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x808000E0: jal         0x800EEFFC
    // 0x808000E4: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    func_800EEFFC(rdram, ctx);
        goto after_5;
    // 0x808000E4: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x808000E8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x808000EC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x808000F0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x808000F4: nop

    // 0x808000F8: bc1fl       L_80800108
    if (!c1cs) {
        // 0x808000FC: mfc1        $a2, $f2
        ctx->r6 = (int32_t)ctx->f2.u32l;
            goto L_80800108;
    }
    goto skip_2;
    // 0x808000FC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    skip_2:
    // 0x80800100: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80800104: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_80800108:
    // 0x80800108: jal         0x800EFA98
    // 0x8080010C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800EFA98(rdram, ctx);
        goto after_6;
    // 0x8080010C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_6:
    // 0x80800110: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80800114: jal         0x800EF04C
    // 0x80800118: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800EF04C(rdram, ctx);
        goto after_7;
    // 0x80800118: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_7:
    // 0x8080011C: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800124: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80800128: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8080012C: jal         0x80111AE0
    // 0x80800130: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_80111AE0(rdram, ctx);
        goto after_8;
    // 0x80800130: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80800134: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x80800138: lbu         $t0, 0x20($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X20);
    // 0x8080013C: beql        $t0, $zero, L_80800150
    if (ctx->r8 == 0) {
        // 0x80800140: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800150;
    }
    goto skip_3;
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800144: jal         0x8011329C
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8011329C(rdram, ctx);
        goto after_9;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800150:
    // 0x80800150: jal         0x80112524
    // 0x80800154: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_80112524(rdram, ctx);
        goto after_10;
    // 0x80800154: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_10:
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80800160: jal         0x80110A68
    // 0x80800164: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_80110A68(rdram, ctx);
        goto after_11;
    // 0x80800164: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_11:
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080016C: jal         0x80110790
    // 0x80800170: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_80110790(rdram, ctx);
        goto after_12;
    // 0x80800170: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_12:
    // 0x80800174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800178:
    // 0x80800178: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080017C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80800180: jr          $ra
    // 0x80800184: nop

    return;
    // 0x80800184: nop

;}
RECOMP_FUNC void ncbadolly_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800188: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080018C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800190: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800194: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800198: jal         0x800A5800
    // 0x8080019C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A5800(rdram, ctx);
        goto after_0;
    // 0x8080019C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x808001A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x808001A4: jal         0x80085668
    // 0x808001A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _cadbfunc_entrypoint_29(rdram, ctx);
        goto after_1;
    // 0x808001A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x808001AC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x808001B0: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x808001B4: sb          $t6, 0x20($t7)
    MEM_B(0X20, ctx->r15) = ctx->r14;
    // 0x808001B8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x808001BC: jal         0x800855A0
    // 0x808001C0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    _cadbfunc_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x808001C0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_2:
    // 0x808001C4: jal         0x80085580
    // 0x808001C8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    _cadbfunc_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x808001C8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_3:
    // 0x808001CC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808001D0: jal         0x800855B0
    // 0x808001D4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    _cadbfunc_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x808001D4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x808001E0: jal         0x80111B8C
    // 0x808001E4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_80111B8C(rdram, ctx);
        goto after_5;
    // 0x808001E4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x808001E8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808001EC: jal         0x800855C0
    // 0x808001F0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    _cadbfunc_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x808001F0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x808001F4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x808001F8: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x808001FC: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
    // 0x80800200: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x80800204: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800208: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
    // 0x8080020C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80800210: jal         0x80085610
    // 0x80800214: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    _cadbfunc_entrypoint_18(rdram, ctx);
        goto after_7;
    // 0x80800214: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_7:
    // 0x80800218: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x8080021C: jal         0x80085620
    // 0x80800220: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    _cadbfunc_entrypoint_20(rdram, ctx);
        goto after_8;
    // 0x80800220: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_8:
    // 0x80800224: lw          $t0, 0x1C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1C);
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x80800230: sb          $zero, 0x21($t0)
    MEM_B(0X21, ctx->r8) = 0;
    // 0x80800234: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x80800238: jal         0x80112570
    // 0x8080023C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_80112570(rdram, ctx);
        goto after_9;
    // 0x8080023C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_9:
    // 0x80800240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800244: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800248: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080024C: jr          $ra
    // 0x80800250: nop

    return;
    // 0x80800250: nop

    // 0x80800254: nop

    // 0x80800258: nop

    // 0x8080025C: nop

;}
RECOMP_FUNC void ncbafixpos_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void ncbafixpos_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: lw          $t7, 0x20($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X20);
    // 0x80800014: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800018: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080001C: jal         0x801124D0
    // 0x80800020: sb          $t6, 0x1A($t7)
    MEM_B(0X1A, ctx->r15) = ctx->r14;
    func_801124D0(rdram, ctx);
        goto after_0;
    // 0x80800020: sb          $t6, 0x1A($t7)
    MEM_B(0X1A, ctx->r15) = ctx->r14;
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
RECOMP_FUNC void ncbafixpos_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800034: jr          $ra
    // 0x80800038: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800038: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8080003C_ncbafixpos(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080003C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800044: jal         0x80110840
    // 0x80800048: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80800048: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080004C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800050: jal         0x800F5628
    // 0x80800054: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5628(rdram, ctx);
        goto after_1;
    // 0x80800054: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800058: jal         0x800F71D4
    // 0x8080005C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800F71D4(rdram, ctx);
        goto after_2;
    // 0x8080005C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800060: beq         $v0, $zero, L_80800078
    if (ctx->r2 == 0) {
        // 0x80800064: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_80800078;
    }
    // 0x80800064: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800068: jal         0x800F5E7C
    // 0x8080006C: nop

    func_800F5E7C(rdram, ctx);
        goto after_3;
    // 0x8080006C: nop

    after_3:
    // 0x80800070: b           L_80800084
    // 0x80800074: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_80800084;
    // 0x80800074: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80800078:
    // 0x80800078: jal         0x800F5628
    // 0x8080007C: nop

    func_800F5628(rdram, ctx);
        goto after_4;
    // 0x8080007C: nop

    after_4:
    // 0x80800080: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80800084:
    // 0x80800084: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800088: jal         0x80115460
    // 0x8080008C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    func_80115460(rdram, ctx);
        goto after_5;
    // 0x8080008C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x80800090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800094: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80800098: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080009C: jr          $ra
    // 0x808000A0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    return;
    // 0x808000A0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
;}
RECOMP_FUNC void ncbafixpos_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x808000A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000B0: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x808000B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000B8: lbu         $t7, 0x1A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1A);
    // 0x808000BC: bnel        $t7, $zero, L_8080016C
    if (ctx->r15 != 0) {
        // 0x808000C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080016C;
    }
    goto skip_0;
    // 0x808000C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808000C4: jal         0x801107F0
    // 0x808000C8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x808000C8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x808000CC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x808000D0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x808000D4: jal         0x800EE7F8
    // 0x808000D8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808000D8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_1:
    // 0x808000DC: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x808000E0: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x808000E4: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x808000E8: lw          $t9, 0x20($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20);
    // 0x808000EC: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x808000F0: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x808000F4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x808000F8: lbu         $t0, 0x18($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X18);
    // 0x808000FC: beq         $t0, $zero, L_80800110
    if (ctx->r8 == 0) {
        // 0x80800100: nop
    
            goto L_80800110;
    }
    // 0x80800100: nop

    // 0x80800104: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800108: b           L_8080011C
    // 0x8080010C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
        goto L_8080011C;
    // 0x8080010C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
L_80800110:
    // 0x80800110: jal         0x8000003C
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080003C_ncbafixpos(rdram, ctx);
        goto after_2;
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800118: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
L_8080011C:
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800120: jal         0x80111AE0
    // 0x80800124: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_80111AE0(rdram, ctx);
        goto after_3;
    // 0x80800124: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x80800128: lw          $t1, 0x20($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X20);
    // 0x8080012C: lbu         $t2, 0x19($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X19);
    // 0x80800130: beql        $t2, $zero, L_80800144
    if (ctx->r10 == 0) {
        // 0x80800134: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800144;
    }
    goto skip_1;
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800138: jal         0x8011329C
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8011329C(rdram, ctx);
        goto after_4;
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800144:
    // 0x80800144: jal         0x80112524
    // 0x80800148: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_80112524(rdram, ctx);
        goto after_5;
    // 0x80800148: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_5:
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800150: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800154: jal         0x80110A68
    // 0x80800158: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_80110A68(rdram, ctx);
        goto after_6;
    // 0x80800158: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_6:
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800160: jal         0x80110790
    // 0x80800164: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80110790(rdram, ctx);
        goto after_7;
    // 0x80800164: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_7:
    // 0x80800168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080016C:
    // 0x8080016C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800170: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800174: jr          $ra
    // 0x80800178: nop

    return;
    // 0x80800178: nop

;}
RECOMP_FUNC void ncbafixpos_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080017C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800180: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800184: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800188: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080018C: jal         0x800A5800
    // 0x80800190: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A5800(rdram, ctx);
        goto after_0;
    // 0x80800190: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800194: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80800198: jal         0x80085668
    // 0x8080019C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _cadbfunc_entrypoint_29(rdram, ctx);
        goto after_1;
    // 0x8080019C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x808001A0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x808001A4: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x808001A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x808001AC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808001B0: jal         0x80085668
    // 0x808001B4: sb          $t6, 0x18($t7)
    MEM_B(0X18, ctx->r15) = ctx->r14;
    _cadbfunc_entrypoint_29(rdram, ctx);
        goto after_2;
    // 0x808001B4: sb          $t6, 0x18($t7)
    MEM_B(0X18, ctx->r15) = ctx->r14;
    after_2:
    // 0x808001B8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x808001BC: lw          $t9, 0x20($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20);
    // 0x808001C0: sb          $t8, 0x19($t9)
    MEM_B(0X19, ctx->r25) = ctx->r24;
    // 0x808001C4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x808001C8: jal         0x800855A0
    // 0x808001CC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    _cadbfunc_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x808001CC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_3:
    // 0x808001D0: jal         0x80085580
    // 0x808001D4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    _cadbfunc_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x808001D4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_4:
    // 0x808001D8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808001DC: jal         0x800855B0
    // 0x808001E0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    _cadbfunc_entrypoint_6(rdram, ctx);
        goto after_5;
    // 0x808001E0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x808001EC: jal         0x80111B8C
    // 0x808001F0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_80111B8C(rdram, ctx);
        goto after_6;
    // 0x808001F0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x808001F4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808001F8: jal         0x800855C0
    // 0x808001FC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    _cadbfunc_entrypoint_8(rdram, ctx);
        goto after_7;
    // 0x808001FC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x80800200: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8080020C: sb          $zero, 0x1A($t0)
    MEM_B(0X1A, ctx->r8) = 0;
    // 0x80800210: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x80800214: jal         0x80112570
    // 0x80800218: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_80112570(rdram, ctx);
        goto after_8;
    // 0x80800218: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_8:
    // 0x8080021C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800220: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800224: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800228: jr          $ra
    // 0x8080022C: nop

    return;
    // 0x8080022C: nop

;}
RECOMP_FUNC void ncbafly_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void ncbafly_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080000C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80800010: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800014: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800018: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080001C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800020: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80800024: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80800028: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x8080002C: jal         0x80111590
    // 0x80800030: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80111590(rdram, ctx);
        goto after_0;
    // 0x80800030: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80800034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800038: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x8080003C: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x80800040: jal         0x8000023C
    // 0x80800044: lui         $a3, 0x43AF
    ctx->r7 = S32(0X43AF << 16);
    ncbafly_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800044: lui         $a3, 0x43AF
    ctx->r7 = S32(0X43AF << 16);
    after_1:
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: jal         0x80000250
    // 0x80800050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ncbafly_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x8080005C: jal         0x80111B8C
    // 0x80800060: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_3;
    // 0x80800060: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_3:
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800068: jal         0x80115858
    // 0x8080006C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80115858(rdram, ctx);
        goto after_4;
    // 0x8080006C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800074: jal         0x80115870
    // 0x80800078: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80115870(rdram, ctx);
        goto after_5;
    // 0x80800078: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800080: jal         0x801124D0
    // 0x80800084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_6;
    // 0x80800084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800088: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080008C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

;}
RECOMP_FUNC void ncbafly_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: jr          $ra
    // 0x808000A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808000A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_808000A4_ncbafly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000AC: jal         0x80112550
    // 0x808000B0: nop

    func_80112550(rdram, ctx);
        goto after_0;
    // 0x808000B0: nop

    after_0:
    // 0x808000B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000BC: jr          $ra
    // 0x808000C0: nop

    return;
    // 0x808000C0: nop

;}
RECOMP_FUNC void ncbafly_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x808000C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000D0: jal         0x80110840
    // 0x808000D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x808000D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000D8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E0: jal         0x8011607C
    // 0x808000E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8011607C(rdram, ctx);
        goto after_1;
    // 0x808000E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000EC: jal         0x801107F0
    // 0x808000F0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_801107F0(rdram, ctx);
        goto after_2;
    // 0x808000F0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F8: jal         0x800000A4
    // 0x808000FC: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_808000A4_ncbafly(rdram, ctx);
        goto after_3;
    // 0x808000FC: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_3:
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800104: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80800108: jal         0x80115444
    // 0x8080010C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80115444(rdram, ctx);
        goto after_4;
    // 0x8080010C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x80800110: jal         0x800F5AE0
    // 0x80800114: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800F5AE0(rdram, ctx);
        goto after_5;
    // 0x80800114: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_5:
    // 0x80800118: jal         0x80013728
    // 0x8080011C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80013728(rdram, ctx);
        goto after_6;
    // 0x8080011C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_6:
    // 0x80800120: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800124: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800128: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8080012C: nop

    // 0x80800130: bc1f        L_8080016C
    if (!c1cs) {
        // 0x80800134: lui         $at, 0xC1F0
        ctx->r1 = S32(0XC1F0 << 16);
            goto L_8080016C;
    }
    // 0x80800134: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80800138: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080013C: lui         $at, 0x42A8
    ctx->r1 = S32(0X42A8 << 16);
    // 0x80800140: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800144: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800148: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x8080014C: jal         0x800F10B4
    // 0x80800150: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_7;
    // 0x80800150: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x80800154: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800158: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080015C: jal         0x80115828
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115828(rdram, ctx);
        goto after_8;
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800164: b           L_80800180
    // 0x80800168: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
        goto L_80800180;
    // 0x80800168: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
L_8080016C:
    // 0x8080016C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800170: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80800174: jal         0x80115828
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115828(rdram, ctx);
        goto after_9;
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080017C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
L_80800180:
    // 0x80800180: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80800184: jal         0x800EFB24
    // 0x80800188: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_800EFB24(rdram, ctx);
        goto after_10;
    // 0x80800188: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_10:
    // 0x8080018C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800190: jal         0x800F1A88
    // 0x80800194: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800F1A88(rdram, ctx);
        goto after_11;
    // 0x80800194: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_11:
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080019C: jal         0x80115750
    // 0x808001A0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_80115750(rdram, ctx);
        goto after_12;
    // 0x808001A0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_12:
    // 0x808001A4: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x808001A8: jal         0x801112B0
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801112B0(rdram, ctx);
        goto after_13;
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808001B0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808001B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808001B8: jal         0x800136E4
    // 0x808001BC: add.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_14;
    // 0x808001BC: add.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f6.fl;
    after_14:
    // 0x808001C0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x808001C4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808001C8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x808001CC: jal         0x800EEBF0
    // 0x808001D0: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    func_800EEBF0(rdram, ctx);
        goto after_15;
    // 0x808001D0: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_15:
    // 0x808001D4: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x808001D8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x808001DC: jal         0x800EE780
    // 0x808001E0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800EE780(rdram, ctx);
        goto after_16;
    // 0x808001E0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_16:
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E8: jal         0x80111CC8
    // 0x808001EC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_80111CC8(rdram, ctx);
        goto after_17;
    // 0x808001EC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_17:
    // 0x808001F0: beql        $v0, $zero, L_80800204
    if (ctx->r2 == 0) {
        // 0x808001F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800204;
    }
    goto skip_0;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808001F8: jal         0x801138F4
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_18;
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800204:
    // 0x80800204: jal         0x80112524
    // 0x80800208: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_80112524(rdram, ctx);
        goto after_19;
    // 0x80800208: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_19:
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80800214: jal         0x80110A68
    // 0x80800218: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_80110A68(rdram, ctx);
        goto after_20;
    // 0x80800218: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_20:
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800220: jal         0x80110790
    // 0x80800224: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80110790(rdram, ctx);
        goto after_21;
    // 0x80800224: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_21:
    // 0x80800228: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080022C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800230: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80800234: jr          $ra
    // 0x80800238: nop

    return;
    // 0x80800238: nop

;}
RECOMP_FUNC void ncbafly_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080023C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80800240: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80800244: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80800248: jr          $ra
    // 0x8080024C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    return;
    // 0x8080024C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void ncbafly_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800250: jr          $ra
    // 0x80800254: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800254: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80800258: nop

    // 0x8080025C: nop

;}
RECOMP_FUNC void ncbaglide_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80800008: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080000C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800018: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8080001C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80800020: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80800024: jal         0x80111590
    // 0x80800028: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80111590(rdram, ctx);
        goto after_0;
    // 0x80800028: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800030: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80800034: jal         0x80111B8C
    // 0x80800038: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_1;
    // 0x80800038: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_1:
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800040: jal         0x80115858
    // 0x80800044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80115858(rdram, ctx);
        goto after_2;
    // 0x80800044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: jal         0x80115870
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80115870(rdram, ctx);
        goto after_3;
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: jal         0x801124D0
    // 0x8080005C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_4;
    // 0x8080005C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800060: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800064: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080006C: jr          $ra
    // 0x80800070: nop

    return;
    // 0x80800070: nop

;}
RECOMP_FUNC void ncbaglide_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800074: jr          $ra
    // 0x80800078: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800078: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8080007C_ncbaglide(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080007C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800084: jal         0x80112550
    // 0x80800088: nop

    func_80112550(rdram, ctx);
        goto after_0;
    // 0x80800088: nop

    after_0:
    // 0x8080008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

;}
RECOMP_FUNC void ncbaglide_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x808000A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000A8: jal         0x80110840
    // 0x808000AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x808000AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000B0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: jal         0x8011607C
    // 0x808000BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8011607C(rdram, ctx);
        goto after_1;
    // 0x808000BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: jal         0x801107F0
    // 0x808000C8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_801107F0(rdram, ctx);
        goto after_2;
    // 0x808000C8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D0: jal         0x8000007C
    // 0x808000D4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_8080007C_ncbaglide(rdram, ctx);
        goto after_3;
    // 0x808000D4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_3:
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000DC: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x808000E0: jal         0x80115444
    // 0x808000E4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80115444(rdram, ctx);
        goto after_4;
    // 0x808000E4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x808000E8: jal         0x800F5AE0
    // 0x808000EC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800F5AE0(rdram, ctx);
        goto after_5;
    // 0x808000EC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_5:
    // 0x808000F0: jal         0x80013728
    // 0x808000F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80013728(rdram, ctx);
        goto after_6;
    // 0x808000F4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_6:
    // 0x808000F8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808000FC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800100: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80800104: nop

    // 0x80800108: bc1f        L_80800144
    if (!c1cs) {
        // 0x8080010C: lui         $at, 0xC1F0
        ctx->r1 = S32(0XC1F0 << 16);
            goto L_80800144;
    }
    // 0x8080010C: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80800110: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800114: lui         $at, 0x42A8
    ctx->r1 = S32(0X42A8 << 16);
    // 0x80800118: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080011C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800120: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x80800124: jal         0x800F10B4
    // 0x80800128: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_7;
    // 0x80800128: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x8080012C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800130: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800134: jal         0x80115828
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115828(rdram, ctx);
        goto after_8;
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080013C: b           L_80800158
    // 0x80800140: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
        goto L_80800158;
    // 0x80800140: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
L_80800144:
    // 0x80800144: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800148: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8080014C: jal         0x80115828
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115828(rdram, ctx);
        goto after_9;
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800154: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
L_80800158:
    // 0x80800158: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8080015C: jal         0x800EFB24
    // 0x80800160: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_800EFB24(rdram, ctx);
        goto after_10;
    // 0x80800160: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_10:
    // 0x80800164: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800168: jal         0x800F1A88
    // 0x8080016C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800F1A88(rdram, ctx);
        goto after_11;
    // 0x8080016C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_11:
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800174: jal         0x80115750
    // 0x80800178: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_80115750(rdram, ctx);
        goto after_12;
    // 0x80800178: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_12:
    // 0x8080017C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80800180: jal         0x801112B0
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801112B0(rdram, ctx);
        goto after_13;
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800188: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8080018C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800190: jal         0x800136E4
    // 0x80800194: add.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_14;
    // 0x80800194: add.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f6.fl;
    after_14:
    // 0x80800198: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x8080019C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808001A0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x808001A4: jal         0x800EEBF0
    // 0x808001A8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    func_800EEBF0(rdram, ctx);
        goto after_15;
    // 0x808001A8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_15:
    // 0x808001AC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x808001B0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x808001B4: jal         0x800EE780
    // 0x808001B8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800EE780(rdram, ctx);
        goto after_16;
    // 0x808001B8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_16:
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C0: jal         0x80111CC8
    // 0x808001C4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_80111CC8(rdram, ctx);
        goto after_17;
    // 0x808001C4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_17:
    // 0x808001C8: beql        $v0, $zero, L_808001DC
    if (ctx->r2 == 0) {
        // 0x808001CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001DC;
    }
    goto skip_0;
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808001D0: jal         0x801138F4
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_18;
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001DC:
    // 0x808001DC: jal         0x80112524
    // 0x808001E0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_80112524(rdram, ctx);
        goto after_19;
    // 0x808001E0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_19:
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E8: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x808001EC: jal         0x80110A68
    // 0x808001F0: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_80110A68(rdram, ctx);
        goto after_20;
    // 0x808001F0: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_20:
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F8: jal         0x80110790
    // 0x808001FC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80110790(rdram, ctx);
        goto after_21;
    // 0x808001FC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_21:
    // 0x80800200: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800204: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800208: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8080020C: jr          $ra
    // 0x80800210: nop

    return;
    // 0x80800210: nop

    // 0x80800214: nop

    // 0x80800218: nop

    // 0x8080021C: nop

;}
RECOMP_FUNC void ncbajig_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
;}
RECOMP_FUNC void func_80800008_ncbajig(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x80112524
    // 0x80800014: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800014: nop

    after_0:
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080001C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800020: jr          $ra
    // 0x80800024: nop

    return;
    // 0x80800024: nop

;}
RECOMP_FUNC void func_80800028_ncbajig(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080002C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800030: jal         0x80112524
    // 0x80800034: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800034: nop

    after_0:
    // 0x80800038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080003C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800040: jr          $ra
    // 0x80800044: nop

    return;
    // 0x80800044: nop

;}
RECOMP_FUNC void ncbajig_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800048: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080004C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800054: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x80800058: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080005C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800060: jal         0x80111B8C
    // 0x80800064: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_80111B8C(rdram, ctx);
        goto after_0;
    // 0x80800064: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_0:
    // 0x80800068: lui         $at, 0x4391
    ctx->r1 = S32(0X4391 << 16);
    // 0x8080006C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800070: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x80800074: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80800078: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080007C: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80800080: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080008C: jal         0x80115858
    // 0x80800090: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    func_80115858(rdram, ctx);
        goto after_1;
    // 0x80800090: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    after_1:
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800098: jal         0x80115870
    // 0x8080009C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_80115870(rdram, ctx);
        goto after_2;
    // 0x8080009C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_2:
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A4: jal         0x801124D0
    // 0x808000A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801124D0(rdram, ctx);
        goto after_3;
    // 0x808000A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x808000AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000B8: jr          $ra
    // 0x808000BC: nop

    return;
    // 0x808000BC: nop

;}
RECOMP_FUNC void ncbajig_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: jr          $ra
    // 0x808000C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808000C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbajig_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x808000CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000D8: jal         0x80000028
    // 0x808000DC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_80800028_ncbajig(rdram, ctx);
        goto after_0;
    // 0x808000DC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: jal         0x801107F0
    // 0x808000E8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x808000E8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x808000EC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x808000F0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x808000F4: jal         0x800EFB24
    // 0x808000F8: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x808000F8: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_2:
    // 0x808000FC: jal         0x800EEF94
    // 0x80800100: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x80800100: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x80800104: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800108: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8080010C: jal         0x800F1A88
    // 0x80800110: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800F1A88(rdram, ctx);
        goto after_4;
    // 0x80800110: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800118: jal         0x80115358
    // 0x8080011C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80115358(rdram, ctx);
        goto after_5;
    // 0x8080011C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x80800120: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x80800124: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800128: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8080012C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80800130: nop

    // 0x80800134: bc1fl       L_80800144
    if (!c1cs) {
        // 0x80800138: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80800144;
    }
    goto skip_0;
    // 0x80800138: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x8080013C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x80800140: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_80800144:
    // 0x80800144: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800150: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800154: jal         0x80115828
    // 0x80800158: nop

    func_80115828(rdram, ctx);
        goto after_6;
    // 0x80800158: nop

    after_6:
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800160: jal         0x80115750
    // 0x80800164: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80115750(rdram, ctx);
        goto after_7;
    // 0x80800164: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x80800168: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800170: jal         0x80112C3C
    // 0x80800174: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80112C3C(rdram, ctx);
        goto after_8;
    // 0x80800174: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_8:
    // 0x80800178: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8080017C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800180: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800184: jal         0x800EEBF0
    // 0x80800188: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_800EEBF0(rdram, ctx);
        goto after_9;
    // 0x80800188: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_9:
    // 0x8080018C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80800190: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80800194: jal         0x800EE780
    // 0x80800198: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_800EE780(rdram, ctx);
        goto after_10;
    // 0x80800198: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_10:
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A0: jal         0x80111CC8
    // 0x808001A4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80111CC8(rdram, ctx);
        goto after_11;
    // 0x808001A4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_11:
    // 0x808001A8: beql        $v0, $zero, L_808001DC
    if (ctx->r2 == 0) {
        // 0x808001AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001DC;
    }
    goto skip_1;
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808001B0: jal         0x801138A0
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_12;
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808001B8: beql        $v0, $zero, L_808001DC
    if (ctx->r2 == 0) {
        // 0x808001BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001DC;
    }
    goto skip_2;
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808001C0: jal         0x801138F4
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_13;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808001C8: beql        $v0, $zero, L_808001DC
    if (ctx->r2 == 0) {
        // 0x808001CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001DC;
    }
    goto skip_3;
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x808001D0: jal         0x80110F44
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_14;
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001DC:
    // 0x808001DC: jal         0x80000008
    // 0x808001E0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_80800008_ncbajig(rdram, ctx);
        goto after_15;
    // 0x808001E0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_15:
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x808001EC: jal         0x80110A68
    // 0x808001F0: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_80110A68(rdram, ctx);
        goto after_16;
    // 0x808001F0: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_16:
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F8: jal         0x80110790
    // 0x808001FC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80110790(rdram, ctx);
        goto after_17;
    // 0x808001FC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_17:
    // 0x80800200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800204: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800208: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8080020C: jr          $ra
    // 0x80800210: nop

    return;
    // 0x80800210: nop

    // 0x80800214: nop

    // 0x80800218: nop

    // 0x8080021C: nop

;}
RECOMP_FUNC void ncbakaztorp_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbakaztorp_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800018: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    // 0x8080001C: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x80800020: jal         0x801120CC
    // 0x80800024: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    func_801120CC(rdram, ctx);
        goto after_0;
    // 0x80800024: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    after_0:
    // 0x80800028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080002C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80800030: jal         0x80111B8C
    // 0x80800034: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_1;
    // 0x80800034: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_1:
    // 0x80800038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080003C: jal         0x801124D0
    // 0x80800040: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_2;
    // 0x80800040: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800048: jal         0x80115858
    // 0x8080004C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80115858(rdram, ctx);
        goto after_3;
    // 0x8080004C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800054: jal         0x80115870
    // 0x80800058: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80115870(rdram, ctx);
        goto after_4;
    // 0x80800058: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x8080005C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800060: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800068: jr          $ra
    // 0x8080006C: nop

    return;
    // 0x8080006C: nop

;}
RECOMP_FUNC void ncbakaztorp_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800070: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80800074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800078: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080007C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800080: jal         0x80112524
    // 0x80800084: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800084: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    after_0:
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080008C: jal         0x801107F0
    // 0x80800090: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x80800090: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_1:
    // 0x80800094: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x80800098: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8080009C: jal         0x800EFB24
    // 0x808000A0: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x808000A0: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    after_2:
    // 0x808000A4: jal         0x800EEF94
    // 0x808000A8: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x808000A8: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_3:
    // 0x808000AC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x808000B0: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x808000B4: jal         0x800F1A88
    // 0x808000B8: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800F1A88(rdram, ctx);
        goto after_4;
    // 0x808000B8: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_4:
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000C4: jal         0x80113978
    // 0x808000C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80113978(rdram, ctx);
        goto after_5;
    // 0x808000C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D0: jal         0x80115358
    // 0x808000D4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_80115358(rdram, ctx);
        goto after_6;
    // 0x808000D4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_6:
    // 0x808000D8: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x808000DC: jal         0x80110840
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110840(rdram, ctx);
        goto after_7;
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808000E4: jal         0x800F53D0
    // 0x808000E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_8;
    // 0x808000E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x808000EC: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: jal         0x80110818
    // 0x808000F8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80110818(rdram, ctx);
        goto after_9;
    // 0x808000F8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x808000FC: jal         0x80084F00
    // 0x80800100: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    _bamovethrust_entrypoint_6(rdram, ctx);
        goto after_10;
    // 0x80800100: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_10:
    // 0x80800104: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80800108: jal         0x8009BFCC
    // 0x8080010C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_8009BFCC(rdram, ctx);
        goto after_11;
    // 0x8080010C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_11:
    // 0x80800110: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800114: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800118: jal         0x800F1DCC
    // 0x8080011C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_12;
    // 0x8080011C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_12:
    // 0x80800120: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80800124: jal         0x8009C984
    // 0x80800128: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_8009C984(rdram, ctx);
        goto after_13;
    // 0x80800128: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x8080012C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800130: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800134: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800138: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8080013C: jal         0x80013728
    // 0x80800140: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    func_80013728(rdram, ctx);
        goto after_14;
    // 0x80800140: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_14:
    // 0x80800144: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80800148: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8080014C: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800150: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800154: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80800158: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8080015C: sub.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80800160: bc1f        L_80800174
    if (!c1cs) {
        // 0x80800164: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80800174;
    }
    // 0x80800164: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800168: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080016C: b           L_8080019C
    // 0x80800170: sub.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f0.fl;
        goto L_8080019C;
    // 0x80800170: sub.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f0.fl;
L_80800174:
    // 0x80800174: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x80800178: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8080017C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80800180: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80800184: nop

    // 0x80800188: bc1f        L_8080019C
    if (!c1cs) {
        // 0x8080018C: nop
    
            goto L_8080019C;
    }
    // 0x8080018C: nop

    // 0x80800190: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800194: nop

    // 0x80800198: sub.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f0.fl;
L_8080019C:
    // 0x8080019C: jal         0x80013728
    // 0x808001A0: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    func_80013728(rdram, ctx);
        goto after_15;
    // 0x808001A0: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_15:
    // 0x808001A4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808001A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808001AC: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808001B0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808001B4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x808001B8: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x808001BC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808001C0: bc1fl       L_808001DC
    if (!c1cs) {
        // 0x808001C4: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_808001DC;
    }
    goto skip_0;
    // 0x808001C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_0:
    // 0x808001C8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808001CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808001D0: b           L_808001FC
    // 0x808001D4: sub.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f0.fl;
        goto L_808001FC;
    // 0x808001D4: sub.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x808001D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_808001DC:
    // 0x808001DC: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x808001E0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x808001E4: nop

    // 0x808001E8: bc1fl       L_80800200
    if (!c1cs) {
        // 0x808001EC: lui         $at, 0x4361
        ctx->r1 = S32(0X4361 << 16);
            goto L_80800200;
    }
    goto skip_1;
    // 0x808001EC: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    skip_1:
    // 0x808001F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808001F4: nop

    // 0x808001F8: sub.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f0.fl;
L_808001FC:
    // 0x808001FC: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
L_80800200:
    // 0x80800200: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800204: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(762, 0X2D0) << 16);
    // 0x80800208: lwc1        $f10, 0x2D0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(762, 0X2D0));
    // 0x8080020C: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800210: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80800214: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80800220: nop

    // 0x80800224: mul.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80800228: nop

    // 0x8080022C: mul.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80800230: sub.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x80800234: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80800238: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8080023C: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x80800240: jal         0x80115750
    // 0x80800244: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    func_80115750(rdram, ctx);
        goto after_16;
    // 0x80800244: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x80800248: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800250: jal         0x80112C3C
    // 0x80800254: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_80112C3C(rdram, ctx);
        goto after_17;
    // 0x80800254: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_17:
    // 0x80800258: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x8080025C: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x80800260: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80800264: jal         0x800EEBF0
    // 0x80800268: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    func_800EEBF0(rdram, ctx);
        goto after_18;
    // 0x80800268: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    after_18:
    // 0x8080026C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x80800270: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x80800274: jal         0x800EE780
    // 0x80800278: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    func_800EE780(rdram, ctx);
        goto after_19;
    // 0x80800278: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_19:
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800280: jal         0x80111FD4
    // 0x80800284: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_80111FD4(rdram, ctx);
        goto after_20;
    // 0x80800284: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_20:
    // 0x80800288: beql        $v0, $zero, L_8080029C
    if (ctx->r2 == 0) {
        // 0x8080028C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080029C;
    }
    goto skip_2;
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800290: jal         0x801138F4
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_21;
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080029C:
    // 0x8080029C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x808002A0: jal         0x80110A68
    // 0x808002A4: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    func_80110A68(rdram, ctx);
        goto after_22;
    // 0x808002A4: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    after_22:
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: jal         0x80110790
    // 0x808002B0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_80110790(rdram, ctx);
        goto after_23;
    // 0x808002B0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_23:
    // 0x808002B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002BC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x808002C0: jr          $ra
    // 0x808002C4: nop

    return;
    // 0x808002C4: nop

    // 0x808002C8: nop

    // 0x808002CC: nop

;}
RECOMP_FUNC void func_80800000_ncbaledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x80112524
    // 0x8080000C: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x8080000C: nop

    after_0:
    // 0x80800010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800018: jr          $ra
    // 0x8080001C: nop

    return;
    // 0x8080001C: nop

;}
RECOMP_FUNC void func_80800020_ncbaledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800028: jal         0x80112524
    // 0x8080002C: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x8080002C: nop

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
RECOMP_FUNC void ncbaledge_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080004C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80800050: jal         0x80111B8C
    // 0x80800054: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_0;
    // 0x80800054: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_0:
    // 0x80800058: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080005C: jal         0x801124D0
    // 0x80800060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_1;
    // 0x80800060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800064: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800068: jal         0x80115858
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80115858(rdram, ctx);
        goto after_2;
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800070: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800074: jal         0x80115870
    // 0x80800078: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_80115870(rdram, ctx);
        goto after_3;
    // 0x80800078: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_3:
    // 0x8080007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800084: jr          $ra
    // 0x80800088: nop

    return;
    // 0x80800088: nop

;}
RECOMP_FUNC void ncbaledge_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080008C: jr          $ra
    // 0x80800090: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800090: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbaledge_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800094: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80800098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080009C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000A4: jal         0x80000020
    // 0x808000A8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_80800020_ncbaledge(rdram, ctx);
        goto after_0;
    // 0x808000A8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B0: jal         0x801107F0
    // 0x808000B4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x808000B4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x808000B8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x808000BC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x808000C0: jal         0x800EFB24
    // 0x808000C4: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x808000C4: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_2:
    // 0x808000C8: jal         0x800EEF94
    // 0x808000CC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x808000CC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x808000D0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x808000D4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x808000D8: jal         0x800F1A88
    // 0x808000DC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800F1A88(rdram, ctx);
        goto after_4;
    // 0x808000DC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: jal         0x80115358
    // 0x808000E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80115358(rdram, ctx);
        goto after_5;
    // 0x808000E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x808000EC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: jal         0x80115750
    // 0x808000F8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80115750(rdram, ctx);
        goto after_6;
    // 0x808000F8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_6:
    // 0x808000FC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800104: jal         0x80112C3C
    // 0x80800108: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80112C3C(rdram, ctx);
        goto after_7;
    // 0x80800108: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x8080010C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800110: jal         0x801112B0
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801112B0(rdram, ctx);
        goto after_8;
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800118: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8080011C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800120: jal         0x800F1DCC
    // 0x80800124: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_9;
    // 0x80800124: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_9:
    // 0x80800128: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8080012C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800134: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80800138: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8080013C: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80800140: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80800144: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80800148: jal         0x80112D08
    // 0x8080014C: nop

    func_80112D08(rdram, ctx);
        goto after_10;
    // 0x8080014C: nop

    after_10:
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800154: jal         0x80112C3C
    // 0x80800158: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80112C3C(rdram, ctx);
        goto after_11;
    // 0x80800158: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_11:
    // 0x8080015C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800160: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800164: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800168: jal         0x800EEBF0
    // 0x8080016C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_800EEBF0(rdram, ctx);
        goto after_12;
    // 0x8080016C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_12:
    // 0x80800170: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80800174: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80800178: jal         0x800EE780
    // 0x8080017C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_800EE780(rdram, ctx);
        goto after_13;
    // 0x8080017C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_13:
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800184: jal         0x80111CC8
    // 0x80800188: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80111CC8(rdram, ctx);
        goto after_14;
    // 0x80800188: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_14:
    // 0x8080018C: beql        $v0, $zero, L_808001D0
    if (ctx->r2 == 0) {
        // 0x80800190: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001D0;
    }
    goto skip_0;
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800194: jal         0x801138A0
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_15;
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8080019C: bne         $v0, $zero, L_808001B4
    if (ctx->r2 != 0) {
        // 0x808001A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001B4;
    }
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A4: jal         0x80115580
    // 0x808001A8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_80115580(rdram, ctx);
        goto after_16;
    // 0x808001A8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_16:
    // 0x808001AC: beql        $v0, $zero, L_808001D0
    if (ctx->r2 == 0) {
        // 0x808001B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001D0;
    }
    goto skip_1;
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_808001B4:
    // 0x808001B4: jal         0x801138F4
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_17;
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808001BC: beql        $v0, $zero, L_808001D0
    if (ctx->r2 == 0) {
        // 0x808001C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001D0;
    }
    goto skip_2;
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808001C4: jal         0x80110F44
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_18;
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001D0:
    // 0x808001D0: jal         0x80000000
    // 0x808001D4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_80800000_ncbaledge(rdram, ctx);
        goto after_19;
    // 0x808001D4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_19:
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x808001E0: jal         0x80110A68
    // 0x808001E4: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_80110A68(rdram, ctx);
        goto after_20;
    // 0x808001E4: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_20:
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001EC: jal         0x80110790
    // 0x808001F0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80110790(rdram, ctx);
        goto after_21;
    // 0x808001F0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_21:
    // 0x808001F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001FC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80800200: jr          $ra
    // 0x80800204: nop

    return;
    // 0x80800204: nop

    // 0x80800208: nop

    // 0x8080020C: nop

;}
RECOMP_FUNC void ncbapan_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_80800008_ncbapan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x80112524
    // 0x80800014: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800014: nop

    after_0:
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080001C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800020: jr          $ra
    // 0x80800024: nop

    return;
    // 0x80800024: nop

;}
RECOMP_FUNC void func_80800028_ncbapan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080002C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800030: jal         0x80112524
    // 0x80800034: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800034: nop

    after_0:
    // 0x80800038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080003C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800040: jr          $ra
    // 0x80800044: nop

    return;
    // 0x80800044: nop

;}
RECOMP_FUNC void func_80800048_ncbapan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800048: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8080004C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800050: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80800054: jal         0x801107F0
    // 0x80800058: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x80800058: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x8080005C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80800060: jal         0x80000028
    // 0x80800064: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80800028_ncbapan(rdram, ctx);
        goto after_1;
    // 0x80800064: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x80800068: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8080006C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800070: jal         0x800EFB24
    // 0x80800074: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80800074: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x80800078: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8080007C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80800080: jal         0x800F1EA4
    // 0x80800084: lw          $a1, 0x38($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X38);
    func_800F1EA4(rdram, ctx);
        goto after_3;
    // 0x80800084: lw          $a1, 0x38($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X38);
    after_3:
    // 0x80800088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080008C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800090: jr          $ra
    // 0x80800094: nop

    return;
    // 0x80800094: nop

;}
RECOMP_FUNC void ncbapan_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080009C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000A8: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    // 0x808000AC: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x808000B0: jal         0x801120CC
    // 0x808000B4: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    func_801120CC(rdram, ctx);
        goto after_0;
    // 0x808000B4: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    after_0:
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000BC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x808000C0: jal         0x80111B8C
    // 0x808000C4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_1;
    // 0x808000C4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_1:
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000CC: jal         0x801124D0
    // 0x808000D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_2;
    // 0x808000D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D8: jal         0x80115858
    // 0x808000DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80115858(rdram, ctx);
        goto after_3;
    // 0x808000DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: jal         0x80115870
    // 0x808000E8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_80115870(rdram, ctx);
        goto after_4;
    // 0x808000E8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_4:
    // 0x808000EC: jal         0x80000048
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800048_ncbapan(rdram, ctx);
        goto after_5;
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800100: jr          $ra
    // 0x80800104: nop

    return;
    // 0x80800104: nop

;}
RECOMP_FUNC void ncbapan_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800108: jr          $ra
    // 0x8080010C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080010C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbapan_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800110: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80800114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800118: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080011C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800120: jal         0x80000028
    // 0x80800124: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80800028_ncbapan(rdram, ctx);
        goto after_0;
    // 0x80800124: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080012C: jal         0x801107F0
    // 0x80800130: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x80800130: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x80800134: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80800138: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8080013C: jal         0x800EFB24
    // 0x80800140: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80800140: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_2:
    // 0x80800144: jal         0x800EEF94
    // 0x80800148: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x80800148: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x8080014C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800150: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80800154: jal         0x800F1A88
    // 0x80800158: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800F1A88(rdram, ctx);
        goto after_4;
    // 0x80800158: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800164: jal         0x80113978
    // 0x80800168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80113978(rdram, ctx);
        goto after_5;
    // 0x80800168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800170: jal         0x80115358
    // 0x80800174: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80115358(rdram, ctx);
        goto after_6;
    // 0x80800174: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_6:
    // 0x80800178: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800180: jal         0x80115750
    // 0x80800184: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80115750(rdram, ctx);
        goto after_7;
    // 0x80800184: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x80800188: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800190: jal         0x80112C3C
    // 0x80800194: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80112C3C(rdram, ctx);
        goto after_8;
    // 0x80800194: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_8:
    // 0x80800198: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8080019C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808001A0: nop

    // 0x808001A4: bc1tl       L_808001B8
    if (c1cs) {
        // 0x808001A8: lw          $t7, 0x38($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X38);
            goto L_808001B8;
    }
    goto skip_0;
    // 0x808001A8: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    skip_0:
    // 0x808001AC: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x808001B0: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x808001B4: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
L_808001B8:
    // 0x808001B8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x808001BC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808001C0: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x808001C4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x808001C8: jal         0x800EEBF0
    // 0x808001CC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_800EEBF0(rdram, ctx);
        goto after_9;
    // 0x808001CC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x808001D0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x808001D4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x808001D8: jal         0x800EE780
    // 0x808001DC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_800EE780(rdram, ctx);
        goto after_10;
    // 0x808001DC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_10:
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: jal         0x80111FD4
    // 0x808001E8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80111FD4(rdram, ctx);
        goto after_11;
    // 0x808001E8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_11:
    // 0x808001EC: beql        $v0, $zero, L_80800238
    if (ctx->r2 == 0) {
        // 0x808001F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800238;
    }
    goto skip_1;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808001F4: jal         0x801138A0
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_12;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808001FC: bne         $v0, $zero, L_80800214
    if (ctx->r2 != 0) {
        // 0x80800200: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800214;
    }
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800204: jal         0x80115580
    // 0x80800208: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80115580(rdram, ctx);
        goto after_13;
    // 0x80800208: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_13:
    // 0x8080020C: beq         $v0, $zero, L_8080022C
    if (ctx->r2 == 0) {
        // 0x80800210: nop
    
            goto L_8080022C;
    }
    // 0x80800210: nop

L_80800214:
    // 0x80800214: jal         0x801138F4
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_14;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8080021C: beq         $v0, $zero, L_8080022C
    if (ctx->r2 == 0) {
        // 0x80800220: nop
    
            goto L_8080022C;
    }
    // 0x80800220: nop

    // 0x80800224: jal         0x80110F44
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_15;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
L_8080022C:
    // 0x8080022C: jal         0x80000048
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800048_ncbapan(rdram, ctx);
        goto after_16;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800238:
    // 0x80800238: jal         0x80000008
    // 0x8080023C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80800008_ncbapan(rdram, ctx);
        goto after_17;
    // 0x8080023C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_17:
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80800248: jal         0x80110A68
    // 0x8080024C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_80110A68(rdram, ctx);
        goto after_18;
    // 0x8080024C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_18:
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800254: jal         0x80110790
    // 0x80800258: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_80110790(rdram, ctx);
        goto after_19;
    // 0x80800258: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_19:
    // 0x8080025C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800260: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800264: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80800268: jr          $ra
    // 0x8080026C: nop

    return;
    // 0x8080026C: nop

;}
RECOMP_FUNC void ncbapivot_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_80800008_ncbapivot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x80112524
    // 0x80800014: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800014: nop

    after_0:
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080001C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800020: jr          $ra
    // 0x80800024: nop

    return;
    // 0x80800024: nop

;}
RECOMP_FUNC void ncbapivot_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080002C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800030: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800034: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800038: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    // 0x8080003C: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x80800040: jal         0x801120CC
    // 0x80800044: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    func_801120CC(rdram, ctx);
        goto after_0;
    // 0x80800044: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    after_0:
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80800050: jal         0x80111B8C
    // 0x80800054: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_1;
    // 0x80800054: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_1:
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080005C: jal         0x801124D0
    // 0x80800060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_2;
    // 0x80800060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800068: jal         0x80115858
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80115858(rdram, ctx);
        goto after_3;
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800074: jal         0x80115870
    // 0x80800078: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_80115870(rdram, ctx);
        goto after_4;
    // 0x80800078: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_4:
    // 0x8080007C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800080: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800088: jr          $ra
    // 0x8080008C: nop

    return;
    // 0x8080008C: nop

;}
RECOMP_FUNC void ncbapivot_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800090: jr          $ra
    // 0x80800094: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800094: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbapivot_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8080009C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000A8: jal         0x8011607C
    // 0x808000AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8011607C(rdram, ctx);
        goto after_0;
    // 0x808000AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808000B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000B8: jal         0x80113978
    // 0x808000BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80113978(rdram, ctx);
        goto after_1;
    // 0x808000BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: jal         0x80000008
    // 0x808000C8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_80800008_ncbapivot(rdram, ctx);
        goto after_2;
    // 0x808000C8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_2:
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D0: jal         0x801107F0
    // 0x808000D4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_801107F0(rdram, ctx);
        goto after_3;
    // 0x808000D4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x808000D8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x808000DC: jal         0x800EE7F8
    // 0x808000E0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x808000E0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_4:
    // 0x808000E4: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x808000E8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x808000EC: beq         $t7, $zero, L_80800108
    if (ctx->r15 == 0) {
        // 0x808000F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800108;
    }
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x808000F8: jal         0x80089468
    // 0x808000FC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    _ncbawaypoint_entrypoint_3(rdram, ctx);
        goto after_5;
    // 0x808000FC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x80800100: b           L_80800114
    // 0x80800104: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
        goto L_80800114;
    // 0x80800104: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_80800108:
    // 0x80800108: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080010C: nop

    // 0x80800110: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
L_80800114:
    // 0x80800114: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80800118: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8080011C: jal         0x800EFB24
    // 0x80800120: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_800EFB24(rdram, ctx);
        goto after_6;
    // 0x80800120: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x80800124: jal         0x800EEF94
    // 0x80800128: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    func_800EEF94(rdram, ctx);
        goto after_7;
    // 0x80800128: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_7:
    // 0x8080012C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800130: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80800134: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800138: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x8080013C: jal         0x800F1A88
    // 0x80800140: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_800F1A88(rdram, ctx);
        goto after_8;
    // 0x80800140: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800148: jal         0x80115358
    // 0x8080014C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_80115358(rdram, ctx);
        goto after_9;
    // 0x8080014C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_9:
    // 0x80800150: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800158: jal         0x80115750
    // 0x8080015C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80115750(rdram, ctx);
        goto after_10;
    // 0x8080015C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_10:
    // 0x80800160: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: jal         0x80112C3C
    // 0x8080016C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_80112C3C(rdram, ctx);
        goto after_11;
    // 0x8080016C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_11:
    // 0x80800170: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80800174: jal         0x801125E8
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801125E8(rdram, ctx);
        goto after_12;
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080017C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800180: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800184: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800188: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x8080018C: sub.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x80800190: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800194: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80800198: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8080019C: jal         0x800EEBF0
    // 0x808001A0: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    func_800EEBF0(rdram, ctx);
        goto after_13;
    // 0x808001A0: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x808001A4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x808001A8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x808001AC: jal         0x800EE780
    // 0x808001B0: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800EE780(rdram, ctx);
        goto after_14;
    // 0x808001B0: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_14:
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B8: jal         0x80111FD4
    // 0x808001BC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_80111FD4(rdram, ctx);
        goto after_15;
    // 0x808001BC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_15:
    // 0x808001C0: beql        $v0, $zero, L_80800234
    if (ctx->r2 == 0) {
        // 0x808001C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800234;
    }
    goto skip_0;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808001C8: jal         0x801138A0
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_16;
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808001D0: beq         $v0, $zero, L_808001F8
    if (ctx->r2 == 0) {
        // 0x808001D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001F8;
    }
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D8: jal         0x801138F4
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_17;
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808001E0: beql        $v0, $zero, L_80800234
    if (ctx->r2 == 0) {
        // 0x808001E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800234;
    }
    goto skip_1;
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808001E8: jal         0x80110F44
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_18;
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808001F0: b           L_80800234
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800234;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001F8:
    // 0x808001F8: jal         0x80115580
    // 0x808001FC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80115580(rdram, ctx);
        goto after_19;
    // 0x808001FC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_19:
    // 0x80800200: bne         $v0, $zero, L_80800218
    if (ctx->r2 != 0) {
        // 0x80800204: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800218;
    }
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: jal         0x80115580
    // 0x8080020C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_80115580(rdram, ctx);
        goto after_20;
    // 0x8080020C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_20:
    // 0x80800210: beql        $v0, $zero, L_80800234
    if (ctx->r2 == 0) {
        // 0x80800214: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800234;
    }
    goto skip_2;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
L_80800218:
    // 0x80800218: jal         0x801138F4
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_21;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800220: beql        $v0, $zero, L_80800234
    if (ctx->r2 == 0) {
        // 0x80800224: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800234;
    }
    goto skip_3;
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800228: jal         0x80110F44
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_22;
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800234:
    // 0x80800234: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80800238: jal         0x80110A68
    // 0x8080023C: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_80110A68(rdram, ctx);
        goto after_23;
    // 0x8080023C: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_23:
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: jal         0x80110790
    // 0x80800248: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_80110790(rdram, ctx);
        goto after_24;
    // 0x80800248: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_24:
    // 0x8080024C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800254: nop

    // 0x80800258: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8080025C: nop

    // 0x80800260: bc1tl       L_80800274
    if (c1cs) {
        // 0x80800264: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800274;
    }
    goto skip_4;
    // 0x80800264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x80800268: jal         0x80111310
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80111310(rdram, ctx);
        goto after_25;
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80800270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800274:
    // 0x80800274: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800278: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8080027C: jr          $ra
    // 0x80800280: nop

    return;
    // 0x80800280: nop

    // 0x80800284: nop

    // 0x80800288: nop

    // 0x8080028C: nop

;}
RECOMP_FUNC void ncbaspiral_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void func_80800008_ncbaspiral(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x80112524
    // 0x80800014: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800014: nop

    after_0:
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080001C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800020: jr          $ra
    // 0x80800024: nop

    return;
    // 0x80800024: nop

;}
RECOMP_FUNC void func_80800028_ncbaspiral(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080002C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800030: jal         0x80112524
    // 0x80800034: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800034: nop

    after_0:
    // 0x80800038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080003C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800040: jr          $ra
    // 0x80800044: nop

    return;
    // 0x80800044: nop

;}
RECOMP_FUNC void ncbaspiral_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800048: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080004C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800058: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x8080005C: jal         0x80111B8C
    // 0x80800060: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_0;
    // 0x80800060: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_0:
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800068: jal         0x801124D0
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_1;
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800074: jal         0x80115858
    // 0x80800078: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80115858(rdram, ctx);
        goto after_2;
    // 0x80800078: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800080: jal         0x80115870
    // 0x80800084: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_80115870(rdram, ctx);
        goto after_3;
    // 0x80800084: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_3:
    // 0x80800088: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    // 0x8080008C: jal         0x800EFD24
    // 0x80800090: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EFD24(rdram, ctx);
        goto after_4;
    // 0x80800090: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_4:
    // 0x80800094: lw          $t7, 0x48($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X48);
    // 0x80800098: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8080009C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
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
RECOMP_FUNC void ncbaspiral_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B4: jr          $ra
    // 0x808000B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808000B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbaspiral_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000BC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x808000C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000CC: jal         0x80000028
    // 0x808000D0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80800028_ncbaspiral(rdram, ctx);
        goto after_0;
    // 0x808000D0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D8: jal         0x801107F0
    // 0x808000DC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x808000DC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x808000E0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x808000E4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x808000E8: jal         0x800EFB24
    // 0x808000EC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x808000EC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_2:
    // 0x808000F0: jal         0x800EEF94
    // 0x808000F4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x808000F4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x808000F8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808000FC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80800100: jal         0x800F1A88
    // 0x80800104: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800F1A88(rdram, ctx);
        goto after_4;
    // 0x80800104: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080010C: jal         0x80115358
    // 0x80800110: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80115358(rdram, ctx);
        goto after_5;
    // 0x80800110: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80800114: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: jal         0x80115750
    // 0x80800120: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80115750(rdram, ctx);
        goto after_6;
    // 0x80800120: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80800124: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80800128: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    // 0x8080012C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80800130: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80800134: jal         0x800F1E6C
    // 0x80800138: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800F1E6C(rdram, ctx);
        goto after_7;
    // 0x80800138: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_7:
    // 0x8080013C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800140: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800144: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80800150: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80800154: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80800158: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8080015C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80800160: jal         0x80112D08
    // 0x80800164: nop

    func_80112D08(rdram, ctx);
        goto after_8;
    // 0x80800164: nop

    after_8:
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080016C: jal         0x80112C3C
    // 0x80800170: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80112C3C(rdram, ctx);
        goto after_9;
    // 0x80800170: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_9:
    // 0x80800174: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800178: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8080017C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80800180: jal         0x800EEBF0
    // 0x80800184: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800EEBF0(rdram, ctx);
        goto after_10;
    // 0x80800184: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_10:
    // 0x80800188: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8080018C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80800190: jal         0x800EE780
    // 0x80800194: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_800EE780(rdram, ctx);
        goto after_11;
    // 0x80800194: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_11:
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080019C: jal         0x80111CC8
    // 0x808001A0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80111CC8(rdram, ctx);
        goto after_12;
    // 0x808001A0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_12:
    // 0x808001A4: beql        $v0, $zero, L_808001E8
    if (ctx->r2 == 0) {
        // 0x808001A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001E8;
    }
    goto skip_0;
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808001AC: jal         0x801138A0
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_13;
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808001B4: bne         $v0, $zero, L_808001CC
    if (ctx->r2 != 0) {
        // 0x808001B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001CC;
    }
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001BC: jal         0x80115580
    // 0x808001C0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80115580(rdram, ctx);
        goto after_14;
    // 0x808001C0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_14:
    // 0x808001C4: beql        $v0, $zero, L_808001E8
    if (ctx->r2 == 0) {
        // 0x808001C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001E8;
    }
    goto skip_1;
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_808001CC:
    // 0x808001CC: jal         0x801138F4
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_15;
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808001D4: beql        $v0, $zero, L_808001E8
    if (ctx->r2 == 0) {
        // 0x808001D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001E8;
    }
    goto skip_2;
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808001DC: jal         0x80110F44
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_16;
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001E8:
    // 0x808001E8: jal         0x80000008
    // 0x808001EC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80800008_ncbaspiral(rdram, ctx);
        goto after_17;
    // 0x808001EC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_17:
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x808001F8: jal         0x80110A68
    // 0x808001FC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_80110A68(rdram, ctx);
        goto after_18;
    // 0x808001FC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_18:
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800204: jal         0x80110790
    // 0x80800208: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_80110790(rdram, ctx);
        goto after_19;
    // 0x80800208: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_19:
    // 0x8080020C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800210: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800214: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80800218: jr          $ra
    // 0x8080021C: nop

    return;
    // 0x8080021C: nop

;}
RECOMP_FUNC void ncbaspiral_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080022C: lw          $a0, 0x48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48);
    // 0x80800230: jal         0x800EE7F8
    // 0x80800234: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800234: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x80800238: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8080023C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80800240: lw          $t9, 0x48($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X48);
    // 0x80800244: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x80800248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080024C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800250: jr          $ra
    // 0x80800254: nop

    return;
    // 0x80800254: nop

;}
RECOMP_FUNC void ncbaspiral_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800258: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080025C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800260: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800264: lw          $t7, 0x48($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X48);
    // 0x80800268: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8080026C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80800270: beql        $a1, $t8, L_808002CC
    if (ctx->r5 == ctx->r24) {
        // 0x80800274: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808002CC;
    }
    goto skip_0;
    // 0x80800274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800278: jal         0x800A5800
    // 0x8080027C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_800A5800(rdram, ctx);
        goto after_0;
    // 0x8080027C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800280: jal         0x80085640
    // 0x80800284: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    _cadbfunc_entrypoint_24(rdram, ctx);
        goto after_1;
    // 0x80800284: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80800288: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8080028C: jal         0x801107B0
    // 0x80800290: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_801107B0(rdram, ctx);
        goto after_2;
    // 0x80800290: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x80800294: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800298: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8080029C: jal         0x80088280
    // 0x808002A0: addiu       $a0, $a0, 0x1D1
    ctx->r4 = ADD32(ctx->r4, 0X1D1);
    _gccubesearch_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x808002A0: addiu       $a0, $a0, 0x1D1
    ctx->r4 = ADD32(ctx->r4, 0X1D1);
    after_3:
    // 0x808002A4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x808002A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808002AC: lw          $a1, 0x48($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X48);
    // 0x808002B0: jal         0x80088C00
    // 0x808002B4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    _gspropctrl_entrypoint_11(rdram, ctx);
        goto after_4;
    // 0x808002B4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_4:
    // 0x808002B8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x808002BC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x808002C0: lw          $t2, 0x48($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X48);
    // 0x808002C4: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x808002C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002CC:
    // 0x808002CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808002D0: jr          $ra
    // 0x808002D4: nop

    return;
    // 0x808002D4: nop

    // 0x808002D8: nop

    // 0x808002DC: nop

;}
RECOMP_FUNC void ncbaspline_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
;}
RECOMP_FUNC void func_80800008_ncbaspline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x80800014: jal         0x800D7520
    // 0x80800018: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800D7520(rdram, ctx);
        goto after_0;
    // 0x80800018: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8080001C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800024: jr          $ra
    // 0x80800028: nop

    return;
    // 0x80800028: nop

;}
RECOMP_FUNC void func_8080002C_ncbaspline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080002C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800034: lw          $t7, 0x44($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X44);
    // 0x80800038: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8080003C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800040: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80800044: lw          $t8, 0x44($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X44);
    // 0x80800048: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8080004C: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    // 0x80800050: lw          $t9, 0x44($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X44);
    // 0x80800054: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x80800058: lw          $t0, 0x44($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X44);
    // 0x8080005C: sw          $zero, 0x28($t0)
    MEM_W(0X28, ctx->r8) = 0;
    // 0x80800060: lw          $t1, 0x44($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X44);
    // 0x80800064: sb          $zero, 0x2C($t1)
    MEM_B(0X2C, ctx->r9) = 0;
    // 0x80800068: lw          $t2, 0x44($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X44);
    // 0x8080006C: sb          $zero, 0x2F($t2)
    MEM_B(0X2F, ctx->r10) = 0;
    // 0x80800070: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x80800074: lbu         $t3, 0x2F($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2F);
    // 0x80800078: sb          $t3, 0x2E($v0)
    MEM_B(0X2E, ctx->r2) = ctx->r11;
    // 0x8080007C: lw          $a0, 0x44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X44);
    // 0x80800080: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80800084: jal         0x800EFD24
    // 0x80800088: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x80800088: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x8080008C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800090: lw          $a0, 0x44($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X44);
    // 0x80800094: jal         0x800EFD24
    // 0x80800098: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x80800098: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_1:
    // 0x8080009C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x808000A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808000A4: lw          $t4, 0x44($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X44);
    // 0x808000A8: swc1        $f4, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f4.u32l;
    // 0x808000AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000B4: jr          $ra
    // 0x808000B8: nop

    return;
    // 0x808000B8: nop

;}
RECOMP_FUNC void ncbaspline_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C4: jal         0x8000002C
    // 0x808000C8: nop

    func_8080002C_ncbaspline(rdram, ctx);
        goto after_0;
    // 0x808000C8: nop

    after_0:
    // 0x808000CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000D4: jr          $ra
    // 0x808000D8: nop

    return;
    // 0x808000D8: nop

;}
RECOMP_FUNC void ncbaspline_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000E8: jal         0x801124D0
    // 0x808000EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_0;
    // 0x808000EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808000F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000F4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x808000F8: jal         0x80111B8C
    // 0x808000FC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_1;
    // 0x808000FC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_1:
    // 0x80800100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800108: jr          $ra
    // 0x8080010C: nop

    return;
    // 0x8080010C: nop

;}
RECOMP_FUNC void ncbaspline_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800118: jal         0x8000002C
    // 0x8080011C: nop

    func_8080002C_ncbaspline(rdram, ctx);
        goto after_0;
    // 0x8080011C: nop

    after_0:
    // 0x80800120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800128: jr          $ra
    // 0x8080012C: nop

    return;
    // 0x8080012C: nop

;}
RECOMP_FUNC void func_80800130_ncbaspline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800130: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800138: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080013C: jal         0x80112518
    // 0x80800140: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80112518(rdram, ctx);
        goto after_0;
    // 0x80800140: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800144: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800148: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080014C: jal         0x801124D0
    // 0x80800150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_1;
    // 0x80800150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800154: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800158: jal         0x80112524
    // 0x8080015C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80112524(rdram, ctx);
        goto after_2;
    // 0x8080015C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80800160: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800164: jal         0x801124D0
    // 0x80800168: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801124D0(rdram, ctx);
        goto after_3;
    // 0x80800168: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x8080016C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800174: jr          $ra
    // 0x80800178: nop

    return;
    // 0x80800178: nop

;}
RECOMP_FUNC void func_8080017C_ncbaspline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080017C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800180: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800184: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80800188: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8080018C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800190: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800194: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80800198: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8080019C: jal         0x800C82CC
    // 0x808001A0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800C82CC(rdram, ctx);
        goto after_0;
    // 0x808001A0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x808001A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808001A8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808001AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808001B0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x808001BC: bc1tl       L_808001E0
    if (c1cs) {
        // 0x808001C0: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_808001E0;
    }
    goto skip_0;
    // 0x808001C0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_0:
    // 0x808001C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808001C8: nop

    // 0x808001CC: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x808001D0: nop

    // 0x808001D4: bc1fl       L_808002A4
    if (!c1cs) {
        // 0x808001D8: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_808002A4;
    }
    goto skip_1;
    // 0x808001D8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_1:
    // 0x808001DC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_808001E0:
    // 0x808001E0: jal         0x800C7A68
    // 0x808001E4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    func_800C7A68(rdram, ctx);
        goto after_1;
    // 0x808001E4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x808001E8: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808001EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x808001F0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(767, 0XA34) << 16);
    // 0x808001F4: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x808001F8: nop

    // 0x808001FC: bc1f        L_8080022C
    if (!c1cs) {
        // 0x80800200: nop
    
            goto L_8080022C;
    }
    // 0x80800200: nop

    // 0x80800204: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(767, 0XA30) << 16);
    // 0x80800208: lwc1        $f10, 0xA30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(767, 0XA30));
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80800214: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x80800218: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8080021C: jal         0x800C7A68
    // 0x80800220: nop

    func_800C7A68(rdram, ctx);
        goto after_2;
    // 0x80800220: nop

    after_2:
    // 0x80800224: b           L_8080024C
    // 0x80800228: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
        goto L_8080024C;
    // 0x80800228: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_8080022C:
    // 0x8080022C: lwc1        $f18, 0xA34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(767, 0XA34));
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800234: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80800238: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x8080023C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80800240: jal         0x800C7A68
    // 0x80800244: nop

    func_800C7A68(rdram, ctx);
        goto after_3;
    // 0x80800244: nop

    after_3:
    // 0x80800248: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_8080024C:
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800250: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800254: jal         0x800EFB24
    // 0x80800258: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_800EFB24(rdram, ctx);
        goto after_4;
    // 0x80800258: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800260: jal         0x800EF368
    // 0x80800264: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_800EF368(rdram, ctx);
        goto after_5;
    // 0x80800264: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_5:
    // 0x80800268: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8080026C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800270: jal         0x800EE780
    // 0x80800274: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_800EE780(rdram, ctx);
        goto after_6;
    // 0x80800274: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_6:
    // 0x80800278: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8080027C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80800280: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80800284: jal         0x800F018C
    // 0x80800288: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    func_800F018C(rdram, ctx);
        goto after_7;
    // 0x80800288: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    after_7:
    // 0x8080028C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80800290: jal         0x800EEAD4
    // 0x80800294: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    func_800EEAD4(rdram, ctx);
        goto after_8;
    // 0x80800294: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_8:
    // 0x80800298: b           L_80800308
    // 0x8080029C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800308;
    // 0x8080029C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002A0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_808002A4:
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x808002AC: jal         0x800C7A68
    // 0x808002B0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    func_800C7A68(rdram, ctx);
        goto after_9;
    // 0x808002B0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_9:
    // 0x808002B4: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x808002B8: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808002BC: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    // 0x808002C0: lw          $t7, 0x44($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X44);
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C8: lwc1        $f0, 0x8($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X8);
    // 0x808002CC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x808002D0: nop

    // 0x808002D4: bc1fl       L_808002F8
    if (!c1cs) {
        // 0x808002D8: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_808002F8;
    }
    goto skip_2;
    // 0x808002D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_2:
    // 0x808002DC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x808002E0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808002E4: jal         0x800C7B28
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800C7B28(rdram, ctx);
        goto after_10;
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808002EC: b           L_80800308
    // 0x808002F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800308;
    // 0x808002F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_808002F8:
    // 0x808002F8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x808002FC: jal         0x800C7B28
    // 0x80800300: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    func_800C7B28(rdram, ctx);
        goto after_11;
    // 0x80800300: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_11:
    // 0x80800304: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800308:
    // 0x80800308: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080030C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800310: jr          $ra
    // 0x80800314: nop

    return;
    // 0x80800314: nop

;}
RECOMP_FUNC void func_80800318_ncbaspline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800318: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8080031C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800320: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800324: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800328: jal         0x80000008
    // 0x8080032C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    func_80800008_ncbaspline(rdram, ctx);
        goto after_0;
    // 0x8080032C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800330: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800338: jal         0x80000130
    // 0x8080033C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80800130_ncbaspline(rdram, ctx);
        goto after_1;
    // 0x8080033C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_1:
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800344: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80800348: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x8080034C: jal         0x8000017C
    // 0x80800350: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    func_8080017C_ncbaspline(rdram, ctx);
        goto after_2;
    // 0x80800350: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    after_2:
    // 0x80800354: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80800358: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
    // 0x8080035C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800360: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80800364: jal         0x800C7FD4
    // 0x80800368: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    func_800C7FD4(rdram, ctx);
        goto after_3;
    // 0x80800368: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    after_3:
    // 0x8080036C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x80800370: lw          $t7, 0x44($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X44);
    // 0x80800374: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800378: lui         $a2, 0xC47A
    ctx->r6 = S32(0XC47A << 16);
    // 0x8080037C: jal         0x800C7FD4
    // 0x80800380: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    func_800C7FD4(rdram, ctx);
        goto after_4;
    // 0x80800380: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    after_4:
    // 0x80800384: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80800388: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080038C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80800390: jal         0x800C7A68
    // 0x80800394: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_800C7A68(rdram, ctx);
        goto after_5;
    // 0x80800394: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_5:
    // 0x80800398: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080039C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x808003A0: jal         0x800C7A68
    // 0x808003A4: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_800C7A68(rdram, ctx);
        goto after_6;
    // 0x808003A4: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_6:
    // 0x808003A8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x808003AC: jal         0x800EEAD4
    // 0x808003B0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800EEAD4(rdram, ctx);
        goto after_7;
    // 0x808003B0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_7:
    // 0x808003B4: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x808003B8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x808003BC: jal         0x800EEAD4
    // 0x808003C0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_800EEAD4(rdram, ctx);
        goto after_8;
    // 0x808003C0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_8:
    // 0x808003C4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808003C8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x808003CC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x808003D0: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    // 0x808003D4: jal         0x800F2100
    // 0x808003D8: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_9;
    // 0x808003D8: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    after_9:
    // 0x808003DC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x808003E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808003E4: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808003E8: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x808003EC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x808003F0: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x808003F4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808003F8: bc1f        L_808005B8
    if (!c1cs) {
        // 0x808003FC: nop
    
            goto L_808005B8;
    }
    // 0x808003FC: nop

    // 0x80800400: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80800404: lui         $a2, 0x4422
    ctx->r6 = S32(0X4422 << 16);
    // 0x80800408: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080040C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80800410: bc1f        L_80800428
    if (!c1cs) {
        // 0x80800414: addiu       $a3, $zero, 0x0
        ctx->r7 = ADD32(0, 0X0);
            goto L_80800428;
    }
    // 0x80800414: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800418: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080041C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800420: b           L_80800430
    // 0x80800424: nop

        goto L_80800430;
    // 0x80800424: nop

L_80800428:
    // 0x80800428: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8080042C: nop

L_80800430:
    // 0x80800430: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(767, 0XA38) << 16);
    // 0x80800434: lwc1        $f16, 0xA38($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(767, 0XA38));
    // 0x80800438: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8080043C: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80800440: nop

    // 0x80800444: bc1fl       L_8080047C
    if (!c1cs) {
        // 0x80800448: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_8080047C;
    }
    goto skip_0;
    // 0x80800448: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x8080044C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(767, 0XA3C) << 16);
    // 0x80800450: lwc1        $f14, 0xA3C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(767, 0XA3C));
    // 0x80800454: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(767, 0XA40) << 16);
    // 0x80800458: lwc1        $f18, 0xA40($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(767, 0XA40));
    // 0x8080045C: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x80800460: jal         0x800F10B4
    // 0x80800464: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F10B4(rdram, ctx);
        goto after_10;
    // 0x80800464: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x80800468: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080046C: mul.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80800470: b           L_808004C0
    // 0x80800474: lw          $t8, 0x44($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X44);
        goto L_808004C0;
    // 0x80800474: lw          $t8, 0x44($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X44);
    // 0x80800478: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_8080047C:
    // 0x8080047C: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80800480: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80800484: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80800488: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x8080048C: bc1fl       L_808004C0
    if (!c1cs) {
        // 0x80800490: lw          $t8, 0x44($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X44);
            goto L_808004C0;
    }
    goto skip_1;
    // 0x80800490: lw          $t8, 0x44($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X44);
    skip_1:
    // 0x80800494: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800498: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080049C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808004A0: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x808004A4: jal         0x800F10B4
    // 0x808004A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_11;
    // 0x808004A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x808004AC: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808004B0: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x808004B4: mul.s       $f14, $f0, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x808004B8: nop

    // 0x808004BC: lw          $t8, 0x44($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X44);
L_808004C0:
    // 0x808004C0: lwc1        $f12, 0x4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4);
    // 0x808004C4: jal         0x800F2100
    // 0x808004C8: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    func_800F2100(rdram, ctx);
        goto after_12;
    // 0x808004C8: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_12:
    // 0x808004CC: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808004D0: jal         0x800F2100
    // 0x808004D4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800F2100(rdram, ctx);
        goto after_13;
    // 0x808004D4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x808004D8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808004DC: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808004E0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x808004E4: nop

    // 0x808004E8: bc1fl       L_80800518
    if (!c1cs) {
        // 0x808004EC: lw          $t9, 0x44($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X44);
            goto L_80800518;
    }
    goto skip_2;
    // 0x808004EC: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    skip_2:
    // 0x808004F0: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x808004F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(767, 0XA44) << 16);
    // 0x808004F8: lwc1        $f16, 0xA44($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(767, 0XA44));
    // 0x808004FC: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800500: sub.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x80800504: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80800508: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x8080050C: b           L_8080051C
    // 0x80800510: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
        goto L_8080051C;
    // 0x80800510: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80800514: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
L_80800518:
    // 0x80800518: swc1        $f14, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f14.u32l;
L_8080051C:
    // 0x8080051C: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x80800520: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800524: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x80800528: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x8080052C: jal         0x800C7FD4
    // 0x80800530: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    func_800C7FD4(rdram, ctx);
        goto after_14;
    // 0x80800530: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_14:
    // 0x80800534: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800538: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8080053C: lw          $t0, 0x44($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X44);
    // 0x80800540: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80800544: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x80800548: bc1fl       L_80800580
    if (!c1cs) {
        // 0x8080054C: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_80800580;
    }
    goto skip_3;
    // 0x8080054C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_3:
    // 0x80800550: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x80800554: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800558: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080055C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800560: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80800564: nop

    // 0x80800568: bc1fl       L_80800580
    if (!c1cs) {
        // 0x8080056C: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_80800580;
    }
    goto skip_4;
    // 0x8080056C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_4:
    // 0x80800570: lbu         $t1, 0x2F($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2F);
    // 0x80800574: beq         $t1, $zero, L_808005B0
    if (ctx->r9 == 0) {
        // 0x80800578: nop
    
            goto L_808005B0;
    }
    // 0x80800578: nop

    // 0x8080057C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
L_80800580:
    // 0x80800580: nop

    // 0x80800584: bc1fl       L_808005C4
    if (!c1cs) {
        // 0x80800588: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_808005C4;
    }
    goto skip_5;
    // 0x80800588: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_5:
    // 0x8080058C: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x80800590: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800594: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x80800598: nop

    // 0x8080059C: bc1fl       L_808005C4
    if (!c1cs) {
        // 0x808005A0: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_808005C4;
    }
    goto skip_6;
    // 0x808005A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_6:
    // 0x808005A4: lbu         $t2, 0x2E($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2E);
    // 0x808005A8: bnel        $t2, $zero, L_808005C4
    if (ctx->r10 != 0) {
        // 0x808005AC: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_808005C4;
    }
    goto skip_7;
    // 0x808005AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_7:
L_808005B0:
    // 0x808005B0: b           L_808005E0
    // 0x808005B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808005E0;
    // 0x808005B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808005B8:
    // 0x808005B8: b           L_808005E0
    // 0x808005BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808005E0;
    // 0x808005BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808005C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_808005C4:
    // 0x808005C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x808005C8: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x808005CC: nop

    // 0x808005D0: bc1t        L_808005E0
    if (c1cs) {
        // 0x808005D4: nop
    
            goto L_808005E0;
    }
    // 0x808005D4: nop

    // 0x808005D8: b           L_808005E0
    // 0x808005DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808005E0;
    // 0x808005DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808005E0:
    // 0x808005E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005E8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x808005EC: jr          $ra
    // 0x808005F0: nop

    return;
    // 0x808005F0: nop

;}
RECOMP_FUNC void ncbaspline_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005F4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x808005F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808005FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800600: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x80800604: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800608: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8080060C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80800610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800614: beql        $t6, $at, L_80800784
    if (ctx->r14 == ctx->r1) {
        // 0x80800618: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800784;
    }
    goto skip_0;
    // 0x80800618: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8080061C: lbu         $t7, 0x2C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2C);
    // 0x80800620: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800624: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80800628: bne         $t7, $at, L_80800634
    if (ctx->r15 != ctx->r1) {
        // 0x8080062C: nop
    
            goto L_80800634;
    }
    // 0x8080062C: nop

    // 0x80800630: sb          $t8, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r24;
L_80800634:
    // 0x80800634: jal         0x801107F0
    // 0x80800638: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_801107F0(rdram, ctx);
        goto after_0;
    // 0x80800638: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x8080063C: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x80800640: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800648: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    // 0x8080064C: beq         $t9, $at, L_80800668
    if (ctx->r25 == ctx->r1) {
        // 0x80800650: nop
    
            goto L_80800668;
    }
    // 0x80800650: nop

    // 0x80800654: jal         0x80000318
    // 0x80800658: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_80800318_ncbaspline(rdram, ctx);
        goto after_1;
    // 0x80800658: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x8080065C: bne         $v0, $zero, L_80800670
    if (ctx->r2 != 0) {
        // 0x80800660: nop
    
            goto L_80800670;
    }
    // 0x80800660: nop

    // 0x80800664: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
L_80800668:
    // 0x80800668: b           L_80800780
    // 0x8080066C: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
        goto L_80800780;
    // 0x8080066C: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
L_80800670:
    // 0x80800670: jal         0x80000008
    // 0x80800674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_ncbaspline(rdram, ctx);
        goto after_2;
    // 0x80800674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800678: lw          $t0, 0x44($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X44);
    // 0x8080067C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800680: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80800684: jal         0x800C7A68
    // 0x80800688: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    func_800C7A68(rdram, ctx);
        goto after_3;
    // 0x80800688: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    after_3:
    // 0x8080068C: lw          $t1, 0x44($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X44);
    // 0x80800690: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800694: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800698: lwc1        $f12, 0x18($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X18);
    // 0x8080069C: lui         $a3, 0x3D4C
    ctx->r7 = S32(0X3D4C << 16);
    // 0x808006A0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808006A4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x808006A8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808006AC: bc1fl       L_80800750
    if (!c1cs) {
        // 0x808006B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800750;
    }
    goto skip_1;
    // 0x808006B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808006B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808006B8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(767, 0XA48) << 16);
    // 0x808006BC: lwc1        $f4, 0xA48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(767, 0XA48));
    // 0x808006C0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808006C4: jal         0x800F10B4
    // 0x808006C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x808006C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x808006CC: jal         0x800D8FF8
    // 0x808006D0: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_5;
    // 0x808006D0: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x808006D4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808006D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808006DC: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x808006E0: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x808006E4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x808006E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808006EC: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x808006F0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x808006F4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x808006F8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x808006FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800700: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80800704: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x80800708: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x8080070C: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80800710: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80800714: nop

    // 0x80800718: bc1fl       L_80800750
    if (!c1cs) {
        // 0x8080071C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800750;
    }
    goto skip_2;
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800720: jal         0x800EFB24
    // 0x80800724: addiu       $a2, $v0, 0xC
    ctx->r6 = ADD32(ctx->r2, 0XC);
    func_800EFB24(rdram, ctx);
        goto after_6;
    // 0x80800724: addiu       $a2, $v0, 0xC
    ctx->r6 = ADD32(ctx->r2, 0XC);
    after_6:
    // 0x80800728: lw          $t2, 0x44($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X44);
    // 0x8080072C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800730: jal         0x800EF334
    // 0x80800734: lw          $a1, 0x18($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X18);
    func_800EF334(rdram, ctx);
        goto after_7;
    // 0x80800734: lw          $a1, 0x18($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X18);
    after_7:
    // 0x80800738: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x8080073C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80800740: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x80800744: jal         0x800EE780
    // 0x80800748: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE780(rdram, ctx);
        goto after_8;
    // 0x80800748: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_8:
    // 0x8080074C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800750:
    // 0x80800750: jal         0x80110770
    // 0x80800754: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_80110770(rdram, ctx);
        goto after_9;
    // 0x80800754: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_9:
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080075C: jal         0x80112524
    // 0x80800760: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_80112524(rdram, ctx);
        goto after_10;
    // 0x80800760: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_10:
    // 0x80800764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800768: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8080076C: jal         0x80110A68
    // 0x80800770: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_80110A68(rdram, ctx);
        goto after_11;
    // 0x80800770: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_11:
    // 0x80800774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800778: jal         0x80110790
    // 0x8080077C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80110790(rdram, ctx);
        goto after_12;
    // 0x8080077C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_12:
L_80800780:
    // 0x80800780: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800784:
    // 0x80800784: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800788: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8080078C: jr          $ra
    // 0x80800790: nop

    return;
    // 0x80800790: nop

;}
RECOMP_FUNC void ncbaspline_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800794: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80800798: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8080079C: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x808007A0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x808007A4: lw          $t6, 0x28($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X28);
    // 0x808007A8: beq         $t6, $zero, L_808007B4
    if (ctx->r14 == 0) {
        // 0x808007AC: nop
    
            goto L_808007B4;
    }
    // 0x808007AC: nop

    // 0x808007B0: sw          $t7, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r15;
L_808007B4:
    // 0x808007B4: jr          $ra
    // 0x808007B8: nop

    return;
    // 0x808007B8: nop

;}
RECOMP_FUNC void ncbaspline_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808007C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808007CC: jal         0x800D5424
    // 0x808007D0: lhu         $a0, 0x8($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8);
    func_800D5424(rdram, ctx);
        goto after_0;
    // 0x808007D0: lhu         $a0, 0x8($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8);
    after_0:
    // 0x808007D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808007D8: jal         0x800007F0
    // 0x808007DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ncbaspline_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x808007DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x808007E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007E8: jr          $ra
    // 0x808007EC: nop

    return;
    // 0x808007EC: nop

;}
RECOMP_FUNC void ncbaspline_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007F0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x808007F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808007FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800800: jal         0x80110840
    // 0x80800804: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80800804: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800808: jal         0x800F5C94
    // 0x8080080C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5C94(rdram, ctx);
        goto after_1;
    // 0x8080080C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800810: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800814: beql        $v0, $at, L_80800A08
    if (ctx->r2 == ctx->r1) {
        // 0x80800818: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800A08;
    }
    goto skip_0;
    // 0x80800818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080081C: jal         0x800D542C
    // 0x80800820: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    func_800D542C(rdram, ctx);
        goto after_2;
    // 0x80800820: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    after_2:
    // 0x80800824: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800828: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
    // 0x8080082C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800830: lw          $v1, 0x28($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X28);
    // 0x80800834: beql        $v0, $v1, L_80800A08
    if (ctx->r2 == ctx->r3) {
        // 0x80800838: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800A08;
    }
    goto skip_1;
    // 0x80800838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8080083C: beq         $v1, $at, L_80800A04
    if (ctx->r3 == ctx->r1) {
        // 0x80800840: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A04;
    }
    // 0x80800840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800844: jal         0x801107B0
    // 0x80800848: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_801107B0(rdram, ctx);
        goto after_3;
    // 0x80800848: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_3:
    // 0x8080084C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80800850: jal         0x800EE904
    // 0x80800854: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800EE904(rdram, ctx);
        goto after_4;
    // 0x80800854: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_4:
    // 0x80800858: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8080085C: jal         0x800882E8
    // 0x80800860: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    _gccubesearch_entrypoint_14(rdram, ctx);
        goto after_5;
    // 0x80800860: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_5:
    // 0x80800864: beq         $v0, $zero, L_80800A04
    if (ctx->r2 == 0) {
        // 0x80800868: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800A04;
    }
    // 0x80800868: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080086C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80800870: jal         0x80088C00
    // 0x80800874: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    _gspropctrl_entrypoint_11(rdram, ctx);
        goto after_6;
    // 0x80800874: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_6:
    // 0x80800878: jal         0x80088C10
    // 0x8080087C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _gspropctrl_entrypoint_13(rdram, ctx);
        goto after_7;
    // 0x8080087C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x80800880: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800884: beq         $v0, $at, L_808008B0
    if (ctx->r2 == ctx->r1) {
        // 0x80800888: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808008B0;
    }
    // 0x80800888: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080088C: beq         $v0, $at, L_808008C8
    if (ctx->r2 == ctx->r1) {
        // 0x80800890: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808008C8;
    }
    // 0x80800890: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800894: beql        $v0, $at, L_808008E4
    if (ctx->r2 == ctx->r1) {
        // 0x80800898: lw          $t6, 0x44($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X44);
            goto L_808008E4;
    }
    goto skip_2;
    // 0x80800898: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
    skip_2:
    // 0x8080089C: lw          $t7, 0x44($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X44);
    // 0x808008A0: sb          $zero, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = 0;
    // 0x808008A4: lw          $t8, 0x44($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X44);
    // 0x808008A8: b           L_808008F8
    // 0x808008AC: sb          $zero, 0x2F($t8)
    MEM_B(0X2F, ctx->r24) = 0;
        goto L_808008F8;
    // 0x808008AC: sb          $zero, 0x2F($t8)
    MEM_B(0X2F, ctx->r24) = 0;
L_808008B0:
    // 0x808008B0: lw          $t0, 0x44($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X44);
    // 0x808008B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x808008B8: sb          $t9, 0x2E($t0)
    MEM_B(0X2E, ctx->r8) = ctx->r25;
    // 0x808008BC: lw          $t1, 0x44($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X44);
    // 0x808008C0: b           L_808008F8
    // 0x808008C4: sb          $zero, 0x2F($t1)
    MEM_B(0X2F, ctx->r9) = 0;
        goto L_808008F8;
    // 0x808008C4: sb          $zero, 0x2F($t1)
    MEM_B(0X2F, ctx->r9) = 0;
L_808008C8:
    // 0x808008C8: lw          $t2, 0x44($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X44);
    // 0x808008CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x808008D0: sb          $zero, 0x2E($t2)
    MEM_B(0X2E, ctx->r10) = 0;
    // 0x808008D4: lw          $t4, 0x44($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X44);
    // 0x808008D8: b           L_808008F8
    // 0x808008DC: sb          $t3, 0x2F($t4)
    MEM_B(0X2F, ctx->r12) = ctx->r11;
        goto L_808008F8;
    // 0x808008DC: sb          $t3, 0x2F($t4)
    MEM_B(0X2F, ctx->r12) = ctx->r11;
    // 0x808008E0: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
L_808008E4:
    // 0x808008E4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x808008E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808008EC: sb          $t5, 0x2E($t6)
    MEM_B(0X2E, ctx->r14) = ctx->r13;
    // 0x808008F0: lw          $t8, 0x44($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X44);
    // 0x808008F4: sb          $t7, 0x2F($t8)
    MEM_B(0X2F, ctx->r24) = ctx->r15;
L_808008F8:
    // 0x808008F8: jal         0x801106A0
    // 0x808008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801106A0(rdram, ctx);
        goto after_8;
    // 0x808008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800900: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800908: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8080090C: jal         0x801107F0
    // 0x80800910: sb          $v0, 0x2D($t9)
    MEM_B(0X2D, ctx->r25) = ctx->r2;
    func_801107F0(rdram, ctx);
        goto after_9;
    // 0x80800910: sb          $v0, 0x2D($t9)
    MEM_B(0X2D, ctx->r25) = ctx->r2;
    after_9:
    // 0x80800914: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80800918: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8080091C: jal         0x800EE7F8
    // 0x80800920: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_10;
    // 0x80800920: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_10:
    // 0x80800924: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800928: lw          $t0, 0x44($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X44);
    // 0x8080092C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80800930: swc1        $f4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f4.u32l;
    // 0x80800934: lw          $t2, 0x44($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X44);
    // 0x80800938: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8080093C: jal         0x80088498
    // 0x80800940: sw          $t1, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->r9;
    _glsplinefind_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x80800940: sw          $t1, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->r9;
    after_11:
    // 0x80800944: lw          $t3, 0x44($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X44);
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080094C: jal         0x80000008
    // 0x80800950: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    func_80800008_ncbaspline(rdram, ctx);
        goto after_12;
    // 0x80800950: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    after_12:
    // 0x80800954: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800958: jal         0x800C82CC
    // 0x8080095C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800C82CC(rdram, ctx);
        goto after_13;
    // 0x8080095C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_13:
    // 0x80800960: lw          $t4, 0x44($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X44);
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800968: jal         0x80000008
    // 0x8080096C: swc1        $f0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f0.u32l;
    func_80800008_ncbaspline(rdram, ctx);
        goto after_14;
    // 0x8080096C: swc1        $f0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f0.u32l;
    after_14:
    // 0x80800970: lw          $t5, 0x44($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X44);
    // 0x80800974: lui         $a3, 0x2
    ctx->r7 = S32(0X2 << 16);
    // 0x80800978: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x8080097C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800980: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80800984: jal         0x800FB1EC
    // 0x80800988: lw          $a1, 0x8($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X8);
    func_800FB1EC(rdram, ctx);
        goto after_15;
    // 0x80800988: lw          $a1, 0x8($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X8);
    after_15:
    // 0x8080098C: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
    // 0x80800990: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800998: swc1        $f0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f0.u32l;
    // 0x8080099C: lw          $t8, 0x44($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X44);
    // 0x808009A0: jal         0x80000008
    // 0x808009A4: sb          $t7, 0x2C($t8)
    MEM_B(0X2C, ctx->r24) = ctx->r15;
    func_80800008_ncbaspline(rdram, ctx);
        goto after_16;
    // 0x808009A4: sb          $t7, 0x2C($t8)
    MEM_B(0X2C, ctx->r24) = ctx->r15;
    after_16:
    // 0x808009A8: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x808009AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808009B0: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x808009B4: jal         0x800C7A68
    // 0x808009B8: addiu       $a2, $v1, 0x1C
    ctx->r6 = ADD32(ctx->r3, 0X1C);
    func_800C7A68(rdram, ctx);
        goto after_17;
    // 0x808009B8: addiu       $a2, $v1, 0x1C
    ctx->r6 = ADD32(ctx->r3, 0X1C);
    after_17:
    // 0x808009BC: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x808009C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009C4: jal         0x80000318
    // 0x808009C8: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    func_80800318_ncbaspline(rdram, ctx);
        goto after_18;
    // 0x808009C8: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    after_18:
    // 0x808009CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808009D0: bne         $v0, $at, L_808009FC
    if (ctx->r2 != ctx->r1) {
        // 0x808009D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009FC;
    }
    // 0x808009D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009D8: jal         0x801106A8
    // 0x808009DC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_801106A8(rdram, ctx);
        goto after_19;
    // 0x808009DC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_19:
    // 0x808009E0: jal         0x80110840
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110840(rdram, ctx);
        goto after_20;
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x808009E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808009EC: jal         0x800F7E9C
    // 0x808009F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800F7E9C(rdram, ctx);
        goto after_21;
    // 0x808009F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x808009F4: b           L_80800A08
    // 0x808009F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800A08;
    // 0x808009F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808009FC:
    // 0x808009FC: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x80800A00: sw          $zero, 0x28($t9)
    MEM_W(0X28, ctx->r25) = 0;
L_80800A04:
    // 0x80800A04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800A08:
    // 0x80800A08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800A10: jr          $ra
    // 0x80800A14: nop

    return;
    // 0x80800A14: nop

;}
RECOMP_FUNC void ncbaspline_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A18: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x80800A1C: lw          $v0, 0x28($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X28);
    // 0x80800A20: slti        $t7, $v0, 0x1
    ctx->r15 = SIGNED(ctx->r2) < 0X1 ? 1 : 0;
    // 0x80800A24: jr          $ra
    // 0x80800A28: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x80800A28: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80800A2C: nop

;}
RECOMP_FUNC void ncbastring_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
;}
RECOMP_FUNC void func_80800008_ncbastring(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x80112524
    // 0x80800014: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800014: nop

    after_0:
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080001C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800020: jr          $ra
    // 0x80800024: nop

    return;
    // 0x80800024: nop

;}
RECOMP_FUNC void ncbastring_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080002C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800030: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800034: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80800038: jal         0x80111B8C
    // 0x8080003C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_0;
    // 0x8080003C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_0:
    // 0x80800040: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800044: jal         0x801124D0
    // 0x80800048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_1;
    // 0x80800048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8080004C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800050: jal         0x80115858
    // 0x80800054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80115858(rdram, ctx);
        goto after_2;
    // 0x80800054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800058: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080005C: jal         0x80115870
    // 0x80800060: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_80115870(rdram, ctx);
        goto after_3;
    // 0x80800060: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_3:
    // 0x80800064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080006C: jr          $ra
    // 0x80800070: nop

    return;
    // 0x80800070: nop

;}
RECOMP_FUNC void ncbastring_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800074: jr          $ra
    // 0x80800078: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800078: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8080007C_ncbastring(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080007C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800084: jal         0x80112550
    // 0x80800088: nop

    func_80112550(rdram, ctx);
        goto after_0;
    // 0x80800088: nop

    after_0:
    // 0x8080008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

;}
RECOMP_FUNC void ncbastring_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x808000A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000AC: jal         0x8000007C
    // 0x808000B0: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_8080007C_ncbastring(rdram, ctx);
        goto after_0;
    // 0x808000B0: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_0:
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: jal         0x801107F0
    // 0x808000BC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x808000BC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x808000C0: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x808000C4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x808000C8: beq         $t7, $zero, L_808000E4
    if (ctx->r15 == 0) {
        // 0x808000CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000E4;
    }
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D0: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x808000D4: jal         0x80089468
    // 0x808000D8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    _ncbawaypoint_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808000D8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_2:
    // 0x808000DC: b           L_808000F0
    // 0x808000E0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
        goto L_808000F0;
    // 0x808000E0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
L_808000E4:
    // 0x808000E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808000E8: nop

    // 0x808000EC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
L_808000F0:
    // 0x808000F0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x808000F4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x808000F8: jal         0x800EFB24
    // 0x808000FC: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x808000FC: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_3:
    // 0x80800100: jal         0x800EEF94
    // 0x80800104: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_800EEF94(rdram, ctx);
        goto after_4;
    // 0x80800104: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x80800108: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8080010C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80800110: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800114: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80800118: jal         0x800F1A88
    // 0x8080011C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_800F1A88(rdram, ctx);
        goto after_5;
    // 0x8080011C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80800120: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800124: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80800128: nop

    // 0x8080012C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80800130: nop

    // 0x80800134: bc1f        L_80800148
    if (!c1cs) {
        // 0x80800138: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800148;
    }
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800140: jal         0x80113978
    // 0x80800144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80113978(rdram, ctx);
        goto after_6;
    // 0x80800144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_80800148:
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: jal         0x80115358
    // 0x80800150: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80115358(rdram, ctx);
        goto after_7;
    // 0x80800150: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800158: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8080015C: jal         0x80115750
    // 0x80800160: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_80115750(rdram, ctx);
        goto after_8;
    // 0x80800160: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x80800164: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080016C: jal         0x80112C3C
    // 0x80800170: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80112C3C(rdram, ctx);
        goto after_9;
    // 0x80800170: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_9:
    // 0x80800174: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800178: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8080017C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800180: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80800184: sub.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x80800188: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8080018C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800190: jal         0x800EEBF0
    // 0x80800194: nop

    func_800EEBF0(rdram, ctx);
        goto after_10;
    // 0x80800194: nop

    after_10:
    // 0x80800198: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8080019C: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x808001A0: jal         0x800EE780
    // 0x808001A4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_800EE780(rdram, ctx);
        goto after_11;
    // 0x808001A4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_11:
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001AC: jal         0x80111CC8
    // 0x808001B0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_80111CC8(rdram, ctx);
        goto after_12;
    // 0x808001B0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_12:
    // 0x808001B4: beql        $v0, $zero, L_80800260
    if (ctx->r2 == 0) {
        // 0x808001B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800260;
    }
    goto skip_0;
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808001BC: jal         0x801138A0
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_13;
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808001C4: bne         $v0, $zero, L_80800244
    if (ctx->r2 != 0) {
        // 0x808001C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800244;
    }
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001CC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x808001D0: jal         0x80115444
    // 0x808001D4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_80115444(rdram, ctx);
        goto after_14;
    // 0x808001D4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_14:
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: jal         0x801107F0
    // 0x808001E0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_801107F0(rdram, ctx);
        goto after_15;
    // 0x808001E0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_15:
    // 0x808001E4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x808001E8: jal         0x800EEAD4
    // 0x808001EC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800EEAD4(rdram, ctx);
        goto after_16;
    // 0x808001EC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_16:
    // 0x808001F0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x808001F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808001F8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808001FC: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800200: mul.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800204: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80800208: nop

    // 0x8080020C: bc1fl       L_80800260
    if (!c1cs) {
        // 0x80800210: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800260;
    }
    goto skip_1;
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800214: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80800218: nop

    // 0x8080021C: bc1fl       L_80800260
    if (!c1cs) {
        // 0x80800220: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800260;
    }
    goto skip_2;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800224: jal         0x801138F4
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_17;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8080022C: beql        $v0, $zero, L_80800260
    if (ctx->r2 == 0) {
        // 0x80800230: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800260;
    }
    goto skip_3;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800234: jal         0x80110F44
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_18;
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8080023C: b           L_80800260
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800260;
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800244:
    // 0x80800244: jal         0x801138F4
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_19;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8080024C: beql        $v0, $zero, L_80800260
    if (ctx->r2 == 0) {
        // 0x80800250: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800260;
    }
    goto skip_4;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x80800254: jal         0x80110F44
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_20;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800260:
    // 0x80800260: jal         0x80000008
    // 0x80800264: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_80800008_ncbastring(rdram, ctx);
        goto after_21;
    // 0x80800264: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_21:
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080026C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80800270: jal         0x80110A68
    // 0x80800274: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_80110A68(rdram, ctx);
        goto after_22;
    // 0x80800274: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_22:
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: jal         0x80110790
    // 0x80800280: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_80110790(rdram, ctx);
        goto after_23;
    // 0x80800280: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_23:
    // 0x80800284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800288: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080028C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80800290: jr          $ra
    // 0x80800294: nop

    return;
    // 0x80800294: nop

;}
RECOMP_FUNC void ncbastring_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800298: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8080029C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002A8: jal         0x8000007C
    // 0x808002AC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_8080007C_ncbastring(rdram, ctx);
        goto after_0;
    // 0x808002AC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B4: jal         0x801107F0
    // 0x808002B8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x808002B8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x808002BC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808002C0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x808002C4: jal         0x800EFB24
    // 0x808002C8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x808002C8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_2:
    // 0x808002CC: jal         0x800EEF94
    // 0x808002D0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x808002D0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x808002D4: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002DC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x808002E0: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x808002E4: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x808002E8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x808002EC: jal         0x80115444
    // 0x808002F0: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    func_80115444(rdram, ctx);
        goto after_4;
    // 0x808002F0: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    after_4:
    // 0x808002F4: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x808002F8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808002FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80800300: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800304: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800308: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8080030C: nop

    // 0x80800310: bc1fl       L_80800330
    if (!c1cs) {
        // 0x80800314: lwc1        $f16, 0x4($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80800330;
    }
    goto skip_0;
    // 0x80800314: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x80800318: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
    // 0x8080031C: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x80800320: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800324: b           L_8080035C
    // 0x80800328: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
        goto L_8080035C;
    // 0x80800328: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
    // 0x8080032C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
L_80800330:
    // 0x80800330: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80800334: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80800338: nop

    // 0x8080033C: bc1fl       L_8080035C
    if (!c1cs) {
        // 0x80800340: sb          $zero, 0x8($v0)
        MEM_B(0X8, ctx->r2) = 0;
            goto L_8080035C;
    }
    goto skip_1;
    // 0x80800340: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    skip_1:
    // 0x80800344: sb          $t0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r8;
    // 0x80800348: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x8080034C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800350: b           L_8080035C
    // 0x80800354: swc1        $f18, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f18.u32l;
        goto L_8080035C;
    // 0x80800354: swc1        $f18, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f18.u32l;
    // 0x80800358: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
L_8080035C:
    // 0x8080035C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800360: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800364: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800368: jr          $ra
    // 0x8080036C: nop

    return;
    // 0x8080036C: nop

;}
RECOMP_FUNC void ncbasub_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbasub_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800014: jal         0x801124D0
    // 0x80800018: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_0;
    // 0x80800018: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8080001C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800020: jal         0x80115858
    // 0x80800024: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80115858(rdram, ctx);
        goto after_1;
    // 0x80800024: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080002C: jal         0x80115870
    // 0x80800030: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80115870(rdram, ctx);
        goto after_2;
    // 0x80800030: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080003C: jr          $ra
    // 0x80800040: nop

    return;
    // 0x80800040: nop

;}
RECOMP_FUNC void ncbasub_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800044: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80800048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080004C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800050: jal         0x80110840
    // 0x80800054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80110840(rdram, ctx);
        goto after_0;
    // 0x80800054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800058: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x8080005C: jal         0x800F5E7C
    // 0x80800060: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5E7C(rdram, ctx);
        goto after_1;
    // 0x80800060: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800064: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800068: jal         0x800F5F7C
    // 0x8080006C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800F5F7C(rdram, ctx);
        goto after_2;
    // 0x8080006C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_2:
    // 0x80800070: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800074: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80800078: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080007C: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80800080: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800088: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x8080008C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80800090: nop

    // 0x80800094: bc1f        L_808000A0
    if (!c1cs) {
        // 0x80800098: nop
    
            goto L_808000A0;
    }
    // 0x80800098: nop

    // 0x8080009C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_808000A0:
    // 0x808000A0: jal         0x80112524
    // 0x808000A4: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    func_80112524(rdram, ctx);
        goto after_3;
    // 0x808000A4: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    after_3:
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000AC: jal         0x801107F0
    // 0x808000B0: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    func_801107F0(rdram, ctx);
        goto after_4;
    // 0x808000B0: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_4:
    // 0x808000B4: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x808000B8: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x808000BC: jal         0x800EFB24
    // 0x808000C0: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    func_800EFB24(rdram, ctx);
        goto after_5;
    // 0x808000C0: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    after_5:
    // 0x808000C4: jal         0x800EEF94
    // 0x808000C8: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    func_800EEF94(rdram, ctx);
        goto after_6;
    // 0x808000C8: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    after_6:
    // 0x808000CC: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x808000D0: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x808000D4: jal         0x800F1A88
    // 0x808000D8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_800F1A88(rdram, ctx);
        goto after_7;
    // 0x808000D8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_7:
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000E4: jal         0x80113978
    // 0x808000E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80113978(rdram, ctx);
        goto after_8;
    // 0x808000E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F0: jal         0x80115358
    // 0x808000F4: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    func_80115358(rdram, ctx);
        goto after_9;
    // 0x808000F4: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_9:
    // 0x808000F8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x808000FC: jal         0x80110840
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110840(rdram, ctx);
        goto after_10;
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800104: jal         0x800F53D0
    // 0x80800108: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_11;
    // 0x80800108: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_11:
    // 0x8080010C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800114: jal         0x80110818
    // 0x80800118: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80110818(rdram, ctx);
        goto after_12;
    // 0x80800118: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_12:
    // 0x8080011C: jal         0x80084F00
    // 0x80800120: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    _bamovethrust_entrypoint_6(rdram, ctx);
        goto after_13;
    // 0x80800120: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_13:
    // 0x80800124: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80800128: jal         0x8009BFCC
    // 0x8080012C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_8009BFCC(rdram, ctx);
        goto after_14;
    // 0x8080012C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_14:
    // 0x80800130: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800134: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800138: jal         0x800F1DCC
    // 0x8080013C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_15;
    // 0x8080013C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_15:
    // 0x80800140: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80800144: jal         0x8009C984
    // 0x80800148: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_8009C984(rdram, ctx);
        goto after_16;
    // 0x80800148: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_16:
    // 0x8080014C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800150: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800158: sub.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8080015C: jal         0x80013728
    // 0x80800160: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    func_80013728(rdram, ctx);
        goto after_17;
    // 0x80800160: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_17:
    // 0x80800164: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80800168: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080016C: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800170: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800174: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80800178: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8080017C: sub.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80800180: bc1f        L_80800194
    if (!c1cs) {
        // 0x80800184: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80800194;
    }
    // 0x80800184: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800188: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080018C: b           L_808001BC
    // 0x80800190: sub.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f0.fl;
        goto L_808001BC;
    // 0x80800190: sub.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f0.fl;
L_80800194:
    // 0x80800194: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x80800198: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080019C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x808001A0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x808001A4: nop

    // 0x808001A8: bc1f        L_808001BC
    if (!c1cs) {
        // 0x808001AC: nop
    
            goto L_808001BC;
    }
    // 0x808001AC: nop

    // 0x808001B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808001B4: nop

    // 0x808001B8: sub.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f0.fl;
L_808001BC:
    // 0x808001BC: jal         0x80013728
    // 0x808001C0: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    func_80013728(rdram, ctx);
        goto after_18;
    // 0x808001C0: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_18:
    // 0x808001C4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808001C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808001CC: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808001D0: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808001D4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x808001D8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E0: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x808001E4: bc1f        L_808001F8
    if (!c1cs) {
        // 0x808001E8: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_808001F8;
    }
    // 0x808001E8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808001EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808001F0: b           L_80800220
    // 0x808001F4: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
        goto L_80800220;
    // 0x808001F4: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
L_808001F8:
    // 0x808001F8: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x808001FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800200: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80800204: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80800208: nop

    // 0x8080020C: bc1f        L_80800220
    if (!c1cs) {
        // 0x80800210: nop
    
            goto L_80800220;
    }
    // 0x80800210: nop

    // 0x80800214: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800218: nop

    // 0x8080021C: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
L_80800220:
    // 0x80800220: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(769, 0X320) << 16);
    // 0x80800224: lwc1        $f4, 0x320($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(769, 0X320));
    // 0x80800228: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8080022C: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80800230: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80800234: nop

    // 0x80800238: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8080023C: bne         $t7, $zero, L_80800254
    if (ctx->r15 != 0) {
        // 0x80800240: sub.s       $f12, $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
            goto L_80800254;
    }
    // 0x80800240: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80800244: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80800248: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8080024C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80800250: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
L_80800254:
    // 0x80800254: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800258: jal         0x80115750
    // 0x8080025C: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    func_80115750(rdram, ctx);
        goto after_19;
    // 0x8080025C: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    after_19:
    // 0x80800260: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800268: jal         0x80112C3C
    // 0x8080026C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    func_80112C3C(rdram, ctx);
        goto after_20;
    // 0x8080026C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_20:
    // 0x80800270: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x80800274: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x80800278: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8080027C: jal         0x800EEBF0
    // 0x80800280: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    func_800EEBF0(rdram, ctx);
        goto after_21;
    // 0x80800280: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    after_21:
    // 0x80800284: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x80800288: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x8080028C: jal         0x800EE780
    // 0x80800290: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    func_800EE780(rdram, ctx);
        goto after_22;
    // 0x80800290: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_22:
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800298: jal         0x80111CC8
    // 0x8080029C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    func_80111CC8(rdram, ctx);
        goto after_23;
    // 0x8080029C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_23:
    // 0x808002A0: beql        $v0, $zero, L_808002D4
    if (ctx->r2 == 0) {
        // 0x808002A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002D4;
    }
    goto skip_0;
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808002A8: jal         0x801138A0
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_24;
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x808002B0: bne         $v0, $zero, L_808002C8
    if (ctx->r2 != 0) {
        // 0x808002B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002C8;
    }
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B8: jal         0x80115580
    // 0x808002BC: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_80115580(rdram, ctx);
        goto after_25;
    // 0x808002BC: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_25:
    // 0x808002C0: beql        $v0, $zero, L_808002D4
    if (ctx->r2 == 0) {
        // 0x808002C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002D4;
    }
    goto skip_1;
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_808002C8:
    // 0x808002C8: jal         0x801138F4
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_26;
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002D4:
    // 0x808002D4: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x808002D8: jal         0x80110A68
    // 0x808002DC: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    func_80110A68(rdram, ctx);
        goto after_27;
    // 0x808002DC: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    after_27:
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E4: jal         0x80110790
    // 0x808002E8: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_80110790(rdram, ctx);
        goto after_28;
    // 0x808002E8: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_28:
    // 0x808002EC: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x808002F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808002F4: beq         $t8, $zero, L_80800304
    if (ctx->r24 == 0) {
        // 0x808002F8: nop
    
            goto L_80800304;
    }
    // 0x808002F8: nop

    // 0x808002FC: b           L_80800304
    // 0x80800300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80800304;
    // 0x80800300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80800304:
    // 0x80800304: jal         0x80115858
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80115858(rdram, ctx);
        goto after_29;
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x8080030C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800310: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800314: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x80800318: jr          $ra
    // 0x8080031C: nop

    return;
    // 0x8080031C: nop

;}
RECOMP_FUNC void func_80800000_ncbasuck(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x80112524
    // 0x8080000C: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x8080000C: nop

    after_0:
    // 0x80800010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800018: jr          $ra
    // 0x8080001C: nop

    return;
    // 0x8080001C: nop

;}
RECOMP_FUNC void func_80800020_ncbasuck(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800028: jal         0x80112524
    // 0x8080002C: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x8080002C: nop

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
RECOMP_FUNC void ncbasuck_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080004C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80800050: jal         0x80111B8C
    // 0x80800054: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_0;
    // 0x80800054: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_0:
    // 0x80800058: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080005C: jal         0x801124D0
    // 0x80800060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_1;
    // 0x80800060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800064: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800068: jal         0x80115858
    // 0x8080006C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80115858(rdram, ctx);
        goto after_2;
    // 0x8080006C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800070: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800074: jal         0x80115870
    // 0x80800078: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80115870(rdram, ctx);
        goto after_3;
    // 0x80800078: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x8080007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800084: jr          $ra
    // 0x80800088: nop

    return;
    // 0x80800088: nop

;}
RECOMP_FUNC void ncbasuck_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080008C: jr          $ra
    // 0x80800090: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800090: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80800094_ncbasuck(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800098: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080009C: jal         0x80110840
    // 0x808000A0: nop

    func_80110840(rdram, ctx);
        goto after_0;
    // 0x808000A0: nop

    after_0:
    // 0x808000A4: jal         0x800F53D0
    // 0x808000A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x808000A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808000AC: jal         0x80092BC4
    // 0x808000B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80092BC4(rdram, ctx);
        goto after_2;
    // 0x808000B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x808000B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000BC: jr          $ra
    // 0x808000C0: nop

    return;
    // 0x808000C0: nop

;}
RECOMP_FUNC void func_808000C4_ncbasuck(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000CC: jal         0x80110840
    // 0x808000D0: nop

    func_80110840(rdram, ctx);
        goto after_0;
    // 0x808000D0: nop

    after_0:
    // 0x808000D4: jal         0x800F53D0
    // 0x808000D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x808000D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808000DC: jal         0x80092BD0
    // 0x808000E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80092BD0(rdram, ctx);
        goto after_2;
    // 0x808000E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x808000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000EC: jr          $ra
    // 0x808000F0: nop

    return;
    // 0x808000F0: nop

;}
RECOMP_FUNC void ncbasuck_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x808000F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800100: jal         0x80000094
    // 0x80800104: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800094_ncbasuck(rdram, ctx);
        goto after_0;
    // 0x80800104: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800108: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800110: jal         0x80000020
    // 0x80800114: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_80800020_ncbasuck(rdram, ctx);
        goto after_1;
    // 0x80800114: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_1:
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: jal         0x801107F0
    // 0x80800120: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_801107F0(rdram, ctx);
        goto after_2;
    // 0x80800120: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x80800124: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800128: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8080012C: jal         0x800EFB24
    // 0x80800130: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x80800130: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_3:
    // 0x80800134: jal         0x800EEF94
    // 0x80800138: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_800EEF94(rdram, ctx);
        goto after_4;
    // 0x80800138: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_4:
    // 0x8080013C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800140: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80800144: jal         0x800F1A88
    // 0x80800148: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800F1A88(rdram, ctx);
        goto after_5;
    // 0x80800148: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x8080014C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80800150: bne         $t6, $zero, L_80800164
    if (ctx->r14 != 0) {
        // 0x80800154: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800164;
    }
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080015C: jal         0x80113978
    // 0x80800160: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80113978(rdram, ctx);
        goto after_6;
    // 0x80800160: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_80800164:
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: jal         0x80115358
    // 0x8080016C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80115358(rdram, ctx);
        goto after_7;
    // 0x8080016C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x80800170: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800178: jal         0x80115750
    // 0x8080017C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80115750(rdram, ctx);
        goto after_8;
    // 0x8080017C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_8:
    // 0x80800180: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800188: jal         0x80112C3C
    // 0x8080018C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80112C3C(rdram, ctx);
        goto after_9;
    // 0x8080018C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_9:
    // 0x80800190: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800198: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    // 0x8080019C: jal         0x80115828
    // 0x808001A0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    func_80115828(rdram, ctx);
        goto after_10;
    // 0x808001A0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    after_10:
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: jal         0x80115750
    // 0x808001AC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80115750(rdram, ctx);
        goto after_11;
    // 0x808001AC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_11:
    // 0x808001B0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x808001B4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808001B8: beql        $t7, $zero, L_80800204
    if (ctx->r15 == 0) {
        // 0x808001BC: addiu       $a0, $sp, 0x50
        ctx->r4 = ADD32(ctx->r29, 0X50);
            goto L_80800204;
    }
    goto skip_0;
    // 0x808001BC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    skip_0:
    // 0x808001C0: jal         0x800000C4
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C4_ncbasuck(rdram, ctx);
        goto after_12;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808001C8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x808001CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x808001D8: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x808001DC: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x808001E0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x808001E4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x808001E8: jal         0x80112D08
    // 0x808001EC: nop

    func_80112D08(rdram, ctx);
        goto after_13;
    // 0x808001EC: nop

    after_13:
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F4: jal         0x80112C3C
    // 0x808001F8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80112C3C(rdram, ctx);
        goto after_14;
    // 0x808001F8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_14:
    // 0x808001FC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800200: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_80800204:
    // 0x80800204: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800208: jal         0x800EEBF0
    // 0x8080020C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_800EEBF0(rdram, ctx);
        goto after_15;
    // 0x8080020C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_15:
    // 0x80800210: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80800214: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80800218: jal         0x800EE780
    // 0x8080021C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_800EE780(rdram, ctx);
        goto after_16;
    // 0x8080021C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_16:
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800224: jal         0x80111CC8
    // 0x80800228: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80111CC8(rdram, ctx);
        goto after_17;
    // 0x80800228: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_17:
    // 0x8080022C: beql        $v0, $zero, L_80800270
    if (ctx->r2 == 0) {
        // 0x80800230: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800270;
    }
    goto skip_1;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800234: jal         0x801138A0
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_18;
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8080023C: bne         $v0, $zero, L_80800254
    if (ctx->r2 != 0) {
        // 0x80800240: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800254;
    }
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: jal         0x80115580
    // 0x80800248: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_80115580(rdram, ctx);
        goto after_19;
    // 0x80800248: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_19:
    // 0x8080024C: beql        $v0, $zero, L_80800270
    if (ctx->r2 == 0) {
        // 0x80800250: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800270;
    }
    goto skip_2;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
L_80800254:
    // 0x80800254: jal         0x801138F4
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_20;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8080025C: beql        $v0, $zero, L_80800270
    if (ctx->r2 == 0) {
        // 0x80800260: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800270;
    }
    goto skip_3;
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800264: jal         0x80110F44
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_21;
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800270:
    // 0x80800270: jal         0x80000000
    // 0x80800274: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_80800000_ncbasuck(rdram, ctx);
        goto after_22;
    // 0x80800274: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_22:
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80800280: jal         0x80110A68
    // 0x80800284: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_80110A68(rdram, ctx);
        goto after_23;
    // 0x80800284: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_23:
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080028C: jal         0x80110790
    // 0x80800290: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80110790(rdram, ctx);
        goto after_24;
    // 0x80800290: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_24:
    // 0x80800294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800298: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080029C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x808002A0: jr          $ra
    // 0x808002A4: nop

    return;
    // 0x808002A4: nop

    // 0x808002A8: nop

    // 0x808002AC: nop

;}
RECOMP_FUNC void ncbaswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void ncbaswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: jr          $ra
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbaswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800018: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080001C: jal         0x801124D0
    // 0x80800020: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_0;
    // 0x80800020: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800024: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800028: jal         0x80115858
    // 0x8080002C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80115858(rdram, ctx);
        goto after_1;
    // 0x8080002C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800030: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800034: jal         0x80115870
    // 0x80800038: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80115870(rdram, ctx);
        goto after_2;
    // 0x80800038: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x8080003C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800044: jr          $ra
    // 0x80800048: nop

    return;
    // 0x80800048: nop

;}
RECOMP_FUNC void ncbaswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080004C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80800050: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800054: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800058: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080005C: jal         0x80112524
    // 0x80800060: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800060: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_0:
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800068: jal         0x801107F0
    // 0x8080006C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    func_801107F0(rdram, ctx);
        goto after_1;
    // 0x8080006C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_1:
    // 0x80800070: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x80800074: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80800078: beq         $t7, $zero, L_80800094
    if (ctx->r15 == 0) {
        // 0x8080007C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800094;
    }
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800080: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80800084: jal         0x80089468
    // 0x80800088: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    _ncbawaypoint_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80800088: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_2:
    // 0x8080008C: b           L_808000A0
    // 0x80800090: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
        goto L_808000A0;
    // 0x80800090: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
L_80800094:
    // 0x80800094: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800098: nop

    // 0x8080009C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
L_808000A0:
    // 0x808000A0: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x808000A4: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x808000A8: jal         0x800EFB24
    // 0x808000AC: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    func_800EFB24(rdram, ctx);
        goto after_3;
    // 0x808000AC: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    after_3:
    // 0x808000B0: jal         0x800EEF94
    // 0x808000B4: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    func_800EEF94(rdram, ctx);
        goto after_4;
    // 0x808000B4: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    after_4:
    // 0x808000B8: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x808000BC: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x808000C0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x808000C4: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x808000C8: jal         0x800F1A88
    // 0x808000CC: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    func_800F1A88(rdram, ctx);
        goto after_5;
    // 0x808000CC: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000D8: jal         0x80113978
    // 0x808000DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80113978(rdram, ctx);
        goto after_6;
    // 0x808000DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x808000E0: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x808000EC: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x808000F0: jal         0x80115358
    // 0x808000F4: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    func_80115358(rdram, ctx);
        goto after_7;
    // 0x808000F4: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    after_7:
    // 0x808000F8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x808000FC: jal         0x80110840
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110840(rdram, ctx);
        goto after_8;
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800104: jal         0x800F53D0
    // 0x80800108: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_9;
    // 0x80800108: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x8080010C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800114: jal         0x80110818
    // 0x80800118: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80110818(rdram, ctx);
        goto after_10;
    // 0x80800118: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_10:
    // 0x8080011C: jal         0x800852D8
    // 0x80800120: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    _baswim_entrypoint_14(rdram, ctx);
        goto after_11;
    // 0x80800120: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_11:
    // 0x80800124: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80800128: jal         0x8009BFCC
    // 0x8080012C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_8009BFCC(rdram, ctx);
        goto after_12;
    // 0x8080012C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_12:
    // 0x80800130: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800134: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800138: jal         0x800F1DCC
    // 0x8080013C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_13;
    // 0x8080013C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_13:
    // 0x80800140: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80800144: jal         0x8009C984
    // 0x80800148: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_8009C984(rdram, ctx);
        goto after_14;
    // 0x80800148: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_14:
    // 0x8080014C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800150: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800154: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800158: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8080015C: jal         0x80013728
    // 0x80800160: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    func_80013728(rdram, ctx);
        goto after_15;
    // 0x80800160: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    after_15:
    // 0x80800164: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80800168: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080016C: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800170: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800174: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800178: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8080017C: sub.s       $f12, $f16, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x80800180: bc1f        L_80800194
    if (!c1cs) {
        // 0x80800184: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80800194;
    }
    // 0x80800184: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800188: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080018C: b           L_808001BC
    // 0x80800190: sub.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f0.fl;
        goto L_808001BC;
    // 0x80800190: sub.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f0.fl;
L_80800194:
    // 0x80800194: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x80800198: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080019C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x808001A0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x808001A4: nop

    // 0x808001A8: bc1f        L_808001BC
    if (!c1cs) {
        // 0x808001AC: nop
    
            goto L_808001BC;
    }
    // 0x808001AC: nop

    // 0x808001B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808001B4: nop

    // 0x808001B8: sub.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f0.fl;
L_808001BC:
    // 0x808001BC: jal         0x80013728
    // 0x808001C0: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    func_80013728(rdram, ctx);
        goto after_16;
    // 0x808001C0: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_16:
    // 0x808001C4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808001C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808001CC: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808001D0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808001D4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x808001D8: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x808001DC: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808001E0: bc1fl       L_808001FC
    if (!c1cs) {
        // 0x808001E4: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_808001FC;
    }
    goto skip_0;
    // 0x808001E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_0:
    // 0x808001E8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808001EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808001F0: b           L_8080021C
    // 0x808001F4: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
        goto L_8080021C;
    // 0x808001F4: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x808001F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_808001FC:
    // 0x808001FC: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80800200: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80800204: nop

    // 0x80800208: bc1fl       L_80800220
    if (!c1cs) {
        // 0x8080020C: lui         $at, 0x4461
        ctx->r1 = S32(0X4461 << 16);
            goto L_80800220;
    }
    goto skip_1;
    // 0x8080020C: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    skip_1:
    // 0x80800210: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800214: nop

    // 0x80800218: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
L_8080021C:
    // 0x8080021C: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
L_80800220:
    // 0x80800220: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800224: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(771, 0X360) << 16);
    // 0x80800228: lwc1        $f4, 0x360($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(771, 0X360));
    // 0x8080022C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80800230: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80800234: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80800240: nop

    // 0x80800244: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80800248: nop

    // 0x8080024C: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80800250: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80800254: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80800258: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8080025C: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x80800260: jal         0x80115750
    // 0x80800264: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    func_80115750(rdram, ctx);
        goto after_17;
    // 0x80800264: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    after_17:
    // 0x80800268: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: jal         0x80112C3C
    // 0x80800274: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_80112C3C(rdram, ctx);
        goto after_18;
    // 0x80800274: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_18:
    // 0x80800278: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8080027C: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80800280: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x80800284: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x80800288: sub.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x8080028C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80800290: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800294: jal         0x800EEBF0
    // 0x80800298: nop

    func_800EEBF0(rdram, ctx);
        goto after_19;
    // 0x80800298: nop

    after_19:
    // 0x8080029C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x808002A0: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x808002A4: jal         0x800EE780
    // 0x808002A8: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    func_800EE780(rdram, ctx);
        goto after_20;
    // 0x808002A8: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_20:
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B0: jal         0x80111CC8
    // 0x808002B4: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    func_80111CC8(rdram, ctx);
        goto after_21;
    // 0x808002B4: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_21:
    // 0x808002B8: beql        $v0, $zero, L_80800328
    if (ctx->r2 == 0) {
        // 0x808002BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800328;
    }
    goto skip_2;
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808002C0: jal         0x801138A0
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_22;
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808002C8: beq         $v0, $zero, L_808002F0
    if (ctx->r2 == 0) {
        // 0x808002CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002F0;
    }
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D0: jal         0x801138F4
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_23;
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x808002D8: beql        $v0, $zero, L_80800328
    if (ctx->r2 == 0) {
        // 0x808002DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800328;
    }
    goto skip_3;
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x808002E0: jal         0x80110F44
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_24;
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x808002E8: b           L_80800328
    // 0x808002EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800328;
    // 0x808002EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002F0:
    // 0x808002F0: jal         0x80115580
    // 0x808002F4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_80115580(rdram, ctx);
        goto after_25;
    // 0x808002F4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_25:
    // 0x808002F8: beql        $v0, $zero, L_80800328
    if (ctx->r2 == 0) {
        // 0x808002FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800328;
    }
    goto skip_4;
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x80800300: jal         0x801155E8
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801155E8(rdram, ctx);
        goto after_26;
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80800308: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8080030C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800310: nop

    // 0x80800314: bc1fl       L_80800328
    if (!c1cs) {
        // 0x80800318: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800328;
    }
    goto skip_5;
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x8080031C: jal         0x801138F4
    // 0x80800320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_27;
    // 0x80800320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800328:
    // 0x80800328: jal         0x80112524
    // 0x8080032C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_80112524(rdram, ctx);
        goto after_28;
    // 0x8080032C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_28:
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800334: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x80800338: jal         0x80110A68
    // 0x8080033C: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    func_80110A68(rdram, ctx);
        goto after_29;
    // 0x8080033C: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    after_29:
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800344: jal         0x80110790
    // 0x80800348: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_80110790(rdram, ctx);
        goto after_30;
    // 0x80800348: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_30:
    // 0x8080034C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800350: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800354: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x80800358: jr          $ra
    // 0x8080035C: nop

    return;
    // 0x8080035C: nop

;}
RECOMP_FUNC void ncbatarget_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void func_80800008_ncbatarget(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800014: jal         0x80112524
    // 0x80800018: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800018: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080001C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80800020: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80800024: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80800028: jal         0x800EFB24
    // 0x8080002C: lw          $a1, 0x58($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X58);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x8080002C: lw          $a1, 0x58($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X58);
    after_1:
    // 0x80800030: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80800034: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800038: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8080003C: lw          $t8, 0x58($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X58);
    // 0x80800040: jal         0x800EF174
    // 0x80800044: lw          $a2, 0xC($t8)
    ctx->r6 = MEM_W(ctx->r24, 0XC);
    func_800EF174(rdram, ctx);
        goto after_2;
    // 0x80800044: lw          $a2, 0xC($t8)
    ctx->r6 = MEM_W(ctx->r24, 0XC);
    after_2:
    // 0x80800048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080004C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800050: jr          $ra
    // 0x80800054: nop

    return;
    // 0x80800054: nop

;}
RECOMP_FUNC void func_80800058_ncbatarget(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080005C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800060: jal         0x80112524
    // 0x80800064: nop

    func_80112524(rdram, ctx);
        goto after_0;
    // 0x80800064: nop

    after_0:
    // 0x80800068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080006C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800070: jr          $ra
    // 0x80800074: nop

    return;
    // 0x80800074: nop

;}
RECOMP_FUNC void ncbatarget_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800078: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080007C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800080: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800084: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800088: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    // 0x8080008C: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x80800090: jal         0x801120CC
    // 0x80800094: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    func_801120CC(rdram, ctx);
        goto after_0;
    // 0x80800094: lui         $a3, 0xC57A
    ctx->r7 = S32(0XC57A << 16);
    after_0:
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080009C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x808000A0: jal         0x80111B8C
    // 0x808000A4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80111B8C(rdram, ctx);
        goto after_1;
    // 0x808000A4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_1:
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000AC: jal         0x801124D0
    // 0x808000B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801124D0(rdram, ctx);
        goto after_2;
    // 0x808000B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: jal         0x80115858
    // 0x808000BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80115858(rdram, ctx);
        goto after_3;
    // 0x808000BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: jal         0x80115870
    // 0x808000C8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_80115870(rdram, ctx);
        goto after_4;
    // 0x808000C8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_4:
    // 0x808000CC: jal         0x800EFD24
    // 0x808000D0: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    func_800EFD24(rdram, ctx);
        goto after_5;
    // 0x808000D0: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    after_5:
    // 0x808000D4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808000D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000DC: lw          $t6, 0x58($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X58);
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000E8: jal         0x8011607C
    // 0x808000EC: swc1        $f4, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f4.u32l;
    func_8011607C(rdram, ctx);
        goto after_6;
    // 0x808000EC: swc1        $f4, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f4.u32l;
    after_6:
    // 0x808000F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000FC: jr          $ra
    // 0x80800100: nop

    return;
    // 0x80800100: nop

;}
RECOMP_FUNC void ncbatarget_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800104: jr          $ra
    // 0x80800108: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800108: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ncbatarget_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080010C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80800110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800114: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800118: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080011C: jal         0x8011607C
    // 0x80800120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8011607C(rdram, ctx);
        goto after_0;
    // 0x80800120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800128: jal         0x80000058
    // 0x8080012C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80800058_ncbatarget(rdram, ctx);
        goto after_1;
    // 0x8080012C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800134: jal         0x80000008
    // 0x80800138: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_80800008_ncbatarget(rdram, ctx);
        goto after_2;
    // 0x80800138: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_2:
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800140: jal         0x801107F0
    // 0x80800144: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_801107F0(rdram, ctx);
        goto after_3;
    // 0x80800144: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x80800148: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8080014C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80800150: jal         0x800EFB24
    // 0x80800154: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_800EFB24(rdram, ctx);
        goto after_4;
    // 0x80800154: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x80800158: jal         0x800EEF94
    // 0x8080015C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_800EEF94(rdram, ctx);
        goto after_5;
    // 0x8080015C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_5:
    // 0x80800160: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800164: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80800168: jal         0x800F1A88
    // 0x8080016C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800F1A88(rdram, ctx);
        goto after_6;
    // 0x8080016C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800174: jal         0x80115358
    // 0x80800178: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80115358(rdram, ctx);
        goto after_7;
    // 0x80800178: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x8080017C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800184: jal         0x80115750
    // 0x80800188: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80115750(rdram, ctx);
        goto after_8;
    // 0x80800188: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_8:
    // 0x8080018C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800190: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x80800194: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80800198: jal         0x800F1E6C
    // 0x8080019C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_800F1E6C(rdram, ctx);
        goto after_9;
    // 0x8080019C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_9:
    // 0x808001A0: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x808001AC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808001B0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808001B4: jal         0x80112D08
    // 0x808001B8: nop

    func_80112D08(rdram, ctx);
        goto after_10;
    // 0x808001B8: nop

    after_10:
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C0: jal         0x80112C3C
    // 0x808001C4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80112C3C(rdram, ctx);
        goto after_11;
    // 0x808001C4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_11:
    // 0x808001C8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808001CC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x808001D0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x808001D4: jal         0x800EEBF0
    // 0x808001D8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    func_800EEBF0(rdram, ctx);
        goto after_12;
    // 0x808001D8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_12:
    // 0x808001DC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x808001E0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x808001E4: jal         0x800EE780
    // 0x808001E8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_800EE780(rdram, ctx);
        goto after_13;
    // 0x808001E8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_13:
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F0: jal         0x80111FD4
    // 0x808001F4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_80111FD4(rdram, ctx);
        goto after_14;
    // 0x808001F4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_14:
    // 0x808001F8: beql        $v0, $zero, L_8080022C
    if (ctx->r2 == 0) {
        // 0x808001FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080022C;
    }
    goto skip_0;
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800200: jal         0x801138A0
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138A0(rdram, ctx);
        goto after_15;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800208: beql        $v0, $zero, L_8080022C
    if (ctx->r2 == 0) {
        // 0x8080020C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080022C;
    }
    goto skip_1;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800210: jal         0x801138F4
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801138F4(rdram, ctx);
        goto after_16;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800218: beql        $v0, $zero, L_8080022C
    if (ctx->r2 == 0) {
        // 0x8080021C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080022C;
    }
    goto skip_2;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800220: jal         0x80110F44
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80110F44(rdram, ctx);
        goto after_17;
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080022C:
    // 0x8080022C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800230: jal         0x80110A68
    // 0x80800234: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_80110A68(rdram, ctx);
        goto after_18;
    // 0x80800234: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_18:
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: jal         0x80110790
    // 0x80800240: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80110790(rdram, ctx);
        goto after_19;
    // 0x80800240: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_19:
    // 0x80800244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800248: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080024C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80800250: jr          $ra
    // 0x80800254: nop

    return;
    // 0x80800254: nop

;}
RECOMP_FUNC void ncbatarget_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800258: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080025C: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x80800260: jr          $ra
    // 0x80800264: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80800264: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void ncbatarget_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080026C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800270: jal         0x800EE7F8
    // 0x80800274: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800274: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    after_0:
    // 0x80800278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080027C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800280: jr          $ra
    // 0x80800284: nop

    return;
    // 0x80800284: nop

    // 0x80800288: nop

    // 0x8080028C: nop

;}
RECOMP_FUNC void ncbawaypoint_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
;}
RECOMP_FUNC void ncbawaypoint_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x8080000C: jr          $ra
    // 0x80800010: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    return;
    // 0x80800010: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
;}
RECOMP_FUNC void ncbawaypoint_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080001C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800020: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800024: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80800028: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x8080002C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80800030: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80800034: bne         $at, $zero, L_80800044
    if (ctx->r1 != 0) {
        // 0x80800038: sll         $t7, $v0, 5
        ctx->r15 = S32(ctx->r2 << 5);
            goto L_80800044;
    }
    // 0x80800038: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x8080003C: b           L_80800088
    // 0x80800040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800088;
    // 0x80800040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800044:
    // 0x80800044: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x80800048: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8080004C: jal         0x800EE7F8
    // 0x80800050: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800050: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800054: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800058: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8080005C: jal         0x800EE7F8
    // 0x80800060: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80800060: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
    // 0x80800064: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800068: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8080006C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800070: swc1        $f4, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f4.u32l;
    // 0x80800074: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80800078: lw          $v1, 0x5C($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X5C);
    // 0x8080007C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80800080: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80800084: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_80800088:
    // 0x80800088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080008C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800090: jr          $ra
    // 0x80800094: nop

    return;
    // 0x80800094: nop

;}
RECOMP_FUNC void ncbawaypoint_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8080009C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x808000A0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x808000A4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x808000A8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x808000AC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x808000B0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x808000B4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x808000B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x808000BC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x808000C0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x808000C4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x808000C8: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x808000CC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x808000D0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x808000D4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x808000D8: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x808000DC: mov.s       $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    ctx->f24.fl = ctx->f22.fl;
    // 0x808000E0: beq         $v1, $zero, L_8080028C
    if (ctx->r3 == 0) {
        // 0x808000E4: sll         $t6, $v1, 5
        ctx->r14 = S32(ctx->r3 << 5);
            goto L_8080028C;
    }
    // 0x808000E4: sll         $t6, $v1, 5
    ctx->r14 = S32(ctx->r3 << 5);
    // 0x808000E8: addu        $s6, $v0, $t6
    ctx->r22 = ADD32(ctx->r2, ctx->r14);
    // 0x808000EC: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x808000F0: addiu       $s1, $v0, 0x4
    ctx->r17 = ADD32(ctx->r2, 0X4);
    // 0x808000F4: sltu        $at, $s1, $s6
    ctx->r1 = ctx->r17 < ctx->r22 ? 1 : 0;
    // 0x808000F8: beq         $at, $zero, L_80800124
    if (ctx->r1 == 0) {
        // 0x808000FC: sw          $a2, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r6;
            goto L_80800124;
    }
    // 0x808000FC: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x80800100: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
L_80800104:
    // 0x80800104: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800108: jal         0x800EEAD4
    // 0x8080010C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_0;
    // 0x8080010C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_0:
    // 0x80800110: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x80800114: sltu        $at, $s1, $s6
    ctx->r1 = ctx->r17 < ctx->r22 ? 1 : 0;
    // 0x80800118: bne         $at, $zero, L_80800104
    if (ctx->r1 != 0) {
        // 0x8080011C: swc1        $f0, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->f0.u32l;
            goto L_80800104;
    }
    // 0x8080011C: swc1        $f0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f0.u32l;
    // 0x80800120: lw          $v0, 0x5C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X5C);
L_80800124:
    // 0x80800124: addiu       $s1, $v0, 0x24
    ctx->r17 = ADD32(ctx->r2, 0X24);
    // 0x80800128: sltu        $at, $s1, $s6
    ctx->r1 = ctx->r17 < ctx->r22 ? 1 : 0;
    // 0x8080012C: beq         $at, $zero, L_808001E4
    if (ctx->r1 == 0) {
        // 0x80800130: lw          $a3, 0xA0($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XA0);
            goto L_808001E4;
    }
    // 0x80800130: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x80800134: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    // 0x80800138: addiu       $s4, $sp, 0x6C
    ctx->r20 = ADD32(ctx->r29, 0X6C);
    // 0x8080013C: addiu       $s2, $s1, -0x20
    ctx->r18 = ADD32(ctx->r17, -0X20);
L_80800140:
    // 0x80800140: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x80800144: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800148: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8080014C: jal         0x8001BBC8
    // 0x80800150: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    aligned4_memcpy(rdram, ctx);
        goto after_1;
    // 0x80800150: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x80800154: lw          $t7, 0x5C($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X5C);
    // 0x80800158: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8080015C: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x80800160: sltu        $at, $s2, $t8
    ctx->r1 = ctx->r18 < ctx->r24 ? 1 : 0;
    // 0x80800164: bnel        $at, $zero, L_808001C0
    if (ctx->r1 != 0) {
        // 0x80800168: addiu       $a0, $s0, 0x20
        ctx->r4 = ADD32(ctx->r16, 0X20);
            goto L_808001C0;
    }
    goto skip_0;
    // 0x80800168: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    skip_0:
    // 0x8080016C: lwc1        $f6, 0x1C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x80800170: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800174: nop

    // 0x80800178: bc1f        L_808001BC
    if (!c1cs) {
        // 0x8080017C: addiu       $a0, $s0, 0x20
        ctx->r4 = ADD32(ctx->r16, 0X20);
            goto L_808001BC;
    }
    // 0x8080017C: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_80800180:
    // 0x80800180: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800184: jal         0x8001BBC8
    // 0x80800188: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    aligned4_memcpy(rdram, ctx);
        goto after_2;
    // 0x80800188: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x8080018C: lw          $t9, 0x5C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X5C);
    // 0x80800190: addiu       $s0, $s0, -0x20
    ctx->r16 = ADD32(ctx->r16, -0X20);
    // 0x80800194: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80800198: addiu       $t0, $t9, 0x4
    ctx->r8 = ADD32(ctx->r25, 0X4);
    // 0x8080019C: sltu        $at, $s0, $t0
    ctx->r1 = ctx->r16 < ctx->r8 ? 1 : 0;
    // 0x808001A0: bnel        $at, $zero, L_808001C0
    if (ctx->r1 != 0) {
        // 0x808001A4: addiu       $a0, $s0, 0x20
        ctx->r4 = ADD32(ctx->r16, 0X20);
            goto L_808001C0;
    }
    goto skip_1;
    // 0x808001A4: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    skip_1:
    // 0x808001A8: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x808001AC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x808001B0: nop

    // 0x808001B4: bc1tl       L_80800180
    if (c1cs) {
        // 0x808001B8: addiu       $a0, $s0, 0x20
        ctx->r4 = ADD32(ctx->r16, 0X20);
            goto L_80800180;
    }
    goto skip_2;
    // 0x808001B8: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    skip_2:
L_808001BC:
    // 0x808001BC: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_808001C0:
    // 0x808001C0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x808001C4: jal         0x8001BBC8
    // 0x808001C8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    aligned4_memcpy(rdram, ctx);
        goto after_3;
    // 0x808001C8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_3:
    // 0x808001CC: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x808001D0: sltu        $at, $s1, $s6
    ctx->r1 = ctx->r17 < ctx->r22 ? 1 : 0;
    // 0x808001D4: bnel        $at, $zero, L_80800140
    if (ctx->r1 != 0) {
        // 0x808001D8: addiu       $s2, $s1, -0x20
        ctx->r18 = ADD32(ctx->r17, -0X20);
            goto L_80800140;
    }
    goto skip_3;
    // 0x808001D8: addiu       $s2, $s1, -0x20
    ctx->r18 = ADD32(ctx->r17, -0X20);
    skip_3:
    // 0x808001DC: lw          $v0, 0x5C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X5C);
    // 0x808001E0: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
L_808001E4:
    // 0x808001E4: addiu       $s1, $v0, 0x4
    ctx->r17 = ADD32(ctx->r2, 0X4);
    // 0x808001E8: sltu        $at, $s1, $s6
    ctx->r1 = ctx->r17 < ctx->r22 ? 1 : 0;
    // 0x808001EC: beql        $at, $zero, L_80800290
    if (ctx->r1 == 0) {
        // 0x808001F0: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_80800290;
    }
    goto skip_4;
    // 0x808001F0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_4:
    // 0x808001F4: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    // 0x808001F8: addiu       $s0, $s1, 0xC
    ctx->r16 = ADD32(ctx->r17, 0XC);
L_808001FC:
    // 0x808001FC: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x80800200: jal         0x800EEAA4
    // 0x80800204: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_4;
    // 0x80800204: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80800208: lwc1        $f16, 0x18($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X18);
    // 0x8080020C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80800210: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800214: jal         0x800EEAA4
    // 0x80800218: sub.s       $f20, $f0, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f16.fl;
    func_800EEAA4(rdram, ctx);
        goto after_5;
    // 0x80800218: sub.s       $f20, $f0, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f16.fl;
    after_5:
    // 0x8080021C: lwc1        $f18, 0x18($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X18);
    // 0x80800220: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80800224: c.le.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl <= ctx->f22.fl;
    // 0x80800228: nop

    // 0x8080022C: bc1fl       L_80800248
    if (!c1cs) {
        // 0x80800230: c.le.s      $f22, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
            goto L_80800248;
    }
    goto skip_5;
    // 0x80800230: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
    skip_5:
    // 0x80800234: c.le.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl <= ctx->f22.fl;
    // 0x80800238: nop

    // 0x8080023C: bc1tl       L_80800280
    if (c1cs) {
        // 0x80800240: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_80800280;
    }
    goto skip_6;
    // 0x80800240: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    skip_6:
    // 0x80800244: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
L_80800248:
    // 0x80800248: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8080024C: bc1f        L_80800264
    if (!c1cs) {
        // 0x80800250: nop
    
            goto L_80800264;
    }
    // 0x80800250: nop

    // 0x80800254: c.le.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl <= ctx->f20.fl;
    // 0x80800258: nop

    // 0x8080025C: bc1tl       L_80800280
    if (c1cs) {
        // 0x80800260: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_80800280;
    }
    goto skip_7;
    // 0x80800260: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    skip_7:
L_80800264:
    // 0x80800264: jal         0x800EEAD4
    // 0x80800268: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_6;
    // 0x80800268: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x8080026C: add.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x80800270: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80800274: jal         0x800EE7F8
    // 0x80800278: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x80800278: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x8080027C: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
L_80800280:
    // 0x80800280: sltu        $at, $s1, $s6
    ctx->r1 = ctx->r17 < ctx->r22 ? 1 : 0;
    // 0x80800284: bnel        $at, $zero, L_808001FC
    if (ctx->r1 != 0) {
        // 0x80800288: addiu       $s0, $s1, 0xC
        ctx->r16 = ADD32(ctx->r17, 0XC);
            goto L_808001FC;
    }
    goto skip_8;
    // 0x80800288: addiu       $s0, $s1, 0xC
    ctx->r16 = ADD32(ctx->r17, 0XC);
    skip_8:
L_8080028C:
    // 0x8080028C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_80800290:
    // 0x80800290: mov.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.fl = ctx->f24.fl;
    // 0x80800294: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80800298: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8080029C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808002A0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x808002A4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x808002A8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x808002AC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x808002B0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x808002B4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x808002B8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x808002BC: jr          $ra
    // 0x808002C0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x808002C0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x808002C4: nop

    // 0x808002C8: nop

    // 0x808002CC: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8001ACCC
    // 0x8080000C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8080000C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x80800010: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800014: jal         0x800EFD24
    // 0x80800018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x80800018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080001C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800020: jal         0x800EFD24
    // 0x80800024: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x80800024: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_2:
    // 0x80800028: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8080002C: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x80800030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800034: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800038: jr          $ra
    // 0x8080003C: nop

    return;
    // 0x8080003C: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800048: jal         0x8001B084
    // 0x8080004C: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x8080004C: nop

    after_0:
    // 0x80800050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800058: jr          $ra
    // 0x8080005C: nop

    return;
    // 0x8080005C: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800064: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80800068: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8080006C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800070: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800074: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80800078: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8080007C: jal         0x800F18FC
    // 0x80800080: addiu       $a2, $a1, 0xC
    ctx->r6 = ADD32(ctx->r5, 0XC);
    func_800F18FC(rdram, ctx);
        goto after_0;
    // 0x80800080: addiu       $a2, $a1, 0xC
    ctx->r6 = ADD32(ctx->r5, 0XC);
    after_0:
    // 0x80800084: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800088: lwc1        $f12, 0xC($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8080008C: jal         0x800136E4
    // 0x80800090: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x80800090: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x80800094: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800098: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080009C: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x808000A0: swc1        $f4, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f4.u32l;
    // 0x808000A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000AC: jr          $ra
    // 0x808000B0: nop

    return;
    // 0x808000B0: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000C0: jal         0x800136E4
    // 0x808000C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x808000C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000C8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808000CC: swc1        $f0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f0.u32l;
    // 0x808000D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000D8: jr          $ra
    // 0x808000DC: nop

    return;
    // 0x808000DC: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E8: jal         0x800EE7F8
    // 0x808000EC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808000EC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x808000F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000F8: jr          $ra
    // 0x808000FC: nop

    return;
    // 0x808000FC: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800108: jal         0x800EE7F8
    // 0x8080010C: nop

    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8080010C: nop

    after_0:
    // 0x80800110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800118: jr          $ra
    // 0x8080011C: nop

    return;
    // 0x8080011C: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800124: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80800128: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8080012C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800130: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800134: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80800138: jal         0x8010FE14
    // 0x8080013C: addiu       $a2, $a1, 0xC
    ctx->r6 = ADD32(ctx->r5, 0XC);
    func_8010FE14(rdram, ctx);
        goto after_0;
    // 0x8080013C: addiu       $a2, $a1, 0xC
    ctx->r6 = ADD32(ctx->r5, 0XC);
    after_0:
    // 0x80800140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800148: jr          $ra
    // 0x8080014C: nop

    return;
    // 0x8080014C: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800158: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080015C: jal         0x800A5800
    // 0x80800160: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A5800(rdram, ctx);
        goto after_0;
    // 0x80800160: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800164: jal         0x80085580
    // 0x80800168: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _cadbfunc_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800168: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080016C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800170: jal         0x80085590
    // 0x80800174: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    _cadbfunc_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800174: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_2:
    // 0x80800178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080017C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800180: jr          $ra
    // 0x80800184: nop

    return;
    // 0x80800184: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080018C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800190: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800194: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800198: jal         0x8010F9C0
    // 0x8080019C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8010F9C0(rdram, ctx);
        goto after_0;
    // 0x8080019C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x808001A0: jal         0x8011001C
    // 0x808001A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8011001C(rdram, ctx);
        goto after_1;
    // 0x808001A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808001A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001AC: jal         0x80000150
    // 0x808001B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    ncfixposrot_entrypoint_7(rdram, ctx);
        goto after_2;
    // 0x808001B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x808001B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001BC: jr          $ra
    // 0x808001C0: nop

    return;
    // 0x808001C0: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001CC: jal         0x8011001C
    // 0x808001D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8011001C(rdram, ctx);
        goto after_0;
    // 0x808001D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001D4: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x808001D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x808001DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808001E0: beql        $t6, $zero, L_808001FC
    if (ctx->r14 == 0) {
        // 0x808001E4: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808001FC;
    }
    goto skip_0;
    // 0x808001E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x808001E8: jal         0x800C53EC
    // 0x808001EC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800C53EC(rdram, ctx);
        goto after_1;
    // 0x808001EC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x808001F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808001F4: sh          $zero, 0x18($v1)
    MEM_H(0X18, ctx->r3) = 0;
    // 0x808001F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_808001FC:
    // 0x808001FC: jal         0x8010F9C0
    // 0x80800200: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8010F9C0(rdram, ctx);
        goto after_2;
    // 0x80800200: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800208: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080020C: jr          $ra
    // 0x80800210: nop

    return;
    // 0x80800210: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080021C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800220: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800224: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800228: jal         0x8010F9C0
    // 0x8080022C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8010F9C0(rdram, ctx);
        goto after_0;
    // 0x8080022C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80800230: jal         0x8011001C
    // 0x80800234: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8011001C(rdram, ctx);
        goto after_1;
    // 0x80800234: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800238: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8080023C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800240: jal         0x800EE7F8
    // 0x80800244: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80800244: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80800248: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8080024C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80800250: jal         0x800EE7F8
    // 0x80800254: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x80800254: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_3:
    // 0x80800258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080025C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800260: jr          $ra
    // 0x80800264: nop

    return;
    // 0x80800264: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800268: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080026C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800270: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800274: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800278: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080027C: jal         0x8010F9C0
    // 0x80800280: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8010F9C0(rdram, ctx);
        goto after_0;
    // 0x80800280: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80800284: jal         0x8011001C
    // 0x80800288: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8011001C(rdram, ctx);
        goto after_1;
    // 0x80800288: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080028C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800290: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800294: jal         0x800EE7F8
    // 0x80800298: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80800298: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x8080029C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x808002A0: jal         0x80000060
    // 0x808002A4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    ncfixposrot_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x808002A4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x808002A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002B0: jr          $ra
    // 0x808002B4: nop

    return;
    // 0x808002B4: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002BC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808002C0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x808002C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002CC: jal         0x800EE7F8
    // 0x808002D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808002D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x808002D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002DC: jr          $ra
    // 0x808002E0: nop

    return;
    // 0x808002E0: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x808002EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x808002F4: jal         0x800EE7F8
    // 0x808002F8: addiu       $a1, $a3, 0xC
    ctx->r5 = ADD32(ctx->r7, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808002F8: addiu       $a1, $a3, 0xC
    ctx->r5 = ADD32(ctx->r7, 0XC);
    after_0:
    // 0x808002FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800304: jr          $ra
    // 0x80800308: nop

    return;
    // 0x80800308: nop

;}
RECOMP_FUNC void ncfixposrot_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080030C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800314: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800318: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8080031C: jal         0x800C52F4
    // 0x80800320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C52F4(rdram, ctx);
        goto after_0;
    // 0x80800320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800324: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800328: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080032C: sh          $t6, 0x18($t7)
    MEM_H(0X18, ctx->r15) = ctx->r14;
    // 0x80800330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800338: jr          $ra
    // 0x8080033C: nop

    return;
    // 0x8080033C: nop

;}
RECOMP_FUNC void func_80800000_ncpod(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: lbu         $t6, 0x42($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X42);
    // 0x8080000C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800010: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800014: bnel        $t6, $zero, L_8080002C
    if (ctx->r14 != 0) {
        // 0x80800018: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080002C;
    }
    goto skip_0;
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8080001C: sb          $t7, 0x42($a0)
    MEM_B(0X42, ctx->r4) = ctx->r15;
    // 0x80800020: jal         0x800F82D4
    // 0x80800024: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    func_800F82D4(rdram, ctx);
        goto after_0;
    // 0x80800024: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    after_0:
    // 0x80800028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080002C:
    // 0x8080002C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800030: jr          $ra
    // 0x80800034: nop

    return;
    // 0x80800034: nop

;}
RECOMP_FUNC void func_80800038_ncpod(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080003C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800040: lbu         $t6, 0x42($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X42);
    // 0x80800044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800048: beql        $t6, $zero, L_80800060
    if (ctx->r14 == 0) {
        // 0x8080004C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800060;
    }
    goto skip_0;
    // 0x8080004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800050: sb          $zero, 0x42($a0)
    MEM_B(0X42, ctx->r4) = 0;
    // 0x80800054: jal         0x800F82D4
    // 0x80800058: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    func_800F82D4(rdram, ctx);
        goto after_0;
    // 0x80800058: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    after_0:
    // 0x8080005C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800060:
    // 0x80800060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800064: jr          $ra
    // 0x80800068: nop

    return;
    // 0x80800068: nop

;}
RECOMP_FUNC void func_8080006C_ncpod(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080006C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800074: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x80800078: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8080007C: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x80800080: bnel        $t7, $zero, L_808000A0
    if (ctx->r15 != 0) {
        // 0x80800084: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000A0;
    }
    goto skip_0;
    // 0x80800084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800088: jal         0x800EA05C
    // 0x8080008C: sb          $t8, 0x43($a0)
    MEM_B(0X43, ctx->r4) = ctx->r24;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x8080008C: sb          $t8, 0x43($a0)
    MEM_B(0X43, ctx->r4) = ctx->r24;
    after_0:
    // 0x80800090: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800094: jal         0x800887D8
    // 0x80800098: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    _glcutDll_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800098: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    after_1:
    // 0x8080009C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000A0:
    // 0x808000A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A4: jr          $ra
    // 0x808000A8: nop

    return;
    // 0x808000A8: nop

;}
RECOMP_FUNC void func_808000AC_ncpod(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B4: lbu         $t6, 0x43($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X43);
    // 0x808000B8: beql        $t6, $zero, L_808000D4
    if (ctx->r14 == 0) {
        // 0x808000BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000D4;
    }
    goto skip_0;
    // 0x808000BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808000C0: jal         0x80088830
    // 0x808000C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _glcutDll_entrypoint_17(rdram, ctx);
        goto after_0;
    // 0x808000C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000CC: sb          $zero, 0x43($a0)
    MEM_B(0X43, ctx->r4) = 0;
    // 0x808000D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000D4:
    // 0x808000D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000D8: jr          $ra
    // 0x808000DC: nop

    return;
    // 0x808000DC: nop

;}
RECOMP_FUNC void ncpod_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808000E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000E8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x808000EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x808000F4: jal         0x8001B668
    // 0x808000F8: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    func_8001B668(rdram, ctx);
        goto after_0;
    // 0x808000F8: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    after_0:
    // 0x808000FC: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80800100: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80800104: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80800108: jal         0x800002B0
    // 0x8080010C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    ncpod_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x8080010C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x80800110: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800114: jal         0x800A940C
    // 0x80800118: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800A940C(rdram, ctx);
        goto after_2;
    // 0x80800118: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x8080011C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800120: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80800124: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80800128: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x8080012C: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x80800130: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80800134: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    // 0x80800138: jal         0x800EFD24
    // 0x8080013C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x8080013C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_3:
    // 0x80800140: jal         0x800EFD24
    // 0x80800144: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    func_800EFD24(rdram, ctx);
        goto after_4;
    // 0x80800144: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    after_4:
    // 0x80800148: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080014C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800150: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800154: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800158: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x8080015C: jal         0x80015184
    // 0x80800160: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    func_80015184(rdram, ctx);
        goto after_5;
    // 0x80800160: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x80800164: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80800168: sb          $zero, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = 0;
    // 0x8080016C: sb          $zero, 0x42($s0)
    MEM_B(0X42, ctx->r16) = 0;
    // 0x80800170: sb          $zero, 0x40($s0)
    MEM_B(0X40, ctx->r16) = 0;
    // 0x80800174: sb          $zero, 0x43($s0)
    MEM_B(0X43, ctx->r16) = 0;
    // 0x80800178: sh          $zero, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = 0;
    // 0x8080017C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80800180: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80800184: sb          $zero, 0x41($s0)
    MEM_B(0X41, ctx->r16) = 0;
    // 0x80800188: sw          $t8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r24;
    // 0x8080018C: jal         0x800C517C
    // 0x80800190: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800C517C(rdram, ctx);
        goto after_6;
    // 0x80800190: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80800194: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x80800198: jal         0x800C5190
    // 0x8080019C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800C5190(rdram, ctx);
        goto after_7;
    // 0x8080019C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x808001A0: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x808001A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001AC: lh          $v0, 0x2E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2E);
    // 0x808001B0: jr          $ra
    // 0x808001B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808001B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ncpod_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808001BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808001C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001C8: jal         0x800002B0
    // 0x808001CC: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    ncpod_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808001CC: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    after_0:
    // 0x808001D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808001D4: jal         0x800A940C
    // 0x808001D8: lw          $a0, 0x38($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X38);
    func_800A940C(rdram, ctx);
        goto after_1;
    // 0x808001D8: lw          $a0, 0x38($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X38);
    after_1:
    // 0x808001DC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: jal         0x800005C0
    // 0x808001E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ncpod_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x808001E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808001EC: lbu         $t6, 0x3E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3E);
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F4: beql        $t6, $zero, L_80800224
    if (ctx->r14 == 0) {
        // 0x808001F8: lw          $v0, 0x10($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X10);
            goto L_80800224;
    }
    goto skip_0;
    // 0x808001F8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x808001FC: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x80800200: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800204: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x80800208: beq         $t8, $zero, L_80800218
    if (ctx->r24 == 0) {
        // 0x8080020C: nop
    
            goto L_80800218;
    }
    // 0x8080020C: nop

    // 0x80800210: b           L_80800218
    // 0x80800214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_80800218;
    // 0x80800214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80800218:
    // 0x80800218: jal         0x800008AC
    // 0x8080021C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ncpod_entrypoint_15(rdram, ctx);
        goto after_3;
    // 0x8080021C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800220: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
L_80800224:
    // 0x80800224: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    // 0x80800228: bne         $t9, $zero, L_80800284
    if (ctx->r25 != 0) {
        // 0x8080022C: sll         $t0, $v0, 12
        ctx->r8 = S32(ctx->r2 << 12);
            goto L_80800284;
    }
    // 0x8080022C: sll         $t0, $v0, 12
    ctx->r8 = S32(ctx->r2 << 12);
    // 0x80800230: bgez        $t0, L_80800244
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80800234: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_80800244;
    }
    // 0x80800234: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800238: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080023C: b           L_8080024C
    // 0x80800240: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
        goto L_8080024C;
    // 0x80800240: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_80800244:
    // 0x80800244: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80800248: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_8080024C:
    // 0x8080024C: jal         0x800C5148
    // 0x80800250: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800C5148(rdram, ctx);
        goto after_4;
    // 0x80800250: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800254: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x80800258: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080025C: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80800260: bgezl       $t2, L_80800278
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80800264: lwc1        $f0, 0x48($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
            goto L_80800278;
    }
    goto skip_1;
    // 0x80800264: lwc1        $f0, 0x48($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
    skip_1:
    // 0x80800268: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080026C: b           L_8080027C
    // 0x80800270: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
        goto L_8080027C;
    // 0x80800270: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800274: lwc1        $f0, 0x48($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
L_80800278:
    // 0x80800278: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_8080027C:
    // 0x8080027C: jal         0x800C51A4
    // 0x80800280: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800C51A4(rdram, ctx);
        goto after_5;
    // 0x80800280: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
L_80800284:
    // 0x80800284: jal         0x80015178
    // 0x80800288: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_80015178(rdram, ctx);
        goto after_6;
    // 0x80800288: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_6:
    // 0x8080028C: jal         0x800000AC
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000AC_ncpod(rdram, ctx);
        goto after_7;
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800294: jal         0x8001B754
    // 0x80800298: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    func_8001B754(rdram, ctx);
        goto after_8;
    // 0x80800298: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    after_8:
    // 0x8080029C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808002A8: jr          $ra
    // 0x808002AC: nop

    return;
    // 0x808002AC: nop

;}
RECOMP_FUNC void ncpod_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002BC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x808002C0: jal         0x8001B798
    // 0x808002C4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x808002C4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x808002C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002D0: jr          $ra
    // 0x808002D4: nop

    return;
    // 0x808002D4: nop

;}
RECOMP_FUNC void ncpod_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D8: jr          $ra
    // 0x808002DC: sh          $a1, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r5;
    return;
    // 0x808002DC: sh          $a1, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void ncpod_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E0: jr          $ra
    // 0x808002E4: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    return;
    // 0x808002E4: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
;}
RECOMP_FUNC void func_808002E8_ncpod(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x808002EC: bnel        $a1, $at, L_80800300
    if (ctx->r5 != ctx->r1) {
        // 0x808002F0: lhu         $t6, 0x12($a0)
        ctx->r14 = MEM_HU(ctx->r4, 0X12);
            goto L_80800300;
    }
    goto skip_0;
    // 0x808002F0: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    skip_0:
    // 0x808002F4: jr          $ra
    // 0x808002F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x808002F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808002FC: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
L_80800300:
    // 0x80800300: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x80800304: xor         $v1, $a1, $t7
    ctx->r3 = ctx->r5 ^ ctx->r15;
    // 0x80800308: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8080030C: jr          $ra
    // 0x80800310: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800310: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80800314_ncpod(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800314: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080031C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800320: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800324: lh          $v0, 0x3C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X3C);
    // 0x80800328: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080032C: beql        $v0, $zero, L_808003CC
    if (ctx->r2 == 0) {
        // 0x80800330: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_808003CC;
    }
    goto skip_0;
    // 0x80800330: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x80800334: beq         $v0, $at, L_80800358
    if (ctx->r2 == ctx->r1) {
        // 0x80800338: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80800358;
    }
    // 0x80800338: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8080033C: beq         $v0, $at, L_808003B4
    if (ctx->r2 == ctx->r1) {
        // 0x80800340: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_808003B4;
    }
    // 0x80800340: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800344: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80800348: beql        $v0, $at, L_808003CC
    if (ctx->r2 == ctx->r1) {
        // 0x8080034C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_808003CC;
    }
    goto skip_1;
    // 0x8080034C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x80800350: b           L_808003CC
    // 0x80800354: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_808003CC;
    // 0x80800354: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80800358:
    // 0x80800358: jal         0x80089638
    // 0x8080035C: lh          $a0, 0x2($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X2);
    _ncpoducam_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080035C: lh          $a0, 0x2($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X2);
    after_0:
    // 0x80800360: jal         0x80089658
    // 0x80800364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncpoducam_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800368: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8080036C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80800370: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800374: bne         $t6, $at, L_808003C8
    if (ctx->r14 != ctx->r1) {
        // 0x80800378: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_808003C8;
    }
    // 0x80800378: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x8080037C: beql        $t7, $zero, L_80800394
    if (ctx->r15 == 0) {
        // 0x80800380: andi        $t8, $v1, 0x20
        ctx->r24 = ctx->r3 & 0X20;
            goto L_80800394;
    }
    goto skip_2;
    // 0x80800380: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    skip_2:
    // 0x80800384: jal         0x80088830
    // 0x80800388: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    _glcutDll_entrypoint_17(rdram, ctx);
        goto after_2;
    // 0x80800388: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8080038C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800390: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
L_80800394:
    // 0x80800394: bne         $t8, $zero, L_808003AC
    if (ctx->r24 != 0) {
        // 0x80800398: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808003AC;
    }
    // 0x80800398: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080039C: jal         0x800009E4
    // 0x808003A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ncpod_entrypoint_17(rdram, ctx);
        goto after_3;
    // 0x808003A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808003A4: b           L_808003D0
    // 0x808003A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808003D0;
    // 0x808003A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003AC:
    // 0x808003AC: b           L_808003CC
    // 0x808003B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_808003CC;
    // 0x808003B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_808003B4:
    // 0x808003B4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x808003B8: jal         0x80088080
    // 0x808003BC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    _gcdialogcamera_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x808003BC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x808003C0: b           L_808003D0
    // 0x808003C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808003D0;
    // 0x808003C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003C8:
    // 0x808003C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_808003CC:
    // 0x808003CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003D0:
    // 0x808003D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003D4: jr          $ra
    // 0x808003D8: nop

    return;
    // 0x808003D8: nop

;}
RECOMP_FUNC void ncpod_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808003E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808003EC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x808003F0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x808003F4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x808003F8: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x808003FC: jal         0x800002E8
    // 0x80800400: lw          $a1, 0xC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC);
    func_808002E8_ncpod(rdram, ctx);
        goto after_0;
    // 0x80800400: lw          $a1, 0xC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC);
    after_0:
    // 0x80800404: beq         $v0, $zero, L_8080049C
    if (ctx->r2 == 0) {
        // 0x80800408: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_8080049C;
    }
    // 0x80800408: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080040C: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80800410: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80800414: lhu         $t7, 0x18($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X18);
    // 0x80800418: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8080041C: beq         $t8, $zero, L_808004BC
    if (ctx->r24 == 0) {
        // 0x80800420: nop
    
            goto L_808004BC;
    }
    // 0x80800420: nop

    // 0x80800424: jal         0x80101074
    // 0x80800428: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_80101074(rdram, ctx);
        goto after_1;
    // 0x80800428: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x8080042C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80800430: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80800434: jal         0x8010114C
    // 0x80800438: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_8010114C(rdram, ctx);
        goto after_2;
    // 0x80800438: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x8080043C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800440: beq         $v0, $at, L_8080045C
    if (ctx->r2 == ctx->r1) {
        // 0x80800444: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080045C;
    }
    // 0x80800444: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800448: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8080044C: beq         $v0, $at, L_80800464
    if (ctx->r2 == ctx->r1) {
        // 0x80800450: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80800464;
    }
    // 0x80800450: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800454: b           L_8080046C
    // 0x80800458: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
        goto L_8080046C;
    // 0x80800458: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
L_8080045C:
    // 0x8080045C: b           L_808004BC
    // 0x80800460: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_808004BC;
    // 0x80800460: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80800464:
    // 0x80800464: b           L_808004BC
    // 0x80800468: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_808004BC;
    // 0x80800468: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8080046C:
    // 0x8080046C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80800470: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80800474: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80800478: jal         0x80000314
    // 0x8080047C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80800314_ncpod(rdram, ctx);
        goto after_3;
    // 0x8080047C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_3:
    // 0x80800480: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800484: bne         $v0, $at, L_80800494
    if (ctx->r2 != ctx->r1) {
        // 0x80800488: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800494;
    }
    // 0x80800488: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8080048C: b           L_808004BC
    // 0x80800490: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_808004BC;
    // 0x80800490: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80800494:
    // 0x80800494: b           L_808004BC
    // 0x80800498: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_808004BC;
    // 0x80800498: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8080049C:
    // 0x8080049C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x808004A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808004A4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x808004A8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x808004AC: jal         0x80000314
    // 0x808004B0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80800314_ncpod(rdram, ctx);
        goto after_4;
    // 0x808004B0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_4:
    // 0x808004B4: b           L_808004C0
    // 0x808004B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808004C0;
    // 0x808004B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808004BC:
    // 0x808004BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808004C0:
    // 0x808004C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808004C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808004C8: jr          $ra
    // 0x808004CC: nop

    return;
    // 0x808004CC: nop

;}
RECOMP_FUNC void ncpod_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808004DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808004E0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808004E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x808004E8: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x808004EC: jal         0x800002E8
    // 0x808004F0: lw          $a1, 0xC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC);
    func_808002E8_ncpod(rdram, ctx);
        goto after_0;
    // 0x808004F0: lw          $a1, 0xC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC);
    after_0:
    // 0x808004F4: beq         $v0, $zero, L_80800534
    if (ctx->r2 == 0) {
        // 0x808004F8: lw          $t7, 0x1C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1C);
            goto L_80800534;
    }
    // 0x808004F8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x808004FC: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x80800500: lhu         $t9, 0x18($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X18);
    // 0x80800504: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80800508: beql        $t0, $zero, L_80800538
    if (ctx->r8 == 0) {
        // 0x8080050C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80800538;
    }
    goto skip_0;
    // 0x8080050C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x80800510: jal         0x80101074
    // 0x80800514: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80101074(rdram, ctx);
        goto after_1;
    // 0x80800514: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80800518: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8080051C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800520: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80800524: jal         0x8010114C
    // 0x80800528: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_8010114C(rdram, ctx);
        goto after_2;
    // 0x80800528: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_2:
    // 0x8080052C: b           L_8080053C
    // 0x80800530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080053C;
    // 0x80800530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800534:
    // 0x80800534: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80800538:
    // 0x80800538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080053C:
    // 0x8080053C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800540: jr          $ra
    // 0x80800544: nop

    return;
    // 0x80800544: nop

;}
RECOMP_FUNC void ncpod_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800548: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x8080054C: lhu         $t6, 0x12($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X12);
    // 0x80800550: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x80800554: jr          $ra
    // 0x80800558: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    return;
    // 0x80800558: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ncpod_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080055C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800568: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8080056C: jal         0x800EE7F8
    // 0x80800570: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800570: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x80800574: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800578: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8080057C: jal         0x800EE7F8
    // 0x80800580: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80800580: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_1:
    // 0x80800584: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800588: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080058C: sb          $t6, 0x40($t7)
    MEM_B(0X40, ctx->r15) = ctx->r14;
    // 0x80800590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800598: jr          $ra
    // 0x8080059C: nop

    return;
    // 0x8080059C: nop

;}
RECOMP_FUNC void ncpod_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808005A4: jr          $ra
    // 0x808005A8: swc1        $f12, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x808005A8: swc1        $f12, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void ncpod_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005AC: jr          $ra
    // 0x808005B0: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    return;
    // 0x808005B0: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
;}
RECOMP_FUNC void ncpod_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808005B8: jr          $ra
    // 0x808005BC: swc1        $f12, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x808005BC: swc1        $f12, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void ncpod_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808005C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808005D0: lbu         $v0, 0x41($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X41);
    // 0x808005D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808005DC: beq         $v0, $at, L_808005FC
    if (ctx->r2 == ctx->r1) {
        // 0x808005E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808005FC;
    }
    // 0x808005E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808005E4: beq         $v0, $at, L_8080060C
    if (ctx->r2 == ctx->r1) {
        // 0x808005E8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080060C;
    }
    // 0x808005E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808005EC: beq         $v0, $at, L_8080061C
    if (ctx->r2 == ctx->r1) {
        // 0x808005F0: nop
    
            goto L_8080061C;
    }
    // 0x808005F0: nop

    // 0x808005F4: b           L_8080062C
    // 0x808005F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
        goto L_8080062C;
    // 0x808005F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_808005FC:
    // 0x808005FC: jal         0x800895E8
    // 0x80800600: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    _ncpoddialog_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800600: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80800604: b           L_80800628
    // 0x80800608: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
        goto L_80800628;
    // 0x80800608: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
L_8080060C:
    // 0x8080060C: jal         0x80089660
    // 0x80800610: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    _ncpoducam_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800610: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    after_1:
    // 0x80800614: b           L_80800628
    // 0x80800618: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
        goto L_80800628;
    // 0x80800618: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
L_8080061C:
    // 0x8080061C: jal         0x80089698
    // 0x80800620: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    _ncpodfixpos_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800620: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    after_2:
    // 0x80800624: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_80800628:
    // 0x80800628: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_8080062C:
    // 0x8080062C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800630: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    // 0x80800634: beq         $v0, $at, L_80800658
    if (ctx->r2 == ctx->r1) {
        // 0x80800638: sb          $t6, 0x41($s0)
        MEM_B(0X41, ctx->r16) = ctx->r14;
            goto L_80800658;
    }
    // 0x80800638: sb          $t6, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r14;
    // 0x8080063C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800640: beq         $v0, $at, L_80800668
    if (ctx->r2 == ctx->r1) {
        // 0x80800644: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800668;
    }
    // 0x80800644: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800648: beq         $v0, $at, L_80800678
    if (ctx->r2 == ctx->r1) {
        // 0x8080064C: nop
    
            goto L_80800678;
    }
    // 0x8080064C: nop

    // 0x80800650: b           L_80800688
    // 0x80800654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800688;
    // 0x80800654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800658:
    // 0x80800658: jal         0x800895E0
    // 0x8080065C: nop

    _ncpoddialog_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x8080065C: nop

    after_3:
    // 0x80800660: b           L_80800684
    // 0x80800664: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_80800684;
    // 0x80800664: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80800668:
    // 0x80800668: jal         0x80089630
    // 0x8080066C: nop

    _ncpoducam_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x8080066C: nop

    after_4:
    // 0x80800670: b           L_80800684
    // 0x80800674: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
        goto L_80800684;
    // 0x80800674: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_80800678:
    // 0x80800678: jal         0x80089690
    // 0x8080067C: nop

    _ncpodfixpos_entrypoint_0(rdram, ctx);
        goto after_5;
    // 0x8080067C: nop

    after_5:
    // 0x80800680: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80800684:
    // 0x80800684: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800688:
    // 0x80800688: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080068C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800690: jr          $ra
    // 0x80800694: nop

    return;
    // 0x80800694: nop

;}
RECOMP_FUNC void ncpod_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800698: jr          $ra
    // 0x8080069C: lbu         $v0, 0x41($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X41);
    return;
    // 0x8080069C: lbu         $v0, 0x41($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X41);
;}
RECOMP_FUNC void ncpod_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808006A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808006A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x808006AC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x808006B0: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x808006B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808006B8: jal         0x800002B0
    // 0x808006BC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ncpod_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808006BC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x808006C0: lbu         $v1, 0x41($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X41);
    // 0x808006C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808006C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x808006CC: beq         $v1, $zero, L_80800728
    if (ctx->r3 == 0) {
        // 0x808006D0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800728;
    }
    // 0x808006D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808006D4: beq         $v1, $at, L_808006FC
    if (ctx->r3 == ctx->r1) {
        // 0x808006D8: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_808006FC;
    }
    // 0x808006D8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x808006DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808006E0: beq         $v1, $at, L_8080070C
    if (ctx->r3 == ctx->r1) {
        // 0x808006E4: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_8080070C;
    }
    // 0x808006E4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x808006E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808006EC: beq         $v1, $at, L_8080071C
    if (ctx->r3 == ctx->r1) {
        // 0x808006F0: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_8080071C;
    }
    // 0x808006F0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x808006F4: b           L_8080072C
    // 0x808006F8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
        goto L_8080072C;
    // 0x808006F8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_808006FC:
    // 0x808006FC: jal         0x800895D8
    // 0x80800700: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    _ncpoddialog_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800700: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80800704: b           L_80800728
    // 0x80800708: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_80800728;
    // 0x80800708: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8080070C:
    // 0x8080070C: jal         0x80089668
    // 0x80800710: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    _ncpoducam_entrypoint_7(rdram, ctx);
        goto after_2;
    // 0x80800710: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    after_2:
    // 0x80800714: b           L_80800728
    // 0x80800718: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_80800728;
    // 0x80800718: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8080071C:
    // 0x8080071C: jal         0x800896C0
    // 0x80800720: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    _ncpodfixpos_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x80800720: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    after_3:
    // 0x80800724: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80800728:
    // 0x80800728: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8080072C:
    // 0x8080072C: beql        $a0, $at, L_808007C8
    if (ctx->r4 == ctx->r1) {
        // 0x80800730: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808007C8;
    }
    goto skip_0;
    // 0x80800730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800734: lbu         $t8, 0x40($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X40);
    // 0x80800738: beql        $t8, $zero, L_808007C8
    if (ctx->r24 == 0) {
        // 0x8080073C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808007C8;
    }
    goto skip_1;
    // 0x8080073C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800740: jal         0x800A940C
    // 0x80800744: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_800A940C(rdram, ctx);
        goto after_4;
    // 0x80800744: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_4:
    // 0x80800748: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080074C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800750: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x80800754: jal         0x8010FE14
    // 0x80800758: addiu       $a2, $s0, 0x24
    ctx->r6 = ADD32(ctx->r16, 0X24);
    func_8010FE14(rdram, ctx);
        goto after_5;
    // 0x80800758: addiu       $a2, $s0, 0x24
    ctx->r6 = ADD32(ctx->r16, 0X24);
    after_5:
    // 0x8080075C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800760: jal         0x800C5148
    // 0x80800764: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_800C5148(rdram, ctx);
        goto after_6;
    // 0x80800764: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_6:
    // 0x80800768: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8080076C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800770: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80800774: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800778: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080077C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80800780: nop

    // 0x80800784: bc1f        L_808007BC
    if (!c1cs) {
        // 0x80800788: nop
    
            goto L_808007BC;
    }
    // 0x80800788: nop

    // 0x8080078C: lwc1        $f0, 0x34($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34);
    // 0x80800790: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800794: nop

    // 0x80800798: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x8080079C: nop

    // 0x808007A0: bc1t        L_808007BC
    if (c1cs) {
        // 0x808007A4: nop
    
            goto L_808007BC;
    }
    // 0x808007A4: nop

    // 0x808007A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808007AC: jal         0x800C51A4
    // 0x808007B0: nop

    func_800C51A4(rdram, ctx);
        goto after_7;
    // 0x808007B0: nop

    after_7:
    // 0x808007B4: b           L_808007C8
    // 0x808007B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808007C8;
    // 0x808007B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808007BC:
    // 0x808007BC: jal         0x800C51A4
    // 0x808007C0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800C51A4(rdram, ctx);
        goto after_8;
    // 0x808007C0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x808007C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808007C8:
    // 0x808007C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808007CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808007D0: jr          $ra
    // 0x808007D4: nop

    return;
    // 0x808007D4: nop

;}
RECOMP_FUNC void func_808007D8_ncpod(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007DC: andi        $t6, $a1, 0x10
    ctx->r14 = ctx->r5 & 0X10;
    // 0x808007E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007E4: beq         $t6, $zero, L_808007FC
    if (ctx->r14 == 0) {
        // 0x808007E8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_808007FC;
    }
    // 0x808007E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808007EC: jal         0x80000000
    // 0x808007F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800000_ncpod(rdram, ctx);
        goto after_0;
    // 0x808007F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808007F4: b           L_8080080C
    // 0x808007F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
        goto L_8080080C;
    // 0x808007F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_808007FC:
    // 0x808007FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800800: jal         0x80000038
    // 0x80800804: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800038_ncpod(rdram, ctx);
        goto after_1;
    // 0x80800804: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80800808: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_8080080C:
    // 0x8080080C: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80800810: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x80800814: beq         $t7, $zero, L_8080084C
    if (ctx->r15 == 0) {
        // 0x80800818: sll         $t8, $a1, 13
        ctx->r24 = S32(ctx->r5 << 13);
            goto L_8080084C;
    }
    // 0x80800818: sll         $t8, $a1, 13
    ctx->r24 = S32(ctx->r5 << 13);
    // 0x8080081C: bgez        $t8, L_8080082C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80800820: sll         $t9, $a1, 14
        ctx->r25 = S32(ctx->r5 << 14);
            goto L_8080082C;
    }
    // 0x80800820: sll         $t9, $a1, 14
    ctx->r25 = S32(ctx->r5 << 14);
    // 0x80800824: b           L_80800840
    // 0x80800828: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_80800840;
    // 0x80800828: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8080082C:
    // 0x8080082C: bgez        $t9, L_8080083C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80800830: lw          $t0, 0x18($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X18);
            goto L_8080083C;
    }
    // 0x80800830: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80800834: b           L_80800840
    // 0x80800838: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_80800840;
    // 0x80800838: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_8080083C:
    // 0x8080083C: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
L_80800840:
    // 0x80800840: jal         0x80015178
    // 0x80800844: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80015178(rdram, ctx);
        goto after_2;
    // 0x80800844: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_2:
    // 0x80800848: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_8080084C:
    // 0x8080084C: andi        $t1, $a1, 0x4
    ctx->r9 = ctx->r5 & 0X4;
    // 0x80800850: beq         $t1, $zero, L_80800880
    if (ctx->r9 == 0) {
        // 0x80800854: andi        $t3, $a1, 0x2000
        ctx->r11 = ctx->r5 & 0X2000;
            goto L_80800880;
    }
    // 0x80800854: andi        $t3, $a1, 0x2000
    ctx->r11 = ctx->r5 & 0X2000;
    // 0x80800858: andi        $t2, $a1, 0x4000
    ctx->r10 = ctx->r5 & 0X4000;
    // 0x8080085C: beq         $t2, $zero, L_8080086C
    if (ctx->r10 == 0) {
        // 0x80800860: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080086C;
    }
    // 0x80800860: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800864: b           L_80800870
    // 0x80800868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_80800870;
    // 0x80800868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8080086C:
    // 0x8080086C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80800870:
    // 0x80800870: jal         0x800008AC
    // 0x80800874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ncpod_entrypoint_15(rdram, ctx);
        goto after_3;
    // 0x80800874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800878: b           L_808008A0
    // 0x8080087C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808008A0;
    // 0x8080087C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800880:
    // 0x80800880: beq         $t3, $zero, L_80800890
    if (ctx->r11 == 0) {
        // 0x80800884: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800890;
    }
    // 0x80800884: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800888: b           L_80800894
    // 0x8080088C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_80800894;
    // 0x8080088C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80800890:
    // 0x80800890: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80800894:
    // 0x80800894: jal         0x800008AC
    // 0x80800898: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ncpod_entrypoint_15(rdram, ctx);
        goto after_4;
    // 0x80800898: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8080089C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808008A0:
    // 0x808008A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008A4: jr          $ra
    // 0x808008A8: nop

    return;
    // 0x808008A8: nop

;}
RECOMP_FUNC void ncpod_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808008B8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808008BC: lbu         $t7, 0x3E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3E);
    // 0x808008C0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x808008C4: beql        $a1, $t7, L_8080094C
    if (ctx->r5 == ctx->r15) {
        // 0x808008C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080094C;
    }
    goto skip_0;
    // 0x808008C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808008CC: beql        $a1, $zero, L_80800910
    if (ctx->r5 == 0) {
        // 0x808008D0: lw          $a0, 0x38($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X38);
            goto L_80800910;
    }
    goto skip_1;
    // 0x808008D0: lw          $a0, 0x38($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X38);
    skip_1:
    // 0x808008D4: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    // 0x808008D8: jal         0x800A940C
    // 0x808008DC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800A940C(rdram, ctx);
        goto after_0;
    // 0x808008DC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x808008E0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x808008E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808008E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808008EC: beq         $t9, $zero, L_808008FC
    if (ctx->r25 == 0) {
        // 0x808008F0: nop
    
            goto L_808008FC;
    }
    // 0x808008F0: nop

    // 0x808008F4: b           L_808008FC
    // 0x808008F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_808008FC;
    // 0x808008F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_808008FC:
    // 0x808008FC: jal         0x800C52F4
    // 0x80800900: nop

    func_800C52F4(rdram, ctx);
        goto after_1;
    // 0x80800900: nop

    after_1:
    // 0x80800904: b           L_80800940
    // 0x80800908: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
        goto L_80800940;
    // 0x80800908: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8080090C: lw          $a0, 0x38($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X38);
L_80800910:
    // 0x80800910: jal         0x800A940C
    // 0x80800914: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800A940C(rdram, ctx);
        goto after_2;
    // 0x80800914: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x80800918: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8080091C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800924: beq         $t0, $zero, L_80800934
    if (ctx->r8 == 0) {
        // 0x80800928: nop
    
            goto L_80800934;
    }
    // 0x80800928: nop

    // 0x8080092C: b           L_80800934
    // 0x80800930: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80800934;
    // 0x80800930: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_80800934:
    // 0x80800934: jal         0x800C53EC
    // 0x80800938: nop

    func_800C53EC(rdram, ctx);
        goto after_3;
    // 0x80800938: nop

    after_3:
    // 0x8080093C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
L_80800940:
    // 0x80800940: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80800944: sb          $t1, 0x3E($t2)
    MEM_B(0X3E, ctx->r10) = ctx->r9;
    // 0x80800948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080094C:
    // 0x8080094C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800950: jr          $ra
    // 0x80800954: nop

    return;
    // 0x80800954: nop

;}
RECOMP_FUNC void ncpod_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800958: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080095C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800960: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800964: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800968: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080096C: jal         0x8010FAE4
    // 0x80800970: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8010FAE4(rdram, ctx);
        goto after_0;
    // 0x80800970: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800974: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80800978: bne         $v0, $at, L_80800988
    if (ctx->r2 != ctx->r1) {
        // 0x8080097C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800988;
    }
    // 0x8080097C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800980: b           L_808009D4
    // 0x80800984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808009D4;
    // 0x80800984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800988:
    // 0x80800988: jal         0x8010F9C0
    // 0x8080098C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8010F9C0(rdram, ctx);
        goto after_1;
    // 0x8080098C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x80800990: jal         0x80110024
    // 0x80800994: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80110024(rdram, ctx);
        goto after_2;
    // 0x80800994: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800998: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8080099C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808009A0: jal         0x800002D8
    // 0x808009A4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    ncpod_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x808009A4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x808009A8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808009AC: beql        $a1, $zero, L_808009C0
    if (ctx->r5 == 0) {
        // 0x808009B0: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_808009C0;
    }
    goto skip_0;
    // 0x808009B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808009B4: jal         0x80000548
    // 0x808009B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    ncpod_entrypoint_7(rdram, ctx);
        goto after_4;
    // 0x808009B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x808009BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_808009C0:
    // 0x808009C0: jal         0x80000BC0
    // 0x808009C4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    ncpod_entrypoint_19(rdram, ctx);
        goto after_5;
    // 0x808009C4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x808009C8: jal         0x8000006C
    // 0x808009CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8080006C_ncpod(rdram, ctx);
        goto after_6;
    // 0x808009CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_6:
    // 0x808009D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808009D4:
    // 0x808009D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808009DC: jr          $ra
    // 0x808009E0: nop

    return;
    // 0x808009E0: nop

;}
RECOMP_FUNC void ncpod_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808009E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808009F4: jal         0x80110024
    // 0x808009F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x808009F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808009FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800A00: jal         0x800A940C
    // 0x80800A04: lw          $a0, 0x38($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X38);
    func_800A940C(rdram, ctx);
        goto after_1;
    // 0x80800A04: lw          $a0, 0x38($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X38);
    after_1:
    // 0x80800A08: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A10: jal         0x800005C0
    // 0x80800A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ncpod_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x80800A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800A18: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80800A1C: bnel        $t6, $zero, L_80800AB4
    if (ctx->r14 != 0) {
        // 0x80800A20: lw          $t3, 0x10($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X10);
            goto L_80800AB4;
    }
    goto skip_0;
    // 0x80800A20: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x80800A24: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80800A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A2C: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x80800A30: bne         $t7, $zero, L_80800AB0
    if (ctx->r15 != 0) {
        // 0x80800A34: andi        $t8, $v0, 0x4000
        ctx->r24 = ctx->r2 & 0X4000;
            goto L_80800AB0;
    }
    // 0x80800A34: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x80800A38: beq         $t8, $zero, L_80800A48
    if (ctx->r24 == 0) {
        // 0x80800A3C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80800A48;
    }
    // 0x80800A3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800A40: b           L_80800A48
    // 0x80800A44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_80800A48;
    // 0x80800A44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80800A48:
    // 0x80800A48: jal         0x800008AC
    // 0x80800A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ncpod_entrypoint_15(rdram, ctx);
        goto after_3;
    // 0x80800A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800A50: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x80800A54: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800A58: sll         $t0, $t9, 12
    ctx->r8 = S32(ctx->r25 << 12);
    // 0x80800A5C: bgezl       $t0, L_80800A74
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80800A60: lwc1        $f0, 0x44($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
            goto L_80800A74;
    }
    goto skip_1;
    // 0x80800A60: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    skip_1:
    // 0x80800A64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800A68: b           L_80800A78
    // 0x80800A6C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
        goto L_80800A78;
    // 0x80800A6C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800A70: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
L_80800A74:
    // 0x80800A74: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_80800A78:
    // 0x80800A78: jal         0x800C5148
    // 0x80800A7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800C5148(rdram, ctx);
        goto after_4;
    // 0x80800A7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800A80: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x80800A84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800A88: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80800A8C: bgezl       $t2, L_80800AA4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80800A90: lwc1        $f0, 0x48($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
            goto L_80800AA4;
    }
    goto skip_2;
    // 0x80800A90: lwc1        $f0, 0x48($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
    skip_2:
    // 0x80800A94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800A98: b           L_80800AA8
    // 0x80800A9C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
        goto L_80800AA8;
    // 0x80800A9C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800AA0: lwc1        $f0, 0x48($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
L_80800AA4:
    // 0x80800AA4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_80800AA8:
    // 0x80800AA8: jal         0x800C51A4
    // 0x80800AAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800C51A4(rdram, ctx);
        goto after_5;
    // 0x80800AAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
L_80800AB0:
    // 0x80800AB0: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_80800AB4:
    // 0x80800AB4: andi        $t4, $t3, 0x10
    ctx->r12 = ctx->r11 & 0X10;
    // 0x80800AB8: beq         $t4, $zero, L_80800AC8
    if (ctx->r12 == 0) {
        // 0x80800ABC: nop
    
            goto L_80800AC8;
    }
    // 0x80800ABC: nop

    // 0x80800AC0: jal         0x80000038
    // 0x80800AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800038_ncpod(rdram, ctx);
        goto after_6;
    // 0x80800AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_80800AC8:
    // 0x80800AC8: jal         0x800000AC
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000AC_ncpod(rdram, ctx);
        goto after_7;
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800AD0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80800AD4: beq         $t5, $zero, L_80800AE8
    if (ctx->r13 == 0) {
        // 0x80800AD8: nop
    
            goto L_80800AE8;
    }
    // 0x80800AD8: nop

    // 0x80800ADC: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x80800AE0: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x80800AE4: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
L_80800AE8:
    // 0x80800AE8: jal         0x80015178
    // 0x80800AEC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_80015178(rdram, ctx);
        goto after_8;
    // 0x80800AEC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_8:
    // 0x80800AF0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80800AF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800AF8: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x80800AFC: beq         $t8, $zero, L_80800B0C
    if (ctx->r24 == 0) {
        // 0x80800B00: sll         $t9, $v0, 15
        ctx->r25 = S32(ctx->r2 << 15);
            goto L_80800B0C;
    }
    // 0x80800B00: sll         $t9, $v0, 15
    ctx->r25 = S32(ctx->r2 << 15);
    // 0x80800B04: b           L_80800B1C
    // 0x80800B08: addiu       $s0, $zero, 0x200
    ctx->r16 = ADD32(0, 0X200);
        goto L_80800B1C;
    // 0x80800B08: addiu       $s0, $zero, 0x200
    ctx->r16 = ADD32(0, 0X200);
L_80800B0C:
    // 0x80800B0C: bgez        $t9, L_80800B1C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80800B10: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80800B1C;
    }
    // 0x80800B10: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800B14: b           L_80800B1C
    // 0x80800B18: lui         $s0, 0x1
    ctx->r16 = S32(0X1 << 16);
        goto L_80800B1C;
    // 0x80800B18: lui         $s0, 0x1
    ctx->r16 = S32(0X1 << 16);
L_80800B1C:
    // 0x80800B1C: jal         0x8010F9C0
    // 0x80800B20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8010F9C0(rdram, ctx);
        goto after_9;
    // 0x80800B20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80800B24: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x80800B28: bnel        $s0, $at, L_80800B4C
    if (ctx->r16 != ctx->r1) {
        // 0x80800B2C: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_80800B4C;
    }
    goto skip_3;
    // 0x80800B2C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    skip_3:
    // 0x80800B30: jal         0x80110014
    // 0x80800B34: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80110014(rdram, ctx);
        goto after_10;
    // 0x80800B34: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_10:
    // 0x80800B38: jal         0x801108A0
    // 0x80800B3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801108A0(rdram, ctx);
        goto after_11;
    // 0x80800B3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_11:
    // 0x80800B40: b           L_80800B68
    // 0x80800B44: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_80800B68;
    // 0x80800B44: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80800B48: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
L_80800B4C:
    // 0x80800B4C: bnel        $s0, $at, L_80800B68
    if (ctx->r16 != ctx->r1) {
        // 0x80800B50: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_80800B68;
    }
    goto skip_4;
    // 0x80800B50: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x80800B54: jal         0x80110014
    // 0x80800B58: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80110014(rdram, ctx);
        goto after_12;
    // 0x80800B58: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_12:
    // 0x80800B5C: jal         0x80110928
    // 0x80800B60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110928(rdram, ctx);
        goto after_13;
    // 0x80800B60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_13:
    // 0x80800B64: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_80800B68:
    // 0x80800B68: bnel        $t0, $zero, L_80800B7C
    if (ctx->r8 != 0) {
        // 0x80800B6C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800B7C;
    }
    goto skip_5;
    // 0x80800B6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x80800B70: jal         0x8010FD88
    // 0x80800B74: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8010FD88(rdram, ctx);
        goto after_14;
    // 0x80800B74: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_14:
    // 0x80800B78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800B7C:
    // 0x80800B7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800B84: jr          $ra
    // 0x80800B88: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800B88: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void ncpod_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B94: jal         0x80110024
    // 0x80800B98: nop

    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80800B98: nop

    after_0:
    // 0x80800B9C: bne         $v0, $zero, L_80800BAC
    if (ctx->r2 != 0) {
        // 0x80800BA0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800BAC;
    }
    // 0x80800BA0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800BA4: b           L_80800BB0
    // 0x80800BA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80800BB0;
    // 0x80800BA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80800BAC:
    // 0x80800BAC: lh          $v0, 0x3C($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X3C);
L_80800BB0:
    // 0x80800BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800BB8: jr          $ra
    // 0x80800BBC: nop

    return;
    // 0x80800BBC: nop

;}
RECOMP_FUNC void ncpod_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800BCC: jal         0x800007D8
    // 0x80800BD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_808007D8_ncpod(rdram, ctx);
        goto after_0;
    // 0x80800BD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800BD4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BD8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800BDC: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    // 0x80800BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800BE8: jr          $ra
    // 0x80800BEC: nop

    return;
    // 0x80800BEC: nop

;}
RECOMP_FUNC void ncpod_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800BFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800C00: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800C04: jal         0x80110024
    // 0x80800C08: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80800C08: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800C0C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800C10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800C14: jal         0x800005C0
    // 0x80800C18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ncpod_entrypoint_12(rdram, ctx);
        goto after_1;
    // 0x80800C18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800C1C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C20: jal         0x80089638
    // 0x80800C24: lh          $a0, 0x2($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X2);
    _ncpoducam_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800C24: lh          $a0, 0x2($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X2);
    after_2:
    // 0x80800C28: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800C2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800C30: jal         0x80089650
    // 0x80800C34: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    _ncpoducam_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x80800C34: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80800C38: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C3C: jal         0x80000BC0
    // 0x80800C40: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    ncpod_entrypoint_19(rdram, ctx);
        goto after_4;
    // 0x80800C40: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x80800C44: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800C48: beql        $a1, $zero, L_80800C5C
    if (ctx->r5 == 0) {
        // 0x80800C4C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800C5C;
    }
    goto skip_0;
    // 0x80800C4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x80800C50: jal         0x80089648
    // 0x80800C54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _ncpoducam_entrypoint_3(rdram, ctx);
        goto after_5;
    // 0x80800C54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_5:
    // 0x80800C58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80800C5C:
    // 0x80800C5C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800C60: jal         0x80089640
    // 0x80800C64: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    _ncpoducam_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x80800C64: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x80800C68: jal         0x8010FD88
    // 0x80800C6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8010FD88(rdram, ctx);
        goto after_7;
    // 0x80800C6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x80800C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800C78: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80800C7C: jr          $ra
    // 0x80800C80: nop

    return;
    // 0x80800C80: nop

;}
RECOMP_FUNC void ncpod_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800C90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800C94: jal         0x80110024
    // 0x80800C98: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80800C98: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800C9C: jal         0x800895D0
    // 0x80800CA0: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    _ncpoddialog_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800CA0: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    after_1:
    // 0x80800CA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800CA8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800CAC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80800CB0: jal         0x80089618
    // 0x80800CB4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    _ncpoddialog_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80800CB4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800CC0: jr          $ra
    // 0x80800CC4: nop

    return;
    // 0x80800CC4: nop

;}
RECOMP_FUNC void ncpod_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800CD4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800CD8: jal         0x800895D0
    // 0x80800CDC: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    _ncpoddialog_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800CDC: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    after_0:
    // 0x80800CE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800CE4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800CE8: jal         0x800895F0
    // 0x80800CEC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    _ncpoddialog_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800CEC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800CF8: jr          $ra
    // 0x80800CFC: nop

    return;
    // 0x80800CFC: nop

;}
RECOMP_FUNC void ncpod_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800D0C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800D10: jal         0x800895D0
    // 0x80800D14: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    _ncpoddialog_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800D14: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    after_0:
    // 0x80800D18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800D1C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D20: jal         0x800895F8
    // 0x80800D24: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    _ncpoddialog_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800D24: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D30: jr          $ra
    // 0x80800D34: nop

    return;
    // 0x80800D34: nop

;}
RECOMP_FUNC void ncpod_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800D44: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800D48: jal         0x800895D0
    // 0x80800D4C: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    _ncpoddialog_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800D4C: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    after_0:
    // 0x80800D50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800D54: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D58: jal         0x80089600
    // 0x80800D5C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    _ncpoddialog_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800D5C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D68: jr          $ra
    // 0x80800D6C: nop

    return;
    // 0x80800D6C: nop

;}
RECOMP_FUNC void ncpod_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800D7C: jal         0x800895D0
    // 0x80800D80: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    _ncpoddialog_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800D80: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    after_0:
    // 0x80800D84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800D88: jal         0x80089608
    // 0x80800D8C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _ncpoddialog_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x80800D8C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80800D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D98: jr          $ra
    // 0x80800D9C: nop

    return;
    // 0x80800D9C: nop

;}
RECOMP_FUNC void ncpod_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DA8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800DAC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800DB0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80800DB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800DB8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80800DBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800DC0: jal         0x80000958
    // 0x80800DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ncpod_entrypoint_16(rdram, ctx);
        goto after_0;
    // 0x80800DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800DC8: bne         $v0, $zero, L_80800DD8
    if (ctx->r2 != 0) {
        // 0x80800DCC: nop
    
            goto L_80800DD8;
    }
    // 0x80800DCC: nop

    // 0x80800DD0: b           L_80800E6C
    // 0x80800DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800E6C;
    // 0x80800DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800DD8:
    // 0x80800DD8: jal         0x80110024
    // 0x80800DDC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x80800DDC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800DE0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800DE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800DE8: jal         0x800005C0
    // 0x80800DEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ncpod_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x80800DEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800DF0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80800DF4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80800DF8: beq         $a1, $zero, L_80800E10
    if (ctx->r5 == 0) {
        // 0x80800DFC: nop
    
            goto L_80800E10;
    }
    // 0x80800DFC: nop

    // 0x80800E00: jal         0x80000548
    // 0x80800E04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    ncpod_entrypoint_7(rdram, ctx);
        goto after_3;
    // 0x80800E04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80800E08: b           L_80800E24
    // 0x80800E0C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
        goto L_80800E24;
    // 0x80800E0C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
L_80800E10:
    // 0x80800E10: beq         $t6, $zero, L_80800E20
    if (ctx->r14 == 0) {
        // 0x80800E14: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_80800E20;
    }
    // 0x80800E14: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800E18: jal         0x80000548
    // 0x80800E1C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    ncpod_entrypoint_7(rdram, ctx);
        goto after_4;
    // 0x80800E1C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_4:
L_80800E20:
    // 0x80800E20: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
L_80800E24:
    // 0x80800E24: jal         0x80089638
    // 0x80800E28: lh          $a0, 0x2($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X2);
    _ncpoducam_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x80800E28: lh          $a0, 0x2($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X2);
    after_5:
    // 0x80800E2C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800E30: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800E34: beql        $a1, $zero, L_80800E48
    if (ctx->r5 == 0) {
        // 0x80800E38: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800E48;
    }
    goto skip_0;
    // 0x80800E38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x80800E3C: jal         0x80089648
    // 0x80800E40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncpoducam_entrypoint_3(rdram, ctx);
        goto after_6;
    // 0x80800E40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x80800E44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80800E48:
    // 0x80800E48: jal         0x80089650
    // 0x80800E4C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    _ncpoducam_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x80800E4C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x80800E50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800E54: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800E58: jal         0x80089640
    // 0x80800E5C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    _ncpoducam_entrypoint_2(rdram, ctx);
        goto after_8;
    // 0x80800E5C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_8:
    // 0x80800E60: jal         0x8010FD88
    // 0x80800E64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8010FD88(rdram, ctx);
        goto after_9;
    // 0x80800E64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x80800E68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800E6C:
    // 0x80800E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800E74: jr          $ra
    // 0x80800E78: nop

    return;
    // 0x80800E78: nop

;}
RECOMP_FUNC void ncpod_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800E80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800E88: jal         0x80110024
    // 0x80800E8C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80800E8C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800E90: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800E94: jal         0x800009E4
    // 0x80800E98: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    ncpod_entrypoint_17(rdram, ctx);
        goto after_1;
    // 0x80800E98: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x80800E9C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800EA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800EA4: jal         0x8010F9C0
    // 0x80800EA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8010F9C0(rdram, ctx);
        goto after_2;
    // 0x80800EA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EB0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80800EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800EB8: jr          $ra
    // 0x80800EBC: nop

    return;
    // 0x80800EBC: nop

;}
RECOMP_FUNC void ncpod_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EC8: jal         0x80110024
    // 0x80800ECC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80800ECC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800ED0: jal         0x80089638
    // 0x80800ED4: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    _ncpoducam_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800ED4: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    after_1:
    // 0x80800ED8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800EDC: jal         0x80089670
    // 0x80800EE0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _ncpoducam_entrypoint_8(rdram, ctx);
        goto after_2;
    // 0x80800EE0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800EEC: jr          $ra
    // 0x80800EF0: nop

    return;
    // 0x80800EF0: nop

;}
RECOMP_FUNC void ncpod_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EFC: jal         0x80110024
    // 0x80800F00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80800F00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800F04: jal         0x80089638
    // 0x80800F08: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    _ncpoducam_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800F08: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    after_1:
    // 0x80800F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800F10: jal         0x80089678
    // 0x80800F14: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _ncpoducam_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80800F14: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F20: jr          $ra
    // 0x80800F24: nop

    return;
    // 0x80800F24: nop

;}
RECOMP_FUNC void ncpod_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F30: jal         0x80110024
    // 0x80800F34: nop

    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80800F34: nop

    after_0:
    // 0x80800F38: jal         0x80089638
    // 0x80800F3C: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    _ncpoducam_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800F3C: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    after_1:
    // 0x80800F40: jal         0x80089680
    // 0x80800F44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncpoducam_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80800F44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F50: jr          $ra
    // 0x80800F54: nop

    return;
    // 0x80800F54: nop

;}
RECOMP_FUNC void ncpod_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F60: jal         0x80110024
    // 0x80800F64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80800F64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800F68: jal         0x80089638
    // 0x80800F6C: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    _ncpoducam_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800F6C: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    after_1:
    // 0x80800F70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800F74: jal         0x80089688
    // 0x80800F78: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _ncpoducam_entrypoint_11(rdram, ctx);
        goto after_2;
    // 0x80800F78: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F84: jr          $ra
    // 0x80800F88: nop

    return;
    // 0x80800F88: nop

;}
RECOMP_FUNC void ncpod_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800F98: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800F9C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800FA0: jal         0x80110024
    // 0x80800FA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80800FA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800FA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800FAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800FB0: jal         0x800005C0
    // 0x80800FB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ncpod_entrypoint_12(rdram, ctx);
        goto after_1;
    // 0x80800FB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80800FB8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80800FBC: jal         0x800896A0
    // 0x80800FC0: lh          $a0, 0x4($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X4);
    _ncpodfixpos_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800FC0: lh          $a0, 0x4($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X4);
    after_2:
    // 0x80800FC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800FC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800FCC: jal         0x800896B8
    // 0x80800FD0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    _ncpodfixpos_entrypoint_5(rdram, ctx);
        goto after_3;
    // 0x80800FD0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80800FD4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800FD8: beql        $a1, $zero, L_80800FEC
    if (ctx->r5 == 0) {
        // 0x80800FDC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800FEC;
    }
    goto skip_0;
    // 0x80800FDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x80800FE0: jal         0x800896B0
    // 0x80800FE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _ncpodfixpos_entrypoint_4(rdram, ctx);
        goto after_4;
    // 0x80800FE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x80800FE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80800FEC:
    // 0x80800FEC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800FF0: jal         0x800896A8
    // 0x80800FF4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    _ncpodfixpos_entrypoint_3(rdram, ctx);
        goto after_5;
    // 0x80800FF4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x80800FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801000: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80801004: jr          $ra
    // 0x80801008: nop

    return;
    // 0x80801008: nop

;}
RECOMP_FUNC void ncpod_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080100C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801014: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80801018: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080101C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80801020: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801024: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80801028: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8080102C: jal         0x80000958
    // 0x80801030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ncpod_entrypoint_16(rdram, ctx);
        goto after_0;
    // 0x80801030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801034: bne         $v0, $zero, L_80801044
    if (ctx->r2 != 0) {
        // 0x80801038: nop
    
            goto L_80801044;
    }
    // 0x80801038: nop

    // 0x8080103C: b           L_808010D8
    // 0x80801040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808010D8;
    // 0x80801040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80801044:
    // 0x80801044: jal         0x80110024
    // 0x80801048: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x80801048: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080104C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80801050: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801054: jal         0x800005C0
    // 0x80801058: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ncpod_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x80801058: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8080105C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80801060: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80801064: beq         $a1, $zero, L_8080107C
    if (ctx->r5 == 0) {
        // 0x80801068: nop
    
            goto L_8080107C;
    }
    // 0x80801068: nop

    // 0x8080106C: jal         0x80000548
    // 0x80801070: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    ncpod_entrypoint_7(rdram, ctx);
        goto after_3;
    // 0x80801070: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80801074: b           L_80801090
    // 0x80801078: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
        goto L_80801090;
    // 0x80801078: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
L_8080107C:
    // 0x8080107C: beq         $t6, $zero, L_8080108C
    if (ctx->r14 == 0) {
        // 0x80801080: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_8080108C;
    }
    // 0x80801080: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80801084: jal         0x80000548
    // 0x80801088: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    ncpod_entrypoint_7(rdram, ctx);
        goto after_4;
    // 0x80801088: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_4:
L_8080108C:
    // 0x8080108C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
L_80801090:
    // 0x80801090: jal         0x800896A0
    // 0x80801094: lh          $a0, 0x4($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X4);
    _ncpodfixpos_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x80801094: lh          $a0, 0x4($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X4);
    after_5:
    // 0x80801098: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8080109C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808010A0: jal         0x800896B8
    // 0x808010A4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    _ncpodfixpos_entrypoint_5(rdram, ctx);
        goto after_6;
    // 0x808010A4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_6:
    // 0x808010A8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808010AC: beql        $a1, $zero, L_808010C0
    if (ctx->r5 == 0) {
        // 0x808010B0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808010C0;
    }
    goto skip_0;
    // 0x808010B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x808010B4: jal         0x800896B0
    // 0x808010B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _ncpodfixpos_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x808010B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_7:
    // 0x808010BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_808010C0:
    // 0x808010C0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x808010C4: jal         0x800896A8
    // 0x808010C8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    _ncpodfixpos_entrypoint_3(rdram, ctx);
        goto after_8;
    // 0x808010C8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_8:
    // 0x808010CC: jal         0x8010FD88
    // 0x808010D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8010FD88(rdram, ctx);
        goto after_9;
    // 0x808010D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x808010D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808010D8:
    // 0x808010D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808010E0: jr          $ra
    // 0x808010E4: nop

    return;
    // 0x808010E4: nop

    // 0x808010E8: nop

    // 0x808010EC: nop

;}
RECOMP_FUNC void func_80800000_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800008: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8080000C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80800010: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x80800014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800018: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8080001C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800020: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    // 0x80800024: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x80800028: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8080002C: jal         0x800EE7F8
    // 0x80800030: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800030: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800034: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80800038: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8080003C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80800040: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80800044: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x80800048: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8080004C: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80800050: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800054: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800058: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080005C: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    // 0x80800060: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80800064: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800068: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8080006C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80800070: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80800074: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80800078: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
    // 0x8080007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800084: jr          $ra
    // 0x80800088: nop

    return;
    // 0x80800088: nop

;}
RECOMP_FUNC void func_8080008C_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080008C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800090: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800098: addiu       $a1, $a2, 0x34
    ctx->r5 = ADD32(ctx->r6, 0X34);
    // 0x8080009C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x808000A0: jal         0x800F1DF4
    // 0x808000A4: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800F1DF4(rdram, ctx);
        goto after_0;
    // 0x808000A4: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
    // 0x808000A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x808000AC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808000B0: jal         0x800F1DCC
    // 0x808000B4: lwc1        $f14, 0x44($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X44);
    func_800F1DCC(rdram, ctx);
        goto after_1;
    // 0x808000B4: lwc1        $f14, 0x44($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X44);
    after_1:
    // 0x808000B8: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x808000BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x808000C4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x808000C8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808000CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808000D0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808000D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808000D8: bc1tl       L_808000FC
    if (c1cs) {
        // 0x808000DC: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_808000FC;
    }
    goto skip_0;
    // 0x808000DC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_0:
    // 0x808000E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808000E4: nop

    // 0x808000E8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x808000EC: nop

    // 0x808000F0: bc1fl       L_80800100
    if (!c1cs) {
        // 0x808000F4: c.lt.s      $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
            goto L_80800100;
    }
    goto skip_1;
    // 0x808000F4: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    skip_1:
    // 0x808000F8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_808000FC:
    // 0x808000FC: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
L_80800100:
    // 0x80800100: nop

    // 0x80800104: bc1fl       L_80800118
    if (!c1cs) {
        // 0x80800108: sb          $zero, 0x214($a2)
        MEM_B(0X214, ctx->r6) = 0;
            goto L_80800118;
    }
    goto skip_2;
    // 0x80800108: sb          $zero, 0x214($a2)
    MEM_B(0X214, ctx->r6) = 0;
    skip_2:
    // 0x8080010C: b           L_80800118
    // 0x80800110: sb          $t6, 0x214($a2)
    MEM_B(0X214, ctx->r6) = ctx->r14;
        goto L_80800118;
    // 0x80800110: sb          $t6, 0x214($a2)
    MEM_B(0X214, ctx->r6) = ctx->r14;
    // 0x80800114: sb          $zero, 0x214($a2)
    MEM_B(0X214, ctx->r6) = 0;
L_80800118:
    // 0x80800118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080011C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800120: jr          $ra
    // 0x80800124: nop

    return;
    // 0x80800124: nop

;}
RECOMP_FUNC void func_80800128_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800128: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x8080012C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800130: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800134: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800138: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8080013C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800140: sw          $a0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r4;
    // 0x80800144: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x80800148: jal         0x800139F8
    // 0x8080014C: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    func_800139F8(rdram, ctx);
        goto after_0;
    // 0x8080014C: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800150: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800158: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x8080015C: lw          $a1, 0xEC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XEC);
    // 0x80800160: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80800164: jal         0x800D93A0
    // 0x80800168: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    func_800D93A0(rdram, ctx);
        goto after_1;
    // 0x80800168: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8080016C: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x80800170: jal         0x800D965C
    // 0x80800174: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800D965C(rdram, ctx);
        goto after_2;
    // 0x80800174: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_2:
    // 0x80800178: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x8080017C: jal         0x800D9624
    // 0x80800180: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    func_800D9624(rdram, ctx);
        goto after_3;
    // 0x80800180: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    after_3:
    // 0x80800184: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x80800188: jal         0x800D965C
    // 0x8080018C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800D965C(rdram, ctx);
        goto after_4;
    // 0x8080018C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x80800190: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x80800194: lw          $a1, 0xE0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE0);
    // 0x80800198: jal         0x800EFB24
    // 0x8080019C: lw          $a2, 0xE8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE8);
    func_800EFB24(rdram, ctx);
        goto after_5;
    // 0x8080019C: lw          $a2, 0xE8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE8);
    after_5:
    // 0x808001A0: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x808001A4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808001A8: jal         0x800F23D0
    // 0x808001AC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_800F23D0(rdram, ctx);
        goto after_6;
    // 0x808001AC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x808001B0: lw          $v0, 0xF0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XF0);
    // 0x808001B4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808001B8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808001BC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x808001C0: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x808001C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808001C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808001CC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x808001D0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x808001D4: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x808001D8: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x808001DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x808001E0: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x808001E4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x808001E8: div.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x808001EC: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x808001F0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x808001F4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x808001F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x808001FC: mul.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x80800200: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80800204: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80800208: nop

    // 0x8080020C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80800210: nop

    // 0x80800214: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80800218: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x8080021C: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80800220: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x80800224: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x80800228: lwc1        $f16, 0xD8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8080022C: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80800230: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80800234: nop

    // 0x80800238: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8080023C: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x80800240: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80800244: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80800248: nop

    // 0x8080024C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80800250: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80800254: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x80800258: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8080025C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80800260: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80800264: nop

    // 0x80800268: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8080026C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80800270: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800274: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80800278: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8080027C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80800280: nop

    // 0x80800284: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800288: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8080028C: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x80800290: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80800294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800298: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8080029C: nop

    // 0x808002A0: bc1t        L_80800324
    if (c1cs) {
        // 0x808002A4: nop
    
            goto L_80800324;
    }
    // 0x808002A4: nop

    // 0x808002A8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x808002AC: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x808002B0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x808002B4: nop

    // 0x808002B8: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x808002BC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x808002C0: nop

    // 0x808002C4: bc1t        L_80800324
    if (c1cs) {
        // 0x808002C8: nop
    
            goto L_80800324;
    }
    // 0x808002C8: nop

    // 0x808002CC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x808002D0: nop

    // 0x808002D4: bc1t        L_80800324
    if (c1cs) {
        // 0x808002D8: nop
    
            goto L_80800324;
    }
    // 0x808002D8: nop

    // 0x808002DC: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x808002E0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x808002E4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x808002E8: nop

    // 0x808002EC: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808002F0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x808002F4: nop

    // 0x808002F8: bc1t        L_80800324
    if (c1cs) {
        // 0x808002FC: nop
    
            goto L_80800324;
    }
    // 0x808002FC: nop

    // 0x80800300: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x80800304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800308: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8080030C: nop

    // 0x80800310: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80800314: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80800318: nop

    // 0x8080031C: bc1f        L_8080032C
    if (!c1cs) {
        // 0x80800320: nop
    
            goto L_8080032C;
    }
    // 0x80800320: nop

L_80800324:
    // 0x80800324: b           L_8080032C
    // 0x80800328: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080032C;
    // 0x80800328: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080032C:
    // 0x8080032C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800330: jr          $ra
    // 0x80800334: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x80800334: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_80800338_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800338: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080033C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800340: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800344: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80800348: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8080034C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800350: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800354: bne         $t6, $at, L_8080056C
    if (ctx->r14 != ctx->r1) {
        // 0x80800358: sb          $a2, 0x210($a0)
        MEM_B(0X210, ctx->r4) = ctx->r6;
            goto L_8080056C;
    }
    // 0x80800358: sb          $a2, 0x210($a0)
    MEM_B(0X210, ctx->r4) = ctx->r6;
    // 0x8080035C: lbu         $t7, 0x215($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X215);
    // 0x80800360: bnel        $t7, $zero, L_80800374
    if (ctx->r15 != 0) {
        // 0x80800364: lbu         $v1, 0x213($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X213);
            goto L_80800374;
    }
    goto skip_0;
    // 0x80800364: lbu         $v1, 0x213($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X213);
    skip_0:
    // 0x80800368: jal         0x8000008C
    // 0x8080036C: nop

    func_8080008C_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x8080036C: nop

    after_0:
    // 0x80800370: lbu         $v1, 0x213($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X213);
L_80800374:
    // 0x80800374: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080037C: beq         $v1, $zero, L_808003B0
    if (ctx->r3 == 0) {
        // 0x80800380: swc1        $f4, 0x154($s0)
        MEM_W(0X154, ctx->r16) = ctx->f4.u32l;
            goto L_808003B0;
    }
    // 0x80800380: swc1        $f4, 0x154($s0)
    MEM_W(0X154, ctx->r16) = ctx->f4.u32l;
    // 0x80800384: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800388: beq         $v1, $at, L_808003A0
    if (ctx->r3 == ctx->r1) {
        // 0x8080038C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808003A0;
    }
    // 0x8080038C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800390: beql        $v1, $at, L_808003B4
    if (ctx->r3 == ctx->r1) {
        // 0x80800394: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_808003B4;
    }
    goto skip_1;
    // 0x80800394: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_1:
    // 0x80800398: b           L_808003BC
    // 0x8080039C: nop

        goto L_808003BC;
    // 0x8080039C: nop

L_808003A0:
    // 0x808003A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808003A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808003A8: b           L_808003BC
    // 0x808003AC: swc1        $f6, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->f6.u32l;
        goto L_808003BC;
    // 0x808003AC: swc1        $f6, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->f6.u32l;
L_808003B0:
    // 0x808003B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_808003B4:
    // 0x808003B4: nop

    // 0x808003B8: swc1        $f8, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->f8.u32l;
L_808003BC:
    // 0x808003BC: jal         0x800017F4
    // 0x808003C0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_808017F4_ncpoddialog(rdram, ctx);
        goto after_1;
    // 0x808003C0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x808003C4: lb          $a0, 0x211($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X211);
    // 0x808003C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808003CC: beq         $a0, $zero, L_808003E8
    if (ctx->r4 == 0) {
        // 0x808003D0: nop
    
            goto L_808003E8;
    }
    // 0x808003D0: nop

    // 0x808003D4: beq         $a0, $at, L_808003E8
    if (ctx->r4 == ctx->r1) {
        // 0x808003D8: addiu       $a1, $s0, 0xC4
        ctx->r5 = ADD32(ctx->r16, 0XC4);
            goto L_808003E8;
    }
    // 0x808003D8: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    // 0x808003DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E0: jal         0x80000D10
    // 0x808003E4: addiu       $a2, $s0, 0x13C
    ctx->r6 = ADD32(ctx->r16, 0X13C);
    func_80800D10_ncpoddialog(rdram, ctx);
        goto after_2;
    // 0x808003E4: addiu       $a2, $s0, 0x13C
    ctx->r6 = ADD32(ctx->r16, 0X13C);
    after_2:
L_808003E8:
    // 0x808003E8: jal         0x80001B98
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80801B98_ncpoddialog(rdram, ctx);
        goto after_3;
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808003F0: jal         0x800013C0
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808013C0_ncpoddialog(rdram, ctx);
        goto after_4;
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003FC: jal         0x80001504
    // 0x80800400: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_80801504_ncpoddialog(rdram, ctx);
        goto after_5;
    // 0x80800400: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_5:
    // 0x80800404: lb          $a0, 0x211($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X211);
    // 0x80800408: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8080040C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80800410: beql        $a0, $at, L_80800570
    if (ctx->r4 == ctx->r1) {
        // 0x80800414: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80800570;
    }
    goto skip_2;
    // 0x80800414: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_2:
    // 0x80800418: lbu         $t8, 0x212($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X212);
    // 0x8080041C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80800420: beql        $t8, $zero, L_808004D8
    if (ctx->r24 == 0) {
        // 0x80800424: lbu         $v1, 0x213($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X213);
            goto L_808004D8;
    }
    goto skip_3;
    // 0x80800424: lbu         $v1, 0x213($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X213);
    skip_3:
    // 0x80800428: bnel        $a0, $at, L_808004D8
    if (ctx->r4 != ctx->r1) {
        // 0x8080042C: lbu         $v1, 0x213($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X213);
            goto L_808004D8;
    }
    goto skip_4;
    // 0x8080042C: lbu         $v1, 0x213($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X213);
    skip_4:
    // 0x80800430: bnel        $a1, $zero, L_808004D8
    if (ctx->r5 != 0) {
        // 0x80800434: lbu         $v1, 0x213($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X213);
            goto L_808004D8;
    }
    goto skip_5;
    // 0x80800434: lbu         $v1, 0x213($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X213);
    skip_5:
    // 0x80800438: jal         0x80110024
    // 0x8080043C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_80110024(rdram, ctx);
        goto after_6;
    // 0x8080043C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80800440: lb          $a3, 0x211($s0)
    ctx->r7 = MEM_B(ctx->r16, 0X211);
    // 0x80800444: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80800448: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080044C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800450: jal         0x800894E8
    // 0x80800454: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    _ncpod_entrypoint_5(rdram, ctx);
        goto after_7;
    // 0x80800454: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    after_7:
    // 0x80800458: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8080045C: beq         $v0, $at, L_808004B0
    if (ctx->r2 == ctx->r1) {
        // 0x80800460: addiu       $t9, $zero, 0x9
        ctx->r25 = ADD32(0, 0X9);
            goto L_808004B0;
    }
    // 0x80800460: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80800464: jal         0x80110024
    // 0x80800468: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_80110024(rdram, ctx);
        goto after_8;
    // 0x80800468: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x8080046C: lb          $a3, 0x211($s0)
    ctx->r7 = MEM_B(ctx->r16, 0X211);
    // 0x80800470: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80800474: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800478: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8080047C: jal         0x800894E8
    // 0x80800480: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    _ncpod_entrypoint_5(rdram, ctx);
        goto after_9;
    // 0x80800480: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_9:
    // 0x80800484: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800488: bne         $v0, $at, L_80800498
    if (ctx->r2 != ctx->r1) {
        // 0x8080048C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800498;
    }
    // 0x8080048C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800490: b           L_80800574
    // 0x80800494: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800574;
    // 0x80800494: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800498:
    // 0x80800498: sb          $zero, 0x212($s0)
    MEM_B(0X212, ctx->r16) = 0;
    // 0x8080049C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x808004A0: jal         0x80000338
    // 0x808004A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80800338_ncpoddialog(rdram, ctx);
        goto after_10;
    // 0x808004A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x808004A8: b           L_80800570
    // 0x808004AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80800570;
    // 0x808004AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_808004B0:
    // 0x808004B0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x808004B4: sb          $t9, 0x211($s0)
    MEM_B(0X211, ctx->r16) = ctx->r25;
    // 0x808004B8: sb          $t0, 0x212($s0)
    MEM_B(0X212, ctx->r16) = ctx->r8;
    // 0x808004BC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x808004C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C4: jal         0x80000338
    // 0x808004C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80800338_ncpoddialog(rdram, ctx);
        goto after_11;
    // 0x808004C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_11:
    // 0x808004CC: b           L_80800570
    // 0x808004D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80800570;
    // 0x808004D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x808004D4: lbu         $v1, 0x213($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X213);
L_808004D8:
    // 0x808004D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808004DC: beq         $v1, $zero, L_808004F4
    if (ctx->r3 == 0) {
        // 0x808004E0: nop
    
            goto L_808004F4;
    }
    // 0x808004E0: nop

    // 0x808004E4: beq         $v1, $at, L_80800518
    if (ctx->r3 == ctx->r1) {
        // 0x808004E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800518;
    }
    // 0x808004E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004EC: bnel        $v1, $at, L_80800570
    if (ctx->r3 != ctx->r1) {
        // 0x808004F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80800570;
    }
    goto skip_6;
    // 0x808004F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_6:
L_808004F4:
    // 0x808004F4: bne         $v0, $zero, L_80800518
    if (ctx->r2 != 0) {
        // 0x808004F8: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_80800518;
    }
    // 0x808004F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x808004FC: sb          $t1, 0x213($s0)
    MEM_B(0X213, ctx->r16) = ctx->r9;
    // 0x80800500: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800508: jal         0x80000338
    // 0x8080050C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80800338_ncpoddialog(rdram, ctx);
        goto after_12;
    // 0x8080050C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_12:
    // 0x80800510: b           L_80800570
    // 0x80800514: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80800570;
    // 0x80800514: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80800518:
    // 0x80800518: bne         $a1, $zero, L_80800560
    if (ctx->r5 != 0) {
        // 0x8080051C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800560;
    }
    // 0x8080051C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800520: beq         $a0, $at, L_8080053C
    if (ctx->r4 == ctx->r1) {
        // 0x80800524: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8080053C;
    }
    // 0x80800524: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80800528: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8080052C: beq         $a0, $at, L_8080053C
    if (ctx->r4 == ctx->r1) {
        // 0x80800530: addiu       $t2, $zero, 0x8
        ctx->r10 = ADD32(0, 0X8);
            goto L_8080053C;
    }
    // 0x80800530: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80800534: b           L_80800544
    // 0x80800538: sb          $t2, 0x211($s0)
    MEM_B(0X211, ctx->r16) = ctx->r10;
        goto L_80800544;
    // 0x80800538: sb          $t2, 0x211($s0)
    MEM_B(0X211, ctx->r16) = ctx->r10;
L_8080053C:
    // 0x8080053C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80800540: sb          $t3, 0x211($s0)
    MEM_B(0X211, ctx->r16) = ctx->r11;
L_80800544:
    // 0x80800544: sb          $t4, 0x212($s0)
    MEM_B(0X212, ctx->r16) = ctx->r12;
    // 0x80800548: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800550: jal         0x80000338
    // 0x80800554: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80800338_ncpoddialog(rdram, ctx);
        goto after_13;
    // 0x80800554: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_13:
    // 0x80800558: b           L_80800570
    // 0x8080055C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80800570;
    // 0x8080055C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80800560:
    // 0x80800560: addiu       $a0, $s0, 0x200
    ctx->r4 = ADD32(ctx->r16, 0X200);
    // 0x80800564: jal         0x800EE7F8
    // 0x80800568: addiu       $a1, $s0, 0x1F4
    ctx->r5 = ADD32(ctx->r16, 0X1F4);
    func_800EE7F8(rdram, ctx);
        goto after_14;
    // 0x80800568: addiu       $a1, $s0, 0x1F4
    ctx->r5 = ADD32(ctx->r16, 0X1F4);
    after_14:
L_8080056C:
    // 0x8080056C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80800570:
    // 0x80800570: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800574:
    // 0x80800574: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800578: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080057C: jr          $ra
    // 0x80800580: nop

    return;
    // 0x80800580: nop

;}
RECOMP_FUNC void func_80800584_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800584: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800588: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8080058C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80800590: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80800594: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80800598: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8080059C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808005A0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x808005A4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x808005A8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x808005AC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x808005B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x808005B4: jal         0x80000128
    // 0x808005B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80800128_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x808005B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x808005BC: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x808005C0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x808005C4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808005C8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x808005CC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808005D0: bnel        $t7, $zero, L_80800608
    if (ctx->r15 != 0) {
        // 0x808005D4: lwc1        $f18, 0x0($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
            goto L_80800608;
    }
    goto skip_0;
    // 0x808005D4: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x808005D8: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x808005DC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808005E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808005E4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x808005E8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x808005EC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808005F0: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x808005F4: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808005F8: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    // 0x808005FC: b           L_80800680
    // 0x80800600: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_80800680;
    // 0x80800600: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80800604: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
L_80800608:
    // 0x80800608: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8080060C: nop

    // 0x80800610: bc1fl       L_80800624
    if (!c1cs) {
        // 0x80800614: lwc1        $f4, 0x0($s1)
        ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
            goto L_80800624;
    }
    goto skip_1;
    // 0x80800614: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x80800618: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x8080061C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80800620: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
L_80800624:
    // 0x80800624: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800628: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8080062C: nop

    // 0x80800630: bc1fl       L_80800644
    if (!c1cs) {
        // 0x80800634: lwc1        $f8, 0x34($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
            goto L_80800644;
    }
    goto skip_2;
    // 0x80800634: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x80800638: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    // 0x8080063C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80800640: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
L_80800644:
    // 0x80800644: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80800648: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8080064C: nop

    // 0x80800650: bc1fl       L_80800664
    if (!c1cs) {
        // 0x80800654: lwc1        $f18, 0x4($s1)
        ctx->f18.u32l = MEM_W(ctx->r17, 0X4);
            goto L_80800664;
    }
    goto skip_3;
    // 0x80800654: lwc1        $f18, 0x4($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4);
    skip_3:
    // 0x80800658: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8080065C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80800660: lwc1        $f18, 0x4($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4);
L_80800664:
    // 0x80800664: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800668: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8080066C: nop

    // 0x80800670: bc1fl       L_80800684
    if (!c1cs) {
        // 0x80800674: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800684;
    }
    goto skip_4;
    // 0x80800674: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x80800678: swc1        $f16, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f16.u32l;
    // 0x8080067C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80800680:
    // 0x80800680: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800684:
    // 0x80800684: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800688: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8080068C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800690: jr          $ra
    // 0x80800694: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800694: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80800698_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800698: lb          $t6, 0x211($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X211);
    // 0x8080069C: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x808006A0: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x808006A4: beq         $at, $zero, L_808006C8
    if (ctx->r1 == 0) {
        // 0x808006A8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_808006C8;
    }
    // 0x808006A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808006AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(776, 0X29C0) << 16);
    // 0x808006B0: addu        $at, $at, $t7
    gpr jr_addend_808006B8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808006B4: lw          $t7, 0x29C0($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(776, 0X29C0));
    // 0x808006B8: jr          $t7
    // 0x808006BC: nop

    switch (jr_addend_808006B8 >> 2) {
        case 0: goto L_808006C0; break;
        case 1: goto L_808006C8; break;
        case 2: goto L_808006C0; break;
        case 3: goto L_808006C0; break;
        case 4: goto L_808006C0; break;
        case 5: goto L_808006C8; break;
        case 6: goto L_808006C0; break;
        case 7: goto L_808006C0; break;
        default: switch_error(__func__, 0x808006B8, 0x808029C0);
    }
    // 0x808006BC: nop

L_808006C0:
    // 0x808006C0: jr          $ra
    // 0x808006C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x808006C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808006C8:
    // 0x808006C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808006CC: jr          $ra
    // 0x808006D0: nop

    return;
    // 0x808006D0: nop

;}
RECOMP_FUNC void func_808006D4_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006D4: lb          $t6, 0x211($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X211);
    // 0x808006D8: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x808006DC: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x808006E0: beq         $at, $zero, L_80800704
    if (ctx->r1 == 0) {
        // 0x808006E4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80800704;
    }
    // 0x808006E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808006E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(776, 0X29E0) << 16);
    // 0x808006EC: addu        $at, $at, $t7
    gpr jr_addend_808006F4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808006F0: lw          $t7, 0x29E0($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(776, 0X29E0));
    // 0x808006F4: jr          $t7
    // 0x808006F8: nop

    switch (jr_addend_808006F4 >> 2) {
        case 0: goto L_808006FC; break;
        case 1: goto L_808006FC; break;
        case 2: goto L_808006FC; break;
        case 3: goto L_80800704; break;
        case 4: goto L_808006FC; break;
        case 5: goto L_80800704; break;
        case 6: goto L_808006FC; break;
        case 7: goto L_808006FC; break;
        default: switch_error(__func__, 0x808006F4, 0x808029E0);
    }
    // 0x808006F8: nop

L_808006FC:
    // 0x808006FC: jr          $ra
    // 0x80800700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800704:
    // 0x80800704: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800708: jr          $ra
    // 0x8080070C: nop

    return;
    // 0x8080070C: nop

;}
RECOMP_FUNC void func_80800710_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800710: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80800714: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80800718: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8080071C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80800720: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80800724: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80800728: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8080072C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80800730: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80800734: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80800738: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8080073C: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80800740: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80800744: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    // 0x80800748: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x8080074C: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x80800750: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x80800754: jal         0x800006D4
    // 0x80800758: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    func_808006D4_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x80800758: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    after_0:
    // 0x8080075C: beql        $v0, $zero, L_808008CC
    if (ctx->r2 == 0) {
        // 0x80800760: addiu       $s1, $sp, 0xB0
        ctx->r17 = ADD32(ctx->r29, 0XB0);
            goto L_808008CC;
    }
    goto skip_0;
    // 0x80800760: addiu       $s1, $sp, 0xB0
    ctx->r17 = ADD32(ctx->r29, 0XB0);
    skip_0:
    // 0x80800764: lw          $v0, 0xC8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC8);
    // 0x80800768: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8080076C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800770: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800774: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80800778: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8080077C: addiu       $fp, $sp, 0xBC
    ctx->r30 = ADD32(ctx->r29, 0XBC);
    // 0x80800780: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800784: addiu       $s3, $v0, 0x40
    ctx->r19 = ADD32(ctx->r2, 0X40);
    // 0x80800788: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8080078C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80800790: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80800794: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x80800798: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8080079C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x808007A0: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    // 0x808007A4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x808007A8: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x808007AC: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x808007B0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x808007B4: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x808007B8: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x808007BC: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    // 0x808007C0: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x808007C4: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x808007C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x808007CC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x808007D0: jal         0x800EF5A0
    // 0x808007D4: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    func_800EF5A0(rdram, ctx);
        goto after_1;
    // 0x808007D4: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x808007D8: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x808007DC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x808007E0: jal         0x800EF04C
    // 0x808007E4: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x808007E4: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    after_2:
    // 0x808007E8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x808007EC: sw          $v1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r3;
    // 0x808007F0: addiu       $s7, $sp, 0xA0
    ctx->r23 = ADD32(ctx->r29, 0XA0);
    // 0x808007F4: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x808007F8: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x808007FC: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x80800800: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x80800804: addiu       $s1, $sp, 0xB0
    ctx->r17 = ADD32(ctx->r29, 0XB0);
L_80800808:
    // 0x80800808: lw          $v1, 0xAC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XAC);
    // 0x8080080C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80800810: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x80800814: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80800818: nop

    // 0x8080081C: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
L_80800820:
    // 0x80800820: lw          $v0, 0xA8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA8);
    // 0x80800824: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80800828: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8080082C: nop

    // 0x80800830: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800834: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
L_80800838:
    // 0x80800838: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8080083C: lwc1        $f16, 0x98($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80800840: mul.s       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80800844: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80800848: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080084C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80800850: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80800854: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800858: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8080085C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80800860: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80800864: jal         0x800EF5A0
    // 0x80800868: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800EF5A0(rdram, ctx);
        goto after_3;
    // 0x80800868: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8080086C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800870: jal         0x800EF04C
    // 0x80800874: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800EF04C(rdram, ctx);
        goto after_4;
    // 0x80800874: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_4:
    // 0x80800878: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080087C: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x80800880: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    // 0x80800884: lw          $a3, 0xD4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD4);
    // 0x80800888: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x8080088C: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80800890: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x80800894: jal         0x80000584
    // 0x80800898: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    func_80800584_ncpoddialog(rdram, ctx);
        goto after_5;
    // 0x80800898: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    after_5:
    // 0x8080089C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x808008A0: bnel        $s0, $s2, L_80800838
    if (ctx->r16 != ctx->r18) {
        // 0x808008A4: lwc1        $f10, 0x94($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
            goto L_80800838;
    }
    goto skip_1;
    // 0x808008A4: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    skip_1:
    // 0x808008A8: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x808008AC: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x808008B0: bne         $t7, $s2, L_80800820
    if (ctx->r15 != ctx->r18) {
        // 0x808008B4: sw          $t7, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->r15;
            goto L_80800820;
    }
    // 0x808008B4: sw          $t7, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r15;
    // 0x808008B8: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x808008BC: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x808008C0: bne         $t9, $s2, L_80800808
    if (ctx->r25 != ctx->r18) {
        // 0x808008C4: sw          $t9, 0xAC($sp)
        MEM_W(0XAC, ctx->r29) = ctx->r25;
            goto L_80800808;
    }
    // 0x808008C4: sw          $t9, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r25;
    // 0x808008C8: addiu       $s1, $sp, 0xB0
    ctx->r17 = ADD32(ctx->r29, 0XB0);
L_808008CC:
    // 0x808008CC: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x808008D0: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x808008D4: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x808008D8: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x808008DC: addiu       $s7, $sp, 0xA0
    ctx->r23 = ADD32(ctx->r29, 0XA0);
    // 0x808008E0: addiu       $fp, $sp, 0xBC
    ctx->r30 = ADD32(ctx->r29, 0XBC);
    // 0x808008E4: jal         0x80000698
    // 0x808008E8: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    func_80800698_ncpoddialog(rdram, ctx);
        goto after_6;
    // 0x808008E8: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    after_6:
    // 0x808008EC: beql        $v0, $zero, L_80800A64
    if (ctx->r2 == 0) {
        // 0x808008F0: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_80800A64;
    }
    goto skip_2;
    // 0x808008F0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_2:
    // 0x808008F4: lw          $v0, 0xC8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC8);
    // 0x808008F8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808008FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800900: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80800904: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80800908: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8080090C: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
    // 0x80800910: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80800914: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800918: addiu       $a1, $v0, 0x4C
    ctx->r5 = ADD32(ctx->r2, 0X4C);
    // 0x8080091C: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80800920: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x80800924: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80800928: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8080092C: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x80800930: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80800934: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x80800938: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8080093C: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x80800940: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80800944: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    // 0x80800948: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8080094C: jal         0x800EE7F8
    // 0x80800950: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x80800950: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x80800954: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800958: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8080095C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80800960: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80800964: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x80800968: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x8080096C: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x80800970: jal         0x800EF5A0
    // 0x80800974: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800EF5A0(rdram, ctx);
        goto after_8;
    // 0x80800974: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x80800978: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x8080097C: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800984: jal         0x800EE7F8
    // 0x80800988: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    func_800EE7F8(rdram, ctx);
        goto after_9;
    // 0x80800988: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    after_9:
    // 0x8080098C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80800990: jal         0x800EF04C
    // 0x80800994: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_10;
    // 0x80800994: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x80800998: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8080099C: sw          $t0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r8;
L_808009A0:
    // 0x808009A0: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x808009A4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x808009A8: sw          $t1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r9;
    // 0x808009AC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x808009B0: nop

    // 0x808009B4: cvt.s.w     $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    ctx->f22.fl = CVT_S_W(ctx->f18.u32l);
L_808009B8:
    // 0x808009B8: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x808009BC: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x808009C0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x808009C4: nop

    // 0x808009C8: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808009CC: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
L_808009D0:
    // 0x808009D0: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x808009D4: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x808009D8: mul.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x808009DC: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x808009E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808009E4: mul.s       $f16, $f8, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x808009E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x808009EC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x808009F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808009F4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x808009F8: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x808009FC: jal         0x800EF5A0
    // 0x80800A00: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800EF5A0(rdram, ctx);
        goto after_11;
    // 0x80800A00: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x80800A04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800A08: jal         0x800EF04C
    // 0x80800A0C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800EF04C(rdram, ctx);
        goto after_12;
    // 0x80800A0C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_12:
    // 0x80800A10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800A14: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x80800A18: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    // 0x80800A1C: lw          $a3, 0xD4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD4);
    // 0x80800A20: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80800A24: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80800A28: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x80800A2C: jal         0x80000584
    // 0x80800A30: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    func_80800584_ncpoddialog(rdram, ctx);
        goto after_13;
    // 0x80800A30: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    after_13:
    // 0x80800A34: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80800A38: bnel        $s0, $s2, L_808009D0
    if (ctx->r16 != ctx->r18) {
        // 0x80800A3C: lwc1        $f6, 0x70($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
            goto L_808009D0;
    }
    goto skip_3;
    // 0x80800A3C: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    skip_3:
    // 0x80800A40: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    // 0x80800A44: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x80800A48: bne         $t5, $s2, L_808009B8
    if (ctx->r13 != ctx->r18) {
        // 0x80800A4C: sw          $t5, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->r13;
            goto L_808009B8;
    }
    // 0x80800A4C: sw          $t5, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r13;
    // 0x80800A50: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x80800A54: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x80800A58: bne         $t7, $s2, L_808009A0
    if (ctx->r15 != ctx->r18) {
        // 0x80800A5C: sw          $t7, 0xAC($sp)
        MEM_W(0XAC, ctx->r29) = ctx->r15;
            goto L_808009A0;
    }
    // 0x80800A5C: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x80800A60: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_80800A64:
    // 0x80800A64: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80800A68: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x80800A6C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80800A70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80800A74: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80800A78: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80800A7C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80800A80: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80800A84: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80800A88: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80800A8C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80800A90: jr          $ra
    // 0x80800A94: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x80800A94: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_80800A98_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A98: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800A9C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80800AA0: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80800AA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800AA8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80800AAC: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x80800AB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800AB4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800AB8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800ABC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80800AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AC4: jal         0x800EFA4C
    // 0x80800AC8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x80800AC8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x80800ACC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80800AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AD4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800AD8: jal         0x800EF9A8
    // 0x80800ADC: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    func_800EF9A8(rdram, ctx);
        goto after_1;
    // 0x80800ADC: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    after_1:
    // 0x80800AE0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80800AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800AEC: jal         0x800EF8BC
    // 0x80800AF0: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    func_800EF8BC(rdram, ctx);
        goto after_2;
    // 0x80800AF0: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    after_2:
    // 0x80800AF4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80800AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800B00: jal         0x800EF934
    // 0x80800B04: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    func_800EF934(rdram, ctx);
        goto after_3;
    // 0x80800B04: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    after_3:
    // 0x80800B08: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800B0C: jal         0x800EF04C
    // 0x80800B10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_4;
    // 0x80800B10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80800B14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800B20: jr          $ra
    // 0x80800B24: nop

    return;
    // 0x80800B24: nop

;}
RECOMP_FUNC void func_80800B28_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B28: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800B2C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80800B30: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(776, 0X2A40) << 16);
    // 0x80800B34: addiu       $t8, $t8, 0x2A40
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(776, 0X2A40));
    // 0x80800B38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80800B3C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80800B40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80800B44: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80800B48: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80800B4C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800B50: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80800B54: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800B58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800B5C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80800B60: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80800B64: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80800B68: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x80800B6C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x80800B70: jal         0x80000A98
    // 0x80800B74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80800A98_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x80800B74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80800B78: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80800B7C: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80800B80: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80800B84: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80800B88: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80800B8C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80800B90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80800B94: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80800B98: jal         0x80000710
    // 0x80800B9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80800710_ncpoddialog(rdram, ctx);
        goto after_1;
    // 0x80800B9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x80800BA0: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800BA4: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800BA8: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x80800BAC: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80800BB0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80800BB4: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80800BB8: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80800BBC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800BC0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80800BC4: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800BC8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80800BCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800BD0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800BD4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80800BD8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800BDC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80800BE0: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80800BE4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800BE8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80800BEC: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    // 0x80800BF0: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800BF4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800BF8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80800BFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800C00: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x80800C04: beq         $a1, $at, L_80800C18
    if (ctx->r5 == ctx->r1) {
        // 0x80800C08: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800C18;
    }
    // 0x80800C08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800C0C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80800C10: bnel        $a1, $at, L_80800D08
    if (ctx->r5 != ctx->r1) {
        // 0x80800C14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80800D08;
    }
    goto skip_0;
    // 0x80800C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_80800C18:
    // 0x80800C18: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80800C1C: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800C20: addiu       $t1, $t0, 0x14
    ctx->r9 = ADD32(ctx->r8, 0X14);
    // 0x80800C24: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80800C28: nop

    // 0x80800C2C: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800C30: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80800C34: nop

    // 0x80800C38: bc1t        L_80800CB4
    if (c1cs) {
        // 0x80800C3C: nop
    
            goto L_80800CB4;
    }
    // 0x80800C3C: nop

    // 0x80800C40: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x80800C44: addiu       $t3, $t2, -0x14
    ctx->r11 = ADD32(ctx->r10, -0X14);
    // 0x80800C48: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80800C4C: nop

    // 0x80800C50: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80800C54: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80800C58: nop

    // 0x80800C5C: bc1t        L_80800CB4
    if (c1cs) {
        // 0x80800C60: nop
    
            goto L_80800CB4;
    }
    // 0x80800C60: nop

    // 0x80800C64: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x80800C68: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800C6C: addiu       $t5, $t4, 0x14
    ctx->r13 = ADD32(ctx->r12, 0X14);
    // 0x80800C70: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80800C74: nop

    // 0x80800C78: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800C7C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80800C80: nop

    // 0x80800C84: bc1t        L_80800CB4
    if (c1cs) {
        // 0x80800C88: nop
    
            goto L_80800CB4;
    }
    // 0x80800C88: nop

    // 0x80800C8C: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x80800C90: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800C94: addiu       $t7, $t6, -0x14
    ctx->r15 = ADD32(ctx->r14, -0X14);
    // 0x80800C98: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80800C9C: nop

    // 0x80800CA0: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800CA4: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x80800CA8: nop

    // 0x80800CAC: bc1fl       L_80800CC0
    if (!c1cs) {
        // 0x80800CB0: c.lt.s      $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
            goto L_80800CC0;
    }
    goto skip_1;
    // 0x80800CB0: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    skip_1:
L_80800CB4:
    // 0x80800CB4: b           L_80800D08
    // 0x80800CB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800D08;
    // 0x80800CB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800CBC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
L_80800CC0:
    // 0x80800CC0: nop

    // 0x80800CC4: bc1t        L_80800CFC
    if (c1cs) {
        // 0x80800CC8: nop
    
            goto L_80800CFC;
    }
    // 0x80800CC8: nop

    // 0x80800CCC: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x80800CD0: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80800CD4: bc1t        L_80800CFC
    if (c1cs) {
        // 0x80800CD8: nop
    
            goto L_80800CFC;
    }
    // 0x80800CD8: nop

    // 0x80800CDC: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x80800CE0: nop

    // 0x80800CE4: bc1t        L_80800CFC
    if (c1cs) {
        // 0x80800CE8: nop
    
            goto L_80800CFC;
    }
    // 0x80800CE8: nop

    // 0x80800CEC: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x80800CF0: nop

    // 0x80800CF4: bc1fl       L_80800D08
    if (!c1cs) {
        // 0x80800CF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80800D08;
    }
    goto skip_2;
    // 0x80800CF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
L_80800CFC:
    // 0x80800CFC: b           L_80800D08
    // 0x80800D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800D08;
    // 0x80800D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800D04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800D08:
    // 0x80800D08: jr          $ra
    // 0x80800D0C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80800D0C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80800D10_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D10: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80800D14: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80800D18: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80800D1C: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80800D20: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80800D24: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80800D28: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x80800D2C: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80800D30: addiu       $s7, $sp, 0x60
    ctx->r23 = ADD32(ctx->r29, 0X60);
    // 0x80800D34: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80800D38: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80800D3C: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x80800D40: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80800D44: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80800D48: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80800D4C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80800D50: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800D54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800D58: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80800D5C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x80800D60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800D64: jal         0x800A8A04
    // 0x80800D68: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    func_800A8A04(rdram, ctx);
        goto after_0;
    // 0x80800D68: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_0:
    // 0x80800D6C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80800D70: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80800D74: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800D78: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80800D7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800D80: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80800D84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800D88: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
    // 0x80800D8C: addiu       $s3, $sp, 0x78
    ctx->r19 = ADD32(ctx->r29, 0X78);
    // 0x80800D90: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x80800D94: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x80800D98: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80800D9C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80800DA0: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x80800DA4: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x80800DA8: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x80800DAC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80800DB0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800DB4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80800DB8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80800DBC: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800DC0: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80800DC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80800DC8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800DCC: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x80800DD0: jal         0x80000B28
    // 0x80800DD4: nop

    func_80800B28_ncpoddialog(rdram, ctx);
        goto after_1;
    // 0x80800DD4: nop

    after_1:
    // 0x80800DD8: lb          $v1, 0x211($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X211);
    // 0x80800DDC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80800DE0: beq         $v1, $at, L_80800F5C
    if (ctx->r3 == ctx->r1) {
        // 0x80800DE4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80800F5C;
    }
    // 0x80800DE4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80800DE8: beql        $v1, $at, L_80800F60
    if (ctx->r3 == ctx->r1) {
        // 0x80800DEC: lbu         $t7, 0x217($s4)
        ctx->r15 = MEM_BU(ctx->r20, 0X217);
            goto L_80800F60;
    }
    goto skip_0;
    // 0x80800DEC: lbu         $t7, 0x217($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X217);
    skip_0:
    // 0x80800DF0: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x80800DF4: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80800DF8: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80800DFC: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800E00: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x80800E04: nop

    // 0x80800E08: bc1f        L_80800E50
    if (!c1cs) {
        // 0x80800E0C: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80800E50;
    }
    // 0x80800E0C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_80800E10:
    // 0x80800E10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800E14: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80800E18: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800E1C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80800E20: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800E24: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80800E28: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80800E2C: jal         0x80000B28
    // 0x80800E30: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80800B28_ncpoddialog(rdram, ctx);
        goto after_2;
    // 0x80800E30: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_2:
    // 0x80800E34: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80800E38: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x80800E3C: nop

    // 0x80800E40: bc1fl       L_80800E54
    if (!c1cs) {
        // 0x80800E44: c.lt.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
            goto L_80800E54;
    }
    goto skip_1;
    // 0x80800E44: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    skip_1:
    // 0x80800E48: bnel        $s0, $s1, L_80800E10
    if (ctx->r16 != ctx->r17) {
        // 0x80800E4C: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80800E10;
    }
    goto skip_2;
    // 0x80800E4C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    skip_2:
L_80800E50:
    // 0x80800E50: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_80800E54:
    // 0x80800E54: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80800E58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800E5C: bc1f        L_80800EA4
    if (!c1cs) {
        // 0x80800E60: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_80800EA4;
    }
    // 0x80800E60: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
L_80800E64:
    // 0x80800E64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800E68: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80800E6C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800E70: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80800E74: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800E78: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80800E7C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80800E80: jal         0x80000B28
    // 0x80800E84: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80800B28_ncpoddialog(rdram, ctx);
        goto after_3;
    // 0x80800E84: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_3:
    // 0x80800E88: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80800E8C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80800E90: nop

    // 0x80800E94: bc1fl       L_80800EA8
    if (!c1cs) {
        // 0x80800E98: addiu       $t4, $zero, 0x72
        ctx->r12 = ADD32(0, 0X72);
            goto L_80800EA8;
    }
    goto skip_3;
    // 0x80800E98: addiu       $t4, $zero, 0x72
    ctx->r12 = ADD32(0, 0X72);
    skip_3:
    // 0x80800E9C: bnel        $s0, $s1, L_80800E64
    if (ctx->r16 != ctx->r17) {
        // 0x80800EA0: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_80800E64;
    }
    goto skip_4;
    // 0x80800EA0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    skip_4:
L_80800EA4:
    // 0x80800EA4: addiu       $t4, $zero, 0x72
    ctx->r12 = ADD32(0, 0X72);
L_80800EA8:
    // 0x80800EA8: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80800EAC: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80800EB0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800EB4: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80800EB8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80800EBC: nop

    // 0x80800EC0: bc1f        L_80800F08
    if (!c1cs) {
        // 0x80800EC4: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_80800F08;
    }
    // 0x80800EC4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
L_80800EC8:
    // 0x80800EC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800ECC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80800ED0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800ED4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80800ED8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800EDC: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80800EE0: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80800EE4: jal         0x80000B28
    // 0x80800EE8: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80800B28_ncpoddialog(rdram, ctx);
        goto after_4;
    // 0x80800EE8: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_4:
    // 0x80800EEC: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80800EF0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80800EF4: nop

    // 0x80800EF8: bc1fl       L_80800F0C
    if (!c1cs) {
        // 0x80800EFC: c.lt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_80800F0C;
    }
    goto skip_5;
    // 0x80800EFC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    skip_5:
    // 0x80800F00: bnel        $s0, $s1, L_80800EC8
    if (ctx->r16 != ctx->r17) {
        // 0x80800F04: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_80800EC8;
    }
    goto skip_6;
    // 0x80800F04: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    skip_6:
L_80800F08:
    // 0x80800F08: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_80800F0C:
    // 0x80800F0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800F10: bc1f        L_80800F58
    if (!c1cs) {
        // 0x80800F14: addiu       $t6, $zero, 0x4
        ctx->r14 = ADD32(0, 0X4);
            goto L_80800F58;
    }
    // 0x80800F14: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
L_80800F18:
    // 0x80800F18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800F1C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800F20: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800F24: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80800F28: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800F2C: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80800F30: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80800F34: jal         0x80000B28
    // 0x80800F38: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80800B28_ncpoddialog(rdram, ctx);
        goto after_5;
    // 0x80800F38: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_5:
    // 0x80800F3C: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80800F40: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x80800F44: nop

    // 0x80800F48: bc1fl       L_80800F5C
    if (!c1cs) {
        // 0x80800F4C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80800F5C;
    }
    goto skip_7;
    // 0x80800F4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_7:
    // 0x80800F50: bnel        $s0, $s1, L_80800F18
    if (ctx->r16 != ctx->r17) {
        // 0x80800F54: addiu       $t6, $zero, 0x4
        ctx->r14 = ADD32(0, 0X4);
            goto L_80800F18;
    }
    goto skip_8;
    // 0x80800F54: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    skip_8:
L_80800F58:
    // 0x80800F58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80800F5C:
    // 0x80800F5C: lbu         $t7, 0x217($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X217);
L_80800F60:
    // 0x80800F60: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800F64: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80800F68: bne         $t7, $zero, L_80800FC8
    if (ctx->r15 != 0) {
        // 0x80800F6C: or          $a2, $s6, $zero
        ctx->r6 = ctx->r22 | 0;
            goto L_80800FC8;
    }
    // 0x80800F6C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800F70: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80800F74: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80800F78: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80800F7C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80800F80: jal         0x80000B28
    // 0x80800F84: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80800B28_ncpoddialog(rdram, ctx);
        goto after_6;
    // 0x80800F84: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_6:
    // 0x80800F88: beq         $v0, $zero, L_80800FC4
    if (ctx->r2 == 0) {
        // 0x80800F8C: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_80800FC4;
    }
    // 0x80800F8C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
L_80800F90:
    // 0x80800F90: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80800F94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800F98: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800F9C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80800FA0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800FA4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80800FA8: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80800FAC: jal         0x80000B28
    // 0x80800FB0: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80800B28_ncpoddialog(rdram, ctx);
        goto after_7;
    // 0x80800FB0: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_7:
    // 0x80800FB4: beq         $v0, $zero, L_80800FC4
    if (ctx->r2 == 0) {
        // 0x80800FB8: slti        $at, $s0, 0xA
        ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
            goto L_80800FC4;
    }
    // 0x80800FB8: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80800FBC: bnel        $at, $zero, L_80800F90
    if (ctx->r1 != 0) {
        // 0x80800FC0: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_80800F90;
    }
    goto skip_9;
    // 0x80800FC0: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    skip_9:
L_80800FC4:
    // 0x80800FC4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80800FC8:
    // 0x80800FC8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80800FCC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80800FD0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800FD4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80800FD8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800FDC: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80800FE0: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80800FE4: jal         0x80000B28
    // 0x80800FE8: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80800B28_ncpoddialog(rdram, ctx);
        goto after_8;
    // 0x80800FE8: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_8:
    // 0x80800FEC: bne         $v0, $zero, L_80801028
    if (ctx->r2 != 0) {
        // 0x80800FF0: addiu       $t1, $zero, 0x6
        ctx->r9 = ADD32(0, 0X6);
            goto L_80801028;
    }
    // 0x80800FF0: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
L_80800FF4:
    // 0x80800FF4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80800FF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800FFC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80801000: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80801004: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80801008: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x8080100C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80801010: jal         0x80000B28
    // 0x80801014: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80800B28_ncpoddialog(rdram, ctx);
        goto after_9;
    // 0x80801014: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_9:
    // 0x80801018: bne         $v0, $zero, L_80801028
    if (ctx->r2 != 0) {
        // 0x8080101C: slti        $at, $s0, 0xA
        ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
            goto L_80801028;
    }
    // 0x8080101C: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80801020: bnel        $at, $zero, L_80800FF4
    if (ctx->r1 != 0) {
        // 0x80801024: addiu       $t1, $zero, 0x6
        ctx->r9 = ADD32(0, 0X6);
            goto L_80800FF4;
    }
    goto skip_10;
    // 0x80801024: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    skip_10:
L_80801028:
    // 0x80801028: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8080102C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80801030: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80801034: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80801038: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8080103C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80801040: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80801044: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80801048: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x8080104C: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x80801050: jr          $ra
    // 0x80801054: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80801054: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80801058_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080105C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801060: lbu         $t6, 0x212($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X212);
    // 0x80801064: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80801068: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8080106C: beq         $t6, $zero, L_80801084
    if (ctx->r14 == 0) {
        // 0x80801070: nop
    
            goto L_80801084;
    }
    // 0x80801070: nop

    // 0x80801074: jal         0x80000338
    // 0x80801078: sb          $zero, 0x212($a0)
    MEM_B(0X212, ctx->r4) = 0;
    func_80800338_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x80801078: sb          $zero, 0x212($a0)
    MEM_B(0X212, ctx->r4) = 0;
    after_0:
    // 0x8080107C: b           L_80801088
    // 0x80801080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80801088;
    // 0x80801080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801084:
    // 0x80801084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801088:
    // 0x80801088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080108C: jr          $ra
    // 0x80801090: nop

    return;
    // 0x80801090: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801098: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080109C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808010A0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x808010A4: jal         0x8001B798
    // 0x808010A8: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x808010A8: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x808010AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808010B4: jr          $ra
    // 0x808010B8: nop

    return;
    // 0x808010B8: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808010C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808010C8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x808010CC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x808010D0: jal         0x80001094
    // 0x808010D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ncpoddialog_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x808010D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x808010D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808010DC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808010E0: jal         0x80001058
    // 0x808010E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80801058_ncpoddialog(rdram, ctx);
        goto after_1;
    // 0x808010E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x808010E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808010EC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x808010F0: bne         $v0, $at, L_80801100
    if (ctx->r2 != ctx->r1) {
        // 0x808010F4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80801100;
    }
    // 0x808010F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808010F8: b           L_8080113C
    // 0x808010FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080113C;
    // 0x808010FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801100:
    // 0x80801100: lbu         $v0, 0x210($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X210);
    // 0x80801104: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801108: beq         $v0, $at, L_80801134
    if (ctx->r2 == ctx->r1) {
        // 0x8080110C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80801134;
    }
    // 0x8080110C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801110: bne         $v0, $at, L_80801134
    if (ctx->r2 != ctx->r1) {
        // 0x80801114: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80801134;
    }
    // 0x80801114: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80801118: jal         0x800015CC
    // 0x8080111C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808015CC_ncpoddialog(rdram, ctx);
        goto after_2;
    // 0x8080111C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80801120: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80801124: bne         $v0, $at, L_80801134
    if (ctx->r2 != ctx->r1) {
        // 0x80801128: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80801134;
    }
    // 0x80801128: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8080112C: b           L_8080113C
    // 0x80801130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080113C;
    // 0x80801130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801134:
    // 0x80801134: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80801138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080113C:
    // 0x8080113C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801140: jr          $ra
    // 0x80801144: nop

    return;
    // 0x80801144: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801148: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8080114C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80801150: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80801154: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80801158: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8080115C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80801160: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80801164: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80801168: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8080116C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80801170: jal         0x8001B668
    // 0x80801174: addiu       $a1, $zero, 0x21C
    ctx->r5 = ADD32(0, 0X21C);
    func_8001B668(rdram, ctx);
        goto after_0;
    // 0x80801174: addiu       $a1, $zero, 0x21C
    ctx->r5 = ADD32(0, 0X21C);
    after_0:
    // 0x80801178: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8080117C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80801180: sh          $v0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r2;
    // 0x80801184: jal         0x80001094
    // 0x80801188: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    ncpoddialog_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80801188: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x8080118C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80801190: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80801194: sb          $t7, 0x210($v0)
    MEM_B(0X210, ctx->r2) = ctx->r15;
    // 0x80801198: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8080119C: addiu       $s1, $v0, 0x58
    ctx->r17 = ADD32(ctx->r2, 0X58);
    // 0x808011A0: addiu       $s2, $v0, 0xD0
    ctx->r18 = ADD32(ctx->r2, 0XD0);
    // 0x808011A4: addiu       $s3, $v0, 0x188
    ctx->r19 = ADD32(ctx->r2, 0X188);
    // 0x808011A8: addiu       $s4, $zero, 0x78
    ctx->r20 = ADD32(0, 0X78);
L_808011AC:
    // 0x808011AC: jal         0x800EFD24
    // 0x808011B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x808011B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x808011B4: jal         0x800EFD24
    // 0x808011B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x808011B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x808011BC: jal         0x800EFD24
    // 0x808011C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800EFD24(rdram, ctx);
        goto after_4;
    // 0x808011C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x808011C4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x808011C8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x808011CC: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x808011D0: bne         $s0, $s4, L_808011AC
    if (ctx->r16 != ctx->r20) {
        // 0x808011D4: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_808011AC;
    }
    // 0x808011D4: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x808011D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x808011DC: addiu       $a0, $s5, 0x148
    ctx->r4 = ADD32(ctx->r21, 0X148);
    // 0x808011E0: jal         0x800EFD24
    // 0x808011E4: swc1        $f20, 0x20C($s5)
    MEM_W(0X20C, ctx->r21) = ctx->f20.u32l;
    func_800EFD24(rdram, ctx);
        goto after_5;
    // 0x808011E4: swc1        $f20, 0x20C($s5)
    MEM_W(0X20C, ctx->r21) = ctx->f20.u32l;
    after_5:
    // 0x808011E8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x808011EC: swc1        $f20, 0x154($s5)
    MEM_W(0X154, ctx->r21) = ctx->f20.u32l;
    // 0x808011F0: sb          $t8, 0x211($s5)
    MEM_B(0X211, ctx->r21) = ctx->r24;
    // 0x808011F4: sb          $zero, 0x212($s5)
    MEM_B(0X212, ctx->r21) = 0;
    // 0x808011F8: sb          $zero, 0x213($s5)
    MEM_B(0X213, ctx->r21) = 0;
    // 0x808011FC: sb          $zero, 0x214($s5)
    MEM_B(0X214, ctx->r21) = 0;
    // 0x80801200: sb          $zero, 0x215($s5)
    MEM_B(0X215, ctx->r21) = 0;
    // 0x80801204: sb          $zero, 0x217($s5)
    MEM_B(0X217, ctx->r21) = 0;
    // 0x80801208: jal         0x800EFD24
    // 0x8080120C: addiu       $a0, $s5, 0x170
    ctx->r4 = ADD32(ctx->r21, 0X170);
    func_800EFD24(rdram, ctx);
        goto after_6;
    // 0x8080120C: addiu       $a0, $s5, 0x170
    ctx->r4 = ADD32(ctx->r21, 0X170);
    after_6:
    // 0x80801210: jal         0x800EFD24
    // 0x80801214: addiu       $a0, $s5, 0x17C
    ctx->r4 = ADD32(ctx->r21, 0X17C);
    func_800EFD24(rdram, ctx);
        goto after_7;
    // 0x80801214: addiu       $a0, $s5, 0x17C
    ctx->r4 = ADD32(ctx->r21, 0X17C);
    after_7:
    // 0x80801218: jal         0x800EFD24
    // 0x8080121C: addiu       $a0, $s5, 0x200
    ctx->r4 = ADD32(ctx->r21, 0X200);
    func_800EFD24(rdram, ctx);
        goto after_8;
    // 0x8080121C: addiu       $a0, $s5, 0x200
    ctx->r4 = ADD32(ctx->r21, 0X200);
    after_8:
    // 0x80801220: addiu       $s2, $s5, 0x28
    ctx->r18 = ADD32(ctx->r21, 0X28);
    // 0x80801224: addiu       $s3, $s5, 0x40
    ctx->r19 = ADD32(ctx->r21, 0X40);
    // 0x80801228: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
    // 0x8080122C: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x80801230: addiu       $s5, $zero, 0x18
    ctx->r21 = ADD32(0, 0X18);
    // 0x80801234: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80801238:
    // 0x80801238: jal         0x800EFD24
    // 0x8080123C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800EFD24(rdram, ctx);
        goto after_9;
    // 0x8080123C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x80801240: jal         0x800EFD24
    // 0x80801244: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800EFD24(rdram, ctx);
        goto after_10;
    // 0x80801244: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x80801248: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8080124C: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x80801250: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x80801254: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x80801258: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
    // 0x8080125C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80801260: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x80801264: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80801268: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8080126C: bne         $s1, $s5, L_80801238
    if (ctx->r17 != ctx->r21) {
        // 0x80801270: swc1        $f20, 0x1C($s4)
        MEM_W(0X1C, ctx->r20) = ctx->f20.u32l;
            goto L_80801238;
    }
    // 0x80801270: swc1        $f20, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->f20.u32l;
    // 0x80801274: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80801278: lh          $v0, 0x3E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X3E);
    // 0x8080127C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80801280: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80801284: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80801288: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8080128C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80801290: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80801294: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80801298: jr          $ra
    // 0x8080129C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8080129C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_808012A0_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808012A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808012AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808012B0: jal         0x800F690C
    // 0x808012B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800F690C(rdram, ctx);
        goto after_0;
    // 0x808012B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x808012B8: bnel        $v0, $zero, L_808012D4
    if (ctx->r2 != 0) {
        // 0x808012BC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808012D4;
    }
    goto skip_0;
    // 0x808012BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x808012C0: jal         0x800F693C
    // 0x808012C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F693C(rdram, ctx);
        goto after_1;
    // 0x808012C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808012C8: beq         $v0, $zero, L_808012E8
    if (ctx->r2 == 0) {
        // 0x808012CC: nop
    
            goto L_808012E8;
    }
    // 0x808012CC: nop

    // 0x808012D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_808012D4:
    // 0x808012D4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808012D8: jal         0x80087928
    // 0x808012DC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    _plcamera_entrypoint_14(rdram, ctx);
        goto after_2;
    // 0x808012DC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808012E0: b           L_80801304
    // 0x808012E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80801304;
    // 0x808012E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808012E8:
    // 0x808012E8: jal         0x800F5EF8
    // 0x808012EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F5EF8(rdram, ctx);
        goto after_3;
    // 0x808012EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808012F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808012F4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808012F8: jal         0x8010FFB0
    // 0x808012FC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_8010FFB0(rdram, ctx);
        goto after_4;
    // 0x808012FC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80801300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801304:
    // 0x80801304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801308: jr          $ra
    // 0x8080130C: nop

    return;
    // 0x8080130C: nop

;}
RECOMP_FUNC void func_80801310_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801310: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801318: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8080131C: jal         0x80110024
    // 0x80801320: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x80801320: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80801324: jal         0x800894E0
    // 0x80801328: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncpod_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801328: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080132C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80801330: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801334: addiu       $a1, $v1, 0x158
    ctx->r5 = ADD32(ctx->r3, 0X158);
    // 0x80801338: addiu       $a2, $v1, 0x164
    ctx->r6 = ADD32(ctx->r3, 0X164);
    // 0x8080133C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80801340: jal         0x800012A0
    // 0x80801344: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_808012A0_ncpoddialog(rdram, ctx);
        goto after_2;
    // 0x80801344: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_2:
    // 0x80801348: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8080134C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80801350: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x80801354: jal         0x800EE7F8
    // 0x80801358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x80801358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x8080135C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80801360: jal         0x800EE7F8
    // 0x80801364: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x80801364: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x80801368: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8080136C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801370: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80801374: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80801378: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    // 0x8080137C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80801380: jal         0x800EF214
    // 0x80801384: nop

    func_800EF214(rdram, ctx);
        goto after_5;
    // 0x80801384: nop

    after_5:
    // 0x80801388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080138C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801390: jr          $ra
    // 0x80801394: nop

    return;
    // 0x80801394: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080139C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808013A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808013A4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x808013A8: jal         0x8001B754
    // 0x808013AC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B754(rdram, ctx);
        goto after_0;
    // 0x808013AC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x808013B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808013B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808013B8: jr          $ra
    // 0x808013BC: nop

    return;
    // 0x808013BC: nop

;}
RECOMP_FUNC void func_808013C0_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013C0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x808013C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808013C8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808013CC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x808013D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808013D4: jal         0x800006D4
    // 0x808013D8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_808006D4_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x808013D8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_0:
    // 0x808013DC: beq         $v0, $zero, L_8080145C
    if (ctx->r2 == 0) {
        // 0x808013E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080145C;
    }
    // 0x808013E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808013E8: jal         0x80000000
    // 0x808013EC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_1;
    // 0x808013EC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x808013F0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808013F4: jal         0x800EE7F8
    // 0x808013F8: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x808013F8: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    after_2:
    // 0x808013FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80801400: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801404: lui         $a3, 0x86
    ctx->r7 = S32(0X86 << 16);
    // 0x80801408: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x8080140C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80801410: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80801414: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x80801418: jal         0x800BF340
    // 0x8080141C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800BF340(rdram, ctx);
        goto after_3;
    // 0x8080141C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80801420: beq         $v0, $zero, L_80801430
    if (ctx->r2 == 0) {
        // 0x80801424: addiu       $a0, $sp, 0x40
        ctx->r4 = ADD32(ctx->r29, 0X40);
            goto L_80801430;
    }
    // 0x80801424: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80801428: b           L_8080145C
    // 0x8080142C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8080145C;
    // 0x8080142C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80801430:
    // 0x80801430: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80801434: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801438: lui         $a3, 0x86
    ctx->r7 = S32(0X86 << 16);
    // 0x8080143C: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x80801440: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80801444: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x80801448: jal         0x800BF340
    // 0x8080144C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800BF340(rdram, ctx);
        goto after_4;
    // 0x8080144C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80801450: beq         $v0, $zero, L_8080145C
    if (ctx->r2 == 0) {
        // 0x80801454: nop
    
            goto L_8080145C;
    }
    // 0x80801454: nop

    // 0x80801458: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8080145C:
    // 0x8080145C: jal         0x80000698
    // 0x80801460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800698_ncpoddialog(rdram, ctx);
        goto after_5;
    // 0x80801460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801464: beq         $v0, $zero, L_808014EC
    if (ctx->r2 == 0) {
        // 0x80801468: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808014EC;
    }
    // 0x80801468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080146C: addiu       $t6, $s0, 0xC4
    ctx->r14 = ADD32(ctx->r16, 0XC4);
    // 0x80801470: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80801474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801478: jal         0x80000000
    // 0x8080147C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_6;
    // 0x8080147C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_6:
    // 0x80801480: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80801484: jal         0x800EE7F8
    // 0x80801488: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x80801488: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x8080148C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80801490: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80801494: lui         $a3, 0x86
    ctx->r7 = S32(0X86 << 16);
    // 0x80801498: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x8080149C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808014A0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x808014A4: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x808014A8: jal         0x800BF340
    // 0x808014AC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800BF340(rdram, ctx);
        goto after_8;
    // 0x808014AC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x808014B0: beq         $v0, $zero, L_808014C0
    if (ctx->r2 == 0) {
        // 0x808014B4: addiu       $a0, $sp, 0x40
        ctx->r4 = ADD32(ctx->r29, 0X40);
            goto L_808014C0;
    }
    // 0x808014B4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x808014B8: b           L_808014EC
    // 0x808014BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_808014EC;
    // 0x808014BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_808014C0:
    // 0x808014C0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808014C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808014C8: lui         $a3, 0x86
    ctx->r7 = S32(0X86 << 16);
    // 0x808014CC: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x808014D0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x808014D4: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x808014D8: jal         0x800BF340
    // 0x808014DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800BF340(rdram, ctx);
        goto after_9;
    // 0x808014DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x808014E0: beql        $v0, $zero, L_808014F0
    if (ctx->r2 == 0) {
        // 0x808014E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808014F0;
    }
    goto skip_0;
    // 0x808014E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x808014E8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_808014EC:
    // 0x808014EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808014F0:
    // 0x808014F0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x808014F4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808014F8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808014FC: jr          $ra
    // 0x80801500: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80801500: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80801504_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801504: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80801508: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x8080150C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80801510: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80801514: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x80801518: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x8080151C: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80801520: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80801524: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80801528: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8080152C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80801530: lui         $s5, 0x86
    ctx->r21 = S32(0X86 << 16);
    // 0x80801534: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80801538: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8080153C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x80801540: ori         $s5, $s5, 0x20
    ctx->r21 = ctx->r21 | 0X20;
    // 0x80801544: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80801548: addiu       $s1, $a0, 0x64
    ctx->r17 = ADD32(ctx->r4, 0X64);
    // 0x8080154C: addiu       $s2, $a0, 0x58
    ctx->r18 = ADD32(ctx->r4, 0X58);
    // 0x80801550: addiu       $s3, $sp, 0x60
    ctx->r19 = ADD32(ctx->r29, 0X60);
    // 0x80801554: addiu       $s4, $sp, 0x6C
    ctx->r20 = ADD32(ctx->r29, 0X6C);
    // 0x80801558: addiu       $s6, $zero, 0x6C
    ctx->r22 = ADD32(0, 0X6C);
L_8080155C:
    // 0x8080155C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80801560: jal         0x800EE7F8
    // 0x80801564: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80801564: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80801568: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8080156C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80801570: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80801574: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x80801578: jal         0x800BF340
    // 0x8080157C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_800BF340(rdram, ctx);
        goto after_1;
    // 0x8080157C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x80801580: beq         $v0, $zero, L_8080158C
    if (ctx->r2 == 0) {
        // 0x80801584: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8080158C;
    }
    // 0x80801584: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80801588: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_8080158C:
    // 0x8080158C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80801590: bne         $s0, $s6, L_8080155C
    if (ctx->r16 != ctx->r22) {
        // 0x80801594: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8080155C;
    }
    // 0x80801594: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80801598: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8080159C: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x808015A0: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x808015A4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808015A8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x808015AC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x808015B0: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x808015B4: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x808015B8: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x808015BC: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x808015C0: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x808015C4: jr          $ra
    // 0x808015C8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x808015C8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_808015CC_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015CC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808015D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808015D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808015D8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x808015DC: lbu         $v0, 0x213($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X213);
    // 0x808015E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808015E4: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x808015E8: beql        $v0, $zero, L_80801628
    if (ctx->r2 == 0) {
        // 0x808015EC: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_80801628;
    }
    goto skip_0;
    // 0x808015EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x808015F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808015F4: beq         $v0, $at, L_80801638
    if (ctx->r2 == ctx->r1) {
        // 0x808015F8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80801638;
    }
    // 0x808015F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808015FC: beq         $v0, $at, L_8080160C
    if (ctx->r2 == ctx->r1) {
        // 0x80801600: lwc1        $f16, 0x40($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
            goto L_8080160C;
    }
    // 0x80801600: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80801604: b           L_80801644
    // 0x80801608: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
        goto L_80801644;
    // 0x80801608: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
L_8080160C:
    // 0x8080160C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80801610: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80801614: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80801618: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080161C: b           L_80801644
    // 0x80801620: nop

        goto L_80801644;
    // 0x80801620: nop

    // 0x80801624: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_80801628:
    // 0x80801628: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8080162C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80801630: b           L_80801644
    // 0x80801634: nop

        goto L_80801644;
    // 0x80801634: nop

L_80801638:
    // 0x80801638: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(776, 0X2A00) << 16);
    // 0x8080163C: lwc1        $f16, 0x2A00($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(776, 0X2A00));
    // 0x80801640: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_80801644:
    // 0x80801644: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(776, 0X2A04) << 16);
    // 0x80801648: lwc1        $f0, 0x2A04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(776, 0X2A04));
    // 0x8080164C: lwc1        $f12, 0x20C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x80801650: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(776, 0X2A08) << 16);
    // 0x80801654: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80801658: nop

    // 0x8080165C: bc1f        L_80801684
    if (!c1cs) {
        // 0x80801660: nop
    
            goto L_80801684;
    }
    // 0x80801660: nop

    // 0x80801664: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80801668: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080166C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80801670: jal         0x800F10B4
    // 0x80801674: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x80801674: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80801678: swc1        $f0, 0x154($s0)
    MEM_W(0X154, ctx->r16) = ctx->f0.u32l;
    // 0x8080167C: b           L_808016B0
    // 0x80801680: lwc1        $f12, 0x20C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20C);
        goto L_808016B0;
    // 0x80801680: lwc1        $f12, 0x20C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20C);
L_80801684:
    // 0x80801684: lwc1        $f14, 0x2A08($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(776, 0X2A08));
    // 0x80801688: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080168C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80801690: nop

    // 0x80801694: bc1fl       L_808016B4
    if (!c1cs) {
        // 0x80801698: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_808016B4;
    }
    goto skip_1;
    // 0x80801698: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x8080169C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x808016A0: jal         0x800F10B4
    // 0x808016A4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x808016A4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x808016A8: swc1        $f0, 0x154($s0)
    MEM_W(0X154, ctx->r16) = ctx->f0.u32l;
    // 0x808016AC: lwc1        $f12, 0x20C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20C);
L_808016B0:
    // 0x808016B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_808016B4:
    // 0x808016B4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808016B8: nop

    // 0x808016BC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x808016C0: nop

    // 0x808016C4: bc1fl       L_80801738
    if (!c1cs) {
        // 0x808016C8: swc1        $f2, 0x20C($s0)
        MEM_W(0X20C, ctx->r16) = ctx->f2.u32l;
            goto L_80801738;
    }
    goto skip_2;
    // 0x808016C8: swc1        $f2, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->f2.u32l;
    skip_2:
    // 0x808016CC: lbu         $t6, 0x213($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X213);
    // 0x808016D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808016D4: addiu       $t7, $s0, 0x58
    ctx->r15 = ADD32(ctx->r16, 0X58);
    // 0x808016D8: bne         $t6, $at, L_808016EC
    if (ctx->r14 != ctx->r1) {
        // 0x808016DC: nop
    
            goto L_808016EC;
    }
    // 0x808016DC: nop

    // 0x808016E0: swc1        $f2, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->f2.u32l;
    // 0x808016E4: b           L_80801780
    // 0x808016E8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
        goto L_80801780;
    // 0x808016E8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_808016EC:
    // 0x808016EC: jal         0x800D8FF8
    // 0x808016F0: nop

    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x808016F0: nop

    after_2:
    // 0x808016F4: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x808016F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808016FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80801700: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80801704: lw          $a2, 0x20C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20C);
    // 0x80801708: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8080170C: addiu       $t8, $t8, -0x6EE8
    ctx->r24 = ADD32(ctx->r24, -0X6EE8);
    // 0x80801710: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    // 0x80801714: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x80801718: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8080171C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80801720: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80801724: jal         0x80089140
    // 0x80801728: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    _mlspline_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x80801728: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x8080172C: b           L_80801780
    // 0x80801730: swc1        $f0, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->f0.u32l;
        goto L_80801780;
    // 0x80801730: swc1        $f0, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->f0.u32l;
    // 0x80801734: swc1        $f2, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->f2.u32l;
L_80801738:
    // 0x80801738: jal         0x80110024
    // 0x8080173C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_80110024(rdram, ctx);
        goto after_4;
    // 0x8080173C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_4:
    // 0x80801740: lb          $a3, 0x211($s0)
    ctx->r7 = MEM_B(ctx->r16, 0X211);
    // 0x80801744: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80801748: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8080174C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80801750: jal         0x800894E8
    // 0x80801754: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    _ncpod_entrypoint_5(rdram, ctx);
        goto after_5;
    // 0x80801754: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_5:
    // 0x80801758: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8080175C: bne         $v0, $at, L_8080176C
    if (ctx->r2 != ctx->r1) {
        // 0x80801760: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080176C;
    }
    // 0x80801760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801764: b           L_808017E0
    // 0x80801768: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_808017E0;
    // 0x80801768: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8080176C:
    // 0x8080176C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80801770: jal         0x80000338
    // 0x80801774: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80800338_ncpoddialog(rdram, ctx);
        goto after_6;
    // 0x80801774: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80801778: addiu       $t9, $s0, 0x58
    ctx->r25 = ADD32(ctx->r16, 0X58);
    // 0x8080177C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_80801780:
    // 0x80801780: lwc1        $f12, 0x20C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x80801784: addiu       $a3, $s0, 0x170
    ctx->r7 = ADD32(ctx->r16, 0X170);
    // 0x80801788: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8080178C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80801790: jal         0x800890F8
    // 0x80801794: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    _mlspline_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x80801794: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x80801798: lwc1        $f12, 0x20C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x8080179C: addiu       $a3, $s0, 0x17C
    ctx->r7 = ADD32(ctx->r16, 0X17C);
    // 0x808017A0: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x808017A4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x808017A8: jal         0x800890F8
    // 0x808017AC: addiu       $a2, $s0, 0xD0
    ctx->r6 = ADD32(ctx->r16, 0XD0);
    _mlspline_entrypoint_4(rdram, ctx);
        goto after_8;
    // 0x808017AC: addiu       $a2, $s0, 0xD0
    ctx->r6 = ADD32(ctx->r16, 0XD0);
    after_8:
    // 0x808017B0: jal         0x80110024
    // 0x808017B4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_80110024(rdram, ctx);
        goto after_9;
    // 0x808017B4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_9:
    // 0x808017B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808017BC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x808017C0: jal         0x80089500
    // 0x808017C4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    _ncpod_entrypoint_8(rdram, ctx);
        goto after_10;
    // 0x808017C4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_10:
    // 0x808017C8: jal         0x80110024
    // 0x808017CC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_80110024(rdram, ctx);
        goto after_11;
    // 0x808017CC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_11:
    // 0x808017D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808017D4: jal         0x80089508
    // 0x808017D8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    _ncpod_entrypoint_9(rdram, ctx);
        goto after_12;
    // 0x808017D8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_12:
    // 0x808017DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808017E0:
    // 0x808017E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808017E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808017E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808017EC: jr          $ra
    // 0x808017F0: nop

    return;
    // 0x808017F0: nop

;}
RECOMP_FUNC void func_808017F4_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808017F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808017FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801800: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801804: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80801808: jal         0x80110024
    // 0x8080180C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80110024(rdram, ctx);
        goto after_0;
    // 0x8080180C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80801810: jal         0x800894E0
    // 0x80801814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncpod_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80801818: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8080181C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801820: jal         0x800023B4
    // 0x80801824: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_808023B4_ncpoddialog(rdram, ctx);
        goto after_2;
    // 0x80801824: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x80801828: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080182C: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    // 0x80801830: jal         0x800012A0
    // 0x80801834: addiu       $a2, $s0, 0xD0
    ctx->r6 = ADD32(ctx->r16, 0XD0);
    func_808012A0_ncpoddialog(rdram, ctx);
        goto after_3;
    // 0x80801834: addiu       $a2, $s0, 0xD0
    ctx->r6 = ADD32(ctx->r16, 0XD0);
    after_3:
    // 0x80801838: jal         0x800136E4
    // 0x8080183C: lwc1        $f12, 0xD0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XD0);
    func_800136E4(rdram, ctx);
        goto after_4;
    // 0x8080183C: lwc1        $f12, 0xD0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XD0);
    after_4:
    // 0x80801840: swc1        $f0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f0.u32l;
    // 0x80801844: jal         0x800136E4
    // 0x80801848: lwc1        $f12, 0xD4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XD4);
    func_800136E4(rdram, ctx);
        goto after_5;
    // 0x80801848: lwc1        $f12, 0xD4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XD4);
    after_5:
    // 0x8080184C: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x80801850: addiu       $a0, $s0, 0x148
    ctx->r4 = ADD32(ctx->r16, 0X148);
    // 0x80801854: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    // 0x80801858: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8080185C: jal         0x800F1DF4
    // 0x80801860: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800F1DF4(rdram, ctx);
        goto after_6;
    // 0x80801860: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_6:
    // 0x80801864: jal         0x800136E4
    // 0x80801868: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800136E4(rdram, ctx);
        goto after_7;
    // 0x80801868: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_7:
    // 0x8080186C: swc1        $f0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->f0.u32l;
    // 0x80801870: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80801874: jal         0x800F1828
    // 0x80801878: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800F1828(rdram, ctx);
        goto after_8;
    // 0x80801878: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_8:
    // 0x8080187C: jal         0x800136E4
    // 0x80801880: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    func_800136E4(rdram, ctx);
        goto after_9;
    // 0x80801880: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    after_9:
    // 0x80801884: swc1        $f0, 0x13C($s0)
    MEM_W(0X13C, ctx->r16) = ctx->f0.u32l;
    // 0x80801888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080188C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801890: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801894: jr          $ra
    // 0x80801898: nop

    return;
    // 0x80801898: nop

;}
RECOMP_FUNC void func_8080189C_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080189C: lui         $at, 0x4332
    ctx->r1 = S32(0X4332 << 16);
    // 0x808018A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808018A4: lwc1        $f2, 0x24($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X24);
    // 0x808018A8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x808018AC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x808018B0: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x808018B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808018B8: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x808018BC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x808018C0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x808018C4: nop

    // 0x808018C8: bc1fl       L_808018E8
    if (!c1cs) {
        // 0x808018CC: add.s       $f10, $f0, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_808018E8;
    }
    goto skip_0;
    // 0x808018CC: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    skip_0:
    // 0x808018D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808018D4: lwc1        $f2, 0x24($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X24);
    // 0x808018D8: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x808018DC: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x808018E0: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x808018E4: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
L_808018E8:
    // 0x808018E8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x808018EC: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x808018F0: nop

    // 0x808018F4: bc1f        L_8080190C
    if (!c1cs) {
        // 0x808018F8: nop
    
            goto L_8080190C;
    }
    // 0x808018F8: nop

    // 0x808018FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80801900: nop

    // 0x80801904: sub.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x80801908: swc1        $f18, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f18.u32l;
L_8080190C:
    // 0x8080190C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(776, 0X2A0C) << 16);
    // 0x80801910: lwc1        $f0, 0x2A0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(776, 0X2A0C));
L_80801914:
    // 0x80801914: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80801918: subu        $a1, $a2, $v0
    ctx->r5 = SUB32(ctx->r6, ctx->r2);
    // 0x8080191C: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80801920: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80801924: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x80801928: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8080192C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80801930: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x80801934: addiu       $t8, $v0, 0x2
    ctx->r24 = ADD32(ctx->r2, 0X2);
    // 0x80801938: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8080193C: addiu       $t9, $a1, -0x2
    ctx->r25 = ADD32(ctx->r5, -0X2);
    // 0x80801940: addiu       $t0, $v0, 0x3
    ctx->r8 = ADD32(ctx->r2, 0X3);
    // 0x80801944: addiu       $t1, $a1, -0x3
    ctx->r9 = ADD32(ctx->r5, -0X3);
    // 0x80801948: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8080194C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80801950: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80801954: mul.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80801958: nop

    // 0x8080195C: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80801960: nop

    // 0x80801964: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80801968: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8080196C: nop

    // 0x80801970: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80801974: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80801978: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8080197C: mul.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80801980: swc1        $f6, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->f6.u32l;
    // 0x80801984: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80801988: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8080198C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80801990: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80801994: nop

    // 0x80801998: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8080199C: nop

    // 0x808019A0: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x808019A4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x808019A8: nop

    // 0x808019AC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x808019B0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x808019B4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x808019B8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x808019BC: swc1        $f18, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->f18.u32l;
    // 0x808019C0: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x808019C4: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x808019C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x808019CC: mul.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x808019D0: nop

    // 0x808019D4: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x808019D8: nop

    // 0x808019DC: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x808019E0: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x808019E4: nop

    // 0x808019E8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x808019EC: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x808019F0: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x808019F4: mul.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x808019F8: swc1        $f6, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f6.u32l;
    // 0x808019FC: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80801A00: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80801A04: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80801A08: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80801A0C: nop

    // 0x80801A10: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80801A14: nop

    // 0x80801A18: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80801A1C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80801A20: bne         $v0, $a2, L_80801914
    if (ctx->r2 != ctx->r6) {
        // 0x80801A24: swc1        $f18, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
            goto L_80801914;
    }
    // 0x80801A24: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x80801A28: jr          $ra
    // 0x80801A2C: nop

    return;
    // 0x80801A2C: nop

;}
RECOMP_FUNC void func_80801A30_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A30: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80801A34: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80801A38: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80801A3C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80801A40: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80801A44: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80801A48: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80801A4C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80801A50: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80801A54: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80801A58: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80801A5C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80801A60: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80801A64: addiu       $s1, $a0, 0x4
    ctx->r17 = ADD32(ctx->r4, 0X4);
    // 0x80801A68: addiu       $s3, $zero, 0x9
    ctx->r19 = ADD32(0, 0X9);
L_80801A6C:
    // 0x80801A6C: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80801A70: lwc1        $f6, 0x24($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X24);
    // 0x80801A74: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80801A78: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    // 0x80801A7C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x80801A80: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80801A84: jal         0x800F10B4
    // 0x80801A88: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x80801A88: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x80801A8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80801A90: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80801A94: bne         $s0, $s3, L_80801A6C
    if (ctx->r16 != ctx->r19) {
        // 0x80801A98: swc1        $f0, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->f0.u32l;
            goto L_80801A6C;
    }
    // 0x80801A98: swc1        $f0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f0.u32l;
    // 0x80801A9C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80801AA0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80801AA4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80801AA8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80801AAC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80801AB0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80801AB4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80801AB8: jr          $ra
    // 0x80801ABC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80801ABC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80801AC0_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801AC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80801AC4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80801AC8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80801ACC: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80801AD0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80801AD4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80801AD8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80801ADC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80801AE0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80801AE4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80801AE8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80801AEC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80801AF0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80801AF4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80801AF8: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x80801AFC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80801B00: addiu       $s0, $a0, 0xC
    ctx->r16 = ADD32(ctx->r4, 0XC);
    // 0x80801B04: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80801B08: addiu       $s2, $a1, 0x4
    ctx->r18 = ADD32(ctx->r5, 0X4);
    // 0x80801B0C: addiu       $s3, $a2, 0x4
    ctx->r19 = ADD32(ctx->r6, 0X4);
    // 0x80801B10: addiu       $s6, $zero, 0x9
    ctx->r22 = ADD32(0, 0X9);
L_80801B14:
    // 0x80801B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B18: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80801B1C: jal         0x800EEB9C
    // 0x80801B20: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    func_800EEB9C(rdram, ctx);
        goto after_0;
    // 0x80801B20: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    after_0:
    // 0x80801B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B28: jal         0x800EF04C
    // 0x80801B2C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800EF04C(rdram, ctx);
        goto after_1;
    // 0x80801B2C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x80801B30: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x80801B34: lwc1        $f6, 0x70($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X70);
    // 0x80801B38: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80801B3C: lw          $a3, 0x4($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X4);
    // 0x80801B40: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x80801B44: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80801B48: jal         0x800F10B4
    // 0x80801B4C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x80801B4C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_2:
    // 0x80801B50: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80801B54: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80801B58: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80801B5C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80801B60: bne         $s1, $s6, L_80801B14
    if (ctx->r17 != ctx->r22) {
        // 0x80801B64: swc1        $f0, -0x8($s0)
        MEM_W(-0X8, ctx->r16) = ctx->f0.u32l;
            goto L_80801B14;
    }
    // 0x80801B64: swc1        $f0, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->f0.u32l;
    // 0x80801B68: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80801B6C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80801B70: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80801B74: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80801B78: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80801B7C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80801B80: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80801B84: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80801B88: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80801B8C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80801B90: jr          $ra
    // 0x80801B94: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80801B94: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80801B98_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B98: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x80801B9C: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80801BA0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80801BA4: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80801BA8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80801BAC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80801BB0: addiu       $s0, $a0, 0x148
    ctx->r16 = ADD32(ctx->r4, 0X148);
    // 0x80801BB4: addiu       $s1, $s5, 0x58
    ctx->r17 = ADD32(ctx->r21, 0X58);
    // 0x80801BB8: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80801BBC: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80801BC0: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80801BC4: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80801BC8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80801BCC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80801BD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80801BD4: jal         0x800F1DF4
    // 0x80801BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F1DF4(rdram, ctx);
        goto after_0;
    // 0x80801BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80801BDC: jal         0x800136E4
    // 0x80801BE0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x80801BE0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x80801BE4: addiu       $s2, $s5, 0xC4
    ctx->r18 = ADD32(ctx->r21, 0XC4);
    // 0x80801BE8: swc1        $f0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f0.u32l;
    // 0x80801BEC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80801BF0: jal         0x800F1DF4
    // 0x80801BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F1DF4(rdram, ctx);
        goto after_2;
    // 0x80801BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801BF8: jal         0x800136E4
    // 0x80801BFC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800136E4(rdram, ctx);
        goto after_3;
    // 0x80801BFC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x80801C00: addiu       $s3, $sp, 0x110
    ctx->r19 = ADD32(ctx->r29, 0X110);
    // 0x80801C04: swc1        $f0, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f0.u32l;
    // 0x80801C08: jal         0x8000189C
    // 0x80801C0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8080189C_ncpoddialog(rdram, ctx);
        goto after_4;
    // 0x80801C0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x80801C10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801C14: jal         0x800EFB8C
    // 0x80801C18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EFB8C(rdram, ctx);
        goto after_5;
    // 0x80801C18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80801C1C: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x80801C20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80801C24: jal         0x800EFB8C
    // 0x80801C28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EFB8C(rdram, ctx);
        goto after_6;
    // 0x80801C28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80801C2C: addiu       $s4, $sp, 0xE8
    ctx->r20 = ADD32(ctx->r29, 0XE8);
    // 0x80801C30: swc1        $f0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f0.u32l;
    // 0x80801C34: jal         0x80001A30
    // 0x80801C38: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80801A30_ncpoddialog(rdram, ctx);
        goto after_7;
    // 0x80801C38: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_7:
    // 0x80801C3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801C40: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80801C44: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80801C48: jal         0x80001AC0
    // 0x80801C4C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_80801AC0_ncpoddialog(rdram, ctx);
        goto after_8;
    // 0x80801C4C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_8:
    // 0x80801C50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80801C54: jal         0x800EEAD4
    // 0x80801C58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_9;
    // 0x80801C58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80801C5C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80801C60: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80801C64: jal         0x800EE7F8
    // 0x80801C68: addiu       $a1, $s5, 0x200
    ctx->r5 = ADD32(ctx->r21, 0X200);
    func_800EE7F8(rdram, ctx);
        goto after_10;
    // 0x80801C68: addiu       $a1, $s5, 0x200
    ctx->r5 = ADD32(ctx->r21, 0X200);
    after_10:
    // 0x80801C6C: addiu       $s0, $sp, 0xDC
    ctx->r16 = ADD32(ctx->r29, 0XDC);
    // 0x80801C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C74: jal         0x800EE7F8
    // 0x80801C78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_11;
    // 0x80801C78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_11:
    // 0x80801C7C: lwc1        $f4, 0x13C($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X13C);
    // 0x80801C80: neg.s       $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = -ctx->f20.fl;
    // 0x80801C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C88: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80801C8C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80801C90: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80801C94: jal         0x800EF214
    // 0x80801C98: lw          $a2, 0x140($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X140);
    func_800EF214(rdram, ctx);
        goto after_12;
    // 0x80801C98: lw          $a2, 0x140($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X140);
    after_12:
    // 0x80801C9C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80801CA0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80801CA4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80801CA8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80801CAC: addiu       $s4, $sp, 0x7C
    ctx->r20 = ADD32(ctx->r29, 0X7C);
    // 0x80801CB0: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
L_80801CB4:
    // 0x80801CB4: mtc1        $s3, $f10
    ctx->f10.u32l = ctx->r19;
    // 0x80801CB8: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x80801CBC: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x80801CC0: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
L_80801CC4:
    // 0x80801CC4: lwc1        $f16, 0x6C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x80801CC8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80801CCC: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x80801CD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80801CD4: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80801CD8: jal         0x800F10B4
    // 0x80801CDC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_13;
    // 0x80801CDC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x80801CE0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80801CE4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80801CE8: bne         $s0, $s2, L_80801CC4
    if (ctx->r16 != ctx->r18) {
        // 0x80801CEC: swc1        $f0, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->f0.u32l;
            goto L_80801CC4;
    }
    // 0x80801CEC: swc1        $f0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f0.u32l;
    // 0x80801CF0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80801CF4: slti        $at, $s3, 0x9
    ctx->r1 = SIGNED(ctx->r19) < 0X9 ? 1 : 0;
    // 0x80801CF8: bne         $at, $zero, L_80801CB4
    if (ctx->r1 != 0) {
        // 0x80801CFC: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80801CB4;
    }
    // 0x80801CFC: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x80801D00: addiu       $s1, $s5, 0x188
    ctx->r17 = ADD32(ctx->r21, 0X188);
    // 0x80801D04: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x80801D08: addiu       $s2, $sp, 0xE8
    ctx->r18 = ADD32(ctx->r29, 0XE8);
L_80801D0C:
    // 0x80801D0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801D10: jal         0x800EE7F8
    // 0x80801D14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_14;
    // 0x80801D14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x80801D18: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80801D1C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80801D20: bne         $at, $zero, L_80801D0C
    if (ctx->r1 != 0) {
        // 0x80801D24: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80801D0C;
    }
    // 0x80801D24: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80801D28: addiu       $s1, $s5, 0xC
    ctx->r17 = ADD32(ctx->r21, 0XC);
    // 0x80801D2C: addiu       $s2, $s1, 0x58
    ctx->r18 = ADD32(ctx->r17, 0X58);
    // 0x80801D30: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
    // 0x80801D34: addiu       $s3, $sp, 0xDC
    ctx->r19 = ADD32(ctx->r29, 0XDC);
L_80801D38:
    // 0x80801D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801D3C: jal         0x800F1DF4
    // 0x80801D40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800F1DF4(rdram, ctx);
        goto after_15;
    // 0x80801D40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_15:
    // 0x80801D44: jal         0x800136E4
    // 0x80801D48: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800136E4(rdram, ctx);
        goto after_16;
    // 0x80801D48: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_16:
    // 0x80801D4C: swc1        $f0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->f0.u32l;
    // 0x80801D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801D54: jal         0x800F1828
    // 0x80801D58: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800F1828(rdram, ctx);
        goto after_17;
    // 0x80801D58: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_17:
    // 0x80801D5C: jal         0x800136E4
    // 0x80801D60: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    func_800136E4(rdram, ctx);
        goto after_18;
    // 0x80801D60: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    after_18:
    // 0x80801D64: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80801D68: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80801D6C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80801D70: swc1        $f0, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = ctx->f0.u32l;
    // 0x80801D74: bne         $s0, $s3, L_80801D38
    if (ctx->r16 != ctx->r19) {
        // 0x80801D78: swc1        $f24, 0xCC($s1)
        MEM_W(0XCC, ctx->r17) = ctx->f24.u32l;
            goto L_80801D38;
    }
    // 0x80801D78: swc1        $f24, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->f24.u32l;
    // 0x80801D7C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80801D80: jal         0x800F0EF0
    // 0x80801D84: addiu       $a1, $s5, 0xD0
    ctx->r5 = ADD32(ctx->r21, 0XD0);
    func_800F0EF0(rdram, ctx);
        goto after_19;
    // 0x80801D84: addiu       $a1, $s5, 0xD0
    ctx->r5 = ADD32(ctx->r21, 0XD0);
    after_19:
    // 0x80801D88: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80801D8C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80801D90: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80801D94: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80801D98: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80801D9C: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80801DA0: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x80801DA4: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80801DA8: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x80801DAC: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x80801DB0: jr          $ra
    // 0x80801DB4: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x80801DB4: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_80801DB8_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801DB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80801DBC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80801DC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801DC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801DC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801DCC: addiu       $a2, $s0, 0x148
    ctx->r6 = ADD32(ctx->r16, 0X148);
    // 0x80801DD0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80801DD4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80801DD8: jal         0x80000000
    // 0x80801DDC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x80801DDC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80801DE0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80801DE4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80801DE8: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x80801DEC: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x80801DF0: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x80801DF4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80801DF8: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80801DFC: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80801E00: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80801E04: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80801E08: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80801E0C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80801E10: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x80801E14: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80801E18: lwc1        $f4, 0x44($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80801E1C: bc1f        L_80801E28
    if (!c1cs) {
        // 0x80801E20: add.s       $f12, $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
            goto L_80801E28;
    }
    // 0x80801E20: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x80801E24: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80801E28:
    // 0x80801E28: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80801E2C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80801E30: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80801E34: nop

    // 0x80801E38: bc1fl       L_80801E48
    if (!c1cs) {
        // 0x80801E3C: mfc1        $a2, $f0
        ctx->r6 = (int32_t)ctx->f0.u32l;
            goto L_80801E48;
    }
    goto skip_0;
    // 0x80801E3C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    skip_0:
    // 0x80801E40: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80801E44: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_80801E48:
    // 0x80801E48: jal         0x800EEB9C
    // 0x80801E4C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_800EEB9C(rdram, ctx);
        goto after_1;
    // 0x80801E4C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_1:
    // 0x80801E50: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80801E54: jal         0x800EF04C
    // 0x80801E58: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x80801E58: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x80801E5C: lwc1        $f10, 0x14C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x80801E60: swc1        $f10, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f10.u32l;
    // 0x80801E64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801E68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801E6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80801E70: jr          $ra
    // 0x80801E74: nop

    return;
    // 0x80801E74: nop

;}
RECOMP_FUNC void func_80801E78_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801E78: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80801E7C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80801E80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801E84: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80801E88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801E8C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80801E90: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80801E94: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80801E98: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80801E9C: subu        $a1, $t7, $a1
    ctx->r5 = SUB32(ctx->r15, ctx->r5);
    // 0x80801EA0: jal         0x80000000
    // 0x80801EA4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x80801EA4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x80801EA8: addiu       $a2, $s0, 0x148
    ctx->r6 = ADD32(ctx->r16, 0X148);
    // 0x80801EAC: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x80801EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801EB4: jal         0x80000000
    // 0x80801EB8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_1;
    // 0x80801EB8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_1:
    // 0x80801EBC: lwc1        $f4, 0xC8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x80801EC0: lwc1        $f6, 0x14C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x80801EC4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80801EC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80801ECC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80801ED0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80801ED4: swc1        $f8, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f8.u32l;
    // 0x80801ED8: lwc1        $f10, 0xC8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x80801EDC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80801EE0: swc1        $f18, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f18.u32l;
    // 0x80801EE4: lwc1        $f4, 0xC8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x80801EE8: swc1        $f4, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->f4.u32l;
    // 0x80801EEC: jal         0x800F1DF4
    // 0x80801EF0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800F1DF4(rdram, ctx);
        goto after_2;
    // 0x80801EF0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80801EF4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80801EF8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80801EFC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80801F00: beq         $t8, $zero, L_80801F18
    if (ctx->r24 == 0) {
        // 0x80801F04: sll         $t0, $t9, 2
        ctx->r8 = S32(ctx->r25 << 2);
            goto L_80801F18;
    }
    // 0x80801F04: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80801F08: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80801F0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801F10: b           L_80801F24
    // 0x80801F14: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
        goto L_80801F24;
    // 0x80801F14: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
L_80801F18:
    // 0x80801F18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80801F1C: nop

    // 0x80801F20: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_80801F24:
    // 0x80801F24: negu        $t1, $t0
    ctx->r9 = SUB32(0, ctx->r8);
    // 0x80801F28: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x80801F2C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80801F30: lw          $a2, 0x24($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X24);
    // 0x80801F34: jal         0x800EEB9C
    // 0x80801F38: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EEB9C(rdram, ctx);
        goto after_3;
    // 0x80801F38: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x80801F3C: addiu       $s0, $sp, 0x34
    ctx->r16 = ADD32(ctx->r29, 0X34);
    // 0x80801F40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80801F44: jal         0x800EF04C
    // 0x80801F48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EF04C(rdram, ctx);
        goto after_4;
    // 0x80801F48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80801F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801F50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80801F54: jal         0x800EFB24
    // 0x80801F58: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    func_800EFB24(rdram, ctx);
        goto after_5;
    // 0x80801F58: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x80801F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801F60: jal         0x800EF334
    // 0x80801F64: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_800EF334(rdram, ctx);
        goto after_6;
    // 0x80801F64: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_6:
    // 0x80801F68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801F6C: jal         0x800EF04C
    // 0x80801F70: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_7;
    // 0x80801F70: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x80801F74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801F78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801F7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801F80: jr          $ra
    // 0x80801F84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80801F84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80801F88_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801F88: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80801F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801F90: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80801F94: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80801F98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801F9C: jal         0x80000000
    // 0x80801FA0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x80801FA0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80801FA4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80801FA8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80801FAC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80801FB0: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x80801FB4: jal         0x800EE780
    // 0x80801FB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800EE780(rdram, ctx);
        goto after_1;
    // 0x80801FB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80801FBC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80801FC0: jal         0x800EF334
    // 0x80801FC4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_800EF334(rdram, ctx);
        goto after_2;
    // 0x80801FC4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_2:
    // 0x80801FC8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80801FCC: jal         0x800F1DF4
    // 0x80801FD0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800F1DF4(rdram, ctx);
        goto after_3;
    // 0x80801FD0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80801FD4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80801FD8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80801FDC: jal         0x800F1828
    // 0x80801FE0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_800F1828(rdram, ctx);
        goto after_4;
    // 0x80801FE0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80801FE4: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80801FE8: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80801FEC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80801FF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80801FF4: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x80801FF8: addiu       $a0, $a0, 0xC4
    ctx->r4 = ADD32(ctx->r4, 0XC4);
    // 0x80801FFC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80802000: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    // 0x80802004: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80802008: jal         0x800EEC30
    // 0x8080200C: nop

    func_800EEC30(rdram, ctx);
        goto after_5;
    // 0x8080200C: nop

    after_5:
    // 0x80802010: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80802014: lui         $a3, 0xBDCC
    ctx->r7 = S32(0XBDCC << 16);
    // 0x80802018: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8080201C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80802020: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80802024: jal         0x800EE7B4
    // 0x80802028: addiu       $a0, $a0, 0x148
    ctx->r4 = ADD32(ctx->r4, 0X148);
    func_800EE7B4(rdram, ctx);
        goto after_6;
    // 0x80802028: addiu       $a0, $a0, 0x148
    ctx->r4 = ADD32(ctx->r4, 0X148);
    after_6:
    // 0x8080202C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80802030: jal         0x800EF04C
    // 0x80802034: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800EF04C(rdram, ctx);
        goto after_7;
    // 0x80802034: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x80802038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080203C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80802040: jr          $ra
    // 0x80802044: nop

    return;
    // 0x80802044: nop

;}
RECOMP_FUNC void func_80802048_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802048: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8080204C: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x80802050: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80802054: lwc1        $f26, 0xC8($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80802058: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080205C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80802060: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80802064: mul.s       $f26, $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f6.fl);
    // 0x80802068: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8080206C: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x80802070: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x80802074: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x80802078: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x8080207C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80802080: c.lt.s      $f26, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f26.fl < ctx->f8.fl;
    // 0x80802084: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80802088: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8080208C: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x80802090: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80802094: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80802098: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x8080209C: bc1t        L_808022E0
    if (c1cs) {
        // 0x808020A0: swc1        $f4, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
            goto L_808022E0;
    }
    // 0x808020A0: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x808020A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x808020A8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x808020AC: jal         0x800EFB8C
    // 0x808020B0: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    func_800EFB8C(rdram, ctx);
        goto after_0;
    // 0x808020B0: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    after_0:
    // 0x808020B4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x808020B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808020BC: jal         0x800EFB8C
    // 0x808020C0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EFB8C(rdram, ctx);
        goto after_1;
    // 0x808020C0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x808020C4: sub.s       $f10, $f0, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f26.fl;
    // 0x808020C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808020CC: c.lt.s      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.fl < ctx->f10.fl;
    // 0x808020D0: nop

    // 0x808020D4: bc1tl       L_808022E4
    if (c1cs) {
        // 0x808020D8: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_808022E4;
    }
    goto skip_0;
    // 0x808020D8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x808020DC: jal         0x800EFB8C
    // 0x808020E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EFB8C(rdram, ctx);
        goto after_2;
    // 0x808020E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x808020E4: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x808020E8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808020EC: jal         0x800F1DF4
    // 0x808020F0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800F1DF4(rdram, ctx);
        goto after_3;
    // 0x808020F0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x808020F4: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x808020F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808020FC: jal         0x800F1DF4
    // 0x80802100: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    func_800F1DF4(rdram, ctx);
        goto after_4;
    // 0x80802100: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    after_4:
    // 0x80802104: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80802108: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8080210C: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80802110: addiu       $s0, $sp, 0x84
    ctx->r16 = ADD32(ctx->r29, 0X84);
    // 0x80802114: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80802118: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8080211C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80802120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802124: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80802128: jal         0x800EEB9C
    // 0x8080212C: nop

    func_800EEB9C(rdram, ctx);
        goto after_5;
    // 0x8080212C: nop

    after_5:
    // 0x80802130: addiu       $s1, $sp, 0x90
    ctx->r17 = ADD32(ctx->r29, 0X90);
    // 0x80802134: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80802138: jal         0x800EE7F8
    // 0x8080213C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x8080213C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80802140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802144: jal         0x800EF04C
    // 0x80802148: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EF04C(rdram, ctx);
        goto after_7;
    // 0x80802148: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_7:
    // 0x8080214C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80802150: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80802154: jal         0x800EFB24
    // 0x80802158: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EFB24(rdram, ctx);
        goto after_8;
    // 0x80802158: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x8080215C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80802160: jal         0x800F1DF4
    // 0x80802164: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800F1DF4(rdram, ctx);
        goto after_9;
    // 0x80802164: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80802168: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8080216C: jal         0x800F2094
    // 0x80802170: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    func_800F2094(rdram, ctx);
        goto after_10;
    // 0x80802170: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    after_10:
    // 0x80802174: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80802178: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8080217C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80802180: jal         0x800F20BC
    // 0x80802184: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    func_800F20BC(rdram, ctx);
        goto after_11;
    // 0x80802184: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    after_11:
    // 0x80802188: beq         $v0, $zero, L_808022D4
    if (ctx->r2 == 0) {
        // 0x8080218C: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_808022D4;
    }
    // 0x8080218C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80802190: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80802194: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80802198: mul.s       $f6, $f26, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x8080219C: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x808021A0: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x808021A4: nop

    // 0x808021A8: bc1f        L_808021B4
    if (!c1cs) {
        // 0x808021AC: nop
    
            goto L_808021B4;
    }
    // 0x808021AC: nop

    // 0x808021B0: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
L_808021B4:
    // 0x808021B4: mul.s       $f0, $f22, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x808021B8: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x808021BC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x808021C0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808021C4: jal         0x800F20BC
    // 0x808021C8: add.s       $f14, $f0, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f10.fl;
    func_800F20BC(rdram, ctx);
        goto after_12;
    // 0x808021C8: add.s       $f14, $f0, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f10.fl;
    after_12:
    // 0x808021CC: beq         $v0, $zero, L_808021E0
    if (ctx->r2 == 0) {
        // 0x808021D0: lwc1        $f18, 0xA8($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
            goto L_808021E0;
    }
    // 0x808021D0: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x808021D4: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x808021D8: b           L_808021E4
    // 0x808021DC: add.s       $f20, $f16, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f22.fl;
        goto L_808021E4;
    // 0x808021DC: add.s       $f20, $f16, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f22.fl;
L_808021E0:
    // 0x808021E0: sub.s       $f20, $f18, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f22.fl;
L_808021E4:
    // 0x808021E4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x808021E8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x808021EC: jal         0x800EEB9C
    // 0x808021F0: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    func_800EEB9C(rdram, ctx);
        goto after_13;
    // 0x808021F0: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    after_13:
    // 0x808021F4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x808021F8: jal         0x800EF04C
    // 0x808021FC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EF04C(rdram, ctx);
        goto after_14;
    // 0x808021FC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_14:
    // 0x80802200: addiu       $s1, $sp, 0x5C
    ctx->r17 = ADD32(ctx->r29, 0X5C);
    // 0x80802204: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80802208: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x8080220C: jal         0x800EFB24
    // 0x80802210: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800EFB24(rdram, ctx);
        goto after_15;
    // 0x80802210: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_15:
    // 0x80802214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80802218: beq         $v0, $zero, L_808022B8
    if (ctx->r2 == 0) {
        // 0x8080221C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_808022B8;
    }
    // 0x8080221C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80802220:
    // 0x80802220: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x80802224: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x80802228: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080222C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80802230: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80802234: jal         0x800F05F8
    // 0x80802238: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_800F05F8(rdram, ctx);
        goto after_16;
    // 0x80802238: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_16:
    // 0x8080223C: beq         $v0, $zero, L_808022A8
    if (ctx->r2 == 0) {
        // 0x80802240: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_808022A8;
    }
    // 0x80802240: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80802244: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80802248: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080224C: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80802250: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80802254: nop

    // 0x80802258: bc1f        L_808022A8
    if (!c1cs) {
        // 0x8080225C: nop
    
            goto L_808022A8;
    }
    // 0x8080225C: nop

    // 0x80802260: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80802264: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80802268: c.lt.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl < ctx->f8.fl;
    // 0x8080226C: nop

    // 0x80802270: bc1f        L_80802280
    if (!c1cs) {
        // 0x80802274: nop
    
            goto L_80802280;
    }
    // 0x80802274: nop

    // 0x80802278: b           L_80802280
    // 0x8080227C: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
        goto L_80802280;
    // 0x8080227C: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
L_80802280:
    // 0x80802280: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80802284: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80802288: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080228C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80802290: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    // 0x80802294: add.s       $f20, $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f16.fl;
    // 0x80802298: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8080229C: jal         0x800EEB9C
    // 0x808022A0: nop

    func_800EEB9C(rdram, ctx);
        goto after_17;
    // 0x808022A0: nop

    after_17:
    // 0x808022A4: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
L_808022A8:
    // 0x808022A8: beq         $v1, $zero, L_808022B8
    if (ctx->r3 == 0) {
        // 0x808022AC: slti        $v0, $s0, 0x5
        ctx->r2 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
            goto L_808022B8;
    }
    // 0x808022AC: slti        $v0, $s0, 0x5
    ctx->r2 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x808022B0: bne         $v0, $zero, L_80802220
    if (ctx->r2 != 0) {
        // 0x808022B4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80802220;
    }
    // 0x808022B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_808022B8:
    // 0x808022B8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x808022BC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x808022C0: jal         0x800EEB9C
    // 0x808022C4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    func_800EEB9C(rdram, ctx);
        goto after_18;
    // 0x808022C4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    after_18:
    // 0x808022C8: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x808022CC: jal         0x800EF04C
    // 0x808022D0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EF04C(rdram, ctx);
        goto after_19;
    // 0x808022D0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_19:
L_808022D4:
    // 0x808022D4: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x808022D8: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x808022DC: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
L_808022E0:
    // 0x808022E0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_808022E4:
    // 0x808022E4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808022E8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808022EC: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x808022F0: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x808022F4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x808022F8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x808022FC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x80802300: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x80802304: jr          $ra
    // 0x80802308: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80802308: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_8080230C_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080230C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80802310: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80802314: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80802318: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080231C: lb          $v0, 0x211($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X211);
    // 0x80802320: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80802324: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80802328: beq         $v0, $at, L_8080234C
    if (ctx->r2 == ctx->r1) {
        // 0x8080232C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_8080234C;
    }
    // 0x8080232C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80802330: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80802334: beq         $v0, $at, L_8080234C
    if (ctx->r2 == ctx->r1) {
        // 0x80802338: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8080234C;
    }
    // 0x80802338: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8080233C: beq         $v0, $at, L_8080234C
    if (ctx->r2 == ctx->r1) {
        // 0x80802340: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8080234C;
    }
    // 0x80802340: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80802344: bnel        $v0, $at, L_8080236C
    if (ctx->r2 != ctx->r1) {
        // 0x80802348: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080236C;
    }
    goto skip_0;
    // 0x80802348: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
L_8080234C:
    // 0x8080234C: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80802350: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80802354: addiu       $a3, $a0, 0x28
    ctx->r7 = ADD32(ctx->r4, 0X28);
    // 0x80802358: jal         0x80002048
    // 0x8080235C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80802048_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x8080235C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80802360: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80802364: lb          $v0, 0x211($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X211);
    // 0x80802368: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8080236C:
    // 0x8080236C: beq         $v0, $at, L_80802390
    if (ctx->r2 == ctx->r1) {
        // 0x80802370: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_80802390;
    }
    // 0x80802370: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80802374: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80802378: beq         $v0, $at, L_80802390
    if (ctx->r2 == ctx->r1) {
        // 0x8080237C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80802390;
    }
    // 0x8080237C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80802380: beq         $v0, $at, L_80802390
    if (ctx->r2 == ctx->r1) {
        // 0x80802384: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80802390;
    }
    // 0x80802384: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80802388: bnel        $v0, $at, L_808023A8
    if (ctx->r2 != ctx->r1) {
        // 0x8080238C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808023A8;
    }
    goto skip_1;
    // 0x8080238C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
L_80802390:
    // 0x80802390: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80802394: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80802398: addiu       $a3, $a0, 0x34
    ctx->r7 = ADD32(ctx->r4, 0X34);
    // 0x8080239C: jal         0x80002048
    // 0x808023A0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80802048_ncpoddialog(rdram, ctx);
        goto after_1;
    // 0x808023A0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x808023A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808023A8:
    // 0x808023A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808023AC: jr          $ra
    // 0x808023B0: nop

    return;
    // 0x808023B0: nop

;}
RECOMP_FUNC void func_808023B4_ncpoddialog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808023B4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x808023B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808023BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808023C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808023C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808023C8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x808023CC: lbu         $t6, 0x214($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X214);
    // 0x808023D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808023D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808023D8: bne         $v0, $t6, L_808023E4
    if (ctx->r2 != ctx->r14) {
        // 0x808023DC: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_808023E4;
    }
    // 0x808023DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x808023E0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_808023E4:
    // 0x808023E4: lbu         $t7, 0x211($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X211);
    // 0x808023E8: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x808023EC: beq         $at, $zero, L_80802654
    if (ctx->r1 == 0) {
        // 0x808023F0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80802654;
    }
    // 0x808023F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808023F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(776, 0X2A10) << 16);
    // 0x808023F8: addu        $at, $at, $t7
    gpr jr_addend_80802400 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808023FC: lw          $t7, 0x2A10($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(776, 0X2A10));
    // 0x80802400: jr          $t7
    // 0x80802404: nop

    switch (jr_addend_80802400 >> 2) {
        case 0: goto L_80802408; break;
        case 1: goto L_80802408; break;
        case 2: goto L_80802484; break;
        case 3: goto L_808024F4; break;
        case 4: goto L_80802450; break;
        case 5: goto L_808024BC; break;
        case 6: goto L_808024A0; break;
        case 7: goto L_80802654; break;
        case 8: goto L_8080252C; break;
        case 9: goto L_808025F0; break;
        default: switch_error(__func__, 0x80802400, 0x80802A10);
    }
    // 0x80802404: nop

L_80802408:
    // 0x80802408: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x8080240C: addiu       $a1, $s0, 0x158
    ctx->r5 = ADD32(ctx->r16, 0X158);
    // 0x80802410: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80802414: jal         0x800EE7F8
    // 0x80802418: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80802418: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8080241C: lwc1        $f4, 0x164($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X164);
    // 0x80802420: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
    // 0x80802424: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80802428: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8080242C: lw          $a2, 0x168($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X168);
    // 0x80802430: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80802434: jal         0x800EEC30
    // 0x80802438: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    func_800EEC30(rdram, ctx);
        goto after_1;
    // 0x80802438: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    after_1:
    // 0x8080243C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80802440: jal         0x800EF04C
    // 0x80802444: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x80802444: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80802448: b           L_80802660
    // 0x8080244C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80802660;
    // 0x8080244C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80802450:
    // 0x80802450: beq         $a3, $zero, L_80802460
    if (ctx->r7 == 0) {
        // 0x80802454: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80802460;
    }
    // 0x80802454: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80802458: b           L_80802460
    // 0x8080245C: addiu       $v0, $zero, -0x5A
    ctx->r2 = ADD32(0, -0X5A);
        goto L_80802460;
    // 0x8080245C: addiu       $v0, $zero, -0x5A
    ctx->r2 = ADD32(0, -0X5A);
L_80802460:
    // 0x80802460: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80802464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802468: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8080246C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80802470: jal         0x80001F88
    // 0x80802474: nop

    func_80801F88_ncpoddialog(rdram, ctx);
        goto after_3;
    // 0x80802474: nop

    after_3:
    // 0x80802478: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x8080247C: b           L_8080265C
    // 0x80802480: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
        goto L_8080265C;
    // 0x80802480: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
L_80802484:
    // 0x80802484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080248C: jal         0x80001E78
    // 0x80802490: subu        $a2, $v0, $a3
    ctx->r6 = SUB32(ctx->r2, ctx->r7);
    func_80801E78_ncpoddialog(rdram, ctx);
        goto after_4;
    // 0x80802490: subu        $a2, $v0, $a3
    ctx->r6 = SUB32(ctx->r2, ctx->r7);
    after_4:
    // 0x80802494: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80802498: b           L_8080265C
    // 0x8080249C: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
        goto L_8080265C;
    // 0x8080249C: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
L_808024A0:
    // 0x808024A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808024A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808024A8: jal         0x80001E78
    // 0x808024AC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80801E78_ncpoddialog(rdram, ctx);
        goto after_5;
    // 0x808024AC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_5:
    // 0x808024B0: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x808024B4: b           L_8080265C
    // 0x808024B8: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
        goto L_8080265C;
    // 0x808024B8: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
L_808024BC:
    // 0x808024BC: beq         $a3, $zero, L_808024CC
    if (ctx->r7 == 0) {
        // 0x808024C0: addiu       $v0, $zero, -0xA
        ctx->r2 = ADD32(0, -0XA);
            goto L_808024CC;
    }
    // 0x808024C0: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
    // 0x808024C4: b           L_808024CC
    // 0x808024C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_808024CC;
    // 0x808024C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_808024CC:
    // 0x808024CC: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x808024D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808024D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808024D8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x808024DC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x808024E0: jal         0x80001DB8
    // 0x808024E4: nop

    func_80801DB8_ncpoddialog(rdram, ctx);
        goto after_6;
    // 0x808024E4: nop

    after_6:
    // 0x808024E8: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x808024EC: b           L_8080265C
    // 0x808024F0: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
        goto L_8080265C;
    // 0x808024F0: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
L_808024F4:
    // 0x808024F4: beq         $a3, $zero, L_80802504
    if (ctx->r7 == 0) {
        // 0x808024F8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80802504;
    }
    // 0x808024F8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x808024FC: b           L_80802504
    // 0x80802500: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
        goto L_80802504;
    // 0x80802500: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
L_80802504:
    // 0x80802504: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80802508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080250C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80802510: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80802514: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80802518: jal         0x80001DB8
    // 0x8080251C: nop

    func_80801DB8_ncpoddialog(rdram, ctx);
        goto after_7;
    // 0x8080251C: nop

    after_7:
    // 0x80802520: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80802524: b           L_8080265C
    // 0x80802528: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
        goto L_8080265C;
    // 0x80802528: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
L_8080252C:
    // 0x8080252C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80802530: jal         0x800EE7F8
    // 0x80802534: addiu       $a1, $s0, 0x158
    ctx->r5 = ADD32(ctx->r16, 0X158);
    func_800EE7F8(rdram, ctx);
        goto after_8;
    // 0x80802534: addiu       $a1, $s0, 0x158
    ctx->r5 = ADD32(ctx->r16, 0X158);
    after_8:
    // 0x80802538: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x8080253C: jal         0x800EE7F8
    // 0x80802540: addiu       $a1, $s0, 0x164
    ctx->r5 = ADD32(ctx->r16, 0X164);
    func_800EE7F8(rdram, ctx);
        goto after_9;
    // 0x80802540: addiu       $a1, $s0, 0x164
    ctx->r5 = ADD32(ctx->r16, 0X164);
    after_9:
    // 0x80802544: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x80802548: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8080254C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802550: jal         0x80000000
    // 0x80802554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_10;
    // 0x80802554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80802558: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
    // 0x8080255C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80802560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802564: jal         0x80000000
    // 0x80802568: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_11;
    // 0x80802568: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x8080256C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80802570: jal         0x800EF04C
    // 0x80802574: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EF04C(rdram, ctx);
        goto after_12;
    // 0x80802574: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x80802578: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8080257C: jal         0x800EF334
    // 0x80802580: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_800EF334(rdram, ctx);
        goto after_13;
    // 0x80802580: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_13:
    // 0x80802584: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80802588: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080258C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80802590: jal         0x800EFB24
    // 0x80802594: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    func_800EFB24(rdram, ctx);
        goto after_14;
    // 0x80802594: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_14:
    // 0x80802598: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080259C: jal         0x800EF368
    // 0x808025A0: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    func_800EF368(rdram, ctx);
        goto after_15;
    // 0x808025A0: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    after_15:
    // 0x808025A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808025A8: jal         0x800EF04C
    // 0x808025AC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_800EF04C(rdram, ctx);
        goto after_16;
    // 0x808025AC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_16:
    // 0x808025B0: lwc1        $f18, 0xD0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x808025B4: addiu       $a0, $s0, 0x188
    ctx->r4 = ADD32(ctx->r16, 0X188);
    // 0x808025B8: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x808025BC: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x808025C0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x808025C4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x808025C8: jal         0x800EEC30
    // 0x808025CC: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    func_800EEC30(rdram, ctx);
        goto after_17;
    // 0x808025CC: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    after_17:
    // 0x808025D0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808025D4: jal         0x800EF04C
    // 0x808025D8: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    func_800EF04C(rdram, ctx);
        goto after_18;
    // 0x808025D8: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    after_18:
    // 0x808025DC: addiu       $a0, $s0, 0x200
    ctx->r4 = ADD32(ctx->r16, 0X200);
    // 0x808025E0: jal         0x800EE7F8
    // 0x808025E4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_19;
    // 0x808025E4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x808025E8: b           L_80802660
    // 0x808025EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80802660;
    // 0x808025EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808025F0:
    // 0x808025F0: addiu       $s1, $sp, 0x44
    ctx->r17 = ADD32(ctx->r29, 0X44);
    // 0x808025F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x808025F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808025FC: jal         0x80000000
    // 0x80802600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_20;
    // 0x80802600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x80802604: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
    // 0x80802608: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8080260C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802610: jal         0x80000000
    // 0x80802614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800000_ncpoddialog(rdram, ctx);
        goto after_21;
    // 0x80802614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80802618: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8080261C: jal         0x800EF04C
    // 0x80802620: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EF04C(rdram, ctx);
        goto after_22;
    // 0x80802620: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_22:
    // 0x80802624: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80802628: jal         0x800EF334
    // 0x8080262C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_800EF334(rdram, ctx);
        goto after_23;
    // 0x8080262C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_23:
    // 0x80802630: jal         0x800A5800
    // 0x80802634: lbu         $a0, 0x218($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X218);
    func_800A5800(rdram, ctx);
        goto after_24;
    // 0x80802634: lbu         $a0, 0x218($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X218);
    after_24:
    // 0x80802638: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x8080263C: jal         0x80085580
    // 0x80802640: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _cadbfunc_entrypoint_0(rdram, ctx);
        goto after_25;
    // 0x80802640: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_25:
    // 0x80802644: jal         0x80085590
    // 0x80802648: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    _cadbfunc_entrypoint_2(rdram, ctx);
        goto after_26;
    // 0x80802648: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_26:
    // 0x8080264C: b           L_80802660
    // 0x80802650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80802660;
    // 0x80802650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80802654:
    // 0x80802654: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80802658: addiu       $s2, $s0, 0x148
    ctx->r18 = ADD32(ctx->r16, 0X148);
L_8080265C:
    // 0x8080265C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80802660:
    // 0x80802660: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80802664: jal         0x8000230C
    // 0x80802668: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8080230C_ncpoddialog(rdram, ctx);
        goto after_27;
    // 0x80802668: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_27:
    // 0x8080266C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80802670: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80802674: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80802678: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8080267C: jr          $ra
    // 0x80802680: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80802680: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ncpoddialog_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802684: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80802688: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x8080268C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80802690: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80802694: addu        $t1, $a0, $t6
    ctx->r9 = ADD32(ctx->r4, ctx->r14);
    // 0x80802698: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8080269C: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x808026A0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_808026A4:
    // 0x808026A4: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x808026A8: lwc1        $f2, 0x0($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X0);
    // 0x808026AC: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x808026B0: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x808026B4: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x808026B8: nop

    // 0x808026BC: bc1tl       L_808026DC
    if (c1cs) {
        // 0x808026C0: swc1        $f0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
            goto L_808026DC;
    }
    goto skip_0;
    // 0x808026C0: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    skip_0:
    // 0x808026C4: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x808026C8: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x808026CC: nop

    // 0x808026D0: bc1fl       L_808026E4
    if (!c1cs) {
        // 0x808026D4: lwc1        $f0, 0x4($t0)
        ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
            goto L_808026E4;
    }
    goto skip_1;
    // 0x808026D4: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
    skip_1:
    // 0x808026D8: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
L_808026DC:
    // 0x808026DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808026E0: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
L_808026E4:
    // 0x808026E4: lwc1        $f2, 0x4($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X4);
    // 0x808026E8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x808026EC: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x808026F0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x808026F4: nop

    // 0x808026F8: bc1tl       L_80802718
    if (c1cs) {
        // 0x808026FC: swc1        $f0, 0x4($t1)
        MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
            goto L_80802718;
    }
    goto skip_2;
    // 0x808026FC: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    skip_2:
    // 0x80802700: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80802704: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x80802708: nop

    // 0x8080270C: bc1f        L_8080271C
    if (!c1cs) {
        // 0x80802710: nop
    
            goto L_8080271C;
    }
    // 0x80802710: nop

    // 0x80802714: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
L_80802718:
    // 0x80802718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080271C:
    // 0x8080271C: bne         $a3, $v1, L_808026A4
    if (ctx->r7 != ctx->r3) {
        // 0x80802720: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_808026A4;
    }
    // 0x80802720: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80802724: beq         $v0, $zero, L_80802768
    if (ctx->r2 == 0) {
        // 0x80802728: sll         $t7, $a1, 4
        ctx->r15 = S32(ctx->r5 << 4);
            goto L_80802768;
    }
    // 0x80802728: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x8080272C: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x80802730: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80802734: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80802738: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x8080273C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80802740: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80802744: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80802748: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x8080274C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80802750: bc1fl       L_80802764
    if (!c1cs) {
        // 0x80802754: swc1        $f0, 0x20($t3)
        MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
            goto L_80802764;
    }
    goto skip_3;
    // 0x80802754: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
    skip_3:
    // 0x80802758: b           L_80802764
    // 0x8080275C: swc1        $f2, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f2.u32l;
        goto L_80802764;
    // 0x8080275C: swc1        $f2, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f2.u32l;
    // 0x80802760: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
L_80802764:
    // 0x80802764: sb          $t4, 0x216($a0)
    MEM_B(0X216, ctx->r4) = ctx->r12;
L_80802768:
    // 0x80802768: jr          $ra
    // 0x8080276C: nop

    return;
    // 0x8080276C: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802770: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80802774: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80802778: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8080277C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80802780: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80802784: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80802788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080278C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80802790: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    // 0x80802794: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80802798: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8080279C: jal         0x800EEDE8
    // 0x808027A0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800EEDE8(rdram, ctx);
        goto after_0;
    // 0x808027A0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x808027A4: bne         $v0, $zero, L_808027C0
    if (ctx->r2 != 0) {
        // 0x808027A8: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_808027C0;
    }
    // 0x808027A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x808027AC: jal         0x800EE7F8
    // 0x808027B0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808027B0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x808027B4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x808027B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808027BC: sb          $t8, 0x216($t9)
    MEM_B(0X216, ctx->r25) = ctx->r24;
L_808027C0:
    // 0x808027C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808027C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808027C8: jr          $ra
    // 0x808027CC: nop

    return;
    // 0x808027CC: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808027D0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x808027D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808027D8: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x808027DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808027E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808027E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808027E8: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x808027EC: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x808027F0: jal         0x800EE7F8
    // 0x808027F4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808027F4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x808027F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808027FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802800: jr          $ra
    // 0x80802804: nop

    return;
    // 0x80802804: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802808: bltz        $a1, L_80802828
    if (SIGNED(ctx->r5) < 0) {
        // 0x8080280C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80802828;
    }
    // 0x8080280C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80802810: bne         $a1, $zero, L_80802820
    if (ctx->r5 != 0) {
        // 0x80802814: sb          $v0, 0x215($a0)
        MEM_B(0X215, ctx->r4) = ctx->r2;
            goto L_80802820;
    }
    // 0x80802814: sb          $v0, 0x215($a0)
    MEM_B(0X215, ctx->r4) = ctx->r2;
    // 0x80802818: jr          $ra
    // 0x8080281C: sb          $zero, 0x214($a0)
    MEM_B(0X214, ctx->r4) = 0;
    return;
    // 0x8080281C: sb          $zero, 0x214($a0)
    MEM_B(0X214, ctx->r4) = 0;
L_80802820:
    // 0x80802820: jr          $ra
    // 0x80802824: sb          $v0, 0x214($a0)
    MEM_B(0X214, ctx->r4) = ctx->r2;
    return;
    // 0x80802824: sb          $v0, 0x214($a0)
    MEM_B(0X214, ctx->r4) = ctx->r2;
L_80802828:
    // 0x80802828: sb          $zero, 0x215($a0)
    MEM_B(0X215, ctx->r4) = 0;
    // 0x8080282C: jr          $ra
    // 0x80802830: nop

    return;
    // 0x80802830: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802834: sb          $a1, 0x218($a0)
    MEM_B(0X218, ctx->r4) = ctx->r5;
    // 0x80802838: jr          $ra
    // 0x8080283C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x8080283C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
;}
RECOMP_FUNC void ncpoddialog_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802840: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80802844: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80802848: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080284C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80802850: lb          $v1, 0x211($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X211);
    // 0x80802854: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80802858: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080285C: bne         $v1, $at, L_8080287C
    if (ctx->r3 != ctx->r1) {
        // 0x80802860: nop
    
            goto L_8080287C;
    }
    // 0x80802860: nop

    // 0x80802864: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80802868: jal         0x80001310
    // 0x8080286C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_80801310_ncpoddialog(rdram, ctx);
        goto after_0;
    // 0x8080286C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x80802870: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80802874: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80802878: lb          $v1, 0x211($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X211);
L_8080287C:
    // 0x8080287C: bne         $a2, $v1, L_8080288C
    if (ctx->r6 != ctx->r3) {
        // 0x80802880: addiu       $a0, $zero, 0x64
        ctx->r4 = ADD32(0, 0X64);
            goto L_8080288C;
    }
    // 0x80802880: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x80802884: lbu         $t6, 0x216($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X216);
    // 0x80802888: beq         $t6, $zero, L_8080290C
    if (ctx->r14 == 0) {
        // 0x8080288C: sll         $t7, $a3, 16
        ctx->r15 = S32(ctx->r7 << 16);
            goto L_8080290C;
    }
L_8080288C:
    // 0x8080288C: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80802890: sb          $zero, 0x216($s0)
    MEM_B(0X216, ctx->r16) = 0;
    // 0x80802894: sb          $a2, 0x211($s0)
    MEM_B(0X211, ctx->r16) = ctx->r6;
    // 0x80802898: sb          $a3, 0x213($s0)
    MEM_B(0X213, ctx->r16) = ctx->r7;
    // 0x8080289C: jal         0x8009055C
    // 0x808028A0: or          $a1, $t7, $a2
    ctx->r5 = ctx->r15 | ctx->r6;
    func_8009055C(rdram, ctx);
        goto after_1;
    // 0x808028A0: or          $a1, $t7, $a2
    ctx->r5 = ctx->r15 | ctx->r6;
    after_1:
    // 0x808028A4: lb          $v1, 0x211($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X211);
    // 0x808028A8: bnel        $v1, $zero, L_808028C0
    if (ctx->r3 != 0) {
        // 0x808028AC: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_808028C0;
    }
    goto skip_0;
    // 0x808028AC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    skip_0:
    // 0x808028B0: lbu         $t8, 0x213($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X213);
    // 0x808028B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808028B8: beq         $t8, $at, L_808028C8
    if (ctx->r24 == ctx->r1) {
        // 0x808028BC: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_808028C8;
    }
    // 0x808028BC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_808028C0:
    // 0x808028C0: bne         $v1, $at, L_80802908
    if (ctx->r3 != ctx->r1) {
        // 0x808028C4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80802908;
    }
    // 0x808028C4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_808028C8:
    // 0x808028C8: jal         0x80110024
    // 0x808028CC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_80110024(rdram, ctx);
        goto after_2;
    // 0x808028CC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x808028D0: lb          $a3, 0x211($s0)
    ctx->r7 = MEM_B(ctx->r16, 0X211);
    // 0x808028D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x808028D8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808028DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808028E0: jal         0x800894E8
    // 0x808028E4: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    _ncpod_entrypoint_5(rdram, ctx);
        goto after_3;
    // 0x808028E4: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_3:
    // 0x808028E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808028EC: beq         $v0, $at, L_8080290C
    if (ctx->r2 == ctx->r1) {
        // 0x808028F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080290C;
    }
    // 0x808028F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808028F4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x808028F8: jal         0x80000338
    // 0x808028FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80800338_ncpoddialog(rdram, ctx);
        goto after_4;
    // 0x808028FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80802900: b           L_80802910
    // 0x80802904: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80802910;
    // 0x80802904: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80802908:
    // 0x80802908: sb          $t9, 0x212($s0)
    MEM_B(0X212, ctx->r16) = ctx->r25;
L_8080290C:
    // 0x8080290C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80802910:
    // 0x80802910: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80802914: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80802918: jr          $ra
    // 0x8080291C: nop

    return;
    // 0x8080291C: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802920: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80802924: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80802928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080292C: and         $a1, $a3, $at
    ctx->r5 = ctx->r7 & ctx->r1;
    // 0x80802930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80802934: srl         $t6, $a1, 16
    ctx->r14 = S32(U32(ctx->r5) >> 16);
    // 0x80802938: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8080293C: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80802940: jal         0x80002958
    // 0x80802944: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ncpoddialog_entrypoint_11(rdram, ctx);
        goto after_0;
    // 0x80802944: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80802948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080294C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802950: jr          $ra
    // 0x80802954: nop

    return;
    // 0x80802954: nop

;}
RECOMP_FUNC void ncpoddialog_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802958: beq         $a2, $zero, L_80802970
    if (ctx->r6 == 0) {
        // 0x8080295C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80802970;
    }
    // 0x8080295C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80802960: beq         $a2, $v0, L_80802988
    if (ctx->r6 == ctx->r2) {
        // 0x80802964: nop
    
            goto L_80802988;
    }
    // 0x80802964: nop

    // 0x80802968: jr          $ra
    // 0x8080296C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8080296C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80802970:
    // 0x80802970: beq         $a0, $zero, L_80802980
    if (ctx->r4 == 0) {
        // 0x80802974: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_80802980;
    }
    // 0x80802974: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80802978: bnel        $a0, $at, L_808029B4
    if (ctx->r4 != ctx->r1) {
        // 0x8080297C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808029B4;
    }
    goto skip_0;
    // 0x8080297C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_80802980:
    // 0x80802980: jr          $ra
    // 0x80802984: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80802984: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80802988:
    // 0x80802988: bnel        $a1, $v0, L_808029B4
    if (ctx->r5 != ctx->r2) {
        // 0x8080298C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808029B4;
    }
    goto skip_1;
    // 0x8080298C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80802990: beq         $a0, $zero, L_808029A0
    if (ctx->r4 == 0) {
        // 0x80802994: nop
    
            goto L_808029A0;
    }
    // 0x80802994: nop

    // 0x80802998: bnel        $a0, $v0, L_808029B4
    if (ctx->r4 != ctx->r2) {
        // 0x8080299C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808029B4;
    }
    goto skip_2;
    // 0x8080299C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
L_808029A0:
    // 0x808029A0: jr          $ra
    // 0x808029A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x808029A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808029A8: jr          $ra
    // 0x808029AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x808029AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808029B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808029B4:
    // 0x808029B4: jr          $ra
    // 0x808029B8: nop

    return;
    // 0x808029B8: nop

    // 0x808029BC: nop

;}
RECOMP_FUNC void func_80800000_ncpodfixpos(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800004: bnel        $a1, $at, L_80800018
    if (ctx->r5 != ctx->r1) {
        // 0x80800008: lhu         $t6, 0x12($a0)
        ctx->r14 = MEM_HU(ctx->r4, 0X12);
            goto L_80800018;
    }
    goto skip_0;
    // 0x80800008: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    skip_0:
    // 0x8080000C: jr          $ra
    // 0x80800010: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80800010: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800014: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
L_80800018:
    // 0x80800018: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x8080001C: xor         $v1, $a1, $t7
    ctx->r3 = ctx->r5 ^ ctx->r15;
    // 0x80800020: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80800024: jr          $ra
    // 0x80800028: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800028: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ncpodfixpos_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080002C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800030: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800034: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800038: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8080003C: jal         0x8001B668
    // 0x80800040: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    func_8001B668(rdram, ctx);
        goto after_0;
    // 0x80800040: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    after_0:
    // 0x80800044: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80800048: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8080004C: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80800050: jal         0x800000F0
    // 0x80800054: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    ncpodfixpos_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800054: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x80800058: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080005C: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x80800060: jal         0x800EFD24
    // 0x80800064: addiu       $a0, $v0, 0x20
    ctx->r4 = ADD32(ctx->r2, 0X20);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x80800064: addiu       $a0, $v0, 0x20
    ctx->r4 = ADD32(ctx->r2, 0X20);
    after_2:
    // 0x80800068: jal         0x800EFD24
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800070: jal         0x800EFD24
    // 0x80800074: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    func_800EFD24(rdram, ctx);
        goto after_4;
    // 0x80800074: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    after_4:
    // 0x80800078: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8080007C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800080: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800084: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800088: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8080008C: sh          $zero, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = 0;
    // 0x80800090: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    // 0x80800094: sb          $zero, 0x40($s0)
    MEM_B(0X40, ctx->r16) = 0;
    // 0x80800098: sb          $zero, 0x41($s0)
    MEM_B(0X41, ctx->r16) = 0;
    // 0x8080009C: sb          $zero, 0x42($s0)
    MEM_B(0X42, ctx->r16) = 0;
    // 0x808000A0: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x808000A4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x808000A8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x808000AC: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x808000B0: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x808000B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000BC: lh          $v0, 0x26($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X26);
    // 0x808000C0: jr          $ra
    // 0x808000C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808000C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ncpodfixpos_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000D4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x808000D8: jal         0x8001B754
    // 0x808000DC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B754(rdram, ctx);
        goto after_0;
    // 0x808000DC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x808000E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000E8: jr          $ra
    // 0x808000EC: nop

    return;
    // 0x808000EC: nop

;}
RECOMP_FUNC void ncpodfixpos_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000FC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80800100: jal         0x8001B798
    // 0x80800104: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001B798(rdram, ctx);
        goto after_0;
    // 0x80800104: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x80800108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080010C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800110: jr          $ra
    // 0x80800114: nop

    return;
    // 0x80800114: nop

;}
RECOMP_FUNC void func_80800118_ncpodfixpos(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800118: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080011C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800120: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800124: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800128: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080012C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800130: bne         $a2, $at, L_80800154
    if (ctx->r6 != ctx->r1) {
        // 0x80800134: sw          $a2, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->r6;
            goto L_80800154;
    }
    // 0x80800134: sw          $a2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r6;
    // 0x80800138: jal         0x800A5800
    // 0x8080013C: lh          $a0, 0x38($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X38);
    func_800A5800(rdram, ctx);
        goto after_0;
    // 0x8080013C: lh          $a0, 0x38($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X38);
    after_0:
    // 0x80800140: jal         0x80085580
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _cadbfunc_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800148: jal         0x80085590
    // 0x8080014C: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    _cadbfunc_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x8080014C: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    after_2:
    // 0x80800150: sb          $zero, 0x42($s0)
    MEM_B(0X42, ctx->r16) = 0;
L_80800154:
    // 0x80800154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800158: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080015C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800160: jr          $ra
    // 0x80800164: nop

    return;
    // 0x80800164: nop

;}
RECOMP_FUNC void ncpodfixpos_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080016C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800170: sh          $a2, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r6;
    // 0x80800174: jal         0x80000118
    // 0x80800178: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80800118_ncpodfixpos(rdram, ctx);
        goto after_0;
    // 0x80800178: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8080017C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800184: jr          $ra
    // 0x80800188: nop

    return;
    // 0x80800188: nop

;}
RECOMP_FUNC void ncpodfixpos_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080018C: sw          $a1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r5;
    // 0x80800190: lhu         $t6, 0x12($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X12);
    // 0x80800194: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x80800198: jr          $ra
    // 0x8080019C: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    return;
    // 0x8080019C: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
;}
