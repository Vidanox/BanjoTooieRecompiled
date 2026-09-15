#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void badeathmatch_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800194: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080019C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001A0: jal         0x800A3274
    // 0x808001A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x808001A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808001A8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x808001AC: beql        $v0, $at, L_80800238
    if (ctx->r2 == ctx->r1) {
        // 0x808001B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800238;
    }
    goto skip_0;
    // 0x808001B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808001B4: jal         0x8009E6F8
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_1;
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001BC: addiu       $at, $zero, 0xD7
    ctx->r1 = ADD32(0, 0XD7);
    // 0x808001C0: beql        $v0, $at, L_80800238
    if (ctx->r2 == ctx->r1) {
        // 0x808001C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800238;
    }
    goto skip_1;
    // 0x808001C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x808001C8: lw          $v0, 0x158($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X158);
    // 0x808001CC: lbu         $t6, 0x21($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X21);
    // 0x808001D0: bnel        $t6, $zero, L_80800210
    if (ctx->r14 != 0) {
        // 0x808001D4: lbu         $t9, 0x22($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0X22);
            goto L_80800210;
    }
    goto skip_2;
    // 0x808001D4: lbu         $t9, 0x22($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X22);
    skip_2:
    // 0x808001D8: lbu         $v1, 0x23($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X23);
    // 0x808001DC: sltiu       $t7, $v1, 0x1
    ctx->r15 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x808001E0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x808001E4: beql        $t8, $zero, L_80800238
    if (ctx->r24 == 0) {
        // 0x808001E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800238;
    }
    goto skip_3;
    // 0x808001E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x808001EC: jal         0x80097D28
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097D28(rdram, ctx);
        goto after_2;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001F4: beql        $v0, $zero, L_80800238
    if (ctx->r2 == 0) {
        // 0x808001F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800238;
    }
    goto skip_4;
    // 0x808001F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x808001FC: jal         0x80000038
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    badeathmatch_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800204: b           L_80800238
    // 0x80800208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800238;
    // 0x80800208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080020C: lbu         $t9, 0x22($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X22);
L_80800210:
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800214: beql        $t9, $zero, L_80800238
    if (ctx->r25 == 0) {
        // 0x80800218: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800238;
    }
    goto skip_5;
    // 0x80800218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x8080021C: jal         0x800852F0
    // 0x80800220: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    _batimer_decrement(rdram, ctx);
        goto after_4;
    // 0x80800220: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_4:
    // 0x80800224: beq         $v0, $zero, L_80800234
    if (ctx->r2 == 0) {
        // 0x80800228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800234;
    }
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: jal         0x800003B8
    // 0x80800230: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    badeathmatch_entrypoint_8(rdram, ctx);
        goto after_5;
    // 0x80800230: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
L_80800234:
    // 0x80800234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800238:
    // 0x80800238: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080023C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800240: jr          $ra
    // 0x80800244: nop

    return;
    // 0x80800244: nop

;}
RECOMP_FUNC void badeathmatch_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800248: addiu       $t6, $a0, -0x40
    ctx->r14 = ADD32(ctx->r4, -0X40);
    // 0x8080024C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80800250: beq         $at, $zero, L_808002A0
    if (ctx->r1 == 0) {
        // 0x80800254: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808002A0;
    }
    // 0x80800254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800258: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8080025C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(16, 0X530) << 16);
    // 0x80800260: addu        $at, $at, $t6
    gpr jr_addend_80800268 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800264: lw          $t6, 0x530($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(16, 0X530));
    // 0x80800268: jr          $t6
    // 0x8080026C: nop

    switch (jr_addend_80800268 >> 2) {
        case 0: goto L_80800270; break;
        case 1: goto L_80800278; break;
        case 2: goto L_80800280; break;
        case 3: goto L_80800288; break;
        case 4: goto L_80800290; break;
        case 5: goto L_80800298; break;
        default: switch_error(__func__, 0x80800268, 0x80800530);
    }
    // 0x8080026C: nop

L_80800270:
    // 0x80800270: jr          $ra
    // 0x80800274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800278:
    // 0x80800278: jr          $ra
    // 0x8080027C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8080027C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80800280:
    // 0x80800280: jr          $ra
    // 0x80800284: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x80800284: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80800288:
    // 0x80800288: jr          $ra
    // 0x8080028C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x8080028C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80800290:
    // 0x80800290: jr          $ra
    // 0x80800294: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x80800294: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80800298:
    // 0x80800298: jr          $ra
    // 0x8080029C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x8080029C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_808002A0:
    // 0x808002A0: jr          $ra
    // 0x808002A4: nop

    return;
    // 0x808002A4: nop

;}
RECOMP_FUNC void badeathmatch_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808002AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002B0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x808002B4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x808002B8: lw          $t7, 0x158($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X158);
    // 0x808002BC: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x808002C0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x808002C4: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x808002C8: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x808002CC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x808002D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808002D4: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
    // 0x808002D8: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x808002DC: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x808002E0: bgezl       $t9, L_808002F4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x808002E4: lh          $t0, 0x10($v0)
        ctx->r8 = MEM_H(ctx->r2, 0X10);
            goto L_808002F4;
    }
    goto skip_0;
    // 0x808002E4: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    skip_0:
    // 0x808002E8: b           L_80800378
    // 0x808002EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800378;
    // 0x808002EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808002F0: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
L_808002F4:
    // 0x808002F4: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x808002F8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x808002FC: jal         0x800F0D90
    // 0x80800300: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    func_800F0D90(rdram, ctx);
        goto after_0;
    // 0x80800300: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    after_0:
    // 0x80800304: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80800308: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8080030C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800310: lw          $t2, 0x158($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X158);
    // 0x80800314: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x80800318: sh          $v0, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r2;
    // 0x8080031C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80800320: blezl       $t4, L_80800370
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80800324: lw          $t1, 0x158($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X158);
            goto L_80800370;
    }
    goto skip_1;
    // 0x80800324: lw          $t1, 0x158($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X158);
    skip_1:
    // 0x80800328: lw          $v0, 0x158($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X158);
    // 0x8080032C: lw          $t6, 0x184($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X184);
    // 0x80800330: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x80800334: lbu         $t7, 0x20($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X20);
    // 0x80800338: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x8080033C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80800340: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80800344: lh          $t0, 0x10($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X10);
    // 0x80800348: bnel        $t0, $zero, L_80800358
    if (ctx->r8 != 0) {
        // 0x8080034C: addiu       $a0, $zero, 0x72
        ctx->r4 = ADD32(0, 0X72);
            goto L_80800358;
    }
    goto skip_2;
    // 0x8080034C: addiu       $a0, $zero, 0x72
    ctx->r4 = ADD32(0, 0X72);
    skip_2:
    // 0x80800350: sb          $a0, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r4;
    // 0x80800354: addiu       $a0, $zero, 0x72
    ctx->r4 = ADD32(0, 0X72);
L_80800358:
    // 0x80800358: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8080035C: jal         0x80101238
    // 0x80800360: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_80101238(rdram, ctx);
        goto after_1;
    // 0x80800360: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_1:
    // 0x80800364: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800368: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8080036C: lw          $t1, 0x158($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X158);
L_80800370:
    // 0x80800370: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x80800374: lh          $v0, 0x10($t2)
    ctx->r2 = MEM_H(ctx->r10, 0X10);
L_80800378:
    // 0x80800378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080037C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800380: jr          $ra
    // 0x80800384: nop

    return;
    // 0x80800384: nop

;}
RECOMP_FUNC void badeathmatch_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800388: lw          $v0, 0x158($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X158);
    // 0x8080038C: lbu         $t6, 0x21($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X21);
    // 0x80800390: beql        $t6, $zero, L_808003A4
    if (ctx->r14 == 0) {
        // 0x80800394: lbu         $v1, 0x20($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X20);
            goto L_808003A4;
    }
    goto skip_0;
    // 0x80800394: lbu         $v1, 0x20($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X20);
    skip_0:
    // 0x80800398: jr          $ra
    // 0x8080039C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x8080039C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x808003A0: lbu         $v1, 0x20($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X20);
L_808003A4:
    // 0x808003A4: jr          $ra
    // 0x808003A8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x808003A8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void badeathmatch_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003AC: lw          $t6, 0x158($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X158);
    // 0x808003B0: jr          $ra
    // 0x808003B4: sb          $a1, 0x20($t6)
    MEM_B(0X20, ctx->r14) = ctx->r5;
    return;
    // 0x808003B4: sb          $a1, 0x20($t6)
    MEM_B(0X20, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void badeathmatch_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808003BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808003C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003C4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x808003C8: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x808003CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003D0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x808003D4: bc1tl       L_808003F0
    if (c1cs) {
        // 0x808003D8: lw          $t8, 0x158($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X158);
            goto L_808003F0;
    }
    goto skip_0;
    // 0x808003D8: lw          $t8, 0x158($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X158);
    skip_0:
    // 0x808003DC: lw          $t7, 0x158($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X158);
    // 0x808003E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808003E4: b           L_808003F4
    // 0x808003E8: sb          $t6, 0x21($t7)
    MEM_B(0X21, ctx->r15) = ctx->r14;
        goto L_808003F4;
    // 0x808003E8: sb          $t6, 0x21($t7)
    MEM_B(0X21, ctx->r15) = ctx->r14;
    // 0x808003EC: lw          $t8, 0x158($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X158);
L_808003F0:
    // 0x808003F0: sb          $zero, 0x21($t8)
    MEM_B(0X21, ctx->r24) = 0;
L_808003F4:
    // 0x808003F4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x808003F8: nop

    // 0x808003FC: bc1fl       L_80800418
    if (!c1cs) {
        // 0x80800400: lw          $t1, 0x158($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X158);
            goto L_80800418;
    }
    goto skip_1;
    // 0x80800400: lw          $t1, 0x158($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X158);
    skip_1:
    // 0x80800404: lw          $t0, 0x158($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X158);
    // 0x80800408: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8080040C: b           L_8080041C
    // 0x80800410: sb          $t9, 0x22($t0)
    MEM_B(0X22, ctx->r8) = ctx->r25;
        goto L_8080041C;
    // 0x80800410: sb          $t9, 0x22($t0)
    MEM_B(0X22, ctx->r8) = ctx->r25;
    // 0x80800414: lw          $t1, 0x158($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X158);
L_80800418:
    // 0x80800418: sb          $zero, 0x22($t1)
    MEM_B(0X22, ctx->r9) = 0;
L_8080041C:
    // 0x8080041C: jal         0x80085338
    // 0x80800420: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _batimer_set(rdram, ctx);
        goto after_0;
    // 0x80800420: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800424: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800428: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
    // 0x8080042C: lw          $t2, 0x158($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X158);
    // 0x80800430: addiu       $a0, $zero, 0x1CD
    ctx->r4 = ADD32(0, 0X1CD);
    // 0x80800434: lbu         $t3, 0x21($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X21);
    // 0x80800438: bnel        $t3, $zero, L_8080044C
    if (ctx->r11 != 0) {
        // 0x8080043C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080044C;
    }
    goto skip_2;
    // 0x8080043C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80800440: jal         0x80101180
    // 0x80800444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80101180(rdram, ctx);
        goto after_1;
    // 0x80800444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80800448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080044C:
    // 0x8080044C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800450: jr          $ra
    // 0x80800454: nop

    return;
    // 0x80800454: nop

;}
RECOMP_FUNC void badeathmatch_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080045C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800460: lw          $a2, 0x158($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X158);
    // 0x80800464: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x80800468: lbu         $t6, 0x21($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X21);
    // 0x8080046C: addu        $v0, $a2, $t8
    ctx->r2 = ADD32(ctx->r6, ctx->r24);
    // 0x80800470: beql        $t6, $zero, L_808004A4
    if (ctx->r14 == 0) {
        // 0x80800474: lh          $v1, 0x0($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X0);
            goto L_808004A4;
    }
    goto skip_0;
    // 0x80800474: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    skip_0:
    // 0x80800478: jal         0x80085300
    // 0x8080047C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    _batimer_get(rdram, ctx);
        goto after_0;
    // 0x8080047C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_0:
    // 0x80800480: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800484: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800488: nop

    // 0x8080048C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80800490: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80800494: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80800498: b           L_808004C4
    // 0x8080049C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808004C4;
    // 0x8080049C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004A0: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
L_808004A4:
    // 0x808004A4: lh          $a0, 0x10($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X10);
    // 0x808004A8: bgezl       $v1, L_808004BC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x808004AC: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_808004BC;
    }
    goto skip_1;
    // 0x808004AC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    skip_1:
    // 0x808004B0: b           L_808004BC
    // 0x808004B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_808004BC;
    // 0x808004B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x808004B8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_808004BC:
    // 0x808004BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x808004C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808004C4:
    // 0x808004C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004C8: jr          $ra
    // 0x808004CC: nop

    return;
    // 0x808004CC: nop

;}
RECOMP_FUNC void badeathmatch_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004D0: lw          $t6, 0x158($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X158);
    // 0x808004D4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x808004D8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x808004DC: sh          $a2, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r6;
    // 0x808004E0: lw          $t8, 0x158($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X158);
    // 0x808004E4: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x808004E8: jr          $ra
    // 0x808004EC: sh          $a3, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r7;
    return;
    // 0x808004EC: sh          $a3, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r7;
;}
RECOMP_FUNC void badeathmatch_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F0: beql        $a2, $zero, L_80800510
    if (ctx->r6 == 0) {
        // 0x808004F4: lw          $v0, 0x158($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X158);
            goto L_80800510;
    }
    goto skip_0;
    // 0x808004F4: lw          $v0, 0x158($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X158);
    skip_0:
    // 0x808004F8: lw          $v0, 0x158($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X158);
    // 0x808004FC: lbu         $t6, 0x23($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X23);
    // 0x80800500: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80800504: jr          $ra
    // 0x80800508: sb          $t7, 0x23($v0)
    MEM_B(0X23, ctx->r2) = ctx->r15;
    return;
    // 0x80800508: sb          $t7, 0x23($v0)
    MEM_B(0X23, ctx->r2) = ctx->r15;
    // 0x8080050C: lw          $v0, 0x158($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X158);
L_80800510:
    // 0x80800510: nor         $t9, $a1, $zero
    ctx->r25 = ~(ctx->r5 | 0);
    // 0x80800514: lbu         $t8, 0x23($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X23);
    // 0x80800518: and         $t0, $t8, $t9
    ctx->r8 = ctx->r24 & ctx->r25;
    // 0x8080051C: sb          $t0, 0x23($v0)
    MEM_B(0X23, ctx->r2) = ctx->r8;
    // 0x80800520: jr          $ra
    // 0x80800524: nop

    return;
    // 0x80800524: nop

    // 0x80800528: nop

    // 0x8080052C: nop

;}
RECOMP_FUNC void badialog_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8080000C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800010: lhu         $a0, 0x1A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1A);
    // 0x80800014: srl         $t6, $a0, 5
    ctx->r14 = S32(U32(ctx->r4) >> 5);
    // 0x80800018: jal         0x800F53D0
    // 0x8080001C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x8080001C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80800020: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800024: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800028: jal         0x8009AD20
    // 0x8080002C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009AD20(rdram, ctx);
        goto after_1;
    // 0x8080002C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x80800030: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800034: jal         0x8009AD2C
    // 0x80800038: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009AD2C(rdram, ctx);
        goto after_2;
    // 0x80800038: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x8080003C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800040: jal         0x8009E7C8
    // 0x80800044: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    func_8009E7C8(rdram, ctx);
        goto after_3;
    // 0x80800044: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    after_3:
    // 0x80800048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080004C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800050: jr          $ra
    // 0x80800054: nop

    return;
    // 0x80800054: nop

;}
RECOMP_FUNC void badialog_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8080005C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80800060: jr          $ra
    // 0x80800064: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x80800064: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void badialog_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8080006C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80800070: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80800074: jr          $ra
    // 0x80800078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80800078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void badialog_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080007C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800080: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800084: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80800088: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8080008C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80800090: jal         0x8009C128
    // 0x80800094: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800094: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80800098: jal         0x8008E938
    // 0x8080009C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008E938(rdram, ctx);
        goto after_1;
    // 0x8080009C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x808000A0: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x808000A4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x808000A8: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x808000AC: addiu       $t8, $t8, 0x47D0
    ctx->r24 = ADD32(ctx->r24, 0X47D0);
    // 0x808000B0: addiu       $t7, $t7, 0x47C8
    ctx->r15 = ADD32(ctx->r15, 0X47C8);
    // 0x808000B4: addiu       $t6, $t6, 0x47C0
    ctx->r14 = ADD32(ctx->r14, 0X47C0);
    // 0x808000B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808000BC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x808000C0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x808000C4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x808000C8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x808000CC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x808000D0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x808000D4: jal         0x800C0534
    // 0x808000D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800C0534(rdram, ctx);
        goto after_2;
    // 0x808000D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_2:
    // 0x808000DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808000E4: jr          $ra
    // 0x808000E8: nop

    return;
    // 0x808000E8: nop

;}
RECOMP_FUNC void badialog_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808000FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800100: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80800104: jal         0x800DA298
    // 0x80800108: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x80800108: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8080010C: beq         $v0, $zero, L_8080011C
    if (ctx->r2 == 0) {
        // 0x80800110: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080011C;
    }
    // 0x80800110: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800114: b           L_80800140
    // 0x80800118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800140;
    // 0x80800118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080011C:
    // 0x8080011C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800120: jal         0x8000007C
    // 0x80800124: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    badialog_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80800124: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800128: beq         $v0, $zero, L_80800138
    if (ctx->r2 == 0) {
        // 0x8080012C: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_80800138;
    }
    // 0x8080012C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800130: jal         0x800DA3B8
    // 0x80800134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800DA3B8(rdram, ctx);
        goto after_2;
    // 0x80800134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80800138:
    // 0x80800138: jal         0x800DA298
    // 0x8080013C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800DA298(rdram, ctx);
        goto after_3;
    // 0x8080013C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
L_80800140:
    // 0x80800140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800148: jr          $ra
    // 0x8080014C: nop

    return;
    // 0x8080014C: nop

;}
RECOMP_FUNC void badrone_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
;}
RECOMP_FUNC void badrone_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x8080000C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(18, 0X630) << 16);
    // 0x80800010: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80800014: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80800018: jr          $ra
    // 0x8080001C: lbu         $v0, 0x630($v0)
    ctx->r2 = MEM_BU(ctx->r2, (int16_t)RELOC_LO16(18, 0X630));
    return;
    // 0x8080001C: lbu         $v0, 0x630($v0)
    ctx->r2 = MEM_BU(ctx->r2, (int16_t)RELOC_LO16(18, 0X630));
;}
RECOMP_FUNC void badrone_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800024: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80800028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080002C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800030: lw          $a1, 0x54($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X54);
    // 0x80800034: jal         0x800EE7F8
    // 0x80800038: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800038: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    after_0:
    // 0x8080003C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800044: jr          $ra
    // 0x80800048: nop

    return;
    // 0x80800048: nop

;}
RECOMP_FUNC void badrone_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080004C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x80800050: jr          $ra
    // 0x80800054: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    return;
    // 0x80800054: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
;}
RECOMP_FUNC void badrone_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x8080005C: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x80800060: jr          $ra
    // 0x80800064: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    return;
    // 0x80800064: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void badrone_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080006C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800070: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x80800074: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800078: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080007C: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x80800080: lw          $t8, 0x54($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X54);
    // 0x80800084: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800088: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8080008C: sb          $t7, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r15;
    // 0x80800090: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x80800094: swc1        $f4, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f4.u32l;
    // 0x80800098: lw          $a0, 0x54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54);
    // 0x8080009C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x808000A0: jal         0x800EFD24
    // 0x808000A4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x808000A4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x808000A8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x808000AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808000B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808000B4: lw          $t0, 0x54($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X54);
    // 0x808000B8: swc1        $f6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f6.u32l;
    // 0x808000BC: lw          $t1, 0x54($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X54);
    // 0x808000C0: sw          $zero, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = 0;
    // 0x808000C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000CC: jr          $ra
    // 0x808000D0: nop

    return;
    // 0x808000D0: nop

;}
RECOMP_FUNC void badrone_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000DC: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x808000E0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x808000E4: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x808000E8: beql        $v1, $zero, L_80800100
    if (ctx->r3 == 0) {
        // 0x808000EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800100;
    }
    goto skip_0;
    // 0x808000EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808000F0: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    // 0x808000F4: jalr        $v1
    // 0x808000F8: lw          $a1, 0x184($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X184);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x808000F8: lw          $a1, 0x184($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X184);
    after_0:
    // 0x808000FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800100:
    // 0x80800100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800104: jr          $ra
    // 0x80800108: nop

    return;
    // 0x80800108: nop

;}
RECOMP_FUNC void badrone_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080010C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x80800110: jr          $ra
    // 0x80800114: lbu         $v0, 0x4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X4);
    return;
    // 0x80800114: lbu         $v0, 0x4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X4);
;}
RECOMP_FUNC void badrone_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080011C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800120: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800128: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080012C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800130: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80800134: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800138: lw          $a1, 0x54($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X54);
    // 0x8080013C: jal         0x800EE7F8
    // 0x80800140: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800140: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_0:
    // 0x80800144: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80800148: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8080014C: lw          $t7, 0x54($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X54);
    // 0x80800150: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80800154: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x80800158: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x8080015C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80800160: lwc1        $f6, 0xC($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80800164: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x80800168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080016C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800170: jr          $ra
    // 0x80800174: nop

    return;
    // 0x80800174: nop

;}
RECOMP_FUNC void badrone_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800178: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x8080017C: jr          $ra
    // 0x80800180: lbu         $v0, 0x5($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X5);
    return;
    // 0x80800180: lbu         $v0, 0x5($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X5);
;}
RECOMP_FUNC void badrone_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800184: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x80800188: jr          $ra
    // 0x8080018C: sb          $a1, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r5;
    return;
    // 0x8080018C: sb          $a1, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void badrone_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800190: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x80800194: sw          $a1, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r5;
    // 0x80800198: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x8080019C: jr          $ra
    // 0x808001A0: sw          $a2, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->r6;
    return;
    // 0x808001A0: sw          $a2, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->r6;
;}
RECOMP_FUNC void badrone_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A4: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x808001A8: jr          $ra
    // 0x808001AC: sb          $a1, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r5;
    return;
    // 0x808001AC: sb          $a1, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void badrone_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808001BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808001C0: lw          $a0, 0x54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54);
    // 0x808001C4: jal         0x800EE7F8
    // 0x808001C8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808001C8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x808001CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001D4: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x808001D8: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x808001DC: bnel        $t8, $at, L_80800204
    if (ctx->r24 != ctx->r1) {
        // 0x808001E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800204;
    }
    goto skip_0;
    // 0x808001E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808001E4: jal         0x8009BAF4
    // 0x808001E8: nop

    func_8009BAF4(rdram, ctx);
        goto after_1;
    // 0x808001E8: nop

    after_1:
    // 0x808001EC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x808001F0: bne         $v0, $at, L_80800200
    if (ctx->r2 != ctx->r1) {
        // 0x808001F4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800200;
    }
    // 0x808001F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001F8: jal         0x80084E18
    // 0x808001FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _bamovegoto_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x808001FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
L_80800200:
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
RECOMP_FUNC void badrone_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800214: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800218: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8080021C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800224: lw          $a0, 0x54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54);
    // 0x80800228: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8080022C: jal         0x800EE7F8
    // 0x80800230: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800230: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x80800234: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800238: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8080023C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800240: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x80800244: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80800248: swc1        $f4, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f4.u32l;
    // 0x8080024C: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x80800250: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    // 0x80800254: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x80800258: jal         0x800846E8
    // 0x8080025C: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    _badata_entrypoint_21(rdram, ctx);
        goto after_1;
    // 0x8080025C: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    after_1:
    // 0x80800260: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800264: jal         0x8009E5C8
    // 0x80800268: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800268: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x8080026C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800274: jr          $ra
    // 0x80800278: nop

    return;
    // 0x80800278: nop

;}
RECOMP_FUNC void badrone_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080027C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800280: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800284: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080028C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800290: lw          $a0, 0x54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54);
    // 0x80800294: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80800298: jal         0x800EE7F8
    // 0x8080029C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8080029C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x808002A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808002A4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x808002A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808002AC: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x808002B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808002B4: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x808002B8: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x808002BC: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    // 0x808002C0: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x808002C4: jal         0x800846E8
    // 0x808002C8: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    _badata_entrypoint_21(rdram, ctx);
        goto after_1;
    // 0x808002C8: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    after_1:
    // 0x808002CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808002D0: jal         0x8009E5C8
    // 0x808002D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x808002D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x808002D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002E0: jr          $ra
    // 0x808002E4: nop

    return;
    // 0x808002E4: nop

;}
RECOMP_FUNC void badrone_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808002EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002F0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x808002F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x808002F8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x808002FC: jal         0x8009C128
    // 0x80800300: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800300: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80800304: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80800308: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8080030C: jal         0x800EFB24
    // 0x80800310: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x80800310: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80800314: jal         0x800EEFFC
    // 0x80800318: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_800EEFFC(rdram, ctx);
        goto after_2;
    // 0x80800318: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x8080031C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800320: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800324: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80800328: div.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8080032C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80800330: jal         0x8000027C
    // 0x80800334: nop

    badrone_entrypoint_15(rdram, ctx);
        goto after_3;
    // 0x80800334: nop

    after_3:
    // 0x80800338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080033C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800340: jr          $ra
    // 0x80800344: nop

    return;
    // 0x80800344: nop

;}
RECOMP_FUNC void func_80800348_badrone(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080034C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800350: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x80800354: jal         0x800846E8
    // 0x80800358: sb          $a1, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r5;
    _badata_entrypoint_21(rdram, ctx);
        goto after_0;
    // 0x80800358: sb          $a1, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r5;
    after_0:
    // 0x8080035C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800364: jr          $ra
    // 0x80800368: nop

    return;
    // 0x80800368: nop

;}
RECOMP_FUNC void badrone_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080036C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800374: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x80800378: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8080037C: jal         0x800846F8
    // 0x80800380: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    _badata_entrypoint_23(rdram, ctx);
        goto after_0;
    // 0x80800380: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    after_0:
    // 0x80800384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080038C: jr          $ra
    // 0x80800390: nop

    return;
    // 0x80800390: nop

;}
RECOMP_FUNC void badrone_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080039C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x808003A0: sw          $a1, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->r5;
    // 0x808003A4: jal         0x80000348
    // 0x808003A8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80800348_badrone(rdram, ctx);
        goto after_0;
    // 0x808003A8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x808003AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003B4: jr          $ra
    // 0x808003B8: nop

    return;
    // 0x808003B8: nop

;}
RECOMP_FUNC void badrone_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003C4: jal         0x80000348
    // 0x808003C8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_80800348_badrone(rdram, ctx);
        goto after_0;
    // 0x808003C8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_0:
    // 0x808003CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003D4: jr          $ra
    // 0x808003D8: nop

    return;
    // 0x808003D8: nop

;}
RECOMP_FUNC void badrone_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003E4: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x808003E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x808003EC: sb          $a2, 0x30($t6)
    MEM_B(0X30, ctx->r14) = ctx->r6;
    // 0x808003F0: lw          $a0, 0x54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54);
    // 0x808003F4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x808003F8: jal         0x800EE7F8
    // 0x808003FC: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808003FC: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    after_0:
    // 0x80800400: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800404: jal         0x80000348
    // 0x80800408: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80800348_badrone(rdram, ctx);
        goto after_1;
    // 0x80800408: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x8080040C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800414: jr          $ra
    // 0x80800418: nop

    return;
    // 0x80800418: nop

;}
RECOMP_FUNC void badrone_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080041C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800424: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x80800428: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x8080042C: jal         0x800846F0
    // 0x80800430: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    _badata_entrypoint_22(rdram, ctx);
        goto after_0;
    // 0x80800430: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    after_0:
    // 0x80800434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080043C: jr          $ra
    // 0x80800440: nop

    return;
    // 0x80800440: nop

;}
RECOMP_FUNC void badrone_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080044C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800450: lw          $a0, 0x54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54);
    // 0x80800454: jal         0x800EE7F8
    // 0x80800458: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800458: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    after_0:
    // 0x8080045C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800460: jal         0x80000348
    // 0x80800464: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80800348_badrone(rdram, ctx);
        goto after_1;
    // 0x80800464: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x80800468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080046C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800470: jr          $ra
    // 0x80800474: nop

    return;
    // 0x80800474: nop

;}
RECOMP_FUNC void badrone_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080047C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800480: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800484: lw          $a0, 0x54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54);
    // 0x80800488: jal         0x800EE7F8
    // 0x8080048C: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8080048C: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    after_0:
    // 0x80800490: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800494: jal         0x80000348
    // 0x80800498: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80800348_badrone(rdram, ctx);
        goto after_1;
    // 0x80800498: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x8080049C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004A4: jr          $ra
    // 0x808004A8: nop

    return;
    // 0x808004A8: nop

;}
RECOMP_FUNC void badrone_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B4: jal         0x80000348
    // 0x808004B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800348_badrone(rdram, ctx);
        goto after_0;
    // 0x808004B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x808004BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004C4: jr          $ra
    // 0x808004C8: nop

    return;
    // 0x808004C8: nop

;}
RECOMP_FUNC void badrone_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004D4: jal         0x80000348
    // 0x808004D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80800348_badrone(rdram, ctx);
        goto after_0;
    // 0x808004D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x808004DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004E4: jr          $ra
    // 0x808004E8: nop

    return;
    // 0x808004E8: nop

;}
RECOMP_FUNC void badrone_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004F4: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x808004F8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x808004FC: jal         0x800846F8
    // 0x80800500: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    _badata_entrypoint_23(rdram, ctx);
        goto after_0;
    // 0x80800500: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    after_0:
    // 0x80800504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080050C: jr          $ra
    // 0x80800510: nop

    return;
    // 0x80800510: nop

;}
RECOMP_FUNC void badrone_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080051C: jal         0x80000348
    // 0x80800520: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80800348_badrone(rdram, ctx);
        goto after_0;
    // 0x80800520: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x80800524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080052C: jr          $ra
    // 0x80800530: nop

    return;
    // 0x80800530: nop

;}
RECOMP_FUNC void badrone_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080053C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800540: jal         0x80095774
    // 0x80800544: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_80095774(rdram, ctx);
        goto after_0;
    // 0x80800544: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_0:
    // 0x80800548: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080054C: jal         0x80000348
    // 0x80800550: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80800348_badrone(rdram, ctx);
        goto after_1;
    // 0x80800550: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80800554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080055C: jr          $ra
    // 0x80800560: nop

    return;
    // 0x80800560: nop

;}
RECOMP_FUNC void badrone_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080056C: jal         0x80000348
    // 0x80800570: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80800348_badrone(rdram, ctx);
        goto after_0;
    // 0x80800570: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x80800574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080057C: jr          $ra
    // 0x80800580: nop

    return;
    // 0x80800580: nop

;}
RECOMP_FUNC void badrone_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080058C: jal         0x8000004C
    // 0x80800590: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    badrone_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800590: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800594: xori        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 ^ 0X2;
    // 0x80800598: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8080059C: beql        $v0, $zero, L_808005B8
    if (ctx->r2 == 0) {
        // 0x808005A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808005B8;
    }
    goto skip_0;
    // 0x808005A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808005A4: jal         0x8008E35C
    // 0x808005A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E35C(rdram, ctx);
        goto after_1;
    // 0x808005A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808005AC: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x808005B0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x808005B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005B8:
    // 0x808005B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005BC: jr          $ra
    // 0x808005C0: nop

    return;
    // 0x808005C0: nop

;}
RECOMP_FUNC void badrone_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005C4: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x808005C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808005D0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x808005D4: bne         $t7, $at, L_808005E4
    if (ctx->r15 != ctx->r1) {
        // 0x808005D8: nop
    
            goto L_808005E4;
    }
    // 0x808005D8: nop

    // 0x808005DC: jr          $ra
    // 0x808005E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x808005E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808005E4:
    // 0x808005E4: jr          $ra
    // 0x808005E8: nop

    return;
    // 0x808005E8: nop

;}
RECOMP_FUNC void badrone_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005EC: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x808005F0: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    // 0x808005F4: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x808005F8: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x808005FC: jr          $ra
    // 0x80800600: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    return;
    // 0x80800600: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void badrone_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080060C: lw          $a0, 0x54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54);
    // 0x80800610: jal         0x800EE7F8
    // 0x80800614: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800614: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_0:
    // 0x80800618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080061C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800620: jr          $ra
    // 0x80800624: nop

    return;
    // 0x80800624: nop

    // 0x80800628: nop

    // 0x8080062C: nop

;}
RECOMP_FUNC void badronemem_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x8001ACCC
    // 0x80800010: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800014: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800018: sw          $v0, 0x18C($t6)
    MEM_W(0X18C, ctx->r14) = ctx->r2;
    // 0x8080001C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800024: jr          $ra
    // 0x80800028: nop

    return;
    // 0x80800028: nop

;}
RECOMP_FUNC void badronemem_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080002C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800034: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800038: jal         0x8001B084
    // 0x8080003C: lw          $a0, 0x18C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18C);
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x8080003C: lw          $a0, 0x18C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18C);
    after_0:
    // 0x80800040: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800044: sw          $zero, 0x18C($t7)
    MEM_W(0X18C, ctx->r15) = 0;
    // 0x80800048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080004C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800050: jr          $ra
    // 0x80800054: nop

    return;
    // 0x80800054: nop

;}
RECOMP_FUNC void badronemem_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: jr          $ra
    // 0x8080005C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080005C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void badronemem_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: jr          $ra
    // 0x80800064: sw          $zero, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = 0;
    return;
    // 0x80800064: sw          $zero, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = 0;
    // 0x80800068: nop

    // 0x8080006C: nop

;}
RECOMP_FUNC void baduo_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
;}
RECOMP_FUNC void func_80800008_baduo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800014: jal         0x800A4C88
    // 0x80800018: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A4C88(rdram, ctx);
        goto after_0;
    // 0x80800018: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8080001C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800020: jal         0x800A4C88
    // 0x80800024: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800A4C88(rdram, ctx);
        goto after_1;
    // 0x80800024: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080002C: jal         0x801100E4
    // 0x80800030: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801100E4(rdram, ctx);
        goto after_2;
    // 0x80800030: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80800034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080003C: jr          $ra
    // 0x80800040: nop

    return;
    // 0x80800040: nop

;}
RECOMP_FUNC void baduo_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800044: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x80800048: jr          $ra
    // 0x8080004C: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    return;
    // 0x8080004C: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
;}
RECOMP_FUNC void baduo_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800058: jal         0x800A3274
    // 0x8080005C: nop

    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x8080005C: nop

    after_0:
    // 0x80800060: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80800064: beq         $v0, $at, L_8080007C
    if (ctx->r2 == ctx->r1) {
        // 0x80800068: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8080007C;
    }
    // 0x80800068: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8080006C: beq         $v0, $at, L_8080008C
    if (ctx->r2 == ctx->r1) {
        // 0x80800070: nop
    
            goto L_8080008C;
    }
    // 0x80800070: nop

    // 0x80800074: b           L_8080009C
    // 0x80800078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080009C;
    // 0x80800078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080007C:
    // 0x8080007C: jal         0x800878A0
    // 0x80800080: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800080: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x80800084: b           L_808000A0
    // 0x80800088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808000A0;
    // 0x80800088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080008C:
    // 0x8080008C: jal         0x800878A0
    // 0x80800090: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800090: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x80800094: b           L_808000A0
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808000A0;
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080009C:
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
RECOMP_FUNC void baduo_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000AC: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x808000B0: jr          $ra
    // 0x808000B4: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
    return;
    // 0x808000B4: lbu         $v0, 0x1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1);
;}
RECOMP_FUNC void baduo_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B8: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x808000BC: jr          $ra
    // 0x808000C0: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
    return;
    // 0x808000C0: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
;}
RECOMP_FUNC void baduo_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C4: jr          $ra
    // 0x808000C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808000C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void baduo_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000D8: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x808000DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000E4: jal         0x800002C8
    // 0x808000E8: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    baduo_entrypoint_11(rdram, ctx);
        goto after_0;
    // 0x808000E8: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    after_0:
    // 0x808000EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808000F0: lw          $t7, 0x58($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X58);
    // 0x808000F4: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    // 0x808000F8: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x808000FC: jal         0x800EFD24
    // 0x80800100: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x80800100: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x80800104: lw          $t8, 0x58($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X58);
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080010C: jal         0x800A3274
    // 0x80800110: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    func_800A3274(rdram, ctx);
        goto after_2;
    // 0x80800110: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    after_2:
    // 0x80800114: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80800118: beq         $v0, $at, L_80800128
    if (ctx->r2 == ctx->r1) {
        // 0x8080011C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80800128;
    }
    // 0x8080011C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80800120: bne         $v0, $at, L_80800160
    if (ctx->r2 != ctx->r1) {
        // 0x80800124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800160;
    }
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800128:
    // 0x80800128: jal         0x800F8B88
    // 0x8080012C: nop

    func_800F8B88(rdram, ctx);
        goto after_3;
    // 0x8080012C: nop

    after_3:
    // 0x80800130: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800134: bne         $v0, $at, L_80800150
    if (ctx->r2 != ctx->r1) {
        // 0x80800138: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800150;
    }
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800140: jal         0x8000017C
    // 0x80800144: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    baduo_entrypoint_7(rdram, ctx);
        goto after_4;
    // 0x80800144: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80800148: b           L_8080016C
    // 0x8080014C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080016C;
    // 0x8080014C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800150:
    // 0x80800150: jal         0x8000017C
    // 0x80800154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    baduo_entrypoint_7(rdram, ctx);
        goto after_5;
    // 0x80800154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800158: b           L_8080016C
    // 0x8080015C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080016C;
    // 0x8080015C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800160:
    // 0x80800160: jal         0x8000017C
    // 0x80800164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    baduo_entrypoint_7(rdram, ctx);
        goto after_6;
    // 0x80800164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080016C:
    // 0x8080016C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800174: jr          $ra
    // 0x80800178: nop

    return;
    // 0x80800178: nop

;}
RECOMP_FUNC void baduo_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080017C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800184: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800188: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x8080018C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800190: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800194: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
    // 0x80800198: lw          $t7, 0x58($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X58);
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A0: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x808001A4: beq         $v0, $at, L_808001D0
    if (ctx->r2 == ctx->r1) {
        // 0x808001A8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808001D0;
    }
    // 0x808001A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808001AC: beq         $v0, $at, L_808001F0
    if (ctx->r2 == ctx->r1) {
        // 0x808001B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001F0;
    }
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808001B8: beq         $v0, $at, L_8080020C
    if (ctx->r2 == ctx->r1) {
        // 0x808001BC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8080020C;
    }
    // 0x808001BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808001C0: beq         $v0, $at, L_80800258
    if (ctx->r2 == ctx->r1) {
        // 0x808001C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800258;
    }
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C8: b           L_80800278
    // 0x808001CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800278;
    // 0x808001CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001D0:
    // 0x808001D0: jal         0x800002C8
    // 0x808001D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    baduo_entrypoint_11(rdram, ctx);
        goto after_0;
    // 0x808001D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808001E0: jal         0x8009ADF0
    // 0x808001E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009ADF0(rdram, ctx);
        goto after_1;
    // 0x808001E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x808001E8: b           L_80800278
    // 0x808001EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800278;
    // 0x808001EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001F0:
    // 0x808001F0: jal         0x800002BC
    // 0x808001F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    baduo_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x808001F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001FC: jal         0x800002C8
    // 0x80800200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    baduo_entrypoint_11(rdram, ctx);
        goto after_3;
    // 0x80800200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800204: b           L_80800278
    // 0x80800208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800278;
    // 0x80800208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080020C:
    // 0x8080020C: jal         0x8008DAA8
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DAA8(rdram, ctx);
        goto after_4;
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800214: beq         $v0, $zero, L_80800234
    if (ctx->r2 == 0) {
        // 0x80800218: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800234;
    }
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800224: jal         0x800A38F0
    // 0x80800228: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A38F0(rdram, ctx);
        goto after_5;
    // 0x80800228: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8080022C: b           L_80800244
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800244;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800234:
    // 0x80800234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800238: jal         0x800A38F0
    // 0x8080023C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A38F0(rdram, ctx);
        goto after_6;
    // 0x8080023C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800244:
    // 0x80800244: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800248: jal         0x8009ADF0
    // 0x8080024C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_7;
    // 0x8080024C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80800250: b           L_80800278
    // 0x80800254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800278;
    // 0x80800254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800258:
    // 0x80800258: jal         0x80085008
    // 0x8080025C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_8;
    // 0x8080025C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800260: jal         0x800F54E4
    // 0x80800264: nop

    func_800F54E4(rdram, ctx);
        goto after_9;
    // 0x80800264: nop

    after_9:
    // 0x80800268: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080026C: jal         0x800F82D4
    // 0x80800270: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F82D4(rdram, ctx);
        goto after_10;
    // 0x80800270: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80800274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800278:
    // 0x80800278: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080027C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800280: jr          $ra
    // 0x80800284: nop

    return;
    // 0x80800284: nop

;}
RECOMP_FUNC void baduo_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080028C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800290: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x80800294: jal         0x800EE7F8
    // 0x80800298: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800298: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8080029C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002A4: jr          $ra
    // 0x808002A8: nop

    return;
    // 0x808002A8: nop

;}
RECOMP_FUNC void baduo_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808002B0: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x808002B4: jr          $ra
    // 0x808002B8: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808002B8: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void baduo_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002BC: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x808002C0: jr          $ra
    // 0x808002C4: sb          $a1, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r5;
    return;
    // 0x808002C4: sb          $a1, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void baduo_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002C8: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x808002CC: jr          $ra
    // 0x808002D0: sb          $a1, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r5;
    return;
    // 0x808002D0: sb          $a1, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void baduo_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002DC: jal         0x8008E39C
    // 0x808002E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E39C(rdram, ctx);
        goto after_0;
    // 0x808002E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002E4: beq         $v0, $zero, L_808002F4
    if (ctx->r2 == 0) {
        // 0x808002E8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808002F4;
    }
    // 0x808002E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808002EC: jal         0x80085008
    // 0x808002F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x808002F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_808002F4:
    // 0x808002F4: jal         0x800F9A6C
    // 0x808002F8: nop

    func_800F9A6C(rdram, ctx);
        goto after_2;
    // 0x808002F8: nop

    after_2:
    // 0x808002FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800304: jr          $ra
    // 0x80800308: nop

    return;
    // 0x80800308: nop

;}
RECOMP_FUNC void baduo_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080030C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800310: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800314: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800318: jal         0x800F54E4
    // 0x8080031C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8080031C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800320: lw          $t6, 0x58($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X58);
    // 0x80800324: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800328: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080032C: lbu         $v1, 0x0($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X0);
    // 0x80800330: beq         $v1, $at, L_80800348
    if (ctx->r3 == ctx->r1) {
        // 0x80800334: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800348;
    }
    // 0x80800334: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800338: beq         $v1, $at, L_8080037C
    if (ctx->r3 == ctx->r1) {
        // 0x8080033C: nop
    
            goto L_8080037C;
    }
    // 0x8080033C: nop

    // 0x80800340: b           L_80800530
    // 0x80800344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800530;
    // 0x80800344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800348:
    // 0x80800348: jal         0x800A3274
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800350: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80800354: bnel        $v0, $at, L_80800530
    if (ctx->r2 != ctx->r1) {
        // 0x80800358: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800530;
    }
    goto skip_0;
    // 0x80800358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080035C: jal         0x8008D40C
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D40C(rdram, ctx);
        goto after_2;
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800364: beq         $v0, $zero, L_8080052C
    if (ctx->r2 == 0) {
        // 0x80800368: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080052C;
    }
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080036C: jal         0x8000017C
    // 0x80800370: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    baduo_entrypoint_7(rdram, ctx);
        goto after_3;
    // 0x80800370: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x80800374: b           L_80800530
    // 0x80800378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800530;
    // 0x80800378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080037C:
    // 0x8080037C: jal         0x800F5B0C
    // 0x80800380: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    func_800F5B0C(rdram, ctx);
        goto after_4;
    // 0x80800380: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    after_4:
    // 0x80800384: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800388: bnel        $v0, $at, L_80800530
    if (ctx->r2 != ctx->r1) {
        // 0x8080038C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800530;
    }
    goto skip_1;
    // 0x8080038C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800390: jal         0x80000050
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    baduo_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800398: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8080039C: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x808003A0: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x808003A4: bne         $t7, $a0, L_808003C4
    if (ctx->r15 != ctx->r4) {
        // 0x808003A8: nop
    
            goto L_808003C4;
    }
    // 0x808003A8: nop

    // 0x808003AC: jal         0x800878A0
    // 0x808003B0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_6;
    // 0x808003B0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_6:
    // 0x808003B4: jal         0x800F8EBC
    // 0x808003B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F8EBC(rdram, ctx);
        goto after_7;
    // 0x808003B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x808003BC: b           L_808003D0
    // 0x808003C0: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
        goto L_808003D0;
    // 0x808003C0: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
L_808003C4:
    // 0x808003C4: jal         0x800F8EBC
    // 0x808003C8: nop

    func_800F8EBC(rdram, ctx);
        goto after_8;
    // 0x808003C8: nop

    after_8:
    // 0x808003CC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
L_808003D0:
    // 0x808003D0: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
    // 0x808003D4: bne         $a0, $t8, L_808003EC
    if (ctx->r4 != ctx->r24) {
        // 0x808003D8: nop
    
            goto L_808003EC;
    }
    // 0x808003D8: nop

    // 0x808003DC: jal         0x800F82D4
    // 0x808003E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F82D4(rdram, ctx);
        goto after_9;
    // 0x808003E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x808003E4: b           L_80800404
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800404;
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003EC:
    // 0x808003EC: jal         0x800F82D4
    // 0x808003F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F82D4(rdram, ctx);
        goto after_10;
    // 0x808003F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x808003F4: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x808003F8: jal         0x800F82D4
    // 0x808003FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F82D4(rdram, ctx);
        goto after_11;
    // 0x808003FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800404:
    // 0x80800404: jal         0x80084788
    // 0x80800408: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_12;
    // 0x80800408: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x8080040C: jal         0x800F911C
    // 0x80800410: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F911C(rdram, ctx);
        goto after_13;
    // 0x80800410: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x80800414: jal         0x800F80D8
    // 0x80800418: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F80D8(rdram, ctx);
        goto after_14;
    // 0x80800418: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_14:
    // 0x8080041C: jal         0x800A3274
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_15;
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800424: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800428: jal         0x800D5034
    // 0x8080042C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800D5034(rdram, ctx);
        goto after_16;
    // 0x8080042C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800434: jal         0x800A3410
    // 0x80800438: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A3410(rdram, ctx);
        goto after_17;
    // 0x80800438: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x8080043C: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x80800440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800444: jal         0x800F8268
    // 0x80800448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_18;
    // 0x80800448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x8080044C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80800450: lw          $t0, 0x184($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X184);
    // 0x80800454: beq         $t9, $t0, L_8080047C
    if (ctx->r25 == ctx->r8) {
        // 0x80800458: nop
    
            goto L_8080047C;
    }
    // 0x80800458: nop

    // 0x8080045C: jal         0x800F53D0
    // 0x80800460: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800F53D0(rdram, ctx);
        goto after_19;
    // 0x80800460: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_19:
    // 0x80800464: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80800468: jal         0x800F53D0
    // 0x8080046C: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F53D0(rdram, ctx);
        goto after_20;
    // 0x8080046C: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_20:
    // 0x80800470: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800474: jal         0x80000008
    // 0x80800478: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80800008_baduo(rdram, ctx);
        goto after_21;
    // 0x80800478: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_21:
L_8080047C:
    // 0x8080047C: jal         0x8009C984
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_22;
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800484: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x80800488: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8080048C: jal         0x800F5A00
    // 0x80800490: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800F5A00(rdram, ctx);
        goto after_23;
    // 0x80800490: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_23:
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800498: jal         0x8009C128
    // 0x8080049C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_24;
    // 0x8080049C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_24:
    // 0x808004A0: jal         0x800F759C
    // 0x808004A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800F759C(rdram, ctx);
        goto after_25;
    // 0x808004A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_25:
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808004B0: jal         0x800A38F0
    // 0x808004B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A38F0(rdram, ctx);
        goto after_26;
    // 0x808004B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_26:
    // 0x808004B8: jal         0x800A91A8
    // 0x808004BC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800A91A8(rdram, ctx);
        goto after_27;
    // 0x808004BC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_27:
    // 0x808004C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C4: jal         0x8000017C
    // 0x808004C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    baduo_entrypoint_7(rdram, ctx);
        goto after_28;
    // 0x808004C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_28:
    // 0x808004CC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x808004D0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x808004D4: jal         0x800F1F0C
    // 0x808004D8: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    func_800F1F0C(rdram, ctx);
        goto after_29;
    // 0x808004D8: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_29:
    // 0x808004DC: jal         0x800F2100
    // 0x808004E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_30;
    // 0x808004E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_30:
    // 0x808004E4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808004E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808004EC: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    // 0x808004F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808004F8: nop

    // 0x808004FC: bc1f        L_80800514
    if (!c1cs) {
        // 0x80800500: nop
    
            goto L_80800514;
    }
    // 0x80800500: nop

    // 0x80800504: jal         0x8009E5C8
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_31;
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x8080050C: b           L_80800520
    // 0x80800510: addiu       $a0, $zero, 0x158
    ctx->r4 = ADD32(0, 0X158);
        goto L_80800520;
    // 0x80800510: addiu       $a0, $zero, 0x158
    ctx->r4 = ADD32(0, 0X158);
L_80800514:
    // 0x80800514: jal         0x8009E5C8
    // 0x80800518: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    func_8009E5C8(rdram, ctx);
        goto after_32;
    // 0x80800518: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    after_32:
    // 0x8080051C: addiu       $a0, $zero, 0x158
    ctx->r4 = ADD32(0, 0X158);
L_80800520:
    // 0x80800520: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x80800524: jal         0x80101180
    // 0x80800528: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80101180(rdram, ctx);
        goto after_33;
    // 0x80800528: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_33:
L_8080052C:
    // 0x8080052C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800530:
    // 0x80800530: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800534: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800538: jr          $ra
    // 0x8080053C: nop

    return;
    // 0x8080053C: nop

;}
RECOMP_FUNC void baduo_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800544: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800548: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8080054C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800550: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800554: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800558: jal         0x800F6224
    // 0x8080055C: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F6224(rdram, ctx);
        goto after_0;
    // 0x8080055C: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x80800560: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800564: jal         0x800F53D0
    // 0x80800568: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x80800568: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080056C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800570: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800574: jal         0x800F452C
    // 0x80800578: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800F452C(rdram, ctx);
        goto after_2;
    // 0x80800578: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800580: jal         0x800A3410
    // 0x80800584: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800A3410(rdram, ctx);
        goto after_3;
    // 0x80800584: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_3:
    // 0x80800588: jal         0x80092778
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092778(rdram, ctx);
        goto after_4;
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800590: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800594: jal         0x80000008
    // 0x80800598: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800008_baduo(rdram, ctx);
        goto after_5;
    // 0x80800598: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8080059C: jal         0x800844B0
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808005A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A8: jal         0x8009E5C8
    // 0x808005AC: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x808005AC: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    after_7:
    // 0x808005B0: jal         0x8009C984
    // 0x808005B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C984(rdram, ctx);
        goto after_8;
    // 0x808005B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x808005B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005BC: jal         0x8009C944
    // 0x808005C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C944(rdram, ctx);
        goto after_9;
    // 0x808005C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808005C4: jal         0x8009C990
    // 0x808005C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_10;
    // 0x808005C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x808005CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005D0: jal         0x8009C914
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_11;
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005DC: jal         0x800844C0
    // 0x808005E0: lw          $a1, 0x184($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X184);
    _bababykaz_entrypoint_10(rdram, ctx);
        goto after_12;
    // 0x808005E0: lw          $a1, 0x184($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X184);
    after_12:
    // 0x808005E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808005E8: jal         0x80084368
    // 0x808005EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _bsfirstp_entrypoint_28(rdram, ctx);
        goto after_13;
    // 0x808005EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x808005F0: jal         0x800A91A8
    // 0x808005F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800A91A8(rdram, ctx);
        goto after_14;
    // 0x808005F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x808005F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808005FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800600: jal         0x800A38F0
    // 0x80800604: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A38F0(rdram, ctx);
        goto after_15;
    // 0x80800604: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x80800608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080060C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800610: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800614: jr          $ra
    // 0x80800618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void baduo_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080061C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800620: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800624: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80800628: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8080062C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800630: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800634: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800638: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080063C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800640: jal         0x800F6224
    // 0x80800644: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F6224(rdram, ctx);
        goto after_0;
    // 0x80800644: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x80800648: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8080064C: jal         0x800F53D0
    // 0x80800650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x80800650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800654: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80800658: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080065C: jal         0x800F452C
    // 0x80800660: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800F452C(rdram, ctx);
        goto after_2;
    // 0x80800660: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80800664: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800668: jal         0x800A3410
    // 0x8080066C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800A3410(rdram, ctx);
        goto after_3;
    // 0x8080066C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_3:
    // 0x80800670: jal         0x80092778
    // 0x80800674: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80092778(rdram, ctx);
        goto after_4;
    // 0x80800674: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x80800678: jal         0x800844B0
    // 0x8080067C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    _bababykaz_entrypoint_8(rdram, ctx);
        goto after_5;
    // 0x8080067C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x80800680: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800684: jal         0x80000008
    // 0x80800688: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80800008_baduo(rdram, ctx);
        goto after_6;
    // 0x80800688: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
    // 0x8080068C: jal         0x800A4CA8
    // 0x80800690: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_7;
    // 0x80800690: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x80800694: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
    // 0x80800698: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8080069C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x808006A0: jal         0x800F3BB0
    // 0x808006A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800F3BB0(rdram, ctx);
        goto after_8;
    // 0x808006A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_8:
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006AC: jal         0x800EEB40
    // 0x808006B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EEB40(rdram, ctx);
        goto after_9;
    // 0x808006B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x808006B4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(20, 0XCE0) << 16);
    // 0x808006B8: lwc1        $f4, 0xCE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XCE0));
    // 0x808006BC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808006C0: nop

    // 0x808006C4: bc1f        L_808006E4
    if (!c1cs) {
        // 0x808006C8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_808006E4;
    }
    // 0x808006C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808006CC: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_808006D0:
    // 0x808006D0: jal         0x80110588
    // 0x808006D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80110588(rdram, ctx);
        goto after_10;
    // 0x808006D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_10:
    // 0x808006D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x808006DC: bne         $s0, $s1, L_808006D0
    if (ctx->r16 != ctx->r17) {
        // 0x808006E0: nop
    
            goto L_808006D0;
    }
    // 0x808006E0: nop

L_808006E4:
    // 0x808006E4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x808006E8: jal         0x8009E5C8
    // 0x808006EC: addiu       $a1, $zero, 0x136
    ctx->r5 = ADD32(0, 0X136);
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x808006EC: addiu       $a1, $zero, 0x136
    ctx->r5 = ADD32(0, 0X136);
    after_11:
    // 0x808006F0: jal         0x800F8128
    // 0x808006F4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_800F8128(rdram, ctx);
        goto after_12;
    // 0x808006F4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_12:
    // 0x808006F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x808006FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800700: jal         0x800A38F0
    // 0x80800704: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A38F0(rdram, ctx);
        goto after_13;
    // 0x80800704: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x80800708: jal         0x800F8EE4
    // 0x8080070C: lw          $a0, 0x184($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X184);
    func_800F8EE4(rdram, ctx);
        goto after_14;
    // 0x8080070C: lw          $a0, 0x184($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X184);
    after_14:
    // 0x80800710: jal         0x800848D0
    // 0x80800714: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    _badrone_entrypoint_29(rdram, ctx);
        goto after_15;
    // 0x80800714: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_15:
    // 0x80800718: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8080071C: jal         0x8009E5C8
    // 0x80800720: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_16;
    // 0x80800720: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_16:
    // 0x80800724: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    // 0x80800728: jal         0x8008A298
    // 0x8080072C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    _sudialog_entrypoint_0(rdram, ctx);
        goto after_17;
    // 0x8080072C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_17:
    // 0x80800730: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800734: jal         0x80000C78
    // 0x80800738: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_80800C78_baduo(rdram, ctx);
        goto after_18;
    // 0x80800738: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_18:
    // 0x8080073C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800740: jal         0x80000CA8
    // 0x80800744: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80800CA8_baduo(rdram, ctx);
        goto after_19;
    // 0x80800744: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_19:
    // 0x80800748: lw          $a0, 0x184($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X184);
    // 0x8080074C: jal         0x800F86C4
    // 0x80800750: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800F86C4(rdram, ctx);
        goto after_20;
    // 0x80800750: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_20:
    // 0x80800754: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800758: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080075C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800760: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800764: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800768: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8080076C: jr          $ra
    // 0x80800770: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80800770: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void baduo_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800774: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800778: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080077C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800780: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800784: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800788: jal         0x800F6224
    // 0x8080078C: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F6224(rdram, ctx);
        goto after_0;
    // 0x8080078C: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x80800790: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800794: jal         0x800F53D0
    // 0x80800798: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x80800798: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080079C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808007A0: jal         0x8009C984
    // 0x808007A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C984(rdram, ctx);
        goto after_2;
    // 0x808007A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x808007A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808007AC: jal         0x8009C914
    // 0x808007B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_3;
    // 0x808007B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x808007B4: jal         0x8009C984
    // 0x808007B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C984(rdram, ctx);
        goto after_4;
    // 0x808007B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x808007BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808007C0: jal         0x8009C914
    // 0x808007C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_5;
    // 0x808007C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808007C8: jal         0x8009C974
    // 0x808007CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_6;
    // 0x808007CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808007D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D4: jal         0x8009E5C8
    // 0x808007D8: addiu       $a1, $zero, 0xBA
    ctx->r5 = ADD32(0, 0XBA);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x808007D8: addiu       $a1, $zero, 0xBA
    ctx->r5 = ADD32(0, 0XBA);
    after_7:
    // 0x808007DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007E0: jal         0x80000008
    // 0x808007E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800008_baduo(rdram, ctx);
        goto after_8;
    // 0x808007E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007EC: jal         0x8000017C
    // 0x808007F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    baduo_entrypoint_7(rdram, ctx);
        goto after_9;
    // 0x808007F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x808007F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007F8: jal         0x8000017C
    // 0x808007FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    baduo_entrypoint_7(rdram, ctx);
        goto after_10;
    // 0x808007FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80800800: jal         0x800F911C
    // 0x80800804: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800F911C(rdram, ctx);
        goto after_11;
    // 0x80800804: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_11:
    // 0x80800808: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x8080080C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80800810: jal         0x800F9098
    // 0x80800814: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_800F9098(rdram, ctx);
        goto after_12;
    // 0x80800814: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_12:
    // 0x80800818: lw          $t6, 0x58($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X58);
    // 0x8080081C: jal         0x800F90EC
    // 0x80800820: lwc1        $f12, 0x4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X4);
    func_800F90EC(rdram, ctx);
        goto after_13;
    // 0x80800820: lwc1        $f12, 0x4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X4);
    after_13:
    // 0x80800824: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80800828: jal         0x800D5034
    // 0x8080082C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800D5034(rdram, ctx);
        goto after_14;
    // 0x8080082C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_14:
    // 0x80800830: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80800834: jal         0x800D5034
    // 0x80800838: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800D5034(rdram, ctx);
        goto after_15;
    // 0x80800838: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_15:
    // 0x8080083C: jal         0x800F8EE4
    // 0x80800840: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800F8EE4(rdram, ctx);
        goto after_16;
    // 0x80800840: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_16:
    // 0x80800844: jal         0x800F8128
    // 0x80800848: lw          $a0, 0x184($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X184);
    func_800F8128(rdram, ctx);
        goto after_17;
    // 0x80800848: lw          $a0, 0x184($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X184);
    after_17:
    // 0x8080084C: addiu       $a0, $zero, 0x158
    ctx->r4 = ADD32(0, 0X158);
    // 0x80800850: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x80800854: jal         0x80101180
    // 0x80800858: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80101180(rdram, ctx);
        goto after_18;
    // 0x80800858: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x8080085C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800860: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800864: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800868: jr          $ra
    // 0x8080086C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8080086C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void baduo_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800870: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800878: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8080087C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800880: jal         0x8009C128
    // 0x80800884: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800884: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80800888: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8080088C: jal         0x800F6224
    // 0x80800890: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    func_800F6224(rdram, ctx);
        goto after_1;
    // 0x80800890: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    after_1:
    // 0x80800894: jal         0x800F53D0
    // 0x80800898: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_2;
    // 0x80800898: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8080089C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808008A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808008A4: jal         0x800F452C
    // 0x808008A8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_800F452C(rdram, ctx);
        goto after_3;
    // 0x808008A8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x808008AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808008B0: jal         0x8009E5C8
    // 0x808008B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x808008B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x808008B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808008BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808008C0: jal         0x800F45B0
    // 0x808008C4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800F45B0(rdram, ctx);
        goto after_5;
    // 0x808008C4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_5:
    // 0x808008C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808008D0: jr          $ra
    // 0x808008D4: nop

    return;
    // 0x808008D4: nop

;}
RECOMP_FUNC void baduo_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808008DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808008E0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808008E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808008E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808008EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x808008F0: jal         0x800F6224
    // 0x808008F4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F6224(rdram, ctx);
        goto after_0;
    // 0x808008F4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x808008F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808008FC: jal         0x800F53D0
    // 0x80800900: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x80800900: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800904: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800908: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080090C: jal         0x800F452C
    // 0x80800910: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800F452C(rdram, ctx);
        goto after_2;
    // 0x80800910: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800918: jal         0x800A3410
    // 0x8080091C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_800A3410(rdram, ctx);
        goto after_3;
    // 0x8080091C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_3:
    // 0x80800920: jal         0x80092778
    // 0x80800924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092778(rdram, ctx);
        goto after_4;
    // 0x80800924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080092C: jal         0x8009E5C8
    // 0x80800930: addiu       $a1, $zero, 0xE5
    ctx->r5 = ADD32(0, 0XE5);
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x80800930: addiu       $a1, $zero, 0xE5
    ctx->r5 = ADD32(0, 0XE5);
    after_5:
    // 0x80800934: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800938: jal         0x80000008
    // 0x8080093C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800008_baduo(rdram, ctx);
        goto after_6;
    // 0x8080093C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80800940: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800948: jal         0x800A38F0
    // 0x8080094C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A38F0(rdram, ctx);
        goto after_7;
    // 0x8080094C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80800950: jal         0x800F8128
    // 0x80800954: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800F8128(rdram, ctx);
        goto after_8;
    // 0x80800954: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800958: jal         0x800F8EE4
    // 0x8080095C: lw          $a0, 0x184($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X184);
    func_800F8EE4(rdram, ctx);
        goto after_9;
    // 0x8080095C: lw          $a0, 0x184($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X184);
    after_9:
    // 0x80800960: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800964: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800968: jal         0x800F45B0
    // 0x8080096C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800F45B0(rdram, ctx);
        goto after_10;
    // 0x8080096C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_10:
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800974: jal         0x8009C914
    // 0x80800978: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C914(rdram, ctx);
        goto after_11;
    // 0x80800978: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x8080097C: jal         0x8009C974
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_12;
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800988: jal         0x80000C78
    // 0x8080098C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_80800C78_baduo(rdram, ctx);
        goto after_13;
    // 0x8080098C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_13:
    // 0x80800990: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800994: jal         0x80000CA8
    // 0x80800998: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800CA8_baduo(rdram, ctx);
        goto after_14;
    // 0x80800998: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x8080099C: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x808009A0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808009A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808009A8: addiu       $a1, $zero, 0x5A2
    ctx->r5 = ADD32(0, 0X5A2);
    // 0x808009AC: jal         0x8009DB04
    // 0x808009B0: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DB04(rdram, ctx);
        goto after_15;
    // 0x808009B0: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_15:
    // 0x808009B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808009B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808009BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808009C0: jr          $ra
    // 0x808009C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808009C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void baduo_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808009CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808009D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009D8: jal         0x800878A0
    // 0x808009DC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808009DC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x808009E0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009E8: jal         0x800F457C
    // 0x808009EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F457C(rdram, ctx);
        goto after_1;
    // 0x808009EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808009F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808009F8: jal         0x800A38F0
    // 0x808009FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A38F0(rdram, ctx);
        goto after_2;
    // 0x808009FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80800A00: jal         0x800F8EBC
    // 0x80800A04: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8EBC(rdram, ctx);
        goto after_3;
    // 0x80800A04: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_3:
    // 0x80800A08: jal         0x800F53D0
    // 0x80800A0C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800F53D0(rdram, ctx);
        goto after_4;
    // 0x80800A0C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80800A10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800A14: jal         0x80000008
    // 0x80800A18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800008_baduo(rdram, ctx);
        goto after_5;
    // 0x80800A18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80800A1C: jal         0x800F8128
    // 0x80800A20: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8128(rdram, ctx);
        goto after_6;
    // 0x80800A20: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_6:
    // 0x80800A24: jal         0x800F53D0
    // 0x80800A28: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800F53D0(rdram, ctx);
        goto after_7;
    // 0x80800A28: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x80800A2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800A30: jal         0x80000CA8
    // 0x80800A34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800CA8_baduo(rdram, ctx);
        goto after_8;
    // 0x80800A34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x80800A38: jal         0x800F759C
    // 0x80800A3C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800F759C(rdram, ctx);
        goto after_9;
    // 0x80800A3C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A44: jal         0x80000C78
    // 0x80800A48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800C78_baduo(rdram, ctx);
        goto after_10;
    // 0x80800A48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80800A4C: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800A50: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A58: addiu       $a1, $zero, 0x5A4
    ctx->r5 = ADD32(0, 0X5A4);
    // 0x80800A5C: jal         0x8009DB04
    // 0x80800A60: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DB04(rdram, ctx);
        goto after_11;
    // 0x80800A60: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_11:
    // 0x80800A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800A70: jr          $ra
    // 0x80800A74: nop

    return;
    // 0x80800A74: nop

;}
RECOMP_FUNC void baduo_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800A7C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800A80: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800A84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800A88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800A8C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800A90: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80800A94: jal         0x800F6224
    // 0x80800A98: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F6224(rdram, ctx);
        goto after_0;
    // 0x80800A98: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x80800A9C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800AA0: jal         0x800F53D0
    // 0x80800AA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x80800AA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800AA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800AAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800AB0: jal         0x800F452C
    // 0x80800AB4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800F452C(rdram, ctx);
        goto after_2;
    // 0x80800AB4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80800AB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800ABC: jal         0x80000008
    // 0x80800AC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800008_baduo(rdram, ctx);
        goto after_3;
    // 0x80800AC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80800AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AC8: jal         0x800A3410
    // 0x80800ACC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_800A3410(rdram, ctx);
        goto after_4;
    // 0x80800ACC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_4:
    // 0x80800AD0: jal         0x80092778
    // 0x80800AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092778(rdram, ctx);
        goto after_5;
    // 0x80800AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ADC: jal         0x8009C914
    // 0x80800AE0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8009C914(rdram, ctx);
        goto after_6;
    // 0x80800AE0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_6:
    // 0x80800AE4: jal         0x8009C974
    // 0x80800AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_7;
    // 0x80800AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800AEC: jal         0x80083B98
    // 0x80800AF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bsstatue_entrypoint_1(rdram, ctx);
        goto after_8;
    // 0x80800AF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x80800AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AF8: jal         0x8009E5C8
    // 0x80800AFC: addiu       $a1, $zero, 0xF9
    ctx->r5 = ADD32(0, 0XF9);
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x80800AFC: addiu       $a1, $zero, 0xF9
    ctx->r5 = ADD32(0, 0XF9);
    after_9:
    // 0x80800B00: jal         0x800F8128
    // 0x80800B04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800F8128(rdram, ctx);
        goto after_10;
    // 0x80800B04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x80800B08: jal         0x800F8EE4
    // 0x80800B0C: lw          $a0, 0x184($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X184);
    func_800F8EE4(rdram, ctx);
        goto after_11;
    // 0x80800B0C: lw          $a0, 0x184($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X184);
    after_11:
    // 0x80800B10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800B18: jal         0x800F45B0
    // 0x80800B1C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800F45B0(rdram, ctx);
        goto after_12;
    // 0x80800B1C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_12:
    // 0x80800B20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800B28: jal         0x800A38F0
    // 0x80800B2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A38F0(rdram, ctx);
        goto after_13;
    // 0x80800B2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x80800B30: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x80800B34: jal         0x8008A298
    // 0x80800B38: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    _sudialog_entrypoint_0(rdram, ctx);
        goto after_14;
    // 0x80800B38: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_14:
    // 0x80800B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B40: jal         0x80000C78
    // 0x80800B44: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80800C78_baduo(rdram, ctx);
        goto after_15;
    // 0x80800B44: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_15:
    // 0x80800B48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B4C: jal         0x80000CA8
    // 0x80800B50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800CA8_baduo(rdram, ctx);
        goto after_16;
    // 0x80800B50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
    // 0x80800B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B58: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800B5C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800B60: jr          $ra
    // 0x80800B64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800B64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void baduo_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B68: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800B6C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800B70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B78: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800B7C: jal         0x800F911C
    // 0x80800B80: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800F911C(rdram, ctx);
        goto after_0;
    // 0x80800B80: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80800B84: jal         0x800F6224
    // 0x80800B88: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F6224(rdram, ctx);
        goto after_1;
    // 0x80800B88: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_1:
    // 0x80800B8C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800B90: jal         0x800F53D0
    // 0x80800B94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_2;
    // 0x80800B94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800B98: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BA0: jal         0x8009C128
    // 0x80800BA4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x80800BA4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80800BA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800BAC: jal         0x800F452C
    // 0x80800BB0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800F452C(rdram, ctx);
        goto after_4;
    // 0x80800BB0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80800BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BB8: jal         0x800A3410
    // 0x80800BBC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A3410(rdram, ctx);
        goto after_5;
    // 0x80800BBC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x80800BC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800BC4: jal         0x800A3410
    // 0x80800BC8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800A3410(rdram, ctx);
        goto after_6;
    // 0x80800BC8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_6:
    // 0x80800BCC: jal         0x80092778
    // 0x80800BD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80092778(rdram, ctx);
        goto after_7;
    // 0x80800BD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x80800BD4: jal         0x8009C984
    // 0x80800BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_8;
    // 0x80800BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800BDC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800BE0: jal         0x8009C914
    // 0x80800BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_9;
    // 0x80800BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800BE8: jal         0x8009C984
    // 0x80800BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_10;
    // 0x80800BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800BF0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800BF4: jal         0x8009C914
    // 0x80800BF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_11;
    // 0x80800BF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80800BFC: jal         0x8009C974
    // 0x80800C00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C974(rdram, ctx);
        goto after_12;
    // 0x80800C00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80800C04: jal         0x800F80D8
    // 0x80800C08: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800F80D8(rdram, ctx);
        goto after_13;
    // 0x80800C08: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_13:
    // 0x80800C0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800C10: jal         0x8009E5C8
    // 0x80800C14: addiu       $a1, $zero, 0x153
    ctx->r5 = ADD32(0, 0X153);
    func_8009E5C8(rdram, ctx);
        goto after_14;
    // 0x80800C14: addiu       $a1, $zero, 0x153
    ctx->r5 = ADD32(0, 0X153);
    after_14:
    // 0x80800C18: jal         0x800A91A8
    // 0x80800C1C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800A91A8(rdram, ctx);
        goto after_15;
    // 0x80800C1C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_15:
    // 0x80800C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C24: jal         0x80000008
    // 0x80800C28: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800008_baduo(rdram, ctx);
        goto after_16;
    // 0x80800C28: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_16:
    // 0x80800C2C: jal         0x800F8EE4
    // 0x80800C30: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8EE4(rdram, ctx);
        goto after_17;
    // 0x80800C30: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_17:
    // 0x80800C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800C3C: jal         0x800A38F0
    // 0x80800C40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800A38F0(rdram, ctx);
        goto after_18;
    // 0x80800C40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x80800C44: jal         0x800D5234
    // 0x80800C48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D5234(rdram, ctx);
        goto after_19;
    // 0x80800C48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_19:
    // 0x80800C4C: jal         0x800A16BC
    // 0x80800C50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A16BC(rdram, ctx);
        goto after_20;
    // 0x80800C50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_20:
    // 0x80800C54: jal         0x800A1694
    // 0x80800C58: nop

    func_800A1694(rdram, ctx);
        goto after_21;
    // 0x80800C58: nop

    after_21:
    // 0x80800C5C: jal         0x80084D88
    // 0x80800C60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bakaztorpedo_entrypoint_3(rdram, ctx);
        goto after_22;
    // 0x80800C60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_22:
    // 0x80800C64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C68: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800C6C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800C70: jr          $ra
    // 0x80800C74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800C74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80800C78_baduo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800C84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800C88: jal         0x8008A7A0
    // 0x80800C8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    _surestart_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800C8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800C90: jal         0x800A1658
    // 0x80800C94: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800A1658(rdram, ctx);
        goto after_1;
    // 0x80800C94: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80800C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800CA0: jr          $ra
    // 0x80800CA4: nop

    return;
    // 0x80800CA4: nop

;}
RECOMP_FUNC void func_80800CA8_baduo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CB0: jal         0x800A3274
    // 0x80800CB4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x80800CB4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800CB8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800CBC: jal         0x800A3274
    // 0x80800CC0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x80800CC0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x80800CC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800CC8: jal         0x800D5034
    // 0x80800CCC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800D5034(rdram, ctx);
        goto after_2;
    // 0x80800CCC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80800CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800CD8: jr          $ra
    // 0x80800CDC: nop

    return;
    // 0x80800CDC: nop

;}
RECOMP_FUNC void badust_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x80800004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
;}
RECOMP_FUNC void func_80800008_badust(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: jr          $ra
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80800010_badust(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800010: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800014: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800018: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080001C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800020: jal         0x800852F0
    // 0x80800024: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x80800024: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80800028: beq         $v0, $zero, L_8080004C
    if (ctx->r2 == 0) {
        // 0x8080002C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080004C;
    }
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800030: jal         0x800A2EEC
    // 0x80800034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A2EEC(rdram, ctx);
        goto after_1;
    // 0x80800034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800038: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x8080003C: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800044: jal         0x80085338
    // 0x80800048: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    _batimer_set(rdram, ctx);
        goto after_2;
    // 0x80800048: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
L_8080004C:
    // 0x8080004C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x80800050: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800054: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80800058: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8080005C: bgez        $t7, L_80800070
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80800060: andi        $t8, $t7, 0x1
        ctx->r24 = ctx->r15 & 0X1;
            goto L_80800070;
    }
    // 0x80800060: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80800064: beq         $t8, $zero, L_80800070
    if (ctx->r24 == 0) {
        // 0x80800068: nop
    
            goto L_80800070;
    }
    // 0x80800068: nop

    // 0x8080006C: addiu       $t8, $t8, -0x2
    ctx->r24 = ADD32(ctx->r24, -0X2);
L_80800070:
    // 0x80800070: sb          $t8, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r24;
    // 0x80800074: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x80800078: lbu         $v1, 0x9($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X9);
    // 0x8080007C: beq         $v1, $zero, L_8080009C
    if (ctx->r3 == 0) {
        // 0x80800080: nop
    
            goto L_8080009C;
    }
    // 0x80800080: nop

    // 0x80800084: beq         $v1, $at, L_808000D8
    if (ctx->r3 == ctx->r1) {
        // 0x80800088: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808000D8;
    }
    // 0x80800088: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080008C: beq         $v1, $at, L_80800114
    if (ctx->r3 == ctx->r1) {
        // 0x80800090: nop
    
            goto L_80800114;
    }
    // 0x80800090: nop

    // 0x80800094: b           L_8080014C
    // 0x80800098: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080014C;
    // 0x80800098: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080009C:
    // 0x8080009C: jal         0x8009BB18
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_3;
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808000A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000AC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x808000B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808000B4: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000BC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x808000C0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x808000C4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x808000C8: jal         0x80000424
    // 0x808000CC: nop

    badust_entrypoint_4(rdram, ctx);
        goto after_4;
    // 0x808000CC: nop

    after_4:
    // 0x808000D0: b           L_8080014C
    // 0x808000D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080014C;
    // 0x808000D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000D8:
    // 0x808000D8: jal         0x8009BB18
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_5;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808000E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808000E8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x808000EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000F0: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x808000FC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80800100: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800104: jal         0x80000424
    // 0x80800108: nop

    badust_entrypoint_4(rdram, ctx);
        goto after_6;
    // 0x80800108: nop

    after_6:
    // 0x8080010C: b           L_8080014C
    // 0x80800110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080014C;
    // 0x80800110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800114:
    // 0x80800114: jal         0x8009BB18
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_7;
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080011C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800120: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800124: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800128: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080012C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800134: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80800138: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8080013C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80800140: jal         0x80000424
    // 0x80800144: nop

    badust_entrypoint_4(rdram, ctx);
        goto after_8;
    // 0x80800144: nop

    after_8:
    // 0x80800148: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080014C:
    // 0x8080014C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800150: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800154: jr          $ra
    // 0x80800158: nop

    return;
    // 0x80800158: nop

;}
RECOMP_FUNC void badust_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080015C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800160: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800164: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800168: jal         0x80096544
    // 0x8080016C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80096544(rdram, ctx);
        goto after_0;
    // 0x8080016C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800170: beql        $v0, $zero, L_808001A4
    if (ctx->r2 == 0) {
        // 0x80800174: lw          $v0, 0x5C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X5C);
            goto L_808001A4;
    }
    goto skip_0;
    // 0x80800174: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    skip_0:
    // 0x80800178: jal         0x800964DC
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800964DC(rdram, ctx);
        goto after_1;
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800180: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80800184: jal         0x8009C150
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_2;
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080018C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800190: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800194: nop

    // 0x80800198: bc1tl       L_80800250
    if (c1cs) {
        // 0x8080019C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800250;
    }
    goto skip_1;
    // 0x8080019C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x808001A0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
L_808001A4:
    // 0x808001A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808001A8: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x808001AC: beql        $t6, $zero, L_808001C0
    if (ctx->r14 == 0) {
        // 0x808001B0: sw          $t7, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r15;
            goto L_808001C0;
    }
    goto skip_2;
    // 0x808001B0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    skip_2:
    // 0x808001B4: b           L_808001C0
    // 0x808001B8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
        goto L_808001C0;
    // 0x808001B8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x808001BC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_808001C0:
    // 0x808001C0: jal         0x8009BB5C
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_3;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808001C8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x808001CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808001D0: nop

    // 0x808001D4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x808001D8: nop

    // 0x808001DC: bc1fl       L_80800250
    if (!c1cs) {
        // 0x808001E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800250;
    }
    goto skip_3;
    // 0x808001E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x808001E4: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x808001E8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x808001EC: beq         $t9, $zero, L_80800224
    if (ctx->r25 == 0) {
        // 0x808001F0: nop
    
            goto L_80800224;
    }
    // 0x808001F0: nop

    // 0x808001F4: jal         0x8009BB18
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_4;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808001FC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800200: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8080020C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800210: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80800214: jal         0x80000424
    // 0x80800218: nop

    badust_entrypoint_4(rdram, ctx);
        goto after_5;
    // 0x80800218: nop

    after_5:
    // 0x8080021C: b           L_80800250
    // 0x80800220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800250;
    // 0x80800220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800224:
    // 0x80800224: jal         0x8009BB18
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_6;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080022C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800230: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800238: add.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8080023C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800240: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80800244: jal         0x80000424
    // 0x80800248: nop

    badust_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x80800248: nop

    after_7:
    // 0x8080024C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800250:
    // 0x80800250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800254: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800258: jr          $ra
    // 0x8080025C: nop

    return;
    // 0x8080025C: nop

;}
RECOMP_FUNC void badust_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800264: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800268: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8080026C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800270: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80800274: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80800278: jal         0x80088970
    // 0x8080027C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    _fxdlsmoke_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x8080027C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800280: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80800284: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800288: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080028C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800290: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80800294: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80800298: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8080029C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x808002A0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x808002A4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x808002A8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x808002AC: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x808002B0: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x808002B4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x808002B8: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x808002BC: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x808002C0: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x808002C4: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x808002C8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x808002CC: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x808002D0: jal         0x800BA930
    // 0x808002D4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    func_800BA930(rdram, ctx);
        goto after_1;
    // 0x808002D4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_1:
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808002E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808002E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x808002E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x808002EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x808002F0: jal         0x800BA450
    // 0x808002F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800BA450(rdram, ctx);
        goto after_2;
    // 0x808002F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_2:
    // 0x808002F8: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800300: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800304: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800308: jal         0x800BA7C4
    // 0x8080030C: nop

    func_800BA7C4(rdram, ctx);
        goto after_3;
    // 0x8080030C: nop

    after_3:
    // 0x80800310: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800318: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080031C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800320: jal         0x800BA7FC
    // 0x80800324: nop

    func_800BA7FC(rdram, ctx);
        goto after_4;
    // 0x80800324: nop

    after_4:
    // 0x80800328: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800330: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800334: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800338: jal         0x800BA8F8
    // 0x8080033C: nop

    func_800BA8F8(rdram, ctx);
        goto after_5;
    // 0x8080033C: nop

    after_5:
    // 0x80800340: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x80800344: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800348: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800350: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800354: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800358: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080035C: jal         0x800BA5BC
    // 0x80800360: nop

    func_800BA5BC(rdram, ctx);
        goto after_6;
    // 0x80800360: nop

    after_6:
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800368: jal         0x800BA22C
    // 0x8080036C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_7;
    // 0x8080036C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800370: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800374: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80800378: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080037C: jr          $ra
    // 0x80800380: nop

    return;
    // 0x80800380: nop

;}
RECOMP_FUNC void badust_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800384: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC70) << 16);
    // 0x80800388: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8080038C: lwc1        $f4, 0xC70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC70));
    // 0x80800390: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800398: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8080039C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x808003A0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x808003A4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x808003A8: jal         0x8009C128
    // 0x808003AC: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808003AC: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x808003B0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x808003B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808003B8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808003BC: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808003C0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808003C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x808003C8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x808003CC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x808003D0: jal         0x800EFCD8
    // 0x808003D4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_800EFCD8(rdram, ctx);
        goto after_1;
    // 0x808003D4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x808003D8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x808003DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808003E0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC74) << 16);
    // 0x808003E4: lwc1        $f18, 0xC74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC74));
    // 0x808003E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808003EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808003F0: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x808003F4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808003F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808003FC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80800400: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80800404: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80800408: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8080040C: jal         0x80000260
    // 0x80800410: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    badust_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800410: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80800414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800418: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080041C: jr          $ra
    // 0x80800420: nop

    return;
    // 0x80800420: nop

;}
RECOMP_FUNC void badust_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800424: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800428: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8080042C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80800430: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800434: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80800438: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8080043C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800440: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800444: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800448: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x8080044C: jal         0x800EFA4C
    // 0x80800450: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x80800450: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x80800454: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x80800458: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8080045C: jal         0x8009C128
    // 0x80800460: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800460: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x80800464: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80800468: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8080046C: jal         0x800EFCD8
    // 0x80800470: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    func_800EFCD8(rdram, ctx);
        goto after_2;
    // 0x80800470: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    after_2:
    // 0x80800474: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80800478: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800480: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80800484: jal         0x800EF04C
    // 0x80800488: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x80800488: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8080048C: jal         0x80088970
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _fxdlsmoke_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800494: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800498: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8080049C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808004A0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x808004A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808004A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808004AC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x808004B0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x808004B4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x808004B8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x808004BC: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x808004C0: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x808004C4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x808004C8: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x808004CC: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x808004D0: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x808004D4: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x808004D8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x808004DC: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x808004E0: jal         0x800BA930
    // 0x808004E4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    func_800BA930(rdram, ctx);
        goto after_5;
    // 0x808004E4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_5:
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808004F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808004F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x808004F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x808004FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80800500: jal         0x800BA450
    // 0x80800504: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800BA450(rdram, ctx);
        goto after_6;
    // 0x80800504: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_6:
    // 0x80800508: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC78) << 16);
    // 0x8080050C: lwc1        $f0, 0xC78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC78));
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800514: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800518: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080051C: jal         0x800BA7C4
    // 0x80800520: nop

    func_800BA7C4(rdram, ctx);
        goto after_7;
    // 0x80800520: nop

    after_7:
    // 0x80800524: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800528: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800530: jal         0x800BA7FC
    // 0x80800534: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    func_800BA7FC(rdram, ctx);
        goto after_8;
    // 0x80800534: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    after_8:
    // 0x80800538: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x8080053C: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800540: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800544: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800548: jal         0x800BA8F8
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800BA8F8(rdram, ctx);
        goto after_9;
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800550: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x80800554: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080055C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800560: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800564: jal         0x800BA5BC
    // 0x80800568: nop

    func_800BA5BC(rdram, ctx);
        goto after_10;
    // 0x80800568: nop

    after_10:
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800570: jal         0x800BA22C
    // 0x80800574: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_11;
    // 0x80800574: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80800578: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8080057C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80800580: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800584: jr          $ra
    // 0x80800588: nop

    return;
    // 0x80800588: nop

;}
RECOMP_FUNC void badust_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080058C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC7C) << 16);
    // 0x80800590: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80800594: lwc1        $f4, 0xC7C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC7C));
    // 0x80800598: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8080059C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005A0: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x808005A4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x808005A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x808005AC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x808005B0: jal         0x8009C128
    // 0x808005B4: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808005B4: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x808005B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x808005BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808005C0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808005C4: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808005C8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808005CC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x808005D0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x808005D4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x808005D8: jal         0x800EFCD8
    // 0x808005DC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_800EFCD8(rdram, ctx);
        goto after_1;
    // 0x808005DC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x808005E0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x808005E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808005E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC80) << 16);
    // 0x808005EC: lwc1        $f18, 0xC80($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC80));
    // 0x808005F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808005F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808005F8: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x808005FC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800600: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800604: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80800608: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8080060C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80800610: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80800614: jal         0x80000260
    // 0x80800618: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    badust_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800618: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8080061C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800620: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800624: jr          $ra
    // 0x80800628: nop

    return;
    // 0x80800628: nop

;}
RECOMP_FUNC void badust_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080062C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC84) << 16);
    // 0x80800630: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80800634: lwc1        $f4, 0xC84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC84));
    // 0x80800638: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8080063C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800640: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80800644: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80800648: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8080064C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80800650: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80800654: jal         0x8009C128
    // 0x80800658: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800658: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8080065C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80800660: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800664: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800668: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8080066C: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800670: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80800674: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800678: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8080067C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80800680: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80800684: jal         0x800EFCD8
    // 0x80800688: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_800EFCD8(rdram, ctx);
        goto after_1;
    // 0x80800688: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x8080068C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC88) << 16);
    // 0x80800690: lwc1        $f6, 0xC88($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC88));
    // 0x80800694: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC8C) << 16);
    // 0x80800698: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8080069C: lwc1        $f8, 0xC8C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC8C));
    // 0x808006A0: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x808006A4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808006A8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808006AC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x808006B0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x808006B4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x808006B8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x808006BC: jal         0x80000260
    // 0x808006C0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    badust_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808006C0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x808006C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808006C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808006CC: jr          $ra
    // 0x808006D0: nop

    return;
    // 0x808006D0: nop

;}
RECOMP_FUNC void badust_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006D4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x808006D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808006DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808006E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808006E4: jal         0x8009C128
    // 0x808006E8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808006E8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x808006EC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x808006F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808006F4: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x808006F8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x808006FC: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x80800700: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x80800704: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x80800708: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8080070C: sb          $t7, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r15;
    // 0x80800710: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x80800714: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80800718: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8080071C: bne         $at, $zero, L_80800730
    if (ctx->r1 != 0) {
        // 0x80800720: nop
    
            goto L_80800730;
    }
    // 0x80800720: nop

    // 0x80800724: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x80800728: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x8080072C: lbu         $v1, 0x8($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X8);
L_80800730:
    // 0x80800730: beq         $v1, $zero, L_808007AC
    if (ctx->r3 == 0) {
        // 0x80800734: nop
    
            goto L_808007AC;
    }
    // 0x80800734: nop

    // 0x80800738: jal         0x8009C984
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800740: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80800744: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800748: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8080074C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800750: jal         0x800DC178
    // 0x80800754: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_800DC178(rdram, ctx);
        goto after_2;
    // 0x80800754: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80800758: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8080075C: jal         0x800136E4
    // 0x80800760: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    func_800136E4(rdram, ctx);
        goto after_3;
    // 0x80800760: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    after_3:
    // 0x80800764: jal         0x800DC0C0
    // 0x80800768: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_800DC0C0(rdram, ctx);
        goto after_4;
    // 0x80800768: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8080076C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80800770: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800774: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080077C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800780: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80800784: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80800788: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8080078C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80800790: jal         0x800EFCD8
    // 0x80800794: nop

    func_800EFCD8(rdram, ctx);
        goto after_5;
    // 0x80800794: nop

    after_5:
    // 0x80800798: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8080079C: nop

    // 0x808007A0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x808007A4: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x808007A8: lbu         $v1, 0x8($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X8);
L_808007AC:
    // 0x808007AC: beq         $v1, $zero, L_808007F4
    if (ctx->r3 == 0) {
        // 0x808007B0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_808007F4;
    }
    // 0x808007B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808007B4: beq         $v1, $at, L_808007D0
    if (ctx->r3 == ctx->r1) {
        // 0x808007B8: addiu       $a0, $sp, 0x44
        ctx->r4 = ADD32(ctx->r29, 0X44);
            goto L_808007D0;
    }
    // 0x808007B8: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x808007BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808007C0: beq         $v1, $at, L_808007EC
    if (ctx->r3 == ctx->r1) {
        // 0x808007C4: addiu       $a0, $sp, 0x50
        ctx->r4 = ADD32(ctx->r29, 0X50);
            goto L_808007EC;
    }
    // 0x808007C4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x808007C8: b           L_808007F4
    // 0x808007CC: nop

        goto L_808007F4;
    // 0x808007CC: nop

L_808007D0:
    // 0x808007D0: jal         0x800EF334
    // 0x808007D4: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    func_800EF334(rdram, ctx);
        goto after_6;
    // 0x808007D4: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    after_6:
    // 0x808007D8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x808007DC: jal         0x800EF04C
    // 0x808007E0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800EF04C(rdram, ctx);
        goto after_7;
    // 0x808007E0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_7:
    // 0x808007E4: b           L_808007F4
    // 0x808007E8: nop

        goto L_808007F4;
    // 0x808007E8: nop

L_808007EC:
    // 0x808007EC: jal         0x800EF04C
    // 0x808007F0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800EF04C(rdram, ctx);
        goto after_8;
    // 0x808007F0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_8:
L_808007F4:
    // 0x808007F4: jal         0x8009C984
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_9;
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808007FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800800: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80800804: jal         0x800EFCD8
    // 0x80800808: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_800EFCD8(rdram, ctx);
        goto after_10;
    // 0x80800808: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_10:
    // 0x8080080C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800810: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800814: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80800818: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080081C: jal         0x800DC178
    // 0x80800820: nop

    func_800DC178(rdram, ctx);
        goto after_11;
    // 0x80800820: nop

    after_11:
    // 0x80800824: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC90) << 16);
    // 0x80800828: lwc1        $f12, 0xC90($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC90));
    // 0x8080082C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800830: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800834: jal         0x800DC178
    // 0x80800838: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    func_800DC178(rdram, ctx);
        goto after_12;
    // 0x80800838: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x8080083C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC94) << 16);
    // 0x80800840: lwc1        $f12, 0xC94($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC94));
    // 0x80800844: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC98) << 16);
    // 0x80800848: lwc1        $f14, 0xC98($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC98));
    // 0x8080084C: jal         0x800DC178
    // 0x80800850: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800DC178(rdram, ctx);
        goto after_13;
    // 0x80800850: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x80800854: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XC9C) << 16);
    // 0x80800858: lwc1        $f12, 0xC9C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XC9C));
    // 0x8080085C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XCA0) << 16);
    // 0x80800860: lwc1        $f14, 0xCA0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XCA0));
    // 0x80800864: jal         0x800DC178
    // 0x80800868: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_800DC178(rdram, ctx);
        goto after_14;
    // 0x80800868: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_14:
    // 0x8080086C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800874: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80800878: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x8080087C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80800880: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80800884: jal         0x80000260
    // 0x80800888: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    badust_entrypoint_2(rdram, ctx);
        goto after_15;
    // 0x80800888: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x8080088C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800890: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800894: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80800898: jr          $ra
    // 0x8080089C: nop

    return;
    // 0x8080089C: nop

;}
RECOMP_FUNC void badust_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808008A4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x808008A8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x808008AC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x808008B0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x808008B4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x808008B8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x808008BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808008C0: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x808008C4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x808008C8: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x808008CC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x808008D0: bc1f        L_8080090C
    if (!c1cs) {
        // 0x808008D4: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_8080090C;
    }
    // 0x808008D4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x808008D8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x808008DC: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x808008E0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x808008E4: nop

    // 0x808008E8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_808008EC:
    // 0x808008EC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x808008F0: jal         0x8000058C
    // 0x808008F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    badust_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x808008F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808008F8: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
    // 0x808008FC: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x80800900: nop

    // 0x80800904: bc1tl       L_808008EC
    if (c1cs) {
        // 0x80800908: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_808008EC;
    }
    goto skip_0;
    // 0x80800908: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_0:
L_8080090C:
    // 0x8080090C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800910: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80800914: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80800918: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8080091C: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x80800920: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80800924: jr          $ra
    // 0x80800928: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80800928: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void badust_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080092C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800930: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800934: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800938: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x8080093C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800940: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800944: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x80800948: beq         $a1, $zero, L_80800968
    if (ctx->r5 == 0) {
        // 0x8080094C: nop
    
            goto L_80800968;
    }
    // 0x8080094C: nop

    // 0x80800950: beq         $a1, $at, L_8080099C
    if (ctx->r5 == ctx->r1) {
        // 0x80800954: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080099C;
    }
    // 0x80800954: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800958: beq         $a1, $at, L_808009D0
    if (ctx->r5 == ctx->r1) {
        // 0x8080095C: nop
    
            goto L_808009D0;
    }
    // 0x8080095C: nop

    // 0x80800960: b           L_808009F4
    // 0x80800964: addiu       $t6, $a1, 0x1
    ctx->r14 = ADD32(ctx->r5, 0X1);
        goto L_808009F4;
    // 0x80800964: addiu       $t6, $a1, 0x1
    ctx->r14 = ADD32(ctx->r5, 0X1);
L_80800968:
    // 0x80800968: jal         0x8009BB18
    // 0x8080096C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_0;
    // 0x8080096C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800970: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800974: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080097C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80800980: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80800984: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800988: jal         0x80000424
    // 0x8080098C: nop

    badust_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x8080098C: nop

    after_1:
    // 0x80800990: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x80800994: b           L_808009F0
    // 0x80800998: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
        goto L_808009F0;
    // 0x80800998: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
L_8080099C:
    // 0x8080099C: jal         0x8009BB18
    // 0x808009A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_2;
    // 0x808009A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808009A4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x808009A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808009AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009B0: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x808009B4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x808009B8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x808009BC: jal         0x80000424
    // 0x808009C0: nop

    badust_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x808009C0: nop

    after_3:
    // 0x808009C4: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x808009C8: b           L_808009F0
    // 0x808009CC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
        goto L_808009F0;
    // 0x808009CC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
L_808009D0:
    // 0x808009D0: jal         0x8009BB18
    // 0x808009D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_4;
    // 0x808009D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808009D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808009DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009E0: jal         0x80000424
    // 0x808009E4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    badust_entrypoint_4(rdram, ctx);
        goto after_5;
    // 0x808009E4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_5:
    // 0x808009E8: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x808009EC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
L_808009F0:
    // 0x808009F0: addiu       $t6, $a1, 0x1
    ctx->r14 = ADD32(ctx->r5, 0X1);
L_808009F4:
    // 0x808009F4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x808009F8: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x808009FC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80800A00: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80800A04: bnel        $at, $zero, L_80800A14
    if (ctx->r1 != 0) {
        // 0x80800A08: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800A14;
    }
    goto skip_0;
    // 0x80800A08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800A0C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80800A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800A14:
    // 0x80800A14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800A1C: jr          $ra
    // 0x80800A20: nop

    return;
    // 0x80800A20: nop

;}
RECOMP_FUNC void badust_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A24: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800A28: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x80800A2C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XCA4) << 16);
    // 0x80800A30: lwc1        $f24, 0xCA4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XCA4));
    // 0x80800A34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800A38: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x80800A3C: mtc1        $a1, $f26
    ctx->f26.u32l = ctx->r5;
    // 0x80800A40: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80800A44: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80800A48: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80800A4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800A50: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80800A54: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x80800A58: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x80800A5C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80800A60: bc1f        L_80800ABC
    if (!c1cs) {
        // 0x80800A64: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_80800ABC;
    }
    // 0x80800A64: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80800A68: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800A6C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80800A70: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(21, 0XCA8) << 16);
    // 0x80800A74: lwc1        $f28, 0xCA8($at)
    ctx->f28.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0XCA8));
    // 0x80800A78: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80800A7C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80800A80: nop

    // 0x80800A84: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
L_80800A88:
    // 0x80800A88: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800A8C: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x80800A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A94: jal         0x8000062C
    // 0x80800A98: swc1        $f30, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f30.u32l;
    badust_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800A98: swc1        $f30, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f30.u32l;
    after_0:
    // 0x80800A9C: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x80800AA0: c.lt.s      $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f20.fl < ctx->f24.fl;
    // 0x80800AA4: nop

    // 0x80800AA8: bc1tl       L_80800A88
    if (c1cs) {
        // 0x80800AAC: mfc1        $a1, $f26
        ctx->r5 = (int32_t)ctx->f26.u32l;
            goto L_80800A88;
    }
    goto skip_0;
    // 0x80800AAC: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    skip_0:
    // 0x80800AB0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80800AB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800AB8: nop

L_80800ABC:
    // 0x80800ABC: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80800AC0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80800AC4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80800AC8: lui         $at, 0x43D7
    ctx->r1 = S32(0X43D7 << 16);
    // 0x80800ACC: bc1fl       L_80800B24
    if (!c1cs) {
        // 0x80800AD0: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80800B24;
    }
    goto skip_1;
    // 0x80800AD0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_1:
    // 0x80800AD4: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80800AD8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800ADC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80800AE0: nop

L_80800AE4:
    // 0x80800AE4: jal         0x800136E4
    // 0x80800AE8: add.s       $f12, $f20, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f28.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x80800AE8: add.s       $f12, $f20, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f28.fl;
    after_1:
    // 0x80800AEC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800AF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800AF4: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x80800AF8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800AFC: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x80800B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B04: jal         0x8000062C
    // 0x80800B08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    badust_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x80800B08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80800B0C: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x80800B10: c.lt.s      $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f20.fl < ctx->f24.fl;
    // 0x80800B14: nop

    // 0x80800B18: bc1t        L_80800AE4
    if (c1cs) {
        // 0x80800B1C: nop
    
            goto L_80800AE4;
    }
    // 0x80800B1C: nop

    // 0x80800B20: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80800B24:
    // 0x80800B24: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80800B28: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80800B2C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x80800B30: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80800B34: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x80800B38: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x80800B3C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80800B40: jr          $ra
    // 0x80800B44: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80800B44: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void badust_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B50: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x80800B54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800B58: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80800B5C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x80800B60: sb          $zero, 0x8($t7)
    MEM_B(0X8, ctx->r15) = 0;
    // 0x80800B64: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x80800B68: jal         0x80000B80
    // 0x80800B6C: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    badust_entrypoint_12(rdram, ctx);
        goto after_0;
    // 0x80800B6C: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    after_0:
    // 0x80800B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B78: jr          $ra
    // 0x80800B7C: nop

    return;
    // 0x80800B7C: nop

;}
RECOMP_FUNC void badust_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B88: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x80800B8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800B90: beq         $a1, $at, L_80800BF8
    if (ctx->r5 == ctx->r1) {
        // 0x80800B94: sw          $a1, 0x0($t6)
        MEM_W(0X0, ctx->r14) = ctx->r5;
            goto L_80800BF8;
    }
    // 0x80800B94: sw          $a1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r5;
    // 0x80800B98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800B9C: beq         $a1, $at, L_80800BB8
    if (ctx->r5 == ctx->r1) {
        // 0x80800BA0: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80800BB8;
    }
    // 0x80800BA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800BA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800BA8: beq         $a1, $at, L_80800BE8
    if (ctx->r5 == ctx->r1) {
        // 0x80800BAC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80800BE8;
    }
    // 0x80800BAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800BB0: b           L_80800C08
    // 0x80800BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800C08;
    // 0x80800BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800BB8:
    // 0x80800BB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800BBC: jal         0x8009ADF0
    // 0x80800BC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009ADF0(rdram, ctx);
        goto after_0;
    // 0x80800BC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800BC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800BC8: lui         $a2, 0x3C23
    ctx->r6 = S32(0X3C23 << 16);
    // 0x80800BCC: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x80800BD0: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x80800BD4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800BD8: jal         0x80085338
    // 0x80800BDC: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
    _batimer_set(rdram, ctx);
        goto after_1;
    // 0x80800BDC: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
    after_1:
    // 0x80800BE0: b           L_80800C08
    // 0x80800BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800C08;
    // 0x80800BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800BE8:
    // 0x80800BE8: jal         0x8009ADF0
    // 0x80800BEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009ADF0(rdram, ctx);
        goto after_2;
    // 0x80800BEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80800BF0: b           L_80800C08
    // 0x80800BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800C08;
    // 0x80800BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800BF8:
    // 0x80800BF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800BFC: jal         0x8009ADF0
    // 0x80800C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009ADF0(rdram, ctx);
        goto after_3;
    // 0x80800C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80800C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C08:
    // 0x80800C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C0C: jr          $ra
    // 0x80800C10: nop

    return;
    // 0x80800C10: nop

;}
RECOMP_FUNC void badust_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C1C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x80800C20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800C24: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x80800C28: beq         $v0, $at, L_80800C40
    if (ctx->r2 == ctx->r1) {
        // 0x80800C2C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800C40;
    }
    // 0x80800C2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800C30: beq         $v0, $at, L_80800C50
    if (ctx->r2 == ctx->r1) {
        // 0x80800C34: nop
    
            goto L_80800C50;
    }
    // 0x80800C34: nop

    // 0x80800C38: b           L_80800C5C
    // 0x80800C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800C5C;
    // 0x80800C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C40:
    // 0x80800C40: jal         0x80000010
    // 0x80800C44: nop

    func_80800010_badust(rdram, ctx);
        goto after_0;
    // 0x80800C44: nop

    after_0:
    // 0x80800C48: b           L_80800C5C
    // 0x80800C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800C5C;
    // 0x80800C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C50:
    // 0x80800C50: jal         0x80000008
    // 0x80800C54: nop

    func_80800008_badust(rdram, ctx);
        goto after_1;
    // 0x80800C54: nop

    after_1:
    // 0x80800C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C5C:
    // 0x80800C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C60: jr          $ra
    // 0x80800C64: nop

    return;
    // 0x80800C64: nop

    // 0x80800C68: nop

    // 0x80800C6C: nop

;}
RECOMP_FUNC void baeggaim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_80800008_baeggaim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8080000C: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x80800010: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x80800014: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800018: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8080001C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x80800020: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80800024: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x80800028: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
    // 0x8080002C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80800030: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80800034: jal         0x800D8FEC
    // 0x80800038: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_800D8FEC(rdram, ctx);
        goto after_0;
    // 0x80800038: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x8080003C: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    // 0x80800040: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800044: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(22, 0X470) << 16);
    // 0x80800048: mflo        $t6
    ctx->r14 = lo;
    // 0x8080004C: blezl       $t6, L_80800090
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80800050: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80800090;
    }
    goto skip_0;
    // 0x80800050: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x80800054: lwc1        $f22, 0x470($at)
    ctx->f22.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X470));
    // 0x80800058: sub.s       $f4, $f24, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f20.fl;
L_8080005C:
    // 0x8080005C: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    // 0x80800060: mul.s       $f12, $f4, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80800064: jal         0x800F0DC0
    // 0x80800068: nop

    func_800F0DC0(rdram, ctx);
        goto after_1;
    // 0x80800068: nop

    after_1:
    // 0x8080006C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800070: jal         0x800D8FEC
    // 0x80800074: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    func_800D8FEC(rdram, ctx);
        goto after_2;
    // 0x80800074: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    after_2:
    // 0x80800078: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8080007C: mflo        $t7
    ctx->r15 = lo;
    // 0x80800080: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80800084: bnel        $at, $zero, L_8080005C
    if (ctx->r1 != 0) {
        // 0x80800088: sub.s       $f4, $f24, $f20
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f20.fl;
            goto L_8080005C;
    }
    goto skip_1;
    // 0x80800088: sub.s       $f4, $f24, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f20.fl;
    skip_1:
    // 0x8080008C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80800090:
    // 0x80800090: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x80800094: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80800098: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x8080009C: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x808000A0: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x808000A4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x808000A8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x808000AC: jr          $ra
    // 0x808000B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x808000B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_808000B4_baeggaim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000BC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x808000C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808000C8: jal         0x80084AC8
    // 0x808000CC: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    _baeggcursor_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808000CC: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    after_0:
    // 0x808000D0: jal         0x8009EF28
    // 0x808000D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8009EF28(rdram, ctx);
        goto after_1;
    // 0x808000D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x808000D8: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x808000DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808000E0: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x808000E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808000E8: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x808000EC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808000F0: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x808000F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x808000F8: jal         0x8009EF34
    // 0x808000FC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_8009EF34(rdram, ctx);
        goto after_2;
    // 0x808000FC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80800100: lui         $at, 0x42AB
    ctx->r1 = S32(0X42AB << 16);
    // 0x80800104: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800108: lui         $at, 0x41E4
    ctx->r1 = S32(0X41E4 << 16);
    // 0x8080010C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800110: mul.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80800114: lui         $a2, 0x40EC
    ctx->r6 = S32(0X40EC << 16);
    // 0x80800118: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080011C: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800120: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x80800124: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80800128: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8080012C: jal         0x80000008
    // 0x80800130: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    func_80800008_baeggaim(rdram, ctx);
        goto after_3;
    // 0x80800130: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    after_3:
    // 0x80800134: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x80800138: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8080013C: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80800140: jal         0x80000008
    // 0x80800144: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    func_80800008_baeggaim(rdram, ctx);
        goto after_4;
    // 0x80800144: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    after_4:
    // 0x80800148: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x8080014C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800150: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800154: jal         0x80084B00
    // 0x80800158: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    _baeggcursor_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x80800158: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x8080015C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800160: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800164: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800168: jr          $ra
    // 0x8080016C: nop

    return;
    // 0x8080016C: nop

;}
RECOMP_FUNC void func_80800170_baeggaim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800170: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800174: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800178: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8080017C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80800180: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
    // 0x80800184: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800188: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8080018C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80800190: lui         $at, 0x4362
    ctx->r1 = S32(0X4362 << 16);
    // 0x80800194: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80800198: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8080019C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808001A0: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x808001A4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x808001A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808001AC: lui         $at, 0x4327
    ctx->r1 = S32(0X4327 << 16);
    // 0x808001B0: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
    // 0x808001B4: bc1f        L_808001C0
    if (!c1cs) {
        // 0x808001B8: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_808001C0;
    }
    // 0x808001B8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x808001BC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_808001C0:
    // 0x808001C0: sub.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x808001C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808001C8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x808001CC: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x808001D0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x808001D4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808001D8: bc1fl       L_808001E8
    if (!c1cs) {
        // 0x808001DC: lwc1        $f2, 0x4($a0)
        ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
            goto L_808001E8;
    }
    goto skip_0;
    // 0x808001DC: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    skip_0:
    // 0x808001E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808001E4: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
L_808001E8:
    // 0x808001E8: sub.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x808001EC: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x808001F0: nop

    // 0x808001F4: bc1fl       L_80800204
    if (!c1cs) {
        // 0x808001F8: sub.s       $f0, $f10, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f2.fl;
            goto L_80800204;
    }
    goto skip_1;
    // 0x808001F8: sub.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f2.fl;
    skip_1:
    // 0x808001FC: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x80800200: sub.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f2.fl;
L_80800204:
    // 0x80800204: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80800208: nop

    // 0x8080020C: bc1fl       L_8080021C
    if (!c1cs) {
        // 0x80800210: swc1        $f4, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
            goto L_8080021C;
    }
    goto skip_2;
    // 0x80800210: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    skip_2:
    // 0x80800214: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x80800218: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
L_8080021C:
    // 0x8080021C: jal         0x800F1344
    // 0x80800220: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_800F1344(rdram, ctx);
        goto after_0;
    // 0x80800220: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80800224: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80800228: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8080022C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800230: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80800234: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800238: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8080023C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800240: lui         $a2, 0x4202
    ctx->r6 = S32(0X4202 << 16);
    // 0x80800244: jal         0x800F1344
    // 0x80800248: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F1344(rdram, ctx);
        goto after_1;
    // 0x80800248: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8080024C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80800250: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x80800254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800258: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080025C: jr          $ra
    // 0x80800260: nop

    return;
    // 0x80800260: nop

;}
RECOMP_FUNC void func_80800264_baeggaim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800264: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080026C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80800270: jal         0x800A4CA8
    // 0x80800274: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x80800274: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800278: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8080027C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800280: jal         0x80089408
    // 0x80800284: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _ncba1p_entrypoint_8(rdram, ctx);
        goto after_1;
    // 0x80800284: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800288: jal         0x80084C90
    // 0x8080028C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    _bafpctrl_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x8080028C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x80800290: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80800294: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800298: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8080029C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x808002A0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x808002A4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x808002A8: jal         0x80000170
    // 0x808002AC: nop

    func_80800170_baeggaim(rdram, ctx);
        goto after_3;
    // 0x808002AC: nop

    after_3:
    // 0x808002B0: jal         0x800D8FF8
    // 0x808002B4: nop

    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x808002B4: nop

    after_4:
    // 0x808002B8: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808002BC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808002C0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x808002C4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x808002C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808002CC: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x808002D0: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x808002D4: jal         0x80095738
    // 0x808002D8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_80095738(rdram, ctx);
        goto after_5;
    // 0x808002D8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x808002DC: bne         $v0, $zero, L_80800300
    if (ctx->r2 != 0) {
        // 0x808002E0: lwc1        $f4, 0x20($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
            goto L_80800300;
    }
    // 0x808002E0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x808002E4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808002E8: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808002EC: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x808002F0: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x808002F4: jal         0x80083128
    // 0x808002F8: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    _bsdronelook_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x808002F8: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_6:
    // 0x808002FC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_80800300:
    // 0x80800300: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800308: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8080030C: jal         0x80089400
    // 0x80800310: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    _ncba1p_entrypoint_7(rdram, ctx);
        goto after_7;
    // 0x80800310: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x80800314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800318: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080031C: jr          $ra
    // 0x80800320: nop

    return;
    // 0x80800320: nop

;}
RECOMP_FUNC void baeggaim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080032C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800330: jal         0x80084AE8
    // 0x80800334: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _baeggcursor_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x80800334: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80800338: jal         0x80084B30
    // 0x8080033C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _baeggfire_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x8080033C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800348: jr          $ra
    // 0x8080034C: nop

    return;
    // 0x8080034C: nop

;}
RECOMP_FUNC void baeggaim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080035C: jal         0x80084AE8
    // 0x80800360: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _baeggcursor_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x80800360: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80800364: jal         0x80084B38
    // 0x80800368: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _baeggfire_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800368: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080036C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800374: jr          $ra
    // 0x80800378: nop

    return;
    // 0x80800378: nop

;}
RECOMP_FUNC void baeggaim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080037C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800380: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800384: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800388: jal         0x80084C88
    // 0x8080038C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bafpctrl_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080038C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800390: bnel        $v0, $zero, L_808003A4
    if (ctx->r2 != 0) {
        // 0x80800394: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003A4;
    }
    goto skip_0;
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800398: jal         0x80094AB4
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094AB4(rdram, ctx);
        goto after_1;
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003A4:
    // 0x808003A4: jal         0x800000B4
    // 0x808003A8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_808000B4_baeggaim(rdram, ctx);
        goto after_2;
    // 0x808003A8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B0: jal         0x80095738
    // 0x808003B4: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    func_80095738(rdram, ctx);
        goto after_3;
    // 0x808003B4: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_3:
    // 0x808003B8: bnel        $v0, $zero, L_808003DC
    if (ctx->r2 != 0) {
        // 0x808003BC: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_808003DC;
    }
    goto skip_1;
    // 0x808003BC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    skip_1:
    // 0x808003C0: jal         0x80084C80
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808003C8: bne         $v0, $zero, L_808003D8
    if (ctx->r2 != 0) {
        // 0x808003CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003D8;
    }
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003D0: jal         0x80000264
    // 0x808003D4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80800264_baeggaim(rdram, ctx);
        goto after_5;
    // 0x808003D4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_5:
L_808003D8:
    // 0x808003D8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_808003DC:
    // 0x808003DC: jal         0x80094510
    // 0x808003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094510(rdram, ctx);
        goto after_6;
    // 0x808003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808003E4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x808003E8: bne         $v0, $at, L_8080040C
    if (ctx->r2 != ctx->r1) {
        // 0x808003EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080040C;
    }
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003F4: jal         0x800919F4
    // 0x808003F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_7;
    // 0x808003F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808003FC: beq         $v0, $zero, L_80800420
    if (ctx->r2 == 0) {
        // 0x80800400: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800420;
    }
    // 0x80800400: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800404: b           L_80800420
    // 0x80800408: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80800420;
    // 0x80800408: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8080040C:
    // 0x8080040C: jal         0x80091A58
    // 0x80800410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_8;
    // 0x80800410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800414: beq         $v0, $zero, L_80800420
    if (ctx->r2 == 0) {
        // 0x80800418: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80800420;
    }
    // 0x80800418: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8080041C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800420:
    // 0x80800420: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80800424: beq         $t8, $zero, L_80800454
    if (ctx->r24 == 0) {
        // 0x80800428: nop
    
            goto L_80800454;
    }
    // 0x80800428: nop

    // 0x8080042C: jal         0x80084C88
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_2(rdram, ctx);
        goto after_9;
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800434: bne         $v0, $zero, L_80800454
    if (ctx->r2 != 0) {
        // 0x80800438: nop
    
            goto L_80800454;
    }
    // 0x80800438: nop

    // 0x8080043C: jal         0x80094B14
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094B14(rdram, ctx);
        goto after_10;
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800444: beq         $v0, $zero, L_80800454
    if (ctx->r2 == 0) {
        // 0x80800448: nop
    
            goto L_80800454;
    }
    // 0x80800448: nop

    // 0x8080044C: jal         0x80084B48
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggfire_entrypoint_7(rdram, ctx);
        goto after_11;
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_80800454:
    // 0x80800454: jal         0x80084B40
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggfire_entrypoint_6(rdram, ctx);
        goto after_12;
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080045C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800460: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800464: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800468: jr          $ra
    // 0x8080046C: nop

    return;
    // 0x8080046C: nop

;}
RECOMP_FUNC void func_80800000_baeggcursor(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800004: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(23, 0X690) << 16);
    // 0x80800008: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080000C: jr          $ra
    // 0x80800010: lw          $v0, 0x690($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(23, 0X690));
    return;
    // 0x80800010: lw          $v0, 0x690($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(23, 0X690));
;}
RECOMP_FUNC void baeggcursor_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800014: jr          $ra
    // 0x80800018: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x80800018: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void baeggcursor_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080001C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800020: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800024: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800028: jal         0x800A89F8
    // 0x8080002C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A89F8(rdram, ctx);
        goto after_0;
    // 0x8080002C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800030: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80800034: jal         0x800A4C68
    // 0x80800038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C68(rdram, ctx);
        goto after_1;
    // 0x80800038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080003C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80800040: bnel        $v0, $t6, L_80800100
    if (ctx->r2 != ctx->r14) {
        // 0x80800044: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800100;
    }
    goto skip_0;
    // 0x80800044: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800048: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
    // 0x8080004C: lbu         $t7, 0x8($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8);
    // 0x80800050: beql        $t7, $zero, L_80800100
    if (ctx->r15 == 0) {
        // 0x80800054: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800100;
    }
    goto skip_1;
    // 0x80800054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800058: lbu         $t8, 0xA($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XA);
    // 0x8080005C: beql        $t8, $zero, L_80800100
    if (ctx->r24 == 0) {
        // 0x80800060: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800100;
    }
    goto skip_2;
    // 0x80800060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80800064: jal         0x800A9C98
    // 0x80800068: nop

    func_800A9C98(rdram, ctx);
        goto after_2;
    // 0x80800068: nop

    after_2:
    // 0x8080006C: bnel        $v0, $zero, L_80800100
    if (ctx->r2 != 0) {
        // 0x80800070: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800100;
    }
    goto skip_3;
    // 0x80800070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x80800074: lw          $t9, 0x68($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X68);
    // 0x80800078: jal         0x800E253C
    // 0x8080007C: lwc1        $f12, 0x18($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X18);
    func_800E253C(rdram, ctx);
        goto after_3;
    // 0x8080007C: lwc1        $f12, 0x18($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X18);
    after_3:
    // 0x80800080: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    // 0x80800084: jal         0x800E257C
    // 0x80800088: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_800E257C(rdram, ctx);
        goto after_4;
    // 0x80800088: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_4:
    // 0x8080008C: jal         0x800E2434
    // 0x80800090: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800E2434(rdram, ctx);
        goto after_5;
    // 0x80800090: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80800094: jal         0x800E24CC
    // 0x80800098: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800E24CC(rdram, ctx);
        goto after_6;
    // 0x80800098: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x8080009C: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
    // 0x808000A0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x808000A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808000A8: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x808000AC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x808000B0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x808000B4: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x808000B8: nop

    // 0x808000BC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x808000C0: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
    // 0x808000C4: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x808000C8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x808000CC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x808000D0: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x808000D4: jal         0x800A7180
    // 0x808000D8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    func_800A7180(rdram, ctx);
        goto after_7;
    // 0x808000D8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_7:
    // 0x808000DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808000E0: jal         0x800D674C
    // 0x808000E4: addiu       $a0, $zero, 0x64E
    ctx->r4 = ADD32(0, 0X64E);
    func_800D674C(rdram, ctx);
        goto after_8;
    // 0x808000E4: addiu       $a0, $zero, 0x64E
    ctx->r4 = ADD32(0, 0X64E);
    after_8:
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000EC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808000F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808000F4: jal         0x800E30E0
    // 0x808000F8: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_800E30E0(rdram, ctx);
        goto after_9;
    // 0x808000F8: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_9:
    // 0x808000FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800100:
    // 0x80800100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800104: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800108: jr          $ra
    // 0x8080010C: nop

    return;
    // 0x8080010C: nop

;}
RECOMP_FUNC void baeggcursor_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800110: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80800114: jr          $ra
    // 0x80800118: lbu         $v0, 0x9($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X9);
    return;
    // 0x80800118: lbu         $v0, 0x9($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X9);
;}
RECOMP_FUNC void baeggcursor_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080011C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80800120: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80800124: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80800128: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x8080012C: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80800130: jr          $ra
    // 0x80800134: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x80800134: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void baeggcursor_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080013C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800140: jal         0x8000018C
    // 0x80800144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    baeggcursor_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x80800144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080014C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800150: jr          $ra
    // 0x80800154: nop

    return;
    // 0x80800154: nop

;}
RECOMP_FUNC void baeggcursor_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080015C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800160: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80800164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800168: jal         0x8000018C
    // 0x8080016C: sb          $zero, 0x9($t6)
    MEM_B(0X9, ctx->r14) = 0;
    baeggcursor_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x8080016C: sb          $zero, 0x9($t6)
    MEM_B(0X9, ctx->r14) = 0;
    after_0:
    // 0x80800170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

;}
RECOMP_FUNC void baeggcursor_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800180: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80800184: jr          $ra
    // 0x80800188: sb          $a1, 0xA($t6)
    MEM_B(0XA, ctx->r14) = ctx->r5;
    return;
    // 0x80800188: sb          $a1, 0xA($t6)
    MEM_B(0XA, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void baeggcursor_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080018C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800194: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800198: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x8080019C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001A4: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x808001A8: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x808001AC: beql        $v1, $zero, L_808001D4
    if (ctx->r3 == 0) {
        // 0x808001B0: sb          $zero, 0x8($v0)
        MEM_B(0X8, ctx->r2) = 0;
            goto L_808001D4;
    }
    goto skip_0;
    // 0x808001B0: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    skip_0:
    // 0x808001B4: beq         $v1, $at, L_808001E8
    if (ctx->r3 == ctx->r1) {
        // 0x808001B8: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_808001E8;
    }
    // 0x808001B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808001BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808001C0: beq         $v1, $at, L_80800200
    if (ctx->r3 == ctx->r1) {
        // 0x808001C4: addiu       $t1, $zero, 0x78
        ctx->r9 = ADD32(0, 0X78);
            goto L_80800200;
    }
    // 0x808001C4: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x808001C8: b           L_8080020C
    // 0x808001CC: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
        goto L_8080020C;
    // 0x808001CC: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x808001D0: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
L_808001D4:
    // 0x808001D4: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x808001D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808001DC: sb          $t6, 0xA($t7)
    MEM_B(0XA, ctx->r15) = ctx->r14;
    // 0x808001E0: b           L_80800208
    // 0x808001E4: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
        goto L_80800208;
    // 0x808001E4: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
L_808001E8:
    // 0x808001E8: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
    // 0x808001EC: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    // 0x808001F0: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x808001F4: sw          $t9, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r25;
    // 0x808001F8: b           L_80800208
    // 0x808001FC: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
        goto L_80800208;
    // 0x808001FC: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
L_80800200:
    // 0x80800200: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
    // 0x80800204: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
L_80800208:
    // 0x80800208: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
L_8080020C:
    // 0x8080020C: beq         $at, $zero, L_80800314
    if (ctx->r1 == 0) {
        // 0x80800210: sb          $a1, 0x9($v0)
        MEM_B(0X9, ctx->r2) = ctx->r5;
            goto L_80800314;
    }
    // 0x80800210: sb          $a1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r5;
    // 0x80800214: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(23, 0X640) << 16);
    // 0x80800218: addu        $at, $at, $t2
    gpr jr_addend_80800220 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8080021C: lw          $t2, 0x640($at)
    ctx->r10 = ADD32(ctx->r1, (int16_t)RELOC_LO16(23, 0X640));
    // 0x80800220: jr          $t2
    // 0x80800224: nop

    switch (jr_addend_80800220 >> 2) {
        case 0: goto L_80800228; break;
        case 1: goto L_80800228; break;
        case 2: goto L_80800250; break;
        case 3: goto L_80800280; break;
        case 4: goto L_808002CC; break;
        case 5: goto L_808002F0; break;
        default: switch_error(__func__, 0x80800220, 0x80800640);
    }
    // 0x80800224: nop

L_80800228:
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800230: jal         0x8009ADF0
    // 0x80800234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009ADF0(rdram, ctx);
        goto after_0;
    // 0x80800234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80800238: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
    // 0x8080023C: lbu         $t3, 0x8($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X8);
    // 0x80800240: beql        $t3, $zero, L_80800318
    if (ctx->r11 == 0) {
        // 0x80800244: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800318;
    }
    goto skip_1;
    // 0x80800244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800248: b           L_80800314
    // 0x8080024C: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
        goto L_80800314;
    // 0x8080024C: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
L_80800250:
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800254: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800258: jal         0x8009ADF0
    // 0x8080025C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_1;
    // 0x8080025C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80800260: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800264: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800268: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
    // 0x8080026C: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x80800270: swc1        $f4, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f4.u32l;
    // 0x80800274: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x80800278: b           L_80800314
    // 0x8080027C: sw          $t5, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r13;
        goto L_80800314;
    // 0x8080027C: sw          $t5, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r13;
L_80800280:
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800284: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800288: jal         0x8009ADF0
    // 0x8080028C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_2;
    // 0x8080028C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80800290: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(23, 0X658) << 16);
    // 0x80800294: lwc1        $f6, 0x658($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X658));
    // 0x80800298: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A0: lui         $a1, 0x4318
    ctx->r5 = S32(0X4318 << 16);
    // 0x808002A4: lui         $a2, 0x42E4
    ctx->r6 = S32(0X42E4 << 16);
    // 0x808002A8: jal         0x800003A4
    // 0x808002AC: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    baeggcursor_entrypoint_10(rdram, ctx);
        goto after_3;
    // 0x808002AC: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    after_3:
    // 0x808002B0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x808002B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808002B8: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x808002BC: swc1        $f8, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f8.u32l;
    // 0x808002C0: lw          $t9, 0x68($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X68);
    // 0x808002C4: b           L_80800314
    // 0x808002C8: sw          $zero, 0x14($t9)
    MEM_W(0X14, ctx->r25) = 0;
        goto L_80800314;
    // 0x808002C8: sw          $zero, 0x14($t9)
    MEM_W(0X14, ctx->r25) = 0;
L_808002CC:
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x808002D4: jal         0x8009ADF0
    // 0x808002D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_4;
    // 0x808002D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x808002DC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(23, 0X65C) << 16);
    // 0x808002E0: lwc1        $f10, 0x65C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X65C));
    // 0x808002E4: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    // 0x808002E8: b           L_80800314
    // 0x808002EC: swc1        $f10, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f10.u32l;
        goto L_80800314;
    // 0x808002EC: swc1        $f10, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f10.u32l;
L_808002F0:
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x808002F8: jal         0x8009ADF0
    // 0x808002FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_5;
    // 0x808002FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80800300: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80800304: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
    // 0x80800308: swc1        $f16, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f16.u32l;
    // 0x8080030C: lw          $t2, 0x68($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X68);
    // 0x80800310: sb          $zero, 0x10($t2)
    MEM_B(0X10, ctx->r10) = 0;
L_80800314:
    // 0x80800314: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800318:
    // 0x80800318: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080031C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800320: jr          $ra
    // 0x80800324: nop

    return;
    // 0x80800324: nop

;}
RECOMP_FUNC void baeggcursor_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080032C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800330: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80800334: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800338: lbu         $v0, 0x9($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X9);
    // 0x8080033C: beql        $v0, $zero, L_80800360
    if (ctx->r2 == 0) {
        // 0x80800340: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800360;
    }
    goto skip_0;
    // 0x80800340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800344: beq         $v0, $at, L_8080035C
    if (ctx->r2 == ctx->r1) {
        // 0x80800348: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8080035C;
    }
    // 0x80800348: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8080034C: beql        $v0, $at, L_80800360
    if (ctx->r2 == ctx->r1) {
        // 0x80800350: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800360;
    }
    goto skip_1;
    // 0x80800350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800354: jal         0x8000018C
    // 0x80800358: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    baeggcursor_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x80800358: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
L_8080035C:
    // 0x8080035C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800360:
    // 0x80800360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800364: jr          $ra
    // 0x80800368: nop

    return;
    // 0x80800368: nop

;}
RECOMP_FUNC void baeggcursor_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080036C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80800370: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800374: lbu         $v0, 0x9($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X9);
    // 0x80800378: beql        $v0, $zero, L_8080039C
    if (ctx->r2 == 0) {
        // 0x8080037C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8080039C;
    }
    goto skip_0;
    // 0x8080037C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80800380: beq         $v0, $at, L_80800398
    if (ctx->r2 == ctx->r1) {
        // 0x80800384: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800398;
    }
    // 0x80800384: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800388: beql        $v0, $at, L_8080039C
    if (ctx->r2 == ctx->r1) {
        // 0x8080038C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8080039C;
    }
    goto skip_1;
    // 0x8080038C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80800390: jr          $ra
    // 0x80800394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800398:
    // 0x80800398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080039C:
    // 0x8080039C: jr          $ra
    // 0x808003A0: nop

    return;
    // 0x808003A0: nop

;}
RECOMP_FUNC void baeggcursor_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003A4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808003A8: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x808003AC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x808003B0: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x808003B4: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x808003B8: jr          $ra
    // 0x808003BC: swc1        $f14, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x808003BC: swc1        $f14, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void baeggcursor_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808003C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808003CC: lw          $v1, 0x68($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X68);
    // 0x808003D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808003D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808003D8: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x808003DC: beq         $v0, $at, L_80800400
    if (ctx->r2 == ctx->r1) {
        // 0x808003E0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800400;
    }
    // 0x808003E0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808003E4: beq         $v0, $at, L_808004D0
    if (ctx->r2 == ctx->r1) {
        // 0x808003E8: lui         $a2, 0x3E4C
        ctx->r6 = S32(0X3E4C << 16);
            goto L_808004D0;
    }
    // 0x808003E8: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x808003EC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x808003F0: beql        $v0, $at, L_80800560
    if (ctx->r2 == ctx->r1) {
        // 0x808003F4: lwc1        $f12, 0xC($v1)
        ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
            goto L_80800560;
    }
    goto skip_0;
    // 0x808003F4: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    skip_0:
    // 0x808003F8: b           L_8080062C
    // 0x808003FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8080062C;
    // 0x808003FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800400:
    // 0x80800400: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(23, 0X660) << 16);
    // 0x80800404: lwc1        $f4, 0x660($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X660));
    // 0x80800408: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8080040C: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x80800410: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800414: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80800418: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(23, 0X668) << 16);
    // 0x8080041C: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80800420: bc1f        L_80800450
    if (!c1cs) {
        // 0x80800424: nop
    
            goto L_80800450;
    }
    // 0x80800424: nop

    // 0x80800428: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(23, 0X664) << 16);
    // 0x8080042C: lwc1        $f6, 0x664($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X664));
    // 0x80800430: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800434: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x80800438: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080043C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800440: jal         0x800F10B4
    // 0x80800444: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x80800444: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80800448: b           L_8080046C
    // 0x8080044C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_8080046C;
    // 0x8080044C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80800450:
    // 0x80800450: lwc1        $f14, 0x668($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X668));
    // 0x80800454: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80800458: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080045C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800460: jal         0x800F10B4
    // 0x80800464: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x80800464: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80800468: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8080046C:
    // 0x8080046C: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x80800470: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800474: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800478: swc1        $f2, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f2.u32l;
    // 0x8080047C: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x80800480: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x80800484: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800488: lwc1        $f12, 0xC($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0XC);
    // 0x8080048C: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80800490: jal         0x800F10B4
    // 0x80800494: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x80800494: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80800498: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8080049C: lw          $t2, 0x68($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X68);
    // 0x808004A0: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x808004A4: nop

    // 0x808004A8: sw          $t9, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r25;
    // 0x808004AC: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    // 0x808004B0: jal         0x800D9078
    // 0x808004B4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800D9078(rdram, ctx);
        goto after_3;
    // 0x808004B4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_3:
    // 0x808004B8: beq         $v0, $zero, L_80800628
    if (ctx->r2 == 0) {
        // 0x808004BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800628;
    }
    // 0x808004BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C0: jal         0x8000018C
    // 0x808004C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    baeggcursor_entrypoint_7(rdram, ctx);
        goto after_4;
    // 0x808004C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x808004C8: b           L_8080062C
    // 0x808004CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8080062C;
    // 0x808004CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808004D0:
    // 0x808004D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808004D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808004D8: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x808004DC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808004E0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808004E4: lui         $a3, 0x4180
    ctx->r7 = S32(0X4180 << 16);
    // 0x808004E8: jal         0x800F10B4
    // 0x808004EC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F10B4(rdram, ctx);
        goto after_5;
    // 0x808004EC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x808004F0: lw          $t3, 0x68($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X68);
    // 0x808004F4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808004F8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x808004FC: swc1        $f0, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f0.u32l;
    // 0x80800500: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
    // 0x80800504: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800508: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8080050C: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x80800510: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800514: lwc1        $f12, 0xC($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0XC);
    // 0x80800518: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080051C: jal         0x800F10B4
    // 0x80800520: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x80800520: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80800524: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800528: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x8080052C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80800530: nop

    // 0x80800534: sw          $t6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r14;
    // 0x80800538: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    // 0x8080053C: jal         0x800D9078
    // 0x80800540: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800D9078(rdram, ctx);
        goto after_7;
    // 0x80800540: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_7:
    // 0x80800544: beq         $v0, $zero, L_80800628
    if (ctx->r2 == 0) {
        // 0x80800548: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800628;
    }
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080054C: jal         0x8000018C
    // 0x80800550: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    baeggcursor_entrypoint_7(rdram, ctx);
        goto after_8;
    // 0x80800550: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800554: b           L_8080062C
    // 0x80800558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8080062C;
    // 0x80800558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080055C: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
L_80800560:
    // 0x80800560: lbu         $a0, 0x10($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X10);
    // 0x80800564: jal         0x80000000
    // 0x80800568: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_80800000_baeggcursor(rdram, ctx);
        goto after_9;
    // 0x80800568: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_9:
    // 0x8080056C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800570: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800574: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80800578: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8080057C: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    // 0x80800580: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800584: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800588: bc1fl       L_808005F8
    if (!c1cs) {
        // 0x8080058C: sll         $t9, $t0, 3
        ctx->r25 = S32(ctx->r8 << 3);
            goto L_808005F8;
    }
    goto skip_1;
    // 0x8080058C: sll         $t9, $t0, 3
    ctx->r25 = S32(ctx->r8 << 3);
    skip_1:
    // 0x80800590: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800594: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800598: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
L_8080059C:
    // 0x8080059C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x808005A0: addu        $t8, $t1, $v1
    ctx->r24 = ADD32(ctx->r9, ctx->r3);
    // 0x808005A4: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x808005A8: nop

    // 0x808005AC: bc1fl       L_808005DC
    if (!c1cs) {
        // 0x808005B0: lwc1        $f16, 0x0($t8)
        ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
            goto L_808005DC;
    }
    goto skip_2;
    // 0x808005B0: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    skip_2:
    // 0x808005B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005B8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x808005BC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x808005C0: jal         0x8000018C
    // 0x808005C4: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    baeggcursor_entrypoint_7(rdram, ctx);
        goto after_10;
    // 0x808005C4: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_10:
    // 0x808005C8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x808005CC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x808005D0: b           L_808005F4
    // 0x808005D4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
        goto L_808005F4;
    // 0x808005D4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808005D8: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
L_808005DC:
    // 0x808005DC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x808005E0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x808005E4: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x808005E8: nop

    // 0x808005EC: bc1tl       L_8080059C
    if (c1cs) {
        // 0x808005F0: lwc1        $f10, 0x4($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
            goto L_8080059C;
    }
    goto skip_3;
    // 0x808005F0: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    skip_3:
L_808005F4:
    // 0x808005F4: sll         $t9, $t0, 3
    ctx->r25 = S32(ctx->r8 << 3);
L_808005F8:
    // 0x808005F8: addu        $v0, $t1, $t9
    ctx->r2 = ADD32(ctx->r9, ctx->r25);
    // 0x808005FC: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800600: lwc1        $f14, -0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, -0X8);
    // 0x80800604: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x80800608: lw          $a3, -0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, -0X4);
    // 0x8080060C: jal         0x800F10B4
    // 0x80800610: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F10B4(rdram, ctx);
        goto after_11;
    // 0x80800610: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_11:
    // 0x80800614: lw          $t2, 0x68($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X68);
    // 0x80800618: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
    // 0x8080061C: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    // 0x80800620: jal         0x800D91B8
    // 0x80800624: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800D91B8(rdram, ctx);
        goto after_12;
    // 0x80800624: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_12:
L_80800628:
    // 0x80800628: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080062C:
    // 0x8080062C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800630: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800634: jr          $ra
    // 0x80800638: nop

    return;
    // 0x80800638: nop

    // 0x8080063C: nop

;}
RECOMP_FUNC void baeggfire_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
;}
RECOMP_FUNC void func_80800008_baeggfire(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080000C: bnel        $a1, $at, L_8080002C
    if (ctx->r5 != ctx->r1) {
        // 0x80800010: lw          $v0, 0x6C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X6C);
            goto L_8080002C;
    }
    goto skip_0;
    // 0x80800010: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    skip_0:
    // 0x80800014: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80800018: lbu         $t6, 0x12($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X12);
    // 0x8080001C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80800020: jr          $ra
    // 0x80800024: sb          $t7, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r15;
    return;
    // 0x80800024: sb          $t7, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r15;
    // 0x80800028: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
L_8080002C:
    // 0x8080002C: lbu         $t8, 0x11($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X11);
    // 0x80800030: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80800034: sb          $t9, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r25;
    // 0x80800038: jr          $ra
    // 0x8080003C: nop

    return;
    // 0x8080003C: nop

;}
RECOMP_FUNC void func_80800040_baeggfire(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x80800044: sb          $zero, 0x12($t6)
    MEM_B(0X12, ctx->r14) = 0;
    // 0x80800048: lw          $t7, 0x6C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X6C);
    // 0x8080004C: sb          $zero, 0x11($t7)
    MEM_B(0X11, ctx->r15) = 0;
    // 0x80800050: lw          $t8, 0x6C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X6C);
    // 0x80800054: jr          $ra
    // 0x80800058: sb          $zero, 0x13($t8)
    MEM_B(0X13, ctx->r24) = 0;
    return;
    // 0x80800058: sb          $zero, 0x13($t8)
    MEM_B(0X13, ctx->r24) = 0;
;}
RECOMP_FUNC void baeggfire_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080005C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800064: jal         0x800F53D0
    // 0x80800068: nop

    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x80800068: nop

    after_0:
    // 0x8080006C: lw          $t6, 0x6C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X6C);
    // 0x80800070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800078: jal         0x80000008
    // 0x8080007C: sb          $zero, 0x13($t6)
    MEM_B(0X13, ctx->r14) = 0;
    func_80800008_baeggfire(rdram, ctx);
        goto after_1;
    // 0x8080007C: sb          $zero, 0x13($t6)
    MEM_B(0X13, ctx->r14) = 0;
    after_1:
    // 0x80800080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800088: jr          $ra
    // 0x8080008C: nop

    return;
    // 0x8080008C: nop

;}
RECOMP_FUNC void baeggfire_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800098: jal         0x800F53D0
    // 0x8080009C: nop

    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x8080009C: nop

    after_0:
    // 0x808000A0: lw          $t6, 0x6C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X6C);
    // 0x808000A4: sb          $zero, 0x13($t6)
    MEM_B(0X13, ctx->r14) = 0;
    // 0x808000A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000B0: jr          $ra
    // 0x808000B4: nop

    return;
    // 0x808000B4: nop

;}
RECOMP_FUNC void func_808000B8_baeggfire(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000C4: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x808000C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000CC: lbu         $t6, 0x13($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X13);
    // 0x808000D0: bnel        $t6, $zero, L_80800170
    if (ctx->r14 != 0) {
        // 0x808000D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800170;
    }
    goto skip_0;
    // 0x808000D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808000D8: lbu         $t7, 0x12($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X12);
    // 0x808000DC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x808000E0: addiu       $a1, $a1, 0x4B18
    ctx->r5 = ADD32(ctx->r5, 0X4B18);
    // 0x808000E4: beq         $t7, $zero, L_80800120
    if (ctx->r15 == 0) {
        // 0x808000E8: lui         $at, 0x3E80
        ctx->r1 = S32(0X3E80 << 16);
            goto L_80800120;
    }
    // 0x808000E8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x808000EC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808000F0: jal         0x800C9DE4
    // 0x808000F4: lw          $a2, 0x184($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X184);
    func_800C9DE4(rdram, ctx);
        goto after_0;
    // 0x808000F4: lw          $a2, 0x184($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x808000F8: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    // 0x808000FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800104: jal         0x80084A88
    // 0x80800108: sb          $t8, 0x13($t9)
    MEM_B(0X13, ctx->r25) = ctx->r24;
    _baeggsetup_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x80800108: sb          $t8, 0x13($t9)
    MEM_B(0X13, ctx->r25) = ctx->r24;
    after_1:
    // 0x8080010C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80800110: lbu         $t0, 0x12($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X12);
    // 0x80800114: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80800118: b           L_8080016C
    // 0x8080011C: sb          $t1, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r9;
        goto L_8080016C;
    // 0x8080011C: sb          $t1, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r9;
L_80800120:
    // 0x80800120: lbu         $t2, 0x11($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X11);
    // 0x80800124: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80800128: addiu       $a1, $a1, 0x4B20
    ctx->r5 = ADD32(ctx->r5, 0X4B20);
    // 0x8080012C: beq         $t2, $zero, L_8080016C
    if (ctx->r10 == 0) {
        // 0x80800130: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(24, 0X680) << 16);
            goto L_8080016C;
    }
    // 0x80800130: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(24, 0X680) << 16);
    // 0x80800134: lwc1        $f12, 0x680($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(24, 0X680));
    // 0x80800138: jal         0x800C9DE4
    // 0x8080013C: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    func_800C9DE4(rdram, ctx);
        goto after_2;
    // 0x8080013C: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    after_2:
    // 0x80800140: lw          $t4, 0x6C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X6C);
    // 0x80800144: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: sb          $t3, 0x13($t4)
    MEM_B(0X13, ctx->r12) = ctx->r11;
    // 0x80800150: lw          $t5, 0x6C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X6C);
    // 0x80800154: jal         0x80084A78
    // 0x80800158: lbu         $a1, 0x10($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X10);
    _baeggsetup_entrypoint_8(rdram, ctx);
        goto after_3;
    // 0x80800158: lbu         $a1, 0x10($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X10);
    after_3:
    // 0x8080015C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80800160: lbu         $t6, 0x11($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X11);
    // 0x80800164: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80800168: sb          $t7, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r15;
L_8080016C:
    // 0x8080016C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800170:
    // 0x80800170: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

;}
RECOMP_FUNC void func_80800180_baeggfire(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800188: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x8080018C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800190: beq         $a1, $at, L_808001BC
    if (ctx->r5 == ctx->r1) {
        // 0x80800194: sw          $a1, 0x8($t6)
        MEM_W(0X8, ctx->r14) = ctx->r5;
            goto L_808001BC;
    }
    // 0x80800194: sw          $a1, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r5;
    // 0x80800198: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080019C: beq         $a1, $at, L_808001DC
    if (ctx->r5 == ctx->r1) {
        // 0x808001A0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808001DC;
    }
    // 0x808001A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808001A4: beq         $a1, $at, L_8080021C
    if (ctx->r5 == ctx->r1) {
        // 0x808001A8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8080021C;
    }
    // 0x808001A8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808001AC: beql        $a1, $at, L_80800234
    if (ctx->r5 == ctx->r1) {
        // 0x808001B0: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80800234;
    }
    goto skip_0;
    // 0x808001B0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_0:
    // 0x808001B4: b           L_80800244
    // 0x808001B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800244;
    // 0x808001B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001BC:
    // 0x808001BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808001C0: lw          $t7, 0x6C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X6C);
    // 0x808001C4: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x808001C8: lw          $t8, 0x6C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X6C);
    // 0x808001CC: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x808001D0: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
    // 0x808001D4: b           L_80800240
    // 0x808001D8: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
        goto L_80800240;
    // 0x808001D8: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
L_808001DC:
    // 0x808001DC: lw          $t0, 0x6C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X6C);
    // 0x808001E0: lbu         $a1, 0x10($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X10);
    // 0x808001E4: jal         0x800944F8
    // 0x808001E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800944F8(rdram, ctx);
        goto after_0;
    // 0x808001E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001EC: beq         $v0, $zero, L_80800208
    if (ctx->r2 == 0) {
        // 0x808001F0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800208;
    }
    // 0x808001F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(24, 0X684) << 16);
    // 0x808001F8: lwc1        $f6, 0x684($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(24, 0X684));
    // 0x808001FC: lw          $t1, 0x6C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X6C);
    // 0x80800200: b           L_80800240
    // 0x80800204: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
        goto L_80800240;
    // 0x80800204: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
L_80800208:
    // 0x80800208: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(24, 0X688) << 16);
    // 0x8080020C: lwc1        $f8, 0x688($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(24, 0X688));
    // 0x80800210: lw          $t2, 0x6C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X6C);
    // 0x80800214: b           L_80800240
    // 0x80800218: swc1        $f8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f8.u32l;
        goto L_80800240;
    // 0x80800218: swc1        $f8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f8.u32l;
L_8080021C:
    // 0x8080021C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(24, 0X68C) << 16);
    // 0x80800220: lwc1        $f10, 0x68C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(24, 0X68C));
    // 0x80800224: lw          $t3, 0x6C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X6C);
    // 0x80800228: b           L_80800240
    // 0x8080022C: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
        goto L_80800240;
    // 0x8080022C: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
    // 0x80800230: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_80800234:
    // 0x80800234: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800238: lw          $t4, 0x6C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X6C);
    // 0x8080023C: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
L_80800240:
    // 0x80800240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800244:
    // 0x80800244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800248: jr          $ra
    // 0x8080024C: nop

    return;
    // 0x8080024C: nop

;}
RECOMP_FUNC void func_80800250_baeggfire(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800250: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80800254: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800258: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080025C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800260: lw          $t6, 0x6C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X6C);
    // 0x80800264: jal         0x800944F8
    // 0x80800268: lbu         $a1, 0x10($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X10);
    func_800944F8(rdram, ctx);
        goto after_0;
    // 0x80800268: lbu         $a1, 0x10($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X10);
    after_0:
    // 0x8080026C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800270: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80800274: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x80800278: bnel        $t7, $zero, L_80800298
    if (ctx->r15 != 0) {
        // 0x8080027C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800298;
    }
    goto skip_0;
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800280: jal         0x80094510
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094510(rdram, ctx);
        goto after_1;
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800288: lw          $t8, 0x6C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X6C);
    // 0x8080028C: sb          $v0, 0x10($t8)
    MEM_B(0X10, ctx->r24) = ctx->r2;
    // 0x80800290: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800298:
    // 0x80800298: jal         0x800944E0
    // 0x8080029C: lbu         $a1, 0x10($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X10);
    func_800944E0(rdram, ctx);
        goto after_2;
    // 0x8080029C: lbu         $a1, 0x10($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X10);
    after_2:
    // 0x808002A0: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    // 0x808002A4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x808002A8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x808002AC: lw          $v1, 0x4($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X4);
    // 0x808002B0: bne         $v1, $zero, L_808002F8
    if (ctx->r3 != 0) {
        // 0x808002B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002F8;
    }
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002BC: jal         0x80000008
    // 0x808002C0: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    func_80800008_baeggfire(rdram, ctx);
        goto after_3;
    // 0x808002C0: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_3:
    // 0x808002C4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x808002C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808002CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x808002D0: bne         $a2, $at, L_808002E8
    if (ctx->r6 != ctx->r1) {
        // 0x808002D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002E8;
    }
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D8: jal         0x80000180
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800180_baeggfire(rdram, ctx);
        goto after_4;
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808002E0: b           L_80800344
    // 0x808002E4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
        goto L_80800344;
    // 0x808002E4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_808002E8:
    // 0x808002E8: jal         0x80000180
    // 0x808002EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800180_baeggfire(rdram, ctx);
        goto after_5;
    // 0x808002EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x808002F0: b           L_80800344
    // 0x808002F4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
        goto L_80800344;
    // 0x808002F4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_808002F8:
    // 0x808002F8: bne         $t0, $zero, L_8080030C
    if (ctx->r8 != 0) {
        // 0x808002FC: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_8080030C;
    }
    // 0x808002FC: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x80800300: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80800304: beq         $at, $zero, L_8080032C
    if (ctx->r1 == 0) {
        // 0x80800308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080032C;
    }
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080030C:
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800310: jal         0x80000008
    // 0x80800314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800008_baeggfire(rdram, ctx);
        goto after_6;
    // 0x80800314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080031C: jal         0x80000180
    // 0x80800320: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800180_baeggfire(rdram, ctx);
        goto after_7;
    // 0x80800320: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80800324: b           L_80800344
    // 0x80800328: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
        goto L_80800344;
    // 0x80800328: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_8080032C:
    // 0x8080032C: jal         0x80000008
    // 0x80800330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800008_baeggfire(rdram, ctx);
        goto after_8;
    // 0x80800330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800338: jal         0x80000180
    // 0x8080033C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80800180_baeggfire(rdram, ctx);
        goto after_9;
    // 0x8080033C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x80800340: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_80800344:
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800348: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8080034C: beql        $t2, $zero, L_80800368
    if (ctx->r10 == 0) {
        // 0x80800350: lw          $v1, 0x6C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X6C);
            goto L_80800368;
    }
    goto skip_1;
    // 0x80800350: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    skip_1:
    // 0x80800354: lw          $t4, 0x6C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X6C);
    // 0x80800358: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8080035C: b           L_80800374
    // 0x80800360: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
        goto L_80800374;
    // 0x80800360: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80800364: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
L_80800368:
    // 0x80800368: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x8080036C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80800370: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_80800374:
    // 0x80800374: lw          $t7, 0x6C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X6C);
    // 0x80800378: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x8080037C: jal         0x80000414
    // 0x80800380: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
    baeggfire_entrypoint_3(rdram, ctx);
        goto after_10;
    // 0x80800380: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
    after_10:
    // 0x80800384: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80800388: jal         0x800EF368
    // 0x8080038C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_800EF368(rdram, ctx);
        goto after_11;
    // 0x8080038C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_11:
    // 0x80800390: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800394: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80800398: jal         0x800EE780
    // 0x8080039C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800EE780(rdram, ctx);
        goto after_12;
    // 0x8080039C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_12:
    // 0x808003A0: lw          $t8, 0x6C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X6C);
    // 0x808003A4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x808003A8: lbu         $t9, 0x10($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X10);
    // 0x808003AC: bne         $t9, $at, L_808003BC
    if (ctx->r25 != ctx->r1) {
        // 0x808003B0: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(24, 0X690) << 16);
            goto L_808003BC;
    }
    // 0x808003B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(24, 0X690) << 16);
    // 0x808003B4: b           L_808003C4
    // 0x808003B8: lwc1        $f0, 0x690($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(24, 0X690));
        goto L_808003C4;
    // 0x808003B8: lwc1        $f0, 0x690($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(24, 0X690));
L_808003BC:
    // 0x808003BC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(24, 0X694) << 16);
    // 0x808003C0: lwc1        $f0, 0x694($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(24, 0X694));
L_808003C4:
    // 0x808003C4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808003C8: jal         0x800EF368
    // 0x808003CC: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_800EF368(rdram, ctx);
        goto after_13;
    // 0x808003CC: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_13:
    // 0x808003D0: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
    // 0x808003D4: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003DC: lbu         $a1, 0x10($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X10);
    // 0x808003E0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x808003E4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x808003E8: jal         0x80084A68
    // 0x808003EC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    _baeggsetup_entrypoint_6(rdram, ctx);
        goto after_14;
    // 0x808003EC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_14:
    // 0x808003F0: jal         0x80084AF0
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggcursor_entrypoint_8(rdram, ctx);
        goto after_15;
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808003F8: jal         0x800C6DA0
    // 0x808003FC: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_800C6DA0(rdram, ctx);
        goto after_16;
    // 0x808003FC: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_16:
    // 0x80800400: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800404: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800408: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8080040C: jr          $ra
    // 0x80800410: nop

    return;
    // 0x80800410: nop

;}
RECOMP_FUNC void baeggfire_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800414: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800418: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080041C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800420: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800424: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80800428: jal         0x80084AC0
    // 0x8080042C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    _baeggcursor_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080042C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800430: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800434: beq         $v0, $at, L_80800450
    if (ctx->r2 == ctx->r1) {
        // 0x80800438: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800450;
    }
    // 0x80800438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080043C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80800440: jal         0x80084AC8
    // 0x80800444: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    _baeggcursor_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80800444: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x80800448: b           L_80800468
    // 0x8080044C: nop

        goto L_80800468;
    // 0x8080044C: nop

L_80800450:
    // 0x80800450: lui         $at, 0x4318
    ctx->r1 = S32(0X4318 << 16);
    // 0x80800454: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800458: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x8080045C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800460: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x80800464: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
L_80800468:
    // 0x80800468: jal         0x800A4C68
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C68(rdram, ctx);
        goto after_2;
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800470: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800474: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80800478: jal         0x800C5008
    // 0x8080047C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_800C5008(rdram, ctx);
        goto after_3;
    // 0x8080047C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x80800480: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80800484: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80800488: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8080048C: jal         0x800EFA4C
    // 0x80800490: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800EFA4C(rdram, ctx);
        goto after_4;
    // 0x80800490: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_4:
    // 0x80800494: jal         0x800A4C68
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C68(rdram, ctx);
        goto after_5;
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080049C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808004A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x808004A4: jal         0x800C4E58
    // 0x808004A8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800C4E58(rdram, ctx);
        goto after_6;
    // 0x808004A8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x808004AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B0: jal         0x800A4CE8
    // 0x808004B4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_800A4CE8(rdram, ctx);
        goto after_7;
    // 0x808004B4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_7:
    // 0x808004B8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x808004BC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x808004C0: jal         0x800EFB24
    // 0x808004C4: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    func_800EFB24(rdram, ctx);
        goto after_8;
    // 0x808004C4: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    after_8:
    // 0x808004C8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x808004CC: jal         0x800EF368
    // 0x808004D0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800EF368(rdram, ctx);
        goto after_9;
    // 0x808004D0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_9:
    // 0x808004D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808004D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x808004E0: jr          $ra
    // 0x808004E4: nop

    return;
    // 0x808004E4: nop

;}
RECOMP_FUNC void baeggfire_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004F0: jal         0x8009E0AC
    // 0x808004F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E0AC(rdram, ctx);
        goto after_0;
    // 0x808004F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808004F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800500: jr          $ra
    // 0x80800504: nop

    return;
    // 0x80800504: nop

;}
RECOMP_FUNC void baeggfire_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080050C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800510: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x80800514: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800518: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080051C: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80800520: lw          $t7, 0x6C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X6C);
    // 0x80800524: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
    // 0x80800528: lw          $t8, 0x6C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X6C);
    // 0x8080052C: sw          $zero, 0x8($t8)
    MEM_W(0X8, ctx->r24) = 0;
    // 0x80800530: jal         0x80000180
    // 0x80800534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800180_baeggfire(rdram, ctx);
        goto after_0;
    // 0x80800534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800538: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080053C: jal         0x8009E0AC
    // 0x80800540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E0AC(rdram, ctx);
        goto after_1;
    // 0x80800540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800544: jal         0x80000040
    // 0x80800548: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800040_baeggfire(rdram, ctx);
        goto after_2;
    // 0x80800548: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080054C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800554: jr          $ra
    // 0x80800558: nop

    return;
    // 0x80800558: nop

;}
RECOMP_FUNC void baeggfire_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080055C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800564: jal         0x800000B8
    // 0x80800568: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808000B8_baeggfire(rdram, ctx);
        goto after_0;
    // 0x80800568: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080056C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800570: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800574: lw          $a0, 0x6C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X6C);
    // 0x80800578: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8080057C: beq         $v0, $at, L_808005A4
    if (ctx->r2 == ctx->r1) {
        // 0x80800580: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808005A4;
    }
    // 0x80800580: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800584: beq         $v0, $at, L_808005C0
    if (ctx->r2 == ctx->r1) {
        // 0x80800588: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808005C0;
    }
    // 0x80800588: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080058C: beq         $v0, $at, L_808005E4
    if (ctx->r2 == ctx->r1) {
        // 0x80800590: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_808005E4;
    }
    // 0x80800590: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800594: beq         $v0, $at, L_80800628
    if (ctx->r2 == ctx->r1) {
        // 0x80800598: nop
    
            goto L_80800628;
    }
    // 0x80800598: nop

    // 0x8080059C: b           L_80800648
    // 0x808005A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800648;
    // 0x808005A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005A4:
    // 0x808005A4: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x808005A8: beql        $t6, $zero, L_80800648
    if (ctx->r14 == 0) {
        // 0x808005AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800648;
    }
    goto skip_0;
    // 0x808005AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808005B0: jal         0x80000250
    // 0x808005B4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80800250_baeggfire(rdram, ctx);
        goto after_1;
    // 0x808005B4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x808005B8: b           L_80800648
    // 0x808005BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800648;
    // 0x808005BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005C0:
    // 0x808005C0: jal         0x800D9078
    // 0x808005C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800D9078(rdram, ctx);
        goto after_2;
    // 0x808005C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x808005C8: beq         $v0, $zero, L_80800644
    if (ctx->r2 == 0) {
        // 0x808005CC: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_80800644;
    }
    // 0x808005CC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x808005D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x808005D4: jal         0x80000180
    // 0x808005D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800180_baeggfire(rdram, ctx);
        goto after_3;
    // 0x808005D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x808005DC: b           L_80800648
    // 0x808005E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800648;
    // 0x808005E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005E4:
    // 0x808005E4: jal         0x800D9078
    // 0x808005E8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800D9078(rdram, ctx);
        goto after_4;
    // 0x808005E8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_4:
    // 0x808005EC: beq         $v0, $zero, L_80800608
    if (ctx->r2 == 0) {
        // 0x808005F0: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_80800608;
    }
    // 0x808005F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x808005F4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x808005F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808005FC: jal         0x80000180
    // 0x80800600: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80800180_baeggfire(rdram, ctx);
        goto after_5;
    // 0x80800600: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_5:
    // 0x80800604: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_80800608:
    // 0x80800608: lw          $t7, 0x6C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X6C);
    // 0x8080060C: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x80800610: beql        $t8, $zero, L_80800648
    if (ctx->r24 == 0) {
        // 0x80800614: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800648;
    }
    goto skip_1;
    // 0x80800614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800618: jal         0x80000250
    // 0x8080061C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80800250_baeggfire(rdram, ctx);
        goto after_6;
    // 0x8080061C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_6:
    // 0x80800620: b           L_80800648
    // 0x80800624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800648;
    // 0x80800624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800628:
    // 0x80800628: jal         0x800D9078
    // 0x8080062C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800D9078(rdram, ctx);
        goto after_7;
    // 0x8080062C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_7:
    // 0x80800630: beq         $v0, $zero, L_80800644
    if (ctx->r2 == 0) {
        // 0x80800634: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_80800644;
    }
    // 0x80800634: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800638: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8080063C: jal         0x80000180
    // 0x80800640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800180_baeggfire(rdram, ctx);
        goto after_8;
    // 0x80800640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_80800644:
    // 0x80800644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800648:
    // 0x80800648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080064C: jr          $ra
    // 0x80800650: nop

    return;
    // 0x80800650: nop

;}
RECOMP_FUNC void baeggfire_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800654: lw          $t7, 0x6C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X6C);
    // 0x80800658: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080065C: jr          $ra
    // 0x80800660: sw          $t6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r14;
    return;
    // 0x80800660: sw          $t6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void baeggfire_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800664: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x80800668: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8080066C: slti        $t7, $v0, 0x2
    ctx->r15 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80800670: jr          $ra
    // 0x80800674: xori        $v0, $t7, 0x1
    ctx->r2 = ctx->r15 ^ 0X1;
    return;
    // 0x80800674: xori        $v0, $t7, 0x1
    ctx->r2 = ctx->r15 ^ 0X1;
    // 0x80800678: nop

    // 0x8080067C: nop

;}
RECOMP_FUNC void baeggsetup_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
;}
RECOMP_FUNC void func_80800008_baeggsetup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: jal         0x8009E674
    // 0x80800014: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080001C: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800020: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80800024: jr          $ra
    // 0x80800028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void baeggsetup_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080002C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80800030: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800034: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800038: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8080003C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80800040: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80800044: jal         0x800F53D0
    // 0x80800048: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x80800048: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x8080004C: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x80800050: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800054: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800058: jal         0x800EE7F8
    // 0x8080005C: lw          $a1, 0x70($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X70);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8080005C: lw          $a1, 0x70($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X70);
    after_1:
    // 0x80800060: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x80800064: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x80800068: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8080006C: jal         0x800EE7F8
    // 0x80800070: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80800070: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_2:
    // 0x80800074: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x80800078: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8080007C: jal         0x800EE7F8
    // 0x80800080: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x80800080: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_3:
    // 0x80800084: lw          $t6, 0x70($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X70);
    // 0x80800088: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x8080008C: lbu         $t7, 0x24($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X24);
    // 0x80800090: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80800094: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x80800098: beq         $at, $zero, L_80800154
    if (ctx->r1 == 0) {
        // 0x8080009C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80800154;
    }
    // 0x8080009C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x808000A0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(25, 0X7E0) << 16);
    // 0x808000A4: addu        $at, $at, $t8
    gpr jr_addend_808000AC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x808000A8: lw          $t8, 0x7E0($at)
    ctx->r24 = ADD32(ctx->r1, (int16_t)RELOC_LO16(25, 0X7E0));
    // 0x808000AC: jr          $t8
    // 0x808000B0: nop

    switch (jr_addend_808000AC >> 2) {
        case 0: goto L_808000B4; break;
        case 1: goto L_808000CC; break;
        case 2: goto L_808000E4; break;
        case 3: goto L_808000FC; break;
        case 4: goto L_80800114; break;
        case 5: goto L_80800154; break;
        case 6: goto L_80800144; break;
        default: switch_error(__func__, 0x808000AC, 0x808007E0);
    }
    // 0x808000B0: nop

L_808000B4:
    // 0x808000B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808000B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x808000BC: jal         0x80087250
    // 0x808000C0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    _cheggnormal_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x808000C0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_4:
    // 0x808000C4: b           L_80800158
    // 0x808000C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800158;
    // 0x808000C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808000CC:
    // 0x808000CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808000D0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x808000D4: jal         0x800871E8
    // 0x808000D8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    _cheggfire_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x808000D8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_5:
    // 0x808000DC: b           L_80800158
    // 0x808000E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800158;
    // 0x808000E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808000E4:
    // 0x808000E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808000E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x808000EC: jal         0x80087238
    // 0x808000F0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    _cheggice_entrypoint_1(rdram, ctx);
        goto after_6;
    // 0x808000F0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_6:
    // 0x808000F4: b           L_80800158
    // 0x808000F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800158;
    // 0x808000F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808000FC:
    // 0x808000FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800100: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80800104: jal         0x80087220
    // 0x80800108: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    _chegggrenade_entrypoint_2(rdram, ctx);
        goto after_7;
    // 0x80800108: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_7:
    // 0x8080010C: b           L_80800158
    // 0x80800110: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800158;
    // 0x80800110: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800114:
    // 0x80800114: jal         0x800844D8
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_13(rdram, ctx);
        goto after_8;
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080011C: jal         0x80000008
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_baeggsetup(rdram, ctx);
        goto after_9;
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800124: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80800128: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8080012C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80800130: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80800134: jal         0x800871C8
    // 0x80800138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    _cheggclockwork_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x80800138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x8080013C: b           L_80800158
    // 0x80800140: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80800158;
    // 0x80800140: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800144:
    // 0x80800144: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800148: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8080014C: jal         0x80087200
    // 0x80800150: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    _chegggolden_entrypoint_1(rdram, ctx);
        goto after_11;
    // 0x80800150: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_11:
L_80800154:
    // 0x80800154: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800158:
    // 0x80800158: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8080015C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800160: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80800164: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80800168: jr          $ra
    // 0x8080016C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8080016C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void baeggsetup_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800170: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800174: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800178: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080017C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800180: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80800184: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80800188: jal         0x80094C0C
    // 0x8080018C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    func_80094C0C(rdram, ctx);
        goto after_0;
    // 0x8080018C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800194: jal         0x8009C128
    // 0x80800198: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800198: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8080019C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x808001A0: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x808001A4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x808001A8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x808001AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x808001B0: jal         0x800EE7F8
    // 0x808001B4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x808001B4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001BC: jal         0x800F3E84
    // 0x808001C0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800F3E84(rdram, ctx);
        goto after_3;
    // 0x808001C0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x808001C4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808001C8: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808001CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808001D0: jal         0x800136E4
    // 0x808001D4: add.s       $f12, $f2, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f10.fl;
    func_800136E4(rdram, ctx);
        goto after_4;
    // 0x808001D4: add.s       $f12, $f2, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f10.fl;
    after_4:
    // 0x808001D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001DC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808001E0: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x808001E4: jal         0x800EEB9C
    // 0x808001E8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    func_800EEB9C(rdram, ctx);
        goto after_5;
    // 0x808001E8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x808001EC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x808001F0: jal         0x800EF04C
    // 0x808001F4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EF04C(rdram, ctx);
        goto after_6;
    // 0x808001F4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x808001F8: jal         0x800DC0C0
    // 0x808001FC: nop

    func_800DC0C0(rdram, ctx);
        goto after_7;
    // 0x808001FC: nop

    after_7:
    // 0x80800200: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80800204: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800208: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8080020C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800210: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800214: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800218: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8080021C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x80800220: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80800224: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x80800228: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8080022C: jal         0x800EEB9C
    // 0x80800230: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_800EEB9C(rdram, ctx);
        goto after_8;
    // 0x80800230: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x80800234: jal         0x800DC0C0
    // 0x80800238: nop

    func_800DC0C0(rdram, ctx);
        goto after_9;
    // 0x80800238: nop

    after_9:
    // 0x8080023C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800240: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800244: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x80800248: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080024C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80800250: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80800254: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80800258: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x8080025C: jal         0x800EE7F8
    // 0x80800260: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    func_800EE7F8(rdram, ctx);
        goto after_10;
    // 0x80800260: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    after_10:
    // 0x80800264: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x80800268: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8080026C: jal         0x800EE7F8
    // 0x80800270: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_11;
    // 0x80800270: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_11:
    // 0x80800274: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x80800278: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8080027C: jal         0x800EE7F8
    // 0x80800280: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_12;
    // 0x80800280: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_12:
    // 0x80800284: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80800288: lw          $t7, 0x70($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X70);
    // 0x8080028C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80800290: addiu       $a0, $a0, 0x4A40
    ctx->r4 = ADD32(ctx->r4, 0X4A40);
    // 0x80800294: sb          $t6, 0x24($t7)
    MEM_B(0X24, ctx->r15) = ctx->r14;
    // 0x80800298: jal         0x80086D30
    // 0x8080029C: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    _chbaddiesetup_entrypoint_1(rdram, ctx);
        goto after_13;
    // 0x8080029C: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    after_13:
    // 0x808002A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002A8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x808002AC: jr          $ra
    // 0x808002B0: nop

    return;
    // 0x808002B0: nop

;}
RECOMP_FUNC void baeggsetup_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808002B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808002BC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x808002C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x808002C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808002C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002CC: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x808002D0: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x808002D4: jal         0x800F53D0
    // 0x808002D8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x808002D8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808002DC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x808002E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808002E4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x808002E8: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x808002EC: beq         $at, $zero, L_808003D8
    if (ctx->r1 == 0) {
        // 0x808002F0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_808003D8;
    }
    // 0x808002F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808002F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(25, 0X7FC) << 16);
    // 0x808002F8: addu        $at, $at, $t7
    gpr jr_addend_80800300 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808002FC: lw          $t7, 0x7FC($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(25, 0X7FC));
    // 0x80800300: jr          $t7
    // 0x80800304: nop

    switch (jr_addend_80800300 >> 2) {
        case 0: goto L_80800308; break;
        case 1: goto L_80800324; break;
        case 2: goto L_80800340; break;
        case 3: goto L_8080035C; break;
        case 4: goto L_80800378; break;
        case 5: goto L_808003C4; break;
        case 6: goto L_808003A8; break;
        default: switch_error(__func__, 0x80800300, 0x808007FC);
    }
    // 0x80800304: nop

L_80800308:
    // 0x80800308: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080030C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800310: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80800314: jal         0x80087258
    // 0x80800318: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _cheggnormal_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800318: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_1:
    // 0x8080031C: b           L_808003DC
    // 0x80800320: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808003DC;
    // 0x80800320: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800324:
    // 0x80800324: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800328: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8080032C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80800330: jal         0x800871F0
    // 0x80800334: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _cheggfire_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800334: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_2:
    // 0x80800338: b           L_808003DC
    // 0x8080033C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808003DC;
    // 0x8080033C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800340:
    // 0x80800340: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800344: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800348: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8080034C: jal         0x80087240
    // 0x80800350: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _cheggice_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x80800350: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_3:
    // 0x80800354: b           L_808003DC
    // 0x80800358: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808003DC;
    // 0x80800358: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8080035C:
    // 0x8080035C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800360: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800364: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80800368: jal         0x80087228
    // 0x8080036C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _chegggrenade_entrypoint_3(rdram, ctx);
        goto after_4;
    // 0x8080036C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_4:
    // 0x80800370: b           L_808003DC
    // 0x80800374: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808003DC;
    // 0x80800374: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800378:
    // 0x80800378: jal         0x800844D8
    // 0x8080037C: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    _bababykaz_entrypoint_13(rdram, ctx);
        goto after_5;
    // 0x8080037C: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_5:
    // 0x80800380: jal         0x80000008
    // 0x80800384: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_80800008_baeggsetup(rdram, ctx);
        goto after_6;
    // 0x80800384: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80800388: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080038C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800390: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80800394: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80800398: jal         0x800871C8
    // 0x8080039C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    _cheggclockwork_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x8080039C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_7:
    // 0x808003A0: b           L_808003DC
    // 0x808003A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808003DC;
    // 0x808003A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808003A8:
    // 0x808003A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x808003B0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x808003B4: jal         0x80087208
    // 0x808003B8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _chegggolden_entrypoint_2(rdram, ctx);
        goto after_8;
    // 0x808003B8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_8:
    // 0x808003BC: b           L_808003DC
    // 0x808003C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808003DC;
    // 0x808003C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808003C4:
    // 0x808003C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x808003CC: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x808003D0: jal         0x800873D8
    // 0x808003D4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _cheggproximity_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x808003D4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_9:
L_808003D8:
    // 0x808003D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808003DC:
    // 0x808003DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x808003E4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x808003E8: jr          $ra
    // 0x808003EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x808003EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void baeggsetup_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003F8: jal         0x800F53D0
    // 0x808003FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x808003FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800400: lw          $a2, 0x70($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X70);
    // 0x80800404: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800408: lbu         $a1, 0x24($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X24);
    // 0x8080040C: addiu       $t6, $a2, 0x18
    ctx->r14 = ADD32(ctx->r6, 0X18);
    // 0x80800410: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800414: jal         0x800002B4
    // 0x80800418: addiu       $a3, $a2, 0xC
    ctx->r7 = ADD32(ctx->r6, 0XC);
    baeggsetup_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80800418: addiu       $a3, $a2, 0xC
    ctx->r7 = ADD32(ctx->r6, 0XC);
    after_1:
    // 0x8080041C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800424: jr          $ra
    // 0x80800428: nop

    return;
    // 0x80800428: nop

;}
RECOMP_FUNC void baeggsetup_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080042C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800430: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800438: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080043C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80800440: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80800444: jal         0x80094C0C
    // 0x80800448: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_80094C0C(rdram, ctx);
        goto after_0;
    // 0x80800448: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800450: jal         0x8009C128
    // 0x80800454: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800454: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80800458: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8080045C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80800460: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80800464: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80800468: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8080046C: jal         0x800EE7F8
    // 0x80800470: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80800470: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800478: jal         0x800F3E84
    // 0x8080047C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800F3E84(rdram, ctx);
        goto after_3;
    // 0x8080047C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x80800480: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800484: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800488: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x8080048C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800490: jal         0x800EEB9C
    // 0x80800494: nop

    func_800EEB9C(rdram, ctx);
        goto after_4;
    // 0x80800494: nop

    after_4:
    // 0x80800498: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8080049C: jal         0x800EF04C
    // 0x808004A0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800EF04C(rdram, ctx);
        goto after_5;
    // 0x808004A0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x808004A4: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808004A8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808004AC: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x808004B0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004B4: jal         0x800EEB9C
    // 0x808004B8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_800EEB9C(rdram, ctx);
        goto after_6;
    // 0x808004B8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x808004BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x808004C0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x808004C4: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x808004C8: jal         0x800EE7F8
    // 0x808004CC: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x808004CC: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    after_7:
    // 0x808004D0: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x808004D4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x808004D8: jal         0x800EE7F8
    // 0x808004DC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_8;
    // 0x808004DC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_8:
    // 0x808004E0: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x808004E4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x808004E8: jal         0x800EE7F8
    // 0x808004EC: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_9;
    // 0x808004EC: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_9:
    // 0x808004F0: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x808004F4: lw          $t7, 0x70($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X70);
    // 0x808004F8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x808004FC: addiu       $a0, $a0, 0x4A58
    ctx->r4 = ADD32(ctx->r4, 0X4A58);
    // 0x80800500: sb          $t6, 0x24($t7)
    MEM_B(0X24, ctx->r15) = ctx->r14;
    // 0x80800504: jal         0x80086D30
    // 0x80800508: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    _chbaddiesetup_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x80800508: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    after_10:
    // 0x8080050C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800510: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800514: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80800518: jr          $ra
    // 0x8080051C: nop

    return;
    // 0x8080051C: nop

;}
RECOMP_FUNC void baeggsetup_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800528: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080052C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800530: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800534: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800538: jal         0x80094C0C
    // 0x8080053C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80094C0C(rdram, ctx);
        goto after_0;
    // 0x8080053C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800540: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x80800544: jal         0x800EE7F8
    // 0x80800548: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80800548: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8080054C: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x80800550: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80800554: jal         0x800EE7F8
    // 0x80800558: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80800558: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_2:
    // 0x8080055C: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x80800560: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80800564: jal         0x800EE7F8
    // 0x80800568: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x80800568: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_3:
    // 0x8080056C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80800570: lw          $t7, 0x70($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X70);
    // 0x80800574: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80800578: addiu       $a0, $a0, 0x4A58
    ctx->r4 = ADD32(ctx->r4, 0X4A58);
    // 0x8080057C: sb          $t6, 0x24($t7)
    MEM_B(0X24, ctx->r15) = ctx->r14;
    // 0x80800580: jal         0x80086D30
    // 0x80800584: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    _chbaddiesetup_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x80800584: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    after_4:
    // 0x80800588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080058C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800594: jr          $ra
    // 0x80800598: nop

    return;
    // 0x80800598: nop

;}
RECOMP_FUNC void baeggsetup_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080059C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005A0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x808005A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x808005AC: jal         0x80086D30
    // 0x808005B0: lw          $a1, 0x184($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X184);
    _chbaddiesetup_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808005B0: lw          $a1, 0x184($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X184);
    after_0:
    // 0x808005B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005BC: jr          $ra
    // 0x808005C0: nop

    return;
    // 0x808005C0: nop

;}
RECOMP_FUNC void baeggsetup_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808005C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808005CC: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x808005D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808005D4: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x808005D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808005E0: beq         $at, $zero, L_80800634
    if (ctx->r1 == 0) {
        // 0x808005E4: swc1        $f4, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
            goto L_80800634;
    }
    // 0x808005E4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x808005E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808005EC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(25, 0X818) << 16);
    // 0x808005F0: addu        $at, $at, $t6
    gpr jr_addend_808005F8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808005F4: lw          $t6, 0x818($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(25, 0X818));
    // 0x808005F8: jr          $t6
    // 0x808005FC: nop

    switch (jr_addend_808005F8 >> 2) {
        case 0: goto L_80800600; break;
        case 1: goto L_80800608; break;
        case 2: goto L_80800610; break;
        case 3: goto L_80800618; break;
        case 4: goto L_80800620; break;
        case 5: goto L_80800628; break;
        case 6: goto L_80800630; break;
        default: switch_error(__func__, 0x808005F8, 0x80800818);
    }
    // 0x808005FC: nop

L_80800600:
    // 0x80800600: b           L_80800634
    // 0x80800604: addiu       $a2, $zero, 0x443E
    ctx->r6 = ADD32(0, 0X443E);
        goto L_80800634;
    // 0x80800604: addiu       $a2, $zero, 0x443E
    ctx->r6 = ADD32(0, 0X443E);
L_80800608:
    // 0x80800608: b           L_80800634
    // 0x8080060C: addiu       $a2, $zero, 0x4590
    ctx->r6 = ADD32(0, 0X4590);
        goto L_80800634;
    // 0x8080060C: addiu       $a2, $zero, 0x4590
    ctx->r6 = ADD32(0, 0X4590);
L_80800610:
    // 0x80800610: b           L_80800634
    // 0x80800614: addiu       $a2, $zero, 0x4597
    ctx->r6 = ADD32(0, 0X4597);
        goto L_80800634;
    // 0x80800614: addiu       $a2, $zero, 0x4597
    ctx->r6 = ADD32(0, 0X4597);
L_80800618:
    // 0x80800618: b           L_80800634
    // 0x8080061C: addiu       $a2, $zero, 0x4591
    ctx->r6 = ADD32(0, 0X4591);
        goto L_80800634;
    // 0x8080061C: addiu       $a2, $zero, 0x4591
    ctx->r6 = ADD32(0, 0X4591);
L_80800620:
    // 0x80800620: b           L_80800634
    // 0x80800624: addiu       $a2, $zero, 0x458F
    ctx->r6 = ADD32(0, 0X458F);
        goto L_80800634;
    // 0x80800624: addiu       $a2, $zero, 0x458F
    ctx->r6 = ADD32(0, 0X458F);
L_80800628:
    // 0x80800628: b           L_80800634
    // 0x8080062C: addiu       $a2, $zero, 0x458F
    ctx->r6 = ADD32(0, 0X458F);
        goto L_80800634;
    // 0x8080062C: addiu       $a2, $zero, 0x458F
    ctx->r6 = ADD32(0, 0X458F);
L_80800630:
    // 0x80800630: addiu       $a2, $zero, 0x443E
    ctx->r6 = ADD32(0, 0X443E);
L_80800634:
    // 0x80800634: beq         $a2, $zero, L_80800680
    if (ctx->r6 == 0) {
        // 0x80800638: sw          $a2, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r6;
            goto L_80800680;
    }
    // 0x80800638: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8080063C: jal         0x8009C128
    // 0x80800640: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800640: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80800644: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800648: jal         0x8009DAAC
    // 0x8080064C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009DAAC(rdram, ctx);
        goto after_1;
    // 0x8080064C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80800650: jal         0x800C4B64
    // 0x80800654: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    func_800C4B64(rdram, ctx);
        goto after_2;
    // 0x80800654: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x80800658: jal         0x800C4B70
    // 0x8080065C: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
    func_800C4B70(rdram, ctx);
        goto after_3;
    // 0x8080065C: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
    after_3:
    // 0x80800660: jal         0x800C4B7C
    // 0x80800664: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800C4B7C(rdram, ctx);
        goto after_4;
    // 0x80800664: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x80800668: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(25, 0X860) << 16);
    // 0x8080066C: addiu       $a3, $a3, 0x860
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(25, 0X860));
    // 0x80800670: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80800674: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80800678: jal         0x8010D930
    // 0x8080067C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_8010D930(rdram, ctx);
        goto after_5;
    // 0x8080067C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_5:
L_80800680:
    // 0x80800680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800684: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800688: jr          $ra
    // 0x8080068C: nop

    return;
    // 0x8080068C: nop

;}
RECOMP_FUNC void baeggsetup_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800690: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800694: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(25, 0X834) << 16);
    // 0x80800698: lwc1        $f4, 0x834($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(25, 0X834));
    // 0x8080069C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006A0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x808006A4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x808006A8: jal         0x80094510
    // 0x808006AC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_80094510(rdram, ctx);
        goto after_0;
    // 0x808006AC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x808006B0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x808006B4: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x808006B8: beq         $at, $zero, L_80800724
    if (ctx->r1 == 0) {
        // 0x808006BC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800724;
    }
    // 0x808006BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808006C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(25, 0X838) << 16);
    // 0x808006C4: addu        $at, $at, $t6
    gpr jr_addend_808006CC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808006C8: lw          $t6, 0x838($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(25, 0X838));
    // 0x808006CC: jr          $t6
    // 0x808006D0: nop

    switch (jr_addend_808006CC >> 2) {
        case 0: goto L_808006D4; break;
        case 1: goto L_808006E0; break;
        case 2: goto L_808006EC; break;
        case 3: goto L_808006F8; break;
        case 4: goto L_80800704; break;
        case 5: goto L_80800710; break;
        case 6: goto L_8080071C; break;
        default: switch_error(__func__, 0x808006CC, 0x80800838);
    }
    // 0x808006D0: nop

L_808006D4:
    // 0x808006D4: addiu       $t7, $zero, 0x42B
    ctx->r15 = ADD32(0, 0X42B);
    // 0x808006D8: b           L_80800724
    // 0x808006DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
        goto L_80800724;
    // 0x808006DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_808006E0:
    // 0x808006E0: addiu       $t8, $zero, 0x42B
    ctx->r24 = ADD32(0, 0X42B);
    // 0x808006E4: b           L_80800724
    // 0x808006E8: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
        goto L_80800724;
    // 0x808006E8: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_808006EC:
    // 0x808006EC: addiu       $t9, $zero, 0x42B
    ctx->r25 = ADD32(0, 0X42B);
    // 0x808006F0: b           L_80800724
    // 0x808006F4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
        goto L_80800724;
    // 0x808006F4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_808006F8:
    // 0x808006F8: addiu       $t0, $zero, 0x42B
    ctx->r8 = ADD32(0, 0X42B);
    // 0x808006FC: b           L_80800724
    // 0x80800700: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
        goto L_80800724;
    // 0x80800700: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80800704:
    // 0x80800704: addiu       $t1, $zero, 0x42B
    ctx->r9 = ADD32(0, 0X42B);
    // 0x80800708: b           L_80800724
    // 0x8080070C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
        goto L_80800724;
    // 0x8080070C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80800710:
    // 0x80800710: addiu       $t2, $zero, 0x42B
    ctx->r10 = ADD32(0, 0X42B);
    // 0x80800714: b           L_80800724
    // 0x80800718: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_80800724;
    // 0x80800718: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_8080071C:
    // 0x8080071C: addiu       $t3, $zero, 0x42B
    ctx->r11 = ADD32(0, 0X42B);
    // 0x80800720: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_80800724:
    // 0x80800724: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80800728: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8080072C: beql        $t4, $zero, L_8080077C
    if (ctx->r12 == 0) {
        // 0x80800730: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080077C;
    }
    goto skip_0;
    // 0x80800730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800734: jal         0x8009C128
    // 0x80800738: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800738: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8080073C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800740: jal         0x8009DAAC
    // 0x80800744: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009DAAC(rdram, ctx);
        goto after_2;
    // 0x80800744: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x80800748: jal         0x800C4B64
    // 0x8080074C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    func_800C4B64(rdram, ctx);
        goto after_3;
    // 0x8080074C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x80800750: jal         0x800C4B70
    // 0x80800754: addiu       $a0, $zero, 0x6D60
    ctx->r4 = ADD32(0, 0X6D60);
    func_800C4B70(rdram, ctx);
        goto after_4;
    // 0x80800754: addiu       $a0, $zero, 0x6D60
    ctx->r4 = ADD32(0, 0X6D60);
    after_4:
    // 0x80800758: jal         0x800C4B7C
    // 0x8080075C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800C4B7C(rdram, ctx);
        goto after_5;
    // 0x8080075C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80800760: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(25, 0X860) << 16);
    // 0x80800764: addiu       $a3, $a3, 0x860
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(25, 0X860));
    // 0x80800768: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8080076C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80800770: jal         0x8010D930
    // 0x80800774: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_8010D930(rdram, ctx);
        goto after_6;
    // 0x80800774: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_6:
    // 0x80800778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080077C:
    // 0x8080077C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800780: jr          $ra
    // 0x80800784: nop

    return;
    // 0x80800784: nop

;}
RECOMP_FUNC void baeggsetup_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800788: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080078C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800790: jal         0x8009C128
    // 0x80800794: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800794: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80800798: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080079C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808007A0: jal         0x800C4B64
    // 0x808007A4: nop

    func_800C4B64(rdram, ctx);
        goto after_1;
    // 0x808007A4: nop

    after_1:
    // 0x808007A8: jal         0x800C4B70
    // 0x808007AC: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
    func_800C4B70(rdram, ctx);
        goto after_2;
    // 0x808007AC: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
    after_2:
    // 0x808007B0: jal         0x800C4B7C
    // 0x808007B4: addiu       $a0, $zero, 0x4A5
    ctx->r4 = ADD32(0, 0X4A5);
    func_800C4B7C(rdram, ctx);
        goto after_3;
    // 0x808007B4: addiu       $a0, $zero, 0x4A5
    ctx->r4 = ADD32(0, 0X4A5);
    after_3:
    // 0x808007B8: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(25, 0X860) << 16);
    // 0x808007BC: addiu       $a3, $a3, 0x860
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(25, 0X860));
    // 0x808007C0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x808007C4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x808007C8: jal         0x8010D930
    // 0x808007CC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_8010D930(rdram, ctx);
        goto after_4;
    // 0x808007CC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_4:
    // 0x808007D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808007D8: jr          $ra
    // 0x808007DC: nop

    return;
    // 0x808007DC: nop

;}
RECOMP_FUNC void baflameline_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
;}
RECOMP_FUNC void baflameline_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8080000C: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x80800010: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80800014: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80800018: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8080001C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x80800020: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x80800024: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80800028: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8080002C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80800030: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x80800034: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x80800038: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8080003C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x80800040: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80800044: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80800048: jal         0x800B53A4
    // 0x8080004C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_800B53A4(rdram, ctx);
        goto after_0;
    // 0x8080004C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x80800050: lw          $v1, 0x84($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X84);
    // 0x80800054: addiu       $s3, $sp, 0x90
    ctx->r19 = ADD32(ctx->r29, 0X90);
    // 0x80800058: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8080005C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800060: addiu       $a1, $v1, 0xC
    ctx->r5 = ADD32(ctx->r3, 0XC);
    // 0x80800064: jal         0x800EFA20
    // 0x80800068: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    func_800EFA20(rdram, ctx);
        goto after_1;
    // 0x80800068: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    after_1:
    // 0x8080006C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80800070: jal         0x800EF04C
    // 0x80800074: lw          $a1, 0x84($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X84);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x80800074: lw          $a1, 0x84($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X84);
    after_2:
    // 0x80800078: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(26, 0X6D0) << 16);
    // 0x8080007C: lwc1        $f30, 0x6D0($at)
    ctx->f30.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X6D0));
    // 0x80800080: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(26, 0X6D4) << 16);
    // 0x80800084: lwc1        $f28, 0x6D4($at)
    ctx->f28.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X6D4));
    // 0x80800088: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8080008C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80800090: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800094: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80800098: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080009C: lui         $s4, 0x0
    ctx->r20 = S32(RELOC_HI16(26, 0X6F0) << 16);
    // 0x808000A0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x808000A4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x808000A8: addiu       $s4, $s4, 0x6F0
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(26, 0X6F0));
    // 0x808000AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808000B0: addiu       $s5, $zero, 0x7
    ctx->r21 = ADD32(0, 0X7);
    // 0x808000B4: addiu       $s2, $sp, 0x84
    ctx->r18 = ADD32(ctx->r29, 0X84);
    // 0x808000B8: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
L_808000BC:
    // 0x808000BC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x808000C0: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x808000C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808000C8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x808000CC: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x808000D0: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x808000D4: jal         0x800F10B4
    // 0x808000D8: div.s       $f12, $f8, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f26.fl);
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x808000D8: div.s       $f12, $f8, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f26.fl);
    after_3:
    // 0x808000DC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808000E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808000E4: lw          $a1, 0x84($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X84);
    // 0x808000E8: jal         0x800EFE50
    // 0x808000EC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_800EFE50(rdram, ctx);
        goto after_4;
    // 0x808000EC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_4:
    // 0x808000F0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x808000F4: jal         0x800DC178
    // 0x808000F8: mov.s       $f14, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    ctx->f14.fl = ctx->f30.fl;
    func_800DC178(rdram, ctx);
        goto after_5;
    // 0x808000F8: mov.s       $f14, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    ctx->f14.fl = ctx->f30.fl;
    after_5:
    // 0x808000FC: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800100: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8080010C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80800110: nop

    // 0x80800114: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80800118: jal         0x800BA77C
    // 0x8080011C: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    func_800BA77C(rdram, ctx);
        goto after_6;
    // 0x8080011C: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    after_6:
    // 0x80800120: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800124: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800128: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8080012C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800130: jal         0x800BABB8
    // 0x80800134: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_800BABB8(rdram, ctx);
        goto after_7;
    // 0x80800134: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_7:
    // 0x80800138: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8080013C: bnel        $s0, $s5, L_808000BC
    if (ctx->r16 != ctx->r21) {
        // 0x80800140: mtc1        $s0, $f4
        ctx->f4.u32l = ctx->r16;
            goto L_808000BC;
    }
    goto skip_0;
    // 0x80800140: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    skip_0:
    // 0x80800144: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80800148: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8080014C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80800150: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x80800154: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80800158: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x8080015C: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x80800160: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80800164: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80800168: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8080016C: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80800170: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x80800174: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x80800178: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8080017C: jr          $ra
    // 0x80800180: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80800180: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80800184_baflameline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800184: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800188: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8080018C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800190: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800194: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80800198: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x8080019C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(26, 0X6D8) << 16);
    // 0x808001A0: lwc1        $f6, 0x6D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X6D8));
    // 0x808001A4: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x808001A8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808001AC: addiu       $a1, $v0, 0xC
    ctx->r5 = ADD32(ctx->r2, 0XC);
    // 0x808001B0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x808001B4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x808001B8: jal         0x800EFA20
    // 0x808001BC: nop

    func_800EFA20(rdram, ctx);
        goto after_0;
    // 0x808001BC: nop

    after_0:
    // 0x808001C0: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x808001C4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(26, 0X6DC) << 16);
    // 0x808001C8: lwc1        $f16, 0x6DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X6DC));
    // 0x808001CC: lwc1        $f10, 0x18($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X18);
    // 0x808001D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(26, 0X6E0) << 16);
    // 0x808001D4: lwc1        $f4, 0x6E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X6E0));
    // 0x808001D8: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x808001DC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808001E0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(26, 0X6E4) << 16);
    // 0x808001E4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x808001E8: lwc1        $f14, 0x6E4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X6E4));
    // 0x808001EC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x808001F0: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x808001F4: jal         0x800DC178
    // 0x808001F8: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x808001F8: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x808001FC: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800200: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    // 0x80800204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8080020C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80800210: lw          $a0, 0x1C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C);
    // 0x80800214: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x80800218: jal         0x800BA77C
    // 0x8080021C: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    func_800BA77C(rdram, ctx);
        goto after_2;
    // 0x8080021C: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    after_2:
    // 0x80800220: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800224: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800228: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080022C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80800230: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x80800234: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800238: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8080023C: lw          $a0, 0x1C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1C);
    // 0x80800240: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80800244: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80800248: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x8080024C: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80800250: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80800254: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80800258: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8080025C: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x80800260: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80800264: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80800268: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x8080026C: jal         0x800BA930
    // 0x80800270: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    func_800BA930(rdram, ctx);
        goto after_3;
    // 0x80800270: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_3:
    // 0x80800274: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x80800278: lui         $t2, 0x0
    ctx->r10 = S32(RELOC_HI16(26, 0X738) << 16);
    // 0x8080027C: addiu       $t2, $t2, 0x738
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(26, 0X738));
    // 0x80800280: lw          $a0, 0x1C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1C);
    // 0x80800284: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80800288: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8080028C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800290: jal         0x800BABB8
    // 0x80800294: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_4;
    // 0x80800294: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_4:
    // 0x80800298: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8080029C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808002A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808002A4: jr          $ra
    // 0x808002A8: nop

    return;
    // 0x808002A8: nop

;}
RECOMP_FUNC void baflameline_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002B4: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x808002B8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x808002BC: lbu         $a0, 0x20($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X20);
    // 0x808002C0: jal         0x800C2FDC
    // 0x808002C4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x808002C4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x808002C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x808002CC: lw          $v0, 0x84($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X84);
    // 0x808002D0: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    // 0x808002D4: beq         $a0, $zero, L_808002F4
    if (ctx->r4 == 0) {
        // 0x808002D8: nop
    
            goto L_808002F4;
    }
    // 0x808002D8: nop

    // 0x808002DC: jal         0x800C8B84
    // 0x808002E0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800C8B84(rdram, ctx);
        goto after_1;
    // 0x808002E0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x808002E4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x808002E8: lw          $t7, 0x84($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X84);
    // 0x808002EC: sw          $zero, 0x24($t7)
    MEM_W(0X24, ctx->r15) = 0;
    // 0x808002F0: lw          $v0, 0x84($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X84);
L_808002F4:
    // 0x808002F4: jal         0x800B5450
    // 0x808002F8: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    func_800B5450(rdram, ctx);
        goto after_2;
    // 0x808002F8: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    after_2:
    // 0x808002FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800304: jr          $ra
    // 0x80800308: nop

    return;
    // 0x80800308: nop

;}
RECOMP_FUNC void baflameline_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080030C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800310: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800314: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800318: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080031C: jal         0x800EFD24
    // 0x80800320: lw          $a0, 0x84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X84);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x80800320: lw          $a0, 0x84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X84);
    after_0:
    // 0x80800324: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x80800328: jal         0x800EFD24
    // 0x8080032C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8080032C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
    // 0x80800330: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800334: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800338: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x8080033C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80800340: jal         0x800B53A4
    // 0x80800344: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    func_800B53A4(rdram, ctx);
        goto after_2;
    // 0x80800344: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    after_2:
    // 0x80800348: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    // 0x8080034C: sw          $v0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r2;
    // 0x80800350: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x80800354: jal         0x800B5534
    // 0x80800358: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    func_800B5534(rdram, ctx);
        goto after_3;
    // 0x80800358: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    after_3:
    // 0x8080035C: jal         0x800BF8E4
    // 0x80800360: nop

    func_800BF8E4(rdram, ctx);
        goto after_4;
    // 0x80800360: nop

    after_4:
    // 0x80800364: blezl       $v0, L_808003A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800368: lw          $t2, 0x84($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X84);
            goto L_808003A8;
    }
    goto skip_0;
    // 0x80800368: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    skip_0:
    // 0x8080036C: jal         0x800C8A98
    // 0x80800370: nop

    func_800C8A98(rdram, ctx);
        goto after_5;
    // 0x80800370: nop

    after_5:
    // 0x80800374: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x80800378: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8080037C: sw          $v0, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r2;
    // 0x80800380: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x80800384: jal         0x800C8F64
    // 0x80800388: lw          $a0, 0x24($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X24);
    func_800C8F64(rdram, ctx);
        goto after_6;
    // 0x80800388: lw          $a0, 0x24($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X24);
    after_6:
    // 0x8080038C: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x80800390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800394: jal         0x800C8FE0
    // 0x80800398: lw          $a0, 0x24($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X24);
    func_800C8FE0(rdram, ctx);
        goto after_7;
    // 0x80800398: lw          $a0, 0x24($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X24);
    after_7:
    // 0x8080039C: b           L_808003AC
    // 0x808003A0: nop

        goto L_808003AC;
    // 0x808003A0: nop

    // 0x808003A4: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
L_808003A8:
    // 0x808003A8: sw          $zero, 0x24($t2)
    MEM_W(0X24, ctx->r10) = 0;
L_808003AC:
    // 0x808003AC: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(26, 0X784) << 16);
    // 0x808003B0: addiu       $a2, $a2, 0x784
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(26, 0X784));
    // 0x808003B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x808003B8: jal         0x800C4350
    // 0x808003BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C4350(rdram, ctx);
        goto after_8;
    // 0x808003BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x808003C0: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x808003C4: sb          $v0, 0x20($t3)
    MEM_B(0X20, ctx->r11) = ctx->r2;
    // 0x808003C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003D4: jr          $ra
    // 0x808003D8: nop

    return;
    // 0x808003D8: nop

;}
RECOMP_FUNC void baflameline_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003E4: jal         0x800EE7F8
    // 0x808003E8: lw          $a0, 0x84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X84);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808003E8: lw          $a0, 0x84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X84);
    after_0:
    // 0x808003EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003F4: jr          $ra
    // 0x808003F8: nop

    return;
    // 0x808003F8: nop

;}
RECOMP_FUNC void baflameline_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800404: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800408: lw          $a0, 0x84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X84);
    // 0x8080040C: jal         0x800EE7F8
    // 0x80800410: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800410: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x80800414: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800418: lw          $a0, 0x84($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X84);
    // 0x8080041C: jal         0x800EF2A0
    // 0x80800420: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EF2A0(rdram, ctx);
        goto after_1;
    // 0x80800420: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
    // 0x80800424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080042C: jr          $ra
    // 0x80800430: nop

    return;
    // 0x80800430: nop

;}
RECOMP_FUNC void baflameline_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800434: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800438: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x8080043C: jr          $ra
    // 0x80800440: swc1        $f12, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80800440: swc1        $f12, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void baflameline_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800444: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80800448: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8080044C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80800450: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80800454: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80800458: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8080045C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80800460: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x80800464: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80800468: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8080046C: lw          $s0, 0x84($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X84);
    // 0x80800470: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80800474: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80800478: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8080047C: addiu       $s4, $sp, 0x74
    ctx->r20 = ADD32(ctx->r29, 0X74);
    // 0x80800480: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800484: c.eq.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl == ctx->f0.fl;
    // 0x80800488: nop

    // 0x8080048C: bc1fl       L_808004B4
    if (!c1cs) {
        // 0x80800490: mfc1        $a2, $f0
        ctx->r6 = (int32_t)ctx->f0.u32l;
            goto L_808004B4;
    }
    goto skip_0;
    // 0x80800490: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    skip_0:
    // 0x80800494: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80800498: beql        $a0, $zero, L_8080069C
    if (ctx->r4 == 0) {
        // 0x8080049C: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_8080069C;
    }
    goto skip_1;
    // 0x8080049C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_1:
    // 0x808004A0: jal         0x800C8FE0
    // 0x808004A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C8FE0(rdram, ctx);
        goto after_0;
    // 0x808004A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808004A8: b           L_8080069C
    // 0x808004AC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8080069C;
    // 0x808004AC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x808004B0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_808004B4:
    // 0x808004B4: jal         0x800EFA20
    // 0x808004B8: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    func_800EFA20(rdram, ctx);
        goto after_1;
    // 0x808004B8: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    after_1:
    // 0x808004BC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x808004C0: jal         0x800EF04C
    // 0x808004C4: lw          $a1, 0x84($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X84);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x808004C4: lw          $a1, 0x84($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X84);
    after_2:
    // 0x808004C8: lw          $t6, 0x84($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X84);
    // 0x808004CC: lui         $at, 0x46FA
    ctx->r1 = S32(0X46FA << 16);
    // 0x808004D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808004D4: lui         $a3, 0x459C
    ctx->r7 = S32(0X459C << 16);
    // 0x808004D8: lwc1        $f12, 0x18($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X18);
    // 0x808004DC: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x808004E0: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x808004E4: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x808004E8: jal         0x800F10B4
    // 0x808004EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x808004EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x808004F0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x808004F4: lw          $t7, 0x84($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X84);
    // 0x808004F8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x808004FC: jal         0x800C3058
    // 0x80800500: lbu         $a0, 0x20($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X20);
    func_800C3058(rdram, ctx);
        goto after_4;
    // 0x80800500: lbu         $a0, 0x20($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X20);
    after_4:
    // 0x80800504: lw          $t9, 0x84($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X84);
    // 0x80800508: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8080050C: jal         0x800C35E8
    // 0x80800510: lbu         $a0, 0x20($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X20);
    func_800C35E8(rdram, ctx);
        goto after_5;
    // 0x80800510: lbu         $a0, 0x20($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X20);
    after_5:
    // 0x80800514: lw          $t0, 0x84($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X84);
    // 0x80800518: jal         0x800C3BDC
    // 0x8080051C: lbu         $a0, 0x20($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X20);
    func_800C3BDC(rdram, ctx);
        goto after_6;
    // 0x8080051C: lbu         $a0, 0x20($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X20);
    after_6:
    // 0x80800520: lw          $s0, 0x84($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X84);
    // 0x80800524: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x80800528: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8080052C: lw          $t1, 0x24($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X24);
    // 0x80800530: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800534: beql        $t1, $zero, L_808005BC
    if (ctx->r9 == 0) {
        // 0x80800538: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_808005BC;
    }
    goto skip_2;
    // 0x80800538: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_2:
    // 0x8080053C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80800540: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80800544: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800548: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8080054C: mul.s       $f20, $f8, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x80800550: jal         0x800EFE50
    // 0x80800554: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    func_800EFE50(rdram, ctx);
        goto after_7;
    // 0x80800554: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_7:
    // 0x80800558: lw          $t2, 0x84($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X84);
    // 0x8080055C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800560: jal         0x800C8FE0
    // 0x80800564: lw          $a0, 0x24($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X24);
    func_800C8FE0(rdram, ctx);
        goto after_8;
    // 0x80800564: lw          $a0, 0x24($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X24);
    after_8:
    // 0x80800568: lw          $t3, 0x84($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X84);
    // 0x8080056C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80800570: jal         0x800C8CB8
    // 0x80800574: lw          $a0, 0x24($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X24);
    func_800C8CB8(rdram, ctx);
        goto after_9;
    // 0x80800574: lw          $a0, 0x24($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X24);
    after_9:
    // 0x80800578: lw          $s0, 0x84($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X84);
    // 0x8080057C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80800580: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80800584: jal         0x800C8E54
    // 0x80800588: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    func_800C8E54(rdram, ctx);
        goto after_10;
    // 0x80800588: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    after_10:
    // 0x8080058C: jal         0x8001210C
    // 0x80800590: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001210C(rdram, ctx);
        goto after_11;
    // 0x80800590: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x80800594: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80800598: lw          $t4, 0x84($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X84);
    // 0x8080059C: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x808005A0: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(26, 0X798) << 16);
    // 0x808005A4: addiu       $t6, $t6, 0x798
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(26, 0X798));
    // 0x808005A8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x808005AC: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x808005B0: jal         0x800C8E84
    // 0x808005B4: lw          $a0, 0x24($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X24);
    func_800C8E84(rdram, ctx);
        goto after_12;
    // 0x808005B4: lw          $a0, 0x24($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X24);
    after_12:
    // 0x808005B8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_808005BC:
    // 0x808005BC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x808005C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(26, 0X6E8) << 16);
    // 0x808005C4: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x808005C8: lwc1        $f20, 0x6E8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X6E8));
    // 0x808005CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808005D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
L_808005D4:
    // 0x808005D4: jal         0x800DC178
    // 0x808005D8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800DC178(rdram, ctx);
        goto after_13;
    // 0x808005D8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_13:
    // 0x808005DC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808005E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808005E4: lw          $a1, 0x84($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X84);
    // 0x808005E8: jal         0x800EFE50
    // 0x808005EC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800EFE50(rdram, ctx);
        goto after_14;
    // 0x808005EC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_14:
    // 0x808005F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808005F4: jal         0x80000184
    // 0x808005F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800184_baflameline(rdram, ctx);
        goto after_15;
    // 0x808005F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_15:
    // 0x808005FC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80800600: jal         0x800DC178
    // 0x80800604: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800DC178(rdram, ctx);
        goto after_16;
    // 0x80800604: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_16:
    // 0x80800608: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8080060C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800610: lw          $a1, 0x84($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X84);
    // 0x80800614: jal         0x800EFE50
    // 0x80800618: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800EFE50(rdram, ctx);
        goto after_17;
    // 0x80800618: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_17:
    // 0x8080061C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800620: jal         0x80000184
    // 0x80800624: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800184_baflameline(rdram, ctx);
        goto after_18;
    // 0x80800624: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_18:
    // 0x80800628: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8080062C: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80800630: bnel        $at, $zero, L_808005D4
    if (ctx->r1 != 0) {
        // 0x80800634: mov.s       $f12, $f22
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
            goto L_808005D4;
    }
    goto skip_3;
    // 0x80800634: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    skip_3:
    // 0x80800638: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8080063C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80800640: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80800644: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80800648: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8080064C: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x80800650: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
L_80800654:
    // 0x80800654: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800658: lw          $a1, 0x84($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X84);
    // 0x8080065C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800660: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80800664: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x80800668: div.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8080066C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80800670: jal         0x800EFE50
    // 0x80800674: nop

    func_800EFE50(rdram, ctx);
        goto after_19;
    // 0x80800674: nop

    after_19:
    // 0x80800678: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8080067C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800680: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80800684: jal         0x8008EEC4
    // 0x80800688: addiu       $a3, $zero, 0x26D
    ctx->r7 = ADD32(0, 0X26D);
    func_8008EEC4(rdram, ctx);
        goto after_20;
    // 0x80800688: addiu       $a3, $zero, 0x26D
    ctx->r7 = ADD32(0, 0X26D);
    after_20:
    // 0x8080068C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800690: bnel        $s0, $s3, L_80800654
    if (ctx->r16 != ctx->r19) {
        // 0x80800694: mtc1        $s0, $f10
        ctx->f10.u32l = ctx->r16;
            goto L_80800654;
    }
    goto skip_4;
    // 0x80800694: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    skip_4:
    // 0x80800698: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8080069C:
    // 0x8080069C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x808006A0: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x808006A4: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x808006A8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x808006AC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x808006B0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x808006B4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x808006B8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x808006BC: jr          $ra
    // 0x808006C0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x808006C0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x808006C4: nop

    // 0x808006C8: nop

    // 0x808006CC: nop

;}
RECOMP_FUNC void baflamethrower_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void func_80800008_baflamethrower(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8080000C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800014: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800018: lw          $t6, 0x88($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X88);
    // 0x8080001C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800020: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80800024: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x80800028: jalr        $t9
    // 0x8080002C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8080002C: nop

    after_0:
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800034: jal         0x80084B78
    // 0x80800038: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    _baflameline_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800038: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800040: jal         0x80084B80
    // 0x80800044: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    _baflameline_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800044: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x80800048: lw          $t7, 0x88($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X88);
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800050: jal         0x80084B88
    // 0x80800054: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    _baflameline_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x80800054: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    after_3:
    // 0x80800058: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x8080005C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80800060: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800064: jal         0x800F15F8
    // 0x80800068: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    func_800F15F8(rdram, ctx);
        goto after_4;
    // 0x80800068: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    after_4:
    // 0x8080006C: lw          $t8, 0x88($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X88);
    // 0x80800070: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    // 0x80800074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800078: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080007C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800080: jr          $ra
    // 0x80800084: nop

    return;
    // 0x80800084: nop

;}
RECOMP_FUNC void func_80800088_baflamethrower(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080008C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800090: lw          $v0, 0x88($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X88);
    // 0x80800094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800098: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x8080009C: lbu         $v1, 0xC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XC);
    // 0x808000A0: beql        $v1, $a2, L_808000B4
    if (ctx->r3 == ctx->r6) {
        // 0x808000A4: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_808000B4;
    }
    goto skip_0;
    // 0x808000A4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    skip_0:
    // 0x808000A8: bne         $v1, $a3, L_808000BC
    if (ctx->r3 != ctx->r7) {
        // 0x808000AC: nop
    
            goto L_808000BC;
    }
    // 0x808000AC: nop

    // 0x808000B0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
L_808000B4:
    // 0x808000B4: beql        $a1, $a3, L_80800148
    if (ctx->r5 == ctx->r7) {
        // 0x808000B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800148;
    }
    goto skip_1;
    // 0x808000B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_808000BC:
    // 0x808000BC: beq         $a1, $zero, L_80800144
    if (ctx->r5 == 0) {
        // 0x808000C0: sb          $a1, 0xC($v0)
        MEM_B(0XC, ctx->r2) = ctx->r5;
            goto L_80800144;
    }
    // 0x808000C0: sb          $a1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r5;
    // 0x808000C4: beq         $a1, $a2, L_808000E4
    if (ctx->r5 == ctx->r6) {
        // 0x808000C8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808000E4;
    }
    // 0x808000C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808000CC: beql        $a1, $at, L_8080010C
    if (ctx->r5 == ctx->r1) {
        // 0x808000D0: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_8080010C;
    }
    goto skip_2;
    // 0x808000D0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    skip_2:
    // 0x808000D4: beq         $a1, $a3, L_80800134
    if (ctx->r5 == ctx->r7) {
        // 0x808000D8: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_80800134;
    }
    // 0x808000D8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x808000DC: b           L_80800148
    // 0x808000E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800148;
    // 0x808000E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000E4:
    // 0x808000E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808000E8: lw          $t6, 0x88($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X88);
    // 0x808000EC: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x808000F0: lw          $v0, 0x88($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X88);
    // 0x808000F4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x808000F8: jal         0x80000008
    // 0x808000FC: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    func_80800008_baflamethrower(rdram, ctx);
        goto after_0;
    // 0x808000FC: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    after_0:
    // 0x80800100: b           L_80800148
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800148;
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800108: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_8080010C:
    // 0x8080010C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800110: lw          $t7, 0x88($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X88);
    // 0x80800114: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80800118: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8080011C: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x80800120: lw          $t8, 0x88($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X88);
    // 0x80800124: jal         0x80000008
    // 0x80800128: swc1        $f10, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f10.u32l;
    func_80800008_baflamethrower(rdram, ctx);
        goto after_1;
    // 0x80800128: swc1        $f10, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f10.u32l;
    after_1:
    // 0x8080012C: b           L_80800148
    // 0x80800130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800148;
    // 0x80800130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800134:
    // 0x80800134: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800138: lw          $t9, 0x88($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X88);
    // 0x8080013C: jal         0x80084B60
    // 0x80800140: swc1        $f16, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f16.u32l;
    _baflameline_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800140: swc1        $f16, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f16.u32l;
    after_2:
L_80800144:
    // 0x80800144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800148:
    // 0x80800148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080014C: jr          $ra
    // 0x80800150: nop

    return;
    // 0x80800150: nop

;}
RECOMP_FUNC void baflamethrower_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080015C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800160: jal         0x80000088
    // 0x80800164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800088_baflamethrower(rdram, ctx);
        goto after_0;
    // 0x80800164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800168: jal         0x80084B68
    // 0x8080016C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _baflameline_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x8080016C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

;}
RECOMP_FUNC void baflamethrower_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800188: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080018C: jal         0x80084B70
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baflameline_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800194: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800198: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8080019C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808001A0: lw          $t7, 0x88($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X88);
    // 0x808001A4: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x808001A8: lw          $t8, 0x88($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X88);
    // 0x808001AC: jal         0x80000088
    // 0x808001B0: sb          $zero, 0xC($t8)
    MEM_B(0XC, ctx->r24) = 0;
    func_80800088_baflamethrower(rdram, ctx);
        goto after_1;
    // 0x808001B0: sb          $zero, 0xC($t8)
    MEM_B(0XC, ctx->r24) = 0;
    after_1:
    // 0x808001B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001BC: jr          $ra
    // 0x808001C0: nop

    return;
    // 0x808001C0: nop

;}
RECOMP_FUNC void baflamethrower_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001CC: jal         0x80000088
    // 0x808001D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800088_baflamethrower(rdram, ctx);
        goto after_0;
    // 0x808001D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x808001D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001DC: jr          $ra
    // 0x808001E0: nop

    return;
    // 0x808001E0: nop

;}
RECOMP_FUNC void baflamethrower_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001EC: jal         0x80000088
    // 0x808001F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800088_baflamethrower(rdram, ctx);
        goto after_0;
    // 0x808001F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x808001F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001FC: jr          $ra
    // 0x80800200: nop

    return;
    // 0x80800200: nop

;}
RECOMP_FUNC void baflamethrower_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800204: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800208: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080020C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800210: lw          $t6, 0x88($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X88);
    // 0x80800214: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800218: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080021C: lbu         $v0, 0xC($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XC);
    // 0x80800220: beq         $v0, $at, L_80800280
    if (ctx->r2 == ctx->r1) {
        // 0x80800224: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800280;
    }
    // 0x80800224: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800228: beq         $v0, $at, L_80800240
    if (ctx->r2 == ctx->r1) {
        // 0x8080022C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800240;
    }
    // 0x8080022C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800230: beq         $v0, $at, L_80800250
    if (ctx->r2 == ctx->r1) {
        // 0x80800234: nop
    
            goto L_80800250;
    }
    // 0x80800234: nop

    // 0x80800238: b           L_80800280
    // 0x8080023C: nop

        goto L_80800280;
    // 0x8080023C: nop

L_80800240:
    // 0x80800240: jal         0x80000008
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_baflamethrower(rdram, ctx);
        goto after_0;
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800248: b           L_80800280
    // 0x8080024C: nop

        goto L_80800280;
    // 0x8080024C: nop

L_80800250:
    // 0x80800250: jal         0x80000008
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_baflamethrower(rdram, ctx);
        goto after_1;
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800258: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800260: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800264: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800268: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8080026C: nop

    // 0x80800270: bc1f        L_80800280
    if (!c1cs) {
        // 0x80800274: nop
    
            goto L_80800280;
    }
    // 0x80800274: nop

    // 0x80800278: jal         0x80000088
    // 0x8080027C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800088_baflamethrower(rdram, ctx);
        goto after_2;
    // 0x8080027C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80800280:
    // 0x80800280: jal         0x80084B90
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baflameline_entrypoint_7(rdram, ctx);
        goto after_3;
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080028C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800294: jr          $ra
    // 0x80800298: nop

    return;
    // 0x80800298: nop

    // 0x8080029C: nop

;}
RECOMP_FUNC void bafly_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void bafly_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800014: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80800018: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080001C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80800020: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80800024: jal         0x80095738
    // 0x80800028: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x80800028: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_0:
    // 0x8080002C: beq         $v0, $zero, L_80800068
    if (ctx->r2 == 0) {
        // 0x80800030: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800068;
    }
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800034: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80800038: jal         0x80084B28
    // 0x8080003C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    _baeggfire_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x8080003C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x80800040: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800044: jal         0x800EF334
    // 0x80800048: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800EF334(rdram, ctx);
        goto after_2;
    // 0x80800048: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x8080004C: jal         0x800A4C48
    // 0x80800050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C48(rdram, ctx);
        goto after_3;
    // 0x80800050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800054: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800058: jal         0x800CA9D8
    // 0x8080005C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800CA9D8(rdram, ctx);
        goto after_4;
    // 0x8080005C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_4:
    // 0x80800060: b           L_808000A0
    // 0x80800064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000A0;
    // 0x80800064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800068:
    // 0x80800068: jal         0x800A4C48
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C48(rdram, ctx);
        goto after_5;
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800074: jal         0x800CA740
    // 0x80800078: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_800CA740(rdram, ctx);
        goto after_6;
    // 0x80800078: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x8080007C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800080: jal         0x800EF334
    // 0x80800084: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800EF334(rdram, ctx);
        goto after_7;
    // 0x80800084: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_7:
    // 0x80800088: jal         0x800A4C48
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C48(rdram, ctx);
        goto after_8;
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800090: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800094: jal         0x800CA9D8
    // 0x80800098: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800CA9D8(rdram, ctx);
        goto after_9;
    // 0x80800098: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_9:
    // 0x8080009C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000A0:
    // 0x808000A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808000A8: jr          $ra
    // 0x808000AC: nop

    return;
    // 0x808000AC: nop

;}
RECOMP_FUNC void bafly_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B8: jal         0x8008E078
    // 0x808000BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E078(rdram, ctx);
        goto after_0;
    // 0x808000BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000C0: bne         $v0, $zero, L_808000D0
    if (ctx->r2 != 0) {
        // 0x808000C4: nop
    
            goto L_808000D0;
    }
    // 0x808000C4: nop

    // 0x808000C8: b           L_808000EC
    // 0x808000CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808000EC;
    // 0x808000CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808000D0:
    // 0x808000D0: jal         0x80096628
    // 0x808000D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80096628(rdram, ctx);
        goto after_1;
    // 0x808000D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808000D8: sll         $t6, $v0, 11
    ctx->r14 = S32(ctx->r2 << 11);
    // 0x808000DC: bgez        $t6, L_808000EC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x808000E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_808000EC;
    }
    // 0x808000E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808000E4: b           L_808000EC
    // 0x808000E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808000EC;
    // 0x808000E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808000EC:
    // 0x808000EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000F4: jr          $ra
    // 0x808000F8: nop

    return;
    // 0x808000F8: nop

;}
RECOMP_FUNC void bafly_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000FC: lw          $t6, 0x8C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8C);
    // 0x80800100: jr          $ra
    // 0x80800104: lbu         $v0, 0x8($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X8);
    return;
    // 0x80800104: lbu         $v0, 0x8($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X8);
;}
RECOMP_FUNC void bafly_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080010C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800110: lw          $t6, 0x8C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8C);
    // 0x80800114: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800118: lbu         $a1, 0x9($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X9);
    // 0x8080011C: beq         $a1, $zero, L_80800138
    if (ctx->r5 == 0) {
        // 0x80800120: andi        $a0, $a1, 0xFF
        ctx->r4 = ctx->r5 & 0XFF;
            goto L_80800138;
    }
    // 0x80800120: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    // 0x80800124: jal         0x800C2FDC
    // 0x80800128: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800128: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8080012C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800130: lw          $t7, 0x8C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8C);
    // 0x80800134: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
L_80800138:
    // 0x80800138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080013C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800140: jr          $ra
    // 0x80800144: nop

    return;
    // 0x80800144: nop

;}
RECOMP_FUNC void bafly_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080014C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800150: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800154: jal         0x80088368
    // 0x80800158: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _gcstatusDll_entrypoint_11(rdram, ctx);
        goto after_0;
    // 0x80800158: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080015C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80800160: bne         $at, $zero, L_80800174
    if (ctx->r1 != 0) {
        // 0x80800164: nop
    
            goto L_80800174;
    }
    // 0x80800164: nop

    // 0x80800168: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
    // 0x8080016C: b           L_80800194
    // 0x80800170: sb          $zero, 0x9($t6)
    MEM_B(0X9, ctx->r14) = 0;
        goto L_80800194;
    // 0x80800170: sb          $zero, 0x9($t6)
    MEM_B(0X9, ctx->r14) = 0;
L_80800174:
    // 0x80800174: jal         0x800C2E04
    // 0x80800178: nop

    func_800C2E04(rdram, ctx);
        goto after_1;
    // 0x80800178: nop

    after_1:
    // 0x8080017C: lw          $t7, 0x8C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8C);
    // 0x80800180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800184: sb          $v0, 0x9($t7)
    MEM_B(0X9, ctx->r15) = ctx->r2;
    // 0x80800188: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x8080018C: jal         0x800C3418
    // 0x80800190: lbu         $a0, 0x9($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X9);
    func_800C3418(rdram, ctx);
        goto after_2;
    // 0x80800190: lbu         $a0, 0x9($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X9);
    after_2:
L_80800194:
    // 0x80800194: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080019C: lw          $t9, 0x8C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8C);
    // 0x808001A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808001A4: swc1        $f4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f4.u32l;
    // 0x808001A8: lw          $t0, 0x8C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8C);
    // 0x808001AC: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x808001B0: lw          $t1, 0x8C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8C);
    // 0x808001B4: jal         0x800EA05C
    // 0x808001B8: sb          $zero, 0x8($t1)
    MEM_B(0X8, ctx->r9) = 0;
    func_800EA05C(rdram, ctx);
        goto after_3;
    // 0x808001B8: sb          $zero, 0x8($t1)
    MEM_B(0X8, ctx->r9) = 0;
    after_3:
    // 0x808001BC: addiu       $at, $zero, 0xE4
    ctx->r1 = ADD32(0, 0XE4);
    // 0x808001C0: beq         $v0, $at, L_808001DC
    if (ctx->r2 == ctx->r1) {
        // 0x808001C4: addiu       $at, $zero, 0x17B
        ctx->r1 = ADD32(0, 0X17B);
            goto L_808001DC;
    }
    // 0x808001C4: addiu       $at, $zero, 0x17B
    ctx->r1 = ADD32(0, 0X17B);
    // 0x808001C8: beql        $v0, $at, L_808001E0
    if (ctx->r2 == ctx->r1) {
        // 0x808001CC: lw          $t4, 0x8C($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X8C);
            goto L_808001E0;
    }
    goto skip_0;
    // 0x808001CC: lw          $t4, 0x8C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8C);
    skip_0:
    // 0x808001D0: lw          $t2, 0x8C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8C);
    // 0x808001D4: b           L_808001E8
    // 0x808001D8: sb          $zero, 0xE($t2)
    MEM_B(0XE, ctx->r10) = 0;
        goto L_808001E8;
    // 0x808001D8: sb          $zero, 0xE($t2)
    MEM_B(0XE, ctx->r10) = 0;
L_808001DC:
    // 0x808001DC: lw          $t4, 0x8C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8C);
L_808001E0:
    // 0x808001E0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x808001E4: sb          $t3, 0xE($t4)
    MEM_B(0XE, ctx->r12) = ctx->r11;
L_808001E8:
    // 0x808001E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001F4: jr          $ra
    // 0x808001F8: nop

    return;
    // 0x808001F8: nop

;}
RECOMP_FUNC void bafly_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800200: lw          $t6, 0x8C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8C);
    // 0x80800204: jr          $ra
    // 0x80800208: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80800208: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bafly_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080020C: lw          $t6, 0x8C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8C);
    // 0x80800210: jr          $ra
    // 0x80800214: sb          $a1, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r5;
    return;
    // 0x80800214: sb          $a1, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bafly_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800218: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8080021C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800220: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800224: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800228: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8080022C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80800230: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80800234: jal         0x8009BFCC
    // 0x80800238: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_8009BFCC(rdram, ctx);
        goto after_0;
    // 0x80800238: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080023C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: jal         0x8009BCB4
    // 0x80800248: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    func_8009BCB4(rdram, ctx);
        goto after_1;
    // 0x80800248: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_1:
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800250: jal         0x800001FC
    // 0x80800254: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    bafly_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x80800254: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080025C: jal         0x80095738
    // 0x80800260: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80095738(rdram, ctx);
        goto after_3;
    // 0x80800260: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x80800264: beq         $v0, $zero, L_80800290
    if (ctx->r2 == 0) {
        // 0x80800268: lwc1        $f0, 0x58($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
            goto L_80800290;
    }
    // 0x80800268: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: jal         0x8009BCC4
    // 0x80800274: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCC4(rdram, ctx);
        goto after_4;
    // 0x80800274: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: jal         0x8009BA9C
    // 0x80800280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_5;
    // 0x80800280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80800284: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800288: b           L_808003F0
    // 0x8080028C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
        goto L_808003F0;
    // 0x8080028C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
L_80800290:
    // 0x80800290: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x80800294: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80800298: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8080029C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x808002A0: bc1fl       L_80800364
    if (!c1cs) {
        // 0x808002A4: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_80800364;
    }
    goto skip_0;
    // 0x808002A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_0:
    // 0x808002A8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x808002AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002B0: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x808002B4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808002B8: sub.s       $f14, $f0, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x808002BC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x808002C0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x808002C4: jal         0x800F10B4
    // 0x808002C8: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x808002C8: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    after_6:
    // 0x808002CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002D0: jal         0x8009BCC4
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_7;
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808002D8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x808002DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x808002E0: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808002E4: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x808002E8: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x808002EC: jal         0x800F10B4
    // 0x808002F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x808002F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x808002F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002F8: jal         0x8009BCB4
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_9;
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800300: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800304: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80800308: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080030C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80800310: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800314: div.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800318: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080031C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80800320: jal         0x800F10B4
    // 0x80800324: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F10B4(rdram, ctx);
        goto after_10;
    // 0x80800324: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x80800328: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(28, 0XD90) << 16);
    // 0x8080032C: lwc1        $f4, 0xD90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0XD90));
    // 0x80800330: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80800334: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80800338: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080033C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80800340: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800344: jal         0x800F10B4
    // 0x80800348: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_11;
    // 0x80800348: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x8080034C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800350: jal         0x800001FC
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bafly_entrypoint_6(rdram, ctx);
        goto after_12;
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800358: b           L_808003F4
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808003F4;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800360: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_80800364:
    // 0x80800364: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80800368: lui         $a3, 0xC3C7
    ctx->r7 = S32(0XC3C7 << 16);
    // 0x8080036C: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x80800370: ori         $a3, $a3, 0xFEB8
    ctx->r7 = ctx->r7 | 0XFEB8;
    // 0x80800374: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80800378: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8080037C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800380: jal         0x800F10B4
    // 0x80800384: nop

    func_800F10B4(rdram, ctx);
        goto after_13;
    // 0x80800384: nop

    after_13:
    // 0x80800388: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080038C: jal         0x8009BCC4
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_14;
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800394: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800398: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8080039C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808003A0: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x808003A4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x808003A8: add.s       $f2, $f14, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x808003AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x808003B0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x808003B4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x808003B8: jal         0x800F10B4
    // 0x808003BC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    func_800F10B4(rdram, ctx);
        goto after_15;
    // 0x808003BC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_15:
    // 0x808003C0: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808003C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808003C8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x808003CC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x808003D0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x808003D4: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x808003D8: lui         $a3, 0xBE80
    ctx->r7 = S32(0XBE80 << 16);
    // 0x808003DC: jal         0x800F10B4
    // 0x808003E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_16;
    // 0x808003E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_16:
    // 0x808003E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808003E8: jal         0x800001FC
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bafly_entrypoint_6(rdram, ctx);
        goto after_17;
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
L_808003F0:
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003F4:
    // 0x808003F4: jal         0x80096394
    // 0x808003F8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80096394(rdram, ctx);
        goto after_18;
    // 0x808003F8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_18:
    // 0x808003FC: jal         0x8009650C
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009650C(rdram, ctx);
        goto after_19;
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800404: beq         $v0, $zero, L_80800430
    if (ctx->r2 == 0) {
        // 0x80800408: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80800430;
    }
    // 0x80800408: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080040C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800410: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800414: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80800418: nop

    // 0x8080041C: bc1f        L_80800430
    if (!c1cs) {
        // 0x80800420: nop
    
            goto L_80800430;
    }
    // 0x80800420: nop

    // 0x80800424: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800428: nop

    // 0x8080042C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
L_80800430:
    // 0x80800430: jal         0x8009C984
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_20;
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800438: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080043C: jal         0x8009B9C0
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_21;
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800448: jal         0x8009B9B0
    // 0x8080044C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009B9B0(rdram, ctx);
        goto after_22;
    // 0x8080044C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_22:
    // 0x80800450: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800454: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80800458: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8080045C: jr          $ra
    // 0x80800460: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80800460: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void bafly_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800464: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800468: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080046C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800470: jal         0x8009EF28
    // 0x80800474: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF28(rdram, ctx);
        goto after_0;
    // 0x80800474: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800478: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800480: jal         0x800919F4
    // 0x80800484: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800919F4(rdram, ctx);
        goto after_1;
    // 0x80800484: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80800488: beq         $v0, $zero, L_808004B8
    if (ctx->r2 == 0) {
        // 0x8080048C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004B8;
    }
    // 0x8080048C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800494: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x80800498: jal         0x8009C99C
    // 0x8080049C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_2;
    // 0x8080049C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_2:
    // 0x808004A0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x808004A4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808004A8: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x808004AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808004B0: b           L_808004DC
    // 0x808004B4: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
        goto L_808004DC;
    // 0x808004B4: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
L_808004B8:
    // 0x808004B8: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808004BC: jal         0x8009C99C
    // 0x808004C0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x808004C0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
    // 0x808004C4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x808004C8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808004CC: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x808004D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808004D4: nop

    // 0x808004D8: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
L_808004DC:
    // 0x808004DC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x808004E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808004E4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x808004E8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808004EC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808004F0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x808004F4: jal         0x800F10B4
    // 0x808004F8: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x808004F8: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x808004FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800500: jal         0x8009C4CC
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C4CC(rdram, ctx);
        goto after_5;
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800508: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8080050C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800510: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800514: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x80800518: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8080051C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80800520: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800524: jal         0x800F10B4
    // 0x80800528: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x80800528: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
    // 0x8080052C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800530: jal         0x80084C90
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800538: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800540: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80800544: jal         0x8009C990
    // 0x80800548: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    func_8009C990(rdram, ctx);
        goto after_8;
    // 0x80800548: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x8080054C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800554: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80800558: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8080055C: jal         0x8009C914
    // 0x80800560: nop

    func_8009C914(rdram, ctx);
        goto after_9;
    // 0x80800560: nop

    after_9:
    // 0x80800564: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800568: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080056C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800570: jr          $ra
    // 0x80800574: nop

    return;
    // 0x80800574: nop

;}
RECOMP_FUNC void bafly_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800578: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080057C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800580: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800584: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800588: jal         0x8009EF34
    // 0x8080058C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_8009EF34(rdram, ctx);
        goto after_0;
    // 0x8080058C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800590: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800594: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800598: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080059C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808005A0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808005A4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x808005A8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808005AC: bc1fl       L_808005E8
    if (!c1cs) {
        // 0x808005B0: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_808005E8;
    }
    goto skip_0;
    // 0x808005B0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_0:
    // 0x808005B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808005B8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x808005BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808005C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x808005C4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x808005C8: jal         0x800F10B4
    // 0x808005CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x808005CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x808005D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005D4: jal         0x8009BF5C
    // 0x808005D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x808005D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808005DC: b           L_80800600
    // 0x808005E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800600;
    // 0x808005E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005E4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_808005E8:
    // 0x808005E8: jal         0x800F10B4
    // 0x808005EC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x808005EC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x808005F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005F4: jal         0x8009BF5C
    // 0x808005F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009BF5C(rdram, ctx);
        goto after_4;
    // 0x808005F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x808005FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800600:
    // 0x80800600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800604: jr          $ra
    // 0x80800608: nop

    return;
    // 0x80800608: nop

;}
RECOMP_FUNC void bafly_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080060C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800610: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800614: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800618: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8080061C: lw          $t6, 0x8C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8C);
    // 0x80800620: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(28, 0XD94) << 16);
    // 0x80800624: lwc1        $f0, 0xD94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0XD94));
    // 0x80800628: lbu         $t7, 0x8($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8);
    // 0x8080062C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800630: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800634: beq         $t7, $zero, L_80800648
    if (ctx->r15 == 0) {
        // 0x80800638: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80800648;
    }
    // 0x80800638: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8080063C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(28, 0XD98) << 16);
    // 0x80800640: lwc1        $f4, 0xD98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0XD98));
    // 0x80800644: add.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f4.fl;
L_80800648:
    // 0x80800648: jal         0x800A4CA8
    // 0x8080064C: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x8080064C: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x80800650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800654: jal         0x80110818
    // 0x80800658: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80110818(rdram, ctx);
        goto after_1;
    // 0x80800658: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x8080065C: jal         0x8009C984
    // 0x80800660: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C984(rdram, ctx);
        goto after_2;
    // 0x80800660: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80800664: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800668: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080066C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800670: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80800674: jal         0x800F1DCC
    // 0x80800678: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_800F1DCC(rdram, ctx);
        goto after_3;
    // 0x80800678: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x8080067C: jal         0x800F2100
    // 0x80800680: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x80800680: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_4:
    // 0x80800684: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800688: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(28, 0XD9C) << 16);
    // 0x8080068C: lwc1        $f10, 0xD9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0XD9C));
    // 0x80800690: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80800694: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800698: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8080069C: jal         0x800F10B4
    // 0x808006A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_5;
    // 0x808006A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x808006A4: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808006A8: lw          $v0, 0x8C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8C);
    // 0x808006AC: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x808006B0: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x808006B4: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x808006B8: add.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x808006BC: sub.s       $f12, $f2, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x808006C0: jal         0x800F2100
    // 0x808006C4: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    func_800F2100(rdram, ctx);
        goto after_6;
    // 0x808006C4: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    after_6:
    // 0x808006C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(28, 0XDA0) << 16);
    // 0x808006CC: lwc1        $f2, 0xDA0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0XDA0));
    // 0x808006D0: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x808006D4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x808006D8: nop

    // 0x808006DC: bc1fl       L_8080070C
    if (!c1cs) {
        // 0x808006E0: lw          $v0, 0x8C($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X8C);
            goto L_8080070C;
    }
    goto skip_0;
    // 0x808006E0: lw          $v0, 0x8C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8C);
    skip_0:
    // 0x808006E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808006E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(28, 0XDA4) << 16);
    // 0x808006EC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x808006F0: nop

    // 0x808006F4: bc1f        L_80800704
    if (!c1cs) {
        // 0x808006F8: nop
    
            goto L_80800704;
    }
    // 0x808006F8: nop

    // 0x808006FC: b           L_80800708
    // 0x80800700: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_80800708;
    // 0x80800700: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_80800704:
    // 0x80800704: lwc1        $f12, 0xDA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0XDA4));
L_80800708:
    // 0x80800708: lw          $v0, 0x8C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8C);
L_8080070C:
    // 0x8080070C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800710: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x80800714: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80800718: lw          $v0, 0x8C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8C);
    // 0x8080071C: lbu         $s0, 0x9($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X9);
    // 0x80800720: beq         $s0, $zero, L_80800778
    if (ctx->r16 == 0) {
        // 0x80800724: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_80800778;
    }
    // 0x80800724: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80800728: jal         0x800C31DC
    // 0x8080072C: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    func_800C31DC(rdram, ctx);
        goto after_7;
    // 0x8080072C: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    after_7:
    // 0x80800730: lw          $t8, 0x8C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8C);
    // 0x80800734: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80800738: jal         0x800C31DC
    // 0x8080073C: lw          $a1, 0x4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X4);
    func_800C31DC(rdram, ctx);
        goto after_8;
    // 0x8080073C: lw          $a1, 0x4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X4);
    after_8:
    // 0x80800740: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80800744: jal         0x800C3058
    // 0x80800748: addiu       $a1, $zero, 0x1770
    ctx->r5 = ADD32(0, 0X1770);
    func_800C3058(rdram, ctx);
        goto after_9;
    // 0x80800748: addiu       $a1, $zero, 0x1770
    ctx->r5 = ADD32(0, 0X1770);
    after_9:
    // 0x8080074C: jal         0x800C3D78
    // 0x80800750: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C3D78(rdram, ctx);
        goto after_10;
    // 0x80800750: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_10:
    // 0x80800754: bne         $v0, $zero, L_80800778
    if (ctx->r2 != 0) {
        // 0x80800758: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_80800778;
    }
    // 0x80800758: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8080075C: jal         0x800C301C
    // 0x80800760: addiu       $a1, $zero, 0x4A3
    ctx->r5 = ADD32(0, 0X4A3);
    func_800C301C(rdram, ctx);
        goto after_11;
    // 0x80800760: addiu       $a1, $zero, 0x4A3
    ctx->r5 = ADD32(0, 0X4A3);
    after_11:
    // 0x80800764: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80800768: jal         0x800C330C
    // 0x8080076C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_12;
    // 0x8080076C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x80800770: jal         0x800C3BDC
    // 0x80800774: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C3BDC(rdram, ctx);
        goto after_13;
    // 0x80800774: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_13:
L_80800778:
    // 0x80800778: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080077C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800780: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800784: jr          $ra
    // 0x80800788: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80800788: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void bafly_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080078C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800790: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800794: lw          $t6, 0x8C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8C);
    // 0x80800798: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8080079C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808007A0: lbu         $t7, 0xE($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XE);
    // 0x808007A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808007A8: addiu       $a3, $zero, 0x46
    ctx->r7 = ADD32(0, 0X46);
    // 0x808007AC: beq         $t7, $zero, L_808007BC
    if (ctx->r15 == 0) {
        // 0x808007B0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_808007BC;
    }
    // 0x808007B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808007B4: b           L_808007C8
    // 0x808007B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808007C8;
    // 0x808007B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808007BC:
    // 0x808007BC: jal         0x8008A690
    // 0x808007C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    _suinv_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x808007C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x808007C4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_808007C8:
    // 0x808007C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808007D0: jr          $ra
    // 0x808007D4: nop

    return;
    // 0x808007D4: nop

;}
RECOMP_FUNC void bafly_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007D8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x808007DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808007E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808007E8: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x808007EC: bne         $a1, $zero, L_80800810
    if (ctx->r5 != 0) {
        // 0x808007F0: sw          $a3, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r7;
            goto L_80800810;
    }
    // 0x808007F0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x808007F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(28, 0XDA8) << 16);
    // 0x808007F8: lwc1        $f4, 0xDA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0XDA8));
    // 0x808007FC: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80800800: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800804: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x80800808: b           L_80800828
    // 0x8080080C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
        goto L_80800828;
    // 0x8080080C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
L_80800810:
    // 0x80800810: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x80800814: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800818: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x8080081C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800820: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80800824: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
L_80800828:
    // 0x80800828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080082C: jal         0x8009C128
    // 0x80800830: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800830: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x80800834: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x80800838: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080083C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80800840: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80800844: jal         0x800E1610
    // 0x80800848: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    func_800E1610(rdram, ctx);
        goto after_1;
    // 0x80800848: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_1:
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800850: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80800854: jal         0x8008CDB8
    // 0x80800858: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    func_8008CDB8(rdram, ctx);
        goto after_2;
    // 0x80800858: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    after_2:
    // 0x8080085C: jal         0x8009D9D4
    // 0x80800860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D9D4(rdram, ctx);
        goto after_3;
    // 0x80800860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800864: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800868: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080086C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800870: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800874: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800878: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8080087C: jal         0x80085490
    // 0x80800880: nop

    _bamotor_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x80800880: nop

    after_4:
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800888: jal         0x800A32C4
    // 0x8080088C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_800A32C4(rdram, ctx);
        goto after_5;
    // 0x8080088C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x80800890: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80800894: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80800898: jal         0x800F1E6C
    // 0x8080089C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_800F1E6C(rdram, ctx);
        goto after_6;
    // 0x8080089C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_6:
    // 0x808008A0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808008A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808008A8: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808008AC: jal         0x800136E4
    // 0x808008B0: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_800136E4(rdram, ctx);
        goto after_7;
    // 0x808008B0: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_7:
    // 0x808008B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808008B8: jal         0x8009C914
    // 0x808008BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_8;
    // 0x808008BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808008C0: jal         0x8009C974
    // 0x808008C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_9;
    // 0x808008C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808008C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008CC: jal         0x8009B9B0
    // 0x808008D0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x808008D0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_10:
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008D8: jal         0x8009B9C0
    // 0x808008DC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_8009B9C0(rdram, ctx);
        goto after_11;
    // 0x808008DC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_11:
    // 0x808008E0: jal         0x8009BB00
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_12;
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808008E8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008F0: jal         0x8009BA68
    // 0x808008F4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_8009BA68(rdram, ctx);
        goto after_13;
    // 0x808008F4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_13:
    // 0x808008F8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x808008FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800904: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800908: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080090C: jal         0x8009FFD8
    // 0x80800910: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_14;
    // 0x80800910: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_14:
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800918: jal         0x8009BA58
    // 0x8080091C: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    func_8009BA58(rdram, ctx);
        goto after_15;
    // 0x8080091C: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    after_15:
    // 0x80800920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800924: jal         0x8009BCB4
    // 0x80800928: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009BCB4(rdram, ctx);
        goto after_16;
    // 0x80800928: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_16:
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800930: jal         0x8009BCC4
    // 0x80800934: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    func_8009BCC4(rdram, ctx);
        goto after_17;
    // 0x80800934: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    after_17:
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080093C: jal         0x800A4DA4
    // 0x80800940: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800A4DA4(rdram, ctx);
        goto after_18;
    // 0x80800940: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_18:
    // 0x80800944: jal         0x800A4CA8
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_19;
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8080094C: lui         $a2, 0x461C
    ctx->r6 = S32(0X461C << 16);
    // 0x80800950: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x80800954: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800958: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x8080095C: jal         0x800892E0
    // 0x80800960: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    _ncbafly_entrypoint_4(rdram, ctx);
        goto after_20;
    // 0x80800960: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_20:
    // 0x80800964: jal         0x8008E944
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_21;
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x8080096C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800970: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800974: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80800978: jr          $ra
    // 0x8080097C: nop

    return;
    // 0x8080097C: nop

;}
RECOMP_FUNC void bafly_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800980: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800988: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080098C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800990: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800994: jal         0x8008CABC
    // 0x80800998: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800998: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8080099C: jal         0x8008B324
    // 0x808009A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B324(rdram, ctx);
        goto after_1;
    // 0x808009A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808009A4: beq         $v0, $zero, L_808009B0
    if (ctx->r2 == 0) {
        // 0x808009A8: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_808009B0;
    }
    // 0x808009A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x808009AC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808009B0:
    // 0x808009B0: jal         0x8008E078
    // 0x808009B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E078(rdram, ctx);
        goto after_2;
    // 0x808009B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808009B8: beq         $v0, $zero, L_808009C4
    if (ctx->r2 == 0) {
        // 0x808009BC: lw          $t7, 0x28($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X28);
            goto L_808009C4;
    }
    // 0x808009BC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x808009C0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_808009C4:
    // 0x808009C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808009C8: jal         0x8009E5C8
    // 0x808009CC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808009CC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808009D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808009D8: jr          $ra
    // 0x808009DC: nop

    return;
    // 0x808009DC: nop

;}
RECOMP_FUNC void bafly_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009E8: jal         0x8009BC34
    // 0x808009EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC34(rdram, ctx);
        goto after_0;
    // 0x808009EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009F0: jal         0x8008E95C
    // 0x808009F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E95C(rdram, ctx);
        goto after_1;
    // 0x808009F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808009F8: jal         0x8009BD88
    // 0x808009FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BD88(rdram, ctx);
        goto after_2;
    // 0x808009FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800A00: jal         0x800A4E30
    // 0x80800A04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_3;
    // 0x80800A04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A10: jr          $ra
    // 0x80800A14: nop

    return;
    // 0x80800A14: nop

;}
RECOMP_FUNC void bafly_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A18: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800A1C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800A20: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800A24: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80800A28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800A2C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80800A30: jal         0x8009C128
    // 0x80800A34: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800A34: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x80800A38: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x80800A3C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800A40: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80800A44: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80800A48: jal         0x800E1610
    // 0x80800A4C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_800E1610(rdram, ctx);
        goto after_1;
    // 0x80800A4C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x80800A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A54: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80800A58: jal         0x8008CDB8
    // 0x80800A5C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    func_8008CDB8(rdram, ctx);
        goto after_2;
    // 0x80800A5C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    after_2:
    // 0x80800A60: jal         0x8009DA40
    // 0x80800A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009DA40(rdram, ctx);
        goto after_3;
    // 0x80800A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A6C: jal         0x800A32C4
    // 0x80800A70: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800A32C4(rdram, ctx);
        goto after_4;
    // 0x80800A70: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x80800A74: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800A78: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80800A7C: jal         0x800F1E6C
    // 0x80800A80: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_800F1E6C(rdram, ctx);
        goto after_5;
    // 0x80800A80: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_5:
    // 0x80800A84: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800A88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800A8C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80800A90: jal         0x800136E4
    // 0x80800A94: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_6;
    // 0x80800A94: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_6:
    // 0x80800A98: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800A9C: jal         0x8009C914
    // 0x80800AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_7;
    // 0x80800AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800AA4: jal         0x8009C974
    // 0x80800AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_8;
    // 0x80800AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800AAC: lui         $a1, 0x44A2
    ctx->r5 = S32(0X44A2 << 16);
    // 0x80800AB0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80800AB4: jal         0x8009B9B0
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_9;
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AC0: jal         0x8009B9C0
    // 0x80800AC4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009B9C0(rdram, ctx);
        goto after_10;
    // 0x80800AC4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_10:
    // 0x80800AC8: jal         0x8009BB00
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_11;
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800AD0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AD8: jal         0x8009BA68
    // 0x80800ADC: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009BA68(rdram, ctx);
        goto after_12;
    // 0x80800ADC: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_12:
    // 0x80800AE0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800AE4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800AF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800AF4: jal         0x8009FFD8
    // 0x80800AF8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_13;
    // 0x80800AF8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_13:
    // 0x80800AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B00: jal         0x8009BA58
    // 0x80800B04: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_14;
    // 0x80800B04: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_14:
    // 0x80800B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B0C: jal         0x8009BCB4
    // 0x80800B10: lui         $a1, 0xC4E1
    ctx->r5 = S32(0XC4E1 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_15;
    // 0x80800B10: lui         $a1, 0xC4E1
    ctx->r5 = S32(0XC4E1 << 16);
    after_15:
    // 0x80800B14: jal         0x8008E944
    // 0x80800B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_16;
    // 0x80800B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B20: jal         0x800A4DA4
    // 0x80800B24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800A4DA4(rdram, ctx);
        goto after_17;
    // 0x80800B24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
    // 0x80800B28: jal         0x800A4CA8
    // 0x80800B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_18;
    // 0x80800B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800B30: lui         $a2, 0x461C
    ctx->r6 = S32(0X461C << 16);
    // 0x80800B34: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x80800B38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800B3C: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x80800B40: jal         0x800892E0
    // 0x80800B44: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    _ncbafly_entrypoint_4(rdram, ctx);
        goto after_19;
    // 0x80800B44: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_19:
    // 0x80800B48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800B4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800B50: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80800B54: jr          $ra
    // 0x80800B58: nop

    return;
    // 0x80800B58: nop

;}
RECOMP_FUNC void bafly_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800B60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800B68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B6C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800B70: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80800B74: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80800B78: jal         0x8008CABC
    // 0x80800B7C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800B7C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800B80: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800B84: jal         0x8008E078
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800B8C: beq         $v0, $zero, L_80800B98
    if (ctx->r2 == 0) {
        // 0x80800B90: lw          $t6, 0x30($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X30);
            goto L_80800B98;
    }
    // 0x80800B90: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80800B94: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800B98:
    // 0x80800B98: jal         0x8008B324
    // 0x80800B9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_2;
    // 0x80800B9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800BA0: beql        $v0, $zero, L_80800BE0
    if (ctx->r2 == 0) {
        // 0x80800BA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BE0;
    }
    goto skip_0;
    // 0x80800BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800BA8: jal         0x8008DD04
    // 0x80800BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_3;
    // 0x80800BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800BB0: bnel        $v0, $zero, L_80800BCC
    if (ctx->r2 != 0) {
        // 0x80800BB4: lw          $t8, 0x34($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X34);
            goto L_80800BCC;
    }
    goto skip_1;
    // 0x80800BB4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x80800BB8: jal         0x8009650C
    // 0x80800BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009650C(rdram, ctx);
        goto after_4;
    // 0x80800BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800BC0: beql        $v0, $zero, L_80800BE0
    if (ctx->r2 == 0) {
        // 0x80800BC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BE0;
    }
    goto skip_2;
    // 0x80800BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800BC8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
L_80800BCC:
    // 0x80800BCC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800BD0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80800BD4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80800BD8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80800BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800BE0:
    // 0x80800BE0: jal         0x8009E5C8
    // 0x80800BE4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x80800BE4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x80800BE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800BF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800BF4: jr          $ra
    // 0x80800BF8: nop

    return;
    // 0x80800BF8: nop

;}
RECOMP_FUNC void bafly_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C04: jal         0x8009BC6C
    // 0x80800C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C0C: jal         0x8008E95C
    // 0x80800C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E95C(rdram, ctx);
        goto after_1;
    // 0x80800C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C1C: jr          $ra
    // 0x80800C20: nop

    return;
    // 0x80800C20: nop

;}
RECOMP_FUNC void bafly_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800C28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800C2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800C30: jal         0x80084C98
    // 0x80800C34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bafpctrl_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800C34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800C38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800C3C: beq         $v0, $at, L_80800C98
    if (ctx->r2 == ctx->r1) {
        // 0x80800C40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C98;
    }
    // 0x80800C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C44: jal         0x80095738
    // 0x80800C48: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x80800C48: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    after_1:
    // 0x80800C4C: beq         $v0, $zero, L_80800C68
    if (ctx->r2 == 0) {
        // 0x80800C50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C68;
    }
    // 0x80800C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C58: jal         0x80084CE8
    // 0x80800C5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bafpctrl_entrypoint_14(rdram, ctx);
        goto after_2;
    // 0x80800C5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80800C60: b           L_80800C74
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800C74;
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800C68:
    // 0x80800C68: jal         0x80084CE8
    // 0x80800C6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bafpctrl_entrypoint_14(rdram, ctx);
        goto after_3;
    // 0x80800C6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800C74:
    // 0x80800C74: jal         0x80084CC0
    // 0x80800C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_9(rdram, ctx);
        goto after_4;
    // 0x80800C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800C7C: jal         0x800C6E38
    // 0x80800C80: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_800C6E38(rdram, ctx);
        goto after_5;
    // 0x80800C80: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_5:
    // 0x80800C84: bne         $v0, $zero, L_80800C98
    if (ctx->r2 != 0) {
        // 0x80800C88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C98;
    }
    // 0x80800C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80800C90: jal         0x80084CD0
    // 0x80800C94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_11(rdram, ctx);
        goto after_6;
    // 0x80800C94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
L_80800C98:
    // 0x80800C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800CA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800CA4: jr          $ra
    // 0x80800CA8: nop

    return;
    // 0x80800CA8: nop

;}
RECOMP_FUNC void bafly_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800CB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800CB4: jal         0x80084C90
    // 0x80800CB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _bafpctrl_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800CB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800CBC: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80800CC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800CC4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800CC8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(28, 0XDAC) << 16);
    // 0x80800CCC: lwc1        $f14, 0xDAC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0XDAC));
    // 0x80800CD0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800CD4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800CD8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80800CDC: jal         0x800F10B4
    // 0x80800CE0: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x80800CE0: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x80800CE4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80800CE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800CEC: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80800CF0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800CF4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80800CF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800CFC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80800D00: jal         0x8009BFE4
    // 0x80800D04: nop

    func_8009BFE4(rdram, ctx);
        goto after_2;
    // 0x80800D04: nop

    after_2:
    // 0x80800D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800D10: jr          $ra
    // 0x80800D14: nop

    return;
    // 0x80800D14: nop

;}
RECOMP_FUNC void bafly_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800D1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800D20: jal         0x80084C90
    // 0x80800D24: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _bafpctrl_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800D24: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D28: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80800D2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800D30: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800D34: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(28, 0XDB0) << 16);
    // 0x80800D38: lwc1        $f14, 0xDB0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0XDB0));
    // 0x80800D3C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800D40: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800D44: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80800D48: jal         0x800F10B4
    // 0x80800D4C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x80800D4C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x80800D50: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80800D54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800D58: lui         $a2, 0x400C
    ctx->r6 = S32(0X400C << 16);
    // 0x80800D5C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800D60: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80800D64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800D68: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80800D6C: jal         0x8009BFE4
    // 0x80800D70: nop

    func_8009BFE4(rdram, ctx);
        goto after_2;
    // 0x80800D70: nop

    after_2:
    // 0x80800D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800D7C: jr          $ra
    // 0x80800D80: nop

    return;
    // 0x80800D80: nop

    // 0x80800D84: nop

    // 0x80800D88: nop

    // 0x80800D8C: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void func_80800008_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800018: jal         0x80091A58
    // 0x8080001C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x8080001C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x80800020: beq         $v0, $zero, L_80800054
    if (ctx->r2 == 0) {
        // 0x80800024: nop
    
            goto L_80800054;
    }
    // 0x80800024: nop

    // 0x80800028: jal         0x80000C10
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bafpctrl_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800030: beq         $v0, $zero, L_80800054
    if (ctx->r2 == 0) {
        // 0x80800034: nop
    
            goto L_80800054;
    }
    // 0x80800034: nop

    // 0x80800038: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x8080003C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80800040: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80800044: bne         $t8, $zero, L_80800054
    if (ctx->r24 != 0) {
        // 0x80800048: nop
    
            goto L_80800054;
    }
    // 0x80800048: nop

    // 0x8080004C: b           L_808000C8
    // 0x80800050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808000C8;
    // 0x80800050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800054:
    // 0x80800054: jal         0x8008E35C
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_2;
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080005C: beq         $v0, $zero, L_80800090
    if (ctx->r2 == 0) {
        // 0x80800060: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800090;
    }
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800064: jal         0x8008FD48
    // 0x80800068: nop

    func_8008FD48(rdram, ctx);
        goto after_3;
    // 0x80800068: nop

    after_3:
    // 0x8080006C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800070: bnel        $v0, $at, L_808000C8
    if (ctx->r2 != ctx->r1) {
        // 0x80800074: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808000C8;
    }
    goto skip_0;
    // 0x80800074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80800078: jal         0x8008FF94
    // 0x8080007C: nop

    func_8008FF94(rdram, ctx);
        goto after_4;
    // 0x8080007C: nop

    after_4:
    // 0x80800080: bnel        $v0, $zero, L_808000C8
    if (ctx->r2 != 0) {
        // 0x80800084: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808000C8;
    }
    goto skip_1;
    // 0x80800084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80800088: b           L_808000C8
    // 0x8080008C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808000C8;
    // 0x8080008C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800090:
    // 0x80800090: jal         0x8008DF8C
    // 0x80800094: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_8008DF8C(rdram, ctx);
        goto after_5;
    // 0x80800094: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_5:
    // 0x80800098: bnel        $v0, $zero, L_808000C8
    if (ctx->r2 != 0) {
        // 0x8080009C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808000C8;
    }
    goto skip_2;
    // 0x8080009C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x808000A0: jal         0x80000BF0
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bafpctrl_entrypoint_4(rdram, ctx);
        goto after_6;
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808000A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808000AC: beq         $v0, $at, L_808000BC
    if (ctx->r2 == ctx->r1) {
        // 0x808000B0: nop
    
            goto L_808000BC;
    }
    // 0x808000B0: nop

    // 0x808000B4: b           L_808000C8
    // 0x808000B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808000C8;
    // 0x808000B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808000BC:
    // 0x808000BC: b           L_808000C8
    // 0x808000C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808000C8;
    // 0x808000C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808000C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808000C8:
    // 0x808000C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000D4: jr          $ra
    // 0x808000D8: nop

    return;
    // 0x808000D8: nop

;}
RECOMP_FUNC void func_808000DC_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808000E8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x808000EC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x808000F0: jal         0x800A4C68
    // 0x808000F4: swc1        $f12, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f12.u32l;
    func_800A4C68(rdram, ctx);
        goto after_0;
    // 0x808000F4: swc1        $f12, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f12.u32l;
    after_0:
    // 0x808000F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000FC: jal         0x800C51A4
    // 0x80800100: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800C51A4(rdram, ctx);
        goto after_1;
    // 0x80800100: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080010C: jr          $ra
    // 0x80800110: nop

    return;
    // 0x80800110: nop

;}
RECOMP_FUNC void func_80800114_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800118: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080011C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800120: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800124: jal         0x80095738
    // 0x80800128: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x80800128: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    after_0:
    // 0x8080012C: bne         $v0, $zero, L_80800218
    if (ctx->r2 != 0) {
        // 0x80800130: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800218;
    }
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800134: jal         0x80095738
    // 0x80800138: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x80800138: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_1:
    // 0x8080013C: bnel        $v0, $zero, L_8080021C
    if (ctx->r2 != 0) {
        // 0x80800140: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080021C;
    }
    goto skip_0;
    // 0x80800140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800144: jal         0x800C6E38
    // 0x80800148: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_800C6E38(rdram, ctx);
        goto after_2;
    // 0x80800148: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_2:
    // 0x8080014C: beql        $v0, $zero, L_8080021C
    if (ctx->r2 == 0) {
        // 0x80800150: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080021C;
    }
    goto skip_1;
    // 0x80800150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800154: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80800160: lwc1        $f2, 0x18($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X18);
    // 0x80800164: jal         0x800919F4
    // 0x80800168: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    func_800919F4(rdram, ctx);
        goto after_3;
    // 0x80800168: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x8080016C: beq         $v0, $zero, L_8080019C
    if (ctx->r2 == 0) {
        // 0x80800170: lwc1        $f2, 0x24($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
            goto L_8080019C;
    }
    // 0x80800170: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800174: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800178: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080017C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80800180: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80800184: nop

    // 0x80800188: bc1fl       L_808001A0
    if (!c1cs) {
        // 0x8080018C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001A0;
    }
    goto skip_2;
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800190: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800194: nop

    // 0x80800198: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_8080019C:
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001A0:
    // 0x808001A0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x808001A4: jal         0x800919F4
    // 0x808001A8: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    func_800919F4(rdram, ctx);
        goto after_4;
    // 0x808001A8: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x808001AC: beq         $v0, $zero, L_808001DC
    if (ctx->r2 == 0) {
        // 0x808001B0: lwc1        $f2, 0x24($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
            goto L_808001DC;
    }
    // 0x808001B0: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808001B4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(29, 0X1090) << 16);
    // 0x808001B8: lwc1        $f8, 0x1090($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X1090));
    // 0x808001BC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x808001C0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x808001C4: nop

    // 0x808001C8: bc1fl       L_808001E0
    if (!c1cs) {
        // 0x808001CC: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_808001E0;
    }
    goto skip_3;
    // 0x808001CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_3:
    // 0x808001D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808001D4: nop

    // 0x808001D8: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
L_808001DC:
    // 0x808001DC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_808001E0:
    // 0x808001E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808001E4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x808001E8: mul.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x808001EC: jal         0x800139F8
    // 0x808001F0: nop

    func_800139F8(rdram, ctx);
        goto after_5;
    // 0x808001F0: nop

    after_5:
    // 0x808001F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(29, 0X1094) << 16);
    // 0x808001F8: lwc1        $f18, 0x1094($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X1094));
    // 0x808001FC: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800204: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80800208: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8080020C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80800210: jal         0x800000DC
    // 0x80800214: nop

    func_808000DC_bafpctrl(rdram, ctx);
        goto after_6;
    // 0x80800214: nop

    after_6:
L_80800218:
    // 0x80800218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080021C:
    // 0x8080021C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800220: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800224: jr          $ra
    // 0x80800228: nop

    return;
    // 0x80800228: nop

;}
RECOMP_FUNC void func_8080022C_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080022C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800230: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800234: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800238: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080023C: jal         0x800F3E84
    // 0x80800240: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800F3E84(rdram, ctx);
        goto after_0;
    // 0x80800240: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80800244: jal         0x8009BFCC
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFCC(rdram, ctx);
        goto after_1;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080024C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800254: jal         0x8009C990
    // 0x80800258: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_8009C990(rdram, ctx);
        goto after_2;
    // 0x80800258: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8080025C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800260: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800268: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x8080026C: jal         0x8009C53C
    // 0x80800270: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_8009C53C(rdram, ctx);
        goto after_3;
    // 0x80800270: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80800274: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: jal         0x800A4CA8
    // 0x80800280: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    func_800A4CA8(rdram, ctx);
        goto after_4;
    // 0x80800280: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80800284: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800288: jal         0x80089400
    // 0x8080028C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _ncba1p_entrypoint_7(rdram, ctx);
        goto after_5;
    // 0x8080028C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x80800290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800294: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800298: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080029C: jr          $ra
    // 0x808002A0: nop

    return;
    // 0x808002A0: nop

;}
RECOMP_FUNC void func_808002A4_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808002A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002B0: jal         0x800A4CA8
    // 0x808002B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x808002B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808002B8: jal         0x80089418
    // 0x808002BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncba1p_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x808002BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808002C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002C4: bnel        $v0, $at, L_808003AC
    if (ctx->r2 != ctx->r1) {
        // 0x808002C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808003AC;
    }
    goto skip_0;
    // 0x808002C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808002CC: jal         0x800A4CA8
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_2;
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808002D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808002D8: jal         0x80089408
    // 0x808002DC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    _ncba1p_entrypoint_8(rdram, ctx);
        goto after_3;
    // 0x808002DC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E4: jal         0x80095738
    // 0x808002E8: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    func_80095738(rdram, ctx);
        goto after_4;
    // 0x808002E8: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_4:
    // 0x808002EC: bne         $v0, $zero, L_80800374
    if (ctx->r2 != 0) {
        // 0x808002F0: nop
    
            goto L_80800374;
    }
    // 0x808002F0: nop

    // 0x808002F4: jal         0x800D8FF8
    // 0x808002F8: nop

    func_800D8FF8(rdram, ctx);
        goto after_5;
    // 0x808002F8: nop

    after_5:
    // 0x808002FC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800300: jal         0x80000BAC
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bafpctrl_entrypoint_3(rdram, ctx);
        goto after_6;
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800308: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8080030C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800314: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80800318: jal         0x8009EF34
    // 0x8080031C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_8009EF34(rdram, ctx);
        goto after_7;
    // 0x8080031C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x80800320: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800324: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800328: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080032C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800334: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80800338: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8080033C: jal         0x8009EF28
    // 0x80800340: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    func_8009EF28(rdram, ctx);
        goto after_8;
    // 0x80800340: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80800344: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800348: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8080034C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800350: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80800354: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800358: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080035C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x80800360: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80800364: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80800368: jal         0x80083128
    // 0x8080036C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    _bsdronelook_entrypoint_2(rdram, ctx);
        goto after_9;
    // 0x8080036C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x80800370: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_80800374:
    // 0x80800374: jal         0x800A4CA8
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_10;
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080037C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800380: jal         0x80089400
    // 0x80800384: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    _ncba1p_entrypoint_7(rdram, ctx);
        goto after_11;
    // 0x80800384: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_11:
    // 0x80800388: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8080038C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800390: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800398: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8080039C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x808003A0: jal         0x8009C914
    // 0x808003A4: nop

    func_8009C914(rdram, ctx);
        goto after_12;
    // 0x808003A4: nop

    after_12:
    // 0x808003A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003AC:
    // 0x808003AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808003B4: jr          $ra
    // 0x808003B8: nop

    return;
    // 0x808003B8: nop

;}
RECOMP_FUNC void func_808003BC_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003C4: jal         0x800A4CA8
    // 0x808003C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x808003C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x808003CC: jal         0x80089418
    // 0x808003D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncba1p_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x808003D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808003D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808003D8: bnel        $v0, $at, L_80800418
    if (ctx->r2 != ctx->r1) {
        // 0x808003DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800418;
    }
    goto skip_0;
    // 0x808003DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808003E0: jal         0x800A4CA8
    // 0x808003E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800A4CA8(rdram, ctx);
        goto after_2;
    // 0x808003E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x808003E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808003EC: jal         0x80089408
    // 0x808003F0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    _ncba1p_entrypoint_8(rdram, ctx);
        goto after_3;
    // 0x808003F0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x808003F4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808003F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808003FC: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800400: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800404: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800408: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8080040C: jal         0x8009C914
    // 0x80800410: nop

    func_8009C914(rdram, ctx);
        goto after_4;
    // 0x80800410: nop

    after_4:
    // 0x80800414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800418:
    // 0x80800418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080041C: jr          $ra
    // 0x80800420: nop

    return;
    // 0x80800420: nop

;}
RECOMP_FUNC void func_80800424_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800424: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800428: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080042C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800430: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80800434: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x80800438: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080043C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800440: lbu         $t6, 0x14($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X14);
    // 0x80800444: beq         $t6, $zero, L_8080045C
    if (ctx->r14 == 0) {
        // 0x80800448: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_8080045C;
    }
    // 0x80800448: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8080044C: beq         $t6, $at, L_80800468
    if (ctx->r14 == ctx->r1) {
        // 0x80800450: lw          $t8, 0x3C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X3C);
            goto L_80800468;
    }
    // 0x80800450: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80800454: b           L_808004A4
    // 0x80800458: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
        goto L_808004A4;
    // 0x80800458: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_8080045C:
    // 0x8080045C: sb          $zero, 0x16($v0)
    MEM_B(0X16, ctx->r2) = 0;
    // 0x80800460: b           L_808004A0
    // 0x80800464: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
        goto L_808004A0;
    // 0x80800464: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
L_80800468:
    // 0x80800468: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080046C: bne         $t8, $at, L_80800494
    if (ctx->r24 != ctx->r1) {
        // 0x80800470: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800494;
    }
    // 0x80800470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800474: jal         0x8009E674
    // 0x80800478: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x80800478: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8080047C: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(29, 0X10D0) << 16);
    // 0x80800480: addiu       $a3, $a3, 0x10D0
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(29, 0X10D0));
    // 0x80800484: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80800488: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8080048C: jal         0x8010D930
    // 0x80800490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8010D930(rdram, ctx);
        goto after_1;
    // 0x80800490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80800494:
    // 0x80800494: jal         0x80084A98
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggaim_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080049C: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
L_808004A0:
    // 0x808004A0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_808004A4:
    // 0x808004A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004AC: sb          $t9, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r25;
    // 0x808004B0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x808004B4: beq         $t0, $at, L_80800514
    if (ctx->r8 == ctx->r1) {
        // 0x808004B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800514;
    }
    // 0x808004B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004BC: bnel        $t0, $at, L_808005EC
    if (ctx->r8 != ctx->r1) {
        // 0x808004C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808005EC;
    }
    goto skip_0;
    // 0x808004C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808004C4: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004CC: lbu         $v1, 0x16($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X16);
    // 0x808004D0: beq         $v1, $zero, L_80800500
    if (ctx->r3 == 0) {
        // 0x808004D4: addiu       $t1, $v1, 0x1
        ctx->r9 = ADD32(ctx->r3, 0X1);
            goto L_80800500;
    }
    // 0x808004D4: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x808004D8: jal         0x8009E674
    // 0x808004DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E674(rdram, ctx);
        goto after_3;
    // 0x808004DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x808004E0: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(29, 0X10C0) << 16);
    // 0x808004E4: addiu       $a3, $a3, 0x10C0
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(29, 0X10C0));
    // 0x808004E8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x808004EC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808004F0: jal         0x8010D930
    // 0x808004F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8010D930(rdram, ctx);
        goto after_4;
    // 0x808004F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x808004F8: b           L_80800504
    // 0x808004FC: nop

        goto L_80800504;
    // 0x808004FC: nop

L_80800500:
    // 0x80800500: sb          $t1, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r9;
L_80800504:
    // 0x80800504: jal         0x80084AA0
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggaim_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080050C: b           L_808005EC
    // 0x80800510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808005EC;
    // 0x80800510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800514:
    // 0x80800514: jal         0x8009E71C
    // 0x80800518: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8009E71C(rdram, ctx);
        goto after_6;
    // 0x80800518: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_6:
    // 0x8080051C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800524: jal         0x8009E71C
    // 0x80800528: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8009E71C(rdram, ctx);
        goto after_7;
    // 0x80800528: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_7:
    // 0x8080052C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80800530: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80800534: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x80800538: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8080053C: beq         $a1, $zero, L_80800548
    if (ctx->r5 == 0) {
        // 0x80800540: nop
    
            goto L_80800548;
    }
    // 0x80800540: nop

    // 0x80800544: sltiu       $a1, $v0, 0x1
    ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
L_80800548:
    // 0x80800548: jal         0x800C6E38
    // 0x8080054C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_800C6E38(rdram, ctx);
        goto after_8;
    // 0x8080054C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_8:
    // 0x80800550: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800554: jal         0x800C6E38
    // 0x80800558: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_800C6E38(rdram, ctx);
        goto after_9;
    // 0x80800558: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_9:
    // 0x8080055C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800560: jal         0x800C6E38
    // 0x80800564: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_800C6E38(rdram, ctx);
        goto after_10;
    // 0x80800564: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_10:
    // 0x80800568: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8080056C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80800570: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80800574: beq         $t3, $zero, L_80800584
    if (ctx->r11 == 0) {
        // 0x80800578: sltu        $a1, $zero, $v1
        ctx->r5 = 0 < ctx->r3 ? 1 : 0;
            goto L_80800584;
    }
    // 0x80800578: sltu        $a1, $zero, $v1
    ctx->r5 = 0 < ctx->r3 ? 1 : 0;
    // 0x8080057C: bne         $a1, $zero, L_808005B0
    if (ctx->r5 != 0) {
        // 0x80800580: nop
    
            goto L_808005B0;
    }
    // 0x80800580: nop

L_80800584:
    // 0x80800584: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80800588: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8080058C: beq         $t5, $zero, L_8080059C
    if (ctx->r13 == 0) {
        // 0x80800590: sltu        $a1, $zero, $v1
        ctx->r5 = 0 < ctx->r3 ? 1 : 0;
            goto L_8080059C;
    }
    // 0x80800590: sltu        $a1, $zero, $v1
    ctx->r5 = 0 < ctx->r3 ? 1 : 0;
    // 0x80800594: bne         $a1, $zero, L_808005B0
    if (ctx->r5 != 0) {
        // 0x80800598: nop
    
            goto L_808005B0;
    }
    // 0x80800598: nop

L_8080059C:
    // 0x8080059C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x808005A0: sltu        $a1, $zero, $v1
    ctx->r5 = 0 < ctx->r3 ? 1 : 0;
    // 0x808005A4: beq         $a1, $zero, L_808005B0
    if (ctx->r5 == 0) {
        // 0x808005A8: nop
    
            goto L_808005B0;
    }
    // 0x808005A8: nop

    // 0x808005AC: sltu        $a1, $zero, $v0
    ctx->r5 = 0 < ctx->r2 ? 1 : 0;
L_808005B0:
    // 0x808005B0: bnel        $t8, $zero, L_808005E4
    if (ctx->r24 != 0) {
        // 0x808005B4: lw          $t2, 0x90($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X90);
            goto L_808005E4;
    }
    goto skip_1;
    // 0x808005B4: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    skip_1:
    // 0x808005B8: beql        $a1, $zero, L_808005E4
    if (ctx->r5 == 0) {
        // 0x808005BC: lw          $t2, 0x90($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X90);
            goto L_808005E4;
    }
    goto skip_2;
    // 0x808005BC: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    skip_2:
    // 0x808005C0: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x808005C4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x808005C8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x808005CC: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x808005D0: bnel        $t0, $zero, L_808005E4
    if (ctx->r8 != 0) {
        // 0x808005D4: lw          $t2, 0x90($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X90);
            goto L_808005E4;
    }
    goto skip_3;
    // 0x808005D4: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    skip_3:
    // 0x808005D8: b           L_808005E8
    // 0x808005DC: sb          $t1, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r9;
        goto L_808005E8;
    // 0x808005DC: sb          $t1, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r9;
    // 0x808005E0: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
L_808005E4:
    // 0x808005E4: sb          $zero, 0x15($t2)
    MEM_B(0X15, ctx->r10) = 0;
L_808005E8:
    // 0x808005E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808005EC:
    // 0x808005EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808005F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808005F4: jr          $ra
    // 0x808005F8: nop

    return;
    // 0x808005F8: nop

;}
RECOMP_FUNC void func_808005FC_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800604: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800608: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8080060C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80800610: jal         0x800F3BD0
    // 0x80800614: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800F3BD0(rdram, ctx);
        goto after_0;
    // 0x80800614: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x80800618: jal         0x8009C984
    // 0x8080061C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x8080061C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80800620: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800624: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80800628: jal         0x800EEB9C
    // 0x8080062C: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_800EEB9C(rdram, ctx);
        goto after_2;
    // 0x8080062C: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_2:
    // 0x80800630: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800634: jal         0x800EF04C
    // 0x80800638: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x80800638: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x8080063C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800640: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800644: jr          $ra
    // 0x80800648: nop

    return;
    // 0x80800648: nop

;}
RECOMP_FUNC void func_8080064C_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080064C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800650: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800654: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800658: jal         0x8009CC68
    // 0x8080065C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009CC68(rdram, ctx);
        goto after_0;
    // 0x8080065C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800660: bne         $v0, $zero, L_80800688
    if (ctx->r2 != 0) {
        // 0x80800664: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800688;
    }
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800668: jal         0x8009E674
    // 0x8080066C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E674(rdram, ctx);
        goto after_1;
    // 0x8080066C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800670: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(29, 0X10B0) << 16);
    // 0x80800674: addiu       $a3, $a3, 0x10B0
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(29, 0X10B0));
    // 0x80800678: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x8080067C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800680: jal         0x8010D930
    // 0x80800684: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8010D930(rdram, ctx);
        goto after_2;
    // 0x80800684: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80800688:
    // 0x80800688: jal         0x800A4CA8
    // 0x8080068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_3;
    // 0x8080068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800690: jal         0x80110C2C
    // 0x80800694: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110C2C(rdram, ctx);
        goto after_4;
    // 0x80800694: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080069C: jal         0x80095774
    // 0x808006A0: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_80095774(rdram, ctx);
        goto after_5;
    // 0x808006A0: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_5:
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A8: jal         0x80095774
    // 0x808006AC: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    func_80095774(rdram, ctx);
        goto after_6;
    // 0x808006AC: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_6:
    // 0x808006B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B4: jal         0x80095774
    // 0x808006B8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    func_80095774(rdram, ctx);
        goto after_7;
    // 0x808006B8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_7:
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C0: jal         0x80095774
    // 0x808006C4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_80095774(rdram, ctx);
        goto after_8;
    // 0x808006C4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_8:
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006CC: jal         0x80095774
    // 0x808006D0: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    func_80095774(rdram, ctx);
        goto after_9;
    // 0x808006D0: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    after_9:
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D8: jal         0x80000424
    // 0x808006DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800424_bafpctrl(rdram, ctx);
        goto after_10;
    // 0x808006DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x808006E8: jal         0x800000DC
    // 0x808006EC: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_808000DC_bafpctrl(rdram, ctx);
        goto after_11;
    // 0x808006EC: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_11:
    // 0x808006F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808006F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808006F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808006FC: jr          $ra
    // 0x80800700: nop

    return;
    // 0x80800700: nop

;}
RECOMP_FUNC void func_80800704_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800704: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800708: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080070C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800710: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800714: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800718: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8080071C: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80800720: bne         $t8, $zero, L_80800748
    if (ctx->r24 != 0) {
        // 0x80800724: nop
    
            goto L_80800748;
    }
    // 0x80800724: nop

    // 0x80800728: jal         0x8009E674
    // 0x8080072C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x8080072C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800730: lui         $a3, 0x0
    ctx->r7 = S32(RELOC_HI16(29, 0X10A0) << 16);
    // 0x80800734: addiu       $a3, $a3, 0x10A0
    ctx->r7 = ADD32(ctx->r7, (int16_t)RELOC_LO16(29, 0X10A0));
    // 0x80800738: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x8080073C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800740: jal         0x8010D930
    // 0x80800744: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8010D930(rdram, ctx);
        goto after_1;
    // 0x80800744: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80800748:
    // 0x80800748: jal         0x800A4CA8
    // 0x8080074C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_2;
    // 0x8080074C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800750: jal         0x80110BF0
    // 0x80800754: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110BF0(rdram, ctx);
        goto after_3;
    // 0x80800754: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080075C: jal         0x800005FC
    // 0x80800760: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_808005FC_bafpctrl(rdram, ctx);
        goto after_4;
    // 0x80800760: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x80800764: jal         0x800A4CA8
    // 0x80800768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_5;
    // 0x80800768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080076C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800770: jal         0x800893F8
    // 0x80800774: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    _ncba1p_entrypoint_6(rdram, ctx);
        goto after_6;
    // 0x80800774: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_6:
    // 0x80800778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080077C: jal         0x80095738
    // 0x80800780: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    func_80095738(rdram, ctx);
        goto after_7;
    // 0x80800780: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_7:
    // 0x80800784: beq         $v0, $zero, L_808007BC
    if (ctx->r2 == 0) {
        // 0x80800788: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007BC;
    }
    // 0x80800788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080078C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800790: jal         0x80099A7C
    // 0x80800794: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80099A7C(rdram, ctx);
        goto after_8;
    // 0x80800794: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_8:
    // 0x80800798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080079C: jal         0x800848F0
    // 0x808007A0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _badrone_entrypoint_33(rdram, ctx);
        goto after_9;
    // 0x808007A0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_9:
    // 0x808007A4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x808007A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808007AC: jal         0x800A516C
    // 0x808007B0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800A516C(rdram, ctx);
        goto after_10;
    // 0x808007B0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_10:
    // 0x808007B4: b           L_808007E4
    // 0x808007B8: nop

        goto L_808007E4;
    // 0x808007B8: nop

L_808007BC:
    // 0x808007BC: jal         0x800F3E84
    // 0x808007C0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800F3E84(rdram, ctx);
        goto after_11;
    // 0x808007C0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_11:
    // 0x808007C4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808007C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808007CC: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808007D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808007D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x808007D8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x808007DC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x808007E0: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
L_808007E4:
    // 0x808007E4: jal         0x800A4CA8
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_12;
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808007EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808007F0: jal         0x80089400
    // 0x808007F4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    _ncba1p_entrypoint_7(rdram, ctx);
        goto after_13;
    // 0x808007F4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_13:
    // 0x808007F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808007FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800800: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800808: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8080080C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80800810: jal         0x8009C914
    // 0x80800814: nop

    func_8009C914(rdram, ctx);
        goto after_14;
    // 0x80800814: nop

    after_14:
    // 0x80800818: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x8080081C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80800820: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x80800824: beql        $t1, $zero, L_80800850
    if (ctx->r9 == 0) {
        // 0x80800828: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800850;
    }
    goto skip_0;
    // 0x80800828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080082C: jal         0x8009C974
    // 0x80800830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_15;
    // 0x80800830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800834: jal         0x800A4CA8
    // 0x80800838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_16;
    // 0x80800838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8080083C: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    // 0x80800840: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80800844: jal         0x80089428
    // 0x80800848: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncba1p_entrypoint_12(rdram, ctx);
        goto after_17;
    // 0x80800848: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_17:
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800850:
    // 0x80800850: jal         0x80095760
    // 0x80800854: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_80095760(rdram, ctx);
        goto after_18;
    // 0x80800854: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_18:
    // 0x80800858: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800860: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800864: jal         0x80000424
    // 0x80800868: sb          $zero, 0x14($t2)
    MEM_B(0X14, ctx->r10) = 0;
    func_80800424_bafpctrl(rdram, ctx);
        goto after_19;
    // 0x80800868: sb          $zero, 0x14($t2)
    MEM_B(0X14, ctx->r10) = 0;
    after_19:
    // 0x8080086C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800870: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800874: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800878: jr          $ra
    // 0x8080087C: nop

    return;
    // 0x8080087C: nop

;}
RECOMP_FUNC void func_80800880_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800888: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x8080088C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800890: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80800894: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80800898: beql        $t8, $zero, L_808008C0
    if (ctx->r24 == 0) {
        // 0x8080089C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808008C0;
    }
    goto skip_0;
    // 0x8080089C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808008A0: jal         0x800A4CA8
    // 0x808008A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x808008A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x808008A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x808008AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808008B0: lw          $a1, 0x90($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X90);
    // 0x808008B4: jal         0x80089400
    // 0x808008B8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    _ncba1p_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x808008B8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_1:
    // 0x808008BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808008C0:
    // 0x808008C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008C4: jr          $ra
    // 0x808008C8: nop

    return;
    // 0x808008C8: nop

;}
RECOMP_FUNC void func_808008CC_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808008D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808008D8: jal         0x800005FC
    // 0x808008DC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_808005FC_bafpctrl(rdram, ctx);
        goto after_0;
    // 0x808008DC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x808008E0: jal         0x800A4CA8
    // 0x808008E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800A4CA8(rdram, ctx);
        goto after_1;
    // 0x808008E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x808008E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808008EC: jal         0x800893F8
    // 0x808008F0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    _ncba1p_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x808008F0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x808008F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808008FC: jr          $ra
    // 0x80800900: nop

    return;
    // 0x80800900: nop

;}
RECOMP_FUNC void func_80800904_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080090C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800910: jal         0x80091A58
    // 0x80800914: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800914: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x80800918: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8080091C: beq         $t6, $zero, L_80800960
    if (ctx->r14 == 0) {
        // 0x80800920: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80800960;
    }
    // 0x80800920: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80800924: jal         0x800C6E38
    // 0x80800928: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_800C6E38(rdram, ctx);
        goto after_1;
    // 0x80800928: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_1:
    // 0x8080092C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800930: beq         $t7, $zero, L_80800960
    if (ctx->r15 == 0) {
        // 0x80800934: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80800960;
    }
    // 0x80800934: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80800938: jal         0x80000C10
    // 0x8080093C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bafpctrl_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x8080093C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800940: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800944: beq         $t8, $zero, L_80800960
    if (ctx->r24 == 0) {
        // 0x80800948: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_80800960;
    }
    // 0x80800948: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8080094C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80800950: lw          $t0, 0x90($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X90);
    // 0x80800954: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80800958: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x8080095C: sltiu       $v0, $t1, 0x1
    ctx->r2 = ctx->r9 < 0X1 ? 1 : 0;
L_80800960:
    // 0x80800960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800968: jr          $ra
    // 0x8080096C: nop

    return;
    // 0x8080096C: nop

;}
RECOMP_FUNC void func_80800970_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800970: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800974: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800978: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080097C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800980: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800984: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080098C: lbu         $v0, 0x14($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X14);
    // 0x80800990: beq         $v0, $at, L_808009A8
    if (ctx->r2 == ctx->r1) {
        // 0x80800994: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808009A8;
    }
    // 0x80800994: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800998: beq         $v0, $at, L_80800AB8
    if (ctx->r2 == ctx->r1) {
        // 0x8080099C: nop
    
            goto L_80800AB8;
    }
    // 0x8080099C: nop

    // 0x808009A0: b           L_80800B78
    // 0x808009A4: nop

        goto L_80800B78;
    // 0x808009A4: nop

L_808009A8:
    // 0x808009A8: jal         0x80000904
    // 0x808009AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800904_bafpctrl(rdram, ctx);
        goto after_0;
    // 0x808009AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808009B0: bne         $v0, $zero, L_808009C8
    if (ctx->r2 != 0) {
        // 0x808009B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009C8;
    }
    // 0x808009B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009B8: jal         0x80095738
    // 0x808009BC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x808009BC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_1:
    // 0x808009C0: beql        $v0, $zero, L_808009D8
    if (ctx->r2 == 0) {
        // 0x808009C4: lw          $t9, 0x90($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X90);
            goto L_808009D8;
    }
    goto skip_0;
    // 0x808009C4: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    skip_0:
L_808009C8:
    // 0x808009C8: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x808009CC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808009D0: sb          $t7, 0x15($t8)
    MEM_B(0X15, ctx->r24) = ctx->r15;
    // 0x808009D4: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
L_808009D8:
    // 0x808009D8: lbu         $t0, 0x15($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X15);
    // 0x808009DC: beq         $t0, $zero, L_80800A34
    if (ctx->r8 == 0) {
        // 0x808009E0: nop
    
            goto L_80800A34;
    }
    // 0x808009E0: nop

    // 0x808009E4: jal         0x80084AC0
    // 0x808009E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggcursor_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808009E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808009EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808009F0: bne         $v0, $at, L_80800A34
    if (ctx->r2 != ctx->r1) {
        // 0x808009F4: nop
    
            goto L_80800A34;
    }
    // 0x808009F4: nop

    // 0x808009F8: jal         0x800A4CA8
    // 0x808009FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_3;
    // 0x808009FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800A00: jal         0x80089420
    // 0x80800A04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncba1p_entrypoint_11(rdram, ctx);
        goto after_4;
    // 0x80800A04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80800A08: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80800A0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A14: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800A18: nop

    // 0x80800A1C: bc1f        L_80800A34
    if (!c1cs) {
        // 0x80800A20: nop
    
            goto L_80800A34;
    }
    // 0x80800A20: nop

    // 0x80800A24: jal         0x80000424
    // 0x80800A28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800424_bafpctrl(rdram, ctx);
        goto after_5;
    // 0x80800A28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800A2C: b           L_80800B78
    // 0x80800A30: nop

        goto L_80800B78;
    // 0x80800A30: nop

L_80800A34:
    // 0x80800A34: jal         0x80000008
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_bafpctrl(rdram, ctx);
        goto after_6;
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800A3C: beq         $v0, $zero, L_80800A68
    if (ctx->r2 == 0) {
        // 0x80800A40: nop
    
            goto L_80800A68;
    }
    // 0x80800A40: nop

    // 0x80800A44: jal         0x800A4CA8
    // 0x80800A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_7;
    // 0x80800A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800A4C: jal         0x80089418
    // 0x80800A50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncba1p_entrypoint_10(rdram, ctx);
        goto after_8;
    // 0x80800A50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x80800A54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800A58: bne         $v0, $at, L_80800A68
    if (ctx->r2 != ctx->r1) {
        // 0x80800A5C: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_80800A68;
    }
    // 0x80800A5C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80800A60: b           L_80800B78
    // 0x80800A64: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
        goto L_80800B78;
    // 0x80800A64: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80800A68:
    // 0x80800A68: jal         0x80000C10
    // 0x80800A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bafpctrl_entrypoint_6(rdram, ctx);
        goto after_9;
    // 0x80800A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800A70: beq         $v0, $zero, L_80800B78
    if (ctx->r2 == 0) {
        // 0x80800A74: nop
    
            goto L_80800B78;
    }
    // 0x80800A74: nop

    // 0x80800A78: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x80800A7C: lbu         $t3, 0x11($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X11);
    // 0x80800A80: beq         $t3, $zero, L_80800A98
    if (ctx->r11 == 0) {
        // 0x80800A84: nop
    
            goto L_80800A98;
    }
    // 0x80800A84: nop

    // 0x80800A88: jal         0x8000022C
    // 0x80800A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080022C_bafpctrl(rdram, ctx);
        goto after_10;
    // 0x80800A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800A90: b           L_80800AA0
    // 0x80800A94: nop

        goto L_80800AA0;
    // 0x80800A94: nop

L_80800A98:
    // 0x80800A98: jal         0x800002A4
    // 0x80800A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002A4_bafpctrl(rdram, ctx);
        goto after_11;
    // 0x80800A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_80800AA0:
    // 0x80800AA0: jal         0x80000880
    // 0x80800AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800880_bafpctrl(rdram, ctx);
        goto after_12;
    // 0x80800AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800AA8: jal         0x800008CC
    // 0x80800AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808008CC_bafpctrl(rdram, ctx);
        goto after_13;
    // 0x80800AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800AB0: b           L_80800B78
    // 0x80800AB4: nop

        goto L_80800B78;
    // 0x80800AB4: nop

L_80800AB8:
    // 0x80800AB8: jal         0x80094AB4
    // 0x80800ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094AB4(rdram, ctx);
        goto after_14;
    // 0x80800ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800AC0: jal         0x80000904
    // 0x80800AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800904_bafpctrl(rdram, ctx);
        goto after_15;
    // 0x80800AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800AC8: beq         $v0, $zero, L_80800B10
    if (ctx->r2 == 0) {
        // 0x80800ACC: nop
    
            goto L_80800B10;
    }
    // 0x80800ACC: nop

    // 0x80800AD0: jal         0x80084AC0
    // 0x80800AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggcursor_entrypoint_2(rdram, ctx);
        goto after_16;
    // 0x80800AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800AD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800ADC: bne         $v0, $at, L_80800B10
    if (ctx->r2 != ctx->r1) {
        // 0x80800AE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B10;
    }
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AE4: jal         0x80095738
    // 0x80800AE8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_80095738(rdram, ctx);
        goto after_17;
    // 0x80800AE8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_17:
    // 0x80800AEC: beq         $v0, $zero, L_80800B00
    if (ctx->r2 == 0) {
        // 0x80800AF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B00;
    }
    // 0x80800AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AF4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80800AF8: b           L_80800B78
    // 0x80800AFC: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
        goto L_80800B78;
    // 0x80800AFC: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
L_80800B00:
    // 0x80800B00: jal         0x80000424
    // 0x80800B04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800424_bafpctrl(rdram, ctx);
        goto after_18;
    // 0x80800B04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x80800B08: b           L_80800B78
    // 0x80800B0C: nop

        goto L_80800B78;
    // 0x80800B0C: nop

L_80800B10:
    // 0x80800B10: jal         0x80000008
    // 0x80800B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_bafpctrl(rdram, ctx);
        goto after_19;
    // 0x80800B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800B18: beq         $v0, $zero, L_80800B28
    if (ctx->r2 == 0) {
        // 0x80800B1C: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_80800B28;
    }
    // 0x80800B1C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80800B20: b           L_80800B78
    // 0x80800B24: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
        goto L_80800B78;
    // 0x80800B24: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80800B28:
    // 0x80800B28: jal         0x80000C10
    // 0x80800B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bafpctrl_entrypoint_6(rdram, ctx);
        goto after_20;
    // 0x80800B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800B30: beq         $v0, $zero, L_80800B78
    if (ctx->r2 == 0) {
        // 0x80800B34: nop
    
            goto L_80800B78;
    }
    // 0x80800B34: nop

    // 0x80800B38: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x80800B3C: lbu         $t7, 0x11($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X11);
    // 0x80800B40: beq         $t7, $zero, L_80800B58
    if (ctx->r15 == 0) {
        // 0x80800B44: nop
    
            goto L_80800B58;
    }
    // 0x80800B44: nop

    // 0x80800B48: jal         0x8000022C
    // 0x80800B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080022C_bafpctrl(rdram, ctx);
        goto after_21;
    // 0x80800B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800B50: b           L_80800B60
    // 0x80800B54: nop

        goto L_80800B60;
    // 0x80800B54: nop

L_80800B58:
    // 0x80800B58: jal         0x800003BC
    // 0x80800B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808003BC_bafpctrl(rdram, ctx);
        goto after_22;
    // 0x80800B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
L_80800B60:
    // 0x80800B60: jal         0x800008CC
    // 0x80800B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808008CC_bafpctrl(rdram, ctx);
        goto after_23;
    // 0x80800B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800B68: jal         0x80000880
    // 0x80800B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800880_bafpctrl(rdram, ctx);
        goto after_24;
    // 0x80800B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80800B70: jal         0x80084AA8
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggaim_entrypoint_3(rdram, ctx);
        goto after_25;
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
L_80800B78:
    // 0x80800B78: jal         0x80000114
    // 0x80800B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800114_bafpctrl(rdram, ctx);
        goto after_26;
    // 0x80800B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80800B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B84: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80800B88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B8C: jr          $ra
    // 0x80800B90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800B90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void bafpctrl_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B94: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800B98: jr          $ra
    // 0x80800B9C: lbu         $v0, 0x11($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X11);
    return;
    // 0x80800B9C: lbu         $v0, 0x11($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X11);
;}
RECOMP_FUNC void bafpctrl_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BA0: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800BA4: jr          $ra
    // 0x80800BA8: lbu         $v0, 0x12($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X12);
    return;
    // 0x80800BA8: lbu         $v0, 0x12($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X12);
;}
RECOMP_FUNC void bafpctrl_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800BB4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800BB8: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800BBC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800BC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800BC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800BC8: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x80800BCC: lwc1        $f12, 0x18($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X18);
    // 0x80800BD0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800BD4: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80800BD8: jal         0x800F10B4
    // 0x80800BDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x80800BDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80800BE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800BE8: jr          $ra
    // 0x80800BEC: nop

    return;
    // 0x80800BEC: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BF0: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800BF4: jr          $ra
    // 0x80800BF8: lbu         $v0, 0x10($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X10);
    return;
    // 0x80800BF8: lbu         $v0, 0x10($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X10);
;}
RECOMP_FUNC void bafpctrl_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BFC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800C00: lbu         $v0, 0x14($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X14);
    // 0x80800C04: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x80800C08: jr          $ra
    // 0x80800C0C: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    return;
    // 0x80800C0C: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void bafpctrl_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C10: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800C14: jr          $ra
    // 0x80800C18: lbu         $v0, 0x13($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X13);
    return;
    // 0x80800C18: lbu         $v0, 0x13($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X13);
;}
RECOMP_FUNC void bafpctrl_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C1C: jr          $ra
    // 0x80800C20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800C20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bafpctrl_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800C28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800C2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800C30: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800C34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800C38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800C3C: jal         0x80000D38
    // 0x80800C40: sb          $zero, 0x10($t6)
    MEM_B(0X10, ctx->r14) = 0;
    bafpctrl_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800C40: sb          $zero, 0x10($t6)
    MEM_B(0X10, ctx->r14) = 0;
    after_0:
    // 0x80800C44: lw          $a0, 0x90($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X90);
    // 0x80800C48: jal         0x800EFD24
    // 0x80800C4C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x80800C4C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x80800C50: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800C5C: jal         0x80000CA0
    // 0x80800C60: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    bafpctrl_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80800C60: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    after_2:
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C68: jal         0x80000CAC
    // 0x80800C6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    bafpctrl_entrypoint_10(rdram, ctx);
        goto after_3;
    // 0x80800C6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C74: jal         0x80000D14
    // 0x80800C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bafpctrl_entrypoint_13(rdram, ctx);
        goto after_4;
    // 0x80800C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800C7C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800C80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800C84: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x80800C88: swc1        $f4, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f4.u32l;
    // 0x80800C8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800C94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800C98: jr          $ra
    // 0x80800C9C: nop

    return;
    // 0x80800C9C: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CA0: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800CA4: jr          $ra
    // 0x80800CA8: sb          $a1, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r5;
    return;
    // 0x80800CA8: sb          $a1, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bafpctrl_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CAC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800CB0: jr          $ra
    // 0x80800CB4: sb          $a1, 0x12($t6)
    MEM_B(0X12, ctx->r14) = ctx->r5;
    return;
    // 0x80800CB4: sb          $a1, 0x12($t6)
    MEM_B(0X12, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bafpctrl_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CB8: beql        $a2, $zero, L_80800CD8
    if (ctx->r6 == 0) {
        // 0x80800CBC: lw          $v0, 0x90($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X90);
            goto L_80800CD8;
    }
    goto skip_0;
    // 0x80800CBC: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    skip_0:
    // 0x80800CC0: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x80800CC4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80800CC8: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80800CCC: jr          $ra
    // 0x80800CD0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    return;
    // 0x80800CD0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80800CD4: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
L_80800CD8:
    // 0x80800CD8: nor         $t9, $a1, $zero
    ctx->r25 = ~(ctx->r5 | 0);
    // 0x80800CDC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80800CE0: and         $t0, $t8, $t9
    ctx->r8 = ctx->r24 & ctx->r25;
    // 0x80800CE4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80800CE8: jr          $ra
    // 0x80800CEC: nop

    return;
    // 0x80800CEC: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CF8: lw          $a0, 0x90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X90);
    // 0x80800CFC: jal         0x800EE7F8
    // 0x80800D00: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800D00: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x80800D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D0C: jr          $ra
    // 0x80800D10: nop

    return;
    // 0x80800D10: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D1C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800D20: jal         0x80084AE0
    // 0x80800D24: sb          $a1, 0x13($t6)
    MEM_B(0X13, ctx->r14) = ctx->r5;
    _baeggcursor_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800D24: sb          $a1, 0x13($t6)
    MEM_B(0X13, ctx->r14) = ctx->r5;
    after_0:
    // 0x80800D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D30: jr          $ra
    // 0x80800D34: nop

    return;
    // 0x80800D34: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800D3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800D40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800D44: lw          $v1, 0x90($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X90);
    // 0x80800D48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800D4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800D50: lbu         $v0, 0x10($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X10);
    // 0x80800D54: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800D58: beq         $v0, $a2, L_80800D70
    if (ctx->r2 == ctx->r6) {
        // 0x80800D5C: nop
    
            goto L_80800D70;
    }
    // 0x80800D5C: nop

    // 0x80800D60: beq         $v0, $at, L_80800D80
    if (ctx->r2 == ctx->r1) {
        // 0x80800D64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D80;
    }
    // 0x80800D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D68: b           L_80800D94
    // 0x80800D6C: nop

        goto L_80800D94;
    // 0x80800D6C: nop

L_80800D70:
    // 0x80800D70: bne         $a1, $a2, L_80800D94
    if (ctx->r5 != ctx->r6) {
        // 0x80800D74: nop
    
            goto L_80800D94;
    }
    // 0x80800D74: nop

    // 0x80800D78: b           L_80800E20
    // 0x80800D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800E20;
    // 0x80800D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800D80:
    // 0x80800D80: jal         0x8000064C
    // 0x80800D84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8080064C_bafpctrl(rdram, ctx);
        goto after_0;
    // 0x80800D84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800D88: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800D8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800D90: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
L_80800D94:
    // 0x80800D94: beq         $a1, $a2, L_80800DBC
    if (ctx->r5 == ctx->r6) {
        // 0x80800D98: sb          $a1, 0x10($v1)
        MEM_B(0X10, ctx->r3) = ctx->r5;
            goto L_80800DBC;
    }
    // 0x80800D98: sb          $a1, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r5;
    // 0x80800D9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800DA0: beq         $a1, $at, L_80800DF4
    if (ctx->r5 == ctx->r1) {
        // 0x80800DA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DF4;
    }
    // 0x80800DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DA8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800DAC: beq         $a1, $at, L_80800E08
    if (ctx->r5 == ctx->r1) {
        // 0x80800DB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E08;
    }
    // 0x80800DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DB4: b           L_80800E20
    // 0x80800DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800E20;
    // 0x80800DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800DBC:
    // 0x80800DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DC0: jal         0x80000CA0
    // 0x80800DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    bafpctrl_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x80800DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DCC: jal         0x80000CAC
    // 0x80800DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    bafpctrl_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80800DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800DD4: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x80800DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DDC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80800DE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800DE4: jal         0x8009ADF0
    // 0x80800DE8: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    func_8009ADF0(rdram, ctx);
        goto after_3;
    // 0x80800DE8: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    after_3:
    // 0x80800DEC: b           L_80800E20
    // 0x80800DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800E20;
    // 0x80800DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800DF4:
    // 0x80800DF4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80800DF8: jal         0x8009ADF0
    // 0x80800DFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_4;
    // 0x80800DFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80800E00: b           L_80800E20
    // 0x80800E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800E20;
    // 0x80800E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800E08:
    // 0x80800E08: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80800E0C: jal         0x8009ADF0
    // 0x80800E10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_5;
    // 0x80800E10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80800E14: jal         0x80000704
    // 0x80800E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800704_bafpctrl(rdram, ctx);
        goto after_6;
    // 0x80800E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800E20:
    // 0x80800E20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800E24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800E28: jr          $ra
    // 0x80800E2C: nop

    return;
    // 0x80800E2C: nop

;}
RECOMP_FUNC void func_80800E30_bafpctrl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800E3C: jal         0x80091A58
    // 0x80800E40: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800E40: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x80800E44: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800E48: beq         $t6, $zero, L_80800E94
    if (ctx->r14 == 0) {
        // 0x80800E4C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80800E94;
    }
    // 0x80800E4C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80800E50: jal         0x80000C10
    // 0x80800E54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bafpctrl_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800E54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800E58: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800E5C: beq         $t7, $zero, L_80800E94
    if (ctx->r15 == 0) {
        // 0x80800E60: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80800E94;
    }
    // 0x80800E60: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80800E64: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80800E68: jal         0x800F6774
    // 0x80800E6C: lw          $a0, 0x184($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X184);
    func_800F6774(rdram, ctx);
        goto after_2;
    // 0x80800E6C: lw          $a0, 0x184($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X184);
    after_2:
    // 0x80800E70: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800E74: beq         $t9, $zero, L_80800E94
    if (ctx->r25 == 0) {
        // 0x80800E78: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80800E94;
    }
    // 0x80800E78: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80800E7C: jal         0x800A4CA8
    // 0x80800E80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4CA8(rdram, ctx);
        goto after_3;
    // 0x80800E80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800E84: jal         0x80089418
    // 0x80800E88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncba1p_entrypoint_10(rdram, ctx);
        goto after_4;
    // 0x80800E88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80800E8C: xori        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 ^ 0X3;
    // 0x80800E90: sltu        $v0, $zero, $t0
    ctx->r2 = 0 < ctx->r8 ? 1 : 0;
L_80800E94:
    // 0x80800E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E9C: jr          $ra
    // 0x80800EA0: nop

    return;
    // 0x80800EA0: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EAC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800EB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800EB4: lbu         $v0, 0x10($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X10);
    // 0x80800EB8: beq         $v0, $at, L_80800F10
    if (ctx->r2 == ctx->r1) {
        // 0x80800EBC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800F10;
    }
    // 0x80800EBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800EC0: beq         $v0, $at, L_80800ED8
    if (ctx->r2 == ctx->r1) {
        // 0x80800EC4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800ED8;
    }
    // 0x80800EC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800EC8: beq         $v0, $at, L_80800EF8
    if (ctx->r2 == ctx->r1) {
        // 0x80800ECC: nop
    
            goto L_80800EF8;
    }
    // 0x80800ECC: nop

    // 0x80800ED0: b           L_80800F14
    // 0x80800ED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800F14;
    // 0x80800ED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800ED8:
    // 0x80800ED8: jal         0x80000E30
    // 0x80800EDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800E30_bafpctrl(rdram, ctx);
        goto after_0;
    // 0x80800EDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800EE0: beq         $v0, $zero, L_80800F10
    if (ctx->r2 == 0) {
        // 0x80800EE4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800F10;
    }
    // 0x80800EE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800EE8: jal         0x80000D38
    // 0x80800EEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    bafpctrl_entrypoint_14(rdram, ctx);
        goto after_1;
    // 0x80800EEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80800EF0: b           L_80800F14
    // 0x80800EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800F14;
    // 0x80800EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800EF8:
    // 0x80800EF8: jal         0x80000970
    // 0x80800EFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800970_bafpctrl(rdram, ctx);
        goto after_2;
    // 0x80800EFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80800F00: beq         $v0, $zero, L_80800F10
    if (ctx->r2 == 0) {
        // 0x80800F04: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800F10;
    }
    // 0x80800F04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800F08: jal         0x80000D38
    // 0x80800F0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    bafpctrl_entrypoint_14(rdram, ctx);
        goto after_3;
    // 0x80800F0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
L_80800F10:
    // 0x80800F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800F14:
    // 0x80800F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F18: jr          $ra
    // 0x80800F1C: nop

    return;
    // 0x80800F1C: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F28: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x80800F2C: lbu         $t6, 0x13($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X13);
    // 0x80800F30: beql        $t6, $zero, L_80800F54
    if (ctx->r14 == 0) {
        // 0x80800F34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800F54;
    }
    goto skip_0;
    // 0x80800F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800F38: lbu         $t7, 0x10($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X10);
    // 0x80800F3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800F40: beql        $t7, $at, L_80800F54
    if (ctx->r15 == ctx->r1) {
        // 0x80800F44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800F54;
    }
    goto skip_1;
    // 0x80800F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800F48: jal         0x80000D38
    // 0x80800F4C: nop

    bafpctrl_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800F4C: nop

    after_0:
    // 0x80800F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800F54:
    // 0x80800F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F58: jr          $ra
    // 0x80800F5C: nop

    return;
    // 0x80800F5C: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F68: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80800F6C: lbu         $t7, 0x13($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X13);
    // 0x80800F70: beql        $t7, $zero, L_80800F84
    if (ctx->r15 == 0) {
        // 0x80800F74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800F84;
    }
    goto skip_0;
    // 0x80800F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800F78: jal         0x80000D38
    // 0x80800F7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bafpctrl_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800F7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800F84:
    // 0x80800F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F88: jr          $ra
    // 0x80800F8C: nop

    return;
    // 0x80800F8C: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800F94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800F98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800F9C: beq         $a1, $zero, L_80800FEC
    if (ctx->r5 == 0) {
        // 0x80800FA0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80800FEC;
    }
    // 0x80800FA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800FA4: jal         0x80000D38
    // 0x80800FA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    bafpctrl_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800FA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FB0: jal         0x80000CA0
    // 0x80800FB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bafpctrl_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x80800FB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FBC: jal         0x80000CAC
    // 0x80800FC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bafpctrl_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80800FC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800FCC: jal         0x800947EC
    // 0x80800FD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_3;
    // 0x80800FD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80800FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800FDC: jal         0x800947EC
    // 0x80800FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_4;
    // 0x80800FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80800FE4: b           L_8080101C
    // 0x80800FE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080101C;
    // 0x80800FE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800FEC:
    // 0x80800FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FF0: jal         0x80000D38
    // 0x80800FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bafpctrl_entrypoint_14(rdram, ctx);
        goto after_5;
    // 0x80800FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801000: jal         0x800947EC
    // 0x80801004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_6;
    // 0x80801004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80801008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080100C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801010: jal         0x800947EC
    // 0x80801014: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_7;
    // 0x80801014: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80801018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080101C:
    // 0x8080101C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801020: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801024: jr          $ra
    // 0x80801028: nop

    return;
    // 0x80801028: nop

;}
RECOMP_FUNC void bafpctrl_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080102C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801030: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801034: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801038: jal         0x80000BF0
    // 0x8080103C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bafpctrl_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x8080103C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801040: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80801044: bne         $v0, $at, L_8080107C
    if (ctx->r2 != ctx->r1) {
        // 0x80801048: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080107C;
    }
    // 0x80801048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080104C: jal         0x80000D38
    // 0x80801050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bafpctrl_entrypoint_14(rdram, ctx);
        goto after_1;
    // 0x80801050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80801054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801058: jal         0x800A3544
    // 0x8080105C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A3544(rdram, ctx);
        goto after_2;
    // 0x8080105C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801064: jal         0x8009337C
    // 0x80801068: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009337C(rdram, ctx);
        goto after_3;
    // 0x80801068: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080106C: jal         0x800A4EC8
    // 0x80801070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4EC8(rdram, ctx);
        goto after_4;
    // 0x80801070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801074: jal         0x800878B8
    // 0x80801078: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    _plcamera_entrypoint_0(rdram, ctx);
        goto after_5;
    // 0x80801078: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_5:
L_8080107C:
    // 0x8080107C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801080: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801088: jr          $ra
    // 0x8080108C: nop

    return;
    // 0x8080108C: nop

;}
RECOMP_FUNC void bahitspline_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800010: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x80800014: jal         0x80095870
    // 0x80800018: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    func_80095870(rdram, ctx);
        goto after_0;
    // 0x80800018: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_0:
    // 0x8080001C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800020: jal         0x8009C128
    // 0x80800024: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800024: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_1:
    // 0x80800028: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8080002C: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80800030: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80800034: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80800038: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8080003C: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x80800040: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800044: jal         0x800EFA4C
    // 0x80800048: nop

    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x80800048: nop

    after_2:
    // 0x8080004C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800050: jal         0x800EE7F8
    // 0x80800054: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x80800054: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_3:
    // 0x80800058: jal         0x8009588C
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009588C(rdram, ctx);
        goto after_4;
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800060: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800064: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800068: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x8080006C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x80800070: jal         0x800C6C94
    // 0x80800074: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_800C6C94(rdram, ctx);
        goto after_5;
    // 0x80800074: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_5:
    // 0x80800078: beq         $v0, $zero, L_80800100
    if (ctx->r2 == 0) {
        // 0x8080007C: lwc1        $f10, 0x74($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
            goto L_80800100;
    }
    // 0x8080007C: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80800080: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(30, 0X130) << 16);
    // 0x80800084: lwc1        $f16, 0x130($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(30, 0X130));
    // 0x80800088: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8080008C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80800090: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80800094: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80800098: jal         0x800EFA20
    // 0x8080009C: nop

    func_800EFA20(rdram, ctx);
        goto after_6;
    // 0x8080009C: nop

    after_6:
    // 0x808000A0: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x808000A4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x808000A8: jal         0x800EE780
    // 0x808000AC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_800EE780(rdram, ctx);
        goto after_7;
    // 0x808000AC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x808000B0: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x808000B4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x808000B8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x808000BC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x808000C0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x808000C4: jal         0x800FAB50
    // 0x808000C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800FAB50(rdram, ctx);
        goto after_8;
    // 0x808000C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x808000CC: beq         $v0, $zero, L_80800100
    if (ctx->r2 == 0) {
        // 0x808000D0: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_80800100;
    }
    // 0x808000D0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x808000D4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x808000D8: jal         0x800EFB24
    // 0x808000DC: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_800EFB24(rdram, ctx);
        goto after_9;
    // 0x808000DC: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_9:
    // 0x808000E0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x808000E4: jal         0x800EF04C
    // 0x808000E8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_10;
    // 0x808000E8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_10:
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F0: jal         0x8009C0F8
    // 0x808000F4: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_8009C0F8(rdram, ctx);
        goto after_11;
    // 0x808000F4: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_11:
    // 0x808000F8: jal         0x8009C21C
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C21C(rdram, ctx);
        goto after_12;
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_80800100:
    // 0x80800100: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800104: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800108: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8080010C: jr          $ra
    // 0x80800110: nop

    return;
    // 0x80800110: nop

;}
RECOMP_FUNC void bahitspline_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: jr          $ra
    // 0x80800118: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800118: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bahitspline_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080011C: jr          $ra
    // 0x80800120: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800120: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80800124: nop

    // 0x80800128: nop

    // 0x8080012C: nop

;}
RECOMP_FUNC void bahold_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void func_80800008_bahold(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: lw          $t6, 0x9C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X9C);
    // 0x80800014: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800018: beq         $a1, $zero, L_80800028
    if (ctx->r5 == 0) {
        // 0x8080001C: sw          $a1, 0x8($t6)
        MEM_W(0X8, ctx->r14) = ctx->r5;
            goto L_80800028;
    }
    // 0x8080001C: sw          $a1, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r5;
    // 0x80800020: b           L_80800028
    // 0x80800024: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80800028;
    // 0x80800024: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80800028:
    // 0x80800028: jal         0x8009ADF0
    // 0x8080002C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8009ADF0(rdram, ctx);
        goto after_0;
    // 0x8080002C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
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
RECOMP_FUNC void bahold_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080004C: jal         0x80000008
    // 0x80800050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800008_bahold(rdram, ctx);
        goto after_0;
    // 0x80800050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800054: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800058: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8080005C: lw          $t6, 0x9C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X9C);
    // 0x80800060: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800064: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800068: jal         0x80000214
    // 0x8080006C: sb          $zero, 0xC($t6)
    MEM_B(0XC, ctx->r14) = 0;
    bahold_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x8080006C: sb          $zero, 0xC($t6)
    MEM_B(0XC, ctx->r14) = 0;
    after_1:
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800078: jr          $ra
    // 0x8080007C: nop

    return;
    // 0x8080007C: nop

;}
RECOMP_FUNC void bahold_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800080: jr          $ra
    // 0x80800084: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800084: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80800088_bahold(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080008C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800090: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800094: jal         0x80106790
    // 0x80800098: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x80800098: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080009C: lb          $t7, 0x65($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X65);
    // 0x808000A0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A4: bgezl       $t7, L_808000D4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x808000A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000D4;
    }
    goto skip_0;
    // 0x808000A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808000AC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x808000B0: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x808000B4: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x808000B8: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x808000BC: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x808000C0: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x808000C4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x808000C8: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x808000CC: swc1        $f10, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f10.u32l;
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
RECOMP_FUNC void func_808000E0_bahold(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808000E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x808000EC: jal         0x8008FF40
    // 0x808000F0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_8008FF40(rdram, ctx);
        goto after_0;
    // 0x808000F0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x808000F4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808000F8: jal         0x80092D44
    // 0x808000FC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80092D44(rdram, ctx);
        goto after_1;
    // 0x808000FC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800100: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80800104: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800108: lw          $t7, 0x9C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X9C);
    // 0x8080010C: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80800110: jal         0x800136E4
    // 0x80800114: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_2;
    // 0x80800114: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x80800118: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8080011C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800120: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800124: lw          $t8, 0x9C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X9C);
    // 0x80800128: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8080012C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80800130: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80800134: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80800138: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8080013C: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x80800140: jal         0x80000088
    // 0x80800144: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_80800088_bahold(rdram, ctx);
        goto after_3;
    // 0x80800144: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_3:
    // 0x80800148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080014C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800150: jr          $ra
    // 0x80800154: nop

    return;
    // 0x80800154: nop

;}
RECOMP_FUNC void bahold_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080015C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800160: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x80800164: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x80800168: beql        $t6, $zero, L_808001A4
    if (ctx->r14 == 0) {
        // 0x8080016C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808001A4;
    }
    goto skip_0;
    // 0x8080016C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800170: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    // 0x80800174: bne         $t7, $zero, L_8080018C
    if (ctx->r15 != 0) {
        // 0x80800178: nop
    
            goto L_8080018C;
    }
    // 0x80800178: nop

    // 0x8080017C: jal         0x80000008
    // 0x80800180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800008_bahold(rdram, ctx);
        goto after_0;
    // 0x80800180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800184: b           L_808001A4
    // 0x80800188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808001A4;
    // 0x80800188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080018C:
    // 0x8080018C: jal         0x800000E0
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808000E0_bahold(rdram, ctx);
        goto after_1;
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80800194: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800198: lw          $t8, 0x9C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X9C);
    // 0x8080019C: sb          $zero, 0xC($t8)
    MEM_B(0XC, ctx->r24) = 0;
    // 0x808001A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001A4:
    // 0x808001A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001A8: jr          $ra
    // 0x808001AC: nop

    return;
    // 0x808001AC: nop

;}
RECOMP_FUNC void bahold_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001B8: jal         0x80000008
    // 0x808001BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800008_bahold(rdram, ctx);
        goto after_0;
    // 0x808001BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808001C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001C8: jr          $ra
    // 0x808001CC: nop

    return;
    // 0x808001CC: nop

;}
RECOMP_FUNC void bahold_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D0: lw          $t6, 0x9C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X9C);
    // 0x808001D4: jr          $ra
    // 0x808001D8: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    return;
    // 0x808001D8: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
;}
RECOMP_FUNC void bahold_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001E4: jal         0x80000008
    // 0x808001E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800008_bahold(rdram, ctx);
        goto after_0;
    // 0x808001E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001EC: jal         0x800000E0
    // 0x808001F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000E0_bahold(rdram, ctx);
        goto after_1;
    // 0x808001F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808001F4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x808001F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808001FC: lw          $t8, 0x9C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X9C);
    // 0x80800200: sb          $t6, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r14;
    // 0x80800204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080020C: jr          $ra
    // 0x80800210: nop

    return;
    // 0x80800210: nop

;}
RECOMP_FUNC void bahold_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800214: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800218: lw          $t6, 0x9C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X9C);
    // 0x8080021C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80800220: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x80800224: lw          $t7, 0x9C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X9C);
    // 0x80800228: jr          $ra
    // 0x8080022C: swc1        $f14, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x8080022C: swc1        $f14, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_80800000_bainvisible(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080000C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800010: sb          $a2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r6;
    // 0x80800014: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x80800018: sltiu       $at, $a2, 0x5
    ctx->r1 = ctx->r6 < 0X5 ? 1 : 0;
    // 0x8080001C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800020: addiu       $t6, $v0, 0x4C
    ctx->r14 = ADD32(ctx->r2, 0X4C);
    // 0x80800024: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80800028: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8080002C: beq         $at, $zero, L_808001A8
    if (ctx->r1 == 0) {
        // 0x80800030: addiu       $s1, $v0, 0x1C
        ctx->r17 = ADD32(ctx->r2, 0X1C);
            goto L_808001A8;
    }
    // 0x80800030: addiu       $s1, $v0, 0x1C
    ctx->r17 = ADD32(ctx->r2, 0X1C);
    // 0x80800034: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x80800038: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(32, 0X990) << 16);
    // 0x8080003C: addu        $at, $at, $t7
    gpr jr_addend_80800044 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80800040: lw          $t7, 0x990($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(32, 0X990));
    // 0x80800044: jr          $t7
    // 0x80800048: nop

    switch (jr_addend_80800044 >> 2) {
        case 0: goto L_8080004C; break;
        case 1: goto L_80800198; break;
        case 2: goto L_80800080; break;
        case 3: goto L_80800118; break;
        case 4: goto L_80800140; break;
        default: switch_error(__func__, 0x80800044, 0x80800990);
    }
    // 0x80800048: nop

L_8080004C:
    // 0x8080004C: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x80800050: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80800054: bnel        $t8, $zero, L_808001AC
    if (ctx->r24 != 0) {
        // 0x80800058: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808001AC;
    }
    goto skip_0;
    // 0x80800058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080005C: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800064: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80800068: bnel        $t0, $zero, L_808001AC
    if (ctx->r8 != 0) {
        // 0x8080006C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808001AC;
    }
    goto skip_1;
    // 0x8080006C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800070: jal         0x8009ADF0
    // 0x80800074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009ADF0(rdram, ctx);
        goto after_0;
    // 0x80800074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80800078: b           L_808001AC
    // 0x8080007C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001AC;
    // 0x8080007C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800080:
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800084: jal         0x8009AD78
    // 0x80800088: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8009AD78(rdram, ctx);
        goto after_1;
    // 0x80800088: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x8080008C: bne         $v0, $zero, L_808001A8
    if (ctx->r2 != 0) {
        // 0x80800090: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001A8;
    }
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800094: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80800098: jal         0x8009ADF0
    // 0x8080009C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_2;
    // 0x8080009C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x808000A0: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
    // 0x808000A4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000AC: jal         0x80000410
    // 0x808000B0: lui         $a2, 0x4307
    ctx->r6 = S32(0X4307 << 16);
    bainvisible_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x808000B0: lui         $a2, 0x4307
    ctx->r6 = S32(0X4307 << 16);
    after_3:
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: jal         0x8009BC08
    // 0x808000BC: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    func_8009BC08(rdram, ctx);
        goto after_4;
    // 0x808000BC: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    after_4:
    // 0x808000C0: jal         0x8009C984
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_5;
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808000CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808000D0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x808000D4: lw          $t1, 0xA8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XA8);
    // 0x808000D8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(32, 0X9A4) << 16);
    // 0x808000DC: lwc1        $f12, 0x9A4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X9A4));
    // 0x808000E0: swc1        $f0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f0.u32l;
    // 0x808000E4: sb          $zero, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = 0;
    // 0x808000E8: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x808000EC: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    // 0x808000F0: sb          $zero, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = 0;
    // 0x808000F4: swc1        $f2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f2.u32l;
    // 0x808000F8: swc1        $f12, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f12.u32l;
    // 0x808000FC: lw          $t2, 0xA8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XA8);
    // 0x80800100: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800108: jal         0x800001BC
    // 0x8080010C: swc1        $f4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f4.u32l;
    func_808001BC_bainvisible(rdram, ctx);
        goto after_6;
    // 0x8080010C: swc1        $f4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f4.u32l;
    after_6:
    // 0x80800110: b           L_808001AC
    // 0x80800114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001AC;
    // 0x80800114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800118:
    // 0x80800118: bne         $a3, $s1, L_808001A8
    if (ctx->r7 != ctx->r17) {
        // 0x8080011C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_808001A8;
    }
    // 0x8080011C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800120: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800128: addiu       $a1, $zero, 0x65E
    ctx->r5 = ADD32(0, 0X65E);
    // 0x8080012C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800130: jal         0x8009DBF0
    // 0x80800134: nop

    func_8009DBF0(rdram, ctx);
        goto after_7;
    // 0x80800134: nop

    after_7:
    // 0x80800138: b           L_808001AC
    // 0x8080013C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001AC;
    // 0x8080013C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800140:
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800144: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80800148: jal         0x8009AD78
    // 0x8080014C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8009AD78(rdram, ctx);
        goto after_8;
    // 0x8080014C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_8:
    // 0x80800150: bne         $v0, $zero, L_80800184
    if (ctx->r2 != 0) {
        // 0x80800154: lw          $a3, 0x2C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X2C);
            goto L_80800184;
    }
    // 0x80800154: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80800160: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800164: jal         0x8009ADF0
    // 0x80800168: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8009ADF0(rdram, ctx);
        goto after_9;
    // 0x80800168: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_9:
    // 0x8080016C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800170: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800174: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80800178: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8080017C: swc1        $f2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f2.u32l;
    // 0x80800180: swc1        $f2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f2.u32l;
L_80800184:
    // 0x80800184: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80800188: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8080018C: swc1        $f6, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f6.u32l;
    // 0x80800190: b           L_808001A8
    // 0x80800194: swc1        $f8, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f8.u32l;
        goto L_808001A8;
    // 0x80800194: swc1        $f8, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f8.u32l;
L_80800198:
    // 0x80800198: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080019C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808001A0: sb          $zero, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = 0;
    // 0x808001A4: swc1        $f2, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f2.u32l;
L_808001A8:
    // 0x808001A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001AC:
    // 0x808001AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808001B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808001B4: jr          $ra
    // 0x808001B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808001B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_808001BC_bainvisible(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001BC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x808001C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001C8: lw          $t6, 0xA8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA8);
    // 0x808001CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001D0: addiu       $t7, $t6, 0x1C
    ctx->r15 = ADD32(ctx->r14, 0X1C);
    // 0x808001D4: jal         0x800D8FF8
    // 0x808001D8: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808001D8: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    after_0:
    // 0x808001DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808001E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x808001EC: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x808001F0: jal         0x8009BC08
    // 0x808001F4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    func_8009BC08(rdram, ctx);
        goto after_1;
    // 0x808001F4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x808001F8: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x808001FC: jal         0x800EFB8C
    // 0x80800200: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    func_800EFB8C(rdram, ctx);
        goto after_2;
    // 0x80800200: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    after_2:
    // 0x80800204: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80800208: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x8080020C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80800210: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80800214: jal         0x800EE7F8
    // 0x80800218: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x80800218: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x8080021C: lw          $t8, 0xA8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XA8);
    // 0x80800220: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800228: lwc1        $f0, 0x14($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8080022C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80800230: nop

    // 0x80800234: bc1f        L_80800248
    if (!c1cs) {
        // 0x80800238: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80800248;
    }
    // 0x80800238: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080023C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800240: b           L_8080024C
    // 0x80800244: nop

        goto L_8080024C;
    // 0x80800244: nop

L_80800248:
    // 0x80800248: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
L_8080024C:
    // 0x8080024C: jal         0x8009C984
    // 0x80800250: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    func_8009C984(rdram, ctx);
        goto after_4;
    // 0x80800250: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x80800254: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80800258: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x8080025C: lwc1        $f10, 0xC($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80800260: jal         0x80013728
    // 0x80800264: sub.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f10.fl;
    func_80013728(rdram, ctx);
        goto after_5;
    // 0x80800264: sub.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f10.fl;
    after_5:
    // 0x80800268: jal         0x800F2100
    // 0x8080026C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_6;
    // 0x8080026C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_6:
    // 0x80800270: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800274: lw          $t0, 0xA8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XA8);
    // 0x80800278: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8080027C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800280: swc1        $f16, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f16.u32l;
    // 0x80800284: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80800288: lw          $v0, 0xA8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA8);
    // 0x8080028C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800290: mul.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80800294: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80800298: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x8080029C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x808002A0: nop

    // 0x808002A4: bc1fl       L_808002BC
    if (!c1cs) {
        // 0x808002A8: div.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
            goto L_808002BC;
    }
    goto skip_0;
    // 0x808002A8: div.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
    skip_0:
    // 0x808002AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808002B0: b           L_808002C0
    // 0x808002B4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
        goto L_808002C0;
    // 0x808002B4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x808002B8: div.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
L_808002BC:
    // 0x808002BC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_808002C0:
    // 0x808002C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(32, 0X9A8) << 16);
    // 0x808002C4: bc1fl       L_808002D8
    if (!c1cs) {
        // 0x808002C8: swc1        $f0, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
            goto L_808002D8;
    }
    goto skip_1;
    // 0x808002C8: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    skip_1:
    // 0x808002CC: b           L_808002D8
    // 0x808002D0: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
        goto L_808002D8;
    // 0x808002D0: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x808002D4: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_808002D8:
    // 0x808002D8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x808002DC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x808002E0: bc1fl       L_808002F4
    if (!c1cs) {
        // 0x808002E4: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_808002F4;
    }
    goto skip_2;
    // 0x808002E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_2:
    // 0x808002E8: b           L_808002F4
    // 0x808002EC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_808002F4;
    // 0x808002EC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x808002F0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_808002F4:
    // 0x808002F4: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x808002F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x808002FC: bnel        $v0, $t1, L_80800320
    if (ctx->r2 != ctx->r9) {
        // 0x80800300: lbu         $t2, 0x30($a1)
        ctx->r10 = MEM_BU(ctx->r5, 0X30);
            goto L_80800320;
    }
    goto skip_3;
    // 0x80800300: lbu         $t2, 0x30($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X30);
    skip_3:
    // 0x80800304: lwc1        $f4, 0x9A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X9A8));
    // 0x80800308: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(32, 0X9AC) << 16);
    // 0x8080030C: lwc1        $f8, 0x9AC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X9AC));
    // 0x80800310: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80800314: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80800318: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x8080031C: lbu         $t2, 0x30($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X30);
L_80800320:
    // 0x80800320: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(32, 0X9B0) << 16);
    // 0x80800324: bnel        $v0, $t2, L_80800348
    if (ctx->r2 != ctx->r10) {
        // 0x80800328: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_80800348;
    }
    goto skip_4;
    // 0x80800328: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    skip_4:
    // 0x8080032C: lwc1        $f16, 0x9B0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X9B0));
    // 0x80800330: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(32, 0X9B4) << 16);
    // 0x80800334: lwc1        $f4, 0x9B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X9B4));
    // 0x80800338: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8080033C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80800340: swc1        $f6, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->f6.u32l;
    // 0x80800344: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80800348:
    // 0x80800348: lbu         $t3, 0x1C($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1C);
    // 0x8080034C: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x80800350: beq         $t3, $zero, L_80800390
    if (ctx->r11 == 0) {
        // 0x80800354: nop
    
            goto L_80800390;
    }
    // 0x80800354: nop

    // 0x80800358: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8080035C: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80800360: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80800364: nop

    // 0x80800368: bc1fl       L_8080037C
    if (!c1cs) {
        // 0x8080036C: lwc1        $f2, 0x14($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
            goto L_8080037C;
    }
    goto skip_5;
    // 0x8080036C: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    skip_5:
    // 0x80800370: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x80800374: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800378: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
L_8080037C:
    // 0x8080037C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80800380: nop

    // 0x80800384: bc1f        L_80800390
    if (!c1cs) {
        // 0x80800388: nop
    
            goto L_80800390;
    }
    // 0x80800388: nop

    // 0x8080038C: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
L_80800390:
    // 0x80800390: bne         $v1, $a0, L_80800348
    if (ctx->r3 != ctx->r4) {
        // 0x80800394: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_80800348;
    }
    // 0x80800394: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x80800398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080039C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x808003A4: jr          $ra
    // 0x808003A8: nop

    return;
    // 0x808003A8: nop

;}
RECOMP_FUNC void func_808003AC_bainvisible(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003B4: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x808003B8: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x808003BC: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x808003C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808003C4: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x808003C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(32, 0X9B8) << 16);
    // 0x808003CC: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x808003D0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x808003D4: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x808003D8: jal         0x800F214C
    // 0x808003DC: lwc1        $f14, 0x9B8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X9B8));
    func_800F214C(rdram, ctx);
        goto after_0;
    // 0x808003DC: lwc1        $f14, 0x9B8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X9B8));
    after_0:
    // 0x808003E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x808003E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808003E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003EC: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x808003F0: nop

    // 0x808003F4: bc1f        L_80800400
    if (!c1cs) {
        // 0x808003F8: nop
    
            goto L_80800400;
    }
    // 0x808003F8: nop

    // 0x808003FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800400:
    // 0x80800400: jr          $ra
    // 0x80800404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void bainvisible_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800408: jr          $ra
    // 0x8080040C: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
    return;
    // 0x8080040C: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
;}
RECOMP_FUNC void bainvisible_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800410: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800414: lw          $t6, 0xA8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA8);
    // 0x80800418: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8080041C: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
    // 0x80800420: lw          $t7, 0xA8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA8);
    // 0x80800424: jr          $ra
    // 0x80800428: swc1        $f14, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x80800428: swc1        $f14, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void bainvisible_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080042C: lw          $t6, 0xA8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA8);
    // 0x80800430: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80800434: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80800438: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8080043C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80800440: jr          $ra
    // 0x80800444: lwc1        $f0, 0x28($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X28);
    return;
    // 0x80800444: lwc1        $f0, 0x28($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X28);
;}
RECOMP_FUNC void bainvisible_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080044C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800450: lw          $a1, 0xA8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XA8);
    // 0x80800454: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080045C: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x80800460: jal         0x80000000
    // 0x80800464: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800000_bainvisible(rdram, ctx);
        goto after_0;
    // 0x80800464: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800468: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080046C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800470: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800474: jal         0x80000000
    // 0x80800478: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    func_80800000_bainvisible(rdram, ctx);
        goto after_1;
    // 0x80800478: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    after_1:
    // 0x8080047C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800480: jal         0x80091788
    // 0x80800484: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091788(rdram, ctx);
        goto after_2;
    // 0x80800484: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x80800488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080048C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800490: jr          $ra
    // 0x80800494: nop

    return;
    // 0x80800494: nop

;}
RECOMP_FUNC void bainvisible_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800498: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080049C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004A0: lw          $a1, 0xA8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XA8);
    // 0x808004A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808004A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808004AC: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x808004B0: jal         0x80000000
    // 0x808004B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800000_bainvisible(rdram, ctx);
        goto after_0;
    // 0x808004B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808004B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808004BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808004C4: jal         0x80000000
    // 0x808004C8: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    func_80800000_bainvisible(rdram, ctx);
        goto after_1;
    // 0x808004C8: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    after_1:
    // 0x808004CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004D0: jal         0x80091788
    // 0x808004D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091788(rdram, ctx);
        goto after_2;
    // 0x808004D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x808004D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004E0: jr          $ra
    // 0x808004E4: nop

    return;
    // 0x808004E4: nop

;}
RECOMP_FUNC void bainvisible_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808004F4: lw          $a1, 0xA8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XA8);
    // 0x808004F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808004FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80800500: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x80800504: jal         0x80000000
    // 0x80800508: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800000_bainvisible(rdram, ctx);
        goto after_0;
    // 0x80800508: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080050C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800510: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800514: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80800518: jal         0x80000000
    // 0x8080051C: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    func_80800000_bainvisible(rdram, ctx);
        goto after_1;
    // 0x8080051C: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    after_1:
    // 0x80800520: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800524: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80800528: jal         0x800917A8
    // 0x8080052C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    func_800917A8(rdram, ctx);
        goto after_2;
    // 0x8080052C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80800530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800534: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800538: jr          $ra
    // 0x8080053C: nop

    return;
    // 0x8080053C: nop

;}
RECOMP_FUNC void bainvisible_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800540: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800544: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80800548: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x8080054C: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x80800550: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80800554: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80800558: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8080055C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80800560: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80800564: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80800568: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x8080056C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80800570: lw          $t6, 0xA8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA8);
    // 0x80800574: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x80800578: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8080057C: lbu         $t7, 0x1C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1C);
    // 0x80800580: bnel        $s7, $t7, L_80800594
    if (ctx->r23 != ctx->r15) {
        // 0x80800584: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80800594;
    }
    goto skip_0;
    // 0x80800584: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x80800588: jal         0x800001BC
    // 0x8080058C: nop

    func_808001BC_bainvisible(rdram, ctx);
        goto after_0;
    // 0x8080058C: nop

    after_0:
    // 0x80800590: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80800594:
    // 0x80800594: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80800598: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8080059C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x808005A0: addiu       $s6, $zero, 0x60
    ctx->r22 = ADD32(0, 0X60);
    // 0x808005A4: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x808005A8: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x808005AC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x808005B0: lw          $t8, 0xA8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XA8);
L_808005B4:
    // 0x808005B4: addu        $s0, $t8, $s2
    ctx->r16 = ADD32(ctx->r24, ctx->r18);
    // 0x808005B8: lbu         $v0, 0x1C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1C);
    // 0x808005BC: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x808005C0: beq         $v0, $s3, L_808006F0
    if (ctx->r2 == ctx->r19) {
        // 0x808005C4: nop
    
            goto L_808006F0;
    }
    // 0x808005C4: nop

    // 0x808005C8: beq         $v0, $s4, L_808005E8
    if (ctx->r2 == ctx->r20) {
        // 0x808005CC: nop
    
            goto L_808005E8;
    }
    // 0x808005CC: nop

    // 0x808005D0: beq         $v0, $s7, L_80800628
    if (ctx->r2 == ctx->r23) {
        // 0x808005D4: nop
    
            goto L_80800628;
    }
    // 0x808005D4: nop

    // 0x808005D8: beq         $v0, $s5, L_8080069C
    if (ctx->r2 == ctx->r21) {
        // 0x808005DC: nop
    
            goto L_8080069C;
    }
    // 0x808005DC: nop

    // 0x808005E0: b           L_80800710
    // 0x808005E4: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
        goto L_80800710;
    // 0x808005E4: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
L_808005E8:
    // 0x808005E8: jal         0x800D8FF8
    // 0x808005EC: nop

    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x808005EC: nop

    after_1:
    // 0x808005F0: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x808005F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808005F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808005FC: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80800600: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80800604: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80800608: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x8080060C: nop

    // 0x80800610: bc1fl       L_80800710
    if (!c1cs) {
        // 0x80800614: addiu       $s2, $s2, 0x30
        ctx->r18 = ADD32(ctx->r18, 0X30);
            goto L_80800710;
    }
    goto skip_1;
    // 0x80800614: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
    skip_1:
    // 0x80800618: jal         0x80000000
    // 0x8080061C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_80800000_bainvisible(rdram, ctx);
        goto after_2;
    // 0x8080061C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_2:
    // 0x80800620: b           L_80800710
    // 0x80800624: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
        goto L_80800710;
    // 0x80800624: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
L_80800628:
    // 0x80800628: jal         0x800003AC
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808003AC_bainvisible(rdram, ctx);
        goto after_3;
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800630: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800634: jal         0x800915AC
    // 0x80800638: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800915AC(rdram, ctx);
        goto after_4;
    // 0x80800638: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x8080063C: beq         $v0, $zero, L_80800660
    if (ctx->r2 == 0) {
        // 0x80800640: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800660;
    }
    // 0x80800640: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800644: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800648: jal         0x80000000
    // 0x8080064C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80800000_bainvisible(rdram, ctx);
        goto after_5;
    // 0x8080064C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_5:
    // 0x80800650: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800654: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800658: jal         0x8009DBF0
    // 0x8080065C: addiu       $a1, $zero, 0x65D
    ctx->r5 = ADD32(0, 0X65D);
    func_8009DBF0(rdram, ctx);
        goto after_6;
    // 0x8080065C: addiu       $a1, $zero, 0x65D
    ctx->r5 = ADD32(0, 0X65D);
    after_6:
L_80800660:
    // 0x80800660: lbu         $t9, 0x1C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1C);
    // 0x80800664: beql        $t9, $zero, L_80800710
    if (ctx->r25 == 0) {
        // 0x80800668: addiu       $s2, $s2, 0x30
        ctx->r18 = ADD32(ctx->r18, 0X30);
            goto L_80800710;
    }
    goto skip_2;
    // 0x80800668: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
    skip_2:
    // 0x8080066C: jal         0x800D8FF8
    // 0x80800670: nop

    func_800D8FF8(rdram, ctx);
        goto after_7;
    // 0x80800670: nop

    after_7:
    // 0x80800674: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80800678: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8080067C: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x80800680: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80800684: c.le.s      $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f18.fl <= ctx->f22.fl;
    // 0x80800688: nop

    // 0x8080068C: bc1fl       L_80800710
    if (!c1cs) {
        // 0x80800690: addiu       $s2, $s2, 0x30
        ctx->r18 = ADD32(ctx->r18, 0X30);
            goto L_80800710;
    }
    goto skip_3;
    // 0x80800690: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
    skip_3:
    // 0x80800694: b           L_8080070C
    // 0x80800698: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
        goto L_8080070C;
    // 0x80800698: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
L_8080069C:
    // 0x8080069C: jal         0x800D8FF8
    // 0x808006A0: nop

    func_800D8FF8(rdram, ctx);
        goto after_8;
    // 0x808006A0: nop

    after_8:
    // 0x808006A4: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x808006A8: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x808006AC: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x808006B0: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x808006B4: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x808006B8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x808006BC: nop

    // 0x808006C0: bc1fl       L_808006D4
    if (!c1cs) {
        // 0x808006C4: mov.s       $f14, $f20
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
            goto L_808006D4;
    }
    goto skip_4;
    // 0x808006C4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    skip_4:
    // 0x808006C8: b           L_808006D4
    // 0x808006CC: div.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
        goto L_808006D4;
    // 0x808006CC: div.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x808006D0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
L_808006D4:
    // 0x808006D4: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x808006D8: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x808006DC: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x808006E0: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x808006E4: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x808006E8: b           L_8080070C
    // 0x808006EC: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
        goto L_8080070C;
    // 0x808006EC: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
L_808006F0:
    // 0x808006F0: jal         0x800003AC
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808003AC_bainvisible(rdram, ctx);
        goto after_9;
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808006F8: beq         $v0, $zero, L_8080070C
    if (ctx->r2 == 0) {
        // 0x808006FC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8080070C;
    }
    // 0x808006FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800700: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800704: jal         0x80000000
    // 0x80800708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80800000_bainvisible(rdram, ctx);
        goto after_10;
    // 0x80800708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_8080070C:
    // 0x8080070C: addiu       $s2, $s2, 0x30
    ctx->r18 = ADD32(ctx->r18, 0X30);
L_80800710:
    // 0x80800710: bnel        $s2, $s6, L_808005B4
    if (ctx->r18 != ctx->r22) {
        // 0x80800714: lw          $t8, 0xA8($s1)
        ctx->r24 = MEM_W(ctx->r17, 0XA8);
            goto L_808005B4;
    }
    goto skip_5;
    // 0x80800714: lw          $t8, 0xA8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XA8);
    skip_5:
    // 0x80800718: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8080071C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80800720: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80800724: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80800728: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8080072C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80800730: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80800734: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80800738: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8080073C: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x80800740: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x80800744: jr          $ra
    // 0x80800748: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80800748: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void bainvisible_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080074C: lwc1        $f12, 0x10($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80800750: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800754: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80800758: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8080075C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80800760: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800764: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x80800768: andi        $t7, $a1, 0x2
    ctx->r15 = ctx->r5 & 0X2;
    // 0x8080076C: bc1t        L_8080077C
    if (c1cs) {
        // 0x80800770: nop
    
            goto L_8080077C;
    }
    // 0x80800770: nop

    // 0x80800774: b           L_8080077C
    // 0x80800778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8080077C;
    // 0x80800778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080077C:
    // 0x8080077C: beq         $t6, $zero, L_808007A0
    if (ctx->r14 == 0) {
        // 0x80800780: nop
    
            goto L_808007A0;
    }
    // 0x80800780: nop

    // 0x80800784: lw          $v1, 0xA8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA8);
    // 0x80800788: sb          $v0, 0x38($v1)
    MEM_B(0X38, ctx->r3) = ctx->r2;
    // 0x8080078C: swc1        $f12, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f12.u32l;
    // 0x80800790: swc1        $f14, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f14.u32l;
    // 0x80800794: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80800798: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x8080079C: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
L_808007A0:
    // 0x808007A0: beq         $t7, $zero, L_808007C4
    if (ctx->r15 == 0) {
        // 0x808007A4: nop
    
            goto L_808007C4;
    }
    // 0x808007A4: nop

    // 0x808007A8: lw          $v1, 0xA8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA8);
    // 0x808007AC: sb          $v0, 0x68($v1)
    MEM_B(0X68, ctx->r3) = ctx->r2;
    // 0x808007B0: swc1        $f12, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f12.u32l;
    // 0x808007B4: swc1        $f14, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->f14.u32l;
    // 0x808007B8: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x808007BC: addiu       $v1, $v1, 0x4C
    ctx->r3 = ADD32(ctx->r3, 0X4C);
    // 0x808007C0: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
L_808007C4:
    // 0x808007C4: jr          $ra
    // 0x808007C8: nop

    return;
    // 0x808007C8: nop

;}
RECOMP_FUNC void func_808007CC_bainvisible(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007D4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808007D8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x808007DC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x808007E0: jal         0x80000000
    // 0x808007E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800000_bainvisible(rdram, ctx);
        goto after_0;
    // 0x808007E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808007E8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808007EC: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x808007F0: swc1        $f4, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f4.u32l;
    // 0x808007F4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808007F8: swc1        $f6, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f6.u32l;
    // 0x808007FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800804: jr          $ra
    // 0x80800808: nop

    return;
    // 0x80800808: nop

;}
RECOMP_FUNC void bainvisible_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080080C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800810: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x80800814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800818: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080081C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800820: beq         $t7, $zero, L_8080083C
    if (ctx->r15 == 0) {
        // 0x80800824: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_8080083C;
    }
    // 0x80800824: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80800828: lw          $a1, 0xA8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XA8);
    // 0x8080082C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800830: jal         0x800007CC
    // 0x80800834: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    func_808007CC_bainvisible(rdram, ctx);
        goto after_0;
    // 0x80800834: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    after_0:
    // 0x80800838: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_8080083C:
    // 0x8080083C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80800840: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80800844: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80800848: beql        $t9, $zero, L_80800864
    if (ctx->r25 == 0) {
        // 0x8080084C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800864;
    }
    goto skip_0;
    // 0x8080084C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800850: lw          $a1, 0xA8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XA8);
    // 0x80800854: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80800858: jal         0x800007CC
    // 0x8080085C: addiu       $a1, $a1, 0x4C
    ctx->r5 = ADD32(ctx->r5, 0X4C);
    func_808007CC_bainvisible(rdram, ctx);
        goto after_1;
    // 0x8080085C: addiu       $a1, $a1, 0x4C
    ctx->r5 = ADD32(ctx->r5, 0X4C);
    after_1:
    // 0x80800860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800864:
    // 0x80800864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800868: jr          $ra
    // 0x8080086C: nop

    return;
    // 0x8080086C: nop

;}
RECOMP_FUNC void bainvisible_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800870: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80800874: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80800878: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8080087C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80800880: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800884: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80800888: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x8080088C: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x80800890: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80800894: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80800898: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8080089C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x808008A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808008A4: blez        $a1, L_8080095C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x808008A8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8080095C;
    }
    // 0x808008A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808008AC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x808008B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808008B4: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
    // 0x808008B8: addiu       $s3, $sp, 0x7C
    ctx->r19 = ADD32(ctx->r29, 0X7C);
L_808008BC:
    // 0x808008BC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x808008C0: jal         0x8009BC08
    // 0x808008C4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8009BC08(rdram, ctx);
        goto after_0;
    // 0x808008C4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x808008C8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x808008CC: jal         0x800EFC7C
    // 0x808008D0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_800EFC7C(rdram, ctx);
        goto after_1;
    // 0x808008D0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_1:
    // 0x808008D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808008D8: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x808008DC: blez        $s0, L_80800938
    if (SIGNED(ctx->r16) <= 0) {
        // 0x808008E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800938;
    }
    // 0x808008E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008E4: addu        $t6, $s4, $s2
    ctx->r14 = ADD32(ctx->r20, ctx->r18);
    // 0x808008E8: lwc1        $f4, -0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, -0X4);
    // 0x808008EC: sll         $a1, $a0, 2
    ctx->r5 = S32(ctx->r4 << 2);
    // 0x808008F0: addu        $v0, $s4, $a1
    ctx->r2 = ADD32(ctx->r20, ctx->r5);
    // 0x808008F4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808008F8: addu        $v1, $s5, $a1
    ctx->r3 = ADD32(ctx->r21, ctx->r5);
    // 0x808008FC: bc1fl       L_8080093C
    if (!c1cs) {
        // 0x80800900: sll         $a1, $a0, 2
        ctx->r5 = S32(ctx->r4 << 2);
            goto L_8080093C;
    }
    goto skip_0;
    // 0x80800900: sll         $a1, $a0, 2
    ctx->r5 = S32(ctx->r4 << 2);
    skip_0:
    // 0x80800904: lw          $t7, -0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X4);
L_80800908:
    // 0x80800908: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8080090C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80800910: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80800914: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800918: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x8080091C: blez        $a0, L_80800938
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80800920: swc1        $f6, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
            goto L_80800938;
    }
    // 0x80800920: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80800924: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x80800928: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8080092C: nop

    // 0x80800930: bc1tl       L_80800908
    if (c1cs) {
        // 0x80800934: lw          $t7, -0x4($v1)
        ctx->r15 = MEM_W(ctx->r3, -0X4);
            goto L_80800908;
    }
    goto skip_1;
    // 0x80800934: lw          $t7, -0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X4);
    skip_1:
L_80800938:
    // 0x80800938: sll         $a1, $a0, 2
    ctx->r5 = S32(ctx->r4 << 2);
L_8080093C:
    // 0x8080093C: addu        $t8, $s5, $a1
    ctx->r24 = ADD32(ctx->r21, ctx->r5);
    // 0x80800940: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800944: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x80800948: addu        $t9, $s4, $a1
    ctx->r25 = ADD32(ctx->r20, ctx->r5);
    // 0x8080094C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80800950: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80800954: bne         $s0, $s6, L_808008BC
    if (ctx->r16 != ctx->r22) {
        // 0x80800958: swc1        $f0, 0x0($t9)
        MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
            goto L_808008BC;
    }
    // 0x80800958: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
L_8080095C:
    // 0x8080095C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80800960: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800964: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800968: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8080096C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80800970: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80800974: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80800978: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8080097C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80800980: jr          $ra
    // 0x80800984: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80800984: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x80800988: nop

    // 0x8080098C: nop

;}
RECOMP_FUNC void bakaztorpedo_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
;}
RECOMP_FUNC void bakaztorpedo_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x8080000C: jr          $ra
    // 0x80800010: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    return;
    // 0x80800010: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
;}
RECOMP_FUNC void bakaztorpedo_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080001C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800020: lw          $t7, 0xB0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB0);
    // 0x80800024: jal         0x8009EA08
    // 0x80800028: lwc1        $f12, 0x10($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X10);
    func_8009EA08(rdram, ctx);
        goto after_0;
    // 0x80800028: lwc1        $f12, 0x10($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X10);
    after_0:
    // 0x8080002C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80800030: lw          $t9, 0xB0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XB0);
    // 0x80800034: jal         0x800C2FDC
    // 0x80800038: lbu         $a0, 0x1C($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X1C);
    func_800C2FDC(rdram, ctx);
        goto after_1;
    // 0x80800038: lbu         $a0, 0x1C($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X1C);
    after_1:
    // 0x8080003C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800044: jr          $ra
    // 0x80800048: nop

    return;
    // 0x80800048: nop

;}
RECOMP_FUNC void bakaztorpedo_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080004C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800054: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x80800058: jr          $ra
    // 0x8080005C: swc1        $f4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f4.u32l;
    return;
    // 0x8080005C: swc1        $f4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f4.u32l;
;}
RECOMP_FUNC void bakaztorpedo_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800068: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x8080006C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800070: nop

    // 0x80800074: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x80800078: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x8080007C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80800080: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x80800084: lw          $t7, 0xB0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB0);
    // 0x80800088: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x8080008C: jal         0x8009EA88
    // 0x80800090: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009EA88(rdram, ctx);
        goto after_0;
    // 0x80800090: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800094: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800098: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8080009C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808000A0: lw          $t8, 0xB0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XB0);
    // 0x808000A4: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(33, 0X420) << 16);
    // 0x808000A8: addiu       $a2, $a2, 0x420
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(33, 0X420));
    // 0x808000AC: swc1        $f0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f0.u32l;
    // 0x808000B0: lw          $t0, 0xB0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XB0);
    // 0x808000B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000B8: sb          $t9, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r25;
    // 0x808000BC: lw          $t1, 0xB0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XB0);
    // 0x808000C0: swc1        $f6, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f6.u32l;
    // 0x808000C4: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x808000C8: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x808000CC: jal         0x8009D454
    // 0x808000D0: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    func_8009D454(rdram, ctx);
        goto after_1;
    // 0x808000D0: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    after_1:
    // 0x808000D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000D8: lw          $t2, 0xB0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XB0);
    // 0x808000DC: sb          $v0, 0x1C($t2)
    MEM_B(0X1C, ctx->r10) = ctx->r2;
    // 0x808000E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000E8: jr          $ra
    // 0x808000EC: nop

    return;
    // 0x808000EC: nop

;}
RECOMP_FUNC void bakaztorpedo_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000F4: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x808000F8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x808000FC: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    // 0x80800100: lw          $t7, 0xB0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB0);
    // 0x80800104: jr          $ra
    // 0x80800108: swc1        $f14, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x80800108: swc1        $f14, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void bakaztorpedo_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080010C: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x80800110: jr          $ra
    // 0x80800114: sb          $a1, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r5;
    return;
    // 0x80800114: sb          $a1, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void bakaztorpedo_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800118: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080011C: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x80800120: jr          $ra
    // 0x80800124: swc1        $f12, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80800124: swc1        $f12, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bakaztorpedo_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800128: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8080012C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800130: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800134: jal         0x800D8FF8
    // 0x80800138: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800138: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080013C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x80800140: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x80800144: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800148: lbu         $a0, 0xC($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XC);
    // 0x8080014C: beq         $a0, $at, L_80800170
    if (ctx->r4 == ctx->r1) {
        // 0x80800150: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800170;
    }
    // 0x80800150: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800154: beq         $a0, $at, L_80800180
    if (ctx->r4 == ctx->r1) {
        // 0x80800158: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800180;
    }
    // 0x80800158: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8080015C: beql        $a0, $at, L_80800194
    if (ctx->r4 == ctx->r1) {
        // 0x80800160: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_80800194;
    }
    goto skip_0;
    // 0x80800160: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    skip_0:
    // 0x80800164: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800168: b           L_808001A0
    // 0x8080016C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
        goto L_808001A0;
    // 0x8080016C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
L_80800170:
    // 0x80800170: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800174: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800178: b           L_808001A0
    // 0x8080017C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
        goto L_808001A0;
    // 0x8080017C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
L_80800180:
    // 0x80800180: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800184: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800188: b           L_808001A0
    // 0x8080018C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
        goto L_808001A0;
    // 0x8080018C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80800190: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
L_80800194:
    // 0x80800194: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800198: nop

    // 0x8080019C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
L_808001A0:
    // 0x808001A0: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: jal         0x8008E124
    // 0x808001AC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    func_8008E124(rdram, ctx);
        goto after_1;
    // 0x808001AC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x808001B0: jal         0x800C954C
    // 0x808001B4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_800C954C(rdram, ctx);
        goto after_2;
    // 0x808001B4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_2:
    // 0x808001B8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x808001BC: jal         0x800F8004
    // 0x808001C0: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8004(rdram, ctx);
        goto after_3;
    // 0x808001C0: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_3:
    // 0x808001C4: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x808001C8: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x808001CC: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x808001D0: beq         $a0, $zero, L_808001EC
    if (ctx->r4 == 0) {
        // 0x808001D4: nop
    
            goto L_808001EC;
    }
    // 0x808001D4: nop

    // 0x808001D8: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x808001DC: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x808001E0: beq         $a0, $zero, L_808001EC
    if (ctx->r4 == 0) {
        // 0x808001E4: nop
    
            goto L_808001EC;
    }
    // 0x808001E4: nop

    // 0x808001E8: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
L_808001EC:
    // 0x808001EC: beq         $a0, $zero, L_80800210
    if (ctx->r4 == 0) {
        // 0x808001F0: nop
    
            goto L_80800210;
    }
    // 0x808001F0: nop

    // 0x808001F4: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x808001F8: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x808001FC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80800200: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80800204: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80800208: jal         0x800F1574
    // 0x8080020C: nop

    func_800F1574(rdram, ctx);
        goto after_4;
    // 0x8080020C: nop

    after_4:
L_80800210:
    // 0x80800210: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(33, 0X410) << 16);
    // 0x80800214: lwc1        $f0, 0x410($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(33, 0X410));
    // 0x80800218: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8080021C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80800220: nop

    // 0x80800224: bc1fl       L_80800250
    if (!c1cs) {
        // 0x80800228: lw          $t9, 0xB0($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XB0);
            goto L_80800250;
    }
    goto skip_1;
    // 0x80800228: lw          $t9, 0xB0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB0);
    skip_1:
    // 0x8080022C: lw          $t8, 0xB0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XB0);
    // 0x80800230: lwc1        $f16, 0x10($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X10);
    // 0x80800234: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x80800238: nop

    // 0x8080023C: bc1fl       L_80800250
    if (!c1cs) {
        // 0x80800240: lw          $t9, 0xB0($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XB0);
            goto L_80800250;
    }
    goto skip_2;
    // 0x80800240: lw          $t9, 0xB0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB0);
    skip_2:
    // 0x80800244: jal         0x800FC660
    // 0x80800248: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_800FC660(rdram, ctx);
        goto after_5;
    // 0x80800248: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_5:
    // 0x8080024C: lw          $t9, 0xB0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB0);
L_80800250:
    // 0x80800250: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80800254: lwc1        $f12, 0x10($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X10);
    // 0x80800258: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x8080025C: nop

    // 0x80800260: bc1f        L_80800290
    if (!c1cs) {
        // 0x80800264: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(33, 0X414) << 16);
            goto L_80800290;
    }
    // 0x80800264: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(33, 0X414) << 16);
    // 0x80800268: lwc1        $f4, 0x414($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(33, 0X414));
    // 0x8080026C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800270: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80800274: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800278: jal         0x800F10B4
    // 0x8080027C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x8080027C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80800280: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800284: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800288: b           L_80800298
    // 0x8080028C: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
        goto L_80800298;
    // 0x8080028C: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
L_80800290:
    // 0x80800290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800294: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
L_80800298:
    // 0x80800298: jal         0x800D2498
    // 0x8080029C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800D2498(rdram, ctx);
        goto after_7;
    // 0x8080029C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x808002A0: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x808002A4: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x808002A8: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x808002AC: lwc1        $f18, 0x14($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X14);
    // 0x808002B0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x808002B4: jal         0x800136E4
    // 0x808002B8: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    func_800136E4(rdram, ctx);
        goto after_8;
    // 0x808002B8: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    after_8:
    // 0x808002BC: lw          $t1, 0xB0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XB0);
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: jal         0x80092AD8
    // 0x808002C8: swc1        $f0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f0.u32l;
    func_80092AD8(rdram, ctx);
        goto after_9;
    // 0x808002C8: swc1        $f0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f0.u32l;
    after_9:
    // 0x808002CC: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x808002D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808002D4: jal         0x800E0AF0
    // 0x808002D8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_10;
    // 0x808002D8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_10:
    // 0x808002DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808002E0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x808002E4: addiu       $a1, $zero, 0x5D
    ctx->r5 = ADD32(0, 0X5D);
    // 0x808002E8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x808002EC: lw          $t2, 0xB0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XB0);
    // 0x808002F0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808002F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808002F8: lwc1        $f4, 0x14($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X14);
    // 0x808002FC: jal         0x800E0AFC
    // 0x80800300: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_11;
    // 0x80800300: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x80800304: jal         0x8008E35C
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_12;
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080030C: beq         $v0, $zero, L_80800378
    if (ctx->r2 == 0) {
        // 0x80800310: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800378;
    }
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800314: jal         0x8009C128
    // 0x80800318: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_8009C128(rdram, ctx);
        goto after_13;
    // 0x80800318: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_13:
    // 0x8080031C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80800320: lw          $t3, 0xB0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XB0);
    // 0x80800324: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800328: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8080032C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800330: lui         $a3, 0x3F33
    ctx->r7 = S32(0X3F33 << 16);
    // 0x80800334: lwc1        $f12, 0x18($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X18);
    // 0x80800338: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8080033C: lui         $a2, 0x4496
    ctx->r6 = S32(0X4496 << 16);
    // 0x80800340: jal         0x800F10B4
    // 0x80800344: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_14;
    // 0x80800344: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x80800348: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8080034C: lw          $t4, 0xB0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XB0);
    // 0x80800350: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800354: jal         0x800C35E8
    // 0x80800358: lbu         $a0, 0x1C($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X1C);
    func_800C35E8(rdram, ctx);
        goto after_15;
    // 0x80800358: lbu         $a0, 0x1C($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X1C);
    after_15:
    // 0x8080035C: lw          $t5, 0xB0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XB0);
    // 0x80800360: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80800364: jal         0x800C31DC
    // 0x80800368: lbu         $a0, 0x1C($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X1C);
    func_800C31DC(rdram, ctx);
        goto after_16;
    // 0x80800368: lbu         $a0, 0x1C($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X1C);
    after_16:
    // 0x8080036C: lw          $t6, 0xB0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XB0);
    // 0x80800370: jal         0x800C3BDC
    // 0x80800374: lbu         $a0, 0x1C($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X1C);
    func_800C3BDC(rdram, ctx);
        goto after_17;
    // 0x80800374: lbu         $a0, 0x1C($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X1C);
    after_17:
L_80800378:
    // 0x80800378: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8080037C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800380: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80800384: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x80800388: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8080038C: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800390: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80800394: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80800398: jal         0x800F15F8
    // 0x8080039C: nop

    func_800F15F8(rdram, ctx);
        goto after_18;
    // 0x8080039C: nop

    after_18:
    // 0x808003A0: lw          $t7, 0xB0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XB0);
    // 0x808003A4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808003A8: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x808003AC: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x808003B0: lw          $t8, 0xB0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XB0);
    // 0x808003B4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x808003B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808003BC: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x808003C0: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x808003C4: jal         0x800E0AFC
    // 0x808003C8: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_19;
    // 0x808003C8: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_19:
    // 0x808003CC: lw          $t9, 0xB0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB0);
    // 0x808003D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808003D4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x808003D8: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x808003DC: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x808003E0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808003E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x808003E8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x808003EC: jal         0x800E0AFC
    // 0x808003F0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_20;
    // 0x808003F0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_20:
    // 0x808003F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808003F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003FC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80800400: jr          $ra
    // 0x80800404: nop

    return;
    // 0x80800404: nop

    // 0x80800408: nop

    // 0x8080040C: nop

;}
RECOMP_FUNC void bamotor_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080000C: jal         0x800918F8
    // 0x80800010: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800918F8(rdram, ctx);
        goto after_0;
    // 0x80800010: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800014: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800018: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080001C: jal         0x80018820
    // 0x80800020: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_80018820(rdram, ctx);
        goto after_1;
    // 0x80800020: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080002C: jr          $ra
    // 0x80800030: nop

    return;
    // 0x80800030: nop

;}
RECOMP_FUNC void bamotor_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080003C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800040: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800044: jal         0x800918F8
    // 0x80800048: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_800918F8(rdram, ctx);
        goto after_0;
    // 0x80800048: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080004C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800050: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800054: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80800058: jal         0x800187B4
    // 0x8080005C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_800187B4(rdram, ctx);
        goto after_1;
    // 0x8080005C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x80800060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800068: jr          $ra
    // 0x8080006C: nop

    return;
    // 0x8080006C: nop

;}
RECOMP_FUNC void bamotor_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800078: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080007C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800080: jal         0x800918F8
    // 0x80800084: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_800918F8(rdram, ctx);
        goto after_0;
    // 0x80800084: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800088: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080008C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800090: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80800094: jal         0x800187E8
    // 0x80800098: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_800187E8(rdram, ctx);
        goto after_1;
    // 0x80800098: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x8080009C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A4: jr          $ra
    // 0x808000A8: nop

    return;
    // 0x808000A8: nop

;}
RECOMP_FUNC void bamotor_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000B4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x808000B8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x808000BC: jal         0x800918F8
    // 0x808000C0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800918F8(rdram, ctx);
        goto after_0;
    // 0x808000C0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x808000C4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808000C8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808000CC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808000D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x808000D8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x808000DC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x808000E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x808000E4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x808000E8: jal         0x80018854
    // 0x808000EC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80018854(rdram, ctx);
        goto after_1;
    // 0x808000EC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x808000F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808000F8: jr          $ra
    // 0x808000FC: nop

    return;
    // 0x808000FC: nop

;}
