#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80092880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092880: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092884: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80092888: sb          $a1, 0x80($t6)
    MEM_B(0X80, ctx->r14) = ctx->r5;
    // 0x8009288C: lw          $t8, 0x50($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X50);
    // 0x80092890: jr          $ra
    // 0x80092894: sb          $t7, 0x81($t8)
    MEM_B(0X81, ctx->r24) = ctx->r15;
    return;
    // 0x80092894: sb          $t7, 0x81($t8)
    MEM_B(0X81, ctx->r24) = ctx->r15;
;}
RECOMP_FUNC void func_80092898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092898: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009289C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800928A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800928A4: jal         0x80084530
    // 0x800928A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _babackpack_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x800928A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800928AC: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x800928B0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800928B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800928B8: sb          $zero, 0x11($t6)
    MEM_B(0X11, ctx->r14) = 0;
    // 0x800928BC: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x800928C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800928C4: sb          $t7, 0x14($t8)
    MEM_B(0X14, ctx->r24) = ctx->r15;
    // 0x800928C8: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x800928CC: sb          $zero, 0x10($t9)
    MEM_B(0X10, ctx->r25) = 0;
    // 0x800928D0: lw          $t0, 0x50($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X50);
    // 0x800928D4: sb          $zero, 0x16($t0)
    MEM_B(0X16, ctx->r8) = 0;
    // 0x800928D8: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x800928DC: sb          $zero, 0x12($t1)
    MEM_B(0X12, ctx->r9) = 0;
    // 0x800928E0: lw          $t2, 0x50($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X50);
    // 0x800928E4: sb          $zero, 0x13($t2)
    MEM_B(0X13, ctx->r10) = 0;
    // 0x800928E8: lw          $t3, 0x50($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X50);
    // 0x800928EC: sh          $zero, 0xC($t3)
    MEM_H(0XC, ctx->r11) = 0;
    // 0x800928F0: lw          $t4, 0x50($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X50);
    // 0x800928F4: sb          $zero, 0xA2($t4)
    MEM_B(0XA2, ctx->r12) = 0;
    // 0x800928F8: lw          $t5, 0x50($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X50);
    // 0x800928FC: jal         0x800936E8
    // 0x80092900: sh          $zero, 0x9C($t5)
    MEM_H(0X9C, ctx->r13) = 0;
    func_800936E8(rdram, ctx);
        goto after_1;
    // 0x80092900: sh          $zero, 0x9C($t5)
    MEM_H(0X9C, ctx->r13) = 0;
    after_1:
    // 0x80092904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092908: jal         0x80093700
    // 0x8009290C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80093700(rdram, ctx);
        goto after_2;
    // 0x8009290C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80092910: jal         0x800AE020
    // 0x80092914: nop

    func_800AE020(rdram, ctx);
        goto after_3;
    // 0x80092914: nop

    after_3:
    // 0x80092918: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x8009291C: sh          $v0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r2;
    // 0x80092920: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x80092924: jal         0x800AE080
    // 0x80092928: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    func_800AE080(rdram, ctx);
        goto after_4;
    // 0x80092928: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    after_4:
    // 0x8009292C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80092930: jal         0x800E09B8
    // 0x80092934: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800E09B8(rdram, ctx);
        goto after_5;
    // 0x80092934: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_5:
    // 0x80092938: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x8009293C: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80092940: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80092944: jal         0x800AE6FC
    // 0x80092948: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800AE6FC(rdram, ctx);
        goto after_6;
    // 0x80092948: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x8009294C: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x80092950: jal         0x800DBFF8
    // 0x80092954: sb          $zero, 0x88($t9)
    MEM_B(0X88, ctx->r25) = 0;
    func_800DBFF8(rdram, ctx);
        goto after_7;
    // 0x80092954: sb          $zero, 0x88($t9)
    MEM_B(0X88, ctx->r25) = 0;
    after_7:
    // 0x80092958: lw          $t0, 0x50($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X50);
    // 0x8009295C: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x80092960: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x80092964: sw          $zero, 0x84($t1)
    MEM_W(0X84, ctx->r9) = 0;
    // 0x80092968: lw          $t2, 0x50($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X50);
    // 0x8009296C: sb          $zero, 0x7C($t2)
    MEM_B(0X7C, ctx->r10) = 0;
    // 0x80092970: lw          $t3, 0x50($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X50);
    // 0x80092974: sb          $zero, 0x81($t3)
    MEM_B(0X81, ctx->r11) = 0;
    // 0x80092978: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x8009297C: jal         0x800EFD24
    // 0x80092980: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    func_800EFD24(rdram, ctx);
        goto after_8;
    // 0x80092980: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    after_8:
    // 0x80092984: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x80092988: jal         0x800EFD24
    // 0x8009298C: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    func_800EFD24(rdram, ctx);
        goto after_9;
    // 0x8009298C: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_9:
    // 0x80092990: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x80092994: jal         0x800EFD24
    // 0x80092998: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    func_800EFD24(rdram, ctx);
        goto after_10;
    // 0x80092998: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    after_10:
    // 0x8009299C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800929A0: lw          $t4, 0x50($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X50);
    // 0x800929A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800929A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800929AC: swc1        $f4, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f4.u32l;
    // 0x800929B0: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x800929B4: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x800929B8: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x800929BC: lw          $t5, 0x50($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X50);
    // 0x800929C0: jal         0x80093370
    // 0x800929C4: swc1        $f0, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f0.u32l;
    func_80093370(rdram, ctx);
        goto after_11;
    // 0x800929C4: swc1        $f0, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f0.u32l;
    after_11:
    // 0x800929C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800929CC: jal         0x8009337C
    // 0x800929D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009337C(rdram, ctx);
        goto after_12;
    // 0x800929D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x800929D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800929D8: jal         0x80093230
    // 0x800929DC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80093230(rdram, ctx);
        goto after_13;
    // 0x800929DC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
    // 0x800929E0: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x800929E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800929E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800929EC: jal         0x800931AC
    // 0x800929F0: sb          $zero, 0x15($t6)
    MEM_B(0X15, ctx->r14) = 0;
    func_800931AC(rdram, ctx);
        goto after_14;
    // 0x800929F0: sb          $zero, 0x15($t6)
    MEM_B(0X15, ctx->r14) = 0;
    after_14:
    // 0x800929F4: jal         0x80092778
    // 0x800929F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092778(rdram, ctx);
        goto after_15;
    // 0x800929F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x800929FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092A00: jal         0x80092864
    // 0x80092A04: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_16;
    // 0x80092A04: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_16:
    // 0x80092A08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092A0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80092A10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092A14: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092A1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80092A20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092A24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80092A28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80092A2C: jal         0x80092EC8
    // 0x80092A30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092EC8(rdram, ctx);
        goto after_0;
    // 0x80092A30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80092A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092A38: jal         0x8009359C
    // 0x80092A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009359C(rdram, ctx);
        goto after_1;
    // 0x80092A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80092A40: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x80092A44: jal         0x800ADFE0
    // 0x80092A48: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    func_800ADFE0(rdram, ctx);
        goto after_2;
    // 0x80092A48: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    after_2:
    // 0x80092A4C: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x80092A50: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x80092A54: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x80092A58: jal         0x800DBFD8
    // 0x80092A5C: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    func_800DBFD8(rdram, ctx);
        goto after_3;
    // 0x80092A5C: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    after_3:
    // 0x80092A60: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x80092A64: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80092A68: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x80092A6C: lw          $a0, 0x84($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X84);
    // 0x80092A70: beql        $a0, $zero, L_80092A88
    if (ctx->r4 == 0) {
        // 0x80092A74: sw          $zero, 0x84($v0)
        MEM_W(0X84, ctx->r2) = 0;
            goto L_80092A88;
    }
    goto skip_0;
    // 0x80092A74: sw          $zero, 0x84($v0)
    MEM_W(0X84, ctx->r2) = 0;
    skip_0:
    // 0x80092A78: jal         0x800A70B0
    // 0x80092A7C: nop

    func_800A70B0(rdram, ctx);
        goto after_4;
    // 0x80092A7C: nop

    after_4:
    // 0x80092A80: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x80092A84: sw          $zero, 0x84($v0)
    MEM_W(0X84, ctx->r2) = 0;
L_80092A88:
    // 0x80092A88: jal         0x80084528
    // 0x80092A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babackpack_entrypoint_8(rdram, ctx);
        goto after_5;
    // 0x80092A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80092A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092A94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80092A98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80092A9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092AA4: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092AA8: jr          $ra
    // 0x80092AAC: sw          $zero, 0x84($t6)
    MEM_W(0X84, ctx->r14) = 0;
    return;
    // 0x80092AAC: sw          $zero, 0x84($t6)
    MEM_W(0X84, ctx->r14) = 0;
;}
RECOMP_FUNC void func_80092AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092AB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092AB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092AB8: jal         0x80092AD8
    // 0x80092ABC: nop

    func_80092AD8(rdram, ctx);
        goto after_0;
    // 0x80092ABC: nop

    after_0:
    // 0x80092AC0: jal         0x800E0ACC
    // 0x80092AC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800E0ACC(rdram, ctx);
        goto after_1;
    // 0x80092AC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80092AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092AD0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092AD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092AE0: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092AE4: jal         0x800AE080
    // 0x80092AE8: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    func_800AE080(rdram, ctx);
        goto after_0;
    // 0x80092AE8: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    after_0:
    // 0x80092AEC: jal         0x800AE6BC
    // 0x80092AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800AE6BC(rdram, ctx);
        goto after_1;
    // 0x80092AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80092AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092AFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092B04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80092B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092B0C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092B10: addiu       $at, $zero, 0x607
    ctx->r1 = ADD32(0, 0X607);
    // 0x80092B14: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80092B18: lh          $a3, 0xC($t6)
    ctx->r7 = MEM_H(ctx->r14, 0XC);
    // 0x80092B1C: bnel        $a3, $at, L_80092B38
    if (ctx->r7 != ctx->r1) {
        // 0x80092B20: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80092B38;
    }
    goto skip_0;
    // 0x80092B20: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_0:
    // 0x80092B24: jal         0x80093F7C
    // 0x80092B28: nop

    func_80093F7C(rdram, ctx);
        goto after_0;
    // 0x80092B28: nop

    after_0:
    // 0x80092B2C: b           L_80092B74
    // 0x80092B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80092B74;
    // 0x80092B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092B34: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_80092B38:
    // 0x80092B38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80092B3C: jal         0x800D674C
    // 0x80092B40: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800D674C(rdram, ctx);
        goto after_1;
    // 0x80092B40: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x80092B44: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80092B48: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80092B4C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80092B50: bnel        $a1, $zero, L_80092B70
    if (ctx->r5 != 0) {
        // 0x80092B54: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80092B70;
    }
    goto skip_1;
    // 0x80092B54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_1:
    // 0x80092B58: lw          $t7, 0x50($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X50);
    // 0x80092B5C: lh          $a0, 0xC($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XC);
    // 0x80092B60: jal         0x800D62E4
    // 0x80092B64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800D62E4(rdram, ctx);
        goto after_2;
    // 0x80092B64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x80092B68: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80092B6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80092B70:
    // 0x80092B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80092B74:
    // 0x80092B74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80092B78: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092B80: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092B84: jr          $ra
    // 0x80092B88: lh          $v0, 0xC($t6)
    ctx->r2 = MEM_H(ctx->r14, 0XC);
    return;
    // 0x80092B88: lh          $v0, 0xC($t6)
    ctx->r2 = MEM_H(ctx->r14, 0XC);
;}
RECOMP_FUNC void func_80092B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092B90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80092B94: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80092B98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092B9C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80092BA0: lw          $a1, 0x50($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X50);
    // 0x80092BA4: jal         0x800EE7F8
    // 0x80092BA8: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80092BA8: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    after_0:
    // 0x80092BAC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80092BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092BB4: lw          $t8, 0x50($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X50);
    // 0x80092BB8: lwc1        $f0, 0x70($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X70);
    // 0x80092BBC: jr          $ra
    // 0x80092BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80092BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80092BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092BC4: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092BC8: jr          $ra
    // 0x80092BCC: lbu         $v0, 0xC4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XC4);
    return;
    // 0x80092BCC: lbu         $v0, 0xC4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XC4);
;}
RECOMP_FUNC void func_80092BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092BD0: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092BD4: jr          $ra
    // 0x80092BD8: lwc1        $f0, 0xC8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0XC8);
    return;
    // 0x80092BD8: lwc1        $f0, 0xC8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0XC8);
;}
RECOMP_FUNC void func_80092BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092BDC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092BE0: jr          $ra
    // 0x80092BE4: lwc1        $f0, 0x1C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X1C);
    return;
    // 0x80092BE4: lwc1        $f0, 0x1C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X1C);
;}
RECOMP_FUNC void func_80092BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092BE8: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092BEC: jr          $ra
    // 0x80092BF0: lwc1        $f0, 0x28($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X28);
    return;
    // 0x80092BF0: lwc1        $f0, 0x28($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X28);
;}
RECOMP_FUNC void func_80092BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092BF4: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092BF8: jr          $ra
    // 0x80092BFC: lwc1        $f0, 0x30($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X30);
    return;
    // 0x80092BFC: lwc1        $f0, 0x30($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X30);
;}
RECOMP_FUNC void func_80092C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092C08: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092C0C: jal         0x800921E0
    // 0x80092C10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092C10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80092C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092C1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092C2C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092C30: jal         0x800921E0
    // 0x80092C34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092C34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80092C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092C40: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092C4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092C50: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092C54: jal         0x800921E0
    // 0x80092C58: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092C58: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x80092C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092C64: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092C74: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092C78: jal         0x800921E0
    // 0x80092C7C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092C7C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x80092C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092C88: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092C98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80092C9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80092CA0: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x80092CA4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80092CA8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80092CAC: jal         0x800DBEFC
    // 0x80092CB0: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    func_800DBEFC(rdram, ctx);
        goto after_0;
    // 0x80092CB0: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    after_0:
    // 0x80092CB4: jal         0x800EEEA8
    // 0x80092CB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800EEEA8(rdram, ctx);
        goto after_1;
    // 0x80092CB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80092CBC: beq         $v0, $zero, L_80092CCC
    if (ctx->r2 == 0) {
        // 0x80092CC0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80092CCC;
    }
    // 0x80092CC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80092CC4: jal         0x8009C128
    // 0x80092CC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x80092CC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
L_80092CCC:
    // 0x80092CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092CD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092CE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80092CE8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80092CEC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092CF0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80092CF4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80092CF8: jal         0x800DBEFC
    // 0x80092CFC: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    func_800DBEFC(rdram, ctx);
        goto after_0;
    // 0x80092CFC: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    after_0:
    // 0x80092D00: jal         0x800EEF24
    // 0x80092D04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800EEF24(rdram, ctx);
        goto after_1;
    // 0x80092D04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80092D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092D10: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092D1C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80092D20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092D24: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80092D28: lw          $a1, 0x50($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X50);
    // 0x80092D2C: jal         0x800EE7F8
    // 0x80092D30: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80092D30: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    after_0:
    // 0x80092D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092D3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092D44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80092D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092D4C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80092D50: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80092D54: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80092D58: jal         0x800921E0
    // 0x80092D5C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092D5C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80092D60: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80092D64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80092D68: jal         0x800921E0
    // 0x80092D6C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_800921E0(rdram, ctx);
        goto after_1;
    // 0x80092D6C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80092D70: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80092D74: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80092D78: jal         0x800EE780
    // 0x80092D7C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_800EE780(rdram, ctx);
        goto after_2;
    // 0x80092D7C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x80092D80: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80092D84: jal         0x800EF334
    // 0x80092D88: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_800EF334(rdram, ctx);
        goto after_3;
    // 0x80092D88: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_3:
    // 0x80092D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092D90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80092D94: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092DA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092DA4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092DA8: jal         0x800921E0
    // 0x80092DAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092DAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80092DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092DB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092DC8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092DCC: jal         0x800921E0
    // 0x80092DD0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092DD0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80092DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092DDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092DEC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092DF0: jal         0x800921E0
    // 0x80092DF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092DF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80092DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092DFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092E00: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092E10: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092E14: jal         0x800921E0
    // 0x80092E18: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092E18: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80092E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092E20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092E24: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092E2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092E30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092E34: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092E38: jal         0x800921E0
    // 0x80092E3C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092E3C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80092E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092E48: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092E50: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092E54: jr          $ra
    // 0x80092E58: lbu         $v0, 0x15($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X15);
    return;
    // 0x80092E58: lbu         $v0, 0x15($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X15);
;}
RECOMP_FUNC void func_80092E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092E5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092E60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092E64: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80092E68: jal         0x800921E0
    // 0x80092E6C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800921E0(rdram, ctx);
        goto after_0;
    // 0x80092E6C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x80092E70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092E74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092E78: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092E80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092E84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092E88: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092E8C: jal         0x800AE080
    // 0x80092E90: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    func_800AE080(rdram, ctx);
        goto after_0;
    // 0x80092E90: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    after_0:
    // 0x80092E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092E98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092E9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092EA4: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092EA8: jr          $ra
    // 0x80092EAC: lbu         $v0, 0x17($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X17);
    return;
    // 0x80092EAC: lbu         $v0, 0x17($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X17);
;}
RECOMP_FUNC void func_80092EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092EB0: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092EB4: jr          $ra
    // 0x80092EB8: lbu         $v0, 0x18($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X18);
    return;
    // 0x80092EB8: lbu         $v0, 0x18($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X18);
;}
RECOMP_FUNC void func_80092EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092EBC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092EC0: jr          $ra
    // 0x80092EC4: sb          $a1, 0x14($t6)
    MEM_B(0X14, ctx->r14) = ctx->r5;
    return;
    // 0x80092EC4: sb          $a1, 0x14($t6)
    MEM_B(0X14, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80092EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092EC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80092ECC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80092ED0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80092ED4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80092ED8: lw          $v1, 0x50($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X50);
    // 0x80092EDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80092EE0: lh          $a2, 0xC($v1)
    ctx->r6 = MEM_H(ctx->r3, 0XC);
    // 0x80092EE4: beql        $a1, $a2, L_80093060
    if (ctx->r5 == ctx->r6) {
        // 0x80092EE8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80093060;
    }
    goto skip_0;
    // 0x80092EE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80092EEC: beq         $a2, $zero, L_80092F14
    if (ctx->r6 == 0) {
        // 0x80092EF0: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80092F14;
    }
    // 0x80092EF0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80092EF4: jal         0x800D70F8
    // 0x80092EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D70F8(rdram, ctx);
        goto after_0;
    // 0x80092EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80092EFC: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x80092F00: jal         0x800D6CEC
    // 0x80092F04: lh          $a0, 0xC($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XC);
    func_800D6CEC(rdram, ctx);
        goto after_1;
    // 0x80092F04: lh          $a0, 0xC($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XC);
    after_1:
    // 0x80092F08: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x80092F0C: sh          $zero, 0xE($t8)
    MEM_H(0XE, ctx->r24) = 0;
    // 0x80092F10: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
L_80092F14:
    // 0x80092F14: lbu         $v0, 0x12($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X12);
    // 0x80092F18: beq         $v0, $zero, L_80092F38
    if (ctx->r2 == 0) {
        // 0x80092F1C: sll         $a0, $v0, 16
        ctx->r4 = S32(ctx->r2 << 16);
            goto L_80092F38;
    }
    // 0x80092F1C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80092F20: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80092F24: jal         0x80100E18
    // 0x80092F28: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80100E18(rdram, ctx);
        goto after_2;
    // 0x80092F28: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
    // 0x80092F2C: lw          $t0, 0x50($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X50);
    // 0x80092F30: sb          $zero, 0x12($t0)
    MEM_B(0X12, ctx->r8) = 0;
    // 0x80092F34: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
L_80092F38:
    // 0x80092F38: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80092F3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092F40: sh          $t1, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r9;
    // 0x80092F44: jal         0x80093FD4
    // 0x80092F48: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80093FD4(rdram, ctx);
        goto after_3;
    // 0x80092F48: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x80092F4C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80092F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092F54: beql        $t2, $zero, L_80093060
    if (ctx->r10 == 0) {
        // 0x80092F58: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80093060;
    }
    goto skip_1;
    // 0x80092F58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80092F5C: jal         0x80092B04
    // 0x80092F60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092B04(rdram, ctx);
        goto after_4;
    // 0x80092F60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80092F64: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80092F68: lw          $t3, 0x50($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X50);
    // 0x80092F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80092F70: jal         0x800D70F8
    // 0x80092F74: lh          $a0, 0xC($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XC);
    func_800D70F8(rdram, ctx);
        goto after_5;
    // 0x80092F74: lh          $a0, 0xC($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XC);
    after_5:
    // 0x80092F78: jal         0x800B27E0
    // 0x80092F7C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800B27E0(rdram, ctx);
        goto after_6;
    // 0x80092F7C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_6:
    // 0x80092F80: lw          $t4, 0x50($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X50);
    // 0x80092F84: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80092F88: jal         0x800ADD80
    // 0x80092F8C: lh          $a0, 0x0($t4)
    ctx->r4 = MEM_H(ctx->r12, 0X0);
    func_800ADD80(rdram, ctx);
        goto after_7;
    // 0x80092F8C: lh          $a0, 0x0($t4)
    ctx->r4 = MEM_H(ctx->r12, 0X0);
    after_7:
    // 0x80092F90: lw          $t5, 0x50($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X50);
    // 0x80092F94: lbu         $t6, 0x12($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X12);
    // 0x80092F98: bne         $t6, $zero, L_80092FEC
    if (ctx->r14 != 0) {
        // 0x80092F9C: nop
    
            goto L_80092FEC;
    }
    // 0x80092F9C: nop

    // 0x80092FA0: jal         0x800B26F0
    // 0x80092FA4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800B26F0(rdram, ctx);
        goto after_8;
    // 0x80092FA4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_8:
    // 0x80092FA8: beq         $v0, $zero, L_80092FB8
    if (ctx->r2 == 0) {
        // 0x80092FAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80092FB8;
    }
    // 0x80092FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092FB0: b           L_80092FBC
    // 0x80092FB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80092FBC;
    // 0x80092FB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80092FB8:
    // 0x80092FB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80092FBC:
    // 0x80092FBC: jal         0x800A25D0
    // 0x80092FC0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800A25D0(rdram, ctx);
        goto after_9;
    // 0x80092FC0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_9:
    // 0x80092FC4: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x80092FC8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80092FCC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80092FD0: lh          $a1, 0xC($t7)
    ctx->r5 = MEM_H(ctx->r15, 0XC);
    // 0x80092FD4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80092FD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80092FDC: jal         0x80100D24
    // 0x80092FE0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80100D24(rdram, ctx);
        goto after_10;
    // 0x80092FE0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_10:
    // 0x80092FE4: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x80092FE8: sb          $v0, 0x12($t8)
    MEM_B(0X12, ctx->r24) = ctx->r2;
L_80092FEC:
    // 0x80092FEC: jal         0x800B2840
    // 0x80092FF0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800B2840(rdram, ctx);
        goto after_11;
    // 0x80092FF0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_11:
    // 0x80092FF4: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80092FF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80092FFC: addiu       $a1, $v1, 0x50
    ctx->r5 = ADD32(ctx->r3, 0X50);
    // 0x80093000: jal         0x800B237C
    // 0x80093004: addiu       $a2, $v1, 0x5C
    ctx->r6 = ADD32(ctx->r3, 0X5C);
    func_800B237C(rdram, ctx);
        goto after_12;
    // 0x80093004: addiu       $a2, $v1, 0x5C
    ctx->r6 = ADD32(ctx->r3, 0X5C);
    after_12:
    // 0x80093008: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009300C: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x80093010: swc1        $f4, 0x58($t9)
    MEM_W(0X58, ctx->r25) = ctx->f4.u32l;
    // 0x80093014: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093018: lwc1        $f6, 0x58($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X58);
    // 0x8009301C: swc1        $f6, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f6.u32l;
    // 0x80093020: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093024: addiu       $a0, $v1, 0x64
    ctx->r4 = ADD32(ctx->r3, 0X64);
    // 0x80093028: jal         0x800EE7F8
    // 0x8009302C: addiu       $a1, $v1, 0x50
    ctx->r5 = ADD32(ctx->r3, 0X50);
    func_800EE7F8(rdram, ctx);
        goto after_13;
    // 0x8009302C: addiu       $a1, $v1, 0x50
    ctx->r5 = ADD32(ctx->r3, 0X50);
    after_13:
    // 0x80093030: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093034: lwc1        $f8, 0x5C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X5C);
    // 0x80093038: swc1        $f8, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f8.u32l;
    // 0x8009303C: jal         0x800B2840
    // 0x80093040: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800B2840(rdram, ctx);
        goto after_14;
    // 0x80093040: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_14:
    // 0x80093044: jal         0x800B2354
    // 0x80093048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B2354(rdram, ctx);
        goto after_15;
    // 0x80093048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x8009304C: lw          $t0, 0x50($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X50);
    // 0x80093050: swc1        $f0, 0x74($t0)
    MEM_W(0X74, ctx->r8) = ctx->f0.u32l;
    // 0x80093054: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x80093058: swc1        $f0, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->f0.u32l;
    // 0x8009305C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80093060:
    // 0x80093060: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80093064: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80093068: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093070: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80093074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093078: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8009307C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80093080: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80093084: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80093088: jal         0x800D674C
    // 0x8009308C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x8009308C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x80093090: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80093094: jal         0x800D674C
    // 0x80093098: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_800D674C(rdram, ctx);
        goto after_1;
    // 0x80093098: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x8009309C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800930A0: jal         0x800A25D0
    // 0x800930A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800A25D0(rdram, ctx);
        goto after_2;
    // 0x800930A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x800930A8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800930AC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800930B0: lbu         $v1, 0x0($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X0);
    // 0x800930B4: beq         $v1, $zero, L_800930D0
    if (ctx->r3 == 0) {
        // 0x800930B8: sll         $a0, $v1, 16
        ctx->r4 = S32(ctx->r3 << 16);
            goto L_800930D0;
    }
    // 0x800930B8: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x800930BC: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800930C0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800930C4: jal         0x80100E18
    // 0x800930C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80100E18(rdram, ctx);
        goto after_3;
    // 0x800930C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_3:
    // 0x800930CC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_800930D0:
    // 0x800930D0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800930D4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800930D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800930DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800930E0: jal         0x80100D24
    // 0x800930E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80100D24(rdram, ctx);
        goto after_4;
    // 0x800930E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x800930E8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800930EC: sb          $v0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r2;
    // 0x800930F0: jal         0x800B2840
    // 0x800930F4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800B2840(rdram, ctx);
        goto after_5;
    // 0x800930F4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x800930F8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800930FC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80093100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80093104: jal         0x80100A74
    // 0x80093108: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    func_80100A74(rdram, ctx);
        goto after_6;
    // 0x80093108: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    after_6:
    // 0x8009310C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80093110: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80093114: jal         0x800B25D8
    // 0x80093118: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    func_800B25D8(rdram, ctx);
        goto after_7;
    // 0x80093118: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x8009311C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093120: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80093124: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009312C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009312C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093130: beq         $a1, $zero, L_8009315C
    if (ctx->r5 == 0) {
        // 0x80093134: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8009315C;
    }
    // 0x80093134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093138: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x8009313C: lh          $t6, 0xE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE);
    // 0x80093140: beql        $a1, $t6, L_80093160
    if (ctx->r5 == ctx->r14) {
        // 0x80093144: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80093160;
    }
    goto skip_0;
    // 0x80093144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80093148: sh          $a1, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r5;
    // 0x8009314C: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x80093150: lh          $a2, 0xC($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XC);
    // 0x80093154: jal         0x80093070
    // 0x80093158: addiu       $a3, $v0, 0x12
    ctx->r7 = ADD32(ctx->r2, 0X12);
    func_80093070(rdram, ctx);
        goto after_0;
    // 0x80093158: addiu       $a3, $v0, 0x12
    ctx->r7 = ADD32(ctx->r2, 0X12);
    after_0:
L_8009315C:
    // 0x8009315C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80093160:
    // 0x80093160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093164: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009316C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009316C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093170: beq         $a1, $zero, L_8009319C
    if (ctx->r5 == 0) {
        // 0x80093174: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8009319C;
    }
    // 0x80093174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093178: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x8009317C: lh          $t6, 0x9E($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X9E);
    // 0x80093180: beql        $a1, $t6, L_800931A0
    if (ctx->r5 == ctx->r14) {
        // 0x80093184: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800931A0;
    }
    goto skip_0;
    // 0x80093184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80093188: sh          $a1, 0x9E($v0)
    MEM_H(0X9E, ctx->r2) = ctx->r5;
    // 0x8009318C: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x80093190: lh          $a2, 0x9C($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X9C);
    // 0x80093194: jal         0x80093070
    // 0x80093198: addiu       $a3, $v0, 0xA0
    ctx->r7 = ADD32(ctx->r2, 0XA0);
    func_80093070(rdram, ctx);
        goto after_0;
    // 0x80093198: addiu       $a3, $v0, 0xA0
    ctx->r7 = ADD32(ctx->r2, 0XA0);
    after_0:
L_8009319C:
    // 0x8009319C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800931A0:
    // 0x800931A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800931A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800931AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800931AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800931B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800931B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800931B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800931BC: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x800931C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800931C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800931C8: lbu         $v1, 0x15($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X15);
    // 0x800931CC: beql        $a1, $v1, L_80093218
    if (ctx->r5 == ctx->r3) {
        // 0x800931D0: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_80093218;
    }
    goto skip_0;
    // 0x800931D0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800931D4: beq         $a1, $a0, L_800931E4
    if (ctx->r5 == ctx->r4) {
        // 0x800931D8: nop
    
            goto L_800931E4;
    }
    // 0x800931D8: nop

    // 0x800931DC: bnel        $a0, $v1, L_80093218
    if (ctx->r4 != ctx->r3) {
        // 0x800931E0: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_80093218;
    }
    goto skip_1;
    // 0x800931E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_1:
L_800931E4:
    // 0x800931E4: jal         0x8009C984
    // 0x800931E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_0;
    // 0x800931E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800931EC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800931F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800931F4: jal         0x800136E4
    // 0x800931F8: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x800931F8: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    after_1:
    // 0x800931FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80093200: jal         0x8009C914
    // 0x80093204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_2;
    // 0x80093204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80093208: jal         0x8009C974
    // 0x8009320C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_3;
    // 0x8009320C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80093210: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x80093214: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80093218:
    // 0x80093218: sb          $t7, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r15;
    // 0x8009321C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093220: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80093224: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80093228: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093238: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009323C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093240: swc1        $f12, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f12.u32l;
    // 0x80093244: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x80093248: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x8009324C: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80093250: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80093254: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x80093258: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x8009325C: lwc1        $f10, 0x60($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X60);
    // 0x80093260: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80093264: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80093268: swc1        $f18, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f18.u32l;
    // 0x8009326C: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x80093270: addiu       $a0, $v0, 0x64
    ctx->r4 = ADD32(ctx->r2, 0X64);
    // 0x80093274: jal         0x800EF334
    // 0x80093278: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    func_800EF334(rdram, ctx);
        goto after_0;
    // 0x80093278: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    after_0:
    // 0x8009327C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80093280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093284: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009328C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009328C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093294: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80093298: jal         0x800136E4
    // 0x8009329C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x8009329C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800932A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800932A4: lw          $t7, 0x50($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X50);
    // 0x800932A8: swc1        $f0, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f0.u32l;
    // 0x800932AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800932B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800932B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800932BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800932BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800932C0: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x800932C4: jr          $ra
    // 0x800932C8: swc1        $f12, 0xC8($t6)
    MEM_W(0XC8, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x800932C8: swc1        $f12, 0xC8($t6)
    MEM_W(0XC8, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800932CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800932CC: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x800932D0: lbu         $t6, 0xC4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC4);
    // 0x800932D4: beq         $a1, $t6, L_800932F8
    if (ctx->r5 == ctx->r14) {
        // 0x800932D8: nop
    
            goto L_800932F8;
    }
    // 0x800932D8: nop

    // 0x800932DC: beql        $a1, $zero, L_800932F8
    if (ctx->r5 == 0) {
        // 0x800932E0: sb          $a1, 0xC4($v0)
        MEM_B(0XC4, ctx->r2) = ctx->r5;
            goto L_800932F8;
    }
    goto skip_0;
    // 0x800932E0: sb          $a1, 0xC4($v0)
    MEM_B(0XC4, ctx->r2) = ctx->r5;
    skip_0:
    // 0x800932E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800932E8: nop

    // 0x800932EC: swc1        $f4, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->f4.u32l;
    // 0x800932F0: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x800932F4: sb          $a1, 0xC4($v0)
    MEM_B(0XC4, ctx->r2) = ctx->r5;
L_800932F8:
    // 0x800932F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093300: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80093304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009330C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093310: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80093314: jal         0x8009332C
    // 0x80093318: swc1        $f12, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f12.u32l;
    func_8009332C(rdram, ctx);
        goto after_0;
    // 0x80093318: swc1        $f12, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f12.u32l;
    after_0:
    // 0x8009331C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80093320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093324: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009332C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009332C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80093330: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093334: jr          $ra
    // 0x80093338: swc1        $f12, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80093338: swc1        $f12, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009333C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009333C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093344: lw          $a0, 0x50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X50);
    // 0x80093348: jal         0x800EE7F8
    // 0x8009334C: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009334C: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    after_0:
    // 0x80093350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80093354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093358: jr          $ra
    // 0x8009335C: nop

    return;
    // 0x8009335C: nop

;}
RECOMP_FUNC void func_80093360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093360: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80093364: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093368: jr          $ra
    // 0x8009336C: swc1        $f12, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009336C: swc1        $f12, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80093370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093370: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093374: jr          $ra
    // 0x80093378: sb          $a1, 0x17($t6)
    MEM_B(0X17, ctx->r14) = ctx->r5;
    return;
    // 0x80093378: sb          $a1, 0x17($t6)
    MEM_B(0X17, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009337C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009337C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093380: jr          $ra
    // 0x80093384: sb          $a1, 0x18($t6)
    MEM_B(0X18, ctx->r14) = ctx->r5;
    return;
    // 0x80093384: sb          $a1, 0x18($t6)
    MEM_B(0X18, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80093388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093388: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009338C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093390: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x80093394: lwc1        $f4, 0x3C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80093398: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8009339C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800933A0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800933A4: jal         0x800F2100
    // 0x800933A8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_800F2100(rdram, ctx);
        goto after_0;
    // 0x800933A8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800933AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800933B0: lwc1        $f8, 0x4D40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4D40);
    // 0x800933B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800933B8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800933BC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800933C0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800933C4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800933C8: bc1fl       L_800933E4
    if (!c1cs) {
        // 0x800933CC: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_800933E4;
    }
    goto skip_0;
    // 0x800933CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_0:
    // 0x800933D0: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x800933D4: lwc1        $f10, 0x3C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x800933D8: b           L_80093438
    // 0x800933DC: swc1        $f10, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f10.u32l;
        goto L_80093438;
    // 0x800933DC: swc1        $f10, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f10.u32l;
    // 0x800933E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_800933E4:
    // 0x800933E4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800933E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800933EC: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x800933F0: nop

    // 0x800933F4: bc1fl       L_80093408
    if (!c1cs) {
        // 0x800933F8: c.lt.s      $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
            goto L_80093408;
    }
    goto skip_1;
    // 0x800933F8: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    skip_1:
    // 0x800933FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80093400: nop

    // 0x80093404: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
L_80093408:
    // 0x80093408: nop

    // 0x8009340C: bc1fl       L_8009342C
    if (!c1cs) {
        // 0x80093410: lw          $v0, 0x50($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X50);
            goto L_8009342C;
    }
    goto skip_2;
    // 0x80093410: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    skip_2:
    // 0x80093414: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x80093418: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8009341C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80093420: b           L_80093438
    // 0x80093424: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
        goto L_80093438;
    // 0x80093424: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x80093428: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
L_8009342C:
    // 0x8009342C: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80093430: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80093434: swc1        $f10, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f10.u32l;
L_80093438:
    // 0x80093438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009343C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80093440: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093448: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009344C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80093450: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80093454: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093458: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009345C: lw          $t7, 0x84($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X84);
    // 0x80093460: bne         $t7, $zero, L_80093498
    if (ctx->r15 != 0) {
        // 0x80093464: nop
    
            goto L_80093498;
    }
    // 0x80093464: nop

    // 0x80093468: jal         0x8009C128
    // 0x8009346C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009346C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80093470: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80093474: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80093478: addiu       $a0, $a0, 0x27C4
    ctx->r4 = ADD32(ctx->r4, 0X27C4);
    // 0x8009347C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80093480: lw          $t9, 0x184($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X184);
    // 0x80093484: addiu       $a1, $zero, 0x215
    ctx->r5 = ADD32(0, 0X215);
    // 0x80093488: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8009348C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80093490: jal         0x80086D50
    // 0x80093494: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    _chbaddiesetup_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80093494: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
L_80093498:
    // 0x80093498: jal         0x80093388
    // 0x8009349C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80093388(rdram, ctx);
        goto after_2;
    // 0x8009349C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800934A0: jal         0x80092018
    // 0x800934A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092018(rdram, ctx);
        goto after_3;
    // 0x800934A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800934A8: jal         0x800920C8
    // 0x800934AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800920C8(rdram, ctx);
        goto after_4;
    // 0x800934AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800934B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800934B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800934B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800934BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800934C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800934C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800934C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800934CC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x800934D0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800934D4: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x800934D8: beq         $a1, $zero, L_800934F4
    if (ctx->r5 == 0) {
        // 0x800934DC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_800934F4;
    }
    // 0x800934DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800934E0: jal         0x800DC060
    // 0x800934E4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800DC060(rdram, ctx);
        goto after_0;
    // 0x800934E4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800934E8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800934EC: lw          $t7, 0x50($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X50);
    // 0x800934F0: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
L_800934F4:
    // 0x800934F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800934F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800934FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009350C: lw          $a0, 0x50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X50);
    // 0x80093510: jal         0x800F23D0
    // 0x80093514: addiu       $a0, $a0, 0xCC
    ctx->r4 = ADD32(ctx->r4, 0XCC);
    func_800F23D0(rdram, ctx);
        goto after_0;
    // 0x80093514: addiu       $a0, $a0, 0xCC
    ctx->r4 = ADD32(ctx->r4, 0XCC);
    after_0:
    // 0x80093518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009351C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093520: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009352C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093530: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093534: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80093538: sb          $zero, 0x1A($t6)
    MEM_B(0X1A, ctx->r14) = 0;
    // 0x8009353C: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x80093540: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x80093544: jal         0x800DBEB0
    // 0x80093548: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800DBEB0(rdram, ctx);
        goto after_0;
    // 0x80093548: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009354C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80093550: lw          $t8, 0x50($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X50);
    // 0x80093554: sb          $zero, 0x16($t8)
    MEM_B(0X16, ctx->r24) = 0;
    // 0x80093558: lw          $t9, 0x50($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X50);
    // 0x8009355C: sb          $zero, 0xA5($t9)
    MEM_B(0XA5, ctx->r25) = 0;
    // 0x80093560: lw          $v0, 0x50($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X50);
    // 0x80093564: lbu         $v1, 0xA5($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA5);
    // 0x80093568: sb          $v1, 0xA1($v0)
    MEM_B(0XA1, ctx->r2) = ctx->r3;
    // 0x8009356C: lw          $t0, 0x50($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X50);
    // 0x80093570: sb          $v1, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r3;
    // 0x80093574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80093578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009357C: jr          $ra
    // 0x80093580: nop

    return;
    // 0x80093580: nop

;}
RECOMP_FUNC void func_80093584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093584: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093588: sw          $zero, 0x94($t6)
    MEM_W(0X94, ctx->r14) = 0;
    // 0x8009358C: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x80093590: lw          $t7, 0x94($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X94);
    // 0x80093594: jr          $ra
    // 0x80093598: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    return;
    // 0x80093598: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_8009359C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009359C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800935A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800935A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800935A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800935AC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800935B0: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x800935B4: lh          $v0, 0x9C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X9C);
    // 0x800935B8: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
    // 0x800935BC: beql        $a1, $v0, L_800936BC
    if (ctx->r5 == ctx->r2) {
        // 0x800935C0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800936BC;
    }
    goto skip_0;
    // 0x800935C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800935C4: beql        $v0, $zero, L_80093614
    if (ctx->r2 == 0) {
        // 0x800935C8: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_80093614;
    }
    goto skip_1;
    // 0x800935C8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x800935CC: lbu         $v0, 0x10($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X10);
    // 0x800935D0: beq         $v0, $zero, L_800935E8
    if (ctx->r2 == 0) {
        // 0x800935D4: sll         $a0, $v0, 16
        ctx->r4 = S32(ctx->r2 << 16);
            goto L_800935E8;
    }
    // 0x800935D4: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x800935D8: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800935DC: jal         0x80100E18
    // 0x800935E0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80100E18(rdram, ctx);
        goto after_0;
    // 0x800935E0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x800935E4: sb          $zero, 0x10($s0)
    MEM_B(0X10, ctx->r16) = 0;
L_800935E8:
    // 0x800935E8: jal         0x800ADFE0
    // 0x800935EC: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800ADFE0(rdram, ctx);
        goto after_1;
    // 0x800935EC: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x800935F0: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x800935F4: lh          $a0, 0xC($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XC);
    // 0x800935F8: jal         0x800D70F8
    // 0x800935FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D70F8(rdram, ctx);
        goto after_2;
    // 0x800935FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80093600: jal         0x800D6CEC
    // 0x80093604: lh          $a0, 0xC($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XC);
    func_800D6CEC(rdram, ctx);
        goto after_3;
    // 0x80093604: lh          $a0, 0xC($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XC);
    after_3:
    // 0x80093608: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    // 0x8009360C: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x80093610: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_80093614:
    // 0x80093614: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80093618: bnel        $t9, $zero, L_8009362C
    if (ctx->r25 != 0) {
        // 0x8009361C: sh          $t0, 0xC($s0)
        MEM_H(0XC, ctx->r16) = ctx->r8;
            goto L_8009362C;
    }
    goto skip_2;
    // 0x8009361C: sh          $t0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r8;
    skip_2:
    // 0x80093620: b           L_800936B8
    // 0x80093624: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
        goto L_800936B8;
    // 0x80093624: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
    // 0x80093628: sh          $t0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r8;
L_8009362C:
    // 0x8009362C: jal         0x80093738
    // 0x80093630: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_80093738(rdram, ctx);
        goto after_4;
    // 0x80093630: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_4:
    // 0x80093634: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80093638: lh          $a0, 0xC($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XC);
    // 0x8009363C: jal         0x800D70F8
    // 0x80093640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800D70F8(rdram, ctx);
        goto after_5;
    // 0x80093640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80093644: jal         0x800B26F0
    // 0x80093648: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800B26F0(rdram, ctx);
        goto after_6;
    // 0x80093648: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x8009364C: beq         $v0, $zero, L_8009365C
    if (ctx->r2 == 0) {
        // 0x80093650: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_8009365C;
    }
    // 0x80093650: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80093654: b           L_80093660
    // 0x80093658: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80093660;
    // 0x80093658: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8009365C:
    // 0x8009365C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80093660:
    // 0x80093660: jal         0x800A25D0
    // 0x80093664: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_800A25D0(rdram, ctx);
        goto after_7;
    // 0x80093664: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_7:
    // 0x80093668: lh          $a1, 0xC($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XC);
    // 0x8009366C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80093670: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80093674: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80093678: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8009367C: jal         0x80100D24
    // 0x80093680: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80100D24(rdram, ctx);
        goto after_8;
    // 0x80093680: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_8:
    // 0x80093684: jal         0x800AE020
    // 0x80093688: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    func_800AE020(rdram, ctx);
        goto after_9;
    // 0x80093688: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    after_9:
    // 0x8009368C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80093690: jal         0x800AE080
    // 0x80093694: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800AE080(rdram, ctx);
        goto after_10;
    // 0x80093694: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_10:
    // 0x80093698: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8009369C: jal         0x800E09B8
    // 0x800936A0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_800E09B8(rdram, ctx);
        goto after_11;
    // 0x800936A0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_11:
    // 0x800936A4: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x800936A8: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800936AC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x800936B0: jal         0x800AE6FC
    // 0x800936B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800AE6FC(rdram, ctx);
        goto after_12;
    // 0x800936B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_800936B8:
    // 0x800936B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800936BC:
    // 0x800936BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800936C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800936C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800936CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800936CC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x800936D0: jr          $ra
    // 0x800936D4: sb          $a1, 0xA2($t6)
    MEM_B(0XA2, ctx->r14) = ctx->r5;
    return;
    // 0x800936D4: sb          $a1, 0xA2($t6)
    MEM_B(0XA2, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800936D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800936D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800936DC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x800936E0: jr          $ra
    // 0x800936E4: swc1        $f12, 0x98($t6)
    MEM_W(0X98, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x800936E4: swc1        $f12, 0x98($t6)
    MEM_W(0X98, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800936E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800936E8: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x800936EC: jr          $ra
    // 0x800936F0: sb          $a1, 0xA3($t6)
    MEM_B(0XA3, ctx->r14) = ctx->r5;
    return;
    // 0x800936F0: sb          $a1, 0xA3($t6)
    MEM_B(0XA3, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800936F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800936F4: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x800936F8: jr          $ra
    // 0x800936FC: lbu         $v0, 0xA3($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA3);
    return;
    // 0x800936FC: lbu         $v0, 0xA3($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA3);
;}
RECOMP_FUNC void func_80093700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093700: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093704: jr          $ra
    // 0x80093708: sb          $a1, 0x19($t6)
    MEM_B(0X19, ctx->r14) = ctx->r5;
    return;
    // 0x80093708: sb          $a1, 0x19($t6)
    MEM_B(0X19, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009370C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009370C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093714: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093718: jal         0x800AE080
    // 0x8009371C: lh          $a0, 0x90($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X90);
    func_800AE080(rdram, ctx);
        goto after_0;
    // 0x8009371C: lh          $a0, 0x90($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X90);
    after_0:
    // 0x80093720: jal         0x800AE6BC
    // 0x80093724: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800AE6BC(rdram, ctx);
        goto after_1;
    // 0x80093724: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80093728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009372C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093730: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009373C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093740: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093744: jal         0x800D674C
    // 0x80093748: lh          $a0, 0x9C($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X9C);
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x80093748: lh          $a0, 0x9C($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X9C);
    after_0:
    // 0x8009374C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80093750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093754: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009375C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009375C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80093760: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093764: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80093768: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8009376C: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80093770: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80093774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093778: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x8009377C: beq         $a2, $zero, L_80093798
    if (ctx->r6 == 0) {
        // 0x80093780: sw          $t8, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r24;
            goto L_80093798;
    }
    // 0x80093780: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80093784: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80093788: beq         $a2, $at, L_800937D8
    if (ctx->r6 == ctx->r1) {
        // 0x8009378C: nop
    
            goto L_800937D8;
    }
    // 0x8009378C: nop

    // 0x80093790: b           L_80093814
    // 0x80093794: nop

        goto L_80093814;
    // 0x80093794: nop

L_80093798:
    // 0x80093798: jal         0x80092B04
    // 0x8009379C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092B04(rdram, ctx);
        goto after_0;
    // 0x8009379C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800937A0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800937A4: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x800937A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800937AC: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x800937B0: jal         0x8008CABC
    // 0x800937B4: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x800937B4: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    after_1:
    // 0x800937B8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800937BC: lw          $t2, 0x50($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X50);
    // 0x800937C0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800937C4: sb          $t1, 0x10($t2)
    MEM_B(0X10, ctx->r10) = ctx->r9;
    // 0x800937C8: lw          $t4, 0x50($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X50);
    // 0x800937CC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800937D0: b           L_80093814
    // 0x800937D4: sw          $t3, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r11;
        goto L_80093814;
    // 0x800937D4: sw          $t3, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r11;
L_800937D8:
    // 0x800937D8: jal         0x80093738
    // 0x800937DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80093738(rdram, ctx);
        goto after_2;
    // 0x800937DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800937E0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800937E4: lw          $t5, 0x50($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X50);
    // 0x800937E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800937EC: lh          $t6, 0x90($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X90);
    // 0x800937F0: jal         0x8008D04C
    // 0x800937F4: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
    func_8008D04C(rdram, ctx);
        goto after_3;
    // 0x800937F4: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
    after_3:
    // 0x800937F8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800937FC: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x80093800: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80093804: sb          $t7, 0xA1($t8)
    MEM_B(0XA1, ctx->r24) = ctx->r15;
    // 0x80093808: lw          $t0, 0x50($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X50);
    // 0x8009380C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80093810: sw          $t9, 0x94($t0)
    MEM_W(0X94, ctx->r8) = ctx->r25;
L_80093814:
    // 0x80093814: jal         0x800B27E0
    // 0x80093818: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800B27E0(rdram, ctx);
        goto after_4;
    // 0x80093818: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x8009381C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80093820: jal         0x8008AEDC
    // 0x80093824: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008AEDC(rdram, ctx);
        goto after_5;
    // 0x80093824: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80093828: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8009382C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80093830: jal         0x8008C200
    // 0x80093834: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_8008C200(rdram, ctx);
        goto after_6;
    // 0x80093834: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_6:
    // 0x80093838: jal         0x800AE080
    // 0x8009383C: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    func_800AE080(rdram, ctx);
        goto after_7;
    // 0x8009383C: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    after_7:
    // 0x80093840: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80093844: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80093848: jal         0x800AE598
    // 0x8009384C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800AE598(rdram, ctx);
        goto after_8;
    // 0x8009384C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_8:
    // 0x80093850: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093854: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80093858: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009385C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093864: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80093868: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009386C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80093870: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80093874: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80093878: beq         $a2, $zero, L_80093894
    if (ctx->r6 == 0) {
        // 0x8009387C: sw          $a2, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r6;
            goto L_80093894;
    }
    // 0x8009387C: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x80093880: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80093884: beql        $a2, $at, L_80093974
    if (ctx->r6 == ctx->r1) {
        // 0x80093888: lw          $t2, 0x50($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X50);
            goto L_80093974;
    }
    goto skip_0;
    // 0x80093888: lw          $t2, 0x50($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X50);
    skip_0:
    // 0x8009388C: b           L_80093A40
    // 0x80093890: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
        goto L_80093A40;
    // 0x80093890: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
L_80093894:
    // 0x80093894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093898: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8009389C: jal         0x8009216C
    // 0x800938A0: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    func_8009216C(rdram, ctx);
        goto after_0;
    // 0x800938A0: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x800938A4: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x800938A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800938AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800938B0: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800938B4: jal         0x80092B04
    // 0x800938B8: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    func_80092B04(rdram, ctx);
        goto after_1;
    // 0x800938B8: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800938BC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x800938C0: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x800938C4: jal         0x800AE080
    // 0x800938C8: lh          $a0, 0x0($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X0);
    func_800AE080(rdram, ctx);
        goto after_2;
    // 0x800938C8: lh          $a0, 0x0($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X0);
    after_2:
    // 0x800938CC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800938D0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800938D4: beql        $t9, $zero, L_80093A40
    if (ctx->r25 == 0) {
        // 0x800938D8: lw          $a1, 0x50($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X50);
            goto L_80093A40;
    }
    goto skip_1;
    // 0x800938D8: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    skip_1:
    // 0x800938DC: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x800938E0: lbu         $v1, 0x12($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X12);
    // 0x800938E4: beq         $v1, $zero, L_8009391C
    if (ctx->r3 == 0) {
        // 0x800938E8: sll         $a0, $v1, 16
        ctx->r4 = S32(ctx->r3 << 16);
            goto L_8009391C;
    }
    // 0x800938E8: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x800938EC: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800938F0: jal         0x80100AC4
    // 0x800938F4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80100AC4(rdram, ctx);
        goto after_3;
    // 0x800938F4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_3:
    // 0x800938F8: jal         0x800DF720
    // 0x800938FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF720(rdram, ctx);
        goto after_4;
    // 0x800938FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80093900: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x80093904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80093908: jal         0x80100A74
    // 0x8009390C: lbu         $a0, 0x12($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X12);
    func_80100A74(rdram, ctx);
        goto after_5;
    // 0x8009390C: lbu         $a0, 0x12($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X12);
    after_5:
    // 0x80093910: jal         0x800DF818
    // 0x80093914: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF818(rdram, ctx);
        goto after_6;
    // 0x80093914: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x80093918: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
L_8009391C:
    // 0x8009391C: jal         0x800DF714
    // 0x80093920: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    func_800DF714(rdram, ctx);
        goto after_7;
    // 0x80093920: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    after_7:
    // 0x80093924: jal         0x800DF72C
    // 0x80093928: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800DF72C(rdram, ctx);
        goto after_8;
    // 0x80093928: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_8:
    // 0x8009392C: jal         0x800A06E8
    // 0x80093930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A06E8(rdram, ctx);
        goto after_9;
    // 0x80093930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80093934: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80093938: addiu       $a0, $a0, 0x2234
    ctx->r4 = ADD32(ctx->r4, 0X2234);
    // 0x8009393C: jal         0x800DF47C
    // 0x80093940: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800DF47C(rdram, ctx);
        goto after_10;
    // 0x80093940: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x80093944: jal         0x800DF440
    // 0x80093948: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DF440(rdram, ctx);
        goto after_11;
    // 0x80093948: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x8009394C: jal         0x800A946C
    // 0x80093950: nop

    func_800A946C(rdram, ctx);
        goto after_12;
    // 0x80093950: nop

    after_12:
    // 0x80093954: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80093958: bnel        $v0, $at, L_80093A40
    if (ctx->r2 != ctx->r1) {
        // 0x8009395C: lw          $a1, 0x50($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X50);
            goto L_80093A40;
    }
    goto skip_2;
    // 0x8009395C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    skip_2:
    // 0x80093960: jal         0x800DF574
    // 0x80093964: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800DF574(rdram, ctx);
        goto after_13;
    // 0x80093964: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x80093968: b           L_80093A40
    // 0x8009396C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
        goto L_80093A40;
    // 0x8009396C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80093970: lw          $t2, 0x50($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X50);
L_80093974:
    // 0x80093974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093978: lwc1        $f6, 0x98($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X98);
    // 0x8009397C: jal         0x80093738
    // 0x80093980: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    func_80093738(rdram, ctx);
        goto after_14;
    // 0x80093980: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x80093984: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80093988: lw          $t3, 0x50($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X50);
    // 0x8009398C: jal         0x800AE080
    // 0x80093990: lh          $a0, 0x90($t3)
    ctx->r4 = MEM_H(ctx->r11, 0X90);
    func_800AE080(rdram, ctx);
        goto after_15;
    // 0x80093990: lh          $a0, 0x90($t3)
    ctx->r4 = MEM_H(ctx->r11, 0X90);
    after_15:
    // 0x80093994: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80093998: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x8009399C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x800939A0: jal         0x800EE7F8
    // 0x800939A4: addiu       $a1, $a1, 0xAC
    ctx->r5 = ADD32(ctx->r5, 0XAC);
    func_800EE7F8(rdram, ctx);
        goto after_16;
    // 0x800939A4: addiu       $a1, $a1, 0xAC
    ctx->r5 = ADD32(ctx->r5, 0XAC);
    after_16:
    // 0x800939A8: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x800939AC: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x800939B0: jal         0x800EE7F8
    // 0x800939B4: addiu       $a1, $a1, 0xB8
    ctx->r5 = ADD32(ctx->r5, 0XB8);
    func_800EE7F8(rdram, ctx);
        goto after_17;
    // 0x800939B4: addiu       $a1, $a1, 0xB8
    ctx->r5 = ADD32(ctx->r5, 0XB8);
    after_17:
    // 0x800939B8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800939BC: beql        $t4, $zero, L_80093A40
    if (ctx->r12 == 0) {
        // 0x800939C0: lw          $a1, 0x50($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X50);
            goto L_80093A40;
    }
    goto skip_3;
    // 0x800939C0: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    skip_3:
    // 0x800939C4: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x800939C8: lbu         $v1, 0xA0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA0);
    // 0x800939CC: beq         $v1, $zero, L_80093A04
    if (ctx->r3 == 0) {
        // 0x800939D0: sll         $a0, $v1, 16
        ctx->r4 = S32(ctx->r3 << 16);
            goto L_80093A04;
    }
    // 0x800939D0: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x800939D4: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800939D8: jal         0x80100AC4
    // 0x800939DC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80100AC4(rdram, ctx);
        goto after_18;
    // 0x800939DC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_18:
    // 0x800939E0: jal         0x800DF720
    // 0x800939E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF720(rdram, ctx);
        goto after_19;
    // 0x800939E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_19:
    // 0x800939E8: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x800939EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800939F0: jal         0x80100A74
    // 0x800939F4: lbu         $a0, 0xA0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0XA0);
    func_80100A74(rdram, ctx);
        goto after_20;
    // 0x800939F4: lbu         $a0, 0xA0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0XA0);
    after_20:
    // 0x800939F8: jal         0x800DF818
    // 0x800939FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF818(rdram, ctx);
        goto after_21;
    // 0x800939FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_21:
    // 0x80093A00: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
L_80093A04:
    // 0x80093A04: jal         0x800DF714
    // 0x80093A08: lw          $a0, 0x94($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X94);
    func_800DF714(rdram, ctx);
        goto after_22;
    // 0x80093A08: lw          $a0, 0x94($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X94);
    after_22:
    // 0x80093A0C: jal         0x800DF72C
    // 0x80093A10: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800DF72C(rdram, ctx);
        goto after_23;
    // 0x80093A10: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_23:
    // 0x80093A14: jal         0x800DF3E0
    // 0x80093A18: nop

    func_800DF3E0(rdram, ctx);
        goto after_24;
    // 0x80093A18: nop

    after_24:
    // 0x80093A1C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80093A20: addiu       $a0, $a0, 0x2224
    ctx->r4 = ADD32(ctx->r4, 0X2224);
    // 0x80093A24: jal         0x800DF47C
    // 0x80093A28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800DF47C(rdram, ctx);
        goto after_25;
    // 0x80093A28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_25:
    // 0x80093A2C: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x80093A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093A34: jal         0x800A0714
    // 0x80093A38: lh          $a1, 0x9C($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X9C);
    func_800A0714(rdram, ctx);
        goto after_26;
    // 0x80093A38: lh          $a1, 0x9C($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X9C);
    after_26:
    // 0x80093A3C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
L_80093A40:
    // 0x80093A40: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80093A44: jal         0x800EE7F8
    // 0x80093A48: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_27;
    // 0x80093A48: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_27:
    // 0x80093A4C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80093A50: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80093A54: jal         0x800EF04C
    // 0x80093A58: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    func_800EF04C(rdram, ctx);
        goto after_28;
    // 0x80093A58: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    after_28:
    // 0x80093A5C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80093A60: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80093A64: jal         0x800EF04C
    // 0x80093A68: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    func_800EF04C(rdram, ctx);
        goto after_29;
    // 0x80093A68: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    after_29:
    // 0x80093A6C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80093A70: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80093A74: beq         $t8, $zero, L_80093AA4
    if (ctx->r24 == 0) {
        // 0x80093A78: sltiu       $t9, $a1, 0x1
        ctx->r25 = ctx->r5 < 0X1 ? 1 : 0;
            goto L_80093AA4;
    }
    // 0x80093A78: sltiu       $t9, $a1, 0x1
    ctx->r25 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80093A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093A80: jal         0x800923A8
    // 0x80093A84: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_800923A8(rdram, ctx);
        goto after_30;
    // 0x80093A84: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_30:
    // 0x80093A88: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80093A8C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80093A90: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80093A94: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80093A98: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x80093A9C: jal         0x800DE448
    // 0x80093AA0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_800DE448(rdram, ctx);
        goto after_31;
    // 0x80093AA0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_31:
L_80093AA4:
    // 0x80093AA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80093AA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80093AAC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80093AB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093AB8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80093ABC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093AC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80093AC4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80093AC8: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093ACC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80093AD0: lbu         $t7, 0x17($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X17);
    // 0x80093AD4: beql        $t7, $zero, L_80093DE4
    if (ctx->r15 == 0) {
        // 0x80093AD8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80093DE4;
    }
    goto skip_0;
    // 0x80093AD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80093ADC: jal         0x800A89F8
    // 0x80093AE0: nop

    func_800A89F8(rdram, ctx);
        goto after_0;
    // 0x80093AE0: nop

    after_0:
    // 0x80093AE4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80093AE8: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093AEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80093AF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80093AF4: lbu         $a0, 0xA2($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XA2);
    // 0x80093AF8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80093AFC: beq         $a0, $a2, L_80093B1C
    if (ctx->r4 == ctx->r6) {
        // 0x80093B00: nop
    
            goto L_80093B1C;
    }
    // 0x80093B00: nop

    // 0x80093B04: beq         $a0, $at, L_80093B24
    if (ctx->r4 == ctx->r1) {
        // 0x80093B08: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80093B24;
    }
    // 0x80093B08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80093B0C: beql        $a0, $at, L_80093B28
    if (ctx->r4 == ctx->r1) {
        // 0x80093B10: lbu         $a0, 0x19($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X19);
            goto L_80093B28;
    }
    goto skip_1;
    // 0x80093B10: lbu         $a0, 0x19($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X19);
    skip_1:
    // 0x80093B14: b           L_80093B98
    // 0x80093B18: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
        goto L_80093B98;
    // 0x80093B18: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
L_80093B1C:
    // 0x80093B1C: b           L_80093B94
    // 0x80093B20: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
        goto L_80093B94;
    // 0x80093B20: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
L_80093B24:
    // 0x80093B24: lbu         $a0, 0x19($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X19);
L_80093B28:
    // 0x80093B28: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80093B2C: beq         $a0, $zero, L_80093B44
    if (ctx->r4 == 0) {
        // 0x80093B30: nop
    
            goto L_80093B44;
    }
    // 0x80093B30: nop

    // 0x80093B34: beq         $a0, $a2, L_80093B4C
    if (ctx->r4 == ctx->r6) {
        // 0x80093B38: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_80093B4C;
    }
    // 0x80093B38: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80093B3C: b           L_80093B98
    // 0x80093B40: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
        goto L_80093B98;
    // 0x80093B40: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
L_80093B44:
    // 0x80093B44: b           L_80093B94
    // 0x80093B48: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
        goto L_80093B94;
    // 0x80093B48: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
L_80093B4C:
    // 0x80093B4C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x80093B50: jal         0x800A4C68
    // 0x80093B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C68(rdram, ctx);
        goto after_1;
    // 0x80093B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80093B58: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80093B5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80093B60: bne         $v0, $t1, L_80093B94
    if (ctx->r2 != ctx->r9) {
        // 0x80093B64: nop
    
            goto L_80093B94;
    }
    // 0x80093B64: nop

    // 0x80093B68: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093B6C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80093B70: lbu         $t2, 0xA3($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XA3);
    // 0x80093B74: beql        $t2, $zero, L_80093B88
    if (ctx->r10 == 0) {
        // 0x80093B78: lbu         $t4, 0x18($v1)
        ctx->r12 = MEM_BU(ctx->r3, 0X18);
            goto L_80093B88;
    }
    goto skip_2;
    // 0x80093B78: lbu         $t4, 0x18($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X18);
    skip_2:
    // 0x80093B7C: b           L_80093B94
    // 0x80093B80: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
        goto L_80093B94;
    // 0x80093B80: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x80093B84: lbu         $t4, 0x18($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X18);
L_80093B88:
    // 0x80093B88: bne         $t4, $zero, L_80093B94
    if (ctx->r12 != 0) {
        // 0x80093B8C: nop
    
            goto L_80093B94;
    }
    // 0x80093B8C: nop

    // 0x80093B90: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_80093B94:
    // 0x80093B94: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
L_80093B98:
    // 0x80093B98: beql        $t5, $zero, L_80093DE4
    if (ctx->r13 == 0) {
        // 0x80093B9C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80093DE4;
    }
    goto skip_3;
    // 0x80093B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x80093BA0: beq         $t5, $a2, L_80093C64
    if (ctx->r13 == ctx->r6) {
        // 0x80093BA4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80093C64;
    }
    // 0x80093BA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80093BA8: bne         $t5, $at, L_80093C64
    if (ctx->r13 != ctx->r1) {
        // 0x80093BAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80093C64;
    }
    // 0x80093BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093BB0: jal         0x8009C128
    // 0x80093BB4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x80093BB4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x80093BB8: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093BBC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80093BC0: lwc1        $f4, 0x74($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X74);
    // 0x80093BC4: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80093BC8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80093BCC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80093BD0: jal         0x800E3E8C
    // 0x80093BD4: nop

    func_800E3E8C(rdram, ctx);
        goto after_3;
    // 0x80093BD4: nop

    after_3:
    // 0x80093BD8: beql        $v0, $zero, L_80093DE4
    if (ctx->r2 == 0) {
        // 0x80093BDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80093DE4;
    }
    goto skip_4;
    // 0x80093BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x80093BE0: jal         0x800BEC1C
    // 0x80093BE4: nop

    func_800BEC1C(rdram, ctx);
        goto after_4;
    // 0x80093BE4: nop

    after_4:
    // 0x80093BE8: beq         $v0, $zero, L_80093C64
    if (ctx->r2 == 0) {
        // 0x80093BEC: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_80093C64;
    }
    // 0x80093BEC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80093BF0: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093BF4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80093BF8: lbu         $t6, 0xA5($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XA5);
    // 0x80093BFC: bnel        $t6, $zero, L_80093C44
    if (ctx->r14 != 0) {
        // 0x80093C00: lbu         $v0, 0xA4($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0XA4);
            goto L_80093C44;
    }
    goto skip_5;
    // 0x80093C00: lbu         $v0, 0xA4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA4);
    skip_5:
    // 0x80093C04: sb          $t7, 0xA5($v1)
    MEM_B(0XA5, ctx->r3) = ctx->r15;
    // 0x80093C08: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80093C0C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80093C10: jal         0x800EF04C
    // 0x80093C14: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    func_800EF04C(rdram, ctx);
        goto after_5;
    // 0x80093C14: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    after_5:
    // 0x80093C18: jal         0x800BEC28
    // 0x80093C1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800BEC28(rdram, ctx);
        goto after_6;
    // 0x80093C1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80093C20: lw          $a2, 0x50($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X50);
    // 0x80093C24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80093C28: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80093C2C: jal         0x80087950
    // 0x80093C30: addiu       $a2, $a2, 0xA6
    ctx->r6 = ADD32(ctx->r6, 0XA6);
    _dbzone_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x80093C30: addiu       $a2, $a2, 0xA6
    ctx->r6 = ADD32(ctx->r6, 0XA6);
    after_7:
    // 0x80093C34: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x80093C38: sb          $v0, 0xA4($t8)
    MEM_B(0XA4, ctx->r24) = ctx->r2;
    // 0x80093C3C: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093C40: lbu         $v0, 0xA4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA4);
L_80093C44:
    // 0x80093C44: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80093C48: addiu       $a1, $v1, 0xA6
    ctx->r5 = ADD32(ctx->r3, 0XA6);
    // 0x80093C4C: beql        $v0, $zero, L_80093C68
    if (ctx->r2 == 0) {
        // 0x80093C50: lw          $v1, 0x50($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X50);
            goto L_80093C68;
    }
    goto skip_6;
    // 0x80093C50: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    skip_6:
    // 0x80093C54: jal         0x80088790
    // 0x80093C58: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    _glzone_entrypoint_6(rdram, ctx);
        goto after_8;
    // 0x80093C58: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_8:
    // 0x80093C5C: beql        $v0, $zero, L_80093DE4
    if (ctx->r2 == 0) {
        // 0x80093C60: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80093DE4;
    }
    goto skip_7;
    // 0x80093C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
L_80093C64:
    // 0x80093C64: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
L_80093C68:
    // 0x80093C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80093C6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80093C70: lbu         $a0, 0xA2($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XA2);
    // 0x80093C74: beql        $a0, $a2, L_80093C9C
    if (ctx->r4 == ctx->r6) {
        // 0x80093C78: lbu         $t9, 0x18($v1)
        ctx->r25 = MEM_BU(ctx->r3, 0X18);
            goto L_80093C9C;
    }
    goto skip_8;
    // 0x80093C78: lbu         $t9, 0x18($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X18);
    skip_8:
    // 0x80093C7C: beq         $a0, $at, L_80093D50
    if (ctx->r4 == ctx->r1) {
        // 0x80093C80: lw          $t5, 0x40($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X40);
            goto L_80093D50;
    }
    // 0x80093C80: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80093C84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80093C88: beq         $a0, $at, L_80093D9C
    if (ctx->r4 == ctx->r1) {
        // 0x80093C8C: lw          $t7, 0x40($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X40);
            goto L_80093D9C;
    }
    // 0x80093C8C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80093C90: b           L_80093DE4
    // 0x80093C94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80093DE4;
    // 0x80093C94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093C98: lbu         $t9, 0x18($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X18);
L_80093C9C:
    // 0x80093C9C: bnel        $t9, $zero, L_80093CC0
    if (ctx->r25 != 0) {
        // 0x80093CA0: lbu         $t1, 0x10($v1)
        ctx->r9 = MEM_BU(ctx->r3, 0X10);
            goto L_80093CC0;
    }
    goto skip_9;
    // 0x80093CA0: lbu         $t1, 0x10($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X10);
    skip_9:
    // 0x80093CA4: jal         0x800A4C68
    // 0x80093CA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C68(rdram, ctx);
        goto after_9;
    // 0x80093CA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80093CAC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80093CB0: beql        $v0, $t0, L_80093DE4
    if (ctx->r2 == ctx->r8) {
        // 0x80093CB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80093DE4;
    }
    goto skip_10;
    // 0x80093CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_10:
    // 0x80093CB8: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093CBC: lbu         $t1, 0x10($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X10);
L_80093CC0:
    // 0x80093CC0: bnel        $t1, $zero, L_80093CE4
    if (ctx->r9 != 0) {
        // 0x80093CC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80093CE4;
    }
    goto skip_11;
    // 0x80093CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_11:
    // 0x80093CC8: jal         0x8008CA98
    // 0x80093CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CA98(rdram, ctx);
        goto after_10;
    // 0x80093CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80093CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093CD4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80093CD8: jal         0x8009375C
    // 0x80093CDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009375C(rdram, ctx);
        goto after_11;
    // 0x80093CDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80093CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80093CE4:
    // 0x80093CE4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80093CE8: jal         0x80093864
    // 0x80093CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80093864(rdram, ctx);
        goto after_12;
    // 0x80093CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80093CF0: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80093CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093CF8: lbu         $t2, 0xA3($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XA3);
    // 0x80093CFC: addiu       $a1, $v1, 0xAC
    ctx->r5 = ADD32(ctx->r3, 0XAC);
    // 0x80093D00: beql        $t2, $zero, L_80093DE4
    if (ctx->r10 == 0) {
        // 0x80093D04: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80093DE4;
    }
    goto skip_12;
    // 0x80093D04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_12:
    // 0x80093D08: jal         0x8009216C
    // 0x80093D0C: addiu       $a2, $v1, 0xB8
    ctx->r6 = ADD32(ctx->r3, 0XB8);
    func_8009216C(rdram, ctx);
        goto after_13;
    // 0x80093D0C: addiu       $a2, $v1, 0xB8
    ctx->r6 = ADD32(ctx->r3, 0XB8);
    after_13:
    // 0x80093D10: lw          $t3, 0x50($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X50);
    // 0x80093D14: lbu         $t4, 0xA1($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XA1);
    // 0x80093D18: bnel        $t4, $zero, L_80093D3C
    if (ctx->r12 != 0) {
        // 0x80093D1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80093D3C;
    }
    goto skip_13;
    // 0x80093D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_13:
    // 0x80093D20: jal         0x8008D058
    // 0x80093D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D058(rdram, ctx);
        goto after_14;
    // 0x80093D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80093D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093D2C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80093D30: jal         0x8009375C
    // 0x80093D34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009375C(rdram, ctx);
        goto after_15;
    // 0x80093D34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x80093D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80093D3C:
    // 0x80093D3C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80093D40: jal         0x80093864
    // 0x80093D44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80093864(rdram, ctx);
        goto after_16;
    // 0x80093D44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x80093D48: b           L_80093DE4
    // 0x80093D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80093DE4;
    // 0x80093D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80093D50:
    // 0x80093D50: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80093D54: bnel        $t5, $at, L_80093DE4
    if (ctx->r13 != ctx->r1) {
        // 0x80093D58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80093DE4;
    }
    goto skip_14;
    // 0x80093D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_14:
    // 0x80093D5C: lbu         $t6, 0x10($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X10);
    // 0x80093D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093D64: bnel        $t6, $zero, L_80093D88
    if (ctx->r14 != 0) {
        // 0x80093D68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80093D88;
    }
    goto skip_15;
    // 0x80093D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_15:
    // 0x80093D6C: jal         0x80084290
    // 0x80093D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bsfirstp_entrypoint_1(rdram, ctx);
        goto after_17;
    // 0x80093D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x80093D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093D78: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80093D7C: jal         0x8009375C
    // 0x80093D80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009375C(rdram, ctx);
        goto after_18;
    // 0x80093D80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x80093D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80093D88:
    // 0x80093D88: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80093D8C: jal         0x80093864
    // 0x80093D90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80093864(rdram, ctx);
        goto after_19;
    // 0x80093D90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x80093D94: b           L_80093DE4
    // 0x80093D98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80093DE4;
    // 0x80093D98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80093D9C:
    // 0x80093D9C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80093DA0: bnel        $t7, $at, L_80093DE4
    if (ctx->r15 != ctx->r1) {
        // 0x80093DA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80093DE4;
    }
    goto skip_16;
    // 0x80093DA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_16:
    // 0x80093DA8: lbu         $t8, 0x10($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X10);
    // 0x80093DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093DB0: bnel        $t8, $zero, L_80093DD4
    if (ctx->r24 != 0) {
        // 0x80093DB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80093DD4;
    }
    goto skip_17;
    // 0x80093DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_17:
    // 0x80093DB8: jal         0x80084290
    // 0x80093DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bsfirstp_entrypoint_1(rdram, ctx);
        goto after_20;
    // 0x80093DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x80093DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093DC4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80093DC8: jal         0x8009375C
    // 0x80093DCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009375C(rdram, ctx);
        goto after_21;
    // 0x80093DCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x80093DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80093DD4:
    // 0x80093DD4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80093DD8: jal         0x80093864
    // 0x80093DDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80093864(rdram, ctx);
        goto after_22;
    // 0x80093DDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x80093DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80093DE4:
    // 0x80093DE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80093DE8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80093DEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093DF4: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80093DF8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80093DFC: lbu         $t7, 0xA2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XA2);
    // 0x80093E00: bne         $a1, $t7, L_80093E10
    if (ctx->r5 != ctx->r15) {
            // 0x80093E04: nop

    func_80093E10(rdram, ctx);
    return;
    }
    // 0x80093E04: nop

    // 0x80093E08: jr          $ra
    // 0x80093E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80093E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80093E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093E10: jr          $ra
    // 0x80093E14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80093E14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80093E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093E18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80093E1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093E20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80093E24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80093E28: jal         0x800A89F8
    // 0x80093E2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_800A89F8(rdram, ctx);
        goto after_0;
    // 0x80093E2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80093E30: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80093E34: jal         0x800A5090
    // 0x80093E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A5090(rdram, ctx);
        goto after_1;
    // 0x80093E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80093E3C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80093E40: jal         0x800A88C4
    // 0x80093E44: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A88C4(rdram, ctx);
        goto after_2;
    // 0x80093E44: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80093E48: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80093E4C: jal         0x800E44FC
    // 0x80093E50: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800E44FC(rdram, ctx);
        goto after_3;
    // 0x80093E50: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x80093E54: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x80093E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093E5C: lbu         $t7, 0xA1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XA1);
    // 0x80093E60: bnel        $t7, $zero, L_80093E98
    if (ctx->r15 != 0) {
        // 0x80093E64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80093E98;
    }
    goto skip_0;
    // 0x80093E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80093E68: jal         0x80084290
    // 0x80093E6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bsfirstp_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x80093E6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80093E70: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x80093E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093E78: addiu       $a1, $v0, 0xAC
    ctx->r5 = ADD32(ctx->r2, 0XAC);
    // 0x80093E7C: jal         0x80084288
    // 0x80093E80: addiu       $a2, $v0, 0xB8
    ctx->r6 = ADD32(ctx->r2, 0XB8);
    _bsfirstp_entrypoint_0(rdram, ctx);
        goto after_5;
    // 0x80093E80: addiu       $a2, $v0, 0xB8
    ctx->r6 = ADD32(ctx->r2, 0XB8);
    after_5:
    // 0x80093E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80093E88: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80093E8C: jal         0x8009375C
    // 0x80093E90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009375C(rdram, ctx);
        goto after_6;
    // 0x80093E90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80093E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80093E98:
    // 0x80093E98: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80093E9C: jal         0x80093864
    // 0x80093EA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80093864(rdram, ctx);
        goto after_7;
    // 0x80093EA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80093EA4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80093EA8: jal         0x800A88C4
    // 0x80093EAC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800A88C4(rdram, ctx);
        goto after_8;
    // 0x80093EAC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_8:
    // 0x80093EB0: jal         0x800E44FC
    // 0x80093EB4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_800E44FC(rdram, ctx);
        goto after_9;
    // 0x80093EB4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_9:
    // 0x80093EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093EBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80093EC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80093EC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093ECC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80093ED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093ED4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80093ED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80093EDC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80093EE0: jal         0x8009216C
    // 0x80093EE4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8009216C(rdram, ctx);
        goto after_0;
    // 0x80093EE4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80093EE8: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80093EEC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80093EF0: jal         0x800EE7F8
    // 0x80093EF4: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80093EF4: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_1:
    // 0x80093EF8: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80093EFC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80093F00: jal         0x800EF04C
    // 0x80093F04: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x80093F04: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    after_2:
    // 0x80093F08: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80093F0C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80093F10: jal         0x800EF04C
    // 0x80093F14: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x80093F14: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    after_3:
    // 0x80093F18: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x80093F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093F20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80093F24: lwc1        $f0, 0x1C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80093F28: jr          $ra
    // 0x80093F2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80093F2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80093F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093F38: jal         0x8009EA2C
    // 0x80093F3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009EA2C(rdram, ctx);
        goto after_0;
    // 0x80093F3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80093F40: beq         $v0, $zero, L_80093F5C
    if (ctx->r2 == 0) {
        // 0x80093F44: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_80093F5C;
    }
    // 0x80093F44: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80093F48: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x80093F4C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80093F50: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80093F54: b           L_80093F6C
    // 0x80093F58: lw          $v0, 0x7DDC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7DDC);
        goto L_80093F6C;
    // 0x80093F58: lw          $v0, 0x7DDC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7DDC);
L_80093F5C:
    // 0x80093F5C: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x80093F60: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80093F64: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80093F68: lw          $v0, 0x7DD8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7DD8);
L_80093F6C:
    // 0x80093F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80093F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093F74: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093F7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80093F80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093F84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80093F88: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80093F8C: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x80093F90: jal         0x800D674C
    // 0x80093F94: lw          $a0, 0x10C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10C);
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x80093F94: lw          $a0, 0x10C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10C);
    after_0:
    // 0x80093F98: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80093F9C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80093FA0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80093FA4: bnel        $t8, $zero, L_80093FC4
    if (ctx->r24 != 0) {
        // 0x80093FA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80093FC4;
    }
    goto skip_0;
    // 0x80093FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80093FAC: lw          $t0, 0x50($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X50);
    // 0x80093FB0: lw          $a0, 0x10C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10C);
    // 0x80093FB4: jal         0x800D62E4
    // 0x80093FB8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800D62E4(rdram, ctx);
        goto after_1;
    // 0x80093FB8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80093FBC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80093FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80093FC4:
    // 0x80093FC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80093FC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80093FCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80093FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093FD8: addiu       $at, $zero, 0x607
    ctx->r1 = ADD32(0, 0X607);
    // 0x80093FDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093FE0: bne         $a1, $at, L_80094054
    if (ctx->r5 != ctx->r1) {
        // 0x80093FE4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80094054;
    }
    // 0x80093FE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80093FE8: jal         0x800EA05C
    // 0x80093FEC: nop

    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x80093FEC: nop

    after_0:
    // 0x80093FF0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80093FF4: addiu       $a3, $a3, 0x7DF0
    ctx->r7 = ADD32(ctx->r7, 0X7DF0);
    // 0x80093FF8: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
    // 0x80093FFC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80094000: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80094004: beq         $a2, $t6, L_80094030
    if (ctx->r6 == ctx->r14) {
        // 0x80094008: lui         $t7, 0x8011
        ctx->r15 = S32(0X8011 << 16);
            goto L_80094030;
    }
    // 0x80094008: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8009400C: addiu       $v1, $t7, 0x7DF0
    ctx->r3 = ADD32(ctx->r15, 0X7DF0);
    // 0x80094010: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
L_80094014:
    // 0x80094014: beql        $v0, $a0, L_80094034
    if (ctx->r2 == ctx->r4) {
        // 0x80094018: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_80094034;
    }
    goto skip_0;
    // 0x80094018: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    skip_0:
    // 0x8009401C: lh          $a0, 0x4($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X4);
    // 0x80094020: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80094024: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80094028: bne         $a2, $a0, L_80094014
    if (ctx->r6 != ctx->r4) {
        // 0x8009402C: nop
    
            goto L_80094014;
    }
    // 0x8009402C: nop

L_80094030:
    // 0x80094030: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
L_80094034:
    // 0x80094034: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80094038: jal         0x80093F30
    // 0x8009403C: lh          $a0, 0x2($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X2);
    func_80093F30(rdram, ctx);
        goto after_1;
    // 0x8009403C: lh          $a0, 0x2($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X2);
    after_1:
    // 0x80094040: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80094044: jal         0x800941C8
    // 0x80094048: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800941C8(rdram, ctx);
        goto after_2;
    // 0x80094048: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x8009404C: b           L_80094064
    // 0x80094050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80094064;
    // 0x80094050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80094054:
    // 0x80094054: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80094058: jal         0x800941C8
    // 0x8009405C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800941C8(rdram, ctx);
        goto after_3;
    // 0x8009405C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80094060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80094064:
    // 0x80094064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094068: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094070: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80094074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80094078: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009407C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80094080: lw          $v1, 0x50($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X50);
    // 0x80094084: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80094088: lw          $t6, 0x10C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10C);
    // 0x8009408C: beql        $t6, $zero, L_800941B8
    if (ctx->r14 == 0) {
        // 0x80094090: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800941B8;
    }
    goto skip_0;
    // 0x80094090: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80094094: jal         0x800D90A4
    // 0x80094098: addiu       $a0, $v1, 0x114
    ctx->r4 = ADD32(ctx->r3, 0X114);
    func_800D90A4(rdram, ctx);
        goto after_0;
    // 0x80094098: addiu       $a0, $v1, 0x114
    ctx->r4 = ADD32(ctx->r3, 0X114);
    after_0:
    // 0x8009409C: beql        $v0, $zero, L_800941B8
    if (ctx->r2 == 0) {
        // 0x800940A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800941B8;
    }
    goto skip_1;
    // 0x800940A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x800940A4: jal         0x800E3980
    // 0x800940A8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_800E3980(rdram, ctx);
        goto after_1;
    // 0x800940A8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x800940AC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800940B0: jal         0x800EEAD4
    // 0x800940B4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800EEAD4(rdram, ctx);
        goto after_2;
    // 0x800940B4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x800940B8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800940BC: addiu       $v0, $v0, 0x7DD0
    ctx->r2 = ADD32(ctx->r2, 0X7DD0);
    // 0x800940C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800940C4:
    // 0x800940C4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800940C8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800940CC: nop

    // 0x800940D0: bc1tl       L_800940EC
    if (c1cs) {
        // 0x800940D4: addiu       $a0, $a1, -0x1
        ctx->r4 = ADD32(ctx->r5, -0X1);
            goto L_800940EC;
    }
    goto skip_2;
    // 0x800940D4: addiu       $a0, $a1, -0x1
    ctx->r4 = ADD32(ctx->r5, -0X1);
    skip_2:
    // 0x800940D8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800940DC: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x800940E0: bne         $at, $zero, L_800940C4
    if (ctx->r1 != 0) {
        // 0x800940E4: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_800940C4;
    }
    // 0x800940E4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800940E8: addiu       $a0, $a1, -0x1
    ctx->r4 = ADD32(ctx->r5, -0X1);
L_800940EC:
    // 0x800940EC: jal         0x80093F30
    // 0x800940F0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_80093F30(rdram, ctx);
        goto after_3;
    // 0x800940F0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_3:
    // 0x800940F4: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x800940F8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800940FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094100: lw          $t7, 0x10C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10C);
    // 0x80094104: beql        $v0, $t7, L_8009419C
    if (ctx->r2 == ctx->r15) {
        // 0x80094108: lw          $a0, 0x110($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X110);
            goto L_8009419C;
    }
    goto skip_3;
    // 0x80094108: lw          $a0, 0x110($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X110);
    skip_3:
    // 0x8009410C: jal         0x800942D0
    // 0x80094110: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_800942D0(rdram, ctx);
        goto after_4;
    // 0x80094110: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_4:
    // 0x80094114: beq         $v0, $zero, L_80094174
    if (ctx->r2 == 0) {
        // 0x80094118: lw          $a2, 0x28($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X28);
            goto L_80094174;
    }
    // 0x80094118: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8009411C: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80094120: lw          $a0, 0x110($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X110);
    // 0x80094124: beql        $a0, $zero, L_80094148
    if (ctx->r4 == 0) {
        // 0x80094128: sw          $a2, 0x110($v1)
        MEM_W(0X110, ctx->r3) = ctx->r6;
            goto L_80094148;
    }
    goto skip_4;
    // 0x80094128: sw          $a2, 0x110($v1)
    MEM_W(0X110, ctx->r3) = ctx->r6;
    skip_4:
    // 0x8009412C: beql        $a2, $a0, L_80094148
    if (ctx->r6 == ctx->r4) {
        // 0x80094130: sw          $a2, 0x110($v1)
        MEM_W(0X110, ctx->r3) = ctx->r6;
            goto L_80094148;
    }
    goto skip_5;
    // 0x80094130: sw          $a2, 0x110($v1)
    MEM_W(0X110, ctx->r3) = ctx->r6;
    skip_5:
    // 0x80094134: jal         0x800E4BB8
    // 0x80094138: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800E4BB8(rdram, ctx);
        goto after_5;
    // 0x80094138: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_5:
    // 0x8009413C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80094140: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80094144: sw          $a2, 0x110($v1)
    MEM_W(0X110, ctx->r3) = ctx->r6;
L_80094148:
    // 0x80094148: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x8009414C: jal         0x800E488C
    // 0x80094150: lw          $a0, 0x110($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X110);
    func_800E488C(rdram, ctx);
        goto after_6;
    // 0x80094150: lw          $a0, 0x110($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X110);
    after_6:
    // 0x80094154: beql        $v0, $zero, L_800941B8
    if (ctx->r2 == 0) {
        // 0x80094158: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800941B8;
    }
    goto skip_6;
    // 0x80094158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x8009415C: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x80094160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094164: jal         0x800941C8
    // 0x80094168: lw          $a1, 0x110($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X110);
    func_800941C8(rdram, ctx);
        goto after_7;
    // 0x80094168: lw          $a1, 0x110($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X110);
    after_7:
    // 0x8009416C: b           L_800941B8
    // 0x80094170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800941B8;
    // 0x80094170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80094174:
    // 0x80094174: lw          $t0, 0x50($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X50);
    // 0x80094178: lw          $a0, 0x110($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X110);
    // 0x8009417C: beql        $a0, $zero, L_800941B8
    if (ctx->r4 == 0) {
        // 0x80094180: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800941B8;
    }
    goto skip_7;
    // 0x80094180: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x80094184: jal         0x800E4BB8
    // 0x80094188: nop

    func_800E4BB8(rdram, ctx);
        goto after_8;
    // 0x80094188: nop

    after_8:
    // 0x8009418C: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x80094190: b           L_800941B4
    // 0x80094194: sw          $zero, 0x110($t1)
    MEM_W(0X110, ctx->r9) = 0;
        goto L_800941B4;
    // 0x80094194: sw          $zero, 0x110($t1)
    MEM_W(0X110, ctx->r9) = 0;
    // 0x80094198: lw          $a0, 0x110($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X110);
L_8009419C:
    // 0x8009419C: beql        $a0, $zero, L_800941B8
    if (ctx->r4 == 0) {
        // 0x800941A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800941B8;
    }
    goto skip_8;
    // 0x800941A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x800941A4: jal         0x800E4BB8
    // 0x800941A8: nop

    func_800E4BB8(rdram, ctx);
        goto after_9;
    // 0x800941A8: nop

    after_9:
    // 0x800941AC: lw          $t2, 0x50($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X50);
    // 0x800941B0: sw          $zero, 0x110($t2)
    MEM_W(0X110, ctx->r10) = 0;
L_800941B4:
    // 0x800941B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800941B8:
    // 0x800941B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800941BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800941C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800941C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800941C8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800941CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800941D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800941D4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800941D8: lw          $v1, 0x50($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X50);
    // 0x800941DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800941E0: lw          $a2, 0x10C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X10C);
    // 0x800941E4: beq         $a2, $zero, L_80094204
    if (ctx->r6 == 0) {
        // 0x800941E8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80094204;
    }
    // 0x800941E8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800941EC: jal         0x800D70F8
    // 0x800941F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D70F8(rdram, ctx);
        goto after_0;
    // 0x800941F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800941F4: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x800941F8: jal         0x800D6CEC
    // 0x800941FC: lw          $a0, 0x10C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10C);
    func_800D6CEC(rdram, ctx);
        goto after_1;
    // 0x800941FC: lw          $a0, 0x10C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10C);
    after_1:
    // 0x80094200: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
L_80094204:
    // 0x80094204: lbu         $v0, 0x12($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X12);
    // 0x80094208: beq         $v0, $zero, L_80094228
    if (ctx->r2 == 0) {
        // 0x8009420C: sll         $a0, $v0, 16
        ctx->r4 = S32(ctx->r2 << 16);
            goto L_80094228;
    }
    // 0x8009420C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80094210: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80094214: jal         0x80100E18
    // 0x80094218: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80100E18(rdram, ctx);
        goto after_2;
    // 0x80094218: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x8009421C: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x80094220: sb          $zero, 0x12($t8)
    MEM_B(0X12, ctx->r24) = 0;
    // 0x80094224: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
L_80094228:
    // 0x80094228: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8009422C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094230: sw          $t9, 0x10C($v1)
    MEM_W(0X10C, ctx->r3) = ctx->r25;
    // 0x80094234: lw          $t0, 0x50($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X50);
    // 0x80094238: sw          $zero, 0x110($t0)
    MEM_W(0X110, ctx->r8) = 0;
    // 0x8009423C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80094240: beql        $t1, $zero, L_800942C0
    if (ctx->r9 == 0) {
        // 0x80094244: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800942C0;
    }
    goto skip_0;
    // 0x80094244: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80094248: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009424C: lw          $t2, 0x50($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X50);
    // 0x80094250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80094254: jal         0x80093F7C
    // 0x80094258: swc1        $f4, 0x114($t2)
    MEM_W(0X114, ctx->r10) = ctx->f4.u32l;
    func_80093F7C(rdram, ctx);
        goto after_3;
    // 0x80094258: swc1        $f4, 0x114($t2)
    MEM_W(0X114, ctx->r10) = ctx->f4.u32l;
    after_3:
    // 0x8009425C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80094260: lw          $t3, 0x50($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X50);
    // 0x80094264: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80094268: jal         0x800D70F8
    // 0x8009426C: lw          $a0, 0x10C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10C);
    func_800D70F8(rdram, ctx);
        goto after_4;
    // 0x8009426C: lw          $a0, 0x10C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10C);
    after_4:
    // 0x80094270: jal         0x800B26F0
    // 0x80094274: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800B26F0(rdram, ctx);
        goto after_5;
    // 0x80094274: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80094278: beq         $v0, $zero, L_80094288
    if (ctx->r2 == 0) {
        // 0x8009427C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80094288;
    }
    // 0x8009427C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094280: b           L_8009428C
    // 0x80094284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8009428C;
    // 0x80094284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80094288:
    // 0x80094288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8009428C:
    // 0x8009428C: jal         0x800A25D0
    // 0x80094290: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    func_800A25D0(rdram, ctx);
        goto after_6;
    // 0x80094290: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_6:
    // 0x80094294: lw          $t4, 0x50($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X50);
    // 0x80094298: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8009429C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800942A0: lw          $a1, 0x10C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X10C);
    // 0x800942A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800942A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800942AC: jal         0x80100D24
    // 0x800942B0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80100D24(rdram, ctx);
        goto after_7;
    // 0x800942B0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_7:
    // 0x800942B4: lw          $t5, 0x50($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X50);
    // 0x800942B8: sb          $v0, 0x12($t5)
    MEM_B(0X12, ctx->r13) = ctx->r2;
    // 0x800942BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800942C0:
    // 0x800942C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800942C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800942C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800942D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800942D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800942D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800942D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800942DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800942E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800942E4: jal         0x8001BDAC
    // 0x800942E8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_8001BDAC(rdram, ctx);
        goto after_0;
    // 0x800942E8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800942EC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800942F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800942F4: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800942F8: lw          $t7, 0x50($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X50);
    // 0x800942FC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80094300: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80094304: lw          $t8, 0x110($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X110);
    // 0x80094308: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009430C: ori         $at, $at, 0x2001
    ctx->r1 = ctx->r1 | 0X2001;
    // 0x80094310: beql        $t8, $zero, L_8009432C
    if (ctx->r24 == 0) {
        // 0x80094314: lw          $v0, 0x1C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X1C);
            goto L_8009432C;
    }
    goto skip_0;
    // 0x80094314: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80094318: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8009431C: lw          $t2, 0x7DD4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7DD4);
    // 0x80094320: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x80094324: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80094328: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_8009432C:
    // 0x8009432C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094330: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80094334: slt         $t4, $v0, $at
    ctx->r12 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80094338: jr          $ra
    // 0x8009433C: xori        $v0, $t4, 0x1
    ctx->r2 = ctx->r12 ^ 0X1;
    return;
    // 0x8009433C: xori        $v0, $t4, 0x1
    ctx->r2 = ctx->r12 ^ 0X1;
;}
RECOMP_FUNC void func_80094340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094340: jr          $ra
    // 0x80094344: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80094344: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_80094348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094348: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x8009434C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80094350: lbu         $t7, 0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2);
    // 0x80094354: and         $t8, $t7, $a1
    ctx->r24 = ctx->r15 & ctx->r5;
    // 0x80094358: beq         $t8, $zero, L_80094368
    if (ctx->r24 == 0) {
            // 0x8009435C: nop

    func_80094368(rdram, ctx);
    return;
    }
    // 0x8009435C: nop

    // 0x80094360: jr          $ra
    // 0x80094364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80094364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80094368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094368: jr          $ra
    // 0x8009436C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8009436C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80094370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094378: jal         0x800946C4
    // 0x8009437C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800946C4(rdram, ctx);
        goto after_0;
    // 0x8009437C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80094380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094388: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094398: jal         0x800C954C
    // 0x8009439C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800C954C(rdram, ctx);
        goto after_0;
    // 0x8009439C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800943A0: bne         $v0, $zero, L_800943F0
    if (ctx->r2 != 0) {
        // 0x800943A4: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_800943F0;
    }
    // 0x800943A4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800943A8: jal         0x800F6774
    // 0x800943AC: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    func_800F6774(rdram, ctx);
        goto after_1;
    // 0x800943AC: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    after_1:
    // 0x800943B0: beq         $v0, $zero, L_800943F0
    if (ctx->r2 == 0) {
        // 0x800943B4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_800943F0;
    }
    // 0x800943B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800943B8: jal         0x800852F0
    // 0x800943BC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    _batimer_decrement(rdram, ctx);
        goto after_2;
    // 0x800943BC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_2:
    // 0x800943C0: beq         $v0, $zero, L_800943F0
    if (ctx->r2 == 0) {
        // 0x800943C4: nop
    
            goto L_800943F0;
    }
    // 0x800943C4: nop

    // 0x800943C8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800943CC: jal         0x8009E9F0
    // 0x800943D0: nop

    func_8009E9F0(rdram, ctx);
        goto after_3;
    // 0x800943D0: nop

    after_3:
    // 0x800943D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800943D8: jal         0x80094430
    // 0x800943DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80094430(rdram, ctx);
        goto after_4;
    // 0x800943DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x800943E0: addiu       $a0, $zero, 0x1CD
    ctx->r4 = ADD32(0, 0X1CD);
    // 0x800943E4: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
    // 0x800943E8: jal         0x80101180
    // 0x800943EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80101180(rdram, ctx);
        goto after_5;
    // 0x800943EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_800943F0:
    // 0x800943F0: jal         0x800C0638
    // 0x800943F4: nop

    func_800C0638(rdram, ctx);
        goto after_6;
    // 0x800943F4: nop

    after_6:
    // 0x800943F8: bne         $v0, $zero, L_80094420
    if (ctx->r2 != 0) {
        // 0x800943FC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80094420;
    }
    // 0x800943FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80094400: jal         0x80085300
    // 0x80094404: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    _batimer_get(rdram, ctx);
        goto after_7;
    // 0x80094404: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_7:
    // 0x80094408: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8009440C: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x80094410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80094414: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80094418: jal         0x800D2498
    // 0x8009441C: nop

    func_800D2498(rdram, ctx);
        goto after_8;
    // 0x8009441C: nop

    after_8:
L_80094420:
    // 0x80094420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094428: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80094434: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80094438: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009443C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80094440: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80094444: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80094448: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8009444C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80094450: bc1t        L_80094468
    if (c1cs) {
        // 0x80094454: nop
    
            goto L_80094468;
    }
    // 0x80094454: nop

    // 0x80094458: jal         0x800946C4
    // 0x8009445C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800946C4(rdram, ctx);
        goto after_0;
    // 0x8009445C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80094460: b           L_80094474
    // 0x80094464: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
        goto L_80094474;
    // 0x80094464: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80094468:
    // 0x80094468: jal         0x80094370
    // 0x8009446C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094370(rdram, ctx);
        goto after_1;
    // 0x8009446C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80094470: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80094474:
    // 0x80094474: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80094478: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8009447C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094480: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80094484: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80094488: bc1f        L_800944B4
    if (!c1cs) {
        // 0x8009448C: nop
    
            goto L_800944B4;
    }
    // 0x8009448C: nop

    // 0x80094490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094494: jal         0x800947EC
    // 0x80094498: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800947EC(rdram, ctx);
        goto after_2;
    // 0x80094498: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x8009449C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800944A0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x800944A4: jal         0x80085338
    // 0x800944A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    _batimer_set(rdram, ctx);
        goto after_3;
    // 0x800944A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x800944AC: b           L_800944D0
    // 0x800944B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800944D0;
    // 0x800944B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800944B4:
    // 0x800944B4: jal         0x800947EC
    // 0x800944B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_4;
    // 0x800944B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800944BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800944C0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x800944C4: jal         0x80085338
    // 0x800944C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    _batimer_set(rdram, ctx);
        goto after_5;
    // 0x800944C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_5:
    // 0x800944CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800944D0:
    // 0x800944D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800944D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800944D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800944E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800944E0: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x800944E4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800944E8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800944EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800944F0: jr          $ra
    // 0x800944F4: lbu         $v0, 0x7E3C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7E3C);
    return;
    // 0x800944F4: lbu         $v0, 0x7E3C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7E3C);
;}
RECOMP_FUNC void func_800944F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800944F8: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x800944FC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80094500: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80094504: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80094508: jr          $ra
    // 0x8009450C: lbu         $v0, 0x7E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7E3D);
    return;
    // 0x8009450C: lbu         $v0, 0x7E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7E3D);
;}
RECOMP_FUNC void func_80094510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094510: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x80094514: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80094518: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8009451C: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x80094520: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80094524: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80094528: lw          $t8, 0x7E30($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7E30);
    // 0x8009452C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80094530: jr          $ra
    // 0x80094534: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    return;
    // 0x80094534: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
;}
RECOMP_FUNC void func_80094538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009453C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094540: jal         0x80094510
    // 0x80094544: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80094510(rdram, ctx);
        goto after_0;
    // 0x80094544: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80094548: jal         0x8009E9E4
    // 0x8009454C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8009E9E4(rdram, ctx);
        goto after_1;
    // 0x8009454C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80094550: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80094554: jal         0x80085300
    // 0x80094558: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    _batimer_get(rdram, ctx);
        goto after_2;
    // 0x80094558: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_2:
    // 0x8009455C: jal         0x8009E9F0
    // 0x80094560: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_8009E9F0(rdram, ctx);
        goto after_3;
    // 0x80094560: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x80094564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009456C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094574: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80094578: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009457C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80094580: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80094584: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80094588: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x8009458C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80094590: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80094594: jal         0x80094510
    // 0x80094598: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    func_80094510(rdram, ctx);
        goto after_0;
    // 0x80094598: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    after_0:
    // 0x8009459C: beq         $v0, $zero, L_800945DC
    if (ctx->r2 == 0) {
        // 0x800945A0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800945DC;
    }
    // 0x800945A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800945A4:
    // 0x800945A4: jal         0x800883E8
    // 0x800945A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcegg_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x800945A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800945AC: beql        $v0, $zero, L_800945C0
    if (ctx->r2 == 0) {
        // 0x800945B0: lw          $v0, 0x64($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X64);
            goto L_800945C0;
    }
    goto skip_0;
    // 0x800945B0: lw          $v0, 0x64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X64);
    skip_0:
    // 0x800945B4: beql        $s0, $s2, L_80094630
    if (ctx->r16 == ctx->r18) {
        // 0x800945B8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80094630;
    }
    goto skip_1;
    // 0x800945B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800945BC: lw          $v0, 0x64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X64);
L_800945C0:
    // 0x800945C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800945C4: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x800945C8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800945CC: jal         0x80094510
    // 0x800945D0: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
    func_80094510(rdram, ctx);
        goto after_2;
    // 0x800945D0: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
    after_2:
    // 0x800945D4: bne         $v0, $zero, L_800945A4
    if (ctx->r2 != 0) {
        // 0x800945D8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800945A4;
    }
    // 0x800945D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800945DC:
    // 0x800945DC: lw          $t9, 0x64($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X64);
    // 0x800945E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800945E4: jal         0x80094510
    // 0x800945E8: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    func_80094510(rdram, ctx);
        goto after_3;
    // 0x800945E8: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    after_3:
    // 0x800945EC: beq         $v0, $zero, L_80094624
    if (ctx->r2 == 0) {
        // 0x800945F0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80094624;
    }
    // 0x800945F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800945F4:
    // 0x800945F4: jal         0x800883E8
    // 0x800945F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcegg_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x800945F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800945FC: bnel        $v0, $zero, L_80094630
    if (ctx->r2 != 0) {
        // 0x80094600: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80094630;
    }
    goto skip_2;
    // 0x80094600: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80094604: lw          $v0, 0x64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X64);
    // 0x80094608: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8009460C: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80094610: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80094614: jal         0x80094510
    // 0x80094618: sb          $t1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r9;
    func_80094510(rdram, ctx);
        goto after_5;
    // 0x80094618: sb          $t1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r9;
    after_5:
    // 0x8009461C: bne         $v0, $zero, L_800945F4
    if (ctx->r2 != 0) {
        // 0x80094620: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800945F4;
    }
    // 0x80094620: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80094624:
    // 0x80094624: lw          $t2, 0x64($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X64);
    // 0x80094628: sb          $zero, 0x1($t2)
    MEM_B(0X1, ctx->r10) = 0;
    // 0x8009462C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80094630:
    // 0x80094630: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80094634: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80094638: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8009463C: jr          $ra
    // 0x80094640: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80094640: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80094644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094644: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80094648: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009464C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80094650: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80094654: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80094658: jal         0x80094370
    // 0x8009465C: sb          $zero, 0x2($t6)
    MEM_B(0X2, ctx->r14) = 0;
    func_80094370(rdram, ctx);
        goto after_0;
    // 0x8009465C: sb          $zero, 0x2($t6)
    MEM_B(0X2, ctx->r14) = 0;
    after_0:
    // 0x80094660: jal         0x8009E964
    // 0x80094664: nop

    func_8009E964(rdram, ctx);
        goto after_1;
    // 0x80094664: nop

    after_1:
    // 0x80094668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009466C: jal         0x80094574
    // 0x80094670: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80094574(rdram, ctx);
        goto after_2;
    // 0x80094670: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80094674: jal         0x8009E970
    // 0x80094678: nop

    func_8009E970(rdram, ctx);
        goto after_3;
    // 0x80094678: nop

    after_3:
    // 0x8009467C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80094680: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x80094684: nop

    // 0x80094688: beql        $v1, $zero, L_800946AC
    if (ctx->r3 == 0) {
        // 0x8009468C: lw          $t8, 0x64($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X64);
            goto L_800946AC;
    }
    goto skip_0;
    // 0x8009468C: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    skip_0:
    // 0x80094690: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x80094694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094698: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009469C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800946A0: jal         0x80094430
    // 0x800946A4: nop

    func_80094430(rdram, ctx);
        goto after_4;
    // 0x800946A4: nop

    after_4:
    // 0x800946A8: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
L_800946AC:
    // 0x800946AC: sb          $zero, 0x3($t8)
    MEM_B(0X3, ctx->r24) = 0;
    // 0x800946B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800946B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800946B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800946BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800946C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800946C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800946C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800946CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800946D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800946D4: beq         $a1, $zero, L_800946FC
    if (ctx->r5 == 0) {
        // 0x800946D8: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_800946FC;
    }
    // 0x800946D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800946DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800946E0: beq         $a1, $at, L_80094744
    if (ctx->r5 == ctx->r1) {
        // 0x800946E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80094744;
    }
    // 0x800946E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800946E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800946EC: beq         $a1, $at, L_80094788
    if (ctx->r5 == ctx->r1) {
        // 0x800946F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80094788;
    }
    // 0x800946F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800946F4: b           L_800947C8
    // 0x800946F8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
        goto L_800947C8;
    // 0x800946F8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_800946FC:
    // 0x800946FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094700: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80094704: jal         0x800947EC
    // 0x80094708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_0;
    // 0x80094708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8009470C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094710: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80094714: jal         0x800947EC
    // 0x80094718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_1;
    // 0x80094718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009471C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094720: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80094724: jal         0x800947EC
    // 0x80094728: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_2;
    // 0x80094728: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8009472C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094730: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80094734: jal         0x800947EC
    // 0x80094738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_3;
    // 0x80094738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8009473C: b           L_800947C8
    // 0x80094740: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
        goto L_800947C8;
    // 0x80094740: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80094744:
    // 0x80094744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80094748: jal         0x800947EC
    // 0x8009474C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_4;
    // 0x8009474C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80094750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094754: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80094758: jal         0x800947EC
    // 0x8009475C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_5;
    // 0x8009475C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80094760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094764: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80094768: jal         0x800947EC
    // 0x8009476C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_6;
    // 0x8009476C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80094770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094774: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80094778: jal         0x800947EC
    // 0x8009477C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_7;
    // 0x8009477C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80094780: b           L_800947C8
    // 0x80094784: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
        goto L_800947C8;
    // 0x80094784: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80094788:
    // 0x80094788: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009478C: jal         0x800947EC
    // 0x80094790: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_8;
    // 0x80094790: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80094794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094798: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009479C: jal         0x800947EC
    // 0x800947A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_9;
    // 0x800947A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x800947A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800947A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800947AC: jal         0x800947EC
    // 0x800947B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_10;
    // 0x800947B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x800947B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800947B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800947BC: jal         0x800947EC
    // 0x800947C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_11;
    // 0x800947C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x800947C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_800947C8:
    // 0x800947C8: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    // 0x800947CC: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x800947D0: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x800947D4: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    // 0x800947D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800947DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800947E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800947E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800947EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800947EC: beql        $a2, $zero, L_8009480C
    if (ctx->r6 == 0) {
            // 0x800947F0: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    static_3_8009480C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800947F0: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    skip_0:
    // 0x800947F4: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x800947F8: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x800947FC: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80094800: jr          $ra
    // 0x80094804: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    return;
    // 0x80094804: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80094808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094808: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
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
RECOMP_FUNC void func_80094824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009482C: jal         0x80097C7C
    // 0x80094830: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80097C7C(rdram, ctx);
        goto after_0;
    // 0x80094830: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80094834: beq         $v0, $zero, L_8009484C
    if (ctx->r2 == 0) {
        // 0x80094838: nop
    
            goto L_8009484C;
    }
    // 0x80094838: nop

    // 0x8009483C: jal         0x80094A10
    // 0x80094840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80094A10(rdram, ctx);
        goto after_1;
    // 0x80094840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80094844: jal         0x80094C88
    // 0x80094848: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80094C88(rdram, ctx);
        goto after_2;
    // 0x80094848: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_8009484C:
    // 0x8009484C: jal         0x80094D04
    // 0x80094850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80094D04(rdram, ctx);
        goto after_3;
    // 0x80094850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80094854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009485C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094864: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80094868: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009486C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80094870: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80094874: jal         0x800F6774
    // 0x80094878: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F6774(rdram, ctx);
        goto after_0;
    // 0x80094878: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x8009487C: beq         $v0, $zero, L_800949A8
    if (ctx->r2 == 0) {
        // 0x80094880: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800949A8;
    }
    // 0x80094880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094884: jal         0x80094348
    // 0x80094888: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80094348(rdram, ctx);
        goto after_1;
    // 0x80094888: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8009488C: beql        $v0, $zero, L_800948A0
    if (ctx->r2 == 0) {
        // 0x80094890: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800948A0;
    }
    goto skip_0;
    // 0x80094890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80094894: jal         0x80094390
    // 0x80094898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094390(rdram, ctx);
        goto after_2;
    // 0x80094898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8009489C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800948A0:
    // 0x800948A0: jal         0x80094348
    // 0x800948A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80094348(rdram, ctx);
        goto after_3;
    // 0x800948A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x800948A8: beql        $v0, $zero, L_800948E4
    if (ctx->r2 == 0) {
        // 0x800948AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800948E4;
    }
    goto skip_1;
    // 0x800948AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x800948B0: jal         0x80094510
    // 0x800948B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094510(rdram, ctx);
        goto after_4;
    // 0x800948B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800948B8: jal         0x800883E0
    // 0x800948BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _gcegg_entrypoint_5(rdram, ctx);
        goto after_5;
    // 0x800948BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x800948C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800948C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800948C8: jal         0x80094348
    // 0x800948CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80094348(rdram, ctx);
        goto after_6;
    // 0x800948CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x800948D0: bnel        $v0, $zero, L_800948E4
    if (ctx->r2 != 0) {
        // 0x800948D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800948E4;
    }
    goto skip_2;
    // 0x800948D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x800948D8: jal         0x800D1824
    // 0x800948DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800D1824(rdram, ctx);
        goto after_7;
    // 0x800948DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x800948E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800948E4:
    // 0x800948E4: jal         0x80094348
    // 0x800948E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80094348(rdram, ctx);
        goto after_8;
    // 0x800948E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x800948EC: bnel        $v0, $zero, L_800949AC
    if (ctx->r2 != 0) {
        // 0x800948F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800949AC;
    }
    goto skip_3;
    // 0x800948F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x800948F4: lw          $t6, 0x64($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X64);
    // 0x800948F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800948FC: lbu         $v0, 0x3($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X3);
    // 0x80094900: beq         $v0, $zero, L_80094920
    if (ctx->r2 == 0) {
        // 0x80094904: nop
    
            goto L_80094920;
    }
    // 0x80094904: nop

    // 0x80094908: beq         $v0, $at, L_80094958
    if (ctx->r2 == ctx->r1) {
        // 0x8009490C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80094958;
    }
    // 0x8009490C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80094910: beq         $v0, $at, L_80094988
    if (ctx->r2 == ctx->r1) {
        // 0x80094914: nop
    
            goto L_80094988;
    }
    // 0x80094914: nop

    // 0x80094918: b           L_800949AC
    // 0x8009491C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800949AC;
    // 0x8009491C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80094920:
    // 0x80094920: jal         0x80097C7C
    // 0x80094924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097C7C(rdram, ctx);
        goto after_9;
    // 0x80094924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80094928: beq         $v0, $zero, L_800949A8
    if (ctx->r2 == 0) {
        // 0x8009492C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_800949A8;
    }
    // 0x8009492C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80094930: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    // 0x80094934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094938: jal         0x80094510
    // 0x8009493C: sb          $t7, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r15;
    func_80094510(rdram, ctx);
        goto after_10;
    // 0x8009493C: sb          $t7, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r15;
    after_10:
    // 0x80094940: jal         0x80094E40
    // 0x80094944: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80094E40(rdram, ctx);
        goto after_11;
    // 0x80094944: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_11:
    // 0x80094948: jal         0x80094C88
    // 0x8009494C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094C88(rdram, ctx);
        goto after_12;
    // 0x8009494C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80094950: b           L_800949AC
    // 0x80094954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800949AC;
    // 0x80094954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80094958:
    // 0x80094958: jal         0x80094824
    // 0x8009495C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094824(rdram, ctx);
        goto after_13;
    // 0x8009495C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80094960: jal         0x80094DA8
    // 0x80094964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094DA8(rdram, ctx);
        goto after_14;
    // 0x80094964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80094968: beq         $v0, $zero, L_800949A8
    if (ctx->r2 == 0) {
        // 0x8009496C: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_800949A8;
    }
    // 0x8009496C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80094970: lw          $t0, 0x64($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X64);
    // 0x80094974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80094978: jal         0x80094C88
    // 0x8009497C: sb          $t9, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r25;
    func_80094C88(rdram, ctx);
        goto after_15;
    // 0x8009497C: sb          $t9, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r25;
    after_15:
    // 0x80094980: b           L_800949AC
    // 0x80094984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800949AC;
    // 0x80094984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80094988:
    // 0x80094988: jal         0x80094824
    // 0x8009498C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094824(rdram, ctx);
        goto after_16;
    // 0x8009498C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80094990: jal         0x80094DA8
    // 0x80094994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094DA8(rdram, ctx);
        goto after_17;
    // 0x80094994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80094998: bnel        $v0, $zero, L_800949AC
    if (ctx->r2 != 0) {
        // 0x8009499C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800949AC;
    }
    goto skip_4;
    // 0x8009499C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x800949A0: lw          $t1, 0x64($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X64);
    // 0x800949A4: sb          $zero, 0x3($t1)
    MEM_B(0X3, ctx->r9) = 0;
L_800949A8:
    // 0x800949A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800949AC:
    // 0x800949AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800949B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800949B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800949BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800949BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800949C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800949C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800949C8: jal         0x8009E674
    // 0x800949CC: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x800949CC: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    after_0:
    // 0x800949D0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800949D4: bne         $t6, $zero, L_80094A00
    if (ctx->r14 != 0) {
        // 0x800949D8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80094A00;
    }
    // 0x800949D8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800949DC: jal         0x80084CA0
    // 0x800949E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bafpctrl_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x800949E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800949E4: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800949E8: beq         $t7, $zero, L_80094A00
    if (ctx->r15 == 0) {
        // 0x800949EC: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80094A00;
    }
    // 0x800949EC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800949F0: jal         0x80084B50
    // 0x800949F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _baeggfire_entrypoint_8(rdram, ctx);
        goto after_2;
    // 0x800949F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800949F8: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x800949FC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80094A00:
    // 0x80094A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094A08: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094A10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80094A14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80094A18: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80094A1C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80094A20: jal         0x80094510
    // 0x80094A24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80094510(rdram, ctx);
        goto after_0;
    // 0x80094A24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80094A28: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80094A2C: jal         0x800949BC
    // 0x80094A30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800949BC(rdram, ctx);
        goto after_1;
    // 0x80094A30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80094A34: beql        $v0, $zero, L_80094A48
    if (ctx->r2 == 0) {
        // 0x80094A38: lw          $v0, 0x64($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X64);
            goto L_80094A48;
    }
    goto skip_0;
    // 0x80094A38: lw          $v0, 0x64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X64);
    skip_0:
    // 0x80094A3C: b           L_80094AA0
    // 0x80094A40: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
        goto L_80094AA0;
    // 0x80094A40: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80094A44: lw          $v0, 0x64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X64);
L_80094A48:
    // 0x80094A48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80094A4C: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x80094A50: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80094A54: jal         0x80094510
    // 0x80094A58: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    func_80094510(rdram, ctx);
        goto after_2;
    // 0x80094A58: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    after_2:
    // 0x80094A5C: bne         $v0, $zero, L_80094A78
    if (ctx->r2 != 0) {
        // 0x80094A60: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80094A78;
    }
    // 0x80094A60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80094A64: lw          $t8, 0x64($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X64);
    // 0x80094A68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80094A6C: jal         0x80094510
    // 0x80094A70: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    func_80094510(rdram, ctx);
        goto after_3;
    // 0x80094A70: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    after_3:
    // 0x80094A74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80094A78:
    // 0x80094A78: jal         0x800883E8
    // 0x80094A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcegg_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x80094A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80094A80: beql        $v0, $zero, L_80094A48
    if (ctx->r2 == 0) {
        // 0x80094A84: lw          $v0, 0x64($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X64);
            goto L_80094A48;
    }
    goto skip_1;
    // 0x80094A84: lw          $v0, 0x64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X64);
    skip_1:
    // 0x80094A88: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80094A8C: beql        $s0, $t9, L_80094AA0
    if (ctx->r16 == ctx->r25) {
        // 0x80094A90: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80094AA0;
    }
    goto skip_2;
    // 0x80094A90: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_2:
    // 0x80094A94: jal         0x80094E40
    // 0x80094A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094E40(rdram, ctx);
        goto after_5;
    // 0x80094A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80094A9C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80094AA0:
    // 0x80094AA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80094AA4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80094AA8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80094AAC: jr          $ra
    // 0x80094AB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80094AB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80094AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094AB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80094AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094ABC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80094AC0: jal         0x80094348
    // 0x80094AC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80094348(rdram, ctx);
        goto after_0;
    // 0x80094AC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80094AC8: bne         $v0, $zero, L_80094B04
    if (ctx->r2 != 0) {
        // 0x80094ACC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80094B04;
    }
    // 0x80094ACC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80094AD0: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80094AD4: jal         0x80094C64
    // 0x80094AD8: lbu         $a1, 0x1($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X1);
    func_80094C64(rdram, ctx);
        goto after_1;
    // 0x80094AD8: lbu         $a1, 0x1($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X1);
    after_1:
    // 0x80094ADC: beq         $v0, $zero, L_80094B04
    if (ctx->r2 == 0) {
        // 0x80094AE0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80094B04;
    }
    // 0x80094AE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80094AE4: jal         0x800883E8
    // 0x80094AE8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    _gcegg_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x80094AE8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x80094AEC: beq         $v0, $zero, L_80094B04
    if (ctx->r2 == 0) {
        // 0x80094AF0: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_80094B04;
    }
    // 0x80094AF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80094AF4: jal         0x800883E0
    // 0x80094AF8: nop

    _gcegg_entrypoint_5(rdram, ctx);
        goto after_3;
    // 0x80094AF8: nop

    after_3:
    // 0x80094AFC: jal         0x800D1824
    // 0x80094B00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1824(rdram, ctx);
        goto after_4;
    // 0x80094B00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
L_80094B04:
    // 0x80094B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094B08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80094B0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094B14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80094B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094B1C: jal         0x80094510
    // 0x80094B20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80094510(rdram, ctx);
        goto after_0;
    // 0x80094B20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80094B24: jal         0x800883E0
    // 0x80094B28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _gcegg_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80094B28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80094B2C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80094B30: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80094B34: jal         0x80095738
    // 0x80094B38: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x80094B38: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    after_2:
    // 0x80094B3C: bne         $v0, $zero, L_80094B64
    if (ctx->r2 != 0) {
        // 0x80094B40: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80094B64;
    }
    // 0x80094B40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80094B44: jal         0x80094348
    // 0x80094B48: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80094348(rdram, ctx);
        goto after_3;
    // 0x80094B48: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x80094B4C: bne         $v0, $zero, L_80094B7C
    if (ctx->r2 != 0) {
        // 0x80094B50: nop
    
            goto L_80094B7C;
    }
    // 0x80094B50: nop

    // 0x80094B54: jal         0x800D1C38
    // 0x80094B58: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800D1C38(rdram, ctx);
        goto after_4;
    // 0x80094B58: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x80094B5C: beq         $v0, $zero, L_80094B7C
    if (ctx->r2 == 0) {
        // 0x80094B60: nop
    
            goto L_80094B7C;
    }
    // 0x80094B60: nop

L_80094B64:
    // 0x80094B64: jal         0x800D1824
    // 0x80094B68: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800D1824(rdram, ctx);
        goto after_5;
    // 0x80094B68: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_5:
    // 0x80094B6C: jal         0x800FC660
    // 0x80094B70: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_800FC660(rdram, ctx);
        goto after_6;
    // 0x80094B70: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_6:
    // 0x80094B74: b           L_80094BB0
    // 0x80094B78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80094BB0;
    // 0x80094B78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80094B7C:
    // 0x80094B7C: jal         0x80094510
    // 0x80094B80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80094510(rdram, ctx);
        goto after_7;
    // 0x80094B80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x80094B84: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80094B88: bnel        $v0, $at, L_80094BB0
    if (ctx->r2 != ctx->r1) {
        // 0x80094B8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80094BB0;
    }
    goto skip_0;
    // 0x80094B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x80094B90: jal         0x800878A0
    // 0x80094B94: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_8;
    // 0x80094B94: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_8:
    // 0x80094B98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80094B9C: beql        $v0, $at, L_80094BB0
    if (ctx->r2 == ctx->r1) {
        // 0x80094BA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80094BB0;
    }
    goto skip_1;
    // 0x80094BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x80094BA4: b           L_80094BB0
    // 0x80094BA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80094BB0;
    // 0x80094BA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80094BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80094BB0:
    // 0x80094BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094BB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80094BB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094BC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80094BCC: jal         0x80094348
    // 0x80094BD0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80094348(rdram, ctx);
        goto after_0;
    // 0x80094BD0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80094BD4: beq         $v0, $zero, L_80094BE4
    if (ctx->r2 == 0) {
        // 0x80094BD8: nop
    
            goto L_80094BE4;
    }
    // 0x80094BD8: nop

    // 0x80094BDC: b           L_80094BFC
    // 0x80094BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80094BFC;
    // 0x80094BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80094BE4:
    // 0x80094BE4: jal         0x80094510
    // 0x80094BE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80094510(rdram, ctx);
        goto after_1;
    // 0x80094BE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80094BEC: jal         0x800883E0
    // 0x80094BF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _gcegg_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80094BF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80094BF4: jal         0x800D1A04
    // 0x80094BF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1A04(rdram, ctx);
        goto after_3;
    // 0x80094BF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
L_80094BFC:
    // 0x80094BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094C04: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094C14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80094C18: jal         0x80094348
    // 0x80094C1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80094348(rdram, ctx);
        goto after_0;
    // 0x80094C1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80094C20: bne         $v0, $zero, L_80094C54
    if (ctx->r2 != 0) {
        // 0x80094C24: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_80094C54;
    }
    // 0x80094C24: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80094C28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80094C2C: bne         $t6, $at, L_80094C44
    if (ctx->r14 != ctx->r1) {
        // 0x80094C30: nop
    
            goto L_80094C44;
    }
    // 0x80094C30: nop

    // 0x80094C34: jal         0x8009EA2C
    // 0x80094C38: nop

    func_8009EA2C(rdram, ctx);
        goto after_1;
    // 0x80094C38: nop

    after_1:
    // 0x80094C3C: bnel        $v0, $zero, L_80094C58
    if (ctx->r2 != 0) {
        // 0x80094C40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80094C58;
    }
    goto skip_0;
    // 0x80094C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_80094C44:
    // 0x80094C44: jal         0x800883E0
    // 0x80094C48: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    _gcegg_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80094C48: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80094C4C: jal         0x800D1804
    // 0x80094C50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1804(rdram, ctx);
        goto after_3;
    // 0x80094C50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
L_80094C54:
    // 0x80094C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80094C58:
    // 0x80094C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094C5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094C64: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80094C68: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80094C6C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80094C70: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80094C74: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80094C78: lw          $t9, 0x7E30($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7E30);
    // 0x80094C7C: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x80094C80: jr          $ra
    // 0x80094C84: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    return;
    // 0x80094C84: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
;}
RECOMP_FUNC void func_80094C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094C88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80094C8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80094C90: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80094C94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80094C98: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80094C9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80094CA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80094CA4: jal         0x80094C64
    // 0x80094CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80094C64(rdram, ctx);
        goto after_0;
    // 0x80094CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80094CAC: beq         $v0, $zero, L_80094CEC
    if (ctx->r2 == 0) {
        // 0x80094CB0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80094CEC;
    }
    // 0x80094CB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80094CB4:
    // 0x80094CB4: jal         0x800883E8
    // 0x80094CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcegg_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80094CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80094CBC: beql        $v0, $zero, L_80094CD8
    if (ctx->r2 == 0) {
        // 0x80094CC0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80094CD8;
    }
    goto skip_0;
    // 0x80094CC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80094CC4: jal         0x800883E0
    // 0x80094CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcegg_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80094CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80094CCC: jal         0x800D1824
    // 0x80094CD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1824(rdram, ctx);
        goto after_3;
    // 0x80094CD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80094CD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80094CD8:
    // 0x80094CD8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80094CDC: jal         0x80094C64
    // 0x80094CE0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80094C64(rdram, ctx);
        goto after_4;
    // 0x80094CE0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x80094CE4: bne         $v0, $zero, L_80094CB4
    if (ctx->r2 != 0) {
        // 0x80094CE8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80094CB4;
    }
    // 0x80094CE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80094CEC:
    // 0x80094CEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80094CF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80094CF4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80094CF8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80094CFC: jr          $ra
    // 0x80094D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80094D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80094D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094D04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80094D08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80094D0C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80094D10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80094D14: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80094D18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80094D1C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80094D20: jal         0x80094C64
    // 0x80094D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80094C64(rdram, ctx);
        goto after_0;
    // 0x80094D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80094D28: beq         $v0, $zero, L_80094D90
    if (ctx->r2 == 0) {
        // 0x80094D2C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80094D90;
    }
    // 0x80094D2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80094D30:
    // 0x80094D30: lw          $t6, 0x64($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X64);
    // 0x80094D34: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x80094D38: beql        $s1, $t7, L_80094D7C
    if (ctx->r17 == ctx->r15) {
        // 0x80094D3C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80094D7C;
    }
    goto skip_0;
    // 0x80094D3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80094D40: jal         0x800883E8
    // 0x80094D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcegg_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80094D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80094D48: beql        $v0, $zero, L_80094D7C
    if (ctx->r2 == 0) {
        // 0x80094D4C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80094D7C;
    }
    goto skip_1;
    // 0x80094D4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x80094D50: jal         0x800883E0
    // 0x80094D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcegg_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80094D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80094D58: jal         0x800D1C5C
    // 0x80094D5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1C5C(rdram, ctx);
        goto after_3;
    // 0x80094D5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80094D60: jal         0x800D27C8
    // 0x80094D64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D27C8(rdram, ctx);
        goto after_4;
    // 0x80094D64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80094D68: bltz        $v0, L_80094D78
    if (SIGNED(ctx->r2) < 0) {
        // 0x80094D6C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80094D78;
    }
    // 0x80094D6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80094D70: jal         0x800FAA34
    // 0x80094D74: nop

    func_800FAA34(rdram, ctx);
        goto after_5;
    // 0x80094D74: nop

    after_5:
L_80094D78:
    // 0x80094D78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80094D7C:
    // 0x80094D7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80094D80: jal         0x80094C64
    // 0x80094D84: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80094C64(rdram, ctx);
        goto after_6;
    // 0x80094D84: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x80094D88: bne         $v0, $zero, L_80094D30
    if (ctx->r2 != 0) {
        // 0x80094D8C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80094D30;
    }
    // 0x80094D8C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80094D90:
    // 0x80094D90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80094D94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80094D98: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80094D9C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80094DA0: jr          $ra
    // 0x80094DA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80094DA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80094DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094DA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80094DAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80094DB0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80094DB4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80094DB8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80094DBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80094DC0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80094DC4: jal         0x80094C64
    // 0x80094DC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80094C64(rdram, ctx);
        goto after_0;
    // 0x80094DC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80094DCC: beq         $v0, $zero, L_80094E24
    if (ctx->r2 == 0) {
        // 0x80094DD0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80094E24;
    }
    // 0x80094DD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80094DD4:
    // 0x80094DD4: jal         0x800883E8
    // 0x80094DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcegg_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80094DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80094DDC: beql        $v0, $zero, L_80094E10
    if (ctx->r2 == 0) {
        // 0x80094DE0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80094E10;
    }
    goto skip_0;
    // 0x80094DE0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80094DE4: jal         0x800883E0
    // 0x80094DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _gcegg_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80094DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80094DEC: jal         0x800D1C5C
    // 0x80094DF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1C5C(rdram, ctx);
        goto after_3;
    // 0x80094DF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80094DF4: jal         0x800D27F4
    // 0x80094DF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D27F4(rdram, ctx);
        goto after_4;
    // 0x80094DF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80094DFC: bnel        $v0, $zero, L_80094E10
    if (ctx->r2 != 0) {
        // 0x80094E00: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80094E10;
    }
    goto skip_1;
    // 0x80094E00: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x80094E04: b           L_80094E28
    // 0x80094E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80094E28;
    // 0x80094E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80094E0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80094E10:
    // 0x80094E10: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80094E14: jal         0x80094C64
    // 0x80094E18: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80094C64(rdram, ctx);
        goto after_5;
    // 0x80094E18: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x80094E1C: bne         $v0, $zero, L_80094DD4
    if (ctx->r2 != 0) {
        // 0x80094E20: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80094DD4;
    }
    // 0x80094E20: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80094E24:
    // 0x80094E24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80094E28:
    // 0x80094E28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80094E2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80094E30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80094E34: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80094E38: jr          $ra
    // 0x80094E3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80094E3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80094E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094E44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094E48: jal         0x800883C8
    // 0x80094E4C: nop

    _gcegg_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80094E4C: nop

    after_0:
    // 0x80094E50: jal         0x800FC660
    // 0x80094E54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800FC660(rdram, ctx);
        goto after_1;
    // 0x80094E54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80094E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094E60: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094E70: jr          $ra
    // 0x80094E74: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x80094E74: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void func_80094E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094E78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094E80: jal         0x800964D0
    // 0x80094E84: nop

    func_800964D0(rdram, ctx);
        goto after_0;
    // 0x80094E84: nop

    after_0:
    // 0x80094E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094E90: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094EA0: jal         0x80094E78
    // 0x80094EA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80094E78(rdram, ctx);
        goto after_0;
    // 0x80094EA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80094EA8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80094EAC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80094EB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80094EB4: lw          $v1, 0x74($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X74);
    // 0x80094EB8: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x80094EBC: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80094EC0: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x80094EC4: beq         $t8, $zero, L_80094ED4
    if (ctx->r24 == 0) {
        // 0x80094EC8: nop
    
            goto L_80094ED4;
    }
    // 0x80094EC8: nop

    // 0x80094ECC: b           L_80094EDC
    // 0x80094ED0: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
        goto L_80094EDC;
    // 0x80094ED0: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
L_80094ED4:
    // 0x80094ED4: jal         0x800D8840
    // 0x80094ED8: nop

    func_800D8840(rdram, ctx);
        goto after_1;
    // 0x80094ED8: nop

    after_1:
L_80094EDC:
    // 0x80094EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094EE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80094EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094EF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094EF4: jal         0x800964D0
    // 0x80094EF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800964D0(rdram, ctx);
        goto after_0;
    // 0x80094EF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80094EFC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80094F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094F04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094F08: xor         $v0, $v0, $t6
    ctx->r2 = ctx->r2 ^ ctx->r14;
    // 0x80094F0C: jr          $ra
    // 0x80094F10: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x80094F10: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80094F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094F14: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x80094F18: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80094F1C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80094F20: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80094F24: sb          $a2, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r6;
    // 0x80094F28: lw          $t8, 0x74($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X74);
    // 0x80094F2C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80094F30: jr          $ra
    // 0x80094F34: swc1        $f12, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f12.u32l;
    return;
    // 0x80094F34: swc1        $f12, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80094F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094F38: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x80094F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80094F40: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80094F44: lw          $t7, 0x74($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X74);
    // 0x80094F48: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80094F4C: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x80094F50: lw          $t9, 0x74($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X74);
    // 0x80094F54: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80094F58: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x80094F5C: lw          $t1, 0x74($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X74);
    // 0x80094F60: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x80094F64: sb          $zero, 0x2($t2)
    MEM_B(0X2, ctx->r10) = 0;
    // 0x80094F68: lw          $t3, 0x74($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X74);
    // 0x80094F6C: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x80094F70: jr          $ra
    // 0x80094F74: sb          $zero, 0x3($t4)
    MEM_B(0X3, ctx->r12) = 0;
    return;
    // 0x80094F74: sb          $zero, 0x3($t4)
    MEM_B(0X3, ctx->r12) = 0;
;}
RECOMP_FUNC void func_80094F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094F80: jr          $ra
    // 0x80094F84: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x80094F84: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
;}
RECOMP_FUNC void func_80094F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094F8C: beq         $a1, $zero, L_80094FBC
    if (ctx->r5 == 0) {
        // 0x80094F90: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80094FBC;
    }
    // 0x80094F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094F94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80094F98: beq         $a1, $at, L_80094FCC
    if (ctx->r5 == ctx->r1) {
        // 0x80094F9C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80094FCC;
    }
    // 0x80094F9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80094FA0: beq         $a1, $at, L_80094FDC
    if (ctx->r5 == ctx->r1) {
        // 0x80094FA4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80094FDC;
    }
    // 0x80094FA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80094FA8: beql        $a1, $at, L_80094FEC
    if (ctx->r5 == ctx->r1) {
        // 0x80094FAC: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80094FEC;
    }
    goto skip_0;
    // 0x80094FAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x80094FB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80094FB4: b           L_80094FF4
    // 0x80094FB8: nop

        goto L_80094FF4;
    // 0x80094FB8: nop

L_80094FBC:
    // 0x80094FBC: jal         0x800A0C2C
    // 0x80094FC0: nop

    func_800A0C2C(rdram, ctx);
        goto after_0;
    // 0x80094FC0: nop

    after_0:
    // 0x80094FC4: b           L_80094FF8
    // 0x80094FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80094FF8;
    // 0x80094FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80094FCC:
    // 0x80094FCC: jal         0x800A0C38
    // 0x80094FD0: nop

    func_800A0C38(rdram, ctx);
        goto after_1;
    // 0x80094FD0: nop

    after_1:
    // 0x80094FD4: b           L_80094FF8
    // 0x80094FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80094FF8;
    // 0x80094FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80094FDC:
    // 0x80094FDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80094FE0: b           L_80094FF8
    // 0x80094FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80094FF8;
    // 0x80094FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094FE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80094FEC:
    // 0x80094FEC: b           L_80094FF8
    // 0x80094FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80094FF8;
    // 0x80094FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80094FF4:
    // 0x80094FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80094FF8:
    // 0x80094FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094FFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80095004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80095008: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009500C: beq         $a1, $zero, L_80095038
    if (ctx->r5 == 0) {
        // 0x80095010: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80095038;
    }
    // 0x80095010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80095014: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80095018: beq         $a1, $at, L_8009504C
    if (ctx->r5 == ctx->r1) {
        // 0x8009501C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8009504C;
    }
    // 0x8009501C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80095020: beq         $a1, $at, L_80095058
    if (ctx->r5 == ctx->r1) {
        // 0x80095024: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80095058;
    }
    // 0x80095024: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80095028: beql        $a1, $at, L_8009505C
    if (ctx->r5 == ctx->r1) {
        // 0x8009502C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8009505C;
    }
    goto skip_0;
    // 0x8009502C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80095030: b           L_8009505C
    // 0x80095034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009505C;
    // 0x80095034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80095038:
    // 0x80095038: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8009503C: jal         0x800A0D74
    // 0x80095040: nop

    func_800A0D74(rdram, ctx);
        goto after_0;
    // 0x80095040: nop

    after_0:
    // 0x80095044: b           L_8009505C
    // 0x80095048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009505C;
    // 0x80095048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009504C:
    // 0x8009504C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80095050: jal         0x800A0D84
    // 0x80095054: nop

    func_800A0D84(rdram, ctx);
        goto after_1;
    // 0x80095054: nop

    after_1:
L_80095058:
    // 0x80095058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009505C:
    // 0x8009505C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095060: jr          $ra
    return;
;}
RECOMP_FUNC void func_80095068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095068: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009506C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80095070: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80095074: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80095078: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8009507C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80095080: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80095084: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80095088: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8009508C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80095090: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80095094: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80095098: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8009509C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800950A0: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_800950A4:
    // 0x800950A4: lw          $t6, 0x78($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X78);
    // 0x800950A8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800950AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800950B0: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x800950B4: swc1        $f20, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f20.u32l;
    // 0x800950B8: lw          $t8, 0x78($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X78);
    // 0x800950BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800950C0: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x800950C4: jal         0x80095004
    // 0x800950C8: sb          $zero, 0x4($t9)
    MEM_B(0X4, ctx->r25) = 0;
    func_80095004(rdram, ctx);
        goto after_0;
    // 0x800950C8: sb          $zero, 0x4($t9)
    MEM_B(0X4, ctx->r25) = 0;
    after_0:
    // 0x800950CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800950D0: bne         $s0, $s3, L_800950A4
    if (ctx->r16 != ctx->r19) {
        // 0x800950D4: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_800950A4;
    }
    // 0x800950D4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800950D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800950DC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800950E0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800950E4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800950E8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800950EC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800950F0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800950F4: jr          $ra
    // 0x800950F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800950F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800950FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800950FC: lw          $t7, 0x78($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X78);
    // 0x80095100: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x80095104: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80095108: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8009510C: sb          $t6, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r14;
    // 0x80095110: lw          $t9, 0x78($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X78);
    // 0x80095114: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80095118: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8009511C: jr          $ra
    // 0x80095120: swc1        $f12, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f12.u32l;
    return;
    // 0x80095120: swc1        $f12, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80095124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095124: lw          $t7, 0x78($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X78);
    // 0x80095128: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x8009512C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80095130: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80095134: sb          $t6, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r14;
    // 0x80095138: lw          $t9, 0x78($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X78);
    // 0x8009513C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80095140: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80095144: jr          $ra
    // 0x80095148: swc1        $f12, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f12.u32l;
    return;
    // 0x80095148: swc1        $f12, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009514C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009514C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80095150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80095154: lui         $a2, 0x3DB8
    ctx->r6 = S32(0X3DB8 << 16);
    // 0x80095158: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009515C: ori         $a2, $a2, 0x51EC
    ctx->r6 = ctx->r6 | 0X51EC;
    // 0x80095160: jal         0x80095124
    // 0x80095164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80095124(rdram, ctx);
        goto after_0;
    // 0x80095164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80095168: lui         $a2, 0x3DB8
    ctx->r6 = S32(0X3DB8 << 16);
    // 0x8009516C: ori         $a2, $a2, 0x51EC
    ctx->r6 = ctx->r6 | 0X51EC;
    // 0x80095170: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80095174: jal         0x80095124
    // 0x80095178: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095124(rdram, ctx);
        goto after_1;
    // 0x80095178: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8009517C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095184: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009518C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009518C: lw          $t7, 0x78($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X78);
    // 0x80095190: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x80095194: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80095198: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8009519C: sb          $t6, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r14;
    // 0x800951A0: lw          $t9, 0x78($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X78);
    // 0x800951A4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800951A8: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x800951AC: jr          $ra
    // 0x800951B0: swc1        $f12, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f12.u32l;
    return;
    // 0x800951B0: swc1        $f12, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800951B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800951B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800951B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800951BC: lui         $a2, 0x3D0B
    ctx->r6 = S32(0X3D0B << 16);
    // 0x800951C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800951C4: ori         $a2, $a2, 0x4396
    ctx->r6 = ctx->r6 | 0X4396;
    // 0x800951C8: jal         0x8009518C
    // 0x800951CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009518C(rdram, ctx);
        goto after_0;
    // 0x800951CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800951D0: lui         $a2, 0x3D0B
    ctx->r6 = S32(0X3D0B << 16);
    // 0x800951D4: ori         $a2, $a2, 0x4396
    ctx->r6 = ctx->r6 | 0X4396;
    // 0x800951D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800951DC: jal         0x8009518C
    // 0x800951E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009518C(rdram, ctx);
        goto after_1;
    // 0x800951E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800951E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800951E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800951EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800951F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800951F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800951F8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800951FC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80095200: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80095204: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80095208: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8009520C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80095210: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80095214: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80095218: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x8009521C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80095220: jal         0x800D8FF8
    // 0x80095224: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80095224: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x80095228: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009522C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80095230: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80095234: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80095238: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8009523C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80095240: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x80095244: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x80095248: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_8009524C:
    // 0x8009524C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095250: jal         0x80094F88
    // 0x80095254: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80094F88(rdram, ctx);
        goto after_1;
    // 0x80095254: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80095258: lw          $t6, 0x78($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X78);
    // 0x8009525C: addu        $v0, $t6, $s2
    ctx->r2 = ADD32(ctx->r14, ctx->r18);
    // 0x80095260: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x80095264: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x80095268: beq         $at, $zero, L_80095338
    if (ctx->r1 == 0) {
        // 0x8009526C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80095338;
    }
    // 0x8009526C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80095270: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80095274: addu        $at, $at, $t7
    gpr jr_addend_8009527C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80095278: lw          $t7, 0x4D50($at)
    ctx->r15 = ADD32(ctx->r1, 0X4D50);
    // 0x8009527C: jr          $t7
    // 0x80095280: nop

    switch (jr_addend_8009527C >> 2) {
        case 0: goto L_80095338; break;
        case 1: goto L_80095284; break;
        case 2: goto L_800952C0; break;
        case 3: goto L_800952C8; break;
        case 4: goto L_800952C8; break;
        case 5: goto L_80095304; break;
        default: switch_error(__func__, 0x8009527C, 0x80124D50);
    }
    // 0x80095280: nop

L_80095284:
    // 0x80095284: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80095288: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8009528C: div.s       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f22.fl, ctx->f4.fl);
    // 0x80095290: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80095294: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x80095298: nop

    // 0x8009529C: bc1fl       L_800952B0
    if (!c1cs) {
        // 0x800952A0: mfc1        $a2, $f2
        ctx->r6 = (int32_t)ctx->f2.u32l;
            goto L_800952B0;
    }
    goto skip_0;
    // 0x800952A0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    skip_0:
    // 0x800952A4: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x800952A8: sb          $s3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r19;
    // 0x800952AC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_800952B0:
    // 0x800952B0: jal         0x80095004
    // 0x800952B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80095004(rdram, ctx);
        goto after_2;
    // 0x800952B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x800952B8: b           L_8009533C
    // 0x800952BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8009533C;
    // 0x800952BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800952C0:
    // 0x800952C0: b           L_80095338
    // 0x800952C4: sb          $s5, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r21;
        goto L_80095338;
    // 0x800952C4: sb          $s5, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r21;
L_800952C8:
    // 0x800952C8: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800952CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800952D0: div.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f22.fl, ctx->f8.fl);
    // 0x800952D4: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x800952D8: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x800952DC: nop

    // 0x800952E0: bc1fl       L_800952F4
    if (!c1cs) {
        // 0x800952E4: mfc1        $a2, $f2
        ctx->r6 = (int32_t)ctx->f2.u32l;
            goto L_800952F4;
    }
    goto skip_1;
    // 0x800952E4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    skip_1:
    // 0x800952E8: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
    // 0x800952EC: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x800952F0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_800952F4:
    // 0x800952F4: jal         0x80095004
    // 0x800952F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80095004(rdram, ctx);
        goto after_3;
    // 0x800952F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800952FC: b           L_8009533C
    // 0x80095300: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8009533C;
    // 0x80095300: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80095304:
    // 0x80095304: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80095308: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8009530C: div.s       $f18, $f22, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f22.fl, ctx->f16.fl);
    // 0x80095310: add.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x80095314: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x80095318: nop

    // 0x8009531C: bc1fl       L_80095330
    if (!c1cs) {
        // 0x80095320: mfc1        $a2, $f2
        ctx->r6 = (int32_t)ctx->f2.u32l;
            goto L_80095330;
    }
    goto skip_2;
    // 0x80095320: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    skip_2:
    // 0x80095324: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x80095328: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8009532C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_80095330:
    // 0x80095330: jal         0x80095004
    // 0x80095334: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80095004(rdram, ctx);
        goto after_4;
    // 0x80095334: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_80095338:
    // 0x80095338: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8009533C:
    // 0x8009533C: bne         $s0, $s4, L_8009524C
    if (ctx->r16 != ctx->r20) {
        // 0x80095340: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_8009524C;
    }
    // 0x80095340: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80095344: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80095348: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8009534C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80095350: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x80095354: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80095358: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8009535C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80095360: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80095364: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80095368: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x8009536C: jr          $ra
    // 0x80095370: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80095370: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80095380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095380: jr          $ra
    // 0x80095384: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x80095384: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
;}
RECOMP_FUNC void func_80095388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095388: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8009538C: lh          $t6, 0xC($a2)
    ctx->r14 = MEM_H(ctx->r6, 0XC);
    // 0x80095390: addiu       $v0, $a3, 0x3E8
    ctx->r2 = ADD32(ctx->r7, 0X3E8);
    // 0x80095394: addiu       $v1, $a2, 0xC
    ctx->r3 = ADD32(ctx->r6, 0XC);
    // 0x80095398: bltz        $t6, L_800953D4
    if (SIGNED(ctx->r14) < 0) {
        // 0x8009539C: lw          $t9, 0x0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X0);
            goto L_800953D4;
    }
    // 0x8009539C: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x800953A0: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x800953A4: addu        $t7, $a0, $v0
    ctx->r15 = ADD32(ctx->r4, ctx->r2);
L_800953A8:
    // 0x800953A8: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800953AC: beql        $at, $zero, L_800953C8
    if (ctx->r1 == 0) {
        // 0x800953B0: lh          $a0, 0x4($v1)
        ctx->r4 = MEM_H(ctx->r3, 0X4);
            goto L_800953C8;
    }
    goto skip_0;
    // 0x800953B0: lh          $a0, 0x4($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X4);
    skip_0:
    // 0x800953B4: lbu         $t8, 0x2($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2);
    // 0x800953B8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800953BC: jr          $ra
    // 0x800953C0: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    return;
    // 0x800953C0: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x800953C4: lh          $a0, 0x4($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X4);
L_800953C8:
    // 0x800953C8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800953CC: bgezl       $a0, L_800953A8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800953D0: addu        $t7, $a0, $v0
        ctx->r15 = ADD32(ctx->r4, ctx->r2);
            goto L_800953A8;
    }
    goto skip_1;
    // 0x800953D0: addu        $t7, $a0, $v0
    ctx->r15 = ADD32(ctx->r4, ctx->r2);
    skip_1:
L_800953D4:
    // 0x800953D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800953D8: jr          $ra
    // 0x800953DC: nop

    return;
    // 0x800953DC: nop

;}
RECOMP_FUNC void func_800953E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800953E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800953E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800953E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800953EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800953F0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800953F4: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x800953F8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800953FC: bgez        $t7, L_8009540C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80095400: nop
    
            goto L_8009540C;
    }
    // 0x80095400: nop

    // 0x80095404: b           L_80095480
    // 0x80095408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80095480;
    // 0x80095408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009540C:
    // 0x8009540C: jal         0x800A3274
    // 0x80095410: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x80095410: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x80095414: addiu       $t8, $v0, -0x2
    ctx->r24 = ADD32(ctx->r2, -0X2);
    // 0x80095418: sltiu       $at, $t8, 0x12
    ctx->r1 = ctx->r24 < 0X12 ? 1 : 0;
    // 0x8009541C: beq         $at, $zero, L_80095468
    if (ctx->r1 == 0) {
        // 0x80095420: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80095468;
    }
    // 0x80095420: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80095424: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80095428: addu        $at, $at, $t8
    gpr jr_addend_80095430 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8009542C: lw          $t8, 0x4D70($at)
    ctx->r24 = ADD32(ctx->r1, 0X4D70);
    // 0x80095430: jr          $t8
    // 0x80095434: nop

    switch (jr_addend_80095430 >> 2) {
        case 0: goto L_80095468; break;
        case 1: goto L_80095468; break;
        case 2: goto L_80095468; break;
        case 3: goto L_80095468; break;
        case 4: goto L_80095468; break;
        case 5: goto L_80095468; break;
        case 6: goto L_80095468; break;
        case 7: goto L_80095468; break;
        case 8: goto L_80095438; break;
        case 9: goto L_80095468; break;
        case 10: goto L_80095468; break;
        case 11: goto L_80095468; break;
        case 12: goto L_80095468; break;
        case 13: goto L_80095468; break;
        case 14: goto L_80095468; break;
        case 15: goto L_80095468; break;
        case 16: goto L_80095468; break;
        case 17: goto L_80095468; break;
        default: switch_error(__func__, 0x80095430, 0x80124D70);
    }
    // 0x80095434: nop

L_80095438:
    // 0x80095438: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009543C: jal         0x8009E71C
    // 0x80095440: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8009E71C(rdram, ctx);
        goto after_1;
    // 0x80095440: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_1:
    // 0x80095444: beq         $v0, $zero, L_80095468
    if (ctx->r2 == 0) {
        // 0x80095448: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_80095468;
    }
    // 0x80095448: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8009544C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80095450: addiu       $a2, $a2, 0x7E60
    ctx->r6 = ADD32(ctx->r6, 0X7E60);
    // 0x80095454: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80095458: jal         0x80095388
    // 0x8009545C: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    func_80095388(rdram, ctx);
        goto after_2;
    // 0x8009545C: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    after_2:
    // 0x80095460: b           L_80095484
    // 0x80095464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80095484;
    // 0x80095464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80095468:
    // 0x80095468: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8009546C: addiu       $a2, $a2, 0x7E60
    ctx->r6 = ADD32(ctx->r6, 0X7E60);
    // 0x80095470: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80095474: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80095478: jal         0x80095388
    // 0x8009547C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80095388(rdram, ctx);
        goto after_3;
    // 0x8009547C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_80095480:
    // 0x80095480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80095484:
    // 0x80095484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095488: jr          $ra
    return;
;}
RECOMP_FUNC void func_80095490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095490: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80095494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80095498: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009549C: jal         0x8009C128
    // 0x800954A0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800954A0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800954A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800954A8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800954AC: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x800954B0: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800954B4: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x800954B8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800954BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800954C0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800954C4: jal         0x800953E0
    // 0x800954C8: nop

    func_800953E0(rdram, ctx);
        goto after_1;
    // 0x800954C8: nop

    after_1:
    // 0x800954CC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800954D0: lw          $t8, 0x7C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X7C);
    // 0x800954D4: sw          $v0, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->r2;
    // 0x800954D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800954DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800954E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800954E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800954E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800954EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800954F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800954F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800954F8: jal         0x800D3E40
    // 0x800954FC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800D3E40(rdram, ctx);
        goto after_0;
    // 0x800954FC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80095500: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80095504: beq         $v0, $zero, L_80095514
    if (ctx->r2 == 0) {
        // 0x80095508: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80095514;
    }
    // 0x80095508: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009550C: b           L_80095520
    // 0x80095510: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_80095520;
    // 0x80095510: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_80095514:
    // 0x80095514: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80095518: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x8009551C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_80095520:
    // 0x80095520: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x80095524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095528: lw          $v0, 0x14($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X14);
    // 0x8009552C: jr          $ra
    // 0x80095530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80095530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80095534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095534: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80095538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009553C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80095540: jal         0x8009C128
    // 0x80095544: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80095544: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80095548: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009554C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80095550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095554: lw          $t7, 0x7C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X7C);
    // 0x80095558: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8009555C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80095560: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80095564: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80095568: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8009556C: nop

    // 0x80095570: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80095574: jr          $ra
    // 0x80095578: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    return;
    // 0x80095578: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
;}
RECOMP_FUNC void func_8009557C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009557C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80095580: jr          $ra
    // 0x80095584: lbu         $v0, 0xC($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XC);
    return;
    // 0x80095584: lbu         $v0, 0xC($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XC);
;}
RECOMP_FUNC void func_80095588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009558C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80095590: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80095594: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80095598: sb          $a1, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r5;
    // 0x8009559C: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x800955A0: lbu         $v0, 0xC($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0XC);
    // 0x800955A4: beq         $v0, $at, L_800955B4
    if (ctx->r2 == ctx->r1) {
        // 0x800955A8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800955B4;
    }
    // 0x800955A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800955AC: bnel        $v0, $at, L_800955C0
    if (ctx->r2 != ctx->r1) {
        // 0x800955B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800955C0;
    }
    goto skip_0;
    // 0x800955B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_800955B4:
    // 0x800955B4: jal         0x800956B8
    // 0x800955B8: nop

    func_800956B8(rdram, ctx);
        goto after_0;
    // 0x800955B8: nop

    after_0:
    // 0x800955BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800955C0:
    // 0x800955C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800955C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800955CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800955CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800955D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800955D4: lw          $a1, 0x7C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X7C);
    // 0x800955D8: jal         0x8009C128
    // 0x800955DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800955DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800955E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800955E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800955E8: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x800955EC: jal         0x80095588
    // 0x800955F0: sb          $zero, 0xC($t6)
    MEM_B(0XC, ctx->r14) = 0;
    func_80095588(rdram, ctx);
        goto after_1;
    // 0x800955F0: sb          $zero, 0xC($t6)
    MEM_B(0XC, ctx->r14) = 0;
    after_1:
    // 0x800955F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800955F8: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x800955FC: sw          $zero, 0x10($t7)
    MEM_W(0X10, ctx->r15) = 0;
    // 0x80095600: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x80095604: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x80095608: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
    // 0x8009560C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095614: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009561C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009561C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80095620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80095624: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80095628: jal         0x800F3ED0
    // 0x8009562C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800F3ED0(rdram, ctx);
        goto after_0;
    // 0x8009562C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80095630: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80095634: jal         0x8008E078
    // 0x80095638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x80095638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8009563C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80095640: jal         0x8009E6F8
    // 0x80095644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_2;
    // 0x80095644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80095648: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009564C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095650: bne         $t6, $zero, L_80095688
    if (ctx->r14 != 0) {
        // 0x80095654: nop
    
            goto L_80095688;
    }
    // 0x80095654: nop

    // 0x80095658: jal         0x800F40EC
    // 0x8009565C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800F40EC(rdram, ctx);
        goto after_3;
    // 0x8009565C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x80095660: bne         $v0, $zero, L_80095688
    if (ctx->r2 != 0) {
        // 0x80095664: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_80095688;
    }
    // 0x80095664: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80095668: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
    // 0x8009566C: beq         $v1, $at, L_80095688
    if (ctx->r3 == ctx->r1) {
        // 0x80095670: addiu       $at, $zero, 0x15C
        ctx->r1 = ADD32(0, 0X15C);
            goto L_80095688;
    }
    // 0x80095670: addiu       $at, $zero, 0x15C
    ctx->r1 = ADD32(0, 0X15C);
    // 0x80095674: beq         $v1, $at, L_80095688
    if (ctx->r3 == ctx->r1) {
        // 0x80095678: lw          $t7, 0x2C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X2C);
            goto L_80095688;
    }
    // 0x80095678: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8009567C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80095680: bne         $t7, $at, L_8009569C
    if (ctx->r15 != ctx->r1) {
        // 0x80095684: nop
    
            goto L_8009569C;
    }
    // 0x80095684: nop

L_80095688:
    // 0x80095688: jal         0x800956B8
    // 0x8009568C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800956B8(rdram, ctx);
        goto after_4;
    // 0x8009568C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80095690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095694: jal         0x80095588
    // 0x80095698: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095588(rdram, ctx);
        goto after_5;
    // 0x80095698: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_8009569C:
    // 0x8009569C: jal         0x80095490
    // 0x800956A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095490(rdram, ctx);
        goto after_6;
    // 0x800956A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800956A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800956A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800956AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800956B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800956B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800956B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800956BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800956C0: jal         0x8009C128
    // 0x800956C4: lw          $a1, 0x7C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X7C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800956C4: lw          $a1, 0x7C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X7C);
    after_0:
    // 0x800956C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800956CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800956D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800956E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800956E0: jr          $ra
    // 0x800956E4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    return;
    // 0x800956E4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
;}
RECOMP_FUNC void func_800956E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800956E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800956EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800956F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800956F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800956F8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800956FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80095700: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80095704: addiu       $s2, $zero, 0x42
    ctx->r18 = ADD32(0, 0X42);
    // 0x80095708: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8009570C:
    // 0x8009570C: jal         0x80095774
    // 0x80095710: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80095774(rdram, ctx);
        goto after_0;
    // 0x80095710: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80095714: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80095718: bnel        $s0, $s2, L_8009570C
    if (ctx->r16 != ctx->r18) {
        // 0x8009571C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8009570C;
    }
    goto skip_0;
    // 0x8009571C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80095720: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80095724: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80095728: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8009572C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80095730: jr          $ra
    // 0x80095734: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80095734: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80095738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095738: lw          $t6, 0x80($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X80);
    // 0x8009573C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80095740: jr          $ra
    // 0x80095744: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    return;
    // 0x80095744: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
;}
RECOMP_FUNC void func_80095748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095748: lw          $t6, 0x80($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X80);
    // 0x8009574C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80095750: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x80095754: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80095758: jr          $ra
    // 0x8009575C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x8009575C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_80095760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095760: lw          $t7, 0x80($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X80);
    // 0x80095764: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80095768: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8009576C: jr          $ra
    // 0x80095770: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    return;
    // 0x80095770: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_80095774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095774: lw          $t6, 0x80($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X80);
    // 0x80095778: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8009577C: jr          $ra
    // 0x80095780: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    return;
    // 0x80095780: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
;}
RECOMP_FUNC void func_80095790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095790: jr          $ra
    // 0x80095794: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    return;
    // 0x80095794: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
;}
RECOMP_FUNC void func_80095798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095798: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8009579C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800957A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800957A4: jal         0x800985B8
    // 0x800957A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800985B8(rdram, ctx);
        goto after_0;
    // 0x800957A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800957AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800957B0: jal         0x8009864C
    // 0x800957B4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_8009864C(rdram, ctx);
        goto after_1;
    // 0x800957B4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800957B8: lw          $v0, 0x94($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X94);
    // 0x800957BC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800957C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800957C4: lwc1        $f2, 0x7C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x800957C8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800957CC: nop

    // 0x800957D0: bc1fl       L_800957E8
    if (!c1cs) {
        // 0x800957D4: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_800957E8;
    }
    goto skip_0;
    // 0x800957D4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_0:
    // 0x800957D8: swc1        $f0, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f0.u32l;
    // 0x800957DC: lw          $v0, 0x94($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X94);
    // 0x800957E0: lwc1        $f2, 0x7C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x800957E4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_800957E8:
    // 0x800957E8: nop

    // 0x800957EC: bc1f        L_800957F8
    if (!c1cs) {
        // 0x800957F0: nop
    
            goto L_800957F8;
    }
    // 0x800957F0: nop

    // 0x800957F4: swc1        $f12, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f12.u32l;
L_800957F8:
    // 0x800957F8: jal         0x80098590
    // 0x800957FC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80098590(rdram, ctx);
        goto after_2;
    // 0x800957FC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x80095800: lw          $a0, 0x94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X94);
    // 0x80095804: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80095808: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8009580C: jal         0x800F1E6C
    // 0x80095810: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_800F1E6C(rdram, ctx);
        goto after_3;
    // 0x80095810: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_3:
    // 0x80095814: jal         0x8009C984
    // 0x80095818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_4;
    // 0x80095818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8009581C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80095820: jal         0x800F1DCC
    // 0x80095824: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_5;
    // 0x80095824: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_5:
    // 0x80095828: jal         0x800F2100
    // 0x8009582C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_6;
    // 0x8009582C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_6:
    // 0x80095830: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80095834: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80095838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009583C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80095840: nop

    // 0x80095844: bc1fl       L_80095860
    if (!c1cs) {
        // 0x80095848: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80095860;
    }
    goto skip_1;
    // 0x80095848: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8009584C: jal         0x8009C914
    // 0x80095850: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8009C914(rdram, ctx);
        goto after_7;
    // 0x80095850: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x80095854: jal         0x8009C974
    // 0x80095858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_8;
    // 0x80095858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8009585C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80095860:
    // 0x80095860: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80095864: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80095868: jr          $ra
    return;
;}
RECOMP_FUNC void func_80095870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095870: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80095874: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80095878: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8009587C: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x80095880: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80095884: jr          $ra
    // 0x80095888: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x80095888: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8009588C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009588C: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80095890: jr          $ra
    // 0x80095894: lw          $v0, 0x14($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X14);
    return;
    // 0x80095894: lw          $v0, 0x14($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X14);
;}
RECOMP_FUNC void func_80095898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095898: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x8009589C: jr          $ra
    // 0x800958A0: lbu         $v0, 0xA2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA2);
    return;
    // 0x800958A0: lbu         $v0, 0xA2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA2);
;}
RECOMP_FUNC void func_800958A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800958A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800958A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800958AC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800958B0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800958B4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800958B8: jal         0x8009C128
    // 0x800958BC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800958BC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x800958C0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800958C4: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800958C8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800958CC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800958D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800958D4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800958D8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x800958DC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x800958E0: lw          $t7, 0x94($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X94);
    // 0x800958E4: jal         0x800C6C94
    // 0x800958E8: lw          $a3, 0x14($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X14);
    func_800C6C94(rdram, ctx);
        goto after_1;
    // 0x800958E8: lw          $a3, 0x14($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X14);
    after_1:
    // 0x800958EC: beq         $v0, $zero, L_800958FC
    if (ctx->r2 == 0) {
        // 0x800958F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800958FC;
    }
    // 0x800958F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800958F4: b           L_80095900
    // 0x800958F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80095900;
    // 0x800958F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800958FC:
    // 0x800958FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80095900:
    // 0x80095900: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80095904: jr          $ra
    // 0x80095908: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80095908: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009590C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009590C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80095910: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80095914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80095918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009591C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80095920: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80095924: bc1fl       L_80095948
    if (!c1cs) {
        // 0x80095928: lw          $t7, 0x94($a2)
        ctx->r15 = MEM_W(ctx->r6, 0X94);
            goto L_80095948;
    }
    goto skip_0;
    // 0x80095928: lw          $t7, 0x94($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X94);
    skip_0:
    // 0x8009592C: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80095930: lui         $a1, 0x4260
    ctx->r5 = S32(0X4260 << 16);
    // 0x80095934: jal         0x800C68A0
    // 0x80095938: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C68A0(rdram, ctx);
        goto after_0;
    // 0x80095938: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8009593C: b           L_80095958
    // 0x80095940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80095958;
    // 0x80095940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095944: lw          $t7, 0x94($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X94);
L_80095948:
    // 0x80095948: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8009594C: jal         0x800C68A0
    // 0x80095950: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_800C68A0(rdram, ctx);
        goto after_1;
    // 0x80095950: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x80095954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80095958:
    // 0x80095958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009595C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80095964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80095968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009596C: beq         $a1, $zero, L_80095998
    if (ctx->r5 == 0) {
        // 0x80095970: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80095998;
    }
    // 0x80095970: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80095974: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80095978: jal         0x80095A08
    // 0x8009597C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80095A08(rdram, ctx);
        goto after_0;
    // 0x8009597C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80095980: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80095984: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80095988: jal         0x80095A08
    // 0x8009598C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80095A08(rdram, ctx);
        goto after_1;
    // 0x8009598C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80095990: b           L_800959BC
    // 0x80095994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800959BC;
    // 0x80095994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80095998:
    // 0x80095998: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009599C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800959A0: jal         0x80095A08
    // 0x800959A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80095A08(rdram, ctx);
        goto after_2;
    // 0x800959A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800959A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800959AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800959B0: jal         0x80095A08
    // 0x800959B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80095A08(rdram, ctx);
        goto after_3;
    // 0x800959B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x800959B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800959BC:
    // 0x800959BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800959C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800959C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800959C8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800959CC: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800959D0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800959D4: swc1        $f12, 0x64($t6)
    MEM_W(0X64, ctx->r14) = ctx->f12.u32l;
    // 0x800959D8: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x800959DC: lwc1        $f4, 0x64($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X64);
    // 0x800959E0: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x800959E4: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x800959E8: swc1        $f14, 0x68($t7)
    MEM_W(0X68, ctx->r15) = ctx->f14.u32l;
    // 0x800959EC: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x800959F0: lwc1        $f6, 0x68($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X68);
    // 0x800959F4: jr          $ra
    // 0x800959F8: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    return;
    // 0x800959F8: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_800959FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800959FC: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80095A00: jr          $ra
    // 0x80095A04: sw          $a1, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r5;
    return;
    // 0x80095A04: sw          $a1, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80095A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095A08: beql        $a2, $zero, L_80095A28
    if (ctx->r6 == 0) {
            // 0x80095A0C: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    static_3_80095A28(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80095A0C: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    skip_0:
    // 0x80095A10: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x80095A14: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x80095A18: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80095A1C: jr          $ra
    // 0x80095A20: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    return;
    // 0x80095A20: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80095A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095A24: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
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
RECOMP_FUNC void func_80095A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80095A44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80095A48: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80095A4C: jal         0x800959C8
    // 0x80095A50: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    func_800959C8(rdram, ctx);
        goto after_0;
    // 0x80095A50: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    after_0:
    // 0x80095A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095A5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80095A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095A64: jr          $ra
    // 0x80095A68: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    return;
    // 0x80095A68: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80095A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095A6C: jr          $ra
    // 0x80095A70: sw          $a0, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->r4;
    return;
    // 0x80095A70: sw          $a0, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_80095A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80095A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80095A7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80095A80: jal         0x800EA05C
    // 0x80095A84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x80095A84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80095A88: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x80095A8C: bne         $v0, $at, L_80095AC0
    if (ctx->r2 != ctx->r1) {
        // 0x80095A90: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80095AC0;
    }
    // 0x80095A90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80095A94: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80095A98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80095A9C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80095AA0: beq         $t6, $zero, L_80095AB8
    if (ctx->r14 == 0) {
        // 0x80095AA4: nop
    
            goto L_80095AB8;
    }
    // 0x80095AA4: nop

    // 0x80095AA8: jal         0x80095A08
    // 0x80095AAC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80095A08(rdram, ctx);
        goto after_1;
    // 0x80095AAC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x80095AB0: b           L_80095AC4
    // 0x80095AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80095AC4;
    // 0x80095AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80095AB8:
    // 0x80095AB8: jal         0x80095A08
    // 0x80095ABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80095A08(rdram, ctx);
        goto after_2;
    // 0x80095ABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80095AC0:
    // 0x80095AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80095AC4:
    // 0x80095AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095AC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80095AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095AD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80095AD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80095AD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80095ADC: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80095AE0: lui         $a1, 0x40
    ctx->r5 = S32(0X40 << 16);
    // 0x80095AE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80095AE8: sb          $zero, 0xA3($t6)
    MEM_B(0XA3, ctx->r14) = 0;
    // 0x80095AEC: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x80095AF0: ori         $a1, $a1, 0x5
    ctx->r5 = ctx->r5 | 0X5;
    // 0x80095AF4: lbu         $v0, 0xA3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA3);
    // 0x80095AF8: sb          $v0, 0x54($v1)
    MEM_B(0X54, ctx->r3) = ctx->r2;
    // 0x80095AFC: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x80095B00: sb          $v0, 0xA1($t7)
    MEM_B(0XA1, ctx->r15) = ctx->r2;
    // 0x80095B04: lw          $t8, 0x94($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X94);
    // 0x80095B08: sb          $v0, 0x18($t8)
    MEM_B(0X18, ctx->r24) = ctx->r2;
    // 0x80095B0C: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x80095B10: sb          $v0, 0x56($t9)
    MEM_B(0X56, ctx->r25) = ctx->r2;
    // 0x80095B14: lw          $t0, 0x94($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X94);
    // 0x80095B18: jal         0x800959FC
    // 0x80095B1C: sb          $v0, 0xA0($t0)
    MEM_B(0XA0, ctx->r8) = ctx->r2;
    func_800959FC(rdram, ctx);
        goto after_0;
    // 0x80095B1C: sb          $v0, 0xA0($t0)
    MEM_B(0XA0, ctx->r8) = ctx->r2;
    after_0:
    // 0x80095B20: jal         0x800C5A38
    // 0x80095B24: nop

    func_800C5A38(rdram, ctx);
        goto after_1;
    // 0x80095B24: nop

    after_1:
    // 0x80095B28: lw          $t1, 0x94($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X94);
    // 0x80095B2C: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80095B30: lw          $a0, 0x94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X94);
    // 0x80095B34: jal         0x800EFD24
    // 0x80095B38: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x80095B38: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    after_2:
    // 0x80095B3C: lw          $a0, 0x94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X94);
    // 0x80095B40: jal         0x800EFD24
    // 0x80095B44: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x80095B44: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_3:
    // 0x80095B48: lw          $a0, 0x94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X94);
    // 0x80095B4C: jal         0x800EFD24
    // 0x80095B50: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    func_800EFD24(rdram, ctx);
        goto after_4;
    // 0x80095B50: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    after_4:
    // 0x80095B54: lw          $a0, 0x94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X94);
    // 0x80095B58: jal         0x800EFD24
    // 0x80095B5C: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    func_800EFD24(rdram, ctx);
        goto after_5;
    // 0x80095B5C: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    after_5:
    // 0x80095B60: lw          $t2, 0x94($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X94);
    // 0x80095B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095B68: sw          $zero, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = 0;
    // 0x80095B6C: lw          $t3, 0x94($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X94);
    // 0x80095B70: jal         0x80095A40
    // 0x80095B74: sb          $zero, 0xA2($t3)
    MEM_B(0XA2, ctx->r11) = 0;
    func_80095A40(rdram, ctx);
        goto after_6;
    // 0x80095B74: sb          $zero, 0xA2($t3)
    MEM_B(0XA2, ctx->r11) = 0;
    after_6:
    // 0x80095B78: lw          $v1, 0x94($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X94);
    // 0x80095B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095B80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80095B84: lwc1        $f4, 0x64($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X64);
    // 0x80095B88: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x80095B8C: lw          $v1, 0x94($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X94);
    // 0x80095B90: lwc1        $f6, 0x68($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X68);
    // 0x80095B94: jal         0x80096254
    // 0x80095B98: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    func_80096254(rdram, ctx);
        goto after_7;
    // 0x80095B98: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    after_7:
    // 0x80095B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095BA0: jal         0x8009590C
    // 0x80095BA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009590C(rdram, ctx);
        goto after_8;
    // 0x80095BA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80095BA8: lw          $t4, 0x94($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X94);
    // 0x80095BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095BB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80095BB4: jal         0x800961AC
    // 0x80095BB8: sw          $zero, 0x9C($t4)
    MEM_W(0X9C, ctx->r12) = 0;
    func_800961AC(rdram, ctx);
        goto after_9;
    // 0x80095BB8: sw          $zero, 0x9C($t4)
    MEM_W(0X9C, ctx->r12) = 0;
    after_9:
    // 0x80095BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095BC0: jal         0x80095774
    // 0x80095BC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095774(rdram, ctx);
        goto after_10;
    // 0x80095BC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80095BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095BCC: jal         0x80095774
    // 0x80095BD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80095774(rdram, ctx);
        goto after_11;
    // 0x80095BD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x80095BD4: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x80095BD8: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80095BDC: addiu       $t5, $t5, 0x5A6C
    ctx->r13 = ADD32(ctx->r13, 0X5A6C);
    // 0x80095BE0: sw          $t5, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r13;
    // 0x80095BE4: lw          $t8, 0x94($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X94);
    // 0x80095BE8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80095BEC: addiu       $t7, $t7, 0x5A64
    ctx->r15 = ADD32(ctx->r15, 0X5A64);
    // 0x80095BF0: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
    // 0x80095BF4: lw          $t9, 0x94($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X94);
    // 0x80095BF8: sb          $zero, 0xA4($t9)
    MEM_B(0XA4, ctx->r25) = 0;
    // 0x80095BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80095C00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80095C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80095C08: jr          $ra
    return;
;}
RECOMP_FUNC void func_80095C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80095C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80095C18: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80095C1C: jal         0x800C5BA4
    // 0x80095C20: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C5BA4(rdram, ctx);
        goto after_0;
    // 0x80095C20: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80095C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095C2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80095C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095C34: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80095C38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80095C3C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80095C40: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x80095C44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80095C48: bc1f        L_80095C64
    if (!c1cs) {
        // 0x80095C4C: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_80095C64;
    }
    // 0x80095C4C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80095C50: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80095C54: jal         0x800F13F0
    // 0x80095C58: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
    func_800F13F0(rdram, ctx);
        goto after_0;
    // 0x80095C58: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
    after_0:
    // 0x80095C5C: b           L_80095C80
    // 0x80095C60: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_80095C80;
    // 0x80095C60: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_80095C64:
    // 0x80095C64: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80095C68: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80095C6C: bc1fl       L_80095C84
    if (!c1cs) {
        // 0x80095C70: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80095C84;
    }
    goto skip_0;
    // 0x80095C70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80095C74: jal         0x800F0E00
    // 0x80095C78: sub.s       $f14, $f20, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f20.fl - ctx->f6.fl;
    func_800F0E00(rdram, ctx);
        goto after_1;
    // 0x80095C78: sub.s       $f14, $f20, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f20.fl - ctx->f6.fl;
    after_1:
    // 0x80095C7C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_80095C80:
    // 0x80095C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80095C84:
    // 0x80095C84: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x80095C88: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80095C8C: jr          $ra
    // 0x80095C90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80095C90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80095C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095C94: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80095C98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80095C9C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80095CA0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80095CA4: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x80095CA8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80095CAC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80095CB0: sb          $t6, 0xA4($t7)
    MEM_B(0XA4, ctx->r15) = ctx->r14;
    // 0x80095CB4: lw          $t8, 0x94($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X94);
    // 0x80095CB8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80095CBC: jal         0x80091E80
    // 0x80095CC0: sw          $zero, 0x50($t8)
    MEM_W(0X50, ctx->r24) = 0;
    func_80091E80(rdram, ctx);
        goto after_0;
    // 0x80095CC0: sw          $zero, 0x50($t8)
    MEM_W(0X50, ctx->r24) = 0;
    after_0:
    // 0x80095CC4: beql        $v0, $zero, L_80096190
    if (ctx->r2 == 0) {
        // 0x80095CC8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80096190;
    }
    goto skip_0;
    // 0x80095CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80095CCC: jal         0x8008E454
    // 0x80095CD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E454(rdram, ctx);
        goto after_1;
    // 0x80095CD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80095CD4: beq         $v0, $zero, L_8009618C
    if (ctx->r2 == 0) {
        // 0x80095CD8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8009618C;
    }
    // 0x80095CD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095CDC: jal         0x8009C128
    // 0x80095CE0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x80095CE0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_2:
    // 0x80095CE4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80095CE8: jal         0x800BEAAC
    // 0x80095CEC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800BEAAC(rdram, ctx);
        goto after_3;
    // 0x80095CEC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x80095CF0: beql        $v0, $zero, L_80095D18
    if (ctx->r2 == 0) {
        // 0x80095CF4: lw          $t0, 0x94($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X94);
            goto L_80095D18;
    }
    goto skip_1;
    // 0x80095CF4: lw          $t0, 0x94($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X94);
    skip_1:
    // 0x80095CF8: lw          $t9, 0x94($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X94);
    // 0x80095CFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80095D00: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80095D04: jal         0x800C68E8
    // 0x80095D08: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_800C68E8(rdram, ctx);
        goto after_4;
    // 0x80095D08: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_4:
    // 0x80095D0C: b           L_80095D2C
    // 0x80095D10: lw          $t1, 0x94($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X94);
        goto L_80095D2C;
    // 0x80095D10: lw          $t1, 0x94($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X94);
    // 0x80095D14: lw          $t0, 0x94($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X94);
L_80095D18:
    // 0x80095D18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80095D1C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80095D20: jal         0x800C68E8
    // 0x80095D24: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_800C68E8(rdram, ctx);
        goto after_5;
    // 0x80095D24: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_5:
    // 0x80095D28: lw          $t1, 0x94($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X94);
L_80095D2C:
    // 0x80095D2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80095D30: sb          $zero, 0xA1($t1)
    MEM_B(0XA1, ctx->r9) = 0;
    // 0x80095D34: lw          $t2, 0x94($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X94);
    // 0x80095D38: sb          $zero, 0x54($t2)
    MEM_B(0X54, ctx->r10) = 0;
    // 0x80095D3C: lw          $t3, 0x94($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X94);
    // 0x80095D40: sb          $zero, 0x55($t3)
    MEM_B(0X55, ctx->r11) = 0;
    // 0x80095D44: lw          $t4, 0x94($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X94);
    // 0x80095D48: sw          $zero, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = 0;
    // 0x80095D4C: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095D50: lbu         $t5, 0x56($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X56);
    // 0x80095D54: sb          $t5, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r13;
    // 0x80095D58: jal         0x800CB840
    // 0x80095D5C: lw          $a1, 0x184($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X184);
    func_800CB840(rdram, ctx);
        goto after_6;
    // 0x80095D5C: lw          $a1, 0x184($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X184);
    after_6:
    // 0x80095D60: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095D64: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80095D68: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x80095D6C: jal         0x80095C34
    // 0x80095D70: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    func_80095C34(rdram, ctx);
        goto after_7;
    // 0x80095D70: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    after_7:
    // 0x80095D74: lw          $t6, 0x94($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X94);
    // 0x80095D78: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80095D7C: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x80095D80: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095D84: lwc1        $f12, 0x68($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X68);
    // 0x80095D88: jal         0x80095C34
    // 0x80095D8C: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    func_80095C34(rdram, ctx);
        goto after_8;
    // 0x80095D8C: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    after_8:
    // 0x80095D90: lw          $t7, 0x94($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X94);
    // 0x80095D94: swc1        $f0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f0.u32l;
    // 0x80095D98: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095D9C: lw          $t8, 0x9C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X9C);
    // 0x80095DA0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80095DA4: sltiu       $at, $t9, 0xA
    ctx->r1 = ctx->r25 < 0XA ? 1 : 0;
    // 0x80095DA8: beq         $at, $zero, L_80095F4C
    if (ctx->r1 == 0) {
        // 0x80095DAC: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80095F4C;
    }
    // 0x80095DAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80095DB0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80095DB4: addu        $at, $at, $t9
    gpr jr_addend_80095DBC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80095DB8: lw          $t9, 0x4DC0($at)
    ctx->r25 = ADD32(ctx->r1, 0X4DC0);
    // 0x80095DBC: jr          $t9
    // 0x80095DC0: nop

    switch (jr_addend_80095DBC >> 2) {
        case 0: goto L_80095DC4; break;
        case 1: goto L_80095F34; break;
        case 2: goto L_80095DC4; break;
        case 3: goto L_80095DC4; break;
        case 4: goto L_80095EA0; break;
        case 5: goto L_80095F34; break;
        case 6: goto L_80095F08; break;
        case 7: goto L_80095F18; break;
        case 8: goto L_80095DC4; break;
        case 9: goto L_80095F28; break;
        default: switch_error(__func__, 0x80095DBC, 0x80124DC0);
    }
    // 0x80095DC0: nop

L_80095DC4:
    // 0x80095DC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095DC8: jal         0x8009C128
    // 0x80095DCC: addiu       $a1, $s0, 0x78
    ctx->r5 = ADD32(ctx->r16, 0X78);
    func_8009C128(rdram, ctx);
        goto after_9;
    // 0x80095DCC: addiu       $a1, $s0, 0x78
    ctx->r5 = ADD32(ctx->r16, 0X78);
    after_9:
    // 0x80095DD0: lw          $a1, 0x94($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X94);
    // 0x80095DD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095DD8: jal         0x8009C15C
    // 0x80095DDC: addiu       $a1, $a1, 0x84
    ctx->r5 = ADD32(ctx->r5, 0X84);
    func_8009C15C(rdram, ctx);
        goto after_10;
    // 0x80095DDC: addiu       $a1, $a1, 0x84
    ctx->r5 = ADD32(ctx->r5, 0X84);
    after_10:
    // 0x80095DE0: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095DE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80095DE8: lw          $t0, 0x9C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X9C);
    // 0x80095DEC: bnel        $t0, $at, L_80095E60
    if (ctx->r8 != ctx->r1) {
        // 0x80095DF0: lw          $s0, 0x94($s1)
        ctx->r16 = MEM_W(ctx->r17, 0X94);
            goto L_80095E60;
    }
    goto skip_2;
    // 0x80095DF0: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    skip_2:
    // 0x80095DF4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80095DF8: jal         0x800C670C
    // 0x80095DFC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_800C670C(rdram, ctx);
        goto after_11;
    // 0x80095DFC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_11:
    // 0x80095E00: beq         $v0, $zero, L_80095E5C
    if (ctx->r2 == 0) {
        // 0x80095E04: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_80095E5C;
    }
    // 0x80095E04: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80095E08: jal         0x800C67D8
    // 0x80095E0C: nop

    func_800C67D8(rdram, ctx);
        goto after_12;
    // 0x80095E0C: nop

    after_12:
    // 0x80095E10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095E14: jal         0x800A0E58
    // 0x80095E18: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_800A0E58(rdram, ctx);
        goto after_13;
    // 0x80095E18: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x80095E1C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80095E20: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095E24: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80095E28: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x80095E2C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80095E30: nop

    // 0x80095E34: bc1fl       L_80095E60
    if (!c1cs) {
        // 0x80095E38: lw          $s0, 0x94($s1)
        ctx->r16 = MEM_W(ctx->r17, 0X94);
            goto L_80095E60;
    }
    goto skip_3;
    // 0x80095E38: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    skip_3:
    // 0x80095E3C: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80095E40: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80095E44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095E48: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80095E4C: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
    // 0x80095E50: lw          $t2, 0x94($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X94);
    // 0x80095E54: jal         0x8009BA58
    // 0x80095E58: sb          $t1, 0xA1($t2)
    MEM_B(0XA1, ctx->r10) = ctx->r9;
    func_8009BA58(rdram, ctx);
        goto after_14;
    // 0x80095E58: sb          $t1, 0xA1($t2)
    MEM_B(0XA1, ctx->r10) = ctx->r9;
    after_14:
L_80095E5C:
    // 0x80095E5C: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_80095E60:
    // 0x80095E60: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    // 0x80095E64: addiu       $a1, $s0, 0x78
    ctx->r5 = ADD32(ctx->r16, 0X78);
    // 0x80095E68: jal         0x800EFB24
    // 0x80095E6C: addiu       $a2, $s0, 0x84
    ctx->r6 = ADD32(ctx->r16, 0X84);
    func_800EFB24(rdram, ctx);
        goto after_15;
    // 0x80095E6C: addiu       $a2, $s0, 0x84
    ctx->r6 = ADD32(ctx->r16, 0X84);
    after_15:
    // 0x80095E70: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095E78: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x80095E7C: addiu       $a2, $s0, 0x78
    ctx->r6 = ADD32(ctx->r16, 0X78);
    // 0x80095E80: jal         0x800D4584
    // 0x80095E84: addiu       $a3, $s0, 0x58
    ctx->r7 = ADD32(ctx->r16, 0X58);
    func_800D4584(rdram, ctx);
        goto after_16;
    // 0x80095E84: addiu       $a3, $s0, 0x58
    ctx->r7 = ADD32(ctx->r16, 0X58);
    after_16:
    // 0x80095E88: lw          $a1, 0x94($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X94);
    // 0x80095E8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095E90: jal         0x8009C0F8
    // 0x80095E94: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    func_8009C0F8(rdram, ctx);
        goto after_17;
    // 0x80095E94: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    after_17:
    // 0x80095E98: b           L_80095F4C
    // 0x80095E9C: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
        goto L_80095F4C;
    // 0x80095E9C: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_80095EA0:
    // 0x80095EA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095EA4: jal         0x8009C128
    // 0x80095EA8: addiu       $a1, $s0, 0x78
    ctx->r5 = ADD32(ctx->r16, 0X78);
    func_8009C128(rdram, ctx);
        goto after_18;
    // 0x80095EA8: addiu       $a1, $s0, 0x78
    ctx->r5 = ADD32(ctx->r16, 0X78);
    after_18:
    // 0x80095EAC: lw          $a1, 0x94($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X94);
    // 0x80095EB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095EB4: jal         0x8009C15C
    // 0x80095EB8: addiu       $a1, $a1, 0x84
    ctx->r5 = ADD32(ctx->r5, 0X84);
    func_8009C15C(rdram, ctx);
        goto after_19;
    // 0x80095EB8: addiu       $a1, $a1, 0x84
    ctx->r5 = ADD32(ctx->r5, 0X84);
    after_19:
    // 0x80095EBC: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095EC0: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    // 0x80095EC4: addiu       $a1, $s0, 0x78
    ctx->r5 = ADD32(ctx->r16, 0X78);
    // 0x80095EC8: jal         0x800EFB24
    // 0x80095ECC: addiu       $a2, $s0, 0x84
    ctx->r6 = ADD32(ctx->r16, 0X84);
    func_800EFB24(rdram, ctx);
        goto after_20;
    // 0x80095ECC: addiu       $a2, $s0, 0x84
    ctx->r6 = ADD32(ctx->r16, 0X84);
    after_20:
    // 0x80095ED0: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80095ED8: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x80095EDC: addiu       $a2, $s0, 0x78
    ctx->r6 = ADD32(ctx->r16, 0X78);
    // 0x80095EE0: jal         0x800D4584
    // 0x80095EE4: addiu       $a3, $s0, 0x58
    ctx->r7 = ADD32(ctx->r16, 0X58);
    func_800D4584(rdram, ctx);
        goto after_21;
    // 0x80095EE4: addiu       $a3, $s0, 0x58
    ctx->r7 = ADD32(ctx->r16, 0X58);
    after_21:
    // 0x80095EE8: jal         0x80095798
    // 0x80095EEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80095798(rdram, ctx);
        goto after_22;
    // 0x80095EEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_22:
    // 0x80095EF0: lw          $a1, 0x94($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X94);
    // 0x80095EF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095EF8: jal         0x8009C0F8
    // 0x80095EFC: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    func_8009C0F8(rdram, ctx);
        goto after_23;
    // 0x80095EFC: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    after_23:
    // 0x80095F00: b           L_80095F4C
    // 0x80095F04: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
        goto L_80095F4C;
    // 0x80095F04: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_80095F08:
    // 0x80095F08: jal         0x800978A4
    // 0x80095F0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800978A4(rdram, ctx);
        goto after_24;
    // 0x80095F0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_24:
    // 0x80095F10: b           L_80095F4C
    // 0x80095F14: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
        goto L_80095F4C;
    // 0x80095F14: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_80095F18:
    // 0x80095F18: jal         0x80096768
    // 0x80095F1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80096768(rdram, ctx);
        goto after_25;
    // 0x80095F1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_25:
    // 0x80095F20: b           L_80095F4C
    // 0x80095F24: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
        goto L_80095F4C;
    // 0x80095F24: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_80095F28:
    // 0x80095F28: jal         0x80084D68
    // 0x80095F2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bahitspline_entrypoint_2(rdram, ctx);
        goto after_26;
    // 0x80095F2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_26:
    // 0x80095F30: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_80095F34:
    // 0x80095F34: sb          $zero, 0x54($s0)
    MEM_B(0X54, ctx->r16) = 0;
    // 0x80095F38: lw          $t3, 0x94($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X94);
    // 0x80095F3C: sb          $zero, 0x55($t3)
    MEM_B(0X55, ctx->r11) = 0;
    // 0x80095F40: lw          $t4, 0x94($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X94);
    // 0x80095F44: sb          $zero, 0x56($t4)
    MEM_B(0X56, ctx->r12) = 0;
    // 0x80095F48: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_80095F4C:
    // 0x80095F4C: jal         0x800C670C
    // 0x80095F50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800C670C(rdram, ctx);
        goto after_27;
    // 0x80095F50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_27:
    // 0x80095F54: beq         $v0, $zero, L_80095F8C
    if (ctx->r2 == 0) {
        // 0x80095F58: nop
    
            goto L_80095F8C;
    }
    // 0x80095F58: nop

    // 0x80095F5C: lw          $t5, 0x94($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X94);
    // 0x80095F60: jal         0x800C67D8
    // 0x80095F64: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    func_800C67D8(rdram, ctx);
        goto after_28;
    // 0x80095F64: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    after_28:
    // 0x80095F68: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095F6C: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x80095F70: lwc1        $f10, 0x7C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x80095F74: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80095F78: nop

    // 0x80095F7C: bc1fl       L_80095F8C
    if (!c1cs) {
        // 0x80095F80: sb          $t6, 0xA0($s0)
        MEM_B(0XA0, ctx->r16) = ctx->r14;
            goto L_80095F8C;
    }
    goto skip_4;
    // 0x80095F80: sb          $t6, 0xA0($s0)
    MEM_B(0XA0, ctx->r16) = ctx->r14;
    skip_4:
    // 0x80095F84: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80095F88: sb          $t6, 0xA0($s0)
    MEM_B(0XA0, ctx->r16) = ctx->r14;
L_80095F8C:
    // 0x80095F8C: jal         0x80096530
    // 0x80095F90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80096530(rdram, ctx);
        goto after_29;
    // 0x80095F90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_29:
    // 0x80095F94: beql        $v0, $zero, L_80095FAC
    if (ctx->r2 == 0) {
        // 0x80095F98: lw          $s0, 0x94($s1)
        ctx->r16 = MEM_W(ctx->r17, 0X94);
            goto L_80095FAC;
    }
    goto skip_5;
    // 0x80095F98: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    skip_5:
    // 0x80095F9C: lw          $t8, 0x94($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X94);
    // 0x80095FA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80095FA4: sb          $t7, 0x56($t8)
    MEM_B(0X56, ctx->r24) = ctx->r15;
    // 0x80095FA8: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_80095FAC:
    // 0x80095FAC: lbu         $t9, 0xA0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XA0);
    // 0x80095FB0: beql        $t9, $zero, L_8009603C
    if (ctx->r25 == 0) {
        // 0x80095FB4: lbu         $t2, 0x56($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X56);
            goto L_8009603C;
    }
    goto skip_6;
    // 0x80095FB4: lbu         $t2, 0x56($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X56);
    skip_6:
    // 0x80095FB8: jal         0x800C67D8
    // 0x80095FBC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800C67D8(rdram, ctx);
        goto after_30;
    // 0x80095FBC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_30:
    // 0x80095FC0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80095FC4: jal         0x800A0E58
    // 0x80095FC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A0E58(rdram, ctx);
        goto after_31;
    // 0x80095FC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_31:
    // 0x80095FCC: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80095FD0: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80095FD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80095FD8: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x80095FDC: lwc1        $f16, 0x7C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x80095FE0: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80095FE4: nop

    // 0x80095FE8: bc1fl       L_8009603C
    if (!c1cs) {
        // 0x80095FEC: lbu         $t2, 0x56($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X56);
            goto L_8009603C;
    }
    goto skip_7;
    // 0x80095FEC: lbu         $t2, 0x56($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X56);
    skip_7:
    // 0x80095FF0: jal         0x80096254
    // 0x80095FF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80096254(rdram, ctx);
        goto after_32;
    // 0x80095FF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_32:
    // 0x80095FF8: lw          $t0, 0x94($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X94);
    // 0x80095FFC: lbu         $t1, 0x56($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X56);
    // 0x80096000: beq         $t1, $zero, L_80096030
    if (ctx->r9 == 0) {
        // 0x80096004: nop
    
            goto L_80096030;
    }
    // 0x80096004: nop

    // 0x80096008: jal         0x8009BB50
    // 0x8009600C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB50(rdram, ctx);
        goto after_33;
    // 0x8009600C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_33:
    // 0x80096010: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80096014: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80096018: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8009601C: nop

    // 0x80096020: bc1f        L_80096030
    if (!c1cs) {
        // 0x80096024: nop
    
            goto L_80096030;
    }
    // 0x80096024: nop

    // 0x80096028: jal         0x8009BA58
    // 0x8009602C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    func_8009BA58(rdram, ctx);
        goto after_34;
    // 0x8009602C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    after_34:
L_80096030:
    // 0x80096030: b           L_800960A0
    // 0x80096034: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
        goto L_800960A0;
    // 0x80096034: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80096038: lbu         $t2, 0x56($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X56);
L_8009603C:
    // 0x8009603C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80096040: beq         $t2, $zero, L_80096094
    if (ctx->r10 == 0) {
        // 0x80096044: nop
    
            goto L_80096094;
    }
    // 0x80096044: nop

    // 0x80096048: jal         0x80096260
    // 0x8009604C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80096260(rdram, ctx);
        goto after_35;
    // 0x8009604C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_35:
    // 0x80096050: jal         0x8009BB50
    // 0x80096054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB50(rdram, ctx);
        goto after_36;
    // 0x80096054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_36:
    // 0x80096058: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009605C: nop

    // 0x80096060: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80096064: nop

    // 0x80096068: bc1f        L_8009608C
    if (!c1cs) {
        // 0x8009606C: nop
    
            goto L_8009608C;
    }
    // 0x8009606C: nop

    // 0x80096070: jal         0x80096628
    // 0x80096074: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80096628(rdram, ctx);
        goto after_37;
    // 0x80096074: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_37:
    // 0x80096078: andi        $t3, $v0, 0x8000
    ctx->r11 = ctx->r2 & 0X8000;
    // 0x8009607C: bne         $t3, $zero, L_8009608C
    if (ctx->r11 != 0) {
        // 0x80096080: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8009608C;
    }
    // 0x80096080: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80096084: jal         0x8009BA58
    // 0x80096088: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    func_8009BA58(rdram, ctx);
        goto after_38;
    // 0x80096088: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    after_38:
L_8009608C:
    // 0x8009608C: b           L_800960A0
    // 0x80096090: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
        goto L_800960A0;
    // 0x80096090: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_80096094:
    // 0x80096094: jal         0x80096254
    // 0x80096098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80096254(rdram, ctx);
        goto after_39;
    // 0x80096098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_39:
    // 0x8009609C: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
L_800960A0:
    // 0x800960A0: lbu         $t4, 0xA2($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XA2);
    // 0x800960A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800960A8: beq         $t4, $zero, L_800960B8
    if (ctx->r12 == 0) {
        // 0x800960AC: nop
    
            goto L_800960B8;
    }
    // 0x800960AC: nop

    // 0x800960B0: jal         0x8009C0F8
    // 0x800960B4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_8009C0F8(rdram, ctx);
        goto after_40;
    // 0x800960B4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_40:
L_800960B8:
    // 0x800960B8: jal         0x800CB870
    // 0x800960BC: nop

    func_800CB870(rdram, ctx);
        goto after_41;
    // 0x800960BC: nop

    after_41:
    // 0x800960C0: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x800960C4: lbu         $t5, 0x54($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X54);
    // 0x800960C8: beql        $t5, $zero, L_800960F0
    if (ctx->r13 == 0) {
        // 0x800960CC: sb          $zero, 0xA3($s0)
        MEM_B(0XA3, ctx->r16) = 0;
            goto L_800960F0;
    }
    goto skip_8;
    // 0x800960CC: sb          $zero, 0xA3($s0)
    MEM_B(0XA3, ctx->r16) = 0;
    skip_8:
    // 0x800960D0: lbu         $a0, 0xA3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA3);
    // 0x800960D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800960D8: jal         0x800F1418
    // 0x800960DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_800F1418(rdram, ctx);
        goto after_42;
    // 0x800960DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_42:
    // 0x800960E0: lw          $t6, 0x94($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X94);
    // 0x800960E4: b           L_800960F0
    // 0x800960E8: sb          $v0, 0xA3($t6)
    MEM_B(0XA3, ctx->r14) = ctx->r2;
        goto L_800960F0;
    // 0x800960E8: sb          $v0, 0xA3($t6)
    MEM_B(0XA3, ctx->r14) = ctx->r2;
    // 0x800960EC: sb          $zero, 0xA3($s0)
    MEM_B(0XA3, ctx->r16) = 0;
L_800960F0:
    // 0x800960F0: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x800960F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800960F8: jal         0x8009C15C
    // 0x800960FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C15C(rdram, ctx);
        goto after_43;
    // 0x800960FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_43:
    // 0x80096100: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80096104: jal         0x8009C128
    // 0x80096108: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_8009C128(rdram, ctx);
        goto after_44;
    // 0x80096108: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_44:
    // 0x8009610C: lw          $a0, 0x94($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X94);
    // 0x80096110: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80096114: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80096118: jal         0x800EFB24
    // 0x8009611C: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    func_800EFB24(rdram, ctx);
        goto after_45;
    // 0x8009611C: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    after_45:
    // 0x80096120: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x80096124: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x80096128: beql        $a1, $zero, L_80096148
    if (ctx->r5 == 0) {
        // 0x8009612C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80096148;
    }
    goto skip_9;
    // 0x8009612C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_9:
    // 0x80096130: jal         0x800FB508
    // 0x80096134: addiu       $a0, $s0, 0x6C
    ctx->r4 = ADD32(ctx->r16, 0X6C);
    func_800FB508(rdram, ctx);
        goto after_46;
    // 0x80096134: addiu       $a0, $s0, 0x6C
    ctx->r4 = ADD32(ctx->r16, 0X6C);
    after_46:
    // 0x80096138: lw          $s0, 0x94($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X94);
    // 0x8009613C: addiu       $t7, $s0, 0x6C
    ctx->r15 = ADD32(ctx->r16, 0X6C);
    // 0x80096140: sw          $t7, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r15;
    // 0x80096144: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80096148:
    // 0x80096148: jal         0x80095774
    // 0x8009614C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095774(rdram, ctx);
        goto after_47;
    // 0x8009614C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_47:
    // 0x80096150: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80096154: jal         0x80095774
    // 0x80096158: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80095774(rdram, ctx);
        goto after_48;
    // 0x80096158: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_48:
    // 0x8009615C: lw          $t8, 0x94($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X94);
    // 0x80096160: lw          $t9, 0x50($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X50);
    // 0x80096164: beql        $t9, $zero, L_80096190
    if (ctx->r25 == 0) {
        // 0x80096168: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80096190;
    }
    goto skip_10;
    // 0x80096168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_10:
    // 0x8009616C: jal         0x8008E078
    // 0x80096170: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E078(rdram, ctx);
        goto after_49;
    // 0x80096170: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_49:
    // 0x80096174: beq         $v0, $zero, L_8009618C
    if (ctx->r2 == 0) {
        // 0x80096178: addiu       $a1, $zero, 0x91
        ctx->r5 = ADD32(0, 0X91);
            goto L_8009618C;
    }
    // 0x80096178: addiu       $a1, $zero, 0x91
    ctx->r5 = ADD32(0, 0X91);
    // 0x8009617C: lw          $t0, 0x94($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X94);
    // 0x80096180: lw          $a2, 0x184($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X184);
    // 0x80096184: jal         0x8010114C
    // 0x80096188: lw          $a0, 0x50($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X50);
    func_8010114C(rdram, ctx);
        goto after_50;
    // 0x80096188: lw          $a0, 0x50($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X50);
    after_50:
L_8009618C:
    // 0x8009618C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80096190:
    // 0x80096190: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80096194: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80096198: jr          $ra
    // 0x8009619C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8009619C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800961A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800961A0: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800961A4: jr          $ra
    // 0x800961A8: sb          $a1, 0xA2($t6)
    MEM_B(0XA2, ctx->r14) = ctx->r5;
    return;
    // 0x800961A8: sb          $a1, 0xA2($t6)
    MEM_B(0XA2, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_800961AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800961AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800961B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800961B4: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x800961B8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800961BC: lw          $v1, 0x9C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X9C);
    // 0x800961C0: beq         $v1, $at, L_800961D8
    if (ctx->r3 == ctx->r1) {
        // 0x800961C4: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_800961D8;
    }
    // 0x800961C4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800961C8: beql        $v1, $at, L_800961F8
    if (ctx->r3 == ctx->r1) {
        // 0x800961CC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800961F8;
    }
    goto skip_0;
    // 0x800961CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    skip_0:
    // 0x800961D0: b           L_80096210
    // 0x800961D4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
        goto L_80096210;
    // 0x800961D4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_800961D8:
    // 0x800961D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800961DC: jal         0x80097858
    // 0x800961E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80097858(rdram, ctx);
        goto after_0;
    // 0x800961E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800961E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800961E8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800961EC: b           L_8009620C
    // 0x800961F0: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
        goto L_8009620C;
    // 0x800961F0: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x800961F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
L_800961F8:
    // 0x800961F8: jal         0x80084D58
    // 0x800961FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    _bahitspline_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x800961FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80096200: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80096204: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80096208: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
L_8009620C:
    // 0x8009620C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_80096210:
    // 0x80096210: beq         $a1, $at, L_8009622C
    if (ctx->r5 == ctx->r1) {
        // 0x80096214: sw          $a1, 0x9C($v0)
        MEM_W(0X9C, ctx->r2) = ctx->r5;
            goto L_8009622C;
    }
    // 0x80096214: sw          $a1, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r5;
    // 0x80096218: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8009621C: beq         $a1, $at, L_8009623C
    if (ctx->r5 == ctx->r1) {
        // 0x80096220: nop
    
            goto L_8009623C;
    }
    // 0x80096220: nop

    // 0x80096224: b           L_80096248
    // 0x80096228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80096248;
    // 0x80096228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009622C:
    // 0x8009622C: jal         0x8009788C
    // 0x80096230: nop

    func_8009788C(rdram, ctx);
        goto after_2;
    // 0x80096230: nop

    after_2:
    // 0x80096234: b           L_80096248
    // 0x80096238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80096248;
    // 0x80096238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009623C:
    // 0x8009623C: jal         0x80084D60
    // 0x80096240: nop

    _bahitspline_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x80096240: nop

    after_3:
    // 0x80096244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80096248:
    // 0x80096248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009624C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096254: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096258: jr          $ra
    // 0x8009625C: sw          $a1, 0xA8($t6)
    MEM_W(0XA8, ctx->r14) = ctx->r5;
    return;
    // 0x8009625C: sw          $a1, 0xA8($t6)
    MEM_W(0XA8, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80096260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096268: jal         0x80096628
    // 0x8009626C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80096628(rdram, ctx);
        goto after_0;
    // 0x8009626C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80096270: jal         0x800C84B0
    // 0x80096274: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800C84B0(rdram, ctx);
        goto after_1;
    // 0x80096274: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80096278: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x8009627C: bne         $v0, $at, L_80096298
    if (ctx->r2 != ctx->r1) {
        // 0x80096280: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80096298;
    }
    // 0x80096280: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80096284: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80096288: jal         0x80096254
    // 0x8009628C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80096254(rdram, ctx);
        goto after_2;
    // 0x8009628C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x80096290: b           L_800962A4
    // 0x80096294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800962A4;
    // 0x80096294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80096298:
    // 0x80096298: jal         0x80096254
    // 0x8009629C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80096254(rdram, ctx);
        goto after_3;
    // 0x8009629C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x800962A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800962A4:
    // 0x800962A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800962A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800962B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800962B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800962B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800962B8: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800962BC: jal         0x800C68D4
    // 0x800962C0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C68D4(rdram, ctx);
        goto after_0;
    // 0x800962C0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800962C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800962C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800962CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800962D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800962D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800962D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800962DC: jal         0x8009C150
    // 0x800962E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009C150(rdram, ctx);
        goto after_0;
    // 0x800962E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800962E4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800962E8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x800962EC: lw          $t7, 0x94($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X94);
    // 0x800962F0: jal         0x800C6784
    // 0x800962F4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_800C6784(rdram, ctx);
        goto after_1;
    // 0x800962F4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x800962F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800962FC: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80096300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80096304: jr          $ra
    // 0x80096308: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    return;
    // 0x80096308: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
;}
RECOMP_FUNC void func_8009630C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009630C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096314: jal         0x8009C150
    // 0x80096318: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8009C150(rdram, ctx);
        goto after_0;
    // 0x80096318: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009631C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80096320: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80096324: lw          $t7, 0x94($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X94);
    // 0x80096328: jal         0x800C6784
    // 0x8009632C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_800C6784(rdram, ctx);
        goto after_1;
    // 0x8009632C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x80096330: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80096334: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80096338: lw          $t9, 0x94($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X94);
    // 0x8009633C: jal         0x800C67D8
    // 0x80096340: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_800C67D8(rdram, ctx);
        goto after_2;
    // 0x80096340: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_2:
    // 0x80096344: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80096348: jal         0x800F0E00
    // 0x8009634C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F0E00(rdram, ctx);
        goto after_3;
    // 0x8009634C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_3:
    // 0x80096350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096354: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80096358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009635C: jr          $ra
    // 0x80096360: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    return;
    // 0x80096360: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
;}
RECOMP_FUNC void func_80096364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009636C: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096370: jal         0x800C6784
    // 0x80096374: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C6784(rdram, ctx);
        goto after_0;
    // 0x80096374: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80096378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009637C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80096380: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096388: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x8009638C: jr          $ra
    // 0x80096390: lw          $v0, 0x9C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X9C);
    return;
    // 0x80096390: lw          $v0, 0x9C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X9C);
;}
RECOMP_FUNC void func_80096394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096398: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8009639C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800963A0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800963A4: lw          $a1, 0x94($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X94);
    // 0x800963A8: jal         0x800EE7F8
    // 0x800963AC: addiu       $a1, $a1, 0x90
    ctx->r5 = ADD32(ctx->r5, 0X90);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800963AC: addiu       $a1, $a1, 0x90
    ctx->r5 = ADD32(ctx->r5, 0X90);
    after_0:
    // 0x800963B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800963B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800963B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800963C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800963C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800963C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800963C8: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800963CC: jal         0x800C675C
    // 0x800963D0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C675C(rdram, ctx);
        goto after_0;
    // 0x800963D0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800963D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800963D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800963DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800963E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800963E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800963E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800963EC: jal         0x800963C0
    // 0x800963F0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800963C0(rdram, ctx);
        goto after_0;
    // 0x800963F0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800963F4: jal         0x80013A7C
    // 0x800963F8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    func_80013A7C(rdram, ctx);
        goto after_1;
    // 0x800963F8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800963FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096400: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80096404: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009640C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009640C: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x80096410: lbu         $v0, 0x18($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X18);
    // 0x80096414: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80096418: beq         $t6, $zero, L_8009642C
    if (ctx->r14 == 0) {
        // 0x8009641C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8009642C;
    }
    // 0x8009641C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80096420: lbu         $v0, 0x56($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X56);
    // 0x80096424: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80096428: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8009642C:
    // 0x8009642C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096434: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096438: jr          $ra
    // 0x8009643C: lw          $v0, 0x74($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X74);
    return;
    // 0x8009643C: lw          $v0, 0x74($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X74);
;}
RECOMP_FUNC void func_80096440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096444: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80096448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009644C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80096450: lw          $a1, 0x94($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X94);
    // 0x80096454: jal         0x800EE7F8
    // 0x80096458: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80096458: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    after_0:
    // 0x8009645C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80096464: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009646C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009646C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096470: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80096474: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80096478: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8009647C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80096480: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80096484: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80096488: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8009648C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80096490: addiu       $s3, $zero, 0x24
    ctx->r19 = ADD32(0, 0X24);
L_80096494:
    // 0x80096494: lw          $t6, 0x94($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X94);
    // 0x80096498: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8009649C: addu        $a1, $t6, $s0
    ctx->r5 = ADD32(ctx->r14, ctx->r16);
    // 0x800964A0: jal         0x800EE7F8
    // 0x800964A4: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800964A4: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    after_0:
    // 0x800964A8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800964AC: bne         $s0, $s3, L_80096494
    if (ctx->r16 != ctx->r19) {
        // 0x800964B0: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80096494;
    }
    // 0x800964B0: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800964B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800964B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800964BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800964C0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800964C4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800964C8: jr          $ra
    // 0x800964CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800964CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800964D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800964D0: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800964D4: jr          $ra
    // 0x800964D8: lw          $v0, 0xA8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XA8);
    return;
    // 0x800964D8: lw          $v0, 0xA8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XA8);
;}
RECOMP_FUNC void func_800964DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800964DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800964E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800964E4: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800964E8: jal         0x800C67D8
    // 0x800964EC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C67D8(rdram, ctx);
        goto after_0;
    // 0x800964EC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800964F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800964F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800964F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096500: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096504: jr          $ra
    // 0x80096508: lbu         $v0, 0xA1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA1);
    return;
    // 0x80096508: lbu         $v0, 0xA1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA1);
;}
RECOMP_FUNC void func_8009650C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009650C: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096510: jr          $ra
    // 0x80096514: lbu         $v0, 0x55($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X55);
    return;
    // 0x80096514: lbu         $v0, 0x55($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X55);
;}
RECOMP_FUNC void func_80096518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096518: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x8009651C: jr          $ra
    // 0x80096520: lbu         $v0, 0x56($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X56);
    return;
    // 0x80096520: lbu         $v0, 0x56($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X56);
;}
RECOMP_FUNC void func_80096524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096524: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096528: jr          $ra
    // 0x8009652C: lbu         $v0, 0xA0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA0);
    return;
    // 0x8009652C: lbu         $v0, 0xA0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA0);
;}
RECOMP_FUNC void func_80096530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096530: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096534: lbu         $v0, 0xA3($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA3);
    // 0x80096538: xori        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 ^ 0X3;
    // 0x8009653C: jr          $ra
    // 0x80096540: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    return;
    // 0x80096540: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80096544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009654C: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096550: jal         0x800C670C
    // 0x80096554: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C670C(rdram, ctx);
        goto after_0;
    // 0x80096554: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80096558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009655C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80096560: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009656C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80096574: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096578: jal         0x800C6744
    // 0x8009657C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C6744(rdram, ctx);
        goto after_0;
    // 0x8009657C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80096580: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80096584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096588: andi        $t8, $v0, 0x1F00
    ctx->r24 = ctx->r2 & 0X1F00;
    // 0x8009658C: xor         $v0, $t7, $t8
    ctx->r2 = ctx->r15 ^ ctx->r24;
    // 0x80096590: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80096594: jr          $ra
    // 0x80096598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80096598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8009659C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009659C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800965A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800965A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800965A8: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800965AC: jal         0x800C6744
    // 0x800965B0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C6744(rdram, ctx);
        goto after_0;
    // 0x800965B0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800965B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800965B8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800965BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800965C0: jr          $ra
    // 0x800965C4: and         $v0, $v0, $t7
    ctx->r2 = ctx->r2 & ctx->r15;
    return;
    // 0x800965C4: and         $v0, $v0, $t7
    ctx->r2 = ctx->r2 & ctx->r15;
;}
RECOMP_FUNC void func_800965C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800965C8: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800965CC: jr          $ra
    // 0x800965D0: lbu         $v0, 0xA4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA4);
    return;
    // 0x800965D0: lbu         $v0, 0xA4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA4);
;}
RECOMP_FUNC void func_800965D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800965D4: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800965D8: jr          $ra
    // 0x800965DC: lw          $v0, 0x50($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X50);
    return;
    // 0x800965DC: lw          $v0, 0x50($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X50);
;}
RECOMP_FUNC void func_800965E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800965E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800965E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800965E8: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800965EC: jal         0x800C67F8
    // 0x800965F0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C67F8(rdram, ctx);
        goto after_0;
    // 0x800965F0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800965F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800965F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800965FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009660C: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096610: jal         0x800C6840
    // 0x80096614: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C6840(rdram, ctx);
        goto after_0;
    // 0x80096614: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80096618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009661C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80096620: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009662C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096630: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096634: jal         0x800C6744
    // 0x80096638: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C6744(rdram, ctx);
        goto after_0;
    // 0x80096638: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8009663C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80096644: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009664C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009664C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096654: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096658: jal         0x800C674C
    // 0x8009665C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C674C(rdram, ctx);
        goto after_0;
    // 0x8009665C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80096660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80096668: jr          $ra
    // 0x8009666C: nop

    return;
    // 0x8009666C: nop

;}
RECOMP_FUNC void func_80096670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096678: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x8009667C: jal         0x800C67C8
    // 0x80096680: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C67C8(rdram, ctx);
        goto after_0;
    // 0x80096680: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80096684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009668C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009669C: jal         0x80096628
    // 0x800966A0: nop

    func_80096628(rdram, ctx);
        goto after_0;
    // 0x800966A0: nop

    after_0:
    // 0x800966A4: jal         0x800C84B0
    // 0x800966A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800C84B0(rdram, ctx);
        goto after_1;
    // 0x800966A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800966AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800966B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800966B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800966BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800966BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800966C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800966C4: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800966C8: jal         0x800C67E0
    // 0x800966CC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C67E0(rdram, ctx);
        goto after_0;
    // 0x800966CC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800966D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800966D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800966D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800966E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800966E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800966E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800966E8: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800966EC: jal         0x800C67E8
    // 0x800966F0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C67E8(rdram, ctx);
        goto after_0;
    // 0x800966F0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800966F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800966F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800966FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009670C: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096710: jal         0x800C5B84
    // 0x80096714: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C5B84(rdram, ctx);
        goto after_0;
    // 0x80096714: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80096718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009671C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80096720: jr          $ra
    // 0x80096724: nop

    return;
    // 0x80096724: nop

;}
RECOMP_FUNC void func_80096728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009672C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096730: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80096734: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80096738: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8009673C: beq         $a1, $zero, L_80096758
    if (ctx->r5 == 0) {
        // 0x80096740: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80096758;
    }
    // 0x80096740: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80096744: jal         0x800C5BC4
    // 0x80096748: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800C5BC4(rdram, ctx);
        goto after_0;
    // 0x80096748: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8009674C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80096750: lw          $t7, 0x94($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X94);
    // 0x80096754: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
L_80096758:
    // 0x80096758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009675C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80096760: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096768: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009676C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096770: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80096774: jal         0x8009C128
    // 0x80096778: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80096778: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8009677C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80096780: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80096784: jal         0x800D4D5C
    // 0x80096788: lw          $a1, 0x94($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X94);
    func_800D4D5C(rdram, ctx);
        goto after_1;
    // 0x80096788: lw          $a1, 0x94($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X94);
    after_1:
    // 0x8009678C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096790: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80096794: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009679C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009679C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800967A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800967A4: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800967A8: jal         0x800C68DC
    // 0x800967AC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800C68DC(rdram, ctx);
        goto after_0;
    // 0x800967AC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800967B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800967B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800967B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800967C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800967C0: jr          $ra
    // 0x800967C4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    return;
    // 0x800967C4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
;}
RECOMP_FUNC void func_800967C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800967C8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800967CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800967D0: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x800967D4: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x800967D8: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x800967DC: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x800967E0: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x800967E4: jal         0x800EFB24
    // 0x800967E8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x800967E8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x800967EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800967F0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x800967F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800967F8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800967FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80096800: jal         0x800EFA4C
    // 0x80096804: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x80096804: nop

    after_1:
    // 0x80096808: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8009680C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80096810: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80096814: jal         0x800EFA4C
    // 0x80096818: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x80096818: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x8009681C: jal         0x800EF2A0
    // 0x80096820: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_800EF2A0(rdram, ctx);
        goto after_3;
    // 0x80096820: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_3:
    // 0x80096824: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80096828: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8009682C: jal         0x800EE97C
    // 0x80096830: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_800EE97C(rdram, ctx);
        goto after_4;
    // 0x80096830: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_4:
    // 0x80096834: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80096838: jal         0x800EEAA4
    // 0x8009683C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_800EEAA4(rdram, ctx);
        goto after_5;
    // 0x8009683C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_5:
    // 0x80096840: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80096844: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x80096848: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8009684C: nop

    // 0x80096850: bc1tl       L_80096AC0
    if (c1cs) {
        // 0x80096854: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80096AC0;
    }
    goto skip_0;
    // 0x80096854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80096858: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8009685C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80096860: bc1tl       L_80096AC0
    if (c1cs) {
        // 0x80096864: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80096AC0;
    }
    goto skip_1;
    // 0x80096864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80096868: jal         0x800EEAA4
    // 0x8009686C: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    func_800EEAA4(rdram, ctx);
        goto after_6;
    // 0x8009686C: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    after_6:
    // 0x80096870: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80096874: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x80096878: jal         0x800EEAA4
    // 0x8009687C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_800EEAA4(rdram, ctx);
        goto after_7;
    // 0x8009687C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x80096880: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80096884: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80096888: addiu       $v0, $sp, 0x7C
    ctx->r2 = ADD32(ctx->r29, 0X7C);
    // 0x8009688C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80096890: lw          $v1, 0xA4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA4);
    // 0x80096894: sub.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80096898: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x8009689C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x800968A0: bc1t        L_80096ABC
    if (c1cs) {
        // 0x800968A4: div.s       $f2, $f4, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
            goto L_80096ABC;
    }
    // 0x800968A4: div.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800968A8: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800968AC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800968B0: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800968B4: mul.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x800968B8: beql        $v0, $a1, L_800968EC
    if (ctx->r2 == ctx->r5) {
        // 0x800968BC: add.s       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
            goto L_800968EC;
    }
    goto skip_2;
    // 0x800968BC: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
    skip_2:
    // 0x800968C0: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
L_800968C4:
    // 0x800968C4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800968C8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800968CC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800968D0: swc1        $f14, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f14.u32l;
    // 0x800968D4: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800968D8: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800968DC: mul.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x800968E0: bnel        $v0, $a1, L_800968C4
    if (ctx->r2 != ctx->r5) {
        // 0x800968E4: add.s       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
            goto L_800968C4;
    }
    goto skip_3;
    // 0x800968E4: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
    skip_3:
    // 0x800968E8: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
L_800968EC:
    // 0x800968EC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800968F0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800968F4: swc1        $f14, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f14.u32l;
    // 0x800968F8: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x800968FC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80096900: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80096904: jal         0x800EFA4C
    // 0x80096908: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_800EFA4C(rdram, ctx);
        goto after_8;
    // 0x80096908: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_8:
    // 0x8009690C: jal         0x800EF2A0
    // 0x80096910: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    func_800EF2A0(rdram, ctx);
        goto after_9;
    // 0x80096910: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    after_9:
    // 0x80096914: lw          $v0, 0x98($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X98);
    // 0x80096918: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8009691C: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80096920: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80096924: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80096928: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8009692C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80096930: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80096934: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80096938: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8009693C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80096940: jal         0x800EFA4C
    // 0x80096944: nop

    func_800EFA4C(rdram, ctx);
        goto after_10;
    // 0x80096944: nop

    after_10:
    // 0x80096948: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8009694C: jal         0x800EEAA4
    // 0x80096950: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800EEAA4(rdram, ctx);
        goto after_11;
    // 0x80096950: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_11:
    // 0x80096954: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80096958: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8009695C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80096960: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80096964: nop

    // 0x80096968: bc1tl       L_80096AC0
    if (c1cs) {
        // 0x8009696C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80096AC0;
    }
    goto skip_4;
    // 0x8009696C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x80096970: jal         0x800EEF94
    // 0x80096974: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    func_800EEF94(rdram, ctx);
        goto after_12;
    // 0x80096974: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    after_12:
    // 0x80096978: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8009697C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80096980: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x80096984: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80096988: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x8009698C: lui         $a3, 0x3CE5
    ctx->r7 = S32(0X3CE5 << 16);
    // 0x80096990: bc1tl       L_80096AC0
    if (c1cs) {
        // 0x80096994: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80096AC0;
    }
    goto skip_5;
    // 0x80096994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x80096998: jal         0x800BEE40
    // 0x8009699C: ori         $a3, $a3, 0x6042
    ctx->r7 = ctx->r7 | 0X6042;
    func_800BEE40(rdram, ctx);
        goto after_13;
    // 0x8009699C: ori         $a3, $a3, 0x6042
    ctx->r7 = ctx->r7 | 0X6042;
    after_13:
    // 0x800969A0: beq         $v0, $zero, L_80096ABC
    if (ctx->r2 == 0) {
        // 0x800969A4: lw          $a0, 0xA0($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA0);
            goto L_80096ABC;
    }
    // 0x800969A4: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x800969A8: jal         0x800EEAD4
    // 0x800969AC: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    func_800EEAD4(rdram, ctx);
        goto after_14;
    // 0x800969AC: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    after_14:
    // 0x800969B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800969B4: addiu       $v0, $v0, 0x6E30
    ctx->r2 = ADD32(ctx->r2, 0X6E30);
    // 0x800969B8: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800969BC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800969C0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800969C4: nop

    // 0x800969C8: bc1tl       L_80096AC0
    if (c1cs) {
        // 0x800969CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80096AC0;
    }
    goto skip_6;
    // 0x800969CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x800969D0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800969D4: nop

    // 0x800969D8: bc1fl       L_800969E8
    if (!c1cs) {
        // 0x800969DC: lw          $t6, 0x0($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X0);
            goto L_800969E8;
    }
    goto skip_7;
    // 0x800969DC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    skip_7:
    // 0x800969E0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800969E4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
L_800969E8:
    // 0x800969E8: addiu       $v1, $zero, 0x34
    ctx->r3 = ADD32(0, 0X34);
    // 0x800969EC: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800969F0: mflo        $t7
    ctx->r15 = lo;
    // 0x800969F4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x800969F8: swc1        $f12, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f12.u32l;
    // 0x800969FC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80096A00: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x80096A04: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80096A08: mflo        $t0
    ctx->r8 = lo;
    // 0x80096A0C: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
    // 0x80096A10: jal         0x800EE7F8
    // 0x80096A14: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800EE7F8(rdram, ctx);
        goto after_15;
    // 0x80096A14: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_15:
    // 0x80096A18: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80096A1C: addiu       $v0, $v0, 0x6E30
    ctx->r2 = ADD32(ctx->r2, 0X6E30);
    // 0x80096A20: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80096A24: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x80096A28: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80096A2C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80096A30: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80096A34: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80096A38: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80096A3C: addu        $a0, $v0, $t2
    ctx->r4 = ADD32(ctx->r2, ctx->r10);
    // 0x80096A40: jal         0x800EE7F8
    // 0x80096A44: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_800EE7F8(rdram, ctx);
        goto after_16;
    // 0x80096A44: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_16:
    // 0x80096A48: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80096A4C: addiu       $v0, $v0, 0x6E30
    ctx->r2 = ADD32(ctx->r2, 0X6E30);
    // 0x80096A50: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80096A54: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80096A58: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80096A5C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80096A60: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80096A64: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80096A68: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80096A6C: addu        $a0, $v0, $t4
    ctx->r4 = ADD32(ctx->r2, ctx->r12);
    // 0x80096A70: jal         0x800EE7F8
    // 0x80096A74: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_800EE7F8(rdram, ctx);
        goto after_17;
    // 0x80096A74: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_17:
    // 0x80096A78: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80096A7C: addiu       $v0, $v0, 0x6E30
    ctx->r2 = ADD32(ctx->r2, 0X6E30);
    // 0x80096A80: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80096A84: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x80096A88: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80096A8C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80096A90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80096A94: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80096A98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80096A9C: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x80096AA0: jal         0x800EE7F8
    // 0x80096AA4: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_18;
    // 0x80096AA4: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    after_18:
    // 0x80096AA8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80096AAC: addiu       $v0, $v0, 0x6E30
    ctx->r2 = ADD32(ctx->r2, 0X6E30);
    // 0x80096AB0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80096AB4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80096AB8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80096ABC:
    // 0x80096ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80096AC0:
    // 0x80096AC0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x80096AC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80096ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096ACC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80096AD0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80096AD4: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x80096AD8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80096ADC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80096AE0: sw          $a2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r6;
    // 0x80096AE4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80096AE8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80096AEC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80096AF0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80096AF4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80096AF8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80096AFC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80096B00: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80096B04: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    // 0x80096B08: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80096B0C: jal         0x800EFB24
    // 0x80096B10: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    func_800EFB24(rdram, ctx);
        goto after_0;
    // 0x80096B10: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    after_0:
    // 0x80096B14: or          $v1, $fp, $zero
    ctx->r3 = ctx->r30 | 0;
    // 0x80096B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80096B1C: addiu       $v0, $sp, 0xA4
    ctx->r2 = ADD32(ctx->r29, 0XA4);
    // 0x80096B20: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
L_80096B24:
    // 0x80096B24: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80096B28: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80096B2C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80096B30: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80096B34: nop

    // 0x80096B38: bc1fl       L_80096B4C
    if (!c1cs) {
        // 0x80096B3C: swc1        $f2, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
            goto L_80096B4C;
    }
    goto skip_0;
    // 0x80096B3C: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    skip_0:
    // 0x80096B40: b           L_80096B4C
    // 0x80096B44: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
        goto L_80096B4C;
    // 0x80096B44: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80096B48: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_80096B4C:
    // 0x80096B4C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80096B50: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80096B54: bne         $at, $zero, L_80096B24
    if (ctx->r1 != 0) {
        // 0x80096B58: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80096B24;
    }
    // 0x80096B58: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80096B5C: or          $v1, $fp, $zero
    ctx->r3 = ctx->r30 | 0;
    // 0x80096B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80096B64: addiu       $v0, $sp, 0x98
    ctx->r2 = ADD32(ctx->r29, 0X98);
    // 0x80096B68: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
L_80096B6C:
    // 0x80096B6C: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80096B70: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80096B74: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80096B78: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80096B7C: nop

    // 0x80096B80: bc1fl       L_80096B94
    if (!c1cs) {
        // 0x80096B84: swc1        $f2, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
            goto L_80096B94;
    }
    goto skip_1;
    // 0x80096B84: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    skip_1:
    // 0x80096B88: b           L_80096B94
    // 0x80096B8C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
        goto L_80096B94;
    // 0x80096B8C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80096B90: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_80096B94:
    // 0x80096B94: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80096B98: bne         $v0, $a1, L_80096B6C
    if (ctx->r2 != ctx->r5) {
        // 0x80096B9C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80096B6C;
    }
    // 0x80096B9C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80096BA0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80096BA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80096BA8: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80096BAC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096BB0: lwc1        $f10, 0x4DF0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4DF0);
    // 0x80096BB4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80096BB8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80096BBC: addiu       $s0, $s0, 0x6D20
    ctx->r16 = ADD32(ctx->r16, 0X6D20);
    // 0x80096BC0: sw          $s0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r16;
    // 0x80096BC4: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x80096BC8: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x80096BCC: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x80096BD0: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    // 0x80096BD4: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    // 0x80096BD8: jal         0x800BED70
    // 0x80096BDC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800BED70(rdram, ctx);
        goto after_1;
    // 0x80096BDC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80096BE0: bne         $v0, $zero, L_80096BF0
    if (ctx->r2 != 0) {
        // 0x80096BE4: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80096BF0;
    }
    // 0x80096BE4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80096BE8: b           L_80096DA4
    // 0x80096BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80096DA4;
    // 0x80096BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80096BF0:
    // 0x80096BF0: addiu       $v1, $v1, 0x6E30
    ctx->r3 = ADD32(ctx->r3, 0X6E30);
    // 0x80096BF4: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x80096BF8: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80096BFC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096C00: lwc1        $f16, 0x4DF4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4DF4);
    // 0x80096C04: sltu        $at, $s0, $t6
    ctx->r1 = ctx->r16 < ctx->r14 ? 1 : 0;
    // 0x80096C08: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x80096C0C: beq         $at, $zero, L_80096CA4
    if (ctx->r1 == 0) {
        // 0x80096C10: swc1        $f16, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
            goto L_80096CA4;
    }
    // 0x80096C10: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x80096C14: addiu       $s7, $sp, 0x80
    ctx->r23 = ADD32(ctx->r29, 0X80);
    // 0x80096C18: addiu       $s6, $sp, 0x74
    ctx->r22 = ADD32(ctx->r29, 0X74);
    // 0x80096C1C: addiu       $s5, $sp, 0x68
    ctx->r21 = ADD32(ctx->r29, 0X68);
    // 0x80096C20: addiu       $s3, $zero, 0x12
    ctx->r19 = ADD32(0, 0X12);
    // 0x80096C24: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
L_80096C28:
    // 0x80096C28: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80096C2C: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
L_80096C30:
    // 0x80096C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80096C34: jal         0x800EE88C
    // 0x80096C38: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EE88C(rdram, ctx);
        goto after_2;
    // 0x80096C38: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x80096C3C: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x80096C40: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80096C44: bne         $s1, $s3, L_80096C30
    if (ctx->r17 != ctx->r19) {
        // 0x80096C48: addiu       $s2, $s2, 0x6
        ctx->r18 = ADD32(ctx->r18, 0X6);
            goto L_80096C30;
    }
    // 0x80096C48: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x80096C4C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80096C50: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80096C54: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80096C58: jal         0x800967C8
    // 0x80096C5C: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    func_800967C8(rdram, ctx);
        goto after_3;
    // 0x80096C5C: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    after_3:
    // 0x80096C60: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80096C64: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80096C68: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80096C6C: jal         0x800967C8
    // 0x80096C70: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    func_800967C8(rdram, ctx);
        goto after_4;
    // 0x80096C70: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    after_4:
    // 0x80096C74: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80096C78: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80096C7C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80096C80: jal         0x800967C8
    // 0x80096C84: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    func_800967C8(rdram, ctx);
        goto after_5;
    // 0x80096C84: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    after_5:
    // 0x80096C88: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80096C8C: addiu       $s4, $s4, 0x12
    ctx->r20 = ADD32(ctx->r20, 0X12);
    // 0x80096C90: sltu        $at, $s4, $t7
    ctx->r1 = ctx->r20 < ctx->r15 ? 1 : 0;
    // 0x80096C94: bnel        $at, $zero, L_80096C28
    if (ctx->r1 != 0) {
        // 0x80096C98: addiu       $s0, $sp, 0x68
        ctx->r16 = ADD32(ctx->r29, 0X68);
            goto L_80096C28;
    }
    goto skip_2;
    // 0x80096C98: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
    skip_2:
    // 0x80096C9C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80096CA0: addiu       $v1, $v1, 0x6E30
    ctx->r3 = ADD32(ctx->r3, 0X6E30);
L_80096CA4:
    // 0x80096CA4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096CA8: lwc1        $f18, 0x4DF8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4DF8);
    // 0x80096CAC: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80096CB0: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x80096CB4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80096CB8: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80096CBC: nop

    // 0x80096CC0: bc1f        L_80096CD0
    if (!c1cs) {
        // 0x80096CC4: nop
    
            goto L_80096CD0;
    }
    // 0x80096CC4: nop

    // 0x80096CC8: b           L_80096DA4
    // 0x80096CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80096DA4;
    // 0x80096CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80096CD0:
    // 0x80096CD0: jal         0x800EE7F8
    // 0x80096CD4: addiu       $a1, $a1, 0x6E5C
    ctx->r5 = ADD32(ctx->r5, 0X6E5C);
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x80096CD4: addiu       $a1, $a1, 0x6E5C
    ctx->r5 = ADD32(ctx->r5, 0X6E5C);
    after_6:
    // 0x80096CD8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80096CDC: addiu       $a1, $a1, 0x6E50
    ctx->r5 = ADD32(ctx->r5, 0X6E50);
    // 0x80096CE0: jal         0x800EE7F8
    // 0x80096CE4: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x80096CE4: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    after_7:
    // 0x80096CE8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096CEC: lwc1        $f6, 0x6E38($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6E38);
    // 0x80096CF0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096CF4: lwc1        $f8, 0x6E44($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6E44);
    // 0x80096CF8: jal         0x800F2100
    // 0x80096CFC: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    func_800F2100(rdram, ctx);
        goto after_8;
    // 0x80096CFC: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_8:
    // 0x80096D00: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096D04: lwc1        $f10, 0x6E40($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6E40);
    // 0x80096D08: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096D0C: lwc1        $f16, 0x6E4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6E4C);
    // 0x80096D10: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x80096D14: jal         0x800F2100
    // 0x80096D18: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    func_800F2100(rdram, ctx);
        goto after_9;
    // 0x80096D18: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    after_9:
    // 0x80096D1C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80096D20: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x80096D24: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x80096D28: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80096D2C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096D30: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80096D34: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80096D38: bc1f        L_80096D78
    if (!c1cs) {
        // 0x80096D3C: nop
    
            goto L_80096D78;
    }
    // 0x80096D3C: nop

    // 0x80096D40: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096D44: lwc1        $f14, 0x6E38($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6E38);
    // 0x80096D48: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096D4C: lwc1        $f4, 0x6E48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6E48);
    // 0x80096D50: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80096D54: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80096D58: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80096D5C: lw          $a3, 0x6E3C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6E3C);
    // 0x80096D60: lw          $a2, 0x6E44($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6E44);
    // 0x80096D64: jal         0x800F10B4
    // 0x80096D68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_10;
    // 0x80096D68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x80096D6C: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x80096D70: b           L_80096DA0
    // 0x80096D74: swc1        $f0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f0.u32l;
        goto L_80096DA0;
    // 0x80096D74: swc1        $f0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f0.u32l;
L_80096D78:
    // 0x80096D78: lwc1        $f14, 0x6E40($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6E40);
    // 0x80096D7C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096D80: lwc1        $f6, 0x6E48($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6E48);
    // 0x80096D84: lwc1        $f12, 0x8($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80096D88: lw          $a2, 0x6E4C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6E4C);
    // 0x80096D8C: lw          $a3, 0x6E3C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6E3C);
    // 0x80096D90: jal         0x800F10B4
    // 0x80096D94: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_11;
    // 0x80096D94: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x80096D98: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x80096D9C: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
L_80096DA0:
    // 0x80096DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80096DA4:
    // 0x80096DA4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80096DA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80096DAC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80096DB0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80096DB4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80096DB8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80096DBC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80096DC0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80096DC4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80096DC8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80096DCC: jr          $ra
    // 0x80096DD0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80096DD0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_80096DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096DD4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80096DD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096DDC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80096DE0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80096DE4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80096DE8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80096DEC: jal         0x800EE7F8
    // 0x80096DF0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80096DF0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80096DF4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80096DF8: jal         0x800EE7F8
    // 0x80096DFC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80096DFC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x80096E00: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80096E04: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80096E08: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80096E0C: jal         0x80096ACC
    // 0x80096E10: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    func_80096ACC(rdram, ctx);
        goto after_2;
    // 0x80096E10: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x80096E14: bne         $v0, $zero, L_80096E24
    if (ctx->r2 != 0) {
        // 0x80096E18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80096E24;
    }
    // 0x80096E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096E1C: b           L_80096E28
    // 0x80096E20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80096E28;
    // 0x80096E20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80096E24:
    // 0x80096E24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80096E28:
    // 0x80096E28: jr          $ra
    // 0x80096E2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80096E2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80096E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096E30: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80096E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096E38: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    // 0x80096E3C: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x80096E40: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x80096E44: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x80096E48: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x80096E4C: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x80096E50: jal         0x800EFA20
    // 0x80096E54: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_800EFA20(rdram, ctx);
        goto after_0;
    // 0x80096E54: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80096E58: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80096E5C: lw          $a1, 0xD0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD0);
    // 0x80096E60: jal         0x800EE780
    // 0x80096E64: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_800EE780(rdram, ctx);
        goto after_1;
    // 0x80096E64: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80096E68: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80096E6C: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x80096E70: jal         0x800EFA20
    // 0x80096E74: lw          $a2, 0xD4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD4);
    func_800EFA20(rdram, ctx);
        goto after_2;
    // 0x80096E74: lw          $a2, 0xD4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD4);
    after_2:
    // 0x80096E78: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80096E7C: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80096E80: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80096E84: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80096E88: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80096E8C: jal         0x800EF934
    // 0x80096E90: nop

    func_800EF934(rdram, ctx);
        goto after_3;
    // 0x80096E90: nop

    after_3:
    // 0x80096E94: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80096E98: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80096E9C: jal         0x800EF934
    // 0x80096EA0: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    func_800EF934(rdram, ctx);
        goto after_4;
    // 0x80096EA0: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    after_4:
    // 0x80096EA4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80096EA8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80096EAC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80096EB0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80096EB4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80096EB8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80096EBC: jal         0x800EFA4C
    // 0x80096EC0: nop

    func_800EFA4C(rdram, ctx);
        goto after_5;
    // 0x80096EC0: nop

    after_5:
    // 0x80096EC4: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80096EC8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80096ECC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80096ED0: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x80096ED4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80096ED8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80096EDC: jal         0x800EFA4C
    // 0x80096EE0: nop

    func_800EFA4C(rdram, ctx);
        goto after_6;
    // 0x80096EE0: nop

    after_6:
    // 0x80096EE4: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80096EE8: jal         0x800EF368
    // 0x80096EEC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_800EF368(rdram, ctx);
        goto after_7;
    // 0x80096EEC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_7:
    // 0x80096EF0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80096EF4: jal         0x800EF368
    // 0x80096EF8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_800EF368(rdram, ctx);
        goto after_8;
    // 0x80096EF8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_8:
    // 0x80096EFC: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x80096F00: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80096F04: jal         0x800EE780
    // 0x80096F08: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    func_800EE780(rdram, ctx);
        goto after_9;
    // 0x80096F08: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    after_9:
    // 0x80096F0C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80096F10: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80096F14: jal         0x800EE780
    // 0x80096F18: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_800EE780(rdram, ctx);
        goto after_10;
    // 0x80096F18: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_10:
    // 0x80096F1C: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x80096F20: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x80096F24: jal         0x800EE780
    // 0x80096F28: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    func_800EE780(rdram, ctx);
        goto after_11;
    // 0x80096F28: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    after_11:
    // 0x80096F2C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80096F30: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80096F34: jal         0x800EE780
    // 0x80096F38: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800EE780(rdram, ctx);
        goto after_12;
    // 0x80096F38: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_12:
    // 0x80096F3C: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x80096F40: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x80096F44: addiu       $a2, $sp, 0x94
    ctx->r6 = ADD32(ctx->r29, 0X94);
    // 0x80096F48: jal         0x80096DD4
    // 0x80096F4C: addiu       $a3, $sp, 0xB8
    ctx->r7 = ADD32(ctx->r29, 0XB8);
    func_80096DD4(rdram, ctx);
        goto after_13;
    // 0x80096F4C: addiu       $a3, $sp, 0xB8
    ctx->r7 = ADD32(ctx->r29, 0XB8);
    after_13:
    // 0x80096F50: bne         $v0, $zero, L_80096F60
    if (ctx->r2 != 0) {
        // 0x80096F54: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_80096F60;
    }
    // 0x80096F54: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80096F58: b           L_80096FFC
    // 0x80096F5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80096FFC;
    // 0x80096F5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80096F60:
    // 0x80096F60: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x80096F64: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x80096F68: jal         0x80096DD4
    // 0x80096F6C: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    func_80096DD4(rdram, ctx);
        goto after_14;
    // 0x80096F6C: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    after_14:
    // 0x80096F70: bne         $v0, $zero, L_80096F80
    if (ctx->r2 != 0) {
        // 0x80096F74: addiu       $a0, $sp, 0xAC
        ctx->r4 = ADD32(ctx->r29, 0XAC);
            goto L_80096F80;
    }
    // 0x80096F74: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x80096F78: b           L_80096FFC
    // 0x80096F7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80096FFC;
    // 0x80096F7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80096F80:
    // 0x80096F80: jal         0x800EEAA4
    // 0x80096F84: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800EEAA4(rdram, ctx);
        goto after_15;
    // 0x80096F84: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_15:
    // 0x80096F88: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80096F8C: lwc1        $f4, 0x4DFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4DFC);
    // 0x80096F90: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x80096F94: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x80096F98: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80096F9C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80096FA0: bc1f        L_80096FB0
    if (!c1cs) {
        // 0x80096FA4: nop
    
            goto L_80096FB0;
    }
    // 0x80096FA4: nop

    // 0x80096FA8: b           L_80096FFC
    // 0x80096FAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80096FFC;
    // 0x80096FAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80096FB0:
    // 0x80096FB0: jal         0x800EFE50
    // 0x80096FB4: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    func_800EFE50(rdram, ctx);
        goto after_16;
    // 0x80096FB4: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_16:
    // 0x80096FB8: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x80096FBC: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x80096FC0: jal         0x800EE780
    // 0x80096FC4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_800EE780(rdram, ctx);
        goto after_17;
    // 0x80096FC4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_17:
    // 0x80096FC8: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x80096FCC: jal         0x800EF334
    // 0x80096FD0: lui         $a1, 0xBF00
    ctx->r5 = S32(0XBF00 << 16);
    func_800EF334(rdram, ctx);
        goto after_18;
    // 0x80096FD0: lui         $a1, 0xBF00
    ctx->r5 = S32(0XBF00 << 16);
    after_18:
    // 0x80096FD4: jal         0x800EF2A0
    // 0x80096FD8: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    func_800EF2A0(rdram, ctx);
        goto after_19;
    // 0x80096FD8: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    after_19:
    // 0x80096FDC: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x80096FE0: jal         0x800EECE0
    // 0x80096FE4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800EECE0(rdram, ctx);
        goto after_20;
    // 0x80096FE4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_20:
    // 0x80096FE8: beq         $v0, $zero, L_80096FF8
    if (ctx->r2 == 0) {
        // 0x80096FEC: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80096FF8;
    }
    // 0x80096FEC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80096FF0: b           L_80096FF8
    // 0x80096FF4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80096FF8;
    // 0x80096FF4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80096FF8:
    // 0x80096FF8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80096FFC:
    // 0x80096FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097000: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x80097004: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009700C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009700C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80097010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097014: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80097018: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8009701C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80097020: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80097024: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80097028: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8009702C: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x80097030: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x80097034: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x80097038: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8009703C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80097040: jal         0x800EFA4C
    // 0x80097044: nop

    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x80097044: nop

    after_0:
    // 0x80097048: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8009704C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80097050: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80097054: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80097058: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8009705C: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x80097060: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80097064: jal         0x800EFA4C
    // 0x80097068: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x80097068: nop

    after_1:
    // 0x8009706C: lui         $a3, 0x42
    ctx->r7 = S32(0X42 << 16);
    // 0x80097070: ori         $a3, $a3, 0x25
    ctx->r7 = ctx->r7 | 0X25;
    // 0x80097074: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80097078: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8009707C: jal         0x800C6A7C
    // 0x80097080: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_800C6A7C(rdram, ctx);
        goto after_2;
    // 0x80097080: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x80097084: beq         $v0, $zero, L_80097094
    if (ctx->r2 == 0) {
        // 0x80097088: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80097094;
    }
    // 0x80097088: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009708C: b           L_80097098
    // 0x80097090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80097098;
    // 0x80097090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80097094:
    // 0x80097094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097098:
    // 0x80097098: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009709C: jr          $ra
    // 0x800970A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800970A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800970A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800970A4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800970A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800970AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800970B0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800970B4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800970B8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800970BC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x800970C0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800970C4: jal         0x800EE7B4
    // 0x800970C8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_800EE7B4(rdram, ctx);
        goto after_0;
    // 0x800970C8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x800970CC: lui         $a3, 0x42
    ctx->r7 = S32(0X42 << 16);
    // 0x800970D0: ori         $a3, $a3, 0x25
    ctx->r7 = ctx->r7 | 0X25;
    // 0x800970D4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800970D8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800970DC: jal         0x800C6A7C
    // 0x800970E0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800C6A7C(rdram, ctx);
        goto after_1;
    // 0x800970E0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x800970E4: beq         $v0, $zero, L_800970F4
    if (ctx->r2 == 0) {
        // 0x800970E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800970F4;
    }
    // 0x800970E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800970EC: b           L_800970F8
    // 0x800970F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800970F8;
    // 0x800970F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800970F4:
    // 0x800970F4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800970F8:
    // 0x800970F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800970FC: jr          $ra
    // 0x80097100: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80097100: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80097104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097104: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80097108: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x8009710C: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x80097110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097114: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x80097118: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8009711C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x80097120: jal         0x800EFA20
    // 0x80097124: lw          $a1, 0x98($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X98);
    func_800EFA20(rdram, ctx);
        goto after_0;
    // 0x80097124: lw          $a1, 0x98($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X98);
    after_0:
    // 0x80097128: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8009712C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x80097130: jal         0x800EFB24
    // 0x80097134: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x80097134: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_1:
    // 0x80097138: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8009713C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80097140: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80097144: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80097148: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8009714C: jal         0x800EFA4C
    // 0x80097150: nop

    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x80097150: nop

    after_2:
    // 0x80097154: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x80097158: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8009715C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80097160: jal         0x800EE97C
    // 0x80097164: lw          $a1, 0x98($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X98);
    func_800EE97C(rdram, ctx);
        goto after_3;
    // 0x80097164: lw          $a1, 0x98($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X98);
    after_3:
    // 0x80097168: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8009716C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80097170: jal         0x800EFA20
    // 0x80097174: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    func_800EFA20(rdram, ctx);
        goto after_4;
    // 0x80097174: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    after_4:
    // 0x80097178: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8009717C: jal         0x8009BB24
    // 0x80097180: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009BB24(rdram, ctx);
        goto after_5;
    // 0x80097180: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_5:
    // 0x80097184: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80097188: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8009718C: jal         0x800EF2A0
    // 0x80097190: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    func_800EF2A0(rdram, ctx);
        goto after_6;
    // 0x80097190: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80097194: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80097198: jal         0x800EEAA4
    // 0x8009719C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800EEAA4(rdram, ctx);
        goto after_7;
    // 0x8009719C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_7:
    // 0x800971A0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800971A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800971A8: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800971AC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x800971B0: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x800971B4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800971B8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800971BC: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x800971C0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800971C4: jal         0x800EFA4C
    // 0x800971C8: nop

    func_800EFA4C(rdram, ctx);
        goto after_8;
    // 0x800971C8: nop

    after_8:
    // 0x800971CC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800971D0: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800971D4: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x800971D8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800971DC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800971E0: nop

    // 0x800971E4: bc1fl       L_8009723C
    if (!c1cs) {
        // 0x800971E8: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_8009723C;
    }
    goto skip_0;
    // 0x800971E8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x800971EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800971F0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800971F4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800971F8: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800971FC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80097200: jal         0x800970A4
    // 0x80097204: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800970A4(rdram, ctx);
        goto after_9;
    // 0x80097204: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x80097208: beq         $v0, $zero, L_80097218
    if (ctx->r2 == 0) {
        // 0x8009720C: lwc1        $f0, 0x18($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
            goto L_80097218;
    }
    // 0x8009720C: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80097210: b           L_800972AC
    // 0x80097214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800972AC;
    // 0x80097214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097218:
    // 0x80097218: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009721C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80097220: jal         0x800970A4
    // 0x80097224: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800970A4(rdram, ctx);
        goto after_10;
    // 0x80097224: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_10:
    // 0x80097228: beql        $v0, $zero, L_8009723C
    if (ctx->r2 == 0) {
        // 0x8009722C: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_8009723C;
    }
    goto skip_1;
    // 0x8009722C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x80097230: b           L_800972AC
    // 0x80097234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800972AC;
    // 0x80097234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80097238: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
L_8009723C:
    // 0x8009723C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80097240: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80097244: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80097248: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8009724C: nop

    // 0x80097250: bc1fl       L_800972AC
    if (!c1cs) {
        // 0x80097254: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800972AC;
    }
    goto skip_2;
    // 0x80097254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x80097258: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009725C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80097260: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80097264: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80097268: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8009726C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80097270: jal         0x800970A4
    // 0x80097274: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_800970A4(rdram, ctx);
        goto after_11;
    // 0x80097274: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x80097278: beq         $v0, $zero, L_80097288
    if (ctx->r2 == 0) {
        // 0x8009727C: lwc1        $f0, 0x18($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
            goto L_80097288;
    }
    // 0x8009727C: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80097280: b           L_800972AC
    // 0x80097284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800972AC;
    // 0x80097284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097288:
    // 0x80097288: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009728C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80097290: jal         0x800970A4
    // 0x80097294: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800970A4(rdram, ctx);
        goto after_12;
    // 0x80097294: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_12:
    // 0x80097298: beql        $v0, $zero, L_800972AC
    if (ctx->r2 == 0) {
        // 0x8009729C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800972AC;
    }
    goto skip_3;
    // 0x8009729C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x800972A0: b           L_800972AC
    // 0x800972A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800972AC;
    // 0x800972A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800972A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800972AC:
    // 0x800972AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800972B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x800972B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800972BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800972BC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800972C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800972C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800972C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800972CC: jal         0x800EE7F8
    // 0x800972D0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800972D0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x800972D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800972D8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800972DC: jal         0x80095870
    // 0x800972E0: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_80095870(rdram, ctx);
        goto after_1;
    // 0x800972E0: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x800972E4: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800972E8: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800972EC: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800972F0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800972F4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800972F8: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800972FC: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80097300: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x80097304: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80097308: lbu         $t6, 0x24($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X24);
    // 0x8009730C: beql        $t6, $zero, L_80097324
    if (ctx->r14 == 0) {
        // 0x80097310: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80097324;
    }
    goto skip_0;
    // 0x80097310: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x80097314: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80097318: b           L_8009732C
    // 0x8009731C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
        goto L_8009732C;
    // 0x8009731C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80097320: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80097324:
    // 0x80097324: nop

    // 0x80097328: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_8009732C:
    // 0x8009732C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80097330: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80097334: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80097338: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x8009733C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80097340: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80097344: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80097348: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x8009734C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80097350: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80097354: jal         0x80096E30
    // 0x80097358: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80096E30(rdram, ctx);
        goto after_2;
    // 0x80097358: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x8009735C: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80097360: beq         $at, $zero, L_800973D0
    if (ctx->r1 == 0) {
        // 0x80097364: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_800973D0;
    }
    // 0x80097364: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80097368: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009736C: addu        $at, $at, $t7
    gpr jr_addend_80097374 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80097370: lw          $t7, 0x4E00($at)
    ctx->r15 = ADD32(ctx->r1, 0X4E00);
    // 0x80097374: jr          $t7
    // 0x80097378: nop

    switch (jr_addend_80097374 >> 2) {
        case 0: goto L_8009737C; break;
        case 1: goto L_80097390; break;
        case 2: goto L_800973B8; break;
        case 3: goto L_800973C8; break;
        case 4: goto L_800973A4; break;
        default: switch_error(__func__, 0x80097374, 0x80124E00);
    }
    // 0x80097378: nop

L_8009737C:
    // 0x8009737C: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x80097380: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80097384: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80097388: b           L_800974E8
    // 0x8009738C: sb          $t8, 0x25($t9)
    MEM_B(0X25, ctx->r25) = ctx->r24;
        goto L_800974E8;
    // 0x8009738C: sb          $t8, 0x25($t9)
    MEM_B(0X25, ctx->r25) = ctx->r24;
L_80097390:
    // 0x80097390: lw          $t1, 0x98($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X98);
    // 0x80097394: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80097398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009739C: b           L_800974E8
    // 0x800973A0: sb          $t0, 0x25($t1)
    MEM_B(0X25, ctx->r9) = ctx->r8;
        goto L_800974E8;
    // 0x800973A0: sb          $t0, 0x25($t1)
    MEM_B(0X25, ctx->r9) = ctx->r8;
L_800973A4:
    // 0x800973A4: lw          $t3, 0x98($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X98);
    // 0x800973A8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800973AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800973B0: b           L_800974E8
    // 0x800973B4: sb          $t2, 0x25($t3)
    MEM_B(0X25, ctx->r11) = ctx->r10;
        goto L_800974E8;
    // 0x800973B4: sb          $t2, 0x25($t3)
    MEM_B(0X25, ctx->r11) = ctx->r10;
L_800973B8:
    // 0x800973B8: lw          $t5, 0x98($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X98);
    // 0x800973BC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800973C0: b           L_800973D0
    // 0x800973C4: sb          $t4, 0x24($t5)
    MEM_B(0X24, ctx->r13) = ctx->r12;
        goto L_800973D0;
    // 0x800973C4: sb          $t4, 0x24($t5)
    MEM_B(0X24, ctx->r13) = ctx->r12;
L_800973C8:
    // 0x800973C8: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x800973CC: sb          $zero, 0x24($t6)
    MEM_B(0X24, ctx->r14) = 0;
L_800973D0:
    // 0x800973D0: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x800973D4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800973D8: jal         0x800EE7F8
    // 0x800973DC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x800973DC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_3:
    // 0x800973E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800973E4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800973E8: jal         0x80097104
    // 0x800973EC: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    func_80097104(rdram, ctx);
        goto after_4;
    // 0x800973EC: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    after_4:
    // 0x800973F0: bne         $v0, $zero, L_80097400
    if (ctx->r2 != 0) {
        // 0x800973F4: lwc1        $f4, 0x60($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
            goto L_80097400;
    }
    // 0x800973F4: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800973F8: b           L_800974E8
    // 0x800973FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800974E8;
    // 0x800973FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097400:
    // 0x80097400: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x80097404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80097408: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8009740C: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x80097410: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80097414: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80097418: jal         0x800EFA20
    // 0x8009741C: nop

    func_800EFA20(rdram, ctx);
        goto after_5;
    // 0x8009741C: nop

    after_5:
    // 0x80097420: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80097424: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80097428: jal         0x800EFB24
    // 0x8009742C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800EFB24(rdram, ctx);
        goto after_6;
    // 0x8009742C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_6:
    // 0x80097430: lui         $at, 0xC22C
    ctx->r1 = S32(0XC22C << 16);
    // 0x80097434: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80097438: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8009743C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80097440: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80097444: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80097448: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8009744C: sub.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80097450: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80097454: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80097458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009745C: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80097460: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80097464: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80097468: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x8009746C: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x80097470: add.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80097474: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80097478: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8009747C: jal         0x8009700C
    // 0x80097480: nop

    func_8009700C(rdram, ctx);
        goto after_7;
    // 0x80097480: nop

    after_7:
    // 0x80097484: beq         $v0, $zero, L_800974C8
    if (ctx->r2 == 0) {
        // 0x80097488: lwc1        $f6, 0x3C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_800974C8;
    }
    // 0x80097488: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009748C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80097490: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80097494: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80097498: nop

    // 0x8009749C: bc1fl       L_800974B8
    if (!c1cs) {
        // 0x800974A0: lw          $t0, 0x98($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X98);
            goto L_800974B8;
    }
    goto skip_1;
    // 0x800974A0: lw          $t0, 0x98($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X98);
    skip_1:
    // 0x800974A4: lw          $t8, 0x98($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X98);
    // 0x800974A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800974AC: b           L_800974E8
    // 0x800974B0: sb          $t7, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r15;
        goto L_800974E8;
    // 0x800974B0: sb          $t7, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r15;
    // 0x800974B4: lw          $t0, 0x98($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X98);
L_800974B8:
    // 0x800974B8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x800974BC: sb          $t9, 0x25($t0)
    MEM_B(0X25, ctx->r8) = ctx->r25;
    // 0x800974C0: b           L_800974E8
    // 0x800974C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800974E8;
    // 0x800974C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800974C8:
    // 0x800974C8: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x800974CC: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x800974D0: jal         0x800EE7F8
    // 0x800974D4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_8;
    // 0x800974D4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_8:
    // 0x800974D8: lw          $t2, 0x98($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X98);
    // 0x800974DC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800974E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800974E4: sb          $t1, 0x25($t2)
    MEM_B(0X25, ctx->r10) = ctx->r9;
L_800974E8:
    // 0x800974E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800974EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800974F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800974F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800974FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800974FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80097500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097504: lw          $a0, 0x98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X98);
    // 0x80097508: jal         0x800F1EA4
    // 0x8009750C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800F1EA4(rdram, ctx);
        goto after_0;
    // 0x8009750C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80097510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097514: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80097518: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009751C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097524: lw          $t6, 0x98($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X98);
    // 0x80097528: jr          $ra
    // 0x8009752C: lbu         $v0, 0x25($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X25);
    return;
    // 0x8009752C: lbu         $v0, 0x25($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X25);
;}
RECOMP_FUNC void func_80097530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097530: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80097534: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097538: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009753C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80097540: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80097544: jal         0x80095870
    // 0x80097548: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_80095870(rdram, ctx);
        goto after_0;
    // 0x80097548: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x8009754C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80097550: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x80097554: jal         0x800EFA20
    // 0x80097558: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    func_800EFA20(rdram, ctx);
        goto after_1;
    // 0x80097558: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    after_1:
    // 0x8009755C: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x80097560: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80097564: jal         0x800EF04C
    // 0x80097568: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x80097568: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_2:
    // 0x8009756C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80097570: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80097574: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80097578: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x8009757C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097580: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80097584: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80097588: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8009758C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80097590: jal         0x800EFA4C
    // 0x80097594: nop

    func_800EFA4C(rdram, ctx);
        goto after_3;
    // 0x80097594: nop

    after_3:
    // 0x80097598: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009759C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800975A0: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800975A4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800975A8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800975AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800975B0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800975B4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800975B8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800975BC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800975C0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800975C4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800975C8: jal         0x800EFA4C
    // 0x800975CC: nop

    func_800EFA4C(rdram, ctx);
        goto after_4;
    // 0x800975CC: nop

    after_4:
    // 0x800975D0: lui         $a3, 0x42
    ctx->r7 = S32(0X42 << 16);
    // 0x800975D4: ori         $a3, $a3, 0x25
    ctx->r7 = ctx->r7 | 0X25;
    // 0x800975D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800975DC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800975E0: jal         0x800C6A7C
    // 0x800975E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800C6A7C(rdram, ctx);
        goto after_5;
    // 0x800975E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x800975E8: beq         $v0, $zero, L_800975F8
    if (ctx->r2 == 0) {
        // 0x800975EC: lwc1        $f16, 0x30($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
            goto L_800975F8;
    }
    // 0x800975EC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800975F0: b           L_800976C8
    // 0x800975F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800976C8;
    // 0x800975F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800975F8:
    // 0x800975F8: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800975FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097600: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80097604: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80097608: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8009760C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80097610: jal         0x800EFA4C
    // 0x80097614: nop

    func_800EFA4C(rdram, ctx);
        goto after_6;
    // 0x80097614: nop

    after_6:
    // 0x80097618: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009761C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80097620: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80097624: lui         $a3, 0x42
    ctx->r7 = S32(0X42 << 16);
    // 0x80097628: ori         $a3, $a3, 0x25
    ctx->r7 = ctx->r7 | 0X25;
    // 0x8009762C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80097630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097634: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80097638: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8009763C: jal         0x800C6C94
    // 0x80097640: nop

    func_800C6C94(rdram, ctx);
        goto after_7;
    // 0x80097640: nop

    after_7:
    // 0x80097644: beq         $v0, $zero, L_80097654
    if (ctx->r2 == 0) {
        // 0x80097648: lwc1        $f6, 0x54($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
            goto L_80097654;
    }
    // 0x80097648: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8009764C: b           L_800976C8
    // 0x80097650: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800976C8;
    // 0x80097650: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097654:
    // 0x80097654: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80097658: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009765C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80097660: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80097664: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80097668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009766C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80097670: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80097674: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80097678: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8009767C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80097680: jal         0x800EFA4C
    // 0x80097684: nop

    func_800EFA4C(rdram, ctx);
        goto after_8;
    // 0x80097684: nop

    after_8:
    // 0x80097688: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009768C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80097690: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80097694: lui         $a3, 0x42
    ctx->r7 = S32(0X42 << 16);
    // 0x80097698: ori         $a3, $a3, 0x25
    ctx->r7 = ctx->r7 | 0X25;
    // 0x8009769C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800976A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800976A4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800976A8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800976AC: jal         0x800C6C94
    // 0x800976B0: nop

    func_800C6C94(rdram, ctx);
        goto after_9;
    // 0x800976B0: nop

    after_9:
    // 0x800976B4: beql        $v0, $zero, L_800976C8
    if (ctx->r2 == 0) {
        // 0x800976B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800976C8;
    }
    goto skip_0;
    // 0x800976B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x800976BC: b           L_800976C8
    // 0x800976C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800976C8;
    // 0x800976C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800976C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800976C8:
    // 0x800976C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800976CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800976D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800976D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800976DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800976DC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800976E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800976E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800976E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800976EC: jal         0x80091570
    // 0x800976F0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80091570(rdram, ctx);
        goto after_0;
    // 0x800976F0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x800976F4: beq         $v0, $zero, L_80097704
    if (ctx->r2 == 0) {
        // 0x800976F8: nop
    
            goto L_80097704;
    }
    // 0x800976F8: nop

    // 0x800976FC: b           L_80097844
    // 0x80097700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097844;
    // 0x80097700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097704:
    // 0x80097704: jal         0x8009650C
    // 0x80097708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009650C(rdram, ctx);
        goto after_1;
    // 0x80097708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8009770C: bne         $v0, $zero, L_8009771C
    if (ctx->r2 != 0) {
        // 0x80097710: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009771C;
    }
    // 0x80097710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097714: b           L_80097844
    // 0x80097718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097844;
    // 0x80097718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009771C:
    // 0x8009771C: jal         0x80096440
    // 0x80097720: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80096440(rdram, ctx);
        goto after_2;
    // 0x80097720: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x80097724: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80097728: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8009772C: lwc1        $f4, 0x4E14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4E14);
    // 0x80097730: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80097734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097738: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8009773C: nop

    // 0x80097740: bc1f        L_80097764
    if (!c1cs) {
        // 0x80097744: nop
    
            goto L_80097764;
    }
    // 0x80097744: nop

    // 0x80097748: lwc1        $f6, 0x4E18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4E18);
    // 0x8009774C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80097750: nop

    // 0x80097754: bc1f        L_80097764
    if (!c1cs) {
        // 0x80097758: nop
    
            goto L_80097764;
    }
    // 0x80097758: nop

    // 0x8009775C: b           L_80097844
    // 0x80097760: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097844;
    // 0x80097760: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097764:
    // 0x80097764: jal         0x8009C128
    // 0x80097768: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x80097768: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_3:
    // 0x8009776C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097770: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80097774: jal         0x80095870
    // 0x80097778: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    func_80095870(rdram, ctx);
        goto after_4;
    // 0x80097778: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_4:
    // 0x8009777C: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80097780: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80097784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097788: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8009778C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80097790: jal         0x8009646C
    // 0x80097794: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    func_8009646C(rdram, ctx);
        goto after_5;
    // 0x80097794: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80097798: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8009779C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800977A0: jal         0x800F0410
    // 0x800977A4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_800F0410(rdram, ctx);
        goto after_6;
    // 0x800977A4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_6:
    // 0x800977A8: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x800977AC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800977B0: jal         0x800EFB24
    // 0x800977B4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_800EFB24(rdram, ctx);
        goto after_7;
    // 0x800977B4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_7:
    // 0x800977B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800977BC: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x800977C0: swc1        $f18, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f18.u32l;
    // 0x800977C4: jal         0x800EF2A0
    // 0x800977C8: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    func_800EF2A0(rdram, ctx);
        goto after_8;
    // 0x800977C8: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    after_8:
    // 0x800977CC: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x800977D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800977D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800977D8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800977DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800977E0: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x800977E4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800977E8: nop

    // 0x800977EC: bc1f        L_80097810
    if (!c1cs) {
        // 0x800977F0: nop
    
            goto L_80097810;
    }
    // 0x800977F0: nop

    // 0x800977F4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800977F8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x800977FC: nop

    // 0x80097800: bc1f        L_80097810
    if (!c1cs) {
        // 0x80097804: nop
    
            goto L_80097810;
    }
    // 0x80097804: nop

    // 0x80097808: b           L_80097844
    // 0x8009780C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097844;
    // 0x8009780C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097810:
    // 0x80097810: jal         0x8009C128
    // 0x80097814: sb          $t7, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r15;
    func_8009C128(rdram, ctx);
        goto after_9;
    // 0x80097814: sb          $t7, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r15;
    after_9:
    // 0x80097818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009781C: jal         0x800972BC
    // 0x80097820: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800972BC(rdram, ctx);
        goto after_10;
    // 0x80097820: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_10:
    // 0x80097824: bnel        $v0, $zero, L_80097838
    if (ctx->r2 != 0) {
        // 0x80097828: lw          $a1, 0x98($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X98);
            goto L_80097838;
    }
    goto skip_0;
    // 0x80097828: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    skip_0:
    // 0x8009782C: b           L_80097844
    // 0x80097830: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097844;
    // 0x80097830: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80097834: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
L_80097838:
    // 0x80097838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009783C: jal         0x800972BC
    // 0x80097840: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_800972BC(rdram, ctx);
        goto after_11;
    // 0x80097840: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_11:
L_80097844:
    // 0x80097844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097848: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009784C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80097850: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009785C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097860: lw          $t7, 0x98($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X98);
    // 0x80097864: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80097868: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x8009786C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80097870: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80097874: jal         0x800917A8
    // 0x80097878: sb          $t6, 0x24($t7)
    MEM_B(0X24, ctx->r15) = ctx->r14;
    func_800917A8(rdram, ctx);
        goto after_0;
    // 0x80097878: sb          $t6, 0x24($t7)
    MEM_B(0X24, ctx->r15) = ctx->r14;
    after_0:
    // 0x8009787C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097884: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009788C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009788C: lw          $t6, 0x98($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X98);
    // 0x80097890: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80097894: sb          $v0, 0x24($t6)
    MEM_B(0X24, ctx->r14) = ctx->r2;
    // 0x80097898: lw          $t7, 0x98($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X98);
    // 0x8009789C: jr          $ra
    // 0x800978A0: sb          $v0, 0x26($t7)
    MEM_B(0X26, ctx->r15) = ctx->r2;
    return;
    // 0x800978A0: sb          $v0, 0x26($t7)
    MEM_B(0X26, ctx->r15) = ctx->r2;
;}
RECOMP_FUNC void func_800978A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800978A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800978A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800978AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800978B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800978B4: jal         0x8009C15C
    // 0x800978B8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C15C(rdram, ctx);
        goto after_0;
    // 0x800978B8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x800978BC: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x800978C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800978C4: lbu         $t6, 0x26($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X26);
    // 0x800978C8: beq         $t6, $zero, L_800978EC
    if (ctx->r14 == 0) {
        // 0x800978CC: nop
    
            goto L_800978EC;
    }
    // 0x800978CC: nop

    // 0x800978D0: sb          $zero, 0x26($v0)
    MEM_B(0X26, ctx->r2) = 0;
    // 0x800978D4: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x800978D8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800978DC: jal         0x800EE7F8
    // 0x800978E0: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800978E0: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_1:
    // 0x800978E4: b           L_800978F8
    // 0x800978E8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
        goto L_800978F8;
    // 0x800978E8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
L_800978EC:
    // 0x800978EC: jal         0x8009C128
    // 0x800978F0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x800978F0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x800978F4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
L_800978F8:
    // 0x800978F8: jal         0x800EE7F8
    // 0x800978FC: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x800978FC: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    after_3:
    // 0x80097900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097904: jal         0x800972BC
    // 0x80097908: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800972BC(rdram, ctx);
        goto after_4;
    // 0x80097908: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x8009790C: beq         $v0, $zero, L_80097938
    if (ctx->r2 == 0) {
        // 0x80097910: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_80097938;
    }
    // 0x80097910: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80097914: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x80097918: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8009791C: jal         0x800EE7F8
    // 0x80097920: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x80097920: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_5:
    // 0x80097924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097928: jal         0x8009BA58
    // 0x8009792C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BA58(rdram, ctx);
        goto after_6;
    // 0x8009792C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80097930: b           L_80097950
    // 0x80097934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80097950;
    // 0x80097934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80097938:
    // 0x80097938: jal         0x800EE7F8
    // 0x8009793C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x8009793C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_7:
    // 0x80097940: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80097944: jal         0x800EE7F8
    // 0x80097948: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_8;
    // 0x80097948: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_8:
    // 0x8009794C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80097950:
    // 0x80097950: jal         0x8009C0F8
    // 0x80097954: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009C0F8(rdram, ctx);
        goto after_9;
    // 0x80097954: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_9:
    // 0x80097958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009795C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80097960: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80097964: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097970: jr          $ra
    // 0x80097974: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x80097974: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
;}
RECOMP_FUNC void func_80097978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097978: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x8009797C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80097980: sllv        $t9, $t8, $a1
    ctx->r25 = S32(ctx->r24 << (ctx->r5 & 31));
    // 0x80097984: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80097988: jr          $ra
    // 0x8009798C: and         $v0, $t7, $t9
    ctx->r2 = ctx->r15 & ctx->r25;
    return;
    // 0x8009798C: and         $v0, $t7, $t9
    ctx->r2 = ctx->r15 & ctx->r25;
;}
RECOMP_FUNC void func_80097990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097990: beql        $a2, $zero, L_800979B8
    if (ctx->r6 == 0) {
            // 0x80097994: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    static_3_800979B8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80097994: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    skip_0:
    // 0x80097998: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x8009799C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800979A0: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x800979A4: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x800979A8: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x800979AC: jr          $ra
    // 0x800979B0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    return;
    // 0x800979B0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_800979B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800979B4: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
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
RECOMP_FUNC void func_800979D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800979D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800979DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800979E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800979E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800979E8: jal         0x800919F4
    // 0x800979EC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800919F4(rdram, ctx);
        goto after_0;
    // 0x800979EC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800979F0: beq         $v0, $zero, L_80097A2C
    if (ctx->r2 == 0) {
        // 0x800979F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80097A2C;
    }
    // 0x800979F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800979F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800979FC: jal         0x80098024
    // 0x80097A00: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80098024(rdram, ctx);
        goto after_1;
    // 0x80097A00: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80097A04: bne         $v0, $zero, L_80097A18
    if (ctx->r2 != 0) {
        // 0x80097A08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80097A18;
    }
    // 0x80097A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097A0C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80097A10: jal         0x80097990
    // 0x80097A14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80097990(rdram, ctx);
        goto after_2;
    // 0x80097A14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80097A18:
    // 0x80097A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097A1C: jal         0x80097978
    // 0x80097A20: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80097978(rdram, ctx);
        goto after_3;
    // 0x80097A20: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x80097A24: b           L_80097A40
    // 0x80097A28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80097A40;
    // 0x80097A28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80097A2C:
    // 0x80097A2C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80097A30: jal         0x80097990
    // 0x80097A34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80097990(rdram, ctx);
        goto after_4;
    // 0x80097A34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80097A38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80097A3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80097A40:
    // 0x80097A40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80097A44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80097A48: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097A58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097A5C: jal         0x80091A58
    // 0x80097A60: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097A60: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80097A64: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097A68: beq         $t6, $zero, L_80097A80
    if (ctx->r14 == 0) {
        // 0x80097A6C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097A80;
    }
    // 0x80097A6C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097A70: jal         0x8008D0A0
    // 0x80097A74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D0A0(rdram, ctx);
        goto after_1;
    // 0x80097A74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097A78: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097A7C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097A80:
    // 0x80097A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097A88: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097A90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097A98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097A9C: jal         0x80091A58
    // 0x80097AA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097AA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80097AA4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097AA8: beq         $t6, $zero, L_80097AC0
    if (ctx->r14 == 0) {
        // 0x80097AAC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097AC0;
    }
    // 0x80097AAC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097AB0: jal         0x8008D14C
    // 0x80097AB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D14C(rdram, ctx);
        goto after_1;
    // 0x80097AB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097AB8: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097ABC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097AC0:
    // 0x80097AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097AC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097ADC: jal         0x80091A58
    // 0x80097AE0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097AE0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x80097AE4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097AE8: beq         $t6, $zero, L_80097B18
    if (ctx->r14 == 0) {
        // 0x80097AEC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097B18;
    }
    // 0x80097AEC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097AF0: jal         0x8008D9A4
    // 0x80097AF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D9A4(rdram, ctx);
        goto after_1;
    // 0x80097AF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097AF8: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097AFC: beq         $t7, $zero, L_80097B18
    if (ctx->r15 == 0) {
        // 0x80097B00: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80097B18;
    }
    // 0x80097B00: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80097B04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80097B08: jal         0x80098024
    // 0x80097B0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80098024(rdram, ctx);
        goto after_2;
    // 0x80097B0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80097B10: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097B14: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80097B18:
    // 0x80097B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097B20: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097B28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097B30: jal         0x80091970
    // 0x80097B34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091970(rdram, ctx);
        goto after_0;
    // 0x80097B34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80097B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097B3C: slti        $t6, $v0, 0x7
    ctx->r14 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x80097B40: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
    // 0x80097B44: jr          $ra
    // 0x80097B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80097B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80097B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097B50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097B54: jal         0x80091970
    // 0x80097B58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091970(rdram, ctx);
        goto after_0;
    // 0x80097B58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80097B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097B60: slti        $t6, $v0, 0x9
    ctx->r14 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80097B64: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
    // 0x80097B68: jr          $ra
    // 0x80097B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80097B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80097B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097B78: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80097B7C: jal         0x800979D8
    // 0x80097B80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800979D8(rdram, ctx);
        goto after_0;
    // 0x80097B80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80097B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097B8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097B98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097B9C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80097BA0: jal         0x800979D8
    // 0x80097BA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800979D8(rdram, ctx);
        goto after_0;
    // 0x80097BA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80097BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097BB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097BC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097BC4: jal         0x80091A58
    // 0x80097BC8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097BC8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x80097BCC: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097BD0: beq         $t6, $zero, L_80097BEC
    if (ctx->r14 == 0) {
        // 0x80097BD4: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097BEC;
    }
    // 0x80097BD4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097BD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80097BDC: jal         0x80098024
    // 0x80097BE0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80098024(rdram, ctx);
        goto after_1;
    // 0x80097BE0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x80097BE4: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097BE8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097BEC:
    // 0x80097BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097BF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097BFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097C00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097C04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097C08: jal         0x80091A58
    // 0x80097C0C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097C0C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x80097C10: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097C14: beq         $t6, $zero, L_80097C2C
    if (ctx->r14 == 0) {
        // 0x80097C18: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097C2C;
    }
    // 0x80097C18: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097C1C: jal         0x8008D280
    // 0x80097C20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D280(rdram, ctx);
        goto after_1;
    // 0x80097C20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097C24: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097C28: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097C2C:
    // 0x80097C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097C34: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097C3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097C40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097C44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097C48: jal         0x80091A58
    // 0x80097C4C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097C4C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x80097C50: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097C54: beq         $t6, $zero, L_80097C6C
    if (ctx->r14 == 0) {
        // 0x80097C58: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097C6C;
    }
    // 0x80097C58: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097C5C: jal         0x8008D280
    // 0x80097C60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D280(rdram, ctx);
        goto after_1;
    // 0x80097C60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097C64: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097C68: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097C6C:
    // 0x80097C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097C74: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097C7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80097C80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097C84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80097C88: jal         0x800F424C
    // 0x80097C8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800F424C(rdram, ctx);
        goto after_0;
    // 0x80097C8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80097C90: bne         $v0, $zero, L_80097CA0
    if (ctx->r2 != 0) {
        // 0x80097C94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80097CA0;
    }
    // 0x80097C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097C98: b           L_80097D14
    // 0x80097C9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097D14;
    // 0x80097C9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097CA0:
    // 0x80097CA0: jal         0x80098024
    // 0x80097CA4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80098024(rdram, ctx);
        goto after_1;
    // 0x80097CA4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x80097CA8: beq         $v0, $zero, L_80097CB8
    if (ctx->r2 == 0) {
        // 0x80097CAC: nop
    
            goto L_80097CB8;
    }
    // 0x80097CAC: nop

    // 0x80097CB0: b           L_80097D14
    // 0x80097CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097D14;
    // 0x80097CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097CB8:
    // 0x80097CB8: jal         0x800F8004
    // 0x80097CBC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8004(rdram, ctx);
        goto after_2;
    // 0x80097CBC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_2:
    // 0x80097CC0: beq         $v0, $zero, L_80097CD0
    if (ctx->r2 == 0) {
        // 0x80097CC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80097CD0;
    }
    // 0x80097CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097CC8: b           L_80097D14
    // 0x80097CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097D14;
    // 0x80097CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097CD0:
    // 0x80097CD0: jal         0x80091E80
    // 0x80097CD4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80091E80(rdram, ctx);
        goto after_3;
    // 0x80097CD4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_3:
    // 0x80097CD8: bne         $v0, $zero, L_80097CE8
    if (ctx->r2 != 0) {
        // 0x80097CDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80097CE8;
    }
    // 0x80097CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097CE0: b           L_80097D14
    // 0x80097CE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097D14;
    // 0x80097CE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097CE8:
    // 0x80097CE8: jal         0x80091A94
    // 0x80097CEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091A94(rdram, ctx);
        goto after_4;
    // 0x80097CEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80097CF0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097CF4: beq         $t6, $zero, L_80097D14
    if (ctx->r14 == 0) {
        // 0x80097CF8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097D14;
    }
    // 0x80097CF8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80097D00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80097D04: jal         0x80091940
    // 0x80097D08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80091940(rdram, ctx);
        goto after_5;
    // 0x80097D08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80097D0C: slti        $t7, $v0, 0x9
    ctx->r15 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80097D10: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097D14:
    // 0x80097D14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097D18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80097D1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80097D20: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097D28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097D30: jal         0x800F424C
    // 0x80097D34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F424C(rdram, ctx);
        goto after_0;
    // 0x80097D34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80097D38: bne         $v0, $zero, L_80097D48
    if (ctx->r2 != 0) {
        // 0x80097D3C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80097D48;
    }
    // 0x80097D3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80097D40: b           L_80097D8C
    // 0x80097D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097D8C;
    // 0x80097D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097D48:
    // 0x80097D48: jal         0x80098024
    // 0x80097D4C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80098024(rdram, ctx);
        goto after_1;
    // 0x80097D4C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x80097D50: beq         $v0, $zero, L_80097D60
    if (ctx->r2 == 0) {
        // 0x80097D54: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80097D60;
    }
    // 0x80097D54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80097D58: b           L_80097D8C
    // 0x80097D5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80097D8C;
    // 0x80097D5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80097D60:
    // 0x80097D60: jal         0x80091A94
    // 0x80097D64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091A94(rdram, ctx);
        goto after_2;
    // 0x80097D64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80097D68: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097D6C: beq         $t6, $zero, L_80097D8C
    if (ctx->r14 == 0) {
        // 0x80097D70: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097D8C;
    }
    // 0x80097D70: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097D74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80097D78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80097D7C: jal         0x80091940
    // 0x80097D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80091940(rdram, ctx);
        goto after_3;
    // 0x80097D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80097D84: slti        $t7, $v0, 0x7
    ctx->r15 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x80097D88: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097D8C:
    // 0x80097D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097D94: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097DA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097DA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097DA8: jal         0x80091A58
    // 0x80097DAC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097DAC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80097DB0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097DB4: beq         $t6, $zero, L_80097DE4
    if (ctx->r14 == 0) {
        // 0x80097DB8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097DE4;
    }
    // 0x80097DB8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097DBC: jal         0x8008E39C
    // 0x80097DC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E39C(rdram, ctx);
        goto after_1;
    // 0x80097DC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097DC4: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80097DC8: beq         $t7, $zero, L_80097DE4
    if (ctx->r15 == 0) {
        // 0x80097DCC: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80097DE4;
    }
    // 0x80097DCC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80097DD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80097DD4: jal         0x80095748
    // 0x80097DD8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_80095748(rdram, ctx);
        goto after_2;
    // 0x80097DD8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_2:
    // 0x80097DDC: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097DE0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80097DE4:
    // 0x80097DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097DEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097E00: jal         0x80091A58
    // 0x80097E04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097E04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80097E08: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097E0C: beq         $t6, $zero, L_80097E24
    if (ctx->r14 == 0) {
        // 0x80097E10: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097E24;
    }
    // 0x80097E10: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097E14: jal         0x8008D304
    // 0x80097E18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D304(rdram, ctx);
        goto after_1;
    // 0x80097E18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097E1C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097E20: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097E24:
    // 0x80097E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097E28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097E2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097E3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097E40: jal         0x80091A58
    // 0x80097E44: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097E44: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80097E48: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097E4C: beq         $t6, $zero, L_80097E64
    if (ctx->r14 == 0) {
        // 0x80097E50: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097E64;
    }
    // 0x80097E50: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097E54: jal         0x8008D370
    // 0x80097E58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D370(rdram, ctx);
        goto after_1;
    // 0x80097E58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097E5C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097E60: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097E64:
    // 0x80097E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097E6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097E78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097E7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097E80: jal         0x800919F4
    // 0x80097E84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_0;
    // 0x80097E84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80097E88: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097E8C: beq         $t6, $zero, L_80097EB8
    if (ctx->r14 == 0) {
        // 0x80097E90: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097EB8;
    }
    // 0x80097E90: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097E94: jal         0x800C6E38
    // 0x80097E98: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_800C6E38(rdram, ctx);
        goto after_1;
    // 0x80097E98: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_1:
    // 0x80097E9C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097EA0: beq         $t7, $zero, L_80097EB8
    if (ctx->r15 == 0) {
        // 0x80097EA4: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80097EB8;
    }
    // 0x80097EA4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80097EA8: jal         0x8008E39C
    // 0x80097EAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E39C(rdram, ctx);
        goto after_2;
    // 0x80097EAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80097EB0: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80097EB4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80097EB8:
    // 0x80097EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097EC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097ED0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097ED4: jal         0x80091A58
    // 0x80097ED8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097ED8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80097EDC: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097EE0: beq         $t6, $zero, L_80097EF8
    if (ctx->r14 == 0) {
        // 0x80097EE4: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097EF8;
    }
    // 0x80097EE4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097EE8: jal         0x8008D568
    // 0x80097EEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D568(rdram, ctx);
        goto after_1;
    // 0x80097EEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097EF0: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097EF4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097EF8:
    // 0x80097EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097F00: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097F10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097F14: jal         0x80091A58
    // 0x80097F18: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097F18: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80097F1C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097F20: beq         $t6, $zero, L_80097F38
    if (ctx->r14 == 0) {
        // 0x80097F24: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80097F38;
    }
    // 0x80097F24: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097F28: jal         0x8008D5C4
    // 0x80097F2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D5C4(rdram, ctx);
        goto after_1;
    // 0x80097F2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80097F30: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097F34: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80097F38:
    // 0x80097F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097F40: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097F48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097F50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097F54: jal         0x80091A58
    // 0x80097F58: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097F58: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80097F5C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097F60: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097F64: beq         $t6, $zero, L_80097FA8
    if (ctx->r14 == 0) {
        // 0x80097F68: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80097FA8;
    }
    // 0x80097F68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80097F6C: lw          $t7, 0xA4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA4);
    // 0x80097F70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80097F74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80097F78: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80097F7C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80097F80: nop

    // 0x80097F84: bc1f        L_80097F90
    if (!c1cs) {
        // 0x80097F88: nop
    
            goto L_80097F90;
    }
    // 0x80097F88: nop

    // 0x80097F8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80097F90:
    // 0x80097F90: beql        $v0, $zero, L_80097FAC
    if (ctx->r2 == 0) {
        // 0x80097F94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80097FAC;
    }
    goto skip_0;
    // 0x80097F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80097F98: jal         0x8008D214
    // 0x80097F9C: nop

    func_8008D214(rdram, ctx);
        goto after_1;
    // 0x80097F9C: nop

    after_1:
    // 0x80097FA0: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097FA4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80097FA8:
    // 0x80097FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80097FAC:
    // 0x80097FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097FB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80097FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80097FC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097FC4: jal         0x80091A58
    // 0x80097FC8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80097FC8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80097FCC: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097FD0: beq         $t6, $zero, L_80098014
    if (ctx->r14 == 0) {
        // 0x80097FD4: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80098014;
    }
    // 0x80097FD4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80097FD8: jal         0x800C6E38
    // 0x80097FDC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_800C6E38(rdram, ctx);
        goto after_1;
    // 0x80097FDC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_1:
    // 0x80097FE0: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097FE4: beq         $t7, $zero, L_80098014
    if (ctx->r15 == 0) {
        // 0x80097FE8: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80098014;
    }
    // 0x80097FE8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80097FEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80097FF0: jal         0x80095748
    // 0x80097FF4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80095748(rdram, ctx);
        goto after_2;
    // 0x80097FF4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x80097FF8: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097FFC: beq         $t8, $zero, L_80098014
    if (ctx->r24 == 0) {
        // 0x80098000: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_80098014;
    }
    // 0x80098000: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80098004: jal         0x8008E39C
    // 0x80098008: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E39C(rdram, ctx);
        goto after_3;
    // 0x80098008: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8009800C: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80098010: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80098014:
    // 0x80098014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80098018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009801C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098024: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x80098028: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8009802C: sllv        $t9, $t8, $a1
    ctx->r25 = S32(ctx->r24 << (ctx->r5 & 31));
    // 0x80098030: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80098034: jr          $ra
    // 0x80098038: and         $v0, $t7, $t9
    ctx->r2 = ctx->r15 & ctx->r25;
    return;
    // 0x80098038: and         $v0, $t7, $t9
    ctx->r2 = ctx->r15 & ctx->r25;
;}
RECOMP_FUNC void func_8009803C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009803C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80098040: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098044: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80098048: jal         0x80091A58
    // 0x8009804C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x8009804C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80098050: beql        $v0, $zero, L_8009808C
    if (ctx->r2 == 0) {
        // 0x80098054: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8009808C;
    }
    goto skip_0;
    // 0x80098054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80098058: jal         0x8008D850
    // 0x8009805C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008D850(rdram, ctx);
        goto after_1;
    // 0x8009805C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80098060: beq         $v0, $zero, L_80098088
    if (ctx->r2 == 0) {
        // 0x80098064: addiu       $a0, $sp, 0x24
        ctx->r4 = ADD32(ctx->r29, 0X24);
            goto L_80098088;
    }
    // 0x80098064: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80098068: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8009806C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80098070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80098074: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80098078: jal         0x8008A690
    // 0x8009807C: addiu       $a3, $zero, 0x46
    ctx->r7 = ADD32(0, 0X46);
    _suinv_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x8009807C: addiu       $a3, $zero, 0x46
    ctx->r7 = ADD32(0, 0X46);
    after_2:
    // 0x80098080: b           L_8009808C
    // 0x80098084: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
        goto L_8009808C;
    // 0x80098084: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_80098088:
    // 0x80098088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009808C:
    // 0x8009808C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80098090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80098094: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009809C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009809C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800980A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800980A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800980A8: jal         0x80091A58
    // 0x800980AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x800980AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x800980B0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800980B4: beq         $t6, $zero, L_800980CC
    if (ctx->r14 == 0) {
        // 0x800980B8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800980CC;
    }
    // 0x800980B8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800980BC: jal         0x8008D8E4
    // 0x800980C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D8E4(rdram, ctx);
        goto after_1;
    // 0x800980C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800980C4: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800980C8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_800980CC:
    // 0x800980CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800980D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800980D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800980DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800980DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800980E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800980E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800980E8: jal         0x80091A58
    // 0x800980EC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x800980EC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_0:
    // 0x800980F0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800980F4: beq         $t6, $zero, L_8009810C
    if (ctx->r14 == 0) {
        // 0x800980F8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8009810C;
    }
    // 0x800980F8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800980FC: jal         0x8008D964
    // 0x80098100: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D964(rdram, ctx);
        goto after_1;
    // 0x80098100: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80098104: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80098108: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8009810C:
    // 0x8009810C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80098110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80098114: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009811C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009811C: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x80098120: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80098124: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80098128: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x8009812C: lw          $t7, 0xA4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA4);
    // 0x80098130: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x80098134: lw          $t8, 0xA4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XA4);
    // 0x80098138: jr          $ra
    // 0x8009813C: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    return;
    // 0x8009813C: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80098140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098140: beql        $a2, $zero, L_80098168
    if (ctx->r6 == 0) {
            // 0x80098144: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    static_3_80098168(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80098144: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    skip_0:
    // 0x80098148: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x8009814C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80098150: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x80098154: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80098158: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8009815C: jr          $ra
    // 0x80098160: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x80098160: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_80098164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098164: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
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
RECOMP_FUNC void func_80098188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098188: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8009818C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80098190: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x80098194: jr          $ra
    // 0x80098198: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x80098198: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009819C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009819C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800981A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800981A4: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x800981A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800981AC: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800981B0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800981B4: nop

    // 0x800981B8: bc1tl       L_800981F0
    if (c1cs) {
        // 0x800981BC: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_800981F0;
    }
    goto skip_0;
    // 0x800981BC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    skip_0:
    // 0x800981C0: jal         0x800D8FF8
    // 0x800981C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800981C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800981C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800981CC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800981D0: lw          $t7, 0xA4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA4);
    // 0x800981D4: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800981D8: jal         0x800F0E00
    // 0x800981DC: sub.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f0.fl;
    func_800F0E00(rdram, ctx);
        goto after_1;
    // 0x800981DC: sub.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f0.fl;
    after_1:
    // 0x800981E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800981E4: lw          $t8, 0xA4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XA4);
    // 0x800981E8: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x800981EC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_800981F0:
    // 0x800981F0: jal         0x80098140
    // 0x800981F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_2;
    // 0x800981F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800981F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800981FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80098200: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098210: jr          $ra
    // 0x80098214: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    return;
    // 0x80098214: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
;}
RECOMP_FUNC void func_80098218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098218: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8009821C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098220: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80098224: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80098228: jal         0x80092B80
    // 0x8009822C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_80092B80(rdram, ctx);
        goto after_0;
    // 0x8009822C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80098230: addiu       $at, $zero, 0x607
    ctx->r1 = ADD32(0, 0X607);
    // 0x80098234: beq         $v0, $at, L_8009825C
    if (ctx->r2 == ctx->r1) {
        // 0x80098238: addiu       $at, $zero, 0x608
        ctx->r1 = ADD32(0, 0X608);
            goto L_8009825C;
    }
    // 0x80098238: addiu       $at, $zero, 0x608
    ctx->r1 = ADD32(0, 0X608);
    // 0x8009823C: beq         $v0, $at, L_8009825C
    if (ctx->r2 == ctx->r1) {
        // 0x80098240: addiu       $at, $zero, 0x61C
        ctx->r1 = ADD32(0, 0X61C);
            goto L_8009825C;
    }
    // 0x80098240: addiu       $at, $zero, 0x61C
    ctx->r1 = ADD32(0, 0X61C);
    // 0x80098244: beq         $v0, $at, L_800983F4
    if (ctx->r2 == ctx->r1) {
        // 0x80098248: addiu       $at, $zero, 0x623
        ctx->r1 = ADD32(0, 0X623);
            goto L_800983F4;
    }
    // 0x80098248: addiu       $at, $zero, 0x623
    ctx->r1 = ADD32(0, 0X623);
    // 0x8009824C: beql        $v0, $at, L_800983F8
    if (ctx->r2 == ctx->r1) {
        // 0x80098250: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800983F8;
    }
    goto skip_0;
    // 0x80098250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80098254: b           L_800983F8
    // 0x80098258: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800983F8;
    // 0x80098258: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009825C:
    // 0x8009825C: lw          $v0, 0xAC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XAC);
    // 0x80098260: lbu         $t6, 0x28($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X28);
    // 0x80098264: beql        $t6, $zero, L_800982EC
    if (ctx->r14 == 0) {
        // 0x80098268: lbu         $t1, 0x2A($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0X2A);
            goto L_800982EC;
    }
    goto skip_1;
    // 0x80098268: lbu         $t1, 0x2A($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2A);
    skip_1:
    // 0x8009826C: jal         0x800EFD24
    // 0x80098270: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x80098270: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x80098274: lw          $t7, 0xAC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XAC);
    // 0x80098278: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8009827C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80098280: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80098284: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80098288: jal         0x800DFFDC
    // 0x8009828C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_800DFFDC(rdram, ctx);
        goto after_2;
    // 0x8009828C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80098290: lw          $t8, 0xAC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XAC);
    // 0x80098294: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80098298: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x8009829C: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800982A0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800982A4: jal         0x800DFFDC
    // 0x800982A8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    func_800DFFDC(rdram, ctx);
        goto after_3;
    // 0x800982A8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800982AC: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x800982B0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800982B4: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x800982B8: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800982BC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800982C0: jal         0x800DFFDC
    // 0x800982C4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_800DFFDC(rdram, ctx);
        goto after_4;
    // 0x800982C4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800982C8: lw          $t0, 0xAC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XAC);
    // 0x800982CC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800982D0: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x800982D4: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800982D8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800982DC: jal         0x800DFFDC
    // 0x800982E0: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    func_800DFFDC(rdram, ctx);
        goto after_5;
    // 0x800982E0: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800982E4: lw          $v0, 0xAC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XAC);
    // 0x800982E8: lbu         $t1, 0x2A($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2A);
L_800982EC:
    // 0x800982EC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800982F0: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x800982F4: beql        $t1, $zero, L_8009830C
    if (ctx->r9 == 0) {
        // 0x800982F8: lbu         $t2, 0x29($v0)
        ctx->r10 = MEM_BU(ctx->r2, 0X29);
            goto L_8009830C;
    }
    goto skip_2;
    // 0x800982F8: lbu         $t2, 0x29($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X29);
    skip_2:
    // 0x800982FC: jal         0x800DFFA0
    // 0x80098300: addiu       $a2, $v0, 0x1C
    ctx->r6 = ADD32(ctx->r2, 0X1C);
    func_800DFFA0(rdram, ctx);
        goto after_6;
    // 0x80098300: addiu       $a2, $v0, 0x1C
    ctx->r6 = ADD32(ctx->r2, 0X1C);
    after_6:
    // 0x80098304: lw          $v0, 0xAC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XAC);
    // 0x80098308: lbu         $t2, 0x29($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X29);
L_8009830C:
    // 0x8009830C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80098310: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80098314: beql        $t2, $zero, L_8009837C
    if (ctx->r10 == 0) {
        // 0x80098318: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8009837C;
    }
    goto skip_3;
    // 0x80098318: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_3:
    // 0x8009831C: jal         0x800DFF64
    // 0x80098320: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    func_800DFF64(rdram, ctx);
        goto after_7;
    // 0x80098320: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    after_7:
    // 0x80098324: lw          $v0, 0xAC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XAC);
    // 0x80098328: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8009832C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80098330: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x80098334: nop

    // 0x80098338: bc1fl       L_8009837C
    if (!c1cs) {
        // 0x8009833C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8009837C;
    }
    goto skip_4;
    // 0x8009833C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_4:
    // 0x80098340: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80098344: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80098348: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8009834C: nop

    // 0x80098350: bc1fl       L_8009837C
    if (!c1cs) {
        // 0x80098354: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8009837C;
    }
    goto skip_5;
    // 0x80098354: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_5:
    // 0x80098358: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009835C: nop

    // 0x80098360: c.eq.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl == ctx->f2.fl;
    // 0x80098364: nop

    // 0x80098368: bc1fl       L_8009837C
    if (!c1cs) {
        // 0x8009836C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8009837C;
    }
    goto skip_6;
    // 0x8009836C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_6:
    // 0x80098370: sb          $zero, 0x29($v0)
    MEM_B(0X29, ctx->r2) = 0;
    // 0x80098374: lw          $v0, 0xAC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XAC);
    // 0x80098378: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8009837C:
    // 0x8009837C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80098380: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x80098384: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80098388: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x8009838C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80098390: nop

    // 0x80098394: bc1tl       L_800983F8
    if (c1cs) {
        // 0x80098398: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800983F8;
    }
    goto skip_7;
    // 0x80098398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x8009839C: jal         0x800DFC20
    // 0x800983A0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800DFC20(rdram, ctx);
        goto after_8;
    // 0x800983A0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_8:
    // 0x800983A4: lw          $t3, 0xAC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XAC);
    // 0x800983A8: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800983AC: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800983B0: lwc1        $f0, 0x2C($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800983B4: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800983B8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800983BC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800983C0: nop

    // 0x800983C4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800983C8: nop

    // 0x800983CC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800983D0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800983D4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800983D8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800983DC: jal         0x800EFA4C
    // 0x800983E0: nop

    func_800EFA4C(rdram, ctx);
        goto after_9;
    // 0x800983E0: nop

    after_9:
    // 0x800983E4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800983E8: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x800983EC: jal         0x800DFFA0
    // 0x800983F0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_800DFFA0(rdram, ctx);
        goto after_10;
    // 0x800983F0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_10:
L_800983F4:
    // 0x800983F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800983F8:
    // 0x800983F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800983FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80098400: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098408: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009840C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80098410: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80098414: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80098418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009841C: jal         0x80098480
    // 0x80098420: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098480(rdram, ctx);
        goto after_0;
    // 0x80098420: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80098424: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80098428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009842C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80098430: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80098434: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80098438: jal         0x80098494
    // 0x8009843C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_80098494(rdram, ctx);
        goto after_1;
    // 0x8009843C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80098440: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80098444: addiu       $a1, $a1, 0x7E9C
    ctx->r5 = ADD32(ctx->r5, 0X7E9C);
    // 0x80098448: jal         0x800984F0
    // 0x8009844C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800984F0(rdram, ctx);
        goto after_2;
    // 0x8009844C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80098450: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80098454: addiu       $a1, $a1, 0x7E90
    ctx->r5 = ADD32(ctx->r5, 0X7E90);
    // 0x80098458: jal         0x800984CC
    // 0x8009845C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800984CC(rdram, ctx);
        goto after_3;
    // 0x8009845C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80098460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098464: jal         0x80098520
    // 0x80098468: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80098520(rdram, ctx);
        goto after_4;
    // 0x80098468: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x8009846C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80098470: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80098474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80098478: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098480: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x80098484: sb          $a1, 0x28($t6)
    MEM_B(0X28, ctx->r14) = ctx->r5;
    // 0x80098488: lw          $t7, 0xAC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XAC);
    // 0x8009848C: jr          $ra
    // 0x80098490: sb          $a2, 0x2A($t7)
    MEM_B(0X2A, ctx->r15) = ctx->r6;
    return;
    // 0x80098490: sb          $a2, 0x2A($t7)
    MEM_B(0X2A, ctx->r15) = ctx->r6;
;}
RECOMP_FUNC void func_80098494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098494: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80098498: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009849C: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x800984A0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800984A4: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x800984A8: lw          $t7, 0xAC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XAC);
    // 0x800984AC: swc1        $f14, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f14.u32l;
    // 0x800984B0: lw          $t8, 0xAC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XAC);
    // 0x800984B4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800984B8: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    // 0x800984BC: lw          $t9, 0xAC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XAC);
    // 0x800984C0: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800984C4: jr          $ra
    // 0x800984C8: swc1        $f6, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f6.u32l;
    return;
    // 0x800984C8: swc1        $f6, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_800984CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800984CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800984D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800984D4: lw          $a0, 0xAC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XAC);
    // 0x800984D8: jal         0x800EE7F8
    // 0x800984DC: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800984DC: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x800984E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800984E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800984E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800984F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800984F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800984F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800984F8: lw          $t7, 0xAC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XAC);
    // 0x800984FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80098500: sb          $t6, 0x29($t7)
    MEM_B(0X29, ctx->r15) = ctx->r14;
    // 0x80098504: lw          $a0, 0xAC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XAC);
    // 0x80098508: jal         0x800EE7F8
    // 0x8009850C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009850C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x80098510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80098514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80098518: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098520: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80098524: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x80098528: jr          $ra
    // 0x8009852C: swc1        $f12, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009852C: swc1        $f12, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80098530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098530: jr          $ra
    // 0x80098534: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    return;
    // 0x80098534: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
;}
RECOMP_FUNC void func_80098538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009853C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80098540: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80098544: lw          $a0, 0xE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE0);
    // 0x80098548: jal         0x800EFD24
    // 0x8009854C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x8009854C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80098550: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80098554: lw          $a0, 0xE0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XE0);
    // 0x80098558: jal         0x800EFD24
    // 0x8009855C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8009855C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
    // 0x80098560: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80098564: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80098568: lw          $t6, 0xE0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XE0);
    // 0x8009856C: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    // 0x80098570: lw          $t7, 0xE0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XE0);
    // 0x80098574: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
    // 0x80098578: lw          $t8, 0xE0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XE0);
    // 0x8009857C: sb          $zero, 0x2F($t8)
    MEM_B(0X2F, ctx->r24) = 0;
    // 0x80098580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80098584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80098588: jr          $ra
    return;
;}
