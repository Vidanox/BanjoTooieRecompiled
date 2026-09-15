#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800E7188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7188: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800E718C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800E7190: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E7194: beq         $v0, $zero, L_800E71B0
    if (ctx->r2 == 0) {
        // 0x800E7198: nop
    
            goto L_800E71B0;
    }
    // 0x800E7198: nop

    // 0x800E719C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_800E71A0:
    // 0x800E71A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800E71A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E71A8: bnel        $v0, $zero, L_800E71A0
    if (ctx->r2 != 0) {
        // 0x800E71AC: lbu         $v0, 0x0($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X0);
            goto L_800E71A0;
    }
    goto skip_0;
    // 0x800E71AC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    skip_0:
L_800E71B0:
    // 0x800E71B0: jr          $ra
    // 0x800E71B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800E71B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800E71B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E71B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E71BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E71C0: jal         0x80088738
    // 0x800E71C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _gldialog_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800E71C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E71C8: beq         $v0, $zero, L_800E71D8
    if (ctx->r2 == 0) {
        // 0x800E71CC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800E71D8;
    }
    // 0x800E71CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E71D0: b           L_800E71DC
    // 0x800E71D4: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
        goto L_800E71DC;
    // 0x800E71D4: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
L_800E71D8:
    // 0x800E71D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800E71DC:
    // 0x800E71DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E71E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E71E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E71EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E71EC: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x800E71F0: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x800E71F4: bnel        $t6, $t7, L_800E724C
    if (ctx->r14 != ctx->r15) {
            // 0x800E71F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    static_3_800E724C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800E71F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800E71FC: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
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
    goto skip_1;
    // 0x800E720C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    skip_1:
    // 0x800E7210: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x800E7214: bnel        $v0, $t8, L_800E7240
    if (ctx->r2 != ctx->r24) {
            // 0x800E7218: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    static_3_800E7240(rdram, ctx);
    return;
    }
    goto skip_2;
    // 0x800E7218: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    skip_2:
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
    goto skip_3;
    // 0x800E7230: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    skip_3:
L_800E7234:
    // 0x800E7234: jr          $ra
    // 0x800E7238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800E7238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800E723C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_800E7200:
    // 0x800E723C: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
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
    // 0x800E724C: jr          $ra
    // 0x800E7250: nop

    return;
    // 0x800E7250: nop

;}
RECOMP_FUNC void func_800E7254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7254: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800E7258: beql        $v0, $zero, L_800E7288
    if (ctx->r2 == 0) {
        // 0x800E725C: lbu         $t6, 0x0($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X0);
            goto L_800E7288;
    }
    goto skip_0;
    // 0x800E725C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    skip_0:
    // 0x800E7260: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x800E7264: beql        $v0, $v1, L_800E7288
    if (ctx->r2 == ctx->r3) {
        // 0x800E7268: lbu         $t6, 0x0($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X0);
            goto L_800E7288;
    }
    goto skip_1;
    // 0x800E7268: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    skip_1:
    // 0x800E726C: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
L_800E7270:
    // 0x800E7270: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800E7274: beql        $v0, $zero, L_800E7288
    if (ctx->r2 == 0) {
        // 0x800E7278: lbu         $t6, 0x0($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X0);
            goto L_800E7288;
    }
    goto skip_2;
    // 0x800E7278: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    skip_2:
    // 0x800E727C: bnel        $v0, $v1, L_800E7270
    if (ctx->r2 != ctx->r3) {
        // 0x800E7280: lbu         $v0, 0x1($a1)
        ctx->r2 = MEM_BU(ctx->r5, 0X1);
            goto L_800E7270;
    }
    goto skip_3;
    // 0x800E7280: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    skip_3:
    // 0x800E7284: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
L_800E7288:
    // 0x800E7288: bne         $v0, $t6, L_800E7294
    if (ctx->r2 != ctx->r14) {
        // 0x800E728C: nop
    
            goto L_800E7294;
    }
    // 0x800E728C: nop

    // 0x800E7290: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_800E7294:
    // 0x800E7294: jr          $ra
    // 0x800E7298: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x800E7298: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_800E729C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E729C: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x800E72A0: beq         $v0, $zero, L_800E72D8
    if (ctx->r2 == 0) {
        // 0x800E72A4: nop
    
            goto L_800E72D8;
    }
    // 0x800E72A4: nop

    // 0x800E72A8: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800E72AC: beq         $v0, $t6, L_800E72D8
    if (ctx->r2 == ctx->r14) {
        // 0x800E72B0: nop
    
            goto L_800E72D8;
    }
    // 0x800E72B0: nop

    // 0x800E72B4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_800E72B8:
    // 0x800E72B8: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    // 0x800E72BC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800E72C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800E72C4: beq         $v0, $zero, L_800E72D8
    if (ctx->r2 == 0) {
        // 0x800E72C8: nop
    
            goto L_800E72D8;
    }
    // 0x800E72C8: nop

    // 0x800E72CC: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x800E72D0: bnel        $v0, $t7, L_800E72B8
    if (ctx->r2 != ctx->r15) {
        // 0x800E72D4: sb          $v0, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r2;
            goto L_800E72B8;
    }
    goto skip_0;
    // 0x800E72D4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    skip_0:
L_800E72D8:
    // 0x800E72D8: jr          $ra
    // 0x800E72DC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    return;
    // 0x800E72DC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
;}
RECOMP_FUNC void func_800E72E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E72E0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800E72E4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800E72E8: beq         $t6, $zero, L_800E731C
    if (ctx->r14 == 0) {
        // 0x800E72EC: nop
    
            goto L_800E731C;
    }
    // 0x800E72EC: nop

    // 0x800E72F0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x800E72F4: slti        $at, $v1, 0x61
    ctx->r1 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
L_800E72F8:
    // 0x800E72F8: bne         $at, $zero, L_800E730C
    if (ctx->r1 != 0) {
        // 0x800E72FC: slti        $at, $v1, 0x7B
        ctx->r1 = SIGNED(ctx->r3) < 0X7B ? 1 : 0;
            goto L_800E730C;
    }
    // 0x800E72FC: slti        $at, $v1, 0x7B
    ctx->r1 = SIGNED(ctx->r3) < 0X7B ? 1 : 0;
    // 0x800E7300: beq         $at, $zero, L_800E730C
    if (ctx->r1 == 0) {
        // 0x800E7304: addiu       $t7, $v1, -0x20
        ctx->r15 = ADD32(ctx->r3, -0X20);
            goto L_800E730C;
    }
    // 0x800E7304: addiu       $t7, $v1, -0x20
    ctx->r15 = ADD32(ctx->r3, -0X20);
    // 0x800E7308: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_800E730C:
    // 0x800E730C: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x800E7310: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800E7314: bnel        $v1, $zero, L_800E72F8
    if (ctx->r3 != 0) {
        // 0x800E7318: slti        $at, $v1, 0x61
        ctx->r1 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
            goto L_800E72F8;
    }
    goto skip_0;
    // 0x800E7318: slti        $at, $v1, 0x61
    ctx->r1 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
    skip_0:
L_800E731C:
    // 0x800E731C: jr          $ra
    // 0x800E7320: nop

    return;
    // 0x800E7320: nop

;}
RECOMP_FUNC void func_800E7324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7324: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800E7328: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800E732C: beq         $t6, $zero, L_800E7360
    if (ctx->r14 == 0) {
        // 0x800E7330: nop
    
            goto L_800E7360;
    }
    // 0x800E7330: nop

    // 0x800E7334: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x800E7338: slti        $at, $v1, 0x41
    ctx->r1 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
L_800E733C:
    // 0x800E733C: bne         $at, $zero, L_800E7350
    if (ctx->r1 != 0) {
        // 0x800E7340: slti        $at, $v1, 0x5B
        ctx->r1 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
            goto L_800E7350;
    }
    // 0x800E7340: slti        $at, $v1, 0x5B
    ctx->r1 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
    // 0x800E7344: beq         $at, $zero, L_800E7350
    if (ctx->r1 == 0) {
        // 0x800E7348: addiu       $t7, $v1, 0x20
        ctx->r15 = ADD32(ctx->r3, 0X20);
            goto L_800E7350;
    }
    // 0x800E7348: addiu       $t7, $v1, 0x20
    ctx->r15 = ADD32(ctx->r3, 0X20);
    // 0x800E734C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_800E7350:
    // 0x800E7350: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x800E7354: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800E7358: bnel        $v1, $zero, L_800E733C
    if (ctx->r3 != 0) {
        // 0x800E735C: slti        $at, $v1, 0x41
        ctx->r1 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_800E733C;
    }
    goto skip_0;
    // 0x800E735C: slti        $at, $v1, 0x41
    ctx->r1 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    skip_0:
L_800E7360:
    // 0x800E7360: jr          $ra
    // 0x800E7364: nop

    return;
    // 0x800E7364: nop

;}
RECOMP_FUNC void func_800E7368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7368: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E736C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800E7370: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800E7374: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E7378: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800E737C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800E7380: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E7384: addiu       $s0, $zero, 0x1F
    ctx->r16 = ADD32(0, 0X1F);
    // 0x800E7388: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_800E738C:
    // 0x800E738C: sllv        $t7, $t6, $s0
    ctx->r15 = S32(ctx->r14 << (ctx->r16 & 31));
    // 0x800E7390: and         $t8, $t7, $s1
    ctx->r24 = ctx->r15 & ctx->r17;
    // 0x800E7394: beq         $t8, $zero, L_800E73A4
    if (ctx->r24 == 0) {
        // 0x800E7398: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800E73A4;
    }
    // 0x800E7398: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800E739C: b           L_800E73A8
    // 0x800E73A0: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
        goto L_800E73A8;
    // 0x800E73A0: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
L_800E73A4:
    // 0x800E73A4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_800E73A8:
    // 0x800E73A8: jal         0x800E6A58
    // 0x800E73AC: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_800E6A58(rdram, ctx);
        goto after_0;
    // 0x800E73AC: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_0:
    // 0x800E73B0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800E73B4: bgezl       $s0, L_800E738C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800E73B8: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_800E738C;
    }
    goto skip_0;
    // 0x800E73B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_0:
    // 0x800E73BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E73C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E73C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800E73C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800E73CC: jr          $ra
    // 0x800E73D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E73D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E73D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E73D4: jr          $ra
    // 0x800E73D8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x800E73D8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800E73DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E73DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E73E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E73E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800E73E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800E73EC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800E73F0: jal         0x800E73D4
    // 0x800E73F4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800E73D4(rdram, ctx);
        goto after_0;
    // 0x800E73F4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800E73F8: or          $a2, $sp, $zero
    ctx->r6 = ctx->r29 | 0;
    // 0x800E73FC: addiu       $a2, $a2, 0x2B
    ctx->r6 = ADD32(ctx->r6, 0X2B);
    // 0x800E7400: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800E7404: and         $t6, $a2, $at
    ctx->r14 = ctx->r6 & ctx->r1;
    // 0x800E7408: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x800E740C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E7410: jal         0x800E7480
    // 0x800E7414: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800E7480(rdram, ctx);
        goto after_1;
    // 0x800E7414: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800E7418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E741C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E7420: jr          $ra
    // 0x800E7424: nop

    return;
    // 0x800E7424: nop

;}
RECOMP_FUNC void func_800E7428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7428: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E742C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7430: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800E7434: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800E7438: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800E743C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800E7440: or          $a2, $sp, $zero
    ctx->r6 = ctx->r29 | 0;
    // 0x800E7444: addiu       $a2, $a2, 0x2B
    ctx->r6 = ADD32(ctx->r6, 0X2B);
    // 0x800E7448: beq         $t6, $zero, L_800E7460
    if (ctx->r14 == 0) {
        // 0x800E744C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_800E7460;
    }
    // 0x800E744C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800E7450: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
L_800E7454:
    // 0x800E7454: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E7458: bnel        $t7, $zero, L_800E7454
    if (ctx->r15 != 0) {
        // 0x800E745C: lbu         $t7, 0x1($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X1);
            goto L_800E7454;
    }
    goto skip_0;
    // 0x800E745C: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
    skip_0:
L_800E7460:
    // 0x800E7460: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800E7464: and         $t8, $a2, $at
    ctx->r24 = ctx->r6 & ctx->r1;
    // 0x800E7468: jal         0x800E7480
    // 0x800E746C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    func_800E7480(rdram, ctx);
        goto after_0;
    // 0x800E746C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_0:
    // 0x800E7470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7474: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E7478: jr          $ra
    // 0x800E747C: nop

    return;
    // 0x800E747C: nop

;}
RECOMP_FUNC void func_800E7480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7480: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E7484: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E7488: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800E748C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800E7490: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800E7494: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800E7498: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E749C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E74A0: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x800E74A4: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800E74A8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800E74AC: beq         $t6, $zero, L_800E75F8
    if (ctx->r14 == 0) {
        // 0x800E74B0: or          $s3, $a1, $zero
        ctx->r19 = ctx->r5 | 0;
            goto L_800E75F8;
    }
    // 0x800E74B0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800E74B4: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x800E74B8: addiu       $s5, $zero, -0x8
    ctx->r21 = ADD32(0, -0X8);
    // 0x800E74BC: addiu       $s4, $zero, 0x25
    ctx->r20 = ADD32(0, 0X25);
    // 0x800E74C0: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
L_800E74C4:
    // 0x800E74C4: beq         $s4, $a1, L_800E74E4
    if (ctx->r20 == ctx->r5) {
        // 0x800E74C8: slti        $at, $a1, 0x20
        ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
            goto L_800E74E4;
    }
    // 0x800E74C8: slti        $at, $a1, 0x20
    ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    // 0x800E74CC: bnel        $at, $zero, L_800E75EC
    if (ctx->r1 != 0) {
        // 0x800E74D0: lbu         $a1, 0x1($s3)
        ctx->r5 = MEM_BU(ctx->r19, 0X1);
            goto L_800E75EC;
    }
    goto skip_0;
    // 0x800E74D0: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
    skip_0:
    // 0x800E74D4: jal         0x800E6A58
    // 0x800E74D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E6A58(rdram, ctx);
        goto after_0;
    // 0x800E74D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800E74DC: b           L_800E75EC
    // 0x800E74E0: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
        goto L_800E75EC;
    // 0x800E74E0: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_800E74E4:
    // 0x800E74E4: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
    // 0x800E74E8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800E74EC: addiu       $t7, $a1, -0x62
    ctx->r15 = ADD32(ctx->r5, -0X62);
    // 0x800E74F0: sltiu       $at, $t7, 0x17
    ctx->r1 = ctx->r15 < 0X17 ? 1 : 0;
    // 0x800E74F4: beq         $at, $zero, L_800E75E0
    if (ctx->r1 == 0) {
        // 0x800E74F8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800E75E0;
    }
    // 0x800E74F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E74FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E7500: addu        $at, $at, $t7
    gpr jr_addend_800E7508 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E7504: lw          $t7, 0x5DD8($at)
    ctx->r15 = ADD32(ctx->r1, 0X5DD8);
    // 0x800E7508: jr          $t7
    // 0x800E750C: nop

    switch (jr_addend_800E7508 >> 2) {
        case 0: goto L_800E7510; break;
        case 1: goto L_800E752C; break;
        case 2: goto L_800E7548; break;
        case 3: goto L_800E75E0; break;
        case 4: goto L_800E7564; break;
        case 5: goto L_800E75E0; break;
        case 6: goto L_800E75E0; break;
        case 7: goto L_800E75E0; break;
        case 8: goto L_800E75E0; break;
        case 9: goto L_800E75E0; break;
        case 10: goto L_800E75E0; break;
        case 11: goto L_800E75E0; break;
        case 12: goto L_800E75E0; break;
        case 13: goto L_800E75E0; break;
        case 14: goto L_800E758C; break;
        case 15: goto L_800E75E0; break;
        case 16: goto L_800E75E0; break;
        case 17: goto L_800E75A8; break;
        case 18: goto L_800E75E0; break;
        case 19: goto L_800E75E0; break;
        case 20: goto L_800E75E0; break;
        case 21: goto L_800E75E0; break;
        case 22: goto L_800E75C4; break;
        default: switch_error(__func__, 0x800E7508, 0x80125DD8);
    }
    // 0x800E750C: nop

L_800E7510:
    // 0x800E7510: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x800E7514: and         $s0, $t8, $s2
    ctx->r16 = ctx->r24 & ctx->r18;
    // 0x800E7518: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x800E751C: jal         0x800E7368
    // 0x800E7520: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E7368(rdram, ctx);
        goto after_1;
    // 0x800E7520: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800E7524: b           L_800E75EC
    // 0x800E7528: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
        goto L_800E75EC;
    // 0x800E7528: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_800E752C:
    // 0x800E752C: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x800E7530: and         $s0, $t9, $s2
    ctx->r16 = ctx->r25 & ctx->r18;
    // 0x800E7534: lbu         $a1, -0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, -0X1);
    // 0x800E7538: jal         0x800E6A58
    // 0x800E753C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E6A58(rdram, ctx);
        goto after_2;
    // 0x800E753C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x800E7540: b           L_800E75EC
    // 0x800E7544: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
        goto L_800E75EC;
    // 0x800E7544: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_800E7548:
    // 0x800E7548: addiu       $t0, $s0, 0x7
    ctx->r8 = ADD32(ctx->r16, 0X7);
    // 0x800E754C: and         $s0, $t0, $s2
    ctx->r16 = ctx->r8 & ctx->r18;
    // 0x800E7550: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x800E7554: jal         0x800E6DB4
    // 0x800E7558: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E6DB4(rdram, ctx);
        goto after_3;
    // 0x800E7558: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x800E755C: b           L_800E75EC
    // 0x800E7560: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
        goto L_800E75EC;
    // 0x800E7560: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_800E7564:
    // 0x800E7564: addiu       $t1, $s0, 0xF
    ctx->r9 = ADD32(ctx->r16, 0XF);
    // 0x800E7568: and         $s0, $t1, $s5
    ctx->r16 = ctx->r9 & ctx->r21;
    // 0x800E756C: ldc1        $f0, -0x8($s0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r16, -0X8);
    // 0x800E7570: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E7574: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x800E7578: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800E757C: jal         0x800E6BAC
    // 0x800E7580: nop

    func_800E6BAC(rdram, ctx);
        goto after_4;
    // 0x800E7580: nop

    after_4:
    // 0x800E7584: b           L_800E75EC
    // 0x800E7588: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
        goto L_800E75EC;
    // 0x800E7588: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_800E758C:
    // 0x800E758C: addiu       $t2, $s0, 0x7
    ctx->r10 = ADD32(ctx->r16, 0X7);
    // 0x800E7590: and         $s0, $t2, $s2
    ctx->r16 = ctx->r10 & ctx->r18;
    // 0x800E7594: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x800E7598: jal         0x800E6F7C
    // 0x800E759C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E6F7C(rdram, ctx);
        goto after_5;
    // 0x800E759C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x800E75A0: b           L_800E75EC
    // 0x800E75A4: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
        goto L_800E75EC;
    // 0x800E75A4: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_800E75A8:
    // 0x800E75A8: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x800E75AC: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x800E75B0: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x800E75B4: jal         0x800E6A10
    // 0x800E75B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E6A10(rdram, ctx);
        goto after_6;
    // 0x800E75B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x800E75BC: b           L_800E75EC
    // 0x800E75C0: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
        goto L_800E75EC;
    // 0x800E75C0: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_800E75C4:
    // 0x800E75C4: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x800E75C8: and         $s0, $t4, $s2
    ctx->r16 = ctx->r12 & ctx->r18;
    // 0x800E75CC: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x800E75D0: jal         0x800E6F7C
    // 0x800E75D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E6F7C(rdram, ctx);
        goto after_7;
    // 0x800E75D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x800E75D8: b           L_800E75EC
    // 0x800E75DC: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
        goto L_800E75EC;
    // 0x800E75DC: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_800E75E0:
    // 0x800E75E0: jal         0x800E6A58
    // 0x800E75E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800E6A58(rdram, ctx);
        goto after_8;
    // 0x800E75E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x800E75E8: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_800E75EC:
    // 0x800E75EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800E75F0: bne         $a1, $zero, L_800E74C4
    if (ctx->r5 != 0) {
        // 0x800E75F4: nop
    
            goto L_800E74C4;
    }
    // 0x800E75F4: nop

L_800E75F8:
    // 0x800E75F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E75FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E7600: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E7604: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7608: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800E760C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800E7610: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800E7614: jr          $ra
    // 0x800E7618: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E7618: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800E7620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7620: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E7624: addiu       $v1, $v1, -0x2A80
    ctx->r3 = ADD32(ctx->r3, -0X2A80);
    // 0x800E7628: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800E762C: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x800E7630: sw          $t6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r14;
    // 0x800E7634: sw          $t6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r14;
    // 0x800E7638: sw          $t6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r14;
    // 0x800E763C: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x800E7640: sw          $t6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r14;
    // 0x800E7644: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800E7648: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800E764C: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x800E7650: sw          $t9, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r25;
    // 0x800E7654: jr          $ra
    // 0x800E7658: sb          $zero, 0x24($v1)
    MEM_B(0X24, ctx->r3) = 0;
    return;
    // 0x800E7658: sb          $zero, 0x24($v1)
    MEM_B(0X24, ctx->r3) = 0;
;}
RECOMP_FUNC void func_800E765C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E765C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800E7660: addiu       $a1, $a1, -0x2A80
    ctx->r5 = ADD32(ctx->r5, -0X2A80);
    // 0x800E7664: lbu         $t6, 0x24($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X24);
    // 0x800E7668: beq         $t6, $zero, L_800E768C
    if (ctx->r14 == 0) {
        // 0x800E766C: nop
    
            goto L_800E768C;
    }
    // 0x800E766C: nop

    // 0x800E7670: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E7674: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x800E7678: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800E767C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800E7680: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800E7684: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800E7688: sb          $zero, 0x24($a1)
    MEM_B(0X24, ctx->r5) = 0;
L_800E768C:
    // 0x800E768C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7694: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800E7698: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E769C: jr          $ra
    // 0x800E76A0: sb          $t6, -0x2A5C($at)
    MEM_B(-0X2A5C, ctx->r1) = ctx->r14;
    return;
    // 0x800E76A0: sb          $t6, -0x2A5C($at)
    MEM_B(-0X2A5C, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800E76A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E76A4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E76A8: addiu       $v0, $v0, -0x2A80
    ctx->r2 = ADD32(ctx->r2, -0X2A80);
    // 0x800E76AC: lw          $t6, 0x20($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X20);
    // 0x800E76B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E76B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E76B8: beql        $a1, $t6, L_800E776C
    if (ctx->r5 == ctx->r14) {
        // 0x800E76BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E776C;
    }
    goto skip_0;
    // 0x800E76BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E76C0: sw          $a1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r5;
    // 0x800E76C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E76C8: jal         0x800E765C
    // 0x800E76CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800E765C(rdram, ctx);
        goto after_0;
    // 0x800E76CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E76D0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800E76D4: lui         $t8, 0xFC11
    ctx->r24 = S32(0XFC11 << 16);
    // 0x800E76D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E76DC: beq         $a1, $zero, L_800E7704
    if (ctx->r5 == 0) {
        // 0x800E76E0: ori         $t8, $t8, 0x9623
        ctx->r24 = ctx->r24 | 0X9623;
            goto L_800E7704;
    }
    // 0x800E76E0: ori         $t8, $t8, 0x9623
    ctx->r24 = ctx->r24 | 0X9623;
    // 0x800E76E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E76E8: beq         $a1, $at, L_800E7724
    if (ctx->r5 == ctx->r1) {
        // 0x800E76EC: lui         $t1, 0xFCFF
        ctx->r9 = S32(0XFCFF << 16);
            goto L_800E7724;
    }
    // 0x800E76EC: lui         $t1, 0xFCFF
    ctx->r9 = S32(0XFCFF << 16);
    // 0x800E76F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E76F4: beq         $a1, $at, L_800E7748
    if (ctx->r5 == ctx->r1) {
        // 0x800E76F8: lui         $t4, 0xFCFF
        ctx->r12 = S32(0XFCFF << 16);
            goto L_800E7748;
    }
    // 0x800E76F8: lui         $t4, 0xFCFF
    ctx->r12 = S32(0XFCFF << 16);
    // 0x800E76FC: b           L_800E776C
    // 0x800E7700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800E776C;
    // 0x800E7700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E7704:
    // 0x800E7704: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E7708: lui         $t9, 0xFF2F
    ctx->r25 = S32(0XFF2F << 16);
    // 0x800E770C: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x800E7710: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800E7714: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800E7718: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800E771C: b           L_800E7768
    // 0x800E7720: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_800E7768;
    // 0x800E7720: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_800E7724:
    // 0x800E7724: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E7728: lui         $t2, 0xFF0C
    ctx->r10 = S32(0XFF0C << 16);
    // 0x800E772C: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x800E7730: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x800E7734: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x800E7738: ori         $t1, $t1, 0x9403
    ctx->r9 = ctx->r9 | 0X9403;
    // 0x800E773C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x800E7740: b           L_800E7768
    // 0x800E7744: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
        goto L_800E7768;
    // 0x800E7744: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
L_800E7748:
    // 0x800E7748: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E774C: lui         $t5, 0xFFFD
    ctx->r13 = S32(0XFFFD << 16);
    // 0x800E7750: ori         $t5, $t5, 0xF6FB
    ctx->r13 = ctx->r13 | 0XF6FB;
    // 0x800E7754: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x800E7758: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x800E775C: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x800E7760: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800E7764: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
L_800E7768:
    // 0x800E7768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E776C:
    // 0x800E776C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7770: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7778: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E777C: addiu       $v0, $v0, -0x2A80
    ctx->r2 = ADD32(ctx->r2, -0X2A80);
    // 0x800E7780: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x800E7784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E778C: beql        $a1, $t6, L_800E781C
    if (ctx->r5 == ctx->r14) {
        // 0x800E7790: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E781C;
    }
    goto skip_0;
    // 0x800E7790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E7794: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    // 0x800E7798: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E779C: jal         0x800E765C
    // 0x800E77A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800E765C(rdram, ctx);
        goto after_0;
    // 0x800E77A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E77A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E77A8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800E77AC: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x800E77B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E77B4: ori         $t8, $t8, 0xA01
    ctx->r24 = ctx->r24 | 0XA01;
    // 0x800E77B8: lui         $t3, 0xE200
    ctx->r11 = S32(0XE200 << 16);
    // 0x800E77BC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800E77C0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800E77C4: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x800E77C8: bne         $a1, $zero, L_800E77F8
    if (ctx->r5 != 0) {
        // 0x800E77CC: sw          $t8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r24;
            goto L_800E77F8;
    }
    // 0x800E77CC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800E77D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E77D4: lui         $t0, 0xE200
    ctx->r8 = S32(0XE200 << 16);
    // 0x800E77D8: lui         $t1, 0x50
    ctx->r9 = S32(0X50 << 16);
    // 0x800E77DC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800E77E0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800E77E4: ori         $t1, $t1, 0x4A40
    ctx->r9 = ctx->r9 | 0X4A40;
    // 0x800E77E8: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x800E77EC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x800E77F0: b           L_800E7818
    // 0x800E77F4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
        goto L_800E7818;
    // 0x800E77F4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
L_800E77F8:
    // 0x800E77F8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E77FC: lui         $t4, 0xC18
    ctx->r12 = S32(0XC18 << 16);
    // 0x800E7800: ori         $t4, $t4, 0x4A40
    ctx->r12 = ctx->r12 | 0X4A40;
    // 0x800E7804: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x800E7808: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x800E780C: ori         $t3, $t3, 0x1C
    ctx->r11 = ctx->r11 | 0X1C;
    // 0x800E7810: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x800E7814: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
L_800E7818:
    // 0x800E7818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E781C:
    // 0x800E781C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7820: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7828: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E782C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7830: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800E7834: jal         0x800F2EFC
    // 0x800E7838: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_800F2EFC(rdram, ctx);
        goto after_0;
    // 0x800E7838: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x800E783C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E7840: addiu       $a0, $a0, -0x2A80
    ctx->r4 = ADD32(ctx->r4, -0X2A80);
    // 0x800E7844: jal         0x800F371C
    // 0x800E7848: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800F371C(rdram, ctx);
        goto after_1;
    // 0x800E7848: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x800E784C: bne         $v0, $zero, L_800E78B8
    if (ctx->r2 != 0) {
        // 0x800E7850: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800E78B8;
    }
    // 0x800E7850: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E7854: addiu       $a0, $a0, -0x2A80
    ctx->r4 = ADD32(ctx->r4, -0X2A80);
    // 0x800E7858: jal         0x800F2E7C
    // 0x800E785C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800F2E7C(rdram, ctx);
        goto after_2;
    // 0x800E785C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x800E7860: jal         0x800E765C
    // 0x800E7864: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800E765C(rdram, ctx);
        goto after_3;
    // 0x800E7864: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x800E7868: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800E786C: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x800E7870: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x800E7874: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800E7878: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x800E787C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800E7880: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7884: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E7888: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800E788C: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x800E7890: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800E7894: andi        $t7, $t5, 0xFF
    ctx->r15 = ctx->r13 & 0XFF;
    // 0x800E7898: sll         $t3, $t2, 24
    ctx->r11 = S32(ctx->r10 << 24);
    // 0x800E789C: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x800E78A0: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x800E78A4: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x800E78A8: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x800E78AC: or          $t8, $t4, $t6
    ctx->r24 = ctx->r12 | ctx->r14;
    // 0x800E78B0: or          $t0, $t8, $t2
    ctx->r8 = ctx->r24 | ctx->r10;
    // 0x800E78B4: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
L_800E78B8:
    // 0x800E78B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E78BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E78C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E78C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E78C8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E78CC: addiu       $v0, $v0, -0x2A80
    ctx->r2 = ADD32(ctx->r2, -0X2A80);
    // 0x800E78D0: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x800E78D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E78D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E78DC: beql        $a1, $t6, L_800E791C
    if (ctx->r5 == ctx->r14) {
        // 0x800E78E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E791C;
    }
    goto skip_0;
    // 0x800E78E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E78E4: sw          $a1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r5;
    // 0x800E78E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E78EC: jal         0x800E765C
    // 0x800E78F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800E765C(rdram, ctx);
        goto after_0;
    // 0x800E78F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E78F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E78F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800E78FC: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x800E7900: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E7904: ori         $t8, $t8, 0x1201
    ctx->r24 = ctx->r24 | 0X1201;
    // 0x800E7908: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800E790C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800E7910: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x800E7914: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800E7918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E791C:
    // 0x800E791C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7920: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7928: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E792C: addiu       $v0, $v0, -0x2A80
    ctx->r2 = ADD32(ctx->r2, -0X2A80);
    // 0x800E7930: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x800E7934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E793C: beql        $a1, $t6, L_800E797C
    if (ctx->r5 == ctx->r14) {
        // 0x800E7940: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E797C;
    }
    goto skip_0;
    // 0x800E7940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E7944: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x800E7948: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E794C: jal         0x800E765C
    // 0x800E7950: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800E765C(rdram, ctx);
        goto after_0;
    // 0x800E7950: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E7954: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E7958: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800E795C: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x800E7960: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E7964: ori         $t8, $t8, 0x1001
    ctx->r24 = ctx->r24 | 0X1001;
    // 0x800E7968: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800E796C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800E7970: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x800E7974: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800E7978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E797C:
    // 0x800E797C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7980: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7988: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E798C: addiu       $v0, $v0, -0x2A80
    ctx->r2 = ADD32(ctx->r2, -0X2A80);
    // 0x800E7990: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x800E7994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E799C: beql        $a1, $t6, L_800E79DC
    if (ctx->r5 == ctx->r14) {
        // 0x800E79A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E79DC;
    }
    goto skip_0;
    // 0x800E79A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E79A4: sw          $a1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r5;
    // 0x800E79A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E79AC: jal         0x800E765C
    // 0x800E79B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800E765C(rdram, ctx);
        goto after_0;
    // 0x800E79B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E79B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E79B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800E79BC: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x800E79C0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E79C4: ori         $t8, $t8, 0xC00
    ctx->r24 = ctx->r24 | 0XC00;
    // 0x800E79C8: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800E79CC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800E79D0: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x800E79D4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800E79D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E79DC:
    // 0x800E79DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E79E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E79E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E79E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E79EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E79F0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E79F4: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800E79F8: addiu       $t8, $t8, 0x3310
    ctx->r24 = ADD32(ctx->r24, 0X3310);
    // 0x800E79FC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E7A00: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E7A04: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800E7A08: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E7A0C: jal         0x800E7620
    // 0x800E7A10: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    func_800E7620(rdram, ctx);
        goto after_0;
    // 0x800E7A10: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    after_0:
    // 0x800E7A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7A18: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800E7A1C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E7A20: sb          $t9, -0x2A5B($at)
    MEM_B(-0X2A5B, ctx->r1) = ctx->r25;
    // 0x800E7A24: jr          $ra
    // 0x800E7A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800E7A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800E7A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7A34: jal         0x800E7620
    // 0x800E7A38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800E7620(rdram, ctx);
        goto after_0;
    // 0x800E7A38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E7A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7A44: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7A50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7A54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E7A58: jal         0x800E7928
    // 0x800E7A5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800E7928(rdram, ctx);
        goto after_0;
    // 0x800E7A5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E7A60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E7A64: jal         0x800E7988
    // 0x800E7A68: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    func_800E7988(rdram, ctx);
        goto after_1;
    // 0x800E7A68: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    after_1:
    // 0x800E7A6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E7A70: jal         0x800E78C8
    // 0x800E7A74: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    func_800E78C8(rdram, ctx);
        goto after_2;
    // 0x800E7A74: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    after_2:
    // 0x800E7A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7A7C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E7A80: sb          $zero, -0x2A5B($at)
    MEM_B(-0X2A5B, ctx->r1) = 0;
    // 0x800E7A84: jr          $ra
    // 0x800E7A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800E7A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800E7A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7A90: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800E7A94: addiu       $t1, $t1, -0x2A30
    ctx->r9 = ADD32(ctx->r9, -0X2A30);
    // 0x800E7A98: lh          $t6, 0x8($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X8);
    // 0x800E7A9C: bnel        $a1, $t6, L_800E7AD0
    if (ctx->r5 != ctx->r14) {
        // 0x800E7AA0: mtc1        $a1, $f4
        ctx->f4.u32l = ctx->r5;
            goto L_800E7AD0;
    }
    goto skip_0;
    // 0x800E7AA0: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    skip_0:
    // 0x800E7AA4: lh          $t7, 0xA($t1)
    ctx->r15 = MEM_H(ctx->r9, 0XA);
    // 0x800E7AA8: bnel        $a2, $t7, L_800E7AD0
    if (ctx->r6 != ctx->r15) {
        // 0x800E7AAC: mtc1        $a1, $f4
        ctx->f4.u32l = ctx->r5;
            goto L_800E7AD0;
    }
    goto skip_1;
    // 0x800E7AAC: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    skip_1:
    // 0x800E7AB0: lh          $t8, 0xC($t1)
    ctx->r24 = MEM_H(ctx->r9, 0XC);
    // 0x800E7AB4: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x800E7AB8: bnel        $a3, $t8, L_800E7AD0
    if (ctx->r7 != ctx->r24) {
        // 0x800E7ABC: mtc1        $a1, $f4
        ctx->f4.u32l = ctx->r5;
            goto L_800E7AD0;
    }
    goto skip_2;
    // 0x800E7ABC: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    skip_2:
    // 0x800E7AC0: lh          $t9, 0xE($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XE);
    // 0x800E7AC4: beq         $v0, $t9, L_800E7B80
    if (ctx->r2 == ctx->r25) {
        // 0x800E7AC8: nop
    
            goto L_800E7B80;
    }
    // 0x800E7AC8: nop

    // 0x800E7ACC: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
L_800E7AD0:
    // 0x800E7AD0: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x800E7AD4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800E7AD8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E7ADC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800E7AE0: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x800E7AE4: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x800E7AE8: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x800E7AEC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E7AF0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800E7AF4: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x800E7AF8: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x800E7AFC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800E7B00: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800E7B04: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800E7B08: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800E7B0C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x800E7B10: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x800E7B14: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x800E7B18: addu        $t4, $a1, $a3
    ctx->r12 = ADD32(ctx->r5, ctx->r7);
    // 0x800E7B1C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800E7B20: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800E7B24: andi        $t2, $t9, 0xFFF
    ctx->r10 = ctx->r25 & 0XFFF;
    // 0x800E7B28: or          $t3, $t7, $t2
    ctx->r11 = ctx->r15 | ctx->r10;
    // 0x800E7B2C: addu        $t7, $a2, $v0
    ctx->r15 = ADD32(ctx->r6, ctx->r2);
    // 0x800E7B30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E7B34: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800E7B38: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x800E7B3C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E7B40: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800E7B44: nop

    // 0x800E7B48: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800E7B4C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800E7B50: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800E7B54: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800E7B58: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x800E7B5C: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x800E7B60: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800E7B64: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x800E7B68: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x800E7B6C: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    // 0x800E7B70: sh          $a1, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r5;
    // 0x800E7B74: sh          $a2, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r6;
    // 0x800E7B78: sh          $a3, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r7;
    // 0x800E7B7C: sh          $v0, 0xE($t1)
    MEM_H(0XE, ctx->r9) = ctx->r2;
L_800E7B80:
    // 0x800E7B80: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7B90: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E7B94: lui         $t8, 0x12
    ctx->r24 = S32(0X12 << 16);
    // 0x800E7B98: addiu       $t8, $t8, 0x3340
    ctx->r24 = ADD32(ctx->r24, 0X3340);
    // 0x800E7B9C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E7BA0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E7BA4: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800E7BA8: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x800E7BAC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800E7BB0: jal         0x800E7FF8
    // 0x800E7BB4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    func_800E7FF8(rdram, ctx);
        goto after_0;
    // 0x800E7BB4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    after_0:
    // 0x800E7BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7BC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7BC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E7BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7BD0: jal         0x8001A0A8
    // 0x800E7BD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8001A0A8(rdram, ctx);
        goto after_0;
    // 0x800E7BD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E7BD8: beql        $v0, $zero, L_800E7C1C
    if (ctx->r2 == 0) {
        // 0x800E7BDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E7C1C;
    }
    goto skip_0;
    // 0x800E7BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E7BE0: jal         0x800A8184
    // 0x800E7BE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800A8184(rdram, ctx);
        goto after_1;
    // 0x800E7BE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800E7BE8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800E7BEC: beq         $v0, $at, L_800E7C18
    if (ctx->r2 == ctx->r1) {
        // 0x800E7BF0: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800E7C18;
    }
    // 0x800E7BF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7BF4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800E7BF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E7BFC: addu        $t8, $a0, $at
    ctx->r24 = ADD32(ctx->r4, ctx->r1);
    // 0x800E7C00: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800E7C04: lui         $t7, 0xFE00
    ctx->r15 = S32(0XFE00 << 16);
    // 0x800E7C08: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E7C0C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800E7C10: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800E7C14: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_800E7C18:
    // 0x800E7C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E7C1C:
    // 0x800E7C1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E7C20: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7C28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E7C2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E7C30: jal         0x8001A0A8
    // 0x800E7C34: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8001A0A8(rdram, ctx);
        goto after_0;
    // 0x800E7C34: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E7C38: beq         $v0, $zero, L_800E7CE4
    if (ctx->r2 == 0) {
        // 0x800E7C3C: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_800E7CE4;
    }
    // 0x800E7C3C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800E7C40: jal         0x800A8184
    // 0x800E7C44: nop

    func_800A8184(rdram, ctx);
        goto after_1;
    // 0x800E7C44: nop

    after_1:
    // 0x800E7C48: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800E7C4C: bnel        $v0, $at, L_800E7C68
    if (ctx->r2 != ctx->r1) {
        // 0x800E7C50: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_800E7C68;
    }
    goto skip_0;
    // 0x800E7C50: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x800E7C54: jal         0x800EA358
    // 0x800E7C58: nop

    func_800EA358(rdram, ctx);
        goto after_2;
    // 0x800E7C58: nop

    after_2:
    // 0x800E7C5C: beql        $v0, $zero, L_800E7CE8
    if (ctx->r2 == 0) {
        // 0x800E7C60: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800E7CE8;
    }
    goto skip_1;
    // 0x800E7C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800E7C64: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_800E7C68:
    // 0x800E7C68: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E7C6C: addiu       $t0, $t0, 0x7750
    ctx->r8 = ADD32(ctx->r8, 0X7750);
    // 0x800E7C70: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E7C74: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x800E7C78: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800E7C7C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E7C80: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E7C84: lh          $t7, 0x0($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X0);
    // 0x800E7C88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7C8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E7C90: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800E7C94: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800E7C98: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x800E7C9C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x800E7CA0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E7CA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E7CA8: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x800E7CAC: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800E7CB0: lh          $t4, 0x7752($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X7752);
    // 0x800E7CB4: lh          $a3, 0x0($t0)
    ctx->r7 = MEM_H(ctx->r8, 0X0);
    // 0x800E7CB8: jal         0x800E7A90
    // 0x800E7CBC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_800E7A90(rdram, ctx);
        goto after_3;
    // 0x800E7CBC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_3:
    // 0x800E7CC0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E7CC4: lh          $t5, 0x7752($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7752);
    // 0x800E7CC8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E7CCC: lh          $a3, 0x7750($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7750);
    // 0x800E7CD0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800E7CD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7CD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E7CDC: jal         0x800BC5B0
    // 0x800E7CE0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_800BC5B0(rdram, ctx);
        goto after_4;
    // 0x800E7CE0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_4:
L_800E7CE4:
    // 0x800E7CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800E7CE8:
    // 0x800E7CE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E7CEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7CF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E7CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7CFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E7D00: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E7D04: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x800E7D08: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800E7D0C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E7D10: lh          $t7, 0x7750($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7750);
    // 0x800E7D14: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800E7D18: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800E7D1C: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x800E7D20: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x800E7D24: jal         0x800A989C
    // 0x800E7D28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800A989C(rdram, ctx);
        goto after_0;
    // 0x800E7D28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800E7D2C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7D30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E7D34: addu        $t1, $v0, $at
    ctx->r9 = ADD32(ctx->r2, ctx->r1);
    // 0x800E7D38: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x800E7D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7D40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E7D44: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7D4C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800E7D50: lh          $t6, 0x7752($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7752);
    // 0x800E7D54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E7D58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E7D5C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E7D60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800E7D64: lh          $a3, 0x7750($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7750);
    // 0x800E7D68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7D6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E7D70: jal         0x800E7A90
    // 0x800E7D74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800E7A90(rdram, ctx);
        goto after_0;
    // 0x800E7D74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x800E7D78: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E7D7C: lh          $t7, 0x7752($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7752);
    // 0x800E7D80: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E7D84: lh          $a3, 0x7750($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7750);
    // 0x800E7D88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E7D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7D90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E7D94: jal         0x800BC580
    // 0x800E7D98: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_800BC580(rdram, ctx);
        goto after_1;
    // 0x800E7D98: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x800E7D9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7DA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E7DA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7DAC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E7DB0: addiu       $v0, $v0, -0x2A30
    ctx->r2 = ADD32(ctx->r2, -0X2A30);
    // 0x800E7DB4: lh          $t6, 0x6($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X6);
    // 0x800E7DB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E7DBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E7DC0: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x800E7DC4: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x800E7DC8: lh          $a3, 0x4($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X4);
    // 0x800E7DCC: jal         0x800E7A90
    // 0x800E7DD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800E7A90(rdram, ctx);
        goto after_0;
    // 0x800E7DD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x800E7DD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7DD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E7DDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7DE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E7DE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E7DEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800E7DF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800E7DF4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800E7DF8: jal         0x8001A0A8
    // 0x800E7DFC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8001A0A8(rdram, ctx);
        goto after_0;
    // 0x800E7DFC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800E7E00: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E7E04: beq         $v0, $zero, L_800E7E60
    if (ctx->r2 == 0) {
        // 0x800E7E08: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_800E7E60;
    }
    // 0x800E7E08: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x800E7E0C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E7E10: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E7E14: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x800E7E18: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E7E1C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E7E20: lh          $t7, 0x7750($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7750);
    // 0x800E7E24: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800E7E28: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800E7E2C: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x800E7E30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E7E34: addu        $t2, $t0, $at
    ctx->r10 = ADD32(ctx->r8, ctx->r1);
    // 0x800E7E38: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x800E7E3C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x800E7E40: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800E7E44: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7E48: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800E7E4C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800E7E50: jal         0x800BC5B0
    // 0x800E7E54: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_800BC5B0(rdram, ctx);
        goto after_1;
    // 0x800E7E54: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x800E7E58: jal         0x800E7CF4
    // 0x800E7E5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800E7CF4(rdram, ctx);
        goto after_2;
    // 0x800E7E5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
L_800E7E60:
    // 0x800E7E60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7E64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E7E68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7E70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E7E74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E7E78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E7E7C: jal         0x800E7B88
    // 0x800E7E80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800E7B88(rdram, ctx);
        goto after_0;
    // 0x800E7E80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800E7E84: jal         0x800E7BC8
    // 0x800E7E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E7BC8(rdram, ctx);
        goto after_1;
    // 0x800E7E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800E7E8C: jal         0x800E7C28
    // 0x800E7E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E7C28(rdram, ctx);
        goto after_2;
    // 0x800E7E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800E7E94: jal         0x800E7CF4
    // 0x800E7E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E7CF4(rdram, ctx);
        goto after_3;
    // 0x800E7E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800E7E9C: jal         0x800E7D4C
    // 0x800E7EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E7D4C(rdram, ctx);
        goto after_4;
    // 0x800E7EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800E7EA4: jal         0x800E7DAC
    // 0x800E7EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E7DAC(rdram, ctx);
        goto after_5;
    // 0x800E7EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800E7EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7EB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E7EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E7EB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7EC8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E7ECC: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x800E7ED0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E7ED4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E7ED8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800E7EDC: jal         0x800E7DAC
    // 0x800E7EE0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    func_800E7DAC(rdram, ctx);
        goto after_0;
    // 0x800E7EE0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    after_0:
    // 0x800E7EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7EEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7EF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7EFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E7F00: lui         $t7, 0xE900
    ctx->r15 = S32(0XE900 << 16);
    // 0x800E7F04: lui         $t9, 0xDF00
    ctx->r25 = S32(0XDF00 << 16);
    // 0x800E7F08: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800E7F0C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E7F10: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800E7F14: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800E7F18: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E7F1C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800E7F20: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800E7F24: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800E7F28: jal         0x800A9800
    // 0x800E7F2C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_800A9800(rdram, ctx);
        goto after_0;
    // 0x800E7F2C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_0:
    // 0x800E7F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7F38: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7F48: jal         0x80014DD4
    // 0x800E7F4C: nop

    func_80014DD4(rdram, ctx);
        goto after_0;
    // 0x800E7F4C: nop

    after_0:
    // 0x800E7F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7F58: jr          $ra
    // 0x800E7F5C: nop

    return;
    // 0x800E7F5C: nop

;}
RECOMP_FUNC void func_800E7F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7F60: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E7F64: addiu       $v1, $v1, -0x2A30
    ctx->r3 = ADD32(ctx->r3, -0X2A30);
    // 0x800E7F68: sh          $zero, 0xE($v1)
    MEM_H(0XE, ctx->r3) = 0;
    // 0x800E7F6C: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x800E7F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E7F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E7F78: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800E7F7C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E7F80: sh          $v0, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r2;
    // 0x800E7F84: sh          $v0, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r2;
    // 0x800E7F88: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    // 0x800E7F8C: lh          $a3, 0x7752($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7752);
    // 0x800E7F90: lh          $a2, 0x7750($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X7750);
    // 0x800E7F94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800E7F98: jal         0x800E7FB0
    // 0x800E7F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800E7FB0(rdram, ctx);
        goto after_0;
    // 0x800E7F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E7FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E7FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E7FA8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E7FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7FB0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E7FB4: addiu       $v0, $v0, -0x2A30
    ctx->r2 = ADD32(ctx->r2, -0X2A30);
    // 0x800E7FB8: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x800E7FBC: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
    // 0x800E7FC0: sh          $a2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r6;
    // 0x800E7FC4: jr          $ra
    // 0x800E7FC8: sh          $a3, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r7;
    return;
    // 0x800E7FC8: sh          $a3, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r7;
;}
RECOMP_FUNC void func_800E7FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7FCC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E7FD0: addiu       $v0, $v0, -0x2A30
    ctx->r2 = ADD32(ctx->r2, -0X2A30);
    // 0x800E7FD4: lh          $t6, 0x8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8);
    // 0x800E7FD8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E7FDC: lh          $t7, 0xA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA);
    // 0x800E7FE0: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800E7FE4: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    // 0x800E7FE8: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x800E7FEC: lh          $t9, 0xE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE);
    // 0x800E7FF0: jr          $ra
    // 0x800E7FF4: sw          $t9, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r25;
    return;
    // 0x800E7FF4: sw          $t9, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_800E7FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7FF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E7FFC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E8000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8004: sw          $a1, -0x2A20($at)
    MEM_W(-0X2A20, ctx->r1) = ctx->r5;
    // 0x800E8008: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800E800C: lui         $t7, 0xD9FF
    ctx->r15 = S32(0XD9FF << 16);
    // 0x800E8010: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x800E8014: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800E8018: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E801C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x800E8020: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800E8024: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x800E8028: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x800E802C: ori         $t9, $t9, 0x1C
    ctx->r25 = ctx->r25 | 0X1C;
    // 0x800E8030: addiu       $t8, $a2, 0x8
    ctx->r24 = ADD32(ctx->r6, 0X8);
    // 0x800E8034: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800E8038: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x800E803C: bne         $a1, $at, L_800E8050
    if (ctx->r5 != ctx->r1) {
        // 0x800E8040: sw          $t9, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r25;
            goto L_800E8050;
    }
    // 0x800E8040: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x800E8044: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800E8048: b           L_800E8058
    // 0x800E804C: addiu       $a0, $a0, 0x3418
    ctx->r4 = ADD32(ctx->r4, 0X3418);
        goto L_800E8058;
    // 0x800E804C: addiu       $a0, $a0, 0x3418
    ctx->r4 = ADD32(ctx->r4, 0X3418);
L_800E8050:
    // 0x800E8050: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800E8054: addiu       $a0, $a0, 0x3428
    ctx->r4 = ADD32(ctx->r4, 0X3428);
L_800E8058:
    // 0x800E8058: jal         0x8002E330
    // 0x800E805C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800E805C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800E8060: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800E8064: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x800E8068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E806C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E8070: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8078: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800E807C: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800E8080: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x800E8084: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800E8088: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800E808C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800E8090: jr          $ra
    // 0x800E8094: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    return;
    // 0x800E8094: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_800E80A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E80A0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800E80A4: lw          $t6, -0x2A0C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2A0C);
    // 0x800E80A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E80AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E80B0: bnel        $t6, $zero, L_800E80F8
    if (ctx->r14 != 0) {
        // 0x800E80B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E80F8;
    }
    goto skip_0;
    // 0x800E80B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E80B8: jal         0x8001ACCC
    // 0x800E80BC: ori         $a0, $zero, 0xA040
    ctx->r4 = 0 | 0XA040;
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800E80BC: ori         $a0, $zero, 0xA040
    ctx->r4 = 0 | 0XA040;
    after_0:
    // 0x800E80C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E80C4: addiu       $a0, $a0, -0x2A10
    ctx->r4 = ADD32(ctx->r4, -0X2A10);
    // 0x800E80C8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800E80CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E80D0: andi        $t7, $v0, 0x3F
    ctx->r15 = ctx->r2 & 0X3F;
    // 0x800E80D4: sw          $v0, -0x2A0C($at)
    MEM_W(-0X2A0C, ctx->r1) = ctx->r2;
    // 0x800E80D8: beq         $t7, $zero, L_800E80F4
    if (ctx->r15 == 0) {
        // 0x800E80DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800E80F4;
    }
    // 0x800E80DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800E80E0:
    // 0x800E80E0: addiu       $t8, $v1, 0x2
    ctx->r24 = ADD32(ctx->r3, 0X2);
    // 0x800E80E4: andi        $t9, $t8, 0x3F
    ctx->r25 = ctx->r24 & 0X3F;
    // 0x800E80E8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800E80EC: bne         $t9, $zero, L_800E80E0
    if (ctx->r25 != 0) {
        // 0x800E80F0: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_800E80E0;
    }
    // 0x800E80F0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_800E80F4:
    // 0x800E80F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E80F8:
    // 0x800E80F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E80FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8104: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8108: lw          $a0, -0x2A0C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A0C);
    // 0x800E810C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8114: beq         $a0, $zero, L_800E812C
    if (ctx->r4 == 0) {
        // 0x800E8118: nop
    
            goto L_800E812C;
    }
    // 0x800E8118: nop

    // 0x800E811C: jal         0x8001B084
    // 0x800E8120: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x800E8120: nop

    after_0:
    // 0x800E8124: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E8128: sw          $zero, -0x2A0C($at)
    MEM_W(-0X2A0C, ctx->r1) = 0;
L_800E812C:
    // 0x800E812C: jal         0x800A9800
    // 0x800E8130: nop

    func_800A9800(rdram, ctx);
        goto after_1;
    // 0x800E8130: nop

    after_1:
    // 0x800E8134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E813C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8144: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800E8148: lw          $t6, -0x2A0C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2A0C);
    // 0x800E814C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8154: beq         $t6, $zero, L_800E816C
    if (ctx->r14 == 0) {
        // 0x800E8158: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800E816C;
    }
    // 0x800E8158: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E815C: lw          $a0, -0x2A10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A10);
    // 0x800E8160: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x800E8164: jal         0x800A9828
    // 0x800E8168: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_800A9828(rdram, ctx);
        goto after_0;
    // 0x800E8168: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_0:
L_800E816C:
    // 0x800E816C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8174: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E817C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E817C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800E8180: lw          $t6, -0x2A0C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2A0C);
    // 0x800E8184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E818C: beq         $t6, $zero, L_800E81C0
    if (ctx->r14 == 0) {
        // 0x800E8190: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800E81C0;
    }
    // 0x800E8190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8194: jal         0x800A9800
    // 0x800E8198: nop

    func_800A9800(rdram, ctx);
        goto after_0;
    // 0x800E8198: nop

    after_0:
    // 0x800E819C: jal         0x800E7C28
    // 0x800E81A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800E7C28(rdram, ctx);
        goto after_1;
    // 0x800E81A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800E81A4: jal         0x800E7CF4
    // 0x800E81A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800E7CF4(rdram, ctx);
        goto after_2;
    // 0x800E81A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800E81AC: jal         0x800E7D4C
    // 0x800E81B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800E7D4C(rdram, ctx);
        goto after_3;
    // 0x800E81B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x800E81B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E81B8: jal         0x800A8B24
    // 0x800E81BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A8B24(rdram, ctx);
        goto after_4;
    // 0x800E81BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_800E81C0:
    // 0x800E81C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E81C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E81C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E81D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E81D0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E81D4: jr          $ra
    // 0x800E81D8: lw          $v0, -0x2A10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2A10);
    return;
    // 0x800E81D8: lw          $v0, -0x2A10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2A10);
;}
RECOMP_FUNC void func_800E81E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E81E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E81E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E81E8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800E81EC: jal         0x8001A0C0
    // 0x800E81F0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_8001A0C0(rdram, ctx);
        goto after_0;
    // 0x800E81F0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x800E81F4: sra         $t6, $v0, 13
    ctx->r14 = S32(SIGNED(ctx->r2) >> 13);
    // 0x800E81F8: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x800E81FC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800E8200: addiu       $t9, $t9, 0x34C0
    ctx->r25 = ADD32(ctx->r25, 0X34C0);
    // 0x800E8204: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800E8208: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x800E820C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800E8210: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x800E8214: sra         $t0, $v0, 2
    ctx->r8 = S32(SIGNED(ctx->r2) >> 2);
    // 0x800E8218: andi        $t1, $t0, 0x7FF
    ctx->r9 = ctx->r8 & 0X7FF;
    // 0x800E821C: sllv        $t3, $t1, $t2
    ctx->r11 = S32(ctx->r9 << (ctx->r10 & 31));
    // 0x800E8220: addu        $a1, $t4, $t3
    ctx->r5 = ADD32(ctx->r12, ctx->r11);
    // 0x800E8224: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800E8228: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800E822C: bgez        $a1, L_800E823C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800E8230: sra         $t5, $a1, 8
        ctx->r13 = S32(SIGNED(ctx->r5) >> 8);
            goto L_800E823C;
    }
    // 0x800E8230: sra         $t5, $a1, 8
    ctx->r13 = S32(SIGNED(ctx->r5) >> 8);
    // 0x800E8234: addiu       $at, $a1, 0xFF
    ctx->r1 = ADD32(ctx->r5, 0XFF);
    // 0x800E8238: sra         $t5, $at, 8
    ctx->r13 = S32(SIGNED(ctx->r1) >> 8);
L_800E823C:
    // 0x800E823C: addiu       $t6, $t5, -0x1FF
    ctx->r14 = ADD32(ctx->r13, -0X1FF);
    // 0x800E8240: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800E8244: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E8248: lwc1        $f8, 0x5E40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5E40);
    // 0x800E824C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E8250: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800E8254: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800E8258: jal         0x800F2100
    // 0x800E825C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x800E825C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x800E8260: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E8264: lwc1        $f18, 0x5E44($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5E44);
    // 0x800E8268: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E826C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8270: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800E8274: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800E8278: bc1fl       L_800E8290
    if (!c1cs) {
        // 0x800E827C: div.s       $f2, $f4, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
            goto L_800E8290;
    }
    goto skip_0;
    // 0x800E827C: div.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    skip_0:
    // 0x800E8280: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800E8284: b           L_800E8294
    // 0x800E8288: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_800E8294;
    // 0x800E8288: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800E828C: div.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
L_800E8290:
    // 0x800E8290: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800E8294:
    // 0x800E8294: jr          $ra
    // 0x800E8298: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800E8298: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800E829C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E829C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800E82A0: addiu       $a1, $t6, -0x2A00
    ctx->r5 = ADD32(ctx->r14, -0X2A00);
    // 0x800E82A4: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800E82A8: addiu       $a3, $a3, -0x2988
    ctx->r7 = ADD32(ctx->r7, -0X2988);
    // 0x800E82AC: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800E82B0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_800E82B4:
    // 0x800E82B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800E82B8: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800E82BC: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x800E82C0: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    // 0x800E82C4: mflo        $t7
    ctx->r15 = lo;
    // 0x800E82C8: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x800E82CC: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
    // 0x800E82D0: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x800E82D4: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x800E82D8: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x800E82DC: bne         $a1, $a3, L_800E82B4
    if (ctx->r5 != ctx->r7) {
        // 0x800E82E0: sw          $zero, 0xC($a0)
        MEM_W(0XC, ctx->r4) = 0;
            goto L_800E82B4;
    }
    // 0x800E82E0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x800E82E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E82EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E82EC: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x800E82F0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800E82F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800E82F8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800E82FC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x800E8300: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800E8304: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E8308: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x800E830C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x800E8310: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800E8314: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800E8318: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800E831C: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
    // 0x800E8320: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800E8324: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800E8328: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x800E832C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x800E8330: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x800E8334: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x800E8338: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x800E833C: addiu       $s7, $s7, -0x2A00
    ctx->r23 = ADD32(ctx->r23, -0X2A00);
    // 0x800E8340: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800E8344: addiu       $s1, $sp, 0x8C
    ctx->r17 = ADD32(ctx->r29, 0X8C);
    // 0x800E8348: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x800E834C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800E8350: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_800E8354:
    // 0x800E8354: jal         0x800A8984
    // 0x800E8358: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800A8984(rdram, ctx);
        goto after_0;
    // 0x800E8358: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x800E835C: beq         $v0, $zero, L_800E83F8
    if (ctx->r2 == 0) {
        // 0x800E8360: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800E83F8;
    }
    // 0x800E8360: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E8364: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800E8368: jal         0x800CA6D4
    // 0x800E836C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800CA6D4(rdram, ctx);
        goto after_1;
    // 0x800E836C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x800E8370: lwc1        $f2, 0x8C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800E8374: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800E8378: lw          $t6, 0x7C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X7C);
    // 0x800E837C: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800E8380: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800E8384: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800E8388: add.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x800E838C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8390: addu        $t8, $s7, $t7
    ctx->r24 = ADD32(ctx->r23, ctx->r15);
    // 0x800E8394: div.s       $f0, $f20, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f4.fl);
    // 0x800E8398: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x800E839C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800E83A0: nop

    // 0x800E83A4: mul.s       $f16, $f22, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x800E83A8: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x800E83AC: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
    // 0x800E83B0: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800E83B4: lw          $t0, 0x7C($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X7C);
    // 0x800E83B8: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x800E83BC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800E83C0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800E83C4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800E83C8: addu        $t2, $s7, $t1
    ctx->r10 = ADD32(ctx->r23, ctx->r9);
    // 0x800E83CC: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x800E83D0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800E83D4: swc1        $f6, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f6.u32l;
    // 0x800E83D8: lw          $t4, 0x7C($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X7C);
    // 0x800E83DC: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x800E83E0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800E83E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E83E8: addu        $t6, $s7, $t5
    ctx->r14 = ADD32(ctx->r23, ctx->r13);
    // 0x800E83EC: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x800E83F0: b           L_800E8414
    // 0x800E83F4: sw          $s6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r22;
        goto L_800E8414;
    // 0x800E83F4: sw          $s6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r22;
L_800E83F8:
    // 0x800E83F8: lw          $t8, 0x7C($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X7C);
    // 0x800E83FC: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800E8400: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800E8404: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800E8408: addu        $t0, $s7, $t9
    ctx->r8 = ADD32(ctx->r23, ctx->r25);
    // 0x800E840C: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x800E8410: sw          $zero, 0xC($t1)
    MEM_W(0XC, ctx->r9) = 0;
L_800E8414:
    // 0x800E8414: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800E8418: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800E841C: bne         $s3, $at, L_800E8354
    if (ctx->r19 != ctx->r1) {
        // 0x800E8420: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_800E8354;
    }
    // 0x800E8420: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800E8424: lw          $t2, 0x7C($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X7C);
    // 0x800E8428: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800E842C: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x800E8430: bne         $at, $zero, L_800E843C
    if (ctx->r1 != 0) {
        // 0x800E8434: sw          $t3, 0x7C($s7)
        MEM_W(0X7C, ctx->r23) = ctx->r11;
            goto L_800E843C;
    }
    // 0x800E8434: sw          $t3, 0x7C($s7)
    MEM_W(0X7C, ctx->r23) = ctx->r11;
    // 0x800E8438: sw          $zero, 0x7C($s7)
    MEM_W(0X7C, ctx->r23) = 0;
L_800E843C:
    // 0x800E843C: jal         0x800DA298
    // 0x800E8440: addiu       $a0, $zero, 0xD4E
    ctx->r4 = ADD32(0, 0XD4E);
    func_800DA298(rdram, ctx);
        goto after_2;
    // 0x800E8440: addiu       $a0, $zero, 0xD4E
    ctx->r4 = ADD32(0, 0XD4E);
    after_2:
    // 0x800E8444: bne         $v0, $zero, L_800E845C
    if (ctx->r2 != 0) {
        // 0x800E8448: nop
    
            goto L_800E845C;
    }
    // 0x800E8448: nop

    // 0x800E844C: jal         0x800DA298
    // 0x800E8450: addiu       $a0, $zero, 0xD4F
    ctx->r4 = ADD32(0, 0XD4F);
    func_800DA298(rdram, ctx);
        goto after_3;
    // 0x800E8450: addiu       $a0, $zero, 0xD4F
    ctx->r4 = ADD32(0, 0XD4F);
    after_3:
    // 0x800E8454: beql        $v0, $zero, L_800E8468
    if (ctx->r2 == 0) {
        // 0x800E8458: lw          $a0, 0x0($s7)
        ctx->r4 = MEM_W(ctx->r23, 0X0);
            goto L_800E8468;
    }
    goto skip_0;
    // 0x800E8458: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    skip_0:
L_800E845C:
    // 0x800E845C: jal         0x80085B30
    // 0x800E8460: nop

    _chjiggygamenew_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x800E8460: nop

    after_4:
    // 0x800E8464: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
L_800E8468:
    // 0x800E8468: beql        $a0, $zero, L_800E86A0
    if (ctx->r4 == 0) {
        // 0x800E846C: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_800E86A0;
    }
    goto skip_1;
    // 0x800E846C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_1:
    // 0x800E8470: jal         0x800B3034
    // 0x800E8474: nop

    func_800B3034(rdram, ctx);
        goto after_5;
    // 0x800E8474: nop

    after_5:
    // 0x800E8478: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800E847C: bne         $at, $zero, L_800E869C
    if (ctx->r1 != 0) {
        // 0x800E8480: sw          $v0, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r2;
            goto L_800E869C;
    }
    // 0x800E8480: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x800E8484: lui         $at, 0x4364
    ctx->r1 = S32(0X4364 << 16);
    // 0x800E8488: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800E848C: lui         $at, 0x4398
    ctx->r1 = S32(0X4398 << 16);
    // 0x800E8490: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800E8494: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800E8498: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x800E849C: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
L_800E84A0:
    // 0x800E84A0: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x800E84A4: jal         0x800B31B8
    // 0x800E84A8: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    func_800B31B8(rdram, ctx);
        goto after_6;
    // 0x800E84A8: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    after_6:
    // 0x800E84AC: beq         $v0, $zero, L_800E8684
    if (ctx->r2 == 0) {
        // 0x800E84B0: lw          $a1, 0x98($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X98);
            goto L_800E8684;
    }
    // 0x800E84B0: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x800E84B4: jal         0x800B301C
    // 0x800E84B8: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    func_800B301C(rdram, ctx);
        goto after_7;
    // 0x800E84B8: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    after_7:
    // 0x800E84BC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800E84C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800E84C4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_800E84C8:
    // 0x800E84C8: lw          $v0, 0x7C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X7C);
    // 0x800E84CC: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x800E84D0: subu        $t0, $t0, $s3
    ctx->r8 = SUB32(ctx->r8, ctx->r19);
    // 0x800E84D4: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
    // 0x800E84D8: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x800E84DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E84E0: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x800E84E4: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x800E84E8: addu        $t6, $s4, $t5
    ctx->r14 = ADD32(ctx->r20, ctx->r13);
    // 0x800E84EC: addu        $s0, $t6, $s5
    ctx->r16 = ADD32(ctx->r14, ctx->r21);
    // 0x800E84F0: lh          $t7, 0x46($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X46);
    // 0x800E84F4: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x800E84F8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800E84FC: beq         $t7, $zero, L_800E866C
    if (ctx->r15 == 0) {
        // 0x800E8500: subu        $t8, $t8, $v0
        ctx->r24 = SUB32(ctx->r24, ctx->r2);
            goto L_800E866C;
    }
    // 0x800E8500: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x800E8504: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E8508: addu        $t9, $s7, $t8
    ctx->r25 = ADD32(ctx->r23, ctx->r24);
    // 0x800E850C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800E8510: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x800E8514: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x800E8518: beql        $t1, $zero, L_800E8670
    if (ctx->r9 == 0) {
        // 0x800E851C: sh          $fp, 0x34($s0)
        MEM_H(0X34, ctx->r16) = ctx->r30;
            goto L_800E8670;
    }
    goto skip_2;
    // 0x800E851C: sh          $fp, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r30;
    skip_2:
    // 0x800E8520: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800E8524: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x800E8528: nop

    // 0x800E852C: bc1t        L_800E8664
    if (c1cs) {
        // 0x800E8530: nop
    
            goto L_800E8664;
    }
    // 0x800E8530: nop

    // 0x800E8534: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x800E8538: nop

    // 0x800E853C: bc1t        L_800E8664
    if (c1cs) {
        // 0x800E8540: nop
    
            goto L_800E8664;
    }
    // 0x800E8540: nop

    // 0x800E8544: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800E8548: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x800E854C: nop

    // 0x800E8550: bc1t        L_800E8664
    if (c1cs) {
        // 0x800E8554: nop
    
            goto L_800E8664;
    }
    // 0x800E8554: nop

    // 0x800E8558: c.le.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl <= ctx->f2.fl;
    // 0x800E855C: nop

    // 0x800E8560: bc1t        L_800E8664
    if (c1cs) {
        // 0x800E8564: nop
    
            goto L_800E8664;
    }
    // 0x800E8564: nop

    // 0x800E8568: lh          $v0, 0x240($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X240);
    // 0x800E856C: beql        $v0, $zero, L_800E8634
    if (ctx->r2 == 0) {
        // 0x800E8570: trunc.w.s   $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_800E8634;
    }
    goto skip_3;
    // 0x800E8570: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_3:
    // 0x800E8574: bnel        $v0, $s6, L_800E8674
    if (ctx->r2 != ctx->r22) {
        // 0x800E8578: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_800E8674;
    }
    goto skip_4;
    // 0x800E8578: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_4:
    // 0x800E857C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800E8580: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x800E8584: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x800E8588: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x800E858C: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x800E8590: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800E8594: jal         0x800E81E0
    // 0x800E8598: nop

    func_800E81E0(rdram, ctx);
        goto after_8;
    // 0x800E8598: nop

    after_8:
    // 0x800E859C: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800E85A0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x800E85A4: sub.s       $f20, $f16, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x800E85A8: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
    // 0x800E85AC: jal         0x800F2100
    // 0x800E85B0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_800F2100(rdram, ctx);
        goto after_9;
    // 0x800E85B0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_9:
    // 0x800E85B4: lwc1        $f18, 0xC($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0XC);
    // 0x800E85B8: addiu       $s1, $s0, 0x28
    ctx->r17 = ADD32(ctx->r16, 0X28);
    // 0x800E85BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E85C0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800E85C4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x800E85C8: addiu       $s2, $s0, 0x10
    ctx->r18 = ADD32(ctx->r16, 0X10);
    // 0x800E85CC: bc1fl       L_800E85E0
    if (!c1cs) {
        // 0x800E85D0: c.lt.s      $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
            goto L_800E85E0;
    }
    goto skip_5;
    // 0x800E85D0: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    skip_5:
    // 0x800E85D4: b           L_800E85F8
    // 0x800E85D8: sh          $s6, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r22;
        goto L_800E85F8;
    // 0x800E85D8: sh          $s6, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r22;
    // 0x800E85DC: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
L_800E85E0:
    // 0x800E85E0: nop

    // 0x800E85E4: bc1fl       L_800E85F8
    if (!c1cs) {
        // 0x800E85E8: sh          $s6, 0x34($s0)
        MEM_H(0X34, ctx->r16) = ctx->r22;
            goto L_800E85F8;
    }
    goto skip_6;
    // 0x800E85E8: sh          $s6, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r22;
    skip_6:
    // 0x800E85EC: b           L_800E85F8
    // 0x800E85F0: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
        goto L_800E85F8;
    // 0x800E85F0: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
    // 0x800E85F4: sh          $s6, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r22;
L_800E85F8:
    // 0x800E85F8: jal         0x800EFB24
    // 0x800E85FC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800EFB24(rdram, ctx);
        goto after_10;
    // 0x800E85FC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_10:
    // 0x800E8600: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800E8604: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800E8608: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E860C: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800E8610: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800E8614: jal         0x800EF334
    // 0x800E8618: nop

    func_800EF334(rdram, ctx);
        goto after_11;
    // 0x800E8618: nop

    after_11:
    // 0x800E861C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800E8620: jal         0x800EF04C
    // 0x800E8624: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EF04C(rdram, ctx);
        goto after_12;
    // 0x800E8624: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_12:
    // 0x800E8628: b           L_800E8674
    // 0x800E862C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_800E8674;
    // 0x800E862C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800E8630: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
L_800E8634:
    // 0x800E8634: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x800E8638: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x800E863C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800E8640: jal         0x8001A0C0
    // 0x800E8644: nop

    func_8001A0C0(rdram, ctx);
        goto after_13;
    // 0x800E8644: nop

    after_13:
    // 0x800E8648: ori         $at, $zero, 0xFFFC
    ctx->r1 = 0 | 0XFFFC;
    // 0x800E864C: bne         $v0, $at, L_800E865C
    if (ctx->r2 != ctx->r1) {
        // 0x800E8650: nop
    
            goto L_800E865C;
    }
    // 0x800E8650: nop

    // 0x800E8654: b           L_800E8670
    // 0x800E8658: sh          $s6, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r22;
        goto L_800E8670;
    // 0x800E8658: sh          $s6, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r22;
L_800E865C:
    // 0x800E865C: b           L_800E8670
    // 0x800E8660: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
        goto L_800E8670;
    // 0x800E8660: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
L_800E8664:
    // 0x800E8664: b           L_800E8670
    // 0x800E8668: sh          $fp, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r30;
        goto L_800E8670;
    // 0x800E8668: sh          $fp, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r30;
L_800E866C:
    // 0x800E866C: sh          $fp, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r30;
L_800E8670:
    // 0x800E8670: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_800E8674:
    // 0x800E8674: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800E8678: addiu       $s5, $s5, 0x38
    ctx->r21 = ADD32(ctx->r21, 0X38);
    // 0x800E867C: bne         $s3, $at, L_800E84C8
    if (ctx->r19 != ctx->r1) {
        // 0x800E8680: sh          $zero, 0x36($s0)
        MEM_H(0X36, ctx->r16) = 0;
            goto L_800E84C8;
    }
    // 0x800E8680: sh          $zero, 0x36($s0)
    MEM_H(0X36, ctx->r16) = 0;
L_800E8684:
    // 0x800E8684: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x800E8688: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x800E868C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800E8690: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800E8694: bne         $at, $zero, L_800E84A0
    if (ctx->r1 != 0) {
        // 0x800E8698: sw          $t7, 0x98($sp)
        MEM_W(0X98, ctx->r29) = ctx->r15;
            goto L_800E84A0;
    }
    // 0x800E8698: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
L_800E869C:
    // 0x800E869C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_800E86A0:
    // 0x800E86A0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800E86A4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800E86A8: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x800E86AC: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x800E86B0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x800E86B4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x800E86B8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x800E86BC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x800E86C0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x800E86C4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x800E86C8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x800E86CC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x800E86D0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x800E86D4: jr          $ra
    // 0x800E86D8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x800E86D8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_800E86DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E86DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E86E0: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    // 0x800E86E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E86E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E86EC: beql        $a0, $zero, L_800E8708
    if (ctx->r4 == 0) {
        // 0x800E86F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E8708;
    }
    goto skip_0;
    // 0x800E86F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E86F4: jal         0x800B3248
    // 0x800E86F8: nop

    func_800B3248(rdram, ctx);
        goto after_0;
    // 0x800E86F8: nop

    after_0:
    // 0x800E86FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E8700: sw          $zero, -0x2A00($at)
    MEM_W(-0X2A00, ctx->r1) = 0;
    // 0x800E8704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E8708:
    // 0x800E8708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E870C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8714: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800E8718: addiu       $a2, $a2, -0x2A00
    ctx->r6 = ADD32(ctx->r6, -0X2A00);
    // 0x800E871C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800E8720: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E8724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8728: bne         $t6, $zero, L_800E8748
    if (ctx->r14 != 0) {
        // 0x800E872C: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_800E8748;
    }
    // 0x800E872C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800E8730: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    // 0x800E8734: jal         0x800B3268
    // 0x800E8738: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800B3268(rdram, ctx);
        goto after_0;
    // 0x800E8738: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x800E873C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800E8740: addiu       $a2, $a2, -0x2A00
    ctx->r6 = ADD32(ctx->r6, -0X2A00);
    // 0x800E8744: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_800E8748:
    // 0x800E8748: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800E874C: jal         0x800B3044
    // 0x800E8750: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800B3044(rdram, ctx);
        goto after_1;
    // 0x800E8750: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x800E8754: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E8758: addiu       $a1, $zero, 0x244
    ctx->r5 = ADD32(0, 0X244);
    // 0x800E875C: jal         0x8002D6E0
    // 0x800E8760: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x800E8760: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_2:
    // 0x800E8764: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800E8768: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800E876C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800E8770: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x800E8774: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800E8778: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x800E877C: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
L_800E8780:
    // 0x800E8780: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E8784: multu       $a0, $a1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800E8788: sh          $v1, 0x44($t0)
    MEM_H(0X44, ctx->r8) = ctx->r3;
    // 0x800E878C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800E8790: addiu       $t0, $t0, 0x118
    ctx->r8 = ADD32(ctx->r8, 0X118);
    // 0x800E8794: mflo        $t7
    ctx->r15 = lo;
    // 0x800E8798: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x800E879C: addiu       $a2, $a2, 0x118
    ctx->r6 = ADD32(ctx->r6, 0X118);
    // 0x800E87A0: sh          $v1, 0x7C($v0)
    MEM_H(0X7C, ctx->r2) = ctx->r3;
    // 0x800E87A4: sh          $v1, 0xB4($v0)
    MEM_H(0XB4, ctx->r2) = ctx->r3;
    // 0x800E87A8: sh          $v1, 0xEC($v0)
    MEM_H(0XEC, ctx->r2) = ctx->r3;
    // 0x800E87AC: bne         $a3, $t1, L_800E8780
    if (ctx->r7 != ctx->r9) {
        // 0x800E87B0: sh          $v1, 0x44($v0)
        MEM_H(0X44, ctx->r2) = ctx->r3;
            goto L_800E8780;
    }
    // 0x800E87B0: sh          $v1, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r3;
    // 0x800E87B4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800E87B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E87BC: nop

    // 0x800E87C0: swc1        $f4, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f4.u32l;
    // 0x800E87C4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800E87C8: sh          $t8, 0x240($t2)
    MEM_H(0X240, ctx->r10) = ctx->r24;
    // 0x800E87CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E87D0: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
    // 0x800E87D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E87D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E87E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E87E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E87E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E87E8: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x800E87EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E87F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E87F4: jal         0x800B32C0
    // 0x800E87F8: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    func_800B32C0(rdram, ctx);
        goto after_0;
    // 0x800E87F8: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    after_0:
    // 0x800E87FC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8800: jal         0x800B3204
    // 0x800E8804: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    func_800B3204(rdram, ctx);
        goto after_1;
    // 0x800E8804: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    after_1:
    // 0x800E8808: bne         $v0, $zero, L_800E8820
    if (ctx->r2 != 0) {
        // 0x800E880C: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800E8820;
    }
    // 0x800E880C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8810: jal         0x800B3248
    // 0x800E8814: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    func_800B3248(rdram, ctx);
        goto after_2;
    // 0x800E8814: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    after_2:
    // 0x800E8818: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E881C: sw          $zero, -0x2A00($at)
    MEM_W(-0X2A00, ctx->r1) = 0;
L_800E8820:
    // 0x800E8820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8828: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8834: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8838: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x800E883C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8840: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E8844: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8848: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    // 0x800E884C: jal         0x800B301C
    // 0x800E8850: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x800E8850: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800E8854: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E8858: jal         0x800EE7F8
    // 0x800E885C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800E885C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800E8860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8868: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8874: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8878: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x800E887C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E8884: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8888: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    // 0x800E888C: jal         0x800B301C
    // 0x800E8890: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x800E8890: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800E8894: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E8898: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x800E889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E88A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E88A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E88AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E88AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E88B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E88B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E88B8: jal         0x800A89F8
    // 0x800E88BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800A89F8(rdram, ctx);
        goto after_0;
    // 0x800E88BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E88C0: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800E88C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E88C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E88CC: jal         0x800E8918
    // 0x800E88D0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    func_800E8918(rdram, ctx);
        goto after_1;
    // 0x800E88D0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800E88D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E88D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E88DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E88E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E88E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E88E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E88EC: jal         0x800A89F8
    // 0x800E88F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A89F8(rdram, ctx);
        goto after_0;
    // 0x800E88F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E88F4: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800E88F8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E88FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E8900: jal         0x800E8918
    // 0x800E8904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800E8918(rdram, ctx);
        goto after_1;
    // 0x800E8904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800E8908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E890C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8910: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8918: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800E891C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E8920: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x800E8924: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800E8928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E892C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800E8930: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8934: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800E8938: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800E893C: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    // 0x800E8940: jal         0x800B301C
    // 0x800E8944: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x800E8944: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x800E8948: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800E894C: lw          $t6, -0x2984($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2984);
    // 0x800E8950: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800E8954: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E8958: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800E895C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8960: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8964: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800E8968: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x800E896C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800E8970: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x800E8974: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800E8978: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x800E897C: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x800E8980: lh          $t0, 0x46($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X46);
    // 0x800E8984: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800E8988: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800E898C: beq         $t0, $zero, L_800E8998
    if (ctx->r8 == 0) {
        // 0x800E8990: addiu       $a3, $sp, 0x24
        ctx->r7 = ADD32(ctx->r29, 0X24);
            goto L_800E8998;
    }
    // 0x800E8990: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x800E8994: sh          $zero, 0x36($s0)
    MEM_H(0X36, ctx->r16) = 0;
L_800E8998:
    // 0x800E8998: jal         0x800C4C34
    // 0x800E899C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800C4C34(rdram, ctx);
        goto after_1;
    // 0x800E899C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_1:
    // 0x800E89A0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E89A4: beql        $t1, $zero, L_800E89E0
    if (ctx->r9 == 0) {
        // 0x800E89A8: lw          $v0, 0x4C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X4C);
            goto L_800E89E0;
    }
    goto skip_0;
    // 0x800E89A8: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x800E89AC: beq         $v0, $zero, L_800E89DC
    if (ctx->r2 == 0) {
        // 0x800E89B0: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_800E89DC;
    }
    // 0x800E89B0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800E89B4: jal         0x800E3928
    // 0x800E89B8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800E3928(rdram, ctx);
        goto after_2;
    // 0x800E89B8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x800E89BC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x800E89C0: jal         0x800E3980
    // 0x800E89C4: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    func_800E3980(rdram, ctx);
        goto after_3;
    // 0x800E89C4: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x800E89C8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x800E89CC: jal         0x800EE7F8
    // 0x800E89D0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x800E89D0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x800E89D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800E89D8: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
L_800E89DC:
    // 0x800E89DC: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
L_800E89E0:
    // 0x800E89E0: beql        $v0, $zero, L_800E89FC
    if (ctx->r2 == 0) {
        // 0x800E89E4: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_800E89FC;
    }
    goto skip_1;
    // 0x800E89E4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    skip_1:
    // 0x800E89E8: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800E89EC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x800E89F0: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800E89F4: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x800E89F8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
L_800E89FC:
    // 0x800E89FC: beql        $a0, $zero, L_800E8A10
    if (ctx->r4 == 0) {
        // 0x800E8A00: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800E8A10;
    }
    goto skip_2;
    // 0x800E8A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x800E8A04: jal         0x800EE7F8
    // 0x800E8A08: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x800E8A08: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    after_5:
    // 0x800E8A0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800E8A10:
    // 0x800E8A10: lh          $v0, 0x34($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X34);
    // 0x800E8A14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E8A18: jr          $ra
    // 0x800E8A1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800E8A1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800E8A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8A20: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8A24: lw          $a0, -0x2A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A00);
    // 0x800E8A28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8A2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8A30: beql        $a0, $zero, L_800E8A4C
    if (ctx->r4 == 0) {
        // 0x800E8A34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E8A4C;
    }
    goto skip_0;
    // 0x800E8A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E8A38: jal         0x800B32E4
    // 0x800E8A3C: nop

    func_800B32E4(rdram, ctx);
        goto after_0;
    // 0x800E8A3C: nop

    after_0:
    // 0x800E8A40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E8A44: sw          $v0, -0x2A00($at)
    MEM_W(-0X2A00, ctx->r1) = ctx->r2;
    // 0x800E8A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E8A4C:
    // 0x800E8A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8A50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8A60: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8A68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8A6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E8A70: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800E8A74: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800E8A78: jal         0x800D8FF8
    // 0x800E8A7C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800E8A7C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x800E8A80: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800E8A84: addiu       $s1, $s1, -0x2980
    ctx->r17 = ADD32(ctx->r17, -0X2980);
    // 0x800E8A88: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800E8A8C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800E8A90: beql        $a0, $zero, L_800E8AF0
    if (ctx->r4 == 0) {
        // 0x800E8A94: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800E8AF0;
    }
    goto skip_0;
    // 0x800E8A94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800E8A98: jal         0x800B3034
    // 0x800E8A9C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_800B3034(rdram, ctx);
        goto after_1;
    // 0x800E8A9C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_1:
    // 0x800E8AA0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800E8AA4: bnel        $at, $zero, L_800E8AF0
    if (ctx->r1 != 0) {
        // 0x800E8AA8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800E8AF0;
    }
    goto skip_1;
    // 0x800E8AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800E8AAC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_800E8AB0:
    // 0x800E8AB0: jal         0x800B31B8
    // 0x800E8AB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800B31B8(rdram, ctx);
        goto after_2;
    // 0x800E8AB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x800E8AB8: beql        $v0, $zero, L_800E8AD8
    if (ctx->r2 == 0) {
        // 0x800E8ABC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800E8AD8;
    }
    goto skip_2;
    // 0x800E8ABC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x800E8AC0: jal         0x800E8CB0
    // 0x800E8AC4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800E8CB0(rdram, ctx);
        goto after_3;
    // 0x800E8AC4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_3:
    // 0x800E8AC8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800E8ACC: jal         0x800E8DE4
    // 0x800E8AD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800E8DE4(rdram, ctx);
        goto after_4;
    // 0x800E8AD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800E8AD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800E8AD8:
    // 0x800E8AD8: jal         0x800B3034
    // 0x800E8ADC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800B3034(rdram, ctx);
        goto after_5;
    // 0x800E8ADC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_5:
    // 0x800E8AE0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800E8AE4: bnel        $at, $zero, L_800E8AB0
    if (ctx->r1 != 0) {
        // 0x800E8AE8: lw          $a0, 0x0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X0);
            goto L_800E8AB0;
    }
    goto skip_3;
    // 0x800E8AE8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x800E8AEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800E8AF0:
    // 0x800E8AF0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800E8AF4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8AF8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800E8AFC: jr          $ra
    // 0x800E8B00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E8B00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E8B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8B04: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8B08: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    // 0x800E8B0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8B14: beql        $a0, $zero, L_800E8B30
    if (ctx->r4 == 0) {
        // 0x800E8B18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E8B30;
    }
    goto skip_0;
    // 0x800E8B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E8B1C: jal         0x800B3248
    // 0x800E8B20: nop

    func_800B3248(rdram, ctx);
        goto after_0;
    // 0x800E8B20: nop

    after_0:
    // 0x800E8B24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E8B28: sw          $zero, -0x2980($at)
    MEM_W(-0X2980, ctx->r1) = 0;
    // 0x800E8B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E8B30:
    // 0x800E8B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8B34: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8B3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8B40: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    // 0x800E8B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8B4C: beql        $a0, $zero, L_800E8B68
    if (ctx->r4 == 0) {
        // 0x800E8B50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E8B68;
    }
    goto skip_0;
    // 0x800E8B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E8B54: jal         0x800B32E4
    // 0x800E8B58: nop

    func_800B32E4(rdram, ctx);
        goto after_0;
    // 0x800E8B58: nop

    after_0:
    // 0x800E8B5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E8B60: sw          $v0, -0x2980($at)
    MEM_W(-0X2980, ctx->r1) = ctx->r2;
    // 0x800E8B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E8B68:
    // 0x800E8B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8B6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8B74: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800E8B78: addiu       $a2, $a2, -0x2980
    ctx->r6 = ADD32(ctx->r6, -0X2980);
    // 0x800E8B7C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800E8B80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8B88: bne         $t6, $zero, L_800E8BA8
    if (ctx->r14 != 0) {
        // 0x800E8B8C: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_800E8BA8;
    }
    // 0x800E8B8C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800E8B90: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x800E8B94: jal         0x800B3268
    // 0x800E8B98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800B3268(rdram, ctx);
        goto after_0;
    // 0x800E8B98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x800E8B9C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800E8BA0: addiu       $a2, $a2, -0x2980
    ctx->r6 = ADD32(ctx->r6, -0X2980);
    // 0x800E8BA4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_800E8BA8:
    // 0x800E8BA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800E8BAC: jal         0x800B3044
    // 0x800E8BB0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800B3044(rdram, ctx);
        goto after_1;
    // 0x800E8BB0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x800E8BB4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800E8BB8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800E8BBC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800E8BC0: beq         $t7, $zero, L_800E8BE4
    if (ctx->r15 == 0) {
        // 0x800E8BC4: nop
    
            goto L_800E8BE4;
    }
    // 0x800E8BC4: nop

    // 0x800E8BC8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800E8BCC: jal         0x800D674C
    // 0x800E8BD0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800D674C(rdram, ctx);
        goto after_2;
    // 0x800E8BD0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x800E8BD4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800E8BD8: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x800E8BDC: b           L_800E8BEC
    // 0x800E8BE0: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
        goto L_800E8BEC;
    // 0x800E8BE0: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
L_800E8BE4:
    // 0x800E8BE4: jal         0x8002D6E0
    // 0x800E8BE8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x800E8BE8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_3:
L_800E8BEC:
    // 0x800E8BEC: jal         0x800E8CDC
    // 0x800E8BF0: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800E8CDC(rdram, ctx);
        goto after_4;
    // 0x800E8BF0: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_4:
    // 0x800E8BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8BF8: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x800E8BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E8C00: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8C0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8C10: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x800E8C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8C18: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8C1C: jal         0x800B32C0
    // 0x800E8C20: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    func_800B32C0(rdram, ctx);
        goto after_0;
    // 0x800E8C20: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    after_0:
    // 0x800E8C24: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8C28: jal         0x800B3204
    // 0x800E8C2C: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    func_800B3204(rdram, ctx);
        goto after_1;
    // 0x800E8C2C: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    after_1:
    // 0x800E8C30: bne         $v0, $zero, L_800E8C48
    if (ctx->r2 != 0) {
        // 0x800E8C34: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800E8C48;
    }
    // 0x800E8C34: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8C38: jal         0x800B3248
    // 0x800E8C3C: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    func_800B3248(rdram, ctx);
        goto after_2;
    // 0x800E8C3C: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    after_2:
    // 0x800E8C40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E8C44: sw          $zero, -0x2980($at)
    MEM_W(-0X2980, ctx->r1) = 0;
L_800E8C48:
    // 0x800E8C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8C50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8C58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8C60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8C64: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800E8C68: jal         0x800E8CB0
    // 0x800E8C6C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800E8CB0(rdram, ctx);
        goto after_0;
    // 0x800E8C6C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800E8C70: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x800E8C74: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800E8C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8C7C: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x800E8C80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8C84: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E8C88: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800E8C8C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800E8C90: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x800E8C94: nop

    // 0x800E8C98: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800E8C9C: bne         $at, $zero, L_800E8CA8
    if (ctx->r1 != 0) {
        // 0x800E8CA0: nop
    
            goto L_800E8CA8;
    }
    // 0x800E8CA0: nop

    // 0x800E8CA4: addiu       $v1, $a0, -0x1
    ctx->r3 = ADD32(ctx->r4, -0X1);
L_800E8CA8:
    // 0x800E8CA8: jr          $ra
    // 0x800E8CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800E8CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800E8CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8CB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8CB8: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x800E8CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8CC0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8CC4: jal         0x800B301C
    // 0x800E8CC8: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x800E8CC8: lw          $a0, -0x2980($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2980);
    after_0:
    // 0x800E8CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8CD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8CE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8CE8: jal         0x800E8CB0
    // 0x800E8CEC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    func_800E8CB0(rdram, ctx);
        goto after_0;
    // 0x800E8CEC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    after_0:
    // 0x800E8CF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E8CF4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x800E8CF8: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x800E8CFC: jal         0x800E8D28
    // 0x800E8D00: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    func_800E8D28(rdram, ctx);
        goto after_1;
    // 0x800E8D00: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    after_1:
    // 0x800E8D04: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800E8D08: addiu       $a1, $a1, 0x3500
    ctx->r5 = ADD32(ctx->r5, 0X3500);
    // 0x800E8D0C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800E8D10: jal         0x800E8D5C
    // 0x800E8D14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800E8D5C(rdram, ctx);
        goto after_2;
    // 0x800E8D14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x800E8D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8D20: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8D28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8D30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8D34: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800E8D38: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800E8D3C: jal         0x800E8CB0
    // 0x800E8D40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800E8CB0(rdram, ctx);
        goto after_0;
    // 0x800E8D40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E8D44: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E8D48: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x800E8D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8D54: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8D5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E8D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8D64: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800E8D68: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800E8D6C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800E8D70: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800E8D74: jal         0x800E8CB0
    // 0x800E8D78: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800E8CB0(rdram, ctx);
        goto after_0;
    // 0x800E8D78: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800E8D7C: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x800E8D80: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800E8D84: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x800E8D88: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x800E8D8C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800E8D90: jal         0x8001BBA0
    // 0x800E8D94: sll         $a2, $v1, 3
    ctx->r6 = S32(ctx->r3 << 3);
    rare_memcpy(rdram, ctx);
        goto after_1;
    // 0x800E8D94: sll         $a2, $v1, 3
    ctx->r6 = S32(ctx->r3 << 3);
    after_1:
    // 0x800E8D98: jal         0x800E8E3C
    // 0x800E8D9C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800E8E3C(rdram, ctx);
        goto after_2;
    // 0x800E8D9C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800E8DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E8DA8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8DB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8DBC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800E8DC0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800E8DC4: jal         0x800E8CB0
    // 0x800E8DC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800E8CB0(rdram, ctx);
        goto after_0;
    // 0x800E8DC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E8DCC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8DD0: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x800E8DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8DDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8DEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800E8DF0: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800E8DF4: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800E8DF8: div.s       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f4.fl);
    // 0x800E8DFC: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x800E8E00: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x800E8E04: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800E8E08: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800E8E0C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800E8E10: nop

    // 0x800E8E14: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800E8E18: nop

    // 0x800E8E1C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E8E20: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x800E8E24: jal         0x800E8E3C
    // 0x800E8E28: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    func_800E8E3C(rdram, ctx);
        goto after_0;
    // 0x800E8E28: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x800E8E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8E34: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8E3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E8E40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8E44: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x800E8E48: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800E8E4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E8E50: jal         0x800F3780
    // 0x800E8E54: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    func_800F3780(rdram, ctx);
        goto after_0;
    // 0x800E8E54: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x800E8E58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E8E5C: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x800E8E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E8E68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E8E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8E70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E8E74: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800E8E78: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800E8E7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800E8E80: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800E8E84: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E8E88: bne         $a3, $zero, L_800E8EF4
    if (ctx->r7 != 0) {
        // 0x800E8E8C: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_800E8EF4;
    }
    // 0x800E8E8C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800E8E90: jal         0x8002E660
    // 0x800E8E94: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x800E8E94: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800E8E98: jal         0x80012F6C
    // 0x800E8E9C: nop

    func_80012F6C(rdram, ctx);
        goto after_1;
    // 0x800E8E9C: nop

    after_1:
    // 0x800E8EA0: jal         0x80012F60
    // 0x800E8EA4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_80012F60(rdram, ctx);
        goto after_2;
    // 0x800E8EA4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_2:
    // 0x800E8EA8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800E8EAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E8EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E8EB4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800E8EB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800E8EBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800E8EC0: jal         0x8002E450
    // 0x800E8EC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    osPiStartDma_recomp(rdram, ctx);
        goto after_3;
    // 0x800E8EC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x800E8EC8: jal         0x80012F60
    // 0x800E8ECC: nop

    func_80012F60(rdram, ctx);
        goto after_4;
    // 0x800E8ECC: nop

    after_4:
    // 0x800E8ED0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E8ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E8ED8: jal         0x8002E1F0
    // 0x800E8EDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x800E8EDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x800E8EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E8EE4: jal         0x8002E6E0
    // 0x800E8EE8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_6;
    // 0x800E8EE8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x800E8EEC: b           L_800E8F58
    // 0x800E8EF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800E8F58;
    // 0x800E8EF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800E8EF4:
    // 0x800E8EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E8EF8: jal         0x8002E660
    // 0x800E8EFC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_7;
    // 0x800E8EFC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x800E8F00: jal         0x80012EF4
    // 0x800E8F04: nop

    func_80012EF4(rdram, ctx);
        goto after_8;
    // 0x800E8F04: nop

    after_8:
    // 0x800E8F08: jal         0x80012EE8
    // 0x800E8F0C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_80012EE8(rdram, ctx);
        goto after_9;
    // 0x800E8F0C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_9:
    // 0x800E8F10: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800E8F14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E8F18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E8F1C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800E8F20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800E8F24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800E8F28: jal         0x8002E450
    // 0x800E8F2C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    osPiStartDma_recomp(rdram, ctx);
        goto after_10;
    // 0x800E8F2C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_10:
    // 0x800E8F30: jal         0x80012EE8
    // 0x800E8F34: nop

    func_80012EE8(rdram, ctx);
        goto after_11;
    // 0x800E8F34: nop

    after_11:
    // 0x800E8F38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E8F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E8F40: jal         0x8002E1F0
    // 0x800E8F44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x800E8F44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x800E8F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E8F4C: jal         0x8002E6E0
    // 0x800E8F50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_13;
    // 0x800E8F50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_13:
    // 0x800E8F54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800E8F58:
    // 0x800E8F58: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800E8F5C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800E8F60: jr          $ra
    // 0x800E8F64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800E8F64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800E8F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8F68: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x800E8F6C: lw          $t7, 0x20($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X20);
    // 0x800E8F70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800E8F74: beq         $t6, $t7, L_800E8F84
    if (ctx->r14 == ctx->r15) {
            // 0x800E8F78: nop

    func_800E8F84(rdram, ctx);
    return;
    }
    // 0x800E8F78: nop

    // 0x800E8F7C: jr          $ra
    // 0x800E8F80: addiu       $v0, $a0, 0x20
    ctx->r2 = ADD32(ctx->r4, 0X20);
    return;
    // 0x800E8F80: addiu       $v0, $a0, 0x20
    ctx->r2 = ADD32(ctx->r4, 0X20);
;}
RECOMP_FUNC void func_800E8F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8F84: jr          $ra
    // 0x800E8F88: nop

    return;
    // 0x800E8F88: nop

;}
RECOMP_FUNC void func_800E8F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8F8C: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x800E8F90: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800E8F94: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800E8F98: lhu         $t8, 0x2560($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2560);
    // 0x800E8F9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8FA0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E8FA4: addu        $v0, $t8, $a2
    ctx->r2 = ADD32(ctx->r24, ctx->r6);
    // 0x800E8FA8: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x800E8FAC: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x800E8FB0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800E8FB4: lw          $t0, 0x3524($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3524);
    // 0x800E8FB8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800E8FBC: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x800E8FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8FC4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800E8FC8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800E8FCC: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x800E8FD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E8FD4: addiu       $a0, $a0, -0x26A0
    ctx->r4 = ADD32(ctx->r4, -0X26A0);
    // 0x800E8FD8: addiu       $a2, $zero, 0xD8
    ctx->r6 = ADD32(0, 0XD8);
    // 0x800E8FDC: jal         0x800E8E70
    // 0x800E8FE0: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    func_800E8E70(rdram, ctx);
        goto after_0;
    // 0x800E8FE0: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    after_0:
    // 0x800E8FE4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800E8FE8: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800E8FEC: addiu       $t5, $t5, -0x2970
    ctx->r13 = ADD32(ctx->r13, -0X2970);
    // 0x800E8FF0: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x800E8FF4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800E8FF8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800E8FFC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800E9000: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800E9004: addiu       $t4, $t3, 0x3A8
    ctx->r12 = ADD32(ctx->r11, 0X3A8);
    // 0x800E9008: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x800E900C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800E9010: addiu       $a1, $a1, -0x26A0
    ctx->r5 = ADD32(ctx->r5, -0X26A0);
    // 0x800E9014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E9018: jal         0x8001BBA0
    // 0x800E901C: addiu       $a2, $zero, 0xD8
    ctx->r6 = ADD32(0, 0XD8);
    rare_memcpy(rdram, ctx);
        goto after_1;
    // 0x800E901C: addiu       $a2, $zero, 0xD8
    ctx->r6 = ADD32(0, 0XD8);
    after_1:
    // 0x800E9020: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800E9024: lui         $t7, 0x1A4
    ctx->r15 = S32(0X1A4 << 16);
    // 0x800E9028: addiu       $t7, $t7, 0x6560
    ctx->r15 = ADD32(ctx->r15, 0X6560);
    // 0x800E902C: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x800E9030: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800E9034: sw          $t8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r24;
    // 0x800E9038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E903C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E9040: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9048: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E904C: jr          $ra
    // 0x800E9050: lh          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1CE0);
    return;
    // 0x800E9050: lh          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1CE0);
;}
RECOMP_FUNC void func_800E9054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9054: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800E9058: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800E905C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800E9060: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800E9064: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800E9068: jr          $ra
    // 0x800E906C: lh          $v0, 0x1CF6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1CF6);
    return;
    // 0x800E906C: lh          $v0, 0x1CF6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1CF6);
;}
RECOMP_FUNC void func_800E9070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9070: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E9074: addiu       $v1, $v1, -0x2970
    ctx->r3 = ADD32(ctx->r3, -0X2970);
    // 0x800E9078: subu        $t6, $a0, $v1
    ctx->r14 = SUB32(ctx->r4, ctx->r3);
    // 0x800E907C: addiu       $t7, $t6, -0x3A8
    ctx->r15 = ADD32(ctx->r14, -0X3A8);
    // 0x800E9080: addiu       $at, $zero, 0xD8
    ctx->r1 = ADD32(0, 0XD8);
    // 0x800E9084: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x800E9088: mflo        $t8
    ctx->r24 = lo;
    // 0x800E908C: addu        $v0, $v1, $t8
    ctx->r2 = ADD32(ctx->r3, ctx->r24);
    // 0x800E9090: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x800E9094: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800E9098: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800E909C: jr          $ra
    // 0x800E90A0: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    return;
    // 0x800E90A0: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_800E90A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E90A4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E90A8: addiu       $v1, $v1, -0x2970
    ctx->r3 = ADD32(ctx->r3, -0X2970);
    // 0x800E90AC: subu        $t6, $a0, $v1
    ctx->r14 = SUB32(ctx->r4, ctx->r3);
    // 0x800E90B0: addiu       $t7, $t6, -0x3A8
    ctx->r15 = ADD32(ctx->r14, -0X3A8);
    // 0x800E90B4: addiu       $at, $zero, 0xD8
    ctx->r1 = ADD32(0, 0XD8);
    // 0x800E90B8: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x800E90BC: mflo        $t8
    ctx->r24 = lo;
    // 0x800E90C0: addu        $v0, $v1, $t8
    ctx->r2 = ADD32(ctx->r3, ctx->r24);
    // 0x800E90C4: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x800E90C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800E90CC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800E90D0: jr          $ra
    // 0x800E90D4: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    return;
    // 0x800E90D4: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_800E90D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E90D8: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x800E90DC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800E90E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800E90E4: lhu         $t8, 0x2560($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2560);
    // 0x800E90E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E90EC: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800E90F0: addu        $v0, $t8, $a1
    ctx->r2 = ADD32(ctx->r24, ctx->r5);
    // 0x800E90F4: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x800E90F8: addu        $t4, $t2, $a2
    ctx->r12 = ADD32(ctx->r10, ctx->r6);
    // 0x800E90FC: addiu       $t5, $t5, 0x2650
    ctx->r13 = ADD32(ctx->r13, 0X2650);
    // 0x800E9100: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800E9104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9108: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800E910C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800E9110: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800E9114: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x800E9118: lbu         $v1, 0x0($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X0);
    // 0x800E911C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800E9120: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800E9124: beq         $v1, $at, L_800E916C
    if (ctx->r3 == ctx->r1) {
        // 0x800E9128: addiu       $t1, $t1, -0x2970
        ctx->r9 = ADD32(ctx->r9, -0X2970);
            goto L_800E916C;
    }
    // 0x800E9128: addiu       $t1, $t1, -0x2970
    ctx->r9 = ADD32(ctx->r9, -0X2970);
    // 0x800E912C: jal         0x8001211C
    // 0x800E9130: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    func_8001211C(rdram, ctx);
        goto after_0;
    // 0x800E9130: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_0:
    // 0x800E9134: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x800E9138: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800E913C: addiu       $t1, $t1, -0x2970
    ctx->r9 = ADD32(ctx->r9, -0X2970);
    // 0x800E9140: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x800E9144: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x800E9148: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800E914C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800E9150: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x800E9154: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x800E9158: sw          $v0, 0x50($t8)
    MEM_W(0X50, ctx->r24) = ctx->r2;
    // 0x800E915C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800E9160: addu        $v0, $t1, $t9
    ctx->r2 = ADD32(ctx->r9, ctx->r25);
    // 0x800E9164: b           L_800E92F0
    // 0x800E9168: addiu       $v0, $v0, 0x3A8
    ctx->r2 = ADD32(ctx->r2, 0X3A8);
        goto L_800E92F0;
    // 0x800E9168: addiu       $v0, $v0, 0x3A8
    ctx->r2 = ADD32(ctx->r2, 0X3A8);
L_800E916C:
    // 0x800E916C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800E9170: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800E9174: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800E9178: sll         $v0, $t2, 2
    ctx->r2 = S32(ctx->r10 << 2);
    // 0x800E917C: addiu       $t4, $t4, 0x351C
    ctx->r12 = ADD32(ctx->r12, 0X351C);
    // 0x800E9180: addiu       $t3, $t3, 0x3514
    ctx->r11 = ADD32(ctx->r11, 0X3514);
    // 0x800E9184: addu        $a3, $v0, $t3
    ctx->r7 = ADD32(ctx->r2, ctx->r11);
    // 0x800E9188: addu        $a2, $v0, $t4
    ctx->r6 = ADD32(ctx->r2, ctx->r12);
    // 0x800E918C: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x800E9190: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x800E9194: addu        $t0, $t1, $v0
    ctx->r8 = ADD32(ctx->r9, ctx->r2);
    // 0x800E9198: lw          $t5, 0x4EC8($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4EC8);
    // 0x800E919C: subu        $t6, $v1, $a1
    ctx->r14 = SUB32(ctx->r3, ctx->r5);
    // 0x800E91A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800E91A4: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800E91A8: bnel        $at, $zero, L_800E9238
    if (ctx->r1 != 0) {
        // 0x800E91AC: slt         $at, $a1, $v1
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800E9238;
    }
    goto skip_0;
    // 0x800E91AC: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    skip_0:
    // 0x800E91B0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x800E91B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x800E91B8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x800E91BC: jal         0x800E95AC
    // 0x800E91C0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_800E95AC(rdram, ctx);
        goto after_1;
    // 0x800E91C0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x800E91C4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800E91C8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x800E91CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E91D0: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x800E91D4: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x800E91D8: lw          $t7, 0x4EC8($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4EC8);
    // 0x800E91DC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800E91E0: subu        $t8, $v1, $a1
    ctx->r24 = SUB32(ctx->r3, ctx->r5);
    // 0x800E91E4: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800E91E8: bne         $at, $zero, L_800E9234
    if (ctx->r1 != 0) {
        // 0x800E91EC: addiu       $t1, $t1, -0x2970
        ctx->r9 = ADD32(ctx->r9, -0X2970);
            goto L_800E9234;
    }
    // 0x800E91EC: addiu       $t1, $t1, -0x2970
    ctx->r9 = ADD32(ctx->r9, -0X2970);
    // 0x800E91F0: jal         0x8001211C
    // 0x800E91F4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8001211C(rdram, ctx);
        goto after_2;
    // 0x800E91F4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x800E91F8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800E91FC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800E9200: addiu       $t1, $t1, -0x2970
    ctx->r9 = ADD32(ctx->r9, -0X2970);
    // 0x800E9204: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x800E9208: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x800E920C: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x800E9210: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800E9214: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x800E9218: addu        $t3, $t1, $t9
    ctx->r11 = ADD32(ctx->r9, ctx->r25);
    // 0x800E921C: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x800E9220: sw          $v0, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r2;
    // 0x800E9224: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800E9228: addu        $v0, $t1, $t4
    ctx->r2 = ADD32(ctx->r9, ctx->r12);
    // 0x800E922C: b           L_800E92F0
    // 0x800E9230: addiu       $v0, $v0, 0x3A8
    ctx->r2 = ADD32(ctx->r2, 0X3A8);
        goto L_800E92F0;
    // 0x800E9230: addiu       $v0, $v0, 0x3A8
    ctx->r2 = ADD32(ctx->r2, 0X3A8);
L_800E9234:
    // 0x800E9234: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
L_800E9238:
    // 0x800E9238: beq         $at, $zero, L_800E9268
    if (ctx->r1 == 0) {
        // 0x800E923C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_800E9268;
    }
    // 0x800E923C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800E9240: sll         $t5, $a1, 1
    ctx->r13 = S32(ctx->r5 << 1);
    // 0x800E9244: addu        $v0, $t1, $t5
    ctx->r2 = ADD32(ctx->r9, ctx->r13);
    // 0x800E9248: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_800E924C:
    // 0x800E924C: lh          $t6, 0x190($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X190);
    // 0x800E9250: beql        $a1, $t6, L_800E926C
    if (ctx->r5 == ctx->r14) {
        // 0x800E9254: sll         $t2, $a0, 1
        ctx->r10 = S32(ctx->r4 << 1);
            goto L_800E926C;
    }
    goto skip_1;
    // 0x800E9254: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
    skip_1:
    // 0x800E9258: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800E925C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800E9260: bne         $at, $zero, L_800E924C
    if (ctx->r1 != 0) {
        // 0x800E9264: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_800E924C;
    }
    // 0x800E9264: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_800E9268:
    // 0x800E9268: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
L_800E926C:
    // 0x800E926C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x800E9270: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800E9274: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800E9278: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800E927C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800E9280: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x800E9284: jal         0x800E8F8C
    // 0x800E9288: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_800E8F8C(rdram, ctx);
        goto after_3;
    // 0x800E9288: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_3:
    // 0x800E928C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800E9290: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800E9294: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800E9298: sh          $t7, 0x190($v0)
    MEM_H(0X190, ctx->r2) = ctx->r15;
    // 0x800E929C: jal         0x8001211C
    // 0x800E92A0: sh          $t8, 0x230($v0)
    MEM_H(0X230, ctx->r2) = ctx->r24;
    func_8001211C(rdram, ctx);
        goto after_4;
    // 0x800E92A0: sh          $t8, 0x230($v0)
    MEM_H(0X230, ctx->r2) = ctx->r24;
    after_4:
    // 0x800E92A4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800E92A8: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800E92AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E92B0: addiu       $t1, $t1, -0x2970
    ctx->r9 = ADD32(ctx->r9, -0X2970);
    // 0x800E92B4: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x800E92B8: addu        $t3, $t1, $t9
    ctx->r11 = ADD32(ctx->r9, ctx->r25);
    // 0x800E92BC: sw          $v0, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r2;
    // 0x800E92C0: sll         $t2, $a0, 3
    ctx->r10 = S32(ctx->r4 << 3);
    // 0x800E92C4: lw          $t4, 0x4EC8($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4EC8);
    // 0x800E92C8: subu        $t2, $t2, $a0
    ctx->r10 = SUB32(ctx->r10, ctx->r4);
    // 0x800E92CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800E92D0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800E92D4: subu        $t2, $t2, $a0
    ctx->r10 = SUB32(ctx->r10, ctx->r4);
    // 0x800E92D8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x800E92DC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800E92E0: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x800E92E4: sw          $t5, 0x4EC8($t0)
    MEM_W(0X4EC8, ctx->r8) = ctx->r13;
    // 0x800E92E8: addiu       $v0, $v0, 0x3A8
    ctx->r2 = ADD32(ctx->r2, 0X3A8);
    // 0x800E92EC: sb          $a0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r4;
L_800E92F0:
    // 0x800E92F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E92F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800E92F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9308: jal         0x800E90D8
    // 0x800E930C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800E90D8(rdram, ctx);
        goto after_0;
    // 0x800E930C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800E9310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9318: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9328: jal         0x800E90D8
    // 0x800E932C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800E90D8(rdram, ctx);
        goto after_0;
    // 0x800E932C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800E9330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9338: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9340: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x800E9344: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E9348: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x800E934C: sll         $v0, $t6, 1
    ctx->r2 = S32(ctx->r14 << 1);
    // 0x800E9350: lui         $t8, 0x1A1
    ctx->r24 = S32(0X1A1 << 16);
    // 0x800E9354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9358: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800E935C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800E9360: addiu       $t8, $t8, 0x4580
    ctx->r24 = ADD32(ctx->r24, 0X4580);
    // 0x800E9364: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800E9368: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800E936C: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x800E9370: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x800E9374: jal         0x800E8E70
    // 0x800E9378: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800E8E70(rdram, ctx);
        goto after_0;
    // 0x800E9378: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x800E937C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800E9380: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800E9384: addiu       $t0, $t0, -0x2970
    ctx->r8 = ADD32(ctx->r8, -0X2970);
    // 0x800E9388: addiu       $t9, $v0, 0x4658
    ctx->r25 = ADD32(ctx->r2, 0X4658);
    // 0x800E938C: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x800E9390: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800E9394: jal         0x8001BBA0
    // 0x800E9398: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    rare_memcpy(rdram, ctx);
        goto after_1;
    // 0x800E9398: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_1:
    // 0x800E939C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E93A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E93A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E93AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E93AC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800E93B0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800E93B4: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800E93B8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800E93BC: addiu       $t8, $t8, -0x2970
    ctx->r24 = ADD32(ctx->r24, -0X2970);
    // 0x800E93C0: addiu       $t7, $t6, 0x4658
    ctx->r15 = ADD32(ctx->r14, 0X4658);
    // 0x800E93C4: jr          $ra
    // 0x800E93C8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x800E93C8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void func_800E93CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E93CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E93D0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800E93D4: lui         $a1, 0x1A1
    ctx->r5 = S32(0X1A1 << 16);
    // 0x800E93D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E93DC: addiu       $a1, $a1, 0x4580
    ctx->r5 = ADD32(ctx->r5, 0X4580);
    // 0x800E93E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E93E4: addiu       $a0, $a0, 0x1CE0
    ctx->r4 = ADD32(ctx->r4, 0X1CE0);
    // 0x800E93E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E93EC: jal         0x800E8E70
    // 0x800E93F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_800E8E70(rdram, ctx);
        goto after_0;
    // 0x800E93F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x800E93F4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800E93F8: lh          $t6, 0x1CE0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1CE0);
    // 0x800E93FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800E9400: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800E9404: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800E9408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E940C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800E9410: addiu       $t8, $t7, 0xB
    ctx->r24 = ADD32(ctx->r15, 0XB);
    // 0x800E9414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9418: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800E941C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x800E9420: addiu       $v0, $v0, 0x3524
    ctx->r2 = ADD32(ctx->r2, 0X3524);
    // 0x800E9424: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800E9428: addu        $t1, $t9, $a1
    ctx->r9 = ADD32(ctx->r25, ctx->r5);
    // 0x800E942C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x800E9430: jr          $ra
    // 0x800E9434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800E9434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800E9438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9438: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E943C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800E9440: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x800E9444: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E9448: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E944C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800E9450: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800E9454: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800E9458: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E945C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800E9460: jal         0x8001ACCC
    // 0x800E9464: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x800E9464: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x800E9468: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x800E946C: addiu       $s5, $s5, -0x2970
    ctx->r21 = ADD32(ctx->r21, -0X2970);
    // 0x800E9470: lh          $t6, 0x4650($s5)
    ctx->r14 = MEM_H(ctx->r21, 0X4650);
    // 0x800E9474: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800E9478: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800E947C: blez        $t6, L_800E94B8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800E9480: lui         $s2, 0x8013
        ctx->r18 = S32(0X8013 << 16);
            goto L_800E94B8;
    }
    // 0x800E9480: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800E9484: addiu       $s2, $s2, 0x2560
    ctx->r18 = ADD32(ctx->r18, 0X2560);
L_800E9488:
    // 0x800E9488: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800E948C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800E9490: jal         0x800E9340
    // 0x800E9494: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800E9340(rdram, ctx);
        goto after_1;
    // 0x800E9494: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_1:
    // 0x800E9498: lh          $t8, 0x4650($s5)
    ctx->r24 = MEM_H(ctx->r21, 0X4650);
    // 0x800E949C: sh          $s1, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r17;
    // 0x800E94A0: lh          $t7, 0xE($s3)
    ctx->r15 = MEM_H(ctx->r19, 0XE);
    // 0x800E94A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800E94A8: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800E94AC: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x800E94B0: bne         $at, $zero, L_800E9488
    if (ctx->r1 != 0) {
        // 0x800E94B4: addu        $s1, $s1, $t7
        ctx->r17 = ADD32(ctx->r17, ctx->r15);
            goto L_800E9488;
    }
    // 0x800E94B4: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
L_800E94B8:
    // 0x800E94B8: jal         0x8001B084
    // 0x800E94BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8001B084(rdram, ctx);
        goto after_2;
    // 0x800E94BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x800E94C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E94C4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E94C8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E94CC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800E94D0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800E94D4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800E94D8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800E94DC: jr          $ra
    // 0x800E94E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E94E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800E94E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E94E4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800E94E8: addiu       $a1, $t6, -0x2970
    ctx->r5 = ADD32(ctx->r14, -0X2970);
    // 0x800E94EC: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800E94F0: addiu       $a2, $a2, -0x28D2
    ctx->r6 = ADD32(ctx->r6, -0X28D2);
    // 0x800E94F4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800E94F8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800E94FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800E9500:
    // 0x800E9500: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800E9504: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800E9508: sltu        $at, $a1, $a2
    ctx->r1 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x800E950C: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    // 0x800E9510: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800E9514: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800E9518: sh          $v0, 0x18E($a1)
    MEM_H(0X18E, ctx->r5) = ctx->r2;
    // 0x800E951C: bne         $at, $zero, L_800E9500
    if (ctx->r1 != 0) {
        // 0x800E9520: sh          $v0, 0x22E($a1)
        MEM_H(0X22E, ctx->r5) = ctx->r2;
            goto L_800E9500;
    }
    // 0x800E9520: sh          $v0, 0x22E($a1)
    MEM_H(0X22E, ctx->r5) = ctx->r2;
    // 0x800E9524: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E9528: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800E952C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9530: addiu       $a0, $a0, 0x2DA8
    ctx->r4 = ADD32(ctx->r4, 0X2DA8);
    // 0x800E9534: addiu       $v1, $v1, 0x2650
    ctx->r3 = ADD32(ctx->r3, 0X2650);
    // 0x800E9538: sw          $zero, 0x2558($at)
    MEM_W(0X2558, ctx->r1) = 0;
    // 0x800E953C: sw          $zero, 0x255C($at)
    MEM_W(0X255C, ctx->r1) = 0;
    // 0x800E9540: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_800E9544:
    // 0x800E9544: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800E9548: sb          $v0, -0x6($v1)
    MEM_B(-0X6, ctx->r3) = ctx->r2;
    // 0x800E954C: sb          $v0, -0x5($v1)
    MEM_B(-0X5, ctx->r3) = ctx->r2;
    // 0x800E9550: sb          $v0, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r2;
    // 0x800E9554: sb          $v0, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r2;
    // 0x800E9558: sb          $v0, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r2;
    // 0x800E955C: sb          $v0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r2;
    // 0x800E9560: sb          $v0, -0x8($v1)
    MEM_B(-0X8, ctx->r3) = ctx->r2;
    // 0x800E9564: bne         $v1, $a0, L_800E9544
    if (ctx->r3 != ctx->r4) {
        // 0x800E9568: sb          $v0, -0x7($v1)
        MEM_B(-0X7, ctx->r3) = ctx->r2;
            goto L_800E9544;
    }
    // 0x800E9568: sb          $v0, -0x7($v1)
    MEM_B(-0X7, ctx->r3) = ctx->r2;
    // 0x800E956C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E957C: jal         0x800E94E4
    // 0x800E9580: nop

    func_800E94E4(rdram, ctx);
        goto after_0;
    // 0x800E9580: nop

    after_0:
    // 0x800E9584: jal         0x800E93CC
    // 0x800E9588: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800E93CC(rdram, ctx);
        goto after_1;
    // 0x800E9588: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800E958C: jal         0x800E9438
    // 0x800E9590: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800E9438(rdram, ctx);
        goto after_2;
    // 0x800E9590: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x800E9594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9598: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800E959C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800E95A0: sw          $t6, 0x3510($at)
    MEM_W(0X3510, ctx->r1) = ctx->r14;
    // 0x800E95A4: jr          $ra
    // 0x800E95A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800E95A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800E95AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E95AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E95B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E95B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800E95B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800E95BC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800E95C0: jal         0x8001211C
    // 0x800E95C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    func_8001211C(rdram, ctx);
        goto after_0;
    // 0x800E95C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x800E95C8: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x800E95CC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800E95D0: lui         $ra, 0x8012
    ctx->r31 = S32(0X8012 << 16);
    // 0x800E95D4: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x800E95D8: addu        $ra, $ra, $t5
    ctx->r31 = ADD32(ctx->r31, ctx->r13);
    // 0x800E95DC: lw          $v1, 0x351C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X351C);
    // 0x800E95E0: lw          $ra, 0x3514($ra)
    ctx->r31 = MEM_W(ctx->r31, 0X3514);
    // 0x800E95E4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800E95E8: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800E95EC: slt         $at, $v1, $ra
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r31) ? 1 : 0;
    // 0x800E95F0: beq         $at, $zero, L_800E969C
    if (ctx->r1 == 0) {
        // 0x800E95F4: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_800E969C;
    }
    // 0x800E95F4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x800E95F8: addiu       $t7, $t7, -0x2970
    ctx->r15 = ADD32(ctx->r15, -0X2970);
    // 0x800E95FC: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800E9600: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800E9604: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800E9608: addiu       $t0, $t0, -0x2970
    ctx->r8 = ADD32(ctx->r8, -0X2970);
    // 0x800E960C: addiu       $t2, $t2, 0x2560
    ctx->r10 = ADD32(ctx->r10, 0X2560);
    // 0x800E9610: addiu       $t3, $t3, 0x2650
    ctx->r11 = ADD32(ctx->r11, 0X2650);
    // 0x800E9614: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x800E9618: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800E961C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_800E9620:
    // 0x800E9620: lh          $a2, 0x190($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X190);
    // 0x800E9624: addu        $t8, $t0, $a3
    ctx->r24 = ADD32(ctx->r8, ctx->r7);
    // 0x800E9628: beql        $t1, $a2, L_800E9690
    if (ctx->r9 == ctx->r6) {
        // 0x800E962C: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_800E9690;
    }
    goto skip_0;
    // 0x800E962C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x800E9630: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x800E9634: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x800E9638: addu        $t7, $t0, $t6
    ctx->r15 = ADD32(ctx->r8, ctx->r14);
    // 0x800E963C: bnel        $t9, $zero, L_800E9690
    if (ctx->r25 != 0) {
        // 0x800E9640: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_800E9690;
    }
    goto skip_1;
    // 0x800E9640: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
    // 0x800E9644: lw          $t8, 0x50($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X50);
    // 0x800E9648: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x800E964C: subu        $t9, $v0, $t8
    ctx->r25 = SUB32(ctx->r2, ctx->r24);
    // 0x800E9650: sltu        $at, $s1, $t9
    ctx->r1 = ctx->r17 < ctx->r25 ? 1 : 0;
    // 0x800E9654: beq         $at, $zero, L_800E968C
    if (ctx->r1 == 0) {
        // 0x800E9658: addu        $t8, $t2, $t7
        ctx->r24 = ADD32(ctx->r10, ctx->r15);
            goto L_800E968C;
    }
    // 0x800E9658: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x800E965C: lh          $t6, 0x230($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X230);
    // 0x800E9660: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x800E9664: addu        $v1, $t0, $t5
    ctx->r3 = ADD32(ctx->r8, ctx->r13);
    // 0x800E9668: addu        $a0, $t6, $t9
    ctx->r4 = ADD32(ctx->r14, ctx->r25);
    // 0x800E966C: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x800E9670: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x800E9674: addu        $t6, $t8, $s0
    ctx->r14 = ADD32(ctx->r24, ctx->r16);
    // 0x800E9678: sb          $t4, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r12;
    // 0x800E967C: sh          $t1, 0x190($a1)
    MEM_H(0X190, ctx->r5) = ctx->r9;
    // 0x800E9680: lw          $t9, 0x4EC8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4EC8);
    // 0x800E9684: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x800E9688: sw          $t7, 0x4EC8($v1)
    MEM_W(0X4EC8, ctx->r3) = ctx->r15;
L_800E968C:
    // 0x800E968C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_800E9690:
    // 0x800E9690: slt         $at, $a3, $ra
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r31) ? 1 : 0;
    // 0x800E9694: bne         $at, $zero, L_800E9620
    if (ctx->r1 != 0) {
        // 0x800E9698: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_800E9620;
    }
    // 0x800E9698: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_800E969C:
    // 0x800E969C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E96A0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800E96A4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800E96A8: jr          $ra
    // 0x800E96AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800E96AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800E96B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E96B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E96B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E96B8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E96BC: jal         0x800E95AC
    // 0x800E96C0: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    func_800E95AC(rdram, ctx);
        goto after_0;
    // 0x800E96C0: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    after_0:
    // 0x800E96C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E96C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E96CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E96E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E96E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E96E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E96E8: jal         0x800EA3A0
    // 0x800E96EC: nop

    func_800EA3A0(rdram, ctx);
        goto after_0;
    // 0x800E96EC: nop

    after_0:
    // 0x800E96F0: jal         0x800EBB6C
    // 0x800E96F4: nop

    func_800EBB6C(rdram, ctx);
        goto after_1;
    // 0x800E96F4: nop

    after_1:
    // 0x800E96F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E96FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9700: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E970C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9710: jal         0x800EA370
    // 0x800E9714: nop

    func_800EA370(rdram, ctx);
        goto after_0;
    // 0x800E9714: nop

    after_0:
    // 0x800E9718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E971C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9720: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E972C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9730: jal         0x800EA390
    // 0x800E9734: nop

    func_800EA390(rdram, ctx);
        goto after_0;
    // 0x800E9734: nop

    after_0:
    // 0x800E9738: jal         0x800EB70C
    // 0x800E973C: nop

    func_800EB70C(rdram, ctx);
        goto after_1;
    // 0x800E973C: nop

    after_1:
    // 0x800E9740: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x800E9744: jal         0x800B42FC
    // 0x800E9748: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800B42FC(rdram, ctx);
        goto after_2;
    // 0x800E9748: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x800E974C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E9750: sw          $v0, 0x2DB0($at)
    MEM_W(0X2DB0, ctx->r1) = ctx->r2;
    // 0x800E9754: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x800E9758: jal         0x800B42FC
    // 0x800E975C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800B42FC(rdram, ctx);
        goto after_3;
    // 0x800E975C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x800E9760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9764: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E9768: sw          $v0, 0x2DB4($at)
    MEM_W(0X2DB4, ctx->r1) = ctx->r2;
    // 0x800E976C: jr          $ra
    // 0x800E9770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800E9770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800E9774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E977C: jal         0x800EA398
    // 0x800E9780: nop

    func_800EA398(rdram, ctx);
        goto after_0;
    // 0x800E9780: nop

    after_0:
    // 0x800E9784: jal         0x800EB750
    // 0x800E9788: nop

    func_800EB750(rdram, ctx);
        goto after_1;
    // 0x800E9788: nop

    after_1:
    // 0x800E978C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9790: jal         0x800B42DC
    // 0x800E9794: lw          $a0, 0x2DB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB0);
    func_800B42DC(rdram, ctx);
        goto after_2;
    // 0x800E9794: lw          $a0, 0x2DB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB0);
    after_2:
    // 0x800E9798: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E979C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E97A0: sw          $zero, 0x2DB0($at)
    MEM_W(0X2DB0, ctx->r1) = 0;
    // 0x800E97A4: jal         0x800B42DC
    // 0x800E97A8: lw          $a0, 0x2DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB4);
    func_800B42DC(rdram, ctx);
        goto after_3;
    // 0x800E97A8: lw          $a0, 0x2DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB4);
    after_3:
    // 0x800E97AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E97B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E97B4: sw          $zero, 0x2DB4($at)
    MEM_W(0X2DB4, ctx->r1) = 0;
    // 0x800E97B8: jr          $ra
    // 0x800E97BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800E97BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800E97C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E97C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E97C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E97C8: jal         0x800EA09C
    // 0x800E97CC: nop

    func_800EA09C(rdram, ctx);
        goto after_0;
    // 0x800E97CC: nop

    after_0:
    // 0x800E97D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E97D4: beql        $v0, $at, L_800E97F8
    if (ctx->r2 == ctx->r1) {
        // 0x800E97D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E97F8;
    }
    goto skip_0;
    // 0x800E97D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E97DC: jal         0x800EA45C
    // 0x800E97E0: nop

    func_800EA45C(rdram, ctx);
        goto after_1;
    // 0x800E97E0: nop

    after_1:
    // 0x800E97E4: jal         0x800A5CFC
    // 0x800E97E8: nop

    func_800A5CFC(rdram, ctx);
        goto after_2;
    // 0x800E97E8: nop

    after_2:
    // 0x800E97EC: jal         0x800EA51C
    // 0x800E97F0: nop

    func_800EA51C(rdram, ctx);
        goto after_3;
    // 0x800E97F0: nop

    after_3:
    // 0x800E97F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E97F8:
    // 0x800E97F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E97FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9804: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800E9808: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E980C: addiu       $a0, $a0, 0x2DB4
    ctx->r4 = ADD32(ctx->r4, 0X2DB4);
    // 0x800E9810: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800E9814: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E9818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E981C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800E9820: lh          $t7, 0x4($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X4);
    // 0x800E9824: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800E9828: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    // 0x800E982C: jal         0x800B3CDC
    // 0x800E9830: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_800B3CDC(rdram, ctx);
        goto after_0;
    // 0x800E9830: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x800E9834: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800E9838: lbu         $t8, 0xB($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XB);
    // 0x800E983C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800E9840: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800E9844: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x800E9848: sb          $t9, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r25;
    // 0x800E984C: lw          $t1, 0x2DB4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2DB4);
    // 0x800E9850: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800E9854: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800E9858: beql        $t0, $t1, L_800E9874
    if (ctx->r8 == ctx->r9) {
        // 0x800E985C: lh          $t3, 0x4($a2)
        ctx->r11 = MEM_H(ctx->r6, 0X4);
            goto L_800E9874;
    }
    goto skip_0;
    // 0x800E985C: lh          $t3, 0x4($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X4);
    skip_0:
    // 0x800E9860: jal         0x800BE4C4
    // 0x800E9864: nop

    func_800BE4C4(rdram, ctx);
        goto after_1;
    // 0x800E9864: nop

    after_1:
    // 0x800E9868: b           L_800E9888
    // 0x800E986C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800E9888;
    // 0x800E986C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9870: lh          $t3, 0x4($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X4);
L_800E9874:
    // 0x800E9874: beql        $t2, $t3, L_800E9888
    if (ctx->r10 == ctx->r11) {
        // 0x800E9878: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E9888;
    }
    goto skip_1;
    // 0x800E9878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800E987C: jal         0x800E9CF4
    // 0x800E9880: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800E9CF4(rdram, ctx);
        goto after_2;
    // 0x800E9880: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x800E9884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E9888:
    // 0x800E9888: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800E988C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E9890: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E989C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E98A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E98A4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E98A8: jal         0x800B3CDC
    // 0x800E98AC: addiu       $a0, $a0, 0x2DB0
    ctx->r4 = ADD32(ctx->r4, 0X2DB0);
    func_800B3CDC(rdram, ctx);
        goto after_0;
    // 0x800E98AC: addiu       $a0, $a0, 0x2DB0
    ctx->r4 = ADD32(ctx->r4, 0X2DB0);
    after_0:
    // 0x800E98B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E98B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E98B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E98C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E98C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E98C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E98C8: jal         0x800E9804
    // 0x800E98CC: nop

    func_800E9804(rdram, ctx);
        goto after_0;
    // 0x800E98CC: nop

    after_0:
    // 0x800E98D0: lbu         $t6, 0xB($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XB);
    // 0x800E98D4: lbu         $t0, 0xA($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XA);
    // 0x800E98D8: lbu         $t2, 0x3($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X3);
    // 0x800E98DC: andi        $t8, $t6, 0xFFFE
    ctx->r24 = ctx->r14 & 0XFFFE;
    // 0x800E98E0: sb          $t8, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r24;
    // 0x800E98E4: andi        $t9, $t8, 0xFD
    ctx->r25 = ctx->r24 & 0XFD;
    // 0x800E98E8: andi        $t1, $t0, 0xFF07
    ctx->r9 = ctx->r8 & 0XFF07;
    // 0x800E98EC: andi        $t3, $t2, 0xFFFD
    ctx->r11 = ctx->r10 & 0XFFFD;
    // 0x800E98F0: sb          $t9, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r25;
    // 0x800E98F4: sb          $t1, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r9;
    // 0x800E98F8: sb          $t3, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r11;
    // 0x800E98FC: jal         0x800DC0C0
    // 0x800E9900: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800DC0C0(rdram, ctx);
        goto after_1;
    // 0x800E9900: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800E9904: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x800E9908: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E990C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800E9910: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800E9914: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800E9918: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800E991C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800E9920: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800E9924: nop

    // 0x800E9928: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800E992C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800E9930: nop

    // 0x800E9934: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800E9938: beql        $t5, $zero, L_800E9988
    if (ctx->r13 == 0) {
        // 0x800E993C: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_800E9988;
    }
    goto skip_0;
    // 0x800E993C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x800E9940: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E9944: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800E9948: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800E994C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800E9950: nop

    // 0x800E9954: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800E9958: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800E995C: nop

    // 0x800E9960: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800E9964: bne         $t5, $zero, L_800E997C
    if (ctx->r13 != 0) {
        // 0x800E9968: nop
    
            goto L_800E997C;
    }
    // 0x800E9968: nop

    // 0x800E996C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x800E9970: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800E9974: b           L_800E9994
    // 0x800E9978: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_800E9994;
    // 0x800E9978: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_800E997C:
    // 0x800E997C: b           L_800E9994
    // 0x800E9980: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_800E9994;
    // 0x800E9980: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800E9984: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_800E9988:
    // 0x800E9988: nop

    // 0x800E998C: bltz        $t5, L_800E997C
    if (SIGNED(ctx->r13) < 0) {
        // 0x800E9990: nop
    
            goto L_800E997C;
    }
    // 0x800E9990: nop

L_800E9994:
    // 0x800E9994: lhu         $t9, 0xA($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0XA);
    // 0x800E9998: sll         $t7, $t5, 6
    ctx->r15 = S32(ctx->r13 << 6);
    // 0x800E999C: andi        $t8, $t7, 0x7C0
    ctx->r24 = ctx->r15 & 0X7C0;
    // 0x800E99A0: andi        $t0, $t9, 0xF83F
    ctx->r8 = ctx->r25 & 0XF83F;
    // 0x800E99A4: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x800E99A8: sh          $t1, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r9;
    // 0x800E99AC: lbu         $t2, 0xB($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XB);
    // 0x800E99B0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800E99B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800E99B8: andi        $t4, $t2, 0xFFF7
    ctx->r12 = ctx->r10 & 0XFFF7;
    // 0x800E99BC: andi        $t7, $t4, 0xFB
    ctx->r15 = ctx->r12 & 0XFB;
    // 0x800E99C0: sb          $t4, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r12;
    // 0x800E99C4: sb          $t7, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r15;
    // 0x800E99C8: ori         $t9, $t7, 0x10
    ctx->r25 = ctx->r15 | 0X10;
    // 0x800E99CC: sb          $t9, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r25;
    // 0x800E99D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E99D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E99D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E99E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E99E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E99E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E99E8: jal         0x800E9804
    // 0x800E99EC: nop

    func_800E9804(rdram, ctx);
        goto after_0;
    // 0x800E99EC: nop

    after_0:
    // 0x800E99F0: lbu         $t7, 0xB($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XB);
    // 0x800E99F4: ori         $t9, $t7, 0x1
    ctx->r25 = ctx->r15 | 0X1;
    // 0x800E99F8: andi        $t1, $t9, 0xF7
    ctx->r9 = ctx->r25 & 0XF7;
    // 0x800E99FC: sb          $t9, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r25;
    // 0x800E9A00: andi        $t4, $t1, 0xFB
    ctx->r12 = ctx->r9 & 0XFB;
    // 0x800E9A04: sb          $t1, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r9;
    // 0x800E9A08: sb          $t4, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r12;
    // 0x800E9A0C: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x800E9A10: sb          $t5, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r13;
    // 0x800E9A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9A1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9A2C: jal         0x800E9898
    // 0x800E9A30: nop

    func_800E9898(rdram, ctx);
        goto after_0;
    // 0x800E9A30: nop

    after_0:
    // 0x800E9A34: lhu         $t6, 0x6($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6);
    // 0x800E9A38: lbu         $t3, 0x12($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X12);
    // 0x800E9A3C: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
    // 0x800E9A40: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x800E9A44: ori         $t8, $t7, 0x1900
    ctx->r24 = ctx->r15 | 0X1900;
    // 0x800E9A48: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
    // 0x800E9A4C: lbu         $t9, 0x7($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X7);
    // 0x800E9A50: lbu         $t8, 0x13($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X13);
    // 0x800E9A54: andi        $t6, $t3, 0xFFFD
    ctx->r14 = ctx->r11 & 0XFFFD;
    // 0x800E9A58: andi        $t1, $t9, 0xFF81
    ctx->r9 = ctx->r25 & 0XFF81;
    // 0x800E9A5C: sb          $t1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r9;
    // 0x800E9A60: andi        $t2, $t1, 0xFE
    ctx->r10 = ctx->r9 & 0XFE;
    // 0x800E9A64: sb          $t2, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r10;
    // 0x800E9A68: andi        $t0, $t8, 0xFF7F
    ctx->r8 = ctx->r24 & 0XFF7F;
    // 0x800E9A6C: andi        $t2, $t0, 0xBF
    ctx->r10 = ctx->r8 & 0XBF;
    // 0x800E9A70: sb          $t6, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r14;
    // 0x800E9A74: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x800E9A78: sb          $t0, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r8;
    // 0x800E9A7C: andi        $t4, $t2, 0xDF
    ctx->r12 = ctx->r10 & 0XDF;
    // 0x800E9A80: sb          $t2, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r10;
    // 0x800E9A84: andi        $t6, $t4, 0xEF
    ctx->r14 = ctx->r12 & 0XEF;
    // 0x800E9A88: sb          $t4, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r12;
    // 0x800E9A8C: andi        $t8, $t6, 0xF3
    ctx->r24 = ctx->r14 & 0XF3;
    // 0x800E9A90: sb          $t6, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r14;
    // 0x800E9A94: sb          $t8, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r24;
    // 0x800E9A98: andi        $t9, $t8, 0xFC
    ctx->r25 = ctx->r24 & 0XFC;
    // 0x800E9A9C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x800E9AA0: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x800E9AA4: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x800E9AA8: sb          $t7, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r15;
    // 0x800E9AAC: sb          $t9, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r25;
    // 0x800E9AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9AB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9AB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9AC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E9AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9AC8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800E9ACC: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x800E9AD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800E9AD4: sll         $t8, $t7, 30
    ctx->r24 = S32(ctx->r15 << 30);
    // 0x800E9AD8: srl         $t9, $t8, 31
    ctx->r25 = S32(U32(ctx->r24) >> 31);
    // 0x800E9ADC: jal         0x800E9E88
    // 0x800E9AE0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_800E9E88(rdram, ctx);
        goto after_0;
    // 0x800E9AE0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_0:
    // 0x800E9AE4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E9AE8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800E9AEC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9AF0: subu        $a2, $t2, $v0
    ctx->r6 = SUB32(ctx->r10, ctx->r2);
    // 0x800E9AF4: div         $zero, $a2, $at
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r1)));
    // 0x800E9AF8: addiu       $a0, $a0, 0x2DB4
    ctx->r4 = ADD32(ctx->r4, 0X2DB4);
    // 0x800E9AFC: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x800E9B00: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800E9B04: mflo        $a2
    ctx->r6 = lo;
    // 0x800E9B08: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x800E9B0C: lh          $t1, 0x4($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X4);
    // 0x800E9B10: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x800E9B14: jal         0x800B3FD0
    // 0x800E9B18: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_800B3FD0(rdram, ctx);
        goto after_1;
    // 0x800E9B18: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_1:
    // 0x800E9B1C: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800E9B20: lw          $t5, 0x2DB4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2DB4);
    // 0x800E9B24: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800E9B28: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800E9B2C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800E9B30: beql        $t4, $t5, L_800E9B4C
    if (ctx->r12 == ctx->r13) {
        // 0x800E9B34: lh          $t8, 0x4($a3)
        ctx->r24 = MEM_H(ctx->r7, 0X4);
            goto L_800E9B4C;
    }
    goto skip_0;
    // 0x800E9B34: lh          $t8, 0x4($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X4);
    skip_0:
    // 0x800E9B38: jal         0x800BE4C4
    // 0x800E9B3C: nop

    func_800BE4C4(rdram, ctx);
        goto after_2;
    // 0x800E9B3C: nop

    after_2:
    // 0x800E9B40: b           L_800E9B64
    // 0x800E9B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800E9B64;
    // 0x800E9B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9B48: lh          $t8, 0x4($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X4);
L_800E9B4C:
    // 0x800E9B4C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800E9B50: beql        $t7, $t8, L_800E9B64
    if (ctx->r15 == ctx->r24) {
        // 0x800E9B54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E9B64;
    }
    goto skip_1;
    // 0x800E9B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800E9B58: jal         0x800E9CF4
    // 0x800E9B5C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800E9CF4(rdram, ctx);
        goto after_3;
    // 0x800E9B5C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x800E9B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E9B64:
    // 0x800E9B64: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800E9B68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E9B6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9B74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E9B78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9B7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800E9B80: jal         0x800E9D68
    // 0x800E9B84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800E9D68(rdram, ctx);
        goto after_0;
    // 0x800E9B84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E9B88: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E9B8C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800E9B90: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E9B94: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x800E9B98: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x800E9B9C: mflo        $t8
    ctx->r24 = lo;
    // 0x800E9BA0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800E9BA4: jal         0x800E9DD4
    // 0x800E9BA8: nop

    func_800E9DD4(rdram, ctx);
        goto after_1;
    // 0x800E9BA8: nop

    after_1:
    // 0x800E9BAC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800E9BB0: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800E9BB4: beq         $at, $zero, L_800E9BD0
    if (ctx->r1 == 0) {
        // 0x800E9BB8: nop
    
            goto L_800E9BD0;
    }
    // 0x800E9BB8: nop

    // 0x800E9BBC: jal         0x800BE5C4
    // 0x800E9BC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800BE5C4(rdram, ctx);
        goto after_2;
    // 0x800E9BC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800E9BC4: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x800E9BC8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800E9BCC: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_800E9BD0:
    // 0x800E9BD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9BD4: addiu       $a0, $a0, 0x2DB0
    ctx->r4 = ADD32(ctx->r4, 0X2DB0);
    // 0x800E9BD8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800E9BDC: jal         0x800B3FD0
    // 0x800E9BE0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800B3FD0(rdram, ctx);
        goto after_3;
    // 0x800E9BE0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x800E9BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E9BEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9BF8: bltz        $a1, L_800E9C10
    if (SIGNED(ctx->r5) < 0) {
        // 0x800E9BFC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800E9C10;
    }
    // 0x800E9BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9C00: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x800E9C04: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800E9C08: bne         $at, $zero, L_800E9C18
    if (ctx->r1 != 0) {
        // 0x800E9C0C: nop
    
            goto L_800E9C18;
    }
    // 0x800E9C0C: nop

L_800E9C10:
    // 0x800E9C10: b           L_800E9C34
    // 0x800E9C14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800E9C34;
    // 0x800E9C14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800E9C18:
    // 0x800E9C18: jal         0x800E9D68
    // 0x800E9C1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800E9D68(rdram, ctx);
        goto after_0;
    // 0x800E9C1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E9C20: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800E9C24: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800E9C28: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x800E9C2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E9C30: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
L_800E9C34:
    // 0x800E9C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9C38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9C3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9C44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E9C48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E9C4C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800E9C50: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800E9C54: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800E9C58: jal         0x800E9E88
    // 0x800E9C5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800E9E88(rdram, ctx);
        goto after_0;
    // 0x800E9C5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800E9C60: beq         $v0, $zero, L_800E9CC0
    if (ctx->r2 == 0) {
        // 0x800E9C64: nop
    
            goto L_800E9CC0;
    }
    // 0x800E9C64: nop

    // 0x800E9C68: jal         0x800E9E88
    // 0x800E9C6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800E9E88(rdram, ctx);
        goto after_1;
    // 0x800E9C6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x800E9C70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E9C74: jal         0x800E9EB4
    // 0x800E9C78: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800E9EB4(rdram, ctx);
        goto after_2;
    // 0x800E9C78: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x800E9C7C: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800E9C80: beq         $at, $zero, L_800E9CB0
    if (ctx->r1 == 0) {
        // 0x800E9C84: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800E9CB0;
    }
    // 0x800E9C84: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800E9C88: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
L_800E9C8C:
    // 0x800E9C8C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800E9C90: beql        $t7, $zero, L_800E9CA4
    if (ctx->r15 == 0) {
        // 0x800E9C94: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_800E9CA4;
    }
    goto skip_0;
    // 0x800E9C94: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x800E9C98: jal         0x800EBE24
    // 0x800E9C9C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800EBE24(rdram, ctx);
        goto after_3;
    // 0x800E9C9C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_3:
    // 0x800E9CA0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_800E9CA4:
    // 0x800E9CA4: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800E9CA8: bnel        $at, $zero, L_800E9C8C
    if (ctx->r1 != 0) {
        // 0x800E9CAC: lw          $t6, 0x8($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X8);
            goto L_800E9C8C;
    }
    goto skip_1;
    // 0x800E9CAC: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_800E9CB0:
    // 0x800E9CB0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9CB4: addiu       $a0, $a0, 0x2DB4
    ctx->r4 = ADD32(ctx->r4, 0X2DB4);
    // 0x800E9CB8: jal         0x800B422C
    // 0x800E9CBC: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    func_800B422C(rdram, ctx);
        goto after_4;
    // 0x800E9CBC: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    after_4:
L_800E9CC0:
    // 0x800E9CC0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9CC4: addiu       $a0, $a0, 0x2DB0
    ctx->r4 = ADD32(ctx->r4, 0X2DB0);
    // 0x800E9CC8: jal         0x800B422C
    // 0x800E9CCC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800B422C(rdram, ctx);
        goto after_5;
    // 0x800E9CCC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x800E9CD0: jal         0x800BE5C4
    // 0x800E9CD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800BE5C4(rdram, ctx);
        goto after_6;
    // 0x800E9CD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x800E9CD8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x800E9CDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E9CE0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800E9CE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800E9CE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E9CEC: jr          $ra
    // 0x800E9CF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E9CF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E9CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9CF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E9CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9CFC: lh          $t6, 0x6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6);
    // 0x800E9D00: beql        $t6, $zero, L_800E9D5C
    if (ctx->r14 == 0) {
        // 0x800E9D04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E9D5C;
    }
    goto skip_0;
    // 0x800E9D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E9D08: jal         0x800E9E88
    // 0x800E9D0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800E9E88(rdram, ctx);
        goto after_0;
    // 0x800E9D0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E9D10: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E9D14: jal         0x800E9EB4
    // 0x800E9D18: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800E9EB4(rdram, ctx);
        goto after_1;
    // 0x800E9D18: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800E9D1C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800E9D20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800E9D24: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800E9D28: beq         $at, $zero, L_800E9D58
    if (ctx->r1 == 0) {
        // 0x800E9D2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800E9D58;
    }
    // 0x800E9D2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800E9D30: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
L_800E9D34:
    // 0x800E9D34: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800E9D38: bnel        $v0, $t8, L_800E9D4C
    if (ctx->r2 != ctx->r24) {
        // 0x800E9D3C: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_800E9D4C;
    }
    goto skip_1;
    // 0x800E9D3C: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    skip_1:
    // 0x800E9D40: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800E9D44: sw          $v1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r3;
    // 0x800E9D48: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_800E9D4C:
    // 0x800E9D4C: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800E9D50: bnel        $at, $zero, L_800E9D34
    if (ctx->r1 != 0) {
        // 0x800E9D54: lw          $t7, 0x8($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X8);
            goto L_800E9D34;
    }
    goto skip_2;
    // 0x800E9D54: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    skip_2:
L_800E9D58:
    // 0x800E9D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E9D5C:
    // 0x800E9D5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E9D60: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9D6C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800E9D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9D74: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9D78: jal         0x800B42A0
    // 0x800E9D7C: lw          $a0, 0x2DB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB0);
    func_800B42A0(rdram, ctx);
        goto after_0;
    // 0x800E9D7C: lw          $a0, 0x2DB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB0);
    after_0:
    // 0x800E9D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9D84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9D88: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9D94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9D98: jal         0x800E9D68
    // 0x800E9D9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800E9D68(rdram, ctx);
        goto after_0;
    // 0x800E9D9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E9DA0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800E9DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9DA8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800E9DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9DB0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800E9DB4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800E9DB8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E9DBC: jr          $ra
    // 0x800E9DC0: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    return;
    // 0x800E9DC0: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
;}
RECOMP_FUNC void func_800E9DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9DC4: jr          $ra
    // 0x800E9DC8: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    return;
    // 0x800E9DC8: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
;}
RECOMP_FUNC void func_800E9DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9DCC: jr          $ra
    // 0x800E9DD0: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    return;
    // 0x800E9DD0: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
;}
RECOMP_FUNC void func_800E9DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9DD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9DD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9DDC: jal         0x800BE5C4
    // 0x800E9DE0: nop

    func_800BE5C4(rdram, ctx);
        goto after_0;
    // 0x800E9DE0: nop

    after_0:
    // 0x800E9DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9DE8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x800E9DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9DF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9E00: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9E04: jal         0x8001BAFC
    // 0x800E9E08: lw          $a0, 0x2DB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB0);
    defrag(rdram, ctx);
        goto after_0;
    // 0x800E9E08: lw          $a0, 0x2DB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB0);
    after_0:
    // 0x800E9E0C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800E9E10: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9E14: sw          $v0, 0x2DB0($at)
    MEM_W(0X2DB0, ctx->r1) = ctx->r2;
    // 0x800E9E18: jal         0x8001BAFC
    // 0x800E9E1C: lw          $a0, 0x2DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB4);
    defrag(rdram, ctx);
        goto after_1;
    // 0x800E9E1C: lw          $a0, 0x2DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB4);
    after_1:
    // 0x800E9E20: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9E24: addiu       $a0, $a0, 0x2DB4
    ctx->r4 = ADD32(ctx->r4, 0X2DB4);
    // 0x800E9E28: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800E9E2C: beql        $v0, $t6, L_800E9E40
    if (ctx->r2 == ctx->r14) {
        // 0x800E9E30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800E9E40;
    }
    goto skip_0;
    // 0x800E9E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800E9E34: jal         0x800BE4C4
    // 0x800E9E38: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    func_800BE4C4(rdram, ctx);
        goto after_2;
    // 0x800E9E38: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    after_2:
    // 0x800E9E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800E9E40:
    // 0x800E9E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9E44: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9E54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800E9E58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800E9E5C: jal         0x800B4290
    // 0x800E9E60: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800B4290(rdram, ctx);
        goto after_0;
    // 0x800E9E60: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x800E9E64: jal         0x800B4290
    // 0x800E9E68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800B4290(rdram, ctx);
        goto after_1;
    // 0x800E9E68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800E9E6C: jal         0x800BE5C4
    // 0x800E9E70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800BE5C4(rdram, ctx);
        goto after_2;
    // 0x800E9E70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800E9E74: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x800E9E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9E80: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9E8C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800E9E90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9E94: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800E9E98: lw          $a0, 0x2DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DB4);
    // 0x800E9E9C: jal         0x800B42A0
    // 0x800E9EA0: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    func_800B42A0(rdram, ctx);
        goto after_0;
    // 0x800E9EA0: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    after_0:
    // 0x800E9EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9EAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9EB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E9EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9EBC: jal         0x800E9E88
    // 0x800E9EC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800E9E88(rdram, ctx);
        goto after_0;
    // 0x800E9EC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800E9EC4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800E9EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9ECC: lh          $t7, 0x6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X6);
    // 0x800E9ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E9ED4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800E9ED8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800E9EDC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E9EE0: jr          $ra
    // 0x800E9EE4: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    return;
    // 0x800E9EE4: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
;}
RECOMP_FUNC void func_800E9EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9EE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E9EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E9EF0: jal         0x80088300
    // 0x800E9EF4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    _gccubesearch_entrypoint_17(rdram, ctx);
        goto after_0;
    // 0x800E9EF4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x800E9EF8: beq         $v0, $zero, L_800E9F08
    if (ctx->r2 == 0) {
        // 0x800E9EFC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800E9F08;
    }
    // 0x800E9EFC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800E9F00: jal         0x800E9B74
    // 0x800E9F04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800E9B74(rdram, ctx);
        goto after_1;
    // 0x800E9F04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_800E9F08:
    // 0x800E9F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E9F0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E9F10: jr          $ra
    return;
;}
RECOMP_FUNC void func_800E9F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9F20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E9F24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E9F28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E9F2C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800E9F30: jal         0x800A7180
    // 0x800E9F34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800A7180(rdram, ctx);
        goto after_0;
    // 0x800E9F34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800E9F38: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800E9F3C: lh          $t6, 0x2DCC($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2DCC);
    // 0x800E9F40: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E9F44: bne         $t6, $zero, L_800E9F5C
    if (ctx->r14 != 0) {
        // 0x800E9F48: nop
    
            goto L_800E9F5C;
    }
    // 0x800E9F48: nop

    // 0x800E9F4C: jal         0x800E44FC
    // 0x800E9F50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800E44FC(rdram, ctx);
        goto after_1;
    // 0x800E9F50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800E9F54: b           L_800EA04C
    // 0x800E9F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800EA04C;
    // 0x800E9F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800E9F5C:
    // 0x800E9F5C: jal         0x800BE9B0
    // 0x800E9F60: nop

    func_800BE9B0(rdram, ctx);
        goto after_2;
    // 0x800E9F60: nop

    after_2:
    // 0x800E9F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800E9F68: jal         0x800BFD6C
    // 0x800E9F6C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800BFD6C(rdram, ctx);
        goto after_3;
    // 0x800E9F6C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x800E9F70: jal         0x800E44FC
    // 0x800E9F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E44FC(rdram, ctx);
        goto after_4;
    // 0x800E9F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800E9F78: jal         0x800D2A44
    // 0x800E9F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800D2A44(rdram, ctx);
        goto after_5;
    // 0x800E9F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800E9F80: jal         0x800BC8F8
    // 0x800E9F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BC8F8(rdram, ctx);
        goto after_6;
    // 0x800E9F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800E9F88: jal         0x800BE9E4
    // 0x800E9F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BE9E4(rdram, ctx);
        goto after_7;
    // 0x800E9F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800E9F90: jal         0x800BD594
    // 0x800E9F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BD594(rdram, ctx);
        goto after_8;
    // 0x800E9F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x800E9F98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E9F9C: jal         0x800EB51C
    // 0x800E9FA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EB51C(rdram, ctx);
        goto after_9;
    // 0x800E9FA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x800E9FA4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800E9FA8: jal         0x800EB51C
    // 0x800E9FAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EB51C(rdram, ctx);
        goto after_10;
    // 0x800E9FAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800E9FB0: jal         0x800F5008
    // 0x800E9FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F5008(rdram, ctx);
        goto after_11;
    // 0x800E9FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x800E9FB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800E9FBC: jal         0x800EB51C
    // 0x800E9FC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EB51C(rdram, ctx);
        goto after_12;
    // 0x800E9FC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x800E9FC4: jal         0x800B525C
    // 0x800E9FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800B525C(rdram, ctx);
        goto after_13;
    // 0x800E9FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x800E9FCC: jal         0x800BF3E4
    // 0x800E9FD0: nop

    func_800BF3E4(rdram, ctx);
        goto after_14;
    // 0x800E9FD0: nop

    after_14:
    // 0x800E9FD4: beq         $v0, $zero, L_800E9FE4
    if (ctx->r2 == 0) {
        // 0x800E9FD8: nop
    
            goto L_800E9FE4;
    }
    // 0x800E9FD8: nop

    // 0x800E9FDC: jal         0x800BEA24
    // 0x800E9FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BEA24(rdram, ctx);
        goto after_15;
    // 0x800E9FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
L_800E9FE4:
    // 0x800E9FE4: jal         0x800B7BB0
    // 0x800E9FE8: nop

    func_800B7BB0(rdram, ctx);
        goto after_16;
    // 0x800E9FE8: nop

    after_16:
    // 0x800E9FEC: jal         0x800F50D0
    // 0x800E9FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F50D0(rdram, ctx);
        goto after_17;
    // 0x800E9FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x800E9FF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800E9FF8: jal         0x800EB51C
    // 0x800E9FFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EB51C(rdram, ctx);
        goto after_18;
    // 0x800E9FFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_18:
    // 0x800EA000: jal         0x800B52EC
    // 0x800EA004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800B52EC(rdram, ctx);
        goto after_19;
    // 0x800EA004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x800EA008: jal         0x800BC948
    // 0x800EA00C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BC948(rdram, ctx);
        goto after_20;
    // 0x800EA00C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x800EA010: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800EA014: jal         0x800EB51C
    // 0x800EA018: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EB51C(rdram, ctx);
        goto after_21;
    // 0x800EA018: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_21:
    // 0x800EA01C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800EA020: lw          $t7, 0x7EF4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7EF4);
    // 0x800EA024: beql        $t7, $zero, L_800EA038
    if (ctx->r15 == 0) {
        // 0x800EA028: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800EA038;
    }
    goto skip_0;
    // 0x800EA028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800EA02C: jal         0x8008A8F8
    // 0x800EA030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sufade_entrypoint_1(rdram, ctx);
        goto after_22;
    // 0x800EA030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x800EA034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800EA038:
    // 0x800EA038: jal         0x800A8EF0
    // 0x800EA03C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_800A8EF0(rdram, ctx);
        goto after_23;
    // 0x800EA03C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_23:
    // 0x800EA040: jal         0x800F51CC
    // 0x800EA044: nop

    func_800F51CC(rdram, ctx);
        goto after_24;
    // 0x800EA044: nop

    after_24:
    // 0x800EA048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800EA04C:
    // 0x800EA04C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EA050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EA054: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EA05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA05C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EA060: jr          $ra
    // 0x800EA064: lhu         $v0, 0x2DC2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2DC2);
    return;
    // 0x800EA064: lhu         $v0, 0x2DC2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2DC2);
;}
RECOMP_FUNC void func_800EA068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EA06C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800EA070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EA074: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800EA078: jal         0x80088260
    // 0x800EA07C: lw          $a0, 0x2DC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DC4);
    _gcsectionDll_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800EA07C: lw          $a0, 0x2DC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2DC4);
    after_0:
    // 0x800EA080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EA084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EA088: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EA090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA090: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EA094: jr          $ra
    // 0x800EA098: lh          $v0, 0x2DC8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2DC8);
    return;
    // 0x800EA098: lh          $v0, 0x2DC8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2DC8);
;}
RECOMP_FUNC void func_800EA09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA09C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EA0A0: jr          $ra
    // 0x800EA0A4: lh          $v0, 0x2DC0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2DC0);
    return;
    // 0x800EA0A4: lh          $v0, 0x2DC0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2DC0);
;}
RECOMP_FUNC void func_800EA0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA0A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EA0AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EA0B0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800EA0B4: jal         0x80088B60
    // 0x800EA0B8: addiu       $a0, $a0, 0x2DC0
    ctx->r4 = ADD32(ctx->r4, 0X2DC0);
    _gsworldDll_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800EA0B8: addiu       $a0, $a0, 0x2DC0
    ctx->r4 = ADD32(ctx->r4, 0X2DC0);
    after_0:
    // 0x800EA0BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EA0C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EA0C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EA0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA0CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EA0D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EA0D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800EA0D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800EA0DC: jal         0x80087858
    // 0x800EA0E0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    _cothemedll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800EA0E0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800EA0E4: jal         0x800DBB5C
    // 0x800EA0E8: nop

    func_800DBB5C(rdram, ctx);
        goto after_1;
    // 0x800EA0E8: nop

    after_1:
    // 0x800EA0EC: jal         0x800BF8BC
    // 0x800EA0F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800BF8BC(rdram, ctx);
        goto after_2;
    // 0x800EA0F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800EA0F4: jal         0x800C0064
    // 0x800EA0F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800C0064(rdram, ctx);
        goto after_3;
    // 0x800EA0F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x800EA0FC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800EA100: addiu       $a0, $a0, 0x2DC0
    ctx->r4 = ADD32(ctx->r4, 0X2DC0);
    // 0x800EA104: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800EA108: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800EA10C: jal         0x80088B68
    // 0x800EA110: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    _gsworldDll_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x800EA110: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x800EA114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EA118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EA11C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EA124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EA128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EA12C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800EA130: jal         0x80088B78
    // 0x800EA134: addiu       $a0, $a0, 0x2DC0
    ctx->r4 = ADD32(ctx->r4, 0X2DC0);
    _gsworldDll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x800EA134: addiu       $a0, $a0, 0x2DC0
    ctx->r4 = ADD32(ctx->r4, 0X2DC0);
    after_0:
    // 0x800EA138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EA13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EA140: jr          $ra
    // 0x800EA144: nop

    return;
    // 0x800EA144: nop

;}
RECOMP_FUNC void func_800EA148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EA14C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800EA150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EA154: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800EA158: jal         0x80088B70
    // 0x800EA15C: addiu       $a0, $a0, 0x2DC0
    ctx->r4 = ADD32(ctx->r4, 0X2DC0);
    _gsworldDll_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x800EA15C: addiu       $a0, $a0, 0x2DC0
    ctx->r4 = ADD32(ctx->r4, 0X2DC0);
    after_0:
    // 0x800EA160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EA164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EA168: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EA170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EA174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EA178: jal         0x800C718C
    // 0x800EA17C: nop

    func_800C718C(rdram, ctx);
        goto after_0;
    // 0x800EA17C: nop

    after_0:
    // 0x800EA180: jal         0x800D8744
    // 0x800EA184: nop

    func_800D8744(rdram, ctx);
        goto after_1;
    // 0x800EA184: nop

    after_1:
    // 0x800EA188: jal         0x800FA2C0
    // 0x800EA18C: nop

    func_800FA2C0(rdram, ctx);
        goto after_2;
    // 0x800EA18C: nop

    after_2:
    // 0x800EA190: jal         0x800A8184
    // 0x800EA194: nop

    func_800A8184(rdram, ctx);
        goto after_3;
    // 0x800EA194: nop

    after_3:
    // 0x800EA198: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800EA19C: beq         $v0, $at, L_800EA1AC
    if (ctx->r2 == ctx->r1) {
        // 0x800EA1A0: nop
    
            goto L_800EA1AC;
    }
    // 0x800EA1A0: nop

    // 0x800EA1A4: jal         0x800B7E38
    // 0x800EA1A8: nop

    func_800B7E38(rdram, ctx);
        goto after_4;
    // 0x800EA1A8: nop

    after_4:
L_800EA1AC:
    // 0x800EA1AC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800EA1B0: lh          $t6, 0x2DCA($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2DCA);
    // 0x800EA1B4: bne         $t6, $zero, L_800EA1C4
    if (ctx->r14 != 0) {
        // 0x800EA1B8: nop
    
            goto L_800EA1C4;
    }
    // 0x800EA1B8: nop

    // 0x800EA1BC: b           L_800EA324
    // 0x800EA1C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800EA324;
    // 0x800EA1C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EA1C4:
    // 0x800EA1C4: jal         0x800FFBE4
    // 0x800EA1C8: nop

    func_800FFBE4(rdram, ctx);
        goto after_5;
    // 0x800EA1C8: nop

    after_5:
    // 0x800EA1CC: jal         0x800EE718
    // 0x800EA1D0: nop

    func_800EE718(rdram, ctx);
        goto after_6;
    // 0x800EA1D0: nop

    after_6:
    // 0x800EA1D4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800EA1D8: lw          $t7, 0x7EF8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7EF8);
    // 0x800EA1DC: beq         $t7, $zero, L_800EA1EC
    if (ctx->r15 == 0) {
        // 0x800EA1E0: nop
    
            goto L_800EA1EC;
    }
    // 0x800EA1E0: nop

    // 0x800EA1E4: jal         0x80088F18
    // 0x800EA1E8: nop

    _idworld_entrypoint_5(rdram, ctx);
        goto after_7;
    // 0x800EA1E8: nop

    after_7:
L_800EA1EC:
    // 0x800EA1EC: jal         0x800E97C0
    // 0x800EA1F0: nop

    func_800E97C0(rdram, ctx);
        goto after_8;
    // 0x800EA1F0: nop

    after_8:
    // 0x800EA1F4: jal         0x8010D7EC
    // 0x800EA1F8: nop

    func_8010D7EC(rdram, ctx);
        goto after_9;
    // 0x800EA1F8: nop

    after_9:
    // 0x800EA1FC: jal         0x800EE748
    // 0x800EA200: nop

    func_800EE748(rdram, ctx);
        goto after_10;
    // 0x800EA200: nop

    after_10:
    // 0x800EA204: jal         0x800F84FC
    // 0x800EA208: nop

    func_800F84FC(rdram, ctx);
        goto after_11;
    // 0x800EA208: nop

    after_11:
    // 0x800EA20C: jal         0x800BF710
    // 0x800EA210: nop

    func_800BF710(rdram, ctx);
        goto after_12;
    // 0x800EA210: nop

    after_12:
    // 0x800EA214: jal         0x800B592C
    // 0x800EA218: nop

    func_800B592C(rdram, ctx);
        goto after_13;
    // 0x800EA218: nop

    after_13:
    // 0x800EA21C: jal         0x8008B850
    // 0x800EA220: nop

    func_8008B850(rdram, ctx);
        goto after_14;
    // 0x800EA220: nop

    after_14:
    // 0x800EA224: jal         0x800E1804
    // 0x800EA228: nop

    func_800E1804(rdram, ctx);
        goto after_15;
    // 0x800EA228: nop

    after_15:
    // 0x800EA22C: jal         0x800A8E9C
    // 0x800EA230: nop

    func_800A8E9C(rdram, ctx);
        goto after_16;
    // 0x800EA230: nop

    after_16:
    // 0x800EA234: jal         0x800CF264
    // 0x800EA238: nop

    func_800CF264(rdram, ctx);
        goto after_17;
    // 0x800EA238: nop

    after_17:
    // 0x800EA23C: jal         0x800CE628
    // 0x800EA240: nop

    func_800CE628(rdram, ctx);
        goto after_18;
    // 0x800EA240: nop

    after_18:
    // 0x800EA244: jal         0x800D2574
    // 0x800EA248: nop

    func_800D2574(rdram, ctx);
        goto after_19;
    // 0x800EA248: nop

    after_19:
    // 0x800EA24C: jal         0x800EA09C
    // 0x800EA250: nop

    func_800EA09C(rdram, ctx);
        goto after_20;
    // 0x800EA250: nop

    after_20:
    // 0x800EA254: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800EA258: bne         $v0, $at, L_800EA270
    if (ctx->r2 != ctx->r1) {
        // 0x800EA25C: nop
    
            goto L_800EA270;
    }
    // 0x800EA25C: nop

    // 0x800EA260: jal         0x800A1450
    // 0x800EA264: nop

    func_800A1450(rdram, ctx);
        goto after_21;
    // 0x800EA264: nop

    after_21:
    // 0x800EA268: jal         0x800DAE9C
    // 0x800EA26C: nop

    func_800DAE9C(rdram, ctx);
        goto after_22;
    // 0x800EA26C: nop

    after_22:
L_800EA270:
    // 0x800EA270: jal         0x800C57F0
    // 0x800EA274: nop

    func_800C57F0(rdram, ctx);
        goto after_23;
    // 0x800EA274: nop

    after_23:
    // 0x800EA278: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800EA27C: lw          $t8, 0x7EF0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7EF0);
    // 0x800EA280: beq         $t8, $zero, L_800EA290
    if (ctx->r24 == 0) {
        // 0x800EA284: nop
    
            goto L_800EA290;
    }
    // 0x800EA284: nop

    // 0x800EA288: jal         0x8008A8E8
    // 0x800EA28C: nop

    _sulights_entrypoint_9(rdram, ctx);
        goto after_24;
    // 0x800EA28C: nop

    after_24:
L_800EA290:
    // 0x800EA290: jal         0x800BFCC4
    // 0x800EA294: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800BFCC4(rdram, ctx);
        goto after_25;
    // 0x800EA294: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_25:
    // 0x800EA298: jal         0x8001B50C
    // 0x800EA29C: nop

    func_8001B50C(rdram, ctx);
        goto after_26;
    // 0x800EA29C: nop

    after_26:
    // 0x800EA2A0: jal         0x800D6E54
    // 0x800EA2A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D6E54(rdram, ctx);
        goto after_27;
    // 0x800EA2A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_27:
    // 0x800EA2A8: jal         0x800ABA9C
    // 0x800EA2AC: nop

    func_800ABA9C(rdram, ctx);
        goto after_28;
    // 0x800EA2AC: nop

    after_28:
    // 0x800EA2B0: jal         0x800BFF70
    // 0x800EA2B4: nop

    func_800BFF70(rdram, ctx);
        goto after_29;
    // 0x800EA2B4: nop

    after_29:
    // 0x800EA2B8: jal         0x800B50F0
    // 0x800EA2BC: nop

    func_800B50F0(rdram, ctx);
        goto after_30;
    // 0x800EA2BC: nop

    after_30:
    // 0x800EA2C0: jal         0x800DBC68
    // 0x800EA2C4: nop

    func_800DBC68(rdram, ctx);
        goto after_31;
    // 0x800EA2C4: nop

    after_31:
    // 0x800EA2C8: jal         0x800E8A68
    // 0x800EA2CC: nop

    func_800E8A68(rdram, ctx);
        goto after_32;
    // 0x800EA2CC: nop

    after_32:
    // 0x800EA2D0: jal         0x800D5270
    // 0x800EA2D4: nop

    func_800D5270(rdram, ctx);
        goto after_33;
    // 0x800EA2D4: nop

    after_33:
    // 0x800EA2D8: jal         0x800C0438
    // 0x800EA2DC: nop

    func_800C0438(rdram, ctx);
        goto after_34;
    // 0x800EA2DC: nop

    after_34:
    // 0x800EA2E0: jal         0x800FFD10
    // 0x800EA2E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800FFD10(rdram, ctx);
        goto after_35;
    // 0x800EA2E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_35:
    // 0x800EA2E8: jal         0x800C7494
    // 0x800EA2EC: nop

    func_800C7494(rdram, ctx);
        goto after_36;
    // 0x800EA2EC: nop

    after_36:
    // 0x800EA2F0: jal         0x80100534
    // 0x800EA2F4: nop

    func_80100534(rdram, ctx);
        goto after_37;
    // 0x800EA2F4: nop

    after_37:
    // 0x800EA2F8: jal         0x80100C74
    // 0x800EA2FC: nop

    func_80100C74(rdram, ctx);
        goto after_38;
    // 0x800EA2FC: nop

    after_38:
    // 0x800EA300: jal         0x800FFBEC
    // 0x800EA304: nop

    func_800FFBEC(rdram, ctx);
        goto after_39;
    // 0x800EA304: nop

    after_39:
    // 0x800EA308: jal         0x800BF7E0
    // 0x800EA30C: nop

    func_800BF7E0(rdram, ctx);
        goto after_40;
    // 0x800EA30C: nop

    after_40:
    // 0x800EA310: jal         0x800C8A08
    // 0x800EA314: nop

    func_800C8A08(rdram, ctx);
        goto after_41;
    // 0x800EA314: nop

    after_41:
    // 0x800EA318: jal         0x800D154C
    // 0x800EA31C: nop

    func_800D154C(rdram, ctx);
        goto after_42;
    // 0x800EA31C: nop

    after_42:
    // 0x800EA320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EA324:
    // 0x800EA324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EA328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EA32C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EA334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA334: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800EA338: jr          $ra
    // 0x800EA33C: sh          $a0, 0x2DCA($at)
    MEM_H(0X2DCA, ctx->r1) = ctx->r4;
    return;
    // 0x800EA33C: sh          $a0, 0x2DCA($at)
    MEM_H(0X2DCA, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800EA340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA340: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EA344: jr          $ra
    // 0x800EA348: lh          $v0, 0x2DCA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2DCA);
    return;
    // 0x800EA348: lh          $v0, 0x2DCA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2DCA);
;}
RECOMP_FUNC void func_800EA34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA34C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800EA350: jr          $ra
    // 0x800EA354: sh          $a0, 0x2DCC($at)
    MEM_H(0X2DCC, ctx->r1) = ctx->r4;
    return;
    // 0x800EA354: sh          $a0, 0x2DCC($at)
    MEM_H(0X2DCC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800EA358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA358: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EA35C: jr          $ra
    // 0x800EA360: lh          $v0, 0x2DCC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2DCC);
    return;
    // 0x800EA360: lh          $v0, 0x2DCC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2DCC);
;}
RECOMP_FUNC void func_800EA364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA364: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EA368: jr          $ra
    // 0x800EA36C: lhu         $v0, 0x2DCE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2DCE);
    return;
    // 0x800EA36C: lhu         $v0, 0x2DCE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2DCE);
;}
RECOMP_FUNC void func_800EA370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EA374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EA378: jal         0x800EA3A0
    // 0x800EA37C: nop

    func_800EA3A0(rdram, ctx);
        goto after_0;
    // 0x800EA37C: nop

    after_0:
    // 0x800EA380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EA384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EA388: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EA390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA390: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EA398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA398: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EA3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA3A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EA3A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800EA3A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800EA3AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EA3B0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800EA3B4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800EA3B8: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800EA3BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800EA3C0: addiu       $s2, $s2, 0x2E78
    ctx->r18 = ADD32(ctx->r18, 0X2E78);
    // 0x800EA3C4: addiu       $s1, $s1, 0x2DD8
    ctx->r17 = ADD32(ctx->r17, 0X2DD8);
    // 0x800EA3C8: addiu       $s0, $s0, 0x2DD0
    ctx->r16 = ADD32(ctx->r16, 0X2DD0);
L_800EA3CC:
    // 0x800EA3CC: jal         0x800EFD24
    // 0x800EA3D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x800EA3D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800EA3D4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x800EA3D8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x800EA3DC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800EA3E0: bne         $s1, $s2, L_800EA3CC
    if (ctx->r17 != ctx->r18) {
        // 0x800EA3E4: sw          $zero, 0x4($s0)
        MEM_W(0X4, ctx->r16) = 0;
            goto L_800EA3CC;
    }
    // 0x800EA3E4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800EA3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800EA3EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EA3F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800EA3F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800EA3F8: jr          $ra
    // 0x800EA3FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800EA3FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800EA400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EA404: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800EA408: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x800EA40C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800EA410: addiu       $t8, $t8, 0x2DD0
    ctx->r24 = ADD32(ctx->r24, 0X2DD0);
    // 0x800EA414: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EA418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EA41C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800EA420: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EA424: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800EA428: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800EA42C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x800EA430: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800EA434: jal         0x800EE7F8
    // 0x800EA438: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800EA438: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800EA43C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800EA440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EA444: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800EA448: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EA44C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EA450: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x800EA454: jr          $ra
    // 0x800EA458: sw          $t0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r8;
    return;
    // 0x800EA458: sw          $t0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_800EA45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA45C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800EA460: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x800EA464: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x800EA468: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x800EA46C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800EA470: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800EA474: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800EA478: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x800EA47C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800EA480: addiu       $s2, $s2, 0x2DD0
    ctx->r18 = ADD32(ctx->r18, 0X2DD0);
    // 0x800EA484: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800EA488: addiu       $s4, $sp, 0x60
    ctx->r20 = ADD32(ctx->r29, 0X60);
    // 0x800EA48C: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
L_800EA490:
    // 0x800EA490: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x800EA494: beql        $a0, $zero, L_800EA4F0
    if (ctx->r4 == 0) {
        // 0x800EA498: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800EA4F0;
    }
    goto skip_0;
    // 0x800EA498: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800EA49C: jal         0x80106790
    // 0x800EA4A0: addiu       $s3, $s2, 0x8
    ctx->r19 = ADD32(ctx->r18, 0X8);
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x800EA4A0: addiu       $s3, $s2, 0x8
    ctx->r19 = ADD32(ctx->r18, 0X8);
    after_0:
    // 0x800EA4A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EA4A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800EA4AC: jal         0x800F5A00
    // 0x800EA4B0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800F5A00(rdram, ctx);
        goto after_1;
    // 0x800EA4B0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x800EA4B4: jal         0x80103C94
    // 0x800EA4B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103C94(rdram, ctx);
        goto after_2;
    // 0x800EA4B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800EA4BC: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800EA4C0: lh          $a0, 0x80($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X80);
    // 0x800EA4C4: lw          $t6, 0x18($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X18);
    // 0x800EA4C8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800EA4CC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800EA4D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800EA4D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800EA4D8: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x800EA4DC: addiu       $a3, $s0, 0x44
    ctx->r7 = ADD32(ctx->r16, 0X44);
    // 0x800EA4E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EA4E4: jal         0x800D8B80
    // 0x800EA4E8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_800D8B80(rdram, ctx);
        goto after_3;
    // 0x800EA4E8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_3:
    // 0x800EA4EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800EA4F0:
    // 0x800EA4F0: bne         $s1, $s5, L_800EA490
    if (ctx->r17 != ctx->r21) {
        // 0x800EA4F4: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_800EA490;
    }
    // 0x800EA4F4: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x800EA4F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800EA4FC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800EA500: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800EA504: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800EA508: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800EA50C: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x800EA510: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x800EA514: jr          $ra
    // 0x800EA518: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800EA518: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800EA51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA51C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800EA520: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800EA524: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x800EA528: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800EA52C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x800EA530: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x800EA534: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800EA538: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800EA53C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800EA540: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800EA544: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800EA548: addiu       $s2, $s2, 0x2DD0
    ctx->r18 = ADD32(ctx->r18, 0X2DD0);
    // 0x800EA54C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800EA550: addiu       $s3, $sp, 0x60
    ctx->r19 = ADD32(ctx->r29, 0X60);
    // 0x800EA554: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
L_800EA558:
    // 0x800EA558: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x800EA55C: beql        $a0, $zero, L_800EA5D4
    if (ctx->r4 == 0) {
        // 0x800EA560: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800EA5D4;
    }
    goto skip_0;
    // 0x800EA560: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x800EA564: jal         0x80106790
    // 0x800EA568: nop

    func_80106790(rdram, ctx);
        goto after_0;
    // 0x800EA568: nop

    after_0:
    // 0x800EA56C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EA570: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800EA574: jal         0x800F5A00
    // 0x800EA578: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800F5A00(rdram, ctx);
        goto after_1;
    // 0x800EA578: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x800EA57C: jal         0x80103C94
    // 0x800EA580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103C94(rdram, ctx);
        goto after_2;
    // 0x800EA580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800EA584: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800EA588: lh          $a0, 0x80($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X80);
    // 0x800EA58C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800EA590: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800EA594: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800EA598: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800EA59C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800EA5A0: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x800EA5A4: addiu       $a3, $s0, 0x44
    ctx->r7 = ADD32(ctx->r16, 0X44);
    // 0x800EA5A8: jal         0x800D89C8
    // 0x800EA5AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800D89C8(rdram, ctx);
        goto after_3;
    // 0x800EA5AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x800EA5B0: beq         $v0, $zero, L_800EA5CC
    if (ctx->r2 == 0) {
        // 0x800EA5B4: lwc1        $f6, 0x64($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
            goto L_800EA5CC;
    }
    // 0x800EA5B4: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800EA5B8: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x800EA5BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800EA5C0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800EA5C4: jal         0x800F8418
    // 0x800EA5C8: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    func_800F8418(rdram, ctx);
        goto after_4;
    // 0x800EA5C8: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    after_4:
L_800EA5CC:
    // 0x800EA5CC: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x800EA5D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800EA5D4:
    // 0x800EA5D4: bne         $s1, $s4, L_800EA558
    if (ctx->r17 != ctx->r20) {
        // 0x800EA5D8: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_800EA558;
    }
    // 0x800EA5D8: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x800EA5DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800EA5E0: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x800EA5E4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x800EA5E8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x800EA5EC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x800EA5F0: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x800EA5F4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x800EA5F8: jr          $ra
    // 0x800EA5FC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800EA5FC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800EA600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA600: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EA604: addiu       $v0, $v0, 0x2DD0
    ctx->r2 = ADD32(ctx->r2, 0X2DD0);
    // 0x800EA608: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800EA60C: jr          $ra
    // 0x800EA610: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    return;
    // 0x800EA610: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800EA614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA614: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EA618: addiu       $v0, $v0, 0x2DD0
    ctx->r2 = ADD32(ctx->r2, 0X2DD0);
    // 0x800EA61C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800EA620: jr          $ra
    // 0x800EA624: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    return;
    // 0x800EA624: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800EA628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA628: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x800EA62C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800EA630: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x800EA634: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x800EA638: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800EA63C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800EA640: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x800EA644: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x800EA648: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x800EA64C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x800EA650: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x800EA654: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x800EA658: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800EA65C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800EA660: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x800EA664: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    // 0x800EA668: jal         0x800E9E88
    // 0x800EA66C: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    func_800E9E88(rdram, ctx);
        goto after_0;
    // 0x800EA66C: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    after_0:
    // 0x800EA670: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800EA674: jal         0x800E9EB4
    // 0x800EA678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E9EB4(rdram, ctx);
        goto after_1;
    // 0x800EA678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800EA67C: sltu        $at, $s4, $v0
    ctx->r1 = ctx->r20 < ctx->r2 ? 1 : 0;
    // 0x800EA680: beq         $at, $zero, L_800EA9F4
    if (ctx->r1 == 0) {
        // 0x800EA684: sw          $v0, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r2;
            goto L_800EA9F4;
    }
    // 0x800EA684: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x800EA688: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x800EA68C: lw          $s7, 0xD0($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XD0);
    // 0x800EA690: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
L_800EA694:
    // 0x800EA694: sll         $t7, $v0, 27
    ctx->r15 = S32(ctx->r2 << 27);
    // 0x800EA698: bgez        $t7, L_800EA9E0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800EA69C: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_800EA9E0;
    }
    // 0x800EA69C: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x800EA6A0: bne         $t8, $zero, L_800EA858
    if (ctx->r24 != 0) {
        // 0x800EA6A4: sll         $t2, $v0, 28
        ctx->r10 = S32(ctx->r2 << 28);
            goto L_800EA858;
    }
    // 0x800EA6A4: sll         $t2, $v0, 28
    ctx->r10 = S32(ctx->r2 << 28);
    // 0x800EA6A8: sll         $t0, $v0, 30
    ctx->r8 = S32(ctx->r2 << 30);
    // 0x800EA6AC: bgezl       $t0, L_800EA9E4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800EA6B0: lw          $t2, 0xB0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XB0);
            goto L_800EA9E4;
    }
    goto skip_0;
    // 0x800EA6B0: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    skip_0:
    // 0x800EA6B4: jal         0x80088C88
    // 0x800EA6B8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    _gsproplookup_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x800EA6B8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x800EA6BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800EA6C0: jal         0x800BFC54
    // 0x800EA6C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800BFC54(rdram, ctx);
        goto after_3;
    // 0x800EA6C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800EA6C8: bne         $v0, $zero, L_800EA6F0
    if (ctx->r2 != 0) {
        // 0x800EA6CC: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_800EA6F0;
    }
    // 0x800EA6CC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EA6D0: jal         0x800CB854
    // 0x800EA6D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_4;
    // 0x800EA6D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x800EA6D8: bnel        $v0, $fp, L_800EA9E4
    if (ctx->r2 != ctx->r30) {
        // 0x800EA6DC: lw          $t2, 0xB0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XB0);
            goto L_800EA9E4;
    }
    goto skip_1;
    // 0x800EA6DC: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    skip_1:
    // 0x800EA6E0: jal         0x800BFC34
    // 0x800EA6E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800BFC34(rdram, ctx);
        goto after_5;
    // 0x800EA6E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x800EA6E8: beq         $v0, $zero, L_800EA9E0
    if (ctx->r2 == 0) {
        // 0x800EA6EC: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_800EA9E0;
    }
    // 0x800EA6EC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800EA6F0:
    // 0x800EA6F0: jal         0x800B2720
    // 0x800EA6F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800B2720(rdram, ctx);
        goto after_6;
    // 0x800EA6F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x800EA6F8: beq         $v0, $zero, L_800EA840
    if (ctx->r2 == 0) {
        // 0x800EA6FC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800EA840;
    }
    // 0x800EA6FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EA700: lh          $t4, 0x4($s4)
    ctx->r12 = MEM_H(ctx->r20, 0X4);
    // 0x800EA704: lbu         $t2, 0xB($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0XB);
    // 0x800EA708: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EA70C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x800EA710: ori         $t3, $t2, 0x8
    ctx->r11 = ctx->r10 | 0X8;
    // 0x800EA714: sb          $t3, 0xB($s4)
    MEM_B(0XB, ctx->r20) = ctx->r11;
    // 0x800EA718: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EA71C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EA720: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x800EA724: lh          $t5, 0x6($s4)
    ctx->r13 = MEM_H(ctx->r20, 0X6);
    // 0x800EA728: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800EA72C: nop

    // 0x800EA730: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EA734: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x800EA738: lh          $t6, 0x8($s4)
    ctx->r14 = MEM_H(ctx->r20, 0X8);
    // 0x800EA73C: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x800EA740: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800EA744: nop

    // 0x800EA748: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EA74C: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x800EA750: lbu         $t7, 0x2($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X2);
    // 0x800EA754: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800EA758: bgez        $t7, L_800EA76C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800EA75C: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800EA76C;
    }
    // 0x800EA75C: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EA760: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EA764: nop

    // 0x800EA768: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_800EA76C:
    // 0x800EA76C: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800EA770: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EA774: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x800EA778: lbu         $t8, 0x3($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X3);
    // 0x800EA77C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800EA780: bgez        $t8, L_800EA794
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800EA784: cvt.s.w     $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800EA794;
    }
    // 0x800EA784: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EA788: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EA78C: nop

    // 0x800EA790: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
L_800EA794:
    // 0x800EA794: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x800EA798: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EA79C: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x800EA7A0: lbu         $t9, 0xA($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0XA);
    // 0x800EA7A4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800EA7A8: bgez        $t9, L_800EA7BC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800EA7AC: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800EA7BC;
    }
    // 0x800EA7AC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EA7B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800EA7B4: nop

    // 0x800EA7B8: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_800EA7BC:
    // 0x800EA7BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EA7C0: lwc1        $f16, 0x5E50($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5E50);
    // 0x800EA7C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800EA7C8: mul.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800EA7CC: jal         0x800B2840
    // 0x800EA7D0: nop

    func_800B2840(rdram, ctx);
        goto after_7;
    // 0x800EA7D0: nop

    after_7:
    // 0x800EA7D4: jal         0x800B2354
    // 0x800EA7D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2354(rdram, ctx);
        goto after_8;
    // 0x800EA7D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x800EA7DC: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800EA7E0: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x800EA7E4: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x800EA7E8: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x800EA7EC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x800EA7F0: jal         0x800AAEF4
    // 0x800EA7F4: nop

    func_800AAEF4(rdram, ctx);
        goto after_9;
    // 0x800EA7F4: nop

    after_9:
    // 0x800EA7F8: beq         $v0, $zero, L_800EA840
    if (ctx->r2 == 0) {
        // 0x800EA7FC: nop
    
            goto L_800EA840;
    }
    // 0x800EA7FC: nop

    // 0x800EA800: jal         0x800B2840
    // 0x800EA804: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800B2840(rdram, ctx);
        goto after_10;
    // 0x800EA804: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_10:
    // 0x800EA808: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x800EA80C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800EA810: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800EA814: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x800EA818: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    // 0x800EA81C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x800EA820: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x800EA824: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x800EA828: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x800EA82C: jal         0x800AB868
    // 0x800EA830: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_800AB868(rdram, ctx);
        goto after_11;
    // 0x800EA830: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_11:
    // 0x800EA834: beq         $v0, $zero, L_800EA840
    if (ctx->r2 == 0) {
        // 0x800EA838: nop
    
            goto L_800EA840;
    }
    // 0x800EA838: nop

    // 0x800EA83C: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
L_800EA840:
    // 0x800EA840: beql        $s2, $zero, L_800EA9E4
    if (ctx->r18 == 0) {
        // 0x800EA844: lw          $t2, 0xB0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XB0);
            goto L_800EA9E4;
    }
    goto skip_2;
    // 0x800EA844: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    skip_2:
    // 0x800EA848: jal         0x800BFC74
    // 0x800EA84C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800BFC74(rdram, ctx);
        goto after_12;
    // 0x800EA84C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x800EA850: b           L_800EA9E4
    // 0x800EA854: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
        goto L_800EA9E4;
    // 0x800EA854: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
L_800EA858:
    // 0x800EA858: bgez        $t2, L_800EA9E0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800EA85C: lw          $s3, 0x0($s4)
        ctx->r19 = MEM_W(ctx->r20, 0X0);
            goto L_800EA9E0;
    }
    // 0x800EA85C: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x800EA860: lhu         $t3, 0x18($s3)
    ctx->r11 = MEM_HU(ctx->r19, 0X18);
    // 0x800EA864: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800EA868: beql        $t4, $zero, L_800EA9E4
    if (ctx->r12 == 0) {
        // 0x800EA86C: lw          $t2, 0xB0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XB0);
            goto L_800EA9E4;
    }
    goto skip_3;
    // 0x800EA86C: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    skip_3:
    // 0x800EA870: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x800EA874: beq         $v0, $zero, L_800EA8BC
    if (ctx->r2 == 0) {
        // 0x800EA878: nop
    
            goto L_800EA8BC;
    }
    // 0x800EA878: nop

    // 0x800EA87C: jalr        $v0
    // 0x800EA880: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x800EA880: nop

    after_13:
    // 0x800EA884: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x800EA888: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800EA88C: beq         $t5, $zero, L_800EA8BC
    if (ctx->r13 == 0) {
        // 0x800EA890: nop
    
            goto L_800EA8BC;
    }
    // 0x800EA890: nop

    // 0x800EA894: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x800EA898: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800EA89C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800EA8A0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800EA8A4: jalr        $t9
    // 0x800EA8A8: lw          $a3, 0xCC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XCC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x800EA8A8: lw          $a3, 0xCC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XCC);
    after_14:
    // 0x800EA8AC: beql        $v0, $zero, L_800EA9E4
    if (ctx->r2 == 0) {
        // 0x800EA8B0: lw          $t2, 0xB0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XB0);
            goto L_800EA9E4;
    }
    goto skip_4;
    // 0x800EA8B0: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    skip_4:
    // 0x800EA8B4: b           L_800EA9E0
    // 0x800EA8B8: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
        goto L_800EA9E0;
    // 0x800EA8B8: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
L_800EA8BC:
    // 0x800EA8BC: jal         0x80106790
    // 0x800EA8C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80106790(rdram, ctx);
        goto after_15;
    // 0x800EA8C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_15:
    // 0x800EA8C4: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x800EA8C8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800EA8CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800EA8D0: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x800EA8D4: bltz        $t8, L_800EA9E0
    if (SIGNED(ctx->r24) < 0) {
        // 0x800EA8D8: or          $a1, $s6, $zero
        ctx->r5 = ctx->r22 | 0;
            goto L_800EA9E0;
    }
    // 0x800EA8D8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800EA8DC: jal         0x800EB350
    // 0x800EA8E0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_800EB350(rdram, ctx);
        goto after_16;
    // 0x800EA8E0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_16:
    // 0x800EA8E4: bnel        $v0, $zero, L_800EA9E4
    if (ctx->r2 != 0) {
        // 0x800EA8E8: lw          $t2, 0xB0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XB0);
            goto L_800EA9E4;
    }
    goto skip_5;
    // 0x800EA8E8: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    skip_5:
    // 0x800EA8EC: jal         0x800CB854
    // 0x800EA8F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_17;
    // 0x800EA8F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x800EA8F4: bne         $v0, $fp, L_800EA904
    if (ctx->r2 != ctx->r30) {
        // 0x800EA8F8: nop
    
            goto L_800EA904;
    }
    // 0x800EA8F8: nop

    // 0x800EA8FC: jal         0x80103508
    // 0x800EA900: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80103508(rdram, ctx);
        goto after_18;
    // 0x800EA900: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
L_800EA904:
    // 0x800EA904: jal         0x80103AA0
    // 0x800EA908: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80103AA0(rdram, ctx);
        goto after_19;
    // 0x800EA908: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_19:
    // 0x800EA90C: beq         $v0, $zero, L_800EA9E0
    if (ctx->r2 == 0) {
        // 0x800EA910: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_800EA9E0;
    }
    // 0x800EA910: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EA914: jal         0x800B2720
    // 0x800EA918: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2720(rdram, ctx);
        goto after_20;
    // 0x800EA918: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_20:
    // 0x800EA91C: beq         $v0, $zero, L_800EA9D0
    if (ctx->r2 == 0) {
        // 0x800EA920: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800EA9D0;
    }
    // 0x800EA920: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EA924: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800EA928: jal         0x80103CDC
    // 0x800EA92C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80103CDC(rdram, ctx);
        goto after_21;
    // 0x800EA92C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_21:
    // 0x800EA930: lwc1        $f4, 0x38($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X38);
    // 0x800EA934: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x800EA938: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x800EA93C: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x800EA940: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x800EA944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800EA948: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800EA94C: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x800EA950: addiu       $a3, $s1, 0x44
    ctx->r7 = ADD32(ctx->r17, 0X44);
    // 0x800EA954: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EA958: jal         0x800AB868
    // 0x800EA95C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_800AB868(rdram, ctx);
        goto after_22;
    // 0x800EA95C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_22:
    // 0x800EA960: beq         $v0, $zero, L_800EA988
    if (ctx->r2 == 0) {
        // 0x800EA964: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800EA988;
    }
    // 0x800EA964: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EA968: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EA96C: lw          $v0, 0x2DD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2DD0);
    // 0x800EA970: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800EA974: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800EA978: beq         $v0, $zero, L_800EA988
    if (ctx->r2 == 0) {
        // 0x800EA97C: nop
    
            goto L_800EA988;
    }
    // 0x800EA97C: nop

    // 0x800EA980: jalr        $v0
    // 0x800EA984: lw          $a1, 0x2DD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2DD4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_23;
    // 0x800EA984: lw          $a1, 0x2DD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2DD4);
    after_23:
L_800EA988:
    // 0x800EA988: beq         $s0, $zero, L_800EA9C4
    if (ctx->r16 == 0) {
        // 0x800EA98C: nop
    
            goto L_800EA9C4;
    }
    // 0x800EA98C: nop

    // 0x800EA990: jal         0x800CB854
    // 0x800EA994: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    func_800CB854(rdram, ctx);
        goto after_24;
    // 0x800EA994: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    after_24:
    // 0x800EA998: bne         $v0, $fp, L_800EA9C4
    if (ctx->r2 != ctx->r30) {
        // 0x800EA99C: nop
    
            goto L_800EA9C4;
    }
    // 0x800EA99C: nop

    // 0x800EA9A0: jal         0x801039E4
    // 0x800EA9A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_801039E4(rdram, ctx);
        goto after_25;
    // 0x800EA9A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_25:
    // 0x800EA9A8: lhu         $t1, 0x80($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X80);
    // 0x800EA9AC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x800EA9B0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800EA9B4: beq         $t1, $zero, L_800EA9C4
    if (ctx->r9 == 0) {
        // 0x800EA9B8: or          $a2, $s5, $zero
        ctx->r6 = ctx->r21 | 0;
            goto L_800EA9C4;
    }
    // 0x800EA9B8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800EA9BC: jal         0x800EA400
    // 0x800EA9C0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_800EA400(rdram, ctx);
        goto after_26;
    // 0x800EA9C0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_26:
L_800EA9C4:
    // 0x800EA9C4: beq         $s0, $zero, L_800EA9D0
    if (ctx->r16 == 0) {
        // 0x800EA9C8: nop
    
            goto L_800EA9D0;
    }
    // 0x800EA9C8: nop

    // 0x800EA9CC: sw          $s0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r16;
L_800EA9D0:
    // 0x800EA9D0: beql        $s2, $zero, L_800EA9E4
    if (ctx->r18 == 0) {
        // 0x800EA9D4: lw          $t2, 0xB0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XB0);
            goto L_800EA9E4;
    }
    goto skip_6;
    // 0x800EA9D4: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    skip_6:
    // 0x800EA9D8: jal         0x800D62E4
    // 0x800EA9DC: lhu         $a0, 0x14($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X14);
    func_800D62E4(rdram, ctx);
        goto after_27;
    // 0x800EA9DC: lhu         $a0, 0x14($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X14);
    after_27:
L_800EA9E0:
    // 0x800EA9E0: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
L_800EA9E4:
    // 0x800EA9E4: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x800EA9E8: sltu        $at, $s4, $t2
    ctx->r1 = ctx->r20 < ctx->r10 ? 1 : 0;
    // 0x800EA9EC: bnel        $at, $zero, L_800EA694
    if (ctx->r1 != 0) {
        // 0x800EA9F0: lw          $v0, 0x8($s4)
        ctx->r2 = MEM_W(ctx->r20, 0X8);
            goto L_800EA694;
    }
    goto skip_7;
    // 0x800EA9F0: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    skip_7:
L_800EA9F4:
    // 0x800EA9F4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x800EA9F8: lw          $v0, 0xBC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XBC);
    // 0x800EA9FC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x800EAA00: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x800EAA04: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x800EAA08: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x800EAA0C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x800EAA10: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x800EAA14: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x800EAA18: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x800EAA1C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x800EAA20: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x800EAA24: jr          $ra
    // 0x800EAA28: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x800EAA28: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_800EAA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EAA2C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x800EAA30: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x800EAA34: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x800EAA38: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x800EAA3C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x800EAA40: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x800EAA44: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x800EAA48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800EAA4C: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x800EAA50: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x800EAA54: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x800EAA58: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x800EAA5C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x800EAA60: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x800EAA64: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x800EAA68: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x800EAA6C: jal         0x800E9E88
    // 0x800EAA70: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    func_800E9E88(rdram, ctx);
        goto after_0;
    // 0x800EAA70: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    after_0:
    // 0x800EAA74: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800EAA78: jal         0x800E9EB4
    // 0x800EAA7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E9EB4(rdram, ctx);
        goto after_1;
    // 0x800EAA7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800EAA80: sltu        $at, $s4, $v0
    ctx->r1 = ctx->r20 < ctx->r2 ? 1 : 0;
    // 0x800EAA84: beq         $at, $zero, L_800EADC4
    if (ctx->r1 == 0) {
        // 0x800EAA88: sw          $v0, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->r2;
            goto L_800EADC4;
    }
    // 0x800EAA88: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x800EAA8C: lw          $fp, 0xC8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC8);
    // 0x800EAA90: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
L_800EAA94:
    // 0x800EAA94: sll         $t7, $v0, 27
    ctx->r15 = S32(ctx->r2 << 27);
    // 0x800EAA98: bgez        $t7, L_800EADB0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800EAA9C: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_800EADB0;
    }
    // 0x800EAA9C: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x800EAAA0: bne         $t8, $zero, L_800EAC2C
    if (ctx->r24 != 0) {
        // 0x800EAAA4: sll         $t1, $v0, 28
        ctx->r9 = S32(ctx->r2 << 28);
            goto L_800EAC2C;
    }
    // 0x800EAAA4: sll         $t1, $v0, 28
    ctx->r9 = S32(ctx->r2 << 28);
    // 0x800EAAA8: sll         $t0, $v0, 30
    ctx->r8 = S32(ctx->r2 << 30);
    // 0x800EAAAC: bgezl       $t0, L_800EADB4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800EAAB0: lw          $t4, 0xA8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XA8);
            goto L_800EADB4;
    }
    goto skip_0;
    // 0x800EAAB0: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    skip_0:
    // 0x800EAAB4: jal         0x80088C88
    // 0x800EAAB8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    _gsproplookup_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x800EAAB8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x800EAABC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800EAAC0: jal         0x800BFC54
    // 0x800EAAC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800BFC54(rdram, ctx);
        goto after_3;
    // 0x800EAAC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800EAAC8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EAACC: jal         0x800B2720
    // 0x800EAAD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2720(rdram, ctx);
        goto after_4;
    // 0x800EAAD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800EAAD4: beq         $v0, $zero, L_800EAC14
    if (ctx->r2 == 0) {
        // 0x800EAAD8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800EAC14;
    }
    // 0x800EAAD8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800EAADC: lh          $t1, 0x4($s4)
    ctx->r9 = MEM_H(ctx->r20, 0X4);
    // 0x800EAAE0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EAAE4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800EAAE8: nop

    // 0x800EAAEC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EAAF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EAAF4: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x800EAAF8: lh          $t2, 0x6($s4)
    ctx->r10 = MEM_H(ctx->r20, 0X6);
    // 0x800EAAFC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800EAB00: nop

    // 0x800EAB04: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EAB08: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x800EAB0C: lh          $t3, 0x8($s4)
    ctx->r11 = MEM_H(ctx->r20, 0X8);
    // 0x800EAB10: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x800EAB14: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800EAB18: nop

    // 0x800EAB1C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EAB20: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x800EAB24: lbu         $t4, 0x2($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X2);
    // 0x800EAB28: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x800EAB2C: bgez        $t4, L_800EAB40
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800EAB30: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800EAB40;
    }
    // 0x800EAB30: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EAB34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EAB38: nop

    // 0x800EAB3C: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_800EAB40:
    // 0x800EAB40: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800EAB44: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EAB48: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x800EAB4C: lbu         $t5, 0x3($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X3);
    // 0x800EAB50: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x800EAB54: bgez        $t5, L_800EAB68
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800EAB58: cvt.s.w     $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800EAB68;
    }
    // 0x800EAB58: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EAB5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EAB60: nop

    // 0x800EAB64: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
L_800EAB68:
    // 0x800EAB68: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x800EAB6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800EAB70: jal         0x800B2840
    // 0x800EAB74: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    func_800B2840(rdram, ctx);
        goto after_5;
    // 0x800EAB74: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x800EAB78: lbu         $t6, 0xA($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0XA);
    // 0x800EAB7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800EAB80: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800EAB84: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800EAB88: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x800EAB8C: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    // 0x800EAB90: bgez        $t6, L_800EABA8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800EAB94: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800EABA8;
    }
    // 0x800EAB94: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EAB98: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EAB9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800EABA0: nop

    // 0x800EABA4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_800EABA8:
    // 0x800EABA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EABAC: lwc1        $f16, 0x5E54($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5E54);
    // 0x800EABB0: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x800EABB4: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x800EABB8: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800EABBC: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x800EABC0: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x800EABC4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800EABC8: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x800EABCC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800EABD0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800EABD4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800EABD8: jal         0x800AC848
    // 0x800EABDC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_800AC848(rdram, ctx);
        goto after_6;
    // 0x800EABDC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_6:
    // 0x800EABE0: beq         $v0, $zero, L_800EAC08
    if (ctx->r2 == 0) {
        // 0x800EABE4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800EAC08;
    }
    // 0x800EABE4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EABE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EABEC: lw          $v0, 0x2DD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2DD0);
    // 0x800EABF0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800EABF4: beq         $v0, $zero, L_800EAC08
    if (ctx->r2 == 0) {
        // 0x800EABF8: nop
    
            goto L_800EAC08;
    }
    // 0x800EABF8: nop

    // 0x800EABFC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x800EAC00: jalr        $v0
    // 0x800EAC04: lw          $a1, 0x2DD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2DD4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x800EAC04: lw          $a1, 0x2DD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2DD4);
    after_7:
L_800EAC08:
    // 0x800EAC08: beq         $s0, $zero, L_800EAC14
    if (ctx->r16 == 0) {
        // 0x800EAC0C: nop
    
            goto L_800EAC14;
    }
    // 0x800EAC0C: nop

    // 0x800EAC10: or          $s7, $s0, $zero
    ctx->r23 = ctx->r16 | 0;
L_800EAC14:
    // 0x800EAC14: beql        $s2, $zero, L_800EADB4
    if (ctx->r18 == 0) {
        // 0x800EAC18: lw          $t4, 0xA8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XA8);
            goto L_800EADB4;
    }
    goto skip_1;
    // 0x800EAC18: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    skip_1:
    // 0x800EAC1C: jal         0x800BFC74
    // 0x800EAC20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800BFC74(rdram, ctx);
        goto after_8;
    // 0x800EAC20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_8:
    // 0x800EAC24: b           L_800EADB4
    // 0x800EAC28: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
        goto L_800EADB4;
    // 0x800EAC28: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
L_800EAC2C:
    // 0x800EAC2C: bgez        $t1, L_800EADB0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800EAC30: lw          $s3, 0x0($s4)
        ctx->r19 = MEM_W(ctx->r20, 0X0);
            goto L_800EADB0;
    }
    // 0x800EAC30: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x800EAC34: lhu         $t2, 0x18($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X18);
    // 0x800EAC38: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x800EAC3C: beql        $t3, $zero, L_800EADB4
    if (ctx->r11 == 0) {
        // 0x800EAC40: lw          $t4, 0xA8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XA8);
            goto L_800EADB4;
    }
    goto skip_2;
    // 0x800EAC40: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    skip_2:
    // 0x800EAC44: jal         0x80106790
    // 0x800EAC48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80106790(rdram, ctx);
        goto after_9;
    // 0x800EAC48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_9:
    // 0x800EAC4C: lw          $t4, 0x64($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X64);
    // 0x800EAC50: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EAC54: sll         $t6, $t4, 14
    ctx->r14 = S32(ctx->r12 << 14);
    // 0x800EAC58: bltzl       $t6, L_800EADB4
    if (SIGNED(ctx->r14) < 0) {
        // 0x800EAC5C: lw          $t4, 0xA8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XA8);
            goto L_800EADB4;
    }
    goto skip_3;
    // 0x800EAC5C: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    skip_3:
    // 0x800EAC60: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x800EAC64: beq         $v0, $zero, L_800EACBC
    if (ctx->r2 == 0) {
        // 0x800EAC68: nop
    
            goto L_800EACBC;
    }
    // 0x800EAC68: nop

    // 0x800EAC6C: jalr        $v0
    // 0x800EAC70: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x800EAC70: nop

    after_10:
    // 0x800EAC74: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x800EAC78: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800EAC7C: beq         $t7, $zero, L_800EACBC
    if (ctx->r15 == 0) {
        // 0x800EAC80: nop
    
            goto L_800EACBC;
    }
    // 0x800EAC80: nop

    // 0x800EAC84: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x800EAC88: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x800EAC8C: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x800EAC90: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800EAC94: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800EAC98: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800EAC9C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x800EACA0: lw          $a1, 0xBC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XBC);
    // 0x800EACA4: jalr        $t9
    // 0x800EACA8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x800EACA8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_11:
    // 0x800EACAC: beql        $v0, $zero, L_800EADB4
    if (ctx->r2 == 0) {
        // 0x800EACB0: lw          $t4, 0xA8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XA8);
            goto L_800EADB4;
    }
    goto skip_4;
    // 0x800EACB0: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    skip_4:
    // 0x800EACB4: b           L_800EADB0
    // 0x800EACB8: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
        goto L_800EADB0;
    // 0x800EACB8: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
L_800EACBC:
    // 0x800EACBC: jal         0x80103328
    // 0x800EACC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103328(rdram, ctx);
        goto after_12;
    // 0x800EACC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x800EACC4: addiu       $s5, $s0, 0x4
    ctx->r21 = ADD32(ctx->r16, 0X4);
    // 0x800EACC8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800EACCC: jal         0x800EEAD4
    // 0x800EACD0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_13;
    // 0x800EACD0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_13:
    // 0x800EACD4: lhu         $t0, 0x6A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X6A);
    // 0x800EACD8: sub.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x800EACDC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EACE0: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800EACE4: bgez        $t0, L_800EACF8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800EACE8: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800EACF8;
    }
    // 0x800EACE8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EACEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EACF0: nop

    // 0x800EACF4: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_800EACF8:
    // 0x800EACF8: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800EACFC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800EAD00: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x800EAD04: nop

    // 0x800EAD08: bc1tl       L_800EADB4
    if (c1cs) {
        // 0x800EAD0C: lw          $t4, 0xA8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XA8);
            goto L_800EADB4;
    }
    goto skip_5;
    // 0x800EAD0C: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    skip_5:
    // 0x800EAD10: jal         0x800CB854
    // 0x800EAD14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_14;
    // 0x800EAD14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x800EAD18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EAD1C: bne         $v0, $at, L_800EAD2C
    if (ctx->r2 != ctx->r1) {
        // 0x800EAD20: nop
    
            goto L_800EAD2C;
    }
    // 0x800EAD20: nop

    // 0x800EAD24: jal         0x80103508
    // 0x800EAD28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103508(rdram, ctx);
        goto after_15;
    // 0x800EAD28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
L_800EAD2C:
    // 0x800EAD2C: jal         0x80103AA0
    // 0x800EAD30: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80103AA0(rdram, ctx);
        goto after_16;
    // 0x800EAD30: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_16:
    // 0x800EAD34: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EAD38: jal         0x800B2720
    // 0x800EAD3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2720(rdram, ctx);
        goto after_17;
    // 0x800EAD3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_17:
    // 0x800EAD40: beq         $v0, $zero, L_800EADA0
    if (ctx->r2 == 0) {
        // 0x800EAD44: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800EADA0;
    }
    // 0x800EAD44: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800EAD48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800EAD4C: jal         0x80103CDC
    // 0x800EAD50: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80103CDC(rdram, ctx);
        goto after_18;
    // 0x800EAD50: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_18:
    // 0x800EAD54: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800EAD58: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x800EAD5C: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x800EAD60: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x800EAD64: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x800EAD68: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800EAD6C: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x800EAD70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800EAD74: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800EAD78: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800EAD7C: addiu       $a3, $s0, 0x44
    ctx->r7 = ADD32(ctx->r16, 0X44);
    // 0x800EAD80: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800EAD84: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800EAD88: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x800EAD8C: jal         0x800AC848
    // 0x800EAD90: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    func_800AC848(rdram, ctx);
        goto after_19;
    // 0x800EAD90: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    after_19:
    // 0x800EAD94: beq         $v0, $zero, L_800EADA0
    if (ctx->r2 == 0) {
        // 0x800EAD98: nop
    
            goto L_800EADA0;
    }
    // 0x800EAD98: nop

    // 0x800EAD9C: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
L_800EADA0:
    // 0x800EADA0: beql        $s2, $zero, L_800EADB4
    if (ctx->r18 == 0) {
        // 0x800EADA4: lw          $t4, 0xA8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XA8);
            goto L_800EADB4;
    }
    goto skip_6;
    // 0x800EADA4: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    skip_6:
    // 0x800EADA8: jal         0x800D62E4
    // 0x800EADAC: lhu         $a0, 0x14($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X14);
    func_800D62E4(rdram, ctx);
        goto after_20;
    // 0x800EADAC: lhu         $a0, 0x14($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X14);
    after_20:
L_800EADB0:
    // 0x800EADB0: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
L_800EADB4:
    // 0x800EADB4: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x800EADB8: sltu        $at, $s4, $t4
    ctx->r1 = ctx->r20 < ctx->r12 ? 1 : 0;
    // 0x800EADBC: bnel        $at, $zero, L_800EAA94
    if (ctx->r1 != 0) {
        // 0x800EADC0: lw          $v0, 0x8($s4)
        ctx->r2 = MEM_W(ctx->r20, 0X8);
            goto L_800EAA94;
    }
    goto skip_7;
    // 0x800EADC0: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    skip_7:
L_800EADC4:
    // 0x800EADC4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x800EADC8: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x800EADCC: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x800EADD0: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x800EADD4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x800EADD8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x800EADDC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x800EADE0: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x800EADE4: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x800EADE8: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x800EADEC: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x800EADF0: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x800EADF4: jr          $ra
    // 0x800EADF8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x800EADF8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_800EADFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EADFC: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x800EAE00: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x800EAE04: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x800EAE08: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800EAE0C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x800EAE10: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x800EAE14: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800EAE18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800EAE1C: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x800EAE20: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x800EAE24: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x800EAE28: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x800EAE2C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x800EAE30: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800EAE34: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800EAE38: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x800EAE3C: jal         0x800E9E88
    // 0x800EAE40: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    func_800E9E88(rdram, ctx);
        goto after_0;
    // 0x800EAE40: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    after_0:
    // 0x800EAE44: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800EAE48: jal         0x800E9EB4
    // 0x800EAE4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E9EB4(rdram, ctx);
        goto after_1;
    // 0x800EAE4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800EAE50: sltu        $at, $s4, $v0
    ctx->r1 = ctx->r20 < ctx->r2 ? 1 : 0;
    // 0x800EAE54: beq         $at, $zero, L_800EB124
    if (ctx->r1 == 0) {
        // 0x800EAE58: sw          $v0, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r2;
            goto L_800EB124;
    }
    // 0x800EAE58: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x800EAE5C: lw          $s7, 0xC0($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XC0);
    // 0x800EAE60: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
L_800EAE64:
    // 0x800EAE64: sll         $t7, $v0, 27
    ctx->r15 = S32(ctx->r2 << 27);
    // 0x800EAE68: bgez        $t7, L_800EB110
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800EAE6C: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_800EB110;
    }
    // 0x800EAE6C: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x800EAE70: bne         $t8, $zero, L_800EAFAC
    if (ctx->r24 != 0) {
        // 0x800EAE74: sll         $t9, $v0, 28
        ctx->r25 = S32(ctx->r2 << 28);
            goto L_800EAFAC;
    }
    // 0x800EAE74: sll         $t9, $v0, 28
    ctx->r25 = S32(ctx->r2 << 28);
    // 0x800EAE78: sll         $t0, $v0, 30
    ctx->r8 = S32(ctx->r2 << 30);
    // 0x800EAE7C: bgezl       $t0, L_800EB114
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800EAE80: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_800EB114;
    }
    goto skip_0;
    // 0x800EAE80: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_0:
    // 0x800EAE84: jal         0x80088C88
    // 0x800EAE88: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    _gsproplookup_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x800EAE88: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x800EAE8C: jal         0x800BFC54
    // 0x800EAE90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800BFC54(rdram, ctx);
        goto after_3;
    // 0x800EAE90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800EAE94: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EAE98: jal         0x800B2720
    // 0x800EAE9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2720(rdram, ctx);
        goto after_4;
    // 0x800EAE9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800EAEA0: beq         $v0, $zero, L_800EB110
    if (ctx->r2 == 0) {
        // 0x800EAEA4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800EB110;
    }
    // 0x800EAEA4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800EAEA8: lh          $t1, 0x4($s4)
    ctx->r9 = MEM_H(ctx->r20, 0X4);
    // 0x800EAEAC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EAEB0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800EAEB4: nop

    // 0x800EAEB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EAEBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EAEC0: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x800EAEC4: lh          $t2, 0x6($s4)
    ctx->r10 = MEM_H(ctx->r20, 0X6);
    // 0x800EAEC8: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800EAECC: nop

    // 0x800EAED0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EAED4: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x800EAED8: lh          $t3, 0x8($s4)
    ctx->r11 = MEM_H(ctx->r20, 0X8);
    // 0x800EAEDC: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x800EAEE0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800EAEE4: nop

    // 0x800EAEE8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EAEEC: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x800EAEF0: lbu         $t4, 0x2($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X2);
    // 0x800EAEF4: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x800EAEF8: bgez        $t4, L_800EAF0C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800EAEFC: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800EAF0C;
    }
    // 0x800EAEFC: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EAF00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EAF04: nop

    // 0x800EAF08: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_800EAF0C:
    // 0x800EAF0C: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800EAF10: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EAF14: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x800EAF18: lbu         $t5, 0x3($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X3);
    // 0x800EAF1C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x800EAF20: bgez        $t5, L_800EAF34
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800EAF24: cvt.s.w     $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800EAF34;
    }
    // 0x800EAF24: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EAF28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EAF2C: nop

    // 0x800EAF30: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
L_800EAF34:
    // 0x800EAF34: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x800EAF38: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800EAF3C: jal         0x800B2840
    // 0x800EAF40: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    func_800B2840(rdram, ctx);
        goto after_5;
    // 0x800EAF40: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x800EAF44: lbu         $t6, 0xA($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0XA);
    // 0x800EAF48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800EAF4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800EAF50: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800EAF54: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x800EAF58: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    // 0x800EAF5C: bgez        $t6, L_800EAF74
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800EAF60: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800EAF74;
    }
    // 0x800EAF60: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EAF64: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EAF68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800EAF6C: nop

    // 0x800EAF70: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_800EAF74:
    // 0x800EAF74: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EAF78: lwc1        $f16, 0x5E58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5E58);
    // 0x800EAF7C: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x800EAF80: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x800EAF84: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800EAF88: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800EAF8C: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x800EAF90: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800EAF94: jal         0x800AD1AC
    // 0x800EAF98: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800AD1AC(rdram, ctx);
        goto after_6;
    // 0x800EAF98: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800EAF9C: beql        $v0, $zero, L_800EB114
    if (ctx->r2 == 0) {
        // 0x800EAFA0: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_800EB114;
    }
    goto skip_1;
    // 0x800EAFA0: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_1:
    // 0x800EAFA4: b           L_800EB110
    // 0x800EAFA8: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
        goto L_800EB110;
    // 0x800EAFA8: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
L_800EAFAC:
    // 0x800EAFAC: bgez        $t9, L_800EB110
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800EAFB0: lw          $s3, 0x0($s4)
        ctx->r19 = MEM_W(ctx->r20, 0X0);
            goto L_800EB110;
    }
    // 0x800EAFB0: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x800EAFB4: lhu         $t0, 0x18($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X18);
    // 0x800EAFB8: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800EAFBC: beql        $t1, $zero, L_800EB114
    if (ctx->r9 == 0) {
        // 0x800EAFC0: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_800EB114;
    }
    goto skip_2;
    // 0x800EAFC0: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_2:
    // 0x800EAFC4: jal         0x80106790
    // 0x800EAFC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80106790(rdram, ctx);
        goto after_7;
    // 0x800EAFC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x800EAFCC: lw          $t2, 0x64($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X64);
    // 0x800EAFD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EAFD4: sll         $t4, $t2, 14
    ctx->r12 = S32(ctx->r10 << 14);
    // 0x800EAFD8: bltzl       $t4, L_800EB114
    if (SIGNED(ctx->r12) < 0) {
        // 0x800EAFDC: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_800EB114;
    }
    goto skip_3;
    // 0x800EAFDC: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_3:
    // 0x800EAFE0: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x800EAFE4: beq         $v0, $zero, L_800EB02C
    if (ctx->r2 == 0) {
        // 0x800EAFE8: nop
    
            goto L_800EB02C;
    }
    // 0x800EAFE8: nop

    // 0x800EAFEC: jalr        $v0
    // 0x800EAFF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x800EAFF0: nop

    after_8:
    // 0x800EAFF4: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x800EAFF8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800EAFFC: beq         $t5, $zero, L_800EB02C
    if (ctx->r13 == 0) {
        // 0x800EB000: nop
    
            goto L_800EB02C;
    }
    // 0x800EB000: nop

    // 0x800EB004: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x800EB008: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x800EB00C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800EB010: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800EB014: jalr        $t9
    // 0x800EB018: lw          $a3, 0xBC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XBC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x800EB018: lw          $a3, 0xBC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XBC);
    after_9:
    // 0x800EB01C: beql        $v0, $zero, L_800EB114
    if (ctx->r2 == 0) {
        // 0x800EB020: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_800EB114;
    }
    goto skip_4;
    // 0x800EB020: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_4:
    // 0x800EB024: b           L_800EB110
    // 0x800EB028: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
        goto L_800EB110;
    // 0x800EB028: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
L_800EB02C:
    // 0x800EB02C: jal         0x80103328
    // 0x800EB030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103328(rdram, ctx);
        goto after_10;
    // 0x800EB030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800EB034: addiu       $s5, $s0, 0x4
    ctx->r21 = ADD32(ctx->r16, 0X4);
    // 0x800EB038: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800EB03C: jal         0x800EEAD4
    // 0x800EB040: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_800EEAD4(rdram, ctx);
        goto after_11;
    // 0x800EB040: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_11:
    // 0x800EB044: lhu         $t6, 0x6A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6A);
    // 0x800EB048: sub.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x800EB04C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EB050: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800EB054: bgez        $t6, L_800EB068
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800EB058: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800EB068;
    }
    // 0x800EB058: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EB05C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EB060: nop

    // 0x800EB064: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_800EB068:
    // 0x800EB068: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800EB06C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800EB070: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x800EB074: nop

    // 0x800EB078: bc1tl       L_800EB114
    if (c1cs) {
        // 0x800EB07C: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_800EB114;
    }
    goto skip_5;
    // 0x800EB07C: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_5:
    // 0x800EB080: jal         0x800CB854
    // 0x800EB084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_12;
    // 0x800EB084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x800EB088: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EB08C: bne         $v0, $at, L_800EB09C
    if (ctx->r2 != ctx->r1) {
        // 0x800EB090: nop
    
            goto L_800EB09C;
    }
    // 0x800EB090: nop

    // 0x800EB094: jal         0x80103508
    // 0x800EB098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103508(rdram, ctx);
        goto after_13;
    // 0x800EB098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_800EB09C:
    // 0x800EB09C: jal         0x80103AA0
    // 0x800EB0A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80103AA0(rdram, ctx);
        goto after_14;
    // 0x800EB0A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_14:
    // 0x800EB0A4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EB0A8: jal         0x800B2720
    // 0x800EB0AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2720(rdram, ctx);
        goto after_15;
    // 0x800EB0AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x800EB0B0: beq         $v0, $zero, L_800EB100
    if (ctx->r2 == 0) {
        // 0x800EB0B4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_800EB100;
    }
    // 0x800EB0B4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800EB0B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800EB0BC: jal         0x80103CDC
    // 0x800EB0C0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80103CDC(rdram, ctx);
        goto after_16;
    // 0x800EB0C0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_16:
    // 0x800EB0C4: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800EB0C8: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x800EB0CC: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x800EB0D0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800EB0D4: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x800EB0D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800EB0DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800EB0E0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800EB0E4: addiu       $a3, $s0, 0x44
    ctx->r7 = ADD32(ctx->r16, 0X44);
    // 0x800EB0E8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800EB0EC: jal         0x800AD1AC
    // 0x800EB0F0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_800AD1AC(rdram, ctx);
        goto after_17;
    // 0x800EB0F0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_17:
    // 0x800EB0F4: beq         $v0, $zero, L_800EB100
    if (ctx->r2 == 0) {
        // 0x800EB0F8: nop
    
            goto L_800EB100;
    }
    // 0x800EB0F8: nop

    // 0x800EB0FC: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
L_800EB100:
    // 0x800EB100: beql        $s2, $zero, L_800EB114
    if (ctx->r18 == 0) {
        // 0x800EB104: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_800EB114;
    }
    goto skip_6;
    // 0x800EB104: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_6:
    // 0x800EB108: jal         0x800D62E4
    // 0x800EB10C: lhu         $a0, 0x14($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X14);
    func_800D62E4(rdram, ctx);
        goto after_18;
    // 0x800EB10C: lhu         $a0, 0x14($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X14);
    after_18:
L_800EB110:
    // 0x800EB110: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
L_800EB114:
    // 0x800EB114: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x800EB118: sltu        $at, $s4, $t8
    ctx->r1 = ctx->r20 < ctx->r24 ? 1 : 0;
    // 0x800EB11C: bnel        $at, $zero, L_800EAE64
    if (ctx->r1 != 0) {
        // 0x800EB120: lw          $v0, 0x8($s4)
        ctx->r2 = MEM_W(ctx->r20, 0X8);
            goto L_800EAE64;
    }
    goto skip_7;
    // 0x800EB120: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    skip_7:
L_800EB124:
    // 0x800EB124: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x800EB128: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
    // 0x800EB12C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x800EB130: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x800EB134: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x800EB138: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x800EB13C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x800EB140: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x800EB144: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x800EB148: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x800EB14C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x800EB150: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x800EB154: jr          $ra
    // 0x800EB158: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x800EB158: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_800EB15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB15C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EB160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EB164: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x800EB168: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800EB16C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800EB170: beql        $t7, $zero, L_800EB184
    if (ctx->r15 == 0) {
        // 0x800EB174: lw          $t8, 0x24($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X24);
            goto L_800EB184;
    }
    goto skip_0;
    // 0x800EB174: lw          $t8, 0x24($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X24);
    skip_0:
    // 0x800EB178: b           L_800EB200
    // 0x800EB17C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800EB200;
    // 0x800EB17C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800EB180: lw          $t8, 0x24($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X24);
L_800EB184:
    // 0x800EB184: srl         $t9, $t8, 22
    ctx->r25 = S32(U32(ctx->r24) >> 22);
    // 0x800EB188: bne         $t9, $zero, L_800EB198
    if (ctx->r25 != 0) {
        // 0x800EB18C: nop
    
            goto L_800EB198;
    }
    // 0x800EB18C: nop

    // 0x800EB190: b           L_800EB200
    // 0x800EB194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800EB200;
    // 0x800EB194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EB198:
    // 0x800EB198: jal         0x800D3948
    // 0x800EB19C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800D3948(rdram, ctx);
        goto after_0;
    // 0x800EB19C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x800EB1A0: bne         $v0, $zero, L_800EB1FC
    if (ctx->r2 != 0) {
        // 0x800EB1A4: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_800EB1FC;
    }
    // 0x800EB1A4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800EB1A8: jal         0x800F54E4
    // 0x800EB1AC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_1;
    // 0x800EB1AC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x800EB1B0: jal         0x800F6774
    // 0x800EB1B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6774(rdram, ctx);
        goto after_2;
    // 0x800EB1B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800EB1B8: bne         $v0, $zero, L_800EB1FC
    if (ctx->r2 != 0) {
        // 0x800EB1BC: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_800EB1FC;
    }
    // 0x800EB1BC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800EB1C0: lhu         $t0, 0x18($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X18);
    // 0x800EB1C4: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800EB1C8: beq         $t1, $zero, L_800EB1F4
    if (ctx->r9 == 0) {
        // 0x800EB1CC: nop
    
            goto L_800EB1F4;
    }
    // 0x800EB1CC: nop

    // 0x800EB1D0: jal         0x80106790
    // 0x800EB1D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80106790(rdram, ctx);
        goto after_3;
    // 0x800EB1D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x800EB1D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800EB1DC: jal         0x80102F74
    // 0x800EB1E0: lui         $a1, 0x8800
    ctx->r5 = S32(0X8800 << 16);
    func_80102F74(rdram, ctx);
        goto after_4;
    // 0x800EB1E0: lui         $a1, 0x8800
    ctx->r5 = S32(0X8800 << 16);
    after_4:
    // 0x800EB1E4: beq         $v0, $zero, L_800EB1F4
    if (ctx->r2 == 0) {
        // 0x800EB1E8: nop
    
            goto L_800EB1F4;
    }
    // 0x800EB1E8: nop

    // 0x800EB1EC: b           L_800EB200
    // 0x800EB1F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800EB200;
    // 0x800EB1F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EB1F4:
    // 0x800EB1F4: b           L_800EB200
    // 0x800EB1F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800EB200;
    // 0x800EB1F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800EB1FC:
    // 0x800EB1FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EB200:
    // 0x800EB200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EB204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EB208: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EB210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EB214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EB218: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800EB21C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800EB220: jal         0x800EB15C
    // 0x800EB224: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EB15C(rdram, ctx);
        goto after_0;
    // 0x800EB224: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800EB228: beq         $v0, $zero, L_800EB2CC
    if (ctx->r2 == 0) {
        // 0x800EB22C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800EB2CC;
    }
    // 0x800EB22C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800EB230: jal         0x800EC3C4
    // 0x800EB234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EC3C4(rdram, ctx);
        goto after_1;
    // 0x800EB234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x800EB238: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800EB23C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800EB240: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB244: beq         $a1, $zero, L_800EB268
    if (ctx->r5 == 0) {
        // 0x800EB248: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800EB268;
    }
    // 0x800EB248: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800EB24C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EB250: beq         $a1, $at, L_800EB28C
    if (ctx->r5 == ctx->r1) {
        // 0x800EB254: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800EB28C;
    }
    // 0x800EB254: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800EB258: beql        $a1, $at, L_800EB2B4
    if (ctx->r5 == ctx->r1) {
        // 0x800EB25C: lw          $t8, 0x8($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X8);
            goto L_800EB2B4;
    }
    goto skip_0;
    // 0x800EB25C: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x800EB260: b           L_800EB2D0
    // 0x800EB264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800EB2D0;
    // 0x800EB264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EB268:
    // 0x800EB268: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800EB26C: beql        $t6, $zero, L_800EB2D0
    if (ctx->r14 == 0) {
        // 0x800EB270: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EB2D0;
    }
    goto skip_1;
    // 0x800EB270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800EB274: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800EB278: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800EB27C: jalr        $t9
    // 0x800EB280: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x800EB280: nop

    after_2:
    // 0x800EB284: b           L_800EB2D0
    // 0x800EB288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800EB2D0;
    // 0x800EB288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EB28C:
    // 0x800EB28C: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x800EB290: beql        $t7, $zero, L_800EB2D0
    if (ctx->r15 == 0) {
        // 0x800EB294: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EB2D0;
    }
    goto skip_2;
    // 0x800EB294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800EB298: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x800EB29C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800EB2A0: jalr        $t9
    // 0x800EB2A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x800EB2A4: nop

    after_3:
    // 0x800EB2A8: b           L_800EB2D0
    // 0x800EB2AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800EB2D0;
    // 0x800EB2AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EB2B0: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
L_800EB2B4:
    // 0x800EB2B4: beql        $t8, $zero, L_800EB2D0
    if (ctx->r24 == 0) {
        // 0x800EB2B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EB2D0;
    }
    goto skip_3;
    // 0x800EB2B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x800EB2BC: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x800EB2C0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800EB2C4: jalr        $t9
    // 0x800EB2C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x800EB2C8: nop

    after_4:
L_800EB2CC:
    // 0x800EB2CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EB2D0:
    // 0x800EB2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EB2D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EB2DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB2DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EB2E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EB2E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800EB2E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800EB2EC: jal         0x800EB15C
    // 0x800EB2F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EB15C(rdram, ctx);
        goto after_0;
    // 0x800EB2F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800EB2F4: beq         $v0, $zero, L_800EB340
    if (ctx->r2 == 0) {
        // 0x800EB2F8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800EB340;
    }
    // 0x800EB2F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800EB2FC: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x800EB300: sll         $t8, $t6, 22
    ctx->r24 = S32(ctx->r14 << 22);
    // 0x800EB304: bgezl       $t8, L_800EB344
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800EB308: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EB344;
    }
    goto skip_0;
    // 0x800EB308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800EB30C: jal         0x800EC3C4
    // 0x800EB310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EC3C4(rdram, ctx);
        goto after_1;
    // 0x800EB310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x800EB314: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800EB318: beql        $a0, $zero, L_800EB344
    if (ctx->r4 == 0) {
        // 0x800EB31C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EB344;
    }
    goto skip_1;
    // 0x800EB31C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800EB320: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x800EB324: beql        $t9, $zero, L_800EB344
    if (ctx->r25 == 0) {
        // 0x800EB328: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EB344;
    }
    goto skip_2;
    // 0x800EB328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800EB32C: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x800EB330: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB334: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800EB338: jalr        $t9
    // 0x800EB33C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x800EB33C: nop

    after_2:
L_800EB340:
    // 0x800EB340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EB344:
    // 0x800EB344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EB348: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EB350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EB354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EB358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800EB35C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800EB360: jal         0x80103328
    // 0x800EB364: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80103328(rdram, ctx);
        goto after_0;
    // 0x800EB364: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800EB368: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800EB36C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EB370: lhu         $t6, 0x6A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6A);
    // 0x800EB374: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x800EB378: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800EB37C: bgez        $t6, L_800EB390
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800EB380: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800EB390;
    }
    // 0x800EB380: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EB384: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EB388: nop

    // 0x800EB38C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800EB390:
    // 0x800EB390: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
    // 0x800EB394: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EB398: lwc1        $f18, 0x5E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5E5C);
    // 0x800EB39C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800EB3A0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB3A4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x800EB3A8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800EB3AC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800EB3B0: jal         0x800AAEF4
    // 0x800EB3B4: nop

    func_800AAEF4(rdram, ctx);
        goto after_1;
    // 0x800EB3B4: nop

    after_1:
    // 0x800EB3B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EB3BC: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800EB3C0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800EB3C4: jr          $ra
    // 0x800EB3C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800EB3C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800EB3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB3D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800EB3D4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800EB3D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EB3DC: addiu       $t7, $t7, 0x2E80
    ctx->r15 = ADD32(ctx->r15, 0X2E80);
    // 0x800EB3E0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800EB3E4: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x800EB3E8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800EB3EC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800EB3F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EB3F4: bne         $t8, $zero, L_800EB410
    if (ctx->r24 != 0) {
        // 0x800EB3F8: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_800EB410;
    }
    // 0x800EB3F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800EB3FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x800EB400: jal         0x800B2D70
    // 0x800EB404: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_800B2D70(rdram, ctx);
        goto after_0;
    // 0x800EB404: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x800EB408: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800EB40C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_800EB410:
    // 0x800EB410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800EB414: jal         0x800B2974
    // 0x800EB418: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_800B2974(rdram, ctx);
        goto after_1;
    // 0x800EB418: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_1:
    // 0x800EB41C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800EB420: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800EB424: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800EB428: lh          $t1, 0x0($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X0);
    // 0x800EB42C: lh          $t9, 0x4($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X4);
    // 0x800EB430: lh          $t3, 0x2($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X2);
    // 0x800EB434: lh          $t2, 0x6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X6);
    // 0x800EB438: subu        $a3, $t9, $t1
    ctx->r7 = SUB32(ctx->r25, ctx->r9);
    // 0x800EB43C: multu       $a3, $a3
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EB440: subu        $v1, $t2, $t3
    ctx->r3 = SUB32(ctx->r10, ctx->r11);
    // 0x800EB444: lh          $t5, 0x4($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X4);
    // 0x800EB448: lh          $t4, 0x8($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X8);
    // 0x800EB44C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x800EB450: subu        $a1, $t4, $t5
    ctx->r5 = SUB32(ctx->r12, ctx->r13);
    // 0x800EB454: mflo        $t6
    ctx->r14 = lo;
    // 0x800EB458: nop

    // 0x800EB45C: nop

    // 0x800EB460: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EB464: mflo        $t7
    ctx->r15 = lo;
    // 0x800EB468: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800EB46C: nop

    // 0x800EB470: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EB474: mflo        $t9
    ctx->r25 = lo;
    // 0x800EB478: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x800EB47C: jal         0x800B28C4
    // 0x800EB480: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_800B28C4(rdram, ctx);
        goto after_2;
    // 0x800EB480: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_2:
    // 0x800EB484: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800EB488: jal         0x800B296C
    // 0x800EB48C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_800B296C(rdram, ctx);
        goto after_3;
    // 0x800EB48C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x800EB490: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800EB494: addiu       $a1, $v0, -0x10
    ctx->r5 = ADD32(ctx->r2, -0X10);
    // 0x800EB498: addiu       $a2, $v0, -0x8
    ctx->r6 = ADD32(ctx->r2, -0X8);
    // 0x800EB49C: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800EB4A0: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x800EB4A4: bne         $at, $zero, L_800EB4CC
    if (ctx->r1 != 0) {
        // 0x800EB4A8: lw          $a3, 0x3C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X3C);
            goto L_800EB4CC;
    }
    // 0x800EB4A8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800EB4AC: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
L_800EB4B0:
    // 0x800EB4B0: slt         $at, $a3, $t1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800EB4B4: bnel        $at, $zero, L_800EB4D0
    if (ctx->r1 != 0) {
        // 0x800EB4B8: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_800EB4D0;
    }
    goto skip_0;
    // 0x800EB4B8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    skip_0:
    // 0x800EB4BC: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x800EB4C0: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800EB4C4: beql        $at, $zero, L_800EB4B0
    if (ctx->r1 == 0) {
        // 0x800EB4C8: lw          $t1, 0x4($a1)
        ctx->r9 = MEM_W(ctx->r5, 0X4);
            goto L_800EB4B0;
    }
    goto skip_1;
    // 0x800EB4C8: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    skip_1:
L_800EB4CC:
    // 0x800EB4CC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_800EB4D0:
    // 0x800EB4D0: sltu        $at, $a1, $a2
    ctx->r1 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x800EB4D4: beq         $at, $zero, L_800EB4FC
    if (ctx->r1 == 0) {
        // 0x800EB4D8: addiu       $a0, $a1, 0x8
        ctx->r4 = ADD32(ctx->r5, 0X8);
            goto L_800EB4FC;
    }
    // 0x800EB4D8: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
    // 0x800EB4DC: subu        $a2, $t0, $a1
    ctx->r6 = SUB32(ctx->r8, ctx->r5);
    // 0x800EB4E0: sra         $t2, $a2, 3
    ctx->r10 = S32(SIGNED(ctx->r6) >> 3);
    // 0x800EB4E4: sll         $a2, $t2, 3
    ctx->r6 = S32(ctx->r10 << 3);
    // 0x800EB4E8: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x800EB4EC: jal         0x8001BC68
    // 0x800EB4F0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    aligned4_memmove(rdram, ctx);
        goto after_4;
    // 0x800EB4F0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_4:
    // 0x800EB4F4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800EB4F8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
L_800EB4FC:
    // 0x800EB4FC: sw          $a3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r7;
    // 0x800EB500: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800EB504: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x800EB508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB50C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EB510: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800EB514: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EB51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB51C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800EB520: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EB524: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800EB528: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800EB52C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800EB530: lw          $s0, 0x2E80($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2E80);
    // 0x800EB534: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800EB538: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800EB53C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800EB540: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800EB544: beq         $s0, $zero, L_800EB5C8
    if (ctx->r16 == 0) {
        // 0x800EB548: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_800EB5C8;
    }
    // 0x800EB548: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800EB54C: jal         0x800B28C4
    // 0x800EB550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800B28C4(rdram, ctx);
        goto after_0;
    // 0x800EB550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800EB554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800EB558: jal         0x800B296C
    // 0x800EB55C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x800EB55C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800EB560: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800EB564: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EB568: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800EB56C: beq         $v0, $v1, L_800EB5C8
    if (ctx->r2 == ctx->r3) {
        // 0x800EB570: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_800EB5C8;
    }
    // 0x800EB570: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800EB574: sh          $t8, 0x2E9C($at)
    MEM_H(0X2E9C, ctx->r1) = ctx->r24;
    // 0x800EB578: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800EB57C: beq         $at, $zero, L_800EB5C8
    if (ctx->r1 == 0) {
        // 0x800EB580: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_800EB5C8;
    }
    // 0x800EB580: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x800EB584: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
L_800EB588:
    // 0x800EB588: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800EB58C: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x800EB590: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800EB594: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800EB598: beq         $t0, $zero, L_800EB5B0
    if (ctx->r8 == 0) {
        // 0x800EB59C: nop
    
            goto L_800EB5B0;
    }
    // 0x800EB59C: nop

    // 0x800EB5A0: jal         0x800EC7D4
    // 0x800EB5A4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    func_800EC7D4(rdram, ctx);
        goto after_2;
    // 0x800EB5A4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    after_2:
    // 0x800EB5A8: b           L_800EB5BC
    // 0x800EB5AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_800EB5BC;
    // 0x800EB5AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_800EB5B0:
    // 0x800EB5B0: jal         0x80088C30
    // 0x800EB5B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    _gspropprop_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x800EB5B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x800EB5B8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_800EB5BC:
    // 0x800EB5BC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800EB5C0: bnel        $at, $zero, L_800EB588
    if (ctx->r1 != 0) {
        // 0x800EB5C4: lw          $a2, 0x0($s0)
        ctx->r6 = MEM_W(ctx->r16, 0X0);
            goto L_800EB588;
    }
    goto skip_0;
    // 0x800EB5C4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    skip_0:
L_800EB5C8:
    // 0x800EB5C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800EB5CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EB5D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB5D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800EB5D8: jr          $ra
    // 0x800EB5DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800EB5DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800EB5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB5E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800EB5E4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800EB5E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800EB5EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800EB5F0: addiu       $s4, $sp, 0x40
    ctx->r20 = ADD32(ctx->r29, 0X40);
    // 0x800EB5F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800EB5F8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800EB5FC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800EB600: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800EB604: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800EB608: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800EB60C: jal         0x800E3A30
    // 0x800EB610: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800E3A30(rdram, ctx);
        goto after_0;
    // 0x800EB610: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x800EB614: jal         0x800E9E88
    // 0x800EB618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E9E88(rdram, ctx);
        goto after_1;
    // 0x800EB618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800EB61C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EB620: jal         0x800E9EB4
    // 0x800EB624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800E9EB4(rdram, ctx);
        goto after_2;
    // 0x800EB624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800EB628: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x800EB62C: beq         $at, $zero, L_800EB6E8
    if (ctx->r1 == 0) {
        // 0x800EB630: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_800EB6E8;
    }
    // 0x800EB630: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x800EB634: addiu       $s3, $zero, 0x7
    ctx->r19 = ADD32(0, 0X7);
    // 0x800EB638: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
L_800EB63C:
    // 0x800EB63C: sll         $t7, $v0, 27
    ctx->r15 = S32(ctx->r2 << 27);
    // 0x800EB640: bgez        $t7, L_800EB6D8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800EB644: sll         $t9, $v0, 30
        ctx->r25 = S32(ctx->r2 << 30);
            goto L_800EB6D8;
    }
    // 0x800EB644: sll         $t9, $v0, 30
    ctx->r25 = S32(ctx->r2 << 30);
    // 0x800EB648: bltzl       $t9, L_800EB660
    if (SIGNED(ctx->r25) < 0) {
        // 0x800EB64C: andi        $t0, $v0, 0x1
        ctx->r8 = ctx->r2 & 0X1;
            goto L_800EB660;
    }
    goto skip_0;
    // 0x800EB64C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    skip_0:
    // 0x800EB650: jal         0x80088C28
    // 0x800EB654: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    _gspropprop_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x800EB654: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x800EB658: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x800EB65C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
L_800EB660:
    // 0x800EB660: beq         $t0, $zero, L_800EB6BC
    if (ctx->r8 == 0) {
        // 0x800EB664: sll         $t8, $v0, 28
        ctx->r24 = S32(ctx->r2 << 28);
            goto L_800EB6BC;
    }
    // 0x800EB664: sll         $t8, $v0, 28
    ctx->r24 = S32(ctx->r2 << 28);
    // 0x800EB668: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x800EB66C: jal         0x800EC800
    // 0x800EB670: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EC800(rdram, ctx);
        goto after_4;
    // 0x800EB670: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800EB674: beq         $v0, $zero, L_800EB6D8
    if (ctx->r2 == 0) {
        // 0x800EB678: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800EB6D8;
    }
    // 0x800EB678: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800EB67C: lw          $t1, 0x28($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X28);
L_800EB680:
    // 0x800EB680: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800EB684: sllv        $t5, $t4, $s0
    ctx->r13 = S32(ctx->r12 << (ctx->r16 & 31));
    // 0x800EB688: sll         $t2, $t1, 23
    ctx->r10 = S32(ctx->r9 << 23);
    // 0x800EB68C: srl         $t3, $t2, 24
    ctx->r11 = S32(U32(ctx->r10) >> 24);
    // 0x800EB690: and         $t6, $t3, $t5
    ctx->r14 = ctx->r11 & ctx->r13;
    // 0x800EB694: beq         $t6, $zero, L_800EB6A8
    if (ctx->r14 == 0) {
        // 0x800EB698: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800EB6A8;
    }
    // 0x800EB698: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800EB69C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800EB6A0: jal         0x800EB3D0
    // 0x800EB6A4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800EB3D0(rdram, ctx);
        goto after_5;
    // 0x800EB6A4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_5:
L_800EB6A8:
    // 0x800EB6A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800EB6AC: bnel        $s0, $s3, L_800EB680
    if (ctx->r16 != ctx->r19) {
        // 0x800EB6B0: lw          $t1, 0x28($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X28);
            goto L_800EB680;
    }
    goto skip_1;
    // 0x800EB6B0: lw          $t1, 0x28($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X28);
    skip_1:
    // 0x800EB6B4: b           L_800EB6DC
    // 0x800EB6B8: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
        goto L_800EB6DC;
    // 0x800EB6B8: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_800EB6BC:
    // 0x800EB6BC: bgez        $t8, L_800EB6CC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800EB6C0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800EB6CC;
    }
    // 0x800EB6C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800EB6C4: b           L_800EB6D0
    // 0x800EB6C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_800EB6D0;
    // 0x800EB6C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_800EB6CC:
    // 0x800EB6CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800EB6D0:
    // 0x800EB6D0: jal         0x800EB3D0
    // 0x800EB6D4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800EB3D0(rdram, ctx);
        goto after_6;
    // 0x800EB6D4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_6:
L_800EB6D8:
    // 0x800EB6D8: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_800EB6DC:
    // 0x800EB6DC: sltu        $at, $s2, $s5
    ctx->r1 = ctx->r18 < ctx->r21 ? 1 : 0;
    // 0x800EB6E0: bnel        $at, $zero, L_800EB63C
    if (ctx->r1 != 0) {
        // 0x800EB6E4: lw          $v0, 0x8($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X8);
            goto L_800EB63C;
    }
    goto skip_2;
    // 0x800EB6E4: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    skip_2:
L_800EB6E8:
    // 0x800EB6E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800EB6EC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800EB6F0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800EB6F4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB6F8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800EB6FC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800EB700: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800EB704: jr          $ra
    // 0x800EB708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800EB708: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800EB70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB70C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800EB710: addiu       $a0, $a0, 0x2E80
    ctx->r4 = ADD32(ctx->r4, 0X2E80);
    // 0x800EB714: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800EB718: sh          $t6, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r14;
    // 0x800EB71C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800EB720: sw          $zero, 0x2E80($at)
    MEM_W(0X2E80, ctx->r1) = 0;
    // 0x800EB724: sw          $zero, 0x2E84($at)
    MEM_W(0X2E84, ctx->r1) = 0;
    // 0x800EB728: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800EB72C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800EB730: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800EB734: sw          $zero, 0x2E88($at)
    MEM_W(0X2E88, ctx->r1) = 0;
    // 0x800EB738: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x800EB73C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800EB740: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x800EB744: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x800EB748: jr          $ra
    // 0x800EB74C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    return;
    // 0x800EB74C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
;}
RECOMP_FUNC void func_800EB750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB750: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EB754: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800EB758: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800EB75C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800EB760: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800EB764: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EB768: addiu       $s1, $s1, 0x2E9C
    ctx->r17 = ADD32(ctx->r17, 0X2E9C);
    // 0x800EB76C: addiu       $s0, $s0, 0x2E80
    ctx->r16 = ADD32(ctx->r16, 0X2E80);
    // 0x800EB770: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800EB774:
    // 0x800EB774: beql        $a0, $zero, L_800EB78C
    if (ctx->r4 == 0) {
        // 0x800EB778: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800EB78C;
    }
    goto skip_0;
    // 0x800EB778: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800EB77C: jal         0x800B2D28
    // 0x800EB780: nop

    func_800B2D28(rdram, ctx);
        goto after_0;
    // 0x800EB780: nop

    after_0:
    // 0x800EB784: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800EB788: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800EB78C:
    // 0x800EB78C: bnel        $s0, $s1, L_800EB774
    if (ctx->r16 != ctx->r17) {
        // 0x800EB790: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800EB774;
    }
    goto skip_1;
    // 0x800EB790: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x800EB794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB798: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800EB79C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800EB7A0: jr          $ra
    // 0x800EB7A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800EB7A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800EB7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB7A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EB7AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800EB7B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800EB7B4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800EB7B8: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800EB7BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EB7C0: addiu       $s1, $s1, 0x2E9C
    ctx->r17 = ADD32(ctx->r17, 0X2E9C);
    // 0x800EB7C4: addiu       $s0, $s0, 0x2E80
    ctx->r16 = ADD32(ctx->r16, 0X2E80);
    // 0x800EB7C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800EB7CC:
    // 0x800EB7CC: beql        $a0, $zero, L_800EB7E4
    if (ctx->r4 == 0) {
        // 0x800EB7D0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800EB7E4;
    }
    goto skip_0;
    // 0x800EB7D0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800EB7D4: jal         0x800B2F58
    // 0x800EB7D8: nop

    func_800B2F58(rdram, ctx);
        goto after_0;
    // 0x800EB7D8: nop

    after_0:
    // 0x800EB7DC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800EB7E0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800EB7E4:
    // 0x800EB7E4: bnel        $s0, $s1, L_800EB7CC
    if (ctx->r16 != ctx->r17) {
        // 0x800EB7E8: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800EB7CC;
    }
    goto skip_1;
    // 0x800EB7E8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x800EB7EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB7F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800EB7F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800EB7F8: jr          $ra
    // 0x800EB7FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800EB7FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800EB800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB800: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EB804: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800EB808: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800EB80C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800EB810: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800EB814: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EB818: addiu       $s1, $s1, 0x2E9C
    ctx->r17 = ADD32(ctx->r17, 0X2E9C);
    // 0x800EB81C: addiu       $s0, $s0, 0x2E80
    ctx->r16 = ADD32(ctx->r16, 0X2E80);
    // 0x800EB820: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800EB824:
    // 0x800EB824: beql        $a0, $zero, L_800EB838
    if (ctx->r4 == 0) {
        // 0x800EB828: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800EB838;
    }
    goto skip_0;
    // 0x800EB828: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800EB82C: jal         0x800B28B8
    // 0x800EB830: nop

    func_800B28B8(rdram, ctx);
        goto after_0;
    // 0x800EB830: nop

    after_0:
    // 0x800EB834: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800EB838:
    // 0x800EB838: bnel        $s0, $s1, L_800EB824
    if (ctx->r16 != ctx->r17) {
        // 0x800EB83C: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800EB824;
    }
    goto skip_1;
    // 0x800EB83C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x800EB840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB844: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800EB848: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800EB84C: jr          $ra
    // 0x800EB850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800EB850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800EB854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB854: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EB858: jr          $ra
    // 0x800EB85C: lh          $v0, 0x2E9C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2E9C);
    return;
    // 0x800EB85C: lh          $v0, 0x2E9C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2E9C);
;}
RECOMP_FUNC void func_800EB860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB860: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EB864: addiu       $v0, $v0, 0x2EA0
    ctx->r2 = ADD32(ctx->r2, 0X2EA0);
    // 0x800EB868: sw          $a0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r4;
    // 0x800EB86C: jr          $ra
    // 0x800EB870: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
    return;
    // 0x800EB870: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800EB874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB874: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800EB878: jr          $ra
    // 0x800EB87C: sw          $zero, 0x2EC0($at)
    MEM_W(0X2EC0, ctx->r1) = 0;
    return;
    // 0x800EB87C: sw          $zero, 0x2EC0($at)
    MEM_W(0X2EC0, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800EB880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB880: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800EB884: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EB888: multu       $a2, $a2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EB88C: addiu       $v0, $v0, 0x2EA0
    ctx->r2 = ADD32(ctx->r2, 0X2EA0);
    // 0x800EB890: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800EB894: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x800EB898: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800EB89C: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x800EB8A0: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x800EB8A4: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x800EB8A8: mflo        $t9
    ctx->r25 = lo;
    // 0x800EB8AC: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x800EB8B0: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x800EB8B4: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x800EB8B8: jr          $ra
    // 0x800EB8BC: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    return;
    // 0x800EB8BC: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_800EB8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB8C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EB8C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800EB8C8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800EB8CC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800EB8D0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800EB8D4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800EB8D8: jal         0x800E9DCC
    // 0x800EB8DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800E9DCC(rdram, ctx);
        goto after_0;
    // 0x800EB8DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800EB8E0: beq         $v0, $zero, L_800EB9D4
    if (ctx->r2 == 0) {
        // 0x800EB8E4: lui         $s1, 0x8013
        ctx->r17 = S32(0X8013 << 16);
            goto L_800EB9D4;
    }
    // 0x800EB8E4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800EB8E8: addiu       $s1, $s1, 0x2EA0
    ctx->r17 = ADD32(ctx->r17, 0X2EA0);
    // 0x800EB8EC: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x800EB8F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EB8F4: beq         $v1, $at, L_800EB904
    if (ctx->r3 == ctx->r1) {
        // 0x800EB8F8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800EB904;
    }
    // 0x800EB8F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800EB8FC: bne         $v1, $at, L_800EB9D4
    if (ctx->r3 != ctx->r1) {
        // 0x800EB900: nop
    
            goto L_800EB9D4;
    }
    // 0x800EB900: nop

L_800EB904:
    // 0x800EB904: jal         0x800E9E88
    // 0x800EB908: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800E9E88(rdram, ctx);
        goto after_1;
    // 0x800EB908: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x800EB90C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EB910: jal         0x800E9EB4
    // 0x800EB914: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800E9EB4(rdram, ctx);
        goto after_2;
    // 0x800EB914: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x800EB918: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800EB91C: beq         $at, $zero, L_800EB9D4
    if (ctx->r1 == 0) {
        // 0x800EB920: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_800EB9D4;
    }
    // 0x800EB920: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800EB924: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
L_800EB928:
    // 0x800EB928: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x800EB92C: bnel        $t6, $zero, L_800EB9C8
    if (ctx->r14 != 0) {
        // 0x800EB930: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_800EB9C8;
    }
    goto skip_0;
    // 0x800EB930: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x800EB934: lh          $t7, 0x8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X8);
    // 0x800EB938: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x800EB93C: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    // 0x800EB940: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x800EB944: subu        $v0, $t7, $t8
    ctx->r2 = SUB32(ctx->r15, ctx->r24);
    // 0x800EB948: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EB94C: subu        $v1, $t9, $t0
    ctx->r3 = SUB32(ctx->r25, ctx->r8);
    // 0x800EB950: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x800EB954: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x800EB958: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x800EB95C: sll         $t9, $a1, 30
    ctx->r25 = S32(ctx->r5 << 30);
    // 0x800EB960: subu        $a0, $t1, $t2
    ctx->r4 = SUB32(ctx->r9, ctx->r10);
    // 0x800EB964: mflo        $t3
    ctx->r11 = lo;
    // 0x800EB968: nop

    // 0x800EB96C: nop

    // 0x800EB970: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EB974: mflo        $t4
    ctx->r12 = lo;
    // 0x800EB978: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800EB97C: nop

    // 0x800EB980: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EB984: mflo        $t6
    ctx->r14 = lo;
    // 0x800EB988: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x800EB98C: slt         $at, $a2, $t7
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800EB990: beql        $at, $zero, L_800EB9C8
    if (ctx->r1 == 0) {
        // 0x800EB994: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_800EB9C8;
    }
    goto skip_1;
    // 0x800EB994: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_1:
    // 0x800EB998: bgez        $t9, L_800EB9A8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800EB99C: lw          $v1, 0x10($s1)
        ctx->r3 = MEM_W(ctx->r17, 0X10);
            goto L_800EB9A8;
    }
    // 0x800EB99C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x800EB9A0: b           L_800EB9AC
    // 0x800EB9A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800EB9AC;
    // 0x800EB9A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800EB9A8:
    // 0x800EB9A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EB9AC:
    // 0x800EB9AC: bnel        $v0, $v1, L_800EB9C8
    if (ctx->r2 != ctx->r3) {
        // 0x800EB9B0: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_800EB9C8;
    }
    goto skip_2;
    // 0x800EB9B0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_2:
    // 0x800EB9B4: sw          $a2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r6;
    // 0x800EB9B8: sw          $s3, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r19;
    // 0x800EB9BC: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
    // 0x800EB9C0: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x800EB9C4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_800EB9C8:
    // 0x800EB9C8: sltu        $at, $s0, $a3
    ctx->r1 = ctx->r16 < ctx->r7 ? 1 : 0;
    // 0x800EB9CC: bnel        $at, $zero, L_800EB928
    if (ctx->r1 != 0) {
        // 0x800EB9D0: lw          $a1, 0x8($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X8);
            goto L_800EB928;
    }
    goto skip_3;
    // 0x800EB9D0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    skip_3:
L_800EB9D4:
    // 0x800EB9D4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800EB9D8: addiu       $s1, $s1, 0x2EA0
    ctx->r17 = ADD32(ctx->r17, 0X2EA0);
    // 0x800EB9DC: jal         0x800E9DC4
    // 0x800EB9E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800E9DC4(rdram, ctx);
        goto after_3;
    // 0x800EB9E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x800EB9E4: beql        $v0, $zero, L_800EBB18
    if (ctx->r2 == 0) {
        // 0x800EB9E8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800EBB18;
    }
    goto skip_4;
    // 0x800EB9E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x800EB9EC: lw          $t0, 0x10($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X10);
    // 0x800EB9F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800EB9F4: bnel        $t0, $at, L_800EBB18
    if (ctx->r8 != ctx->r1) {
        // 0x800EB9F8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800EBB18;
    }
    goto skip_5;
    // 0x800EB9F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x800EB9FC: jal         0x800E9D68
    // 0x800EBA00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800E9D68(rdram, ctx);
        goto after_4;
    // 0x800EBA00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x800EBA04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EBA08: jal         0x800E9D90
    // 0x800EBA0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800E9D90(rdram, ctx);
        goto after_5;
    // 0x800EBA0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x800EBA10: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800EBA14: beq         $at, $zero, L_800EBB14
    if (ctx->r1 == 0) {
        // 0x800EBA18: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_800EBB14;
    }
    // 0x800EBA18: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EBA1C: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
L_800EBA20:
    // 0x800EBA20: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x800EBA24: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x800EBA28: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x800EBA2C: subu        $v0, $t1, $t2
    ctx->r2 = SUB32(ctx->r9, ctx->r10);
    // 0x800EBA30: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EBA34: subu        $v1, $t3, $t4
    ctx->r3 = SUB32(ctx->r11, ctx->r12);
    // 0x800EBA38: lh          $t5, 0x2($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X2);
    // 0x800EBA3C: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x800EBA40: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x800EBA44: subu        $a0, $t5, $t6
    ctx->r4 = SUB32(ctx->r13, ctx->r14);
    // 0x800EBA48: mflo        $t7
    ctx->r15 = lo;
    // 0x800EBA4C: nop

    // 0x800EBA50: nop

    // 0x800EBA54: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EBA58: mflo        $t8
    ctx->r24 = lo;
    // 0x800EBA5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EBA60: nop

    // 0x800EBA64: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EBA68: mflo        $t0
    ctx->r8 = lo;
    // 0x800EBA6C: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x800EBA70: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800EBA74: beql        $at, $zero, L_800EBB08
    if (ctx->r1 == 0) {
        // 0x800EBA78: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800EBB08;
    }
    goto skip_6;
    // 0x800EBA78: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_6:
    // 0x800EBA7C: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x800EBA80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800EBA84: beql        $v0, $zero, L_800EBAF4
    if (ctx->r2 == 0) {
        // 0x800EBA88: lw          $t2, 0x10($s1)
        ctx->r10 = MEM_W(ctx->r17, 0X10);
            goto L_800EBAF4;
    }
    goto skip_7;
    // 0x800EBA88: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
    skip_7:
    // 0x800EBA8C: jalr        $v0
    // 0x800EBA90: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x800EBA90: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    after_6:
    // 0x800EBA94: beql        $v0, $zero, L_800EBB08
    if (ctx->r2 == 0) {
        // 0x800EBA98: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800EBB08;
    }
    goto skip_8;
    // 0x800EBA98: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_8:
    // 0x800EBA9C: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x800EBAA0: lw          $t3, 0x8($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X8);
    // 0x800EBAA4: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
    // 0x800EBAA8: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x800EBAAC: subu        $v0, $t2, $t3
    ctx->r2 = SUB32(ctx->r10, ctx->r11);
    // 0x800EBAB0: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EBAB4: subu        $v1, $t4, $t5
    ctx->r3 = SUB32(ctx->r12, ctx->r13);
    // 0x800EBAB8: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x800EBABC: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x800EBAC0: subu        $a0, $t6, $t7
    ctx->r4 = SUB32(ctx->r14, ctx->r15);
    // 0x800EBAC4: mflo        $t8
    ctx->r24 = lo;
    // 0x800EBAC8: nop

    // 0x800EBACC: nop

    // 0x800EBAD0: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EBAD4: mflo        $t9
    ctx->r25 = lo;
    // 0x800EBAD8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800EBADC: nop

    // 0x800EBAE0: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800EBAE4: mflo        $t1
    ctx->r9 = lo;
    // 0x800EBAE8: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x800EBAEC: nop

    // 0x800EBAF0: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
L_800EBAF4:
    // 0x800EBAF4: sw          $a1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r5;
    // 0x800EBAF8: sw          $s3, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r19;
    // 0x800EBAFC: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
    // 0x800EBB00: sw          $t2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r10;
    // 0x800EBB04: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_800EBB08:
    // 0x800EBB08: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800EBB0C: bnel        $at, $zero, L_800EBA20
    if (ctx->r1 != 0) {
        // 0x800EBB10: lh          $t1, 0x4($s0)
        ctx->r9 = MEM_H(ctx->r16, 0X4);
            goto L_800EBA20;
    }
    goto skip_9;
    // 0x800EBB10: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    skip_9:
L_800EBB14:
    // 0x800EBB14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800EBB18:
    // 0x800EBB18: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800EBB1C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800EBB20: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800EBB24: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800EBB28: jr          $ra
    // 0x800EBB2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800EBB2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800EBB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBB30: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800EBB34: addiu       $v1, $v1, 0x2EA0
    ctx->r3 = ADD32(ctx->r3, 0X2EA0);
    // 0x800EBB38: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x800EBB3C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800EBB40: lw          $t7, 0x18($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X18);
    // 0x800EBB44: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x800EBB48: jr          $ra
    // 0x800EBB4C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    return;
    // 0x800EBB4C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
;}
RECOMP_FUNC void func_800EBB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBB50: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800EBB54: jr          $ra
    // 0x800EBB58: addiu       $v0, $v0, 0x3540
    ctx->r2 = ADD32(ctx->r2, 0X3540);
    return;
    // 0x800EBB58: addiu       $v0, $v0, 0x3540
    ctx->r2 = ADD32(ctx->r2, 0X3540);
;}
RECOMP_FUNC void func_800EBB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBB5C: addiu       $t6, $zero, 0x6B7
    ctx->r14 = ADD32(0, 0X6B7);
    // 0x800EBB60: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800EBB64: jr          $ra
    // 0x800EBB68: sw          $t6, 0x546C($at)
    MEM_W(0X546C, ctx->r1) = ctx->r14;
    return;
    // 0x800EBB68: sw          $t6, 0x546C($at)
    MEM_W(0X546C, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800EBB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBB6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EBB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBB74: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800EBB78: addiu       $t6, $t6, 0x2ED0
    ctx->r14 = ADD32(ctx->r14, 0X2ED0);
    // 0x800EBB7C: beq         $t6, $zero, L_800EBB8C
    if (ctx->r14 == 0) {
            // 0x800EBB80: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    func_800EBB8C(rdram, ctx);
    return;
    }
    // 0x800EBB80: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800EBB84: jr          $ra
    // 0x800EBB88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800EBB88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800EBB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBB8C: jr          $ra
    // 0x800EBB90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800EBB90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800EBB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBB94: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800EBB98: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EBB9C: addiu       $v0, $v0, 0x2EE9
    ctx->r2 = ADD32(ctx->r2, 0X2EE9);
    // 0x800EBBA0: addiu       $v1, $v1, 0x2ED0
    ctx->r3 = ADD32(ctx->r3, 0X2ED0);
L_800EBBA4:
    // 0x800EBBA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800EBBA8: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800EBBAC: bne         $at, $zero, L_800EBBA4
    if (ctx->r1 != 0) {
        // 0x800EBBB0: sb          $zero, 0x257F($v1)
        MEM_B(0X257F, ctx->r3) = 0;
            goto L_800EBBA4;
    }
    // 0x800EBBB0: sb          $zero, 0x257F($v1)
    MEM_B(0X257F, ctx->r3) = 0;
    // 0x800EBBB4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800EBBB8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EBBBC: addiu       $v0, $v0, 0x5450
    ctx->r2 = ADD32(ctx->r2, 0X5450);
    // 0x800EBBC0: addiu       $v1, $v1, 0x2ED0
    ctx->r3 = ADD32(ctx->r3, 0X2ED0);
L_800EBBC4:
    // 0x800EBBC4: lhu         $t8, 0x42($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X42);
    // 0x800EBBC8: lhu         $t0, 0x72($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X72);
    // 0x800EBBCC: lhu         $t2, 0xA2($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0XA2);
    // 0x800EBBD0: lhu         $t6, 0x12($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X12);
    // 0x800EBBD4: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    // 0x800EBBD8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800EBBDC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800EBBE0: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x800EBBE4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800EBBE8: sh          $t3, -0x1E($v1)
    MEM_H(-0X1E, ctx->r3) = ctx->r11;
    // 0x800EBBEC: sh          $t1, -0x4E($v1)
    MEM_H(-0X4E, ctx->r3) = ctx->r9;
    // 0x800EBBF0: sh          $t9, -0x7E($v1)
    MEM_H(-0X7E, ctx->r3) = ctx->r25;
    // 0x800EBBF4: bne         $v1, $v0, L_800EBBC4
    if (ctx->r3 != ctx->r2) {
        // 0x800EBBF8: sh          $t7, -0xAE($v1)
        MEM_H(-0XAE, ctx->r3) = ctx->r15;
            goto L_800EBBC4;
    }
    // 0x800EBBF8: sh          $t7, -0xAE($v1)
    MEM_H(-0XAE, ctx->r3) = ctx->r15;
    // 0x800EBBFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EBC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBC04: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EBC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBC0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EBC10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EBC14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800EBC18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EBC1C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800EBC20: jal         0x800E99E0
    // 0x800EBC24: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800E99E0(rdram, ctx);
        goto after_0;
    // 0x800EBC24: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800EBC28: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800EBC2C: lbu         $t4, 0xB($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XB);
    // 0x800EBC30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800EBC34: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800EBC38: andi        $t5, $t4, 0xFFFD
    ctx->r13 = ctx->r12 & 0XFFFD;
    // 0x800EBC3C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x800EBC40: sh          $t6, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r14;
    // 0x800EBC44: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x800EBC48: sh          $t7, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r15;
    // 0x800EBC4C: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
    // 0x800EBC50: lbu         $t7, 0xA($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XA);
    // 0x800EBC54: sh          $t8, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r24;
    // 0x800EBC58: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800EBC5C: andi        $t8, $t7, 0xFF07
    ctx->r24 = ctx->r15 & 0XFF07;
    // 0x800EBC60: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800EBC64: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EBC68: sb          $t8, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r24;
    // 0x800EBC6C: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800EBC70: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x800EBC74: or          $t9, $t3, $t5
    ctx->r25 = ctx->r11 | ctx->r13;
    // 0x800EBC78: sb          $t9, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r25;
    // 0x800EBC7C: andi        $t0, $t9, 0xDF
    ctx->r8 = ctx->r25 & 0XDF;
    // 0x800EBC80: sb          $t0, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r8;
    // 0x800EBC84: jal         0x800DC214
    // 0x800EBC88: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800DC214(rdram, ctx);
        goto after_1;
    // 0x800EBC88: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800EBC8C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800EBC90: sll         $t2, $v0, 6
    ctx->r10 = S32(ctx->r2 << 6);
    // 0x800EBC94: andi        $t4, $t2, 0x7C0
    ctx->r12 = ctx->r10 & 0X7C0;
    // 0x800EBC98: lhu         $t3, 0xA($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0XA);
    // 0x800EBC9C: andi        $t5, $t3, 0xF83F
    ctx->r13 = ctx->r11 & 0XF83F;
    // 0x800EBCA0: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x800EBCA4: sh          $t6, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r14;
    // 0x800EBCA8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800EBCAC: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x800EBCB0: jal         0x800BD948
    // 0x800EBCB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800BD948(rdram, ctx);
        goto after_2;
    // 0x800EBCB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800EBCB8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800EBCBC: sh          $v0, 0x1C($t8)
    MEM_H(0X1C, ctx->r24) = ctx->r2;
    // 0x800EBCC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EBCC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EBCC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EBCD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBCD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EBCD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EBCD8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800EBCDC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800EBCE0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800EBCE4: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800EBCE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800EBCEC: lhu         $t7, 0xA($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XA);
    // 0x800EBCF0: jal         0x800E9AC0
    // 0x800EBCF4: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    func_800E9AC0(rdram, ctx);
        goto after_0;
    // 0x800EBCF4: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    after_0:
    // 0x800EBCF8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800EBCFC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800EBD00: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800EBD04: jal         0x800EBC0C
    // 0x800EBD08: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_800EBC0C(rdram, ctx);
        goto after_1;
    // 0x800EBD08: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_1:
    // 0x800EBD0C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800EBD10: lhu         $t8, 0x1E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1E);
    // 0x800EBD14: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800EBD18: sh          $t8, 0xA($t0)
    MEM_H(0XA, ctx->r8) = ctx->r24;
    // 0x800EBD1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EBD20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EBD24: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EBD2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBD2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EBD30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EBD34: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800EBD38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EBD3C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800EBD40: jal         0x800BDB9C
    // 0x800EBD44: lh          $a0, 0x1C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X1C);
    func_800BDB9C(rdram, ctx);
        goto after_0;
    // 0x800EBD44: lh          $a0, 0x1C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X1C);
    after_0:
    // 0x800EBD48: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800EBD4C: jal         0x800BDB9C
    // 0x800EBD50: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800BDB9C(rdram, ctx);
        goto after_1;
    // 0x800EBD50: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800EBD54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EBD58: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800EBD5C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800EBD60: jal         0x800EBCD0
    // 0x800EBD64: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_800EBCD0(rdram, ctx);
        goto after_2;
    // 0x800EBD64: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_2:
    // 0x800EBD68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EBD6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EBD70: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EBD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBD78: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800EBD7C: lbu         $t6, 0x5450($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5450);
    // 0x800EBD80: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800EBD84: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800EBD88: bne         $v0, $t6, L_800EBDB0
    if (ctx->r2 != ctx->r14) {
        // 0x800EBD8C: lui         $t0, 0x8013
        ctx->r8 = S32(0X8013 << 16);
            goto L_800EBDB0;
    }
    // 0x800EBD8C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800EBD90: addiu       $t0, $t0, 0x2ED0
    ctx->r8 = ADD32(ctx->r8, 0X2ED0);
    // 0x800EBD94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800EBD98:
    // 0x800EBD98: slti        $at, $v1, 0x19
    ctx->r1 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
    // 0x800EBD9C: beq         $at, $zero, L_800EBDB0
    if (ctx->r1 == 0) {
        // 0x800EBDA0: addu        $t7, $t0, $v1
        ctx->r15 = ADD32(ctx->r8, ctx->r3);
            goto L_800EBDB0;
    }
    // 0x800EBDA0: addu        $t7, $t0, $v1
    ctx->r15 = ADD32(ctx->r8, ctx->r3);
    // 0x800EBDA4: lbu         $t8, 0x2580($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2580);
    // 0x800EBDA8: beql        $v0, $t8, L_800EBD98
    if (ctx->r2 == ctx->r24) {
        // 0x800EBDAC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800EBD98;
    }
    goto skip_0;
    // 0x800EBDAC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_800EBDB0:
    // 0x800EBDB0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800EBDB4: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x800EBDB8: bne         $v1, $at, L_800EBDC8
    if (ctx->r3 != ctx->r1) {
            // 0x800EBDBC: addiu       $t0, $t0, 0x2ED0
    ctx->r8 = ADD32(ctx->r8, 0X2ED0);
    func_800EBDC8(rdram, ctx);
    return;
    }
    // 0x800EBDBC: addiu       $t0, $t0, 0x2ED0
    ctx->r8 = ADD32(ctx->r8, 0X2ED0);
    // 0x800EBDC0: jr          $ra
    // 0x800EBDC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800EBDC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800EBDC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBDC8: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    // 0x800EBDCC: lbu         $a1, 0x2580($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X2580);
    // 0x800EBDD0: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x800EBDD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800EBDD8: andi        $t9, $a1, 0x80
    ctx->r25 = ctx->r5 & 0X80;
    // 0x800EBDDC: beq         $t9, $zero, L_800EBDF8
    if (ctx->r25 == 0) {
        // 0x800EBDE0: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_800EBDF8;
    }
    // 0x800EBDE0: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
L_800EBDE4:
    // 0x800EBDE4: sra         $t1, $a2, 1
    ctx->r9 = S32(SIGNED(ctx->r6) >> 1);
    // 0x800EBDE8: and         $t2, $a1, $t1
    ctx->r10 = ctx->r5 & ctx->r9;
    // 0x800EBDEC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x800EBDF0: bne         $t2, $zero, L_800EBDE4
    if (ctx->r10 != 0) {
        // 0x800EBDF4: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_800EBDE4;
    }
    // 0x800EBDF4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_800EBDF8:
    // 0x800EBDF8: subu        $t4, $t4, $v1
    ctx->r12 = SUB32(ctx->r12, ctx->r3);
    // 0x800EBDFC: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x800EBE00: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x800EBE04: sll         $t4, $t4, 7
    ctx->r12 = S32(ctx->r12 << 7);
    // 0x800EBE08: or          $t3, $a1, $a2
    ctx->r11 = ctx->r5 | ctx->r6;
    // 0x800EBE0C: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x800EBE10: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800EBE14: sb          $t3, 0x2580($a0)
    MEM_B(0X2580, ctx->r4) = ctx->r11;
    // 0x800EBE18: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x800EBE1C: jr          $ra
    // 0x800EBE20: nop

    return;
    // 0x800EBE20: nop

;}
RECOMP_FUNC void func_800EBE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBE24: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800EBE28: addiu       $a1, $a1, 0x2ED0
    ctx->r5 = ADD32(ctx->r5, 0X2ED0);
    // 0x800EBE2C: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x800EBE30: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x800EBE34: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800EBE38: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x800EBE3C: mflo        $t8
    ctx->r24 = lo;
    // 0x800EBE40: andi        $t0, $t8, 0x7
    ctx->r8 = ctx->r24 & 0X7;
    // 0x800EBE44: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800EBE48: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    // 0x800EBE4C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EBE50: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x800EBE54: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800EBE58: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800EBE5C: addu        $v1, $a1, $t9
    ctx->r3 = ADD32(ctx->r5, ctx->r25);
    // 0x800EBE60: lbu         $t3, 0x2580($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X2580);
    // 0x800EBE64: lw          $t2, 0x3554($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3554);
    // 0x800EBE68: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x800EBE6C: jr          $ra
    // 0x800EBE70: sb          $t4, 0x2580($v1)
    MEM_B(0X2580, ctx->r3) = ctx->r12;
    return;
    // 0x800EBE70: sb          $t4, 0x2580($v1)
    MEM_B(0X2580, ctx->r3) = ctx->r12;
;}
RECOMP_FUNC void func_800EBE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBE74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EBE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EBE7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800EBE80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800EBE84: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800EBE88: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x800EBE8C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800EBE90: beq         $t8, $zero, L_800EBEA8
    if (ctx->r24 == 0) {
        // 0x800EBE94: nop
    
            goto L_800EBEA8;
    }
    // 0x800EBE94: nop

    // 0x800EBE98: jal         0x800BDC44
    // 0x800EBE9C: nop

    func_800BDC44(rdram, ctx);
        goto after_0;
    // 0x800EBE9C: nop

    after_0:
    // 0x800EBEA0: b           L_800EBEB4
    // 0x800EBEA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_800EBEB4;
    // 0x800EBEA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800EBEA8:
    // 0x800EBEA8: jal         0x800BDBC4
    // 0x800EBEAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800BDBC4(rdram, ctx);
        goto after_1;
    // 0x800EBEAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800EBEB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800EBEB4:
    // 0x800EBEB4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800EBEB8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800EBEBC: jal         0x800EBC0C
    // 0x800EBEC0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_800EBC0C(rdram, ctx);
        goto after_2;
    // 0x800EBEC0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800EBEC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EBEC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EBECC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EBED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBED4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EBED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EBEDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EBEE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800EBEE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EBEE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800EBEEC: jal         0x800EBD78
    // 0x800EBEF0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800EBD78(rdram, ctx);
        goto after_0;
    // 0x800EBEF0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800EBEF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EBEF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800EBEFC: jal         0x8002D6E0
    // 0x800EBF00: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x800EBF00: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x800EBF04: jal         0x800EC854
    // 0x800EBF08: nop

    func_800EC854(rdram, ctx);
        goto after_2;
    // 0x800EBF08: nop

    after_2:
    // 0x800EBF0C: lhu         $t9, 0x12($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X12);
    // 0x800EBF10: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x800EBF14: lhu         $t6, 0x24($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X24);
    // 0x800EBF18: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800EBF1C: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x800EBF20: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x800EBF24: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800EBF28: andi        $t7, $t6, 0x3F
    ctx->r15 = ctx->r14 & 0X3F;
    // 0x800EBF2C: lbu         $t2, 0x13($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X13);
    // 0x800EBF30: sll         $t5, $t3, 6
    ctx->r13 = S32(ctx->r11 << 6);
    // 0x800EBF34: or          $t9, $t5, $t7
    ctx->r25 = ctx->r13 | ctx->r15;
    // 0x800EBF38: sh          $t9, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r25;
    // 0x800EBF3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EBF40: lbu         $t7, 0x2A($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2A);
    // 0x800EBF44: lui         $t6, 0x800F
    ctx->r14 = S32(0X800F << 16);
    // 0x800EBF48: andi        $t3, $t2, 0xFFFE
    ctx->r11 = ctx->r10 & 0XFFFE;
    // 0x800EBF4C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800EBF50: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x800EBF54: addiu       $t6, $t6, -0x44B0
    ctx->r14 = ADD32(ctx->r14, -0X44B0);
    // 0x800EBF58: ori         $t9, $t7, 0x2
    ctx->r25 = ctx->r15 | 0X2;
    // 0x800EBF5C: sb          $t4, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r12;
    // 0x800EBF60: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    // 0x800EBF64: sb          $t9, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r25;
    // 0x800EBF68: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800EBF6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EBF70: jal         0x800EBE74
    // 0x800EBF74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EBE74(rdram, ctx);
        goto after_3;
    // 0x800EBF74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800EBF78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EBF7C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800EBF80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EBF84: jr          $ra
    // 0x800EBF88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800EBF88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800EBF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBF8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EBF90: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800EBF94: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800EBF98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EBF9C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800EBFA0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800EBFA4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800EBFA8: jal         0x800EE904
    // 0x800EBFAC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800EE904(rdram, ctx);
        goto after_0;
    // 0x800EBFAC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800EBFB0: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800EBFB4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800EBFB8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800EBFBC: jal         0x800EBED4
    // 0x800EBFC0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    func_800EBED4(rdram, ctx);
        goto after_1;
    // 0x800EBFC0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x800EBFC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EBFC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EBFCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EBFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBFD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EBFD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EBFDC: jal         0x800EBF8C
    // 0x800EBFE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800EBF8C(rdram, ctx);
        goto after_0;
    // 0x800EBFE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800EBFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EBFE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EBFEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EBFF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBFF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EBFF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EBFFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800EC000: jal         0x800BDB9C
    // 0x800EC004: lh          $a0, 0x1C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X1C);
    func_800BDB9C(rdram, ctx);
        goto after_0;
    // 0x800EC004: lh          $a0, 0x1C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X1C);
    after_0:
    // 0x800EC008: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800EC00C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800EC010: jal         0x800E9AC0
    // 0x800EC014: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    func_800E9AC0(rdram, ctx);
        goto after_1;
    // 0x800EC014: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x800EC018: jal         0x800EBE24
    // 0x800EC01C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800EBE24(rdram, ctx);
        goto after_2;
    // 0x800EC01C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800EC020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EC024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EC028: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC030: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800EC034: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800EC038: sh          $t6, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r14;
    // 0x800EC03C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800EC040: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x800EC044: sh          $t8, 0x6($t9)
    MEM_H(0X6, ctx->r25) = ctx->r24;
    // 0x800EC048: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x800EC04C: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x800EC050: jr          $ra
    // 0x800EC054: sh          $t0, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r8;
    return;
    // 0x800EC054: sh          $t0, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r8;
;}
RECOMP_FUNC void func_800EC058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EC05C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC060: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EC064: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x800EC068: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800EC06C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800EC070: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800EC074: beq         $t7, $zero, L_800EC084
    if (ctx->r15 == 0) {
        // 0x800EC078: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_800EC084;
    }
    // 0x800EC078: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800EC07C: b           L_800EC094
    // 0x800EC080: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_800EC094;
    // 0x800EC080: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_800EC084:
    // 0x800EC084: jal         0x800BD97C
    // 0x800EC088: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_800BD97C(rdram, ctx);
        goto after_0;
    // 0x800EC088: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x800EC08C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x800EC090: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_800EC094:
    // 0x800EC094: lh          $t8, 0x1C($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X1C);
    // 0x800EC098: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800EC09C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800EC0A0: bne         $a2, $t8, L_800EC0B8
    if (ctx->r6 != ctx->r24) {
        // 0x800EC0A4: nop
    
            goto L_800EC0B8;
    }
    // 0x800EC0A4: nop

    // 0x800EC0A8: jal         0x800EC030
    // 0x800EC0AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EC030(rdram, ctx);
        goto after_1;
    // 0x800EC0AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800EC0B0: b           L_800EC0C4
    // 0x800EC0B4: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
        goto L_800EC0C4;
    // 0x800EC0B4: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
L_800EC0B8:
    // 0x800EC0B8: jal         0x800EBD2C
    // 0x800EC0BC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_800EBD2C(rdram, ctx);
        goto after_2;
    // 0x800EC0BC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_2:
    // 0x800EC0C0: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
L_800EC0C4:
    // 0x800EC0C4: sll         $t1, $t9, 21
    ctx->r9 = S32(ctx->r25 << 21);
    // 0x800EC0C8: bgezl       $t1, L_800EC0DC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800EC0CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800EC0DC;
    }
    goto skip_0;
    // 0x800EC0CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800EC0D0: jal         0x800CDFD0
    // 0x800EC0D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800CDFD0(rdram, ctx);
        goto after_3;
    // 0x800EC0D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800EC0D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800EC0DC:
    // 0x800EC0DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EC0E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EC0E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC0EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EC0F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800EC0F4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800EC0F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC0FC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800EC100: jal         0x800EE904
    // 0x800EC104: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800EE904(rdram, ctx);
        goto after_0;
    // 0x800EC104: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800EC108: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800EC10C: jal         0x800EC058
    // 0x800EC110: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EC058(rdram, ctx);
        goto after_1;
    // 0x800EC110: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x800EC114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EC118: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EC11C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC124: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EC128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC12C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EC130: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800EC134: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800EC138: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800EC13C: jal         0x800136E4
    // 0x800EC140: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x800EC140: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    after_0:
    // 0x800EC144: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800EC148: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800EC14C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800EC150: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800EC154: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800EC158: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800EC15C: nop

    // 0x800EC160: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800EC164: beql        $t8, $zero, L_800EC1B4
    if (ctx->r24 == 0) {
        // 0x800EC168: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_800EC1B4;
    }
    goto skip_0;
    // 0x800EC168: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x800EC16C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EC170: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800EC174: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800EC178: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800EC17C: nop

    // 0x800EC180: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800EC184: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800EC188: nop

    // 0x800EC18C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800EC190: bne         $t8, $zero, L_800EC1A8
    if (ctx->r24 != 0) {
        // 0x800EC194: nop
    
            goto L_800EC1A8;
    }
    // 0x800EC194: nop

    // 0x800EC198: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x800EC19C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800EC1A0: b           L_800EC1C0
    // 0x800EC1A4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_800EC1C0;
    // 0x800EC1A4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_800EC1A8:
    // 0x800EC1A8: b           L_800EC1C0
    // 0x800EC1AC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_800EC1C0;
    // 0x800EC1AC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800EC1B0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_800EC1B4:
    // 0x800EC1B4: nop

    // 0x800EC1B8: bltz        $t8, L_800EC1A8
    if (SIGNED(ctx->r24) < 0) {
        // 0x800EC1BC: nop
    
            goto L_800EC1A8;
    }
    // 0x800EC1BC: nop

L_800EC1C0:
    // 0x800EC1C0: lhu         $t2, 0x26($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X26);
    // 0x800EC1C4: sll         $t1, $t8, 7
    ctx->r9 = S32(ctx->r24 << 7);
    // 0x800EC1C8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800EC1CC: andi        $t3, $t2, 0x7F
    ctx->r11 = ctx->r10 & 0X7F;
    // 0x800EC1D0: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x800EC1D4: sh          $t4, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r12;
    // 0x800EC1D8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800EC1DC: jal         0x800136E4
    // 0x800EC1E0: lwc1        $f12, 0x4($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X4);
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x800EC1E0: lwc1        $f12, 0x4($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X4);
    after_1:
    // 0x800EC1E4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800EC1E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800EC1EC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800EC1F0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800EC1F4: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800EC1F8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800EC1FC: nop

    // 0x800EC200: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x800EC204: beql        $t7, $zero, L_800EC254
    if (ctx->r15 == 0) {
        // 0x800EC208: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_800EC254;
    }
    goto skip_1;
    // 0x800EC208: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x800EC20C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EC210: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800EC214: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x800EC218: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800EC21C: nop

    // 0x800EC220: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800EC224: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800EC228: nop

    // 0x800EC22C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x800EC230: bne         $t7, $zero, L_800EC248
    if (ctx->r15 != 0) {
        // 0x800EC234: nop
    
            goto L_800EC248;
    }
    // 0x800EC234: nop

    // 0x800EC238: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800EC23C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800EC240: b           L_800EC260
    // 0x800EC244: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_800EC260;
    // 0x800EC244: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_800EC248:
    // 0x800EC248: b           L_800EC260
    // 0x800EC24C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_800EC260;
    // 0x800EC24C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800EC250: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_800EC254:
    // 0x800EC254: nop

    // 0x800EC258: bltz        $t7, L_800EC248
    if (SIGNED(ctx->r15) < 0) {
        // 0x800EC25C: nop
    
            goto L_800EC248;
    }
    // 0x800EC25C: nop

L_800EC260:
    // 0x800EC260: lhu         $t2, 0x28($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X28);
    // 0x800EC264: sll         $t0, $t7, 7
    ctx->r8 = S32(ctx->r15 << 7);
    // 0x800EC268: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800EC26C: andi        $t1, $t2, 0x7F
    ctx->r9 = ctx->r10 & 0X7F;
    // 0x800EC270: or          $t3, $t0, $t1
    ctx->r11 = ctx->r8 | ctx->r9;
    // 0x800EC274: sh          $t3, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r11;
    // 0x800EC278: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800EC27C: jal         0x800136E4
    // 0x800EC280: lwc1        $f12, 0x8($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X8);
    func_800136E4(rdram, ctx);
        goto after_2;
    // 0x800EC280: lwc1        $f12, 0x8($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X8);
    after_2:
    // 0x800EC284: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800EC288: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800EC28C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800EC290: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x800EC294: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800EC298: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800EC29C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800EC2A0: srl         $t8, $v0, 14
    ctx->r24 = S32(U32(ctx->r2) >> 14);
    // 0x800EC2A4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800EC2A8: nop

    // 0x800EC2AC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x800EC2B0: beql        $t6, $zero, L_800EC300
    if (ctx->r14 == 0) {
        // 0x800EC2B4: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_800EC300;
    }
    goto skip_2;
    // 0x800EC2B4: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x800EC2B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EC2BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800EC2C0: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x800EC2C4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800EC2C8: nop

    // 0x800EC2CC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800EC2D0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800EC2D4: nop

    // 0x800EC2D8: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x800EC2DC: bne         $t6, $zero, L_800EC2F4
    if (ctx->r14 != 0) {
        // 0x800EC2E0: nop
    
            goto L_800EC2F4;
    }
    // 0x800EC2E0: nop

    // 0x800EC2E4: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x800EC2E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800EC2EC: b           L_800EC30C
    // 0x800EC2F0: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_800EC30C;
    // 0x800EC2F0: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_800EC2F4:
    // 0x800EC2F4: b           L_800EC30C
    // 0x800EC2F8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_800EC30C;
    // 0x800EC2F8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800EC2FC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_800EC300:
    // 0x800EC300: nop

    // 0x800EC304: bltz        $t6, L_800EC2F4
    if (SIGNED(ctx->r14) < 0) {
        // 0x800EC308: nop
    
            goto L_800EC2F4;
    }
    // 0x800EC308: nop

L_800EC30C:
    // 0x800EC30C: xor         $t9, $t6, $t8
    ctx->r25 = ctx->r14 ^ ctx->r24;
    // 0x800EC310: sll         $t2, $t9, 23
    ctx->r10 = S32(ctx->r25 << 23);
    // 0x800EC314: srl         $t0, $t2, 9
    ctx->r8 = S32(U32(ctx->r10) >> 9);
    // 0x800EC318: xor         $t1, $t0, $v0
    ctx->r9 = ctx->r8 ^ ctx->r2;
    // 0x800EC31C: sw          $t1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r9;
    // 0x800EC320: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800EC324: jal         0x800EC0EC
    // 0x800EC328: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800EC0EC(rdram, ctx);
        goto after_3;
    // 0x800EC328: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x800EC32C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC330: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EC334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EC338: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC340: lhu         $t9, 0x1A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X1A);
    // 0x800EC344: sll         $t8, $a1, 5
    ctx->r24 = S32(ctx->r5 << 5);
    // 0x800EC348: andi        $t0, $t9, 0x1F
    ctx->r8 = ctx->r25 & 0X1F;
    // 0x800EC34C: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x800EC350: jr          $ra
    // 0x800EC354: sh          $t1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r9;
    return;
    // 0x800EC354: sh          $t1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_800EC358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC358: jr          $ra
    // 0x800EC35C: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    return;
    // 0x800EC35C: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800EC360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC360: jr          $ra
    // 0x800EC364: sh          $a1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r5;
    return;
    // 0x800EC364: sh          $a1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800EC368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC368: jr          $ra
    // 0x800EC36C: sh          $a1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r5;
    return;
    // 0x800EC36C: sh          $a1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800EC370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC370: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800EC374: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x800EC378: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x800EC37C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800EC380: lh          $t9, 0x6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X6);
    // 0x800EC384: sh          $t9, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r25;
    // 0x800EC388: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x800EC38C: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x800EC390: jr          $ra
    // 0x800EC394: sh          $t1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r9;
    return;
    // 0x800EC394: sh          $t1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r9;
;}
RECOMP_FUNC void func_800EC398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EC39C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800EC3A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC3A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800EC3A8: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x800EC3AC: jal         0x800EE88C
    // 0x800EC3B0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800EE88C(rdram, ctx);
        goto after_0;
    // 0x800EC3B0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_0:
    // 0x800EC3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EC3B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EC3BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC3C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EC3C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC3CC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800EC3D0: jalr        $t9
    // 0x800EC3D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800EC3D4: nop

    after_0:
    // 0x800EC3D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EC3DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EC3E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC3E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EC3EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC3F0: lhu         $a1, 0x14($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X14);
    // 0x800EC3F4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x800EC3F8: beq         $a1, $zero, L_800EC408
    if (ctx->r5 == 0) {
        // 0x800EC3FC: nop
    
            goto L_800EC408;
    }
    // 0x800EC3FC: nop

    // 0x800EC400: bne         $a1, $at, L_800EC410
    if (ctx->r5 != ctx->r1) {
        // 0x800EC404: nop
    
            goto L_800EC410;
    }
    // 0x800EC404: nop

L_800EC408:
    // 0x800EC408: b           L_800EC418
    // 0x800EC40C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800EC418;
    // 0x800EC40C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800EC410:
    // 0x800EC410: jal         0x800D674C
    // 0x800EC414: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x800EC414: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_800EC418:
    // 0x800EC418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EC41C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EC420: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EC42C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC430: lhu         $t6, 0x18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X18);
    // 0x800EC434: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800EC438: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800EC43C: beql        $t7, $zero, L_800EC458
    if (ctx->r15 == 0) {
        // 0x800EC440: lhu         $a0, 0x14($a1)
        ctx->r4 = MEM_HU(ctx->r5, 0X14);
            goto L_800EC458;
    }
    goto skip_0;
    // 0x800EC440: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    skip_0:
    // 0x800EC444: jal         0x801039E4
    // 0x800EC448: nop

    func_801039E4(rdram, ctx);
        goto after_0;
    // 0x800EC448: nop

    after_0:
    // 0x800EC44C: b           L_800EC480
    // 0x800EC450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800EC480;
    // 0x800EC450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EC454: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
L_800EC458:
    // 0x800EC458: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x800EC45C: beq         $a0, $zero, L_800EC46C
    if (ctx->r4 == 0) {
        // 0x800EC460: nop
    
            goto L_800EC46C;
    }
    // 0x800EC460: nop

    // 0x800EC464: bne         $a0, $at, L_800EC474
    if (ctx->r4 != ctx->r1) {
        // 0x800EC468: nop
    
            goto L_800EC474;
    }
    // 0x800EC468: nop

L_800EC46C:
    // 0x800EC46C: b           L_800EC47C
    // 0x800EC470: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800EC47C;
    // 0x800EC470: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800EC474:
    // 0x800EC474: jal         0x800D674C
    // 0x800EC478: nop

    func_800D674C(rdram, ctx);
        goto after_1;
    // 0x800EC478: nop

    after_1:
L_800EC47C:
    // 0x800EC47C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EC480:
    // 0x800EC480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EC484: jr          $ra
    // 0x800EC488: nop

    return;
    // 0x800EC488: nop

;}
RECOMP_FUNC void func_800EC48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC48C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EC490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC494: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x800EC498: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x800EC49C: beql        $v0, $zero, L_800EC4B0
    if (ctx->r2 == 0) {
        // 0x800EC4A0: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800EC4B0;
    }
    goto skip_0;
    // 0x800EC4A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x800EC4A4: bne         $v0, $at, L_800EC4B8
    if (ctx->r2 != ctx->r1) {
        // 0x800EC4A8: nop
    
            goto L_800EC4B8;
    }
    // 0x800EC4A8: nop

    // 0x800EC4AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_800EC4B0:
    // 0x800EC4B0: b           L_800EC4F8
    // 0x800EC4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800EC4F8;
    // 0x800EC4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EC4B8:
    // 0x800EC4B8: jal         0x800EC3E8
    // 0x800EC4BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EC3E8(rdram, ctx);
        goto after_0;
    // 0x800EC4BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800EC4C0: jal         0x800B0CFC
    // 0x800EC4C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B0CFC(rdram, ctx);
        goto after_1;
    // 0x800EC4C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800EC4C8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800EC4CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EC4D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EC4D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EC4D8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800EC4DC: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800EC4E0: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x800EC4E4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800EC4E8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800EC4EC: nop

    // 0x800EC4F0: sh          $t7, 0x20($t8)
    MEM_H(0X20, ctx->r24) = ctx->r15;
    // 0x800EC4F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EC4F8:
    // 0x800EC4F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EC4FC: jr          $ra
    // 0x800EC500: nop

    return;
    // 0x800EC500: nop

;}
RECOMP_FUNC void func_800EC504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC504: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800EC508: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC50C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EC510: lhu         $a1, 0x14($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X14);
    // 0x800EC514: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800EC518: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x800EC51C: beql        $a1, $zero, L_800EC52C
    if (ctx->r5 == 0) {
        // 0x800EC520: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800EC52C;
    }
    goto skip_0;
    // 0x800EC520: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x800EC524: bne         $a1, $at, L_800EC538
    if (ctx->r5 != ctx->r1) {
        // 0x800EC528: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800EC538;
    }
    // 0x800EC528: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_800EC52C:
    // 0x800EC52C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800EC530: b           L_800EC5B0
    // 0x800EC534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800EC5B0;
    // 0x800EC534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800EC538:
    // 0x800EC538: jal         0x800D73CC
    // 0x800EC53C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D73CC(rdram, ctx);
        goto after_0;
    // 0x800EC53C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800EC540: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800EC544: jal         0x800D674C
    // 0x800EC548: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    func_800D674C(rdram, ctx);
        goto after_1;
    // 0x800EC548: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    after_1:
    // 0x800EC54C: bne         $v0, $zero, L_800EC564
    if (ctx->r2 != 0) {
        // 0x800EC550: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800EC564;
    }
    // 0x800EC550: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800EC554: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EC558: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800EC55C: b           L_800EC5B0
    // 0x800EC560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800EC5B0;
    // 0x800EC560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800EC564:
    // 0x800EC564: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x800EC568: jal         0x800D62E4
    // 0x800EC56C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800D62E4(rdram, ctx);
        goto after_2;
    // 0x800EC56C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_2:
    // 0x800EC570: jal         0x800B2840
    // 0x800EC574: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800B2840(rdram, ctx);
        goto after_3;
    // 0x800EC574: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x800EC578: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800EC57C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800EC580: jal         0x800B237C
    // 0x800EC584: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800B237C(rdram, ctx);
        goto after_4;
    // 0x800EC584: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x800EC588: addiu       $a0, $s0, 0x1E
    ctx->r4 = ADD32(ctx->r16, 0X1E);
    // 0x800EC58C: jal         0x800EE940
    // 0x800EC590: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800EE940(rdram, ctx);
        goto after_5;
    // 0x800EC590: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x800EC594: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800EC598: bnel        $t6, $zero, L_800EC5AC
    if (ctx->r14 != 0) {
        // 0x800EC59C: lwc1        $f0, 0x3C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_800EC5AC;
    }
    goto skip_1;
    // 0x800EC59C: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x800EC5A0: jal         0x800D6CEC
    // 0x800EC5A4: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    func_800D6CEC(rdram, ctx);
        goto after_6;
    // 0x800EC5A4: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    after_6:
    // 0x800EC5A8: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
L_800EC5AC:
    // 0x800EC5AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800EC5B0:
    // 0x800EC5B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EC5B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800EC5B8: jr          $ra
    // 0x800EC5BC: nop

    return;
    // 0x800EC5BC: nop

;}
RECOMP_FUNC void func_800EC5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC5C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EC5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC5C8: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x800EC5CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EC5D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EC5D4: lw          $t6, 0x18($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X18);
    // 0x800EC5D8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800EC5DC: srl         $t7, $t6, 21
    ctx->r15 = S32(U32(ctx->r14) >> 21);
    // 0x800EC5E0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800EC5E4: bgez        $t7, L_800EC5F8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800EC5E8: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800EC5F8;
    }
    // 0x800EC5E8: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EC5EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EC5F0: nop

    // 0x800EC5F4: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_800EC5F8:
    // 0x800EC5F8: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x800EC5FC: nop

    // 0x800EC600: bc1fl       L_800EC6CC
    if (!c1cs) {
        // 0x800EC604: lhu         $t5, 0x18($a2)
        ctx->r13 = MEM_HU(ctx->r6, 0X18);
            goto L_800EC6CC;
    }
    goto skip_0;
    // 0x800EC604: lhu         $t5, 0x18($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X18);
    skip_0:
    // 0x800EC608: jalr        $a1
    // 0x800EC60C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_0;
    // 0x800EC60C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x800EC610: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800EC614: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800EC618: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800EC61C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC620: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800EC624: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800EC628: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800EC62C: nop

    // 0x800EC630: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800EC634: beql        $v0, $zero, L_800EC684
    if (ctx->r2 == 0) {
        // 0x800EC638: mfc1        $v0, $f10
        ctx->r2 = (int32_t)ctx->f10.u32l;
            goto L_800EC684;
    }
    goto skip_1;
    // 0x800EC638: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x800EC63C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800EC640: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800EC644: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x800EC648: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800EC64C: nop

    // 0x800EC650: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800EC654: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800EC658: nop

    // 0x800EC65C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800EC660: bne         $v0, $zero, L_800EC678
    if (ctx->r2 != 0) {
        // 0x800EC664: nop
    
            goto L_800EC678;
    }
    // 0x800EC664: nop

    // 0x800EC668: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x800EC66C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800EC670: b           L_800EC690
    // 0x800EC674: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_800EC690;
    // 0x800EC674: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_800EC678:
    // 0x800EC678: b           L_800EC690
    // 0x800EC67C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800EC690;
    // 0x800EC67C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800EC680: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
L_800EC684:
    // 0x800EC684: nop

    // 0x800EC688: bltz        $v0, L_800EC678
    if (SIGNED(ctx->r2) < 0) {
        // 0x800EC68C: nop
    
            goto L_800EC678;
    }
    // 0x800EC68C: nop

L_800EC690:
    // 0x800EC690: lhu         $t2, 0x18($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X18);
    // 0x800EC694: andi        $t9, $v0, 0x7FF
    ctx->r25 = ctx->r2 & 0X7FF;
    // 0x800EC698: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800EC69C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800EC6A0: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x800EC6A4: andi        $t3, $t2, 0x1F
    ctx->r11 = ctx->r10 & 0X1F;
    // 0x800EC6A8: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x800EC6AC: sh          $t4, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r12;
    // 0x800EC6B0: bgez        $t9, L_800EC6C8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800EC6B4: cvt.s.w     $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800EC6C8;
    }
    // 0x800EC6B4: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EC6B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800EC6BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EC6C0: nop

    // 0x800EC6C4: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
L_800EC6C8:
    // 0x800EC6C8: lhu         $t5, 0x18($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X18);
L_800EC6CC:
    // 0x800EC6CC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800EC6D0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x800EC6D4: beql        $t6, $zero, L_800EC6F8
    if (ctx->r14 == 0) {
        // 0x800EC6D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EC6F8;
    }
    goto skip_2;
    // 0x800EC6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800EC6DC: jal         0x80106790
    // 0x800EC6E0: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    func_80106790(rdram, ctx);
        goto after_1;
    // 0x800EC6E0: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x800EC6E4: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800EC6E8: lwc1        $f4, 0x38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X38);
    // 0x800EC6EC: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x800EC6F0: nop

    // 0x800EC6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EC6F8:
    // 0x800EC6F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EC6FC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800EC700: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EC70C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC710: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x800EC714: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x800EC718: lw          $t6, 0x8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X8);
    // 0x800EC71C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800EC720: sll         $t8, $t6, 30
    ctx->r24 = S32(ctx->r14 << 30);
    // 0x800EC724: bgez        $t8, L_800EC744
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800EC728: nop
    
            goto L_800EC744;
    }
    // 0x800EC728: nop

    // 0x800EC72C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x800EC730: addiu       $a1, $a1, -0x3AFC
    ctx->r5 = ADD32(ctx->r5, -0X3AFC);
    // 0x800EC734: jal         0x800EC5C0
    // 0x800EC738: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800EC5C0(rdram, ctx);
        goto after_0;
    // 0x800EC738: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800EC73C: b           L_800EC750
    // 0x800EC740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800EC750;
    // 0x800EC740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EC744:
    // 0x800EC744: jal         0x800EC5C0
    // 0x800EC748: addiu       $a1, $a1, -0x3B74
    ctx->r5 = ADD32(ctx->r5, -0X3B74);
    func_800EC5C0(rdram, ctx);
        goto after_1;
    // 0x800EC748: addiu       $a1, $a1, -0x3B74
    ctx->r5 = ADD32(ctx->r5, -0X3B74);
    after_1:
    // 0x800EC74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EC750:
    // 0x800EC750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EC754: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC75C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800EC760: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC764: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EC768: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800EC76C: jal         0x800EC708
    // 0x800EC770: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_800EC708(rdram, ctx);
        goto after_0;
    // 0x800EC770: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800EC774: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800EC778: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800EC77C: jal         0x800EE88C
    // 0x800EC780: addiu       $a1, $s0, 0x1E
    ctx->r5 = ADD32(ctx->r16, 0X1E);
    func_800EE88C(rdram, ctx);
        goto after_1;
    // 0x800EC780: addiu       $a1, $s0, 0x1E
    ctx->r5 = ADD32(ctx->r16, 0X1E);
    after_1:
    // 0x800EC784: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x800EC788: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800EC78C: beql        $t7, $zero, L_800EC7AC
    if (ctx->r15 == 0) {
        // 0x800EC790: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800EC7AC;
    }
    goto skip_0;
    // 0x800EC790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x800EC794: jal         0x80106790
    // 0x800EC798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80106790(rdram, ctx);
        goto after_2;
    // 0x800EC798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800EC79C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800EC7A0: jal         0x800EF334
    // 0x800EC7A4: lw          $a1, 0x38($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X38);
    func_800EF334(rdram, ctx);
        goto after_3;
    // 0x800EC7A4: lw          $a1, 0x38($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X38);
    after_3:
    // 0x800EC7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800EC7AC:
    // 0x800EC7AC: jal         0x800EC398
    // 0x800EC7B0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800EC398(rdram, ctx);
        goto after_4;
    // 0x800EC7B0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x800EC7B4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800EC7B8: jal         0x800EF04C
    // 0x800EC7BC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_5;
    // 0x800EC7BC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x800EC7C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC7C4: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800EC7C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EC7CC: jr          $ra
    // 0x800EC7D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800EC7D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800EC7D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC7D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EC7D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC7DC: jal         0x80106790
    // 0x800EC7E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x800EC7E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800EC7E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800EC7E8: jal         0x8010A79C
    // 0x800EC7EC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8010A79C(rdram, ctx);
        goto after_1;
    // 0x800EC7EC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800EC7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EC7F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EC7F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC800: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x800EC804: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x800EC808: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
    // 0x800EC80C: beq         $v0, $zero, L_800EC820
    if (ctx->r2 == 0) {
        // 0x800EC810: nop
    
            goto L_800EC820;
    }
    // 0x800EC810: nop

    // 0x800EC814: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x800EC818: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x800EC81C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800EC820:
    // 0x800EC820: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC828: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800EC82C: addiu       $v0, $v0, 0x2ED0
    ctx->r2 = ADD32(ctx->r2, 0X2ED0);
    // 0x800EC830: lw          $t6, 0x259C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X259C);
    // 0x800EC834: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x800EC838: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800EC83C: slti        $at, $t7, 0x6B7
    ctx->r1 = SIGNED(ctx->r15) < 0X6B7 ? 1 : 0;
    // 0x800EC840: beq         $at, $zero, L_800EC84C
    if (ctx->r1 == 0) {
        // 0x800EC844: sw          $t7, 0x259C($v0)
        MEM_W(0X259C, ctx->r2) = ctx->r15;
            goto L_800EC84C;
    }
    // 0x800EC844: sw          $t7, 0x259C($v0)
    MEM_W(0X259C, ctx->r2) = ctx->r15;
    // 0x800EC848: sw          $t9, 0x259C($v0)
    MEM_W(0X259C, ctx->r2) = ctx->r25;
L_800EC84C:
    // 0x800EC84C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EC854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC854: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800EC858: addiu       $a0, $a0, 0x2ED0
    ctx->r4 = ADD32(ctx->r4, 0X2ED0);
    // 0x800EC85C: lw          $v1, 0x259C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X259C);
    // 0x800EC860: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x800EC864: addiu       $t8, $zero, 0x6B7
    ctx->r24 = ADD32(0, 0X6B7);
    // 0x800EC868: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x800EC86C: slt         $at, $t6, $at
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x800EC870: bne         $at, $zero, L_800EC87C
    if (ctx->r1 != 0) {
        // 0x800EC874: sw          $t6, 0x259C($a0)
        MEM_W(0X259C, ctx->r4) = ctx->r14;
            goto L_800EC87C;
    }
    // 0x800EC874: sw          $t6, 0x259C($a0)
    MEM_W(0X259C, ctx->r4) = ctx->r14;
    // 0x800EC878: sw          $t8, 0x259C($a0)
    MEM_W(0X259C, ctx->r4) = ctx->r24;
L_800EC87C:
    // 0x800EC87C: jr          $ra
    // 0x800EC880: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800EC880: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800EC890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC890: jr          $ra
    // 0x800EC894: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800EC894: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800EC898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC898: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EC89C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC8A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800EC8A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800EC8A8: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x800EC8AC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800EC8B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EC8B4: jal         0x800EA05C
    // 0x800EC8B8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800EC8B8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800EC8BC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800EC8C0: addiu       $t0, $v1, 0x3580
    ctx->r8 = ADD32(ctx->r3, 0X3580);
    // 0x800EC8C4: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
    // 0x800EC8C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800EC8CC: addiu       $t7, $t7, 0x3580
    ctx->r15 = ADD32(ctx->r15, 0X3580);
    // 0x800EC8D0: beql        $t6, $zero, L_800EC904
    if (ctx->r14 == 0) {
        // 0x800EC8D4: lh          $t9, 0x4($t0)
        ctx->r25 = MEM_H(ctx->r8, 0X4);
            goto L_800EC904;
    }
    goto skip_0;
    // 0x800EC8D4: lh          $t9, 0x4($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X4);
    skip_0:
    // 0x800EC8D8: lh          $v1, 0x0($t7)
    ctx->r3 = MEM_H(ctx->r15, 0X0);
L_800EC8DC:
    // 0x800EC8DC: bnel        $v0, $v1, L_800EC8F4
    if (ctx->r2 != ctx->r3) {
        // 0x800EC8E0: lh          $v1, 0x8($t0)
        ctx->r3 = MEM_H(ctx->r8, 0X8);
            goto L_800EC8F4;
    }
    goto skip_1;
    // 0x800EC8E0: lh          $v1, 0x8($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X8);
    skip_1:
    // 0x800EC8E4: lh          $t8, 0x2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X2);
    // 0x800EC8E8: beql        $s0, $t8, L_800EC904
    if (ctx->r16 == ctx->r24) {
        // 0x800EC8EC: lh          $t9, 0x4($t0)
        ctx->r25 = MEM_H(ctx->r8, 0X4);
            goto L_800EC904;
    }
    goto skip_2;
    // 0x800EC8EC: lh          $t9, 0x4($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X4);
    skip_2:
    // 0x800EC8F0: lh          $v1, 0x8($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X8);
L_800EC8F4:
    // 0x800EC8F4: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x800EC8F8: bne         $v1, $zero, L_800EC8DC
    if (ctx->r3 != 0) {
        // 0x800EC8FC: nop
    
            goto L_800EC8DC;
    }
    // 0x800EC8FC: nop

    // 0x800EC900: lh          $t9, 0x4($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X4);
L_800EC904:
    // 0x800EC904: lui         $at, 0x4500
    ctx->r1 = S32(0X4500 << 16);
    // 0x800EC908: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EC90C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800EC910: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800EC914: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800EC918: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EC91C: addiu       $a3, $s1, 0x6
    ctx->r7 = ADD32(ctx->r17, 0X6);
    // 0x800EC920: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800EC924: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
    // 0x800EC928: lh          $t1, 0x6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X6);
    // 0x800EC92C: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x800EC930: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800EC934: nop

    // 0x800EC938: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EC93C: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x800EC940: jal         0x80088888
    // 0x800EC944: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _glidmake_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x800EC944: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800EC948: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800EC94C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800EC950: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800EC954: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x800EC958: mflo        $v0
    ctx->r2 = lo;
    // 0x800EC95C: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x800EC960: beq         $t4, $zero, L_800EC974
    if (ctx->r12 == 0) {
        // 0x800EC964: andi        $t5, $v0, 0x2
        ctx->r13 = ctx->r2 & 0X2;
            goto L_800EC974;
    }
    // 0x800EC964: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x800EC968: sb          $zero, 0x1A($s1)
    MEM_B(0X1A, ctx->r17) = 0;
    // 0x800EC96C: b           L_800EC978
    // 0x800EC970: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800EC978;
    // 0x800EC970: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800EC974:
    // 0x800EC974: sb          $v1, 0x1A($s1)
    MEM_B(0X1A, ctx->r17) = ctx->r3;
L_800EC978:
    // 0x800EC978: beq         $t5, $zero, L_800EC988
    if (ctx->r13 == 0) {
        // 0x800EC97C: andi        $t6, $v0, 0x4
        ctx->r14 = ctx->r2 & 0X4;
            goto L_800EC988;
    }
    // 0x800EC97C: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x800EC980: b           L_800EC98C
    // 0x800EC984: sb          $zero, 0x1B($s1)
    MEM_B(0X1B, ctx->r17) = 0;
        goto L_800EC98C;
    // 0x800EC984: sb          $zero, 0x1B($s1)
    MEM_B(0X1B, ctx->r17) = 0;
L_800EC988:
    // 0x800EC988: sb          $v1, 0x1B($s1)
    MEM_B(0X1B, ctx->r17) = ctx->r3;
L_800EC98C:
    // 0x800EC98C: beql        $t6, $zero, L_800EC9A0
    if (ctx->r14 == 0) {
        // 0x800EC990: sb          $v1, 0x1C($s1)
        MEM_B(0X1C, ctx->r17) = ctx->r3;
            goto L_800EC9A0;
    }
    goto skip_3;
    // 0x800EC990: sb          $v1, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r3;
    skip_3:
    // 0x800EC994: b           L_800EC9A0
    // 0x800EC998: sb          $zero, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = 0;
        goto L_800EC9A0;
    // 0x800EC998: sb          $zero, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = 0;
    // 0x800EC99C: sb          $v1, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r3;
L_800EC9A0:
    // 0x800EC9A0: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x800EC9A4: bnel        $v0, $zero, L_800EC9B8
    if (ctx->r2 != 0) {
        // 0x800EC9A8: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_800EC9B8;
    }
    goto skip_4;
    // 0x800EC9A8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_4:
    // 0x800EC9AC: b           L_800EC9CC
    // 0x800EC9B0: sb          $zero, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = 0;
        goto L_800EC9CC;
    // 0x800EC9B0: sb          $zero, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = 0;
    // 0x800EC9B4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
L_800EC9B8:
    // 0x800EC9B8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800EC9BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EC9C0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EC9C4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800EC9C8: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
L_800EC9CC:
    // 0x800EC9CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC9D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800EC9D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800EC9D8: jr          $ra
    // 0x800EC9DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800EC9DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800EC9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC9E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800EC9E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800EC9E8: jr          $ra
    // 0x800EC9EC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x800EC9EC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void func_800EC9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC9F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EC9F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800EC9F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800EC9FC: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x800ECA00: addu        $v0, $t6, $a1
    ctx->r2 = ADD32(ctx->r14, ctx->r5);
    // 0x800ECA04: lwc1        $f4, 0x70($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X70);
    // 0x800ECA08: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x800ECA0C: lwc1        $f8, 0x60($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X60);
    // 0x800ECA10: lwc1        $f10, 0x50($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X50);
    // 0x800ECA14: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800ECA18: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x800ECA1C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800ECA20: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800ECA24: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x800ECA28: lwc1        $f6, 0x54($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X54);
    // 0x800ECA2C: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x800ECA30: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800ECA34: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800ECA38: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
    // 0x800ECA3C: lwc1        $f18, 0x58($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X58);
    // 0x800ECA40: lwc1        $f16, 0x68($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X68);
    // 0x800ECA44: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800ECA48: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800ECA4C: swc1        $f6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f6.u32l;
    // 0x800ECA50: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x800ECA54: lwc1        $f8, 0x6C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x800ECA58: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800ECA5C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800ECA60: beq         $at, $zero, L_800ECD58
    if (ctx->r1 == 0) {
        // 0x800ECA64: swc1        $f18, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
            goto L_800ECD58;
    }
    // 0x800ECA64: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
L_800ECA68:
    // 0x800ECA68: lbu         $t7, 0xC($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XC);
    // 0x800ECA6C: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x800ECA70: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800ECA74: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800ECA78: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800ECA7C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800ECA80: bgez        $t7, L_800ECA94
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800ECA84: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800ECA94;
    }
    // 0x800ECA84: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800ECA88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800ECA8C: nop

    // 0x800ECA90: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_800ECA94:
    // 0x800ECA94: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x800ECA98: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800ECA9C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ECAA0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800ECAA4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800ECAA8: nop

    // 0x800ECAAC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800ECAB0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800ECAB4: nop

    // 0x800ECAB8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x800ECABC: beql        $t9, $zero, L_800ECB0C
    if (ctx->r25 == 0) {
        // 0x800ECAC0: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_800ECB0C;
    }
    goto skip_0;
    // 0x800ECAC0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x800ECAC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ECAC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800ECACC: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800ECAD0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800ECAD4: nop

    // 0x800ECAD8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800ECADC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800ECAE0: nop

    // 0x800ECAE4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x800ECAE8: bne         $t9, $zero, L_800ECB00
    if (ctx->r25 != 0) {
        // 0x800ECAEC: nop
    
            goto L_800ECB00;
    }
    // 0x800ECAEC: nop

    // 0x800ECAF0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x800ECAF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ECAF8: b           L_800ECB18
    // 0x800ECAFC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_800ECB18;
    // 0x800ECAFC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_800ECB00:
    // 0x800ECB00: b           L_800ECB18
    // 0x800ECB04: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_800ECB18;
    // 0x800ECB04: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800ECB08: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_800ECB0C:
    // 0x800ECB0C: nop

    // 0x800ECB10: bltz        $t9, L_800ECB00
    if (SIGNED(ctx->r25) < 0) {
        // 0x800ECB14: nop
    
            goto L_800ECB00;
    }
    // 0x800ECB14: nop

L_800ECB18:
    // 0x800ECB18: sb          $t9, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r25;
    // 0x800ECB1C: lbu         $t0, 0xD($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XD);
    // 0x800ECB20: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800ECB24: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x800ECB28: lwc1        $f10, 0x54($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X54);
    // 0x800ECB2C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800ECB30: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800ECB34: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800ECB38: bgez        $t0, L_800ECB4C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800ECB3C: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800ECB4C;
    }
    // 0x800ECB3C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800ECB40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ECB44: nop

    // 0x800ECB48: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_800ECB4C:
    // 0x800ECB4C: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x800ECB50: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ECB54: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ECB58: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800ECB5C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800ECB60: nop

    // 0x800ECB64: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800ECB68: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800ECB6C: nop

    // 0x800ECB70: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x800ECB74: beql        $t2, $zero, L_800ECBC4
    if (ctx->r10 == 0) {
        // 0x800ECB78: mfc1        $t2, $f18
        ctx->r10 = (int32_t)ctx->f18.u32l;
            goto L_800ECBC4;
    }
    goto skip_1;
    // 0x800ECB78: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    skip_1:
    // 0x800ECB7C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800ECB80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ECB84: sub.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x800ECB88: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800ECB8C: nop

    // 0x800ECB90: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800ECB94: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800ECB98: nop

    // 0x800ECB9C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x800ECBA0: bne         $t2, $zero, L_800ECBB8
    if (ctx->r10 != 0) {
        // 0x800ECBA4: nop
    
            goto L_800ECBB8;
    }
    // 0x800ECBA4: nop

    // 0x800ECBA8: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x800ECBAC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ECBB0: b           L_800ECBD0
    // 0x800ECBB4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_800ECBD0;
    // 0x800ECBB4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_800ECBB8:
    // 0x800ECBB8: b           L_800ECBD0
    // 0x800ECBBC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_800ECBD0;
    // 0x800ECBBC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800ECBC0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
L_800ECBC4:
    // 0x800ECBC4: nop

    // 0x800ECBC8: bltz        $t2, L_800ECBB8
    if (SIGNED(ctx->r10) < 0) {
        // 0x800ECBCC: nop
    
            goto L_800ECBB8;
    }
    // 0x800ECBCC: nop

L_800ECBD0:
    // 0x800ECBD0: sb          $t2, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r10;
    // 0x800ECBD4: lbu         $t3, 0xE($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0XE);
    // 0x800ECBD8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800ECBDC: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800ECBE0: lwc1        $f8, 0x58($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X58);
    // 0x800ECBE4: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800ECBE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800ECBEC: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800ECBF0: bgez        $t3, L_800ECC04
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800ECBF4: cvt.s.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800ECC04;
    }
    // 0x800ECBF4: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800ECBF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800ECBFC: nop

    // 0x800ECC00: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_800ECC04:
    // 0x800ECC04: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800ECC08: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800ECC0C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ECC10: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800ECC14: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800ECC18: nop

    // 0x800ECC1C: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800ECC20: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800ECC24: nop

    // 0x800ECC28: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800ECC2C: beql        $t5, $zero, L_800ECC7C
    if (ctx->r13 == 0) {
        // 0x800ECC30: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_800ECC7C;
    }
    goto skip_2;
    // 0x800ECC30: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x800ECC34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ECC38: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800ECC3C: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x800ECC40: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800ECC44: nop

    // 0x800ECC48: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800ECC4C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800ECC50: nop

    // 0x800ECC54: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800ECC58: bne         $t5, $zero, L_800ECC70
    if (ctx->r13 != 0) {
        // 0x800ECC5C: nop
    
            goto L_800ECC70;
    }
    // 0x800ECC5C: nop

    // 0x800ECC60: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x800ECC64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ECC68: b           L_800ECC88
    // 0x800ECC6C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_800ECC88;
    // 0x800ECC6C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_800ECC70:
    // 0x800ECC70: b           L_800ECC88
    // 0x800ECC74: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_800ECC88;
    // 0x800ECC74: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800ECC78: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_800ECC7C:
    // 0x800ECC7C: nop

    // 0x800ECC80: bltz        $t5, L_800ECC70
    if (SIGNED(ctx->r13) < 0) {
        // 0x800ECC84: nop
    
            goto L_800ECC70;
    }
    // 0x800ECC84: nop

L_800ECC88:
    // 0x800ECC88: sb          $t5, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r13;
    // 0x800ECC8C: lbu         $t6, 0xF($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XF);
    // 0x800ECC90: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800ECC94: lwc1        $f18, 0x10($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800ECC98: lwc1        $f16, 0x5C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x800ECC9C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800ECCA0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800ECCA4: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ECCA8: bgez        $t6, L_800ECCC0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800ECCAC: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800ECCC0;
    }
    // 0x800ECCAC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800ECCB0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800ECCB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ECCB8: nop

    // 0x800ECCBC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_800ECCC0:
    // 0x800ECCC0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800ECCC4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800ECCC8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ECCCC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800ECCD0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800ECCD4: nop

    // 0x800ECCD8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800ECCDC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800ECCE0: nop

    // 0x800ECCE4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800ECCE8: beql        $t8, $zero, L_800ECD38
    if (ctx->r24 == 0) {
        // 0x800ECCEC: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_800ECD38;
    }
    goto skip_3;
    // 0x800ECCEC: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_3:
    // 0x800ECCF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800ECCF4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800ECCF8: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800ECCFC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800ECD00: nop

    // 0x800ECD04: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800ECD08: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800ECD0C: nop

    // 0x800ECD10: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800ECD14: bne         $t8, $zero, L_800ECD2C
    if (ctx->r24 != 0) {
        // 0x800ECD18: nop
    
            goto L_800ECD2C;
    }
    // 0x800ECD18: nop

    // 0x800ECD1C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x800ECD20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ECD24: b           L_800ECD44
    // 0x800ECD28: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_800ECD44;
    // 0x800ECD28: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_800ECD2C:
    // 0x800ECD2C: b           L_800ECD44
    // 0x800ECD30: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_800ECD44;
    // 0x800ECD30: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800ECD34: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_800ECD38:
    // 0x800ECD38: nop

    // 0x800ECD3C: bltz        $t8, L_800ECD2C
    if (SIGNED(ctx->r24) < 0) {
        // 0x800ECD40: nop
    
            goto L_800ECD2C;
    }
    // 0x800ECD40: nop

L_800ECD44:
    // 0x800ECD44: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x800ECD48: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800ECD4C: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800ECD50: bne         $at, $zero, L_800ECA68
    if (ctx->r1 != 0) {
        // 0x800ECD54: sb          $t8, -0x1($a2)
        MEM_B(-0X1, ctx->r6) = ctx->r24;
            goto L_800ECA68;
    }
    // 0x800ECD54: sb          $t8, -0x1($a2)
    MEM_B(-0X1, ctx->r6) = ctx->r24;
L_800ECD58:
    // 0x800ECD58: jr          $ra
    // 0x800ECD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800ECD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800ECD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ECD60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800ECD64: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800ECD68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ECD6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800ECD70: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800ECD74: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800ECD78: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800ECD7C: lwc1        $f6, 0x48($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X48);
    // 0x800ECD80: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800ECD84: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800ECD88: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800ECD8C: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800ECD90: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800ECD94: addiu       $a2, $t6, 0x38
    ctx->r6 = ADD32(ctx->r14, 0X38);
    // 0x800ECD98: addiu       $a1, $t6, 0x2C
    ctx->r5 = ADD32(ctx->r14, 0X2C);
    // 0x800ECD9C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800ECDA0: nop

    // 0x800ECDA4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800ECDA8: nop

    // 0x800ECDAC: mul.s       $f0, $f10, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800ECDB0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800ECDB4: jal         0x800EFE50
    // 0x800ECDB8: nop

    func_800EFE50(rdram, ctx);
        goto after_0;
    // 0x800ECDB8: nop

    after_0:
    // 0x800ECDBC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800ECDC0: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x800ECDC4: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x800ECDC8: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800ECDCC: beq         $at, $zero, L_800ECED8
    if (ctx->r1 == 0) {
        // 0x800ECDD0: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_800ECED8;
    }
    // 0x800ECDD0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800ECDD4: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800ECDD8: beq         $at, $zero, L_800ECE64
    if (ctx->r1 == 0) {
        // 0x800ECDDC: lh          $t9, -0x10($s0)
        ctx->r25 = MEM_H(ctx->r16, -0X10);
            goto L_800ECE64;
    }
    // 0x800ECDDC: lh          $t9, -0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, -0X10);
L_800ECDE0:
    // 0x800ECDE0: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800ECDE4: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800ECDE8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800ECDEC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800ECDF0: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800ECDF4: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x800ECDF8: add.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ECDFC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800ECE00: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800ECE04: nop

    // 0x800ECE08: sh          $t1, -0x10($s1)
    MEM_H(-0X10, ctx->r17) = ctx->r9;
    // 0x800ECE0C: lh          $t2, -0x1E($s0)
    ctx->r10 = MEM_H(ctx->r16, -0X1E);
    // 0x800ECE10: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800ECE14: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800ECE18: nop

    // 0x800ECE1C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800ECE20: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800ECE24: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800ECE28: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x800ECE2C: nop

    // 0x800ECE30: sh          $t4, -0xE($s1)
    MEM_H(-0XE, ctx->r17) = ctx->r12;
    // 0x800ECE34: lh          $t5, -0x1C($s0)
    ctx->r13 = MEM_H(ctx->r16, -0X1C);
    // 0x800ECE38: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800ECE3C: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800ECE40: nop

    // 0x800ECE44: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800ECE48: add.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ECE4C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800ECE50: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x800ECE54: nop

    // 0x800ECE58: sh          $t7, -0xC($s1)
    MEM_H(-0XC, ctx->r17) = ctx->r15;
    // 0x800ECE5C: bne         $at, $zero, L_800ECDE0
    if (ctx->r1 != 0) {
        // 0x800ECE60: lh          $t9, -0x10($s0)
        ctx->r25 = MEM_H(ctx->r16, -0X10);
            goto L_800ECDE0;
    }
    // 0x800ECE60: lh          $t9, -0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, -0X10);
L_800ECE64:
    // 0x800ECE64: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800ECE68: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800ECE6C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x800ECE70: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800ECE74: add.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ECE78: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800ECE7C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800ECE80: nop

    // 0x800ECE84: sh          $t1, -0x10($s1)
    MEM_H(-0X10, ctx->r17) = ctx->r9;
    // 0x800ECE88: lh          $t2, -0xE($s0)
    ctx->r10 = MEM_H(ctx->r16, -0XE);
    // 0x800ECE8C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800ECE90: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800ECE94: nop

    // 0x800ECE98: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800ECE9C: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800ECEA0: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800ECEA4: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x800ECEA8: nop

    // 0x800ECEAC: sh          $t4, -0xE($s1)
    MEM_H(-0XE, ctx->r17) = ctx->r12;
    // 0x800ECEB0: lh          $t5, -0xC($s0)
    ctx->r13 = MEM_H(ctx->r16, -0XC);
    // 0x800ECEB4: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800ECEB8: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800ECEBC: nop

    // 0x800ECEC0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800ECEC4: add.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ECEC8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800ECECC: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x800ECED0: nop

    // 0x800ECED4: sh          $t7, -0xC($s1)
    MEM_H(-0XC, ctx->r17) = ctx->r15;
L_800ECED8:
    // 0x800ECED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ECEDC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800ECEE0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800ECEE4: jr          $ra
    // 0x800ECEE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800ECEE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800ECEEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ECEEC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800ECEF0: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800ECEF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ECEF8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800ECEFC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800ECF00: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800ECF04: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800ECF08: lwc1        $f6, 0x48($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X48);
    // 0x800ECF0C: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800ECF10: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800ECF14: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800ECF18: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800ECF1C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800ECF20: addiu       $a2, $t6, 0x38
    ctx->r6 = ADD32(ctx->r14, 0X38);
    // 0x800ECF24: addiu       $a1, $t6, 0x2C
    ctx->r5 = ADD32(ctx->r14, 0X2C);
    // 0x800ECF28: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800ECF2C: jal         0x800EFE50
    // 0x800ECF30: nop

    func_800EFE50(rdram, ctx);
        goto after_0;
    // 0x800ECF30: nop

    after_0:
    // 0x800ECF34: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800ECF38: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x800ECF3C: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x800ECF40: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800ECF44: beq         $at, $zero, L_800ED050
    if (ctx->r1 == 0) {
        // 0x800ECF48: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_800ED050;
    }
    // 0x800ECF48: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800ECF4C: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800ECF50: beq         $at, $zero, L_800ECFDC
    if (ctx->r1 == 0) {
        // 0x800ECF54: lh          $t9, -0x10($s0)
        ctx->r25 = MEM_H(ctx->r16, -0X10);
            goto L_800ECFDC;
    }
    // 0x800ECF54: lh          $t9, -0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, -0X10);
L_800ECF58:
    // 0x800ECF58: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800ECF5C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800ECF60: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800ECF64: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800ECF68: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800ECF6C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x800ECF70: add.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ECF74: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800ECF78: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800ECF7C: nop

    // 0x800ECF80: sh          $t1, -0x10($s1)
    MEM_H(-0X10, ctx->r17) = ctx->r9;
    // 0x800ECF84: lh          $t2, -0x1E($s0)
    ctx->r10 = MEM_H(ctx->r16, -0X1E);
    // 0x800ECF88: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800ECF8C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800ECF90: nop

    // 0x800ECF94: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800ECF98: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800ECF9C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800ECFA0: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x800ECFA4: nop

    // 0x800ECFA8: sh          $t4, -0xE($s1)
    MEM_H(-0XE, ctx->r17) = ctx->r12;
    // 0x800ECFAC: lh          $t5, -0x1C($s0)
    ctx->r13 = MEM_H(ctx->r16, -0X1C);
    // 0x800ECFB0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800ECFB4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800ECFB8: nop

    // 0x800ECFBC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800ECFC0: add.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ECFC4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800ECFC8: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x800ECFCC: nop

    // 0x800ECFD0: sh          $t7, -0xC($s1)
    MEM_H(-0XC, ctx->r17) = ctx->r15;
    // 0x800ECFD4: bne         $at, $zero, L_800ECF58
    if (ctx->r1 != 0) {
        // 0x800ECFD8: lh          $t9, -0x10($s0)
        ctx->r25 = MEM_H(ctx->r16, -0X10);
            goto L_800ECF58;
    }
    // 0x800ECFD8: lh          $t9, -0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, -0X10);
L_800ECFDC:
    // 0x800ECFDC: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800ECFE0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800ECFE4: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x800ECFE8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800ECFEC: add.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ECFF0: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800ECFF4: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800ECFF8: nop

    // 0x800ECFFC: sh          $t1, -0x10($s1)
    MEM_H(-0X10, ctx->r17) = ctx->r9;
    // 0x800ED000: lh          $t2, -0xE($s0)
    ctx->r10 = MEM_H(ctx->r16, -0XE);
    // 0x800ED004: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800ED008: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800ED00C: nop

    // 0x800ED010: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800ED014: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800ED018: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800ED01C: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x800ED020: nop

    // 0x800ED024: sh          $t4, -0xE($s1)
    MEM_H(-0XE, ctx->r17) = ctx->r12;
    // 0x800ED028: lh          $t5, -0xC($s0)
    ctx->r13 = MEM_H(ctx->r16, -0XC);
    // 0x800ED02C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800ED030: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800ED034: nop

    // 0x800ED038: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800ED03C: add.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ED040: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800ED044: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x800ED048: nop

    // 0x800ED04C: sh          $t7, -0xC($s1)
    MEM_H(-0XC, ctx->r17) = ctx->r15;
L_800ED050:
    // 0x800ED050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED054: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800ED058: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800ED05C: jr          $ra
    // 0x800ED060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800ED060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800ED064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED064: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800ED068: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x800ED06C: sll         $t9, $a3, 4
    ctx->r25 = S32(ctx->r7 << 4);
    // 0x800ED070: addu        $v1, $t9, $a1
    ctx->r3 = ADD32(ctx->r25, ctx->r5);
    // 0x800ED074: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800ED078: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x800ED07C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800ED080: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800ED084: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800ED088: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800ED08C: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x800ED090: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800ED094: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x800ED098: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800ED09C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800ED0A0: nop

    // 0x800ED0A4: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x800ED0A8: beq         $at, $zero, L_800ED0CC
    if (ctx->r1 == 0) {
        // 0x800ED0AC: sra         $v0, $t7, 16
        ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
            goto L_800ED0CC;
    }
    // 0x800ED0AC: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
L_800ED0B0:
    // 0x800ED0B0: lh          $t1, 0x2($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X2);
    // 0x800ED0B4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800ED0B8: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800ED0BC: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x800ED0C0: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800ED0C4: bne         $at, $zero, L_800ED0B0
    if (ctx->r1 != 0) {
        // 0x800ED0C8: sh          $t2, -0xE($a2)
        MEM_H(-0XE, ctx->r6) = ctx->r10;
            goto L_800ED0B0;
    }
    // 0x800ED0C8: sh          $t2, -0xE($a2)
    MEM_H(-0XE, ctx->r6) = ctx->r10;
L_800ED0CC:
    // 0x800ED0CC: jr          $ra
    // 0x800ED0D0: nop

    return;
    // 0x800ED0D0: nop

;}
RECOMP_FUNC void func_800ED0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED0D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800ED0D8: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x800ED0DC: sll         $t9, $a3, 4
    ctx->r25 = S32(ctx->r7 << 4);
    // 0x800ED0E0: addu        $v1, $t9, $a1
    ctx->r3 = ADD32(ctx->r25, ctx->r5);
    // 0x800ED0E4: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800ED0E8: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x800ED0EC: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800ED0F0: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800ED0F4: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800ED0F8: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800ED0FC: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x800ED100: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800ED104: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x800ED108: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800ED10C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800ED110: nop

    // 0x800ED114: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x800ED118: beq         $at, $zero, L_800ED13C
    if (ctx->r1 == 0) {
        // 0x800ED11C: sra         $v0, $t7, 16
        ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
            goto L_800ED13C;
    }
    // 0x800ED11C: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
L_800ED120:
    // 0x800ED120: lh          $t1, 0x4($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X4);
    // 0x800ED124: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800ED128: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800ED12C: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x800ED130: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800ED134: bne         $at, $zero, L_800ED120
    if (ctx->r1 != 0) {
        // 0x800ED138: sh          $t2, -0xC($a2)
        MEM_H(-0XC, ctx->r6) = ctx->r10;
            goto L_800ED120;
    }
    // 0x800ED138: sh          $t2, -0xC($a2)
    MEM_H(-0XC, ctx->r6) = ctx->r10;
L_800ED13C:
    // 0x800ED13C: jr          $ra
    // 0x800ED140: nop

    return;
    // 0x800ED140: nop

;}
RECOMP_FUNC void func_800ED144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800ED148: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800ED14C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800ED150: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x800ED154: addu        $v0, $t6, $a1
    ctx->r2 = ADD32(ctx->r14, ctx->r5);
    // 0x800ED158: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x800ED15C: lwc1        $f6, 0x9C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x800ED160: lwc1        $f8, 0x88($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X88);
    // 0x800ED164: lwc1        $f10, 0x78($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X78);
    // 0x800ED168: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800ED16C: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x800ED170: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800ED174: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800ED178: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x800ED17C: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x800ED180: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x800ED184: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800ED188: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800ED18C: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
    // 0x800ED190: lwc1        $f18, 0x80($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X80);
    // 0x800ED194: lwc1        $f16, 0x90($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X90);
    // 0x800ED198: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800ED19C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800ED1A0: swc1        $f6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f6.u32l;
    // 0x800ED1A4: lwc1        $f10, 0x84($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X84);
    // 0x800ED1A8: lwc1        $f8, 0x94($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X94);
    // 0x800ED1AC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800ED1B0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800ED1B4: beq         $at, $zero, L_800ED41C
    if (ctx->r1 == 0) {
        // 0x800ED1B8: swc1        $f18, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
            goto L_800ED41C;
    }
    // 0x800ED1B8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
L_800ED1BC:
    // 0x800ED1BC: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800ED1C0: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x800ED1C4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800ED1C8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800ED1CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800ED1D0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ED1D4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800ED1D8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800ED1DC: nop

    // 0x800ED1E0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800ED1E4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800ED1E8: nop

    // 0x800ED1EC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800ED1F0: beql        $t8, $zero, L_800ED240
    if (ctx->r24 == 0) {
        // 0x800ED1F4: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_800ED240;
    }
    goto skip_0;
    // 0x800ED1F4: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x800ED1F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800ED1FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800ED200: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800ED204: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800ED208: nop

    // 0x800ED20C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800ED210: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800ED214: nop

    // 0x800ED218: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800ED21C: bne         $t8, $zero, L_800ED234
    if (ctx->r24 != 0) {
        // 0x800ED220: nop
    
            goto L_800ED234;
    }
    // 0x800ED220: nop

    // 0x800ED224: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x800ED228: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ED22C: b           L_800ED24C
    // 0x800ED230: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_800ED24C;
    // 0x800ED230: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_800ED234:
    // 0x800ED234: b           L_800ED24C
    // 0x800ED238: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_800ED24C;
    // 0x800ED238: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800ED23C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_800ED240:
    // 0x800ED240: nop

    // 0x800ED244: bltz        $t8, L_800ED234
    if (SIGNED(ctx->r24) < 0) {
        // 0x800ED248: nop
    
            goto L_800ED234;
    }
    // 0x800ED248: nop

L_800ED24C:
    // 0x800ED24C: sb          $t8, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r24;
    // 0x800ED250: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800ED254: lwc1        $f18, 0x7C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x800ED258: lwc1        $f16, 0x8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8);
    // 0x800ED25C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800ED260: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ED264: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ED268: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800ED26C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800ED270: nop

    // 0x800ED274: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800ED278: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800ED27C: nop

    // 0x800ED280: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x800ED284: beql        $t0, $zero, L_800ED2D4
    if (ctx->r8 == 0) {
        // 0x800ED288: mfc1        $t0, $f6
        ctx->r8 = (int32_t)ctx->f6.u32l;
            goto L_800ED2D4;
    }
    goto skip_1;
    // 0x800ED288: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x800ED28C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED290: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800ED294: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800ED298: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800ED29C: nop

    // 0x800ED2A0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800ED2A4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800ED2A8: nop

    // 0x800ED2AC: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x800ED2B0: bne         $t0, $zero, L_800ED2C8
    if (ctx->r8 != 0) {
        // 0x800ED2B4: nop
    
            goto L_800ED2C8;
    }
    // 0x800ED2B4: nop

    // 0x800ED2B8: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800ED2BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ED2C0: b           L_800ED2E0
    // 0x800ED2C4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_800ED2E0;
    // 0x800ED2C4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_800ED2C8:
    // 0x800ED2C8: b           L_800ED2E0
    // 0x800ED2CC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_800ED2E0;
    // 0x800ED2CC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800ED2D0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
L_800ED2D4:
    // 0x800ED2D4: nop

    // 0x800ED2D8: bltz        $t0, L_800ED2C8
    if (SIGNED(ctx->r8) < 0) {
        // 0x800ED2DC: nop
    
            goto L_800ED2C8;
    }
    // 0x800ED2DC: nop

L_800ED2E0:
    // 0x800ED2E0: sb          $t0, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r8;
    // 0x800ED2E4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800ED2E8: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x800ED2EC: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800ED2F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ED2F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ED2F8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800ED2FC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800ED300: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800ED304: nop

    // 0x800ED308: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800ED30C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800ED310: nop

    // 0x800ED314: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x800ED318: beql        $t2, $zero, L_800ED368
    if (ctx->r10 == 0) {
        // 0x800ED31C: mfc1        $t2, $f18
        ctx->r10 = (int32_t)ctx->f18.u32l;
            goto L_800ED368;
    }
    goto skip_2;
    // 0x800ED31C: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    skip_2:
    // 0x800ED320: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800ED324: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ED328: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800ED32C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800ED330: nop

    // 0x800ED334: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800ED338: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800ED33C: nop

    // 0x800ED340: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x800ED344: bne         $t2, $zero, L_800ED35C
    if (ctx->r10 != 0) {
        // 0x800ED348: nop
    
            goto L_800ED35C;
    }
    // 0x800ED348: nop

    // 0x800ED34C: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x800ED350: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ED354: b           L_800ED374
    // 0x800ED358: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_800ED374;
    // 0x800ED358: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_800ED35C:
    // 0x800ED35C: b           L_800ED374
    // 0x800ED360: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_800ED374;
    // 0x800ED360: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800ED364: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
L_800ED368:
    // 0x800ED368: nop

    // 0x800ED36C: bltz        $t2, L_800ED35C
    if (SIGNED(ctx->r10) < 0) {
        // 0x800ED370: nop
    
            goto L_800ED35C;
    }
    // 0x800ED370: nop

L_800ED374:
    // 0x800ED374: sb          $t2, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r10;
    // 0x800ED378: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800ED37C: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x800ED380: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800ED384: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800ED388: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ED38C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800ED390: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800ED394: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800ED398: nop

    // 0x800ED39C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800ED3A0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800ED3A4: nop

    // 0x800ED3A8: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x800ED3AC: beql        $t4, $zero, L_800ED3FC
    if (ctx->r12 == 0) {
        // 0x800ED3B0: mfc1        $t4, $f10
        ctx->r12 = (int32_t)ctx->f10.u32l;
            goto L_800ED3FC;
    }
    goto skip_3;
    // 0x800ED3B0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x800ED3B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800ED3B8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800ED3BC: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800ED3C0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800ED3C4: nop

    // 0x800ED3C8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800ED3CC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800ED3D0: nop

    // 0x800ED3D4: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x800ED3D8: bne         $t4, $zero, L_800ED3F0
    if (ctx->r12 != 0) {
        // 0x800ED3DC: nop
    
            goto L_800ED3F0;
    }
    // 0x800ED3DC: nop

    // 0x800ED3E0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800ED3E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ED3E8: b           L_800ED408
    // 0x800ED3EC: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_800ED408;
    // 0x800ED3EC: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_800ED3F0:
    // 0x800ED3F0: b           L_800ED408
    // 0x800ED3F4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_800ED408;
    // 0x800ED3F4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800ED3F8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
L_800ED3FC:
    // 0x800ED3FC: nop

    // 0x800ED400: bltz        $t4, L_800ED3F0
    if (SIGNED(ctx->r12) < 0) {
        // 0x800ED404: nop
    
            goto L_800ED3F0;
    }
    // 0x800ED404: nop

L_800ED408:
    // 0x800ED408: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x800ED40C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800ED410: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800ED414: bne         $at, $zero, L_800ED1BC
    if (ctx->r1 != 0) {
        // 0x800ED418: sb          $t4, -0x1($a2)
        MEM_B(-0X1, ctx->r6) = ctx->r12;
            goto L_800ED1BC;
    }
    // 0x800ED418: sb          $t4, -0x1($a2)
    MEM_B(-0X1, ctx->r6) = ctx->r12;
L_800ED41C:
    // 0x800ED41C: jr          $ra
    // 0x800ED420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800ED420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800ED424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800ED428: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800ED42C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800ED430: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800ED434: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800ED438: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x800ED43C: lwc1        $f6, 0x9C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x800ED440: lwc1        $f2, 0x78($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X78);
    // 0x800ED444: lwc1        $f8, 0x88($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X88);
    // 0x800ED448: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800ED44C: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x800ED450: addu        $v0, $t6, $a1
    ctx->r2 = ADD32(ctx->r14, ctx->r5);
    // 0x800ED454: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x800ED458: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x800ED45C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800ED460: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x800ED464: div.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x800ED468: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x800ED46C: lwc1        $f10, 0x8C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x800ED470: lwc1        $f12, 0x7C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x800ED474: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x800ED478: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800ED47C: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x800ED480: div.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800ED484: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
    // 0x800ED488: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x800ED48C: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    // 0x800ED490: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x800ED494: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800ED498: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x800ED49C: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800ED4A0: swc1        $f4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f4.u32l;
    // 0x800ED4A4: lwc1        $f6, 0x94($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X94);
    // 0x800ED4A8: lwc1        $f16, 0x84($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X84);
    // 0x800ED4AC: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x800ED4B0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800ED4B4: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800ED4B8: div.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x800ED4BC: beq         $at, $zero, L_800ED794
    if (ctx->r1 == 0) {
        // 0x800ED4C0: swc1        $f6, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
            goto L_800ED794;
    }
    // 0x800ED4C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
L_800ED4C4:
    // 0x800ED4C4: lbu         $t7, 0xC($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XC);
    // 0x800ED4C8: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800ED4CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800ED4D0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800ED4D4: bgez        $t7, L_800ED4E8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800ED4D8: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800ED4E8;
    }
    // 0x800ED4D8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800ED4DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED4E0: nop

    // 0x800ED4E4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_800ED4E8:
    // 0x800ED4E8: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800ED4EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800ED4F0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ED4F4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800ED4F8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800ED4FC: nop

    // 0x800ED500: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800ED504: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800ED508: nop

    // 0x800ED50C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x800ED510: beql        $t9, $zero, L_800ED560
    if (ctx->r25 == 0) {
        // 0x800ED514: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_800ED560;
    }
    goto skip_0;
    // 0x800ED514: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x800ED518: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED51C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800ED520: sub.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x800ED524: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800ED528: nop

    // 0x800ED52C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800ED530: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800ED534: nop

    // 0x800ED538: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x800ED53C: bne         $t9, $zero, L_800ED554
    if (ctx->r25 != 0) {
        // 0x800ED540: nop
    
            goto L_800ED554;
    }
    // 0x800ED540: nop

    // 0x800ED544: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x800ED548: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ED54C: b           L_800ED56C
    // 0x800ED550: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_800ED56C;
    // 0x800ED550: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_800ED554:
    // 0x800ED554: b           L_800ED56C
    // 0x800ED558: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_800ED56C;
    // 0x800ED558: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800ED55C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_800ED560:
    // 0x800ED560: nop

    // 0x800ED564: bltz        $t9, L_800ED554
    if (SIGNED(ctx->r25) < 0) {
        // 0x800ED568: nop
    
            goto L_800ED554;
    }
    // 0x800ED568: nop

L_800ED56C:
    // 0x800ED56C: sb          $t9, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r25;
    // 0x800ED570: lbu         $t0, 0xD($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XD);
    // 0x800ED574: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800ED578: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x800ED57C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800ED580: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800ED584: bgez        $t0, L_800ED598
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800ED588: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800ED598;
    }
    // 0x800ED588: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800ED58C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED590: nop

    // 0x800ED594: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_800ED598:
    // 0x800ED598: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800ED59C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ED5A0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ED5A4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800ED5A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800ED5AC: nop

    // 0x800ED5B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800ED5B4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800ED5B8: nop

    // 0x800ED5BC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x800ED5C0: beql        $t2, $zero, L_800ED610
    if (ctx->r10 == 0) {
        // 0x800ED5C4: mfc1        $t2, $f6
        ctx->r10 = (int32_t)ctx->f6.u32l;
            goto L_800ED610;
    }
    goto skip_1;
    // 0x800ED5C4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x800ED5C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED5CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ED5D0: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800ED5D4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800ED5D8: nop

    // 0x800ED5DC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800ED5E0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800ED5E4: nop

    // 0x800ED5E8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x800ED5EC: bne         $t2, $zero, L_800ED604
    if (ctx->r10 != 0) {
        // 0x800ED5F0: nop
    
            goto L_800ED604;
    }
    // 0x800ED5F0: nop

    // 0x800ED5F4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x800ED5F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ED5FC: b           L_800ED61C
    // 0x800ED600: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_800ED61C;
    // 0x800ED600: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_800ED604:
    // 0x800ED604: b           L_800ED61C
    // 0x800ED608: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_800ED61C;
    // 0x800ED608: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800ED60C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
L_800ED610:
    // 0x800ED610: nop

    // 0x800ED614: bltz        $t2, L_800ED604
    if (SIGNED(ctx->r10) < 0) {
        // 0x800ED618: nop
    
            goto L_800ED604;
    }
    // 0x800ED618: nop

L_800ED61C:
    // 0x800ED61C: sb          $t2, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r10;
    // 0x800ED620: lbu         $t3, 0xE($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0XE);
    // 0x800ED624: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800ED628: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800ED62C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800ED630: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800ED634: bgez        $t3, L_800ED648
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800ED638: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800ED648;
    }
    // 0x800ED638: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800ED63C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED640: nop

    // 0x800ED644: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_800ED648:
    // 0x800ED648: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800ED64C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800ED650: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ED654: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800ED658: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800ED65C: nop

    // 0x800ED660: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800ED664: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800ED668: nop

    // 0x800ED66C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800ED670: beql        $t5, $zero, L_800ED6C0
    if (ctx->r13 == 0) {
        // 0x800ED674: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_800ED6C0;
    }
    goto skip_2;
    // 0x800ED674: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x800ED678: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED67C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800ED680: sub.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x800ED684: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800ED688: nop

    // 0x800ED68C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800ED690: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800ED694: nop

    // 0x800ED698: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800ED69C: bne         $t5, $zero, L_800ED6B4
    if (ctx->r13 != 0) {
        // 0x800ED6A0: nop
    
            goto L_800ED6B4;
    }
    // 0x800ED6A0: nop

    // 0x800ED6A4: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x800ED6A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ED6AC: b           L_800ED6CC
    // 0x800ED6B0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_800ED6CC;
    // 0x800ED6B0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_800ED6B4:
    // 0x800ED6B4: b           L_800ED6CC
    // 0x800ED6B8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_800ED6CC;
    // 0x800ED6B8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800ED6BC: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_800ED6C0:
    // 0x800ED6C0: nop

    // 0x800ED6C4: bltz        $t5, L_800ED6B4
    if (SIGNED(ctx->r13) < 0) {
        // 0x800ED6C8: nop
    
            goto L_800ED6B4;
    }
    // 0x800ED6C8: nop

L_800ED6CC:
    // 0x800ED6CC: sb          $t5, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r13;
    // 0x800ED6D0: lbu         $t6, 0xF($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XF);
    // 0x800ED6D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800ED6D8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800ED6DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800ED6E0: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800ED6E4: bgez        $t6, L_800ED6FC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800ED6E8: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800ED6FC;
    }
    // 0x800ED6E8: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800ED6EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800ED6F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED6F4: nop

    // 0x800ED6F8: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_800ED6FC:
    // 0x800ED6FC: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800ED700: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800ED704: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800ED708: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800ED70C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800ED710: nop

    // 0x800ED714: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800ED718: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800ED71C: nop

    // 0x800ED720: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800ED724: beql        $t8, $zero, L_800ED774
    if (ctx->r24 == 0) {
        // 0x800ED728: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_800ED774;
    }
    goto skip_3;
    // 0x800ED728: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x800ED72C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED730: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800ED734: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800ED738: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800ED73C: nop

    // 0x800ED740: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800ED744: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800ED748: nop

    // 0x800ED74C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800ED750: bne         $t8, $zero, L_800ED768
    if (ctx->r24 != 0) {
        // 0x800ED754: nop
    
            goto L_800ED768;
    }
    // 0x800ED754: nop

    // 0x800ED758: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800ED75C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800ED760: b           L_800ED780
    // 0x800ED764: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_800ED780;
    // 0x800ED764: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_800ED768:
    // 0x800ED768: b           L_800ED780
    // 0x800ED76C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_800ED780;
    // 0x800ED76C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800ED770: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_800ED774:
    // 0x800ED774: nop

    // 0x800ED778: bltz        $t8, L_800ED768
    if (SIGNED(ctx->r24) < 0) {
        // 0x800ED77C: nop
    
            goto L_800ED768;
    }
    // 0x800ED77C: nop

L_800ED780:
    // 0x800ED780: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x800ED784: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800ED788: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800ED78C: bne         $at, $zero, L_800ED4C4
    if (ctx->r1 != 0) {
        // 0x800ED790: sb          $t8, -0x1($a2)
        MEM_B(-0X1, ctx->r6) = ctx->r24;
            goto L_800ED4C4;
    }
    // 0x800ED790: sb          $t8, -0x1($a2)
    MEM_B(-0X1, ctx->r6) = ctx->r24;
L_800ED794:
    // 0x800ED794: jr          $ra
    // 0x800ED798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800ED798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800ED79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED79C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800ED7A0: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x800ED7A4: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x800ED7A8: addu        $v1, $t7, $a1
    ctx->r3 = ADD32(ctx->r15, ctx->r5);
    // 0x800ED7AC: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x800ED7B0: lwc1        $f6, 0x9C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x800ED7B4: lwc1        $f2, 0x84($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X84);
    // 0x800ED7B8: lwc1        $f8, 0x94($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X94);
    // 0x800ED7BC: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800ED7C0: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800ED7C4: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x800ED7C8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800ED7CC: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x800ED7D0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800ED7D4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x800ED7D8: beq         $at, $zero, L_800ED7F0
    if (ctx->r1 == 0) {
        // 0x800ED7DC: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_800ED7F0;
    }
L_800ED7DC:
    // 0x800ED7DC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800ED7E0: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800ED7E4: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800ED7E8: bne         $at, $zero, L_800ED7DC
    if (ctx->r1 != 0) {
        // 0x800ED7EC: sb          $v0, -0x1($a2)
        MEM_B(-0X1, ctx->r6) = ctx->r2;
            goto L_800ED7DC;
    }
    // 0x800ED7EC: sb          $v0, -0x1($a2)
    MEM_B(-0X1, ctx->r6) = ctx->r2;
L_800ED7F0:
    // 0x800ED7F0: jr          $ra
    // 0x800ED7F4: nop

    return;
    // 0x800ED7F4: nop

;}
RECOMP_FUNC void func_800ED7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED7F8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800ED7FC: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x800ED800: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x800ED804: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800ED808: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800ED80C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800ED810: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800ED814: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800ED818: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800ED81C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800ED820: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x800ED824: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800ED828: lh          $t7, 0x14($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X14);
    // 0x800ED82C: lh          $t6, 0x1A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X1A);
    // 0x800ED830: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800ED834: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800ED838: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800ED83C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800ED840: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800ED844: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x800ED848: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800ED84C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800ED850: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800ED854: sll         $t2, $a3, 4
    ctx->r10 = S32(ctx->r7 << 4);
    // 0x800ED858: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800ED85C: addu        $s3, $t2, $a1
    ctx->r19 = ADD32(ctx->r10, ctx->r5);
    // 0x800ED860: sltu        $at, $a1, $s3
    ctx->r1 = ctx->r5 < ctx->r19 ? 1 : 0;
    // 0x800ED864: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800ED868: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800ED86C: addiu       $s2, $sp, 0x48
    ctx->r18 = ADD32(ctx->r29, 0X48);
    // 0x800ED870: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800ED874: nop

    // 0x800ED878: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800ED87C: add.s       $f20, $f0, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x800ED880: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x800ED884: lh          $t0, 0x16($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X16);
    // 0x800ED888: lh          $t9, 0x1C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X1C);
    // 0x800ED88C: swc1        $f22, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f22.u32l;
    // 0x800ED890: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800ED894: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800ED898: nop

    // 0x800ED89C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800ED8A0: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x800ED8A4: beq         $at, $zero, L_800ED940
    if (ctx->r1 == 0) {
        // 0x800ED8A8: swc1        $f18, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
            goto L_800ED940;
    }
    // 0x800ED8A8: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
L_800ED8AC:
    // 0x800ED8AC: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x800ED8B0: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x800ED8B4: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800ED8B8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800ED8BC: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800ED8C0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x800ED8C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800ED8C8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800ED8CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800ED8D0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800ED8D4: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x800ED8D8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800ED8DC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800ED8E0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800ED8E4: jal         0x800EFA4C
    // 0x800ED8E8: nop

    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x800ED8E8: nop

    after_0:
    // 0x800ED8EC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800ED8F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800ED8F4: jal         0x800EF9A8
    // 0x800ED8F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EF9A8(rdram, ctx);
        goto after_1;
    // 0x800ED8F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x800ED8FC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800ED900: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800ED904: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800ED908: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x800ED90C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800ED910: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x800ED914: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800ED918: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800ED91C: nop

    // 0x800ED920: sh          $t6, -0x10($s1)
    MEM_H(-0X10, ctx->r17) = ctx->r14;
    // 0x800ED924: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800ED928: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800ED92C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800ED930: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800ED934: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x800ED938: bne         $at, $zero, L_800ED8AC
    if (ctx->r1 != 0) {
        // 0x800ED93C: sh          $t8, -0xE($s1)
        MEM_H(-0XE, ctx->r17) = ctx->r24;
            goto L_800ED8AC;
    }
    // 0x800ED93C: sh          $t8, -0xE($s1)
    MEM_H(-0XE, ctx->r17) = ctx->r24;
L_800ED940:
    // 0x800ED940: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800ED944: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800ED948: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800ED94C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800ED950: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800ED954: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED958: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800ED95C: jr          $ra
    // 0x800ED960: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800ED960: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800ED964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800ED968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800ED96C: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x800ED970: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800ED974: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800ED978: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800ED97C: nop

    // 0x800ED980: bc1fl       L_800ED994
    if (!c1cs) {
        // 0x800ED984: lw          $v0, 0xC($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XC);
            goto L_800ED994;
    }
    goto skip_0;
    // 0x800ED984: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    skip_0:
    // 0x800ED988: lwc1        $f8, 0x5E60($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5E60);
    // 0x800ED98C: swc1        $f8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f8.u32l;
    // 0x800ED990: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
L_800ED994:
    // 0x800ED994: beql        $v0, $zero, L_800ED9A8
    if (ctx->r2 == 0) {
        // 0x800ED998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800ED9A8;
    }
    goto skip_1;
    // 0x800ED998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800ED99C: jalr        $v0
    // 0x800ED9A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800ED9A0: nop

    after_0:
    // 0x800ED9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800ED9A8:
    // 0x800ED9A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800ED9AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800ED9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED9B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800ED9B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800ED9BC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800ED9C0: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800ED9C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800ED9C8: swc1        $f4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
    // 0x800ED9CC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800ED9D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800ED9D4: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x800ED9D8: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800ED9DC: swc1        $f8, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f8.u32l;
    // 0x800ED9E0: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800ED9E4: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x800ED9E8: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x800ED9EC: swc1        $f16, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f16.u32l;
    // 0x800ED9F0: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x800ED9F4: sb          $t6, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r14;
    // 0x800ED9F8: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x800ED9FC: swc1        $f12, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f12.u32l;
    // 0x800EDA00: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x800EDA04: swc1        $f18, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f18.u32l;
    // 0x800EDA08: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800EDA0C: jal         0x800ED964
    // 0x800EDA10: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    func_800ED964(rdram, ctx);
        goto after_0;
    // 0x800EDA10: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    after_0:
    // 0x800EDA14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EDA18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EDA1C: jr          $ra
    // 0x800EDA20: nop

    return;
    // 0x800EDA20: nop

;}
RECOMP_FUNC void func_800EDA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDA24: jr          $ra
    // 0x800EDA28: lh          $v0, 0x4C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4C);
    return;
    // 0x800EDA28: lh          $v0, 0x4C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4C);
;}
RECOMP_FUNC void func_800EDA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDA2C: lh          $t6, 0x14($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X14);
    // 0x800EDA30: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EDA34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800EDA38: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800EDA3C: nop

    // 0x800EDA40: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EDA44: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x800EDA48: nop

    // 0x800EDA4C: bc1f        L_800EDA58
    if (!c1cs) {
        // 0x800EDA50: nop
    
            goto L_800EDA58;
    }
    // 0x800EDA50: nop

    // 0x800EDA54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EDA58:
    // 0x800EDA58: beq         $v0, $zero, L_800EDAEC
    if (ctx->r2 == 0) {
        // 0x800EDA5C: nop
    
            goto L_800EDAEC;
    }
    // 0x800EDA5C: nop

    // 0x800EDA60: lh          $t7, 0x1A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1A);
    // 0x800EDA64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800EDA68: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800EDA6C: nop

    // 0x800EDA70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EDA74: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800EDA78: nop

    // 0x800EDA7C: bc1f        L_800EDA88
    if (!c1cs) {
        // 0x800EDA80: nop
    
            goto L_800EDA88;
    }
    // 0x800EDA80: nop

    // 0x800EDA84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EDA88:
    // 0x800EDA88: beq         $v0, $zero, L_800EDAEC
    if (ctx->r2 == 0) {
        // 0x800EDA8C: nop
    
            goto L_800EDAEC;
    }
    // 0x800EDA8C: nop

    // 0x800EDA90: lh          $t8, 0x18($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X18);
    // 0x800EDA94: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800EDA98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800EDA9C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800EDAA0: nop

    // 0x800EDAA4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EDAA8: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x800EDAAC: nop

    // 0x800EDAB0: bc1f        L_800EDABC
    if (!c1cs) {
        // 0x800EDAB4: nop
    
            goto L_800EDABC;
    }
    // 0x800EDAB4: nop

    // 0x800EDAB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EDABC:
    // 0x800EDABC: beq         $v0, $zero, L_800EDAEC
    if (ctx->r2 == 0) {
        // 0x800EDAC0: nop
    
            goto L_800EDAEC;
    }
    // 0x800EDAC0: nop

    // 0x800EDAC4: lh          $t9, 0x1E($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X1E);
    // 0x800EDAC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800EDACC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800EDAD0: nop

    // 0x800EDAD4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EDAD8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800EDADC: nop

    // 0x800EDAE0: bc1f        L_800EDAEC
    if (!c1cs) {
        // 0x800EDAE4: nop
    
            goto L_800EDAEC;
    }
    // 0x800EDAE4: nop

    // 0x800EDAE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800EDAEC:
    // 0x800EDAEC: jr          $ra
    // 0x800EDAF0: nop

    return;
    // 0x800EDAF0: nop

;}
RECOMP_FUNC void func_800EDAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDAF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EDAF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EDAFC: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x800EDB00: beql        $a1, $zero, L_800EDB14
    if (ctx->r5 == 0) {
        // 0x800EDB04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EDB14;
    }
    goto skip_0;
    // 0x800EDB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800EDB08: jal         0x800C2FDC
    // 0x800EDB0C: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x800EDB0C: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    after_0:
    // 0x800EDB10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EDB14:
    // 0x800EDB14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EDB18: jr          $ra
    // 0x800EDB1C: nop

    return;
    // 0x800EDB1C: nop

;}
RECOMP_FUNC void func_800EDB20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDB20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EDB24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EDB28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EDB2C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EDB30: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800EDB34: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800EDB38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800EDB3C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800EDB40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800EDB44: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x800EDB48: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x800EDB4C: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x800EDB50: sb          $zero, 0x29($a0)
    MEM_B(0X29, ctx->r4) = 0;
    // 0x800EDB54: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x800EDB58: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x800EDB5C: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x800EDB60: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x800EDB64: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x800EDB68: swc1        $f0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f0.u32l;
    // 0x800EDB6C: swc1        $f0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f0.u32l;
    // 0x800EDB70: swc1        $f2, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f2.u32l;
    // 0x800EDB74: swc1        $f2, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f2.u32l;
    // 0x800EDB78: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDB7C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800EDB80: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x800EDB84: jal         0x80088888
    // 0x800EDB88: addiu       $a3, $s0, 0x1A
    ctx->r7 = ADD32(ctx->r16, 0X1A);
    _glidmake_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800EDB88: addiu       $a3, $s0, 0x1A
    ctx->r7 = ADD32(ctx->r16, 0X1A);
    after_0:
    // 0x800EDB8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EDB90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EDB94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EDB98: jr          $ra
    // 0x800EDB9C: nop

    return;
    // 0x800EDB9C: nop

;}
RECOMP_FUNC void func_800EDBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDBA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EDBA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EDBA8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EDBAC: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800EDBB0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800EDBB4: swc1        $f4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
    // 0x800EDBB8: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800EDBBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EDBC0: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x800EDBC4: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800EDBC8: swc1        $f8, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f8.u32l;
    // 0x800EDBCC: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800EDBD0: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x800EDBD4: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x800EDBD8: swc1        $f16, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f16.u32l;
    // 0x800EDBDC: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x800EDBE0: sb          $t6, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r14;
    // 0x800EDBE4: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x800EDBE8: swc1        $f12, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f12.u32l;
    // 0x800EDBEC: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x800EDBF0: swc1        $f18, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f18.u32l;
    // 0x800EDBF4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800EDBF8: jal         0x800ED964
    // 0x800EDBFC: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    func_800ED964(rdram, ctx);
        goto after_0;
    // 0x800EDBFC: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    after_0:
    // 0x800EDC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EDC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EDC08: jr          $ra
    // 0x800EDC0C: nop

    return;
    // 0x800EDC0C: nop

;}
RECOMP_FUNC void func_800EDC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDC10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EDC14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EDC18: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800EDC1C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800EDC20: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800EDC24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EDC28: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800EDC2C: sb          $t6, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r14;
    // 0x800EDC30: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
    // 0x800EDC34: swc1        $f14, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f14.u32l;
    // 0x800EDC38: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x800EDC3C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800EDC40: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x800EDC44: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x800EDC48: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800EDC4C: jal         0x800ED964
    // 0x800EDC50: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    func_800ED964(rdram, ctx);
        goto after_0;
    // 0x800EDC50: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    after_0:
    // 0x800EDC54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EDC58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EDC5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EDC64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDC64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EDC68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EDC6C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800EDC70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800EDC74: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800EDC78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EDC7C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x800EDC80: sb          $t6, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r14;
    // 0x800EDC84: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
    // 0x800EDC88: swc1        $f14, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f14.u32l;
    // 0x800EDC8C: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x800EDC90: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800EDC94: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x800EDC98: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x800EDC9C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800EDCA0: jal         0x800ED964
    // 0x800EDCA4: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    func_800ED964(rdram, ctx);
        goto after_0;
    // 0x800EDCA4: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    after_0:
    // 0x800EDCA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EDCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EDCB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EDCB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDCB8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800EDCBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EDCC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EDCC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800EDCC8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800EDCCC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800EDCD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800EDCD4: jal         0x800EDC10
    // 0x800EDCD8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_800EDC10(rdram, ctx);
        goto after_0;
    // 0x800EDCD8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x800EDCDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EDCE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EDCE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EDCEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDCEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800EDCF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EDCF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EDCF8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800EDCFC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800EDD00: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800EDD04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800EDD08: jal         0x800EDC64
    // 0x800EDD0C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_800EDC64(rdram, ctx);
        goto after_0;
    // 0x800EDD0C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x800EDD10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EDD14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EDD18: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EDD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDD20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EDD24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EDD28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800EDD2C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EDD30: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800EDD34: jal         0x800EE010
    // 0x800EDD38: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800EE010(rdram, ctx);
        goto after_0;
    // 0x800EDD38: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800EDD3C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800EDD40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EDD44: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800EDD48: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800EDD4C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDD50: jal         0x800EDC10
    // 0x800EDD54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800EDC10(rdram, ctx);
        goto after_1;
    // 0x800EDD54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x800EDD58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EDD5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EDD60: jr          $ra
    // 0x800EDD64: nop

    return;
    // 0x800EDD64: nop

;}
RECOMP_FUNC void func_800EDD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDD68: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EDD6C: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800EDD70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800EDD74: swc1        $f4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f4.u32l;
    // 0x800EDD78: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800EDD7C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800EDD80: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EDD84: swc1        $f6, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f6.u32l;
    // 0x800EDD88: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800EDD8C: swc1        $f8, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f8.u32l;
    // 0x800EDD90: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x800EDD94: swc1        $f10, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f10.u32l;
    // 0x800EDD98: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800EDD9C: swc1        $f16, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f16.u32l;
    // 0x800EDDA0: lwc1        $f18, 0x4($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X4);
    // 0x800EDDA4: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x800EDDA8: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x800EDDAC: swc1        $f4, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f4.u32l;
    // 0x800EDDB0: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x800EDDB4: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x800EDDB8: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x800EDDBC: bc1f        L_800EDDCC
    if (!c1cs) {
            // 0x800EDDC0: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    func_800EDDCC(rdram, ctx);
    return;
    }
    // 0x800EDDC0: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    // 0x800EDDC4: jr          $ra
    // 0x800EDDC8: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x800EDDC8: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800EDDCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDDCC: lwc1        $f8, 0x5E64($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5E64);
    // 0x800EDDD0: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    // 0x800EDDD4: jr          $ra
    // 0x800EDDD8: nop

    return;
    // 0x800EDDD8: nop

;}
RECOMP_FUNC void func_800EDDDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDDDC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EDDE0: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800EDDE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800EDDE8: swc1        $f4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f4.u32l;
    // 0x800EDDEC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800EDDF0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800EDDF4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EDDF8: swc1        $f6, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f6.u32l;
    // 0x800EDDFC: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800EDE00: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x800EDE04: swc1        $f8, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f8.u32l;
    // 0x800EDE08: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x800EDE0C: swc1        $f10, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f10.u32l;
    // 0x800EDE10: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800EDE14: swc1        $f16, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f16.u32l;
    // 0x800EDE18: lwc1        $f18, 0x4($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X4);
    // 0x800EDE1C: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x800EDE20: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x800EDE24: swc1        $f4, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f4.u32l;
    // 0x800EDE28: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x800EDE2C: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x800EDE30: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x800EDE34: bc1f        L_800EDE44
    if (!c1cs) {
        // 0x800EDE38: swc1        $f6, 0x6C($a0)
        MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
            goto L_800EDE44;
    }
    // 0x800EDE38: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    // 0x800EDE3C: b           L_800EDE4C
    // 0x800EDE40: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
        goto L_800EDE4C;
    // 0x800EDE40: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
L_800EDE44:
    // 0x800EDE44: lwc1        $f8, 0x5E68($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5E68);
    // 0x800EDE48: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
L_800EDE4C:
    // 0x800EDE4C: jr          $ra
    // 0x800EDE50: sb          $t6, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r14;
    return;
    // 0x800EDE50: sb          $t6, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_800EDE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDE54: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800EDE58: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800EDE5C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EDE60: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800EDE64: nop

    // 0x800EDE68: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EDE6C: swc1        $f6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f6.u32l;
    // 0x800EDE70: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x800EDE74: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800EDE78: nop

    // 0x800EDE7C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EDE80: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x800EDE84: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x800EDE88: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800EDE8C: nop

    // 0x800EDE90: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EDE94: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
    // 0x800EDE98: lw          $t9, 0xC($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XC);
    // 0x800EDE9C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800EDEA0: nop

    // 0x800EDEA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EDEA8: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
    // 0x800EDEAC: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x800EDEB0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800EDEB4: nop

    // 0x800EDEB8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EDEBC: swc1        $f10, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f10.u32l;
    // 0x800EDEC0: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x800EDEC4: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800EDEC8: nop

    // 0x800EDECC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EDED0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EDED4: nop

    // 0x800EDED8: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x800EDEDC: swc1        $f18, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f18.u32l;
    // 0x800EDEE0: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x800EDEE4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800EDEE8: nop

    // 0x800EDEEC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EDEF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EDEF4: swc1        $f6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f6.u32l;
    // 0x800EDEF8: lw          $t3, 0xC($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XC);
    // 0x800EDEFC: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x800EDF00: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800EDF04: nop

    // 0x800EDF08: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EDF0C: bc1f        L_800EDF1C
    if (!c1cs) {
        // 0x800EDF10: swc1        $f10, 0x94($a0)
        MEM_W(0X94, ctx->r4) = ctx->f10.u32l;
            goto L_800EDF1C;
    }
    // 0x800EDF10: swc1        $f10, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f10.u32l;
    // 0x800EDF14: b           L_800EDF24
    // 0x800EDF18: swc1        $f12, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f12.u32l;
        goto L_800EDF24;
    // 0x800EDF18: swc1        $f12, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f12.u32l;
L_800EDF1C:
    // 0x800EDF1C: lwc1        $f18, 0x5E6C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5E6C);
    // 0x800EDF20: swc1        $f18, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f18.u32l;
L_800EDF24:
    // 0x800EDF24: jr          $ra
    // 0x800EDF28: swc1        $f4, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x800EDF28: swc1        $f4, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800EDF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDF2C: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x800EDF30: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x800EDF34: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800EDF38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800EDF3C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EDF40: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EDF44: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800EDF48: sb          $t6, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r14;
    // 0x800EDF4C: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x800EDF50: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EDF54: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EDF58: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
    // 0x800EDF5C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x800EDF60: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x800EDF64: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x800EDF68: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x800EDF6C: swc1        $f10, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f10.u32l;
    // 0x800EDF70: swc1        $f0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f0.u32l;
    // 0x800EDF74: swc1        $f0, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f0.u32l;
    // 0x800EDF78: bc1f        L_800EDF88
    if (!c1cs) {
        // 0x800EDF7C: swc1        $f0, 0x88($a0)
        MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
            goto L_800EDF88;
    }
    // 0x800EDF7C: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    // 0x800EDF80: b           L_800EDF90
    // 0x800EDF84: swc1        $f12, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f12.u32l;
        goto L_800EDF90;
    // 0x800EDF84: swc1        $f12, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f12.u32l;
L_800EDF88:
    // 0x800EDF88: lwc1        $f18, 0x5E70($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5E70);
    // 0x800EDF8C: swc1        $f18, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f18.u32l;
L_800EDF90:
    // 0x800EDF90: jr          $ra
    // 0x800EDF94: swc1        $f0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x800EDF94: swc1        $f0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_800EDF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDF98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EDF9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EDFA0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800EDFA4: jal         0x800EDF2C
    // 0x800EDFA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_800EDF2C(rdram, ctx);
        goto after_0;
    // 0x800EDFA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x800EDFAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EDFB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EDFB4: jr          $ra
    // 0x800EDFB8: nop

    return;
    // 0x800EDFB8: nop

;}
RECOMP_FUNC void func_800EDFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDFBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EDFC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EDFC4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800EDFC8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800EDFCC: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800EDFD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EDFD4: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800EDFD8: sb          $t6, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r14;
    // 0x800EDFDC: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
    // 0x800EDFE0: swc1        $f14, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f14.u32l;
    // 0x800EDFE4: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x800EDFE8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800EDFEC: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x800EDFF0: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x800EDFF4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800EDFF8: jal         0x800ED964
    // 0x800EDFFC: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    func_800ED964(rdram, ctx);
        goto after_0;
    // 0x800EDFFC: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    after_0:
    // 0x800EE000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EE004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EE008: jr          $ra
    // 0x800EE00C: nop

    return;
    // 0x800EE00C: nop

;}
RECOMP_FUNC void func_800EE010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EE014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE018: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x800EE01C: lui         $a3, 0x3F66
    ctx->r7 = S32(0X3F66 << 16);
    // 0x800EE020: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x800EE024: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x800EE028: jal         0x800EE040
    // 0x800EE02C: addiu       $a1, $zero, 0x3EC
    ctx->r5 = ADD32(0, 0X3EC);
    func_800EE040(rdram, ctx);
        goto after_0;
    // 0x800EE02C: addiu       $a1, $zero, 0x3EC
    ctx->r5 = ADD32(0, 0X3EC);
    after_0:
    // 0x800EE030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EE034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EE038: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EE040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EE044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EE048: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EE04C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EE050: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800EE054: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800EE058: lbu         $a2, 0x0($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X0);
    // 0x800EE05C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800EE060: bnel        $a2, $zero, L_800EE07C
    if (ctx->r6 != 0) {
        // 0x800EE064: lwc1        $f4, 0x28($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
            goto L_800EE07C;
    }
    goto skip_0;
    // 0x800EE064: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x800EE068: jal         0x800C2E04
    // 0x800EE06C: nop

    func_800C2E04(rdram, ctx);
        goto after_0;
    // 0x800EE06C: nop

    after_0:
    // 0x800EE070: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800EE074: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x800EE078: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
L_800EE07C:
    // 0x800EE07C: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x800EE080: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x800EE084: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800EE088: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x800EE08C: jal         0x800C301C
    // 0x800EE090: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800C301C(rdram, ctx);
        goto after_1;
    // 0x800EE090: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800EE094: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x800EE098: jal         0x800C330C
    // 0x800EE09C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_2;
    // 0x800EE09C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x800EE0A0: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EE0A4: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800EE0A8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EE0AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EE0B0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800EE0B4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x800EE0B8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800EE0BC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800EE0C0: jal         0x800C31DC
    // 0x800EE0C4: nop

    func_800C31DC(rdram, ctx);
        goto after_3;
    // 0x800EE0C4: nop

    after_3:
    // 0x800EE0C8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x800EE0CC: jal         0x800C3058
    // 0x800EE0D0: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    func_800C3058(rdram, ctx);
        goto after_4;
    // 0x800EE0D0: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    after_4:
    // 0x800EE0D4: jal         0x800C3BDC
    // 0x800EE0D8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_800C3BDC(rdram, ctx);
        goto after_5;
    // 0x800EE0D8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_5:
    // 0x800EE0DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EE0E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EE0E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EE0E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EE0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE0F0: jr          $ra
    // 0x800EE0F4: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    return;
    // 0x800EE0F4: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800EE0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE0F8: jr          $ra
    // 0x800EE0FC: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
    return;
    // 0x800EE0FC: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800EE100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE100: jr          $ra
    // 0x800EE104: sh          $a1, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r5;
    return;
    // 0x800EE104: sh          $a1, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800EE108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE108: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EE10C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EE110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EE114: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800EE118: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800EE11C: jal         0x800D8FF8
    // 0x800EE120: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800EE120: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x800EE124: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x800EE128: lwc1        $f2, 0x74($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
    // 0x800EE12C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EE130: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800EE134: addiu       $a2, $a2, -0x3610
    ctx->r6 = ADD32(ctx->r6, -0X3610);
    // 0x800EE138: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x800EE13C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x800EE140: bc1fl       L_800EE1B4
    if (!c1cs) {
        // 0x800EE144: lwc1        $f0, 0x9C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
            goto L_800EE1B4;
    }
    goto skip_0;
    // 0x800EE144: lwc1        $f0, 0x9C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
    skip_0:
    // 0x800EE148: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x800EE14C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x800EE150: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x800EE154: lwc1        $f10, 0x70($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X70);
    // 0x800EE158: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x800EE15C: nop

    // 0x800EE160: bc1fl       L_800EE184
    if (!c1cs) {
        // 0x800EE164: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_800EE184;
    }
    goto skip_1;
    // 0x800EE164: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x800EE168: lbu         $t6, 0x28($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X28);
    // 0x800EE16C: swc1        $f2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f2.u32l;
    // 0x800EE170: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800EE174: bnel        $t6, $zero, L_800EE184
    if (ctx->r14 != 0) {
        // 0x800EE178: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_800EE184;
    }
    goto skip_2;
    // 0x800EE178: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x800EE17C: sb          $t7, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r15;
    // 0x800EE180: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
L_800EE184:
    // 0x800EE184: jal         0x80088660
    // 0x800EE188: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    _glid_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x800EE188: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x800EE18C: lbu         $v0, 0x28($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28);
    // 0x800EE190: beq         $v0, $zero, L_800EE1B0
    if (ctx->r2 == 0) {
        // 0x800EE194: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_800EE1B0;
    }
    // 0x800EE194: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x800EE198: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x800EE19C: bne         $t9, $zero, L_800EE1B0
    if (ctx->r25 != 0) {
        // 0x800EE1A0: sb          $t8, 0x28($s0)
        MEM_B(0X28, ctx->r16) = ctx->r24;
            goto L_800EE1B0;
    }
    // 0x800EE1A0: sb          $t8, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r24;
    // 0x800EE1A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800EE1A8: nop

    // 0x800EE1AC: swc1        $f18, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f18.u32l;
L_800EE1B0:
    // 0x800EE1B0: lwc1        $f0, 0x9C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
L_800EE1B4:
    // 0x800EE1B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EE1B8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800EE1BC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800EE1C0: nop

    // 0x800EE1C4: bc1fl       L_800EE29C
    if (!c1cs) {
        // 0x800EE1C8: lbu         $v0, 0x29($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X29);
            goto L_800EE29C;
    }
    goto skip_3;
    // 0x800EE1C8: lbu         $v0, 0x29($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X29);
    skip_3:
    // 0x800EE1CC: lwc1        $f6, 0x98($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X98);
    // 0x800EE1D0: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800EE1D4: addiu       $a2, $a2, -0x2864
    ctx->r6 = ADD32(ctx->r6, -0X2864);
    // 0x800EE1D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EE1DC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x800EE1E0: swc1        $f10, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f10.u32l;
    // 0x800EE1E4: lwc1        $f18, 0x98($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X98);
    // 0x800EE1E8: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x800EE1EC: nop

    // 0x800EE1F0: bc1fl       L_800EE214
    if (!c1cs) {
        // 0x800EE1F4: lbu         $v0, 0x29($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X29);
            goto L_800EE214;
    }
    goto skip_4;
    // 0x800EE1F4: lbu         $v0, 0x29($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X29);
    skip_4:
    // 0x800EE1F8: lbu         $t0, 0x28($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X28);
    // 0x800EE1FC: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    // 0x800EE200: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800EE204: bnel        $t0, $zero, L_800EE214
    if (ctx->r8 != 0) {
        // 0x800EE208: lbu         $v0, 0x29($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X29);
            goto L_800EE214;
    }
    goto skip_5;
    // 0x800EE208: lbu         $v0, 0x29($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X29);
    skip_5:
    // 0x800EE20C: sb          $t1, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r9;
    // 0x800EE210: lbu         $v0, 0x29($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X29);
L_800EE214:
    // 0x800EE214: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800EE218: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800EE21C: beq         $v0, $at, L_800EE234
    if (ctx->r2 == ctx->r1) {
        // 0x800EE220: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_800EE234;
    }
    // 0x800EE220: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800EE224: beq         $v0, $at, L_800EE244
    if (ctx->r2 == ctx->r1) {
        // 0x800EE228: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_800EE244;
    }
    // 0x800EE228: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800EE22C: b           L_800EE260
    // 0x800EE230: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
        goto L_800EE260;
    // 0x800EE230: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
L_800EE234:
    // 0x800EE234: jal         0x80088660
    // 0x800EE238: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    _glid_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x800EE238: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x800EE23C: b           L_800EE278
    // 0x800EE240: lbu         $v0, 0x28($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28);
        goto L_800EE278;
    // 0x800EE240: lbu         $v0, 0x28($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28);
L_800EE244:
    // 0x800EE244: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800EE248: addiu       $a2, $a2, -0x2BDC
    ctx->r6 = ADD32(ctx->r6, -0X2BDC);
    // 0x800EE24C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800EE250: jal         0x80088660
    // 0x800EE254: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _glid_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x800EE254: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_3:
    // 0x800EE258: b           L_800EE278
    // 0x800EE25C: lbu         $v0, 0x28($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28);
        goto L_800EE278;
    // 0x800EE25C: lbu         $v0, 0x28($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28);
L_800EE260:
    // 0x800EE260: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800EE264: addiu       $a2, $a2, -0x2EBC
    ctx->r6 = ADD32(ctx->r6, -0X2EBC);
    // 0x800EE268: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800EE26C: jal         0x80088660
    // 0x800EE270: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _glid_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x800EE270: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_4:
    // 0x800EE274: lbu         $v0, 0x28($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28);
L_800EE278:
    // 0x800EE278: beq         $v0, $zero, L_800EE298
    if (ctx->r2 == 0) {
        // 0x800EE27C: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_800EE298;
    }
    // 0x800EE27C: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x800EE280: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x800EE284: bne         $t3, $zero, L_800EE298
    if (ctx->r11 != 0) {
        // 0x800EE288: sb          $t2, 0x28($s0)
        MEM_B(0X28, ctx->r16) = ctx->r10;
            goto L_800EE298;
    }
    // 0x800EE288: sb          $t2, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r10;
    // 0x800EE28C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EE290: nop

    // 0x800EE294: swc1        $f4, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f4.u32l;
L_800EE298:
    // 0x800EE298: lbu         $v0, 0x29($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X29);
L_800EE29C:
    // 0x800EE29C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800EE2A0: beql        $v0, $zero, L_800EE51C
    if (ctx->r2 == 0) {
        // 0x800EE2A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800EE51C;
    }
    goto skip_6;
    // 0x800EE2A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x800EE2A8: beq         $v0, $at, L_800EE518
    if (ctx->r2 == ctx->r1) {
        // 0x800EE2AC: lwc1        $f8, 0x2C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_800EE518;
    }
    // 0x800EE2AC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800EE2B0: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x800EE2B4: lwc1        $f0, 0x48($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
    // 0x800EE2B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EE2BC: swc1        $f10, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
    // 0x800EE2C0: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x800EE2C4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800EE2C8: nop

    // 0x800EE2CC: bc1fl       L_800EE2DC
    if (!c1cs) {
        // 0x800EE2D0: lbu         $a0, 0x0($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X0);
            goto L_800EE2DC;
    }
    goto skip_7;
    // 0x800EE2D0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    skip_7:
    // 0x800EE2D4: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x800EE2D8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
L_800EE2DC:
    // 0x800EE2DC: beql        $a0, $zero, L_800EE410
    if (ctx->r4 == 0) {
        // 0x800EE2E0: lbu         $t5, 0x29($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X29);
            goto L_800EE410;
    }
    goto skip_8;
    // 0x800EE2E0: lbu         $t5, 0x29($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X29);
    skip_8:
    // 0x800EE2E4: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x800EE2E8: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800EE2EC: jal         0x800C395C
    // 0x800EE2F0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_800C395C(rdram, ctx);
        goto after_5;
    // 0x800EE2F0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x800EE2F4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x800EE2F8: jal         0x800C3920
    // 0x800EE2FC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_800C3920(rdram, ctx);
        goto after_6;
    // 0x800EE2FC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x800EE300: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800EE304: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800EE308: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EE30C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800EE310: jal         0x800DC264
    // 0x800EE314: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_800DC264(rdram, ctx);
        goto after_7;
    // 0x800EE314: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_7:
    // 0x800EE318: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800EE31C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EE320: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800EE324: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800EE328: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800EE32C: addiu       $a0, $zero, -0xF
    ctx->r4 = ADD32(0, -0XF);
    // 0x800EE330: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x800EE334: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x800EE338: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x800EE33C: nop

    // 0x800EE340: bc1fl       L_800EE350
    if (!c1cs) {
        // 0x800EE344: lwc1        $f0, 0x24($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
            goto L_800EE350;
    }
    goto skip_9;
    // 0x800EE344: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    skip_9:
    // 0x800EE348: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x800EE34C: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
L_800EE350:
    // 0x800EE350: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x800EE354: nop

    // 0x800EE358: bc1fl       L_800EE368
    if (!c1cs) {
        // 0x800EE35C: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800EE368;
    }
    goto skip_10;
    // 0x800EE35C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    skip_10:
    // 0x800EE360: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x800EE364: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
L_800EE368:
    // 0x800EE368: jal         0x800DC214
    // 0x800EE36C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    func_800DC214(rdram, ctx);
        goto after_8;
    // 0x800EE36C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x800EE370: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800EE374: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x800EE378: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EE37C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x800EE380: slt         $at, $a2, $at
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x800EE384: bne         $at, $zero, L_800EE390
    if (ctx->r1 != 0) {
        // 0x800EE388: lwc1        $f2, 0x28($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
            goto L_800EE390;
    }
    // 0x800EE388: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EE38C: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
L_800EE390:
    // 0x800EE390: slti        $at, $a2, 0x7918
    ctx->r1 = SIGNED(ctx->r6) < 0X7918 ? 1 : 0;
    // 0x800EE394: beq         $at, $zero, L_800EE3A0
    if (ctx->r1 == 0) {
        // 0x800EE398: nop
    
            goto L_800EE3A0;
    }
    // 0x800EE398: nop

    // 0x800EE39C: addiu       $a2, $zero, 0x7918
    ctx->r6 = ADD32(0, 0X7918);
L_800EE3A0:
    // 0x800EE3A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EE3A4: lwc1        $f0, 0x5E74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5E74);
    // 0x800EE3A8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800EE3AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EE3B0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x800EE3B4: nop

    // 0x800EE3B8: bc1fl       L_800EE3F8
    if (!c1cs) {
        // 0x800EE3BC: lbu         $a0, 0x0($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X0);
            goto L_800EE3F8;
    }
    goto skip_11;
    // 0x800EE3BC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    skip_11:
    // 0x800EE3C0: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x800EE3C4: lwc1        $f4, 0x5E78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5E78);
    // 0x800EE3C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EE3CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EE3D0: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800EE3D4: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x800EE3D8: nop

    // 0x800EE3DC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800EE3E0: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x800EE3E4: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800EE3E8: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800EE3EC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800EE3F0: nop

    // 0x800EE3F4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
L_800EE3F8:
    // 0x800EE3F8: jal         0x800C31DC
    // 0x800EE3FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800C31DC(rdram, ctx);
        goto after_9;
    // 0x800EE3FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_9:
    // 0x800EE400: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800EE404: jal         0x800C3058
    // 0x800EE408: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_800C3058(rdram, ctx);
        goto after_10;
    // 0x800EE408: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_10:
    // 0x800EE40C: lbu         $t5, 0x29($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X29);
L_800EE410:
    // 0x800EE410: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800EE414: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x800EE418: beq         $at, $zero, L_800EE4CC
    if (ctx->r1 == 0) {
        // 0x800EE41C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800EE4CC;
    }
    // 0x800EE41C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EE420: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EE424: addu        $at, $at, $t6
    gpr jr_addend_800EE42C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800EE428: lw          $t6, 0x5E7C($at)
    ctx->r14 = ADD32(ctx->r1, 0X5E7C);
    // 0x800EE42C: jr          $t6
    // 0x800EE430: nop

    switch (jr_addend_800EE42C >> 2) {
        case 0: goto L_800EE434; break;
        case 1: goto L_800EE454; break;
        case 2: goto L_800EE474; break;
        case 3: goto L_800EE494; break;
        case 4: goto L_800EE4CC; break;
        case 5: goto L_800EE4CC; break;
        case 6: goto L_800EE4B4; break;
        default: switch_error(__func__, 0x800EE42C, 0x80125E7C);
    }
    // 0x800EE430: nop

L_800EE434:
    // 0x800EE434: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800EE438: addiu       $a2, $a2, -0x32A0
    ctx->r6 = ADD32(ctx->r6, -0X32A0);
    // 0x800EE43C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800EE440: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800EE444: jal         0x80088660
    // 0x800EE448: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _glid_entrypoint_0(rdram, ctx);
        goto after_11;
    // 0x800EE448: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_11:
    // 0x800EE44C: b           L_800EE4D0
    // 0x800EE450: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
        goto L_800EE4D0;
    // 0x800EE450: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
L_800EE454:
    // 0x800EE454: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800EE458: addiu       $a2, $a2, -0x3114
    ctx->r6 = ADD32(ctx->r6, -0X3114);
    // 0x800EE45C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800EE460: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800EE464: jal         0x80088660
    // 0x800EE468: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _glid_entrypoint_0(rdram, ctx);
        goto after_12;
    // 0x800EE468: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_12:
    // 0x800EE46C: b           L_800EE4D0
    // 0x800EE470: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
        goto L_800EE4D0;
    // 0x800EE470: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
L_800EE474:
    // 0x800EE474: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800EE478: addiu       $a2, $a2, -0x2F9C
    ctx->r6 = ADD32(ctx->r6, -0X2F9C);
    // 0x800EE47C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800EE480: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800EE484: jal         0x80088660
    // 0x800EE488: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _glid_entrypoint_0(rdram, ctx);
        goto after_13;
    // 0x800EE488: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_13:
    // 0x800EE48C: b           L_800EE4D0
    // 0x800EE490: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
        goto L_800EE4D0;
    // 0x800EE490: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
L_800EE494:
    // 0x800EE494: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800EE498: addiu       $a2, $a2, -0x2808
    ctx->r6 = ADD32(ctx->r6, -0X2808);
    // 0x800EE49C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800EE4A0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800EE4A4: jal         0x80088660
    // 0x800EE4A8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _glid_entrypoint_0(rdram, ctx);
        goto after_14;
    // 0x800EE4A8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_14:
    // 0x800EE4AC: b           L_800EE4D0
    // 0x800EE4B0: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
        goto L_800EE4D0;
    // 0x800EE4B0: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
L_800EE4B4:
    // 0x800EE4B4: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800EE4B8: addiu       $a2, $a2, -0x2F2C
    ctx->r6 = ADD32(ctx->r6, -0X2F2C);
    // 0x800EE4BC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800EE4C0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800EE4C4: jal         0x80088660
    // 0x800EE4C8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _glid_entrypoint_0(rdram, ctx);
        goto after_15;
    // 0x800EE4C8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_15:
L_800EE4CC:
    // 0x800EE4CC: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
L_800EE4D0:
    // 0x800EE4D0: lwc1        $f10, 0x48($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X48);
    // 0x800EE4D4: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x800EE4D8: nop

    // 0x800EE4DC: bc1fl       L_800EE51C
    if (!c1cs) {
        // 0x800EE4E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800EE51C;
    }
    goto skip_12;
    // 0x800EE4E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_12:
    // 0x800EE4E4: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x800EE4E8: lh          $t7, 0x4E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4E);
    // 0x800EE4EC: sb          $zero, 0x29($s0)
    MEM_B(0X29, ctx->r16) = 0;
    // 0x800EE4F0: beq         $v0, $zero, L_800EE500
    if (ctx->r2 == 0) {
        // 0x800EE4F4: sh          $t7, 0x4C($s0)
        MEM_H(0X4C, ctx->r16) = ctx->r15;
            goto L_800EE500;
    }
    // 0x800EE4F4: sh          $t7, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r15;
    // 0x800EE4F8: jalr        $v0
    // 0x800EE4FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_16;
    // 0x800EE4FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_800EE500:
    // 0x800EE500: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x800EE504: beql        $a0, $zero, L_800EE51C
    if (ctx->r4 == 0) {
        // 0x800EE508: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800EE51C;
    }
    goto skip_13;
    // 0x800EE508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_13:
    // 0x800EE50C: jal         0x800C2FDC
    // 0x800EE510: nop

    func_800C2FDC(rdram, ctx);
        goto after_17;
    // 0x800EE510: nop

    after_17:
    // 0x800EE514: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_800EE518:
    // 0x800EE518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800EE51C:
    // 0x800EE51C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EE520: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800EE524: jr          $ra
    // 0x800EE528: nop

    return;
    // 0x800EE528: nop

;}
RECOMP_FUNC void func_800EE530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EE534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE538: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800EE53C: jal         0x8001BAFC
    // 0x800EE540: lw          $a0, 0x2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2C);
    defrag(rdram, ctx);
        goto after_0;
    // 0x800EE540: lw          $a0, 0x2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2C);
    after_0:
    // 0x800EE544: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800EE548: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
    // 0x800EE54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EE550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EE554: jr          $ra
    // 0x800EE558: nop

    return;
    // 0x800EE558: nop

;}
RECOMP_FUNC void func_800EE55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE55C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EE560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE564: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800EE568: lw          $t6, 0x2C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2C);
    // 0x800EE56C: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x800EE570: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x800EE574: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x800EE578: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x800EE57C: jal         0x8001BAFC
    // 0x800EE580: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    defrag(rdram, ctx);
        goto after_0;
    // 0x800EE580: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x800EE584: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800EE588: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x800EE58C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800EE590: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800EE594: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x800EE598: sw          $t1, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r9;
    // 0x800EE59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EE5A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EE5A4: jr          $ra
    // 0x800EE5A8: nop

    return;
    // 0x800EE5A8: nop

;}
RECOMP_FUNC void func_800EE5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE5AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EE5B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE5B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800EE5B8: jal         0x8001BAFC
    // 0x800EE5BC: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    defrag(rdram, ctx);
        goto after_0;
    // 0x800EE5BC: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    after_0:
    // 0x800EE5C0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800EE5C4: sw          $v0, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->r2;
    // 0x800EE5C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EE5CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EE5D0: jr          $ra
    // 0x800EE5D4: nop

    return;
    // 0x800EE5D4: nop

;}
RECOMP_FUNC void func_800EE5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE5D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EE5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE5E0: jal         0x8001BAFC
    // 0x800EE5E4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    defrag(rdram, ctx);
        goto after_0;
    // 0x800EE5E4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x800EE5E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800EE5EC: lw          $a0, 0x7EF8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EF8);
    // 0x800EE5F0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800EE5F4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800EE5F8: beql        $a0, $zero, L_800EE660
    if (ctx->r4 == 0) {
        // 0x800EE5FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EE660;
    }
    goto skip_0;
    // 0x800EE5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800EE600: beql        $v0, $a2, L_800EE660
    if (ctx->r2 == ctx->r6) {
        // 0x800EE604: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EE660;
    }
    goto skip_1;
    // 0x800EE604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800EE608: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800EE60C: jal         0x800B296C
    // 0x800EE610: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x800EE610: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x800EE614: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800EE618: lw          $a0, 0x7EF8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EF8);
    // 0x800EE61C: jal         0x800B28C4
    // 0x800EE620: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800B28C4(rdram, ctx);
        goto after_2;
    // 0x800EE620: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x800EE624: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800EE628: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800EE62C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x800EE630: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800EE634: beq         $at, $zero, L_800EE65C
    if (ctx->r1 == 0) {
        // 0x800EE638: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800EE65C;
    }
    // 0x800EE638: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800EE63C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_800EE640:
    // 0x800EE640: bnel        $a2, $t6, L_800EE650
    if (ctx->r6 != ctx->r14) {
        // 0x800EE644: addiu       $v1, $v1, 0xA8
        ctx->r3 = ADD32(ctx->r3, 0XA8);
            goto L_800EE650;
    }
    goto skip_2;
    // 0x800EE644: addiu       $v1, $v1, 0xA8
    ctx->r3 = ADD32(ctx->r3, 0XA8);
    skip_2:
    // 0x800EE648: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x800EE64C: addiu       $v1, $v1, 0xA8
    ctx->r3 = ADD32(ctx->r3, 0XA8);
L_800EE650:
    // 0x800EE650: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x800EE654: bnel        $at, $zero, L_800EE640
    if (ctx->r1 != 0) {
        // 0x800EE658: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_800EE640;
    }
    goto skip_3;
    // 0x800EE658: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_3:
L_800EE65C:
    // 0x800EE65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EE660:
    // 0x800EE660: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EE664: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x800EE668: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EE670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE670: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800EE674: lw          $a0, 0x7EF8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EF8);
    // 0x800EE678: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EE67C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800EE680: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800EE684: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800EE688: beq         $a0, $zero, L_800EE700
    if (ctx->r4 == 0) {
        // 0x800EE68C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800EE700;
    }
    // 0x800EE68C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EE690: jal         0x800B296C
    // 0x800EE694: nop

    func_800B296C(rdram, ctx);
        goto after_0;
    // 0x800EE694: nop

    after_0:
    // 0x800EE698: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800EE69C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800EE6A0: jal         0x800B28C4
    // 0x800EE6A4: lw          $a0, 0x7EF8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EF8);
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x800EE6A4: lw          $a0, 0x7EF8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EF8);
    after_1:
    // 0x800EE6A8: sltu        $at, $v0, $s2
    ctx->r1 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x800EE6AC: beq         $at, $zero, L_800EE6EC
    if (ctx->r1 == 0) {
        // 0x800EE6B0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800EE6EC;
    }
    // 0x800EE6B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EE6B4: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x800EE6B8: addiu       $s1, $s1, 0x3590
    ctx->r17 = ADD32(ctx->r17, 0X3590);
    // 0x800EE6BC: lbu         $t6, 0x6($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X6);
L_800EE6C0:
    // 0x800EE6C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EE6C4: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x800EE6C8: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x800EE6CC: beql        $v0, $zero, L_800EE6E0
    if (ctx->r2 == 0) {
        // 0x800EE6D0: addiu       $s0, $s0, 0xA8
        ctx->r16 = ADD32(ctx->r16, 0XA8);
            goto L_800EE6E0;
    }
    goto skip_0;
    // 0x800EE6D0: addiu       $s0, $s0, 0xA8
    ctx->r16 = ADD32(ctx->r16, 0XA8);
    skip_0:
    // 0x800EE6D4: jalr        $v0
    // 0x800EE6D8: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x800EE6D8: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_2:
    // 0x800EE6DC: addiu       $s0, $s0, 0xA8
    ctx->r16 = ADD32(ctx->r16, 0XA8);
L_800EE6E0:
    // 0x800EE6E0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800EE6E4: bnel        $at, $zero, L_800EE6C0
    if (ctx->r1 != 0) {
        // 0x800EE6E8: lbu         $t6, 0x6($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X6);
            goto L_800EE6C0;
    }
    goto skip_1;
    // 0x800EE6E8: lbu         $t6, 0x6($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X6);
    skip_1:
L_800EE6EC:
    // 0x800EE6EC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800EE6F0: jal         0x800B2F58
    // 0x800EE6F4: lw          $a0, 0x7EF8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EF8);
    func_800B2F58(rdram, ctx);
        goto after_3;
    // 0x800EE6F4: lw          $a0, 0x7EF8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EF8);
    after_3:
    // 0x800EE6F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800EE6FC: sw          $v0, 0x7EF8($at)
    MEM_W(0X7EF8, ctx->r1) = ctx->r2;
L_800EE700:
    // 0x800EE700: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800EE704: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EE708: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800EE70C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800EE710: jr          $ra
    // 0x800EE714: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800EE714: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800EE718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE718: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800EE71C: lbu         $t6, 0x5483($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5483);
    // 0x800EE720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EE724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE728: beql        $t6, $zero, L_800EE73C
    if (ctx->r14 == 0) {
        // 0x800EE72C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EE73C;
    }
    goto skip_0;
    // 0x800EE72C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800EE730: jal         0x80088CC8
    // 0x800EE734: nop

    _idbounce_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x800EE734: nop

    after_0:
    // 0x800EE738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EE73C:
    // 0x800EE73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EE740: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EE748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE748: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800EE74C: lbu         $t6, 0x5483($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5483);
    // 0x800EE750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EE754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE758: beql        $t6, $zero, L_800EE76C
    if (ctx->r14 == 0) {
        // 0x800EE75C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800EE76C;
    }
    goto skip_0;
    // 0x800EE75C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800EE760: jal         0x80088CD0
    // 0x800EE764: nop

    _idbounce_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x800EE764: nop

    after_0:
    // 0x800EE768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800EE76C:
    // 0x800EE76C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EE770: jr          $ra
    return;
;}
RECOMP_FUNC void func_800EE780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE780: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800EE784: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EE788: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800EE78C: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x800EE790: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800EE794: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x800EE798: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800EE79C: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x800EE7A0: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800EE7A4: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x800EE7A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800EE7AC: jr          $ra
    // 0x800EE7B0: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x800EE7B0: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800EE7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE7B4: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800EE7B8: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800EE7BC: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EE7C0: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800EE7C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EE7C8: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x800EE7CC: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x800EE7D0: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800EE7D4: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800EE7D8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800EE7DC: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x800EE7E0: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x800EE7E4: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800EE7E8: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800EE7EC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800EE7F0: jr          $ra
    // 0x800EE7F4: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x800EE7F4: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_800EE7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE7F8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EE7FC: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x800EE800: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800EE804: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x800EE808: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800EE80C: jr          $ra
    // 0x800EE810: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x800EE810: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800EE814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE814: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x800EE818: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x800EE81C: lh          $t7, 0x2($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X2);
    // 0x800EE820: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x800EE824: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x800EE828: jr          $ra
    // 0x800EE82C: sh          $t8, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r24;
    return;
    // 0x800EE82C: sh          $t8, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_800EE830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE830: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800EE834: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800EE838: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x800EE83C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800EE840: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x800EE844: jr          $ra
    // 0x800EE848: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    return;
    // 0x800EE848: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_800EE84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE84C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800EE850: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800EE854: nop

    // 0x800EE858: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EE85C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x800EE860: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x800EE864: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800EE868: nop

    // 0x800EE86C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EE870: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x800EE874: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x800EE878: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800EE87C: nop

    // 0x800EE880: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EE884: jr          $ra
    // 0x800EE888: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x800EE888: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_800EE88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE88C: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x800EE890: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800EE894: nop

    // 0x800EE898: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EE89C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x800EE8A0: lh          $t7, 0x2($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X2);
    // 0x800EE8A4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800EE8A8: nop

    // 0x800EE8AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EE8B0: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x800EE8B4: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x800EE8B8: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800EE8BC: nop

    // 0x800EE8C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EE8C4: jr          $ra
    // 0x800EE8C8: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x800EE8C8: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_800EE8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE8CC: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x800EE8D0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800EE8D4: lh          $t7, 0x2($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X2);
    // 0x800EE8D8: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800EE8DC: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x800EE8E0: jr          $ra
    // 0x800EE8E4: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    return;
    // 0x800EE8E4: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_800EE8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE8E8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EE8EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EE8F0: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x800EE8F4: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x800EE8F8: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800EE8FC: jr          $ra
    // 0x800EE900: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x800EE900: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800EE904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE904: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EE908: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800EE90C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800EE910: nop

    // 0x800EE914: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800EE918: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800EE91C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800EE920: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800EE924: nop

    // 0x800EE928: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x800EE92C: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800EE930: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800EE934: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800EE938: jr          $ra
    // 0x800EE93C: sw          $t1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r9;
    return;
    // 0x800EE93C: sw          $t1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_800EE940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE940: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800EE944: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800EE948: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800EE94C: nop

    // 0x800EE950: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x800EE954: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800EE958: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800EE95C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800EE960: nop

    // 0x800EE964: sh          $t9, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r25;
    // 0x800EE968: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800EE96C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800EE970: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800EE974: jr          $ra
    // 0x800EE978: sh          $t1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r9;
    return;
    // 0x800EE978: sh          $t1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r9;
;}
