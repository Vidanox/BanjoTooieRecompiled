#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800170D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800170D4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800170D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800170DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800170E0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800170E4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800170E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800170EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800170F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800170F4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800170F8: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x800170FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80017100: jr          $ra
    // 0x80017104: lw          $v0, -0x5E50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5E50);
    return;
    // 0x80017104: lw          $v0, -0x5E50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5E50);
;}
RECOMP_FUNC void func_80017108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017108: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8001710C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80017110: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80017114: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80017118: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001711C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017120: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80017124: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017128: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001712C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80017130: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80017134: jr          $ra
    // 0x80017138: lh          $v0, -0x5DF4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5DF4);
    return;
    // 0x80017138: lh          $v0, -0x5DF4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5DF4);
;}
RECOMP_FUNC void func_8001713C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001713C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80017140: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80017144: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80017148: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8001714C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80017150: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017154: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80017158: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001715C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80017160: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80017164: addiu       $t8, $t8, -0x6060
    ctx->r24 = ADD32(ctx->r24, -0X6060);
    // 0x80017168: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001716C: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80017170: lh          $v0, 0x26C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X26C);
    // 0x80017174: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80017178: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001717C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80017180: beq         $a1, $v0, L_80017194
    if (ctx->r5 == ctx->r2) {
        // 0x80017184: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80017194;
    }
    // 0x80017184: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80017188: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001718C: bne         $v0, $at, L_800171A4
    if (ctx->r2 != ctx->r1) {
        // 0x80017190: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_800171A4;
    }
    // 0x80017190: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_80017194:
    // 0x80017194: jal         0x80016ED0
    // 0x80017198: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80016ED0(rdram, ctx);
        goto after_0;
    // 0x80017198: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8001719C: b           L_80017200
    // 0x800171A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80017200;
    // 0x800171A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800171A4:
    // 0x800171A4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800171A8: sb          $a0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r4;
    // 0x800171AC: jal         0x80016ED0
    // 0x800171B0: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    func_80016ED0(rdram, ctx);
        goto after_1;
    // 0x800171B0: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_1:
    // 0x800171B4: jal         0x800305B0
    // 0x800171B8: nop

    osGetTime_recomp(rdram, ctx);
        goto after_2;
    // 0x800171B8: nop

    after_2:
    // 0x800171BC: lw          $t9, 0x20C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20C);
    // 0x800171C0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800171C4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800171C8: beql        $t9, $zero, L_800171E8
    if (ctx->r25 == 0) {
        // 0x800171CC: sw          $zero, 0x1F8($s0)
        MEM_W(0X1F8, ctx->r16) = 0;
            goto L_800171E8;
    }
    goto skip_0;
    // 0x800171CC: sw          $zero, 0x1F8($s0)
    MEM_W(0X1F8, ctx->r16) = 0;
    skip_0:
L_800171D0:
    // 0x800171D0: jal         0x800305B0
    // 0x800171D4: nop

    osGetTime_recomp(rdram, ctx);
        goto after_3;
    // 0x800171D4: nop

    after_3:
    // 0x800171D8: lw          $t0, 0x20C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20C);
    // 0x800171DC: bne         $t0, $zero, L_800171D0
    if (ctx->r8 != 0) {
        // 0x800171E0: nop
    
            goto L_800171D0;
    }
    // 0x800171E0: nop

    // 0x800171E4: sw          $zero, 0x1F8($s0)
    MEM_W(0X1F8, ctx->r16) = 0;
L_800171E8:
    // 0x800171E8: jal         0x80016DF8
    // 0x800171EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_80016DF8(rdram, ctx);
        goto after_4;
    // 0x800171EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x800171F0: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x800171F4: jal         0x80016ED0
    // 0x800171F8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80016ED0(rdram, ctx);
        goto after_5;
    // 0x800171F8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x800171FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80017200:
    // 0x80017200: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80017204: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80017208: jr          $ra
    return;
;}
RECOMP_FUNC void func_80017210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017210: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80017214: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80017218: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001721C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80017220: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80017224: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017228: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001722C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017230: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80017234: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80017238: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001723C: jr          $ra
    // 0x80017240: lw          $v0, -0x5E54($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5E54);
    return;
    // 0x80017240: lw          $v0, -0x5E54($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5E54);
;}
RECOMP_FUNC void func_80017244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017244: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80017248: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001724C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80017250: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80017254: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80017258: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001725C: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x80017260: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
L_80017264:
    // 0x80017264: jal         0x80016ED0
    // 0x80017268: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80016ED0(rdram, ctx);
        goto after_0;
    // 0x80017268: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_0:
    // 0x8001726C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80017270: bnel        $s0, $s2, L_80017264
    if (ctx->r16 != ctx->r18) {
        // 0x80017274: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_80017264;
    }
    goto skip_0;
    // 0x80017274: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    skip_0:
    // 0x80017278: jal         0x800305B0
    // 0x8001727C: nop

    osGetTime_recomp(rdram, ctx);
        goto after_1;
    // 0x8001727C: nop

    after_1:
    // 0x80017280: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80017284: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80017288: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001728C:
    // 0x8001728C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80017290:
    // 0x80017290: jal         0x80017210
    // 0x80017294: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80017210(rdram, ctx);
        goto after_2;
    // 0x80017294: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x80017298: beq         $v0, $zero, L_800172A4
    if (ctx->r2 == 0) {
        // 0x8001729C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800172A4;
    }
    // 0x8001729C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800172A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800172A4:
    // 0x800172A4: bne         $s0, $s2, L_80017290
    if (ctx->r16 != ctx->r18) {
        // 0x800172A8: nop
    
            goto L_80017290;
    }
    // 0x800172A8: nop

    // 0x800172AC: jal         0x800305B0
    // 0x800172B0: nop

    osGetTime_recomp(rdram, ctx);
        goto after_3;
    // 0x800172B0: nop

    after_3:
    // 0x800172B4: bnel        $s1, $zero, L_8001728C
    if (ctx->r17 != 0) {
        // 0x800172B8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8001728C;
    }
    goto skip_1;
    // 0x800172B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    skip_1:
    // 0x800172BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800172C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800172C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800172C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800172CC: jr          $ra
    // 0x800172D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800172D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800172D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800172D4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800172D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800172DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800172E0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800172E4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800172E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800172EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800172F0: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x800172F4: addiu       $t8, $t8, -0x6060
    ctx->r24 = ADD32(ctx->r24, -0X6060);
    // 0x800172F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800172FC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80017300: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80017304: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x80017308: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x8001730C: sh          $a1, 0x26E($v0)
    MEM_H(0X26E, ctx->r2) = ctx->r5;
    // 0x80017310: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x80017314: sb          $v1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r3;
    // 0x80017318: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8001731C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80017320: lhu         $t0, -0xA00($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0XA00);
    // 0x80017324: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80017328: jr          $ra
    // 0x8001732C: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    return;
    // 0x8001732C: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_80017330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017330: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80017334: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80017338: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001733C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80017340: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80017344: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017348: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001734C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80017350: addiu       $t8, $t8, -0x6060
    ctx->r24 = ADD32(ctx->r24, -0X6060);
    // 0x80017354: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017358: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8001735C: lh          $a1, 0x26C($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X26C);
    // 0x80017360: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80017364: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80017368: beq         $a1, $at, L_8001737C
    if (ctx->r5 == ctx->r1) {
        // 0x8001736C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_8001737C;
    }
    // 0x8001736C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80017370: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80017374: bne         $v0, $at, L_80017390
    if (ctx->r2 != ctx->r1) {
            // 0x80017378: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    func_80017390(rdram, ctx);
    return;
    }
    // 0x80017378: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_8001737C:
    // 0x8001737C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80017380: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80017384: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80017388: jr          $ra
    // 0x8001738C: sh          $a1, 0x26E($v1)
    MEM_H(0X26E, ctx->r3) = ctx->r5;
    return;
    // 0x8001738C: sh          $a1, 0x26E($v1)
    MEM_H(0X26E, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void func_80017390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80017394: sh          $t9, 0x26E($v1)
    MEM_H(0X26E, ctx->r3) = ctx->r25;
    // 0x80017398: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8001739C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x800173A0: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x800173A4: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x800173A8: jr          $ra
    // 0x800173AC: nop

    return;
    // 0x800173AC: nop

;}
RECOMP_FUNC void func_800173B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800173B0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800173B4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800173B8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800173BC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800173C0: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x800173C4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800173C8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800173CC: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x800173D0: addiu       $t0, $t0, -0x6060
    ctx->r8 = ADD32(ctx->r8, -0X6060);
    // 0x800173D4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800173D8: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x800173DC: lh          $t1, 0x26C($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X26C);
    // 0x800173E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800173E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800173E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800173EC: sb          $v1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r3;
    // 0x800173F0: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x800173F4: sb          $v1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r3;
    // 0x800173F8: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    // 0x800173FC: jr          $ra
    // 0x80017400: sh          $t1, 0x26E($v0)
    MEM_H(0X26E, ctx->r2) = ctx->r9;
    return;
    // 0x80017400: sh          $t1, 0x26E($v0)
    MEM_H(0X26E, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_80017404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017404: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80017408: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001740C: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x80017410: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80017414: addiu       $t0, $t0, -0x6060
    ctx->r8 = ADD32(ctx->r8, -0X6060);
    // 0x80017418: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8001741C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80017420: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80017424: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80017428: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001742C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80017430: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80017434: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80017438: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8001743C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80017440: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80017444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017448: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    // 0x8001744C: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    // 0x80017450: addiu       $a0, $v0, 0x1E0
    ctx->r4 = ADD32(ctx->r2, 0X1E0);
    // 0x80017454: jal         0x80025ED0
    // 0x80017458: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80025ED0(rdram, ctx);
        goto after_0;
    // 0x80017458: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8001745C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80017460: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x80017464: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x80017468: beq         $v1, $zero, L_80017488
    if (ctx->r3 == 0) {
        // 0x8001746C: nop
    
            goto L_80017488;
    }
    // 0x8001746C: nop

    // 0x80017470: beq         $a1, $zero, L_80017488
    if (ctx->r5 == 0) {
        // 0x80017474: nop
    
            goto L_80017488;
    }
    // 0x80017474: nop

    // 0x80017478: jal         0x800173B0
    // 0x8001747C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_800173B0(rdram, ctx);
        goto after_1;
    // 0x8001747C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_1:
    // 0x80017480: b           L_800174B4
    // 0x80017484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800174B4;
    // 0x80017484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017488:
    // 0x80017488: bnel        $v1, $zero, L_800174B4
    if (ctx->r3 != 0) {
        // 0x8001748C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800174B4;
    }
    goto skip_0;
    // 0x8001748C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80017490: bnel        $a1, $zero, L_800174B4
    if (ctx->r5 != 0) {
        // 0x80017494: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800174B4;
    }
    goto skip_1;
    // 0x80017494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80017498: jal         0x80017778
    // 0x8001749C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_80017778(rdram, ctx);
        goto after_2;
    // 0x8001749C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_2:
    // 0x800174A0: bnel        $v0, $zero, L_800174B4
    if (ctx->r2 != 0) {
        // 0x800174A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800174B4;
    }
    goto skip_2;
    // 0x800174A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800174A8: jal         0x80017330
    // 0x800174AC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_80017330(rdram, ctx);
        goto after_3;
    // 0x800174AC: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_3:
    // 0x800174B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800174B4:
    // 0x800174B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800174B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800174C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800174C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800174C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800174C8: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x800174CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800174D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800174D4: jal         0x80017778
    // 0x800174D8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80017778(rdram, ctx);
        goto after_0;
    // 0x800174D8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800174DC: bne         $v0, $zero, L_80017524
    if (ctx->r2 != 0) {
        // 0x800174E0: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_80017524;
    }
    // 0x800174E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800174E4: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x800174E8: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x800174EC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800174F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800174F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800174F8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800174FC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80017500: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017504: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80017508: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001750C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80017510: lbu         $t8, -0x605E($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X605E);
    // 0x80017514: bnel        $t8, $zero, L_80017528
    if (ctx->r24 != 0) {
        // 0x80017518: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80017528;
    }
    goto skip_0;
    // 0x80017518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8001751C: jal         0x80017D74
    // 0x80017520: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80017D74(rdram, ctx);
        goto after_1;
    // 0x80017520: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
L_80017524:
    // 0x80017524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017528:
    // 0x80017528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001752C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80017534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001753C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80017540: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80017544: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80017548: jal         0x80017778
    // 0x8001754C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    func_80017778(rdram, ctx);
        goto after_0;
    // 0x8001754C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    after_0:
    // 0x80017550: bne         $v0, $zero, L_80017590
    if (ctx->r2 != 0) {
        // 0x80017554: lbu         $t6, 0x1B($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X1B);
            goto L_80017590;
    }
    // 0x80017554: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x80017558: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001755C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80017560: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80017564: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80017568: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001756C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80017570: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017574: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x80017578: addiu       $t9, $t9, -0x6060
    ctx->r25 = ADD32(ctx->r25, -0X6060);
    // 0x8001757C: addiu       $t8, $t7, 0x1E0
    ctx->r24 = ADD32(ctx->r15, 0X1E0);
    // 0x80017580: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80017584: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80017588: jal         0x80025FE0
    // 0x8001758C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_80025FE0(rdram, ctx);
        goto after_1;
    // 0x8001758C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
L_80017590:
    // 0x80017590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017598: jr          $ra
    return;
;}
RECOMP_FUNC void func_800175A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800175A0: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x800175A4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800175A8: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x800175AC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800175B0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x800175B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800175B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800175BC: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x800175C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800175C4: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x800175C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800175CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800175D0: addiu       $t8, $t8, -0x6060
    ctx->r24 = ADD32(ctx->r24, -0X6060);
    // 0x800175D4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800175D8: jal         0x80025668
    // 0x800175DC: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_80025668(rdram, ctx);
        goto after_0;
    // 0x800175DC: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x800175E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800175E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800175E8: jr          $ra
    // 0x800175EC: nop

    return;
    // 0x800175EC: nop

;}
RECOMP_FUNC void func_800175F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800175F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800175F4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800175F8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800175FC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80017600: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80017604: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80017608: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001760C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80017610: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80017614: jal         0x800E96B0
    // 0x80017618: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800E96B0(rdram, ctx);
        goto after_0;
    // 0x80017618: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001761C: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x80017620: addiu       $s0, $s0, -0x6060
    ctx->r16 = ADD32(ctx->r16, -0X6060);
    // 0x80017624: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80017628: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8001762C: addiu       $s5, $zero, 0x6
    ctx->r21 = ADD32(0, 0X6);
    // 0x80017630: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x80017634: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80017638:
    // 0x80017638: lw          $v0, 0x20C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20C);
    // 0x8001763C: beql        $v0, $zero, L_800176B8
    if (ctx->r2 == 0) {
        // 0x80017640: lbu         $t1, 0x2($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X2);
            goto L_800176B8;
    }
    goto skip_0;
    // 0x80017640: lbu         $t1, 0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2);
    skip_0:
    // 0x80017644: beql        $v0, $s3, L_80017660
    if (ctx->r2 == ctx->r19) {
        // 0x80017648: lbu         $t6, 0x2($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X2);
            goto L_80017660;
    }
    goto skip_1;
    // 0x80017648: lbu         $t6, 0x2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2);
    skip_1:
    // 0x8001764C: beql        $v0, $s4, L_80017734
    if (ctx->r2 == ctx->r20) {
        // 0x80017650: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80017734;
    }
    goto skip_2;
    // 0x80017650: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x80017654: b           L_80017734
    // 0x80017658: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80017734;
    // 0x80017658: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8001765C: lbu         $t6, 0x2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2);
L_80017660:
    // 0x80017660: beql        $t6, $zero, L_800176A0
    if (ctx->r14 == 0) {
        // 0x80017664: sb          $zero, 0x5($s0)
        MEM_B(0X5, ctx->r16) = 0;
            goto L_800176A0;
    }
    goto skip_3;
    // 0x80017664: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    skip_3:
    // 0x80017668: lbu         $t7, 0x5($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5);
    // 0x8001766C: bnel        $t7, $zero, L_800176A0
    if (ctx->r15 != 0) {
        // 0x80017670: sb          $zero, 0x5($s0)
        MEM_B(0X5, ctx->r16) = 0;
            goto L_800176A0;
    }
    goto skip_4;
    // 0x80017670: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    skip_4:
    // 0x80017674: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x80017678: bnel        $t8, $zero, L_800176A0
    if (ctx->r24 != 0) {
        // 0x8001767C: sb          $zero, 0x5($s0)
        MEM_B(0X5, ctx->r16) = 0;
            goto L_800176A0;
    }
    goto skip_5;
    // 0x8001767C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    skip_5:
    // 0x80017680: jal         0x80024E90
    // 0x80017684: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    func_80024E90(rdram, ctx);
        goto after_1;
    // 0x80017684: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    after_1:
    // 0x80017688: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x8001768C: beql        $t9, $zero, L_800176A4
    if (ctx->r25 == 0) {
        // 0x80017690: lbu         $v0, 0x4($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4);
            goto L_800176A4;
    }
    goto skip_6;
    // 0x80017690: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    skip_6:
    // 0x80017694: b           L_800176A0
    // 0x80017698: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
        goto L_800176A0;
    // 0x80017698: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8001769C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_800176A0:
    // 0x800176A0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
L_800176A4:
    // 0x800176A4: blez        $v0, L_80017730
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800176A8: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_80017730;
    }
    // 0x800176A8: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x800176AC: b           L_80017730
    // 0x800176B0: sb          $t0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r8;
        goto L_80017730;
    // 0x800176B0: sb          $t0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r8;
    // 0x800176B4: lbu         $t1, 0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2);
L_800176B8:
    // 0x800176B8: beql        $t1, $zero, L_80017724
    if (ctx->r9 == 0) {
        // 0x800176BC: lbu         $v0, 0x4($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4);
            goto L_80017724;
    }
    goto skip_7;
    // 0x800176BC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    skip_7:
    // 0x800176C0: lbu         $t2, 0x4($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X4);
    // 0x800176C4: bnel        $t2, $zero, L_80017724
    if (ctx->r10 != 0) {
        // 0x800176C8: lbu         $v0, 0x4($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4);
            goto L_80017724;
    }
    goto skip_8;
    // 0x800176C8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    skip_8:
    // 0x800176CC: lw          $t3, 0x238($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X238);
    // 0x800176D0: bnel        $t3, $zero, L_80017724
    if (ctx->r11 != 0) {
        // 0x800176D4: lbu         $v0, 0x4($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4);
            goto L_80017724;
    }
    goto skip_9;
    // 0x800176D4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    skip_9:
    // 0x800176D8: lbu         $t4, 0x3($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X3);
    // 0x800176DC: andi        $s1, $s2, 0xFF
    ctx->r17 = ctx->r18 & 0XFF;
    // 0x800176E0: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x800176E4: beq         $t4, $zero, L_80017700
    if (ctx->r12 == 0) {
        // 0x800176E8: nop
    
            goto L_80017700;
    }
    // 0x800176E8: nop

    // 0x800176EC: jal         0x80025F20
    // 0x800176F0: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    func_80025F20(rdram, ctx);
        goto after_2;
    // 0x800176F0: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    after_2:
    // 0x800176F4: sb          $s6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r22;
    // 0x800176F8: b           L_80017708
    // 0x800176FC: andi        $s1, $s2, 0xFF
    ctx->r17 = ctx->r18 & 0XFF;
        goto L_80017708;
    // 0x800176FC: andi        $s1, $s2, 0xFF
    ctx->r17 = ctx->r18 & 0XFF;
L_80017700:
    // 0x80017700: jal         0x8001713C
    // 0x80017704: lh          $a1, 0x26E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X26E);
    func_8001713C(rdram, ctx);
        goto after_3;
    // 0x80017704: lh          $a1, 0x26E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X26E);
    after_3:
L_80017708:
    // 0x80017708: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8001770C: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x80017710: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80017714: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x80017718: jal         0x80017404
    // 0x8001771C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    func_80017404(rdram, ctx);
        goto after_4;
    // 0x8001771C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    after_4:
    // 0x80017720: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
L_80017724:
    // 0x80017724: blez        $v0, L_80017730
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80017728: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80017730;
    }
    // 0x80017728: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8001772C: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
L_80017730:
    // 0x80017730: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80017734:
    // 0x80017734: bne         $s2, $s5, L_80017638
    if (ctx->r18 != ctx->r21) {
        // 0x80017738: addiu       $s0, $s0, 0x274
        ctx->r16 = ADD32(ctx->r16, 0X274);
            goto L_80017638;
    }
    // 0x80017738: addiu       $s0, $s0, 0x274
    ctx->r16 = ADD32(ctx->r16, 0X274);
    // 0x8001773C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80017740: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80017744: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80017748: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001774C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80017750: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80017754: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80017758: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001775C: jr          $ra
    // 0x80017760: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80017760: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80017764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017764: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80017768: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x8001776C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80017770: jr          $ra
    // 0x80017774: lhu         $v0, -0xA00($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0XA00);
    return;
    // 0x80017774: lhu         $v0, -0xA00($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0XA00);
;}
RECOMP_FUNC void func_80017778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017778: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001777C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80017780: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80017784: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80017788: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001778C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80017790: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80017794: addiu       $t7, $t7, -0x6060
    ctx->r15 = ADD32(ctx->r15, -0X6060);
    // 0x80017798: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001779C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800177A0: lw          $v0, 0x20C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20C);
    // 0x800177A4: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800177A8: beq         $t8, $zero, L_800177BC
    if (ctx->r24 == 0) {
        // 0x800177AC: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_800177BC;
    }
    // 0x800177AC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x800177B0: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x800177B4: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800177B8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_800177BC:
    // 0x800177BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800177C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800177C4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800177C8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800177CC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800177D0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800177D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800177D8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800177DC: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x800177E0: addiu       $t7, $t7, -0x6060
    ctx->r15 = ADD32(ctx->r15, -0X6060);
    // 0x800177E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800177E8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800177EC: lw          $v0, 0x20C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20C);
    // 0x800177F0: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800177F4: beq         $t8, $zero, L_80017808
    if (ctx->r24 == 0) {
        // 0x800177F8: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_80017808;
    }
    // 0x800177F8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x800177FC: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x80017800: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x80017804: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80017808:
    // 0x80017808: jr          $ra
    return;
;}
RECOMP_FUNC void func_80017810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017810: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80017814: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80017818: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8001781C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80017820: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80017824: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80017828: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001782C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80017830: addiu       $t8, $t8, -0x6060
    ctx->r24 = ADD32(ctx->r24, -0X6060);
    // 0x80017834: addiu       $t7, $t6, 0x1E0
    ctx->r15 = ADD32(ctx->r14, 0X1E0);
    // 0x80017838: jr          $ra
    // 0x8001783C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x8001783C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void func_80017840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017840: jr          $ra
    return;
;}
RECOMP_FUNC void func_80017850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017850: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80017854: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80017858: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001785C: jr          $ra
    // 0x80017860: sb          $t6, -0x5118($at)
    MEM_B(-0X5118, ctx->r1) = ctx->r14;
    return;
    // 0x80017860: sb          $t6, -0x5118($at)
    MEM_B(-0X5118, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80017864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017864: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80017868: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001786C: addiu       $a0, $a0, -0x5160
    ctx->r4 = ADD32(ctx->r4, -0X5160);
    // 0x80017870: addiu       $v1, $v1, -0x5180
    ctx->r3 = ADD32(ctx->r3, -0X5180);
    // 0x80017874: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80017878:
    // 0x80017878: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001787C: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80017880: bne         $at, $zero, L_80017878
    if (ctx->r1 != 0) {
        // 0x80017884: sb          $v0, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r2;
            goto L_80017878;
    }
    // 0x80017884: sb          $v0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r2;
    // 0x80017888: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001788C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80017890: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80017894: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80017898: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8001789C: addiu       $t8, $t8, -0x5118
    ctx->r24 = ADD32(ctx->r24, -0X5118);
    // 0x800178A0: sb          $t7, -0x5117($at)
    MEM_B(-0X5117, ctx->r1) = ctx->r15;
    // 0x800178A4: sb          $t6, -0x5118($at)
    MEM_B(-0X5118, ctx->r1) = ctx->r14;
    // 0x800178A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800178AC: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x800178B0: sb          $a0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r4;
    // 0x800178B4: sb          $a0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r4;
    // 0x800178B8: sb          $a0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r4;
    // 0x800178BC: jr          $ra
    // 0x800178C0: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    return;
    // 0x800178C0: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
;}
RECOMP_FUNC void func_800178C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800178C4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800178C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800178CC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800178D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800178D4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800178D8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800178DC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800178E0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800178E4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800178E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800178EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800178F0: jal         0x80017810
    // 0x800178F4: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    func_80017810(rdram, ctx);
        goto after_0;
    // 0x800178F4: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    after_0:
    // 0x800178F8: bne         $v0, $zero, L_80017908
    if (ctx->r2 != 0) {
        // 0x800178FC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80017908;
    }
    // 0x800178FC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80017900: b           L_80017D4C
    // 0x80017904: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80017D4C;
    // 0x80017904: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80017908:
    // 0x80017908: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x8001790C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80017910: addiu       $t8, $t8, -0x5118
    ctx->r24 = ADD32(ctx->r24, -0X5118);
    // 0x80017914: beq         $t6, $zero, L_80017C84
    if (ctx->r14 == 0) {
        // 0x80017918: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80017C84;
    }
    // 0x80017918: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001791C: jal         0x800260B0
    // 0x80017920: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800260B0(rdram, ctx);
        goto after_1;
    // 0x80017920: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80017924: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
    // 0x80017928: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8001792C: lwc1        $f6, 0x1720($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1720);
    // 0x80017930: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80017934: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80017938: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001793C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80017940: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80017944: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80017948: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8001794C: bgez        $t8, L_80017960
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80017950: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80017960;
    }
    // 0x80017950: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80017954: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80017958: nop

    // 0x8001795C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80017960:
    // 0x80017960: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80017964: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80017968: bgez        $v0, L_8001797C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8001796C: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8001797C;
    }
    // 0x8001796C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80017970: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80017974: nop

    // 0x80017978: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_8001797C:
    // 0x8001797C: div.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80017980: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80017984: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80017988: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8001798C: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x80017990: nop

    // 0x80017994: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80017998: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8001799C: nop

    // 0x800179A0: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x800179A4: beql        $v1, $zero, L_800179F4
    if (ctx->r3 == 0) {
        // 0x800179A8: mfc1        $v1, $f16
        ctx->r3 = (int32_t)ctx->f16.u32l;
            goto L_800179F4;
    }
    goto skip_0;
    // 0x800179A8: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x800179AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800179B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800179B4: sub.s       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800179B8: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x800179BC: nop

    // 0x800179C0: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800179C4: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x800179C8: nop

    // 0x800179CC: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x800179D0: bne         $v1, $zero, L_800179E8
    if (ctx->r3 != 0) {
        // 0x800179D4: nop
    
            goto L_800179E8;
    }
    // 0x800179D4: nop

    // 0x800179D8: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x800179DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800179E0: b           L_80017A00
    // 0x800179E4: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_80017A00;
    // 0x800179E4: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_800179E8:
    // 0x800179E8: b           L_80017A00
    // 0x800179EC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_80017A00;
    // 0x800179EC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800179F0: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
L_800179F4:
    // 0x800179F4: nop

    // 0x800179F8: bltz        $v1, L_800179E8
    if (SIGNED(ctx->r3) < 0) {
        // 0x800179FC: nop
    
            goto L_800179E8;
    }
    // 0x800179FC: nop

L_80017A00:
    // 0x80017A00: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80017A04: bnel        $v1, $zero, L_80017AD8
    if (ctx->r3 != 0) {
        // 0x80017A08: lw          $v1, 0x4($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X4);
            goto L_80017AD8;
    }
    goto skip_1;
    // 0x80017A08: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    skip_1:
    // 0x80017A0C: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80017A10: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80017A14: addiu       $t1, $t1, -0x5118
    ctx->r9 = ADD32(ctx->r9, -0X5118);
    // 0x80017A18: beq         $v1, $zero, L_80017ABC
    if (ctx->r3 == 0) {
        // 0x80017A1C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80017ABC;
    }
    // 0x80017A1C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80017A20: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x80017A24: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x80017A28: addiu       $s3, $s3, -0x5180
    ctx->r19 = ADD32(ctx->r19, -0X5180);
    // 0x80017A2C: addiu       $s6, $s6, -0x5130
    ctx->r22 = ADD32(ctx->r22, -0X5130);
    // 0x80017A30: addu        $s4, $s5, $t1
    ctx->r20 = ADD32(ctx->r21, ctx->r9);
    // 0x80017A34: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
L_80017A38:
    // 0x80017A38: sll         $t5, $s5, 2
    ctx->r13 = S32(ctx->r21 << 2);
    // 0x80017A3C: addu        $t6, $s6, $t5
    ctx->r14 = ADD32(ctx->r22, ctx->r13);
    // 0x80017A40: bne         $t2, $zero, L_80017A5C
    if (ctx->r10 != 0) {
        // 0x80017A44: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80017A5C;
    }
    // 0x80017A44: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80017A48: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80017A4C: sllv        $v0, $t3, $s0
    ctx->r2 = S32(ctx->r11 << (ctx->r16 & 31));
    // 0x80017A50: and         $t4, $s2, $v0
    ctx->r12 = ctx->r18 & ctx->r2;
    // 0x80017A54: and         $t8, $t7, $v0
    ctx->r24 = ctx->r15 & ctx->r2;
    // 0x80017A58: beq         $t4, $t8, L_80017AAC
    if (ctx->r12 == ctx->r24) {
        // 0x80017A5C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80017AAC;
    }
L_80017A5C:
    // 0x80017A5C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80017A60: sllv        $t1, $t9, $s0
    ctx->r9 = S32(ctx->r25 << (ctx->r16 & 31));
    // 0x80017A64: and         $t2, $s2, $t1
    ctx->r10 = ctx->r18 & ctx->r9;
    // 0x80017A68: beq         $t2, $zero, L_80017A94
    if (ctx->r10 == 0) {
        // 0x80017A6C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80017A94;
    }
    // 0x80017A6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80017A70: addu        $t3, $s3, $s0
    ctx->r11 = ADD32(ctx->r19, ctx->r16);
    // 0x80017A74: lbu         $a2, 0x0($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X0);
    // 0x80017A78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80017A7C: jal         0x800262DC
    // 0x80017A80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800262DC(rdram, ctx);
        goto after_2;
    // 0x80017A80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80017A84: lw          $t5, 0x18($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X18);
    // 0x80017A88: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80017A8C: b           L_80017AAC
    // 0x80017A90: lw          $v1, 0x4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X4);
        goto L_80017AAC;
    // 0x80017A90: lw          $v1, 0x4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X4);
L_80017A94:
    // 0x80017A94: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80017A98: jal         0x800262DC
    // 0x80017A9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800262DC(rdram, ctx);
        goto after_3;
    // 0x80017A9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80017AA0: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
    // 0x80017AA4: lw          $t4, 0x0($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X0);
    // 0x80017AA8: lw          $v1, 0x4($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X4);
L_80017AAC:
    // 0x80017AAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80017AB0: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x80017AB4: bnel        $at, $zero, L_80017A38
    if (ctx->r1 != 0) {
        // 0x80017AB8: lbu         $t2, 0x0($s4)
        ctx->r10 = MEM_BU(ctx->r20, 0X0);
            goto L_80017A38;
    }
    goto skip_2;
    // 0x80017AB8: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    skip_2:
L_80017ABC:
    // 0x80017ABC: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x80017AC0: addiu       $s6, $s6, -0x5130
    ctx->r22 = ADD32(ctx->r22, -0X5130);
    // 0x80017AC4: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x80017AC8: addu        $t9, $s6, $t8
    ctx->r25 = ADD32(ctx->r22, ctx->r24);
    // 0x80017ACC: b           L_80017C34
    // 0x80017AD0: sw          $s2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r18;
        goto L_80017C34;
    // 0x80017AD0: sw          $s2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r18;
    // 0x80017AD4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
L_80017AD8:
    // 0x80017AD8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80017ADC: beq         $v1, $zero, L_80017C20
    if (ctx->r3 == 0) {
        // 0x80017AE0: lui         $t1, 0x8008
        ctx->r9 = S32(0X8008 << 16);
            goto L_80017C20;
    }
    // 0x80017AE0: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80017AE4: addiu       $t1, $t1, -0x5118
    ctx->r9 = ADD32(ctx->r9, -0X5118);
    // 0x80017AE8: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x80017AEC: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x80017AF0: addiu       $s3, $s3, -0x5180
    ctx->r19 = ADD32(ctx->r19, -0X5180);
    // 0x80017AF4: addiu       $s6, $s6, -0x5130
    ctx->r22 = ADD32(ctx->r22, -0X5130);
    // 0x80017AF8: addu        $s4, $s5, $t1
    ctx->r20 = ADD32(ctx->r21, ctx->r9);
    // 0x80017AFC: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
L_80017B00:
    // 0x80017B00: sll         $t6, $s5, 2
    ctx->r14 = S32(ctx->r21 << 2);
    // 0x80017B04: addu        $t7, $s6, $t6
    ctx->r15 = ADD32(ctx->r22, ctx->r14);
    // 0x80017B08: bne         $t2, $zero, L_80017B24
    if (ctx->r10 != 0) {
        // 0x80017B0C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80017B24;
    }
    // 0x80017B0C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80017B10: lw          $t4, 0x0($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X0);
    // 0x80017B14: sllv        $v0, $t3, $s0
    ctx->r2 = S32(ctx->r11 << (ctx->r16 & 31));
    // 0x80017B18: and         $t5, $s2, $v0
    ctx->r13 = ctx->r18 & ctx->r2;
    // 0x80017B1C: and         $t8, $t4, $v0
    ctx->r24 = ctx->r12 & ctx->r2;
    // 0x80017B20: beq         $t5, $t8, L_80017C10
    if (ctx->r13 == ctx->r24) {
        // 0x80017B24: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80017C10;
    }
L_80017B24:
    // 0x80017B24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80017B28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80017B2C: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80017B30: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80017B34: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x80017B38: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80017B3C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80017B40: sllv        $t2, $t1, $s0
    ctx->r10 = S32(ctx->r9 << (ctx->r16 & 31));
    // 0x80017B44: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x80017B48: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80017B4C: and         $t3, $s2, $t2
    ctx->r11 = ctx->r18 & ctx->r10;
    // 0x80017B50: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80017B54: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80017B58: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80017B5C: addu        $t6, $s3, $s0
    ctx->r14 = ADD32(ctx->r19, ctx->r16);
    // 0x80017B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80017B64: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80017B68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80017B6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80017B70: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80017B74: nop

    // 0x80017B78: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80017B7C: beql        $t0, $zero, L_80017BCC
    if (ctx->r8 == 0) {
        // 0x80017B80: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_80017BCC;
    }
    goto skip_3;
    // 0x80017B80: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x80017B84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80017B88: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80017B8C: sub.s       $f10, $f4, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80017B90: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80017B94: nop

    // 0x80017B98: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80017B9C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80017BA0: nop

    // 0x80017BA4: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80017BA8: bne         $t0, $zero, L_80017BC0
    if (ctx->r8 != 0) {
        // 0x80017BAC: nop
    
            goto L_80017BC0;
    }
    // 0x80017BAC: nop

    // 0x80017BB0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80017BB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80017BB8: b           L_80017BD8
    // 0x80017BBC: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_80017BD8;
    // 0x80017BBC: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_80017BC0:
    // 0x80017BC0: b           L_80017BD8
    // 0x80017BC4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_80017BD8;
    // 0x80017BC4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80017BC8: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_80017BCC:
    // 0x80017BCC: nop

    // 0x80017BD0: bltz        $t0, L_80017BC0
    if (SIGNED(ctx->r8) < 0) {
        // 0x80017BD4: nop
    
            goto L_80017BC0;
    }
    // 0x80017BD4: nop

L_80017BD8:
    // 0x80017BD8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80017BDC: beq         $t3, $zero, L_80017BEC
    if (ctx->r11 == 0) {
        // 0x80017BE0: nop
    
            goto L_80017BEC;
    }
    // 0x80017BE0: nop

    // 0x80017BE4: b           L_80017BEC
    // 0x80017BE8: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
        goto L_80017BEC;
    // 0x80017BE8: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
L_80017BEC:
    // 0x80017BEC: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
    // 0x80017BF0: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x80017BF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80017BF8: addu        $t4, $t7, $v1
    ctx->r12 = ADD32(ctx->r15, ctx->r3);
    // 0x80017BFC: jal         0x80026238
    // 0x80017C00: sb          $t0, 0xB($t4)
    MEM_B(0XB, ctx->r12) = ctx->r8;
    func_80026238(rdram, ctx);
        goto after_4;
    // 0x80017C00: sb          $t0, 0xB($t4)
    MEM_B(0XB, ctx->r12) = ctx->r8;
    after_4:
    // 0x80017C04: lw          $t5, 0x18($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X18);
    // 0x80017C08: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x80017C0C: lw          $v1, 0x4($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X4);
L_80017C10:
    // 0x80017C10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80017C14: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x80017C18: bnel        $at, $zero, L_80017B00
    if (ctx->r1 != 0) {
        // 0x80017C1C: lbu         $t2, 0x0($s4)
        ctx->r10 = MEM_BU(ctx->r20, 0X0);
            goto L_80017B00;
    }
    goto skip_4;
    // 0x80017C1C: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    skip_4:
L_80017C20:
    // 0x80017C20: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x80017C24: addiu       $s6, $s6, -0x5130
    ctx->r22 = ADD32(ctx->r22, -0X5130);
    // 0x80017C28: sll         $t9, $s5, 2
    ctx->r25 = S32(ctx->r21 << 2);
    // 0x80017C2C: addu        $t1, $s6, $t9
    ctx->r9 = ADD32(ctx->r22, ctx->r25);
    // 0x80017C30: sw          $s2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r18;
L_80017C34:
    // 0x80017C34: lw          $t2, 0x18($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X18);
    // 0x80017C38: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80017C3C: addiu       $v0, $v0, -0x5180
    ctx->r2 = ADD32(ctx->r2, -0X5180);
    // 0x80017C40: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80017C44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80017C48: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80017C4C: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x80017C50: beq         $t6, $zero, L_80017C7C
    if (ctx->r14 == 0) {
        // 0x80017C54: nop
    
            goto L_80017C7C;
    }
    // 0x80017C54: nop

    // 0x80017C58: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_80017C5C:
    // 0x80017C5C: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
    // 0x80017C60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80017C64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80017C68: lw          $t4, 0x0($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X0);
    // 0x80017C6C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80017C70: sltu        $at, $s0, $t5
    ctx->r1 = ctx->r16 < ctx->r13 ? 1 : 0;
    // 0x80017C74: bnel        $at, $zero, L_80017C5C
    if (ctx->r1 != 0) {
        // 0x80017C78: sb          $v1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r3;
            goto L_80017C5C;
    }
    goto skip_5;
    // 0x80017C78: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    skip_5:
L_80017C7C:
    // 0x80017C7C: b           L_80017D4C
    // 0x80017C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80017D4C;
    // 0x80017C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80017C84:
    // 0x80017C84: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80017C88: addiu       $t1, $t1, -0x5130
    ctx->r9 = ADD32(ctx->r9, -0X5130);
    // 0x80017C8C: sll         $t9, $s5, 2
    ctx->r25 = S32(ctx->r21 << 2);
    // 0x80017C90: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80017C94: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x80017C98: addiu       $s3, $s3, -0x5180
    ctx->r19 = ADD32(ctx->r19, -0X5180);
    // 0x80017C9C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x80017CA0: addu        $s4, $s5, $t8
    ctx->r20 = ADD32(ctx->r21, ctx->r24);
    // 0x80017CA4: lbu         $t3, 0x0($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X0);
L_80017CA8:
    // 0x80017CA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80017CAC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80017CB0: bne         $t3, $zero, L_80017CD0
    if (ctx->r11 != 0) {
        // 0x80017CB4: sllv        $t1, $t9, $s0
        ctx->r9 = S32(ctx->r25 << (ctx->r16 & 31));
            goto L_80017CD0;
    }
    // 0x80017CB4: sllv        $t1, $t9, $s0
    ctx->r9 = S32(ctx->r25 << (ctx->r16 & 31));
    // 0x80017CB8: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80017CBC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80017CC0: sllv        $v0, $t6, $s0
    ctx->r2 = S32(ctx->r14 << (ctx->r16 & 31));
    // 0x80017CC4: and         $t7, $s2, $v0
    ctx->r15 = ctx->r18 & ctx->r2;
    // 0x80017CC8: and         $t8, $t5, $v0
    ctx->r24 = ctx->r13 & ctx->r2;
    // 0x80017CCC: beq         $t7, $t8, L_80017D04
    if (ctx->r15 == ctx->r24) {
        // 0x80017CD0: and         $t2, $s2, $t1
        ctx->r10 = ctx->r18 & ctx->r9;
            goto L_80017D04;
    }
L_80017CD0:
    // 0x80017CD0: and         $t2, $s2, $t1
    ctx->r10 = ctx->r18 & ctx->r9;
    // 0x80017CD4: beq         $t2, $zero, L_80017CF8
    if (ctx->r10 == 0) {
        // 0x80017CD8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80017CF8;
    }
    // 0x80017CD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80017CDC: addu        $t3, $s3, $s0
    ctx->r11 = ADD32(ctx->r19, ctx->r16);
    // 0x80017CE0: lbu         $a2, 0x0($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X0);
    // 0x80017CE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80017CE8: jal         0x800262DC
    // 0x80017CEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800262DC(rdram, ctx);
        goto after_5;
    // 0x80017CEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80017CF0: b           L_80017D08
    // 0x80017CF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80017D08;
    // 0x80017CF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80017CF8:
    // 0x80017CF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80017CFC: jal         0x800262DC
    // 0x80017D00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800262DC(rdram, ctx);
        goto after_6;
    // 0x80017D00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_80017D04:
    // 0x80017D04: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80017D08:
    // 0x80017D08: slti        $at, $s0, 0x20
    ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x80017D0C: bnel        $at, $zero, L_80017CA8
    if (ctx->r1 != 0) {
        // 0x80017D10: lbu         $t3, 0x0($s4)
        ctx->r11 = MEM_BU(ctx->r20, 0X0);
            goto L_80017CA8;
    }
    goto skip_6;
    // 0x80017D10: lbu         $t3, 0x0($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X0);
    skip_6:
    // 0x80017D14: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80017D18: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80017D1C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80017D20: addiu       $a0, $a0, -0x5160
    ctx->r4 = ADD32(ctx->r4, -0X5160);
    // 0x80017D24: addiu       $v0, $v0, -0x5180
    ctx->r2 = ADD32(ctx->r2, -0X5180);
    // 0x80017D28: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80017D2C: sw          $s2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r18;
L_80017D30:
    // 0x80017D30: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80017D34: sb          $v1, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r3;
    // 0x80017D38: sb          $v1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r3;
    // 0x80017D3C: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x80017D40: bne         $v0, $a0, L_80017D30
    if (ctx->r2 != ctx->r4) {
        // 0x80017D44: sb          $v1, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = ctx->r3;
            goto L_80017D30;
    }
    // 0x80017D44: sb          $v1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r3;
    // 0x80017D48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80017D4C:
    // 0x80017D4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80017D50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80017D54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80017D58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80017D5C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80017D60: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80017D64: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80017D68: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80017D6C: jr          $ra
    // 0x80017D70: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80017D70: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80017D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017D74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80017D78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80017D7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80017D80: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80017D84: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80017D88: jal         0x80017810
    // 0x80017D8C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80017810(rdram, ctx);
        goto after_0;
    // 0x80017D8C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80017D90: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80017D94: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80017D98: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017D9C: beq         $t6, $zero, L_80017E8C
    if (ctx->r14 == 0) {
        // 0x80017DA0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80017E8C;
    }
    // 0x80017DA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80017DA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80017DA8: bne         $s0, $v0, L_80017DD4
    if (ctx->r16 != ctx->r2) {
        // 0x80017DAC: sll         $v1, $a0, 2
        ctx->r3 = S32(ctx->r4 << 2);
            goto L_80017DD4;
    }
    // 0x80017DAC: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x80017DB0: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x80017DB4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80017DB8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80017DBC: sw          $v0, -0x5160($at)
    MEM_W(-0X5160, ctx->r1) = ctx->r2;
    // 0x80017DC0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80017DC4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80017DC8: sw          $zero, -0x5148($at)
    MEM_W(-0X5148, ctx->r1) = 0;
    // 0x80017DCC: b           L_80017EAC
    // 0x80017DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80017EAC;
    // 0x80017DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80017DD4:
    // 0x80017DD4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80017DD8: addiu       $t7, $t7, -0x5160
    ctx->r15 = ADD32(ctx->r15, -0X5160);
    // 0x80017DDC: addu        $a2, $v1, $t7
    ctx->r6 = ADD32(ctx->r3, ctx->r15);
    // 0x80017DE0: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80017DE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80017DE8: beq         $s0, $t8, L_80017E84
    if (ctx->r16 == ctx->r24) {
        // 0x80017DEC: nop
    
            goto L_80017E84;
    }
    // 0x80017DEC: nop

    // 0x80017DF0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x80017DF4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x80017DF8: jal         0x800260B0
    // 0x80017DFC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800260B0(rdram, ctx);
        goto after_1;
    // 0x80017DFC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_1:
    // 0x80017E00: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80017E04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80017E08: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80017E0C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80017E10: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80017E14: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80017E18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80017E1C: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80017E20: bc1f        L_80017E40
    if (!c1cs) {
        // 0x80017E24: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80017E40;
    }
    // 0x80017E24: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80017E28: jal         0x80026330
    // 0x80017E2C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_80026330(rdram, ctx);
        goto after_2;
    // 0x80017E2C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_2:
    // 0x80017E30: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80017E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80017E38: b           L_80017EAC
    // 0x80017E3C: sw          $s0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r16;
        goto L_80017EAC;
    // 0x80017E3C: sw          $s0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r16;
L_80017E40:
    // 0x80017E40: beq         $at, $zero, L_80017E50
    if (ctx->r1 == 0) {
        // 0x80017E44: subu        $a0, $v0, $s0
        ctx->r4 = SUB32(ctx->r2, ctx->r16);
            goto L_80017E50;
    }
    // 0x80017E44: subu        $a0, $v0, $s0
    ctx->r4 = SUB32(ctx->r2, ctx->r16);
    // 0x80017E48: b           L_80017E50
    // 0x80017E4C: subu        $a0, $s0, $v0
    ctx->r4 = SUB32(ctx->r16, ctx->r2);
        goto L_80017E50;
    // 0x80017E4C: subu        $a0, $s0, $v0
    ctx->r4 = SUB32(ctx->r16, ctx->r2);
L_80017E50:
    // 0x80017E50: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80017E54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80017E58: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x80017E5C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80017E60: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80017E64: sw          $s0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r16;
    // 0x80017E68: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80017E6C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80017E70: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80017E74: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80017E78: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80017E7C: nop

    // 0x80017E80: sw          $t0, -0x5148($at)
    MEM_W(-0X5148, ctx->r1) = ctx->r8;
L_80017E84:
    // 0x80017E84: b           L_80017EAC
    // 0x80017E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80017EAC;
    // 0x80017E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80017E8C:
    // 0x80017E8C: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x80017E90: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80017E94: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80017E98: sw          $v0, -0x5160($at)
    MEM_W(-0X5160, ctx->r1) = ctx->r2;
    // 0x80017E9C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80017EA0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80017EA4: sw          $zero, -0x5148($at)
    MEM_W(-0X5148, ctx->r1) = 0;
    // 0x80017EA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80017EAC:
    // 0x80017EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80017EB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80017EB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80017EB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80017EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017EC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80017EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017EC8: jal         0x80017810
    // 0x80017ECC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80017810(rdram, ctx);
        goto after_0;
    // 0x80017ECC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80017ED0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80017ED4: beq         $v0, $zero, L_80017FB0
    if (ctx->r2 == 0) {
        // 0x80017ED8: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_80017FB0;
    }
    // 0x80017ED8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80017EDC: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80017EE0: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80017EE4: addiu       $t7, $t7, -0x5148
    ctx->r15 = ADD32(ctx->r15, -0X5148);
    // 0x80017EE8: beq         $t6, $zero, L_80017FB0
    if (ctx->r14 == 0) {
        // 0x80017EEC: sll         $a1, $a0, 2
        ctx->r5 = S32(ctx->r4 << 2);
            goto L_80017FB0;
    }
    // 0x80017EEC: sll         $a1, $a0, 2
    ctx->r5 = S32(ctx->r4 << 2);
    // 0x80017EF0: addu        $a2, $a1, $t7
    ctx->r6 = ADD32(ctx->r5, ctx->r15);
    // 0x80017EF4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80017EF8: beql        $t8, $zero, L_80017FB4
    if (ctx->r24 == 0) {
        // 0x80017EFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80017FB4;
    }
    goto skip_0;
    // 0x80017EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80017F00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80017F04: jal         0x80017778
    // 0x80017F08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80017778(rdram, ctx);
        goto after_1;
    // 0x80017F08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x80017F0C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80017F10: bne         $v0, $zero, L_80017FB0
    if (ctx->r2 != 0) {
        // 0x80017F14: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_80017FB0;
    }
    // 0x80017F14: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80017F18: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80017F1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80017F20: jal         0x800260B0
    // 0x80017F24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800260B0(rdram, ctx);
        goto after_2;
    // 0x80017F24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x80017F28: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80017F2C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80017F30: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80017F34: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80017F38: lw          $v1, -0x5160($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5160);
    // 0x80017F3C: bnel        $v0, $v1, L_80017F50
    if (ctx->r2 != ctx->r3) {
        // 0x80017F40: lw          $a1, 0x0($a2)
        ctx->r5 = MEM_W(ctx->r6, 0X0);
            goto L_80017F50;
    }
    goto skip_1;
    // 0x80017F40: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    skip_1:
    // 0x80017F44: b           L_80017FB0
    // 0x80017F48: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_80017FB0;
    // 0x80017F48: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80017F4C: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
L_80017F50:
    // 0x80017F50: addu        $a0, $a1, $v0
    ctx->r4 = ADD32(ctx->r5, ctx->r2);
    // 0x80017F54: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80017F58: beq         $at, $zero, L_80017F78
    if (ctx->r1 == 0) {
        // 0x80017F5C: slt         $at, $v1, $a0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80017F78;
    }
    // 0x80017F5C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80017F60: beq         $at, $zero, L_80017F70
    if (ctx->r1 == 0) {
        // 0x80017F64: nop
    
            goto L_80017F70;
    }
    // 0x80017F64: nop

    // 0x80017F68: b           L_80017FA8
    // 0x80017F6C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_80017FA8;
    // 0x80017F6C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80017F70:
    // 0x80017F70: b           L_80017FA8
    // 0x80017F74: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
        goto L_80017FA8;
    // 0x80017F74: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_80017F78:
    // 0x80017F78: subu        $a0, $v0, $a1
    ctx->r4 = SUB32(ctx->r2, ctx->r5);
    // 0x80017F7C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80017F80: beq         $at, $zero, L_80017FA4
    if (ctx->r1 == 0) {
        // 0x80017F84: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_80017FA4;
    }
    // 0x80017F84: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80017F88: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80017F8C: beq         $at, $zero, L_80017F9C
    if (ctx->r1 == 0) {
        // 0x80017F90: nop
    
            goto L_80017F9C;
    }
    // 0x80017F90: nop

    // 0x80017F94: b           L_80017FA8
    // 0x80017F98: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_80017FA8;
    // 0x80017F98: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80017F9C:
    // 0x80017F9C: b           L_80017FA8
    // 0x80017FA0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
        goto L_80017FA8;
    // 0x80017FA0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_80017FA4:
    // 0x80017FA4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_80017FA8:
    // 0x80017FA8: jal         0x80026330
    // 0x80017FAC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80026330(rdram, ctx);
        goto after_3;
    // 0x80017FAC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
L_80017FB0:
    // 0x80017FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017FB4:
    // 0x80017FB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80017FB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80017FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017FC0: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80017FC4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80017FC8: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80017FCC: addiu       $t7, $t7, -0x4D30
    ctx->r15 = ADD32(ctx->r15, -0X4D30);
    // 0x80017FD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80017FD4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80017FD8: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x80017FDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80017FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017FE4: beq         $t8, $zero, L_80018018
    if (ctx->r24 == 0) {
        // 0x80017FE8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80018018;
    }
    // 0x80017FE8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80017FEC: jal         0x80016934
    // 0x80017FF0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80016934(rdram, ctx);
        goto after_0;
    // 0x80017FF0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80017FF4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80017FF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80017FFC: jal         0x80030640
    // 0x80018000: addiu       $a0, $v1, 0x1C
    ctx->r4 = ADD32(ctx->r3, 0X1C);
    __osMotorAccess_recomp(rdram, ctx);
        goto after_1;
    // 0x80018000: addiu       $a0, $v1, 0x1C
    ctx->r4 = ADD32(ctx->r3, 0X1C);
    after_1:
    // 0x80018004: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80018008: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8001800C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80018010: jal         0x80016934
    // 0x80018014: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    func_80016934(rdram, ctx);
        goto after_2;
    // 0x80018014: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    after_2:
L_80018018:
    // 0x80018018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001801C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80018020: jr          $ra
    return;
;}
RECOMP_FUNC void func_80018028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018028: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x8001802C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80018030: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80018034: addiu       $t7, $t7, -0x4D30
    ctx->r15 = ADD32(ctx->r15, -0X4D30);
    // 0x80018038: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001803C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80018040: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x80018044: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80018048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001804C: beq         $t8, $zero, L_80018080
    if (ctx->r24 == 0) {
        // 0x80018050: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80018080;
    }
    // 0x80018050: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80018054: jal         0x80016934
    // 0x80018058: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80016934(rdram, ctx);
        goto after_0;
    // 0x80018058: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8001805C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80018060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80018064: jal         0x80030640
    // 0x80018068: addiu       $a0, $v1, 0x1C
    ctx->r4 = ADD32(ctx->r3, 0X1C);
    __osMotorAccess_recomp(rdram, ctx);
        goto after_1;
    // 0x80018068: addiu       $a0, $v1, 0x1C
    ctx->r4 = ADD32(ctx->r3, 0X1C);
    after_1:
    // 0x8001806C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80018070: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80018074: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80018078: jal         0x80016934
    // 0x8001807C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    func_80016934(rdram, ctx);
        goto after_2;
    // 0x8001807C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    after_2:
L_80018080:
    // 0x80018080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80018088: jr          $ra
    return;
;}
RECOMP_FUNC void func_80018090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018090: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80018094: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80018098: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001809C: addiu       $t7, $t7, -0x4D30
    ctx->r15 = ADD32(ctx->r15, -0X4D30);
    // 0x800180A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800180A4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800180A8: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x800180AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800180B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800180B4: bne         $t8, $zero, L_800180F8
    if (ctx->r24 != 0) {
        // 0x800180B8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800180F8;
    }
    // 0x800180B8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800180BC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800180C0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x800180C4: jal         0x80016934
    // 0x800180C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80016934(rdram, ctx);
        goto after_0;
    // 0x800180C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800180CC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800180D0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800180D4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800180D8: lw          $a0, -0x50F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X50F4);
    // 0x800180DC: jal         0x800308B4
    // 0x800180E0: addiu       $a1, $v1, 0x1C
    ctx->r5 = ADD32(ctx->r3, 0X1C);
    osMotorInit_recomp(rdram, ctx);
        goto after_1;
    // 0x800180E0: addiu       $a1, $v1, 0x1C
    ctx->r5 = ADD32(ctx->r3, 0X1C);
    after_1:
    // 0x800180E4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800180E8: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800180EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800180F0: jal         0x80016934
    // 0x800180F4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    func_80016934(rdram, ctx);
        goto after_2;
    // 0x800180F4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    after_2:
L_800180F8:
    // 0x800180F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800180FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80018100: jr          $ra
    return;
;}
RECOMP_FUNC void func_80018108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018108: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001810C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018110: jal         0x80016800
    // 0x80018114: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80016800(rdram, ctx);
        goto after_0;
    // 0x80018114: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80018118: beql        $v0, $zero, L_80018170
    if (ctx->r2 == 0) {
        // 0x8001811C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80018170;
    }
    goto skip_0;
    // 0x8001811C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80018120: jal         0x80016934
    // 0x80018124: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80016934(rdram, ctx);
        goto after_1;
    // 0x80018124: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x80018128: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8001812C: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80018130: addiu       $t7, $t7, -0x4D30
    ctx->r15 = ADD32(ctx->r15, -0X4D30);
    // 0x80018134: sll         $t6, $a2, 5
    ctx->r14 = S32(ctx->r6 << 5);
    // 0x80018138: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x8001813C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80018140: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80018144: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80018148: lw          $a0, -0x50F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X50F4);
    // 0x8001814C: addiu       $a1, $v1, 0x1C
    ctx->r5 = ADD32(ctx->r3, 0X1C);
    // 0x80018150: jal         0x800308B4
    // 0x80018154: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    osMotorInit_recomp(rdram, ctx);
        goto after_2;
    // 0x80018154: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_2:
    // 0x80018158: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8001815C: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80018160: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80018164: jal         0x80016934
    // 0x80018168: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    func_80016934(rdram, ctx);
        goto after_3;
    // 0x80018168: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    after_3:
    // 0x8001816C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018170:
    // 0x80018170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80018174: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001817C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001817C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80018180: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x80018184: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80018188: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8001818C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80018190: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80018194: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80018198: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x8001819C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800181A0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800181A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800181A8: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x800181AC: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x800181B0: lui         $s5, 0x8008
    ctx->r21 = S32(0X8008 << 16);
    // 0x800181B4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800181B8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800181BC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800181C0: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x800181C4: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x800181C8: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x800181CC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800181D0: addiu       $s5, $s5, -0x5110
    ctx->r21 = ADD32(ctx->r21, -0X5110);
    // 0x800181D4: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x800181D8: addiu       $s4, $zero, 0x3C
    ctx->r20 = ADD32(0, 0X3C);
    // 0x800181DC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800181E0:
    // 0x800181E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800181E4: jal         0x8002E1F0
    // 0x800181E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800181E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800181EC: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x800181F0: lw          $t6, -0x4B20($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4B20);
    // 0x800181F4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800181F8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800181FC: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80018200: bne         $t8, $zero, L_80018218
    if (ctx->r24 != 0) {
        // 0x80018204: sw          $t7, -0x4B20($at)
        MEM_W(-0X4B20, ctx->r1) = ctx->r15;
            goto L_80018218;
    }
    // 0x80018204: sw          $t7, -0x4B20($at)
    MEM_W(-0X4B20, ctx->r1) = ctx->r15;
    // 0x80018208: sra         $a0, $t7, 4
    ctx->r4 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8001820C: andi        $t9, $a0, 0x3
    ctx->r25 = ctx->r4 & 0X3;
    // 0x80018210: jal         0x80018108
    // 0x80018214: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80018108(rdram, ctx);
        goto after_1;
    // 0x80018214: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_1:
L_80018218:
    // 0x80018218: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x8001821C: addiu       $s0, $s0, -0x4D30
    ctx->r16 = ADD32(ctx->r16, -0X4D30);
    // 0x80018220: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80018224:
    // 0x80018224: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80018228: beql        $t0, $zero, L_8001838C
    if (ctx->r8 == 0) {
        // 0x8001822C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8001838C;
    }
    goto skip_0;
    // 0x8001822C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80018230: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x80018234: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x80018238: bnel        $t1, $zero, L_80018284
    if (ctx->r9 != 0) {
        // 0x8001823C: lwc1        $f12, 0x10($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
            goto L_80018284;
    }
    goto skip_1;
    // 0x8001823C: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    skip_1:
    // 0x80018240: lw          $t2, -0x4B20($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4B20);
    // 0x80018244: div         $zero, $t2, $s4
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r20)));
    // 0x80018248: mfhi        $t3
    ctx->r11 = hi;
    // 0x8001824C: bne         $s4, $zero, L_80018258
    if (ctx->r20 != 0) {
        // 0x80018250: nop
    
            goto L_80018258;
    }
    // 0x80018250: nop

    // 0x80018254: break       7
    do_break(2147582548);
L_80018258:
    // 0x80018258: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001825C: bne         $s4, $at, L_80018270
    if (ctx->r20 != ctx->r1) {
        // 0x80018260: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80018270;
    }
    // 0x80018260: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80018264: bne         $t2, $at, L_80018270
    if (ctx->r10 != ctx->r1) {
        // 0x80018268: nop
    
            goto L_80018270;
    }
    // 0x80018268: nop

    // 0x8001826C: break       6
    do_break(2147582572);
L_80018270:
    // 0x80018270: bnel        $t3, $zero, L_80018284
    if (ctx->r11 != 0) {
        // 0x80018274: lwc1        $f12, 0x10($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
            goto L_80018284;
    }
    goto skip_2;
    // 0x80018274: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    skip_2:
    // 0x80018278: jal         0x80018090
    // 0x8001827C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80018090(rdram, ctx);
        goto after_2;
    // 0x8001827C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80018280: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
L_80018284:
    // 0x80018284: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80018288: lw          $s2, 0x8($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X8);
    // 0x8001828C: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x80018290: nop

    // 0x80018294: bc1tl       L_80018348
    if (c1cs) {
        // 0x80018298: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_80018348;
    }
    goto skip_3;
    // 0x80018298: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    skip_3:
    // 0x8001829C: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800182A0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800182A4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x800182A8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x800182AC: jal         0x800F10B4
    // 0x800182B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x800182B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x800182B4: sub.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x800182B8: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x800182BC: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x800182C0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800182C4: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x800182C8: nop

    // 0x800182CC: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800182D0: beq         $at, $zero, L_80018300
    if (ctx->r1 == 0) {
        // 0x800182D4: nop
    
            goto L_80018300;
    }
    // 0x800182D4: nop

    // 0x800182D8: sltu        $v0, $zero, $v1
    ctx->r2 = 0 < ctx->r3 ? 1 : 0;
    // 0x800182DC: bne         $v0, $zero, L_800182F8
    if (ctx->r2 != 0) {
        // 0x800182E0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800182F8;
    }
    // 0x800182E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800182E4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x800182E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800182EC: bc1f        L_800182F8
    if (!c1cs) {
        // 0x800182F0: nop
    
            goto L_800182F8;
    }
    // 0x800182F0: nop

    // 0x800182F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800182F8:
    // 0x800182F8: b           L_80018348
    // 0x800182FC: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
        goto L_80018348;
    // 0x800182FC: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
L_80018300:
    // 0x80018300: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x80018304: lw          $t5, -0x4B20($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4B20);
    // 0x80018308: div         $zero, $t5, $v1
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r3)));
    // 0x8001830C: mfhi        $t6
    ctx->r14 = hi;
    // 0x80018310: sltiu       $t8, $t6, 0x1
    ctx->r24 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x80018314: bne         $v1, $zero, L_80018320
    if (ctx->r3 != 0) {
        // 0x80018318: nop
    
            goto L_80018320;
    }
    // 0x80018318: nop

    // 0x8001831C: break       7
    do_break(2147582748);
L_80018320:
    // 0x80018320: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80018324: bne         $v1, $at, L_80018338
    if (ctx->r3 != ctx->r1) {
        // 0x80018328: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80018338;
    }
    // 0x80018328: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001832C: bne         $t5, $at, L_80018338
    if (ctx->r13 != ctx->r1) {
        // 0x80018330: nop
    
            goto L_80018338;
    }
    // 0x80018330: nop

    // 0x80018334: break       6
    do_break(2147582772);
L_80018338:
    // 0x80018338: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x8001833C: b           L_8001834C
    // 0x80018340: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
        goto L_8001834C;
    // 0x80018340: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80018344: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_80018348:
    // 0x80018348: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_8001834C:
    // 0x8001834C: beql        $s2, $t7, L_8001838C
    if (ctx->r18 == ctx->r15) {
        // 0x80018350: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8001838C;
    }
    goto skip_4;
    // 0x80018350: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x80018354: jal         0x800A9CAC
    // 0x80018358: nop

    func_800A9CAC(rdram, ctx);
        goto after_4;
    // 0x80018358: nop

    after_4:
    // 0x8001835C: bnel        $v0, $zero, L_8001838C
    if (ctx->r2 != 0) {
        // 0x80018360: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8001838C;
    }
    goto skip_5;
    // 0x80018360: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x80018364: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80018368: beq         $t9, $zero, L_80018380
    if (ctx->r25 == 0) {
        // 0x8001836C: nop
    
            goto L_80018380;
    }
    // 0x8001836C: nop

    // 0x80018370: jal         0x80017FC0
    // 0x80018374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80017FC0(rdram, ctx);
        goto after_5;
    // 0x80018374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80018378: b           L_8001838C
    // 0x8001837C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_8001838C;
    // 0x8001837C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80018380:
    // 0x80018380: jal         0x80018028
    // 0x80018384: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80018028(rdram, ctx);
        goto after_6;
    // 0x80018384: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80018388: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8001838C:
    // 0x8001838C: bne         $s1, $s3, L_80018224
    if (ctx->r17 != ctx->r19) {
        // 0x80018390: addiu       $s0, $s0, 0x84
        ctx->r16 = ADD32(ctx->r16, 0X84);
            goto L_80018224;
    }
    // 0x80018390: addiu       $s0, $s0, 0x84
    ctx->r16 = ADD32(ctx->r16, 0X84);
    // 0x80018394: b           L_800181E0
    // 0x80018398: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_800181E0;
    // 0x80018398: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8001839C: nop

    // 0x800183A0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x800183A4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800183A8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800183AC: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x800183B0: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x800183B4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x800183B8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x800183BC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x800183C0: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x800183C4: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x800183C8: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x800183CC: jr          $ra
    // 0x800183D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800183D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800183D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800183D4: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x800183D8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800183DC: lui         $at, 0x4900
    ctx->r1 = S32(0X4900 << 16);
    // 0x800183E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800183E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800183E8: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x800183EC: or          $t8, $a3, $zero
    ctx->r24 = ctx->r7 | 0;
    // 0x800183F0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800183F4: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800183F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800183FC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80018400: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80018404: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80018408: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8001840C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80018410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018414: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80018418: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8001841C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80018420: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80018424: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80018428: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8001842C: jal         0x800187B4
    // 0x80018430: nop

    func_800187B4(rdram, ctx);
        goto after_0;
    // 0x80018430: nop

    after_0:
    // 0x80018434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001843C: jr          $ra
    // 0x80018440: nop

    return;
    // 0x80018440: nop

;}
RECOMP_FUNC void func_80018444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001844C: jal         0x800D8FF8
    // 0x80018450: nop

    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80018450: nop

    after_0:
    // 0x80018454: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80018458: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001845C: addiu       $v1, $v1, -0x4B20
    ctx->r3 = ADD32(ctx->r3, -0X4B20);
    // 0x80018460: addiu       $v0, $v0, -0x4D30
    ctx->r2 = ADD32(ctx->r2, -0X4D30);
    // 0x80018464: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
L_80018468:
    // 0x80018468: beql        $t6, $zero, L_8001849C
    if (ctx->r14 == 0) {
        // 0x8001846C: lw          $t7, 0x84($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X84);
            goto L_8001849C;
    }
    goto skip_0;
    // 0x8001846C: lw          $t7, 0x84($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X84);
    skip_0:
    // 0x80018470: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80018474: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80018478: add.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8001847C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80018480: nop

    // 0x80018484: bc1fl       L_80018498
    if (!c1cs) {
        // 0x80018488: swc1        $f12, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
            goto L_80018498;
    }
    goto skip_1;
    // 0x80018488: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    skip_1:
    // 0x8001848C: b           L_80018498
    // 0x80018490: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
        goto L_80018498;
    // 0x80018490: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x80018494: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
L_80018498:
    // 0x80018498: lw          $t7, 0x84($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X84);
L_8001849C:
    // 0x8001849C: beql        $t7, $zero, L_800184D0
    if (ctx->r15 == 0) {
        // 0x800184A0: addiu       $v0, $v0, 0x108
        ctx->r2 = ADD32(ctx->r2, 0X108);
            goto L_800184D0;
    }
    goto skip_2;
    // 0x800184A0: addiu       $v0, $v0, 0x108
    ctx->r2 = ADD32(ctx->r2, 0X108);
    skip_2:
    // 0x800184A4: lwc1        $f6, 0x94($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X94);
    // 0x800184A8: lwc1        $f2, 0x90($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X90);
    // 0x800184AC: add.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x800184B0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800184B4: nop

    // 0x800184B8: bc1fl       L_800184CC
    if (!c1cs) {
        // 0x800184BC: swc1        $f12, 0x94($v0)
        MEM_W(0X94, ctx->r2) = ctx->f12.u32l;
            goto L_800184CC;
    }
    goto skip_3;
    // 0x800184BC: swc1        $f12, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f12.u32l;
    skip_3:
    // 0x800184C0: b           L_800184CC
    // 0x800184C4: swc1        $f2, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f2.u32l;
        goto L_800184CC;
    // 0x800184C4: swc1        $f2, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f2.u32l;
    // 0x800184C8: swc1        $f12, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f12.u32l;
L_800184CC:
    // 0x800184CC: addiu       $v0, $v0, 0x108
    ctx->r2 = ADD32(ctx->r2, 0X108);
L_800184D0:
    // 0x800184D0: bnel        $v0, $v1, L_80018468
    if (ctx->r2 != ctx->r3) {
        // 0x800184D4: lw          $t6, 0x0($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X0);
            goto L_80018468;
    }
    goto skip_4;
    // 0x800184D4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    skip_4:
    // 0x800184D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800184DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800184E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800184E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800184E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800184EC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800184F0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800184F4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800184F8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800184FC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80018500: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80018504: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80018508: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8001850C: jal         0x80016934
    // 0x80018510: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80016934(rdram, ctx);
        goto after_0;
    // 0x80018510: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80018514: jal         0x80016928
    // 0x80018518: nop

    func_80016928(rdram, ctx);
        goto after_1;
    // 0x80018518: nop

    after_1:
    // 0x8001851C: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x80018520: addiu       $s3, $s3, -0x50F4
    ctx->r19 = ADD32(ctx->r19, -0X50F4);
    // 0x80018524: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x80018528: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x8001852C: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x80018530: addiu       $s2, $s2, -0x4D14
    ctx->r18 = ADD32(ctx->r18, -0X4D14);
    // 0x80018534: addiu       $s1, $s1, -0x4D30
    ctx->r17 = ADD32(ctx->r17, -0X4D30);
    // 0x80018538: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001853C: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x80018540: addiu       $s5, $zero, 0xB
    ctx->r21 = ADD32(0, 0XB);
    // 0x80018544: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_80018548:
    // 0x80018548: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8001854C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80018550: jal         0x80030A10
    // 0x80018554: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    osPfsInit_recomp(rdram, ctx);
        goto after_2;
    // 0x80018554: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80018558: beq         $v0, $s4, L_80018568
    if (ctx->r2 == ctx->r20) {
        // 0x8001855C: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80018568;
    }
    // 0x8001855C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80018560: bnel        $v0, $s5, L_80018578
    if (ctx->r2 != ctx->r21) {
        // 0x80018564: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80018578;
    }
    goto skip_0;
    // 0x80018564: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
L_80018568:
    // 0x80018568: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8001856C: jal         0x800308B4
    // 0x80018570: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    osMotorInit_recomp(rdram, ctx);
        goto after_3;
    // 0x80018570: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x80018574: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80018578:
    // 0x80018578: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8001857C: addiu       $s1, $s1, 0x84
    ctx->r17 = ADD32(ctx->r17, 0X84);
    // 0x80018580: addiu       $s2, $s2, 0x84
    ctx->r18 = ADD32(ctx->r18, 0X84);
    // 0x80018584: sw          $v1, -0x84($s1)
    MEM_W(-0X84, ctx->r17) = ctx->r3;
    // 0x80018588: bne         $s0, $s6, L_80018548
    if (ctx->r16 != ctx->r22) {
        // 0x8001858C: sw          $v1, -0x80($s1)
        MEM_W(-0X80, ctx->r17) = ctx->r3;
            goto L_80018548;
    }
    // 0x8001858C: sw          $v1, -0x80($s1)
    MEM_W(-0X80, ctx->r17) = ctx->r3;
    // 0x80018590: jal         0x80016934
    // 0x80018594: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016934(rdram, ctx);
        goto after_4;
    // 0x80018594: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80018598: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x8001859C: addiu       $s0, $s0, -0x5110
    ctx->r16 = ADD32(ctx->r16, -0X5110);
    // 0x800185A0: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800185A4: addiu       $a1, $a1, -0x50F8
    ctx->r5 = ADD32(ctx->r5, -0X50F8);
    // 0x800185A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800185AC: jal         0x8002E070
    // 0x800185B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_5;
    // 0x800185B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x800185B4: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x800185B8: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x800185BC: addiu       $s1, $s1, -0x50F0
    ctx->r17 = ADD32(ctx->r17, -0X50F0);
    // 0x800185C0: addiu       $t6, $t6, -0x4D30
    ctx->r14 = ADD32(ctx->r14, -0X4D30);
    // 0x800185C4: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800185C8: lui         $a3, 0x8002
    ctx->r7 = S32(0X8002 << 16);
    // 0x800185CC: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x800185D0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800185D4: addiu       $a3, $a3, -0x7E84
    ctx->r7 = ADD32(ctx->r7, -0X7E84);
    // 0x800185D8: addiu       $a1, $a1, -0x4F40
    ctx->r5 = ADD32(ctx->r5, -0X4F40);
    // 0x800185DC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800185E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800185E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800185E8: jal         0x8001DCB0
    // 0x800185EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DCB0(rdram, ctx);
        goto after_6;
    // 0x800185EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x800185F0: jal         0x8002E510
    // 0x800185F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_7;
    // 0x800185F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x800185F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800185FC: jal         0x80014F64
    // 0x80018600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80014F64(rdram, ctx);
        goto after_8;
    // 0x80018600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80018604: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80018608: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8001860C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80018610: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80018614: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80018618: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8001861C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80018620: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80018624: jr          $ra
    // 0x80018628: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80018628: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8001862C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001862C: jr          $ra
    // 0x80018630: nop

    return;
    // 0x80018630: nop

;}
RECOMP_FUNC void func_80018634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018634: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80018638: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8001863C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80018640: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80018644: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80018648: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x8001864C: lui         $s4, 0x8008
    ctx->r20 = S32(0X8008 << 16);
    // 0x80018650: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80018654: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80018658: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001865C: addiu       $s4, $s4, -0x50F4
    ctx->r20 = ADD32(ctx->r20, -0X50F4);
    // 0x80018660: addiu       $s1, $s1, -0x4D30
    ctx->r17 = ADD32(ctx->r17, -0X4D30);
    // 0x80018664: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80018668: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
L_8001866C:
    // 0x8001866C: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x80018670: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80018674: addiu       $s2, $s1, 0x1C
    ctx->r18 = ADD32(ctx->r17, 0X1C);
    // 0x80018678: beql        $t6, $zero, L_800186D8
    if (ctx->r14 == 0) {
        // 0x8001867C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_800186D8;
    }
    goto skip_0;
    // 0x8001867C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x80018680: jal         0x80016934
    // 0x80018684: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_80016934(rdram, ctx);
        goto after_0;
    // 0x80018684: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x80018688: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8001868C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80018690: jal         0x800308B4
    // 0x80018694: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    osMotorInit_recomp(rdram, ctx);
        goto after_1;
    // 0x80018694: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_1:
    // 0x80018698: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8001869C: beq         $t7, $zero, L_800186CC
    if (ctx->r15 == 0) {
        // 0x800186A0: sw          $t7, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r15;
            goto L_800186CC;
    }
    // 0x800186A0: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
    // 0x800186A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_800186A8:
    // 0x800186A8: jal         0x80030640
    // 0x800186AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    __osMotorAccess_recomp(rdram, ctx);
        goto after_2;
    // 0x800186AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800186B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800186B4: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x800186B8: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800186BC: beq         $at, $zero, L_800186CC
    if (ctx->r1 == 0) {
        // 0x800186C0: sw          $t9, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r25;
            goto L_800186CC;
    }
    // 0x800186C0: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x800186C4: bnel        $t9, $zero, L_800186A8
    if (ctx->r25 != 0) {
        // 0x800186C8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800186A8;
    }
    goto skip_1;
    // 0x800186C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
L_800186CC:
    // 0x800186CC: jal         0x80016934
    // 0x800186D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016934(rdram, ctx);
        goto after_3;
    // 0x800186D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800186D4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_800186D8:
    // 0x800186D8: bne         $s3, $s5, L_8001866C
    if (ctx->r19 != ctx->r21) {
        // 0x800186DC: addiu       $s1, $s1, 0x84
        ctx->r17 = ADD32(ctx->r17, 0X84);
            goto L_8001866C;
    }
    // 0x800186DC: addiu       $s1, $s1, 0x84
    ctx->r17 = ADD32(ctx->r17, 0X84);
    // 0x800186E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800186E4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800186E8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800186EC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800186F0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800186F4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800186F8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800186FC: jr          $ra
    // 0x80018700: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80018700: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80018704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018704: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80018708: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001870C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80018710: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x80018714: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80018718: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001871C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80018720: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80018724: bc1t        L_800187AC
    if (c1cs) {
        // 0x80018728: lui         $t7, 0x8008
        ctx->r15 = S32(0X8008 << 16);
            goto L_800187AC;
    }
    // 0x80018728: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001872C: addiu       $t7, $t7, -0x4D30
    ctx->r15 = ADD32(ctx->r15, -0X4D30);
    // 0x80018730: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80018734: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80018738: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x8001873C: beq         $t8, $zero, L_800187AC
    if (ctx->r24 == 0) {
        // 0x80018740: nop
    
            goto L_800187AC;
    }
    // 0x80018740: nop

    // 0x80018744: bnel        $t9, $zero, L_80018798
    if (ctx->r25 != 0) {
        // 0x80018748: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80018798;
    }
    goto skip_0;
    // 0x80018748: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x8001874C: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80018750: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80018754: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80018758: lwc1        $f6, 0x1730($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1730);
    // 0x8001875C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80018760: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80018764: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80018768: nop

    // 0x8001876C: bc1fl       L_80018798
    if (!c1cs) {
        // 0x80018770: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80018798;
    }
    goto skip_1;
    // 0x80018770: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_1:
    // 0x80018774: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80018778: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8001877C: add.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x80018780: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80018784: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80018788: nop

    // 0x8001878C: bc1t        L_800187AC
    if (c1cs) {
        // 0x80018790: nop
    
            goto L_800187AC;
    }
    // 0x80018790: nop

    // 0x80018794: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_80018798:
    // 0x80018798: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8001879C: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x800187A0: swc1        $f14, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f14.u32l;
    // 0x800187A4: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x800187A8: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
L_800187AC:
    // 0x800187AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800187B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800187B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800187B8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800187BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800187C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800187C4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800187C8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800187CC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800187D0: jal         0x80018704
    // 0x800187D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80018704(rdram, ctx);
        goto after_0;
    // 0x800187D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800187D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800187DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800187E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800187E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800187E8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800187EC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800187F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800187F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800187F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800187FC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80018800: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80018804: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80018808: jal         0x80018704
    // 0x8001880C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80018704(rdram, ctx);
        goto after_0;
    // 0x8001880C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80018810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80018814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80018818: jr          $ra
    return;
;}
RECOMP_FUNC void func_80018820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018820: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80018824: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80018828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001882C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018830: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80018834: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80018838: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8001883C: jal         0x800187B4
    // 0x80018840: nop

    func_800187B4(rdram, ctx);
        goto after_0;
    // 0x80018840: nop

    after_0:
    // 0x80018844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001884C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80018854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018854: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80018858: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001885C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80018860: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80018864: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80018868: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001886C: lw          $t7, -0x4D30($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4D30);
    // 0x80018870: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80018874: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x80018878: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001887C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80018880: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80018884: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80018888: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8001888C: beq         $t7, $zero, L_80018990
    if (ctx->r15 == 0) {
        // 0x80018890: sw          $a3, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r7;
            goto L_80018990;
    }
    // 0x80018890: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80018894: lui         $at, 0x4900
    ctx->r1 = S32(0X4900 << 16);
    // 0x80018898: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8001889C: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800188A0: lui         $s1, 0x8002
    ctx->r17 = S32(0X8002 << 16);
    // 0x800188A4: mul.s       $f4, $f14, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x800188A8: addiu       $s1, $s1, -0x7C2C
    ctx->r17 = ADD32(ctx->r17, -0X7C2C);
    // 0x800188AC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800188B0: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800188B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800188B8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800188BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800188C0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800188C4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800188C8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800188CC: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x800188D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800188D4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800188D8: jal         0x800C9EAC
    // 0x800188DC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800C9EAC(rdram, ctx);
        goto after_0;
    // 0x800188DC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x800188E0: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800188E4: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800188E8: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800188EC: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x800188F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800188F4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800188F8: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800188FC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80018900: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80018904: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80018908: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x8001890C: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x80018910: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80018914: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x80018918: jal         0x800C9EAC
    // 0x8001891C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800C9EAC(rdram, ctx);
        goto after_1;
    // 0x8001891C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_1:
    // 0x80018920: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80018924: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80018928: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001892C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80018930: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80018934: add.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80018938: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001893C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80018940: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x80018944: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x80018948: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8001894C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x80018950: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80018954: jal         0x800C9EAC
    // 0x80018958: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800C9EAC(rdram, ctx);
        goto after_2;
    // 0x80018958: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_2:
    // 0x8001895C: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80018960: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80018964: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80018968: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8001896C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80018970: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80018974: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80018978: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8001897C: add.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x80018980: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80018984: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80018988: jal         0x800C9EAC
    // 0x8001898C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800C9EAC(rdram, ctx);
        goto after_3;
    // 0x8001898C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_3:
L_80018990:
    // 0x80018990: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80018994: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80018998: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8001899C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800189A0: jr          $ra
    // 0x800189A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800189A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800189A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800189A8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800189AC: sll         $t8, $a0, 5
    ctx->r24 = S32(ctx->r4 << 5);
    // 0x800189B0: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x800189B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800189B8: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x800189BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800189C0: lw          $t9, -0x4D30($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4D30);
    // 0x800189C4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x800189C8: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x800189CC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x800189D0: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x800189D4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800189D8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800189DC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800189E0: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x800189E4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800189E8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800189EC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800189F0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x800189F4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x800189F8: beq         $t9, $zero, L_80018A98
    if (ctx->r25 == 0) {
        // 0x800189FC: sw          $a2, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r6;
            goto L_80018A98;
    }
    // 0x800189FC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80018A00: addiu       $s2, $t7, -0x1
    ctx->r18 = ADD32(ctx->r15, -0X1);
    // 0x80018A04: blez        $s2, L_80018A98
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80018A08: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80018A98;
    }
    // 0x80018A08: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80018A0C: lui         $at, 0x4900
    ctx->r1 = S32(0X4900 << 16);
    // 0x80018A10: lui         $s4, 0x8002
    ctx->r20 = S32(0X8002 << 16);
    // 0x80018A14: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80018A18: addiu       $s4, $s4, -0x7C2C
    ctx->r20 = ADD32(ctx->r20, -0X7C2C);
    // 0x80018A1C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80018A20: lwc1        $f24, 0x60($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X60);
L_80018A24:
    // 0x80018A24: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80018A28: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80018A2C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80018A30: mul.s       $f12, $f4, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80018A34: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80018A38: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80018A3C: mul.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80018A40: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80018A44: mul.s       $f2, $f8, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x80018A48: nop

    // 0x80018A4C: mul.s       $f14, $f10, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x80018A50: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80018A54: mul.s       $f16, $f2, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x80018A58: nop

    // 0x80018A5C: mul.s       $f4, $f14, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x80018A60: nop

    // 0x80018A64: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80018A68: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80018A6C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80018A70: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80018A74: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80018A78: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x80018A7C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80018A80: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80018A84: jal         0x800C9EAC
    // 0x80018A88: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_800C9EAC(rdram, ctx);
        goto after_0;
    // 0x80018A88: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x80018A8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80018A90: bne         $s1, $s2, L_80018A24
    if (ctx->r17 != ctx->r18) {
        // 0x80018A94: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80018A24;
    }
    // 0x80018A94: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80018A98:
    // 0x80018A98: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80018A9C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80018AA0: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80018AA4: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x80018AA8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80018AAC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80018AB0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80018AB4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80018AB8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80018ABC: jr          $ra
    // 0x80018AC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80018AC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80018AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018AD0: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80018AD4: addiu       $v1, $v1, -0x4350
    ctx->r3 = ADD32(ctx->r3, -0X4350);
    // 0x80018AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80018ADC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80018AE0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80018AE4: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x80018AE8: beq         $v0, $a1, L_80018B4C
    if (ctx->r2 == ctx->r5) {
        // 0x80018AEC: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_80018B4C;
    }
    // 0x80018AEC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_80018AF0:
    // 0x80018AF0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80018AF4: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80018AF8: sll         $t0, $v0, 4
    ctx->r8 = S32(ctx->r2 << 4);
    // 0x80018AFC: sll         $t3, $v0, 4
    ctx->r11 = S32(ctx->r2 << 4);
    // 0x80018B00: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
    // 0x80018B04: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80018B08: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x80018B0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80018B10: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80018B14: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80018B18: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80018B1C: swc1        $f18, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->f18.u32l;
    // 0x80018B20: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80018B24: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80018B28: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80018B2C: swc1        $f18, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->f18.u32l;
    // 0x80018B30: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80018B34: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80018B38: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80018B3C: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x80018B40: swc1        $f18, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f18.u32l;
    // 0x80018B44: bne         $v0, $a1, L_80018AF0
    if (ctx->r2 != ctx->r5) {
        // 0x80018B48: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_80018AF0;
    }
    // 0x80018B48: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_80018B4C:
    // 0x80018B4C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80018B50: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80018B54: sll         $t0, $v0, 4
    ctx->r8 = S32(ctx->r2 << 4);
    // 0x80018B58: sll         $t3, $v0, 4
    ctx->r11 = S32(ctx->r2 << 4);
    // 0x80018B5C: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
    // 0x80018B60: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80018B64: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x80018B68: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80018B6C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80018B70: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80018B74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80018B78: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80018B7C: swc1        $f18, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->f18.u32l;
    // 0x80018B80: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80018B84: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80018B88: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80018B8C: swc1        $f18, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->f18.u32l;
    // 0x80018B90: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80018B94: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80018B98: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80018B9C: swc1        $f18, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f18.u32l;
    // 0x80018BA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80018BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018BA8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80018BAC: jr          $ra
    // 0x80018BB0: lw          $v0, -0x4350($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4350);
    return;
    // 0x80018BB0: lw          $v0, -0x4350($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4350);
;}
RECOMP_FUNC void func_80018BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018BB4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80018BB8: lw          $v0, -0x4350($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4350);
    // 0x80018BBC: jr          $ra
    // 0x80018BC0: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    return;
    // 0x80018BC0: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
;}
RECOMP_FUNC void func_80018BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018BC4: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x80018BC8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80018BCC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80018BD0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80018BD4: lw          $a0, -0x4350($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4350);
    // 0x80018BD8: lwc1        $f2, 0x1740($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X1740);
    // 0x80018BDC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80018BE0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
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
RECOMP_FUNC void func_80018C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80018BE4:
    // 0x80018C14: bne         $v1, $v0, L_80018BE4
    if (ctx->r3 != ctx->r2) {
            // 0x80018C18: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    static_2_80018BE4(rdram, ctx);
    return;
    }
    // 0x80018C18: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80018C1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80018C20: jr          $ra
    // 0x80018C24: nop

    return;
    // 0x80018C24: nop

;}
RECOMP_FUNC void func_80018C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018C28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018C2C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80018C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018C34: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80018C38: jal         0x8002ED00
    // 0x80018C3C: lw          $a0, -0x4350($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4350);
    func_8002ED00(rdram, ctx);
        goto after_0;
    // 0x80018C3C: lw          $a0, -0x4350($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4350);
    after_0:
    // 0x80018C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018C48: jr          $ra
    return;
;}
RECOMP_FUNC void func_80018C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018C50: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80018C54: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80018C58: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80018C5C: lw          $a2, -0x4350($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4350);
    // 0x80018C60: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x80018C64: addiu       $t1, $sp, 0x58
    ctx->r9 = ADD32(ctx->r29, 0X58);
    // 0x80018C68: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80018C6C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_80018C70:
    // 0x80018C70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80018C74: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80018C78: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80018C7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80018C80: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80018C84: beq         $v0, $t0, L_80018CE4
    if (ctx->r2 == ctx->r8) {
        // 0x80018C88: lwc1        $f16, 0x0($a3)
        ctx->f16.u32l = MEM_W(ctx->r7, 0X0);
            goto L_80018CE4;
    }
    // 0x80018C88: lwc1        $f16, 0x0($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X0);
L_80018C8C:
    // 0x80018C8C: mul.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80018C90: lwc1        $f12, 0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80018C94: lwc1        $f10, 0x10($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
    // 0x80018C98: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80018C9C: lwc1        $f6, 0x20($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X20);
    // 0x80018CA0: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80018CA4: lwc1        $f12, 0xC($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80018CA8: add.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x80018CAC: mul.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80018CB0: lwc1        $f8, 0x30($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X30);
    // 0x80018CB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80018CB8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80018CBC: mul.s       $f8, $f12, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80018CC0: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x80018CC4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80018CC8: add.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80018CCC: add.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80018CD0: swc1        $f8, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f8.u32l;
    // 0x80018CD4: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80018CD8: lwc1        $f16, 0x0($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80018CDC: bne         $v0, $t0, L_80018C8C
    if (ctx->r2 != ctx->r8) {
        // 0x80018CE0: nop
    
            goto L_80018C8C;
    }
    // 0x80018CE0: nop

L_80018CE4:
    // 0x80018CE4: mul.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80018CE8: lwc1        $f12, 0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80018CEC: lwc1        $f10, 0x10($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
    // 0x80018CF0: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80018CF4: lwc1        $f6, 0x20($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X20);
    // 0x80018CF8: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80018CFC: lwc1        $f12, 0xC($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80018D00: add.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x80018D04: mul.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80018D08: lwc1        $f8, 0x30($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X30);
    // 0x80018D0C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80018D10: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80018D14: mul.s       $f8, $f12, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80018D18: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x80018D1C: add.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80018D20: add.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80018D24: swc1        $f8, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f8.u32l;
    // 0x80018D28: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80018D2C: sltu        $at, $v1, $t1
    ctx->r1 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x80018D30: bne         $at, $zero, L_80018C70
    if (ctx->r1 != 0) {
        // 0x80018D34: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_80018C70;
    }
    // 0x80018D34: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80018D38: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80018D3C: addiu       $a1, $a1, -0x4350
    ctx->r5 = ADD32(ctx->r5, -0X4350);
    // 0x80018D40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80018D44: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_80018D48:
    // 0x80018D48: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80018D4C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80018D50: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x80018D54: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80018D58: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x80018D5C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80018D60: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80018D64: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x80018D68: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x80018D6C: swc1        $f6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f6.u32l;
    // 0x80018D70: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x80018D74: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80018D78: sll         $t4, $v0, 4
    ctx->r12 = S32(ctx->r2 << 4);
    // 0x80018D7C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80018D80: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x80018D84: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80018D88: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x80018D8C: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80018D90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80018D94: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80018D98: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80018D9C: bne         $v0, $t0, L_80018D48
    if (ctx->r2 != ctx->r8) {
        // 0x80018DA0: swc1        $f10, 0xC($t8)
        MEM_W(0XC, ctx->r24) = ctx->f10.u32l;
            goto L_80018D48;
    }
    // 0x80018DA0: swc1        $f10, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f10.u32l;
    // 0x80018DA4: jr          $ra
    // 0x80018DA8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80018DA8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80018DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018DAC: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80018DB0: addiu       $v0, $v0, -0x4350
    ctx->r2 = ADD32(ctx->r2, -0X4350);
    // 0x80018DB4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80018DB8: addiu       $t7, $t6, -0x40
    ctx->r15 = ADD32(ctx->r14, -0X40);
    // 0x80018DBC: jr          $ra
    // 0x80018DC0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    return;
    // 0x80018DC0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80018DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018DC4: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80018DC8: addiu       $t0, $t0, -0x4350
    ctx->r8 = ADD32(ctx->r8, -0X4350);
    // 0x80018DCC: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x80018DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80018DD4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80018DD8: addiu       $a2, $a3, 0x40
    ctx->r6 = ADD32(ctx->r7, 0X40);
L_80018DDC:
    // 0x80018DDC: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80018DE0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80018DE4: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x80018DE8: swc1        $f4, -0x10($a2)
    MEM_W(-0X10, ctx->r6) = ctx->f4.u32l;
    // 0x80018DEC: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80018DF0: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80018DF4: swc1        $f6, -0xC($a2)
    MEM_W(-0XC, ctx->r6) = ctx->f6.u32l;
    // 0x80018DF8: lwc1        $f8, -0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, -0X8);
    // 0x80018DFC: swc1        $f8, -0x8($a2)
    MEM_W(-0X8, ctx->r6) = ctx->f8.u32l;
    // 0x80018E00: lwc1        $f10, -0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, -0X4);
    // 0x80018E04: bne         $a1, $v0, L_80018DDC
    if (ctx->r5 != ctx->r2) {
        // 0x80018E08: swc1        $f10, -0x4($a2)
        MEM_W(-0X4, ctx->r6) = ctx->f10.u32l;
            goto L_80018DDC;
    }
    // 0x80018E08: swc1        $f10, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f10.u32l;
    // 0x80018E0C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80018E10: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x80018E14: jr          $ra
    // 0x80018E18: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    return;
    // 0x80018E18: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
;}
RECOMP_FUNC void func_80018E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018E1C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80018E20: addiu       $v1, $v1, -0x4350
    ctx->r3 = ADD32(ctx->r3, -0X4350);
    // 0x80018E24: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80018E28: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80018E2C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80018E30: addiu       $v0, $t6, 0x40
    ctx->r2 = ADD32(ctx->r14, 0X40);
    // 0x80018E34: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80018E38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80018E3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80018E40: swc1        $f14, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f14.u32l;
    // 0x80018E44: swc1        $f12, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f12.u32l;
    // 0x80018E48: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x80018E4C: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x80018E50: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80018E54: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x80018E58: swc1        $f2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f2.u32l;
    // 0x80018E5C: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x80018E60: swc1        $f2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f2.u32l;
    // 0x80018E64: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x80018E68: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80018E6C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80018E70: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x80018E74: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    // 0x80018E78: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80018E7C: addiu       $v0, $v0, 0x3C
    ctx->r2 = ADD32(ctx->r2, 0X3C);
    // 0x80018E80: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80018E84: jr          $ra
    // 0x80018E88: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x80018E88: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80018E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018E8C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80018E90: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80018E94: addiu       $v1, $v1, -0x4350
    ctx->r3 = ADD32(ctx->r3, -0X4350);
    // 0x80018E98: addiu       $v0, $t6, -0x4B10
    ctx->r2 = ADD32(ctx->r14, -0X4B10);
    // 0x80018E9C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80018EA0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80018EA4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80018EA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80018EAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80018EB0: swc1        $f14, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f14.u32l;
    // 0x80018EB4: swc1        $f12, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f12.u32l;
    // 0x80018EB8: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80018EBC: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x80018EC0: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x80018EC4: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x80018EC8: swc1        $f2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f2.u32l;
    // 0x80018ECC: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x80018ED0: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80018ED4: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x80018ED8: swc1        $f2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f2.u32l;
    // 0x80018EDC: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80018EE0: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x80018EE4: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    // 0x80018EE8: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80018EEC: addiu       $v0, $v0, 0x3C
    ctx->r2 = ADD32(ctx->r2, 0X3C);
    // 0x80018EF0: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80018EF4: jr          $ra
    // 0x80018EF8: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x80018EF8: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80018EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018EFC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80018F00: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80018F04: addiu       $a1, $a1, -0x4350
    ctx->r5 = ADD32(ctx->r5, -0X4350);
    // 0x80018F08: addiu       $v0, $t6, -0x4B10
    ctx->r2 = ADD32(ctx->r14, -0X4B10);
    // 0x80018F0C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80018F10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80018F14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80018F18:
    // 0x80018F18: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80018F1C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80018F20: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80018F24: swc1        $f4, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f4.u32l;
    // 0x80018F28: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80018F2C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80018F30: swc1        $f6, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f6.u32l;
    // 0x80018F34: lwc1        $f8, -0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, -0X8);
    // 0x80018F38: swc1        $f8, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80018F3C: lwc1        $f10, -0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, -0X4);
    // 0x80018F40: bne         $v1, $a1, L_80018F18
    if (ctx->r3 != ctx->r5) {
        // 0x80018F44: swc1        $f10, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f10.u32l;
            goto L_80018F18;
    }
    // 0x80018F44: swc1        $f10, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80018F48: jr          $ra
    return;
;}
RECOMP_FUNC void func_80018F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018F50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80018F54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80018F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018F5C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80018F60: nop

    // 0x80018F64: bc1tl       L_80018FDC
    if (c1cs) {
        // 0x80018F68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80018FDC;
    }
    goto skip_0;
    // 0x80018F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80018F6C: jal         0x800137F4
    // 0x80018F70: nop

    func_800137F4(rdram, ctx);
        goto after_0;
    // 0x80018F70: nop

    after_0:
    // 0x80018F74: jal         0x80013788
    // 0x80018F78: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80013788(rdram, ctx);
        goto after_1;
    // 0x80018F78: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80018F7C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80018F80: lw          $a1, -0x4350($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4350);
    // 0x80018F84: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80018F88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80018F8C: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80018F90: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x80018F94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80018F98:
    // 0x80018F98: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80018F9C: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80018FA0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80018FA4: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80018FA8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80018FAC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80018FB0: mul.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80018FB4: nop

    // 0x80018FB8: mul.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80018FBC: nop

    // 0x80018FC0: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80018FC4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80018FC8: swc1        $f10, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80018FCC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80018FD0: bne         $a0, $a1, L_80018F98
    if (ctx->r4 != ctx->r5) {
        // 0x80018FD4: swc1        $f4, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
            goto L_80018F98;
    }
    // 0x80018FD4: swc1        $f4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
    // 0x80018FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018FDC:
    // 0x80018FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80018FE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80018FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018FE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80018FEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80018FF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018FF4: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80018FF8: nop

    // 0x80018FFC: bc1tl       L_80019070
    if (c1cs) {
        // 0x80019000: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80019070;
    }
    goto skip_0;
    // 0x80019000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80019004: jal         0x800137F4
    // 0x80019008: nop

    func_800137F4(rdram, ctx);
        goto after_0;
    // 0x80019008: nop

    after_0:
    // 0x8001900C: jal         0x80013788
    // 0x80019010: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80013788(rdram, ctx);
        goto after_1;
    // 0x80019010: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80019014: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80019018: lw          $v0, -0x4350($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X4350);
    // 0x8001901C: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80019020: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80019024: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80019028: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
L_8001902C:
    // 0x8001902C: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80019030: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80019034: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80019038: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8001903C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80019040: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80019044: mul.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80019048: nop

    // 0x8001904C: mul.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80019050: nop

    // 0x80019054: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80019058: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8001905C: swc1        $f10, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80019060: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80019064: bne         $a0, $a1, L_8001902C
    if (ctx->r4 != ctx->r5) {
        // 0x80019068: swc1        $f4, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
            goto L_8001902C;
    }
    // 0x80019068: swc1        $f4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
    // 0x8001906C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80019070:
    // 0x80019070: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019074: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001907C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001907C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80019080: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019088: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x8001908C: nop

    // 0x80019090: bc1tl       L_80019104
    if (c1cs) {
        // 0x80019094: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80019104;
    }
    goto skip_0;
    // 0x80019094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80019098: jal         0x800137F4
    // 0x8001909C: nop

    func_800137F4(rdram, ctx);
        goto after_0;
    // 0x8001909C: nop

    after_0:
    // 0x800190A0: jal         0x80013788
    // 0x800190A4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80013788(rdram, ctx);
        goto after_1;
    // 0x800190A4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800190A8: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800190AC: lw          $v0, -0x4350($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X4350);
    // 0x800190B0: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800190B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800190B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800190BC: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
L_800190C0:
    // 0x800190C0: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800190C4: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800190C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800190CC: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800190D0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800190D4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800190D8: mul.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800190DC: nop

    // 0x800190E0: mul.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800190E4: nop

    // 0x800190E8: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x800190EC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800190F0: swc1        $f10, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f10.u32l;
    // 0x800190F4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800190F8: bne         $a0, $a1, L_800190C0
    if (ctx->r4 != ctx->r5) {
        // 0x800190FC: swc1        $f4, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
            goto L_800190C0;
    }
    // 0x800190FC: swc1        $f4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
    // 0x80019100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80019104:
    // 0x80019104: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019108: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019118: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8001911C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80019120: jal         0x80018FE8
    // 0x80019124: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    func_80018FE8(rdram, ctx);
        goto after_0;
    // 0x80019124: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_0:
    // 0x80019128: jal         0x80018F50
    // 0x8001912C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    func_80018F50(rdram, ctx);
        goto after_1;
    // 0x8001912C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80019130: jal         0x8001907C
    // 0x80019134: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    func_8001907C(rdram, ctx);
        goto after_2;
    // 0x80019134: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80019138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001913C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019140: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019148: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001914C: addiu       $a0, $a0, -0x4350
    ctx->r4 = ADD32(ctx->r4, -0X4350);
    // 0x80019150: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80019154: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80019158: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8001915C: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x80019160: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x80019164: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80019168: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8001916C: beql        $v1, $a1, L_800191C0
    if (ctx->r3 == ctx->r5) {
        // 0x80019170: swc1        $f18, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
            goto L_800191C0;
    }
    goto skip_0;
    // 0x80019170: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    skip_0:
    // 0x80019174: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_80019178:
    // 0x80019178: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8001917C: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x80019180: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80019184: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80019188: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x8001918C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80019190: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x80019194: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80019198: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001919C: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800191A0: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    // 0x800191A4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800191A8: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x800191AC: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800191B0: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800191B4: bnel        $v1, $a1, L_80019178
    if (ctx->r3 != ctx->r5) {
        // 0x800191B8: swc1        $f18, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
            goto L_80019178;
    }
    goto skip_1;
    // 0x800191B8: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    skip_1:
    // 0x800191BC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_800191C0:
    // 0x800191C0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800191C4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800191C8: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x800191CC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800191D0: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800191D4: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x800191D8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800191DC: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x800191E0: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x800191E4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800191E8: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800191EC: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    // 0x800191F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800191F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800191F8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800191FC: addiu       $v0, $v0, -0x4350
    ctx->r2 = ADD32(ctx->r2, -0X4350);
    // 0x80019200: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80019204: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80019208: swc1        $f12, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f12.u32l;
    // 0x8001920C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80019210: swc1        $f14, 0x34($t7)
    MEM_W(0X34, ctx->r15) = ctx->f14.u32l;
    // 0x80019214: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80019218: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8001921C: jr          $ra
    // 0x80019220: swc1        $f4, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->f4.u32l;
    return;
    // 0x80019220: swc1        $f4, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80019224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019224: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80019228: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001922C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80019230: swc1        $f4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f4.u32l;
    // 0x80019234: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80019238: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001923C: addiu       $a0, $a0, -0x4350
    ctx->r4 = ADD32(ctx->r4, -0X4350);
    // 0x80019240: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x80019244: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80019248: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8001924C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80019250: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x80019254: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80019258: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8001925C: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80019260: beq         $v1, $a1, L_800192B4
    if (ctx->r3 == ctx->r5) {
        // 0x80019264: addu        $v0, $t6, $v1
        ctx->r2 = ADD32(ctx->r14, ctx->r3);
            goto L_800192B4;
    }
    // 0x80019264: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
L_80019268:
    // 0x80019268: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001926C: lwc1        $f14, 0x4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80019270: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80019274: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80019278: lwc1        $f10, 0x8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8001927C: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80019280: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80019284: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80019288: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001928C: mul.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80019290: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80019294: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x80019298: add.s       $f8, $f12, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8001929C: add.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x800192A0: swc1        $f8, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f8.u32l;
    // 0x800192A4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800192A8: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800192AC: bne         $v1, $a1, L_80019268
    if (ctx->r3 != ctx->r5) {
        // 0x800192B0: addu        $v0, $t6, $v1
        ctx->r2 = ADD32(ctx->r14, ctx->r3);
            goto L_80019268;
    }
    // 0x800192B0: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
L_800192B4:
    // 0x800192B4: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800192B8: lwc1        $f14, 0x4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800192BC: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800192C0: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x800192C4: lwc1        $f10, 0x8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8);
    // 0x800192C8: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x800192CC: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x800192D0: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800192D4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800192D8: mul.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800192DC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800192E0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800192E4: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x800192E8: add.s       $f8, $f12, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x800192EC: add.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x800192F0: swc1        $f8, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f8.u32l;
    // 0x800192F4: jr          $ra
    // 0x800192F8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800192F8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800192FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800192FC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80019300: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80019304: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80019308: swc1        $f4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f4.u32l;
    // 0x8001930C: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80019310: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80019314: addiu       $a0, $a0, -0x4350
    ctx->r4 = ADD32(ctx->r4, -0X4350);
    // 0x80019318: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x8001931C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80019320: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80019324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80019328: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x8001932C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80019330: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x80019334: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80019338: beq         $a2, $a1, L_80019384
    if (ctx->r6 == ctx->r5) {
        // 0x8001933C: addu        $v0, $t6, $a2
        ctx->r2 = ADD32(ctx->r14, ctx->r6);
            goto L_80019384;
    }
    // 0x8001933C: addu        $v0, $t6, $a2
    ctx->r2 = ADD32(ctx->r14, ctx->r6);
L_80019340:
    // 0x80019340: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80019344: lwc1        $f14, 0x4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80019348: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8001934C: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80019350: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80019354: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80019358: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8001935C: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x80019360: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80019364: mul.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80019368: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8001936C: add.s       $f12, $f8, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x80019370: swc1        $f12, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f12.u32l;
    // 0x80019374: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80019378: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8001937C: bne         $a2, $a1, L_80019340
    if (ctx->r6 != ctx->r5) {
        // 0x80019380: addu        $v0, $t6, $a2
        ctx->r2 = ADD32(ctx->r14, ctx->r6);
            goto L_80019340;
    }
    // 0x80019380: addu        $v0, $t6, $a2
    ctx->r2 = ADD32(ctx->r14, ctx->r6);
L_80019384:
    // 0x80019384: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80019388: lwc1        $f14, 0x4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8001938C: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80019390: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80019394: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80019398: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8001939C: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x800193A0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800193A4: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800193A8: mul.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800193AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800193B0: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x800193B4: add.s       $f12, $f8, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x800193B8: swc1        $f12, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f12.u32l;
    // 0x800193BC: jr          $ra
    // 0x800193C0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800193C0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800193C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800193C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800193C8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800193CC: addiu       $a0, $a0, -0x4350
    ctx->r4 = ADD32(ctx->r4, -0X4350);
    // 0x800193D0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800193D4: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x800193D8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800193DC: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x800193E0: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800193E4: beq         $v1, $a3, L_80019438
    if (ctx->r3 == ctx->r7) {
        // 0x800193E8: addu        $v0, $t6, $v1
        ctx->r2 = ADD32(ctx->r14, ctx->r3);
            goto L_80019438;
    }
    // 0x800193E8: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
L_800193EC:
    // 0x800193EC: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800193F0: lwc1        $f14, 0x4($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800193F4: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800193F8: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x800193FC: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80019400: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80019404: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80019408: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8001940C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80019410: mul.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80019414: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80019418: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8001941C: add.s       $f8, $f12, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x80019420: add.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x80019424: swc1        $f8, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f8.u32l;
    // 0x80019428: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8001942C: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80019430: bne         $v1, $a3, L_800193EC
    if (ctx->r3 != ctx->r7) {
        // 0x80019434: addu        $v0, $t6, $v1
        ctx->r2 = ADD32(ctx->r14, ctx->r3);
            goto L_800193EC;
    }
    // 0x80019434: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
L_80019438:
    // 0x80019438: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001943C: lwc1        $f14, 0x4($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80019440: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80019444: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80019448: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8001944C: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80019450: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80019454: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80019458: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x8001945C: mul.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80019460: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80019464: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80019468: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8001946C: add.s       $f8, $f12, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x80019470: add.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x80019474: swc1        $f8, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f8.u32l;
    // 0x80019478: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019480: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80019484: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80019488: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8001948C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80019490: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80019494: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80019498: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8001949C: addiu       $a0, $a0, -0x4350
    ctx->r4 = ADD32(ctx->r4, -0X4350);
    // 0x800194A0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800194A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800194A8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x800194AC: beq         $v1, $a2, L_800194F4
    if (ctx->r3 == ctx->r6) {
        // 0x800194B0: lw          $t6, 0x0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X0);
            goto L_800194F4;
    }
    // 0x800194B0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
L_800194B4:
    // 0x800194B4: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x800194B8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800194BC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800194C0: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x800194C4: mul.s       $f18, $f12, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x800194C8: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800194CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800194D0: mul.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x800194D4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800194D8: mul.s       $f10, $f20, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x800194DC: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800194E0: add.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x800194E4: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800194E8: swc1        $f10, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f10.u32l;
    // 0x800194EC: bne         $v1, $a2, L_800194B4
    if (ctx->r3 != ctx->r6) {
        // 0x800194F0: lw          $t6, 0x0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X0);
            goto L_800194B4;
    }
    // 0x800194F0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
L_800194F4:
    // 0x800194F4: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x800194F8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800194FC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80019500: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80019504: mul.s       $f18, $f12, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x80019508: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8001950C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80019510: mul.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x80019514: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80019518: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8001951C: mul.s       $f10, $f20, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80019520: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80019524: add.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80019528: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8001952C: swc1        $f10, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f10.u32l;
    // 0x80019530: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80019534: jr          $ra
    // 0x80019538: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80019538: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8001953C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001953C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80019540: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80019544: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80019548: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8001954C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80019550: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80019554: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80019558: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001955C: addiu       $v0, $sp, 0x48
    ctx->r2 = ADD32(ctx->r29, 0X48);
    // 0x80019560: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80019564:
    // 0x80019564: andi        $t6, $t0, 0x1
    ctx->r14 = ctx->r8 & 0X1;
    // 0x80019568: beq         $t6, $zero, L_80019588
    if (ctx->r14 == 0) {
        // 0x8001956C: andi        $t9, $t0, 0x2
        ctx->r25 = ctx->r8 & 0X2;
            goto L_80019588;
    }
    // 0x8001956C: andi        $t9, $t0, 0x2
    ctx->r25 = ctx->r8 & 0X2;
    // 0x80019570: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80019574: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80019578: nop

    // 0x8001957C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80019580: b           L_8001959C
    // 0x80019584: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_8001959C;
    // 0x80019584: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_80019588:
    // 0x80019588: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x8001958C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80019590: nop

    // 0x80019594: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80019598: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_8001959C:
    // 0x8001959C: beq         $t9, $zero, L_800195BC
    if (ctx->r25 == 0) {
        // 0x800195A0: andi        $t3, $t0, 0x4
        ctx->r11 = ctx->r8 & 0X4;
            goto L_800195BC;
    }
    // 0x800195A0: andi        $t3, $t0, 0x4
    ctx->r11 = ctx->r8 & 0X4;
    // 0x800195A4: lw          $t1, 0x4($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X4);
    // 0x800195A8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800195AC: nop

    // 0x800195B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800195B4: b           L_800195D0
    // 0x800195B8: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
        goto L_800195D0;
    // 0x800195B8: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_800195BC:
    // 0x800195BC: lw          $t2, 0x4($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X4);
    // 0x800195C0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800195C4: nop

    // 0x800195C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800195CC: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
L_800195D0:
    // 0x800195D0: beq         $t3, $zero, L_800195F0
    if (ctx->r11 == 0) {
        // 0x800195D4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_800195F0;
    }
    // 0x800195D4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800195D8: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x800195DC: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800195E0: nop

    // 0x800195E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800195E8: b           L_80019604
    // 0x800195EC: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
        goto L_80019604;
    // 0x800195EC: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_800195F0:
    // 0x800195F0: lw          $t5, 0x8($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X8);
    // 0x800195F4: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x800195F8: nop

    // 0x800195FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80019600: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
L_80019604:
    // 0x80019604: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80019608: bne         $at, $zero, L_80019564
    if (ctx->r1 != 0) {
        // 0x8001960C: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80019564;
    }
    // 0x8001960C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80019610: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80019614: addiu       $s2, $sp, 0xA8
    ctx->r18 = ADD32(ctx->r29, 0XA8);
    // 0x80019618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8001961C:
    // 0x8001961C: jal         0x80019224
    // 0x80019620: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019224(rdram, ctx);
        goto after_0;
    // 0x80019620: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80019624: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80019628: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8001962C: bnel        $at, $zero, L_8001961C
    if (ctx->r1 != 0) {
        // 0x80019630: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001961C;
    }
    goto skip_0;
    // 0x80019630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80019634: addiu       $v1, $sp, 0x48
    ctx->r3 = ADD32(ctx->r29, 0X48);
    // 0x80019638: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001963C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80019640: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x80019644: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80019648: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x8001964C: beq         $at, $zero, L_80019680
    if (ctx->r1 == 0) {
        // 0x80019650: lwc1        $f18, -0x4($v1)
        ctx->f18.u32l = MEM_W(ctx->r3, -0X4);
            goto L_80019680;
    }
    // 0x80019650: lwc1        $f18, -0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, -0X4);
    // 0x80019654: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_80019658:
    // 0x80019658: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001965C: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x80019660: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80019664: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80019668: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8001966C: sw          $v0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r2;
    // 0x80019670: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x80019674: lwc1        $f18, -0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, -0X4);
    // 0x80019678: bnel        $at, $zero, L_80019658
    if (ctx->r1 != 0) {
        // 0x8001967C: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_80019658;
    }
    goto skip_1;
    // 0x8001967C: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_1:
L_80019680:
    // 0x80019680: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80019684: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80019688: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8001968C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80019690: nop

    // 0x80019694: sw          $v0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r2;
    // 0x80019698: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x8001969C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x800196A0: addiu       $t0, $sp, 0xA8
    ctx->r8 = ADD32(ctx->r29, 0XA8);
    // 0x800196A4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800196A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800196AC:
    // 0x800196AC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x800196B0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_800196B4:
    // 0x800196B4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800196B8: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800196BC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800196C0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800196C4: addu        $v0, $s1, $v1
    ctx->r2 = ADD32(ctx->r17, ctx->r3);
    // 0x800196C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800196CC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800196D0: nop

    // 0x800196D4: bc1fl       L_800196F0
    if (!c1cs) {
        // 0x800196D8: lw          $t1, 0x0($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X0);
            goto L_800196F0;
    }
    goto skip_2;
    // 0x800196D8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    skip_2:
    // 0x800196DC: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800196E0: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x800196E4: b           L_8001971C
    // 0x800196E8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
        goto L_8001971C;
    // 0x800196E8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800196EC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
L_800196F0:
    // 0x800196F0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800196F4: nop

    // 0x800196F8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800196FC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80019700: nop

    // 0x80019704: bc1fl       L_80019720
    if (!c1cs) {
        // 0x80019708: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80019720;
    }
    goto skip_3;
    // 0x80019708: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_3:
    // 0x8001970C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80019710: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x80019714: nop

    // 0x80019718: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_8001971C:
    // 0x8001971C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_80019720:
    // 0x80019720: bne         $v1, $a2, L_800196B4
    if (ctx->r3 != ctx->r6) {
        // 0x80019724: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_800196B4;
    }
    // 0x80019724: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80019728: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8001972C: bnel        $a3, $t0, L_800196AC
    if (ctx->r7 != ctx->r8) {
        // 0x80019730: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800196AC;
    }
    goto skip_4;
    // 0x80019730: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_4:
    // 0x80019734: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80019738: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001973C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80019740: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80019744: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80019748: jr          $ra
    // 0x8001974C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x8001974C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_80019750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019758: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001975C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80019760: beq         $a0, $zero, L_80019778
    if (ctx->r4 == 0) {
        // 0x80019764: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_80019778;
    }
    // 0x80019764: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80019768: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001976C: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80019770: jal         0x80019C84
    // 0x80019774: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    func_80019C84(rdram, ctx);
        goto after_0;
    // 0x80019774: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    after_0:
L_80019778:
    // 0x80019778: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001977C: beql        $t6, $zero, L_800197A8
    if (ctx->r14 == 0) {
        // 0x80019780: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800197A8;
    }
    goto skip_0;
    // 0x80019780: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x80019784: jal         0x80018FE8
    // 0x80019788: lwc1        $f12, 0x4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X4);
    func_80018FE8(rdram, ctx);
        goto after_1;
    // 0x80019788: lwc1        $f12, 0x4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X4);
    after_1:
    // 0x8001978C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80019790: jal         0x80018F50
    // 0x80019794: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    func_80018F50(rdram, ctx);
        goto after_2;
    // 0x80019794: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    after_2:
    // 0x80019798: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001979C: jal         0x8001907C
    // 0x800197A0: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
    func_8001907C(rdram, ctx);
        goto after_3;
    // 0x800197A0: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
    after_3:
    // 0x800197A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_800197A8:
    // 0x800197A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800197AC: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800197B0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800197B4: nop

    // 0x800197B8: bc1tl       L_800197D4
    if (c1cs) {
        // 0x800197BC: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_800197D4;
    }
    goto skip_1;
    // 0x800197BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800197C0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800197C4: mov.s       $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = ctx->f4.fl;
    // 0x800197C8: jal         0x80019D30
    // 0x800197CC: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
    func_80019D30(rdram, ctx);
        goto after_4;
    // 0x800197CC: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
    after_4:
    // 0x800197D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_800197D4:
    // 0x800197D4: beql        $t9, $zero, L_80019800
    if (ctx->r25 == 0) {
        // 0x800197D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80019800;
    }
    goto skip_2;
    // 0x800197D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800197DC: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800197E0: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800197E4: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800197E8: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x800197EC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x800197F0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800197F4: jal         0x80019C84
    // 0x800197F8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_80019C84(rdram, ctx);
        goto after_5;
    // 0x800197F8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_5:
    // 0x800197FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80019800:
    // 0x80019800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019804: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001980C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001980C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019814: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80019818: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001981C: beq         $a3, $zero, L_80019834
    if (ctx->r7 == 0) {
        // 0x80019820: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_80019834;
    }
    // 0x80019820: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80019824: lwc1        $f12, 0x0($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80019828: lwc1        $f14, 0x4($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X4);
    // 0x8001982C: jal         0x80019C84
    // 0x80019830: lw          $a2, 0x8($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X8);
    func_80019C84(rdram, ctx);
        goto after_0;
    // 0x80019830: lw          $a2, 0x8($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X8);
    after_0:
L_80019834:
    // 0x80019834: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80019838: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8001983C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80019840: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x80019844: nop

    // 0x80019848: bc1tl       L_80019864
    if (c1cs) {
        // 0x8001984C: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_80019864;
    }
    goto skip_0;
    // 0x8001984C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80019850: div.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80019854: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80019858: jal         0x80019D30
    // 0x8001985C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_80019D30(rdram, ctx);
        goto after_1;
    // 0x8001985C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_1:
    // 0x80019860: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
L_80019864:
    // 0x80019864: beql        $t6, $zero, L_8001989C
    if (ctx->r14 == 0) {
        // 0x80019868: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_8001989C;
    }
    goto skip_1;
    // 0x80019868: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x8001986C: lwc1        $f12, 0x8($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80019870: jal         0x8001907C
    // 0x80019874: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_8001907C(rdram, ctx);
        goto after_2;
    // 0x80019874: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_2:
    // 0x80019878: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001987C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80019880: jal         0x80018F50
    // 0x80019884: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_80018F50(rdram, ctx);
        goto after_3;
    // 0x80019884: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_3:
    // 0x80019888: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001988C: lwc1        $f12, 0x4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80019890: jal         0x80018FE8
    // 0x80019894: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_80018FE8(rdram, ctx);
        goto after_4;
    // 0x80019894: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_4:
    // 0x80019898: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_8001989C:
    // 0x8001989C: beql        $t9, $zero, L_800198C8
    if (ctx->r25 == 0) {
        // 0x800198A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800198C8;
    }
    goto skip_2;
    // 0x800198A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800198A4: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800198A8: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800198AC: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800198B0: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x800198B4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x800198B8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800198BC: jal         0x80019C84
    // 0x800198C0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_80019C84(rdram, ctx);
        goto after_5;
    // 0x800198C0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_5:
    // 0x800198C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800198C8:
    // 0x800198C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800198CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800198D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800198D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800198D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800198DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800198E0: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x800198E4: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800198E8: jal         0x80019C84
    // 0x800198EC: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    func_80019C84(rdram, ctx);
        goto after_0;
    // 0x800198EC: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x800198F0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800198F4: jal         0x8001907C
    // 0x800198F8: lwc1        $f12, 0x8($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8);
    func_8001907C(rdram, ctx);
        goto after_1;
    // 0x800198F8: lwc1        $f12, 0x8($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8);
    after_1:
    // 0x800198FC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80019900: jal         0x80018F50
    // 0x80019904: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    func_80018F50(rdram, ctx);
        goto after_2;
    // 0x80019904: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    after_2:
    // 0x80019908: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001990C: jal         0x80018FE8
    // 0x80019910: lwc1        $f12, 0x4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4);
    func_80018FE8(rdram, ctx);
        goto after_3;
    // 0x80019910: lwc1        $f12, 0x4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4);
    after_3:
    // 0x80019914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001991C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001992C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80019930: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80019934: lwc1        $f12, 0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80019938: jal         0x80018FE8
    // 0x8001993C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_80018FE8(rdram, ctx);
        goto after_0;
    // 0x8001993C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_0:
    // 0x80019940: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80019944: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80019948: jal         0x80018F50
    // 0x8001994C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_80018F50(rdram, ctx);
        goto after_1;
    // 0x8001994C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x80019950: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80019954: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80019958: jal         0x8001907C
    // 0x8001995C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_8001907C(rdram, ctx);
        goto after_2;
    // 0x8001995C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_2:
    // 0x80019960: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80019964: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80019968: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001996C: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80019970: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80019974: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x80019978: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8001997C: jal         0x80019C84
    // 0x80019980: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_80019C84(rdram, ctx);
        goto after_3;
    // 0x80019980: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_3:
    // 0x80019984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001998C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019998: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001999C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800199A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800199A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800199A8: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x800199AC: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800199B0: jal         0x80019C84
    // 0x800199B4: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    func_80019C84(rdram, ctx);
        goto after_0;
    // 0x800199B4: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x800199B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800199BC: jal         0x8001907C
    // 0x800199C0: lwc1        $f12, 0x8($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8);
    func_8001907C(rdram, ctx);
        goto after_1;
    // 0x800199C0: lwc1        $f12, 0x8($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8);
    after_1:
    // 0x800199C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800199C8: jal         0x80018F50
    // 0x800199CC: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    func_80018F50(rdram, ctx);
        goto after_2;
    // 0x800199CC: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    after_2:
    // 0x800199D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800199D4: jal         0x80018FE8
    // 0x800199D8: lwc1        $f12, 0x4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4);
    func_80018FE8(rdram, ctx);
        goto after_3;
    // 0x800199D8: lwc1        $f12, 0x4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4);
    after_3:
    // 0x800199DC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800199E0: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800199E4: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800199E8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800199EC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x800199F0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800199F4: jal         0x80019C84
    // 0x800199F8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_80019C84(rdram, ctx);
        goto after_4;
    // 0x800199F8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_4:
    // 0x800199FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80019A00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80019A04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019A08: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019A10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019A14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80019A18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80019A1C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80019A20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80019A24: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x80019A28: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80019A2C: jal         0x80019C84
    // 0x80019A30: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    func_80019C84(rdram, ctx);
        goto after_0;
    // 0x80019A30: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x80019A34: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80019A38: lwc1        $f12, 0x4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80019A3C: jal         0x80018FE8
    // 0x80019A40: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_80018FE8(rdram, ctx);
        goto after_1;
    // 0x80019A40: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x80019A44: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80019A48: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80019A4C: jal         0x80018F50
    // 0x80019A50: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_80018F50(rdram, ctx);
        goto after_2;
    // 0x80019A50: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_2:
    // 0x80019A54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80019A58: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80019A5C: jal         0x8001907C
    // 0x80019A60: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_8001907C(rdram, ctx);
        goto after_3;
    // 0x80019A60: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_3:
    // 0x80019A64: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80019A68: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80019A6C: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80019A70: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80019A74: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x80019A78: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80019A7C: jal         0x80019C84
    // 0x80019A80: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_80019C84(rdram, ctx);
        goto after_4;
    // 0x80019A80: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_4:
    // 0x80019A84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80019A88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80019A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019A90: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019AA0: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80019AA4: addiu       $t0, $t0, -0x4350
    ctx->r8 = ADD32(ctx->r8, -0X4350);
    // 0x80019AA8: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80019AAC: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x80019AB0: sw          $a2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r6;
    // 0x80019AB4: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80019AB8: lui         $t1, 0x400
    ctx->r9 = S32(0X400 << 16);
    // 0x80019ABC: or          $t0, $t0, $t1
    ctx->r8 = ctx->r8 | ctx->r9;
    // 0x80019AC0: nop

    // 0x80019AC4: mtc0        $t0, Status
    cop0_status_write(ctx, ctx->r8);    // 0x80019AC8: nop

    // 0x80019ACC: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80019AD0: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x80019AD4: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80019AD8: lwc1        $f3, 0x10($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X10);
    // 0x80019ADC: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80019AE0: lwc1        $f5, 0x18($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x80019AE4: lwc1        $f6, 0x20($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80019AE8: lwc1        $f7, 0x24($a1)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r5, 0X24);
    // 0x80019AEC: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80019AF0: lwc1        $f9, 0x30($a1)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r5, 0X30);
    // 0x80019AF4: lwc1        $f10, 0x34($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80019AF8: lwc1        $f11, 0x38($a1)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x80019AFC: addiu       $t0, $a0, 0xC
    ctx->r8 = ADD32(ctx->r4, 0XC);
L_80019B00:
    // 0x80019B00: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80019B04: lwc1        $f13, 0x10($a0)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x80019B08: mul.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80019B0C: lwc1        $f14, 0x20($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80019B10: mul.s       $f17, $f1, $f13
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f17.fl = MUL_S(ctx->f1.fl, ctx->f13.fl);
    // 0x80019B14: lwc1        $f15, 0x30($a0)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x80019B18: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80019B1C: add.s       $f17, $f17, $f16
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f16.fl;
    // 0x80019B20: mul.s       $f16, $f3, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f3.fl, ctx->f12.fl);
    // 0x80019B24: add.s       $f18, $f18, $f17
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f17.fl;
    // 0x80019B28: mul.s       $f17, $f4, $f13
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f17.fl = MUL_S(ctx->f4.fl, ctx->f13.fl);
    // 0x80019B2C: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x80019B30: mul.s       $f18, $f5, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f5.fl, ctx->f14.fl);
    // 0x80019B34: add.s       $f17, $f17, $f16
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f16.fl;
    // 0x80019B38: mul.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80019B3C: add.s       $f18, $f18, $f17
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f17.fl;
    // 0x80019B40: mul.s       $f17, $f7, $f13
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f17.fl = MUL_S(ctx->f7.fl, ctx->f13.fl);
    // 0x80019B44: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
    // 0x80019B48: mul.s       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80019B4C: add.s       $f17, $f17, $f16
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f16.fl;
    // 0x80019B50: mul.s       $f16, $f9, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f9.fl, ctx->f12.fl);
    // 0x80019B54: add.s       $f18, $f18, $f17
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f17.fl;
    // 0x80019B58: mul.s       $f17, $f10, $f13
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f17.fl = MUL_S(ctx->f10.fl, ctx->f13.fl);
    // 0x80019B5C: swc1        $f18, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f18.u32l;
    // 0x80019B60: mul.s       $f18, $f11, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f11.fl, ctx->f14.fl);
    // 0x80019B64: add.s       $f17, $f17, $f16
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f16.fl;
    // 0x80019B68: add.s       $f18, $f18, $f17
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f17.fl;
    // 0x80019B6C: add.s       $f18, $f18, $f15
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f15.fl;
    // 0x80019B70: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80019B74: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80019B78: bne         $a0, $t0, L_80019B00
    if (ctx->r4 != ctx->r8) {
        // 0x80019B7C: swc1        $f18, 0x2C($a2)
        MEM_W(0X2C, ctx->r6) = ctx->f18.u32l;
            goto L_80019B00;
    }
    // 0x80019B7C: swc1        $f18, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f18.u32l;
    // 0x80019B80: lui         $t0, 0x3F80
    ctx->r8 = S32(0X3F80 << 16);
    // 0x80019B84: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80019B88: sw          $zero, 0x10($a2)
    MEM_W(0X10, ctx->r6) = 0;
    // 0x80019B8C: sw          $zero, 0x20($a2)
    MEM_W(0X20, ctx->r6) = 0;
    // 0x80019B90: sw          $t0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r8;
    // 0x80019B94: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80019B98: lui         $t1, 0x400
    ctx->r9 = S32(0X400 << 16);
    // 0x80019B9C: nor         $t1, $t1, $zero
    ctx->r9 = ~(ctx->r9 | 0);
    // 0x80019BA0: and         $t0, $t0, $t1
    ctx->r8 = ctx->r8 & ctx->r9;
    // 0x80019BA4: nop

    // 0x80019BA8: mtc0        $t0, Status
    cop0_status_write(ctx, ctx->r8);    // 0x80019BAC: nop

    // 0x80019BB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019BB8: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80019BBC: addiu       $t0, $t0, -0x4350
    ctx->r8 = ADD32(ctx->r8, -0X4350);
    // 0x80019BC0: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80019BC4: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80019BC8: lui         $t1, 0x400
    ctx->r9 = S32(0X400 << 16);
    // 0x80019BCC: or          $t0, $t0, $t1
    ctx->r8 = ctx->r8 | ctx->r9;
    // 0x80019BD0: nop

    // 0x80019BD4: mtc0        $t0, Status
    cop0_status_write(ctx, ctx->r8);    // 0x80019BD8: nop

    // 0x80019BDC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80019BE0: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x80019BE4: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80019BE8: lwc1        $f3, 0xC($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x80019BEC: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80019BF0: lwc1        $f5, 0x14($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x80019BF4: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80019BF8: lwc1        $f7, 0x1C($a0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x80019BFC: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80019C00: addiu       $t0, $a1, 0xC
    ctx->r8 = ADD32(ctx->r5, 0XC);
L_80019C04:
    // 0x80019C04: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80019C08: lwc1        $f13, 0x10($a1)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r5, 0X10);
    // 0x80019C0C: mul.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80019C10: lwc1        $f14, 0x20($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80019C14: mul.s       $f17, $f1, $f13
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f17.fl = MUL_S(ctx->f1.fl, ctx->f13.fl);
    // 0x80019C18: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80019C1C: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80019C20: add.s       $f17, $f17, $f16
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f16.fl;
    // 0x80019C24: mul.s       $f16, $f3, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f3.fl, ctx->f12.fl);
    // 0x80019C28: add.s       $f18, $f18, $f17
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f17.fl;
    // 0x80019C2C: mul.s       $f17, $f4, $f13
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f17.fl = MUL_S(ctx->f4.fl, ctx->f13.fl);
    // 0x80019C30: swc1        $f18, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f18.u32l;
    // 0x80019C34: mul.s       $f18, $f5, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f5.fl, ctx->f14.fl);
    // 0x80019C38: add.s       $f17, $f17, $f16
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f16.fl;
    // 0x80019C3C: mul.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80019C40: add.s       $f18, $f18, $f17
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f17.fl;
    // 0x80019C44: mul.s       $f17, $f7, $f13
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f17.fl = MUL_S(ctx->f7.fl, ctx->f13.fl);
    // 0x80019C48: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x80019C4C: mul.s       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80019C50: add.s       $f17, $f17, $f16
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f16.fl;
    // 0x80019C54: add.s       $f18, $f18, $f17
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f17.fl;
    // 0x80019C58: bne         $a1, $t0, L_80019C04
    if (ctx->r5 != ctx->r8) {
        // 0x80019C5C: swc1        $f18, 0x1C($a1)
        MEM_W(0X1C, ctx->r5) = ctx->f18.u32l;
            goto L_80019C04;
    }
    // 0x80019C5C: swc1        $f18, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f18.u32l;
    // 0x80019C60: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80019C64: lui         $t1, 0x400
    ctx->r9 = S32(0X400 << 16);
    // 0x80019C68: nor         $t1, $t1, $zero
    ctx->r9 = ~(ctx->r9 | 0);
    // 0x80019C6C: and         $t0, $t0, $t1
    ctx->r8 = ctx->r8 & ctx->r9;
    // 0x80019C70: nop

    // 0x80019C74: mtc0        $t0, Status
    cop0_status_write(ctx, ctx->r8);    // 0x80019C78: nop

    // 0x80019C7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019C84: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80019C88: addiu       $t0, $t0, -0x4350
    ctx->r8 = ADD32(ctx->r8, -0X4350);
    // 0x80019C8C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80019C90: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x80019C94: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
L_80019C98:
    // 0x80019C98: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80019C9C: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80019CA0: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80019CA4: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80019CA8: mul.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80019CAC: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80019CB0: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80019CB4: add.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80019CB8: add.s       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80019CBC: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80019CC0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80019CC4: bne         $v0, $v1, L_80019C98
    if (ctx->r2 != ctx->r3) {
        // 0x80019CC8: swc1        $f6, 0x2C($v0)
        MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
            goto L_80019C98;
    }
    // 0x80019CC8: swc1        $f6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
    // 0x80019CCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019CD4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80019CD8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80019CDC: addiu       $v0, $v0, -0x4B10
    ctx->r2 = ADD32(ctx->r2, -0X4B10);
    // 0x80019CE0: addiu       $v1, $v1, -0x4350
    ctx->r3 = ADD32(ctx->r3, -0X4350);
    // 0x80019CE4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80019CE8: lui         $t0, 0x3F80
    ctx->r8 = S32(0X3F80 << 16);
    // 0x80019CEC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80019CF0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80019CF4: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80019CF8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80019CFC: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x80019D00: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
    // 0x80019D04: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x80019D08: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80019D0C: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80019D10: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x80019D14: sw          $t0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r8;
    // 0x80019D18: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x80019D1C: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x80019D20: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x80019D24: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x80019D28: jr          $ra
    // 0x80019D2C: sw          $t0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r8;
    return;
    // 0x80019D2C: sw          $t0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_80019D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019D30: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80019D34: addiu       $t0, $t0, -0x4350
    ctx->r8 = ADD32(ctx->r8, -0X4350);
    // 0x80019D38: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x80019D3C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80019D40: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
L_80019D44:
    // 0x80019D44: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80019D48: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80019D4C: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80019D50: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80019D54: mul.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80019D58: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80019D5C: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80019D60: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x80019D64: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80019D68: bne         $v0, $v1, L_80019D44
    if (ctx->r2 != ctx->r3) {
        // 0x80019D6C: swc1        $f4, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
            goto L_80019D44;
    }
    // 0x80019D6C: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x80019D70: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019D78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80019D7C: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x80019D80: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80019D84: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x80019D88: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80019D8C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80019D90: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80019D94: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80019D98: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x80019D9C: jal         0x800137AC
    // 0x80019DA0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    func_800137AC(rdram, ctx);
        goto after_0;
    // 0x80019DA0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    after_0:
    // 0x80019DA4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80019DA8: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
    // 0x80019DAC: jal         0x800137AC
    // 0x80019DB0: lwc1        $f12, 0x8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8);
    func_800137AC(rdram, ctx);
        goto after_1;
    // 0x80019DB0: lwc1        $f12, 0x8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8);
    after_1:
    // 0x80019DB4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x80019DB8: mov.s       $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    ctx->f26.fl = ctx->f2.fl;
    // 0x80019DBC: jal         0x800137AC
    // 0x80019DC0: lwc1        $f12, 0xC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC);
    func_800137AC(rdram, ctx);
        goto after_2;
    // 0x80019DC0: lwc1        $f12, 0xC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC);
    after_2:
    // 0x80019DC4: mul.s       $f4, $f20, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80019DC8: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x80019DCC: mul.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80019DD0: lw          $a0, 0x4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4);
    // 0x80019DD4: mul.s       $f12, $f24, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x80019DD8: neg.s       $f16, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = -ctx->f26.fl;
    // 0x80019DDC: mul.s       $f10, $f22, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x80019DE0: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x80019DE4: mul.s       $f14, $f24, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x80019DE8: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
    // 0x80019DEC: mul.s       $f18, $f10, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x80019DF0: swc1        $f14, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f14.u32l;
    // 0x80019DF4: mul.s       $f8, $f22, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x80019DF8: sub.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80019DFC: mul.s       $f12, $f8, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x80019E00: swc1        $f18, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f18.u32l;
    // 0x80019E04: mul.s       $f14, $f22, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x80019E08: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x80019E0C: mul.s       $f16, $f6, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x80019E10: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    // 0x80019E14: mul.s       $f18, $f4, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x80019E18: swc1        $f14, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f14.u32l;
    // 0x80019E1C: mul.s       $f12, $f20, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80019E20: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x80019E24: swc1        $f16, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
    // 0x80019E28: sub.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x80019E2C: swc1        $f18, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f18.u32l;
    // 0x80019E30: swc1        $f12, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
    // 0x80019E34: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x80019E38: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80019E3C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80019E40: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80019E44: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x80019E48: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x80019E4C: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x80019E50: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80019E54: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80019E58: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x80019E5C: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x80019E60: lui         $t0, 0x3F80
    ctx->r8 = S32(0X3F80 << 16);
    // 0x80019E64: jr          $ra
    // 0x80019E68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80019E68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80019E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019E70: srl         $t0, $a2, 3
    ctx->r8 = S32(U32(ctx->r6) >> 3);
    // 0x80019E74: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80019E78: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
L_80019E7C:
    // 0x80019E7C: ld          $t1, 0x0($a1)
    ctx->r9 = LD(ctx->r5, 0X0);
    // 0x80019E80: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80019E84: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80019E88: bne         $t0, $a0, L_80019E7C
    if (ctx->r8 != ctx->r4) {
        // 0x80019E8C: sd          $t1, -0x8($a0)
        SD(ctx->r9, -0X8, ctx->r4);
            goto L_80019E7C;
    }
    // 0x80019E8C: sd          $t1, -0x8($a0)
    SD(ctx->r9, -0X8, ctx->r4);
    // 0x80019E90: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019E98: srl         $t0, $a2, 3
    ctx->r8 = S32(U32(ctx->r6) >> 3);
    // 0x80019E9C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80019EA0: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
L_80019EA4:
    // 0x80019EA4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80019EA8: sw          $a1, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->r5;
    // 0x80019EAC: bne         $t0, $a0, L_80019EA4
    if (ctx->r8 != ctx->r4) {
        // 0x80019EB0: sw          $a1, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r5;
            goto L_80019EA4;
    }
    // 0x80019EB0: sw          $a1, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r5;
    // 0x80019EB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80019EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019EC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80019EC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80019EC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80019ECC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80019ED0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80019ED4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80019ED8: jal         0x8002D780
    // 0x80019EDC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x80019EDC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x80019EE0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80019EE4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80019EE8: jal         0x8002E6E0
    // 0x80019EEC: subu        $a1, $t6, $a0
    ctx->r5 = SUB32(ctx->r14, ctx->r4);
    osInvalDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80019EEC: subu        $a1, $t6, $a0
    ctx->r5 = SUB32(ctx->r14, ctx->r4);
    after_1:
    // 0x80019EF0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80019EF4: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80019EF8: jal         0x80030AB0
    // 0x80019EFC: subu        $a1, $t7, $a0
    ctx->r5 = SUB32(ctx->r15, ctx->r4);
    osInvalICache_recomp(rdram, ctx);
        goto after_2;
    // 0x80019EFC: subu        $a1, $t7, $a0
    ctx->r5 = SUB32(ctx->r15, ctx->r4);
    after_2:
    // 0x80019F00: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x80019F04: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x80019F08: beq         $s0, $zero, L_80019F18
    if (ctx->r16 == 0) {
        // 0x80019F0C: subu        $a1, $t8, $s0
        ctx->r5 = SUB32(ctx->r24, ctx->r16);
            goto L_80019F18;
    }
    // 0x80019F0C: subu        $a1, $t8, $s0
    ctx->r5 = SUB32(ctx->r24, ctx->r16);
    // 0x80019F10: jal         0x8002E6E0
    // 0x80019F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x80019F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80019F18:
    // 0x80019F18: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80019F1C: lui         $t0, 0x8001
    ctx->r8 = S32(0X8001 << 16);
    // 0x80019F20: addiu       $t0, $t0, 0x2010
    ctx->r8 = ADD32(ctx->r8, 0X2010);
    // 0x80019F24: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x80019F28: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80019F2C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x80019F30: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80019F34: beq         $v1, $zero, L_80019F58
    if (ctx->r3 == 0) {
        // 0x80019F38: sw          $t1, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r9;
            goto L_80019F58;
    }
    // 0x80019F38: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x80019F3C: jal         0x8001A2B0
    // 0x80019F40: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_8001A2B0(rdram, ctx);
        goto after_4;
    // 0x80019F40: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_4:
    // 0x80019F44: jal         0x8001A0A8
    // 0x80019F48: nop

    func_8001A0A8(rdram, ctx);
        goto after_5;
    // 0x80019F48: nop

    after_5:
    // 0x80019F4C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80019F50: b           L_80019F60
    // 0x80019F54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_80019F60;
    // 0x80019F54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80019F58:
    // 0x80019F58: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80019F5C: lw          $a0, -0x166C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X166C);
L_80019F60:
    // 0x80019F60: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x80019F64: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x80019F68: jal         0x80012F78
    // 0x80019F6C: subu        $a2, $t2, $a1
    ctx->r6 = SUB32(ctx->r10, ctx->r5);
    rom_dma_read(rdram, ctx);
        goto after_6;
    // 0x80019F6C: subu        $a2, $t2, $a1
    ctx->r6 = SUB32(ctx->r10, ctx->r5);
    after_6:
    // 0x80019F70: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80019F74: jal         0x8001C1E0
    // 0x80019F78: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8001C1E0(rdram, ctx);
        goto after_7;
    // 0x80019F78: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_7:
    // 0x80019F7C: jal         0x8001C26C
    // 0x80019F80: nop

    func_8001C26C(rdram, ctx);
        goto after_8;
    // 0x80019F80: nop

    after_8:
    // 0x80019F84: jal         0x8001C28C
    // 0x80019F88: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8001C28C(rdram, ctx);
        goto after_9;
    // 0x80019F88: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_9:
    // 0x80019F8C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80019F90: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80019F94: jal         0x8001C1E0
    // 0x80019F98: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8001C1E0(rdram, ctx);
        goto after_10;
    // 0x80019F98: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_10:
    // 0x80019F9C: beq         $s0, $zero, L_80019FF0
    if (ctx->r16 == 0) {
        // 0x80019FA0: lw          $t3, 0x60($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X60);
            goto L_80019FF0;
    }
    // 0x80019FA0: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x80019FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80019FA8: jal         0x8002D6E0
    // 0x80019FAC: subu        $a1, $t3, $s0
    ctx->r5 = SUB32(ctx->r11, ctx->r16);
    bzero_recomp(rdram, ctx);
        goto after_11;
    // 0x80019FAC: subu        $a1, $t3, $s0
    ctx->r5 = SUB32(ctx->r11, ctx->r16);
    after_11:
    // 0x80019FB0: jal         0x8002D780
    // 0x80019FB4: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_12;
    // 0x80019FB4: nop

    after_12:
    // 0x80019FB8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80019FBC: addiu       $v1, $s0, 0x8
    ctx->r3 = ADD32(ctx->r16, 0X8);
    // 0x80019FC0: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80019FC4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80019FC8: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x80019FCC: jal         0x8001C26C
    // 0x80019FD0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8001C26C(rdram, ctx);
        goto after_13;
    // 0x80019FD0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_13:
    // 0x80019FD4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80019FD8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80019FDC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80019FE0: jal         0x8001C28C
    // 0x80019FE4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8001C28C(rdram, ctx);
        goto after_14;
    // 0x80019FE4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_14:
    // 0x80019FE8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80019FEC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80019FF0:
    // 0x80019FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80019FF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80019FF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80019FFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A010: jr          $ra
    // 0x8001A014: nop

    return;
    // 0x8001A014: nop

;}
RECOMP_FUNC void func_8001A018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A01C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A020: jal         0x8001ACCC
    // 0x8001A024: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8001A024: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_0:
    // 0x8001A028: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001A02C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A030: addiu       $a0, $a0, -0x4340
    ctx->r4 = ADD32(ctx->r4, -0X4340);
    // 0x8001A034: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8001A038: bgez        $v1, L_8001A04C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8001A03C: andi        $t6, $v1, 0x3F
        ctx->r14 = ctx->r3 & 0X3F;
            goto L_8001A04C;
    }
    // 0x8001A03C: andi        $t6, $v1, 0x3F
    ctx->r14 = ctx->r3 & 0X3F;
    // 0x8001A040: beq         $t6, $zero, L_8001A04C
    if (ctx->r14 == 0) {
        // 0x8001A044: nop
    
            goto L_8001A04C;
    }
    // 0x8001A044: nop

    // 0x8001A048: addiu       $t6, $t6, -0x40
    ctx->r14 = ADD32(ctx->r14, -0X40);
L_8001A04C:
    // 0x8001A04C: beq         $t6, $zero, L_8001A074
    if (ctx->r14 == 0) {
        // 0x8001A050: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001A074;
    }
    // 0x8001A050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A054: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_8001A058:
    // 0x8001A058: bgez        $v1, L_8001A06C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8001A05C: andi        $t7, $v1, 0x3F
        ctx->r15 = ctx->r3 & 0X3F;
            goto L_8001A06C;
    }
    // 0x8001A05C: andi        $t7, $v1, 0x3F
    ctx->r15 = ctx->r3 & 0X3F;
    // 0x8001A060: beq         $t7, $zero, L_8001A06C
    if (ctx->r15 == 0) {
        // 0x8001A064: nop
    
            goto L_8001A06C;
    }
    // 0x8001A064: nop

    // 0x8001A068: addiu       $t7, $t7, -0x40
    ctx->r15 = ADD32(ctx->r15, -0X40);
L_8001A06C:
    // 0x8001A06C: bnel        $t7, $zero, L_8001A058
    if (ctx->r15 != 0) {
        // 0x8001A070: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8001A058;
    }
    goto skip_0;
    // 0x8001A070: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    skip_0:
L_8001A074:
    // 0x8001A074: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001A078: jr          $ra
    // 0x8001A07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001A07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001A080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A088: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8001A08C: jal         0x8001A018
    // 0x8001A090: ori         $a0, $a0, 0x1D80
    ctx->r4 = ctx->r4 | 0X1D80;
    func_8001A018(rdram, ctx);
        goto after_0;
    // 0x8001A090: ori         $a0, $a0, 0x1D80
    ctx->r4 = ctx->r4 | 0X1D80;
    after_0:
    // 0x8001A094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A098: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A09C: sw          $v0, -0x433C($at)
    MEM_W(-0X433C, ctx->r1) = ctx->r2;
    // 0x8001A0A0: jr          $ra
    // 0x8001A0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001A0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001A0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A0A8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001A0AC: jr          $ra
    // 0x8001A0B0: lw          $v0, -0x433C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X433C);
    return;
    // 0x8001A0B0: lw          $v0, -0x433C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X433C);
;}
RECOMP_FUNC void func_8001A0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A0B4: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x8001A0B8: jr          $ra
    // 0x8001A0BC: ori         $v0, $v0, 0x1D80
    ctx->r2 = ctx->r2 | 0X1D80;
    return;
    // 0x8001A0BC: ori         $v0, $v0, 0x1D80
    ctx->r2 = ctx->r2 | 0X1D80;
;}
RECOMP_FUNC void func_8001A0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A0C0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8001A0C4: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8001A0C8: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001A0CC: lw          $t6, -0x433C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X433C);
    // 0x8001A0D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001A0D4: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8001A0D8: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001A0DC: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x8001A0E0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001A0E4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8001A0E8: jr          $ra
    // 0x8001A0EC: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
    return;
    // 0x8001A0EC: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
;}
RECOMP_FUNC void func_8001A0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A0F8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A0FC: addiu       $a0, $a0, -0x4120
    ctx->r4 = ADD32(ctx->r4, -0X4120);
    // 0x8001A100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001A104: jal         0x8002E1F0
    // 0x8001A108: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8001A108: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001A10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A114: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A11C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A124: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A128: addiu       $a0, $a0, -0x4120
    ctx->r4 = ADD32(ctx->r4, -0X4120);
    // 0x8001A12C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001A130: jal         0x8002EAD0
    // 0x8001A134: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8001A134: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001A138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A140: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A14C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A150: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001A154: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001A158: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001A15C: jal         0x8001A0F0
    // 0x8001A160: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8001A0F0(rdram, ctx);
        goto after_0;
    // 0x8001A160: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8001A164: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001A168: addiu       $v1, $v1, -0x4128
    ctx->r3 = ADD32(ctx->r3, -0X4128);
    // 0x8001A16C: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8001A170: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8001A174: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001A178: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8001A17C: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8001A180: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8001A184: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8001A188: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8001A18C: addiu       $t7, $t7, -0x4308
    ctx->r15 = ADD32(ctx->r15, -0X4308);
    // 0x8001A190: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x8001A194: mfhi        $t9
    ctx->r25 = hi;
    // 0x8001A198: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x8001A19C: jal         0x8001A11C
    // 0x8001A1A0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8001A11C(rdram, ctx);
        goto after_1;
    // 0x8001A1A0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8001A1A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A1A8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8001A1AC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001A1B0: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x8001A1B4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8001A1B8: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x8001A1BC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8001A1C0: sw          $t2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r10;
    // 0x8001A1C4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8001A1C8: jal         0x80013D10
    // 0x8001A1CC: sw          $t3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r11;
    func_80013D10(rdram, ctx);
        goto after_2;
    // 0x8001A1CC: sw          $t3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r11;
    after_2:
    // 0x8001A1D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A1D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A1D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A1E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A1E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A1E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001A1EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001A1F0: jal         0x8001A0F0
    // 0x8001A1F4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_8001A0F0(rdram, ctx);
        goto after_0;
    // 0x8001A1F4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x8001A1F8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001A1FC: addiu       $v1, $v1, -0x4128
    ctx->r3 = ADD32(ctx->r3, -0X4128);
    // 0x8001A200: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8001A204: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8001A208: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001A20C: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8001A210: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8001A214: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8001A218: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8001A21C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8001A220: addiu       $t7, $t7, -0x4308
    ctx->r15 = ADD32(ctx->r15, -0X4308);
    // 0x8001A224: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x8001A228: mfhi        $t9
    ctx->r25 = hi;
    // 0x8001A22C: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x8001A230: jal         0x8001A11C
    // 0x8001A234: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8001A11C(rdram, ctx);
        goto after_1;
    // 0x8001A234: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8001A238: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A23C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001A240: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x8001A244: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8001A248: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x8001A24C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8001A250: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x8001A254: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8001A258: jal         0x80013D10
    // 0x8001A25C: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    func_80013D10(rdram, ctx);
        goto after_2;
    // 0x8001A25C: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    after_2:
    // 0x8001A260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A268: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A278: jal         0x8001A1E0
    // 0x8001A27C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8001A1E0(rdram, ctx);
        goto after_0;
    // 0x8001A27C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x8001A280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A288: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A290: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A298: jal         0x80015190
    // 0x8001A29C: nop

    func_80015190(rdram, ctx);
        goto after_0;
    // 0x8001A29C: nop

    after_0:
    // 0x8001A2A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A2A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A2A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A2B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A2B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A2B8: jal         0x80013D10
    // 0x8001A2BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80013D10(rdram, ctx);
        goto after_0;
    // 0x8001A2BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8001A2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A2C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A2C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A2D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A2D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A2D8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A2DC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A2E0: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001A2E4: sh          $zero, -0x4128($at)
    MEM_H(-0X4128, ctx->r1) = 0;
    // 0x8001A2E8: addiu       $a1, $a1, -0x4108
    ctx->r5 = ADD32(ctx->r5, -0X4108);
    // 0x8001A2EC: addiu       $a0, $a0, -0x4120
    ctx->r4 = ADD32(ctx->r4, -0X4120);
    // 0x8001A2F0: jal         0x8002E070
    // 0x8001A2F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8001A2F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001A2F8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A2FC: addiu       $a0, $a0, -0x4120
    ctx->r4 = ADD32(ctx->r4, -0X4120);
    // 0x8001A300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001A304: jal         0x8002EAD0
    // 0x8001A308: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8001A308: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8001A30C: jal         0x80014C40
    // 0x8001A310: nop

    func_80014C40(rdram, ctx);
        goto after_2;
    // 0x8001A310: nop

    after_2:
    // 0x8001A314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A31C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A324: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A328: lw          $a0, -0x4330($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4330);
    // 0x8001A32C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A334: beq         $a0, $zero, L_8001A388
    if (ctx->r4 == 0) {
        // 0x8001A338: nop
    
            goto L_8001A388;
    }
    // 0x8001A338: nop

    // 0x8001A33C: jal         0x8001B084
    // 0x8001A340: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x8001A340: nop

    after_0:
    // 0x8001A344: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A348: jal         0x8001B084
    // 0x8001A34C: lw          $a0, -0x432C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X432C);
    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x8001A34C: lw          $a0, -0x432C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X432C);
    after_1:
    // 0x8001A350: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A354: jal         0x8001B084
    // 0x8001A358: lw          $a0, -0x4328($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4328);
    func_8001B084(rdram, ctx);
        goto after_2;
    // 0x8001A358: lw          $a0, -0x4328($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4328);
    after_2:
    // 0x8001A35C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A360: jal         0x8001B084
    // 0x8001A364: lw          $a0, -0x4324($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4324);
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x8001A364: lw          $a0, -0x4324($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4324);
    after_3:
    // 0x8001A368: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A36C: jal         0x8001B084
    // 0x8001A370: lw          $a0, -0x4320($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4320);
    func_8001B084(rdram, ctx);
        goto after_4;
    // 0x8001A370: lw          $a0, -0x4320($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4320);
    after_4:
    // 0x8001A374: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A378: jal         0x8001B084
    // 0x8001A37C: lw          $a0, -0x431C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X431C);
    func_8001B084(rdram, ctx);
        goto after_5;
    // 0x8001A37C: lw          $a0, -0x431C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X431C);
    after_5:
    // 0x8001A380: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A384: sw          $zero, -0x4330($at)
    MEM_W(-0X4330, ctx->r1) = 0;
L_8001A388:
    // 0x8001A388: jal         0x8001A63C
    // 0x8001A38C: nop

    func_8001A63C(rdram, ctx);
        goto after_6;
    // 0x8001A38C: nop

    after_6:
    // 0x8001A390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A398: jr          $ra
    // 0x8001A39C: nop

    return;
    // 0x8001A39C: nop

;}
RECOMP_FUNC void func_8001A3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A3A0: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001A3A4: lw          $t6, -0x4330($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4330);
    // 0x8001A3A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A3AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A3B0: bne         $t6, $zero, L_8001A424
    if (ctx->r14 != 0) {
        // 0x8001A3B4: nop
    
            goto L_8001A424;
    }
    // 0x8001A3B4: nop

    // 0x8001A3B8: jal         0x8001ACCC
    // 0x8001A3BC: addiu       $a0, $zero, 0x76C0
    ctx->r4 = ADD32(0, 0X76C0);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8001A3BC: addiu       $a0, $zero, 0x76C0
    ctx->r4 = ADD32(0, 0X76C0);
    after_0:
    // 0x8001A3C0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A3C4: sw          $v0, -0x4330($at)
    MEM_W(-0X4330, ctx->r1) = ctx->r2;
    // 0x8001A3C8: jal         0x8001ACCC
    // 0x8001A3CC: addiu       $a0, $zero, 0x76C0
    ctx->r4 = ADD32(0, 0X76C0);
    func_8001ACCC(rdram, ctx);
        goto after_1;
    // 0x8001A3CC: addiu       $a0, $zero, 0x76C0
    ctx->r4 = ADD32(0, 0X76C0);
    after_1:
    // 0x8001A3D0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A3D4: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x8001A3D8: sw          $v0, -0x432C($at)
    MEM_W(-0X432C, ctx->r1) = ctx->r2;
    // 0x8001A3DC: jal         0x8001ACCC
    // 0x8001A3E0: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    func_8001ACCC(rdram, ctx);
        goto after_2;
    // 0x8001A3E0: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    after_2:
    // 0x8001A3E4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A3E8: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x8001A3EC: sw          $v0, -0x4328($at)
    MEM_W(-0X4328, ctx->r1) = ctx->r2;
    // 0x8001A3F0: jal         0x8001ACCC
    // 0x8001A3F4: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    func_8001ACCC(rdram, ctx);
        goto after_3;
    // 0x8001A3F4: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    after_3:
    // 0x8001A3F8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A3FC: sw          $v0, -0x4324($at)
    MEM_W(-0X4324, ctx->r1) = ctx->r2;
    // 0x8001A400: jal         0x8001ACCC
    // 0x8001A404: addiu       $a0, $zero, 0x1AE0
    ctx->r4 = ADD32(0, 0X1AE0);
    func_8001ACCC(rdram, ctx);
        goto after_4;
    // 0x8001A404: addiu       $a0, $zero, 0x1AE0
    ctx->r4 = ADD32(0, 0X1AE0);
    after_4:
    // 0x8001A408: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A40C: sw          $v0, -0x4320($at)
    MEM_W(-0X4320, ctx->r1) = ctx->r2;
    // 0x8001A410: jal         0x8001ACCC
    // 0x8001A414: addiu       $a0, $zero, 0x1AE0
    ctx->r4 = ADD32(0, 0X1AE0);
    func_8001ACCC(rdram, ctx);
        goto after_5;
    // 0x8001A414: addiu       $a0, $zero, 0x1AE0
    ctx->r4 = ADD32(0, 0X1AE0);
    after_5:
    // 0x8001A418: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A41C: jal         0x8001A570
    // 0x8001A420: sw          $v0, -0x431C($at)
    MEM_W(-0X431C, ctx->r1) = ctx->r2;
    func_8001A570(rdram, ctx);
        goto after_6;
    // 0x8001A420: sw          $v0, -0x431C($at)
    MEM_W(-0X431C, ctx->r1) = ctx->r2;
    after_6:
L_8001A424:
    // 0x8001A424: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A428: jal         0x800A9800
    // 0x8001A42C: sh          $zero, -0x4126($at)
    MEM_H(-0X4126, ctx->r1) = 0;
    func_800A9800(rdram, ctx);
        goto after_7;
    // 0x8001A42C: sh          $zero, -0x4126($at)
    MEM_H(-0X4126, ctx->r1) = 0;
    after_7:
    // 0x8001A430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A438: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A448: jal         0x8001A0F0
    // 0x8001A44C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8001A0F0(rdram, ctx);
        goto after_0;
    // 0x8001A44C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001A450: jal         0x80015430
    // 0x8001A454: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80015430(rdram, ctx);
        goto after_1;
    // 0x8001A454: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8001A458: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001A45C: addiu       $v1, $v1, -0x4128
    ctx->r3 = ADD32(ctx->r3, -0X4128);
    // 0x8001A460: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8001A464: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8001A468: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001A46C: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8001A470: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8001A474: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8001A478: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8001A47C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8001A480: addiu       $t7, $t7, -0x4308
    ctx->r15 = ADD32(ctx->r15, -0X4308);
    // 0x8001A484: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x8001A488: mfhi        $t9
    ctx->r25 = hi;
    // 0x8001A48C: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x8001A490: jal         0x8001A11C
    // 0x8001A494: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8001A11C(rdram, ctx);
        goto after_2;
    // 0x8001A494: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_2:
    // 0x8001A498: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A49C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8001A4A0: jal         0x80013D10
    // 0x8001A4A4: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    func_80013D10(rdram, ctx);
        goto after_3;
    // 0x8001A4A4: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    after_3:
    // 0x8001A4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A4AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A4B0: jr          $ra
    // 0x8001A4B4: nop

    return;
    // 0x8001A4B4: nop

;}
RECOMP_FUNC void func_8001A4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A4B8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001A4BC: addiu       $v0, $v0, -0x4126
    ctx->r2 = ADD32(ctx->r2, -0X4126);
    // 0x8001A4C0: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001A4C4: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x8001A4C8: addiu       $v1, $v1, -0x4318
    ctx->r3 = ADD32(ctx->r3, -0X4318);
    // 0x8001A4CC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8001A4D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001A4D4: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x8001A4D8: beq         $t9, $zero, L_8001A4F8
    if (ctx->r25 == 0) {
        // 0x8001A4DC: sh          $t8, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r24;
            goto L_8001A4F8;
    }
    // 0x8001A4DC: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x8001A4E0: lh          $t0, 0x0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X0);
    // 0x8001A4E4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001A4E8: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x8001A4EC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8001A4F0: b           L_8001A510
    // 0x8001A4F4: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
        goto L_8001A510;
    // 0x8001A4F4: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
L_8001A4F8:
    // 0x8001A4F8: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x8001A4FC: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001A500: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8001A504: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8001A508: lw          $t7, -0x4330($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4330);
    // 0x8001A50C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_8001A510:
    // 0x8001A510: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001A514: addiu       $v1, $v1, -0x4310
    ctx->r3 = ADD32(ctx->r3, -0X4310);
    // 0x8001A518: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8001A51C: beql        $t6, $zero, L_8001A540
    if (ctx->r14 == 0) {
        // 0x8001A520: lh          $t2, 0x0($v0)
        ctx->r10 = MEM_H(ctx->r2, 0X0);
            goto L_8001A540;
    }
    goto skip_0;
    // 0x8001A520: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    skip_0:
    // 0x8001A524: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x8001A528: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8001A52C: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x8001A530: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8001A534: b           L_8001A554
    // 0x8001A538: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
        goto L_8001A554;
    // 0x8001A538: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x8001A53C: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
L_8001A540:
    // 0x8001A540: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x8001A544: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8001A548: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001A54C: lw          $t4, -0x4328($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4328);
    // 0x8001A550: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
L_8001A554:
    // 0x8001A554: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x8001A558: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001A55C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8001A560: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8001A564: lw          $t6, -0x4320($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4320);
    // 0x8001A568: jr          $ra
    // 0x8001A56C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    return;
    // 0x8001A56C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8001A570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A570: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A578: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001A57C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A580: jal         0x800D3948
    // 0x8001A584: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_800D3948(rdram, ctx);
        goto after_0;
    // 0x8001A584: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001A588: beq         $v0, $zero, L_8001A62C
    if (ctx->r2 == 0) {
        // 0x8001A58C: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_8001A62C;
    }
    // 0x8001A58C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8001A590: beq         $a0, $zero, L_8001A5C0
    if (ctx->r4 == 0) {
        // 0x8001A594: addiu       $v0, $zero, 0x1388
        ctx->r2 = ADD32(0, 0X1388);
            goto L_8001A5C0;
    }
    // 0x8001A594: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    // 0x8001A598: sll         $v1, $a0, 4
    ctx->r3 = S32(ctx->r4 << 4);
    // 0x8001A59C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8001A5A0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8001A5A4: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8001A5A8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8001A5AC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8001A5B0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001A5B4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8001A5B8: b           L_8001A5C4
    // 0x8001A5BC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
        goto L_8001A5C4;
    // 0x8001A5BC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_8001A5C0:
    // 0x8001A5C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001A5C4:
    // 0x8001A5C4: beq         $v0, $zero, L_8001A5FC
    if (ctx->r2 == 0) {
        // 0x8001A5C8: sll         $a0, $v0, 3
        ctx->r4 = S32(ctx->r2 << 3);
            goto L_8001A5FC;
    }
    // 0x8001A5C8: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x8001A5CC: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8001A5D0: jal         0x8001ACCC
    // 0x8001A5D4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8001ACCC(rdram, ctx);
        goto after_1;
    // 0x8001A5D4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8001A5D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A5DC: jal         0x8001ACCC
    // 0x8001A5E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_8001ACCC(rdram, ctx);
        goto after_2;
    // 0x8001A5E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_2:
    // 0x8001A5E4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8001A5E8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A5EC: addiu       $a0, $a0, -0x4318
    ctx->r4 = ADD32(ctx->r4, -0X4318);
    // 0x8001A5F0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8001A5F4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8001A5F8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_8001A5FC:
    // 0x8001A5FC: beq         $v1, $zero, L_8001A62C
    if (ctx->r3 == 0) {
        // 0x8001A600: sll         $a0, $v1, 6
        ctx->r4 = S32(ctx->r3 << 6);
            goto L_8001A62C;
    }
    // 0x8001A600: sll         $a0, $v1, 6
    ctx->r4 = S32(ctx->r3 << 6);
    // 0x8001A604: jal         0x8001ACCC
    // 0x8001A608: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8001ACCC(rdram, ctx);
        goto after_3;
    // 0x8001A608: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_3:
    // 0x8001A60C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A610: jal         0x8001ACCC
    // 0x8001A614: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8001ACCC(rdram, ctx);
        goto after_4;
    // 0x8001A614: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_4:
    // 0x8001A618: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001A61C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001A620: addiu       $v1, $v1, -0x4310
    ctx->r3 = ADD32(ctx->r3, -0X4310);
    // 0x8001A624: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8001A628: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_8001A62C:
    // 0x8001A62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A630: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001A634: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A63C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A640: lw          $a0, -0x4318($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4318);
    // 0x8001A644: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001A648: lw          $t6, -0x4310($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4310);
    // 0x8001A64C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A654: beq         $a0, $zero, L_8001A678
    if (ctx->r4 == 0) {
        // 0x8001A658: sw          $t6, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r14;
            goto L_8001A678;
    }
    // 0x8001A658: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8001A65C: jal         0x8001B084
    // 0x8001A660: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x8001A660: nop

    after_0:
    // 0x8001A664: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A668: jal         0x8001B084
    // 0x8001A66C: lw          $a0, -0x4314($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4314);
    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x8001A66C: lw          $a0, -0x4314($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4314);
    after_1:
    // 0x8001A670: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A674: sw          $zero, -0x4318($at)
    MEM_W(-0X4318, ctx->r1) = 0;
L_8001A678:
    // 0x8001A678: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8001A67C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A680: beql        $t7, $zero, L_8001A6A8
    if (ctx->r15 == 0) {
        // 0x8001A684: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001A6A8;
    }
    goto skip_0;
    // 0x8001A684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8001A688: jal         0x8001B084
    // 0x8001A68C: lw          $a0, -0x4310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4310);
    func_8001B084(rdram, ctx);
        goto after_2;
    // 0x8001A68C: lw          $a0, -0x4310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4310);
    after_2:
    // 0x8001A690: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001A694: jal         0x8001B084
    // 0x8001A698: lw          $a0, -0x430C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430C);
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x8001A698: lw          $a0, -0x430C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430C);
    after_3:
    // 0x8001A69C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001A6A0: sw          $zero, -0x4310($at)
    MEM_W(-0X4310, ctx->r1) = 0;
    // 0x8001A6A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001A6A8:
    // 0x8001A6A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A6AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A6C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A6C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A6C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001A6CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001A6D0: jal         0x8001E5DC
    // 0x8001A6D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8001E5DC(rdram, ctx);
        goto after_0;
    // 0x8001A6D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8001A6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A6E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001A6E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A6EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A6F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A6F4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8001A6F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001A6FC: lbu         $t6, 0xF($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XF);
    // 0x8001A700: srl         $t7, $t6, 6
    ctx->r15 = S32(U32(ctx->r14) >> 6);
    // 0x8001A704: bnel        $t7, $zero, L_8001A73C
    if (ctx->r15 != 0) {
        // 0x8001A708: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_8001A73C;
    }
    goto skip_0;
    // 0x8001A708: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x8001A70C: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x8001A710: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8001A714: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8001A718: sw          $t8, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r24;
    // 0x8001A71C: lw          $t1, 0x10($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X10);
    // 0x8001A720: lw          $t0, 0x14($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X14);
    // 0x8001A724: sw          $t0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r8;
    // 0x8001A728: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x8001A72C: sw          $a0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r4;
    // 0x8001A730: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x8001A734: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x8001A738: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_8001A73C:
    // 0x8001A73C: lbu         $t4, 0xF($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XF);
    // 0x8001A740: srl         $t5, $t4, 6
    ctx->r13 = S32(U32(ctx->r12) >> 6);
    // 0x8001A744: bne         $t5, $zero, L_8001A780
    if (ctx->r13 != 0) {
        // 0x8001A748: nop
    
            goto L_8001A780;
    }
    // 0x8001A748: nop

    // 0x8001A74C: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x8001A750: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x8001A754: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8001A758: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    // 0x8001A75C: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x8001A760: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x8001A764: sw          $t8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r24;
    // 0x8001A768: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x8001A76C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8001A770: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8001A774: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x8001A778: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8001A77C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
L_8001A780:
    // 0x8001A780: beq         $a1, $zero, L_8001A798
    if (ctx->r5 == 0) {
        // 0x8001A784: nop
    
            goto L_8001A798;
    }
    // 0x8001A784: nop

    // 0x8001A788: jal         0x8001AF14
    // 0x8001A78C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8001AF14(rdram, ctx);
        goto after_0;
    // 0x8001A78C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8001A790: b           L_8001A7A4
    // 0x8001A794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001A7A4;
    // 0x8001A794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001A798:
    // 0x8001A798: jal         0x8001AF14
    // 0x8001A79C: nop

    func_8001AF14(rdram, ctx);
        goto after_1;
    // 0x8001A79C: nop

    after_1:
    // 0x8001A7A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001A7A4:
    // 0x8001A7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A7A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001A7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A7B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A7B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001A7B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001A7BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001A7C0: lbu         $t6, 0xF($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XF);
    // 0x8001A7C4: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8001A7C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001A7CC: andi        $t8, $t6, 0xFF3F
    ctx->r24 = ctx->r14 & 0XFF3F;
    // 0x8001A7D0: andi        $t0, $t8, 0xF7
    ctx->r8 = ctx->r24 & 0XF7;
    // 0x8001A7D4: sb          $t8, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r24;
    // 0x8001A7D8: andi        $t2, $t0, 0xFB
    ctx->r10 = ctx->r8 & 0XFB;
    // 0x8001A7DC: sb          $t0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r8;
    // 0x8001A7E0: sb          $t2, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r10;
    // 0x8001A7E4: andi        $t3, $t2, 0xFC
    ctx->r11 = ctx->r10 & 0XFC;
    // 0x8001A7E8: sb          $t3, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r11;
    // 0x8001A7EC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8001A7F0: subu        $t8, $t7, $a0
    ctx->r24 = SUB32(ctx->r15, ctx->r4);
    // 0x8001A7F4: slti        $at, $t8, 0x2710
    ctx->r1 = SIGNED(ctx->r24) < 0X2710 ? 1 : 0;
    // 0x8001A7F8: srl         $t4, $v0, 8
    ctx->r12 = S32(U32(ctx->r2) >> 8);
    // 0x8001A7FC: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x8001A800: xor         $t6, $t5, $v0
    ctx->r14 = ctx->r13 ^ ctx->r2;
    // 0x8001A804: beq         $at, $zero, L_8001A840
    if (ctx->r1 == 0) {
        // 0x8001A808: sw          $t6, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r14;
            goto L_8001A840;
    }
    // 0x8001A808: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    // 0x8001A80C: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x8001A810: addiu       $s1, $s1, -0x1670
    ctx->r17 = ADD32(ctx->r17, -0X1670);
    // 0x8001A814: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8001A818: sw          $t9, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r25;
    // 0x8001A81C: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8001A820: lw          $t1, 0x14($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X14);
    // 0x8001A824: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    // 0x8001A828: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8001A82C: lw          $t3, 0x14($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X14);
    // 0x8001A830: sw          $a0, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r4;
    // 0x8001A834: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8001A838: b           L_8001A898
    // 0x8001A83C: sw          $a0, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->r4;
        goto L_8001A898;
    // 0x8001A83C: sw          $a0, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->r4;
L_8001A840:
    // 0x8001A840: jal         0x8001B3E8
    // 0x8001A844: nop

    func_8001B3E8(rdram, ctx);
        goto after_0;
    // 0x8001A844: nop

    after_0:
    // 0x8001A848: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x8001A84C: addiu       $s1, $s1, -0x1670
    ctx->r17 = ADD32(ctx->r17, -0X1670);
    // 0x8001A850: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x8001A854: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x8001A858: lw          $t7, -0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X10);
    // 0x8001A85C: jal         0x8001B3E8
    // 0x8001A860: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
    func_8001B3E8(rdram, ctx);
        goto after_1;
    // 0x8001A860: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
    after_1:
    // 0x8001A864: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8001A868: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8001A86C: addiu       $t0, $t9, -0x20
    ctx->r8 = ADD32(ctx->r25, -0X20);
    // 0x8001A870: jal         0x8001B3E8
    // 0x8001A874: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    func_8001B3E8(rdram, ctx);
        goto after_2;
    // 0x8001A874: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    after_2:
    // 0x8001A878: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8001A87C: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8001A880: lw          $t3, -0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, -0X10);
    // 0x8001A884: jal         0x8001B3E8
    // 0x8001A888: sw          $s0, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r16;
    func_8001B3E8(rdram, ctx);
        goto after_3;
    // 0x8001A888: sw          $s0, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r16;
    after_3:
    // 0x8001A88C: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8001A890: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8001A894: sw          $s0, -0x10($t5)
    MEM_W(-0X10, ctx->r13) = ctx->r16;
L_8001A898:
    // 0x8001A898: jal         0x8001A6EC
    // 0x8001A89C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001A6EC(rdram, ctx);
        goto after_4;
    // 0x8001A89C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8001A8A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A8A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001A8A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001A8AC: jr          $ra
    // 0x8001A8B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001A8B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8001A8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A8B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001A8B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001A8BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001A8C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001A8C4: jal         0x8001E830
    // 0x8001A8C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_8001E830(rdram, ctx);
        goto after_0;
    // 0x8001A8C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_0:
    // 0x8001A8CC: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001A8D0: addiu       $v1, $v1, -0x4100
    ctx->r3 = ADD32(ctx->r3, -0X4100);
    // 0x8001A8D4: beq         $s0, $zero, L_8001A8F8
    if (ctx->r16 == 0) {
        // 0x8001A8D8: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_8001A8F8;
    }
    // 0x8001A8D8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8001A8DC: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x8001A8E0: addiu       $s1, $s1, -0x1670
    ctx->r17 = ADD32(ctx->r17, -0X1670);
    // 0x8001A8E4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A8E8: jal         0x8002D6E0
    // 0x8001A8EC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8001A8EC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8001A8F0: jal         0x8002D780
    // 0x8001A8F4: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_2;
    // 0x8001A8F4: nop

    after_2:
L_8001A8F8:
    // 0x8001A8F8: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x8001A8FC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8001A900: addiu       $s1, $s1, -0x1670
    ctx->r17 = ADD32(ctx->r17, -0X1670);
    // 0x8001A904: sw          $zero, -0x8B0($at)
    MEM_W(-0X8B0, ctx->r1) = 0;
    // 0x8001A908: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8001A90C: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8001A910: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A914: addiu       $t7, $s0, 0x20
    ctx->r15 = ADD32(ctx->r16, 0X20);
    // 0x8001A918: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x8001A91C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A920: lbu         $t8, 0xF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XF);
    // 0x8001A924: andi        $t9, $t8, 0xFF3F
    ctx->r25 = ctx->r24 & 0XFF3F;
    // 0x8001A928: ori         $t0, $t9, 0x80
    ctx->r8 = ctx->r25 | 0X80;
    // 0x8001A92C: sb          $t0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r8;
    // 0x8001A930: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A934: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8001A938: srl         $t1, $v0, 8
    ctx->r9 = S32(U32(ctx->r2) >> 8);
    // 0x8001A93C: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x8001A940: xor         $t3, $t2, $v0
    ctx->r11 = ctx->r10 ^ ctx->r2;
    // 0x8001A944: sw          $t3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r11;
    // 0x8001A948: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8001A94C: sw          $zero, 0x10($t4)
    MEM_W(0X10, ctx->r12) = 0;
    // 0x8001A950: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A954: addiu       $t5, $s0, 0x20
    ctx->r13 = ADD32(ctx->r16, 0X20);
    // 0x8001A958: sw          $t5, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r13;
    // 0x8001A95C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A960: lbu         $t6, 0xF($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XF);
    // 0x8001A964: andi        $t7, $t6, 0xFFF7
    ctx->r15 = ctx->r14 & 0XFFF7;
    // 0x8001A968: sb          $t7, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r15;
    // 0x8001A96C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A970: lbu         $t8, 0xF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XF);
    // 0x8001A974: andi        $t9, $t8, 0xFFFB
    ctx->r25 = ctx->r24 & 0XFFFB;
    // 0x8001A978: sb          $t9, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r25;
    // 0x8001A97C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A980: jal         0x8001B3E8
    // 0x8001A984: sw          $s0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r16;
    func_8001B3E8(rdram, ctx);
        goto after_3;
    // 0x8001A984: sw          $s0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r16;
    after_3:
    // 0x8001A988: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A98C: addu        $t0, $v0, $s0
    ctx->r8 = ADD32(ctx->r2, ctx->r16);
    // 0x8001A990: addiu       $t1, $t0, -0x20
    ctx->r9 = ADD32(ctx->r8, -0X20);
    // 0x8001A994: sw          $t1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r9;
    // 0x8001A998: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A99C: lbu         $t2, 0x2F($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2F);
    // 0x8001A9A0: andi        $t3, $t2, 0xFF3F
    ctx->r11 = ctx->r10 & 0XFF3F;
    // 0x8001A9A4: sb          $t3, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r11;
    // 0x8001A9A8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A9AC: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8001A9B0: srl         $t4, $v1, 8
    ctx->r12 = S32(U32(ctx->r3) >> 8);
    // 0x8001A9B4: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x8001A9B8: xor         $t6, $t5, $v1
    ctx->r14 = ctx->r13 ^ ctx->r3;
    // 0x8001A9BC: sw          $t6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r14;
    // 0x8001A9C0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A9C4: jal         0x8001B3E8
    // 0x8001A9C8: sw          $s0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r16;
    func_8001B3E8(rdram, ctx);
        goto after_4;
    // 0x8001A9C8: sw          $s0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r16;
    after_4:
    // 0x8001A9CC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A9D0: addu        $t7, $v0, $s0
    ctx->r15 = ADD32(ctx->r2, ctx->r16);
    // 0x8001A9D4: addiu       $t8, $t7, -0x20
    ctx->r24 = ADD32(ctx->r15, -0X20);
    // 0x8001A9D8: sw          $t8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r24;
    // 0x8001A9DC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A9E0: lbu         $t9, 0x2F($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2F);
    // 0x8001A9E4: andi        $t0, $t9, 0xFFF7
    ctx->r8 = ctx->r25 & 0XFFF7;
    // 0x8001A9E8: sb          $t0, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r8;
    // 0x8001A9EC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001A9F0: lbu         $t1, 0x2F($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2F);
    // 0x8001A9F4: andi        $t2, $t1, 0xFFFB
    ctx->r10 = ctx->r9 & 0XFFFB;
    // 0x8001A9F8: jal         0x8001B3E8
    // 0x8001A9FC: sb          $t2, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r10;
    func_8001B3E8(rdram, ctx);
        goto after_5;
    // 0x8001A9FC: sb          $t2, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r10;
    after_5:
    // 0x8001AA00: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001AA04: addiu       $t3, $s0, 0x20
    ctx->r11 = ADD32(ctx->r16, 0X20);
    // 0x8001AA08: addu        $t4, $s0, $v0
    ctx->r12 = ADD32(ctx->r16, ctx->r2);
    // 0x8001AA0C: jal         0x8001B3E8
    // 0x8001AA10: sw          $t3, -0x20($t4)
    MEM_W(-0X20, ctx->r12) = ctx->r11;
    func_8001B3E8(rdram, ctx);
        goto after_6;
    // 0x8001AA10: sw          $t3, -0x20($t4)
    MEM_W(-0X20, ctx->r12) = ctx->r11;
    after_6:
    // 0x8001AA14: jal         0x8001B3E8
    // 0x8001AA18: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8001B3E8(rdram, ctx);
        goto after_7;
    // 0x8001AA18: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_7:
    // 0x8001AA1C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001AA20: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001AA24: addu        $t5, $v0, $s0
    ctx->r13 = ADD32(ctx->r2, ctx->r16);
    // 0x8001AA28: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8001AA2C: jal         0x8001B3E8
    // 0x8001AA30: sw          $t5, -0x1C($t7)
    MEM_W(-0X1C, ctx->r15) = ctx->r13;
    func_8001B3E8(rdram, ctx);
        goto after_8;
    // 0x8001AA30: sw          $t5, -0x1C($t7)
    MEM_W(-0X1C, ctx->r15) = ctx->r13;
    after_8:
    // 0x8001AA34: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8001AA38: addu        $s0, $t8, $v0
    ctx->r16 = ADD32(ctx->r24, ctx->r2);
    // 0x8001AA3C: lbu         $t9, -0x11($s0)
    ctx->r25 = MEM_BU(ctx->r16, -0X11);
    // 0x8001AA40: andi        $t0, $t9, 0xFF3F
    ctx->r8 = ctx->r25 & 0XFF3F;
    // 0x8001AA44: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x8001AA48: jal         0x8001B3E8
    // 0x8001AA4C: sb          $t1, -0x11($s0)
    MEM_B(-0X11, ctx->r16) = ctx->r9;
    func_8001B3E8(rdram, ctx);
        goto after_9;
    // 0x8001AA4C: sb          $t1, -0x11($s0)
    MEM_B(-0X11, ctx->r16) = ctx->r9;
    after_9:
    // 0x8001AA50: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8001AA54: addu        $s0, $t2, $v0
    ctx->r16 = ADD32(ctx->r10, ctx->r2);
    // 0x8001AA58: lw          $v1, -0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X14);
    // 0x8001AA5C: srl         $t3, $v1, 8
    ctx->r11 = S32(U32(ctx->r3) >> 8);
    // 0x8001AA60: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x8001AA64: xor         $t6, $t4, $v1
    ctx->r14 = ctx->r12 ^ ctx->r3;
    // 0x8001AA68: jal         0x8001B3E8
    // 0x8001AA6C: sw          $t6, -0x14($s0)
    MEM_W(-0X14, ctx->r16) = ctx->r14;
    func_8001B3E8(rdram, ctx);
        goto after_10;
    // 0x8001AA6C: sw          $t6, -0x14($s0)
    MEM_W(-0X14, ctx->r16) = ctx->r14;
    after_10:
    // 0x8001AA70: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8001AA74: addiu       $t5, $s0, 0x20
    ctx->r13 = ADD32(ctx->r16, 0X20);
    // 0x8001AA78: addu        $t7, $s0, $v0
    ctx->r15 = ADD32(ctx->r16, ctx->r2);
    // 0x8001AA7C: jal         0x8001B3E8
    // 0x8001AA80: sw          $t5, -0x10($t7)
    MEM_W(-0X10, ctx->r15) = ctx->r13;
    func_8001B3E8(rdram, ctx);
        goto after_11;
    // 0x8001AA80: sw          $t5, -0x10($t7)
    MEM_W(-0X10, ctx->r15) = ctx->r13;
    after_11:
    // 0x8001AA84: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8001AA88: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8001AA8C: jal         0x8001B3E8
    // 0x8001AA90: sw          $zero, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = 0;
    func_8001B3E8(rdram, ctx);
        goto after_12;
    // 0x8001AA90: sw          $zero, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = 0;
    after_12:
    // 0x8001AA94: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8001AA98: addu        $s0, $t0, $v0
    ctx->r16 = ADD32(ctx->r8, ctx->r2);
    // 0x8001AA9C: lbu         $t1, -0x11($s0)
    ctx->r9 = MEM_BU(ctx->r16, -0X11);
    // 0x8001AAA0: andi        $t2, $t1, 0xFFF7
    ctx->r10 = ctx->r9 & 0XFFF7;
    // 0x8001AAA4: jal         0x8001B3E8
    // 0x8001AAA8: sb          $t2, -0x11($s0)
    MEM_B(-0X11, ctx->r16) = ctx->r10;
    func_8001B3E8(rdram, ctx);
        goto after_13;
    // 0x8001AAA8: sb          $t2, -0x11($s0)
    MEM_B(-0X11, ctx->r16) = ctx->r10;
    after_13:
    // 0x8001AAAC: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x8001AAB0: addu        $s0, $t3, $v0
    ctx->r16 = ADD32(ctx->r11, ctx->r2);
    // 0x8001AAB4: lbu         $t4, -0x11($s0)
    ctx->r12 = MEM_BU(ctx->r16, -0X11);
    // 0x8001AAB8: andi        $t6, $t4, 0xFFFB
    ctx->r14 = ctx->r12 & 0XFFFB;
    // 0x8001AABC: jal         0x8001B4B0
    // 0x8001AAC0: sb          $t6, -0x11($s0)
    MEM_B(-0X11, ctx->r16) = ctx->r14;
    func_8001B4B0(rdram, ctx);
        goto after_14;
    // 0x8001AAC0: sb          $t6, -0x11($s0)
    MEM_B(-0X11, ctx->r16) = ctx->r14;
    after_14:
    // 0x8001AAC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AAC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001AACC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001AAD0: jr          $ra
    // 0x8001AAD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001AAD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001AAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AAD8: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x8001AADC: jr          $ra
    // 0x8001AAE0: lw          $v0, -0x8B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X8B0);
    return;
    // 0x8001AAE0: lw          $v0, -0x8B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X8B0);
;}
RECOMP_FUNC void func_8001AAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AAE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001AAE8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001AAEC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8001AAF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001AAF4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001AAF8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001AAFC: beq         $a1, $zero, L_8001ABC4
    if (ctx->r5 == 0) {
        // 0x8001AB00: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8001ABC4;
    }
    // 0x8001AB00: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001AB04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001AB08: beq         $a1, $at, L_8001AB24
    if (ctx->r5 == ctx->r1) {
        // 0x8001AB0C: lui         $s2, 0x8008
        ctx->r18 = S32(0X8008 << 16);
            goto L_8001AB24;
    }
    // 0x8001AB0C: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x8001AB10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001AB14: beq         $a1, $at, L_8001AC70
    if (ctx->r5 == ctx->r1) {
        // 0x8001AB18: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001AC70;
    }
    // 0x8001AB18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001AB1C: b           L_8001AC80
    // 0x8001AB20: nop

        goto L_8001AC80;
    // 0x8001AB20: nop

L_8001AB24:
    // 0x8001AB24: addiu       $s2, $s2, -0x1670
    ctx->r18 = ADD32(ctx->r18, -0X1670);
    // 0x8001AB28: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8001AB2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8001AB30: jal         0x8001B3E8
    // 0x8001AB34: lw          $s0, 0x14($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X14);
    func_8001B3E8(rdram, ctx);
        goto after_0;
    // 0x8001AB34: lw          $s0, 0x14($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X14);
    after_0:
    // 0x8001AB38: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8001AB3C: addiu       $t7, $s0, 0x20
    ctx->r15 = ADD32(ctx->r16, 0X20);
    // 0x8001AB40: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8001AB44: beq         $t7, $t9, L_8001AB8C
    if (ctx->r15 == ctx->r25) {
        // 0x8001AB48: nop
    
            goto L_8001AB8C;
    }
    // 0x8001AB48: nop

    // 0x8001AB4C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
L_8001AB50:
    // 0x8001AB50: subu        $t1, $t0, $s0
    ctx->r9 = SUB32(ctx->r8, ctx->r16);
    // 0x8001AB54: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8001AB58: sltu        $at, $t2, $s3
    ctx->r1 = ctx->r10 < ctx->r19 ? 1 : 0;
    // 0x8001AB5C: bne         $at, $zero, L_8001AB70
    if (ctx->r1 != 0) {
        // 0x8001AB60: sltu        $at, $s1, $s0
        ctx->r1 = ctx->r17 < ctx->r16 ? 1 : 0;
            goto L_8001AB70;
    }
    // 0x8001AB60: sltu        $at, $s1, $s0
    ctx->r1 = ctx->r17 < ctx->r16 ? 1 : 0;
    // 0x8001AB64: beq         $at, $zero, L_8001AB70
    if (ctx->r1 == 0) {
        // 0x8001AB68: nop
    
            goto L_8001AB70;
    }
    // 0x8001AB68: nop

    // 0x8001AB6C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_8001AB70:
    // 0x8001AB70: jal         0x8001B3E8
    // 0x8001AB74: lw          $s0, 0x14($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X14);
    func_8001B3E8(rdram, ctx);
        goto after_1;
    // 0x8001AB74: lw          $s0, 0x14($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X14);
    after_1:
    // 0x8001AB78: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x8001AB7C: addiu       $t3, $s0, 0x20
    ctx->r11 = ADD32(ctx->r16, 0X20);
    // 0x8001AB80: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x8001AB84: bnel        $t3, $t5, L_8001AB50
    if (ctx->r11 != ctx->r13) {
        // 0x8001AB88: lw          $t0, 0x4($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X4);
            goto L_8001AB50;
    }
    goto skip_0;
    // 0x8001AB88: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    skip_0:
L_8001AB8C:
    // 0x8001AB8C: bnel        $s1, $zero, L_8001ABA0
    if (ctx->r17 != 0) {
        // 0x8001AB90: lw          $t6, 0x4($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X4);
            goto L_8001ABA0;
    }
    goto skip_1;
    // 0x8001AB90: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    skip_1:
    // 0x8001AB94: b           L_8001AC80
    // 0x8001AB98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001AC80;
    // 0x8001AB98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001AB9C: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
L_8001ABA0:
    // 0x8001ABA0: subu        $t8, $t6, $s1
    ctx->r24 = SUB32(ctx->r14, ctx->r17);
    // 0x8001ABA4: addiu       $t7, $t8, -0x10
    ctx->r15 = ADD32(ctx->r24, -0X10);
    // 0x8001ABA8: sltu        $at, $t7, $s3
    ctx->r1 = ctx->r15 < ctx->r19 ? 1 : 0;
    // 0x8001ABAC: beq         $at, $zero, L_8001ABBC
    if (ctx->r1 == 0) {
        // 0x8001ABB0: nop
    
            goto L_8001ABBC;
    }
    // 0x8001ABB0: nop

    // 0x8001ABB4: b           L_8001AC80
    // 0x8001ABB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001AC80;
    // 0x8001ABB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001ABBC:
    // 0x8001ABBC: b           L_8001AC80
    // 0x8001ABC0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8001AC80;
    // 0x8001ABC0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8001ABC4:
    // 0x8001ABC4: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x8001ABC8: addiu       $s2, $s2, -0x1670
    ctx->r18 = ADD32(ctx->r18, -0X1670);
    // 0x8001ABCC: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8001ABD0: lw          $s0, 0x14($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X14);
    // 0x8001ABD4: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8001ABD8: subu        $t1, $t0, $s0
    ctx->r9 = SUB32(ctx->r8, ctx->r16);
    // 0x8001ABDC: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8001ABE0: sltu        $at, $t2, $s3
    ctx->r1 = ctx->r10 < ctx->r19 ? 1 : 0;
    // 0x8001ABE4: beql        $at, $zero, L_8001AC4C
    if (ctx->r1 == 0) {
        // 0x8001ABE8: lw          $t2, 0x4($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X4);
            goto L_8001AC4C;
    }
    goto skip_2;
    // 0x8001ABE8: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    skip_2:
    // 0x8001ABEC: jal         0x8001B3E8
    // 0x8001ABF0: nop

    func_8001B3E8(rdram, ctx);
        goto after_2;
    // 0x8001ABF0: nop

    after_2:
    // 0x8001ABF4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x8001ABF8: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8001ABFC: addiu       $t4, $v1, 0x20
    ctx->r12 = ADD32(ctx->r3, 0X20);
    // 0x8001AC00: addu        $t5, $v0, $t3
    ctx->r13 = ADD32(ctx->r2, ctx->r11);
    // 0x8001AC04: beql        $t4, $t5, L_8001AC4C
    if (ctx->r12 == ctx->r13) {
        // 0x8001AC08: lw          $t2, 0x4($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X4);
            goto L_8001AC4C;
    }
    goto skip_3;
    // 0x8001AC08: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    skip_3:
    // 0x8001AC0C: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
L_8001AC10:
    // 0x8001AC10: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8001AC14: subu        $t8, $t6, $v1
    ctx->r24 = SUB32(ctx->r14, ctx->r3);
    // 0x8001AC18: addiu       $t7, $t8, -0x10
    ctx->r15 = ADD32(ctx->r24, -0X10);
    // 0x8001AC1C: sltu        $at, $t7, $s3
    ctx->r1 = ctx->r15 < ctx->r19 ? 1 : 0;
    // 0x8001AC20: beql        $at, $zero, L_8001AC4C
    if (ctx->r1 == 0) {
        // 0x8001AC24: lw          $t2, 0x4($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X4);
            goto L_8001AC4C;
    }
    goto skip_4;
    // 0x8001AC24: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    skip_4:
    // 0x8001AC28: jal         0x8001B3E8
    // 0x8001AC2C: nop

    func_8001B3E8(rdram, ctx);
        goto after_3;
    // 0x8001AC2C: nop

    after_3:
    // 0x8001AC30: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x8001AC34: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x8001AC38: addiu       $t9, $v1, 0x20
    ctx->r25 = ADD32(ctx->r3, 0X20);
    // 0x8001AC3C: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x8001AC40: bnel        $t9, $t1, L_8001AC10
    if (ctx->r25 != ctx->r9) {
        // 0x8001AC44: lw          $t6, 0x4($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X4);
            goto L_8001AC10;
    }
    goto skip_5;
    // 0x8001AC44: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    skip_5:
    // 0x8001AC48: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
L_8001AC4C:
    // 0x8001AC4C: subu        $t3, $t2, $s0
    ctx->r11 = SUB32(ctx->r10, ctx->r16);
    // 0x8001AC50: addiu       $t4, $t3, -0x10
    ctx->r12 = ADD32(ctx->r11, -0X10);
    // 0x8001AC54: sltu        $at, $t4, $s3
    ctx->r1 = ctx->r12 < ctx->r19 ? 1 : 0;
    // 0x8001AC58: beq         $at, $zero, L_8001AC68
    if (ctx->r1 == 0) {
        // 0x8001AC5C: nop
    
            goto L_8001AC68;
    }
    // 0x8001AC5C: nop

    // 0x8001AC60: b           L_8001AC80
    // 0x8001AC64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001AC80;
    // 0x8001AC64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001AC68:
    // 0x8001AC68: b           L_8001AC80
    // 0x8001AC6C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8001AC80;
    // 0x8001AC6C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8001AC70:
    // 0x8001AC70: jal         0x8001C0A0
    // 0x8001AC74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8001C0A0(rdram, ctx);
        goto after_4;
    // 0x8001AC74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x8001AC78: b           L_8001AC84
    // 0x8001AC7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8001AC84;
    // 0x8001AC7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8001AC80:
    // 0x8001AC80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8001AC84:
    // 0x8001AC84: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001AC88: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001AC8C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AC90: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001AC94: jr          $ra
    // 0x8001AC98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001AC98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001AC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AC9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001ACA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001ACA4: jal         0x8001AAE4
    // 0x8001ACA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001AAE4(rdram, ctx);
        goto after_0;
    // 0x8001ACA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8001ACAC: beq         $v0, $zero, L_8001ACBC
    if (ctx->r2 == 0) {
        // 0x8001ACB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001ACBC;
    }
    // 0x8001ACB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001ACB4: b           L_8001ACC0
    // 0x8001ACB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8001ACC0;
    // 0x8001ACB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8001ACBC:
    // 0x8001ACBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001ACC0:
    // 0x8001ACC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001ACC4: jr          $ra
    // 0x8001ACC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001ACC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001ACCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ACCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001ACD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001ACD4: jal         0x8001ACEC
    // 0x8001ACD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001ACEC(rdram, ctx);
        goto after_0;
    // 0x8001ACD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8001ACDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001ACE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001ACE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001ACEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ACEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001ACF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001ACF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001ACF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001ACFC: jal         0x8001B3E8
    // 0x8001AD00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_8001B3E8(rdram, ctx);
        goto after_0;
    // 0x8001AD00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x8001AD04: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001AD08: lw          $v1, -0x1670($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1670);
    // 0x8001AD0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001AD10: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x8001AD14: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
    // 0x8001AD18: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x8001AD1C: bne         $t7, $t8, L_8001AD2C
    if (ctx->r15 != ctx->r24) {
        // 0x8001AD20: nop
    
            goto L_8001AD2C;
    }
    // 0x8001AD20: nop

    // 0x8001AD24: jal         0x8001A6C0
    // 0x8001AD28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001A6C0(rdram, ctx);
        goto after_1;
    // 0x8001AD28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_8001AD2C:
    // 0x8001AD2C: blez        $s0, L_8001AD3C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8001AD30: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8001AD3C;
    }
    // 0x8001AD30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001AD34: b           L_8001AD3C
    // 0x8001AD38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8001AD3C;
    // 0x8001AD38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8001AD3C:
    // 0x8001AD3C: jal         0x8001BD30
    // 0x8001AD40: nop

    func_8001BD30(rdram, ctx);
        goto after_2;
    // 0x8001AD40: nop

    after_2:
    // 0x8001AD44: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8001AD48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001AD4C: jal         0x8001AAE4
    // 0x8001AD50: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8001AAE4(rdram, ctx);
        goto after_3;
    // 0x8001AD50: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x8001AD54: bne         $v0, $zero, L_8001AD90
    if (ctx->r2 != 0) {
        // 0x8001AD58: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8001AD90;
    }
    // 0x8001AD58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001AD5C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8001AD60: jal         0x800A9D90
    // 0x8001AD64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A9D90(rdram, ctx);
        goto after_4;
    // 0x8001AD64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8001AD68: bne         $v0, $zero, L_8001AD84
    if (ctx->r2 != 0) {
        // 0x8001AD6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001AD84;
    }
    // 0x8001AD6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001AD70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001AD74: jal         0x8001A6C0
    // 0x8001AD78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001A6C0(rdram, ctx);
        goto after_5;
    // 0x8001AD78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8001AD7C: b           L_8001AF00
    // 0x8001AD80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001AF00;
    // 0x8001AD80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001AD84:
    // 0x8001AD84: jal         0x8001AAE4
    // 0x8001AD88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001AAE4(rdram, ctx);
        goto after_6;
    // 0x8001AD88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8001AD8C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8001AD90:
    // 0x8001AD90: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x8001AD94: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8001AD98: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8001AD9C: subu        $t1, $t0, $v0
    ctx->r9 = SUB32(ctx->r8, ctx->r2);
    // 0x8001ADA0: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8001ADA4: addiu       $t9, $a2, 0x10
    ctx->r25 = ADD32(ctx->r6, 0X10);
    // 0x8001ADA8: sltu        $at, $t9, $t2
    ctx->r1 = ctx->r25 < ctx->r10 ? 1 : 0;
    // 0x8001ADAC: beq         $at, $zero, L_8001AE68
    if (ctx->r1 == 0) {
        // 0x8001ADB0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8001AE68;
    }
    // 0x8001ADB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001ADB4: bne         $t3, $at, L_8001ADF0
    if (ctx->r11 != ctx->r1) {
        // 0x8001ADB8: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8001ADF0;
    }
    // 0x8001ADB8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8001ADBC: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x8001ADC0: lw          $t5, 0x4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X4);
    // 0x8001ADC4: subu        $v1, $t4, $a2
    ctx->r3 = SUB32(ctx->r12, ctx->r6);
    // 0x8001ADC8: sw          $t5, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r13;
    // 0x8001ADCC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8001ADD0: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x8001ADD4: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x8001ADD8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x8001ADDC: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8001ADE0: jal         0x8001AF14
    // 0x8001ADE4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8001AF14(rdram, ctx);
        goto after_7;
    // 0x8001ADE4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_7:
    // 0x8001ADE8: b           L_8001AE80
    // 0x8001ADEC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
        goto L_8001AE80;
    // 0x8001ADEC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_8001ADF0:
    // 0x8001ADF0: lw          $t7, 0x14($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X14);
    // 0x8001ADF4: addu        $v0, $v1, $a2
    ctx->r2 = ADD32(ctx->r3, ctx->r6);
    // 0x8001ADF8: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x8001ADFC: sw          $t7, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r15;
    // 0x8001AE00: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x8001AE04: sw          $t8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r24;
    // 0x8001AE08: sw          $a0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r4;
    // 0x8001AE0C: lw          $t1, 0x20($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X20);
    // 0x8001AE10: sw          $a0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r4;
    // 0x8001AE14: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x8001AE18: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x8001AE1C: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x8001AE20: sw          $a0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r4;
    // 0x8001AE24: lbu         $t3, 0x1F($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1F);
    // 0x8001AE28: andi        $t5, $t3, 0xFF3F
    ctx->r13 = ctx->r11 & 0XFF3F;
    // 0x8001AE2C: andi        $t7, $t5, 0xF7
    ctx->r15 = ctx->r13 & 0XF7;
    // 0x8001AE30: sb          $t5, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = ctx->r13;
    // 0x8001AE34: sb          $t7, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = ctx->r15;
    // 0x8001AE38: andi        $t8, $t7, 0xFB
    ctx->r24 = ctx->r15 & 0XFB;
    // 0x8001AE3C: sb          $t8, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = ctx->r24;
    // 0x8001AE40: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x8001AE44: srl         $t0, $a1, 8
    ctx->r8 = S32(U32(ctx->r5) >> 8);
    // 0x8001AE48: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x8001AE4C: xor         $t9, $t1, $a1
    ctx->r25 = ctx->r9 ^ ctx->r5;
    // 0x8001AE50: sw          $t9, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r25;
    // 0x8001AE54: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x8001AE58: jal         0x8001AF14
    // 0x8001AE5C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8001AF14(rdram, ctx);
        goto after_8;
    // 0x8001AE5C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_8:
    // 0x8001AE60: b           L_8001AE80
    // 0x8001AE64: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
        goto L_8001AE80;
    // 0x8001AE64: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_8001AE68:
    // 0x8001AE68: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x8001AE6C: lw          $t3, 0x14($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X14);
    // 0x8001AE70: sw          $t2, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r10;
    // 0x8001AE74: lw          $t5, 0x10($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X10);
    // 0x8001AE78: lw          $t4, 0x14($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X14);
    // 0x8001AE7C: sw          $t4, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->r12;
L_8001AE80:
    // 0x8001AE80: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x8001AE84: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x8001AE88: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8001AE8C: subu        $a0, $t6, $v1
    ctx->r4 = SUB32(ctx->r14, ctx->r3);
    // 0x8001AE90: subu        $t7, $a0, $s0
    ctx->r15 = SUB32(ctx->r4, ctx->r16);
    // 0x8001AE94: addiu       $t8, $t7, -0x10
    ctx->r24 = ADD32(ctx->r15, -0X10);
    // 0x8001AE98: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001AE9C: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x8001AEA0: srl         $t1, $a1, 8
    ctx->r9 = S32(U32(ctx->r5) >> 8);
    // 0x8001AEA4: xor         $t9, $t0, $t1
    ctx->r25 = ctx->r8 ^ ctx->r9;
    // 0x8001AEA8: sll         $t2, $t9, 8
    ctx->r10 = S32(ctx->r25 << 8);
    // 0x8001AEAC: xor         $t3, $t2, $a1
    ctx->r11 = ctx->r10 ^ ctx->r5;
    // 0x8001AEB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x8001AEB4: lbu         $t4, 0xF($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0XF);
    // 0x8001AEB8: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8001AEBC: addiu       $a2, $a2, -0x8B0
    ctx->r6 = ADD32(ctx->r6, -0X8B0);
    // 0x8001AEC0: andi        $t5, $t4, 0xFF3F
    ctx->r13 = ctx->r12 & 0XFF3F;
    // 0x8001AEC4: ori         $t7, $t5, 0x40
    ctx->r15 = ctx->r13 | 0X40;
    // 0x8001AEC8: andi        $t0, $t7, 0xF7
    ctx->r8 = ctx->r15 & 0XF7;
    // 0x8001AECC: sb          $t7, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r15;
    // 0x8001AED0: sb          $t0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r8;
    // 0x8001AED4: andi        $t4, $t0, 0xFB
    ctx->r12 = ctx->r8 & 0XFB;
    // 0x8001AED8: sb          $t4, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r12;
    // 0x8001AEDC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8001AEE0: andi        $t5, $t4, 0xFC
    ctx->r13 = ctx->r12 & 0XFC;
    // 0x8001AEE4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8001AEE8: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x8001AEEC: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8001AEF0: sb          $t6, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r14;
    // 0x8001AEF4: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8001AEF8: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x8001AEFC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
L_8001AF00:
    // 0x8001AF00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AF04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001AF08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001AF0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001AF14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AF14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001AF18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001AF1C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001AF20: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001AF24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001AF28: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001AF2C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001AF30: jal         0x8001B3E8
    // 0x8001AF34: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    func_8001B3E8(rdram, ctx);
        goto after_0;
    // 0x8001AF34: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x8001AF38: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8001AF3C: addiu       $s3, $s3, -0x1670
    ctx->r19 = ADD32(ctx->r19, -0X1670);
    // 0x8001AF40: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8001AF44: lw          $s2, 0x14($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X14);
    // 0x8001AF48: addu        $t6, $v0, $a0
    ctx->r14 = ADD32(ctx->r2, ctx->r4);
    // 0x8001AF4C: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x8001AF50: sltu        $at, $s2, $t7
    ctx->r1 = ctx->r18 < ctx->r15 ? 1 : 0;
    // 0x8001AF54: beql        $at, $zero, L_8001AFE4
    if (ctx->r1 == 0) {
        // 0x8001AF58: lw          $v1, 0x10($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X10);
            goto L_8001AFE4;
    }
    goto skip_0;
    // 0x8001AF58: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x8001AF5C: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x8001AF60: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8001AF64: subu        $t9, $t8, $s2
    ctx->r25 = SUB32(ctx->r24, ctx->r18);
    // 0x8001AF68: subu        $t1, $t0, $s0
    ctx->r9 = SUB32(ctx->r8, ctx->r16);
    // 0x8001AF6C: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8001AF70: beql        $at, $zero, L_8001AFE4
    if (ctx->r1 == 0) {
        // 0x8001AF74: lw          $v1, 0x10($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X10);
            goto L_8001AFE4;
    }
    goto skip_1;
    // 0x8001AF74: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    skip_1:
    // 0x8001AF78: lw          $t2, 0x14($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X14);
L_8001AF7C:
    // 0x8001AF7C: sw          $t2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r10;
    // 0x8001AF80: lw          $t3, 0x14($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X14);
    // 0x8001AF84: sw          $s0, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r16;
    // 0x8001AF88: sw          $s0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r16;
    // 0x8001AF8C: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    // 0x8001AF90: sw          $s2, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->r18;
    // 0x8001AF94: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x8001AF98: sw          $t5, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r13;
    // 0x8001AF9C: jal         0x8001B3E8
    // 0x8001AFA0: sw          $s2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r18;
    func_8001B3E8(rdram, ctx);
        goto after_1;
    // 0x8001AFA0: sw          $s2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r18;
    after_1:
    // 0x8001AFA4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8001AFA8: lw          $s2, 0x14($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X14);
    // 0x8001AFAC: addu        $t6, $v0, $a0
    ctx->r14 = ADD32(ctx->r2, ctx->r4);
    // 0x8001AFB0: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x8001AFB4: sltu        $at, $s2, $t7
    ctx->r1 = ctx->r18 < ctx->r15 ? 1 : 0;
    // 0x8001AFB8: beql        $at, $zero, L_8001AFE4
    if (ctx->r1 == 0) {
        // 0x8001AFBC: lw          $v1, 0x10($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X10);
            goto L_8001AFE4;
    }
    goto skip_2;
    // 0x8001AFBC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    skip_2:
    // 0x8001AFC0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8001AFC4: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x8001AFC8: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8001AFCC: subu        $t1, $t9, $s1
    ctx->r9 = SUB32(ctx->r25, ctx->r17);
    // 0x8001AFD0: subu        $t0, $t8, $v0
    ctx->r8 = SUB32(ctx->r24, ctx->r2);
    // 0x8001AFD4: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8001AFD8: bnel        $at, $zero, L_8001AF7C
    if (ctx->r1 != 0) {
        // 0x8001AFDC: lw          $t2, 0x14($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X14);
            goto L_8001AF7C;
    }
    goto skip_3;
    // 0x8001AFDC: lw          $t2, 0x14($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X14);
    skip_3:
    // 0x8001AFE0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
L_8001AFE4:
    // 0x8001AFE4: sltu        $at, $a0, $v1
    ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8001AFE8: beql        $at, $zero, L_8001B06C
    if (ctx->r1 == 0) {
        // 0x8001AFEC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8001B06C;
    }
    goto skip_4;
    // 0x8001AFEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x8001AFF0: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x8001AFF4: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x8001AFF8: subu        $t3, $t2, $s0
    ctx->r11 = SUB32(ctx->r10, ctx->r16);
    // 0x8001AFFC: subu        $t5, $t4, $v1
    ctx->r13 = SUB32(ctx->r12, ctx->r3);
    // 0x8001B000: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8001B004: beql        $at, $zero, L_8001B06C
    if (ctx->r1 == 0) {
        // 0x8001B008: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8001B06C;
    }
    goto skip_5;
    // 0x8001B008: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x8001B00C: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
L_8001B010:
    // 0x8001B010: sw          $v1, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r3;
    // 0x8001B014: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8001B018: sw          $t7, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r15;
    // 0x8001B01C: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x8001B020: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x8001B024: sw          $t8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r24;
    // 0x8001B028: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x8001B02C: sw          $s0, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r16;
    // 0x8001B030: sw          $s0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r16;
    // 0x8001B034: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x8001B038: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8001B03C: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x8001B040: beql        $at, $zero, L_8001B06C
    if (ctx->r1 == 0) {
        // 0x8001B044: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8001B06C;
    }
    goto skip_6;
    // 0x8001B044: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x8001B048: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8001B04C: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x8001B050: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8001B054: subu        $t2, $t1, $s1
    ctx->r10 = SUB32(ctx->r9, ctx->r17);
    // 0x8001B058: subu        $t3, $t4, $v0
    ctx->r11 = SUB32(ctx->r12, ctx->r2);
    // 0x8001B05C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8001B060: bnel        $at, $zero, L_8001B010
    if (ctx->r1 != 0) {
        // 0x8001B064: lw          $t6, 0x14($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X14);
            goto L_8001B010;
    }
    goto skip_7;
    // 0x8001B064: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    skip_7:
    // 0x8001B068: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8001B06C:
    // 0x8001B06C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001B070: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001B074: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B078: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001B07C: jr          $ra
    // 0x8001B080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001B080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001B084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B088: beq         $a0, $zero, L_8001B0B8
    if (ctx->r4 == 0) {
        // 0x8001B08C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8001B0B8;
    }
    // 0x8001B08C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B090: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x8001B094: lw          $t7, -0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, -0XC);
    // 0x8001B098: addiu       $v0, $v0, -0x8B0
    ctx->r2 = ADD32(ctx->r2, -0X8B0);
    // 0x8001B09C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8001B0A0: subu        $t8, $t7, $a0
    ctx->r24 = SUB32(ctx->r15, ctx->r4);
    // 0x8001B0A4: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x8001B0A8: subu        $t9, $t6, $t8
    ctx->r25 = SUB32(ctx->r14, ctx->r24);
    // 0x8001B0AC: addiu       $t0, $t9, -0x10
    ctx->r8 = ADD32(ctx->r25, -0X10);
    // 0x8001B0B0: jal         0x8001A7B0
    // 0x8001B0B4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    func_8001A7B0(rdram, ctx);
        goto after_0;
    // 0x8001B0B4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    after_0:
L_8001B0B8:
    // 0x8001B0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B0BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B0C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001B0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B0C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B0CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B0D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001B0D4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8001B0D8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8001B0DC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8001B0E0: subu        $v1, $t6, $a0
    ctx->r3 = SUB32(ctx->r14, ctx->r4);
    // 0x8001B0E4: subu        $t8, $v1, $a1
    ctx->r24 = SUB32(ctx->r3, ctx->r5);
    // 0x8001B0E8: addiu       $t9, $t8, -0x10
    ctx->r25 = ADD32(ctx->r24, -0X10);
    // 0x8001B0EC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001B0F0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x8001B0F4: srl         $t1, $v0, 8
    ctx->r9 = S32(U32(ctx->r2) >> 8);
    // 0x8001B0F8: xor         $t2, $t0, $t1
    ctx->r10 = ctx->r8 ^ ctx->r9;
    // 0x8001B0FC: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8001B100: xor         $t4, $t3, $v0
    ctx->r12 = ctx->r11 ^ ctx->r2;
    // 0x8001B104: sw          $t4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r12;
    // 0x8001B108: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B10C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8001B110: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001B114: blez        $t5, L_8001B140
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8001B118: addiu       $a1, $a3, -0x20
        ctx->r5 = ADD32(ctx->r7, -0X20);
            goto L_8001B140;
    }
    // 0x8001B118: addiu       $a1, $a3, -0x20
    ctx->r5 = ADD32(ctx->r7, -0X20);
    // 0x8001B11C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8001B120: jal         0x8001BD30
    // 0x8001B124: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8001BD30(rdram, ctx);
        goto after_0;
    // 0x8001B124: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8001B128: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8001B12C: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    // 0x8001B130: subu        $v1, $t6, $a2
    ctx->r3 = SUB32(ctx->r14, ctx->r6);
    // 0x8001B134: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
    // 0x8001B138: b           L_8001B140
    // 0x8001B13C: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
        goto L_8001B140;
    // 0x8001B13C: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
L_8001B140:
    // 0x8001B140: sltiu       $at, $a1, 0x20
    ctx->r1 = ctx->r5 < 0X20 ? 1 : 0;
    // 0x8001B144: bne         $at, $zero, L_8001B1B8
    if (ctx->r1 != 0) {
        // 0x8001B148: subu        $a3, $v1, $a1
        ctx->r7 = SUB32(ctx->r3, ctx->r5);
            goto L_8001B1B8;
    }
    // 0x8001B148: subu        $a3, $v1, $a1
    ctx->r7 = SUB32(ctx->r3, ctx->r5);
    // 0x8001B14C: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x8001B150: addiu       $v1, $v1, -0x8B0
    ctx->r3 = ADD32(ctx->r3, -0X8B0);
    // 0x8001B154: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8001B158: addu        $a0, $a2, $a3
    ctx->r4 = ADD32(ctx->r6, ctx->r7);
    // 0x8001B15C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8001B160: subu        $t8, $t7, $a1
    ctx->r24 = SUB32(ctx->r15, ctx->r5);
    // 0x8001B164: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8001B168: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x8001B16C: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x8001B170: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001B174: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x8001B178: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    // 0x8001B17C: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x8001B180: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x8001B184: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x8001B188: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B18C: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x8001B190: subu        $t2, $t1, $a2
    ctx->r10 = SUB32(ctx->r9, ctx->r6);
    // 0x8001B194: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x8001B198: addiu       $t5, $t4, -0x10
    ctx->r13 = ADD32(ctx->r12, -0X10);
    // 0x8001B19C: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x8001B1A0: srl         $t7, $v0, 8
    ctx->r15 = S32(U32(ctx->r2) >> 8);
    // 0x8001B1A4: xor         $t8, $t6, $t7
    ctx->r24 = ctx->r14 ^ ctx->r15;
    // 0x8001B1A8: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8001B1AC: xor         $t0, $t9, $v0
    ctx->r8 = ctx->r25 ^ ctx->r2;
    // 0x8001B1B0: jal         0x8001A7B0
    // 0x8001B1B4: sw          $t0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r8;
    func_8001A7B0(rdram, ctx);
        goto after_1;
    // 0x8001B1B4: sw          $t0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r8;
    after_1:
L_8001B1B8:
    // 0x8001B1B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B1BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B1C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001B1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B1C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B1CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B1D0: jal         0x8001B0C8
    // 0x8001B1D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8001B0C8(rdram, ctx);
        goto after_0;
    // 0x8001B1D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001B1D8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001B1DC: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8001B1E0: lbu         $t7, 0xF($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XF);
    // 0x8001B1E4: srl         $t8, $t7, 6
    ctx->r24 = S32(U32(ctx->r15) >> 6);
    // 0x8001B1E8: bnel        $t8, $zero, L_8001B1FC
    if (ctx->r24 != 0) {
        // 0x8001B1EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001B1FC;
    }
    goto skip_0;
    // 0x8001B1EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8001B1F0: jal         0x8001AF14
    // 0x8001B1F4: nop

    func_8001AF14(rdram, ctx);
        goto after_1;
    // 0x8001B1F4: nop

    after_1:
    // 0x8001B1F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B1FC:
    // 0x8001B1FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B200: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001B208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B208: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001B20C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001B210: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001B214: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001B218: lw          $t6, -0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, -0XC);
    // 0x8001B21C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8001B220: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x8001B224: sltu        $at, $t7, $a1
    ctx->r1 = ctx->r15 < ctx->r5 ? 1 : 0;
    // 0x8001B228: bnel        $at, $zero, L_8001B244
    if (ctx->r1 != 0) {
        // 0x8001B22C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8001B244;
    }
    goto skip_0;
    // 0x8001B22C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x8001B230: jal         0x8001B1C8
    // 0x8001B234: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    func_8001B1C8(rdram, ctx);
        goto after_0;
    // 0x8001B234: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    after_0:
    // 0x8001B238: b           L_8001B374
    // 0x8001B23C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8001B374;
    // 0x8001B23C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8001B240: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8001B244:
    // 0x8001B244: jal         0x8001B864
    // 0x8001B248: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_8001B864(rdram, ctx);
        goto after_1;
    // 0x8001B248: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_1:
    // 0x8001B24C: addiu       $a2, $s1, -0x10
    ctx->r6 = ADD32(ctx->r17, -0X10);
    // 0x8001B250: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x8001B254: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8001B258: lbu         $t8, 0xF($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XF);
    // 0x8001B25C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8001B260: srl         $t9, $t8, 6
    ctx->r25 = S32(U32(ctx->r24) >> 6);
    // 0x8001B264: bnel        $t9, $zero, L_8001B2E4
    if (ctx->r25 != 0) {
        // 0x8001B268: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_8001B2E4;
    }
    goto skip_1;
    // 0x8001B268: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    skip_1:
    // 0x8001B26C: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x8001B270: subu        $t1, $t0, $a2
    ctx->r9 = SUB32(ctx->r8, ctx->r6);
    // 0x8001B274: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8001B278: sltu        $at, $t2, $a1
    ctx->r1 = ctx->r10 < ctx->r5 ? 1 : 0;
    // 0x8001B27C: bnel        $at, $zero, L_8001B2E4
    if (ctx->r1 != 0) {
        // 0x8001B280: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_8001B2E4;
    }
    goto skip_2;
    // 0x8001B280: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    skip_2:
    // 0x8001B284: lw          $t3, 0x10($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X10);
    // 0x8001B288: lw          $t4, 0x14($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X14);
    // 0x8001B28C: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x8001B290: addiu       $v1, $v1, -0x8B0
    ctx->r3 = ADD32(ctx->r3, -0X8B0);
    // 0x8001B294: sw          $t3, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r11;
    // 0x8001B298: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x8001B29C: lw          $t5, 0x14($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X14);
    // 0x8001B2A0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8001B2A4: sw          $t5, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r13;
    // 0x8001B2A8: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8001B2AC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8001B2B0: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x8001B2B4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001B2B8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8001B2BC: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x8001B2C0: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x8001B2C4: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x8001B2C8: jal         0x8001B1C8
    // 0x8001B2CC: sw          $a2, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r6;
    func_8001B1C8(rdram, ctx);
        goto after_2;
    // 0x8001B2CC: sw          $a2, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r6;
    after_2:
    // 0x8001B2D0: jal         0x8001B864
    // 0x8001B2D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B864(rdram, ctx);
        goto after_3;
    // 0x8001B2D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8001B2D8: b           L_8001B374
    // 0x8001B2DC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8001B374;
    // 0x8001B2DC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8001B2E0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
L_8001B2E4:
    // 0x8001B2E4: jal         0x8001ACCC
    // 0x8001B2E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8001ACCC(rdram, ctx);
        goto after_4;
    // 0x8001B2E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_4:
    // 0x8001B2EC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8001B2F0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8001B2F4: bne         $v0, $zero, L_8001B304
    if (ctx->r2 != 0) {
        // 0x8001B2F8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8001B304;
    }
    // 0x8001B2F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8001B2FC: b           L_8001B374
    // 0x8001B300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001B374;
    // 0x8001B300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001B304:
    // 0x8001B304: lw          $t3, 0xC($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XC);
    // 0x8001B308: lbu         $t7, -0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, -0X1);
    // 0x8001B30C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8001B310: sll         $t4, $t3, 28
    ctx->r12 = S32(ctx->r11 << 28);
    // 0x8001B314: srl         $t5, $t4, 31
    ctx->r13 = S32(U32(ctx->r12) >> 31);
    // 0x8001B318: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8001B31C: andi        $t8, $t6, 0x8
    ctx->r24 = ctx->r14 & 0X8;
    // 0x8001B320: andi        $t9, $t7, 0xFFF7
    ctx->r25 = ctx->r15 & 0XFFF7;
    // 0x8001B324: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8001B328: sb          $t6, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = ctx->r14;
    // 0x8001B32C: lw          $t1, 0xC($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XC);
    // 0x8001B330: andi        $t7, $t6, 0xFB
    ctx->r15 = ctx->r14 & 0XFB;
    // 0x8001B334: sll         $t2, $t1, 29
    ctx->r10 = S32(ctx->r9 << 29);
    // 0x8001B338: srl         $t3, $t2, 31
    ctx->r11 = S32(U32(ctx->r10) >> 31);
    // 0x8001B33C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8001B340: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x8001B344: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8001B348: jal         0x8001BD30
    // 0x8001B34C: sb          $t8, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = ctx->r24;
    func_8001BD30(rdram, ctx);
        goto after_5;
    // 0x8001B34C: sb          $t8, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = ctx->r24;
    after_5:
    // 0x8001B350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001B354: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001B358: jal         0x80019E70
    // 0x8001B35C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_80019E70(rdram, ctx);
        goto after_6;
    // 0x8001B35C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_6:
    // 0x8001B360: jal         0x8001B084
    // 0x8001B364: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B084(rdram, ctx);
        goto after_7;
    // 0x8001B364: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x8001B368: jal         0x8001B864
    // 0x8001B36C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B864(rdram, ctx);
        goto after_8;
    // 0x8001B36C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x8001B370: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8001B374:
    // 0x8001B374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B378: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001B37C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001B380: jr          $ra
    // 0x8001B384: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8001B384: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8001B388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B388: lw          $t6, -0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, -0XC);
    // 0x8001B38C: lw          $t8, -0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, -0X4);
    // 0x8001B390: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x8001B394: srl         $t9, $t8, 8
    ctx->r25 = S32(U32(ctx->r24) >> 8);
    // 0x8001B398: jr          $ra
    // 0x8001B39C: subu        $v0, $t7, $t9
    ctx->r2 = SUB32(ctx->r15, ctx->r25);
    return;
    // 0x8001B39C: subu        $v0, $t7, $t9
    ctx->r2 = SUB32(ctx->r15, ctx->r25);
;}
RECOMP_FUNC void func_8001B3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B3A0: lbu         $t7, -0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, -0X1);
    // 0x8001B3A4: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8001B3A8: jr          $ra
    // 0x8001B3AC: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    return;
    // 0x8001B3AC: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_8001B3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B3B0: lbu         $t7, -0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, -0X1);
    // 0x8001B3B4: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x8001B3B8: jr          $ra
    // 0x8001B3BC: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    return;
    // 0x8001B3BC: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_8001B3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B3C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B3C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B3C8: jal         0x8001AAD8
    // 0x8001B3CC: nop

    func_8001AAD8(rdram, ctx);
        goto after_0;
    // 0x8001B3CC: nop

    after_0:
    // 0x8001B3D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B3D4: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001B3D8: lw          $t6, -0x4100($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4100);
    // 0x8001B3DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B3E0: jr          $ra
    // 0x8001B3E4: subu        $v0, $t6, $v0
    ctx->r2 = SUB32(ctx->r14, ctx->r2);
    return;
    // 0x8001B3E4: subu        $v0, $t6, $v0
    ctx->r2 = SUB32(ctx->r14, ctx->r2);
;}
RECOMP_FUNC void func_8001B3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B3E8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001B3EC: jr          $ra
    // 0x8001B3F0: lw          $v0, -0x4100($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4100);
    return;
    // 0x8001B3F0: lw          $v0, -0x4100($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4100);
;}
RECOMP_FUNC void func_8001B3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B3F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001B3F8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001B3FC: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8001B400: addiu       $s3, $s3, -0x1670
    ctx->r19 = ADD32(ctx->r19, -0X1670);
    // 0x8001B404: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8001B408: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001B40C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001B410: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001B414: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001B418: lw          $s0, 0x14($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X14);
    // 0x8001B41C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8001B420: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8001B424: jal         0x8001B3E8
    // 0x8001B428: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_8001B3E8(rdram, ctx);
        goto after_0;
    // 0x8001B428: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_0:
    // 0x8001B42C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8001B430: addiu       $t7, $s0, 0x20
    ctx->r15 = ADD32(ctx->r16, 0X20);
    // 0x8001B434: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8001B438: beql        $t7, $t9, L_8001B488
    if (ctx->r15 == ctx->r25) {
        // 0x8001B43C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8001B488;
    }
    goto skip_0;
    // 0x8001B43C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8001B440: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
L_8001B444:
    // 0x8001B444: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001B448: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8001B44C: subu        $v0, $t0, $s0
    ctx->r2 = SUB32(ctx->r8, ctx->r16);
    // 0x8001B450: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8001B454: beql        $at, $zero, L_8001B468
    if (ctx->r1 == 0) {
        // 0x8001B458: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_8001B468;
    }
    goto skip_1;
    // 0x8001B458: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    skip_1:
    // 0x8001B45C: b           L_8001B468
    // 0x8001B460: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
        goto L_8001B468;
    // 0x8001B460: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x8001B464: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_8001B468:
    // 0x8001B468: jal         0x8001B3E8
    // 0x8001B46C: lw          $s0, 0x14($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X14);
    func_8001B3E8(rdram, ctx);
        goto after_1;
    // 0x8001B46C: lw          $s0, 0x14($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X14);
    after_1:
    // 0x8001B470: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x8001B474: addiu       $t1, $s0, 0x20
    ctx->r9 = ADD32(ctx->r16, 0X20);
    // 0x8001B478: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8001B47C: bnel        $t1, $t3, L_8001B444
    if (ctx->r9 != ctx->r11) {
        // 0x8001B480: lw          $t0, 0x4($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X4);
            goto L_8001B444;
    }
    goto skip_2;
    // 0x8001B480: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    skip_2:
    // 0x8001B484: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8001B488:
    // 0x8001B488: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x8001B48C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B490: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001B494: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001B498: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001B49C: jr          $ra
    // 0x8001B4A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001B4A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001B4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B4B0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001B4B4: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001B4B8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001B4BC: addiu       $v0, $v0, -0x3920
    ctx->r2 = ADD32(ctx->r2, -0X3920);
    // 0x8001B4C0: addiu       $v1, $v1, -0x40E0
    ctx->r3 = ADD32(ctx->r3, -0X40E0);
    // 0x8001B4C4: sw          $zero, -0x40E8($at)
    MEM_W(-0X40E8, ctx->r1) = 0;
L_8001B4C8:
    // 0x8001B4C8: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x8001B4CC: sw          $zero, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = 0;
    // 0x8001B4D0: sw          $zero, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = 0;
    // 0x8001B4D4: sw          $zero, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = 0;
    // 0x8001B4D8: bne         $v1, $v0, L_8001B4C8
    if (ctx->r3 != ctx->r2) {
        // 0x8001B4DC: sw          $zero, -0x20($v1)
        MEM_W(-0X20, ctx->r3) = 0;
            goto L_8001B4C8;
    }
    // 0x8001B4DC: sw          $zero, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = 0;
    // 0x8001B4E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001B4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B4E8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001B4EC: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001B4F0: addiu       $v0, $v0, -0x3920
    ctx->r2 = ADD32(ctx->r2, -0X3920);
    // 0x8001B4F4: addiu       $v1, $v1, -0x40E0
    ctx->r3 = ADD32(ctx->r3, -0X40E0);
    // 0x8001B4F8: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
L_8001B4FC:
    // 0x8001B4FC: bnel        $v1, $v0, L_8001B4FC
    if (ctx->r3 != ctx->r2) {
        // 0x8001B500: addiu       $v1, $v1, 0x20
        ctx->r3 = ADD32(ctx->r3, 0X20);
            goto L_8001B4FC;
    }
    goto skip_0;
    // 0x8001B500: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    skip_0:
    // 0x8001B504: jr          $ra
    // 0x8001B508: nop

    return;
    // 0x8001B508: nop

;}
RECOMP_FUNC void func_8001B50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B50C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001B510: jr          $ra
    // 0x8001B514: sw          $zero, -0x3920($at)
    MEM_W(-0X3920, ctx->r1) = 0;
    return;
    // 0x8001B514: sw          $zero, -0x3920($at)
    MEM_W(-0X3920, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8001B518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B518: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001B51C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001B520: addiu       $v0, $v0, -0x3920
    ctx->r2 = ADD32(ctx->r2, -0X3920);
    // 0x8001B524: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8001B528: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001B52C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8001B530: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8001B534: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001B538: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8001B53C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001B540: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001B544: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001B548: beq         $t6, $zero, L_8001B554
    if (ctx->r14 == 0) {
        // 0x8001B54C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8001B554;
    }
    // 0x8001B54C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001B550: beq         $a0, $zero, L_8001B63C
    if (ctx->r4 == 0) {
        // 0x8001B554: addiu       $s7, $zero, 0x1
        ctx->r23 = ADD32(0, 0X1);
            goto L_8001B63C;
    }
L_8001B554:
    // 0x8001B554: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8001B558: beq         $a0, $zero, L_8001B568
    if (ctx->r4 == 0) {
        // 0x8001B55C: sw          $s7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r23;
            goto L_8001B568;
    }
    // 0x8001B55C: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x8001B560: b           L_8001B56C
    // 0x8001B564: addiu       $s4, $zero, 0xFA
    ctx->r20 = ADD32(0, 0XFA);
        goto L_8001B56C;
    // 0x8001B564: addiu       $s4, $zero, 0xFA
    ctx->r20 = ADD32(0, 0XFA);
L_8001B568:
    // 0x8001B568: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
L_8001B56C:
    // 0x8001B56C: slti        $at, $s4, 0x2
    ctx->r1 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
    // 0x8001B570: bne         $at, $zero, L_8001B63C
    if (ctx->r1 != 0) {
        // 0x8001B574: or          $s2, $s7, $zero
        ctx->r18 = ctx->r23 | 0;
            goto L_8001B63C;
    }
    // 0x8001B574: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x8001B578: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8001B57C: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x8001B580: addiu       $s1, $s1, -0x391C
    ctx->r17 = ADD32(ctx->r17, -0X391C);
    // 0x8001B584: addiu       $s3, $s3, -0x40F0
    ctx->r19 = ADD32(ctx->r19, -0X40F0);
    // 0x8001B588: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x8001B58C: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x8001B590: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
L_8001B594:
    // 0x8001B594: addiu       $v0, $t7, 0x1
    ctx->r2 = ADD32(ctx->r15, 0X1);
    // 0x8001B598: slti        $at, $v0, 0xFA
    ctx->r1 = SIGNED(ctx->r2) < 0XFA ? 1 : 0;
    // 0x8001B59C: bne         $at, $zero, L_8001B5AC
    if (ctx->r1 != 0) {
        // 0x8001B5A0: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_8001B5AC;
    }
    // 0x8001B5A0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8001B5A4: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x8001B5A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001B5AC:
    // 0x8001B5AC: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x8001B5B0: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x8001B5B4: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8001B5B8: beql        $a0, $zero, L_8001B634
    if (ctx->r4 == 0) {
        // 0x8001B5BC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8001B634;
    }
    goto skip_0;
    // 0x8001B5BC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8001B5C0: jal         0x8001BAFC
    // 0x8001B5C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    defrag(rdram, ctx);
        goto after_0;
    // 0x8001B5C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8001B5C8: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8001B5CC: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001B5D0: addu        $v1, $s3, $t2
    ctx->r3 = ADD32(ctx->r19, ctx->r10);
    // 0x8001B5D4: beq         $v0, $s0, L_8001B630
    if (ctx->r2 == ctx->r16) {
        // 0x8001B5D8: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_8001B630;
    }
    // 0x8001B5D8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8001B5DC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8001B5E0: beql        $v0, $zero, L_8001B634
    if (ctx->r2 == 0) {
        // 0x8001B5E4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8001B634;
    }
    goto skip_1;
    // 0x8001B5E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8001B5E8: beq         $v0, $s7, L_8001B608
    if (ctx->r2 == ctx->r23) {
        // 0x8001B5EC: nop
    
            goto L_8001B608;
    }
    // 0x8001B5EC: nop

    // 0x8001B5F0: beq         $v0, $s5, L_8001B618
    if (ctx->r2 == ctx->r21) {
        // 0x8001B5F4: nop
    
            goto L_8001B618;
    }
    // 0x8001B5F4: nop

    // 0x8001B5F8: beq         $v0, $s6, L_8001B628
    if (ctx->r2 == ctx->r22) {
        // 0x8001B5FC: nop
    
            goto L_8001B628;
    }
    // 0x8001B5FC: nop

    // 0x8001B600: b           L_8001B634
    // 0x8001B604: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8001B634;
    // 0x8001B604: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8001B608:
    // 0x8001B608: jal         0x800E0040
    // 0x8001B60C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_800E0040(rdram, ctx);
        goto after_1;
    // 0x8001B60C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_1:
    // 0x8001B610: b           L_8001B634
    // 0x8001B614: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8001B634;
    // 0x8001B614: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8001B618:
    // 0x8001B618: jal         0x800E0AC0
    // 0x8001B61C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_800E0AC0(rdram, ctx);
        goto after_2;
    // 0x8001B61C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_2:
    // 0x8001B620: b           L_8001B634
    // 0x8001B624: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8001B634;
    // 0x8001B624: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8001B628:
    // 0x8001B628: jal         0x800B2FB0
    // 0x8001B62C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_800B2FB0(rdram, ctx);
        goto after_3;
    // 0x8001B62C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_3:
L_8001B630:
    // 0x8001B630: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8001B634:
    // 0x8001B634: bnel        $s2, $s4, L_8001B594
    if (ctx->r18 != ctx->r20) {
        // 0x8001B638: lw          $t7, 0x0($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X0);
            goto L_8001B594;
    }
    goto skip_2;
    // 0x8001B638: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    skip_2:
L_8001B63C:
    // 0x8001B63C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001B640: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001B644: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001B648: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B64C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001B650: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001B654: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001B658: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8001B65C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8001B660: jr          $ra
    // 0x8001B664: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001B664: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001B668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B668: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001B66C: lw          $t6, -0x40E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X40E8);
    // 0x8001B670: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B678: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001B67C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8001B680: beq         $t6, $zero, L_8001B6A4
    if (ctx->r14 == 0) {
        // 0x8001B684: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_8001B6A4;
    }
    // 0x8001B684: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8001B688: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001B68C: addiu       $v1, $v1, -0x40E8
    ctx->r3 = ADD32(ctx->r3, -0X40E8);
    // 0x8001B690: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
L_8001B694:
    // 0x8001B694: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8001B698: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8001B69C: bnel        $t7, $zero, L_8001B694
    if (ctx->r15 != 0) {
        // 0x8001B6A0: lw          $t7, 0x8($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X8);
            goto L_8001B694;
    }
    goto skip_0;
    // 0x8001B6A0: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    skip_0:
L_8001B6A4:
    // 0x8001B6A4: slti        $at, $a2, 0xFA
    ctx->r1 = SIGNED(ctx->r6) < 0XFA ? 1 : 0;
    // 0x8001B6A8: beq         $at, $zero, L_8001B700
    if (ctx->r1 == 0) {
        // 0x8001B6AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001B700;
    }
    // 0x8001B6AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001B6B0: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x8001B6B4: addiu       $t9, $t9, -0x40F0
    ctx->r25 = ADD32(ctx->r25, -0X40F0);
    // 0x8001B6B8: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x8001B6BC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8001B6C0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8001B6C4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8001B6C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8001B6CC: jal         0x8001ACEC
    // 0x8001B6D0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8001ACEC(rdram, ctx);
        goto after_0;
    // 0x8001B6D0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8001B6D4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8001B6D8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001B6DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001B6E0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8001B6E4: jal         0x8001B3A0
    // 0x8001B6E8: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    func_8001B3A0(rdram, ctx);
        goto after_1;
    // 0x8001B6E8: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    after_1:
    // 0x8001B6EC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B6F0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8001B6F4: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8001B6F8: b           L_8001B700
    // 0x8001B6FC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_8001B700;
    // 0x8001B6FC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8001B700:
    // 0x8001B700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B704: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B708: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001B710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B710: sll         $a2, $a0, 16
    ctx->r6 = S32(ctx->r4 << 16);
    // 0x8001B714: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8001B718: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B71C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x8001B720: addiu       $t8, $t8, -0x40F0
    ctx->r24 = ADD32(ctx->r24, -0X40F0);
    // 0x8001B724: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001B728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B72C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001B730: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8001B734: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8001B738: jal         0x8001B208
    // 0x8001B73C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8001B208(rdram, ctx);
        goto after_0;
    // 0x8001B73C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8001B740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B744: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B74C: jr          $ra
    // 0x8001B750: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x8001B750: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_8001B754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B754: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x8001B758: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001B75C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B760: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x8001B764: addiu       $t8, $t8, -0x40F0
    ctx->r24 = ADD32(ctx->r24, -0X40F0);
    // 0x8001B768: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001B76C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B770: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001B774: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8001B778: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8001B77C: jal         0x8001B084
    // 0x8001B780: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x8001B780: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8001B784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B788: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B78C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B790: jr          $ra
    // 0x8001B794: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    return;
    // 0x8001B794: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8001B798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B798: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001B79C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001B7A0: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001B7A4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001B7A8: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x8001B7AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001B7B0: jr          $ra
    // 0x8001B7B4: lw          $v0, -0x40F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X40F0);
    return;
    // 0x8001B7B4: lw          $v0, -0x40F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X40F0);
;}
RECOMP_FUNC void func_8001B7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B7B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B7BC: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x8001B7C0: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001B7C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001B7C8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001B7CC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001B7D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B7D4: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8001B7D8: jal         0x8001B388
    // 0x8001B7DC: lw          $a0, -0x40F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X40F0);
    func_8001B388(rdram, ctx);
        goto after_0;
    // 0x8001B7DC: lw          $a0, -0x40F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X40F0);
    after_0:
    // 0x8001B7E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B7E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B7E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001B7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B7F4: sll         $a3, $a0, 16
    ctx->r7 = S32(ctx->r4 << 16);
    // 0x8001B7F8: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8001B7FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001B800: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001B804: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8001B808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B80C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001B810: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8001B814: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8001B818: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8001B81C: jal         0x8001BCF8
    // 0x8001B820: lw          $a0, -0x40F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X40F0);
    rare_memset(rdram, ctx);
        goto after_0;
    // 0x8001B820: lw          $a0, -0x40F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X40F0);
    after_0:
    // 0x8001B824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B82C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001B840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B840: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001B844: jr          $ra
    // 0x8001B848: sw          $zero, -0x3910($at)
    MEM_W(-0X3910, ctx->r1) = 0;
    return;
    // 0x8001B848: sw          $zero, -0x3910($at)
    MEM_W(-0X3910, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8001B84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B84C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001B850: jr          $ra
    // 0x8001B854: sw          $zero, -0x3908($at)
    MEM_W(-0X3908, ctx->r1) = 0;
    return;
    // 0x8001B854: sw          $zero, -0x3908($at)
    MEM_W(-0X3908, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8001B858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B858: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001B85C: jr          $ra
    // 0x8001B860: lw          $v0, -0x3908($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3908);
    return;
    // 0x8001B860: lw          $v0, -0x3908($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3908);
;}
RECOMP_FUNC void func_8001B864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B864: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001B868: jr          $ra
    // 0x8001B86C: sw          $a0, -0x390C($at)
    MEM_W(-0X390C, ctx->r1) = ctx->r4;
    return;
    // 0x8001B86C: sw          $a0, -0x390C($at)
    MEM_W(-0X390C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8001B870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B870: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001B874: lw          $t6, -0x390C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X390C);
    // 0x8001B878: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8001B87C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B880: bne         $a0, $t6, L_8001B890
    if (ctx->r4 != ctx->r14) {
        // 0x8001B884: lui         $t3, 0x8008
        ctx->r11 = S32(0X8008 << 16);
            goto L_8001B890;
    }
    // 0x8001B884: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x8001B888: b           L_8001B9AC
    // 0x8001B88C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8001B9AC;
    // 0x8001B88C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001B890:
    // 0x8001B890: lw          $t7, -0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, -0XC);
    // 0x8001B894: addiu       $t3, $t3, -0x3910
    ctx->r11 = ADD32(ctx->r11, -0X3910);
    // 0x8001B898: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x8001B89C: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    // 0x8001B8A0: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x8001B8A4: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x8001B8A8: ori         $at, $at, 0x4240
    ctx->r1 = ctx->r1 | 0X4240;
    // 0x8001B8AC: addu        $t0, $t8, $a2
    ctx->r8 = ADD32(ctx->r24, ctx->r6);
    // 0x8001B8B0: slt         $at, $t0, $at
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8001B8B4: bne         $at, $zero, L_8001B8C4
    if (ctx->r1 != 0) {
        // 0x8001B8B8: addiu       $a1, $a0, -0x10
        ctx->r5 = ADD32(ctx->r4, -0X10);
            goto L_8001B8C4;
    }
    // 0x8001B8B8: addiu       $a1, $a0, -0x10
    ctx->r5 = ADD32(ctx->r4, -0X10);
    // 0x8001B8BC: b           L_8001B9AC
    // 0x8001B8C0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8001B9AC;
    // 0x8001B8C0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001B8C4:
    // 0x8001B8C4: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8001B8C8: lbu         $t9, 0xF($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XF);
    // 0x8001B8CC: srl         $t4, $t9, 6
    ctx->r12 = S32(U32(ctx->r25) >> 6);
    // 0x8001B8D0: bne         $t4, $zero, L_8001B8F4
    if (ctx->r12 != 0) {
        // 0x8001B8D4: nop
    
            goto L_8001B8F4;
    }
    // 0x8001B8D4: nop

    // 0x8001B8D8: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x8001B8DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001B8E0: subu        $t6, $t5, $v0
    ctx->r14 = SUB32(ctx->r13, ctx->r2);
    // 0x8001B8E4: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x8001B8E8: sltiu       $at, $t7, 0x74
    ctx->r1 = ctx->r15 < 0X74 ? 1 : 0;
    // 0x8001B8EC: beq         $at, $zero, L_8001B8FC
    if (ctx->r1 == 0) {
        // 0x8001B8F0: nop
    
            goto L_8001B8FC;
    }
    // 0x8001B8F0: nop

L_8001B8F4:
    // 0x8001B8F4: b           L_8001B9AC
    // 0x8001B8F8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8001B9AC;
    // 0x8001B8F8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001B8FC:
    // 0x8001B8FC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001B900: sw          $t8, -0x3908($at)
    MEM_W(-0X3908, ctx->r1) = ctx->r24;
    // 0x8001B904: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x8001B908: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8001B90C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8001B910: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x8001B914: lw          $t2, 0x14($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X14);
    // 0x8001B918: subu        $a3, $v1, $a2
    ctx->r7 = SUB32(ctx->r3, ctx->r6);
    // 0x8001B91C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8001B920: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8001B924: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B928: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8001B92C: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x8001B930: jal         0x8001BC68
    // 0x8001B934: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    aligned4_memmove(rdram, ctx);
        goto after_0;
    // 0x8001B934: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    after_0:
    // 0x8001B938: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8001B93C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8001B940: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B944: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8001B948: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8001B94C: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x8001B950: sw          $a3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r7;
    // 0x8001B954: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x8001B958: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x8001B95C: sw          $a0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r4;
    // 0x8001B960: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x8001B964: sw          $t2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r10;
    // 0x8001B968: sw          $a0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r4;
    // 0x8001B96C: lbu         $t9, 0xF($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XF);
    // 0x8001B970: andi        $t5, $t9, 0xFF3F
    ctx->r13 = ctx->r25 & 0XFF3F;
    // 0x8001B974: andi        $t7, $t5, 0xF7
    ctx->r15 = ctx->r13 & 0XF7;
    // 0x8001B978: sb          $t5, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r13;
    // 0x8001B97C: andi        $t8, $t7, 0xFB
    ctx->r24 = ctx->r15 & 0XFB;
    // 0x8001B980: sb          $t7, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r15;
    // 0x8001B984: sb          $t8, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r24;
    // 0x8001B988: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8001B98C: srl         $t9, $v0, 8
    ctx->r25 = S32(U32(ctx->r2) >> 8);
    // 0x8001B990: sll         $t4, $t9, 8
    ctx->r12 = S32(ctx->r25 << 8);
    // 0x8001B994: xor         $t5, $t4, $v0
    ctx->r13 = ctx->r12 ^ ctx->r2;
    // 0x8001B998: sw          $t5, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r13;
    // 0x8001B99C: jal         0x8001A6EC
    // 0x8001B9A0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8001A6EC(rdram, ctx);
        goto after_1;
    // 0x8001B9A0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x8001B9A4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B9A8: addiu       $v0, $a3, 0x10
    ctx->r2 = ADD32(ctx->r7, 0X10);
L_8001B9AC:
    // 0x8001B9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B9B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8001B9B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001B9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B9BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001B9C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B9C4: lw          $t6, -0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, -0XC);
    // 0x8001B9C8: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x8001B9CC: addiu       $t1, $t1, -0x3910
    ctx->r9 = ADD32(ctx->r9, -0X3910);
    // 0x8001B9D0: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8001B9D4: subu        $a2, $t6, $a0
    ctx->r6 = SUB32(ctx->r14, ctx->r4);
    // 0x8001B9D8: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x8001B9DC: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x8001B9E0: ori         $at, $at, 0x4240
    ctx->r1 = ctx->r1 | 0X4240;
    // 0x8001B9E4: addu        $v0, $t7, $a2
    ctx->r2 = ADD32(ctx->r15, ctx->r6);
    // 0x8001B9E8: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8001B9EC: bne         $at, $zero, L_8001B9FC
    if (ctx->r1 != 0) {
        // 0x8001B9F0: addiu       $a1, $a0, -0x10
        ctx->r5 = ADD32(ctx->r4, -0X10);
            goto L_8001B9FC;
    }
    // 0x8001B9F0: addiu       $a1, $a0, -0x10
    ctx->r5 = ADD32(ctx->r4, -0X10);
    // 0x8001B9F4: b           L_8001BAEC
    // 0x8001B9F8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8001BAEC;
    // 0x8001B9F8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001B9FC:
    // 0x8001B9FC: lw          $a3, 0x0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X0);
    // 0x8001BA00: lbu         $t8, 0xF($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0XF);
    // 0x8001BA04: srl         $t9, $t8, 6
    ctx->r25 = S32(U32(ctx->r24) >> 6);
    // 0x8001BA08: bne         $t9, $zero, L_8001BA2C
    if (ctx->r25 != 0) {
        // 0x8001BA0C: nop
    
            goto L_8001BA2C;
    }
    // 0x8001BA0C: nop

    // 0x8001BA10: lw          $t2, 0x4($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X4);
    // 0x8001BA14: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8001BA18: subu        $t3, $t2, $a3
    ctx->r11 = SUB32(ctx->r10, ctx->r7);
    // 0x8001BA1C: addiu       $t4, $t3, -0x10
    ctx->r12 = ADD32(ctx->r11, -0X10);
    // 0x8001BA20: sltiu       $at, $t4, 0x74
    ctx->r1 = ctx->r12 < 0X74 ? 1 : 0;
    // 0x8001BA24: beq         $at, $zero, L_8001BA34
    if (ctx->r1 == 0) {
        // 0x8001BA28: nop
    
            goto L_8001BA34;
    }
    // 0x8001BA28: nop

L_8001BA2C:
    // 0x8001BA2C: b           L_8001BAEC
    // 0x8001BA30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8001BAEC;
    // 0x8001BA30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001BA34:
    // 0x8001BA34: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001BA38: sw          $t5, -0x3908($at)
    MEM_W(-0X3908, ctx->r1) = ctx->r13;
    // 0x8001BA3C: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x8001BA40: lw          $v1, 0x14($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X14);
    // 0x8001BA44: lw          $t0, 0x10($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X10);
    // 0x8001BA48: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x8001BA4C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001BA50: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8001BA54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8001BA58: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8001BA5C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8001BA60: jal         0x80019E70
    // 0x8001BA64: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_80019E70(rdram, ctx);
        goto after_0;
    // 0x8001BA64: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x8001BA68: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BA6C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8001BA70: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8001BA74: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8001BA78: addu        $a0, $a3, $a2
    ctx->r4 = ADD32(ctx->r7, ctx->r6);
    // 0x8001BA7C: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x8001BA80: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x8001BA84: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x8001BA88: sw          $a0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r4;
    // 0x8001BA8C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8001BA90: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x8001BA94: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8001BA98: sw          $a0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r4;
    // 0x8001BA9C: sw          $a0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r4;
    // 0x8001BAA0: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
    // 0x8001BAA4: lbu         $t2, 0xF($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XF);
    // 0x8001BAA8: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x8001BAAC: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
    // 0x8001BAB0: andi        $t4, $t2, 0xFF3F
    ctx->r12 = ctx->r10 & 0XFF3F;
    // 0x8001BAB4: andi        $t6, $t4, 0xF7
    ctx->r14 = ctx->r12 & 0XF7;
    // 0x8001BAB8: sb          $t4, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r12;
    // 0x8001BABC: sb          $t6, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r14;
    // 0x8001BAC0: andi        $t7, $t6, 0xFB
    ctx->r15 = ctx->r14 & 0XFB;
    // 0x8001BAC4: sb          $t7, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r15;
    // 0x8001BAC8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8001BACC: srl         $t8, $v0, 8
    ctx->r24 = S32(U32(ctx->r2) >> 8);
    // 0x8001BAD0: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8001BAD4: xor         $t2, $t9, $v0
    ctx->r10 = ctx->r25 ^ ctx->r2;
    // 0x8001BAD8: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
    // 0x8001BADC: jal         0x8001A6EC
    // 0x8001BAE0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_8001A6EC(rdram, ctx);
        goto after_1;
    // 0x8001BAE0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_1:
    // 0x8001BAE4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8001BAE8: addiu       $v0, $a3, 0x10
    ctx->r2 = ADD32(ctx->r7, 0X10);
L_8001BAEC:
    // 0x8001BAEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BAF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001BAF4: jr          $ra
    return;
;}
RECOMP_FUNC void defrag(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BAFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001BB00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BB04: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8001BB08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001BB0C: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x8001BB10: beq         $t6, $zero, L_8001BB28
    if (ctx->r14 == 0) {
        // 0x8001BB14: nop
    
            goto L_8001BB28;
    }
    // 0x8001BB14: nop

    // 0x8001BB18: beq         $t6, $at, L_8001BB38
    if (ctx->r14 == ctx->r1) {
        // 0x8001BB1C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8001BB38;
    }
    // 0x8001BB1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001BB20: bne         $t6, $at, L_8001BB48
    if (ctx->r14 != ctx->r1) {
        // 0x8001BB24: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8001BB48;
    }
    // 0x8001BB24: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001BB28:
    // 0x8001BB28: jal         0x8001B9BC
    // 0x8001BB2C: nop

    func_8001B9BC(rdram, ctx);
        goto after_0;
    // 0x8001BB2C: nop

    after_0:
    // 0x8001BB30: b           L_8001BB4C
    // 0x8001BB34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001BB4C;
    // 0x8001BB34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001BB38:
    // 0x8001BB38: jal         0x8001B870
    // 0x8001BB3C: nop

    func_8001B870(rdram, ctx);
        goto after_1;
    // 0x8001BB3C: nop

    after_1:
    // 0x8001BB40: b           L_8001BB4C
    // 0x8001BB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001BB4C;
    // 0x8001BB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001BB48:
    // 0x8001BB48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001BB4C:
    // 0x8001BB4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001BB50: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001BB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BB58: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001BB5C: lw          $t6, -0x390C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X390C);
    // 0x8001BB60: bnel        $a0, $t6, L_8001BB74
    if (ctx->r4 != ctx->r14) {
            // 0x8001BB64: lw          $t7, -0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, -0X10);
    static_2_8001BB74(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x8001BB64: lw          $t7, -0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, -0X10);
    skip_0:
    // 0x8001BB68: jr          $ra
    // 0x8001BB6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8001BB6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8001BB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BB70: lw          $t7, -0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, -0X10);
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

;}
RECOMP_FUNC void rare_memcpy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BBA0: blez        $a2, L_8001BBC0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8001BBA4: nop
    
            goto L_8001BBC0;
    }
    // 0x8001BBA4: nop

L_8001BBA8:
    // 0x8001BBA8: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8001BBAC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8001BBB0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001BBB4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8001BBB8: bgtz        $a2, L_8001BBA8
    if (SIGNED(ctx->r6) > 0) {
        // 0x8001BBBC: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_8001BBA8;
    }
    // 0x8001BBBC: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
L_8001BBC0:
    // 0x8001BBC0: jr          $ra
    return;
;}
RECOMP_FUNC void aligned4_memcpy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BBC8: blez        $a2, L_8001BBE8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8001BBCC: nop
    
            goto L_8001BBE8;
    }
    // 0x8001BBCC: nop

L_8001BBD0:
    // 0x8001BBD0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8001BBD4: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8001BBD8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8001BBDC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8001BBE0: bgtz        $a2, L_8001BBD0
    if (SIGNED(ctx->r6) > 0) {
        // 0x8001BBE4: sw          $t6, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r14;
            goto L_8001BBD0;
    }
    // 0x8001BBE4: sw          $t6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r14;
L_8001BBE8:
    // 0x8001BBE8: jr          $ra
    return;
;}
RECOMP_FUNC void rare_memmove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BBF0: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x8001BBF4: beq         $at, $zero, L_8001BC2C
    if (ctx->r1 == 0) {
        // 0x8001BBF8: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_8001BC2C;
    }
    // 0x8001BBF8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001BBFC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001BC00: beq         $a2, $zero, L_8001BC60
    if (ctx->r6 == 0) {
        // 0x8001BC04: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001BC60;
    }
    // 0x8001BC04: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8001BC08:
    // 0x8001BC08: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8001BC0C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001BC10: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001BC14: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8001BC18: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x8001BC1C: bne         $a2, $zero, L_8001BC08
    if (ctx->r6 != 0) {
        // 0x8001BC20: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001BC08;
    }
    // 0x8001BC20: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8001BC24: jr          $ra
    // 0x8001BC28: nop

    return;
    // 0x8001BC28: nop

L_8001BC2C:
    // 0x8001BC2C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8001BC30: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8001BC34: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8001BC38: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8001BC3C: beq         $a2, $zero, L_8001BC60
    if (ctx->r6 == 0) {
        // 0x8001BC40: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001BC60;
    }
    // 0x8001BC40: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8001BC44:
    // 0x8001BC44: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x8001BC48: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001BC4C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8001BC50: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8001BC54: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    // 0x8001BC58: bne         $a2, $zero, L_8001BC44
    if (ctx->r6 != 0) {
        // 0x8001BC5C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001BC44;
    }
    // 0x8001BC5C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8001BC60:
    // 0x8001BC60: jr          $ra
    // 0x8001BC64: nop

    return;
    // 0x8001BC64: nop

;}
RECOMP_FUNC void aligned4_memmove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BC68: bgez        $a2, L_8001BC78
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8001BC6C: sra         $t6, $a2, 2
        ctx->r14 = S32(SIGNED(ctx->r6) >> 2);
            goto L_8001BC78;
    }
    // 0x8001BC6C: sra         $t6, $a2, 2
    ctx->r14 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8001BC70: addiu       $at, $a2, 0x3
    ctx->r1 = ADD32(ctx->r6, 0X3);
    // 0x8001BC74: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_8001BC78:
    // 0x8001BC78: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x8001BC7C: beq         $at, $zero, L_8001BCB4
    if (ctx->r1 == 0) {
        // 0x8001BC80: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_8001BCB4;
    }
    // 0x8001BC80: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8001BC84: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8001BC88: beq         $a2, $zero, L_8001BCF0
    if (ctx->r6 == 0) {
        // 0x8001BC8C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001BCF0;
    }
    // 0x8001BC8C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8001BC90:
    // 0x8001BC90: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8001BC94: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001BC98: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8001BC9C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8001BCA0: sw          $t7, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r15;
    // 0x8001BCA4: bne         $a2, $zero, L_8001BC90
    if (ctx->r6 != 0) {
        // 0x8001BCA8: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001BC90;
    }
    // 0x8001BCA8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8001BCAC: jr          $ra
    // 0x8001BCB0: nop

    return;
    // 0x8001BCB0: nop

L_8001BCB4:
    // 0x8001BCB4: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x8001BCB8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001BCBC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8001BCC0: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8001BCC4: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8001BCC8: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8001BCCC: beq         $a2, $zero, L_8001BCF0
    if (ctx->r6 == 0) {
        // 0x8001BCD0: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001BCF0;
    }
    // 0x8001BCD0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8001BCD4:
    // 0x8001BCD4: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8001BCD8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001BCDC: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8001BCE0: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8001BCE4: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8001BCE8: bne         $a2, $zero, L_8001BCD4
    if (ctx->r6 != 0) {
        // 0x8001BCEC: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001BCD4;
    }
    // 0x8001BCEC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8001BCF0:
    // 0x8001BCF0: jr          $ra
    // 0x8001BCF4: nop

    return;
    // 0x8001BCF4: nop

;}
RECOMP_FUNC void rare_memset(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BCF8: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x8001BCFC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8001BD00: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8001BD04: sltu        $at, $a0, $v1
    ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8001BD08: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8001BD0C: beq         $at, $zero, L_8001BD24
    if (ctx->r1 == 0) {
        // 0x8001BD10: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8001BD24;
    }
    // 0x8001BD10: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8001BD14:
    // 0x8001BD14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001BD18: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8001BD1C: bne         $at, $zero, L_8001BD14
    if (ctx->r1 != 0) {
        // 0x8001BD20: sb          $a1, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r5;
            goto L_8001BD14;
    }
    // 0x8001BD20: sb          $a1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r5;
L_8001BD24:
    // 0x8001BD24: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001BD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BD30: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x8001BD34: beq         $v0, $zero, L_8001BD48
    if (ctx->r2 == 0) {
            // 0x8001BD38: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    func_8001BD48(rdram, ctx);
    return;
    }
    // 0x8001BD38: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8001BD3C: subu        $v1, $a0, $v0
    ctx->r3 = SUB32(ctx->r4, ctx->r2);
    // 0x8001BD40: jr          $ra
    // 0x8001BD44: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    return;
    // 0x8001BD44: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
;}
RECOMP_FUNC void func_8001BD48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BD48: jr          $ra
    // 0x8001BD4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8001BD4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8001BD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BD50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001BD54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BD58: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x8001BD5C: jal         0x8001B3F4
    // 0x8001BD60: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_8001B3F4(rdram, ctx);
        goto after_0;
    // 0x8001BD60: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8001BD64: jal         0x8001B3C0
    // 0x8001BD68: nop

    func_8001B3C0(rdram, ctx);
        goto after_1;
    // 0x8001BD68: nop

    after_1:
    // 0x8001BD6C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8001BD70: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BD74: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8001BD78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001BD7C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8001BD80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001BD84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BD88: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8001BD8C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001BD90: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x8001BD94: nop

    // 0x8001BD98: bc1f        L_8001BDA4
    if (!c1cs) {
        // 0x8001BD9C: nop
    
            goto L_8001BDA4;
    }
    // 0x8001BD9C: nop

    // 0x8001BDA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001BDA4:
    // 0x8001BDA4: jr          $ra
    // 0x8001BDA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001BDA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8001BDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BDAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001BDB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BDB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001BDB8: jal         0x8001B3E8
    // 0x8001BDBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B3E8(rdram, ctx);
        goto after_0;
    // 0x8001BDBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8001BDC0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001BDC4: lw          $a0, -0x1670($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1670);
    // 0x8001BDC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BDCC: addu        $v1, $v0, $a0
    ctx->r3 = ADD32(ctx->r2, ctx->r4);
    // 0x8001BDD0: beq         $a1, $zero, L_8001BE6C
    if (ctx->r5 == 0) {
        // 0x8001BDD4: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_8001BE6C;
    }
    // 0x8001BDD4: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    // 0x8001BDD8: andi        $a2, $a1, 0x3
    ctx->r6 = ctx->r5 & 0X3;
    // 0x8001BDDC: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8001BDE0: beq         $a2, $zero, L_8001BE10
    if (ctx->r6 == 0) {
        // 0x8001BDE4: addu        $v0, $a2, $a1
        ctx->r2 = ADD32(ctx->r6, ctx->r5);
            goto L_8001BE10;
    }
    // 0x8001BDE4: addu        $v0, $a2, $a1
    ctx->r2 = ADD32(ctx->r6, ctx->r5);
    // 0x8001BDE8: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
L_8001BDEC:
    // 0x8001BDEC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8001BDF0: bne         $v1, $a0, L_8001BE00
    if (ctx->r3 != ctx->r4) {
        // 0x8001BDF4: nop
    
            goto L_8001BE00;
    }
    // 0x8001BDF4: nop

    // 0x8001BDF8: b           L_8001BE84
    // 0x8001BDFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001BE84;
    // 0x8001BDFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001BE00:
    // 0x8001BE00: bnel        $v0, $a1, L_8001BDEC
    if (ctx->r2 != ctx->r5) {
        // 0x8001BE04: lw          $v1, 0x10($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X10);
            goto L_8001BDEC;
    }
    goto skip_0;
    // 0x8001BE04: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x8001BE08: beql        $a1, $zero, L_8001BE70
    if (ctx->r5 == 0) {
        // 0x8001BE0C: lw          $t6, 0x4($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X4);
            goto L_8001BE70;
    }
    goto skip_1;
    // 0x8001BE0C: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    skip_1:
L_8001BE10:
    // 0x8001BE10: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
L_8001BE14:
    // 0x8001BE14: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8001BE18: bnel        $v1, $a0, L_8001BE2C
    if (ctx->r3 != ctx->r4) {
        // 0x8001BE1C: lw          $v1, 0x10($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X10);
            goto L_8001BE2C;
    }
    goto skip_2;
    // 0x8001BE1C: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
    skip_2:
    // 0x8001BE20: b           L_8001BE84
    // 0x8001BE24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001BE84;
    // 0x8001BE24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001BE28: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
L_8001BE2C:
    // 0x8001BE2C: bnel        $v1, $a0, L_8001BE40
    if (ctx->r3 != ctx->r4) {
        // 0x8001BE30: lw          $v1, 0x10($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X10);
            goto L_8001BE40;
    }
    goto skip_3;
    // 0x8001BE30: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
    skip_3:
    // 0x8001BE34: b           L_8001BE84
    // 0x8001BE38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001BE84;
    // 0x8001BE38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001BE3C: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
L_8001BE40:
    // 0x8001BE40: bnel        $v1, $a0, L_8001BE54
    if (ctx->r3 != ctx->r4) {
        // 0x8001BE44: lw          $v1, 0x10($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X10);
            goto L_8001BE54;
    }
    goto skip_4;
    // 0x8001BE44: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
    skip_4:
    // 0x8001BE48: b           L_8001BE84
    // 0x8001BE4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001BE84;
    // 0x8001BE4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001BE50: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
L_8001BE54:
    // 0x8001BE54: bne         $v1, $a0, L_8001BE64
    if (ctx->r3 != ctx->r4) {
        // 0x8001BE58: nop
    
            goto L_8001BE64;
    }
    // 0x8001BE58: nop

    // 0x8001BE5C: b           L_8001BE84
    // 0x8001BE60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001BE84;
    // 0x8001BE60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001BE64:
    // 0x8001BE64: bnel        $a1, $zero, L_8001BE14
    if (ctx->r5 != 0) {
        // 0x8001BE68: lw          $v1, 0x10($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X10);
            goto L_8001BE14;
    }
    goto skip_5;
    // 0x8001BE68: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
    skip_5:
L_8001BE6C:
    // 0x8001BE6C: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
L_8001BE70:
    // 0x8001BE70: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8001BE74: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8001BE78: subu        $t7, $t6, $v1
    ctx->r15 = SUB32(ctx->r14, ctx->r3);
    // 0x8001BE7C: addiu       $t8, $t7, -0x10
    ctx->r24 = ADD32(ctx->r15, -0X10);
    // 0x8001BE80: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_8001BE84:
    // 0x8001BE84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BE88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001BE8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001BE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BE94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001BE98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BE9C: jal         0x8001B3E8
    // 0x8001BEA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8001B3E8(rdram, ctx);
        goto after_0;
    // 0x8001BEA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001BEA4: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001BEA8: lw          $t6, -0x1670($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1670);
    // 0x8001BEAC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8001BEB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001BEB4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8001BEB8: blez        $v1, L_8001BEC8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8001BEBC: lw          $a1, -0x20($t7)
        ctx->r5 = MEM_W(ctx->r15, -0X20);
            goto L_8001BEC8;
    }
    // 0x8001BEBC: lw          $a1, -0x20($t7)
    ctx->r5 = MEM_W(ctx->r15, -0X20);
    // 0x8001BEC0: b           L_8001BEC8
    // 0x8001BEC4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_8001BEC8;
    // 0x8001BEC4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_8001BEC8:
    // 0x8001BEC8: jal         0x8001BD30
    // 0x8001BECC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001BD30(rdram, ctx);
        goto after_1;
    // 0x8001BECC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x8001BED0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BED4: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8001BED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BEDC: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x8001BEE0: subu        $a0, $t8, $a1
    ctx->r4 = SUB32(ctx->r24, ctx->r5);
    // 0x8001BEE4: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x8001BEE8: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8001BEEC: bne         $at, $zero, L_8001BF04
    if (ctx->r1 != 0) {
        // 0x8001BEF0: nop
    
            goto L_8001BF04;
    }
    // 0x8001BEF0: nop

    // 0x8001BEF4: lbu         $t9, 0xF($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0XF);
    // 0x8001BEF8: srl         $t0, $t9, 6
    ctx->r8 = S32(U32(ctx->r25) >> 6);
    // 0x8001BEFC: beql        $t0, $zero, L_8001BF50
    if (ctx->r8 == 0) {
        // 0x8001BF00: lbu         $t4, 0xF($a1)
        ctx->r12 = MEM_BU(ctx->r5, 0XF);
            goto L_8001BF50;
    }
    goto skip_0;
    // 0x8001BF00: lbu         $t4, 0xF($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0XF);
    skip_0:
L_8001BF04:
    // 0x8001BF04: lw          $a2, -0x1670($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1670);
    // 0x8001BF08: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8001BF0C: beql        $a2, $v1, L_8001BF50
    if (ctx->r6 == ctx->r3) {
        // 0x8001BF10: lbu         $t4, 0xF($a1)
        ctx->r12 = MEM_BU(ctx->r5, 0XF);
            goto L_8001BF50;
    }
    goto skip_1;
    // 0x8001BF10: lbu         $t4, 0xF($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0XF);
    skip_1:
    // 0x8001BF14: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
L_8001BF18:
    // 0x8001BF18: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x8001BF1C: subu        $a0, $t1, $v1
    ctx->r4 = SUB32(ctx->r9, ctx->r3);
    // 0x8001BF20: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x8001BF24: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8001BF28: bnel        $at, $zero, L_8001BF44
    if (ctx->r1 != 0) {
        // 0x8001BF2C: lw          $v1, 0x0($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X0);
            goto L_8001BF44;
    }
    goto skip_2;
    // 0x8001BF2C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    skip_2:
    // 0x8001BF30: lbu         $t2, 0xF($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XF);
    // 0x8001BF34: srl         $t3, $t2, 6
    ctx->r11 = S32(U32(ctx->r10) >> 6);
    // 0x8001BF38: beql        $t3, $zero, L_8001BF50
    if (ctx->r11 == 0) {
        // 0x8001BF3C: lbu         $t4, 0xF($a1)
        ctx->r12 = MEM_BU(ctx->r5, 0XF);
            goto L_8001BF50;
    }
    goto skip_3;
    // 0x8001BF3C: lbu         $t4, 0xF($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0XF);
    skip_3:
    // 0x8001BF40: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
L_8001BF44:
    // 0x8001BF44: bnel        $a2, $v1, L_8001BF18
    if (ctx->r6 != ctx->r3) {
        // 0x8001BF48: lw          $t1, 0x4($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X4);
            goto L_8001BF18;
    }
    goto skip_4;
    // 0x8001BF48: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    skip_4:
    // 0x8001BF4C: lbu         $t4, 0xF($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0XF);
L_8001BF50:
    // 0x8001BF50: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8001BF54: srl         $t5, $t4, 6
    ctx->r13 = S32(U32(ctx->r12) >> 6);
    // 0x8001BF58: beq         $t5, $zero, L_8001BF68
    if (ctx->r13 == 0) {
        // 0x8001BF5C: nop
    
            goto L_8001BF68;
    }
    // 0x8001BF5C: nop

    // 0x8001BF60: b           L_8001BF78
    // 0x8001BF64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001BF78;
    // 0x8001BF64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001BF68:
    // 0x8001BF68: beq         $at, $zero, L_8001BF78
    if (ctx->r1 == 0) {
        // 0x8001BF6C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_8001BF78;
    }
    // 0x8001BF6C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001BF70: b           L_8001BF78
    // 0x8001BF74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001BF78;
    // 0x8001BF74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001BF78:
    // 0x8001BF78: jr          $ra
    // 0x8001BF7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001BF7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8001BF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BF80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001BF84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001BF88: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x8001BF8C: addiu       $s2, $s2, -0x1670
    ctx->r18 = ADD32(ctx->r18, -0X1670);
    // 0x8001BF90: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8001BF94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001BF98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001BF9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001BFA0: blez        $a0, L_8001BFB0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8001BFA4: lw          $s0, 0x14($t6)
        ctx->r16 = MEM_W(ctx->r14, 0X14);
            goto L_8001BFB0;
    }
    // 0x8001BFA4: lw          $s0, 0x14($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X14);
    // 0x8001BFA8: b           L_8001BFB4
    // 0x8001BFAC: nop

        goto L_8001BFB4;
    // 0x8001BFAC: nop

L_8001BFB0:
    // 0x8001BFB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8001BFB4:
    // 0x8001BFB4: jal         0x8001BD30
    // 0x8001BFB8: nop

    func_8001BD30(rdram, ctx);
        goto after_0;
    // 0x8001BFB8: nop

    after_0:
    // 0x8001BFBC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8001BFC0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8001BFC4: subu        $t8, $t7, $s0
    ctx->r24 = SUB32(ctx->r15, ctx->r16);
    // 0x8001BFC8: addiu       $t9, $t8, -0x10
    ctx->r25 = ADD32(ctx->r24, -0X10);
    // 0x8001BFCC: sltu        $at, $t9, $v0
    ctx->r1 = ctx->r25 < ctx->r2 ? 1 : 0;
    // 0x8001BFD0: beql        $at, $zero, L_8001C038
    if (ctx->r1 == 0) {
        // 0x8001BFD4: lw          $t9, 0x4($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X4);
            goto L_8001C038;
    }
    goto skip_0;
    // 0x8001BFD4: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    skip_0:
    // 0x8001BFD8: jal         0x8001B3E8
    // 0x8001BFDC: nop

    func_8001B3E8(rdram, ctx);
        goto after_1;
    // 0x8001BFDC: nop

    after_1:
    // 0x8001BFE0: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x8001BFE4: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8001BFE8: addiu       $t0, $v1, 0x20
    ctx->r8 = ADD32(ctx->r3, 0X20);
    // 0x8001BFEC: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8001BFF0: beql        $t0, $t2, L_8001C038
    if (ctx->r8 == ctx->r10) {
        // 0x8001BFF4: lw          $t9, 0x4($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X4);
            goto L_8001C038;
    }
    goto skip_1;
    // 0x8001BFF4: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x8001BFF8: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
L_8001BFFC:
    // 0x8001BFFC: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8001C000: subu        $t4, $t3, $v1
    ctx->r12 = SUB32(ctx->r11, ctx->r3);
    // 0x8001C004: addiu       $t5, $t4, -0x10
    ctx->r13 = ADD32(ctx->r12, -0X10);
    // 0x8001C008: sltu        $at, $t5, $s1
    ctx->r1 = ctx->r13 < ctx->r17 ? 1 : 0;
    // 0x8001C00C: beql        $at, $zero, L_8001C038
    if (ctx->r1 == 0) {
        // 0x8001C010: lw          $t9, 0x4($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X4);
            goto L_8001C038;
    }
    goto skip_2;
    // 0x8001C010: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    skip_2:
    // 0x8001C014: jal         0x8001B3E8
    // 0x8001C018: nop

    func_8001B3E8(rdram, ctx);
        goto after_2;
    // 0x8001C018: nop

    after_2:
    // 0x8001C01C: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x8001C020: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8001C024: addiu       $t6, $v1, 0x20
    ctx->r14 = ADD32(ctx->r3, 0X20);
    // 0x8001C028: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8001C02C: bnel        $t6, $t8, L_8001BFFC
    if (ctx->r14 != ctx->r24) {
        // 0x8001C030: lw          $t3, 0x4($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X4);
            goto L_8001BFFC;
    }
    goto skip_3;
    // 0x8001C030: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    skip_3:
    // 0x8001C034: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
L_8001C038:
    // 0x8001C038: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001C03C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001C040: subu        $t1, $t9, $s0
    ctx->r9 = SUB32(ctx->r25, ctx->r16);
    // 0x8001C044: addiu       $t0, $t1, -0x10
    ctx->r8 = ADD32(ctx->r9, -0X10);
    // 0x8001C048: sltu        $at, $t0, $s1
    ctx->r1 = ctx->r8 < ctx->r17 ? 1 : 0;
    // 0x8001C04C: beq         $at, $zero, L_8001C05C
    if (ctx->r1 == 0) {
        // 0x8001C050: lw          $s1, 0x1C($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X1C);
            goto L_8001C05C;
    }
    // 0x8001C050: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C054: b           L_8001C060
    // 0x8001C058: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_8001C060;
    // 0x8001C058: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8001C05C:
    // 0x8001C05C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8001C060:
    // 0x8001C060: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001C064: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001C068: jr          $ra
    // 0x8001C06C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8001C06C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8001C070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C078: jal         0x8001BF80
    // 0x8001C07C: nop

    func_8001BF80(rdram, ctx);
        goto after_0;
    // 0x8001C07C: nop

    after_0:
    // 0x8001C080: beq         $v0, $zero, L_8001C090
    if (ctx->r2 == 0) {
        // 0x8001C084: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001C090;
    }
    // 0x8001C084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C088: b           L_8001C094
    // 0x8001C08C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8001C094;
    // 0x8001C08C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8001C090:
    // 0x8001C090: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001C094:
    // 0x8001C094: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001C098: jr          $ra
    // 0x8001C09C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001C09C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001C0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C0A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001C0A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001C0A8: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x8001C0AC: addiu       $s2, $s2, -0x1670
    ctx->r18 = ADD32(ctx->r18, -0X1670);
    // 0x8001C0B0: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8001C0B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001C0B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001C0BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001C0C0: blez        $a0, L_8001C0D0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8001C0C4: lw          $s0, 0x4($t6)
        ctx->r16 = MEM_W(ctx->r14, 0X4);
            goto L_8001C0D0;
    }
    // 0x8001C0C4: lw          $s0, 0x4($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X4);
    // 0x8001C0C8: b           L_8001C0D4
    // 0x8001C0CC: nop

        goto L_8001C0D4;
    // 0x8001C0CC: nop

L_8001C0D0:
    // 0x8001C0D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8001C0D4:
    // 0x8001C0D4: jal         0x8001BD30
    // 0x8001C0D8: nop

    func_8001BD30(rdram, ctx);
        goto after_0;
    // 0x8001C0D8: nop

    after_0:
    // 0x8001C0DC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8001C0E0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8001C0E4: subu        $t7, $v1, $s0
    ctx->r15 = SUB32(ctx->r3, ctx->r16);
    // 0x8001C0E8: addiu       $t8, $t7, -0x10
    ctx->r24 = ADD32(ctx->r15, -0X10);
    // 0x8001C0EC: sltu        $at, $t8, $v0
    ctx->r1 = ctx->r24 < ctx->r2 ? 1 : 0;
    // 0x8001C0F0: bne         $at, $zero, L_8001C108
    if (ctx->r1 != 0) {
        // 0x8001C0F4: nop
    
            goto L_8001C108;
    }
    // 0x8001C0F4: nop

    // 0x8001C0F8: lbu         $t9, 0xF($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XF);
    // 0x8001C0FC: srl         $t0, $t9, 6
    ctx->r8 = S32(U32(ctx->r25) >> 6);
    // 0x8001C100: beql        $t0, $zero, L_8001C178
    if (ctx->r8 == 0) {
        // 0x8001C104: lbu         $t2, 0xF($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0XF);
            goto L_8001C178;
    }
    goto skip_0;
    // 0x8001C104: lbu         $t2, 0xF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XF);
    skip_0:
L_8001C108:
    // 0x8001C108: jal         0x8001B3E8
    // 0x8001C10C: nop

    func_8001B3E8(rdram, ctx);
        goto after_1;
    // 0x8001C10C: nop

    after_1:
    // 0x8001C110: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8001C114: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8001C118: addiu       $t1, $v1, 0x20
    ctx->r9 = ADD32(ctx->r3, 0X20);
    // 0x8001C11C: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8001C120: beql        $t1, $t3, L_8001C178
    if (ctx->r9 == ctx->r11) {
        // 0x8001C124: lbu         $t2, 0xF($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0XF);
            goto L_8001C178;
    }
    goto skip_1;
    // 0x8001C124: lbu         $t2, 0xF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XF);
    skip_1:
    // 0x8001C128: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_8001C12C:
    // 0x8001C12C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x8001C130: subu        $t4, $v1, $s0
    ctx->r12 = SUB32(ctx->r3, ctx->r16);
    // 0x8001C134: addiu       $t5, $t4, -0x10
    ctx->r13 = ADD32(ctx->r12, -0X10);
    // 0x8001C138: sltu        $at, $t5, $s1
    ctx->r1 = ctx->r13 < ctx->r17 ? 1 : 0;
    // 0x8001C13C: bne         $at, $zero, L_8001C154
    if (ctx->r1 != 0) {
        // 0x8001C140: nop
    
            goto L_8001C154;
    }
    // 0x8001C140: nop

    // 0x8001C144: lbu         $t6, 0xF($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XF);
    // 0x8001C148: srl         $t7, $t6, 6
    ctx->r15 = S32(U32(ctx->r14) >> 6);
    // 0x8001C14C: beql        $t7, $zero, L_8001C178
    if (ctx->r15 == 0) {
        // 0x8001C150: lbu         $t2, 0xF($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0XF);
            goto L_8001C178;
    }
    goto skip_2;
    // 0x8001C150: lbu         $t2, 0xF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XF);
    skip_2:
L_8001C154:
    // 0x8001C154: jal         0x8001B3E8
    // 0x8001C158: nop

    func_8001B3E8(rdram, ctx);
        goto after_2;
    // 0x8001C158: nop

    after_2:
    // 0x8001C15C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8001C160: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8001C164: addiu       $t8, $v1, 0x20
    ctx->r24 = ADD32(ctx->r3, 0X20);
    // 0x8001C168: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x8001C16C: bnel        $t8, $t0, L_8001C12C
    if (ctx->r24 != ctx->r8) {
        // 0x8001C170: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_8001C12C;
    }
    goto skip_3;
    // 0x8001C170: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    skip_3:
    // 0x8001C174: lbu         $t2, 0xF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XF);
L_8001C178:
    // 0x8001C178: subu        $t3, $v1, $s0
    ctx->r11 = SUB32(ctx->r3, ctx->r16);
    // 0x8001C17C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001C180: srl         $t1, $t2, 6
    ctx->r9 = S32(U32(ctx->r10) >> 6);
    // 0x8001C184: beq         $t1, $zero, L_8001C194
    if (ctx->r9 == 0) {
        // 0x8001C188: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8001C194;
    }
    // 0x8001C188: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001C18C: b           L_8001C1AC
    // 0x8001C190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C1AC;
    // 0x8001C190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001C194:
    // 0x8001C194: addiu       $t4, $t3, -0x10
    ctx->r12 = ADD32(ctx->r11, -0X10);
    // 0x8001C198: sltu        $at, $t4, $s1
    ctx->r1 = ctx->r12 < ctx->r17 ? 1 : 0;
    // 0x8001C19C: beq         $at, $zero, L_8001C1AC
    if (ctx->r1 == 0) {
        // 0x8001C1A0: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8001C1AC;
    }
    // 0x8001C1A0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8001C1A4: b           L_8001C1AC
    // 0x8001C1A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C1AC;
    // 0x8001C1A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001C1AC:
    // 0x8001C1AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001C1B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C1B4: jr          $ra
    // 0x8001C1B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001C1B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001C1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C1C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C1C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C1C8: jal         0x8001D1E0
    // 0x8001C1CC: nop

    func_8001D1E0(rdram, ctx);
        goto after_0;
    // 0x8001C1CC: nop

    after_0:
    // 0x8001C1D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C1D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C1D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001C1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C1E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C1E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C1E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001C1EC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8001C1F0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8001C1F4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8001C1F8: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8001C1FC: addiu       $a2, $a2, -0x1800
    ctx->r6 = ADD32(ctx->r6, -0X1800);
    // 0x8001C200: jal         0x8001C324
    // 0x8001C204: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8001C324(rdram, ctx);
        goto after_0;
    // 0x8001C204: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8001C208: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C20C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001C210: addiu       $a1, $a1, -0x3900
    ctx->r5 = ADD32(ctx->r5, -0X3900);
    // 0x8001C214: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8001C218: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x8001C21C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8001C220: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x8001C224: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x8001C228: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x8001C22C: beq         $t0, $zero, L_8001C244
    if (ctx->r8 == 0) {
        // 0x8001C230: sw          $t9, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r25;
            goto L_8001C244;
    }
    // 0x8001C230: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8001C234: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x8001C238: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x8001C23C: b           L_8001C248
    // 0x8001C240: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
        goto L_8001C248;
    // 0x8001C240: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
L_8001C244:
    // 0x8001C244: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
L_8001C248:
    // 0x8001C248: jal         0x8001D30C
    // 0x8001C24C: nop

    func_8001D30C(rdram, ctx);
        goto after_1;
    // 0x8001C24C: nop

    after_1:
    // 0x8001C250: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8001C254: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x8001C258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C25C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C260: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001C264: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001C26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C26C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C274: jal         0x8001D31C
    // 0x8001C278: nop

    func_8001D31C(rdram, ctx);
        goto after_0;
    // 0x8001C278: nop

    after_0:
    // 0x8001C27C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C284: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001C28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C28C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C294: jal         0x8001D32C
    // 0x8001C298: nop

    func_8001D32C(rdram, ctx);
        goto after_0;
    // 0x8001C298: nop

    after_0:
    // 0x8001C29C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C2A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C2A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001C2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C2AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C2B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C2B4: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8001C2B8: jal         0x8001C324
    // 0x8001C2BC: addiu       $a2, $a2, -0x1800
    ctx->r6 = ADD32(ctx->r6, -0X1800);
    func_8001C324(rdram, ctx);
        goto after_0;
    // 0x8001C2BC: addiu       $a2, $a2, -0x1800
    ctx->r6 = ADD32(ctx->r6, -0X1800);
    after_0:
    // 0x8001C2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C2C4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001C2C8: sw          $v0, -0x3900($at)
    MEM_W(-0X3900, ctx->r1) = ctx->r2;
    // 0x8001C2CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001C2D0: jr          $ra
    // 0x8001C2D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001C2D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001C2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C2D8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001C2DC: jr          $ra
    // 0x8001C2E0: lw          $v0, -0x3900($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3900);
    return;
    // 0x8001C2E0: lw          $v0, -0x3900($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3900);
;}
RECOMP_FUNC void func_8001C2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C2F0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001C2F4: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x8001C2F8: jal         0x800304C0
    // 0x8001C2FC: nop

    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x8001C2FC: nop

    after_0:
    // 0x8001C300: sw          $v0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r2;
    // 0x8001C304: jal         0x8001C324
    // 0x8001C308: nop

    func_8001C324(rdram, ctx);
        goto after_1;
    // 0x8001C308: nop

    after_1:
    // 0x8001C30C: lw          $a0, 0x8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8);
    // 0x8001C310: jal         0x80030530
    // 0x8001C314: nop

    __osRestoreInt_recomp(rdram, ctx);
        goto after_2;
    // 0x8001C314: nop

    after_2:
    // 0x8001C318: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x8001C31C: jr          $ra
    // 0x8001C320: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8001C320: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8001C324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C324: addiu       $sp, $sp, -0xA90
    ctx->r29 = ADD32(ctx->r29, -0XA90);
    // 0x8001C328: sw          $s0, 0xA48($sp)
    MEM_W(0XA48, ctx->r29) = ctx->r16;
    // 0x8001C32C: sw          $s1, 0xA4C($sp)
    MEM_W(0XA4C, ctx->r29) = ctx->r17;
    // 0x8001C330: sw          $s2, 0xA50($sp)
    MEM_W(0XA50, ctx->r29) = ctx->r18;
    // 0x8001C334: sw          $s3, 0xA54($sp)
    MEM_W(0XA54, ctx->r29) = ctx->r19;
    // 0x8001C338: sw          $s4, 0xA58($sp)
    MEM_W(0XA58, ctx->r29) = ctx->r20;
    // 0x8001C33C: sw          $s5, 0xA5C($sp)
    MEM_W(0XA5C, ctx->r29) = ctx->r21;
    // 0x8001C340: sw          $s6, 0xA60($sp)
    MEM_W(0XA60, ctx->r29) = ctx->r22;
    // 0x8001C344: sw          $s7, 0xA64($sp)
    MEM_W(0XA64, ctx->r29) = ctx->r23;
    // 0x8001C348: sw          $fp, 0xA78($sp)
    MEM_W(0XA78, ctx->r29) = ctx->r30;
    // 0x8001C34C: sw          $gp, 0xA7C($sp)
    MEM_W(0XA7C, ctx->r29) = ctx->r28;
    // 0x8001C350: sw          $ra, 0xA80($sp)
    MEM_W(0XA80, ctx->r29) = ctx->r31;
    // 0x8001C354: sw          $zero, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = 0;
    // 0x8001C358: sw          $zero, 0xA88($sp)
    MEM_W(0XA88, ctx->r29) = 0;
    // 0x8001C35C: addiu       $s7, $a0, 0x2
    ctx->r23 = ADD32(ctx->r4, 0X2);
    // 0x8001C360: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x8001C364: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8001C368: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x8001C36C: lui         $t2, 0x7000
    ctx->r10 = S32(0X7000 << 16);
    // 0x8001C370: subu        $t0, $a0, $a1
    ctx->r8 = SUB32(ctx->r4, ctx->r5);
    // 0x8001C374: bgtzl       $t0, L_8001C37C
    if (SIGNED(ctx->r8) > 0) {
        // 0x8001C378: or          $t2, $t0, $zero
        ctx->r10 = ctx->r8 | 0;
            goto L_8001C37C;
    }
    goto skip_0;
    // 0x8001C378: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
    skip_0:
L_8001C37C:
    // 0x8001C37C: subu        $t0, $a2, $a1
    ctx->r8 = SUB32(ctx->r6, ctx->r5);
    // 0x8001C380: bltz        $t0, L_8001C394
    if (SIGNED(ctx->r8) < 0) {
        // 0x8001C384: slt         $at, $t0, $t2
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_8001C394;
    }
    // 0x8001C384: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8001C388: beq         $at, $zero, L_8001C394
    if (ctx->r1 == 0) {
        // 0x8001C38C: nop
    
            goto L_8001C394;
    }
    // 0x8001C38C: nop

    // 0x8001C390: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
L_8001C394:
    // 0x8001C394: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8001C398: jal         0x8001C3FC
    // 0x8001C39C: nop

    inflate_recomp(rdram, ctx);
        goto after_0;
    // 0x8001C39C: nop

    after_0:
    // 0x8001C3A0: bne         $v0, $zero, L_8001C3F4
    if (ctx->r2 != 0) {
            // 0x8001C3A4: mfc1        $v0, $f17
    ctx->r2 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    static_2_8001C3F4(rdram, ctx);
    return;
    }
    // 0x8001C3A4: mfc1        $v0, $f17
    ctx->r2 = (int32_t)ctx->f_odd[(17 - 1) * 2];
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
RECOMP_FUNC void inflate_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C3FC: sw          $ra, 0xA6C($sp)
    MEM_W(0XA6C, ctx->r29) = ctx->r31;
    // 0x8001C400: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x8001C404: addiu       $gp, $zero, 0x0
    ctx->r28 = ADD32(0, 0X0);
    // 0x8001C408: addiu       $fp, $zero, 0x0
    ctx->r30 = ADD32(0, 0X0);
L_8001C40C:
    // 0x8001C40C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x8001C410: jal         0x8001C45C
    // 0x8001C414: addiu       $a0, $sp, 0xA70
    ctx->r4 = ADD32(ctx->r29, 0XA70);
    inflate_block_recomp(rdram, ctx);
        goto after_0;
    // 0x8001C414: addiu       $a0, $sp, 0xA70
    ctx->r4 = ADD32(ctx->r29, 0XA70);
    after_0:
    // 0x8001C418: bne         $v0, $zero, L_8001C450
    if (ctx->r2 != 0) {
        // 0x8001C41C: lw          $t3, 0xA70($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XA70);
            goto L_8001C450;
    }
    // 0x8001C41C: lw          $t3, 0xA70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA70);
    // 0x8001C420: beq         $t3, $zero, L_8001C40C
    if (ctx->r11 == 0) {
        // 0x8001C424: slti        $at, $fp, 0x8
        ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
            goto L_8001C40C;
    }
    // 0x8001C424: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x8001C428: bne         $at, $zero, L_8001C440
    if (ctx->r1 != 0) {
        // 0x8001C42C: nop
    
            goto L_8001C440;
    }
    // 0x8001C42C: nop

L_8001C430:
    // 0x8001C430: addiu       $fp, $fp, -0x8
    ctx->r30 = ADD32(ctx->r30, -0X8);
    // 0x8001C434: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x8001C438: beq         $at, $zero, L_8001C430
    if (ctx->r1 == 0) {
        // 0x8001C43C: addiu       $s7, $s7, -0x1
        ctx->r23 = ADD32(ctx->r23, -0X1);
            goto L_8001C430;
    }
    // 0x8001C43C: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
L_8001C440:
    // 0x8001C440: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x8001C444: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x8001C448: addiu       $t3, $t3, -0x2EA8
    ctx->r11 = ADD32(ctx->r11, -0X2EA8);
    // 0x8001C44C: sw          $s7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r23;
L_8001C450:
    // 0x8001C450: lw          $ra, 0xA6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA6C);
    // 0x8001C454: jr          $ra
    return;
;}
RECOMP_FUNC void inflate_block_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C45C: sw          $ra, 0xA68($sp)
    MEM_W(0XA68, ctx->r29) = ctx->r31;
    // 0x8001C460: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x8001C464: beq         $at, $zero, L_8001C48C
    if (ctx->r1 == 0) {
        // 0x8001C468: nop
    
            goto L_8001C48C;
    }
    // 0x8001C468: nop

    // 0x8001C46C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C470:
    // 0x8001C470: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C474: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C478: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C47C: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C480: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x8001C484: bnel        $at, $zero, L_8001C470
    if (ctx->r1 != 0) {
        // 0x8001C488: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C470;
    }
    goto skip_0;
    // 0x8001C488: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_0:
L_8001C48C:
    // 0x8001C48C: andi        $at, $gp, 0x1
    ctx->r1 = ctx->r28 & 0X1;
    // 0x8001C490: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8001C494: srl         $t3, $gp, 1
    ctx->r11 = S32(U32(ctx->r28) >> 1);
    // 0x8001C498: andi        $t3, $t3, 0x3
    ctx->r11 = ctx->r11 & 0X3;
    // 0x8001C49C: srl         $gp, $gp, 3
    ctx->r28 = S32(U32(ctx->r28) >> 3);
    // 0x8001C4A0: addiu       $fp, $fp, -0x3
    ctx->r30 = ADD32(ctx->r30, -0X3);
    // 0x8001C4A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001C4A8: bne         $t3, $at, L_8001C4C0
    if (ctx->r11 != ctx->r1) {
        // 0x8001C4AC: nop
    
            goto L_8001C4C0;
    }
    // 0x8001C4AC: nop

    // 0x8001C4B0: jal         0x8001C500
    // 0x8001C4B4: nop

    inflate_dynamic_recomp(rdram, ctx);
        goto after_0;
    // 0x8001C4B4: nop

    after_0:
    // 0x8001C4B8: j           L_8001C4F4
    // 0x8001C4BC: nop

        goto L_8001C4F4;
    // 0x8001C4BC: nop

L_8001C4C0:
    // 0x8001C4C0: bne         $t3, $zero, L_8001C4D8
    if (ctx->r11 != 0) {
        // 0x8001C4C4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8001C4D8;
    }
    // 0x8001C4C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001C4C8: jal         0x8001C904
    // 0x8001C4CC: nop

    inflate_stored_recomp(rdram, ctx);
        goto after_1;
    // 0x8001C4CC: nop

    after_1:
    // 0x8001C4D0: j           L_8001C4F4
    // 0x8001C4D4: nop

        goto L_8001C4F4;
    // 0x8001C4D4: nop

L_8001C4D8:
    // 0x8001C4D8: bne         $t3, $at, L_8001C4F0
    if (ctx->r11 != ctx->r1) {
        // 0x8001C4DC: nop
    
            goto L_8001C4F0;
    }
    // 0x8001C4DC: nop

    // 0x8001C4E0: jal         0x8001CA2C
    // 0x8001C4E4: nop

    inflate_fixed_recomp(rdram, ctx);
        goto after_2;
    // 0x8001C4E4: nop

    after_2:
    // 0x8001C4E8: j           L_8001C4F4
    // 0x8001C4EC: nop

        goto L_8001C4F4;
    // 0x8001C4EC: nop

L_8001C4F0:
    // 0x8001C4F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8001C4F4:
    // 0x8001C4F4: lw          $ra, 0xA68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA68);
    // 0x8001C4F8: jr          $ra
    return;
;}
RECOMP_FUNC void inflate_dynamic_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C500: sw          $ra, 0xA44($sp)
    MEM_W(0XA44, ctx->r29) = ctx->r31;
    // 0x8001C504: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x8001C508: addiu       $t5, $t5, 0x17EC
    ctx->r13 = ADD32(ctx->r13, 0X17EC);
    // 0x8001C50C: slti        $at, $fp, 0xE
    ctx->r1 = SIGNED(ctx->r30) < 0XE ? 1 : 0;
    // 0x8001C510: beq         $at, $zero, L_8001C538
    if (ctx->r1 == 0) {
        // 0x8001C514: nop
    
            goto L_8001C538;
    }
    // 0x8001C514: nop

    // 0x8001C518: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C51C:
    // 0x8001C51C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C520: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C524: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C528: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C52C: slti        $at, $fp, 0xE
    ctx->r1 = SIGNED(ctx->r30) < 0XE ? 1 : 0;
    // 0x8001C530: bnel        $at, $zero, L_8001C51C
    if (ctx->r1 != 0) {
        // 0x8001C534: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C51C;
    }
    goto skip_0;
    // 0x8001C534: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_0:
L_8001C538:
    // 0x8001C538: andi        $t2, $gp, 0x1F
    ctx->r10 = ctx->r28 & 0X1F;
    // 0x8001C53C: addiu       $t2, $t2, 0x101
    ctx->r10 = ADD32(ctx->r10, 0X101);
    // 0x8001C540: andi        $t3, $gp, 0x3E0
    ctx->r11 = ctx->r28 & 0X3E0;
    // 0x8001C544: srl         $t3, $t3, 5
    ctx->r11 = S32(U32(ctx->r11) >> 5);
    // 0x8001C548: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8001C54C: andi        $t1, $gp, 0x3C00
    ctx->r9 = ctx->r28 & 0X3C00;
    // 0x8001C550: srl         $t1, $t1, 10
    ctx->r9 = S32(U32(ctx->r9) >> 10);
    // 0x8001C554: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x8001C558: srl         $gp, $gp, 14
    ctx->r28 = S32(U32(ctx->r28) >> 14);
    // 0x8001C55C: addiu       $fp, $fp, -0xE
    ctx->r30 = ADD32(ctx->r30, -0XE);
    // 0x8001C560: slti        $at, $t2, 0x11F
    ctx->r1 = SIGNED(ctx->r10) < 0X11F ? 1 : 0;
    // 0x8001C564: beq         $at, $zero, L_8001C8F4
    if (ctx->r1 == 0) {
        // 0x8001C568: slti        $at, $t3, 0x1F
        ctx->r1 = SIGNED(ctx->r11) < 0X1F ? 1 : 0;
            goto L_8001C8F4;
    }
    // 0x8001C568: slti        $at, $t3, 0x1F
    ctx->r1 = SIGNED(ctx->r11) < 0X1F ? 1 : 0;
    // 0x8001C56C: beq         $at, $zero, L_8001C8F4
    if (ctx->r1 == 0) {
        // 0x8001C570: addiu       $s1, $zero, 0x0
        ctx->r17 = ADD32(0, 0X0);
            goto L_8001C8F4;
    }
    // 0x8001C570: addiu       $s1, $zero, 0x0
    ctx->r17 = ADD32(0, 0X0);
L_8001C574:
    // 0x8001C574: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x8001C578: beq         $at, $zero, L_8001C5A0
    if (ctx->r1 == 0) {
        // 0x8001C57C: nop
    
            goto L_8001C5A0;
    }
    // 0x8001C57C: nop

    // 0x8001C580: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C584:
    // 0x8001C584: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C588: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C58C: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C590: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C594: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x8001C598: bnel        $at, $zero, L_8001C584
    if (ctx->r1 != 0) {
        // 0x8001C59C: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C584;
    }
    goto skip_1;
    // 0x8001C59C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_1:
L_8001C5A0:
    // 0x8001C5A0: addu        $t8, $t5, $s1
    ctx->r24 = ADD32(ctx->r13, ctx->r17);
    // 0x8001C5A4: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8001C5A8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001C5AC: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
    // 0x8001C5B0: andi        $at, $gp, 0x7
    ctx->r1 = ctx->r28 & 0X7;
    // 0x8001C5B4: sw          $at, 0x548($t8)
    MEM_W(0X548, ctx->r24) = ctx->r1;
    // 0x8001C5B8: srl         $gp, $gp, 3
    ctx->r28 = S32(U32(ctx->r28) >> 3);
    // 0x8001C5BC: addiu       $fp, $fp, -0x3
    ctx->r30 = ADD32(ctx->r30, -0X3);
    // 0x8001C5C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001C5C4: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8001C5C8: bne         $at, $zero, L_8001C574
    if (ctx->r1 != 0) {
        // 0x8001C5CC: slti        $at, $s1, 0x13
        ctx->r1 = SIGNED(ctx->r17) < 0X13 ? 1 : 0;
            goto L_8001C574;
    }
    // 0x8001C5CC: slti        $at, $s1, 0x13
    ctx->r1 = SIGNED(ctx->r17) < 0X13 ? 1 : 0;
    // 0x8001C5D0: beq         $at, $zero, L_8001C5F4
    if (ctx->r1 == 0) {
        // 0x8001C5D4: addu        $t8, $t5, $s1
        ctx->r24 = ADD32(ctx->r13, ctx->r17);
            goto L_8001C5F4;
    }
L_8001C5D4:
    // 0x8001C5D4: addu        $t8, $t5, $s1
    ctx->r24 = ADD32(ctx->r13, ctx->r17);
    // 0x8001C5D8: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8001C5DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001C5E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001C5E4: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
    // 0x8001C5E8: sw          $zero, 0x548($t8)
    MEM_W(0X548, ctx->r24) = 0;
    // 0x8001C5EC: slti        $at, $s1, 0x13
    ctx->r1 = SIGNED(ctx->r17) < 0X13 ? 1 : 0;
    // 0x8001C5F0: bne         $at, $zero, L_8001C5D4
    if (ctx->r1 != 0) {
        // 0x8001C5F4: addiu       $t8, $zero, 0x7
        ctx->r24 = ADD32(0, 0X7);
            goto L_8001C5D4;
    }
L_8001C5F4:
    // 0x8001C5F4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8001C5F8: sw          $t8, 0xA3C($sp)
    MEM_W(0XA3C, ctx->r29) = ctx->r24;
    // 0x8001C5FC: mtc1        $t2, $f0
    ctx->f0.u32l = ctx->r10;
    // 0x8001C600: mtc1        $t3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r11;
    // 0x8001C604: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x8001C608: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8001C60C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x8001C610: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8001C614: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8001C618: addiu       $t8, $sp, 0xA38
    ctx->r24 = ADD32(ctx->r29, 0XA38);
    // 0x8001C61C: jal         0x8001CA6C
    // 0x8001C620: addiu       $t9, $sp, 0xA3C
    ctx->r25 = ADD32(ctx->r29, 0XA3C);
    huft_build_recomp(rdram, ctx);
        goto after_0;
    // 0x8001C620: addiu       $t9, $sp, 0xA3C
    ctx->r25 = ADD32(ctx->r29, 0XA3C);
    after_0:
    // 0x8001C624: mfc1        $t2, $f0
    ctx->r10 = (int32_t)ctx->f0.u32l;
    // 0x8001C628: mfc1        $t3, $f1
    ctx->r11 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x8001C62C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8001C630: addiu       $t6, $t6, 0x1750
    ctx->r14 = ADD32(ctx->r14, 0X1750);
    // 0x8001C634: lhu         $s5, 0xA38($sp)
    ctx->r21 = MEM_HU(ctx->r29, 0XA38);
    // 0x8001C638: lw          $t0, 0xA3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA3C);
    // 0x8001C63C: addu        $s4, $t2, $t3
    ctx->r20 = ADD32(ctx->r10, ctx->r11);
    // 0x8001C640: sll         $s3, $t0, 1
    ctx->r19 = S32(ctx->r8 << 1);
    // 0x8001C644: addu        $s3, $s3, $t6
    ctx->r19 = ADD32(ctx->r19, ctx->r14);
    // 0x8001C648: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x8001C64C: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
    // 0x8001C650: slt         $at, $t9, $s4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8001C654: beq         $at, $zero, L_8001C838
    if (ctx->r1 == 0) {
        // 0x8001C658: lhu         $s3, 0x0($s3)
        ctx->r19 = MEM_HU(ctx->r19, 0X0);
            goto L_8001C838;
    }
    // 0x8001C658: lhu         $s3, 0x0($s3)
    ctx->r19 = MEM_HU(ctx->r19, 0X0);
L_8001C65C:
    // 0x8001C65C: slt         $at, $fp, $t0
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8001C660: beq         $at, $zero, L_8001C688
    if (ctx->r1 == 0) {
        // 0x8001C664: nop
    
            goto L_8001C688;
    }
    // 0x8001C664: nop

    // 0x8001C668: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C66C:
    // 0x8001C66C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C670: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C674: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C678: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C67C: slt         $at, $fp, $t0
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8001C680: bnel        $at, $zero, L_8001C66C
    if (ctx->r1 != 0) {
        // 0x8001C684: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C66C;
    }
    goto skip_2;
    // 0x8001C684: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_2:
L_8001C688:
    // 0x8001C688: and         $s0, $gp, $s3
    ctx->r16 = ctx->r28 & ctx->r19;
    // 0x8001C68C: addu        $s0, $s0, $s5
    ctx->r16 = ADD32(ctx->r16, ctx->r21);
    // 0x8001C690: sll         $s1, $s0, 2
    ctx->r17 = S32(ctx->r16 << 2);
    // 0x8001C694: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x8001C698: lbu         $s1, 0x1($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X1);
    // 0x8001C69C: srlv        $gp, $gp, $s1
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r17 & 31));
    // 0x8001C6A0: subu        $fp, $fp, $s1
    ctx->r30 = SUB32(ctx->r30, ctx->r17);
    // 0x8001C6A4: sll         $s1, $s0, 2
    ctx->r17 = S32(ctx->r16 << 2);
    // 0x8001C6A8: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x8001C6AC: lhu         $s1, 0x2($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X2);
    // 0x8001C6B0: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x8001C6B4: beq         $at, $zero, L_8001C6D4
    if (ctx->r1 == 0) {
        // 0x8001C6B8: nop
    
            goto L_8001C6D4;
    }
    // 0x8001C6B8: nop

    // 0x8001C6BC: sll         $s2, $t9, 2
    ctx->r18 = S32(ctx->r25 << 2);
    // 0x8001C6C0: addu        $s2, $s2, $sp
    ctx->r18 = ADD32(ctx->r18, ctx->r29);
    // 0x8001C6C4: sw          $s1, 0x548($s2)
    MEM_W(0X548, ctx->r18) = ctx->r17;
    // 0x8001C6C8: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x8001C6CC: j           L_8001C82C
    // 0x8001C6D0: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
        goto L_8001C82C;
    // 0x8001C6D0: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
L_8001C6D4:
    // 0x8001C6D4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8001C6D8: bne         $s1, $at, L_8001C74C
    if (ctx->r17 != ctx->r1) {
        // 0x8001C6DC: nop
    
            goto L_8001C74C;
    }
    // 0x8001C6DC: nop

    // 0x8001C6E0: slti        $at, $fp, 0x2
    ctx->r1 = SIGNED(ctx->r30) < 0X2 ? 1 : 0;
    // 0x8001C6E4: beq         $at, $zero, L_8001C70C
    if (ctx->r1 == 0) {
        // 0x8001C6E8: nop
    
            goto L_8001C70C;
    }
    // 0x8001C6E8: nop

    // 0x8001C6EC: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C6F0:
    // 0x8001C6F0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C6F4: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C6F8: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C6FC: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C700: slti        $at, $fp, 0x2
    ctx->r1 = SIGNED(ctx->r30) < 0X2 ? 1 : 0;
    // 0x8001C704: bnel        $at, $zero, L_8001C6F0
    if (ctx->r1 != 0) {
        // 0x8001C708: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C6F0;
    }
    goto skip_3;
    // 0x8001C708: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_3:
L_8001C70C:
    // 0x8001C70C: andi        $s1, $gp, 0x3
    ctx->r17 = ctx->r28 & 0X3;
    // 0x8001C710: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
    // 0x8001C714: srl         $gp, $gp, 2
    ctx->r28 = S32(U32(ctx->r28) >> 2);
    // 0x8001C718: addiu       $fp, $fp, -0x2
    ctx->r30 = ADD32(ctx->r30, -0X2);
    // 0x8001C71C: addu        $t8, $t9, $s1
    ctx->r24 = ADD32(ctx->r25, ctx->r17);
    // 0x8001C720: slt         $at, $s4, $t8
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001C724: bne         $at, $zero, L_8001C8F4
    if (ctx->r1 != 0) {
        // 0x8001C728: sll         $t8, $t9, 2
        ctx->r24 = S32(ctx->r25 << 2);
            goto L_8001C8F4;
    }
    // 0x8001C728: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8001C72C: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
L_8001C730:
    // 0x8001C730: sw          $s2, 0x548($t8)
    MEM_W(0X548, ctx->r24) = ctx->r18;
    // 0x8001C734: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x8001C738: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8001C73C: bne         $s1, $zero, L_8001C730
    if (ctx->r17 != 0) {
        // 0x8001C740: addiu       $t8, $t8, 0x4
        ctx->r24 = ADD32(ctx->r24, 0X4);
            goto L_8001C730;
    }
    // 0x8001C740: addiu       $t8, $t8, 0x4
    ctx->r24 = ADD32(ctx->r24, 0X4);
    // 0x8001C744: j           L_8001C82C
    // 0x8001C748: nop

        goto L_8001C82C;
    // 0x8001C748: nop

L_8001C74C:
    // 0x8001C74C: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8001C750: bne         $s1, $at, L_8001C7C4
    if (ctx->r17 != ctx->r1) {
        // 0x8001C754: nop
    
            goto L_8001C7C4;
    }
    // 0x8001C754: nop

    // 0x8001C758: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x8001C75C: beq         $at, $zero, L_8001C784
    if (ctx->r1 == 0) {
        // 0x8001C760: nop
    
            goto L_8001C784;
    }
    // 0x8001C760: nop

    // 0x8001C764: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C768:
    // 0x8001C768: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C76C: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C770: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C774: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C778: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x8001C77C: bnel        $at, $zero, L_8001C768
    if (ctx->r1 != 0) {
        // 0x8001C780: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C768;
    }
    goto skip_4;
    // 0x8001C780: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_4:
L_8001C784:
    // 0x8001C784: andi        $s1, $gp, 0x7
    ctx->r17 = ctx->r28 & 0X7;
    // 0x8001C788: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
    // 0x8001C78C: srl         $gp, $gp, 3
    ctx->r28 = S32(U32(ctx->r28) >> 3);
    // 0x8001C790: addiu       $fp, $fp, -0x3
    ctx->r30 = ADD32(ctx->r30, -0X3);
    // 0x8001C794: addu        $t8, $t9, $s1
    ctx->r24 = ADD32(ctx->r25, ctx->r17);
    // 0x8001C798: slt         $at, $s4, $t8
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001C79C: bne         $at, $zero, L_8001C8F4
    if (ctx->r1 != 0) {
        // 0x8001C7A0: sll         $t8, $t9, 2
        ctx->r24 = S32(ctx->r25 << 2);
            goto L_8001C8F4;
    }
    // 0x8001C7A0: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8001C7A4: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
L_8001C7A8:
    // 0x8001C7A8: sw          $zero, 0x548($t8)
    MEM_W(0X548, ctx->r24) = 0;
    // 0x8001C7AC: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x8001C7B0: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8001C7B4: bne         $s1, $zero, L_8001C7A8
    if (ctx->r17 != 0) {
        // 0x8001C7B8: addiu       $t8, $t8, 0x4
        ctx->r24 = ADD32(ctx->r24, 0X4);
            goto L_8001C7A8;
    }
    // 0x8001C7B8: addiu       $t8, $t8, 0x4
    ctx->r24 = ADD32(ctx->r24, 0X4);
    // 0x8001C7BC: j           L_8001C82C
    // 0x8001C7C0: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
        goto L_8001C82C;
    // 0x8001C7C0: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
L_8001C7C4:
    // 0x8001C7C4: slti        $at, $fp, 0x7
    ctx->r1 = SIGNED(ctx->r30) < 0X7 ? 1 : 0;
    // 0x8001C7C8: beq         $at, $zero, L_8001C7F0
    if (ctx->r1 == 0) {
        // 0x8001C7CC: nop
    
            goto L_8001C7F0;
    }
    // 0x8001C7CC: nop

    // 0x8001C7D0: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C7D4:
    // 0x8001C7D4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C7D8: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C7DC: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C7E0: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C7E4: slti        $at, $fp, 0x7
    ctx->r1 = SIGNED(ctx->r30) < 0X7 ? 1 : 0;
    // 0x8001C7E8: bnel        $at, $zero, L_8001C7D4
    if (ctx->r1 != 0) {
        // 0x8001C7EC: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C7D4;
    }
    goto skip_5;
    // 0x8001C7EC: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_5:
L_8001C7F0:
    // 0x8001C7F0: andi        $s1, $gp, 0x7F
    ctx->r17 = ctx->r28 & 0X7F;
    // 0x8001C7F4: addiu       $s1, $s1, 0xB
    ctx->r17 = ADD32(ctx->r17, 0XB);
    // 0x8001C7F8: srl         $gp, $gp, 7
    ctx->r28 = S32(U32(ctx->r28) >> 7);
    // 0x8001C7FC: addiu       $fp, $fp, -0x7
    ctx->r30 = ADD32(ctx->r30, -0X7);
    // 0x8001C800: addu        $t8, $t9, $s1
    ctx->r24 = ADD32(ctx->r25, ctx->r17);
    // 0x8001C804: slt         $at, $s4, $t8
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001C808: bne         $at, $zero, L_8001C8F4
    if (ctx->r1 != 0) {
        // 0x8001C80C: sll         $t8, $t9, 2
        ctx->r24 = S32(ctx->r25 << 2);
            goto L_8001C8F4;
    }
    // 0x8001C80C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8001C810: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
L_8001C814:
    // 0x8001C814: sw          $zero, 0x548($t8)
    MEM_W(0X548, ctx->r24) = 0;
    // 0x8001C818: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x8001C81C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8001C820: bne         $s1, $zero, L_8001C814
    if (ctx->r17 != 0) {
        // 0x8001C824: addiu       $t8, $t8, 0x4
        ctx->r24 = ADD32(ctx->r24, 0X4);
            goto L_8001C814;
    }
    // 0x8001C824: addiu       $t8, $t8, 0x4
    ctx->r24 = ADD32(ctx->r24, 0X4);
    // 0x8001C828: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
L_8001C82C:
    // 0x8001C82C: slt         $at, $t9, $s4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8001C830: bne         $at, $zero, L_8001C65C
    if (ctx->r1 != 0) {
        // 0x8001C834: nop
    
            goto L_8001C65C;
    }
    // 0x8001C834: nop

L_8001C838:
    // 0x8001C838: sh          $s5, 0xA38($sp)
    MEM_H(0XA38, ctx->r29) = ctx->r21;
    // 0x8001C83C: sh          $s0, 0xA3A($sp)
    MEM_H(0XA3A, ctx->r29) = ctx->r16;
    // 0x8001C840: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8001C844: sw          $t8, 0xA3C($sp)
    MEM_W(0XA3C, ctx->r29) = ctx->r24;
    // 0x8001C848: mtc1        $t2, $f0
    ctx->f0.u32l = ctx->r10;
    // 0x8001C84C: mtc1        $t3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r11;
    // 0x8001C850: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x8001C854: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x8001C858: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    // 0x8001C85C: lui         $a3, 0x8004
    ctx->r7 = S32(0X8004 << 16);
    // 0x8001C860: addiu       $a3, $a3, 0x1772
    ctx->r7 = ADD32(ctx->r7, 0X1772);
    // 0x8001C864: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8001C868: addiu       $t7, $t7, 0x17FF
    ctx->r15 = ADD32(ctx->r15, 0X17FF);
    // 0x8001C86C: addiu       $t8, $sp, 0xA38
    ctx->r24 = ADD32(ctx->r29, 0XA38);
    // 0x8001C870: jal         0x8001CA6C
    // 0x8001C874: addiu       $t9, $sp, 0xA3C
    ctx->r25 = ADD32(ctx->r29, 0XA3C);
    huft_build_recomp(rdram, ctx);
        goto after_1;
    // 0x8001C874: addiu       $t9, $sp, 0xA3C
    ctx->r25 = ADD32(ctx->r29, 0XA3C);
    after_1:
    // 0x8001C878: mfc1        $t2, $f0
    ctx->r10 = (int32_t)ctx->f0.u32l;
    // 0x8001C87C: mfc1        $t3, $f1
    ctx->r11 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x8001C880: bne         $v0, $zero, L_8001C8F4
    if (ctx->r2 != 0) {
        // 0x8001C884: addiu       $t8, $zero, 0x6
        ctx->r24 = ADD32(0, 0X6);
            goto L_8001C8F4;
    }
    // 0x8001C884: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x8001C888: sw          $t8, 0xA40($sp)
    MEM_W(0XA40, ctx->r29) = ctx->r24;
    // 0x8001C88C: sll         $a0, $t2, 2
    ctx->r4 = S32(ctx->r10 << 2);
    // 0x8001C890: addu        $a0, $a0, $sp
    ctx->r4 = ADD32(ctx->r4, ctx->r29);
    // 0x8001C894: addiu       $a0, $a0, 0x548
    ctx->r4 = ADD32(ctx->r4, 0X548);
    // 0x8001C898: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x8001C89C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8001C8A0: lui         $a3, 0x8004
    ctx->r7 = S32(0X8004 << 16);
    // 0x8001C8A4: addiu       $a3, $a3, 0x17B0
    ctx->r7 = ADD32(ctx->r7, 0X17B0);
    // 0x8001C8A8: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8001C8AC: addiu       $t7, $t7, 0x181E
    ctx->r15 = ADD32(ctx->r15, 0X181E);
    // 0x8001C8B0: addiu       $t8, $sp, 0xA3A
    ctx->r24 = ADD32(ctx->r29, 0XA3A);
    // 0x8001C8B4: jal         0x8001CA6C
    // 0x8001C8B8: addiu       $t9, $sp, 0xA40
    ctx->r25 = ADD32(ctx->r29, 0XA40);
    huft_build_recomp(rdram, ctx);
        goto after_2;
    // 0x8001C8B8: addiu       $t9, $sp, 0xA40
    ctx->r25 = ADD32(ctx->r29, 0XA40);
    after_2:
    // 0x8001C8BC: bne         $v0, $zero, L_8001C8F4
    if (ctx->r2 != 0) {
        // 0x8001C8C0: lhu         $a0, 0xA38($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0XA38);
            goto L_8001C8F4;
    }
    // 0x8001C8C0: lhu         $a0, 0xA38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA38);
    // 0x8001C8C4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8001C8C8: addu        $a0, $a0, $s6
    ctx->r4 = ADD32(ctx->r4, ctx->r22);
    // 0x8001C8CC: lhu         $a1, 0xA3A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA3A);
    // 0x8001C8D0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8001C8D4: addu        $a1, $a1, $s6
    ctx->r5 = ADD32(ctx->r5, ctx->r22);
    // 0x8001C8D8: lw          $a2, 0xA3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA3C);
    // 0x8001C8DC: jal         0x8001CF00
    // 0x8001C8E0: lw          $a3, 0xA40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA40);
    inflate_codes_recomp(rdram, ctx);
        goto after_3;
    // 0x8001C8E0: lw          $a3, 0xA40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA40);
    after_3:
    // 0x8001C8E4: bne         $v0, $zero, L_8001C8F4
    if (ctx->r2 != 0) {
        // 0x8001C8E8: nop
    
            goto L_8001C8F4;
    }
    // 0x8001C8E8: nop

    // 0x8001C8EC: j           L_8001C8F8
    // 0x8001C8F0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
        goto L_8001C8F8;
    // 0x8001C8F0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
L_8001C8F4:
    // 0x8001C8F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001C8F8:
    // 0x8001C8F8: lw          $ra, 0xA44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA44);
    // 0x8001C8FC: jr          $ra
    return;
;}
RECOMP_FUNC void inflate_stored_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C904: mfc1        $t2, $f17
    ctx->r10 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x8001C908: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8001C90C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8001C910: andi        $t3, $fp, 0x7
    ctx->r11 = ctx->r30 & 0X7;
    // 0x8001C914: srlv        $gp, $gp, $t3
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r11 & 31));
    // 0x8001C918: subu        $fp, $fp, $t3
    ctx->r30 = SUB32(ctx->r30, ctx->r11);
    // 0x8001C91C: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x8001C920: beq         $at, $zero, L_8001C948
    if (ctx->r1 == 0) {
        // 0x8001C924: nop
    
            goto L_8001C948;
    }
    // 0x8001C924: nop

    // 0x8001C928: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C92C:
    // 0x8001C92C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C930: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C934: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C938: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C93C: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x8001C940: bnel        $at, $zero, L_8001C92C
    if (ctx->r1 != 0) {
        // 0x8001C944: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C92C;
    }
    goto skip_0;
    // 0x8001C944: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_0:
L_8001C948:
    // 0x8001C948: andi        $t3, $gp, 0xFFFF
    ctx->r11 = ctx->r28 & 0XFFFF;
    // 0x8001C94C: srl         $gp, $gp, 16
    ctx->r28 = S32(U32(ctx->r28) >> 16);
    // 0x8001C950: addiu       $fp, $fp, -0x10
    ctx->r30 = ADD32(ctx->r30, -0X10);
    // 0x8001C954: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x8001C958: beq         $at, $zero, L_8001C980
    if (ctx->r1 == 0) {
        // 0x8001C95C: nop
    
            goto L_8001C980;
    }
    // 0x8001C95C: nop

    // 0x8001C960: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C964:
    // 0x8001C964: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C968: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C96C: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C970: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C974: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x8001C978: bnel        $at, $zero, L_8001C964
    if (ctx->r1 != 0) {
        // 0x8001C97C: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C964;
    }
    goto skip_1;
    // 0x8001C97C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_1:
L_8001C980:
    // 0x8001C980: nor         $t5, $gp, $zero
    ctx->r13 = ~(ctx->r28 | 0);
    // 0x8001C984: andi        $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 & 0XFFFF;
    // 0x8001C988: bne         $t3, $t5, L_8001CA24
    if (ctx->r11 != ctx->r13) {
            // 0x8001C98C: srl         $gp, $gp, 16
    ctx->r28 = S32(U32(ctx->r28) >> 16);
    func_8001CA24(rdram, ctx);
    return;
    }
    // 0x8001C98C: srl         $gp, $gp, 16
    ctx->r28 = S32(U32(ctx->r28) >> 16);
    // 0x8001C990: addiu       $fp, $fp, -0x10
    ctx->r30 = ADD32(ctx->r30, -0X10);
    // 0x8001C994: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x8001C998: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8001C99C: beq         $at, $zero, L_8001CA24
    if (ctx->r1 == 0) {
            // 0x8001C9A0: addu        $t5, $t7, $t2
    ctx->r13 = ADD32(ctx->r15, ctx->r10);
    func_8001CA24(rdram, ctx);
    return;
    }
    // 0x8001C9A0: addu        $t5, $t7, $t2
    ctx->r13 = ADD32(ctx->r15, ctx->r10);
    // 0x8001C9A4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8001C9A8: beq         $t3, $zero, L_8001CA18
    if (ctx->r11 == 0) {
        // 0x8001C9AC: addiu       $t3, $t3, -0x1
        ctx->r11 = ADD32(ctx->r11, -0X1);
            goto L_8001CA18;
    }
    // 0x8001C9AC: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_8001C9B0:
    // 0x8001C9B0: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x8001C9B4: beq         $at, $zero, L_8001C9DC
    if (ctx->r1 == 0) {
        // 0x8001C9B8: nop
    
            goto L_8001C9DC;
    }
    // 0x8001C9B8: nop

    // 0x8001C9BC: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001C9C0:
    // 0x8001C9C0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001C9C4: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001C9C8: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001C9CC: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001C9D0: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x8001C9D4: bnel        $at, $zero, L_8001C9C0
    if (ctx->r1 != 0) {
        // 0x8001C9D8: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001C9C0;
    }
    goto skip_2;
    // 0x8001C9D8: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_2:
L_8001C9DC:
    // 0x8001C9DC: sb          $gp, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r28;
    // 0x8001C9E0: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x8001C9E4: lw          $v0, 0xA84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA84);
    // 0x8001C9E8: andi        $v1, $gp, 0xFF
    ctx->r3 = ctx->r28 & 0XFF;
    // 0x8001C9EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8001C9F0: sw          $v0, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = ctx->r2;
    // 0x8001C9F4: andi        $v0, $v0, 0x17
    ctx->r2 = ctx->r2 & 0X17;
    // 0x8001C9F8: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x8001C9FC: lw          $v0, 0xA88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA88);
    // 0x8001CA00: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x8001CA04: sw          $v0, 0xA88($sp)
    MEM_W(0XA88, ctx->r29) = ctx->r2;
    // 0x8001CA08: srl         $gp, $gp, 8
    ctx->r28 = S32(U32(ctx->r28) >> 8);
    // 0x8001CA0C: addiu       $fp, $fp, -0x8
    ctx->r30 = ADD32(ctx->r30, -0X8);
    // 0x8001CA10: bne         $t3, $zero, L_8001C9B0
    if (ctx->r11 != 0) {
        // 0x8001CA14: addiu       $t3, $t3, -0x1
        ctx->r11 = ADD32(ctx->r11, -0X1);
            goto L_8001C9B0;
    }
    // 0x8001CA14: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_8001CA18:
    // 0x8001CA18: mtc1        $t2, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r10;
    // 0x8001CA1C: jr          $ra
    // 0x8001CA20: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    return;
    // 0x8001CA20: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void func_8001CA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CA24: jr          $ra
    // 0x8001CA28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8001CA28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void inflate_fixed_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CA2C: sw          $ra, 0xA44($sp)
    MEM_W(0XA44, ctx->r29) = ctx->r31;
    // 0x8001CA30: sw          $s6, 0xA74($sp)
    MEM_W(0XA74, ctx->r29) = ctx->r22;
    // 0x8001CA34: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x8001CA38: addiu       $s6, $s6, -0x38F0
    ctx->r22 = ADD32(ctx->r22, -0X38F0);
    // 0x8001CA3C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001CA40: addiu       $a0, $a0, -0x38EC
    ctx->r4 = ADD32(ctx->r4, -0X38EC);
    // 0x8001CA44: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001CA48: addiu       $a1, $a1, -0x2F28
    ctx->r5 = ADD32(ctx->r5, -0X2F28);
    // 0x8001CA4C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8001CA50: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x8001CA54: jal         0x8001CF00
    // 0x8001CA58: nop

    inflate_codes_recomp(rdram, ctx);
        goto after_0;
    // 0x8001CA58: nop

    after_0:
    // 0x8001CA5C: lw          $s6, 0xA74($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA74);
    // 0x8001CA60: lw          $ra, 0xA44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA44);
    // 0x8001CA64: jr          $ra
    // 0x8001CA68: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    return;
    // 0x8001CA68: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void huft_build_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CA6C: beq         $a1, $zero, L_8001CEE8
    if (ctx->r5 == 0) {
        // 0x8001CA70: mtc1        $s0, $f2
        ctx->f2.u32l = ctx->r16;
            goto L_8001CEE8;
    }
    // 0x8001CA70: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
    // 0x8001CA74: mtc1        $s1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r17;
    // 0x8001CA78: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x8001CA7C: mtc1        $s3, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r19;
    // 0x8001CA80: mtc1        $s4, $f6
    ctx->f6.u32l = ctx->r20;
    // 0x8001CA84: mtc1        $s5, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r21;
    // 0x8001CA88: mtc1        $s6, $f8
    ctx->f8.u32l = ctx->r22;
    // 0x8001CA8C: mtc1        $s7, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r23;
    // 0x8001CA90: mtc1        $fp, $f10
    ctx->f10.u32l = ctx->r30;
    // 0x8001CA94: mtc1        $gp, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r28;
    // 0x8001CA98: mfc1        $s3, $f19
    ctx->r19 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x8001CA9C: sd          $zero, 0x0($sp)
    SD(0, 0X0, ctx->r29);
    // 0x8001CAA0: sd          $zero, 0x8($sp)
    SD(0, 0X8, ctx->r29);
    // 0x8001CAA4: sd          $zero, 0x10($sp)
    SD(0, 0X10, ctx->r29);
    // 0x8001CAA8: sd          $zero, 0x18($sp)
    SD(0, 0X18, ctx->r29);
    // 0x8001CAAC: sd          $zero, 0x20($sp)
    SD(0, 0X20, ctx->r29);
    // 0x8001CAB0: sd          $zero, 0x28($sp)
    SD(0, 0X28, ctx->r29);
    // 0x8001CAB4: sd          $zero, 0x30($sp)
    SD(0, 0X30, ctx->r29);
    // 0x8001CAB8: sd          $zero, 0x38($sp)
    SD(0, 0X38, ctx->r29);
    // 0x8001CABC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x8001CAC0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8001CAC4: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
L_8001CAC8:
    // 0x8001CAC8: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x8001CACC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8001CAD0: sll         $s7, $s7, 2
    ctx->r23 = S32(ctx->r23 << 2);
    // 0x8001CAD4: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x8001CAD8: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
    // 0x8001CADC: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x8001CAE0: addiu       $at, $at, 0x1
    ctx->r1 = ADD32(ctx->r1, 0X1);
    // 0x8001CAE4: bne         $t1, $zero, L_8001CAC8
    if (ctx->r9 != 0) {
        // 0x8001CAE8: sw          $at, 0x0($s7)
        MEM_W(0X0, ctx->r23) = ctx->r1;
            goto L_8001CAC8;
    }
    // 0x8001CAE8: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x8001CAEC: lw          $s7, 0x0($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X0);
    // 0x8001CAF0: beq         $s7, $a1, L_8001CEF0
    if (ctx->r23 == ctx->r5) {
        // 0x8001CAF4: lw          $t2, 0x0($t9)
        ctx->r10 = MEM_W(ctx->r25, 0X0);
            goto L_8001CEF0;
    }
    // 0x8001CAF4: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x8001CAF8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8001CAFC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8001CB00: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
L_8001CB04:
    // 0x8001CB04: addu        $s7, $t3, $sp
    ctx->r23 = ADD32(ctx->r11, ctx->r29);
    // 0x8001CB08: lw          $s7, 0x0($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X0);
    // 0x8001CB0C: bne         $s7, $zero, L_8001CB1C
    if (ctx->r23 != 0) {
        // 0x8001CB10: nop
    
            goto L_8001CB1C;
    }
    // 0x8001CB10: nop

    // 0x8001CB14: bne         $t3, $at, L_8001CB04
    if (ctx->r11 != ctx->r1) {
        // 0x8001CB18: addiu       $t3, $t3, 0x4
        ctx->r11 = ADD32(ctx->r11, 0X4);
            goto L_8001CB04;
    }
    // 0x8001CB18: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
L_8001CB1C:
    // 0x8001CB1C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8001CB20: beq         $at, $zero, L_8001CB2C
    if (ctx->r1 == 0) {
        // 0x8001CB24: or          $t4, $t3, $zero
        ctx->r12 = ctx->r11 | 0;
            goto L_8001CB2C;
    }
    // 0x8001CB24: or          $t4, $t3, $zero
    ctx->r12 = ctx->r11 | 0;
    // 0x8001CB28: or          $t2, $t3, $zero
    ctx->r10 = ctx->r11 | 0;
L_8001CB2C:
    // 0x8001CB2C: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
L_8001CB30:
    // 0x8001CB30: addu        $s7, $t1, $sp
    ctx->r23 = ADD32(ctx->r9, ctx->r29);
    // 0x8001CB34: lw          $s7, 0x0($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X0);
    // 0x8001CB38: bne         $s7, $zero, L_8001CB4C
    if (ctx->r23 != 0) {
        // 0x8001CB3C: nop
    
            goto L_8001CB4C;
    }
    // 0x8001CB3C: nop

    // 0x8001CB40: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x8001CB44: bne         $t1, $zero, L_8001CB30
    if (ctx->r9 != 0) {
        // 0x8001CB48: nop
    
            goto L_8001CB30;
    }
    // 0x8001CB48: nop

L_8001CB4C:
    // 0x8001CB4C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8001CB50: beq         $at, $zero, L_8001CB5C
    if (ctx->r1 == 0) {
        // 0x8001CB54: or          $t5, $t1, $zero
        ctx->r13 = ctx->r9 | 0;
            goto L_8001CB5C;
    }
    // 0x8001CB54: or          $t5, $t1, $zero
    ctx->r13 = ctx->r9 | 0;
    // 0x8001CB58: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
L_8001CB5C:
    // 0x8001CB5C: srl         $t2, $t2, 2
    ctx->r10 = S32(U32(ctx->r10) >> 2);
    // 0x8001CB60: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
    // 0x8001CB64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8001CB68: srl         $s7, $t3, 2
    ctx->r23 = S32(U32(ctx->r11) >> 2);
    // 0x8001CB6C: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8001CB70: beq         $at, $zero, L_8001CB94
    if (ctx->r1 == 0) {
        // 0x8001CB74: sllv        $t9, $t9, $s7
        ctx->r25 = S32(ctx->r25 << (ctx->r23 & 31));
            goto L_8001CB94;
    }
    // 0x8001CB74: sllv        $t9, $t9, $s7
    ctx->r25 = S32(ctx->r25 << (ctx->r23 & 31));
L_8001CB78:
    // 0x8001CB78: addu        $s7, $t3, $sp
    ctx->r23 = ADD32(ctx->r11, ctx->r29);
    // 0x8001CB7C: lw          $s7, 0x0($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X0);
    // 0x8001CB80: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x8001CB84: subu        $t9, $t9, $s7
    ctx->r25 = SUB32(ctx->r25, ctx->r23);
    // 0x8001CB88: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8001CB8C: bne         $at, $zero, L_8001CB78
    if (ctx->r1 != 0) {
        // 0x8001CB90: sll         $t9, $t9, 1
        ctx->r25 = S32(ctx->r25 << 1);
            goto L_8001CB78;
    }
    // 0x8001CB90: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
L_8001CB94:
    // 0x8001CB94: addu        $s7, $t1, $sp
    ctx->r23 = ADD32(ctx->r9, ctx->r29);
    // 0x8001CB98: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
    // 0x8001CB9C: sw          $t9, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r25;
    // 0x8001CBA0: subu        $t9, $t9, $at
    ctx->r25 = SUB32(ctx->r25, ctx->r1);
    // 0x8001CBA4: sw          $zero, 0x508($sp)
    MEM_W(0X508, ctx->r29) = 0;
    // 0x8001CBA8: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x8001CBAC: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x8001CBB0: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x8001CBB4: beq         $t1, $zero, L_8001CBD8
    if (ctx->r9 == 0) {
        // 0x8001CBB8: addiu       $t6, $sp, 0x50C
        ctx->r14 = ADD32(ctx->r29, 0X50C);
            goto L_8001CBD8;
    }
    // 0x8001CBB8: addiu       $t6, $sp, 0x50C
    ctx->r14 = ADD32(ctx->r29, 0X50C);
L_8001CBBC:
    // 0x8001CBBC: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x8001CBC0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8001CBC4: addu        $t3, $t3, $s7
    ctx->r11 = ADD32(ctx->r11, ctx->r23);
    // 0x8001CBC8: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x8001CBCC: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x8001CBD0: bne         $t1, $zero, L_8001CBBC
    if (ctx->r9 != 0) {
        // 0x8001CBD4: addiu       $t6, $t6, 0x4
        ctx->r14 = ADD32(ctx->r14, 0X4);
            goto L_8001CBBC;
    }
    // 0x8001CBD4: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
L_8001CBD8:
    // 0x8001CBD8: srl         $t5, $t5, 2
    ctx->r13 = S32(U32(ctx->r13) >> 2);
    // 0x8001CBDC: srl         $t4, $t4, 2
    ctx->r12 = S32(U32(ctx->r12) >> 2);
    // 0x8001CBE0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8001CBE4: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x8001CBE8: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
L_8001CBEC:
    // 0x8001CBEC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8001CBF0: beq         $t3, $zero, L_8001CC14
    if (ctx->r11 == 0) {
        // 0x8001CBF4: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_8001CC14;
    }
    // 0x8001CBF4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001CBF8: addu        $t3, $t3, $sp
    ctx->r11 = ADD32(ctx->r11, ctx->r29);
    // 0x8001CBFC: lw          $s7, 0x504($t3)
    ctx->r23 = MEM_W(ctx->r11, 0X504);
    // 0x8001CC00: sll         $fp, $s7, 2
    ctx->r30 = S32(ctx->r23 << 2);
    // 0x8001CC04: addiu       $at, $s7, 0x1
    ctx->r1 = ADD32(ctx->r23, 0X1);
    // 0x8001CC08: sw          $at, 0x504($t3)
    MEM_W(0X504, ctx->r11) = ctx->r1;
    // 0x8001CC0C: addu        $fp, $fp, $sp
    ctx->r30 = ADD32(ctx->r30, ctx->r29);
    // 0x8001CC10: sw          $t1, 0x84($fp)
    MEM_W(0X84, ctx->r30) = ctx->r9;
L_8001CC14:
    // 0x8001CC14: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8001CC18: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8001CC1C: bnel        $at, $zero, L_8001CBEC
    if (ctx->r1 != 0) {
        // 0x8001CC20: lw          $t3, 0x0($t0)
        ctx->r11 = MEM_W(ctx->r8, 0X0);
            goto L_8001CBEC;
    }
    goto skip_0;
    // 0x8001CC20: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    skip_0:
    // 0x8001CC24: sw          $zero, 0x504($sp)
    MEM_W(0X504, ctx->r29) = 0;
    // 0x8001CC28: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x8001CC2C: addiu       $t0, $sp, 0x84
    ctx->r8 = ADD32(ctx->r29, 0X84);
    // 0x8001CC30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8001CC34: negu        $s1, $t2
    ctx->r17 = SUB32(0, ctx->r10);
    // 0x8001CC38: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x8001CC3C: j           L_8001CE74
    // 0x8001CC40: addiu       $s0, $zero, 0x0
    ctx->r16 = ADD32(0, 0X0);
        goto L_8001CE74;
    // 0x8001CC40: addiu       $s0, $zero, 0x0
    ctx->r16 = ADD32(0, 0X0);
    // 0x8001CC44: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
L_8001CC48:
    // 0x8001CC48: subu        $s0, $t5, $s1
    ctx->r16 = SUB32(ctx->r13, ctx->r17);
    // 0x8001CC4C: slt         $at, $t2, $s0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8001CC50: beq         $at, $zero, L_8001CC5C
    if (ctx->r1 == 0) {
        // 0x8001CC54: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8001CC5C;
    }
    // 0x8001CC54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001CC58: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_8001CC5C:
    // 0x8001CC5C: subu        $t3, $t4, $s1
    ctx->r11 = SUB32(ctx->r12, ctx->r17);
    // 0x8001CC60: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8001CC64: sllv        $s2, $s2, $t3
    ctx->r18 = S32(ctx->r18 << (ctx->r11 & 31));
    // 0x8001CC68: addiu       $s7, $a0, 0x1
    ctx->r23 = ADD32(ctx->r4, 0X1);
    // 0x8001CC6C: slt         $at, $s7, $s2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8001CC70: beq         $at, $zero, L_8001CCBC
    if (ctx->r1 == 0) {
        // 0x8001CC74: nop
    
            goto L_8001CCBC;
    }
    // 0x8001CC74: nop

    // 0x8001CC78: subu        $s2, $s2, $s7
    ctx->r18 = SUB32(ctx->r18, ctx->r23);
    // 0x8001CC7C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8001CC80: addu        $t6, $t6, $sp
    ctx->r14 = ADD32(ctx->r14, ctx->r29);
    // 0x8001CC84: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8001CC88: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8001CC8C: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8001CC90: beq         $at, $zero, L_8001CCBC
    if (ctx->r1 == 0) {
        // 0x8001CC94: nop
    
            goto L_8001CCBC;
    }
    // 0x8001CC94: nop

L_8001CC98:
    // 0x8001CC98: lw          $s7, 0x4($t6)
    ctx->r23 = MEM_W(ctx->r14, 0X4);
    // 0x8001CC9C: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x8001CCA0: slt         $at, $s7, $s2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8001CCA4: beq         $at, $zero, L_8001CCBC
    if (ctx->r1 == 0) {
        // 0x8001CCA8: addiu       $t6, $t6, 0x4
        ctx->r14 = ADD32(ctx->r14, 0X4);
            goto L_8001CCBC;
    }
    // 0x8001CCA8: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x8001CCAC: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8001CCB0: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8001CCB4: bne         $at, $zero, L_8001CC98
    if (ctx->r1 != 0) {
        // 0x8001CCB8: subu        $s2, $s2, $s7
        ctx->r18 = SUB32(ctx->r18, ctx->r23);
            goto L_8001CC98;
    }
    // 0x8001CCB8: subu        $s2, $s2, $s7
    ctx->r18 = SUB32(ctx->r18, ctx->r23);
L_8001CCBC:
    // 0x8001CCBC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8001CCC0: sllv        $s0, $s0, $t3
    ctx->r16 = S32(ctx->r16 << (ctx->r11 & 31));
    // 0x8001CCC4: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x8001CCC8: addu        $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x8001CCCC: addiu       $s7, $s3, 0x1
    ctx->r23 = ADD32(ctx->r19, 0X1);
    // 0x8001CCD0: sh          $s7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r23;
    // 0x8001CCD4: addiu       $t8, $t6, 0x2
    ctx->r24 = ADD32(ctx->r14, 0X2);
    // 0x8001CCD8: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x8001CCDC: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x8001CCE0: sll         $s7, $v0, 2
    ctx->r23 = S32(ctx->r2 << 2);
    // 0x8001CCE4: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x8001CCE8: beq         $v0, $zero, L_8001CD34
    if (ctx->r2 == 0) {
        // 0x8001CCEC: sw          $t6, 0x44($s7)
        MEM_W(0X44, ctx->r23) = ctx->r14;
            goto L_8001CD34;
    }
    // 0x8001CCEC: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
    // 0x8001CCF0: sll         $s7, $v0, 2
    ctx->r23 = S32(ctx->r2 << 2);
    // 0x8001CCF4: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x8001CCF8: sw          $t1, 0x504($s7)
    MEM_W(0X504, ctx->r23) = ctx->r9;
    // 0x8001CCFC: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
    // 0x8001CD00: addiu       $s4, $t3, 0x10
    ctx->r20 = ADD32(ctx->r11, 0X10);
    // 0x8001CD04: addiu       $gp, $s3, 0x1
    ctx->r28 = ADD32(ctx->r19, 0X1);
    // 0x8001CD08: subu        $t3, $s1, $t2
    ctx->r11 = SUB32(ctx->r17, ctx->r10);
    // 0x8001CD0C: srlv        $t3, $t1, $t3
    ctx->r11 = S32(U32(ctx->r9) >> (ctx->r11 & 31));
    // 0x8001CD10: addiu       $s7, $v0, -0x1
    ctx->r23 = ADD32(ctx->r2, -0X1);
    // 0x8001CD14: sll         $s7, $s7, 2
    ctx->r23 = S32(ctx->r23 << 2);
    // 0x8001CD18: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x8001CD1C: lw          $s7, 0x44($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X44);
    // 0x8001CD20: sll         $at, $t3, 2
    ctx->r1 = S32(ctx->r11 << 2);
    // 0x8001CD24: addu        $s7, $s7, $at
    ctx->r23 = ADD32(ctx->r23, ctx->r1);
    // 0x8001CD28: sb          $s4, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r20;
    // 0x8001CD2C: sb          $s5, 0x1($s7)
    MEM_B(0X1, ctx->r23) = ctx->r21;
    // 0x8001CD30: sh          $gp, 0x2($s7)
    MEM_H(0X2, ctx->r23) = ctx->r28;
L_8001CD34:
    // 0x8001CD34: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x8001CD38: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_8001CD3C:
    // 0x8001CD3C: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
L_8001CD40:
    // 0x8001CD40: slt         $at, $s7, $t4
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8001CD44: bnel        $at, $zero, L_8001CC48
    if (ctx->r1 != 0) {
        // 0x8001CD48: addu        $s1, $s1, $t2
        ctx->r17 = ADD32(ctx->r17, ctx->r10);
            goto L_8001CC48;
    }
    goto skip_1;
    // 0x8001CD48: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
    skip_1:
    // 0x8001CD4C: subu        $s5, $t4, $s1
    ctx->r21 = SUB32(ctx->r12, ctx->r17);
    // 0x8001CD50: sll         $s7, $a1, 2
    ctx->r23 = S32(ctx->r5 << 2);
    // 0x8001CD54: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x8001CD58: addiu       $s7, $s7, 0x84
    ctx->r23 = ADD32(ctx->r23, 0X84);
    // 0x8001CD5C: slt         $at, $t0, $s7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8001CD60: bne         $at, $zero, L_8001CD70
    if (ctx->r1 != 0) {
        // 0x8001CD64: addiu       $s4, $zero, 0x63
        ctx->r20 = ADD32(0, 0X63);
            goto L_8001CD70;
    }
    // 0x8001CD64: addiu       $s4, $zero, 0x63
    ctx->r20 = ADD32(0, 0X63);
    // 0x8001CD68: j           L_8001CDBC
    // 0x8001CD6C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_8001CDBC;
    // 0x8001CD6C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8001CD70:
    // 0x8001CD70: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x8001CD74: slt         $at, $s7, $a2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001CD78: beq         $at, $zero, L_8001CD9C
    if (ctx->r1 == 0) {
        // 0x8001CD7C: nop
    
            goto L_8001CD9C;
    }
    // 0x8001CD7C: nop

    // 0x8001CD80: or          $gp, $s7, $zero
    ctx->r28 = ctx->r23 | 0;
    // 0x8001CD84: slti        $at, $s7, 0x100
    ctx->r1 = SIGNED(ctx->r23) < 0X100 ? 1 : 0;
    // 0x8001CD88: bnel        $at, $zero, L_8001CD94
    if (ctx->r1 != 0) {
        // 0x8001CD8C: addiu       $s4, $zero, 0x10
        ctx->r20 = ADD32(0, 0X10);
            goto L_8001CD94;
    }
    goto skip_2;
    // 0x8001CD8C: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    skip_2:
    // 0x8001CD90: addiu       $s4, $zero, 0xF
    ctx->r20 = ADD32(0, 0XF);
L_8001CD94:
    // 0x8001CD94: j           L_8001CDB8
    // 0x8001CD98: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
        goto L_8001CDB8;
    // 0x8001CD98: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_8001CD9C:
    // 0x8001CD9C: subu        $s7, $s7, $a2
    ctx->r23 = SUB32(ctx->r23, ctx->r6);
    // 0x8001CDA0: addu        $s4, $s7, $t7
    ctx->r20 = ADD32(ctx->r23, ctx->r15);
    // 0x8001CDA4: lbu         $s4, 0x0($s4)
    ctx->r20 = MEM_BU(ctx->r20, 0X0);
    // 0x8001CDA8: sll         $s7, $s7, 1
    ctx->r23 = S32(ctx->r23 << 1);
    // 0x8001CDAC: addu        $s7, $s7, $a3
    ctx->r23 = ADD32(ctx->r23, ctx->r7);
    // 0x8001CDB0: lhu         $gp, 0x0($s7)
    ctx->r28 = MEM_HU(ctx->r23, 0X0);
    // 0x8001CDB4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_8001CDB8:
    // 0x8001CDB8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8001CDBC:
    // 0x8001CDBC: subu        $s7, $t4, $s1
    ctx->r23 = SUB32(ctx->r12, ctx->r17);
    // 0x8001CDC0: sllv        $s2, $s2, $s7
    ctx->r18 = S32(ctx->r18 << (ctx->r23 & 31));
    // 0x8001CDC4: srlv        $t3, $t1, $s1
    ctx->r11 = S32(U32(ctx->r9) >> (ctx->r17 & 31));
    // 0x8001CDC8: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8001CDCC: beq         $at, $zero, L_8001CE10
    if (ctx->r1 == 0) {
        // 0x8001CDD0: sll         $s7, $s4, 24
        ctx->r23 = S32(ctx->r20 << 24);
            goto L_8001CE10;
    }
    // 0x8001CDD0: sll         $s7, $s4, 24
    ctx->r23 = S32(ctx->r20 << 24);
    // 0x8001CDD4: andi        $s5, $s5, 0xFF
    ctx->r21 = ctx->r21 & 0XFF;
    // 0x8001CDD8: sll         $s5, $s5, 16
    ctx->r21 = S32(ctx->r21 << 16);
    // 0x8001CDDC: or          $s7, $s7, $s5
    ctx->r23 = ctx->r23 | ctx->r21;
    // 0x8001CDE0: andi        $s5, $gp, 0xFFFF
    ctx->r21 = ctx->r28 & 0XFFFF;
    // 0x8001CDE4: or          $s5, $s5, $s7
    ctx->r21 = ctx->r21 | ctx->r23;
    // 0x8001CDE8: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x8001CDEC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001CDF0: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x8001CDF4: sll         $s7, $s0, 2
    ctx->r23 = S32(ctx->r16 << 2);
    // 0x8001CDF8: addu        $s7, $s7, $t6
    ctx->r23 = ADD32(ctx->r23, ctx->r14);
    // 0x8001CDFC: sw          $s5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r21;
L_8001CE00:
    // 0x8001CE00: addu        $t3, $t3, $s2
    ctx->r11 = ADD32(ctx->r11, ctx->r18);
    // 0x8001CE04: slt         $at, $t3, $s7
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8001CE08: bnel        $at, $zero, L_8001CE00
    if (ctx->r1 != 0) {
        // 0x8001CE0C: sw          $s5, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r21;
            goto L_8001CE00;
    }
    goto skip_3;
    // 0x8001CE0C: sw          $s5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r21;
    skip_3:
L_8001CE10:
    // 0x8001CE10: addiu       $s7, $t4, -0x1
    ctx->r23 = ADD32(ctx->r12, -0X1);
    // 0x8001CE14: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8001CE18: sllv        $t3, $t3, $s7
    ctx->r11 = S32(ctx->r11 << (ctx->r23 & 31));
    // 0x8001CE1C: and         $s7, $t1, $t3
    ctx->r23 = ctx->r9 & ctx->r11;
    // 0x8001CE20: beq         $s7, $zero, L_8001CE38
    if (ctx->r23 == 0) {
        // 0x8001CE24: xor         $t1, $t1, $t3
        ctx->r9 = ctx->r9 ^ ctx->r11;
            goto L_8001CE38;
    }
    // 0x8001CE24: xor         $t1, $t1, $t3
    ctx->r9 = ctx->r9 ^ ctx->r11;
L_8001CE28:
    // 0x8001CE28: srl         $t3, $t3, 1
    ctx->r11 = S32(U32(ctx->r11) >> 1);
    // 0x8001CE2C: and         $s7, $t1, $t3
    ctx->r23 = ctx->r9 & ctx->r11;
    // 0x8001CE30: bne         $s7, $zero, L_8001CE28
    if (ctx->r23 != 0) {
        // 0x8001CE34: xor         $t1, $t1, $t3
        ctx->r9 = ctx->r9 ^ ctx->r11;
            goto L_8001CE28;
    }
    // 0x8001CE34: xor         $t1, $t1, $t3
    ctx->r9 = ctx->r9 ^ ctx->r11;
L_8001CE38:
    // 0x8001CE38: j           L_8001CE48
    // 0x8001CE3C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
        goto L_8001CE48;
    // 0x8001CE3C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x8001CE40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8001CE44:
    // 0x8001CE44: subu        $s1, $s1, $t2
    ctx->r17 = SUB32(ctx->r17, ctx->r10);
L_8001CE48:
    // 0x8001CE48: sllv        $s7, $fp, $s1
    ctx->r23 = S32(ctx->r30 << (ctx->r17 & 31));
    // 0x8001CE4C: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
    // 0x8001CE50: sll         $at, $v0, 2
    ctx->r1 = S32(ctx->r2 << 2);
    // 0x8001CE54: addu        $at, $at, $sp
    ctx->r1 = ADD32(ctx->r1, ctx->r29);
    // 0x8001CE58: lw          $at, 0x504($at)
    ctx->r1 = MEM_W(ctx->r1, 0X504);
    // 0x8001CE5C: and         $s7, $s7, $t1
    ctx->r23 = ctx->r23 & ctx->r9;
    // 0x8001CE60: bnel        $s7, $at, L_8001CE44
    if (ctx->r23 != ctx->r1) {
        // 0x8001CE64: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8001CE44;
    }
    goto skip_4;
    // 0x8001CE64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_4:
    // 0x8001CE68: bne         $a0, $zero, L_8001CD3C
    if (ctx->r4 != 0) {
        // 0x8001CE6C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_8001CD3C;
    }
    // 0x8001CE6C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_8001CE70:
    // 0x8001CE70: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
L_8001CE74:
    // 0x8001CE74: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8001CE78: bne         $at, $zero, L_8001CE98
    if (ctx->r1 != 0) {
        // 0x8001CE7C: sll         $a0, $t4, 2
        ctx->r4 = S32(ctx->r12 << 2);
            goto L_8001CE98;
    }
    // 0x8001CE7C: sll         $a0, $t4, 2
    ctx->r4 = S32(ctx->r12 << 2);
    // 0x8001CE80: addu        $a0, $a0, $sp
    ctx->r4 = ADD32(ctx->r4, ctx->r29);
    // 0x8001CE84: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8001CE88: beq         $a0, $zero, L_8001CE70
    if (ctx->r4 == 0) {
        // 0x8001CE8C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_8001CE70;
    }
    // 0x8001CE8C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8001CE90: j           L_8001CD40
    // 0x8001CE94: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
        goto L_8001CD40;
    // 0x8001CE94: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
L_8001CE98:
    // 0x8001CE98: bnel        $t9, $zero, L_8001CEA4
    if (ctx->r25 != 0) {
        // 0x8001CE9C: addiu       $s7, $zero, 0x1
        ctx->r23 = ADD32(0, 0X1);
            goto L_8001CEA4;
    }
    goto skip_5;
    // 0x8001CE9C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    skip_5:
    // 0x8001CEA0: addiu       $s7, $zero, 0x0
    ctx->r23 = ADD32(0, 0X0);
L_8001CEA4:
    // 0x8001CEA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001CEA8: bnel        $t5, $at, L_8001CEB4
    if (ctx->r13 != ctx->r1) {
        // 0x8001CEAC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8001CEB4;
    }
    goto skip_6;
    // 0x8001CEAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_6:
    // 0x8001CEB0: addiu       $at, $zero, 0x0
    ctx->r1 = ADD32(0, 0X0);
L_8001CEB4:
    // 0x8001CEB4: and         $v0, $s7, $at
    ctx->r2 = ctx->r23 & ctx->r1;
    // 0x8001CEB8: mtc1        $s3, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r19;
L_8001CEBC:
    // 0x8001CEBC: mfc1        $s0, $f2
    ctx->r16 = (int32_t)ctx->f2.u32l;
    // 0x8001CEC0: mfc1        $s1, $f3
    ctx->r17 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x8001CEC4: mfc1        $s2, $f4
    ctx->r18 = (int32_t)ctx->f4.u32l;
    // 0x8001CEC8: mfc1        $s3, $f5
    ctx->r19 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x8001CECC: mfc1        $s4, $f6
    ctx->r20 = (int32_t)ctx->f6.u32l;
    // 0x8001CED0: mfc1        $s5, $f7
    ctx->r21 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x8001CED4: mfc1        $s6, $f8
    ctx->r22 = (int32_t)ctx->f8.u32l;
    // 0x8001CED8: mfc1        $s7, $f9
    ctx->r23 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x8001CEDC: mfc1        $fp, $f10
    ctx->r30 = (int32_t)ctx->f10.u32l;
    // 0x8001CEE0: jr          $ra
    // 0x8001CEE4: mfc1        $gp, $f11
    ctx->r28 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    return;
    // 0x8001CEE4: mfc1        $gp, $f11
    ctx->r28 = (int32_t)ctx->f_odd[(11 - 1) * 2];
L_8001CEE8:
    // 0x8001CEE8: jr          $ra
    // 0x8001CEEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8001CEEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001CEF0:
    // 0x8001CEF0: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x8001CEF4: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x8001CEF8: j           L_8001CEBC
    // 0x8001CEFC: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
        goto L_8001CEBC;
    // 0x8001CEFC: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void inflate_codes_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CF00: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8001CF04: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8001CF08: mfc1        $s4, $f17
    ctx->r20 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x8001CF0C: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x8001CF10: addiu       $s0, $s0, 0x1750
    ctx->r16 = ADD32(ctx->r16, 0X1750);
    // 0x8001CF14: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x8001CF18: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x8001CF1C: lhu         $t2, 0x0($t7)
    ctx->r10 = MEM_HU(ctx->r15, 0X0);
    // 0x8001CF20: sll         $t7, $a3, 1
    ctx->r15 = S32(ctx->r7 << 1);
    // 0x8001CF24: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x8001CF28: lhu         $t0, 0x0($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0X0);
L_8001CF2C:
    // 0x8001CF2C: slt         $at, $fp, $a2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r6) ? 1 : 0;
L_8001CF30:
    // 0x8001CF30: beq         $at, $zero, L_8001CF58
    if (ctx->r1 == 0) {
        // 0x8001CF34: and         $s5, $gp, $t2
        ctx->r21 = ctx->r28 & ctx->r10;
            goto L_8001CF58;
    }
    // 0x8001CF34: and         $s5, $gp, $t2
    ctx->r21 = ctx->r28 & ctx->r10;
L_8001CF38:
    // 0x8001CF38: lbu         $s5, 0x0($s7)
    ctx->r21 = MEM_BU(ctx->r23, 0X0);
    // 0x8001CF3C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001CF40: sllv        $s5, $s5, $fp
    ctx->r21 = S32(ctx->r21 << (ctx->r30 & 31));
    // 0x8001CF44: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001CF48: slt         $at, $fp, $a2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001CF4C: bne         $at, $zero, L_8001CF38
    if (ctx->r1 != 0) {
        // 0x8001CF50: or          $gp, $gp, $s5
        ctx->r28 = ctx->r28 | ctx->r21;
            goto L_8001CF38;
    }
    // 0x8001CF50: or          $gp, $gp, $s5
    ctx->r28 = ctx->r28 | ctx->r21;
    // 0x8001CF54: and         $s5, $gp, $t2
    ctx->r21 = ctx->r28 & ctx->r10;
L_8001CF58:
    // 0x8001CF58: sll         $s5, $s5, 2
    ctx->r21 = S32(ctx->r21 << 2);
    // 0x8001CF5C: addu        $s5, $s5, $a0
    ctx->r21 = ADD32(ctx->r21, ctx->r4);
    // 0x8001CF60: lbu         $s1, 0x0($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X0);
    // 0x8001CF64: slti        $at, $s1, 0x11
    ctx->r1 = SIGNED(ctx->r17) < 0X11 ? 1 : 0;
    // 0x8001CF68: bne         $at, $zero, L_8001CFD8
    if (ctx->r1 != 0) {
        // 0x8001CF6C: addiu       $t9, $zero, 0x63
        ctx->r25 = ADD32(0, 0X63);
            goto L_8001CFD8;
    }
    // 0x8001CF6C: addiu       $t9, $zero, 0x63
    ctx->r25 = ADD32(0, 0X63);
    // 0x8001CF70: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
L_8001CF74:
    // 0x8001CF74: beq         $s1, $t9, L_8001D1D8
    if (ctx->r17 == ctx->r25) {
            // 0x8001CF78: addiu       $s1, $s1, -0x10
    ctx->r17 = ADD32(ctx->r17, -0X10);
    func_8001D1D8(rdram, ctx);
    return;
    }
    // 0x8001CF78: addiu       $s1, $s1, -0x10
    ctx->r17 = ADD32(ctx->r17, -0X10);
    // 0x8001CF7C: subu        $fp, $fp, $t7
    ctx->r30 = SUB32(ctx->r30, ctx->r15);
    // 0x8001CF80: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8001CF84: beq         $at, $zero, L_8001CFA8
    if (ctx->r1 == 0) {
        // 0x8001CF88: srlv        $gp, $gp, $t7
        ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
            goto L_8001CFA8;
    }
    // 0x8001CF88: srlv        $gp, $gp, $t7
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
L_8001CF8C:
    // 0x8001CF8C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    // 0x8001CF90: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001CF94: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001CF98: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001CF9C: slt         $t7, $fp, $s1
    ctx->r15 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8001CFA0: bne         $t7, $zero, L_8001CF8C
    if (ctx->r15 != 0) {
        // 0x8001CFA4: or          $gp, $gp, $at
        ctx->r28 = ctx->r28 | ctx->r1;
            goto L_8001CF8C;
    }
    // 0x8001CFA4: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
L_8001CFA8:
    // 0x8001CFA8: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x8001CFAC: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x8001CFB0: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x8001CFB4: lhu         $t8, 0x2($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X2);
    // 0x8001CFB8: and         $t7, $t7, $gp
    ctx->r15 = ctx->r15 & ctx->r28;
    // 0x8001CFBC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8001CFC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001CFC4: addu        $s5, $s6, $t7
    ctx->r21 = ADD32(ctx->r22, ctx->r15);
    // 0x8001CFC8: lbu         $s1, 0x0($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X0);
    // 0x8001CFCC: slti        $at, $s1, 0x11
    ctx->r1 = SIGNED(ctx->r17) < 0X11 ? 1 : 0;
    // 0x8001CFD0: beql        $at, $zero, L_8001CF74
    if (ctx->r1 == 0) {
        // 0x8001CFD4: lbu         $t7, 0x1($s5)
        ctx->r15 = MEM_BU(ctx->r21, 0X1);
            goto L_8001CF74;
    }
    goto skip_0;
    // 0x8001CFD4: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    skip_0:
L_8001CFD8:
    // 0x8001CFD8: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    // 0x8001CFDC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8001CFE0: srlv        $gp, $gp, $t7
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
    // 0x8001CFE4: bne         $s1, $at, L_8001D024
    if (ctx->r17 != ctx->r1) {
        // 0x8001CFE8: subu        $fp, $fp, $t7
        ctx->r30 = SUB32(ctx->r30, ctx->r15);
            goto L_8001D024;
    }
    // 0x8001CFE8: subu        $fp, $fp, $t7
    ctx->r30 = SUB32(ctx->r30, ctx->r15);
    // 0x8001CFEC: lhu         $t7, 0x2($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X2);
    // 0x8001CFF0: addu        $t8, $t3, $s4
    ctx->r24 = ADD32(ctx->r11, ctx->r20);
    // 0x8001CFF4: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x8001CFF8: lw          $t8, 0xA84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA84);
    // 0x8001CFFC: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x8001D000: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x8001D004: sw          $t8, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = ctx->r24;
    // 0x8001D008: andi        $t8, $t8, 0x17
    ctx->r24 = ctx->r24 & 0X17;
    // 0x8001D00C: sllv        $t9, $t9, $t8
    ctx->r25 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x8001D010: lw          $t8, 0xA88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA88);
    // 0x8001D014: xor         $t8, $t8, $t9
    ctx->r24 = ctx->r24 ^ ctx->r25;
    // 0x8001D018: sw          $t8, 0xA88($sp)
    MEM_W(0XA88, ctx->r29) = ctx->r24;
    // 0x8001D01C: j           L_8001CF2C
    // 0x8001D020: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8001CF2C;
    // 0x8001D020: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8001D024:
    // 0x8001D024: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8001D028: beq         $s1, $at, L_8001D1CC
    if (ctx->r17 == ctx->r1) {
        // 0x8001D02C: slt         $at, $fp, $s1
        ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_8001D1CC;
    }
    // 0x8001D02C: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8001D030: beq         $at, $zero, L_8001D054
    if (ctx->r1 == 0) {
        // 0x8001D034: sll         $t7, $s1, 1
        ctx->r15 = S32(ctx->r17 << 1);
            goto L_8001D054;
    }
    // 0x8001D034: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
L_8001D038:
    // 0x8001D038: lbu         $t9, 0x0($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X0);
    // 0x8001D03C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001D040: sllv        $t9, $t9, $fp
    ctx->r25 = S32(ctx->r25 << (ctx->r30 & 31));
    // 0x8001D044: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001D048: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8001D04C: bne         $at, $zero, L_8001D038
    if (ctx->r1 != 0) {
        // 0x8001D050: or          $gp, $gp, $t9
        ctx->r28 = ctx->r28 | ctx->r25;
            goto L_8001D038;
    }
    // 0x8001D050: or          $gp, $gp, $t9
    ctx->r28 = ctx->r28 | ctx->r25;
L_8001D054:
    // 0x8001D054: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x8001D058: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x8001D05C: lhu         $t8, 0x2($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X2);
    // 0x8001D060: and         $t7, $t7, $gp
    ctx->r15 = ctx->r15 & ctx->r28;
    // 0x8001D064: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x8001D068: subu        $fp, $fp, $s1
    ctx->r30 = SUB32(ctx->r30, ctx->r17);
    // 0x8001D06C: slt         $at, $fp, $a3
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8001D070: beq         $at, $zero, L_8001D094
    if (ctx->r1 == 0) {
        // 0x8001D074: srlv        $gp, $gp, $s1
        ctx->r28 = S32(U32(ctx->r28) >> (ctx->r17 & 31));
            goto L_8001D094;
    }
    // 0x8001D074: srlv        $gp, $gp, $s1
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r17 & 31));
L_8001D078:
    // 0x8001D078: lbu         $t7, 0x0($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X0);
    // 0x8001D07C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001D080: sllv        $t7, $t7, $fp
    ctx->r15 = S32(ctx->r15 << (ctx->r30 & 31));
    // 0x8001D084: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001D088: slt         $at, $fp, $a3
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8001D08C: bne         $at, $zero, L_8001D078
    if (ctx->r1 != 0) {
        // 0x8001D090: or          $gp, $gp, $t7
        ctx->r28 = ctx->r28 | ctx->r15;
            goto L_8001D078;
    }
    // 0x8001D090: or          $gp, $gp, $t7
    ctx->r28 = ctx->r28 | ctx->r15;
L_8001D094:
    // 0x8001D094: and         $t7, $gp, $t0
    ctx->r15 = ctx->r28 & ctx->r8;
    // 0x8001D098: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001D09C: addu        $s5, $a1, $t7
    ctx->r21 = ADD32(ctx->r5, ctx->r15);
    // 0x8001D0A0: lbu         $s1, 0x0($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X0);
    // 0x8001D0A4: slti        $at, $s1, 0x11
    ctx->r1 = SIGNED(ctx->r17) < 0X11 ? 1 : 0;
    // 0x8001D0A8: bne         $at, $zero, L_8001D120
    if (ctx->r1 != 0) {
        // 0x8001D0AC: addiu       $t7, $zero, 0x63
        ctx->r15 = ADD32(0, 0X63);
            goto L_8001D120;
    }
    // 0x8001D0AC: addiu       $t7, $zero, 0x63
    ctx->r15 = ADD32(0, 0X63);
L_8001D0B0:
    // 0x8001D0B0: beq         $s1, $t7, L_8001D1D8
    if (ctx->r17 == ctx->r15) {
            // 0x8001D0B4: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    func_8001D1D8(rdram, ctx);
    return;
    }
    // 0x8001D0B4: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    // 0x8001D0B8: addiu       $s1, $s1, -0x10
    ctx->r17 = ADD32(ctx->r17, -0X10);
    // 0x8001D0BC: srlv        $gp, $gp, $t7
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
    // 0x8001D0C0: subu        $fp, $fp, $t7
    ctx->r30 = SUB32(ctx->r30, ctx->r15);
    // 0x8001D0C4: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8001D0C8: beq         $at, $zero, L_8001D0F0
    if (ctx->r1 == 0) {
        // 0x8001D0CC: nop
    
            goto L_8001D0F0;
    }
    // 0x8001D0CC: nop

    // 0x8001D0D0: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_8001D0D4:
    // 0x8001D0D4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001D0D8: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8001D0DC: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8001D0E0: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001D0E4: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8001D0E8: bnel        $at, $zero, L_8001D0D4
    if (ctx->r1 != 0) {
        // 0x8001D0EC: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_8001D0D4;
    }
    goto skip_1;
    // 0x8001D0EC: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_1:
L_8001D0F0:
    // 0x8001D0F0: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x8001D0F4: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x8001D0F8: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x8001D0FC: lhu         $t8, 0x2($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X2);
    // 0x8001D100: and         $t7, $t7, $gp
    ctx->r15 = ctx->r15 & ctx->r28;
    // 0x8001D104: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8001D108: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001D10C: addu        $s5, $s6, $t7
    ctx->r21 = ADD32(ctx->r22, ctx->r15);
    // 0x8001D110: lbu         $s1, 0x0($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X0);
    // 0x8001D114: slti        $at, $s1, 0x11
    ctx->r1 = SIGNED(ctx->r17) < 0X11 ? 1 : 0;
    // 0x8001D118: beq         $at, $zero, L_8001D0B0
    if (ctx->r1 == 0) {
        // 0x8001D11C: addiu       $t7, $zero, 0x63
        ctx->r15 = ADD32(0, 0X63);
            goto L_8001D0B0;
    }
    // 0x8001D11C: addiu       $t7, $zero, 0x63
    ctx->r15 = ADD32(0, 0X63);
L_8001D120:
    // 0x8001D120: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    // 0x8001D124: sll         $t8, $s1, 1
    ctx->r24 = S32(ctx->r17 << 1);
    // 0x8001D128: subu        $fp, $fp, $t7
    ctx->r30 = SUB32(ctx->r30, ctx->r15);
    // 0x8001D12C: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8001D130: beq         $at, $zero, L_8001D154
    if (ctx->r1 == 0) {
        // 0x8001D134: srlv        $gp, $gp, $t7
        ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
            goto L_8001D154;
    }
    // 0x8001D134: srlv        $gp, $gp, $t7
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
L_8001D138:
    // 0x8001D138: lbu         $t7, 0x0($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X0);
    // 0x8001D13C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001D140: sllv        $t7, $t7, $fp
    ctx->r15 = S32(ctx->r15 << (ctx->r30 & 31));
    // 0x8001D144: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8001D148: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8001D14C: bne         $at, $zero, L_8001D138
    if (ctx->r1 != 0) {
        // 0x8001D150: or          $gp, $gp, $t7
        ctx->r28 = ctx->r28 | ctx->r15;
            goto L_8001D138;
    }
    // 0x8001D150: or          $gp, $gp, $t7
    ctx->r28 = ctx->r28 | ctx->r15;
L_8001D154:
    // 0x8001D154: addu        $t7, $t8, $s0
    ctx->r15 = ADD32(ctx->r24, ctx->r16);
    // 0x8001D158: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x8001D15C: lhu         $t8, 0x2($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X2);
    // 0x8001D160: and         $t7, $t7, $gp
    ctx->r15 = ctx->r15 & ctx->r28;
    // 0x8001D164: subu        $s3, $s4, $t7
    ctx->r19 = SUB32(ctx->r20, ctx->r15);
    // 0x8001D168: subu        $s3, $s3, $t8
    ctx->r19 = SUB32(ctx->r19, ctx->r24);
    // 0x8001D16C: srlv        $gp, $gp, $s1
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r17 & 31));
    // 0x8001D170: subu        $fp, $fp, $s1
    ctx->r30 = SUB32(ctx->r30, ctx->r17);
    // 0x8001D174: addu        $t7, $s4, $s2
    ctx->r15 = ADD32(ctx->r20, ctx->r18);
    // 0x8001D178: slt         $at, $t7, $t5
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8001D17C: beq         $at, $zero, L_8001D1D8
    if (ctx->r1 == 0) {
            // 0x8001D180: addu        $t8, $t3, $s3
    ctx->r24 = ADD32(ctx->r11, ctx->r19);
    func_8001D1D8(rdram, ctx);
    return;
    }
    // 0x8001D180: addu        $t8, $t3, $s3
    ctx->r24 = ADD32(ctx->r11, ctx->r19);
    // 0x8001D184: addu        $t9, $t3, $s4
    ctx->r25 = ADD32(ctx->r11, ctx->r20);
    // 0x8001D188: addu        $s4, $s4, $s2
    ctx->r20 = ADD32(ctx->r20, ctx->r18);
    // 0x8001D18C: lw          $v0, 0xA84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA84);
    // 0x8001D190: lw          $v1, 0xA88($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA88);
L_8001D194:
    // 0x8001D194: lbu         $t7, 0x0($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X0);
    // 0x8001D198: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x8001D19C: sb          $t7, -0x1($t9)
    MEM_B(-0X1, ctx->r25) = ctx->r15;
    // 0x8001D1A0: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8001D1A4: andi        $at, $v0, 0x17
    ctx->r1 = ctx->r2 & 0X17;
    // 0x8001D1A8: sllv        $t7, $t7, $at
    ctx->r15 = S32(ctx->r15 << (ctx->r1 & 31));
    // 0x8001D1AC: xor         $v1, $v1, $t7
    ctx->r3 = ctx->r3 ^ ctx->r15;
    // 0x8001D1B0: addu        $at, $t3, $s4
    ctx->r1 = ADD32(ctx->r11, ctx->r20);
    // 0x8001D1B4: bne         $t9, $at, L_8001D194
    if (ctx->r25 != ctx->r1) {
        // 0x8001D1B8: addiu       $t8, $t8, 0x1
        ctx->r24 = ADD32(ctx->r24, 0X1);
            goto L_8001D194;
    }
    // 0x8001D1B8: addiu       $t8, $t8, 0x1
    ctx->r24 = ADD32(ctx->r24, 0X1);
    // 0x8001D1BC: sw          $v0, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = ctx->r2;
    // 0x8001D1C0: sw          $v1, 0xA88($sp)
    MEM_W(0XA88, ctx->r29) = ctx->r3;
    // 0x8001D1C4: j           L_8001CF30
    // 0x8001D1C8: slt         $at, $fp, $a2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r6) ? 1 : 0;
        goto L_8001CF30;
    // 0x8001D1C8: slt         $at, $fp, $a2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r6) ? 1 : 0;
L_8001D1CC:
    // 0x8001D1CC: mtc1        $s4, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r20;
    // 0x8001D1D0: jr          $ra
    // 0x8001D1D4: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    return;
    // 0x8001D1D4: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void func_8001D1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D1D8: jr          $ra
    // 0x8001D1DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8001D1DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8001D1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D1E0: addiu       $sp, $sp, -0xA90
    ctx->r29 = ADD32(ctx->r29, -0XA90);
    // 0x8001D1E4: sw          $s0, 0xA48($sp)
    MEM_W(0XA48, ctx->r29) = ctx->r16;
    // 0x8001D1E8: sw          $s1, 0xA4C($sp)
    MEM_W(0XA4C, ctx->r29) = ctx->r17;
    // 0x8001D1EC: sw          $s2, 0xA50($sp)
    MEM_W(0XA50, ctx->r29) = ctx->r18;
    // 0x8001D1F0: sw          $s3, 0xA54($sp)
    MEM_W(0XA54, ctx->r29) = ctx->r19;
    // 0x8001D1F4: sw          $s4, 0xA58($sp)
    MEM_W(0XA58, ctx->r29) = ctx->r20;
    // 0x8001D1F8: sw          $s5, 0xA5C($sp)
    MEM_W(0XA5C, ctx->r29) = ctx->r21;
    // 0x8001D1FC: sw          $s6, 0xA60($sp)
    MEM_W(0XA60, ctx->r29) = ctx->r22;
    // 0x8001D200: sw          $s7, 0xA64($sp)
    MEM_W(0XA64, ctx->r29) = ctx->r23;
    // 0x8001D204: sw          $ra, 0xA80($sp)
    MEM_W(0XA80, ctx->r29) = ctx->r31;
    // 0x8001D208: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x8001D20C: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x8001D210: addiu       $s6, $s6, -0x38F0
    ctx->r22 = ADD32(ctx->r22, -0X38F0);
    // 0x8001D214: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8001D218: addiu       $t2, $sp, 0x548
    ctx->r10 = ADD32(ctx->r29, 0X548);
    // 0x8001D21C: addiu       $t1, $t2, 0x240
    ctx->r9 = ADD32(ctx->r10, 0X240);
L_8001D220:
    // 0x8001D220: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x8001D224: bne         $t2, $t1, L_8001D220
    if (ctx->r10 != ctx->r9) {
        // 0x8001D228: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_8001D220;
    }
    // 0x8001D228: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x8001D22C: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x8001D230: addiu       $t1, $t2, 0x1C0
    ctx->r9 = ADD32(ctx->r10, 0X1C0);
L_8001D234:
    // 0x8001D234: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x8001D238: bne         $t2, $t1, L_8001D234
    if (ctx->r10 != ctx->r9) {
        // 0x8001D23C: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_8001D234;
    }
    // 0x8001D23C: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x8001D240: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8001D244: addiu       $t1, $t2, 0x60
    ctx->r9 = ADD32(ctx->r10, 0X60);
L_8001D248:
    // 0x8001D248: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x8001D24C: bne         $t2, $t1, L_8001D248
    if (ctx->r10 != ctx->r9) {
        // 0x8001D250: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_8001D248;
    }
    // 0x8001D250: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x8001D254: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8001D258: addiu       $t1, $t2, 0x20
    ctx->r9 = ADD32(ctx->r10, 0X20);
L_8001D25C:
    // 0x8001D25C: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x8001D260: bne         $t2, $t1, L_8001D25C
    if (ctx->r10 != ctx->r9) {
        // 0x8001D264: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_8001D25C;
    }
    // 0x8001D264: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x8001D268: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8001D26C: sw          $t0, 0x9CC($sp)
    MEM_W(0X9CC, ctx->r29) = ctx->r8;
    // 0x8001D270: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x8001D274: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x8001D278: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    // 0x8001D27C: lui         $a3, 0x8004
    ctx->r7 = S32(0X8004 << 16);
    // 0x8001D280: addiu       $a3, $a3, 0x1772
    ctx->r7 = ADD32(ctx->r7, 0X1772);
    // 0x8001D284: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8001D288: addiu       $t7, $t7, 0x17FF
    ctx->r15 = ADD32(ctx->r15, 0X17FF);
    // 0x8001D28C: addiu       $t8, $sp, 0x9C8
    ctx->r24 = ADD32(ctx->r29, 0X9C8);
    // 0x8001D290: jal         0x8001CA6C
    // 0x8001D294: addiu       $t9, $sp, 0x9CC
    ctx->r25 = ADD32(ctx->r29, 0X9CC);
    huft_build_recomp(rdram, ctx);
        goto after_0;
    // 0x8001D294: addiu       $t9, $sp, 0x9CC
    ctx->r25 = ADD32(ctx->r29, 0X9CC);
    after_0:
    // 0x8001D298: addiu       $t0, $sp, 0x548
    ctx->r8 = ADD32(ctx->r29, 0X548);
    // 0x8001D29C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x8001D2A0: addiu       $t2, $t0, 0x78
    ctx->r10 = ADD32(ctx->r8, 0X78);
L_8001D2A4:
    // 0x8001D2A4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8001D2A8: bne         $t0, $t2, L_8001D2A4
    if (ctx->r8 != ctx->r10) {
        // 0x8001D2AC: sw          $t1, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r9;
            goto L_8001D2A4;
    }
    // 0x8001D2AC: sw          $t1, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r9;
    // 0x8001D2B0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8001D2B4: sw          $t0, 0x9D4($sp)
    MEM_W(0X9D4, ctx->r29) = ctx->r8;
    // 0x8001D2B8: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x8001D2BC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8001D2C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8001D2C4: lui         $a3, 0x8004
    ctx->r7 = S32(0X8004 << 16);
    // 0x8001D2C8: addiu       $a3, $a3, 0x17B0
    ctx->r7 = ADD32(ctx->r7, 0X17B0);
    // 0x8001D2CC: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8001D2D0: addiu       $t7, $t7, 0x181E
    ctx->r15 = ADD32(ctx->r15, 0X181E);
    // 0x8001D2D4: addiu       $t8, $sp, 0x9D0
    ctx->r24 = ADD32(ctx->r29, 0X9D0);
    // 0x8001D2D8: jal         0x8001CA6C
    // 0x8001D2DC: addiu       $t9, $sp, 0x9D4
    ctx->r25 = ADD32(ctx->r29, 0X9D4);
    huft_build_recomp(rdram, ctx);
        goto after_1;
    // 0x8001D2DC: addiu       $t9, $sp, 0x9D4
    ctx->r25 = ADD32(ctx->r29, 0X9D4);
    after_1:
    // 0x8001D2E0: lw          $s0, 0xA48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA48);
    // 0x8001D2E4: lw          $s1, 0xA4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4C);
    // 0x8001D2E8: lw          $s2, 0xA50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA50);
    // 0x8001D2EC: lw          $s3, 0xA54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA54);
    // 0x8001D2F0: lw          $s4, 0xA58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA58);
    // 0x8001D2F4: lw          $s5, 0xA5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA5C);
    // 0x8001D2F8: lw          $s6, 0xA60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA60);
    // 0x8001D2FC: lw          $s7, 0xA64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA64);
    // 0x8001D300: lw          $ra, 0xA80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA80);
    // 0x8001D304: jr          $ra
    // 0x8001D308: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
    return;
    // 0x8001D308: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
;}
RECOMP_FUNC void func_8001D30C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D30C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001D310: addiu       $v0, $v0, -0x2EA8
    ctx->r2 = ADD32(ctx->r2, -0X2EA8);
    // 0x8001D314: jr          $ra
    // 0x8001D318: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x8001D318: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void func_8001D31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D31C: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x8001D320: addiu       $v0, $v0, -0x8A0
    ctx->r2 = ADD32(ctx->r2, -0X8A0);
    // 0x8001D324: jr          $ra
    // 0x8001D328: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x8001D328: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void func_8001D32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D32C: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x8001D330: addiu       $v0, $v0, -0x89C
    ctx->r2 = ADD32(ctx->r2, -0X89C);
    // 0x8001D334: jr          $ra
    // 0x8001D338: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x8001D338: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void func_8001D340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D340: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001D344: lw          $t6, -0x2EA0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2EA0);
    // 0x8001D348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D34C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001D350: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8001D354: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8001D358: beq         $t7, $zero, L_8001D368
    if (ctx->r15 == 0) {
        // 0x8001D35C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8001D368;
    }
    // 0x8001D35C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D360: jal         0x8001DA00
    // 0x8001D364: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8001DA00(rdram, ctx);
        goto after_0;
    // 0x8001D364: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
L_8001D368:
    // 0x8001D368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D36C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D374: jr          $ra
    // 0x8001D378: nop

    return;
    // 0x8001D378: nop

;}
RECOMP_FUNC void func_8001D37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D37C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001D380: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8001D384: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001D388: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D38C: sw          $t6, -0x2EA0($at)
    MEM_W(-0X2EA0, ctx->r1) = ctx->r14;
    // 0x8001D390: or          $a3, $sp, $zero
    ctx->r7 = ctx->r29 | 0;
    // 0x8001D394: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001D398: addiu       $a3, $a3, 0x27
    ctx->r7 = ADD32(ctx->r7, 0X27);
    // 0x8001D39C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8001D3A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D3A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001D3A8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001D3AC: and         $t7, $a3, $at
    ctx->r15 = ctx->r7 & ctx->r1;
    // 0x8001D3B0: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x8001D3B4: addiu       $a0, $a0, -0x2CC0
    ctx->r4 = ADD32(ctx->r4, -0X2CC0);
    // 0x8001D3B8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8001D3BC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8001D3C0: jal         0x80030B30
    // 0x8001D3C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80030B30(rdram, ctx);
        goto after_0;
    // 0x8001D3C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8001D3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D3CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001D3D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D3D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001D3DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001D3E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001D3E4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001D3E8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8001D3EC: lh          $a3, 0x26($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X26);
    // 0x8001D3F0: lh          $a2, 0x22($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X22);
    // 0x8001D3F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D3F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001D3FC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D400: sw          $t6, -0x2EA0($at)
    MEM_W(-0X2EA0, ctx->r1) = ctx->r14;
    // 0x8001D404: andi        $a1, $a3, 0xFFFF
    ctx->r5 = ctx->r7 & 0XFFFF;
    // 0x8001D408: jal         0x8001D9CC
    // 0x8001D40C: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    func_8001D9CC(rdram, ctx);
        goto after_0;
    // 0x8001D40C: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    after_0:
    // 0x8001D410: or          $a3, $sp, $zero
    ctx->r7 = ctx->r29 | 0;
    // 0x8001D414: addiu       $a3, $a3, 0x2F
    ctx->r7 = ADD32(ctx->r7, 0X2F);
    // 0x8001D418: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8001D41C: and         $t7, $a3, $at
    ctx->r15 = ctx->r7 & ctx->r1;
    // 0x8001D420: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x8001D424: addiu       $a0, $a0, -0x2CC0
    ctx->r4 = ADD32(ctx->r4, -0X2CC0);
    // 0x8001D428: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8001D42C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001D430: jal         0x80030B30
    // 0x8001D434: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_80030B30(rdram, ctx);
        goto after_1;
    // 0x8001D434: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8001D438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D43C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001D440: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D450: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8001D454: andi        $t7, $t6, 0xF800
    ctx->r15 = ctx->r14 & 0XF800;
    // 0x8001D458: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8001D45C: andi        $t1, $v1, 0x7C0
    ctx->r9 = ctx->r3 & 0X7C0;
    // 0x8001D460: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001D464: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001D468: bgez        $t7, L_8001D478
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8001D46C: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_8001D478;
    }
    // 0x8001D46C: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8001D470: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x8001D474: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8001D478:
    // 0x8001D478: andi        $t9, $t8, 0xF800
    ctx->r25 = ctx->r24 & 0XF800;
    // 0x8001D47C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x8001D480: bgez        $t1, L_8001D490
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8001D484: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8001D490;
    }
    // 0x8001D484: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8001D488: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x8001D48C: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_8001D490:
    // 0x8001D490: andi        $t3, $t2, 0x7C0
    ctx->r11 = ctx->r10 & 0X7C0;
    // 0x8001D494: andi        $t6, $v1, 0x3E
    ctx->r14 = ctx->r3 & 0X3E;
    // 0x8001D498: or          $t4, $t3, $zero
    ctx->r12 = ctx->r11 | 0;
    // 0x8001D49C: or          $t5, $t0, $t4
    ctx->r13 = ctx->r8 | ctx->r12;
    // 0x8001D4A0: bgez        $t6, L_8001D4B0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001D4A4: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_8001D4B0;
    }
    // 0x8001D4A4: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8001D4A8: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x8001D4AC: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_8001D4B0:
    // 0x8001D4B0: andi        $t9, $t7, 0x3E
    ctx->r25 = ctx->r15 & 0X3E;
    // 0x8001D4B4: or          $v0, $t5, $t9
    ctx->r2 = ctx->r13 | ctx->r25;
    // 0x8001D4B8: ori         $t1, $v0, 0x1
    ctx->r9 = ctx->r2 | 0X1;
    // 0x8001D4BC: jr          $ra
    // 0x8001D4C0: andi        $v0, $t1, 0xFFFF
    ctx->r2 = ctx->r9 & 0XFFFF;
    return;
    // 0x8001D4C0: andi        $v0, $t1, 0xFFFF
    ctx->r2 = ctx->r9 & 0XFFFF;
;}
RECOMP_FUNC void func_8001D4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D4C4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8001D4C8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8001D4CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8001D4D0: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8001D4D4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8001D4D8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8001D4DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001D4E0: bgez        $t6, L_8001D4F8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001D4E4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001D4F8;
    }
    // 0x8001D4E4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001D4E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001D4EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001D4F0: nop

    // 0x8001D4F4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8001D4F8:
    // 0x8001D4F8: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x8001D4FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001D500: bgez        $a1, L_8001D514
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8001D504: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8001D514;
    }
    // 0x8001D504: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001D508: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8001D50C: nop

    // 0x8001D510: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_8001D514:
    // 0x8001D514: sub.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8001D518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D51C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001D520: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8001D524: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8001D528: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8001D52C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8001D530: nop

    // 0x8001D534: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001D538: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8001D53C: nop

    // 0x8001D540: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8001D544: beql        $v0, $zero, L_8001D5AC
    if (ctx->r2 == 0) {
            // 0x8001D548: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    static_2_8001D5AC(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x8001D548: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x8001D54C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001D550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D554: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8001D558: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8001D55C: nop

    // 0x8001D560: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8001D564: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8001D568: nop

    // 0x8001D56C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8001D570: bnel        $v0, $zero, L_8001D598
    if (ctx->r2 != 0) {
            // 0x8001D574: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    static_2_8001D598(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x8001D574: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x8001D578: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8001D57C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001D580: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001D584: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x8001D588: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8001D58C: jr          $ra
    // 0x8001D590: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x8001D590: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
;}
RECOMP_FUNC void func_8001D594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D594: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
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
RECOMP_FUNC void func_8001D5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8001D594:
    // 0x8001D5A8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
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
RECOMP_FUNC void func_8001D5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D5C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001D5C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D5CC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001D5D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001D5D4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8001D5D8: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
    // 0x8001D5DC: sra         $t9, $v0, 3
    ctx->r25 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8001D5E0: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8001D5E4: andi        $t0, $t9, 0xF8
    ctx->r8 = ctx->r25 & 0XF8;
    // 0x8001D5E8: andi        $t2, $t1, 0xF8
    ctx->r10 = ctx->r9 & 0XF8;
    // 0x8001D5EC: sh          $t0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r8;
    // 0x8001D5F0: sh          $t2, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r10;
    // 0x8001D5F4: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x8001D5F8: sra         $t7, $v0, 8
    ctx->r15 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8001D5FC: andi        $a3, $t7, 0xF8
    ctx->r7 = ctx->r15 & 0XF8;
    // 0x8001D600: beql        $v1, $zero, L_8001D68C
    if (ctx->r3 == 0) {
        // 0x8001D604: lhu         $t0, 0x24($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X24);
            goto L_8001D68C;
    }
    goto skip_0;
    // 0x8001D604: lhu         $t0, 0x24($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X24);
    skip_0:
    // 0x8001D608: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8001D60C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001D610: bgez        $v1, L_8001D624
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8001D614: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001D624;
    }
    // 0x8001D614: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001D618: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001D61C: nop

    // 0x8001D620: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8001D624:
    // 0x8001D624: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x8001D628: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001D62C: lbu         $a1, 0x0($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X0);
    // 0x8001D630: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x8001D634: mul.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001D638: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8001D63C: jal         0x8001D4C4
    // 0x8001D640: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_8001D4C4(rdram, ctx);
        goto after_0;
    // 0x8001D640: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x8001D644: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D648: andi        $t4, $v0, 0xF8
    ctx->r12 = ctx->r2 & 0XF8;
    // 0x8001D64C: sh          $t4, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r12;
    // 0x8001D650: lbu         $a0, 0x25($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X25);
    // 0x8001D654: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D658: jal         0x8001D4C4
    // 0x8001D65C: lbu         $a1, 0x1($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X1);
    func_8001D4C4(rdram, ctx);
        goto after_1;
    // 0x8001D65C: lbu         $a1, 0x1($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X1);
    after_1:
    // 0x8001D660: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D664: andi        $t6, $v0, 0xF8
    ctx->r14 = ctx->r2 & 0XF8;
    // 0x8001D668: sh          $t6, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r14;
    // 0x8001D66C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8001D670: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D674: jal         0x8001D4C4
    // 0x8001D678: lbu         $a1, 0x2($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X2);
    func_8001D4C4(rdram, ctx);
        goto after_2;
    // 0x8001D678: lbu         $a1, 0x2($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X2);
    after_2:
    // 0x8001D67C: andi        $t8, $v0, 0xF8
    ctx->r24 = ctx->r2 & 0XF8;
    // 0x8001D680: sh          $t8, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r24;
    // 0x8001D684: lhu         $a3, 0x26($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X26);
    // 0x8001D688: lhu         $t0, 0x24($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X24);
L_8001D68C:
    // 0x8001D68C: lhu         $t3, 0x22($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X22);
    // 0x8001D690: sll         $t9, $a3, 8
    ctx->r25 = S32(ctx->r7 << 8);
    // 0x8001D694: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8001D698: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8001D69C: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x8001D6A0: sra         $t4, $t3, 2
    ctx->r12 = S32(SIGNED(ctx->r11) >> 2);
    // 0x8001D6A4: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8001D6A8: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x8001D6AC: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x8001D6B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D6B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001D6B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D6C0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8001D6C4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8001D6C8: sll         $t7, $a2, 5
    ctx->r15 = S32(ctx->r6 << 5);
    // 0x8001D6CC: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x8001D6D0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8001D6D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001D6D8: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8001D6DC: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x8001D6E0: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8001D6E4: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x8001D6E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001D6EC: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x8001D6F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001D6F4: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x8001D6F8: addiu       $t0, $t9, 0x260
    ctx->r8 = ADD32(ctx->r25, 0X260);
    // 0x8001D6FC: addiu       $t3, $t2, -0xA0
    ctx->r11 = ADD32(ctx->r10, -0XA0);
    // 0x8001D700: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001D704: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001D708: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001D70C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001D710: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001D714: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8001D718: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8001D71C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001D720: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001D724: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001D728: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001D72C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001D730: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8001D734: addu        $fp, $a0, $t1
    ctx->r30 = ADD32(ctx->r4, ctx->r9);
    // 0x8001D738: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x8001D73C: addiu       $s4, $zero, 0x11
    ctx->r20 = ADD32(0, 0X11);
    // 0x8001D740: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x8001D744: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8001D748: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_8001D74C:
    // 0x8001D74C: sll         $t5, $s6, 1
    ctx->r13 = S32(ctx->r22 << 1);
    // 0x8001D750: addu        $s2, $t5, $fp
    ctx->r18 = ADD32(ctx->r13, ctx->r30);
    // 0x8001D754: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8001D758: jal         0x8002E6E0
    // 0x8001D75C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    osInvalDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8001D75C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x8001D760: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8001D764: sll         $t6, $s7, 1
    ctx->r14 = S32(ctx->r23 << 1);
    // 0x8001D768: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8001D76C: addiu       $t9, $t9, -0x888
    ctx->r25 = ADD32(ctx->r25, -0X888);
    // 0x8001D770: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001D774: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x8001D778: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001D77C: addu        $t0, $s3, $s0
    ctx->r8 = ADD32(ctx->r19, ctx->r16);
L_8001D780:
    // 0x8001D780: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x8001D784: addu        $s1, $s2, $s0
    ctx->r17 = ADD32(ctx->r18, ctx->r16);
    // 0x8001D788: addu        $t1, $s2, $s0
    ctx->r9 = ADD32(ctx->r18, ctx->r16);
    // 0x8001D78C: beq         $s4, $v0, L_8001D79C
    if (ctx->r20 == ctx->r2) {
        // 0x8001D790: nop
    
            goto L_8001D79C;
    }
    // 0x8001D790: nop

    // 0x8001D794: b           L_8001D7A8
    // 0x8001D798: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
        goto L_8001D7A8;
    // 0x8001D798: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
L_8001D79C:
    // 0x8001D79C: jal         0x8001D450
    // 0x8001D7A0: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    func_8001D450(rdram, ctx);
        goto after_1;
    // 0x8001D7A0: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    after_1:
    // 0x8001D7A4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8001D7A8:
    // 0x8001D7A8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8001D7AC: bnel        $s0, $s5, L_8001D780
    if (ctx->r16 != ctx->r21) {
        // 0x8001D7B0: addu        $t0, $s3, $s0
        ctx->r8 = ADD32(ctx->r19, ctx->r16);
            goto L_8001D780;
    }
    goto skip_0;
    // 0x8001D7B0: addu        $t0, $s3, $s0
    ctx->r8 = ADD32(ctx->r19, ctx->r16);
    skip_0:
    // 0x8001D7B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8001D7B8: jal         0x8002E660
    // 0x8001D7BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x8001D7BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x8001D7C0: addiu       $s6, $s6, 0x130
    ctx->r22 = ADD32(ctx->r22, 0X130);
    // 0x8001D7C4: addiu       $at, $zero, 0x850
    ctx->r1 = ADD32(0, 0X850);
    // 0x8001D7C8: bne         $s6, $at, L_8001D74C
    if (ctx->r22 != ctx->r1) {
        // 0x8001D7CC: addiu       $s7, $s7, 0x1DC
        ctx->r23 = ADD32(ctx->r23, 0X1DC);
            goto L_8001D74C;
    }
    // 0x8001D7CC: addiu       $s7, $s7, 0x1DC
    ctx->r23 = ADD32(ctx->r23, 0X1DC);
    // 0x8001D7D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001D7D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001D7D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D7DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001D7E0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001D7E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001D7E8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D7EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001D7F0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001D7F4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001D7F8: jr          $ra
    // 0x8001D7FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8001D7FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8001D800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001D808: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8001D80C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8001D810: addiu       $a2, $a2, -0x2E90
    ctx->r6 = ADD32(ctx->r6, -0X2E90);
    // 0x8001D814: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001D818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D81C: addiu       $t1, $zero, -0x8
    ctx->r9 = ADD32(0, -0X8);
    // 0x8001D820: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x8001D824: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8001D828: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8001D82C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
L_8001D830:
    // 0x8001D830: beq         $v1, $a0, L_8001D858
    if (ctx->r3 == ctx->r4) {
        // 0x8001D834: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8001D858;
    }
    // 0x8001D834: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8001D838: beq         $a0, $a1, L_8001D878
    if (ctx->r4 == ctx->r5) {
        // 0x8001D83C: slti        $at, $v0, 0x20
        ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
            goto L_8001D878;
    }
    // 0x8001D83C: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8001D840: beql        $a0, $a3, L_8001D8EC
    if (ctx->r4 == ctx->r7) {
        // 0x8001D844: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8001D8EC;
    }
    goto skip_0;
    // 0x8001D844: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_0:
    // 0x8001D848: beql        $a0, $t0, L_8001D900
    if (ctx->r4 == ctx->r8) {
        // 0x8001D84C: sw          $zero, 0x690($a2)
        MEM_W(0X690, ctx->r6) = 0;
            goto L_8001D900;
    }
    goto skip_1;
    // 0x8001D84C: sw          $zero, 0x690($a2)
    MEM_W(0X690, ctx->r6) = 0;
    skip_1:
    // 0x8001D850: b           L_8001D910
    // 0x8001D854: nop

        goto L_8001D910;
    // 0x8001D854: nop

L_8001D858:
    // 0x8001D858: lw          $t7, 0x690($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X690);
    // 0x8001D85C: addiu       $t8, $t7, 0x7
    ctx->r24 = ADD32(ctx->r15, 0X7);
    // 0x8001D860: and         $t9, $t8, $t1
    ctx->r25 = ctx->r24 & ctx->r9;
    // 0x8001D864: slti        $at, $t9, 0x38
    ctx->r1 = SIGNED(ctx->r25) < 0X38 ? 1 : 0;
    // 0x8001D868: bne         $at, $zero, L_8001D95C
    if (ctx->r1 != 0) {
        // 0x8001D86C: sw          $t9, 0x690($a2)
        MEM_W(0X690, ctx->r6) = ctx->r25;
            goto L_8001D95C;
    }
    // 0x8001D86C: sw          $t9, 0x690($a2)
    MEM_W(0X690, ctx->r6) = ctx->r25;
    // 0x8001D870: b           L_8001D830
    // 0x8001D874: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
        goto L_8001D830;
    // 0x8001D874: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_8001D878:
    // 0x8001D878: lw          $t3, 0x694($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X694);
    // 0x8001D87C: sw          $zero, 0x690($a2)
    MEM_W(0X690, ctx->r6) = 0;
    // 0x8001D880: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001D884: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8001D888: slti        $at, $t4, 0x1E
    ctx->r1 = SIGNED(ctx->r12) < 0X1E ? 1 : 0;
    // 0x8001D88C: bne         $at, $zero, L_8001D8A0
    if (ctx->r1 != 0) {
        // 0x8001D890: sw          $t4, 0x694($a2)
        MEM_W(0X694, ctx->r6) = ctx->r12;
            goto L_8001D8A0;
    }
    // 0x8001D890: sw          $t4, 0x694($a2)
    MEM_W(0X694, ctx->r6) = ctx->r12;
    // 0x8001D894: addiu       $t5, $t4, -0x1E
    ctx->r13 = ADD32(ctx->r12, -0X1E);
    // 0x8001D898: sw          $t5, 0x694($a2)
    MEM_W(0X694, ctx->r6) = ctx->r13;
    // 0x8001D89C: sw          $t6, 0x698($a2)
    MEM_W(0X698, ctx->r6) = ctx->r14;
L_8001D8A0:
    // 0x8001D8A0: lw          $t7, 0x698($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X698);
    // 0x8001D8A4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x8001D8A8: beql        $t7, $zero, L_8001D960
    if (ctx->r15 == 0) {
        // 0x8001D8AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001D960;
    }
    goto skip_2;
    // 0x8001D8AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8001D8B0: lw          $t8, 0x69C($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X69C);
    // 0x8001D8B4: lw          $v0, 0x694($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X694);
    // 0x8001D8B8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8001D8BC: bgez        $t9, L_8001D8CC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8001D8C0: sw          $t9, 0x69C($a2)
        MEM_W(0X69C, ctx->r6) = ctx->r25;
            goto L_8001D8CC;
    }
    // 0x8001D8C0: sw          $t9, 0x69C($a2)
    MEM_W(0X69C, ctx->r6) = ctx->r25;
    // 0x8001D8C4: addiu       $t2, $t9, 0x1E
    ctx->r10 = ADD32(ctx->r25, 0X1E);
    // 0x8001D8C8: sw          $t2, 0x69C($a2)
    MEM_W(0X69C, ctx->r6) = ctx->r10;
L_8001D8CC:
    // 0x8001D8CC: sll         $t3, $v0, 3
    ctx->r11 = S32(ctx->r2 << 3);
    // 0x8001D8D0: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x8001D8D4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8001D8D8: jal         0x8002D6E0
    // 0x8001D8DC: addu        $a0, $a2, $t3
    ctx->r4 = ADD32(ctx->r6, ctx->r11);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8001D8DC: addu        $a0, $a2, $t3
    ctx->r4 = ADD32(ctx->r6, ctx->r11);
    after_0:
    // 0x8001D8E0: b           L_8001D960
    // 0x8001D8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001D960;
    // 0x8001D8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D8E8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_8001D8EC:
    // 0x8001D8EC: jal         0x8002D6E0
    // 0x8001D8F0: addiu       $a1, $zero, 0x690
    ctx->r5 = ADD32(0, 0X690);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8001D8F0: addiu       $a1, $zero, 0x690
    ctx->r5 = ADD32(0, 0X690);
    after_1:
    // 0x8001D8F4: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8001D8F8: addiu       $a2, $a2, -0x2E90
    ctx->r6 = ADD32(ctx->r6, -0X2E90);
    // 0x8001D8FC: sw          $zero, 0x690($a2)
    MEM_W(0X690, ctx->r6) = 0;
L_8001D900:
    // 0x8001D900: sw          $zero, 0x694($a2)
    MEM_W(0X694, ctx->r6) = 0;
    // 0x8001D904: sw          $zero, 0x69C($a2)
    MEM_W(0X69C, ctx->r6) = 0;
    // 0x8001D908: b           L_8001D95C
    // 0x8001D90C: sw          $zero, 0x698($a2)
    MEM_W(0X698, ctx->r6) = 0;
        goto L_8001D95C;
    // 0x8001D90C: sw          $zero, 0x698($a2)
    MEM_W(0X698, ctx->r6) = 0;
L_8001D910:
    // 0x8001D910: bne         $at, $zero, L_8001D95C
    if (ctx->r1 != 0) {
        // 0x8001D914: slti        $at, $v0, 0x7F
        ctx->r1 = SIGNED(ctx->r2) < 0X7F ? 1 : 0;
            goto L_8001D95C;
    }
    // 0x8001D914: slti        $at, $v0, 0x7F
    ctx->r1 = SIGNED(ctx->r2) < 0X7F ? 1 : 0;
    // 0x8001D918: beql        $at, $zero, L_8001D960
    if (ctx->r1 == 0) {
        // 0x8001D91C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001D960;
    }
    goto skip_3;
    // 0x8001D91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8001D920: lw          $t4, 0x694($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X694);
    // 0x8001D924: lw          $t7, 0x690($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X690);
    // 0x8001D928: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8001D92C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8001D930: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8001D934: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x8001D938: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001D93C: sb          $a0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r4;
    // 0x8001D940: lw          $t9, 0x690($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X690);
    // 0x8001D944: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x8001D948: slti        $at, $t2, 0x38
    ctx->r1 = SIGNED(ctx->r10) < 0X38 ? 1 : 0;
    // 0x8001D94C: bne         $at, $zero, L_8001D95C
    if (ctx->r1 != 0) {
        // 0x8001D950: sw          $t2, 0x690($a2)
        MEM_W(0X690, ctx->r6) = ctx->r10;
            goto L_8001D95C;
    }
    // 0x8001D950: sw          $t2, 0x690($a2)
    MEM_W(0X690, ctx->r6) = ctx->r10;
    // 0x8001D954: b           L_8001D830
    // 0x8001D958: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
        goto L_8001D830;
    // 0x8001D958: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_8001D95C:
    // 0x8001D95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001D960:
    // 0x8001D960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D964: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D96C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D974: jal         0x8001D800
    // 0x8001D978: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8001D800(rdram, ctx);
        goto after_0;
    // 0x8001D978: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x8001D97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D984: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D98C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8001D990: slti        $at, $t6, 0x38
    ctx->r1 = SIGNED(ctx->r14) < 0X38 ? 1 : 0;
    // 0x8001D994: beq         $at, $zero, L_8001D9A4
    if (ctx->r1 == 0) {
        // 0x8001D998: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8001D9A4;
    }
    // 0x8001D998: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001D99C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D9A0: sw          $t6, -0x2800($at)
    MEM_W(-0X2800, ctx->r1) = ctx->r14;
L_8001D9A4:
    // 0x8001D9A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D9AC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8001D9B0: slti        $at, $t6, 0x1E
    ctx->r1 = SIGNED(ctx->r14) < 0X1E ? 1 : 0;
    // 0x8001D9B4: beq         $at, $zero, L_8001D9C4
    if (ctx->r1 == 0) {
        // 0x8001D9B8: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8001D9C4;
    }
    // 0x8001D9B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001D9BC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D9C0: sw          $t6, -0x27FC($at)
    MEM_W(-0X27FC, ctx->r1) = ctx->r14;
L_8001D9C4:
    // 0x8001D9C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D9CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D9D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D9D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001D9D8: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8001D9DC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001D9E0: jal         0x8001D98C
    // 0x8001D9E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001D98C(rdram, ctx);
        goto after_0;
    // 0x8001D9E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8001D9E8: jal         0x8001D9AC
    // 0x8001D9EC: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    func_8001D9AC(rdram, ctx);
        goto after_1;
    // 0x8001D9EC: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    after_1:
    // 0x8001D9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D9F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D9F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001DA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DA00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001DA04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001DA08: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001DA0C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001DA10: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001DA14: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8001DA18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001DA1C: sw          $zero, -0x27F0($at)
    MEM_W(-0X27F0, ctx->r1) = 0;
    // 0x8001DA20: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001DA24: beq         $s0, $zero, L_8001DA44
    if (ctx->r16 == 0) {
        // 0x8001DA28: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_8001DA44;
    }
    // 0x8001DA28: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_8001DA2C:
    // 0x8001DA2C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x8001DA30: jal         0x8001D800
    // 0x8001DA34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_8001D800(rdram, ctx);
        goto after_0;
    // 0x8001DA34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_0:
    // 0x8001DA38: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8001DA3C: bne         $s0, $zero, L_8001DA2C
    if (ctx->r16 != 0) {
        // 0x8001DA40: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_8001DA2C;
    }
    // 0x8001DA40: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_8001DA44:
    // 0x8001DA44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DA48: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001DA4C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001DA50: jr          $ra
    // 0x8001DA54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001DA54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8001DA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DA58: jr          $ra
    // 0x8001DA5C: nop

    return;
    // 0x8001DA5C: nop

;}
RECOMP_FUNC void func_8001DA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DA60: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001DA64: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001DA68: lw          $t6, -0x27F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X27F0);
    // 0x8001DA6C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001DA70: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x8001DA74: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001DA78: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001DA7C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001DA80: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001DA84: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001DA88: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001DA8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001DA90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001DA94: bne         $t6, $zero, L_8001DB60
    if (ctx->r14 != 0) {
        // 0x8001DA98: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8001DB60;
    }
    // 0x8001DA98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001DA9C: bne         $a0, $zero, L_8001DAB0
    if (ctx->r4 != 0) {
        // 0x8001DAA0: nop
    
            goto L_8001DAB0;
    }
    // 0x8001DAA0: nop

    // 0x8001DAA4: jal         0x80014ED4
    // 0x8001DAA8: nop

    func_80014ED4(rdram, ctx);
        goto after_0;
    // 0x8001DAA8: nop

    after_0:
    // 0x8001DAAC: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
L_8001DAB0:
    // 0x8001DAB0: jal         0x80014EC8
    // 0x8001DAB4: nop

    func_80014EC8(rdram, ctx);
        goto after_1;
    // 0x8001DAB4: nop

    after_1:
    // 0x8001DAB8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8001DABC: jal         0x8002E6E0
    // 0x8001DAC0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x8001DAC0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x8001DAC4: lui         $fp, 0x8008
    ctx->r30 = S32(0X8008 << 16);
    // 0x8001DAC8: addiu       $fp, $fp, -0x2E90
    ctx->r30 = ADD32(ctx->r30, -0X2E90);
    // 0x8001DACC: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8001DAD0: addiu       $s5, $zero, 0x38
    ctx->r21 = ADD32(0, 0X38);
    // 0x8001DAD4: addiu       $s4, $zero, 0x20
    ctx->r20 = ADD32(0, 0X20);
L_8001DAD8:
    // 0x8001DAD8: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001DADC: lw          $t7, -0x27F4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X27F4);
    // 0x8001DAE0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8001DAE4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8001DAE8: addu        $s3, $s7, $t7
    ctx->r19 = ADD32(ctx->r23, ctx->r15);
    // 0x8001DAEC: div         $zero, $s3, $at
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r1)));
    // 0x8001DAF0: mfhi        $s3
    ctx->r19 = hi;
    // 0x8001DAF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001DAF8: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
L_8001DAFC:
    // 0x8001DAFC: beq         $s2, $zero, L_8001DB18
    if (ctx->r18 == 0) {
        // 0x8001DB00: lbu         $v0, 0x0($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X0);
            goto L_8001DB18;
    }
    // 0x8001DB00: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8001DB04: beql        $v0, $zero, L_8001DB34
    if (ctx->r2 == 0) {
        // 0x8001DB08: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8001DB34;
    }
    goto skip_0;
    // 0x8001DB08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8001DB0C: beql        $v0, $s4, L_8001DB34
    if (ctx->r2 == ctx->r20) {
        // 0x8001DB10: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8001DB34;
    }
    goto skip_1;
    // 0x8001DB10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x8001DB14: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8001DB18:
    // 0x8001DB18: beq         $v0, $zero, L_8001DB30
    if (ctx->r2 == 0) {
        // 0x8001DB1C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_8001DB30;
    }
    // 0x8001DB1C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8001DB20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001DB24: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8001DB28: jal         0x8001D6C0
    // 0x8001DB2C: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_8001D6C0(rdram, ctx);
        goto after_3;
    // 0x8001DB2C: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_3:
L_8001DB30:
    // 0x8001DB30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8001DB34:
    // 0x8001DB34: bne         $s0, $s5, L_8001DAFC
    if (ctx->r16 != ctx->r21) {
        // 0x8001DB38: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8001DAFC;
    }
    // 0x8001DB38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001DB3C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8001DB40: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8001DB44: bne         $s7, $at, L_8001DAD8
    if (ctx->r23 != ctx->r1) {
        // 0x8001DB48: addiu       $fp, $fp, 0x38
        ctx->r30 = ADD32(ctx->r30, 0X38);
            goto L_8001DAD8;
    }
    // 0x8001DB48: addiu       $fp, $fp, 0x38
    ctx->r30 = ADD32(ctx->r30, 0X38);
    // 0x8001DB4C: jal         0x80014EC8
    // 0x8001DB50: nop

    func_80014EC8(rdram, ctx);
        goto after_4;
    // 0x8001DB50: nop

    after_4:
    // 0x8001DB54: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8001DB58: jal         0x8002E660
    // 0x8001DB5C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_5;
    // 0x8001DB5C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
L_8001DB60:
    // 0x8001DB60: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001DB64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001DB68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DB6C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001DB70: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001DB74: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001DB78: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DB7C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001DB80: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001DB84: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001DB88: jr          $ra
    // 0x8001DB8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8001DB8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001DB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DB90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001DB94: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001DB98: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x8001DB9C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8001DBA0: multu       $a1, $s3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DBA4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8001DBA8: sll         $t6, $a2, 5
    ctx->r14 = S32(ctx->r6 << 5);
    // 0x8001DBAC: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x8001DBB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001DBB4: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x8001DBB8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001DBBC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001DBC0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001DBC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001DBC8: mflo        $t7
    ctx->r15 = lo;
    // 0x8001DBCC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001DBD0: addiu       $t9, $t8, 0x260
    ctx->r25 = ADD32(ctx->r24, 0X260);
    // 0x8001DBD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001DBD8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8001DBDC: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x8001DBE0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001DBE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001DBE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001DBEC: addu        $s5, $a0, $t0
    ctx->r21 = ADD32(ctx->r4, ctx->r8);
    // 0x8001DBF0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8001DBF4: addiu       $s6, $zero, 0x850
    ctx->r22 = ADD32(0, 0X850);
    // 0x8001DBF8: sll         $t1, $s4, 1
    ctx->r9 = S32(ctx->r20 << 1);
L_8001DBFC:
    // 0x8001DBFC: addu        $s1, $t1, $s5
    ctx->r17 = ADD32(ctx->r9, ctx->r21);
    // 0x8001DC00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001DC04: jal         0x8002E6E0
    // 0x8001DC08: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8001DC08: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x8001DC0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001DC10: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
L_8001DC14:
    // 0x8001DC14: addu        $a0, $t2, $s1
    ctx->r4 = ADD32(ctx->r10, ctx->r17);
    // 0x8001DC18: jal         0x8001D5C4
    // 0x8001DC1C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001D5C4(rdram, ctx);
        goto after_1;
    // 0x8001DC1C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x8001DC20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001DC24: jal         0x8002E660
    // 0x8001DC28: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x8001DC28: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8001DC2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001DC30: bnel        $s0, $s3, L_8001DC14
    if (ctx->r16 != ctx->r19) {
        // 0x8001DC34: sll         $t2, $s0, 1
        ctx->r10 = S32(ctx->r16 << 1);
            goto L_8001DC14;
    }
    goto skip_0;
    // 0x8001DC34: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    skip_0:
    // 0x8001DC38: addiu       $s4, $s4, 0x130
    ctx->r20 = ADD32(ctx->r20, 0X130);
    // 0x8001DC3C: bnel        $s4, $s6, L_8001DBFC
    if (ctx->r20 != ctx->r22) {
        // 0x8001DC40: sll         $t1, $s4, 1
        ctx->r9 = S32(ctx->r20 << 1);
            goto L_8001DBFC;
    }
    goto skip_1;
    // 0x8001DC40: sll         $t1, $s4, 1
    ctx->r9 = S32(ctx->r20 << 1);
    skip_1:
    // 0x8001DC44: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001DC48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001DC4C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DC50: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001DC54: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001DC58: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001DC5C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DC60: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001DC64: jr          $ra
    // 0x8001DC68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001DC68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001DC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DC6C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001DC70: addiu       $v0, $v0, -0x2E90
    ctx->r2 = ADD32(ctx->r2, -0X2E90);
    // 0x8001DC74: lw          $t6, 0x6A0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X6A0);
    // 0x8001DC78: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001DC7C: beql        $t6, $zero, L_8001DC90
    if (ctx->r14 == 0) {
            // 0x8001DC80: sw          $t7, 0x6A0($v0)
    MEM_W(0X6A0, ctx->r2) = ctx->r15;
    static_2_8001DC90(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x8001DC80: sw          $t7, 0x6A0($v0)
    MEM_W(0X6A0, ctx->r2) = ctx->r15;
    skip_0:
    // 0x8001DC84: jr          $ra
    // 0x8001DC88: sw          $zero, 0x6A0($v0)
    MEM_W(0X6A0, ctx->r2) = 0;
    return;
    // 0x8001DC88: sw          $zero, 0x6A0($v0)
    MEM_W(0X6A0, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8001DC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DC8C: sw          $t7, 0x6A0($v0)
    MEM_W(0X6A0, ctx->r2) = ctx->r15;
    // 0x8001DC90: jr          $ra
    // 0x8001DC94: nop

    return;
    // 0x8001DC94: nop

;}
RECOMP_FUNC void func_8001DCA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DCA0: mfc0        $v0, Status
    ctx->r2 = cop0_status_read(ctx);
    // 0x8001DCA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001DCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DCB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001DCB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001DCB8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001DCBC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8001DCC0: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8001DCC4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001DCC8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8001DCCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001DCD0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001DCD4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8001DCD8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8001DCDC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001DCE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001DCE4: jal         0x80031810
    // 0x8001DCE8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osCreateThread_recomp(rdram, ctx);
        goto after_0;
    // 0x8001DCE8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8001DCEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001DCF0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001DCF4: beq         $s0, $zero, L_8001DD08
    if (ctx->r16 == 0) {
        // 0x8001DCF8: sw          $s0, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->r16;
            goto L_8001DD08;
    }
    // 0x8001DCF8: sw          $s0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r16;
    // 0x8001DCFC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8001DD00: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8001DD04: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_8001DD08:
    // 0x8001DD08: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8001DD0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001DD10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001DD14: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8001DD18: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001DD1C: sw          $a0, -0x27E0($at)
    MEM_W(-0X27E0, ctx->r1) = ctx->r4;
    // 0x8001DD20: jr          $ra
    // 0x8001DD24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001DD24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001DD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DD28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001DD2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001DD30: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001DD34: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8001DD38: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8001DD3C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001DD40: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8001DD44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001DD48: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001DD4C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8001DD50: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8001DD54: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001DD58: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001DD5C: jal         0x80031810
    // 0x8001DD60: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osCreateThread_recomp(rdram, ctx);
        goto after_0;
    // 0x8001DD60: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8001DD64: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001DD68: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001DD6C: beq         $s0, $zero, L_8001DD84
    if (ctx->r16 == 0) {
        // 0x8001DD70: sw          $s0, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->r16;
            goto L_8001DD84;
    }
    // 0x8001DD70: sw          $s0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r16;
    // 0x8001DD74: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001DD78: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
    // 0x8001DD7C: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8001DD80: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_8001DD84:
    // 0x8001DD84: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8001DD88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001DD8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001DD90: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8001DD94: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001DD98: sw          $a0, -0x27E0($at)
    MEM_W(-0X27E0, ctx->r1) = ctx->r4;
    // 0x8001DD9C: jr          $ra
    // 0x8001DDA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001DDA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001DDA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DDA4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001DDA8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001DDAC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8001DDB0: jr          $ra
    // 0x8001DDB4: lw          $v0, -0x27E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X27E0);
    return;
    // 0x8001DDB4: lw          $v0, -0x27E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X27E0);
;}
RECOMP_FUNC void func_8001DDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DDC0: mfc0        $v0, Count
    ctx->r2 = cop0_count_read(ctx);
    // 0x8001DDC4: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x8001DDC8: lw          $t0, 0x1490($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1490);
    // 0x8001DDCC: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x8001DDD0: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x8001DDD4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8001DDD8: jr          $ra
    // 0x8001DDDC: subu        $v0, $v0, $t2
    ctx->r2 = SUB32(ctx->r2, ctx->r10);
    return;
    // 0x8001DDDC: subu        $v0, $v0, $t2
    ctx->r2 = SUB32(ctx->r2, ctx->r10);
;}
RECOMP_FUNC void func_8001DDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DDE0: sw          $ra, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r31;
    // 0x8001DDE4: jr          $ra
    // 0x8001DDE8: sw          $sp, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r29;
    return;
    // 0x8001DDE8: sw          $sp, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r29;
;}
RECOMP_FUNC void func_8001DDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DDF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001DDF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001DDF8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001DDFC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001DE00: addiu       $a1, $a1, -0x2770
    ctx->r5 = ADD32(ctx->r5, -0X2770);
    // 0x8001DE04: addiu       $a0, $a0, -0x2768
    ctx->r4 = ADD32(ctx->r4, -0X2768);
    // 0x8001DE08: jal         0x8002E070
    // 0x8001DE0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8001DE0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001DE10: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001DE14: addiu       $t6, $t6, -0x2490
    ctx->r14 = ADD32(ctx->r14, -0X2490);
    // 0x8001DE18: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001DE1C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001DE20: lui         $a3, 0x8002
    ctx->r7 = S32(0X8002 << 16);
    // 0x8001DE24: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x8001DE28: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8001DE2C: addiu       $a3, $a3, -0x219C
    ctx->r7 = ADD32(ctx->r7, -0X219C);
    // 0x8001DE30: addiu       $a1, $a1, -0x25A0
    ctx->r5 = ADD32(ctx->r5, -0X25A0);
    // 0x8001DE34: addiu       $a0, $a0, -0x2750
    ctx->r4 = ADD32(ctx->r4, -0X2750);
    // 0x8001DE38: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8001DE3C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8001DE40: jal         0x8001DCB0
    // 0x8001DE44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DCB0(rdram, ctx);
        goto after_1;
    // 0x8001DE44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8001DE48: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001DE4C: jal         0x8002E510
    // 0x8001DE50: addiu       $a0, $a0, -0x2750
    ctx->r4 = ADD32(ctx->r4, -0X2750);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x8001DE50: addiu       $a0, $a0, -0x2750
    ctx->r4 = ADD32(ctx->r4, -0X2750);
    after_2:
    // 0x8001DE54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001DE58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001DE5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001DE64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DE64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001DE68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001DE6C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001DE70: lui         $t6, 0x8030
    ctx->r14 = S32(0X8030 << 16);
    // 0x8001DE74: lw          $t7, -0x4E0C($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X4E0C);
    // 0x8001DE78: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8001DE7C: lw          $t0, 0x300($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X300);
    // 0x8001DE80: lui         $t8, 0x8030
    ctx->r24 = S32(0X8030 << 16);
    // 0x8001DE84: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8001DE88: lw          $t9, -0x1E40($t8)
    ctx->r25 = MEM_W(ctx->r24, -0X1E40);
    // 0x8001DE8C: bne         $t0, $zero, L_8001DEA8
    if (ctx->r8 != 0) {
        // 0x8001DE90: sw          $t9, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r25;
            goto L_8001DEA8;
    }
    // 0x8001DE90: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8001DE94: jal         0x80012598
    // 0x8001DE98: nop

    func_80012598(rdram, ctx);
        goto after_0;
    // 0x8001DE98: nop

    after_0:
    // 0x8001DE9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001DEA0: jal         0x8002EC20
    // 0x8001DEA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_1;
    // 0x8001DEA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8001DEA8:
    // 0x8001DEA8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DEAC: lui         $at, 0xAD09
    ctx->r1 = S32(0XAD09 << 16);
    // 0x8001DEB0: ori         $at, $at, 0x10
    ctx->r1 = ctx->r1 | 0X10;
    // 0x8001DEB4: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8001DEB8: xor         $t2, $t1, $at
    ctx->r10 = ctx->r9 ^ ctx->r1;
    // 0x8001DEBC: lui         $at, 0xAD17
    ctx->r1 = S32(0XAD17 << 16);
    // 0x8001DEC0: ori         $at, $at, 0x14
    ctx->r1 = ctx->r1 | 0X14;
    // 0x8001DEC4: xor         $t4, $t3, $at
    ctx->r12 = ctx->r11 ^ ctx->r1;
    // 0x8001DEC8: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8001DECC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001DED0: jal         0x8001DEE8
    // 0x8001DED4: sb          $t5, -0x2487($at)
    MEM_B(-0X2487, ctx->r1) = ctx->r13;
    func_8001DEE8(rdram, ctx);
        goto after_2;
    // 0x8001DED4: sb          $t5, -0x2487($at)
    MEM_B(-0X2487, ctx->r1) = ctx->r13;
    after_2:
    // 0x8001DED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001DEDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001DEE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001DEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DEE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001DEEC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001DEF0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001DEF4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001DEF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001DEFC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001DF00: jal         0x80016928
    // 0x8001DF04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80016928(rdram, ctx);
        goto after_0;
    // 0x8001DF04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8001DF08: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x8001DF0C: addiu       $s2, $s2, -0x2488
    ctx->r18 = ADD32(ctx->r18, -0X2488);
    // 0x8001DF10: lui         $s4, 0x8008
    ctx->r20 = S32(0X8008 << 16);
    // 0x8001DF14: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8001DF18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8001DF1C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x8001DF20: addiu       $s3, $s3, -0x2768
    ctx->r19 = ADD32(ctx->r19, -0X2768);
    // 0x8001DF24: addiu       $s4, $s4, -0x2490
    ctx->r20 = ADD32(ctx->r20, -0X2490);
    // 0x8001DF28: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8001DF2C:
    // 0x8001DF2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001DF30: jal         0x8002E1F0
    // 0x8001DF34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8001DF34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8001DF38: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x8001DF3C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x8001DF40: lh          $s1, 0x0($s4)
    ctx->r17 = MEM_H(ctx->r20, 0X0);
    // 0x8001DF44: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001DF48: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
    // 0x8001DF4C: lh          $t8, -0x248E($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X248E);
    // 0x8001DF50: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001DF54: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x8001DF58: sh          $t8, -0x2490($at)
    MEM_H(-0X2490, ctx->r1) = ctx->r24;
    // 0x8001DF5C: lh          $t9, -0x248C($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X248C);
    // 0x8001DF60: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x8001DF64: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x8001DF68: sh          $t9, -0x248E($at)
    MEM_H(-0X248E, ctx->r1) = ctx->r25;
    // 0x8001DF6C: lh          $t0, -0x248A($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X248A);
    // 0x8001DF70: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8001DF74: sh          $t0, -0x248C($at)
    MEM_H(-0X248C, ctx->r1) = ctx->r8;
    // 0x8001DF78: lh          $t1, -0x2488($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X2488);
    // 0x8001DF7C: jal         0x80016934
    // 0x8001DF80: sh          $t1, -0x248A($at)
    MEM_H(-0X248A, ctx->r1) = ctx->r9;
    func_80016934(rdram, ctx);
        goto after_2;
    // 0x8001DF80: sh          $t1, -0x248A($at)
    MEM_H(-0X248A, ctx->r1) = ctx->r9;
    after_2:
    // 0x8001DF84: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8001DF88: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001DF8C: jal         0x8001B798
    // 0x8001DF90: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8001B798(rdram, ctx);
        goto after_3;
    // 0x8001DF90: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_3:
    // 0x8001DF94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001DF98: jal         0x8001E048
    // 0x8001DF9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001E048(rdram, ctx);
        goto after_4;
    // 0x8001DF9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x8001DFA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001DFA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001DFA8: jal         0x8002E1F0
    // 0x8001DFAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x8001DFAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8001DFB0: jal         0x8001E11C
    // 0x8001DFB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001E11C(rdram, ctx);
        goto after_6;
    // 0x8001DFB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8001DFB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001DFBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001DFC0: jal         0x8002E1F0
    // 0x8001DFC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x8001DFC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8001DFC8: jal         0x80016934
    // 0x8001DFCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016934(rdram, ctx);
        goto after_8;
    // 0x8001DFCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x8001DFD0: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8001DFD4: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001DFD8: jal         0x8001B798
    // 0x8001DFDC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8001B798(rdram, ctx);
        goto after_9;
    // 0x8001DFDC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_9:
    // 0x8001DFE0: jal         0x8001E170
    // 0x8001DFE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8001E170(rdram, ctx);
        goto after_10;
    // 0x8001DFE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x8001DFE8: b           L_8001DF2C
    // 0x8001DFEC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_8001DF2C;
    // 0x8001DFEC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8001DFF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DFF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001DFF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DFFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001E000: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001E004: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001E008: jr          $ra
    // 0x8001E00C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8001E00C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8001E010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E010: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001E014: lbu         $t6, -0x2488($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2488);
    // 0x8001E018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E01C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E020: beq         $t6, $zero, L_8001E038
    if (ctx->r14 == 0) {
        // 0x8001E024: lui         $a0, 0x8008
        ctx->r4 = S32(0X8008 << 16);
            goto L_8001E038;
    }
    // 0x8001E024: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001E028: addiu       $a0, $a0, -0x2768
    ctx->r4 = ADD32(ctx->r4, -0X2768);
    // 0x8001E02C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001E030: jal         0x8002EAD0
    // 0x8001E034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8001E034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_8001E038:
    // 0x8001E038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E03C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E040: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E04C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001E050: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001E054: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001E058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E05C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001E060: addiu       $v0, $v0, -0x27B0
    ctx->r2 = ADD32(ctx->r2, -0X27B0);
    // 0x8001E064: addiu       $a0, $a0, -0x2782
    ctx->r4 = ADD32(ctx->r4, -0X2782);
    // 0x8001E068: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_8001E06C:
    // 0x8001E06C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001E070: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8001E074: bne         $at, $zero, L_8001E06C
    if (ctx->r1 != 0) {
        // 0x8001E078: sb          $v1, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r3;
            goto L_8001E06C;
    }
    // 0x8001E078: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8001E07C: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x8001E080: addiu       $a3, $a3, -0x27B0
    ctx->r7 = ADD32(ctx->r7, -0X27B0);
    // 0x8001E084: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x8001E088: sb          $a0, 0x2E($a3)
    MEM_B(0X2E, ctx->r7) = ctx->r4;
    // 0x8001E08C: sb          $a0, 0x2F($a3)
    MEM_B(0X2F, ctx->r7) = ctx->r4;
    // 0x8001E090: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001E094: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001E098: addiu       $v0, $v0, -0x27B0
    ctx->r2 = ADD32(ctx->r2, -0X27B0);
    // 0x8001E09C: addiu       $a0, $a0, -0x27A0
    ctx->r4 = ADD32(ctx->r4, -0X27A0);
    // 0x8001E0A0: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_8001E0A4:
    // 0x8001E0A4: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8001E0A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8001E0AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001E0B0: sb          $t6, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r14;
    // 0x8001E0B4: lbu         $t7, -0x3($v1)
    ctx->r15 = MEM_BU(ctx->r3, -0X3);
    // 0x8001E0B8: sb          $t7, 0x2D($v0)
    MEM_B(0X2D, ctx->r2) = ctx->r15;
    // 0x8001E0BC: lbu         $t8, -0x2($v1)
    ctx->r24 = MEM_BU(ctx->r3, -0X2);
    // 0x8001E0C0: sb          $t8, 0x2E($v0)
    MEM_B(0X2E, ctx->r2) = ctx->r24;
    // 0x8001E0C4: lbu         $t9, -0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, -0X1);
    // 0x8001E0C8: bne         $v0, $a0, L_8001E0A4
    if (ctx->r2 != ctx->r4) {
        // 0x8001E0CC: sb          $t9, 0x2F($v0)
        MEM_B(0X2F, ctx->r2) = ctx->r25;
            goto L_8001E0A4;
    }
    // 0x8001E0CC: sb          $t9, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r25;
    // 0x8001E0D0: jal         0x800319F0
    // 0x8001E0D4: nop

    __osSiGetAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x8001E0D4: nop

    after_0:
    // 0x8001E0D8: addiu       $t0, $zero, 0xFE
    ctx->r8 = ADD32(0, 0XFE);
    // 0x8001E0DC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E0E0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001E0E4: sb          $t0, 0x10C0($at)
    MEM_B(0X10C0, ctx->r1) = ctx->r8;
    // 0x8001E0E8: addiu       $a0, $a0, -0x27B0
    ctx->r4 = ADD32(ctx->r4, -0X27B0);
    // 0x8001E0EC: jal         0x8002E660
    // 0x8001E0F0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x8001E0F0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x8001E0F4: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001E0F8: addiu       $a1, $a1, -0x27B0
    ctx->r5 = ADD32(ctx->r5, -0X27B0);
    // 0x8001E0FC: jal         0x80031A60
    // 0x8001E100: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x8001E100: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8001E104: jal         0x80031A34
    // 0x8001E108: nop

    __osSiRelAccess_recomp(rdram, ctx);
        goto after_3;
    // 0x8001E108: nop

    after_3:
    // 0x8001E10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E114: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E11C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E124: jal         0x800319F0
    // 0x8001E128: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    __osSiGetAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x8001E128: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001E12C: addiu       $t6, $zero, 0xFE
    ctx->r14 = ADD32(0, 0XFE);
    // 0x8001E130: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E134: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001E138: sb          $t6, 0x10C0($at)
    MEM_B(0X10C0, ctx->r1) = ctx->r14;
    // 0x8001E13C: addiu       $a0, $a0, -0x27B0
    ctx->r4 = ADD32(ctx->r4, -0X27B0);
    // 0x8001E140: jal         0x8002E6E0
    // 0x8001E144: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    osInvalDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x8001E144: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x8001E148: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001E14C: addiu       $a1, $a1, -0x27B0
    ctx->r5 = ADD32(ctx->r5, -0X27B0);
    // 0x8001E150: jal         0x80031A60
    // 0x8001E154: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x8001E154: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8001E158: jal         0x80031A34
    // 0x8001E15C: nop

    __osSiRelAccess_recomp(rdram, ctx);
        goto after_3;
    // 0x8001E15C: nop

    after_3:
    // 0x8001E160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E168: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E170: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001E174: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001E178: addiu       $v0, $v0, -0x27A0
    ctx->r2 = ADD32(ctx->r2, -0X27A0);
    // 0x8001E17C: addiu       $a1, $a1, -0x27B0
    ctx->r5 = ADD32(ctx->r5, -0X27B0);
    // 0x8001E180: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8001E184:
    // 0x8001E184: lbu         $t6, 0x30($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X30);
    // 0x8001E188: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8001E18C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001E190: sb          $t6, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r14;
    // 0x8001E194: lbu         $t7, 0x2D($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2D);
    // 0x8001E198: sb          $t7, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r15;
    // 0x8001E19C: lbu         $t8, 0x2E($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2E);
    // 0x8001E1A0: sb          $t8, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r24;
    // 0x8001E1A4: lbu         $t9, 0x2F($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2F);
    // 0x8001E1A8: bne         $a1, $v0, L_8001E184
    if (ctx->r5 != ctx->r2) {
        // 0x8001E1AC: sb          $t9, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r25;
            goto L_8001E184;
    }
    // 0x8001E1AC: sb          $t9, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r25;
    // 0x8001E1B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E1B8: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001E1BC: addiu       $a1, $a1, -0x2488
    ctx->r5 = ADD32(ctx->r5, -0X2488);
    // 0x8001E1C0: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8001E1C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001E1C8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001E1CC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8001E1D0: bne         $v1, $at, L_8001E1E0
    if (ctx->r3 != ctx->r1) {
            // 0x8001E1D4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_8001E1E0(rdram, ctx);
    return;
    }
    // 0x8001E1D4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001E1D8: jr          $ra
    // 0x8001E1DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8001E1DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8001E1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E1E0: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x8001E1E4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E1E8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001E1EC: sh          $a0, -0x2490($at)
    MEM_H(-0X2490, ctx->r1) = ctx->r4;
    // 0x8001E1F0: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x8001E1F4: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
    // 0x8001E1F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001E1FC: jr          $ra
    // 0x8001E200: nop

    return;
    // 0x8001E200: nop

;}
RECOMP_FUNC void func_8001E204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E204: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001E208: jr          $ra
    // 0x8001E20C: lbu         $v0, -0x2487($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2487);
    return;
    // 0x8001E20C: lbu         $v0, -0x2487($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2487);
;}
RECOMP_FUNC void func_8001E210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_rom_read_word(rdram, ctx); return;
    // 0x8001E210: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001E214: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x8001E218: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x8001E21C: sw          $ra, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r31;
    // 0x8001E220: lui         $s0, 0xB000
    ctx->r16 = S32(0XB000 << 16);
    // 0x8001E224: or          $s0, $s0, $a0
    ctx->r16 = ctx->r16 | ctx->r4;
    // 0x8001E228: jal         0x80031B60
    // 0x8001E22C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    __osPiGetAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x8001E22C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x8001E230: lui         $t1, 0xA460
    ctx->r9 = S32(0XA460 << 16);
    // 0x8001E234: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x8001E238: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
L_8001E23C:
    // 0x8001E23C: andi        $t2, $t2, 0x3
    ctx->r10 = ctx->r10 & 0X3;
    // 0x8001E240: bnel        $t2, $zero, L_8001E23C
    if (ctx->r10 != 0) {
        // 0x8001E244: lw          $t2, 0x0($t1)
        ctx->r10 = MEM_W(ctx->r9, 0X0);
            goto L_8001E23C;
    }
    goto skip_0;
    // 0x8001E244: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    skip_0:
    // 0x8001E248: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x8001E24C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8001E250: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8001E254: mtc0        $t1, Status
    cop0_status_write(ctx, ctx->r9);    // 0x8001E258: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x8001E25C: nop

    // 0x8001E260: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8001E264: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x8001E268: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x8001E26C: or          $t0, $t0, $v0
    ctx->r8 = ctx->r8 | ctx->r2;
    // 0x8001E270: mtc0        $t0, Status
    cop0_status_write(ctx, ctx->r8);    // 0x8001E274: nop

    // 0x8001E278: nop

    // 0x8001E27C: jal         0x80031BA4
    // 0x8001E280: nop

    __osPiRelAccess_recomp(rdram, ctx);
        goto after_1;
    // 0x8001E280: nop

    after_1:
    // 0x8001E284: lw          $ra, 0x8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8);
    // 0x8001E288: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x8001E28C: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x8001E290: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x8001E294: jr          $ra
    // 0x8001E298: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8001E298: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8001E2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E2A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E2A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E2A8: jal         0x80014F00
    // 0x8001E2AC: nop

    func_80014F00(rdram, ctx);
        goto after_0;
    // 0x8001E2AC: nop

    after_0:
    // 0x8001E2B0: jal         0x8001DA60
    // 0x8001E2B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8001DA60(rdram, ctx);
        goto after_1;
    // 0x8001E2B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8001E2B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E2BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E2C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E2C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E2CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E2D0: jal         0x8001D96C
    // 0x8001E2D4: nop

    func_8001D96C(rdram, ctx);
        goto after_0;
    // 0x8001E2D4: nop

    after_0:
    // 0x8001E2D8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001E2DC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001E2E0: lw          $a1, -0x16B0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X16B0);
    // 0x8001E2E4: jal         0x8001D37C
    // 0x8001E2E8: addiu       $a0, $a0, 0x1840
    ctx->r4 = ADD32(ctx->r4, 0X1840);
    func_8001D37C(rdram, ctx);
        goto after_1;
    // 0x8001E2E8: addiu       $a0, $a0, 0x1840
    ctx->r4 = ADD32(ctx->r4, 0X1840);
    after_1:
    // 0x8001E2EC: jal         0x8001E2A0
    // 0x8001E2F0: nop

    func_8001E2A0(rdram, ctx);
        goto after_2;
    // 0x8001E2F0: nop

    after_2:
    // 0x8001E2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E2F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E2FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E30C: jal         0x8001D96C
    // 0x8001E310: nop

    func_8001D96C(rdram, ctx);
        goto after_0;
    // 0x8001E310: nop

    after_0:
    // 0x8001E314: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001E318: jal         0x8001D37C
    // 0x8001E31C: addiu       $a0, $a0, 0x1868
    ctx->r4 = ADD32(ctx->r4, 0X1868);
    func_8001D37C(rdram, ctx);
        goto after_1;
    // 0x8001E31C: addiu       $a0, $a0, 0x1868
    ctx->r4 = ADD32(ctx->r4, 0X1868);
    after_1:
    // 0x8001E320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001E324: jal         0x8001D9CC
    // 0x8001E328: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8001D9CC(rdram, ctx);
        goto after_2;
    // 0x8001E328: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x8001E32C: jal         0x8008A960
    // 0x8001E330: nop

    _gzreg_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x8001E330: nop

    after_3:
    // 0x8001E334: jal         0x8001E2A0
    // 0x8001E338: nop

    func_8001E2A0(rdram, ctx);
        goto after_4;
    // 0x8001E338: nop

    after_4:
    // 0x8001E33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E344: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E34C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E354: jal         0x8001D96C
    // 0x8001E358: nop

    func_8001D96C(rdram, ctx);
        goto after_0;
    // 0x8001E358: nop

    after_0:
    // 0x8001E35C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001E360: jal         0x8001D37C
    // 0x8001E364: addiu       $a0, $a0, 0x187C
    ctx->r4 = ADD32(ctx->r4, 0X187C);
    func_8001D37C(rdram, ctx);
        goto after_1;
    // 0x8001E364: addiu       $a0, $a0, 0x187C
    ctx->r4 = ADD32(ctx->r4, 0X187C);
    after_1:
    // 0x8001E368: jal         0x8001E2A0
    // 0x8001E36C: nop

    func_8001E2A0(rdram, ctx);
        goto after_2;
    // 0x8001E36C: nop

    after_2:
    // 0x8001E370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E378: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E388: jal         0x8001E2A0
    // 0x8001E38C: nop

    func_8001E2A0(rdram, ctx);
        goto after_0;
    // 0x8001E38C: nop

    after_0:
    // 0x8001E390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E398: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E3A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E3A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E3A8: jal         0x8001211C
    // 0x8001E3AC: nop

    func_8001211C(rdram, ctx);
        goto after_0;
    // 0x8001E3AC: nop

    after_0:
    // 0x8001E3B0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001E3B4: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8001E3B8: lw          $a2, -0x16B8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X16B8);
    // 0x8001E3BC: addiu       $a0, $a0, 0x18A8
    ctx->r4 = ADD32(ctx->r4, 0X18A8);
    // 0x8001E3C0: jal         0x8001D37C
    // 0x8001E3C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8001D37C(rdram, ctx);
        goto after_1;
    // 0x8001E3C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8001E3C8: jal         0x8001E2A0
    // 0x8001E3CC: nop

    func_8001E2A0(rdram, ctx);
        goto after_2;
    // 0x8001E3CC: nop

    after_2:
    // 0x8001E3D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E3D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E3D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E3E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E3E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E3E8: jal         0x8001211C
    // 0x8001E3EC: nop

    func_8001211C(rdram, ctx);
        goto after_0;
    // 0x8001E3EC: nop

    after_0:
    // 0x8001E3F0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001E3F4: addiu       $a0, $a0, 0x18D4
    ctx->r4 = ADD32(ctx->r4, 0X18D4);
    // 0x8001E3F8: jal         0x8001D37C
    // 0x8001E3FC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8001D37C(rdram, ctx);
        goto after_1;
    // 0x8001E3FC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8001E400: jal         0x8001E2A0
    // 0x8001E404: nop

    func_8001E2A0(rdram, ctx);
        goto after_2;
    // 0x8001E404: nop

    after_2:
    // 0x8001E408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E40C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E410: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E418: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E420: jal         0x8001D96C
    // 0x8001E424: nop

    func_8001D96C(rdram, ctx);
        goto after_0;
    // 0x8001E424: nop

    after_0:
    // 0x8001E428: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001E42C: jal         0x8001D37C
    // 0x8001E430: addiu       $a0, $a0, 0x18EC
    ctx->r4 = ADD32(ctx->r4, 0X18EC);
    func_8001D37C(rdram, ctx);
        goto after_1;
    // 0x8001E430: addiu       $a0, $a0, 0x18EC
    ctx->r4 = ADD32(ctx->r4, 0X18EC);
    after_1:
    // 0x8001E434: jal         0x8001E2A0
    // 0x8001E438: nop

    func_8001E2A0(rdram, ctx);
        goto after_2;
    // 0x8001E438: nop

    after_2:
    // 0x8001E43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E444: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E44C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E454: jal         0x8001D96C
    // 0x8001E458: nop

    func_8001D96C(rdram, ctx);
        goto after_0;
    // 0x8001E458: nop

    after_0:
    // 0x8001E45C: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8001E460: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x8001E464: lw          $a3, -0x16B0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X16B0);
    // 0x8001E468: addiu       $a2, $a2, 0x18FC
    ctx->r6 = ADD32(ctx->r6, 0X18FC);
    // 0x8001E46C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x8001E470: jal         0x8001D3D8
    // 0x8001E474: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_8001D3D8(rdram, ctx);
        goto after_1;
    // 0x8001E474: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_1:
    // 0x8001E478: jal         0x8001E2A0
    // 0x8001E47C: nop

    func_8001E2A0(rdram, ctx);
        goto after_2;
    // 0x8001E47C: nop

    after_2:
    // 0x8001E480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E488: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E498: jal         0x8002E9C0
    // 0x8001E49C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSpSetPc_recomp(rdram, ctx);
        goto after_0;
    // 0x8001E49C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001E4A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E4A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E4B0: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001E4B4: lw          $t6, -0x16B8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X16B8);
    // 0x8001E4B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E4BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E4C0: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x8001E4C4: beq         $at, $zero, L_8001E560
    if (ctx->r1 == 0) {
        // 0x8001E4C8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8001E560;
    }
    // 0x8001E4C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001E4CC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8001E4D0: addu        $at, $at, $t6
    gpr jr_addend_8001E4D8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001E4D4: lw          $t6, 0x1920($at)
    ctx->r14 = ADD32(ctx->r1, 0X1920);
    // 0x8001E4D8: jr          $t6
    // 0x8001E4DC: nop

    switch (jr_addend_8001E4D8 >> 2) {
        case 0: goto L_8001E4E0; break;
        case 1: goto L_8001E4F0; break;
        case 2: goto L_8001E500; break;
        case 3: goto L_8001E510; break;
        case 4: goto L_8001E520; break;
        case 5: goto L_8001E530; break;
        case 6: goto L_8001E540; break;
        case 7: goto L_8001E550; break;
        default: switch_error(__func__, 0x8001E4D8, 0x80041920);
    }
    // 0x8001E4DC: nop

L_8001E4E0:
    // 0x8001E4E0: jal         0x8001E2C8
    // 0x8001E4E4: nop

    func_8001E2C8(rdram, ctx);
        goto after_0;
    // 0x8001E4E4: nop

    after_0:
    // 0x8001E4E8: b           L_8001E56C
    // 0x8001E4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E56C;
    // 0x8001E4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E4F0:
    // 0x8001E4F0: jal         0x8001E304
    // 0x8001E4F4: nop

    func_8001E304(rdram, ctx);
        goto after_1;
    // 0x8001E4F4: nop

    after_1:
    // 0x8001E4F8: b           L_8001E56C
    // 0x8001E4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E56C;
    // 0x8001E4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E500:
    // 0x8001E500: jal         0x8001E34C
    // 0x8001E504: nop

    func_8001E34C(rdram, ctx);
        goto after_2;
    // 0x8001E504: nop

    after_2:
    // 0x8001E508: b           L_8001E56C
    // 0x8001E50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E56C;
    // 0x8001E50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E510:
    // 0x8001E510: jal         0x8001E380
    // 0x8001E514: nop

    func_8001E380(rdram, ctx);
        goto after_3;
    // 0x8001E514: nop

    after_3:
    // 0x8001E518: b           L_8001E56C
    // 0x8001E51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E56C;
    // 0x8001E51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E520:
    // 0x8001E520: jal         0x8001E418
    // 0x8001E524: nop

    func_8001E418(rdram, ctx);
        goto after_4;
    // 0x8001E524: nop

    after_4:
    // 0x8001E528: b           L_8001E56C
    // 0x8001E52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E56C;
    // 0x8001E52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E530:
    // 0x8001E530: jal         0x8001E3E0
    // 0x8001E534: nop

    func_8001E3E0(rdram, ctx);
        goto after_5;
    // 0x8001E534: nop

    after_5:
    // 0x8001E538: b           L_8001E56C
    // 0x8001E53C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E56C;
    // 0x8001E53C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E540:
    // 0x8001E540: jal         0x8001E44C
    // 0x8001E544: nop

    func_8001E44C(rdram, ctx);
        goto after_6;
    // 0x8001E544: nop

    after_6:
    // 0x8001E548: b           L_8001E56C
    // 0x8001E54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E56C;
    // 0x8001E54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E550:
    // 0x8001E550: jal         0x8001E490
    // 0x8001E554: nop

    func_8001E490(rdram, ctx);
        goto after_7;
    // 0x8001E554: nop

    after_7:
    // 0x8001E558: b           L_8001E56C
    // 0x8001E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E56C;
    // 0x8001E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E560:
    // 0x8001E560: jal         0x8001E3A0
    // 0x8001E564: nop

    func_8001E3A0(rdram, ctx);
        goto after_8;
    // 0x8001E564: nop

    after_8:
    // 0x8001E568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E56C:
    // 0x8001E56C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E570: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001E578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E57C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001E584: jal         0x8001E7B4
    // 0x8001E588: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001E7B4(rdram, ctx);
        goto after_0;
    // 0x8001E588: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8001E58C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001E590: jal         0x8001DDA4
    // 0x8001E594: lw          $a0, -0x16A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X16A8);
    func_8001DDA4(rdram, ctx);
        goto after_1;
    // 0x8001E594: lw          $a0, -0x16A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X16A8);
    after_1:
    // 0x8001E598: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001E59C: jal         0x8002EC20
    // 0x8001E5A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_2;
    // 0x8001E5A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8001E5A4: jal         0x8001DDA4
    // 0x8001E5A8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001DDA4(rdram, ctx);
        goto after_3;
    // 0x8001E5A8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x8001E5AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001E5B0: jal         0x8002EC20
    // 0x8001E5B4: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_4;
    // 0x8001E5B4: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    after_4:
    // 0x8001E5B8: jal         0x8001E4B0
    // 0x8001E5BC: nop

    func_8001E4B0(rdram, ctx);
        goto after_5;
    // 0x8001E5BC: nop

    after_5:
    // 0x8001E5C0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001E5C4: jal         0x8008A980
    // 0x8001E5C8: lw          $a0, -0x16B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X16B4);
    _gzpublic_entrypoint_0(rdram, ctx);
        goto after_6;
    // 0x8001E5C8: lw          $a0, -0x16B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X16B4);
    after_6:
    // 0x8001E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E5D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E5D4: jr          $ra
    // 0x8001E5D8: nop

    return;
    // 0x8001E5D8: nop

;}
RECOMP_FUNC void func_8001E5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E5DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001E5E0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8001E5E4: lw          $t6, -0x5C10($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C10);
    // 0x8001E5E8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001E5EC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8001E5F0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8001E5F4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8001E5F8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8001E5FC: beq         $t6, $zero, L_8001E784
    if (ctx->r14 == 0) {
        // 0x8001E600: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_8001E784;
    }
    // 0x8001E600: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8001E604: jal         0x8001559C
    // 0x8001E608: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001559C(rdram, ctx);
        goto after_0;
    // 0x8001E608: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001E60C: jal         0x80031BD0
    // 0x8001E610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osGetThreadId_recomp(rdram, ctx);
        goto after_1;
    // 0x8001E610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8001E614: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8001E618: addiu       $s3, $s3, -0x16B8
    ctx->r19 = ADD32(ctx->r19, -0X16B8);
    // 0x8001E61C: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x8001E620: sw          $v0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r2;
    // 0x8001E624: addiu       $s1, $s1, -0x16B8
    ctx->r17 = ADD32(ctx->r17, -0X16B8);
    // 0x8001E628: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001E62C: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_8001E630:
    // 0x8001E630: jal         0x8001DDA4
    // 0x8001E634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001DDA4(rdram, ctx);
        goto after_2;
    // 0x8001E634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8001E638: beq         $v0, $zero, L_8001E650
    if (ctx->r2 == 0) {
        // 0x8001E63C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8001E650;
    }
    // 0x8001E63C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001E640: jal         0x8002FF70
    // 0x8001E644: nop

    osGetThreadPri_recomp(rdram, ctx);
        goto after_3;
    // 0x8001E644: nop

    after_3:
    // 0x8001E648: b           L_8001E654
    // 0x8001E64C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_8001E654;
    // 0x8001E64C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_8001E650:
    // 0x8001E650: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
L_8001E654:
    // 0x8001E654: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001E658: bne         $s0, $s2, L_8001E630
    if (ctx->r16 != ctx->r18) {
        // 0x8001E65C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8001E630;
    }
    // 0x8001E65C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001E660: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x8001E664: addiu       $s1, $s1, 0x1180
    ctx->r17 = ADD32(ctx->r17, 0X1180);
    // 0x8001E668: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001E66C: lw          $t7, 0x10($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X10);
L_8001E670:
    // 0x8001E670: beql        $s0, $t7, L_8001E698
    if (ctx->r16 == ctx->r15) {
        // 0x8001E674: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8001E698;
    }
    goto skip_0;
    // 0x8001E674: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8001E678: jal         0x8001DDA4
    // 0x8001E67C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001DDA4(rdram, ctx);
        goto after_4;
    // 0x8001E67C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8001E680: beq         $v0, $zero, L_8001E694
    if (ctx->r2 == 0) {
        // 0x8001E684: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8001E694;
    }
    // 0x8001E684: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001E688: addu        $t8, $s1, $s0
    ctx->r24 = ADD32(ctx->r17, ctx->r16);
    // 0x8001E68C: jal         0x8002EC20
    // 0x8001E690: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_5;
    // 0x8001E690: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    after_5:
L_8001E694:
    // 0x8001E694: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8001E698:
    // 0x8001E698: bnel        $s0, $s2, L_8001E670
    if (ctx->r16 != ctx->r18) {
        // 0x8001E69C: lw          $t7, 0x10($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X10);
            goto L_8001E670;
    }
    goto skip_1;
    // 0x8001E69C: lw          $t7, 0x10($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X10);
    skip_1:
    // 0x8001E6A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001E6A4: jal         0x8002EC20
    // 0x8001E6A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_6;
    // 0x8001E6A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_6:
    // 0x8001E6AC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8001E6B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001E6B4: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x8001E6B8: beq         $v0, $zero, L_8001E708
    if (ctx->r2 == 0) {
        // 0x8001E6BC: nop
    
            goto L_8001E708;
    }
    // 0x8001E6BC: nop

    // 0x8001E6C0: beq         $v0, $at, L_8001E6E8
    if (ctx->r2 == ctx->r1) {
        // 0x8001E6C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8001E6E8;
    }
    // 0x8001E6C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001E6C8: beq         $v0, $at, L_8001E6F8
    if (ctx->r2 == ctx->r1) {
        // 0x8001E6CC: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8001E6F8;
    }
    // 0x8001E6CC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8001E6D0: beq         $v0, $at, L_8001E714
    if (ctx->r2 == ctx->r1) {
        // 0x8001E6D4: lui         $t1, 0x8004
        ctx->r9 = S32(0X8004 << 16);
            goto L_8001E714;
    }
    // 0x8001E6D4: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x8001E6D8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8001E6DC: lw          $t9, 0x1490($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1490);
    // 0x8001E6E0: b           L_8001E71C
    // 0x8001E6E4: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
        goto L_8001E71C;
    // 0x8001E6E4: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
L_8001E6E8:
    // 0x8001E6E8: jal         0x8001DDA4
    // 0x8001E6EC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8001DDA4(rdram, ctx);
        goto after_7;
    // 0x8001E6EC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_7:
    // 0x8001E6F0: b           L_8001E71C
    // 0x8001E6F4: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
        goto L_8001E71C;
    // 0x8001E6F4: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
L_8001E6F8:
    // 0x8001E6F8: jal         0x80012598
    // 0x8001E6FC: nop

    func_80012598(rdram, ctx);
        goto after_8;
    // 0x8001E6FC: nop

    after_8:
    // 0x8001E700: b           L_8001E71C
    // 0x8001E704: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
        goto L_8001E71C;
    // 0x8001E704: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
L_8001E708:
    // 0x8001E708: lw          $t0, 0x1494($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1494);
    // 0x8001E70C: b           L_8001E71C
    // 0x8001E710: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
        goto L_8001E71C;
    // 0x8001E710: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
L_8001E714:
    // 0x8001E714: lw          $t1, 0x1494($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1494);
    // 0x8001E718: sw          $t1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r9;
L_8001E71C:
    // 0x8001E71C: jal         0x80031BD0
    // 0x8001E720: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    osGetThreadId_recomp(rdram, ctx);
        goto after_9;
    // 0x8001E720: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    after_9:
    // 0x8001E724: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x8001E728: sw          $v0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r2;
    // 0x8001E72C: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x8001E730: lw          $t5, 0x14($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X14);
    // 0x8001E734: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8001E738: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x8001E73C: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001E740: addiu       $s0, $s0, -0x1878
    ctx->r16 = ADD32(ctx->r16, -0X1878);
    // 0x8001E744: addiu       $t7, $t7, -0x1878
    ctx->r15 = ADD32(ctx->r15, -0X1878);
    // 0x8001E748: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001E74C: lui         $a3, 0x8002
    ctx->r7 = S32(0X8002 << 16);
    // 0x8001E750: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x8001E754: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8001E758: addiu       $a3, $a3, -0x1A88
    ctx->r7 = ADD32(ctx->r7, -0X1A88);
    // 0x8001E75C: addiu       $a1, $a1, -0x16C8
    ctx->r5 = ADD32(ctx->r5, -0X16C8);
    // 0x8001E760: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8001E764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001E768: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8001E76C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8001E770: sw          $t5, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r13;
    // 0x8001E774: jal         0x8001DCB0
    // 0x8001E778: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    func_8001DCB0(rdram, ctx);
        goto after_10;
    // 0x8001E778: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    after_10:
    // 0x8001E77C: jal         0x8002E510
    // 0x8001E780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_11;
    // 0x8001E780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_8001E784:
    // 0x8001E784: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001E788: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8001E78C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8001E790: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8001E794: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8001E798: jr          $ra
    // 0x8001E79C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001E79C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001E7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E7A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001E7A4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001E7A8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8001E7AC: jr          $ra
    // 0x8001E7B0: lw          $v0, -0x16A4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X16A4);
    return;
    // 0x8001E7B0: lw          $v0, -0x16A4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X16A4);
;}
RECOMP_FUNC void func_8001E7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E7B4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E7B8: jr          $ra
    // 0x8001E7BC: sh          $a0, -0x2480($at)
    MEM_H(-0X2480, ctx->r1) = ctx->r4;
    return;
    // 0x8001E7BC: sh          $a0, -0x2480($at)
    MEM_H(-0X2480, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8001E7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E7C0: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001E7C4: jr          $ra
    // 0x8001E7C8: lh          $v0, -0x2480($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2480);
    return;
    // 0x8001E7C8: lh          $v0, -0x2480($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2480);
;}
RECOMP_FUNC void func_8001E7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E7CC: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001E7D0: jr          $ra
    // 0x8001E7D4: lw          $v0, -0x16B8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X16B8);
    return;
    // 0x8001E7D4: lw          $v0, -0x16B8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X16B8);
;}
RECOMP_FUNC void func_8001E7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E7E0: jr          $ra
    // 0x8001E7E4: lui         $v0, 0x8040
    ctx->r2 = S32(0X8040 << 16);
    return;
    // 0x8001E7E4: lui         $v0, 0x8040
    ctx->r2 = S32(0X8040 << 16);
;}
RECOMP_FUNC void func_8001E7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E7E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E7EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E7F0: jal         0x8001E7E0
    // 0x8001E7F4: nop

    func_8001E7E0(rdram, ctx);
        goto after_0;
    // 0x8001E7F4: nop

    after_0:
    // 0x8001E7F8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E7FC: jal         0x8001E830
    // 0x8001E800: sw          $v0, -0x1668($at)
    MEM_W(-0X1668, ctx->r1) = ctx->r2;
    func_8001E830(rdram, ctx);
        goto after_1;
    // 0x8001E800: sw          $v0, -0x1668($at)
    MEM_W(-0X1668, ctx->r1) = ctx->r2;
    after_1:
    // 0x8001E804: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001E808: lw          $t6, -0x1668($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1668);
    // 0x8001E80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E810: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001E814: addiu       $v1, $v1, -0x1670
    ctx->r3 = ADD32(ctx->r3, -0X1670);
    // 0x8001E818: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x8001E81C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001E820: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E824: sw          $t7, -0x166C($at)
    MEM_W(-0X166C, ctx->r1) = ctx->r15;
    // 0x8001E828: jr          $ra
    // 0x8001E82C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001E82C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001E830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E830: lui         $v0, 0x2C
    ctx->r2 = S32(0X2C << 16);
    // 0x8001E834: jr          $ra
    // 0x8001E838: ori         $v0, $v0, 0x8800
    ctx->r2 = ctx->r2 | 0X8800;
    return;
    // 0x8001E838: ori         $v0, $v0, 0x8800
    ctx->r2 = ctx->r2 | 0X8800;
;}
RECOMP_FUNC void init_crc_check(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E848: jal         0x8001E868
    // 0x8001E84C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    set_crc_entry(rdram, ctx);
        goto after_0;
    // 0x8001E84C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001E850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E854: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001E858: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E85C: sw          $t6, -0x164C($at)
    MEM_W(-0X164C, ctx->r1) = ctx->r14;
    // 0x8001E860: jr          $ra
    // 0x8001E864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001E864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void set_crc_entry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E868: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001E86C: addiu       $v1, $v1, -0x1650
    ctx->r3 = ADD32(ctx->r3, -0X1650);
    // 0x8001E870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E874: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8001E878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E87C: beq         $a0, $at, L_8001E8D4
    if (ctx->r4 == ctx->r1) {
        // 0x8001E880: sw          $a0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r4;
            goto L_8001E8D4;
    }
    // 0x8001E880: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8001E884: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x8001E888: addiu       $t8, $t8, 0x1190
    ctx->r24 = ADD32(ctx->r24, 0X1190);
    // 0x8001E88C: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x8001E890: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8001E894: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8001E898: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E89C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8001E8A0: sw          $t9, -0x1660($at)
    MEM_W(-0X1660, ctx->r1) = ctx->r25;
    // 0x8001E8A4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E8A8: sw          $zero, -0x165C($at)
    MEM_W(-0X165C, ctx->r1) = 0;
    // 0x8001E8AC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E8B0: sw          $zero, -0x1658($at)
    MEM_W(-0X1658, ctx->r1) = 0;
    // 0x8001E8B4: lbu         $t0, 0x4($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X4);
    // 0x8001E8B8: addiu       $t3, $t3, 0x50F0
    ctx->r11 = ADD32(ctx->r11, 0X50F0);
    // 0x8001E8BC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001E8C0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001E8C4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8001E8C8: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x8001E8CC: jal         0x8001E210
    // 0x8001E8D0: addiu       $a1, $a1, -0x1654
    ctx->r5 = ADD32(ctx->r5, -0X1654);
    func_8001E210(rdram, ctx);
        goto after_0;
    // 0x8001E8D0: addiu       $a1, $a1, -0x1654
    ctx->r5 = ADD32(ctx->r5, -0X1654);
    after_0:
L_8001E8D4:
    // 0x8001E8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E8DC: jr          $ra
    return;
;}
RECOMP_FUNC void advance_crc_check(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E8E4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001E8E8: lw          $v0, -0x1650($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1650);
    // 0x8001E8EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001E8F0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8001E8F4: bne         $v0, $at, L_8001E904
    if (ctx->r2 != ctx->r1) {
        // 0x8001E8F8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8001E904;
    }
    // 0x8001E8F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E8FC: b           L_8001EAA4
    // 0x8001E900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001EAA4;
    // 0x8001E900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001E904:
    // 0x8001E904: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x8001E908: lw          $t0, -0x1654($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1654);
    // 0x8001E90C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8001E910: addiu       $v1, $v1, 0x50F0
    ctx->r3 = ADD32(ctx->r3, 0X50F0);
    // 0x8001E914: beq         $t0, $zero, L_8001EA08
    if (ctx->r8 == 0) {
        // 0x8001E918: sll         $t1, $v0, 3
        ctx->r9 = S32(ctx->r2 << 3);
            goto L_8001EA08;
    }
    // 0x8001E918: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x8001E91C: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x8001E920: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8001E924: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001E928: lbu         $t7, 0x1195($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1195);
    // 0x8001E92C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001E930: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001E934: lw          $a0, -0x165C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X165C);
    // 0x8001E938: lw          $a1, -0x1658($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1658);
    // 0x8001E93C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8001E940: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8001E944: beq         $t7, $zero, L_8001E974
    if (ctx->r15 == 0) {
        // 0x8001E948: sw          $a1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r5;
            goto L_8001E974;
    }
    // 0x8001E948: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x8001E94C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001E950: lw          $a0, -0x1660($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1660);
    // 0x8001E954: jal         0x8001E210
    // 0x8001E958: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8001E210(rdram, ctx);
        goto after_0;
    // 0x8001E958: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8001E95C: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x8001E960: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8001E964: lw          $a2, -0x1660($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1660);
    // 0x8001E968: lw          $t0, -0x1654($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1654);
    // 0x8001E96C: b           L_8001E984
    // 0x8001E970: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
        goto L_8001E984;
    // 0x8001E970: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
L_8001E974:
    // 0x8001E974: lw          $a2, -0x1660($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1660);
    // 0x8001E978: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x8001E97C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x8001E980: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_8001E984:
    // 0x8001E984: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8001E988: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x8001E98C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8001E990: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E994: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8001E998: andi        $t9, $a0, 0x17
    ctx->r25 = ctx->r4 & 0X17;
    // 0x8001E99C: sllv        $t1, $v1, $t9
    ctx->r9 = S32(ctx->r3 << (ctx->r25 & 31));
    // 0x8001E9A0: lbu         $v1, 0x1($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X1);
    // 0x8001E9A4: xor         $a1, $a1, $t1
    ctx->r5 = ctx->r5 ^ ctx->r9;
    // 0x8001E9A8: addiu       $t8, $a2, 0x4
    ctx->r24 = ADD32(ctx->r6, 0X4);
    // 0x8001E9AC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8001E9B0: andi        $t2, $a0, 0x17
    ctx->r10 = ctx->r4 & 0X17;
    // 0x8001E9B4: sllv        $t3, $v1, $t2
    ctx->r11 = S32(ctx->r3 << (ctx->r10 & 31));
    // 0x8001E9B8: lbu         $v1, 0x2($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X2);
    // 0x8001E9BC: xor         $a1, $a1, $t3
    ctx->r5 = ctx->r5 ^ ctx->r11;
    // 0x8001E9C0: addiu       $t9, $t0, -0x4
    ctx->r25 = ADD32(ctx->r8, -0X4);
    // 0x8001E9C4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8001E9C8: andi        $t4, $a0, 0x17
    ctx->r12 = ctx->r4 & 0X17;
    // 0x8001E9CC: sllv        $t5, $v1, $t4
    ctx->r13 = S32(ctx->r3 << (ctx->r12 & 31));
    // 0x8001E9D0: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x8001E9D4: xor         $a1, $a1, $t5
    ctx->r5 = ctx->r5 ^ ctx->r13;
    // 0x8001E9D8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8001E9DC: andi        $t6, $a0, 0x17
    ctx->r14 = ctx->r4 & 0X17;
    // 0x8001E9E0: sw          $a0, -0x165C($at)
    MEM_W(-0X165C, ctx->r1) = ctx->r4;
    // 0x8001E9E4: sllv        $t7, $v1, $t6
    ctx->r15 = S32(ctx->r3 << (ctx->r14 & 31));
    // 0x8001E9E8: xor         $a1, $a1, $t7
    ctx->r5 = ctx->r5 ^ ctx->r15;
    // 0x8001E9EC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E9F0: sw          $a1, -0x1658($at)
    MEM_W(-0X1658, ctx->r1) = ctx->r5;
    // 0x8001E9F4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E9F8: sw          $t8, -0x1660($at)
    MEM_W(-0X1660, ctx->r1) = ctx->r24;
    // 0x8001E9FC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001EA00: b           L_8001EAA0
    // 0x8001EA04: sw          $t9, -0x1654($at)
    MEM_W(-0X1654, ctx->r1) = ctx->r25;
        goto L_8001EAA0;
    // 0x8001EA04: sw          $t9, -0x1654($at)
    MEM_W(-0X1654, ctx->r1) = ctx->r25;
L_8001EA08:
    // 0x8001EA08: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x8001EA0C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8001EA10: lbu         $t2, 0x1194($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1194);
    // 0x8001EA14: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8001EA18: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8001EA1C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8001EA20: jal         0x8001E210
    // 0x8001EA24: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    func_8001E210(rdram, ctx);
        goto after_1;
    // 0x8001EA24: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    after_1:
    // 0x8001EA28: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x8001EA2C: lw          $t4, -0x1650($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1650);
    // 0x8001EA30: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8001EA34: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8001EA38: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8001EA3C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8001EA40: lbu         $t6, 0x1194($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1194);
    // 0x8001EA44: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8001EA48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001EA4C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    // 0x8001EA50: jal         0x8001E210
    // 0x8001EA54: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8001E210(rdram, ctx);
        goto after_2;
    // 0x8001EA54: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_2:
    // 0x8001EA58: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x8001EA5C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8001EA60: lw          $t8, -0x165C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X165C);
    // 0x8001EA64: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8001EA68: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x8001EA6C: beq         $a0, $t8, L_8001EA7C
    if (ctx->r4 == ctx->r24) {
        // 0x8001EA70: nop
    
            goto L_8001EA7C;
    }
    // 0x8001EA70: nop

    // 0x8001EA74: b           L_8001EAA4
    // 0x8001EA78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001EAA4;
    // 0x8001EA78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001EA7C:
    // 0x8001EA7C: lw          $t9, -0x1658($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1658);
    // 0x8001EA80: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001EA84: beq         $a1, $t9, L_8001EA94
    if (ctx->r5 == ctx->r25) {
        // 0x8001EA88: nop
    
            goto L_8001EA94;
    }
    // 0x8001EA88: nop

    // 0x8001EA8C: b           L_8001EAA4
    // 0x8001EA90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001EAA4;
    // 0x8001EA90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001EA94:
    // 0x8001EA94: lw          $a0, -0x1650($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1650);
    // 0x8001EA98: jal         0x8001E868
    // 0x8001EA9C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    set_crc_entry(rdram, ctx);
        goto after_3;
    // 0x8001EA9C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_3:
L_8001EAA0:
    // 0x8001EAA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001EAA4:
    // 0x8001EAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001EAA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001EAAC: jr          $ra
    return;
;}
RECOMP_FUNC void do_crc_check(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EAB4: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001EAB8: addiu       $a0, $a0, -0x164C
    ctx->r4 = ADD32(ctx->r4, -0X164C);
    // 0x8001EABC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8001EAC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001EAC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001EAC8: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x8001EACC: beq         $t6, $zero, L_8001EAE8
    if (ctx->r14 == 0) {
        // 0x8001EAD0: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8001EAE8;
    }
    // 0x8001EAD0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8001EAD4: jal         0x8001E8E4
    // 0x8001EAD8: nop

    advance_crc_check(rdram, ctx);
        goto after_0;
    // 0x8001EAD8: nop

    after_0:
    // 0x8001EADC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001EAE0: addiu       $a0, $a0, -0x164C
    ctx->r4 = ADD32(ctx->r4, -0X164C);
    // 0x8001EAE4: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_8001EAE8:
    // 0x8001EAE8: bne         $v1, $zero, L_8001EAF8
    if (ctx->r3 != 0) {
        // 0x8001EAEC: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_8001EAF8;
    }
    // 0x8001EAEC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_8001EAF0:
    // 0x8001EAF0: b           L_8001EAF0
    pause_self(rdram);
    // 0x8001EAF4: nop

L_8001EAF8:
    // 0x8001EAF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001EAFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001EB00: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001EB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EB10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001EB14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001EB18: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001EB1C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8001EB20: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x8001EB24: lw          $t8, 0x11DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X11DC);
    // 0x8001EB28: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8001EB2C: sw          $t7, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->r15;
    // 0x8001EB30: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8001EB34: lw          $t9, 0x11DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X11DC);
    // 0x8001EB38: sw          $zero, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = 0;
    // 0x8001EB3C: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x8001EB40: lw          $t1, 0x11DC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X11DC);
    // 0x8001EB44: addiu       $t0, $zero, 0x3E80
    ctx->r8 = ADD32(0, 0X3E80);
    // 0x8001EB48: sw          $t0, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->r8;
    // 0x8001EB4C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8001EB50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001EB54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001EB58: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8001EB5C: lw          $a2, 0xC($t2)
    ctx->r6 = MEM_W(ctx->r10, 0XC);
    // 0x8001EB60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8001EB64: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8001EB68: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001EB6C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8001EB70: jal         0x80020EE4
    // 0x8001EB74: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80020EE4(rdram, ctx);
        goto after_0;
    // 0x8001EB74: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_0:
    // 0x8001EB78: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8001EB7C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8001EB80: lw          $t6, 0x11DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X11DC);
    // 0x8001EB84: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8001EB88: sw          $t5, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->r13;
    // 0x8001EB8C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8001EB90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001EB94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001EB98: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8001EB9C: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x8001EBA0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8001EBA4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001EBA8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8001EBAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001EBB0: jal         0x80020EE4
    // 0x8001EBB4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80020EE4(rdram, ctx);
        goto after_1;
    // 0x8001EBB4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x8001EBB8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8001EBBC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001EBC0: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x8001EBC4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8001EBC8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8001EBCC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8001EBD0: jal         0x800263C0
    // 0x8001EBD4: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    func_800263C0(rdram, ctx);
        goto after_2;
    // 0x8001EBD4: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    after_2:
    // 0x8001EBD8: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x8001EBDC: lw          $t1, 0x11DC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X11DC);
    // 0x8001EBE0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8001EBE4: lw          $t2, 0x40($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X40);
    // 0x8001EBE8: sw          $t2, 0x11D8($at)
    MEM_W(0X11D8, ctx->r1) = ctx->r10;
    // 0x8001EBEC: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8001EBF0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8001EBF4: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x8001EBF8: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8001EBFC: sltiu       $at, $t5, 0x2
    ctx->r1 = ctx->r13 < 0X2 ? 1 : 0;
    // 0x8001EC00: bne         $at, $zero, L_8001EC5C
    if (ctx->r1 != 0) {
        // 0x8001EC04: nop
    
            goto L_8001EC5C;
    }
    // 0x8001EC04: nop

L_8001EC08:
    // 0x8001EC08: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8001EC0C: lw          $t6, 0x11DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X11DC);
    // 0x8001EC10: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x8001EC14: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8001EC18: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8001EC1C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001EC20: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001EC24: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001EC28: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8001EC2C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8001EC30: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8001EC34: jal         0x80020E40
    // 0x8001EC38: addiu       $a1, $t1, -0x48
    ctx->r5 = ADD32(ctx->r9, -0X48);
    func_80020E40(rdram, ctx);
        goto after_3;
    // 0x8001EC38: addiu       $a1, $t1, -0x48
    ctx->r5 = ADD32(ctx->r9, -0X48);
    after_3:
    // 0x8001EC3C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8001EC40: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8001EC44: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8001EC48: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x8001EC4C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8001EC50: sltu        $at, $t3, $t5
    ctx->r1 = ctx->r11 < ctx->r13 ? 1 : 0;
    // 0x8001EC54: bne         $at, $zero, L_8001EC08
    if (ctx->r1 != 0) {
        // 0x8001EC58: nop
    
            goto L_8001EC08;
    }
    // 0x8001EC58: nop

L_8001EC5C:
    // 0x8001EC5C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8001EC60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001EC64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001EC68: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x8001EC6C: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    // 0x8001EC70: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8001EC74: jal         0x80020EE4
    // 0x8001EC78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80020EE4(rdram, ctx);
        goto after_4;
    // 0x8001EC78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_4:
    // 0x8001EC7C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001EC80: sw          $v0, -0x15DC($at)
    MEM_W(-0X15DC, ctx->r1) = ctx->r2;
    // 0x8001EC84: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8001EC88: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8001EC8C: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x8001EC90: beq         $t9, $zero, L_8001ECD4
    if (ctx->r25 == 0) {
        // 0x8001EC94: nop
    
            goto L_8001ECD4;
    }
    // 0x8001EC94: nop

L_8001EC98:
    // 0x8001EC98: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8001EC9C: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x8001ECA0: lw          $t1, -0x15DC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X15DC);
    // 0x8001ECA4: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x8001ECA8: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
    // 0x8001ECAC: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x8001ECB0: sh          $t0, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r8;
    // 0x8001ECB4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8001ECB8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8001ECBC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8001ECC0: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8001ECC4: lhu         $t8, 0x10($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X10);
    // 0x8001ECC8: sltu        $at, $t6, $t8
    ctx->r1 = ctx->r14 < ctx->r24 ? 1 : 0;
    // 0x8001ECCC: bne         $at, $zero, L_8001EC98
    if (ctx->r1 != 0) {
        // 0x8001ECD0: nop
    
            goto L_8001EC98;
    }
    // 0x8001ECD0: nop

L_8001ECD4:
    // 0x8001ECD4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8001ECD8: lw          $t9, 0x11DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X11DC);
    // 0x8001ECDC: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x8001ECE0: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x8001ECE4: lw          $t1, 0x11DC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X11DC);
    // 0x8001ECE8: lui         $t2, 0x8002
    ctx->r10 = S32(0X8002 << 16);
    // 0x8001ECEC: addiu       $t2, $t2, -0x1298
    ctx->r10 = ADD32(ctx->r10, -0X1298);
    // 0x8001ECF0: sw          $t2, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r10;
    // 0x8001ECF4: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x8001ECF8: lw          $t4, 0x11DC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X11DC);
    // 0x8001ECFC: sw          $t4, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r12;
    // 0x8001ED00: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001ED04: jal         0x800267F0
    // 0x8001ED08: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    func_800267F0(rdram, ctx);
        goto after_5;
    // 0x8001ED08: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    after_5:
    // 0x8001ED0C: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x8001ED10: sh          $t0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r8;
    // 0x8001ED14: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x8001ED18: lw          $t3, 0x11DC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X11DC);
    // 0x8001ED1C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8001ED20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8001ED24: addiu       $a0, $t3, 0x14
    ctx->r4 = ADD32(ctx->r11, 0X14);
    // 0x8001ED28: jal         0x80026500
    // 0x8001ED2C: lw          $a2, 0x48($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X48);
    func_80026500(rdram, ctx);
        goto after_6;
    // 0x8001ED2C: lw          $a2, 0x48($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X48);
    after_6:
    // 0x8001ED30: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x8001ED34: lw          $t5, 0x11DC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X11DC);
    // 0x8001ED38: addiu       $a0, $t5, 0x14
    ctx->r4 = ADD32(ctx->r13, 0X14);
    // 0x8001ED3C: jal         0x8002645C
    // 0x8001ED40: addiu       $a1, $t5, 0x28
    ctx->r5 = ADD32(ctx->r13, 0X28);
    func_8002645C(rdram, ctx);
        goto after_7;
    // 0x8001ED40: addiu       $a1, $t5, 0x28
    ctx->r5 = ADD32(ctx->r13, 0X28);
    after_7:
    // 0x8001ED44: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8001ED48: lw          $t7, 0x11DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X11DC);
    // 0x8001ED4C: sw          $v0, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->r2;
    // 0x8001ED50: b           L_8001ED58
    // 0x8001ED54: nop

        goto L_8001ED58;
    // 0x8001ED54: nop

L_8001ED58:
    // 0x8001ED58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001ED5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001ED60: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001ED68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_probe_task_dispatch(rdram, ctx, 1);
    // 0x8001ED68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001ED6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001ED70: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8001ED74: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8001ED78: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_8001ED7C:
    // 0x8001ED7C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001ED80: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8001ED84: lh          $t8, 0x28($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X28);
    // 0x8001ED88: bne         $t8, $at, L_8001EDC0
    if (ctx->r24 != ctx->r1) {
        // 0x8001ED8C: nop
    
            goto L_8001EDC0;
    }
    // 0x8001ED8C: nop

    // 0x8001ED90: b           L_8001ED98
    // 0x8001ED94: nop

        goto L_8001ED98;
    // 0x8001ED94: nop

L_8001ED98:
    // 0x8001ED98: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x8001ED9C: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
    // 0x8001EDA0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EDA4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8001EDA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8001EDAC: addiu       $a0, $t0, 0x14
    ctx->r4 = ADD32(ctx->r8, 0X14);
    // 0x8001EDB0: jal         0x80026500
    // 0x8001EDB4: lw          $a2, 0x48($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X48);
    func_80026500(rdram, ctx);
        goto after_0;
    // 0x8001EDB4: lw          $a2, 0x48($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X48);
    after_0:
    // 0x8001EDB8: b           L_8001EDD4
    // 0x8001EDBC: nop

        goto L_8001EDD4;
    // 0x8001EDBC: nop

L_8001EDC0:
    // 0x8001EDC0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EDC4: jal         0x8001EE34
    // 0x8001EDC8: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_8001EE34(rdram, ctx);
        goto after_1;
    // 0x8001EDC8: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_1:
    // 0x8001EDCC: b           L_8001EDD4
    // 0x8001EDD0: nop

        goto L_8001EDD4;
    // 0x8001EDD0: nop

L_8001EDD4:
    // 0x8001EDD4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EDD8: addiu       $a0, $t1, 0x14
    ctx->r4 = ADD32(ctx->r9, 0X14);
    // 0x8001EDDC: jal         0x8002645C
    // 0x8001EDE0: addiu       $a1, $t1, 0x28
    ctx->r5 = ADD32(ctx->r9, 0X28);
    func_8002645C(rdram, ctx);
        goto after_2;
    // 0x8001EDE0: addiu       $a1, $t1, 0x28
    ctx->r5 = ADD32(ctx->r9, 0X28);
    after_2:
    // 0x8001EDE4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EDE8: sw          $v0, 0x4C($t2)
    MEM_W(0X4C, ctx->r10) = ctx->r2;
    // 0x8001EDEC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EDF0: lw          $t4, 0x4C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4C);
    // 0x8001EDF4: beq         $t4, $zero, L_8001ED7C
    if (ctx->r12 == 0) {
        // 0x8001EDF8: nop
    
            goto L_8001ED7C;
    }
    // 0x8001EDF8: nop

    // 0x8001EDFC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EE00: lw          $t6, 0x50($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X50);
    // 0x8001EE04: lw          $t7, 0x4C($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4C);
    // 0x8001EE08: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001EE0C: sw          $t8, 0x50($t5)
    MEM_W(0X50, ctx->r13) = ctx->r24;
    // 0x8001EE10: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EE14: b           L_8001EE24
    // 0x8001EE18: lw          $v0, 0x4C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X4C);
        goto L_8001EE24;
    // 0x8001EE18: lw          $v0, 0x4C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X4C);
    // 0x8001EE1C: b           L_8001EE24
    // 0x8001EE20: nop

        goto L_8001EE24;
    // 0x8001EE20: nop

L_8001EE24:
    // 0x8001EE24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001EE28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001EE2C: jr          $ra
    // 0x8001EE30: nop

    return;
    // 0x8001EE30: nop

;}
RECOMP_FUNC void func_8001EE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_probe_task_dispatch(rdram, ctx, 2);
    // 0x8001EE34: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8001EE38: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001EE3C: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x8001EE40: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8001EE44: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8001EE48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001EE4C: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x8001EE50: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x8001EE54: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x8001EE58: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_8001EE5C:
    // 0x8001EE5C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8001EE60: beq         $t7, $zero, L_8001EE90
    if (ctx->r15 == 0) {
        // 0x8001EE64: nop
    
            goto L_8001EE90;
    }
    // 0x8001EE64: nop

    // 0x8001EE68: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001EE6C: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    // 0x8001EE70: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x8001EE74: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x8001EE78: sh          $t0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r8;
    // 0x8001EE7C: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x8001EE80: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x8001EE84: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x8001EE88: addiu       $t3, $sp, 0x84
    ctx->r11 = ADD32(ctx->r29, 0X84);
    // 0x8001EE8C: sw          $t3, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r11;
L_8001EE90:
    // 0x8001EE90: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    // 0x8001EE94: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x8001EE98: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x8001EE9C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001EEA0: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8001EEA4: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x8001EEA8: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x8001EEAC: bne         $t8, $zero, L_8001EEC8
    if (ctx->r24 != 0) {
        // 0x8001EEB0: nop
    
            goto L_8001EEC8;
    }
    // 0x8001EEB0: nop

    // 0x8001EEB4: addiu       $a0, $sp, 0x5A
    ctx->r4 = ADD32(ctx->r29, 0X5A);
    // 0x8001EEB8: jal         0x80020298
    // 0x8001EEBC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80020298(rdram, ctx);
        goto after_0;
    // 0x8001EEBC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x8001EEC0: b           L_800200A4
    // 0x8001EEC4: nop

        goto L_800200A4;
    // 0x8001EEC4: nop

L_8001EEC8:
    // 0x8001EEC8: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x8001EECC: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x8001EED0: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    // 0x8001EED4: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8001EED8: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8001EEDC: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x8001EEE0: lw          $t3, 0xB8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB8);
    // 0x8001EEE4: lhu         $s0, 0x0($t3)
    ctx->r16 = MEM_HU(ctx->r11, 0X0);
    // 0x8001EEE8: slti        $at, $s0, 0x201
    ctx->r1 = SIGNED(ctx->r16) < 0X201 ? 1 : 0;
    // 0x8001EEEC: bne         $at, $zero, L_8001EF2C
    if (ctx->r1 != 0) {
        // 0x8001EEF0: nop
    
            goto L_8001EF2C;
    }
    // 0x8001EEF0: nop

    // 0x8001EEF4: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x8001EEF8: beq         $s0, $at, L_8001F740
    if (ctx->r16 == ctx->r1) {
        // 0x8001EEFC: nop
    
            goto L_8001F740;
    }
    // 0x8001EEFC: nop

    // 0x8001EF00: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x8001EF04: beq         $s0, $at, L_8001FC64
    if (ctx->r16 == ctx->r1) {
        // 0x8001EF08: nop
    
            goto L_8001FC64;
    }
    // 0x8001EF08: nop

    // 0x8001EF0C: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x8001EF10: beq         $s0, $at, L_8001F740
    if (ctx->r16 == ctx->r1) {
        // 0x8001EF14: nop
    
            goto L_8001F740;
    }
    // 0x8001EF14: nop

    // 0x8001EF18: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x8001EF1C: beq         $s0, $at, L_8001FA68
    if (ctx->r16 == ctx->r1) {
        // 0x8001EF20: nop
    
            goto L_8001FA68;
    }
    // 0x8001EF20: nop

    // 0x8001EF24: b           L_80020038
    // 0x8001EF28: nop

        goto L_80020038;
    // 0x8001EF28: nop

L_8001EF2C:
    // 0x8001EF2C: slti        $at, $s0, 0x81
    ctx->r1 = SIGNED(ctx->r16) < 0X81 ? 1 : 0;
    // 0x8001EF30: bne         $at, $zero, L_8001EF58
    if (ctx->r1 != 0) {
        // 0x8001EF34: nop
    
            goto L_8001EF58;
    }
    // 0x8001EF34: nop

    // 0x8001EF38: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x8001EF3C: beq         $s0, $at, L_8001F9A4
    if (ctx->r16 == ctx->r1) {
        // 0x8001EF40: nop
    
            goto L_8001F9A4;
    }
    // 0x8001EF40: nop

    // 0x8001EF44: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x8001EF48: beq         $s0, $at, L_8001FFE8
    if (ctx->r16 == ctx->r1) {
        // 0x8001EF4C: nop
    
            goto L_8001FFE8;
    }
    // 0x8001EF4C: nop

    // 0x8001EF50: b           L_80020038
    // 0x8001EF54: nop

        goto L_80020038;
    // 0x8001EF54: nop

L_8001EF58:
    // 0x8001EF58: slti        $at, $s0, 0x41
    ctx->r1 = SIGNED(ctx->r16) < 0X41 ? 1 : 0;
    // 0x8001EF5C: bne         $at, $zero, L_8001EF78
    if (ctx->r1 != 0) {
        // 0x8001EF60: nop
    
            goto L_8001EF78;
    }
    // 0x8001EF60: nop

    // 0x8001EF64: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x8001EF68: beq         $s0, $at, L_8001FFD8
    if (ctx->r16 == ctx->r1) {
        // 0x8001EF6C: nop
    
            goto L_8001FFD8;
    }
    // 0x8001EF6C: nop

    // 0x8001EF70: b           L_80020038
    // 0x8001EF74: nop

        goto L_80020038;
    // 0x8001EF74: nop

L_8001EF78:
    // 0x8001EF78: slti        $at, $s0, 0x11
    ctx->r1 = SIGNED(ctx->r16) < 0X11 ? 1 : 0;
    // 0x8001EF7C: bne         $at, $zero, L_8001EF98
    if (ctx->r1 != 0) {
        // 0x8001EF80: nop
    
            goto L_8001EF98;
    }
    // 0x8001EF80: nop

    // 0x8001EF84: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x8001EF88: beq         $s0, $at, L_8001FDE4
    if (ctx->r16 == ctx->r1) {
        // 0x8001EF8C: nop
    
            goto L_8001FDE4;
    }
    // 0x8001EF8C: nop

    // 0x8001EF90: b           L_80020038
    // 0x8001EF94: nop

        goto L_80020038;
    // 0x8001EF94: nop

L_8001EF98:
    // 0x8001EF98: addiu       $t4, $s0, -0x1
    ctx->r12 = ADD32(ctx->r16, -0X1);
    // 0x8001EF9C: sltiu       $at, $t4, 0x10
    ctx->r1 = ctx->r12 < 0X10 ? 1 : 0;
    // 0x8001EFA0: beq         $at, $zero, L_80020038
    if (ctx->r1 == 0) {
        // 0x8001EFA4: nop
    
            goto L_80020038;
    }
    // 0x8001EFA4: nop

    // 0x8001EFA8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001EFAC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8001EFB0: addu        $at, $at, $t4
    gpr jr_addend_8001EFB8 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8001EFB4: lw          $t4, 0x1940($at)
    ctx->r12 = ADD32(ctx->r1, 0X1940);
    // 0x8001EFB8: jr          $t4
    // 0x8001EFBC: nop

    switch (jr_addend_8001EFB8 >> 2) {
        case 0: goto L_8001EFC0; break;
        case 1: goto L_8001F740; break;
        case 2: goto L_80020038; break;
        case 3: goto L_8001F898; break;
        case 4: goto L_80020038; break;
        case 5: goto L_80020038; break;
        case 6: goto L_80020038; break;
        case 7: goto L_8001FAC8; break;
        case 8: goto L_80020038; break;
        case 9: goto L_80020038; break;
        case 10: goto L_80020038; break;
        case 11: goto L_80020038; break;
        case 12: goto L_80020038; break;
        case 13: goto L_80020038; break;
        case 14: goto L_80020038; break;
        case 15: goto L_8001F93C; break;
        default: switch_error(__func__, 0x8001EFB8, 0x80041940);
    }
    // 0x8001EFBC: nop

L_8001EFC0:
    // 0x8001EFC0: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8001EFC4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8001EFC8: lbu         $t6, 0x45($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X45);
    // 0x8001EFCC: beq         $t6, $at, L_8001EFE8
    if (ctx->r14 == ctx->r1) {
        // 0x8001EFD0: nop
    
            goto L_8001EFE8;
    }
    // 0x8001EFD0: nop

    // 0x8001EFD4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8001EFD8: beq         $t6, $at, L_8001EFE8
    if (ctx->r14 == ctx->r1) {
        // 0x8001EFDC: nop
    
            goto L_8001EFE8;
    }
    // 0x8001EFDC: nop

    // 0x8001EFE0: b           L_800200A4
    // 0x8001EFE4: nop

        goto L_800200A4;
    // 0x8001EFE4: nop

L_8001EFE8:
    // 0x8001EFE8: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8001EFEC: lbu         $t8, 0x43($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X43);
    // 0x8001EFF0: sh          $t8, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r24;
    // 0x8001EFF4: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8001EFF8: lbu         $t0, 0x40($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X40);
    // 0x8001EFFC: sh          $t0, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r8;
    // 0x8001F000: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x8001F004: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x8001F008: lw          $t2, 0x11DC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X11DC);
    // 0x8001F00C: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x8001F010: lh          $t1, 0x11E0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X11E0);
    // 0x8001F014: lw          $t3, 0x44($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X44);
    // 0x8001F018: slt         $t4, $t1, $t3
    ctx->r12 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8001F01C: xori        $t4, $t4, 0x1
    ctx->r12 = ctx->r12 ^ 0X1;
    // 0x8001F020: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x8001F024: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x8001F028: beq         $t5, $zero, L_8001F044
    if (ctx->r13 == 0) {
        // 0x8001F02C: nop
    
            goto L_8001F044;
    }
    // 0x8001F02C: nop

    // 0x8001F030: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F034: lbu         $t7, 0x44($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X44);
    // 0x8001F038: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x8001F03C: beq         $t8, $zero, L_8001F058
    if (ctx->r24 == 0) {
        // 0x8001F040: nop
    
            goto L_8001F058;
    }
    // 0x8001F040: nop

L_8001F044:
    // 0x8001F044: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8001F048: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x8001F04C: jal         0x800268D0
    // 0x8001F050: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800268D0(rdram, ctx);
        goto after_1;
    // 0x8001F050: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
    // 0x8001F054: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
L_8001F058:
    // 0x8001F058: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8001F05C: bne         $t9, $zero, L_8001F1DC
    if (ctx->r25 != 0) {
        // 0x8001F060: nop
    
            goto L_8001F1DC;
    }
    // 0x8001F060: nop

    // 0x8001F064: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001F068: lbu         $t2, 0x44($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X44);
    // 0x8001F06C: andi        $t1, $t2, 0x12
    ctx->r9 = ctx->r10 & 0X12;
    // 0x8001F070: bne         $t1, $zero, L_8001F084
    if (ctx->r9 != 0) {
        // 0x8001F074: nop
    
            goto L_8001F084;
    }
    // 0x8001F074: nop

    // 0x8001F078: lw          $t3, 0x34($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X34);
    // 0x8001F07C: blez        $t3, L_8001F0C4
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8001F080: nop
    
            goto L_8001F0C4;
    }
    // 0x8001F080: nop

L_8001F084:
    // 0x8001F084: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8001F088: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8001F08C: sb          $t4, 0x45($t5)
    MEM_B(0X45, ctx->r13) = ctx->r12;
    // 0x8001F090: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F094: lw          $t7, 0x34($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X34);
    // 0x8001F098: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8001F09C: sw          $t8, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->r24;
    // 0x8001F0A0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001F0A4: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x8001F0A8: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x8001F0AC: ori         $a2, $zero, 0x8235
    ctx->r6 = 0 | 0X8235;
    // 0x8001F0B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001F0B4: jal         0x80026500
    // 0x8001F0B8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_2;
    // 0x8001F0B8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_2:
    // 0x8001F0BC: b           L_8001F1D4
    // 0x8001F0C0: nop

        goto L_8001F1D4;
    // 0x8001F0C0: nop

L_8001F0C4:
    // 0x8001F0C4: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8001F0C8: beq         $t9, $zero, L_8001F1CC
    if (ctx->r25 == 0) {
        // 0x8001F0CC: nop
    
            goto L_8001F1CC;
    }
    // 0x8001F0CC: nop

    // 0x8001F0D0: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x8001F0D4: lw          $t2, 0x11D4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X11D4);
    // 0x8001F0D8: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
L_8001F0DC:
    // 0x8001F0DC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8001F0E0: lbu         $t0, 0x44($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X44);
    // 0x8001F0E4: andi        $t3, $t0, 0x12
    ctx->r11 = ctx->r8 & 0X12;
    // 0x8001F0E8: bne         $t3, $zero, L_8001F15C
    if (ctx->r11 != 0) {
        // 0x8001F0EC: nop
    
            goto L_8001F15C;
    }
    // 0x8001F0EC: nop

    // 0x8001F0F0: andi        $t4, $t0, 0x4
    ctx->r12 = ctx->r8 & 0X4;
    // 0x8001F0F4: beq         $t4, $zero, L_8001F15C
    if (ctx->r12 == 0) {
        // 0x8001F0F8: nop
    
            goto L_8001F15C;
    }
    // 0x8001F0F8: nop

    // 0x8001F0FC: lbu         $t5, 0x45($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X45);
    // 0x8001F100: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8001F104: beq         $t5, $at, L_8001F15C
    if (ctx->r13 == ctx->r1) {
        // 0x8001F108: nop
    
            goto L_8001F15C;
    }
    // 0x8001F108: nop

    // 0x8001F10C: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x8001F110: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x8001F114: sh          $t7, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r15;
    // 0x8001F118: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8001F11C: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x8001F120: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8001F124: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8001F128: sb          $t6, 0x45($t9)
    MEM_B(0X45, ctx->r25) = ctx->r14;
    // 0x8001F12C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001F130: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x8001F134: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8001F138: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x8001F13C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001F140: jal         0x80026500
    // 0x8001F144: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_3;
    // 0x8001F144: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
    // 0x8001F148: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8001F14C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001F150: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x8001F154: jal         0x80026BE0
    // 0x8001F158: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80026BE0(rdram, ctx);
        goto after_4;
    // 0x8001F158: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_4:
L_8001F15C:
    // 0x8001F15C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8001F160: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8001F164: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x8001F168: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8001F16C: beq         $t0, $zero, L_8001F180
    if (ctx->r8 == 0) {
        // 0x8001F170: nop
    
            goto L_8001F180;
    }
    // 0x8001F170: nop

    // 0x8001F174: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x8001F178: bne         $t4, $zero, L_8001F0DC
    if (ctx->r12 != 0) {
        // 0x8001F17C: nop
    
            goto L_8001F0DC;
    }
    // 0x8001F17C: nop

L_8001F180:
    // 0x8001F180: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8001F184: bne         $t1, $zero, L_8001F1BC
    if (ctx->r9 != 0) {
        // 0x8001F188: nop
    
            goto L_8001F1BC;
    }
    // 0x8001F188: nop

    // 0x8001F18C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8001F190: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8001F194: sw          $t5, 0x34($t7)
    MEM_W(0X34, ctx->r15) = ctx->r13;
    // 0x8001F198: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001F19C: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x8001F1A0: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x8001F1A4: addiu       $a2, $zero, 0x3E9
    ctx->r6 = ADD32(0, 0X3E9);
    // 0x8001F1A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001F1AC: jal         0x80026500
    // 0x8001F1B0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_5;
    // 0x8001F1B0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_5:
    // 0x8001F1B4: b           L_8001F1C4
    // 0x8001F1B8: nop

        goto L_8001F1C4;
    // 0x8001F1B8: nop

L_8001F1BC:
    // 0x8001F1BC: jal         0x800200B8
    // 0x8001F1C0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_800200B8(rdram, ctx);
        goto after_6;
    // 0x8001F1C0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_6:
L_8001F1C4:
    // 0x8001F1C4: b           L_8001F1D4
    // 0x8001F1C8: nop

        goto L_8001F1D4;
    // 0x8001F1C8: nop

L_8001F1CC:
    // 0x8001F1CC: jal         0x800200B8
    // 0x8001F1D0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_800200B8(rdram, ctx);
        goto after_7;
    // 0x8001F1D0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_7:
L_8001F1D4:
    // 0x8001F1D4: b           L_800200A4
    // 0x8001F1D8: nop

        goto L_800200A4;
    // 0x8001F1D8: nop

L_8001F1DC:
    // 0x8001F1DC: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001F1E0: lbu         $t6, 0x44($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0X44);
    // 0x8001F1E4: ori         $t9, $t6, 0x4
    ctx->r25 = ctx->r14 | 0X4;
    // 0x8001F1E8: sb          $t9, 0x44($t8)
    MEM_B(0X44, ctx->r24) = ctx->r25;
    // 0x8001F1EC: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F1F0: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001F1F4: lbu         $t3, 0xC($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XC);
    // 0x8001F1F8: sh          $t3, 0x3A($t0)
    MEM_H(0X3A, ctx->r8) = ctx->r11;
    // 0x8001F1FC: lh          $t4, 0xB2($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XB2);
    // 0x8001F200: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8001F204: sb          $t4, 0x43($t1)
    MEM_B(0X43, ctx->r9) = ctx->r12;
    // 0x8001F208: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F20C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F210: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x8001F214: lwc1        $f8, 0x2C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8001F218: lwc1        $f16, 0x28($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X28);
    // 0x8001F21C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8001F220: nop

    // 0x8001F224: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001F228: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001F22C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8001F230: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8001F234: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8001F238: nop

    // 0x8001F23C: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x8001F240: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x8001F244: lw          $t2, 0x11DC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X11DC);
    // 0x8001F248: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x8001F24C: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8001F250: lw          $t3, 0x50($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X50);
    // 0x8001F254: addu        $t4, $t3, $t0
    ctx->r12 = ADD32(ctx->r11, ctx->r8);
    // 0x8001F258: sw          $t4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r12;
    // 0x8001F25C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001F260: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x8001F264: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x8001F268: lh          $t4, 0x3A($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X3A);
    // 0x8001F26C: lh          $t1, 0x38($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X38);
    // 0x8001F270: lbu         $t6, 0x2($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X2);
    // 0x8001F274: lw          $t5, -0x15DC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X15DC);
    // 0x8001F278: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F27C: andi        $t9, $t6, 0x1F
    ctx->r25 = ctx->r14 & 0X1F;
    // 0x8001F280: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F284: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x8001F288: addu        $t2, $t5, $t8
    ctx->r10 = ADD32(ctx->r13, ctx->r24);
    // 0x8001F28C: lbu         $t9, 0xD5($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0XD5);
    // 0x8001F290: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001F294: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x8001F298: mflo        $t7
    ctx->r15 = lo;
    // 0x8001F29C: nop

    // 0x8001F2A0: nop

    // 0x8001F2A4: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F2A8: mflo        $t5
    ctx->r13 = lo;
    // 0x8001F2AC: nop

    // 0x8001F2B0: nop

    // 0x8001F2B4: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8001F2B8: mflo        $t8
    ctx->r24 = lo;
    // 0x8001F2BC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001F2C0: nop

    // 0x8001F2C4: multu       $t3, $t8
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F2C8: mflo        $t2
    ctx->r10 = lo;
    // 0x8001F2CC: nop

    // 0x8001F2D0: nop

    // 0x8001F2D4: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8001F2D8: mflo        $t0
    ctx->r8 = lo;
    // 0x8001F2DC: bgtz        $t0, L_8001F2EC
    if (SIGNED(ctx->r8) > 0) {
        // 0x8001F2E0: nop
    
            goto L_8001F2EC;
    }
    // 0x8001F2E0: nop

    // 0x8001F2E4: b           L_8001F374
    // 0x8001F2E8: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
        goto L_8001F374;
    // 0x8001F2E8: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_8001F2EC:
    // 0x8001F2EC: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001F2F0: lw          $t1, 0xA8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA8);
    // 0x8001F2F4: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x8001F2F8: lh          $t2, 0x3A($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X3A);
    // 0x8001F2FC: lh          $t0, 0x38($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X38);
    // 0x8001F300: lbu         $t6, 0x2($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X2);
    // 0x8001F304: lw          $t4, -0x15DC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X15DC);
    // 0x8001F308: multu       $t2, $t0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F30C: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    // 0x8001F310: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F314: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8001F318: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x8001F31C: lbu         $t7, 0xD5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XD5);
    // 0x8001F320: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001F324: lh          $t3, 0x0($t5)
    ctx->r11 = MEM_H(ctx->r13, 0X0);
    // 0x8001F328: mflo        $t1
    ctx->r9 = lo;
    // 0x8001F32C: nop

    // 0x8001F330: nop

    // 0x8001F334: multu       $t1, $t7
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F338: mflo        $t4
    ctx->r12 = lo;
    // 0x8001F33C: nop

    // 0x8001F340: nop

    // 0x8001F344: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x8001F348: mflo        $t9
    ctx->r25 = lo;
    // 0x8001F34C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001F350: nop

    // 0x8001F354: multu       $t3, $t9
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F358: mflo        $t5
    ctx->r13 = lo;
    // 0x8001F35C: nop

    // 0x8001F360: nop

    // 0x8001F364: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8001F368: mflo        $t8
    ctx->r24 = lo;
    // 0x8001F36C: addiu       $t2, $t8, -0x1
    ctx->r10 = ADD32(ctx->r24, -0X1);
    // 0x8001F370: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
L_8001F374:
    // 0x8001F374: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001F378: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F37C: lbu         $t6, 0x41($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X41);
    // 0x8001F380: lbu         $t7, 0xD4($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0XD4);
    // 0x8001F384: addu        $t4, $t6, $t7
    ctx->r12 = ADD32(ctx->r14, ctx->r15);
    // 0x8001F388: addiu       $t3, $t4, -0x40
    ctx->r11 = ADD32(ctx->r12, -0X40);
    // 0x8001F38C: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x8001F390: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x8001F394: blez        $t9, L_8001F3A4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8001F398: nop
    
            goto L_8001F3A4;
    }
    // 0x8001F398: nop

    // 0x8001F39C: b           L_8001F3A8
    // 0x8001F3A0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
        goto L_8001F3A8;
    // 0x8001F3A0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_8001F3A4:
    // 0x8001F3A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001F3A8:
    // 0x8001F3A8: slti        $at, $s0, 0x7F
    ctx->r1 = SIGNED(ctx->r16) < 0X7F ? 1 : 0;
    // 0x8001F3AC: beq         $at, $zero, L_8001F3D4
    if (ctx->r1 == 0) {
        // 0x8001F3B0: nop
    
            goto L_8001F3D4;
    }
    // 0x8001F3B0: nop

    // 0x8001F3B4: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x8001F3B8: blez        $t5, L_8001F3C8
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8001F3BC: nop
    
            goto L_8001F3C8;
    }
    // 0x8001F3BC: nop

    // 0x8001F3C0: b           L_8001F3CC
    // 0x8001F3C4: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
        goto L_8001F3CC;
    // 0x8001F3C4: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
L_8001F3C8:
    // 0x8001F3C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001F3CC:
    // 0x8001F3CC: b           L_8001F3DC
    // 0x8001F3D0: sb          $s1, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r17;
        goto L_8001F3DC;
    // 0x8001F3D0: sb          $s1, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r17;
L_8001F3D4:
    // 0x8001F3D4: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x8001F3D8: sb          $t8, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r24;
L_8001F3DC:
    // 0x8001F3DC: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x8001F3E0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001F3E4: lbu         $t7, 0x3($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3);
    // 0x8001F3E8: lbu         $t0, 0x42($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X42);
    // 0x8001F3EC: andi        $t4, $t7, 0xF
    ctx->r12 = ctx->r15 & 0XF;
    // 0x8001F3F0: sll         $t3, $t4, 3
    ctx->r11 = S32(ctx->r12 << 3);
    // 0x8001F3F4: andi        $t1, $t0, 0x7F
    ctx->r9 = ctx->r8 & 0X7F;
    // 0x8001F3F8: addu        $t9, $t1, $t3
    ctx->r25 = ADD32(ctx->r9, ctx->r11);
    // 0x8001F3FC: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x8001F400: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8001F404: bgez        $t5, L_8001F414
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8001F408: nop
    
            goto L_8001F414;
    }
    // 0x8001F408: nop

    // 0x8001F40C: b           L_8001F418
    // 0x8001F410: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8001F418;
    // 0x8001F410: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001F414:
    // 0x8001F414: lw          $s0, 0x7C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X7C);
L_8001F418:
    // 0x8001F418: slti        $at, $s0, 0x80
    ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x8001F41C: bne         $at, $zero, L_8001F430
    if (ctx->r1 != 0) {
        // 0x8001F420: nop
    
            goto L_8001F430;
    }
    // 0x8001F420: nop

    // 0x8001F424: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x8001F428: b           L_8001F44C
    // 0x8001F42C: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
        goto L_8001F44C;
    // 0x8001F42C: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
L_8001F430:
    // 0x8001F430: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8001F434: bgez        $t2, L_8001F444
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8001F438: nop
    
            goto L_8001F444;
    }
    // 0x8001F438: nop

    // 0x8001F43C: b           L_8001F448
    // 0x8001F440: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8001F448;
    // 0x8001F440: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001F444:
    // 0x8001F444: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
L_8001F448:
    // 0x8001F448: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
L_8001F44C:
    // 0x8001F44C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F450: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8001F454: lbu         $t7, 0x42($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X42);
    // 0x8001F458: andi        $t4, $t7, 0x80
    ctx->r12 = ctx->r15 & 0X80;
    // 0x8001F45C: or          $t1, $t0, $t4
    ctx->r9 = ctx->r8 | ctx->r12;
    // 0x8001F460: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x8001F464: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8001F468: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F46C: lbu         $t9, 0xA7($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XA7);
    // 0x8001F470: lwc1        $f6, 0x2C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8001F474: lwc1        $f8, 0x28($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X28);
    // 0x8001F478: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8001F47C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001F480: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001F484: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8001F488: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8001F48C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8001F490: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8001F494: addiu       $a0, $t3, 0xC
    ctx->r4 = ADD32(ctx->r11, 0XC);
    // 0x8001F498: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x8001F49C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8001F4A0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8001F4A4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8001F4A8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x8001F4AC: jal         0x80026CB0
    // 0x8001F4B0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_80026CB0(rdram, ctx);
        goto after_8;
    // 0x8001F4B0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_8:
    // 0x8001F4B4: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F4B8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001F4BC: sb          $t2, 0x45($t6)
    MEM_B(0X45, ctx->r14) = ctx->r10;
    // 0x8001F4C0: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8001F4C4: lh          $t7, 0x11E0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X11E0);
    // 0x8001F4C8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8001F4CC: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x8001F4D0: sh          $t0, 0x11E0($at)
    MEM_H(0X11E0, ctx->r1) = ctx->r8;
    // 0x8001F4D4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8001F4D8: lbu         $t1, 0x44($t4)
    ctx->r9 = MEM_BU(ctx->r12, 0X44);
    // 0x8001F4DC: andi        $t3, $t1, 0x2
    ctx->r11 = ctx->r9 & 0X2;
    // 0x8001F4E0: bne         $t3, $zero, L_8001F738
    if (ctx->r11 != 0) {
        // 0x8001F4E4: nop
    
            goto L_8001F738;
    }
    // 0x8001F4E4: nop

    // 0x8001F4E8: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x8001F4EC: bne         $t9, $zero, L_8001F6D4
    if (ctx->r25 != 0) {
        // 0x8001F4F0: nop
    
            goto L_8001F6D4;
    }
    // 0x8001F4F0: nop

    // 0x8001F4F4: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F4F8: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001F4FC: lbu         $t8, 0xD($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0XD);
    // 0x8001F500: sh          $t8, 0x3A($t2)
    MEM_H(0X3A, ctx->r10) = ctx->r24;
    // 0x8001F504: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8001F508: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x8001F50C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001F510: lh          $t8, 0x3A($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X3A);
    // 0x8001F514: lh          $t2, 0x38($t5)
    ctx->r10 = MEM_H(ctx->r13, 0X38);
    // 0x8001F518: lbu         $t0, 0x2($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X2);
    // 0x8001F51C: lw          $t6, -0x15DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15DC);
    // 0x8001F520: multu       $t8, $t2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F524: andi        $t4, $t0, 0x1F
    ctx->r12 = ctx->r8 & 0X1F;
    // 0x8001F528: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F52C: sll         $t1, $t4, 1
    ctx->r9 = S32(ctx->r12 << 1);
    // 0x8001F530: addu        $t3, $t6, $t1
    ctx->r11 = ADD32(ctx->r14, ctx->r9);
    // 0x8001F534: lbu         $t4, 0xD5($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0XD5);
    // 0x8001F538: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001F53C: lh          $t9, 0x0($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X0);
    // 0x8001F540: mflo        $t7
    ctx->r15 = lo;
    // 0x8001F544: nop

    // 0x8001F548: nop

    // 0x8001F54C: multu       $t7, $t4
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F550: mflo        $t6
    ctx->r14 = lo;
    // 0x8001F554: nop

    // 0x8001F558: nop

    // 0x8001F55C: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8001F560: mflo        $t1
    ctx->r9 = lo;
    // 0x8001F564: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001F568: nop

    // 0x8001F56C: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F570: mflo        $t3
    ctx->r11 = lo;
    // 0x8001F574: nop

    // 0x8001F578: nop

    // 0x8001F57C: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x8001F580: mflo        $t5
    ctx->r13 = lo;
    // 0x8001F584: bgtz        $t5, L_8001F594
    if (SIGNED(ctx->r13) > 0) {
        // 0x8001F588: nop
    
            goto L_8001F594;
    }
    // 0x8001F588: nop

    // 0x8001F58C: b           L_8001F61C
    // 0x8001F590: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
        goto L_8001F61C;
    // 0x8001F590: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_8001F594:
    // 0x8001F594: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8001F598: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x8001F59C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x8001F5A0: lh          $t3, 0x3A($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X3A);
    // 0x8001F5A4: lh          $t5, 0x38($t1)
    ctx->r13 = MEM_H(ctx->r9, 0X38);
    // 0x8001F5A8: lbu         $t0, 0x2($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X2);
    // 0x8001F5AC: lw          $t8, -0x15DC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X15DC);
    // 0x8001F5B0: multu       $t3, $t5
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F5B4: andi        $t7, $t0, 0x1F
    ctx->r15 = ctx->r8 & 0X1F;
    // 0x8001F5B8: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F5BC: sll         $t4, $t7, 1
    ctx->r12 = S32(ctx->r15 << 1);
    // 0x8001F5C0: addu        $t6, $t8, $t4
    ctx->r14 = ADD32(ctx->r24, ctx->r12);
    // 0x8001F5C4: lbu         $t7, 0xD5($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0XD5);
    // 0x8001F5C8: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001F5CC: lh          $t9, 0x0($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X0);
    // 0x8001F5D0: mflo        $t2
    ctx->r10 = lo;
    // 0x8001F5D4: nop

    // 0x8001F5D8: nop

    // 0x8001F5DC: multu       $t2, $t7
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F5E0: mflo        $t8
    ctx->r24 = lo;
    // 0x8001F5E4: nop

    // 0x8001F5E8: nop

    // 0x8001F5EC: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8001F5F0: mflo        $t4
    ctx->r12 = lo;
    // 0x8001F5F4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001F5F8: nop

    // 0x8001F5FC: multu       $t9, $t4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F600: mflo        $t6
    ctx->r14 = lo;
    // 0x8001F604: nop

    // 0x8001F608: nop

    // 0x8001F60C: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8001F610: mflo        $t1
    ctx->r9 = lo;
    // 0x8001F614: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8001F618: sw          $t3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r11;
L_8001F61C:
    // 0x8001F61C: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F620: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001F624: lw          $t0, 0x4($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X4);
    // 0x8001F628: lwc1        $f6, 0x28($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X28);
    // 0x8001F62C: lwc1        $f10, 0x2C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8001F630: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x8001F634: nop

    // 0x8001F638: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8001F63C: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001F640: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8001F644: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8001F648: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8001F64C: nop

    // 0x8001F650: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x8001F654: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8001F658: lw          $t9, 0x11DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X11DC);
    // 0x8001F65C: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8001F660: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8001F664: lw          $t4, 0x50($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X50);
    // 0x8001F668: addu        $t1, $t4, $t6
    ctx->r9 = ADD32(ctx->r12, ctx->r14);
    // 0x8001F66C: sw          $t1, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r9;
    // 0x8001F670: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8001F674: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x8001F678: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8001F67C: jal         0x80026BE0
    // 0x8001F680: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80026BE0(rdram, ctx);
        goto after_9;
    // 0x8001F680: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_9:
    // 0x8001F684: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8001F688: sh          $t5, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r13;
    // 0x8001F68C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001F690: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
    // 0x8001F694: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001F698: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x8001F69C: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x8001F6A0: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8001F6A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001F6A8: jal         0x80026500
    // 0x8001F6AC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_10;
    // 0x8001F6AC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_10:
    // 0x8001F6B0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001F6B4: lbu         $t7, 0x44($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X44);
    // 0x8001F6B8: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x8001F6BC: beq         $t8, $zero, L_8001F6CC
    if (ctx->r24 == 0) {
        // 0x8001F6C0: nop
    
            goto L_8001F6CC;
    }
    // 0x8001F6C0: nop

    // 0x8001F6C4: jal         0x80020128
    // 0x8001F6C8: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_80020128(rdram, ctx);
        goto after_11;
    // 0x8001F6C8: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_11:
L_8001F6CC:
    // 0x8001F6CC: b           L_8001F738
    // 0x8001F6D0: nop

        goto L_8001F738;
    // 0x8001F6D0: nop

L_8001F6D4:
    // 0x8001F6D4: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x8001F6D8: sh          $t9, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r25;
    // 0x8001F6DC: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8001F6E0: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
    // 0x8001F6E4: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F6E8: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8001F6EC: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x8001F6F0: lwc1        $f8, 0x2C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8001F6F4: lwc1        $f16, 0x28($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X28);
    // 0x8001F6F8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8001F6FC: nop

    // 0x8001F700: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001F704: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001F708: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8001F70C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8001F710: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8001F714: nop

    // 0x8001F718: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
    // 0x8001F71C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001F720: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x8001F724: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x8001F728: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8001F72C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001F730: jal         0x80026500
    // 0x8001F734: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_12;
    // 0x8001F734: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_12:
L_8001F738:
    // 0x8001F738: b           L_80020040
    // 0x8001F73C: nop

        goto L_80020040;
    // 0x8001F73C: nop

L_8001F740:
    // 0x8001F740: lw          $t2, 0xB8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB8);
    // 0x8001F744: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x8001F748: lhu         $t7, 0x0($t2)
    ctx->r15 = MEM_HU(ctx->r10, 0X0);
    // 0x8001F74C: bne         $t7, $at, L_8001F768
    if (ctx->r15 != ctx->r1) {
        // 0x8001F750: nop
    
            goto L_8001F768;
    }
    // 0x8001F750: nop

    // 0x8001F754: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001F758: lbu         $t9, 0x44($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X44);
    // 0x8001F75C: andi        $t4, $t9, 0x2
    ctx->r12 = ctx->r25 & 0X2;
    // 0x8001F760: beq         $t4, $zero, L_8001F890
    if (ctx->r12 == 0) {
        // 0x8001F764: nop
    
            goto L_8001F890;
    }
    // 0x8001F764: nop

L_8001F768:
    // 0x8001F768: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F76C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001F770: lbu         $s0, 0x45($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0X45);
    // 0x8001F774: beq         $s0, $at, L_8001F79C
    if (ctx->r16 == ctx->r1) {
        // 0x8001F778: nop
    
            goto L_8001F79C;
    }
    // 0x8001F778: nop

    // 0x8001F77C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8001F780: beq         $s0, $at, L_8001F858
    if (ctx->r16 == ctx->r1) {
        // 0x8001F784: nop
    
            goto L_8001F858;
    }
    // 0x8001F784: nop

    // 0x8001F788: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8001F78C: beq         $s0, $at, L_8001F858
    if (ctx->r16 == ctx->r1) {
        // 0x8001F790: nop
    
            goto L_8001F858;
    }
    // 0x8001F790: nop

    // 0x8001F794: b           L_8001F868
    // 0x8001F798: nop

        goto L_8001F868;
    // 0x8001F798: nop

L_8001F79C:
    // 0x8001F79C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001F7A0: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x8001F7A4: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8001F7A8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8001F7AC: jal         0x800201A4
    // 0x8001F7B0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_800201A4(rdram, ctx);
        goto after_13;
    // 0x8001F7B0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_13:
    // 0x8001F7B4: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F7B8: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8001F7BC: lw          $t3, 0x8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8);
    // 0x8001F7C0: lwc1        $f10, 0x28($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X28);
    // 0x8001F7C4: lwc1        $f18, 0x2C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8001F7C8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8001F7CC: nop

    // 0x8001F7D0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001F7D4: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8001F7D8: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8001F7DC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8001F7E0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8001F7E4: nop

    // 0x8001F7E8: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    // 0x8001F7EC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8001F7F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001F7F4: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8001F7F8: jal         0x80026BE0
    // 0x8001F7FC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80026BE0(rdram, ctx);
        goto after_14;
    // 0x8001F7FC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_14:
    // 0x8001F800: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8001F804: beq         $t7, $zero, L_8001F848
    if (ctx->r15 == 0) {
        // 0x8001F808: nop
    
            goto L_8001F848;
    }
    // 0x8001F808: nop

    // 0x8001F80C: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x8001F810: sh          $t8, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r24;
    // 0x8001F814: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8001F818: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    // 0x8001F81C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001F820: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x8001F824: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x8001F828: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8001F82C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001F830: jal         0x80026500
    // 0x8001F834: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_15;
    // 0x8001F834: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_15:
    // 0x8001F838: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F83C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8001F840: b           L_8001F850
    // 0x8001F844: sb          $t4, 0x45($t6)
    MEM_B(0X45, ctx->r14) = ctx->r12;
        goto L_8001F850;
    // 0x8001F844: sb          $t4, 0x45($t6)
    MEM_B(0X45, ctx->r14) = ctx->r12;
L_8001F848:
    // 0x8001F848: jal         0x800200B8
    // 0x8001F84C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_800200B8(rdram, ctx);
        goto after_16;
    // 0x8001F84C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_16:
L_8001F850:
    // 0x8001F850: b           L_8001F870
    // 0x8001F854: nop

        goto L_8001F870;
    // 0x8001F854: nop

L_8001F858:
    // 0x8001F858: jal         0x800200B8
    // 0x8001F85C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_800200B8(rdram, ctx);
        goto after_17;
    // 0x8001F85C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_17:
    // 0x8001F860: b           L_8001F870
    // 0x8001F864: nop

        goto L_8001F870;
    // 0x8001F864: nop

L_8001F868:
    // 0x8001F868: b           L_8001F870
    // 0x8001F86C: nop

        goto L_8001F870;
    // 0x8001F86C: nop

L_8001F870:
    // 0x8001F870: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x8001F874: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001F878: lhu         $t3, 0x0($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X0);
    // 0x8001F87C: bne         $t3, $at, L_8001F890
    if (ctx->r11 != ctx->r1) {
        // 0x8001F880: nop
    
            goto L_8001F890;
    }
    // 0x8001F880: nop

    // 0x8001F884: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x8001F888: addiu       $t5, $zero, 0x1000
    ctx->r13 = ADD32(0, 0X1000);
    // 0x8001F88C: sh          $t5, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r13;
L_8001F890:
    // 0x8001F890: b           L_80020040
    // 0x8001F894: nop

        goto L_80020040;
    // 0x8001F894: nop

L_8001F898:
    // 0x8001F898: lw          $t2, 0xB8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB8);
    // 0x8001F89C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001F8A0: lw          $t7, 0x8($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X8);
    // 0x8001F8A4: sb          $t7, 0x41($t8)
    MEM_B(0X41, ctx->r24) = ctx->r15;
    // 0x8001F8A8: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8001F8AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001F8B0: lbu         $t4, 0x45($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X45);
    // 0x8001F8B4: bne         $t4, $at, L_8001F934
    if (ctx->r12 != ctx->r1) {
        // 0x8001F8B8: nop
    
            goto L_8001F934;
    }
    // 0x8001F8B8: nop

    // 0x8001F8BC: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F8C0: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x8001F8C4: lbu         $t1, 0x41($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X41);
    // 0x8001F8C8: lbu         $t5, 0xD4($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0XD4);
    // 0x8001F8CC: addu        $t0, $t1, $t5
    ctx->r8 = ADD32(ctx->r9, ctx->r13);
    // 0x8001F8D0: addiu       $t2, $t0, -0x40
    ctx->r10 = ADD32(ctx->r8, -0X40);
    // 0x8001F8D4: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x8001F8D8: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x8001F8DC: blez        $t7, L_8001F8EC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8001F8E0: nop
    
            goto L_8001F8EC;
    }
    // 0x8001F8E0: nop

    // 0x8001F8E4: b           L_8001F8F0
    // 0x8001F8E8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
        goto L_8001F8F0;
    // 0x8001F8E8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_8001F8EC:
    // 0x8001F8EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001F8F0:
    // 0x8001F8F0: slti        $at, $s0, 0x7F
    ctx->r1 = SIGNED(ctx->r16) < 0X7F ? 1 : 0;
    // 0x8001F8F4: beq         $at, $zero, L_8001F91C
    if (ctx->r1 == 0) {
        // 0x8001F8F8: nop
    
            goto L_8001F91C;
    }
    // 0x8001F8F8: nop

    // 0x8001F8FC: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8001F900: blez        $t8, L_8001F910
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8001F904: nop
    
            goto L_8001F910;
    }
    // 0x8001F904: nop

    // 0x8001F908: b           L_8001F914
    // 0x8001F90C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
        goto L_8001F914;
    // 0x8001F90C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_8001F910:
    // 0x8001F910: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001F914:
    // 0x8001F914: b           L_8001F924
    // 0x8001F918: sb          $s1, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r17;
        goto L_8001F924;
    // 0x8001F918: sb          $s1, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r17;
L_8001F91C:
    // 0x8001F91C: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x8001F920: sb          $t9, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r25;
L_8001F924:
    // 0x8001F924: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8001F928: lbu         $a1, 0xA7($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XA7);
    // 0x8001F92C: jal         0x80026DE0
    // 0x8001F930: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80026DE0(rdram, ctx);
        goto after_18;
    // 0x8001F930: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_18:
L_8001F934:
    // 0x8001F934: b           L_80020040
    // 0x8001F938: nop

        goto L_80020040;
    // 0x8001F938: nop

L_8001F93C:
    // 0x8001F93C: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    // 0x8001F940: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F944: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8001F948: swc1        $f8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f8.u32l;
    // 0x8001F94C: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8001F950: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001F954: lbu         $t1, 0x45($t3)
    ctx->r9 = MEM_BU(ctx->r11, 0X45);
    // 0x8001F958: bne         $t1, $at, L_8001F99C
    if (ctx->r9 != ctx->r1) {
        // 0x8001F95C: nop
    
            goto L_8001F99C;
    }
    // 0x8001F95C: nop

    // 0x8001F960: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8001F964: lwc1        $f10, 0x2C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8001F968: lwc1        $f16, 0x28($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X28);
    // 0x8001F96C: addiu       $a0, $t5, 0xC
    ctx->r4 = ADD32(ctx->r13, 0XC);
    // 0x8001F970: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8001F974: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8001F978: jal         0x80026E90
    // 0x8001F97C: nop

    func_80026E90(rdram, ctx);
        goto after_19;
    // 0x8001F97C: nop

    after_19:
    // 0x8001F980: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001F984: lbu         $t2, 0x44($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X44);
    // 0x8001F988: andi        $t7, $t2, 0x20
    ctx->r15 = ctx->r10 & 0X20;
    // 0x8001F98C: beq         $t7, $zero, L_8001F99C
    if (ctx->r15 == 0) {
        // 0x8001F990: nop
    
            goto L_8001F99C;
    }
    // 0x8001F990: nop

    // 0x8001F994: jal         0x80020128
    // 0x8001F998: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_80020128(rdram, ctx);
        goto after_20;
    // 0x8001F998: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_20:
L_8001F99C:
    // 0x8001F99C: b           L_80020040
    // 0x8001F9A0: nop

        goto L_80020040;
    // 0x8001F9A0: nop

L_8001F9A4:
    // 0x8001F9A4: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x8001F9A8: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8001F9AC: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8001F9B0: sb          $t9, 0x42($t4)
    MEM_B(0X42, ctx->r12) = ctx->r25;
    // 0x8001F9B4: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001F9B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001F9BC: lbu         $t3, 0x45($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X45);
    // 0x8001F9C0: bne         $t3, $at, L_8001FA60
    if (ctx->r11 != ctx->r1) {
        // 0x8001F9C4: nop
    
            goto L_8001FA60;
    }
    // 0x8001F9C4: nop

    // 0x8001F9C8: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x8001F9CC: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8001F9D0: lbu         $t7, 0x3($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X3);
    // 0x8001F9D4: lbu         $t5, 0x42($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X42);
    // 0x8001F9D8: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8001F9DC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001F9E0: andi        $t0, $t5, 0x7F
    ctx->r8 = ctx->r13 & 0X7F;
    // 0x8001F9E4: addu        $t4, $t0, $t9
    ctx->r12 = ADD32(ctx->r8, ctx->r25);
    // 0x8001F9E8: sw          $t4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r12;
    // 0x8001F9EC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8001F9F0: bgez        $t6, L_8001FA00
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001F9F4: nop
    
            goto L_8001FA00;
    }
    // 0x8001F9F4: nop

    // 0x8001F9F8: b           L_8001FA04
    // 0x8001F9FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8001FA04;
    // 0x8001F9FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001FA00:
    // 0x8001FA00: lw          $s0, 0x7C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X7C);
L_8001FA04:
    // 0x8001FA04: slti        $at, $s0, 0x80
    ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x8001FA08: bne         $at, $zero, L_8001FA1C
    if (ctx->r1 != 0) {
        // 0x8001FA0C: nop
    
            goto L_8001FA1C;
    }
    // 0x8001FA0C: nop

    // 0x8001FA10: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x8001FA14: b           L_8001FA38
    // 0x8001FA18: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
        goto L_8001FA38;
    // 0x8001FA18: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
L_8001FA1C:
    // 0x8001FA1C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8001FA20: bgez        $t1, L_8001FA30
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8001FA24: nop
    
            goto L_8001FA30;
    }
    // 0x8001FA24: nop

    // 0x8001FA28: b           L_8001FA34
    // 0x8001FA2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8001FA34;
    // 0x8001FA2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001FA30:
    // 0x8001FA30: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
L_8001FA34:
    // 0x8001FA34: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
L_8001FA38:
    // 0x8001FA38: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001FA3C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8001FA40: lbu         $t7, 0x42($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X42);
    // 0x8001FA44: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8001FA48: or          $t0, $t5, $t8
    ctx->r8 = ctx->r13 | ctx->r24;
    // 0x8001FA4C: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x8001FA50: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8001FA54: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x8001FA58: jal         0x80026F40
    // 0x8001FA5C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80026F40(rdram, ctx);
        goto after_21;
    // 0x8001FA5C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_21:
L_8001FA60:
    // 0x8001FA60: b           L_80020040
    // 0x8001FA64: nop

        goto L_80020040;
    // 0x8001FA64: nop

L_8001FA68:
    // 0x8001FA68: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x8001FA6C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001FA70: lw          $t4, 0x8($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X8);
    // 0x8001FA74: sb          $t4, 0x43($t6)
    MEM_B(0X43, ctx->r14) = ctx->r12;
    // 0x8001FA78: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x8001FA7C: lw          $t2, 0x11F4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X11F4);
    // 0x8001FA80: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8001FA84: lw          $t7, 0x3C($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X3C);
    // 0x8001FA88: lbu         $t1, 0x43($t3)
    ctx->r9 = MEM_BU(ctx->r11, 0X43);
    // 0x8001FA8C: slt         $at, $t1, $t7
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8001FA90: bne         $at, $zero, L_8001FAA0
    if (ctx->r1 != 0) {
        // 0x8001FA94: nop
    
            goto L_8001FAA0;
    }
    // 0x8001FA94: nop

    // 0x8001FA98: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8001FA9C: sb          $zero, 0x43($t5)
    MEM_B(0X43, ctx->r13) = 0;
L_8001FAA0:
    // 0x8001FAA0: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001FAA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001FAA8: lbu         $t0, 0x45($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X45);
    // 0x8001FAAC: bne         $t0, $at, L_8001FAC0
    if (ctx->r8 != ctx->r1) {
        // 0x8001FAB0: nop
    
            goto L_8001FAC0;
    }
    // 0x8001FAB0: nop

    // 0x8001FAB4: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8001FAB8: lbu         $t4, 0x43($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X43);
    // 0x8001FABC: sh          $t4, 0x24($t9)
    MEM_H(0X24, ctx->r25) = ctx->r12;
L_8001FAC0:
    // 0x8001FAC0: b           L_80020040
    // 0x8001FAC4: nop

        goto L_80020040;
    // 0x8001FAC4: nop

L_8001FAC8:
    // 0x8001FAC8: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x8001FACC: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001FAD0: lw          $t3, 0x8($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X8);
    // 0x8001FAD4: sh          $t3, 0x38($t2)
    MEM_H(0X38, ctx->r10) = ctx->r11;
    // 0x8001FAD8: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8001FADC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001FAE0: lbu         $t7, 0x45($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X45);
    // 0x8001FAE4: bne         $t7, $at, L_8001FC5C
    if (ctx->r15 != ctx->r1) {
        // 0x8001FAE8: nop
    
            goto L_8001FC5C;
    }
    // 0x8001FAE8: nop

    // 0x8001FAEC: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001FAF0: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x8001FAF4: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x8001FAF8: lh          $t1, 0x3A($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X3A);
    // 0x8001FAFC: lh          $t7, 0x38($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X38);
    // 0x8001FB00: lbu         $t0, 0x2($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X2);
    // 0x8001FB04: lw          $t5, -0x15DC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X15DC);
    // 0x8001FB08: multu       $t1, $t7
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FB0C: andi        $t4, $t0, 0x1F
    ctx->r12 = ctx->r8 & 0X1F;
    // 0x8001FB10: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x8001FB14: sll         $t9, $t4, 1
    ctx->r25 = S32(ctx->r12 << 1);
    // 0x8001FB18: addu        $t6, $t5, $t9
    ctx->r14 = ADD32(ctx->r13, ctx->r25);
    // 0x8001FB1C: lbu         $t4, 0xD5($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0XD5);
    // 0x8001FB20: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001FB24: lh          $t3, 0x0($t6)
    ctx->r11 = MEM_H(ctx->r14, 0X0);
    // 0x8001FB28: mflo        $t8
    ctx->r24 = lo;
    // 0x8001FB2C: nop

    // 0x8001FB30: nop

    // 0x8001FB34: multu       $t8, $t4
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FB38: mflo        $t5
    ctx->r13 = lo;
    // 0x8001FB3C: nop

    // 0x8001FB40: nop

    // 0x8001FB44: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8001FB48: mflo        $t9
    ctx->r25 = lo;
    // 0x8001FB4C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001FB50: nop

    // 0x8001FB54: multu       $t3, $t9
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FB58: mflo        $t6
    ctx->r14 = lo;
    // 0x8001FB5C: nop

    // 0x8001FB60: nop

    // 0x8001FB64: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8001FB68: mflo        $t2
    ctx->r10 = lo;
    // 0x8001FB6C: bgtz        $t2, L_8001FB7C
    if (SIGNED(ctx->r10) > 0) {
        // 0x8001FB70: nop
    
            goto L_8001FB7C;
    }
    // 0x8001FB70: nop

    // 0x8001FB74: b           L_8001FC04
    // 0x8001FB78: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
        goto L_8001FC04;
    // 0x8001FB78: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_8001FB7C:
    // 0x8001FB7C: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8001FB80: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x8001FB84: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x8001FB88: lh          $t6, 0x3A($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X3A);
    // 0x8001FB8C: lh          $t2, 0x38($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X38);
    // 0x8001FB90: lbu         $t0, 0x2($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X2);
    // 0x8001FB94: lw          $t1, -0x15DC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X15DC);
    // 0x8001FB98: multu       $t6, $t2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FB9C: andi        $t8, $t0, 0x1F
    ctx->r24 = ctx->r8 & 0X1F;
    // 0x8001FBA0: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x8001FBA4: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x8001FBA8: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x8001FBAC: lbu         $t8, 0xD5($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XD5);
    // 0x8001FBB0: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001FBB4: lh          $t3, 0x0($t5)
    ctx->r11 = MEM_H(ctx->r13, 0X0);
    // 0x8001FBB8: mflo        $t7
    ctx->r15 = lo;
    // 0x8001FBBC: nop

    // 0x8001FBC0: nop

    // 0x8001FBC4: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FBC8: mflo        $t1
    ctx->r9 = lo;
    // 0x8001FBCC: nop

    // 0x8001FBD0: nop

    // 0x8001FBD4: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8001FBD8: mflo        $t4
    ctx->r12 = lo;
    // 0x8001FBDC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001FBE0: nop

    // 0x8001FBE4: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FBE8: mflo        $t5
    ctx->r13 = lo;
    // 0x8001FBEC: nop

    // 0x8001FBF0: nop

    // 0x8001FBF4: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8001FBF8: mflo        $t9
    ctx->r25 = lo;
    // 0x8001FBFC: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8001FC00: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
L_8001FC04:
    // 0x8001FC04: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8001FC08: lw          $t7, 0x11DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X11DC);
    // 0x8001FC0C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001FC10: lw          $t8, 0x50($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X50);
    // 0x8001FC14: lw          $t0, 0x3C($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X3C);
    // 0x8001FC18: subu        $t1, $t0, $t8
    ctx->r9 = SUB32(ctx->r8, ctx->r24);
    // 0x8001FC1C: slti        $at, $t1, 0x3E8
    ctx->r1 = SIGNED(ctx->r9) < 0X3E8 ? 1 : 0;
    // 0x8001FC20: beq         $at, $zero, L_8001FC30
    if (ctx->r1 == 0) {
        // 0x8001FC24: nop
    
            goto L_8001FC30;
    }
    // 0x8001FC24: nop

    // 0x8001FC28: b           L_8001FC48
    // 0x8001FC2C: addiu       $s0, $zero, 0x3E8
    ctx->r16 = ADD32(0, 0X3E8);
        goto L_8001FC48;
    // 0x8001FC2C: addiu       $s0, $zero, 0x3E8
    ctx->r16 = ADD32(0, 0X3E8);
L_8001FC30:
    // 0x8001FC30: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x8001FC34: lw          $t5, 0x11DC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X11DC);
    // 0x8001FC38: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8001FC3C: lw          $t9, 0x50($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X50);
    // 0x8001FC40: lw          $t4, 0x3C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3C);
    // 0x8001FC44: subu        $s0, $t4, $t9
    ctx->r16 = SUB32(ctx->r12, ctx->r25);
L_8001FC48:
    // 0x8001FC48: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8001FC4C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x8001FC50: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8001FC54: jal         0x80026BE0
    // 0x8001FC58: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80026BE0(rdram, ctx);
        goto after_22;
    // 0x8001FC58: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_22:
L_8001FC5C:
    // 0x8001FC5C: b           L_80020040
    // 0x8001FC60: nop

        goto L_80020040;
    // 0x8001FC60: nop

L_8001FC64:
    // 0x8001FC64: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8001FC68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001FC6C: lbu         $t2, 0x45($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X45);
    // 0x8001FC70: bne         $t2, $at, L_8001FDDC
    if (ctx->r10 != ctx->r1) {
        // 0x8001FC74: nop
    
            goto L_8001FDDC;
    }
    // 0x8001FC74: nop

    // 0x8001FC78: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x8001FC7C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001FC80: lw          $t0, 0x8($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X8);
    // 0x8001FC84: lwc1        $f8, 0x28($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X28);
    // 0x8001FC88: lwc1        $f16, 0x2C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8001FC8C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8001FC90: nop

    // 0x8001FC94: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001FC98: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001FC9C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8001FCA0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8001FCA4: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8001FCA8: nop

    // 0x8001FCAC: sw          $t3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r11;
    // 0x8001FCB0: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001FCB4: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    // 0x8001FCB8: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x8001FCBC: lh          $t1, 0x3A($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X3A);
    // 0x8001FCC0: lh          $t3, 0x38($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X38);
    // 0x8001FCC4: lbu         $t9, 0x2($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X2);
    // 0x8001FCC8: lw          $t5, -0x15DC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X15DC);
    // 0x8001FCCC: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FCD0: andi        $t6, $t9, 0x1F
    ctx->r14 = ctx->r25 & 0X1F;
    // 0x8001FCD4: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x8001FCD8: sll         $t2, $t6, 1
    ctx->r10 = S32(ctx->r14 << 1);
    // 0x8001FCDC: addu        $t7, $t5, $t2
    ctx->r15 = ADD32(ctx->r13, ctx->r10);
    // 0x8001FCE0: lbu         $t6, 0xD5($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XD5);
    // 0x8001FCE4: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001FCE8: lh          $t0, 0x0($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X0);
    // 0x8001FCEC: mflo        $t4
    ctx->r12 = lo;
    // 0x8001FCF0: nop

    // 0x8001FCF4: nop

    // 0x8001FCF8: multu       $t4, $t6
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FCFC: mflo        $t5
    ctx->r13 = lo;
    // 0x8001FD00: nop

    // 0x8001FD04: nop

    // 0x8001FD08: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8001FD0C: mflo        $t2
    ctx->r10 = lo;
    // 0x8001FD10: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001FD14: nop

    // 0x8001FD18: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FD1C: mflo        $t7
    ctx->r15 = lo;
    // 0x8001FD20: nop

    // 0x8001FD24: nop

    // 0x8001FD28: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8001FD2C: mflo        $t8
    ctx->r24 = lo;
    // 0x8001FD30: bgtz        $t8, L_8001FD40
    if (SIGNED(ctx->r24) > 0) {
        // 0x8001FD34: nop
    
            goto L_8001FD40;
    }
    // 0x8001FD34: nop

    // 0x8001FD38: b           L_8001FDC8
    // 0x8001FD3C: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
        goto L_8001FDC8;
    // 0x8001FD3C: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_8001FD40:
    // 0x8001FD40: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001FD44: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x8001FD48: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x8001FD4C: lh          $t7, 0x3A($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X3A);
    // 0x8001FD50: lh          $t8, 0x38($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X38);
    // 0x8001FD54: lbu         $t9, 0x2($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X2);
    // 0x8001FD58: lw          $t1, -0x15DC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X15DC);
    // 0x8001FD5C: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FD60: andi        $t4, $t9, 0x1F
    ctx->r12 = ctx->r25 & 0X1F;
    // 0x8001FD64: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x8001FD68: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x8001FD6C: addu        $t5, $t1, $t6
    ctx->r13 = ADD32(ctx->r9, ctx->r14);
    // 0x8001FD70: lbu         $t4, 0xD5($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0XD5);
    // 0x8001FD74: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001FD78: lh          $t0, 0x0($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X0);
    // 0x8001FD7C: mflo        $t3
    ctx->r11 = lo;
    // 0x8001FD80: nop

    // 0x8001FD84: nop

    // 0x8001FD88: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FD8C: mflo        $t1
    ctx->r9 = lo;
    // 0x8001FD90: nop

    // 0x8001FD94: nop

    // 0x8001FD98: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8001FD9C: mflo        $t6
    ctx->r14 = lo;
    // 0x8001FDA0: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001FDA4: nop

    // 0x8001FDA8: multu       $t0, $t6
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FDAC: mflo        $t5
    ctx->r13 = lo;
    // 0x8001FDB0: nop

    // 0x8001FDB4: nop

    // 0x8001FDB8: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8001FDBC: mflo        $t2
    ctx->r10 = lo;
    // 0x8001FDC0: addiu       $t7, $t2, -0x1
    ctx->r15 = ADD32(ctx->r10, -0X1);
    // 0x8001FDC4: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
L_8001FDC8:
    // 0x8001FDC8: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8001FDCC: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x8001FDD0: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8001FDD4: jal         0x80026BE0
    // 0x8001FDD8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80026BE0(rdram, ctx);
        goto after_23;
    // 0x8001FDD8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_23:
L_8001FDDC:
    // 0x8001FDDC: b           L_80020040
    // 0x8001FDE0: nop

        goto L_80020040;
    // 0x8001FDE0: nop

L_8001FDE4:
    // 0x8001FDE4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001FDE8: lbu         $t9, 0x44($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X44);
    // 0x8001FDEC: andi        $t3, $t9, 0x2
    ctx->r11 = ctx->r25 & 0X2;
    // 0x8001FDF0: bne         $t3, $zero, L_8001FFD0
    if (ctx->r11 != 0) {
        // 0x8001FDF4: nop
    
            goto L_8001FFD0;
    }
    // 0x8001FDF4: nop

    // 0x8001FDF8: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x8001FDFC: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001FE00: lbu         $t1, 0xD($t4)
    ctx->r9 = MEM_BU(ctx->r12, 0XD);
    // 0x8001FE04: sh          $t1, 0x3A($t0)
    MEM_H(0X3A, ctx->r8) = ctx->r9;
    // 0x8001FE08: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8001FE0C: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    // 0x8001FE10: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001FE14: lh          $t1, 0x3A($t4)
    ctx->r9 = MEM_H(ctx->r12, 0X3A);
    // 0x8001FE18: lh          $t0, 0x38($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X38);
    // 0x8001FE1C: lbu         $t2, 0x2($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0X2);
    // 0x8001FE20: lw          $t6, -0x15DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15DC);
    // 0x8001FE24: multu       $t1, $t0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FE28: andi        $t7, $t2, 0x1F
    ctx->r15 = ctx->r10 & 0X1F;
    // 0x8001FE2C: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x8001FE30: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8001FE34: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001FE38: lbu         $t7, 0xD5($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0XD5);
    // 0x8001FE3C: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001FE40: lh          $t3, 0x0($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X0);
    // 0x8001FE44: mflo        $t5
    ctx->r13 = lo;
    // 0x8001FE48: nop

    // 0x8001FE4C: nop

    // 0x8001FE50: multu       $t5, $t7
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FE54: mflo        $t6
    ctx->r14 = lo;
    // 0x8001FE58: nop

    // 0x8001FE5C: nop

    // 0x8001FE60: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8001FE64: mflo        $t8
    ctx->r24 = lo;
    // 0x8001FE68: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001FE6C: nop

    // 0x8001FE70: multu       $t3, $t8
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FE74: mflo        $t9
    ctx->r25 = lo;
    // 0x8001FE78: nop

    // 0x8001FE7C: nop

    // 0x8001FE80: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x8001FE84: mflo        $t4
    ctx->r12 = lo;
    // 0x8001FE88: bgtz        $t4, L_8001FE98
    if (SIGNED(ctx->r12) > 0) {
        // 0x8001FE8C: nop
    
            goto L_8001FE98;
    }
    // 0x8001FE8C: nop

    // 0x8001FE90: b           L_8001FF20
    // 0x8001FE94: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
        goto L_8001FF20;
    // 0x8001FE94: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_8001FE98:
    // 0x8001FE98: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8001FE9C: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x8001FEA0: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x8001FEA4: lh          $t9, 0x3A($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X3A);
    // 0x8001FEA8: lh          $t4, 0x38($t8)
    ctx->r12 = MEM_H(ctx->r24, 0X38);
    // 0x8001FEAC: lbu         $t2, 0x2($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X2);
    // 0x8001FEB0: lw          $t1, -0x15DC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X15DC);
    // 0x8001FEB4: multu       $t9, $t4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FEB8: andi        $t5, $t2, 0x1F
    ctx->r13 = ctx->r10 & 0X1F;
    // 0x8001FEBC: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x8001FEC0: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x8001FEC4: addu        $t6, $t1, $t7
    ctx->r14 = ADD32(ctx->r9, ctx->r15);
    // 0x8001FEC8: lbu         $t5, 0xD5($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0XD5);
    // 0x8001FECC: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x8001FED0: lh          $t3, 0x0($t6)
    ctx->r11 = MEM_H(ctx->r14, 0X0);
    // 0x8001FED4: mflo        $t0
    ctx->r8 = lo;
    // 0x8001FED8: nop

    // 0x8001FEDC: nop

    // 0x8001FEE0: multu       $t0, $t5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FEE4: mflo        $t1
    ctx->r9 = lo;
    // 0x8001FEE8: nop

    // 0x8001FEEC: nop

    // 0x8001FEF0: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8001FEF4: mflo        $t7
    ctx->r15 = lo;
    // 0x8001FEF8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8001FEFC: nop

    // 0x8001FF00: multu       $t3, $t7
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001FF04: mflo        $t6
    ctx->r14 = lo;
    // 0x8001FF08: nop

    // 0x8001FF0C: nop

    // 0x8001FF10: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8001FF14: mflo        $t8
    ctx->r24 = lo;
    // 0x8001FF18: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8001FF1C: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
L_8001FF20:
    // 0x8001FF20: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x8001FF24: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001FF28: lw          $t2, 0x4($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X4);
    // 0x8001FF2C: lwc1        $f10, 0x28($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X28);
    // 0x8001FF30: lwc1        $f18, 0x2C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x8001FF34: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8001FF38: nop

    // 0x8001FF3C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001FF40: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8001FF44: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8001FF48: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8001FF4C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8001FF50: nop

    // 0x8001FF54: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x8001FF58: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x8001FF5C: lw          $t3, 0x11DC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X11DC);
    // 0x8001FF60: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8001FF64: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8001FF68: lw          $t7, 0x50($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X50);
    // 0x8001FF6C: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8001FF70: sw          $t8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r24;
    // 0x8001FF74: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8001FF78: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x8001FF7C: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8001FF80: jal         0x80026BE0
    // 0x8001FF84: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80026BE0(rdram, ctx);
        goto after_24;
    // 0x8001FF84: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_24:
    // 0x8001FF88: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8001FF8C: sh          $t4, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r12;
    // 0x8001FF90: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8001FF94: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    // 0x8001FF98: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001FF9C: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x8001FFA0: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x8001FFA4: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8001FFA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001FFAC: jal         0x80026500
    // 0x8001FFB0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_25;
    // 0x8001FFB0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_25:
    // 0x8001FFB4: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8001FFB8: lbu         $t5, 0x44($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X44);
    // 0x8001FFBC: andi        $t1, $t5, 0x20
    ctx->r9 = ctx->r13 & 0X20;
    // 0x8001FFC0: beq         $t1, $zero, L_8001FFD0
    if (ctx->r9 == 0) {
        // 0x8001FFC4: nop
    
            goto L_8001FFD0;
    }
    // 0x8001FFC4: nop

    // 0x8001FFC8: jal         0x80020128
    // 0x8001FFCC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_80020128(rdram, ctx);
        goto after_26;
    // 0x8001FFCC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_26:
L_8001FFD0:
    // 0x8001FFD0: b           L_80020040
    // 0x8001FFD4: nop

        goto L_80020040;
    // 0x8001FFD4: nop

L_8001FFD8:
    // 0x8001FFD8: jal         0x800200B8
    // 0x8001FFDC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_800200B8(rdram, ctx);
        goto after_27;
    // 0x8001FFDC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_27:
    // 0x8001FFE0: b           L_80020040
    // 0x8001FFE4: nop

        goto L_80020040;
    // 0x8001FFE4: nop

L_8001FFE8:
    // 0x8001FFE8: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8001FFEC: lbu         $t7, 0x44($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X44);
    // 0x8001FFF0: andi        $t6, $t7, 0x10
    ctx->r14 = ctx->r15 & 0X10;
    // 0x8001FFF4: beq         $t6, $zero, L_80020030
    if (ctx->r14 == 0) {
        // 0x8001FFF8: nop
    
            goto L_80020030;
    }
    // 0x8001FFF8: nop

    // 0x8001FFFC: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x80020000: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x80020004: lbu         $t4, 0x42($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X42);
    // 0x80020008: lh          $a1, 0x38($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X38);
    // 0x8002000C: lbu         $a2, 0x41($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X41);
    // 0x80020010: lw          $a3, 0x2C($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X2C);
    // 0x80020014: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x80020018: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8002001C: lbu         $t2, 0x43($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X43);
    // 0x80020020: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80020024: lw          $t0, 0x30($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X30);
    // 0x80020028: jal         0x80020790
    // 0x8002002C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_80020790(rdram, ctx);
        goto after_28;
    // 0x8002002C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_28:
L_80020030:
    // 0x80020030: b           L_80020040
    // 0x80020034: nop

        goto L_80020040;
    // 0x80020034: nop

L_80020038:
    // 0x80020038: b           L_80020040
    // 0x8002003C: nop

        goto L_80020040;
    // 0x8002003C: nop

L_80020040:
    // 0x80020040: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x80020044: lhu         $t1, 0x0($t5)
    ctx->r9 = MEM_HU(ctx->r13, 0X0);
    // 0x80020048: andi        $t3, $t1, 0x2D1
    ctx->r11 = ctx->r9 & 0X2D1;
    // 0x8002004C: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    // 0x80020050: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80020054: beq         $t7, $zero, L_80020078
    if (ctx->r15 == 0) {
        // 0x80020058: sw          $t7, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r15;
            goto L_80020078;
    }
    // 0x80020058: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x8002005C: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x80020060: bne         $t6, $zero, L_80020078
    if (ctx->r14 != 0) {
        // 0x80020064: nop
    
            goto L_80020078;
    }
    // 0x80020064: nop

    // 0x80020068: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8002006C: lbu         $t4, 0x44($t8)
    ctx->r12 = MEM_BU(ctx->r24, 0X44);
    // 0x80020070: andi        $t2, $t4, 0x1
    ctx->r10 = ctx->r12 & 0X1;
    // 0x80020074: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
L_80020078:
    // 0x80020078: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8002007C: bne         $t9, $zero, L_8002009C
    if (ctx->r25 != 0) {
        // 0x80020080: nop
    
            goto L_8002009C;
    }
    // 0x80020080: nop

    // 0x80020084: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80020088: beq         $t0, $zero, L_8002009C
    if (ctx->r8 == 0) {
        // 0x8002008C: nop
    
            goto L_8002009C;
    }
    // 0x8002008C: nop

    // 0x80020090: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80020094: beq         $t5, $zero, L_8001EE5C
    if (ctx->r13 == 0) {
        // 0x80020098: nop
    
            goto L_8001EE5C;
    }
    // 0x80020098: nop

L_8002009C:
    // 0x8002009C: b           L_800200A4
    // 0x800200A0: nop

        goto L_800200A4;
    // 0x800200A0: nop

L_800200A4:
    // 0x800200A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800200A8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800200AC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800200B0: jr          $ra
    // 0x800200B4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x800200B4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_800200B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800200B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800200BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800200C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800200C4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800200C8: lbu         $t7, 0x44($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X44);
    // 0x800200CC: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x800200D0: beq         $t8, $zero, L_800200F0
    if (ctx->r24 == 0) {
        // 0x800200D4: nop
    
            goto L_800200F0;
    }
    // 0x800200D4: nop

    // 0x800200D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800200DC: jal         0x80026FF0
    // 0x800200E0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80026FF0(rdram, ctx);
        goto after_0;
    // 0x800200E0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x800200E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800200E8: jal         0x80027090
    // 0x800200EC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80027090(rdram, ctx);
        goto after_1;
    // 0x800200EC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
L_800200F0:
    // 0x800200F0: jal         0x800205D0
    // 0x800200F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800205D0(rdram, ctx);
        goto after_2;
    // 0x800200F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800200F8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800200FC: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x80020100: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80020104: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    // 0x80020108: jal         0x800201A4
    // 0x8002010C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_800201A4(rdram, ctx);
        goto after_3;
    // 0x8002010C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
    // 0x80020110: b           L_80020118
    // 0x80020114: nop

        goto L_80020118;
    // 0x80020114: nop

L_80020118:
    // 0x80020118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002011C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80020120: jr          $ra
    return;
;}
RECOMP_FUNC void func_80020128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020128: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002012C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020130: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80020134: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80020138: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8002013C: jal         0x80027170
    // 0x80020140: lb          $a0, 0x15($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X15);
    func_80027170(rdram, ctx);
        goto after_0;
    // 0x80020140: lb          $a0, 0x15($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X15);
    after_0:
    // 0x80020144: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80020148: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8002014C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80020150: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80020154: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80020158: sh          $t9, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r25;
    // 0x8002015C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80020160: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80020164: addiu       $t1, $sp, 0x1C
    ctx->r9 = ADD32(ctx->r29, 0X1C);
    // 0x80020168: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8002016C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80020170: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80020174: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x80020178: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8002017C: ori         $a2, $zero, 0x8235
    ctx->r6 = 0 | 0X8235;
    // 0x80020180: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80020184: jal         0x80026500
    // 0x80020188: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_1;
    // 0x80020188: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x8002018C: b           L_80020194
    // 0x80020190: nop

        goto L_80020194;
    // 0x80020190: nop

L_80020194:
    // 0x80020194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020198: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8002019C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800201A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800201A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800201A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800201AC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800201B0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800201B4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800201B8: jal         0x8002FEC0
    // 0x800201BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800201BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800201C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800201C4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800201C8: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x800201CC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x800201D0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800201D4: beq         $t8, $zero, L_80020278
    if (ctx->r24 == 0) {
        // 0x800201D8: nop
    
            goto L_80020278;
    }
    // 0x800201D8: nop

L_800201DC:
    // 0x800201DC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800201E0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800201E4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800201E8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800201EC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800201F0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800201F4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800201F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800201FC: addiu       $t4, $t3, 0xC
    ctx->r12 = ADD32(ctx->r11, 0XC);
    // 0x80020200: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80020204: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80020208: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8002020C: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x80020210: bne         $t6, $t7, L_80020264
    if (ctx->r14 != ctx->r15) {
        // 0x80020214: nop
    
            goto L_80020264;
    }
    // 0x80020214: nop

    // 0x80020218: lhu         $t8, 0x0($t5)
    ctx->r24 = MEM_HU(ctx->r13, 0X0);
    // 0x8002021C: lhu         $t9, 0x3A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3A);
    // 0x80020220: and         $t0, $t8, $t9
    ctx->r8 = ctx->r24 & ctx->r25;
    // 0x80020224: beq         $t0, $zero, L_80020264
    if (ctx->r8 == 0) {
        // 0x80020228: nop
    
            goto L_80020264;
    }
    // 0x80020228: nop

    // 0x8002022C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80020230: beq         $t1, $zero, L_80020250
    if (ctx->r9 == 0) {
        // 0x80020234: nop
    
            goto L_80020250;
    }
    // 0x80020234: nop

    // 0x80020238: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8002023C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80020240: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x80020244: lw          $t6, 0x8($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X8);
    // 0x80020248: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x8002024C: sw          $t7, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r15;
L_80020250:
    // 0x80020250: jal         0x80020E74
    // 0x80020254: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_80020E74(rdram, ctx);
        goto after_1;
    // 0x80020254: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x80020258: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002025C: jal         0x80020E40
    // 0x80020260: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80020E40(rdram, ctx);
        goto after_2;
    // 0x80020260: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_2:
L_80020264:
    // 0x80020264: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80020268: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8002026C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80020270: bne         $t8, $zero, L_800201DC
    if (ctx->r24 != 0) {
        // 0x80020274: nop
    
            goto L_800201DC;
    }
    // 0x80020274: nop

L_80020278:
    // 0x80020278: jal         0x8002FEC0
    // 0x8002027C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x8002027C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80020280: b           L_80020288
    // 0x80020284: nop

        goto L_80020288;
    // 0x80020284: nop

L_80020288:
    // 0x80020288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002028C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80020290: jr          $ra
    return;
;}
RECOMP_FUNC void func_80020298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020298: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002029C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800202A0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800202A4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800202A8: jal         0x8002FEC0
    // 0x800202AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800202AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800202B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800202B4: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x800202B8: lw          $t6, 0x11D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X11D0);
    // 0x800202BC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800202C0: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x800202C4: lw          $t7, 0x11D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X11D8);
    // 0x800202C8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800202CC: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x800202D0: lw          $t8, 0x11D4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X11D4);
    // 0x800202D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800202D8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800202DC: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x800202E0: beq         $t9, $zero, L_80020304
    if (ctx->r25 == 0) {
        // 0x800202E4: nop
    
            goto L_80020304;
    }
    // 0x800202E4: nop

L_800202E8:
    // 0x800202E8: lhu         $t0, 0x2A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2A);
    // 0x800202EC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800202F0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800202F4: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
    // 0x800202F8: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800202FC: bne         $t3, $zero, L_800202E8
    if (ctx->r11 != 0) {
        // 0x80020300: sw          $t3, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r11;
            goto L_800202E8;
    }
    // 0x80020300: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
L_80020304:
    // 0x80020304: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80020308: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x8002030C: beq         $t4, $zero, L_80020330
    if (ctx->r12 == 0) {
        // 0x80020310: nop
    
            goto L_80020330;
    }
    // 0x80020310: nop

L_80020314:
    // 0x80020314: lhu         $t5, 0x28($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X28);
    // 0x80020318: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002031C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80020320: sh          $t6, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r14;
    // 0x80020324: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80020328: bne         $t8, $zero, L_80020314
    if (ctx->r24 != 0) {
        // 0x8002032C: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_80020314;
    }
    // 0x8002032C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_80020330:
    // 0x80020330: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80020334: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x80020338: beq         $t9, $zero, L_8002035C
    if (ctx->r25 == 0) {
        // 0x8002033C: nop
    
            goto L_8002035C;
    }
    // 0x8002033C: nop

L_80020340:
    // 0x80020340: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x80020344: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80020348: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8002034C: sh          $t1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r9;
    // 0x80020350: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80020354: bne         $t3, $zero, L_80020340
    if (ctx->r11 != 0) {
        // 0x80020358: sw          $t3, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r11;
            goto L_80020340;
    }
    // 0x80020358: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
L_8002035C:
    // 0x8002035C: lhu         $t4, 0x28($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X28);
    // 0x80020360: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80020364: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x80020368: lhu         $t6, 0x2A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2A);
    // 0x8002036C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80020370: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x80020374: jal         0x8002FEC0
    // 0x80020378: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80020378: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x8002037C: b           L_8002038C
    // 0x80020380: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
        goto L_8002038C;
    // 0x80020380: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x80020384: b           L_8002038C
    // 0x80020388: nop

        goto L_8002038C;
    // 0x80020388: nop

L_8002038C:
    // 0x8002038C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020390: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80020394: jr          $ra
    return;
;}
RECOMP_FUNC void func_8002039C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002039C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800203A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800203A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800203A8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800203AC: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x800203B0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x800203B4: jal         0x8002FEC0
    // 0x800203B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800203B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800203BC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800203C0: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x800203C4: lw          $t8, 0x11D8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X11D8);
    // 0x800203C8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800203CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800203D0: beq         $t9, $zero, L_800205A8
    if (ctx->r25 == 0) {
        // 0x800203D4: nop
    
            goto L_800205A8;
    }
    // 0x800203D4: nop

    // 0x800203D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800203DC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800203E0: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x800203E4: sw          $t1, 0x11D8($at)
    MEM_W(0X11D8, ctx->r1) = ctx->r9;
    // 0x800203E8: jal         0x80020E74
    // 0x800203EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80020E74(rdram, ctx);
        goto after_1;
    // 0x800203EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800203F0: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x800203F4: lw          $t2, 0x11D0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X11D0);
    // 0x800203F8: beq         $t2, $zero, L_80020438
    if (ctx->r10 == 0) {
        // 0x800203FC: nop
    
            goto L_80020438;
    }
    // 0x800203FC: nop

    // 0x80020400: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x80020404: lw          $t3, 0x11D0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X11D0);
    // 0x80020408: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8002040C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80020410: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80020414: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80020418: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8002041C: lw          $t7, 0x11D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X11D0);
    // 0x80020420: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80020424: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80020428: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8002042C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80020430: b           L_80020464
    // 0x80020434: sw          $t8, 0x11D0($at)
    MEM_W(0X11D0, ctx->r1) = ctx->r24;
        goto L_80020464;
    // 0x80020434: sw          $t8, 0x11D0($at)
    MEM_W(0X11D0, ctx->r1) = ctx->r24;
L_80020438:
    // 0x80020438: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8002043C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80020440: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80020444: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80020448: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x8002044C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80020450: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80020454: sw          $t2, 0x11D0($at)
    MEM_W(0X11D0, ctx->r1) = ctx->r10;
    // 0x80020458: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8002045C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80020460: sw          $t3, 0x11D4($at)
    MEM_W(0X11D4, ctx->r1) = ctx->r11;
L_80020464:
    // 0x80020464: jal         0x8002FEC0
    // 0x80020468: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x80020468: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8002046C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80020470: jal         0x800E9070
    // 0x80020474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800E9070(rdram, ctx);
        goto after_3;
    // 0x80020474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80020478: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8002047C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80020480: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80020484: sltiu       $t6, $t6, 0x1
    ctx->r14 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x80020488: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8002048C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80020490: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80020494: sw          $t7, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r15;
    // 0x80020498: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8002049C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800204A0: addiu       $t1, $t9, 0x40
    ctx->r9 = ADD32(ctx->r25, 0X40);
    // 0x800204A4: sb          $t1, 0x40($t0)
    MEM_B(0X40, ctx->r8) = ctx->r9;
    // 0x800204A8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800204AC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800204B0: sb          $t2, 0x45($t3)
    MEM_B(0X45, ctx->r11) = ctx->r10;
    // 0x800204B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800204B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800204BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800204C0: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800204C4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800204C8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800204CC: sw          $t5, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->r13;
    // 0x800204D0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800204D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800204D8: lbu         $t8, 0x3($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3);
    // 0x800204DC: andi        $t9, $t8, 0xF0
    ctx->r25 = ctx->r24 & 0XF0;
    // 0x800204E0: sb          $t9, 0x44($t1)
    MEM_B(0X44, ctx->r9) = ctx->r25;
    // 0x800204E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800204E8: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x800204EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800204F0: lbu         $t3, 0x44($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X44);
    // 0x800204F4: andi        $t4, $t3, 0x20
    ctx->r12 = ctx->r11 & 0X20;
    // 0x800204F8: beq         $t4, $zero, L_80020534
    if (ctx->r12 == 0) {
        // 0x800204FC: nop
    
            goto L_80020534;
    }
    // 0x800204FC: nop

    // 0x80020500: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80020504: lbu         $a0, 0x4($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X4);
    // 0x80020508: addu        $at, $a0, $zero
    ctx->r1 = ADD32(ctx->r4, 0);
    // 0x8002050C: sll         $a0, $at, 2
    ctx->r4 = S32(ctx->r1 << 2);
    // 0x80020510: subu        $a0, $a0, $at
    ctx->r4 = SUB32(ctx->r4, ctx->r1);
    // 0x80020514: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80020518: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x8002051C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80020520: jal         0x80027170
    // 0x80020524: addiu       $a0, $a0, -0x1770
    ctx->r4 = ADD32(ctx->r4, -0X1770);
    func_80027170(rdram, ctx);
        goto after_4;
    // 0x80020524: addiu       $a0, $a0, -0x1770
    ctx->r4 = ADD32(ctx->r4, -0X1770);
    after_4:
    // 0x80020528: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8002052C: b           L_80020568
    // 0x80020530: swc1        $f0, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f0.u32l;
        goto L_80020568;
    // 0x80020530: swc1        $f0, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f0.u32l;
L_80020534:
    // 0x80020534: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80020538: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x8002053C: lb          $t1, 0x5($t7)
    ctx->r9 = MEM_B(ctx->r15, 0X5);
    // 0x80020540: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80020544: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80020548: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8002054C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80020550: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80020554: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x80020558: jal         0x80027170
    // 0x8002055C: addiu       $a0, $a0, -0x1770
    ctx->r4 = ADD32(ctx->r4, -0X1770);
    func_80027170(rdram, ctx);
        goto after_5;
    // 0x8002055C: addiu       $a0, $a0, -0x1770
    ctx->r4 = ADD32(ctx->r4, -0X1770);
    after_5:
    // 0x80020560: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80020564: swc1        $f0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f0.u32l;
L_80020568:
    // 0x80020568: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8002056C: beq         $t2, $zero, L_80020584
    if (ctx->r10 == 0) {
        // 0x80020570: nop
    
            goto L_80020584;
    }
    // 0x80020570: nop

    // 0x80020574: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80020578: lbu         $t4, 0x44($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X44);
    // 0x8002057C: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x80020580: sb          $t5, 0x44($t3)
    MEM_B(0X44, ctx->r11) = ctx->r13;
L_80020584:
    // 0x80020584: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80020588: sb          $zero, 0x42($t6)
    MEM_B(0X42, ctx->r14) = 0;
    // 0x8002058C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80020590: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x80020594: sb          $t8, 0x41($t7)
    MEM_B(0X41, ctx->r15) = ctx->r24;
    // 0x80020598: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8002059C: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x800205A0: b           L_800205B0
    // 0x800205A4: sh          $t9, 0x38($t1)
    MEM_H(0X38, ctx->r9) = ctx->r25;
        goto L_800205B0;
    // 0x800205A4: sh          $t9, 0x38($t1)
    MEM_H(0X38, ctx->r9) = ctx->r25;
L_800205A8:
    // 0x800205A8: jal         0x8002FEC0
    // 0x800205AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    osSetIntMask_recomp(rdram, ctx);
        goto after_6;
    // 0x800205AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_6:
L_800205B0:
    // 0x800205B0: b           L_800205C0
    // 0x800205B4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
        goto L_800205C0;
    // 0x800205B4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800205B8: b           L_800205C0
    // 0x800205BC: nop

        goto L_800205C0;
    // 0x800205BC: nop

L_800205C0:
    // 0x800205C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800205C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800205C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800205D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_probe_record_free(rdram, ctx);
    // 0x800205D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800205D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800205D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800205DC: jal         0x8002FEC0
    // 0x800205E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800205E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800205E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800205E8: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x800205EC: lw          $t6, 0x11D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X11D0);
    // 0x800205F0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800205F4: bne         $t6, $t7, L_8002060C
    if (ctx->r14 != ctx->r15) {
        // 0x800205F8: nop
    
            goto L_8002060C;
    }
    // 0x800205F8: nop

    // 0x800205FC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80020600: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80020604: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80020608: sw          $t9, 0x11D0($at)
    MEM_W(0X11D0, ctx->r1) = ctx->r25;
L_8002060C:
    // 0x8002060C: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x80020610: lw          $t0, 0x11D4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X11D4);
    // 0x80020614: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80020618: bne         $t0, $t1, L_80020630
    if (ctx->r8 != ctx->r9) {
        // 0x8002061C: nop
    
            goto L_80020630;
    }
    // 0x8002061C: nop

    // 0x80020620: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80020624: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80020628: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8002062C: sw          $t3, 0x11D4($at)
    MEM_W(0X11D4, ctx->r1) = ctx->r11;
L_80020630:
    // 0x80020630: jal         0x80020E74
    // 0x80020634: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80020E74(rdram, ctx);
        goto after_1;
    // 0x80020634: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80020638: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x8002063C: lw          $t4, 0x11D8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X11D8);
    // 0x80020640: beq         $t4, $zero, L_80020680
    if (ctx->r12 == 0) {
        // 0x80020644: nop
    
            goto L_80020680;
    }
    // 0x80020644: nop

    // 0x80020648: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x8002064C: lw          $t5, 0x11D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X11D8);
    // 0x80020650: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80020654: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80020658: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8002065C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80020660: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80020664: lw          $t9, 0x11D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X11D8);
    // 0x80020668: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8002066C: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80020670: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80020674: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80020678: b           L_800206A0
    // 0x8002067C: sw          $t0, 0x11D8($at)
    MEM_W(0X11D8, ctx->r1) = ctx->r8;
        goto L_800206A0;
    // 0x8002067C: sw          $t0, 0x11D8($at)
    MEM_W(0X11D8, ctx->r1) = ctx->r8;
L_80020680:
    // 0x80020680: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80020684: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80020688: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8002068C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80020690: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x80020694: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80020698: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8002069C: sw          $t4, 0x11D8($at)
    MEM_W(0X11D8, ctx->r1) = ctx->r12;
L_800206A0:
    // 0x800206A0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800206A4: lbu         $t6, 0x44($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X44);
    // 0x800206A8: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x800206AC: beq         $t7, $zero, L_800206C8
    if (ctx->r15 == 0) {
        // 0x800206B0: nop
    
            goto L_800206C8;
    }
    // 0x800206B0: nop

    // 0x800206B4: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x800206B8: lh          $t8, 0x11E0($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X11E0);
    // 0x800206BC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800206C0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800206C4: sh          $t9, 0x11E0($at)
    MEM_H(0X11E0, ctx->r1) = ctx->r25;
L_800206C8:
    // 0x800206C8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800206CC: sb          $zero, 0x45($t0)
    MEM_B(0X45, ctx->r8) = 0;
    // 0x800206D0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800206D4: lw          $t3, 0x30($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X30);
    // 0x800206D8: beq         $t3, $zero, L_80020708
    if (ctx->r11 == 0) {
        // 0x800206DC: nop
    
            goto L_80020708;
    }
    // 0x800206DC: nop

    // 0x800206E0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800206E4: lw          $t4, 0x30($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X30);
    // 0x800206E8: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x800206EC: bne         $t5, $t2, L_80020700
    if (ctx->r13 != ctx->r10) {
        // 0x800206F0: nop
    
            goto L_80020700;
    }
    // 0x800206F0: nop

    // 0x800206F4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800206F8: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x800206FC: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
L_80020700:
    // 0x80020700: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80020704: sw          $zero, 0x30($t8)
    MEM_W(0X30, ctx->r24) = 0;
L_80020708:
    // 0x80020708: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8002070C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80020710: jal         0x800E90A4
    // 0x80020714: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_800E90A4(rdram, ctx);
        goto after_2;
    // 0x80020714: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_2:
    // 0x80020718: jal         0x8002FEC0
    // 0x8002071C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x8002071C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80020720: b           L_80020728
    // 0x80020724: nop

        goto L_80020728;
    // 0x80020724: nop

L_80020728:
    // 0x80020728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002072C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80020730: jr          $ra
    return;
;}
RECOMP_FUNC void func_80020738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020738: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8002073C: beq         $a0, $zero, L_80020750
    if (ctx->r4 == 0) {
        // 0x80020740: nop
    
            goto L_80020750;
    }
    // 0x80020740: nop

    // 0x80020744: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80020748: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8002074C: sb          $t7, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r15;
L_80020750:
    // 0x80020750: jr          $ra
    // 0x80020754: nop

    return;
    // 0x80020754: nop

;}
RECOMP_FUNC void func_80020758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020758: jr          $ra
    // 0x8002075C: nop

    return;
    // 0x8002075C: nop

;}
RECOMP_FUNC void func_80020760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020760: beq         $a0, $zero, L_80020778
    if (ctx->r4 == 0) {
        // 0x80020764: nop
    
            goto L_80020778;
    }
    // 0x80020764: nop

    // 0x80020768: jr          $ra
    // 0x8002076C: lbu         $v0, 0x45($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X45);
    return;
    // 0x8002076C: lbu         $v0, 0x45($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X45);
    // 0x80020770: b           L_80020780
    // 0x80020774: nop

    func_80020780(rdram, ctx);
    return;
    // 0x80020774: nop

L_80020778:
    // 0x80020778: jr          $ra
    // 0x8002077C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002077C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80020780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020780: jr          $ra
    // 0x80020784: nop

    return;
    // 0x80020784: nop

;}
RECOMP_FUNC void func_80020788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020788: jr          $ra
    // 0x8002078C: nop

    return;
    // 0x8002078C: nop

;}
RECOMP_FUNC void func_80020790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020790: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80020794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020798: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8002079C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x800207A0: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x800207A4: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x800207A8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x800207AC: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
    // 0x800207B0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x800207B4: lh          $t6, 0x62($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X62);
    // 0x800207B8: beq         $t6, $zero, L_80020A28
    if (ctx->r14 == 0) {
        // 0x800207BC: nop
    
            goto L_80020A28;
    }
    // 0x800207BC: nop

L_800207C0:
    // 0x800207C0: lh          $a1, 0x62($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X62);
    // 0x800207C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800207C8: jal         0x800E9320
    // 0x800207CC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_800E9320(rdram, ctx);
        goto after_0;
    // 0x800207CC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_0:
    // 0x800207D0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x800207D4: jal         0x8002039C
    // 0x800207D8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_8002039C(rdram, ctx);
        goto after_1;
    // 0x800207D8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_1:
    // 0x800207DC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x800207E0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800207E4: beq         $t7, $zero, L_80020960
    if (ctx->r15 == 0) {
        // 0x800207E8: nop
    
            goto L_80020960;
    }
    // 0x800207E8: nop

    // 0x800207EC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x800207F0: lw          $t9, 0x11DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X11DC);
    // 0x800207F4: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800207F8: sw          $t8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r24;
    // 0x800207FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80020800: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x80020804: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80020808: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8002080C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80020810: lbu         $t2, 0x6B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X6B);
    // 0x80020814: lbu         $t4, 0x41($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X41);
    // 0x80020818: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8002081C: addiu       $t6, $t5, -0x40
    ctx->r14 = ADD32(ctx->r13, -0X40);
    // 0x80020820: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80020824: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80020828: slti        $at, $t7, 0x80
    ctx->r1 = SIGNED(ctx->r15) < 0X80 ? 1 : 0;
    // 0x8002082C: bne         $at, $zero, L_80020840
    if (ctx->r1 != 0) {
        // 0x80020830: nop
    
            goto L_80020840;
    }
    // 0x80020830: nop

    // 0x80020834: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x80020838: b           L_80020850
    // 0x8002083C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
        goto L_80020850;
    // 0x8002083C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
L_80020840:
    // 0x80020840: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80020844: bgez        $t9, L_80020850
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80020848: nop
    
            goto L_80020850;
    }
    // 0x80020848: nop

    // 0x8002084C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_80020850:
    // 0x80020850: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80020854: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80020858: sb          $t0, 0x41($t1)
    MEM_B(0X41, ctx->r9) = ctx->r8;
    // 0x8002085C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80020860: lhu         $t3, 0x66($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X66);
    // 0x80020864: lh          $t4, 0x38($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X38);
    // 0x80020868: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002086C: mflo        $t5
    ctx->r13 = lo;
    // 0x80020870: srl         $t6, $t5, 15
    ctx->r14 = S32(U32(ctx->r13) >> 15);
    // 0x80020874: sh          $t6, 0x38($t2)
    MEM_H(0X38, ctx->r10) = ctx->r14;
    // 0x80020878: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8002087C: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80020880: lwc1        $f4, 0x2C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80020884: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80020888: swc1        $f8, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f8.u32l;
    // 0x8002088C: lbu         $t8, 0x73($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X73);
    // 0x80020890: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80020894: sb          $t8, 0x42($t9)
    MEM_B(0X42, ctx->r25) = ctx->r24;
    // 0x80020898: lbu         $t0, 0x77($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X77);
    // 0x8002089C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800208A0: sb          $t0, 0x43($t1)
    MEM_B(0X43, ctx->r9) = ctx->r8;
    // 0x800208A4: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x800208A8: lbu         $t4, 0x11($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X11);
    // 0x800208AC: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x800208B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800208B4: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x800208B8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800208BC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800208C0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800208C4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800208C8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800208CC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800208D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800208D4: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x800208D8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800208DC: lbu         $t2, 0x44($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X44);
    // 0x800208E0: andi        $t7, $t2, 0x10
    ctx->r15 = ctx->r10 & 0X10;
    // 0x800208E4: beq         $t7, $zero, L_80020938
    if (ctx->r15 == 0) {
        // 0x800208E8: nop
    
            goto L_80020938;
    }
    // 0x800208E8: nop

    // 0x800208EC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800208F0: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x800208F4: lbu         $t9, 0x44($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X44);
    // 0x800208F8: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x800208FC: sb          $t0, 0x44($t8)
    MEM_B(0X44, ctx->r24) = ctx->r8;
    // 0x80020900: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80020904: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x80020908: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8002090C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80020910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80020914: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80020918: jal         0x80026500
    // 0x8002091C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_80026500(rdram, ctx);
        goto after_2;
    // 0x8002091C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_2:
    // 0x80020920: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80020924: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80020928: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x8002092C: lh          $t4, 0x62($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X62);
    // 0x80020930: b           L_80020958
    // 0x80020934: sh          $t4, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r12;
        goto L_80020958;
    // 0x80020934: sh          $t4, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r12;
L_80020938:
    // 0x80020938: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8002093C: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x80020940: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80020944: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80020948: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002094C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80020950: jal         0x80026500
    // 0x80020954: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_80026500(rdram, ctx);
        goto after_3;
    // 0x80020954: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_3:
L_80020958:
    // 0x80020958: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8002095C: sw          $t5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r13;
L_80020960:
    // 0x80020960: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80020964: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80020968: addu        $t7, $t6, $t2
    ctx->r15 = ADD32(ctx->r14, ctx->r10);
    // 0x8002096C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x80020970: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80020974: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x80020978: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x8002097C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80020980: lbu         $t3, 0x2($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X2);
    // 0x80020984: lbu         $t1, 0x0($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X0);
    // 0x80020988: andi        $t4, $t3, 0xC0
    ctx->r12 = ctx->r11 & 0XC0;
    // 0x8002098C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80020990: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x80020994: sh          $t6, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r14;
    // 0x80020998: lh          $t2, 0x62($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X62);
    // 0x8002099C: beq         $t2, $zero, L_800209B0
    if (ctx->r10 == 0) {
        // 0x800209A0: nop
    
            goto L_800209B0;
    }
    // 0x800209A0: nop

    // 0x800209A4: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800209A8: bne         $t7, $zero, L_800207C0
    if (ctx->r15 != 0) {
        // 0x800209AC: nop
    
            goto L_800207C0;
    }
    // 0x800209AC: nop

L_800209B0:
    // 0x800209B0: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x800209B4: beq         $t9, $zero, L_80020A28
    if (ctx->r25 == 0) {
        // 0x800209B8: nop
    
            goto L_80020A28;
    }
    // 0x800209B8: nop

    // 0x800209BC: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800209C0: lbu         $t8, 0x44($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X44);
    // 0x800209C4: ori         $t3, $t8, 0x1
    ctx->r11 = ctx->r24 | 0X1;
    // 0x800209C8: sb          $t3, 0x44($t0)
    MEM_B(0X44, ctx->r8) = ctx->r11;
    // 0x800209CC: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x800209D0: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x800209D4: sw          $t4, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r12;
    // 0x800209D8: lh          $t5, 0x4E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4E);
    // 0x800209DC: beq         $t5, $zero, L_80020A28
    if (ctx->r13 == 0) {
        // 0x800209E0: nop
    
            goto L_80020A28;
    }
    // 0x800209E0: nop

    // 0x800209E4: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800209E8: lbu         $t2, 0x44($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X44);
    // 0x800209EC: ori         $t7, $t2, 0x10
    ctx->r15 = ctx->r10 | 0X10;
    // 0x800209F0: sb          $t7, 0x44($t6)
    MEM_B(0X44, ctx->r14) = ctx->r15;
    // 0x800209F4: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x800209F8: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
    // 0x800209FC: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80020A00: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80020A04: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x80020A08: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80020A0C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80020A10: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x80020A14: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80020A18: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80020A1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80020A20: jal         0x80026500
    // 0x80020A24: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_4;
    // 0x80020A24: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_4:
L_80020A28:
    // 0x80020A28: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80020A2C: beq         $t0, $zero, L_80020A40
    if (ctx->r8 == 0) {
        // 0x80020A30: nop
    
            goto L_80020A40;
    }
    // 0x80020A30: nop

    // 0x80020A34: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80020A38: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x80020A3C: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
L_80020A40:
    // 0x80020A40: b           L_80020A50
    // 0x80020A44: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
        goto L_80020A50;
    // 0x80020A44: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80020A48: b           L_80020A50
    // 0x80020A4C: nop

        goto L_80020A50;
    // 0x80020A4C: nop

L_80020A50:
    // 0x80020A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020A54: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80020A58: jr          $ra
    return;
;}
RECOMP_FUNC void func_80020A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020A60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80020A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020A68: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80020A6C: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x80020A70: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80020A74: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80020A78: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80020A7C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80020A80: beq         $t8, $zero, L_80020AB8
    if (ctx->r24 == 0) {
        // 0x80020A84: nop
    
            goto L_80020AB8;
    }
    // 0x80020A84: nop

    // 0x80020A88: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80020A8C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80020A90: lbu         $t0, 0x44($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X44);
    // 0x80020A94: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80020A98: sb          $t1, 0x44($t9)
    MEM_B(0X44, ctx->r25) = ctx->r9;
    // 0x80020A9C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80020AA0: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x80020AA4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80020AA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80020AAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80020AB0: jal         0x80026500
    // 0x80020AB4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_0;
    // 0x80020AB4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
L_80020AB8:
    // 0x80020AB8: b           L_80020AC0
    // 0x80020ABC: nop

        goto L_80020AC0;
    // 0x80020ABC: nop

L_80020AC0:
    // 0x80020AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020AC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80020AC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80020AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020AD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80020AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020AD8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80020ADC: jal         0x8002FEC0
    // 0x80020AE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80020AE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80020AE4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80020AE8: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80020AEC: lw          $t6, 0x11D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X11D0);
    // 0x80020AF0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80020AF4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80020AF8: beq         $t7, $zero, L_80020B70
    if (ctx->r15 == 0) {
        // 0x80020AFC: nop
    
            goto L_80020B70;
    }
    // 0x80020AFC: nop

L_80020B00:
    // 0x80020B00: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x80020B04: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x80020B08: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80020B0C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80020B10: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80020B14: lbu         $t2, 0x33($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X33);
    // 0x80020B18: lbu         $t1, 0x44($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X44);
    // 0x80020B1C: and         $t3, $t1, $t2
    ctx->r11 = ctx->r9 & ctx->r10;
    // 0x80020B20: bne         $t3, $t2, L_80020B58
    if (ctx->r11 != ctx->r10) {
        // 0x80020B24: nop
    
            goto L_80020B58;
    }
    // 0x80020B24: nop

    // 0x80020B28: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80020B2C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80020B30: lbu         $t5, 0x44($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X44);
    // 0x80020B34: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80020B38: sb          $t6, 0x44($t4)
    MEM_B(0X44, ctx->r12) = ctx->r14;
    // 0x80020B3C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80020B40: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x80020B44: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80020B48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80020B4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80020B50: jal         0x80026500
    // 0x80020B54: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_1;
    // 0x80020B54: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
L_80020B58:
    // 0x80020B58: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80020B5C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80020B60: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80020B64: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80020B68: bne         $t9, $zero, L_80020B00
    if (ctx->r25 != 0) {
        // 0x80020B6C: nop
    
            goto L_80020B00;
    }
    // 0x80020B6C: nop

L_80020B70:
    // 0x80020B70: jal         0x8002FEC0
    // 0x80020B74: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x80020B74: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80020B78: b           L_80020B80
    // 0x80020B7C: nop

        goto L_80020B80;
    // 0x80020B7C: nop

L_80020B80:
    // 0x80020B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020B84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80020B88: jr          $ra
    return;
;}
RECOMP_FUNC void func_80020B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80020B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020B98: jal         0x80020AD0
    // 0x80020B9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80020AD0(rdram, ctx);
        goto after_0;
    // 0x80020B9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80020BA0: b           L_80020BA8
    // 0x80020BA4: nop

        goto L_80020BA8;
    // 0x80020BA4: nop

L_80020BA8:
    // 0x80020BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80020BB0: jr          $ra
    // 0x80020BB4: nop

    return;
    // 0x80020BB4: nop

;}
RECOMP_FUNC void func_80020BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80020BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020BC0: jal         0x80020AD0
    // 0x80020BC4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_80020AD0(rdram, ctx);
        goto after_0;
    // 0x80020BC4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_0:
    // 0x80020BC8: b           L_80020BD0
    // 0x80020BCC: nop

        goto L_80020BD0;
    // 0x80020BCC: nop

L_80020BD0:
    // 0x80020BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020BD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80020BD8: jr          $ra
    // 0x80020BDC: nop

    return;
    // 0x80020BDC: nop

;}
RECOMP_FUNC void func_80020BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80020BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020BE8: jal         0x80020AD0
    // 0x80020BEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80020AD0(rdram, ctx);
        goto after_0;
    // 0x80020BEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80020BF0: b           L_80020BF8
    // 0x80020BF4: nop

        goto L_80020BF8;
    // 0x80020BF4: nop

L_80020BF8:
    // 0x80020BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80020C00: jr          $ra
    // 0x80020C04: nop

    return;
    // 0x80020C04: nop

;}
RECOMP_FUNC void func_80020C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020C08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80020C0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020C10: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80020C14: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80020C18: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80020C1C: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80020C20: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80020C24: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80020C28: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80020C2C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80020C30: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80020C34: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80020C38: beq         $t9, $zero, L_80020C5C
    if (ctx->r25 == 0) {
        // 0x80020C3C: nop
    
            goto L_80020C5C;
    }
    // 0x80020C3C: nop

    // 0x80020C40: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80020C44: lw          $a0, 0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X11DC);
    // 0x80020C48: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80020C4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80020C50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80020C54: jal         0x80026500
    // 0x80020C58: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80026500(rdram, ctx);
        goto after_0;
    // 0x80020C58: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
L_80020C5C:
    // 0x80020C5C: b           L_80020C64
    // 0x80020C60: nop

        goto L_80020C64;
    // 0x80020C60: nop

L_80020C64:
    // 0x80020C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020C68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80020C6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80020C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020C74: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80020C78: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80020C7C: lw          $t6, -0x15DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15DC);
    // 0x80020C80: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80020C84: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80020C88: jr          $ra
    // 0x80020C8C: lhu         $v0, 0x0($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X0);
    return;
    // 0x80020C8C: lhu         $v0, 0x0($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X0);
;}
RECOMP_FUNC void func_80020C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020C90: jr          $ra
    // 0x80020C94: nop

    return;
    // 0x80020C94: nop

;}
